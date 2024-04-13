void __fastcall UserPresentListViewManager___cctor(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  ListViewSort_o *v10; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7

  if ( (byte_42E6A8A & 1) == 0 )
  {
    sub_B5D5C4(&ListViewSort_TypeInfo, v1, v2, v3);
    sub_B5D5C4(&UserPresentListViewManager_TypeInfo, v4, v5, v6);
    sub_B5D5C4(&StringLiteral_15259/*"UserPresent"*/, v7, v8, v9);
    byte_42E6A8A = 1;
  }
  v10 = (ListViewSort_o *)sub_B5D694(ListViewSort_TypeInfo);
  ListViewSort___ctor_34028932(v10, (System_String_o *)StringLiteral_15259/*"UserPresent"*/, 1, 0, 0LL);
  static_fields = (BattleServantConfConponent_o *)UserPresentListViewManager_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v10;
  sub_B5D560(static_fields, (System_Int32_array **)v10, v12, v13, v14, v15, v16, v17);
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
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
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
  __int64 v36; // x1
  UserPresentBoxWindow_o *m_parent; // x0
  System_Collections_Generic_IEnumerable_T__o *checkedIdList; // x22
  System_Collections_Generic_List_long__o *v39; // x21
  signed int max_length; // w8
  unsigned int v41; // w22
  Il2CppClass **v42; // x23
  Il2CppClass *v43; // x8
  UserPresentBoxEntity_o **v44; // x23
  Il2CppClass *v45; // t1
  UserPresentBoxEntity_o *v46; // x24
  UserPresentListViewItem_o *v47; // x23
  const MethodInfo *v48; // x3
  signed __int64 size; // x8
  struct System_Collections_Generic_List_long__o *v50; // x20
  unsigned __int64 v51; // x22
  const MethodInfo *v52; // x1
  __int64 v53; // x8
  unsigned __int64 v54; // x21
  UserPresentBoxEntity_o *v55; // x23
  UserPresentListViewItem_o *v56; // x22
  const MethodInfo *v57; // x3
  __int64 v58; // x0

  if ( (byte_42E6A75 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewItem__Add__, (_DWORD)presentList, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_long__Remove__, v6, v7, v8);
    sub_B5D5C4(&Method_System_Collections_Generic_List_long___ctor___68740392, v9, v10, v11);
    sub_B5D5C4(&Method_System_Collections_Generic_List_long__get_Count__, v12, v13, v14);
    sub_B5D5C4(&Method_System_Collections_Generic_List_long__get_Item__, v15, v16, v17);
    sub_B5D5C4(&System_Collections_Generic_List_long__TypeInfo, v18, v19, v20);
    sub_B5D5C4(&UserPresentListViewItem_TypeInfo, v21, v22, v23);
    byte_42E6A75 = 1;
  }
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
  this->fields.selectPresentData = 0LL;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields.selectPresentData, 0LL, v24, v25, v26, v27, v28, v29);
  this->fields.presentIds = 0LL;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields.presentIds, 0LL, v30, v31, v32, v33, v34, v35);
  m_parent = this->fields.m_parent;
  if ( !m_parent )
    goto LABEL_32;
  UserPresentBoxWindow__SetCheckedItemsButtonEnable(m_parent, 0, 0, 0LL);
  checkedIdList = (System_Collections_Generic_IEnumerable_T__o *)this->fields.checkedIdList;
  if ( checkedIdList )
  {
    v39 = (System_Collections_Generic_List_long__o *)sub_B5D694(System_Collections_Generic_List_long__TypeInfo);
    System_Collections_Generic_List_long____ctor_50621476(
      v39,
      checkedIdList,
      (const MethodInfo_3046C24 *)Method_System_Collections_Generic_List_long___ctor___68740392);
    if ( !presentList )
      goto LABEL_32;
    max_length = presentList->max_length;
    if ( max_length >= 1 )
    {
      v41 = 0;
      while ( v41 < max_length )
      {
        v42 = &presentList->obj.klass + (int)v41;
        v45 = v42[4];
        v44 = (UserPresentBoxEntity_o **)(v42 + 4);
        v43 = v45;
        if ( !v45 || !v39 )
          goto LABEL_32;
        m_parent = (UserPresentBoxWindow_o *)System_Collections_Generic_List_long___Remove(
                                               v39,
                                               (int64_t)v43->_1.namespaze,
                                               (const MethodInfo_3049104 *)Method_System_Collections_Generic_List_long__Remove__);
        if ( v41 >= presentList->max_length )
          goto LABEL_33;
        v46 = *v44;
        v47 = (UserPresentListViewItem_o *)sub_B5D694(UserPresentListViewItem_TypeInfo);
        UserPresentListViewItem___ctor(v47, v41, v46, v48);
        m_parent = (UserPresentBoxWindow_o *)this->fields.itemList;
        if ( !m_parent )
          goto LABEL_32;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)m_parent,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v47,
          (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
        max_length = presentList->max_length;
        if ( (int)++v41 >= max_length )
          goto LABEL_14;
      }
      goto LABEL_33;
    }
LABEL_14:
    if ( !v39 )
LABEL_32:
      sub_B5D69C(m_parent, v36);
    LODWORD(size) = v39->fields._size;
    v50 = this->fields.checkedIdList;
    if ( (int)size >= 1 )
    {
      v51 = 0LL;
      do
      {
        if ( v51 >= (unsigned int)size )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
        if ( !v50 )
          goto LABEL_32;
        m_parent = (UserPresentBoxWindow_o *)System_Collections_Generic_List_long___Remove(
                                               v50,
                                               v39->fields._items->m_Items[v51],
                                               (const MethodInfo_3049104 *)Method_System_Collections_Generic_List_long__Remove__);
        size = v39->fields._size;
        v50 = this->fields.checkedIdList;
      }
      while ( (__int64)++v51 < size );
    }
    if ( !v50 )
      goto LABEL_32;
    if ( v50->fields._size >= 1 )
    {
      m_parent = this->fields.m_parent;
      if ( !m_parent )
        goto LABEL_32;
      UserPresentBoxWindow__SetCheckedItemsButtonEnable(m_parent, 1, 1, 0LL);
      UserPresentListViewManager__updateCheckStatus(this, v52);
    }
  }
  else
  {
    if ( !presentList )
      goto LABEL_32;
    v53 = *(_QWORD *)&presentList->max_length;
    if ( (int)v53 >= 1 )
    {
      v54 = 0LL;
      while ( v54 < (unsigned int)v53 )
      {
        v55 = presentList->m_Items[v54];
        v56 = (UserPresentListViewItem_o *)sub_B5D694(UserPresentListViewItem_TypeInfo);
        UserPresentListViewItem___ctor(v56, v54, v55, v57);
        m_parent = (UserPresentBoxWindow_o *)this->fields.itemList;
        if ( !m_parent )
          goto LABEL_32;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)m_parent,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v56,
          (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
        LODWORD(v53) = presentList->max_length;
        if ( (__int64)++v54 >= (int)v53 )
          goto LABEL_31;
      }
LABEL_33:
      v58 = sub_B5D6C8(m_parent);
      sub_B5D668(v58, 0LL);
    }
  }
LABEL_31:
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
}


void __fastcall UserPresentListViewManager__DeleteContinueData(const MethodInfo *method)
{
  __int64 v1; // x1
  int v2; // w2
  __int64 v3; // x3
  UserPresentListViewManager_c *v4; // x0
  ListViewSort_o *sortInfo; // x0

  if ( (byte_42E6A70 & 1) == 0 )
  {
    sub_B5D5C4(&UserPresentListViewManager_TypeInfo, v1, v2, v3);
    byte_42E6A70 = 1;
  }
  v4 = UserPresentListViewManager_TypeInfo;
  if ( (BYTE3(UserPresentListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UserPresentListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserPresentListViewManager_TypeInfo);
    v4 = UserPresentListViewManager_TypeInfo;
  }
  sortInfo = v4->static_fields->sortInfo;
  if ( !sortInfo )
    sub_B5D69C(0LL, v1);
  ListViewSort__DeleteContinueData(sortInfo, 0LL);
}


void __fastcall UserPresentListViewManager__DestroyList(UserPresentListViewManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  ListViewSort_o *sort; // x0

  ListViewManager__DestroyList((ListViewManager_o *)this, 0LL);
  sort = this->fields.sort;
  if ( !sort )
    sub_B5D69C(0LL, v3);
  ListViewSort__Save(sort, 0LL);
}


void __fastcall UserPresentListViewManager__DlgForExpiredPresent(
        UserPresentListViewManager_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  CommonUI_o *Instance; // x20
  System_String_o *v18; // x21
  System_Action_o *v19; // x22
  __int64 v20; // x0
  __int64 v21; // x1

  if ( (byte_42E6A89 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v8, v9, v10);
    sub_B5D5C4(&Method_UserPresentListViewManager__DlgForExpiredPresent_b__69_0__, v11, v12, v13);
    sub_B5D5C4(&StringLiteral_10624/*"PRESENT_EXPIRED_ERROR_MESSAGE"*/, v14, v15, v16);
    byte_42E6A89 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v18 = LocalizationManager__Get((System_String_o *)StringLiteral_10624/*"PRESENT_EXPIRED_ERROR_MESSAGE"*/, 0LL);
  v19 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(
    v19,
    (Il2CppObject *)this,
    Method_UserPresentListViewManager__DlgForExpiredPresent_b__69_0__,
    0LL);
  if ( !Instance )
    sub_B5D69C(v20, v21);
  CommonUI__OpenNotificationDialog(Instance, 0LL, v18, v19, -1, 0, 0, 0, 1, 0, 0, 0, 0LL, 0LL);
}


void __fastcall UserPresentListViewManager__EndNoticeDlg(
        UserPresentListViewManager_o *this,
        int32_t scene,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  UserPresentBoxErrorDialog_o *dialog; // x21
  System_Action_ShopRootConstants_State__o *v16; // x22
  CommonUI_o *Instance; // x0
  __int64 v18; // x1
  UserPresentListViewManager_ReceiveCallbackFunc_o *receivecCallbackFunc; // x0

  if ( (byte_42E6A84 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Action_SceneList_Type___ctor__, scene, (_DWORD)method, v3);
    sub_B5D5C4(&System_Action_SceneList_Type__TypeInfo, v6, v7, v8);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v9, v10, v11);
    sub_B5D5C4(&Method_UserPresentListViewManager_EndNoticeDlg__, v12, v13, v14);
    byte_42E6A84 = 1;
  }
  dialog = this->fields.dialog;
  v16 = (System_Action_ShopRootConstants_State__o *)sub_B5D694(System_Action_SceneList_Type__TypeInfo);
  System_Action_ShopRootConstants_State____ctor(
    v16,
    (Il2CppObject *)this,
    Method_UserPresentListViewManager_EndNoticeDlg__,
    (const MethodInfo_258A064 *)Method_System_Action_SceneList_Type___ctor__);
  if ( !dialog )
    goto LABEL_14;
  UserPresentBoxErrorDialog__remove_OnErrorDialogClosed(dialog, (System_Action_SceneList_Type__o *)v16, 0LL);
  if ( scene == -1 )
    goto LABEL_11;
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_14;
  if ( CommonUI__IsActive_MasterMission(Instance, 0LL) )
  {
    Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !Instance )
      goto LABEL_14;
    CommonUI__CloseMasterMission(Instance, 0LL);
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
LABEL_14:
    sub_B5D69C(Instance, v18);
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  int v32; // w1
  int v33; // w2
  __int64 v34; // x3
  int v35; // w1
  int v36; // w2
  __int64 v37; // x3
  int v38; // w1
  int v39; // w2
  __int64 v40; // x3
  int v41; // w1
  int v42; // w2
  __int64 v43; // x3
  int v44; // w1
  int v45; // w2
  __int64 v46; // x3
  int v47; // w1
  int v48; // w2
  __int64 v49; // x3
  int v50; // w1
  int v51; // w2
  __int64 v52; // x3
  int v53; // w1
  int v54; // w2
  __int64 v55; // x3
  int v56; // w1
  int v57; // w2
  __int64 v58; // x3
  int v59; // w1
  int v60; // w2
  __int64 v61; // x3
  int v62; // w1
  int v63; // w2
  __int64 v64; // x3
  struct System_Collections_Generic_List_ListViewItem__o *presentAllSelectedList; // x0
  System_Collections_Generic_List_RegexCharClass_SingleRange__o **p_presentAllSelectedList; // x19
  System_Collections_Generic_IEnumerable_T__o *itemList; // x21
  System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *v68; // x22
  System_String_array **v69; // x2
  System_String_array **v70; // x3
  System_Boolean_array **v71; // x4
  System_Int32_array **v72; // x5
  System_Int32_array *v73; // x6
  System_Int32_array *v74; // x7
  const MethodInfo *v75; // x1
  struct System_Collections_Generic_List_ListViewItem__o *v76; // x20
  void *appended; // x0
  struct UserPresentListViewManager___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__60_0; // x21
  Il2CppObject *v80; // x22
  struct UserPresentListViewManager___c_StaticFields *v81; // x0
  System_String_array **v82; // x2
  System_String_array **v83; // x3
  System_Boolean_array **v84; // x4
  System_Int32_array **v85; // x5
  System_Int32_array *v86; // x6
  System_Int32_array *v87; // x7
  System_Collections_Generic_List_RegexCharClass_SingleRange__o *v88; // x20
  struct UserPresentListViewManager___c_StaticFields *v89; // x8
  System_Predicate_peRenderTexture_ChangeLayerObject__o *_9__60_1; // x21
  Il2CppObject *v91; // x22
  struct UserPresentListViewManager___c_StaticFields *v92; // x0
  System_String_array **v93; // x2
  System_String_array **v94; // x3
  System_Boolean_array **v95; // x4
  System_Int32_array **v96; // x5
  System_Int32_array *v97; // x6
  System_Int32_array *v98; // x7
  System_Collections_Generic_List_RegexCharClass_SingleRange__o *v99; // x20
  int size; // w8
  struct UserPresentListViewManager___c_StaticFields *v101; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__60_2; // x21
  Il2CppObject *v103; // x22
  struct UserPresentListViewManager___c_StaticFields *v104; // x0
  System_String_array **v105; // x2
  System_String_array **v106; // x3
  System_Boolean_array **v107; // x4
  System_Int32_array **v108; // x5
  System_Int32_array *v109; // x6
  System_Int32_array *v110; // x7
  System_Text_StringBuilder_o *v111; // x20
  signed __int64 v112; // x23
  unsigned __int64 v113; // x24
  System_Collections_Generic_List_RegexCharClass_SingleRange__o *v114; // x21
  System_Text_RegularExpressions_RegexCharClass_SingleRange_o *v115; // x8
  __int64 v116; // x11
  System_Text_RegularExpressions_RegexCharClass_SingleRange_o *v117; // x21
  System_String_o *v118; // x22

  if ( (byte_42E6A81 & 1) == 0 )
  {
    sub_B5D5C4(&BalanceConfig_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Comparison_ListViewItem___ctor__, v5, v6, v7);
    sub_B5D5C4(&System_Comparison_ListViewItem__TypeInfo, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewItem__Clear__, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewItem__RemoveAll__, v14, v15, v16);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewItem__RemoveRange__, v17, v18, v19);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewItem__Sort__, v20, v21, v22);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewItem___ctor___68741096, v23, v24, v25);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v26, v27, v28);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v29, v30, v31);
    sub_B5D5C4(&System_Collections_Generic_List_ListViewItem__TypeInfo, v32, v33, v34);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v35, v36, v37);
    sub_B5D5C4(&Method_System_Predicate_ListViewItem___ctor__, v38, v39, v40);
    sub_B5D5C4(&System_Predicate_ListViewItem__TypeInfo, v41, v42, v43);
    sub_B5D5C4(&System_Text_StringBuilder_TypeInfo, v44, v45, v46);
    sub_B5D5C4(&Method_UserPresentListViewManager___c__GetAllPresentStrings_b__60_0__, v47, v48, v49);
    sub_B5D5C4(&Method_UserPresentListViewManager___c__GetAllPresentStrings_b__60_1__, v50, v51, v52);
    sub_B5D5C4(&Method_UserPresentListViewManager___c__GetAllPresentStrings_b__60_2__, v53, v54, v55);
    sub_B5D5C4(&UserPresentListViewManager___c_TypeInfo, v56, v57, v58);
    sub_B5D5C4(&UserPresentListViewItem_TypeInfo, v59, v60, v61);
    sub_B5D5C4(&StringLiteral_10629/*"PRESENT_INFO"*/, v62, v63, v64);
    byte_42E6A81 = 1;
  }
  presentAllSelectedList = this->fields.presentAllSelectedList;
  p_presentAllSelectedList = (System_Collections_Generic_List_RegexCharClass_SingleRange__o **)&this->fields.presentAllSelectedList;
  if ( presentAllSelectedList )
    System_Collections_Generic_List_XWeaponTrail_Element___Clear(
      (System_Collections_Generic_List_XWeaponTrail_Element__o *)presentAllSelectedList,
      (const MethodInfo_30573C8 *)Method_System_Collections_Generic_List_ListViewItem__Clear__);
  itemList = (System_Collections_Generic_IEnumerable_T__o *)this->fields.itemList;
  v68 = (System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *)sub_B5D694(System_Collections_Generic_List_ListViewItem__TypeInfo);
  System_Collections_Generic_List_WarBoardAIRoute_RouteData____ctor(
    v68,
    itemList,
    (const MethodInfo_30564F4 *)Method_System_Collections_Generic_List_ListViewItem___ctor___68741096);
  this->fields.presentAllSelectedList = (struct System_Collections_Generic_List_ListViewItem__o *)v68;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.presentAllSelectedList,
    (System_Int32_array **)v68,
    v69,
    v70,
    v71,
    v72,
    v73,
    v74);
  v76 = this->fields.presentAllSelectedList;
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
    v80 = (Il2CppObject *)static_fields->__9;
    _9__60_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B5D694(System_Comparison_ListViewItem__TypeInfo);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__60_0,
      v80,
      Method_UserPresentListViewManager___c__GetAllPresentStrings_b__60_0__,
      (const MethodInfo_249B1FC *)Method_System_Comparison_ListViewItem___ctor__);
    v81 = UserPresentListViewManager___c_TypeInfo->static_fields;
    v81->__9__60_0 = (struct System_Comparison_ListViewItem__o *)_9__60_0;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v81->__9__60_0,
      (System_Int32_array **)_9__60_0,
      v82,
      v83,
      v84,
      v85,
      v86,
      v87);
  }
  if ( !v76 )
    goto LABEL_62;
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v76,
    (System_Comparison_T__o *)_9__60_0,
    (const MethodInfo_305909C *)Method_System_Collections_Generic_List_ListViewItem__Sort__);
  appended = UserPresentListViewManager___c_TypeInfo;
  v88 = *p_presentAllSelectedList;
  if ( (BYTE3(UserPresentListViewManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UserPresentListViewManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserPresentListViewManager___c_TypeInfo);
    appended = UserPresentListViewManager___c_TypeInfo;
  }
  v89 = (struct UserPresentListViewManager___c_StaticFields *)*((_QWORD *)appended + 23);
  _9__60_1 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)v89->__9__60_1;
  if ( !_9__60_1 )
  {
    if ( (*((_BYTE *)appended + 307) & 4) != 0 && !*((_DWORD *)appended + 56) )
    {
      j_il2cpp_runtime_class_init_0(appended);
      v89 = UserPresentListViewManager___c_TypeInfo->static_fields;
    }
    v91 = (Il2CppObject *)v89->__9;
    _9__60_1 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B5D694(System_Predicate_ListViewItem__TypeInfo);
    System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
      _9__60_1,
      v91,
      Method_UserPresentListViewManager___c__GetAllPresentStrings_b__60_1__,
      (const MethodInfo_2B9320C *)Method_System_Predicate_ListViewItem___ctor__);
    v92 = UserPresentListViewManager___c_TypeInfo->static_fields;
    v92->__9__60_1 = (struct System_Predicate_ListViewItem__o *)_9__60_1;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v92->__9__60_1,
      (System_Int32_array **)_9__60_1,
      v93,
      v94,
      v95,
      v96,
      v97,
      v98);
  }
  if ( !v88 )
    goto LABEL_62;
  System_Collections_Generic_List_ScrTerminalListTop_CaldeaFolderInfo___RemoveAll(
    (System_Collections_Generic_List_ScrTerminalListTop_CaldeaFolderInfo__o *)v88,
    (System_Predicate_T__o *)_9__60_1,
    (const MethodInfo_3058B10 *)Method_System_Collections_Generic_List_ListViewItem__RemoveAll__);
  appended = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    appended = BalanceConfig_TypeInfo;
  }
  v99 = *p_presentAllSelectedList;
  if ( !*p_presentAllSelectedList )
    goto LABEL_62;
  v75 = (const MethodInfo *)*(unsigned int *)(*((_QWORD *)appended + 23) + 116LL);
  size = v99->fields._size;
  if ( size > (int)v75 )
  {
    System_Collections_Generic_List_RegexCharClass_SingleRange___RemoveRange(
      *p_presentAllSelectedList,
      (int32_t)v75,
      size - (_DWORD)v75,
      (const MethodInfo_3058D54 *)Method_System_Collections_Generic_List_ListViewItem__RemoveRange__);
    v99 = *p_presentAllSelectedList;
  }
  appended = UserPresentListViewManager___c_TypeInfo;
  if ( (BYTE3(UserPresentListViewManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UserPresentListViewManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserPresentListViewManager___c_TypeInfo);
    appended = UserPresentListViewManager___c_TypeInfo;
  }
  v101 = (struct UserPresentListViewManager___c_StaticFields *)*((_QWORD *)appended + 23);
  _9__60_2 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)v101->__9__60_2;
  if ( !_9__60_2 )
  {
    if ( (*((_BYTE *)appended + 307) & 4) != 0 && !*((_DWORD *)appended + 56) )
    {
      j_il2cpp_runtime_class_init_0(appended);
      v101 = UserPresentListViewManager___c_TypeInfo->static_fields;
    }
    v103 = (Il2CppObject *)v101->__9;
    _9__60_2 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B5D694(System_Comparison_ListViewItem__TypeInfo);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__60_2,
      v103,
      Method_UserPresentListViewManager___c__GetAllPresentStrings_b__60_2__,
      (const MethodInfo_249B1FC *)Method_System_Comparison_ListViewItem___ctor__);
    v104 = UserPresentListViewManager___c_TypeInfo->static_fields;
    v104->__9__60_2 = (struct System_Comparison_ListViewItem__o *)_9__60_2;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v104->__9__60_2,
      (System_Int32_array **)_9__60_2,
      v105,
      v106,
      v107,
      v108,
      v109,
      v110);
  }
  if ( !v99 )
    goto LABEL_62;
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v99,
    (System_Comparison_T__o *)_9__60_2,
    (const MethodInfo_305909C *)Method_System_Collections_Generic_List_ListViewItem__Sort__);
  v111 = (System_Text_StringBuilder_o *)sub_B5D694(System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor(v111, 0LL);
  if ( !*p_presentAllSelectedList )
    goto LABEL_62;
  v112 = (*p_presentAllSelectedList)->fields._size;
  if ( (int)v112 >= 1 )
  {
    v113 = 0LL;
    while ( 1 )
    {
      if ( v113 )
      {
        if ( !v111 )
          break;
        appended = System_Text_StringBuilder__Append_42956988(v111, 0xAu, 0LL);
      }
      v114 = *p_presentAllSelectedList;
      if ( !*p_presentAllSelectedList )
        break;
      if ( v113 >= (unsigned int)v114->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
      v115 = v114->fields._items->m_Items[v113];
      if ( v115
        && (v116 = *(&UserPresentListViewItem_TypeInfo->_2.bitflags2 + 1),
            *(&v115->klass->_2.bitflags2 + 1) >= (unsigned int)v116) )
      {
        v117 = (UserPresentListViewItem_c *)v115->klass->_2.typeHierarchy[v116 - 1] == UserPresentListViewItem_TypeInfo
             ? v114->fields._items->m_Items[v113]
             : 0LL;
      }
      else
      {
        v117 = 0LL;
      }
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      appended = LocalizationManager__Get((System_String_o *)StringLiteral_10629/*"PRESENT_INFO"*/, 0LL);
      if ( !v117 )
        break;
      v118 = (System_String_o *)appended;
      appended = UserPresentListViewItem__get_NameText((UserPresentListViewItem_o *)v117, v75);
      if ( !v111 )
        break;
      appended = System_Text_StringBuilder__AppendFormat_42960296(
                   v111,
                   v118,
                   (Il2CppObject *)appended,
                   *(Il2CppObject **)&v117[7].fields._first,
                   0LL);
      if ( (__int64)++v113 >= v112 )
        return (System_String_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v111->klass->vtable._3_ToString.method)(
                                    v111,
                                    v111->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
    }
LABEL_62:
    sub_B5D69C(appended, v75);
  }
  if ( !v111 )
    goto LABEL_62;
  return (System_String_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v111->klass->vtable._3_ToString.method)(
                              v111,
                              v111->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
}


UserPresentListViewItem_o *__fastcall UserPresentListViewManager__GetItem(
        UserPresentListViewManager_o *this,
        int32_t index,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x20
  ListViewItem_o *v10; // x8
  __int64 v11; // x11

  if ( (byte_42E6A76 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, index, (_DWORD)method, v3);
    sub_B5D5C4(&UserPresentListViewItem_TypeInfo, v6, v7, v8);
    byte_42E6A76 = 1;
  }
  itemList = this->fields.itemList;
  if ( !itemList )
    return 0LL;
  if ( itemList->fields._size <= (unsigned int)index )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
  v10 = itemList->fields._items->m_Items[index];
  if ( !v10 )
    return 0LL;
  v11 = *(&UserPresentListViewItem_TypeInfo->_2.bitflags2 + 1);
  if ( *(&v10->klass->_2.bitflags2 + 1) < (unsigned int)v11 )
    return 0LL;
  if ( (UserPresentListViewItem_c *)v10->klass->_2.typeHierarchy[v11 - 1] == UserPresentListViewItem_TypeInfo )
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

  if ( (byte_42E6A74 & 1) == 0 )
  {
    sub_B5D5C4(&UserPresentListViewManager_TypeInfo, (_DWORD)method, (_DWORD)v2, v3);
    byte_42E6A74 = 1;
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
  sub_B5D560((BattleServantConfConponent_o *)&this->fields.sort, (System_Int32_array **)v11, v2, v3, v4, v5, v6, v7);
  if ( !this->fields.sort || (this->fields.sort->fields.listViewKind = 4, (v13 = *p_sort) == 0LL) )
    sub_B5D69C(v13, v14);
  ListViewSort__Load(v13, 0LL);
  ((void (__fastcall *)(UserPresentListViewManager_o *, Il2CppMethodPointer))this->klass->vtable._5_SetSortButtonImage.method)(
    this,
    this->klass->vtable._6_GetDragRoot.methodPtr);
}


void __fastcall UserPresentListViewManager__InitLoad(const MethodInfo *method)
{
  __int64 v1; // x1
  int v2; // w2
  __int64 v3; // x3
  UserPresentListViewManager_c *v4; // x0
  ListViewSort_o *sortInfo; // x0

  if ( (byte_42E6A71 & 1) == 0 )
  {
    sub_B5D5C4(&UserPresentListViewManager_TypeInfo, v1, v2, v3);
    byte_42E6A71 = 1;
  }
  v4 = UserPresentListViewManager_TypeInfo;
  if ( (BYTE3(UserPresentListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UserPresentListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserPresentListViewManager_TypeInfo);
    v4 = UserPresentListViewManager_TypeInfo;
  }
  sortInfo = v4->static_fields->sortInfo;
  if ( !sortInfo )
    sub_B5D69C(0LL, v1);
  ListViewSort__InitLoad(sortInfo, 0LL);
}


void __fastcall UserPresentListViewManager__OnClickListCheck(
        UserPresentListViewManager_o *this,
        UserPresentListViewObject_o *obj,
        const MethodInfo *method)
{
  __int64 v3; // x3
  UserPresentListViewManager_o *v5; // x19
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  int v30; // w1
  int v31; // w2
  __int64 v32; // x3
  int v33; // w1
  int v34; // w2
  __int64 v35; // x3
  int v36; // w1
  int v37; // w2
  __int64 v38; // x3
  int v39; // w1
  int v40; // w2
  __int64 v41; // x3
  int v42; // w1
  int v43; // w2
  __int64 v44; // x3
  int v45; // w1
  int v46; // w2
  __int64 v47; // x3
  System_Int32_array **Item; // x0
  struct UserPresentListViewItem_o **p_selectItem; // x22
  System_String_array **v50; // x2
  System_String_array **v51; // x3
  System_Boolean_array **v52; // x4
  System_Int32_array **v53; // x5
  System_Int32_array *v54; // x6
  System_Int32_array *v55; // x7
  System_String_array **v56; // x2
  System_String_array **v57; // x3
  System_Boolean_array **v58; // x4
  System_Int32_array **v59; // x5
  System_Int32_array *v60; // x6
  System_Int32_array *v61; // x7
  struct UserPresentListViewItem_o *selectItem; // x8
  System_Int32_array **usrPresentEnt; // x1
  UserPresentListViewManager_o **p_selectPresentData; // x23
  UserPresentListViewManager_o **p_checkedIdList; // x21
  System_Collections_Generic_List_long__o *v66; // x24
  System_String_array **v67; // x2
  System_String_array **v68; // x3
  System_Boolean_array **v69; // x4
  System_Int32_array **v70; // x5
  System_Int32_array *v71; // x6
  System_Int32_array *v72; // x7
  struct UserPresentListViewItem_o *v73; // x8
  UserPresentListViewManager_o *v74; // x26
  int dropObjectList; // w25
  int32_t v76; // w24
  struct ItemEntity_o *itemEnt; // x8
  int64_t endedAt; // x25
  UserItemMaster_o *MasterData_WarQuestSelectionMaster; // x24
  BalanceConfig_c *v80; // x0
  int v81; // w24
  SoundManager_c *v82; // x0
  const MethodInfo *v83; // x1
  _QWORD *v84; // x0
  System_Reflection_MethodBase_o *v85; // x0
  int32_t v86; // w24
  BalanceConfig_c *v87; // x0
  struct BalanceConfig_StaticFields *static_fields; // x8
  BalanceConfig_c *v89; // x0
  int32_t v90; // w22
  const MethodInfo *v91; // x3
  struct System_Collections_Generic_List_long__o *checkedIdList; // x8
  ItemEntity_o *v93; // [xsp+0h] [xbp-50h] BYREF
  UserItemEntity_o *entity; // [xsp+8h] [xbp-48h] BYREF

  v5 = this;
  if ( (byte_42E6A7D & 1) == 0 )
  {
    sub_B5D5C4(&BalanceConfig_TypeInfo, (_DWORD)obj, (_DWORD)method, v3);
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserItemMaster___, v6, v7, v8);
    sub_B5D5C4(&Method_DataManager_GetMaster_ItemMaster___, v9, v10, v11);
    sub_B5D5C4(&DataManager_TypeInfo, v12, v13, v14);
    sub_B5D5C4(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__, v15, v16, v17);
    sub_B5D5C4(&Method_System_Collections_Generic_List_long__Add__, v18, v19, v20);
    sub_B5D5C4(&Method_System_Collections_Generic_List_long__RemoveAt__, v21, v22, v23);
    sub_B5D5C4(&Method_System_Collections_Generic_List_long___ctor__, v24, v25, v26);
    sub_B5D5C4(&Method_System_Collections_Generic_List_long__get_Count__, v27, v28, v29);
    sub_B5D5C4(&Method_System_Collections_Generic_List_long__get_Item__, v30, v31, v32);
    sub_B5D5C4(&System_Collections_Generic_List_long__TypeInfo, v33, v34, v35);
    sub_B5D5C4(&NetworkManager_TypeInfo, v36, v37, v38);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v39, v40, v41);
    sub_B5D5C4(&SoundManager_TypeInfo, v42, v43, v44);
    this = (UserPresentListViewManager_o *)sub_B5D5C4(
                                             &Method_UserPresentListViewManager_OnClickListCheck__,
                                             v45,
                                             v46,
                                             v47);
    byte_42E6A7D = 1;
  }
  v93 = 0LL;
  entity = 0LL;
  if ( !obj )
    goto LABEL_88;
  Item = (System_Int32_array **)UserPresentListViewObject__GetItem(obj, (const MethodInfo *)obj);
  p_selectItem = &v5->fields.selectItem;
  v5->fields.selectItem = (struct UserPresentListViewItem_o *)Item;
  sub_B5D560((BattleServantConfConponent_o *)&v5->fields.selectItem, Item, v50, v51, v52, v53, v54, v55);
  selectItem = v5->fields.selectItem;
  if ( !selectItem )
    goto LABEL_88;
  usrPresentEnt = (System_Int32_array **)selectItem->fields.usrPresentEnt;
  p_selectPresentData = (UserPresentListViewManager_o **)&v5->fields.selectPresentData;
  v5->fields.selectPresentData = (struct UserPresentBoxEntity_o *)usrPresentEnt;
  sub_B5D560((BattleServantConfConponent_o *)&v5->fields.selectPresentData, usrPresentEnt, v56, v57, v58, v59, v60, v61);
  p_checkedIdList = (UserPresentListViewManager_o **)&v5->fields.checkedIdList;
  if ( !v5->fields.checkedIdList )
  {
    v66 = (System_Collections_Generic_List_long__o *)sub_B5D694(System_Collections_Generic_List_long__TypeInfo);
    System_Collections_Generic_List_long____ctor(
      v66,
      (const MethodInfo_3046A2C *)Method_System_Collections_Generic_List_long___ctor__);
    *p_checkedIdList = (UserPresentListViewManager_o *)v66;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v5->fields.checkedIdList,
      (System_Int32_array **)v66,
      v67,
      v68,
      v69,
      v70,
      v71,
      v72);
  }
  v73 = *p_selectItem;
  if ( !*p_selectItem )
    goto LABEL_88;
  if ( v73->fields.presentId < 1 )
    return;
  v74 = *p_checkedIdList;
  if ( !*p_checkedIdList )
    goto LABEL_88;
  dropObjectList = (int)v74->fields.dropObjectList;
  if ( dropObjectList >= 1 )
  {
    v76 = 0;
    while ( 1 )
    {
      if ( LODWORD(v74->fields.dropObjectList) <= v76 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
      if ( *(_QWORD *)(*(_QWORD *)&v74->fields.m_CachedPtr + 8LL * v76 + 32) == v73->fields.presentId )
        break;
      if ( ++v76 >= dropObjectList )
        goto LABEL_18;
      v74 = *p_checkedIdList;
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
        v76,
        (const MethodInfo_3049440 *)Method_System_Collections_Generic_List_long__RemoveAt__);
      UserPresentListViewManager__updateCheckStatus(v5, v83);
      return;
    }
LABEL_88:
    sub_B5D69C(this, obj);
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
      this = (UserPresentListViewManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !this )
        goto LABEL_88;
      MasterData_WarQuestSelectionMaster = (UserItemMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                 (DataManager_o *)this,
                                                                 (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserItemMaster___);
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
        v80 = BalanceConfig_TypeInfo;
        v81 = LODWORD((*p_selectPresentData)->fields.scrollBar) + entity->fields.num;
        if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          v80 = BalanceConfig_TypeInfo;
        }
        if ( v81 > v80->static_fields->UserItemMax )
        {
          v82 = SoundManager_TypeInfo;
          if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) == 0 )
            goto LABEL_86;
          goto LABEL_84;
        }
        if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !DataManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        }
        this = (UserPresentListViewManager_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_ItemMaster___);
        if ( !*p_selectPresentData || !this )
          goto LABEL_88;
        this = (UserPresentListViewManager_o *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                                 (DataMasterBase_WarMaster__WarEntity__int__o *)this,
                                                 (WarEntity_o **)&v93,
                                                 HIDWORD((*p_selectPresentData)->fields.scrollView),
                                                 (const MethodInfo_23FAE6C *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          this = (UserPresentListViewManager_o *)v93;
          if ( !v93 )
            goto LABEL_88;
          this = (UserPresentListViewManager_o *)ItemEntity__GetMaxNum(v93, 0LL);
          if ( (int)this >= 1 )
          {
            this = (UserPresentListViewManager_o *)v93;
            if ( !v93 )
              goto LABEL_88;
            this = (UserPresentListViewManager_o *)ItemEntity__GetMaxNum(v93, 0LL);
            if ( v81 > (int)this )
            {
              v84 = Method_UserPresentListViewManager_OnClickListCheck__;
              if ( (*((_BYTE *)Method_UserPresentListViewManager_OnClickListCheck__ + 75) & 2) != 0 )
                v84 = (_QWORD *)sub_B5D5CC(Method_UserPresentListViewManager_OnClickListCheck__);
              v85 = (System_Reflection_MethodBase_o *)sub_B5D5A8(v84, v84[3]);
              OverwriteAssetSoundName__PlaySystemSe(v85, 1, 0LL);
              return;
            }
          }
        }
      }
      goto LABEL_61;
    }
LABEL_42:
    UserPresentListViewManager__DlgForExpiredPresent(v5, (const MethodInfo *)obj);
    return;
  }
LABEL_61:
  if ( !*p_checkedIdList )
    goto LABEL_88;
  v86 = (int32_t)(*p_checkedIdList)->fields.dropObjectList;
  v87 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v87 = BalanceConfig_TypeInfo;
  }
  static_fields = v87->static_fields;
  v82 = SoundManager_TypeInfo;
  if ( v86 >= static_fields->PresentBoxCheckMax )
  {
    if ( (WORD1(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) == 0 )
    {
LABEL_86:
      SoundManager__playSystemSe(1, 0LL);
      return;
    }
LABEL_84:
    if ( !v82->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(v82);
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
    (const MethodInfo_3047788 *)Method_System_Collections_Generic_List_long__Add__);
  if ( !*p_checkedIdList )
    goto LABEL_88;
  v89 = BalanceConfig_TypeInfo;
  v90 = (int32_t)(*p_checkedIdList)->fields.dropObjectList;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v89 = BalanceConfig_TypeInfo;
  }
  if ( v90 < v89->static_fields->PresentBoxCheckMax )
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
      v91);
    checkedIdList = v5->fields.checkedIdList;
    if ( !checkedIdList )
      goto LABEL_88;
    this = (UserPresentListViewManager_o *)v5->fields.m_parent;
    if ( !this )
      goto LABEL_88;
    UserPresentBoxWindow__SetSelectCount((UserPresentBoxWindow_o *)this, checkedIdList->fields._size, 0LL);
  }
  UserPresentListViewManager__updateCheckStatus(v5, (const MethodInfo *)obj);
  this = (UserPresentListViewManager_o *)v5->fields.m_parent;
  if ( !this )
    goto LABEL_88;
  UserPresentBoxWindow__SetCheckedItemsButtonEnable((UserPresentBoxWindow_o *)this, 1, 1, 0LL);
}


void __fastcall UserPresentListViewManager__OnClickListView(
        UserPresentListViewManager_o *this,
        UserPresentListViewObject_o *obj,
        const MethodInfo *method)
{
  __int64 v3; // x3
  UserPresentListViewObject_o *v4; // x20
  UserPresentListViewManager_o *v5; // x19
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  int v30; // w1
  int v31; // w2
  __int64 v32; // x3
  int v33; // w1
  int v34; // w2
  __int64 v35; // x3
  int v36; // w1
  int v37; // w2
  __int64 v38; // x3
  int v39; // w1
  int v40; // w2
  __int64 v41; // x3
  int v42; // w1
  int v43; // w2
  __int64 v44; // x3
  int v45; // w1
  int v46; // w2
  __int64 v47; // x3
  int v48; // w1
  int v49; // w2
  __int64 v50; // x3
  int v51; // w1
  int v52; // w2
  __int64 v53; // x3
  int v54; // w1
  int v55; // w2
  __int64 v56; // x3
  struct System_Collections_Generic_List_long__o *checkedIdList; // x8
  System_Int32_array **Item; // x0
  struct UserPresentListViewItem_o **p_selectItem; // x20
  System_String_array **v60; // x2
  System_String_array **v61; // x3
  System_Boolean_array **v62; // x4
  System_Int32_array **v63; // x5
  System_Int32_array *v64; // x6
  System_Int32_array *v65; // x7
  System_String_array **v66; // x2
  System_String_array **v67; // x3
  System_Boolean_array **v68; // x4
  System_Int32_array **v69; // x5
  System_Int32_array *v70; // x6
  System_Int32_array *v71; // x7
  struct UserPresentListViewItem_o *selectItem; // x8
  System_Int32_array **usrPresentEnt; // x1
  struct UserPresentBoxEntity_o **p_selectPresentData; // x21
  struct ItemEntity_o *itemEnt; // x8
  __int64 endedAt; // x23
  struct ItemEntity_o *v77; // x8
  const MethodInfo *v78; // x2
  struct ItemEntity_o *v79; // x8
  const MethodInfo *v80; // x1
  UserItemMaster_o *MasterData_WarQuestSelectionMaster; // x22
  BalanceConfig_c *v82; // x0
  int32_t v83; // w22
  const MethodInfo *v84; // x2
  UserPresentListViewManager___c_c *v85; // x0
  struct UserPresentListViewManager___c_StaticFields *static_fields; // x8
  UserPresentListViewManager_ReceiveCallbackFunc_o *_9__55_0; // x20
  Il2CppObject *v88; // x21
  System_String_array **v89; // x2
  System_String_array **v90; // x3
  System_Boolean_array **v91; // x4
  System_Int32_array **v92; // x5
  System_Int32_array *v93; // x6
  System_Int32_array *v94; // x7
  struct UserPresentListViewManager___c_StaticFields *v95; // x0
  BattleServantConfConponent_o *p__9__55_0; // x0
  _QWORD *v97; // x0
  System_Reflection_MethodBase_o *v98; // x0
  UserPresentListViewManager___c_c *v99; // x0
  struct UserPresentListViewManager___c_StaticFields *v100; // x8
  Il2CppObject *v101; // x21
  struct UserPresentListViewManager___c_StaticFields *v102; // x0
  System_Collections_Generic_List_long__o *v103; // x21
  UserPresentListViewManager_o **p_presentIds; // x20
  System_String_array **v105; // x2
  System_String_array **v106; // x3
  System_Boolean_array **v107; // x4
  System_Int32_array **v108; // x5
  System_Int32_array *v109; // x6
  System_Int32_array *v110; // x7
  struct UserPresentListViewItem_o *v111; // x8
  const MethodInfo *v112; // x2
  WarEntity_o *v113; // [xsp+8h] [xbp-38h] BYREF
  UserItemEntity_o *entity; // [xsp+18h] [xbp-28h] BYREF

  v4 = obj;
  v5 = this;
  if ( (byte_42E6A7C & 1) == 0 )
  {
    sub_B5D5C4(&BalanceConfig_TypeInfo, (_DWORD)obj, (_DWORD)method, v3);
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserItemMaster___, v6, v7, v8);
    sub_B5D5C4(&Method_DataManager_GetMaster_ItemMaster___, v9, v10, v11);
    sub_B5D5C4(&DataManager_TypeInfo, v12, v13, v14);
    sub_B5D5C4(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__, v15, v16, v17);
    sub_B5D5C4(&Method_System_Collections_Generic_List_long__Add__, v18, v19, v20);
    sub_B5D5C4(&Method_System_Collections_Generic_List_long__ToArray__, v21, v22, v23);
    sub_B5D5C4(&Method_System_Collections_Generic_List_long___ctor__, v24, v25, v26);
    sub_B5D5C4(&Method_System_Collections_Generic_List_long__get_Count__, v27, v28, v29);
    sub_B5D5C4(&System_Collections_Generic_List_long__TypeInfo, v30, v31, v32);
    sub_B5D5C4(&NetworkManager_TypeInfo, v33, v34, v35);
    sub_B5D5C4(&UserPresentListViewManager_ReceiveCallbackFunc_TypeInfo, v36, v37, v38);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v39, v40, v41);
    sub_B5D5C4(&SoundManager_TypeInfo, v42, v43, v44);
    sub_B5D5C4(&Method_UserPresentListViewManager___c__OnClickListView_b__55_0__, v45, v46, v47);
    sub_B5D5C4(&Method_UserPresentListViewManager___c__OnClickListView_b__55_1__, v48, v49, v50);
    sub_B5D5C4(&UserPresentListViewManager___c_TypeInfo, v51, v52, v53);
    this = (UserPresentListViewManager_o *)sub_B5D5C4(
                                             &Method_UserPresentListViewManager_OnClickListView__,
                                             v54,
                                             v55,
                                             v56);
    byte_42E6A7C = 1;
  }
  entity = 0LL;
  v113 = 0LL;
  if ( !v4 )
    goto LABEL_92;
  this = (UserPresentListViewManager_o *)UserPresentListViewObject__GetItem(v4, (const MethodInfo *)obj);
  if ( !this )
    goto LABEL_92;
  if ( *(&this->fields.execObjectExtraFlag + 2) )
    return;
  this = (UserPresentListViewManager_o *)UserPresentListViewObject__GetItem(v4, (const MethodInfo *)obj);
  if ( !this )
    goto LABEL_92;
  if ( BYTE4(this->fields.objectList) )
    return;
  checkedIdList = v5->fields.checkedIdList;
  if ( checkedIdList )
  {
    if ( checkedIdList->fields._size > 0 )
      return;
  }
  v5->fields.kind = 0;
  Item = (System_Int32_array **)UserPresentListViewObject__GetItem(v4, (const MethodInfo *)obj);
  p_selectItem = &v5->fields.selectItem;
  v5->fields.selectItem = (struct UserPresentListViewItem_o *)Item;
  sub_B5D560((BattleServantConfConponent_o *)&v5->fields.selectItem, Item, v60, v61, v62, v63, v64, v65);
  selectItem = v5->fields.selectItem;
  if ( !selectItem )
    goto LABEL_92;
  usrPresentEnt = (System_Int32_array **)selectItem->fields.usrPresentEnt;
  p_selectPresentData = &v5->fields.selectPresentData;
  v5->fields.selectPresentData = (struct UserPresentBoxEntity_o *)usrPresentEnt;
  sub_B5D560((BattleServantConfConponent_o *)&v5->fields.selectPresentData, usrPresentEnt, v66, v67, v68, v69, v70, v71);
  this = (UserPresentListViewManager_o *)v5->fields.selectPresentData;
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
      v77 = (*p_selectItem)->fields.itemEnt;
      if ( !v77 )
        goto LABEL_92;
      if ( v77->fields.type == 24 )
      {
        if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !SoundManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
        }
        SoundManager__playSystemSe(0, 0LL);
        if ( *p_selectItem )
        {
          v79 = (*p_selectItem)->fields.itemEnt;
          if ( v79 )
          {
            UserPresentListViewManager__OpenSelectableDialog(v5, v79->fields.id, v78);
            return;
          }
        }
        goto LABEL_92;
      }
      this = (UserPresentListViewManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !this )
        goto LABEL_92;
      MasterData_WarQuestSelectionMaster = (UserItemMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                 (DataManager_o *)this,
                                                                 (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserItemMaster___);
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
        v82 = BalanceConfig_TypeInfo;
        v83 = (*p_selectPresentData)->fields.num + entity->fields.num;
        if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          v82 = BalanceConfig_TypeInfo;
        }
        if ( v83 > v82->static_fields->UserItemMax )
        {
          if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !SoundManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
          }
          SoundManager__playSystemSe(0, 0LL);
          v85 = UserPresentListViewManager___c_TypeInfo;
          if ( (BYTE3(UserPresentListViewManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UserPresentListViewManager___c_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UserPresentListViewManager___c_TypeInfo);
            v85 = UserPresentListViewManager___c_TypeInfo;
          }
          static_fields = v85->static_fields;
          _9__55_0 = static_fields->__9__55_0;
          if ( _9__55_0 )
            goto LABEL_60;
          if ( (BYTE3(v85->vtable._0_Equals.methodPtr) & 4) != 0 && !v85->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v85);
            static_fields = UserPresentListViewManager___c_TypeInfo->static_fields;
          }
          v88 = (Il2CppObject *)static_fields->__9;
          _9__55_0 = (UserPresentListViewManager_ReceiveCallbackFunc_o *)sub_B5D694(UserPresentListViewManager_ReceiveCallbackFunc_TypeInfo);
          UserPresentListViewManager_ReceiveCallbackFunc___ctor(
            _9__55_0,
            v88,
            Method_UserPresentListViewManager___c__OnClickListView_b__55_0__,
            0LL);
          v95 = UserPresentListViewManager___c_TypeInfo->static_fields;
          v95->__9__55_0 = _9__55_0;
          p__9__55_0 = (BattleServantConfConponent_o *)&v95->__9__55_0;
LABEL_59:
          sub_B5D560(p__9__55_0, (System_Int32_array **)_9__55_0, v89, v90, v91, v92, v93, v94);
LABEL_60:
          UserPresentListViewManager__showErrorResultDlg(v5, _9__55_0, v84);
          return;
        }
        if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !DataManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        }
        this = (UserPresentListViewManager_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_ItemMaster___);
        if ( !*p_selectPresentData || !this )
          goto LABEL_92;
        if ( DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
               (DataMasterBase_WarMaster__WarEntity__int__o *)this,
               &v113,
               (*p_selectPresentData)->fields.objectId,
               (const MethodInfo_23FAE6C *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__) )
        {
          this = (UserPresentListViewManager_o *)v113;
          if ( !v113 )
            goto LABEL_92;
          if ( ItemEntity__GetMaxNum((ItemEntity_o *)v113, 0LL) >= 1 )
          {
            this = (UserPresentListViewManager_o *)v113;
            if ( !v113 )
              goto LABEL_92;
            if ( v83 > ItemEntity__GetMaxNum((ItemEntity_o *)v113, 0LL) )
            {
              v97 = Method_UserPresentListViewManager_OnClickListView__;
              if ( (*((_BYTE *)Method_UserPresentListViewManager_OnClickListView__ + 75) & 2) != 0 )
                v97 = (_QWORD *)sub_B5D5CC(Method_UserPresentListViewManager_OnClickListView__);
              v98 = (System_Reflection_MethodBase_o *)sub_B5D5A8(v97, v97[3]);
              OverwriteAssetSoundName__PlaySystemSe(v98, 0, 0LL);
              v99 = UserPresentListViewManager___c_TypeInfo;
              if ( (BYTE3(UserPresentListViewManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !UserPresentListViewManager___c_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(UserPresentListViewManager___c_TypeInfo);
                v99 = UserPresentListViewManager___c_TypeInfo;
              }
              v100 = v99->static_fields;
              _9__55_0 = v100->__9__55_1;
              if ( _9__55_0 )
                goto LABEL_60;
              if ( (BYTE3(v99->vtable._0_Equals.methodPtr) & 4) != 0 && !v99->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(v99);
                v100 = UserPresentListViewManager___c_TypeInfo->static_fields;
              }
              v101 = (Il2CppObject *)v100->__9;
              _9__55_0 = (UserPresentListViewManager_ReceiveCallbackFunc_o *)sub_B5D694(UserPresentListViewManager_ReceiveCallbackFunc_TypeInfo);
              UserPresentListViewManager_ReceiveCallbackFunc___ctor(
                _9__55_0,
                v101,
                Method_UserPresentListViewManager___c__OnClickListView_b__55_1__,
                0LL);
              v102 = UserPresentListViewManager___c_TypeInfo->static_fields;
              v102->__9__55_1 = _9__55_0;
              p__9__55_0 = (BattleServantConfConponent_o *)&v102->__9__55_1;
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
    UserPresentListViewManager__DlgForExpiredPresent(v5, v80);
    return;
  }
LABEL_81:
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(8, 0LL);
  if ( !*p_selectItem )
    goto LABEL_92;
  v5->fields._select_idx_k__BackingField = (*p_selectItem)->fields.index;
  v103 = (System_Collections_Generic_List_long__o *)sub_B5D694(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v103,
    (const MethodInfo_3046A2C *)Method_System_Collections_Generic_List_long___ctor__);
  p_presentIds = (UserPresentListViewManager_o **)&v5->fields.presentIds;
  v5->fields.presentIds = v103;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v5->fields.presentIds,
    (System_Int32_array **)v103,
    v105,
    v106,
    v107,
    v108,
    v109,
    v110);
  v111 = v5->fields.selectItem;
  if ( !v111 )
    goto LABEL_92;
  obj = (UserPresentListViewObject_o *)v111->fields.presentId;
  if ( (__int64)obj >= 1 )
  {
    this = *p_presentIds;
    if ( !*p_presentIds )
      goto LABEL_92;
    System_Collections_Generic_List_long___Add(
      (System_Collections_Generic_List_long__o *)this,
      (int64_t)obj,
      (const MethodInfo_3047788 *)Method_System_Collections_Generic_List_long__Add__);
  }
  this = *p_presentIds;
  if ( !*p_presentIds
    || (this = (UserPresentListViewManager_o *)System_Collections_Generic_List_long___ToArray(
                                                 (System_Collections_Generic_List_long__o *)this,
                                                 (const MethodInfo_3049894 *)Method_System_Collections_Generic_List_long__ToArray__),
        !v5->fields.m_parent) )
  {
LABEL_92:
    sub_B5D69C(this, obj);
  }
  UserPresentBoxWindow__receivePresent(v5->fields.m_parent, (System_Int64_array *)this, 0, 0, 0LL);
  UserPresentListViewManager__SetMode_21741664(v5, 2, v112);
}


void __fastcall UserPresentListViewManager__OnClickSortAscendingOrder(
        UserPresentListViewManager_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  __int64 v5; // x0
  __int64 v6; // x1
  struct ListViewSort_o *sort; // x8

  if ( (byte_42E6A85 & 1) == 0 )
  {
    sub_B5D5C4(&SoundManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E6A85 = 1;
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
      sub_B5D69C(v5, v6);
    sort->fields.isAscendingOrder ^= 1u;
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
  }
}


void __fastcall UserPresentListViewManager__OnMoveEnd(UserPresentListViewManager_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int32_t callbackCount; // w8
  bool v6; // vf
  int32_t v7; // w8
  UnityEngine_Object_o *scrollView; // x20
  __int64 v9; // x1
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  struct UIScrollView_o *v16; // x0
  System_Action_o *callbackFunc2; // x20

  if ( (byte_42E6A7B & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E6A7B = 1;
  }
  callbackCount = this->fields.callbackCount;
  v6 = __OFSUB__(callbackCount, 1);
  v7 = callbackCount - 1;
  if ( v7 < 0 == v6 )
  {
    this->fields.callbackCount = v7;
    if ( !v7 )
    {
      scrollView = (UnityEngine_Object_o *)this->fields.scrollView;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Inequality(scrollView, 0LL, 0LL) )
      {
        v16 = this->fields.scrollView;
        if ( !v16 )
          sub_B5D69C(0LL, v9);
        ((void (__fastcall *)(struct UIScrollView_o *, __int64, Il2CppMethodPointer))v16->klass->vtable._8_UpdateScrollbars.method)(
          v16,
          1LL,
          v16->klass->vtable._9_SetDragAmount.methodPtr);
      }
      callbackFunc2 = this->fields.callbackFunc2;
      this->fields.callbackFunc2 = 0LL;
      sub_B5D560((BattleServantConfConponent_o *)&this->fields.callbackFunc2, 0LL, v10, v11, v12, v13, v14, v15);
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
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  UserPresentBoxErrorDialog_o *dialog; // x0
  UserPresentBoxErrorDialog_o *v13; // x20
  System_Action_ShopRootConstants_State__o *v14; // x21

  if ( (byte_42E6A83 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Action_SceneList_Type___ctor__, (_DWORD)msg, (_DWORD)method, v3);
    sub_B5D5C4(&System_Action_SceneList_Type__TypeInfo, v6, v7, v8);
    sub_B5D5C4(&Method_UserPresentListViewManager_EndNoticeDlg__, v9, v10, v11);
    byte_42E6A83 = 1;
  }
  dialog = this->fields.dialog;
  if ( !dialog
    || (UserPresentBoxErrorDialog__Open(dialog, msg, 0LL),
        v13 = this->fields.dialog,
        v14 = (System_Action_ShopRootConstants_State__o *)sub_B5D694(System_Action_SceneList_Type__TypeInfo),
        System_Action_ShopRootConstants_State____ctor(
          v14,
          (Il2CppObject *)this,
          Method_UserPresentListViewManager_EndNoticeDlg__,
          (const MethodInfo_258A064 *)Method_System_Action_SceneList_Type___ctor__),
        !v13) )
  {
    sub_B5D69C(dialog, msg);
  }
  UserPresentBoxErrorDialog__add_OnErrorDialogClosed(v13, (System_Action_SceneList_Type__o *)v14, 0LL);
}


void __fastcall UserPresentListViewManager__OpenSelectableDialog(
        UserPresentListViewManager_o *this,
        int32_t ticketId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  int v30; // w1
  int v31; // w2
  __int64 v32; // x3
  int v33; // w1
  int v34; // w2
  __int64 v35; // x3
  int v36; // w1
  int v37; // w2
  __int64 v38; // x3
  int v39; // w1
  int v40; // w2
  __int64 v41; // x3
  __int64 v42; // x20
  void *presentTicketList; // x0
  __int64 v44; // x1
  struct UserPresentBoxWindow_o *m_parent; // x8
  System_Collections_Generic_IEnumerable_T__o *itemList; // x22
  System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *v47; // x23
  System_String_array **v48; // x2
  System_String_array **v49; // x3
  System_Boolean_array **v50; // x4
  System_Int32_array **v51; // x5
  System_Int32_array *v52; // x6
  System_Int32_array *v53; // x7
  System_String_array **v54; // x2
  System_String_array **v55; // x3
  System_Boolean_array **v56; // x4
  System_Int32_array **v57; // x5
  System_Int32_array *v58; // x6
  System_Int32_array *v59; // x7
  struct System_Collections_Generic_List_ListViewItem__o *v60; // x22
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v61; // x23
  struct System_Collections_Generic_List_ListViewItem__o *v62; // x21
  struct UserPresentListViewManager___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__67_1; // x22
  Il2CppObject *v65; // x23
  struct UserPresentListViewManager___c_StaticFields *v66; // x0
  System_String_array **v67; // x2
  System_String_array **v68; // x3
  System_Boolean_array **v69; // x4
  System_Int32_array **v70; // x5
  System_Int32_array *v71; // x6
  System_Int32_array *v72; // x7

  if ( (byte_42E6A87 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Comparison_ListViewItem___ctor__, ticketId, (_DWORD)method, v3);
    sub_B5D5C4(&System_Comparison_ListViewItem__TypeInfo, v6, v7, v8);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewItem__Clear__, v9, v10, v11);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewItem__RemoveAll__, v12, v13, v14);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewItem__Sort__, v15, v16, v17);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewItem___ctor___68741096, v18, v19, v20);
    sub_B5D5C4(&System_Collections_Generic_List_ListViewItem__TypeInfo, v21, v22, v23);
    sub_B5D5C4(&Method_System_Predicate_ListViewItem___ctor__, v24, v25, v26);
    sub_B5D5C4(&System_Predicate_ListViewItem__TypeInfo, v27, v28, v29);
    sub_B5D5C4(&Method_UserPresentListViewManager___c__OpenSelectableDialog_b__67_1__, v30, v31, v32);
    sub_B5D5C4(&Method_UserPresentListViewManager___c__DisplayClass67_0__OpenSelectableDialog_b__0__, v33, v34, v35);
    sub_B5D5C4(&UserPresentListViewManager___c__DisplayClass67_0_TypeInfo, v36, v37, v38);
    sub_B5D5C4(&UserPresentListViewManager___c_TypeInfo, v39, v40, v41);
    byte_42E6A87 = 1;
  }
  v42 = sub_B5D694(UserPresentListViewManager___c__DisplayClass67_0_TypeInfo);
  UserPresentListViewManager___c__DisplayClass67_0___ctor(
    (UserPresentListViewManager___c__DisplayClass67_0_o *)v42,
    0LL);
  if ( !v42 )
    goto LABEL_19;
  *(_DWORD *)(v42 + 16) = ticketId;
  presentTicketList = this->fields.presentTicketList;
  if ( presentTicketList )
    System_Collections_Generic_List_XWeaponTrail_Element___Clear(
      (System_Collections_Generic_List_XWeaponTrail_Element__o *)presentTicketList,
      (const MethodInfo_30573C8 *)Method_System_Collections_Generic_List_ListViewItem__Clear__);
  m_parent = this->fields.m_parent;
  if ( !m_parent )
    goto LABEL_19;
  m_parent->fields.mIsScrlResetPosition = 1;
  itemList = (System_Collections_Generic_IEnumerable_T__o *)this->fields.itemList;
  v47 = (System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *)sub_B5D694(System_Collections_Generic_List_ListViewItem__TypeInfo);
  System_Collections_Generic_List_WarBoardAIRoute_RouteData____ctor(
    v47,
    itemList,
    (const MethodInfo_30564F4 *)Method_System_Collections_Generic_List_ListViewItem___ctor___68741096);
  this->fields.presentTicketList = (struct System_Collections_Generic_List_ListViewItem__o *)v47;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.presentTicketList,
    (System_Int32_array **)v47,
    v48,
    v49,
    v50,
    v51,
    v52,
    v53);
  *(_DWORD *)(v42 + 20) = 0;
  *(_QWORD *)(v42 + 24) = 0LL;
  sub_B5D560((BattleServantConfConponent_o *)(v42 + 24), 0LL, v54, v55, v56, v57, v58, v59);
  v60 = this->fields.presentTicketList;
  v61 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B5D694(System_Predicate_ListViewItem__TypeInfo);
  System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
    v61,
    (Il2CppObject *)v42,
    Method_UserPresentListViewManager___c__DisplayClass67_0__OpenSelectableDialog_b__0__,
    (const MethodInfo_2B9320C *)Method_System_Predicate_ListViewItem___ctor__);
  if ( !v60 )
    goto LABEL_19;
  System_Collections_Generic_List_ScrTerminalListTop_CaldeaFolderInfo___RemoveAll(
    (System_Collections_Generic_List_ScrTerminalListTop_CaldeaFolderInfo__o *)v60,
    (System_Predicate_T__o *)v61,
    (const MethodInfo_3058B10 *)Method_System_Collections_Generic_List_ListViewItem__RemoveAll__);
  v62 = this->fields.presentTicketList;
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
    v65 = (Il2CppObject *)static_fields->__9;
    _9__67_1 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B5D694(System_Comparison_ListViewItem__TypeInfo);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__67_1,
      v65,
      Method_UserPresentListViewManager___c__OpenSelectableDialog_b__67_1__,
      (const MethodInfo_249B1FC *)Method_System_Comparison_ListViewItem___ctor__);
    v66 = UserPresentListViewManager___c_TypeInfo->static_fields;
    v66->__9__67_1 = (struct System_Comparison_ListViewItem__o *)_9__67_1;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v66->__9__67_1,
      (System_Int32_array **)_9__67_1,
      v67,
      v68,
      v69,
      v70,
      v71,
      v72);
  }
  if ( !v62
    || (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
          (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v62,
          (System_Comparison_T__o *)_9__67_1,
          (const MethodInfo_305909C *)Method_System_Collections_Generic_List_ListViewItem__Sort__),
        (presentTicketList = this->fields.selectDialog) == 0LL) )
  {
LABEL_19:
    sub_B5D69C(presentTicketList, v44);
  }
  PresentSelectableDlgComponent__Open(
    (PresentSelectableDlgComponent_o *)presentTicketList,
    *(ItemEntity_o **)(v42 + 24),
    *(_DWORD *)(v42 + 20),
    0LL);
}


void __fastcall UserPresentListViewManager__ReceiveMultiPresent(
        UserPresentListViewManager_o *this,
        int32_t kind,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  int v30; // w1
  int v31; // w2
  __int64 v32; // x3
  int v33; // w1
  int v34; // w2
  __int64 v35; // x3
  int v36; // w1
  int v37; // w2
  __int64 v38; // x3
  int v39; // w1
  int v40; // w2
  __int64 v41; // x3
  int v42; // w1
  int v43; // w2
  __int64 v44; // x3
  int v45; // w1
  int v46; // w2
  __int64 v47; // x3
  int v48; // w1
  int v49; // w2
  __int64 v50; // x3
  int v51; // w1
  int v52; // w2
  __int64 v53; // x3
  int v54; // w1
  int v55; // w2
  __int64 v56; // x3
  int v57; // w1
  int v58; // w2
  __int64 v59; // x3
  int v60; // w1
  int v61; // w2
  __int64 v62; // x3
  int v63; // w1
  int v64; // w2
  __int64 v65; // x3
  System_Collections_Generic_List_long__o *v66; // x21
  System_Collections_Generic_List_long__o **p_presentIds; // x20
  System_String_array **v68; // x2
  System_String_array **v69; // x3
  System_Boolean_array **v70; // x4
  System_Int32_array **v71; // x5
  System_Int32_array *v72; // x6
  System_Int32_array *v73; // x7
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v74; // x21
  __int64 v75; // x1
  __int64 v76; // x8
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *v77; // x0
  const MethodInfo_3056FC0 **v78; // x26
  _BOOL8 v79; // x0
  UserPresentListViewItem_c *v80; // x1
  UserPresentListViewItem_o *current; // x23
  __int64 v82; // x9
  System_Collections_Generic_List_long__o *checkedIdList; // x0
  UserPresentBoxEntity_o *usrPresentEnt; // x0
  _BOOL8 IsExpired; // x0
  const MethodInfo *v86; // x1
  struct UserPresentBoxEntity_o *v87; // x9
  struct ItemEntity_o *itemEnt; // x9
  const MethodInfo_3056FC0 **v89; // x20
  int64_t endedAt; // x26
  bool v91; // cc
  System_String_o *NameText; // x0
  const MethodInfo *v93; // x1
  System_String_o *v94; // x0
  System_String_o **p_expiredPresents_k__BackingField; // x22
  System_Int32_array **v96; // x1
  System_String_array **v97; // x2
  System_String_array **v98; // x3
  System_Boolean_array **v99; // x4
  System_Int32_array **v100; // x5
  System_Int32_array *v101; // x6
  System_Int32_array *v102; // x7
  System_Int32_array **v103; // x0
  System_String_array **v104; // x2
  System_String_array **v105; // x3
  System_Boolean_array **v106; // x4
  System_Int32_array **v107; // x5
  System_Int32_array *v108; // x6
  System_Int32_array *v109; // x7
  System_Collections_Generic_List_Enumerator_T__o v110; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v111; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_42E6A80 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__, kind, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v6, v7, v8);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v9, v10, v11);
    sub_B5D5C4(&Method_System_Collections_Generic_List_long__Add__, v12, v13, v14);
    sub_B5D5C4(&Method_System_Collections_Generic_List_string__Add__, v15, v16, v17);
    sub_B5D5C4(&Method_System_Collections_Generic_List_string__Contains__, v18, v19, v20);
    sub_B5D5C4(&Method_System_Collections_Generic_List_long__Contains__, v21, v22, v23);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v24, v25, v26);
    sub_B5D5C4(&Method_System_Collections_Generic_List_string__RemoveAt__, v27, v28, v29);
    sub_B5D5C4(&Method_System_Collections_Generic_List_long__ToArray__, v30, v31, v32);
    sub_B5D5C4(&Method_System_Collections_Generic_List_string___ctor__, v33, v34, v35);
    sub_B5D5C4(&Method_System_Collections_Generic_List_long___ctor__, v36, v37, v38);
    sub_B5D5C4(&Method_System_Collections_Generic_List_string__get_Count__, v39, v40, v41);
    sub_B5D5C4(&Method_System_Collections_Generic_List_string__get_Item__, v42, v43, v44);
    sub_B5D5C4(&System_Collections_Generic_List_string__TypeInfo, v45, v46, v47);
    sub_B5D5C4(&System_Collections_Generic_List_long__TypeInfo, v48, v49, v50);
    sub_B5D5C4(&NetworkManager_TypeInfo, v51, v52, v53);
    sub_B5D5C4(&UserPresentListViewItem_TypeInfo, v54, v55, v56);
    sub_B5D5C4(&StringLiteral_15824/*"["*/, v57, v58, v59);
    sub_B5D5C4(&StringLiteral_1/*""*/, v60, v61, v62);
    sub_B5D5C4(&StringLiteral_16061/*"]"*/, v63, v64, v65);
    byte_42E6A80 = 1;
  }
  memset(&v111, 0, sizeof(v111));
  this->fields.kind = kind;
  v66 = (System_Collections_Generic_List_long__o *)sub_B5D694(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v66,
    (const MethodInfo_3046A2C *)Method_System_Collections_Generic_List_long___ctor__);
  p_presentIds = &this->fields.presentIds;
  this->fields.presentIds = v66;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.presentIds,
    (System_Int32_array **)v66,
    v68,
    v69,
    v70,
    v71,
    v72,
    v73);
  v74 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v74,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_string___ctor__);
  v76 = 184LL;
  if ( kind == 1 )
    v76 = 424LL;
  v77 = *(System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o **)((char *)&this->klass + v76);
  if ( !v77 )
    goto LABEL_53;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v110,
    v77,
    (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  v78 = (const MethodInfo_3056FC0 **)&Method_System_Collections_Generic_List_string__Add__;
  v111 = v110;
  while ( 1 )
  {
    v79 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v111,
            (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    if ( !v79 )
      break;
    current = (UserPresentListViewItem_o *)v111.fields.current;
    if ( v111.fields.current )
    {
      v80 = UserPresentListViewItem_TypeInfo;
      v82 = *(&UserPresentListViewItem_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v111.fields.current->klass->_2.bitflags2 + 1) < (unsigned int)v82
        || (UserPresentListViewItem_c *)v111.fields.current->klass->_2.typeHierarchy[v82 - 1] != UserPresentListViewItem_TypeInfo )
      {
        usrPresentEnt = (UserPresentBoxEntity_o *)sub_B5D990(v111.fields.current);
LABEL_47:
        sub_B5D69C(usrPresentEnt, v80);
      }
    }
    switch ( kind )
    {
      case 1:
        if ( !v111.fields.current )
          sub_B5D69C(v79, v80);
        goto LABEL_19;
      case 2:
        if ( !v111.fields.current )
          sub_B5D69C(v79, v80);
        if ( !Gift__IsServant_28424960((int32_t)v111.fields.current[10].monitor, 0LL)
          && !Gift__IsCommandCode_28425356(current->fields.giftType, 0LL) )
        {
          goto LABEL_19;
        }
        break;
      case 3:
        if ( !v111.fields.current )
          sub_B5D69C(v79, v80);
        checkedIdList = this->fields.checkedIdList;
        if ( !checkedIdList )
          sub_B5D69C(0LL, v80);
        if ( System_Collections_Generic_List_long___Contains(
               checkedIdList,
               (int64_t)v111.fields.current[10].klass,
               (const MethodInfo_3047BDC *)Method_System_Collections_Generic_List_long__Contains__) )
        {
LABEL_19:
          usrPresentEnt = current->fields.usrPresentEnt;
          if ( !usrPresentEnt )
            goto LABEL_47;
          IsExpired = UserPresentBoxEntity__IsExpired(usrPresentEnt, 0, 0LL);
          v87 = current->fields.usrPresentEnt;
          if ( !v87 )
            sub_B5D69C(IsExpired, v86);
          if ( v87->fields.giftType == 2 )
          {
            itemEnt = current->fields.itemEnt;
            if ( !itemEnt )
              sub_B5D69C(IsExpired, v86);
            if ( itemEnt->fields.type != 24 )
            {
              if ( IsExpired )
                goto LABEL_30;
              v89 = v78;
              endedAt = itemEnt->fields.endedAt;
              if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !NetworkManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
              }
              v91 = endedAt <= NetworkManager__getTime(0LL);
              v78 = v89;
              p_presentIds = &this->fields.presentIds;
              if ( v91 )
                goto LABEL_30;
LABEL_38:
              if ( !*p_presentIds )
                sub_B5D69C(0LL, v86);
              System_Collections_Generic_List_long___Add(
                *p_presentIds,
                current->fields.presentId,
                (const MethodInfo_3047788 *)Method_System_Collections_Generic_List_long__Add__);
            }
          }
          else
          {
            if ( !IsExpired )
              goto LABEL_38;
LABEL_30:
            NameText = UserPresentListViewItem__get_NameText(current, v86);
            if ( !v74 )
              sub_B5D69C(NameText, NameText);
            if ( !System_Collections_Generic_List_WarBoardManager_TaskList___Contains(
                    (System_Collections_Generic_List_WarBoardManager_TaskList__o *)v74,
                    (WarBoardManager_TaskList_o *)NameText,
                    (const MethodInfo_3057410 *)Method_System_Collections_Generic_List_string__Contains__) )
            {
              v94 = UserPresentListViewItem__get_NameText(current, v93);
              System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                v74,
                (EventMissionProgressRequest_Argument_ProgressData_o *)v94,
                *v78);
            }
          }
        }
        break;
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v111,
    (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
  p_expiredPresents_k__BackingField = &this->fields._expiredPresents_k__BackingField;
  v96 = (System_Int32_array **)StringLiteral_1/*""*/;
  this->fields._expiredPresents_k__BackingField = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields._expiredPresents_k__BackingField,
    v96,
    v97,
    v98,
    v99,
    v100,
    v101,
    v102);
  if ( !v74 )
    goto LABEL_53;
  while ( v74->fields._size >= 1 )
  {
    v103 = (System_Int32_array **)System_String__Concat_44581200(
                                    *p_expiredPresents_k__BackingField,
                                    (System_String_o *)StringLiteral_15824/*"["*/,
                                    (System_String_o *)v74->fields._items->m_Items[0],
                                    (System_String_o *)StringLiteral_16061/*"]"*/,
                                    0LL);
    *p_expiredPresents_k__BackingField = (System_String_o *)v103;
    sub_B5D560(
      (BattleServantConfConponent_o *)&this->fields._expiredPresents_k__BackingField,
      v103,
      v104,
      v105,
      v106,
      v107,
      v108,
      v109);
    System_Collections_Generic_List_XWeaponTrail_Element___RemoveAt(
      (System_Collections_Generic_List_XWeaponTrail_Element__o *)v74,
      0,
      (const MethodInfo_3058CB0 *)Method_System_Collections_Generic_List_string__RemoveAt__);
  }
  v77 = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)*p_presentIds;
  if ( !*p_presentIds
    || (v77 = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)System_Collections_Generic_List_long___ToArray(
                                                                                               (System_Collections_Generic_List_long__o *)v77,
                                                                                               (const MethodInfo_3049894 *)Method_System_Collections_Generic_List_long__ToArray__),
        !this->fields.m_parent) )
  {
LABEL_53:
    sub_B5D69C(v77, v75);
  }
  UserPresentBoxWindow__receivePresent(this->fields.m_parent, (System_Int64_array *)v77, 0, 0, 0LL);
}


void __fastcall UserPresentListViewManager__RequestItemSelect(
        UserPresentListViewManager_o *this,
        ItemSelectEntity_o *selectItm,
        int32_t num,
        const MethodInfo *method)
{
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  int v22; // w1
  int v23; // w2
  __int64 v24; // x3
  int v25; // w1
  int v26; // w2
  __int64 v27; // x3
  int v28; // w1
  int v29; // w2
  __int64 v30; // x3
  int v31; // w1
  int v32; // w2
  __int64 v33; // x3
  System_Collections_Generic_List_long__o *v34; // x22
  int64_t sortValue0; // x0
  UserPresentListViewItem_c *v36; // x1
  struct System_Collections_Generic_List_ListViewItem__o *presentTicketList; // x19
  signed __int64 size; // x24
  int v39; // w25
  int v40; // w26
  unsigned __int64 v41; // x27
  ListViewItem_o *v42; // x19
  __int64 v43; // x10
  _QWORD *monitor; // x8
  int64_t v45; // x23
  int64_t v46; // x8
  int64_t sortValue1; // x1
  int v48; // w19
  UserPresentBoxWindow_o *m_parent; // x23
  const MethodInfo *v50; // x2
  struct System_Collections_Generic_List_ListViewItem__o *v51; // x19
  __int64 v52; // x9
  __int64 v53; // x8
  struct System_String_o *v54; // x0
  System_String_array **v55; // x2
  System_String_array **v56; // x3
  System_Boolean_array **v57; // x4
  System_Int32_array **v58; // x5
  System_Int32_array *v59; // x6
  System_Int32_array *v60; // x7
  UserPresentBoxWindow_o *v61; // x20
  UserPresentListViewManager_o *v62; // x0
  const MethodInfo *v63; // x1
  int32_t selectNum; // [xsp+4h] [xbp-5Ch]

  if ( (byte_42E6A88 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_long__Add__, (_DWORD)selectItm, num, method);
    sub_B5D5C4(&Method_System_Collections_Generic_List_long__ToArray__, v7, v8, v9);
    sub_B5D5C4(&Method_System_Collections_Generic_List_long___ctor__, v10, v11, v12);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v13, v14, v15);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v16, v17, v18);
    sub_B5D5C4(&System_Collections_Generic_List_long__TypeInfo, v19, v20, v21);
    sub_B5D5C4(&NetworkManager_TypeInfo, v22, v23, v24);
    sub_B5D5C4(&UserPresentListViewItem_TypeInfo, v25, v26, v27);
    sub_B5D5C4(&StringLiteral_15824/*"["*/, v28, v29, v30);
    sub_B5D5C4(&StringLiteral_16061/*"]"*/, v31, v32, v33);
    byte_42E6A88 = 1;
  }
  v34 = (System_Collections_Generic_List_long__o *)sub_B5D694(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v34,
    (const MethodInfo_3046A2C *)Method_System_Collections_Generic_List_long___ctor__);
  presentTicketList = this->fields.presentTicketList;
  if ( !presentTicketList || !selectItm )
    goto LABEL_25;
  size = presentTicketList->fields._size;
  selectNum = num;
  if ( (int)size < 1 || (v39 = selectItm->fields.requireNum * num, v39 < 1) )
  {
    if ( v34 )
    {
LABEL_27:
      m_parent = this->fields.m_parent;
      sortValue0 = (int64_t)System_Collections_Generic_List_long___ToArray(
                              v34,
                              (const MethodInfo_3049894 *)Method_System_Collections_Generic_List_long__ToArray__);
      if ( m_parent )
      {
        UserPresentBoxWindow__receivePresent(
          m_parent,
          (System_Int64_array *)sortValue0,
          selectItm->fields.idx,
          selectNum,
          0LL);
        UserPresentListViewManager__SetMode_21741664(this, 2, v50);
        return;
      }
    }
    goto LABEL_25;
  }
  v40 = 0;
  v41 = 0LL;
  while ( 1 )
  {
    if ( v41 >= (unsigned int)presentTicketList->fields._size )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
    v42 = presentTicketList->fields._items->m_Items[v41];
    if ( !v42 )
      goto LABEL_25;
    v43 = *(&UserPresentListViewItem_TypeInfo->_2.bitflags2 + 1);
    if ( *(&v42->klass->_2.bitflags2 + 1) < (unsigned int)v43 )
      goto LABEL_25;
    if ( (UserPresentListViewItem_c *)v42->klass->_2.typeHierarchy[v43 - 1] != UserPresentListViewItem_TypeInfo )
      goto LABEL_25;
    sortValue0 = v42[1].fields.sortValue0;
    if ( !sortValue0 )
      goto LABEL_25;
    sortValue0 = UserPresentBoxEntity__IsExpired((UserPresentBoxEntity_o *)sortValue0, 0, 0LL);
    if ( (sortValue0 & 1) != 0 )
      break;
    monitor = v42[1].monitor;
    if ( !monitor )
      goto LABEL_25;
    v45 = monitor[12];
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    sortValue0 = NetworkManager__getTime(0LL);
    if ( v45 <= sortValue0 )
      break;
    v46 = v42[1].fields.sortValue0;
    if ( !v46 || !v34 )
      goto LABEL_25;
    sortValue1 = v42[1].fields.sortValue1;
    v48 = *(_DWORD *)(v46 + 80);
    System_Collections_Generic_List_long___Add(
      v34,
      sortValue1,
      (const MethodInfo_3047788 *)Method_System_Collections_Generic_List_long__Add__);
    if ( (__int64)++v41 >= size )
      goto LABEL_27;
    v40 += v48;
    if ( v40 >= v39 )
      goto LABEL_27;
    presentTicketList = this->fields.presentTicketList;
    if ( !presentTicketList )
      goto LABEL_25;
  }
  v51 = this->fields.presentTicketList;
  if ( !v51 )
    goto LABEL_25;
  if ( !v51->fields._size )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
  sortValue0 = (int64_t)v51->fields._items->m_Items[0];
  if ( !sortValue0 )
    goto LABEL_25;
  v36 = UserPresentListViewItem_TypeInfo;
  v52 = *(&UserPresentListViewItem_TypeInfo->_2.bitflags2 + 1);
  if ( *(unsigned __int8 *)(*(_QWORD *)sortValue0 + 300LL) >= (unsigned int)v52
    && *(UserPresentListViewItem_c **)(*(_QWORD *)(*(_QWORD *)sortValue0 + 200LL) + 8 * v52 - 8) == UserPresentListViewItem_TypeInfo )
  {
    v53 = *(_QWORD *)(sortValue0 + 120);
    if ( v53 )
    {
      v54 = System_String__Concat_44580072(
              (System_String_o *)StringLiteral_15824/*"["*/,
              *(System_String_o **)(v53 + 24),
              (System_String_o *)StringLiteral_16061/*"]"*/,
              0LL);
      this->fields._expiredPresents_k__BackingField = v54;
      sub_B5D560(
        (BattleServantConfConponent_o *)&this->fields._expiredPresents_k__BackingField,
        (System_Int32_array **)v54,
        v55,
        v56,
        v57,
        v58,
        v59,
        v60);
      if ( v34 )
      {
        v61 = this->fields.m_parent;
        sortValue0 = (int64_t)System_Collections_Generic_List_long___ToArray(
                                v34,
                                (const MethodInfo_3049894 *)Method_System_Collections_Generic_List_long__ToArray__);
        if ( v61 )
        {
          UserPresentBoxWindow__receivePresent(v61, (System_Int64_array *)sortValue0, selectItm->fields.idx, 0, 0LL);
          return;
        }
      }
    }
LABEL_25:
    sub_B5D69C(sortValue0, v36);
  }
  v62 = (UserPresentListViewManager_o *)sub_B5D990(sortValue0);
  UserPresentListViewManager___ctor(v62, v63);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall UserPresentListViewManager__RequestListObject(
        UserPresentListViewManager_o *this,
        int32_t mode,
        float delay,
        const MethodInfo *method)
{
  __int64 v4; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *ObjectList; // x0
  __int64 v30; // x1
  int32_t size; // w8
  Il2CppObject *current; // x21
  System_Action_o *v33; // x22
  __int64 v34; // x0
  __int64 v35; // x1
  const MethodInfo *v36; // x3
  System_Collections_Generic_List_Enumerator_T__o v37; // [xsp+8h] [xbp-58h] BYREF
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  if ( (byte_42E6A79 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, mode, (_DWORD)method, v4);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_UserPresentListViewObject__Dispose__, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_UserPresentListViewObject__MoveNext__, v11, v12, v13);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_UserPresentListViewObject__get_Current__,
      v14,
      v15,
      v16);
    sub_B5D5C4(&Method_System_Collections_Generic_List_UserPresentListViewObject__GetEnumerator__, v17, v18, v19);
    sub_B5D5C4(&Method_System_Collections_Generic_List_UserPresentListViewObject__get_Count__, v20, v21, v22);
    sub_B5D5C4(&Method_UserPresentListViewManager_OnMoveEnd__, v23, v24, v25);
    sub_B5D5C4(&StringLiteral_10142/*"OnMoveEnd"*/, v26, v27, v28);
    byte_42E6A79 = 1;
  }
  memset(&v37, 0, sizeof(v37));
  ObjectList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)UserPresentListViewManager__get_ObjectList(
                                                                                                this,
                                                                                                *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_B5D69C(0LL, v30);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10142/*"OnMoveEnd"*/,
      delay,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v37,
      ObjectList,
      (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_UserPresentListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v37,
              (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_UserPresentListViewObject__MoveNext__) )
    {
      current = v37.fields.current;
      v33 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
      System_Action___ctor(v33, (Il2CppObject *)this, Method_UserPresentListViewManager_OnMoveEnd__, 0LL);
      if ( !current )
        sub_B5D69C(v34, v35);
      zero = UnityEngine_Vector3__get_zero(0LL);
      UserPresentListViewObject__Init(
        (UserPresentListViewObject_o *)current,
        mode,
        v33,
        zero.fields.x,
        *(UnityEngine_Vector3_o *)&zero.fields.y,
        v36);
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v37,
      (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_UserPresentListViewObject__Dispose__);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall UserPresentListViewManager__RequestListObject_21741884(
        UserPresentListViewManager_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *ObjectList; // x0
  __int64 v28; // x1
  int32_t size; // w8
  Il2CppObject *current; // x21
  System_Action_o *v31; // x22
  __int64 v32; // x0
  __int64 v33; // x1
  const MethodInfo *v34; // x3
  System_Collections_Generic_List_Enumerator_T__o v35; // [xsp+8h] [xbp-58h] BYREF
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  if ( (byte_42E6A7A & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, mode, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_UserPresentListViewObject__Dispose__, v6, v7, v8);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_UserPresentListViewObject__MoveNext__, v9, v10, v11);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_UserPresentListViewObject__get_Current__,
      v12,
      v13,
      v14);
    sub_B5D5C4(&Method_System_Collections_Generic_List_UserPresentListViewObject__GetEnumerator__, v15, v16, v17);
    sub_B5D5C4(&Method_System_Collections_Generic_List_UserPresentListViewObject__get_Count__, v18, v19, v20);
    sub_B5D5C4(&Method_UserPresentListViewManager_OnMoveEnd__, v21, v22, v23);
    sub_B5D5C4(&StringLiteral_10142/*"OnMoveEnd"*/, v24, v25, v26);
    byte_42E6A7A = 1;
  }
  memset(&v35, 0, sizeof(v35));
  ObjectList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)UserPresentListViewManager__get_ObjectList(
                                                                                                this,
                                                                                                *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_B5D69C(0LL, v28);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10142/*"OnMoveEnd"*/,
      0.0,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v35,
      ObjectList,
      (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_UserPresentListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v35,
              (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_UserPresentListViewObject__MoveNext__) )
    {
      current = v35.fields.current;
      v31 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
      System_Action___ctor(v31, (Il2CppObject *)this, Method_UserPresentListViewManager_OnMoveEnd__, 0LL);
      if ( !current )
        sub_B5D69C(v32, v33);
      zero = UnityEngine_Vector3__get_zero(0LL);
      UserPresentListViewObject__Init(
        (UserPresentListViewObject_o *)current,
        mode,
        v31,
        zero.fields.x,
        *(UnityEngine_Vector3_o *)&zero.fields.y,
        v34);
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v35,
      (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_UserPresentListViewObject__Dispose__);
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
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.callbackFunc,
    (System_Int32_array **)callback,
    (System_String_array **)callback,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  UserPresentListViewManager__SetMode_21741664(this, mode, v10);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall UserPresentListViewManager__SetMode_21741664(
        UserPresentListViewManager_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  __int64 v3; // x3
  UserPresentListViewManager_o *v5; // x19
  struct System_Collections_Generic_List_GameObject__o *objectList; // x8
  const MethodInfo *v7; // x2
  int32_t v8; // w1

  v5 = this;
  if ( (byte_42E6A78 & 1) == 0 )
  {
    this = (UserPresentListViewManager_o *)sub_B5D5C4(
                                             &Method_System_Collections_Generic_List_GameObject__get_Count__,
                                             mode,
                                             (_DWORD)method,
                                             v3);
    byte_42E6A78 = 1;
  }
  objectList = v5->fields.objectList;
  v5->fields.initMode = mode;
  if ( !objectList )
    sub_B5D69C(this, *(_QWORD *)&mode);
  v5->fields.callbackCount = objectList->fields._size;
  ListViewManager__set_IsInput((ListViewManager_o *)v5, mode == 1, 0LL);
  if ( mode == 1 )
  {
    v8 = 3;
LABEL_8:
    UserPresentListViewManager__RequestListObject_21741884(v5, v8, v7);
    return;
  }
  if ( mode == 2 )
  {
    v8 = 4;
    goto LABEL_8;
  }
}


void __fastcall UserPresentListViewManager__SetMode_21741828(
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
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.callbackFunc2,
    (System_Int32_array **)callback,
    (System_String_array **)callback,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  UserPresentListViewManager__SetMode_21741664(this, mode, v10);
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
  if ( (byte_42E6A77 & 1) == 0 )
  {
    this = (UserPresentListViewManager_o *)sub_B5D5C4(
                                             &UserPresentListViewObject_TypeInfo,
                                             (_DWORD)obj,
                                             (_DWORD)item,
                                             method);
    byte_42E6A77 = 1;
  }
  if ( !obj
    || (v6 = *(&UserPresentListViewObject_TypeInfo->_2.bitflags2 + 1),
        *(&obj->klass->_2.bitflags2 + 1) < (unsigned int)v6)
    || (UserPresentListViewObject_c *)obj->klass->_2.typeHierarchy[v6 - 1] != UserPresentListViewObject_TypeInfo )
  {
    sub_B5D69C(this, obj);
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  UnityEngine_Object_o *sortKindLabel; // x20
  __int64 v18; // x1
  ListViewSort_o *sort; // x0
  UILabel_o *v20; // x20
  UnityEngine_Object_o *sortOrderSprite; // x20
  struct ListViewSort_o *v22; // x8
  System_String_o **v23; // x8
  struct ListViewSort_o *v24; // x8
  System_String_o **v25; // x8

  if ( (byte_42E6A86 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_17230/*"btn_sort_up"*/, v5, v6, v7);
    sub_B5D5C4(&StringLiteral_17270/*"btn_txt_new"*/, v8, v9, v10);
    sub_B5D5C4(&StringLiteral_17277/*"btn_txt_old"*/, v11, v12, v13);
    sub_B5D5C4(&StringLiteral_17227/*"btn_sort_down"*/, v14, v15, v16);
    byte_42E6A86 = 1;
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
    v20 = this->fields.sortKindLabel;
    sort = (ListViewSort_o *)ListViewSort__GetSortKindButtonText(sort, 0LL);
    if ( !v20 )
      goto LABEL_26;
    UILabel__set_text(v20, (System_String_o *)sort, 0LL);
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
    v22 = this->fields.sort;
    if ( v22 )
    {
      sort = (ListViewSort_o *)this->fields.sortExplanationSprite;
      if ( sort )
      {
        v23 = (System_String_o **)(v22->fields.isAscendingOrder ? &StringLiteral_17277/*"btn_txt_old"*/ : &StringLiteral_17270/*"btn_txt_new"*/);
        UISprite__set_spriteName((UISprite_o *)sort, *v23, 0LL);
        v24 = this->fields.sort;
        if ( v24 )
        {
          sort = (ListViewSort_o *)this->fields.sortOrderSprite;
          if ( sort )
          {
            if ( v24->fields.isAscendingOrder )
              v25 = (System_String_o **)&StringLiteral_17227/*"btn_sort_down"*/;
            else
              v25 = (System_String_o **)&StringLiteral_17230/*"btn_sort_up"*/;
            UISprite__set_spriteName((UISprite_o *)sort, *v25, 0LL);
            return;
          }
        }
      }
    }
LABEL_26:
    sub_B5D69C(sort, v18);
  }
}


void __fastcall UserPresentListViewManager___DlgForExpiredPresent_b__69_0(
        UserPresentListViewManager_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  CommonUI_o *Instance; // x0
  __int64 v12; // x1
  CommonUI_o *v13; // x20
  System_Action_o *v14; // x21

  if ( (byte_42E6A8B & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5, v6, v7);
    sub_B5D5C4(&Method_UserPresentListViewManager__DlgForExpiredPresent_b__69_1__, v8, v9, v10);
    byte_42E6A8B = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__CloseNotificationDialog(Instance, 0LL),
        v13 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
        v14 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo),
        System_Action___ctor(
          v14,
          (Il2CppObject *)this,
          Method_UserPresentListViewManager__DlgForExpiredPresent_b__69_1__,
          0LL),
        !v13) )
  {
    sub_B5D69C(Instance, v12);
  }
  CommonUI__maskFadeout(v13, 1, 0.5, v14, 0LL);
}


void __fastcall UserPresentListViewManager___DlgForExpiredPresent_b__69_1(
        UserPresentListViewManager_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  __int64 v5; // x1
  UserPresentBoxWindow_o *m_parent; // x0

  if ( (byte_42E6A8C & 1) == 0 )
  {
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, (_DWORD)method, v2, v3);
    byte_42E6A8C = 1;
  }
  UserPresentListViewManager__DestroyList(this, method);
  m_parent = this->fields.m_parent;
  if ( !m_parent
    || (UserPresentBoxWindow__SetReDispFromExpiredPresent(m_parent, 0LL),
        (m_parent = (UserPresentBoxWindow_o *)this->fields.scrollView) == 0LL)
    || (UIScrollView__ResetPosition((UIScrollView_o *)m_parent, 0LL),
        (m_parent = (UserPresentBoxWindow_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__)) == 0LL) )
  {
    sub_B5D69C(m_parent, v5);
  }
  CommonUI__maskFadein((CommonUI_o *)m_parent, 0.5, 0LL, 0LL);
}


void __fastcall UserPresentListViewManager__add_callbackFunc(
        UserPresentListViewManager_o *this,
        UserPresentListViewManager_CallbackFunc_o *value,
        const MethodInfo *method)
{
  __int64 v3; // x3
  System_Delegate_o *callbackFunc; // x21
  struct UserPresentListViewManager_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  UserPresentListViewManager_o *v11; // x0
  UserPresentListViewManager_CallbackFunc_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_42E6A6A & 1) == 0 )
  {
    sub_B5D5C4(&UserPresentListViewManager_CallbackFunc_TypeInfo, (_DWORD)value, (_DWORD)method, v3);
    byte_42E6A6A = 1;
  }
  callbackFunc = (System_Delegate_o *)this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Combine(callbackFunc, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (UserPresentListViewManager_CallbackFunc_c *)v8->klass != UserPresentListViewManager_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_B51FDC(p_callbackFunc, v8, callbackFunc);
    v10 = callbackFunc == (System_Delegate_o *)v9;
    callbackFunc = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (UserPresentListViewManager_o *)sub_B5D990(v8);
  UserPresentListViewManager__remove_callbackFunc(v11, v12, v13);
}


void __fastcall UserPresentListViewManager__add_callbackFunc2(
        UserPresentListViewManager_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  __int64 v3; // x3
  System_Delegate_o *callbackFunc2; // x21
  struct System_Action_o **p_callbackFunc2; // x20
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  UserPresentListViewManager_o *v11; // x0
  System_Action_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_42E6A6C & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)value, (_DWORD)method, v3);
    byte_42E6A6C = 1;
  }
  callbackFunc2 = (System_Delegate_o *)this->fields.callbackFunc2;
  p_callbackFunc2 = &this->fields.callbackFunc2;
  while ( 1 )
  {
    v8 = System_Delegate__Combine(callbackFunc2, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (System_Action_c *)v8->klass != System_Action_TypeInfo )
        break;
    }
    v9 = sub_B51FDC(p_callbackFunc2, v8, callbackFunc2);
    v10 = callbackFunc2 == (System_Delegate_o *)v9;
    callbackFunc2 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (UserPresentListViewManager_o *)sub_B5D990(v8);
  UserPresentListViewManager__remove_callbackFunc2(v11, v12, v13);
}


void __fastcall UserPresentListViewManager__add_receivecCallbackFunc(
        UserPresentListViewManager_o *this,
        UserPresentListViewManager_ReceiveCallbackFunc_o *value,
        const MethodInfo *method)
{
  __int64 v3; // x3
  System_Delegate_o *receivecCallbackFunc; // x21
  struct UserPresentListViewManager_ReceiveCallbackFunc_o **p_receivecCallbackFunc; // x20
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  UserPresentListViewManager_o *v11; // x0
  UserPresentListViewManager_ReceiveCallbackFunc_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_42E6A6E & 1) == 0 )
  {
    sub_B5D5C4(&UserPresentListViewManager_ReceiveCallbackFunc_TypeInfo, (_DWORD)value, (_DWORD)method, v3);
    byte_42E6A6E = 1;
  }
  receivecCallbackFunc = (System_Delegate_o *)this->fields.receivecCallbackFunc;
  p_receivecCallbackFunc = &this->fields.receivecCallbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Combine(receivecCallbackFunc, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (UserPresentListViewManager_ReceiveCallbackFunc_c *)v8->klass != UserPresentListViewManager_ReceiveCallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_B51FDC(p_receivecCallbackFunc, v8, receivecCallbackFunc);
    v10 = receivecCallbackFunc == (System_Delegate_o *)v9;
    receivecCallbackFunc = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (UserPresentListViewManager_o *)sub_B5D990(v8);
  UserPresentListViewManager__remove_receivecCallbackFunc(v11, v12, v13);
}


System_Collections_Generic_List_UserPresentListViewObject__o *__fastcall UserPresentListViewManager__get_ClippingObjectList(
        UserPresentListViewManager_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v29; // x19
  __int64 v30; // x1
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  Il2CppObject *current; // x21
  _BOOL8 v33; // x0
  __int64 v34; // x1
  UserPresentListViewObject_o *Component_srcLineSprite; // x0
  const MethodInfo *v36; // x1
  EventMissionProgressRequest_Argument_ProgressData_o *v37; // x21
  ListViewItem_o *Item; // x0
  __int64 v39; // x1
  _BOOL8 v40; // x0
  __int64 v41; // x1
  System_Collections_Generic_List_Enumerator_T__o v43; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v44; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_42E6A73 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v8, v9, v10);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_UserPresentListViewObject___, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_List_UserPresentListViewObject__Add__, v14, v15, v16);
    sub_B5D5C4(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v17, v18, v19);
    sub_B5D5C4(&Method_System_Collections_Generic_List_UserPresentListViewObject___ctor__, v20, v21, v22);
    sub_B5D5C4(&System_Collections_Generic_List_UserPresentListViewObject__TypeInfo, v23, v24, v25);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v26, v27, v28);
    byte_42E6A73 = 1;
  }
  memset(&v44, 0, sizeof(v44));
  v29 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_UserPresentListViewObject__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v29,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_UserPresentListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_B5D69C(0LL, v30);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v43,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)objectList,
    (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v44 = v43;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v44,
            (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v44.fields.current;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v33 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v33 )
    {
      if ( !current )
        sub_B5D69C(v33, v34);
      Component_srcLineSprite = (UserPresentListViewObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                 (UnityEngine_GameObject_o *)current,
                                                                 (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_UserPresentListViewObject___);
      v37 = (EventMissionProgressRequest_Argument_ProgressData_o *)Component_srcLineSprite;
      if ( !Component_srcLineSprite )
        sub_B5D69C(0LL, v36);
      Item = (ListViewItem_o *)UserPresentListViewObject__GetItem(Component_srcLineSprite, v36);
      if ( !Item )
        sub_B5D69C(0LL, v39);
      if ( Item->fields.isTermination )
      {
        v40 = ListViewManager__ClippingItem_23920288((ListViewManager_o *)this, Item, 0LL);
        if ( v40 )
        {
          if ( !v29 )
            sub_B5D69C(v40, v41);
          goto LABEL_16;
        }
      }
      else
      {
        if ( !v29 )
          sub_B5D69C(Item, v39);
LABEL_16:
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v29,
          v37,
          (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_UserPresentListViewObject__Add__);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v44,
    (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_UserPresentListViewObject__o *)v29;
}


System_Collections_Generic_List_UserPresentListViewObject__o *__fastcall UserPresentListViewManager__get_ObjectList(
        UserPresentListViewManager_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v29; // x19
  __int64 v30; // x1
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  Il2CppObject *current; // x20
  _BOOL8 v33; // x0
  __int64 v34; // x1
  EventMissionProgressRequest_Argument_ProgressData_o *Component_srcLineSprite; // x0
  System_Collections_Generic_List_Enumerator_T__o v37; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v38; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_42E6A72 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v8, v9, v10);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_UserPresentListViewObject___, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_List_UserPresentListViewObject__Add__, v14, v15, v16);
    sub_B5D5C4(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v17, v18, v19);
    sub_B5D5C4(&Method_System_Collections_Generic_List_UserPresentListViewObject___ctor__, v20, v21, v22);
    sub_B5D5C4(&System_Collections_Generic_List_UserPresentListViewObject__TypeInfo, v23, v24, v25);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v26, v27, v28);
    byte_42E6A72 = 1;
  }
  memset(&v38, 0, sizeof(v38));
  v29 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_UserPresentListViewObject__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v29,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_UserPresentListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_B5D69C(0LL, v30);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v37,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)objectList,
    (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v38 = v37;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v38,
            (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v38.fields.current;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v33 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v33 )
    {
      if ( !current )
        sub_B5D69C(v33, v34);
      Component_srcLineSprite = (EventMissionProgressRequest_Argument_ProgressData_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                                         (UnityEngine_GameObject_o *)current,
                                                                                         (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_UserPresentListViewObject___);
      if ( !v29 )
        sub_B5D69C(Component_srcLineSprite, Component_srcLineSprite);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v29,
        Component_srcLineSprite,
        (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_UserPresentListViewObject__Add__);
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v38,
    (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_UserPresentListViewObject__o *)v29;
}


ListViewSort_o *__fastcall UserPresentListViewManager__get_SortInfo(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  UserPresentListViewManager_c *v4; // x0

  if ( (byte_42E6A69 & 1) == 0 )
  {
    sub_B5D5C4(&UserPresentListViewManager_TypeInfo, v1, v2, v3);
    byte_42E6A69 = 1;
  }
  v4 = UserPresentListViewManager_TypeInfo;
  if ( (BYTE3(UserPresentListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UserPresentListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserPresentListViewManager_TypeInfo);
    v4 = UserPresentListViewManager_TypeInfo;
  }
  return v4->static_fields->sortInfo;
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
  __int64 v3; // x3
  System_Delegate_o *callbackFunc; // x21
  struct UserPresentListViewManager_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  UserPresentListViewManager_o *v11; // x0
  System_Action_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_42E6A6B & 1) == 0 )
  {
    sub_B5D5C4(&UserPresentListViewManager_CallbackFunc_TypeInfo, (_DWORD)value, (_DWORD)method, v3);
    byte_42E6A6B = 1;
  }
  callbackFunc = (System_Delegate_o *)this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Remove(callbackFunc, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (UserPresentListViewManager_CallbackFunc_c *)v8->klass != UserPresentListViewManager_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_B51FDC(p_callbackFunc, v8, callbackFunc);
    v10 = callbackFunc == (System_Delegate_o *)v9;
    callbackFunc = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (UserPresentListViewManager_o *)sub_B5D990(v8);
  UserPresentListViewManager__add_callbackFunc2(v11, v12, v13);
}


void __fastcall UserPresentListViewManager__remove_callbackFunc2(
        UserPresentListViewManager_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  __int64 v3; // x3
  System_Delegate_o *callbackFunc2; // x21
  struct System_Action_o **p_callbackFunc2; // x20
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  UserPresentListViewManager_o *v11; // x0
  UserPresentListViewManager_ReceiveCallbackFunc_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_42E6A6D & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)value, (_DWORD)method, v3);
    byte_42E6A6D = 1;
  }
  callbackFunc2 = (System_Delegate_o *)this->fields.callbackFunc2;
  p_callbackFunc2 = &this->fields.callbackFunc2;
  while ( 1 )
  {
    v8 = System_Delegate__Remove(callbackFunc2, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (System_Action_c *)v8->klass != System_Action_TypeInfo )
        break;
    }
    v9 = sub_B51FDC(p_callbackFunc2, v8, callbackFunc2);
    v10 = callbackFunc2 == (System_Delegate_o *)v9;
    callbackFunc2 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (UserPresentListViewManager_o *)sub_B5D990(v8);
  UserPresentListViewManager__add_receivecCallbackFunc(v11, v12, v13);
}


void __fastcall UserPresentListViewManager__remove_receivecCallbackFunc(
        UserPresentListViewManager_o *this,
        UserPresentListViewManager_ReceiveCallbackFunc_o *value,
        const MethodInfo *method)
{
  __int64 v3; // x3
  System_Delegate_o *receivecCallbackFunc; // x21
  struct UserPresentListViewManager_ReceiveCallbackFunc_o **p_receivecCallbackFunc; // x20
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  UserPresentListViewManager_o *v11; // x0
  const MethodInfo *v12; // x1

  if ( (byte_42E6A6F & 1) == 0 )
  {
    sub_B5D5C4(&UserPresentListViewManager_ReceiveCallbackFunc_TypeInfo, (_DWORD)value, (_DWORD)method, v3);
    byte_42E6A6F = 1;
  }
  receivecCallbackFunc = (System_Delegate_o *)this->fields.receivecCallbackFunc;
  p_receivecCallbackFunc = &this->fields.receivecCallbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Remove(receivecCallbackFunc, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (UserPresentListViewManager_ReceiveCallbackFunc_c *)v8->klass != UserPresentListViewManager_ReceiveCallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_B51FDC(p_receivecCallbackFunc, v8, receivecCallbackFunc);
    v10 = receivecCallbackFunc == (System_Delegate_o *)v9;
    receivecCallbackFunc = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (UserPresentListViewManager_o *)sub_B5D990(v8);
  UserPresentListViewManager__get_select_idx(v11, v12);
}


void __fastcall UserPresentListViewManager__resetCheckStatus(
        UserPresentListViewManager_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  System_Collections_Generic_List_long__o *checkedIdList; // x0

  if ( (byte_42E6A7F & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_long__Clear__, (_DWORD)method, v2, v3);
    byte_42E6A7F = 1;
  }
  checkedIdList = this->fields.checkedIdList;
  if ( checkedIdList )
    System_Collections_Generic_List_long___Clear(
      checkedIdList,
      (const MethodInfo_3047B94 *)Method_System_Collections_Generic_List_long__Clear__);
}


void __fastcall UserPresentListViewManager__setJumpType(
        UserPresentListViewManager_o *this,
        int32_t type,
        const MethodInfo *method)
{
  UserPresentBoxErrorDialog_o *dialog; // x0

  dialog = this->fields.dialog;
  if ( !dialog )
    sub_B5D69C(0LL, type);
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
  sub_B5D560(
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
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  const MethodInfo *v19; // x2
  int32_t kind; // w8
  System_String_o *v21; // x1
  __int64 *v22; // x8

  if ( (byte_42E6A82 & 1) == 0 )
  {
    sub_B5D5C4(&LocalizationManager_TypeInfo, (_DWORD)callback, (_DWORD)method, v3);
    sub_B5D5C4(&StringLiteral_11203/*"REJECT_NORMAL_TXT"*/, v10, v11, v12);
    sub_B5D5C4(&StringLiteral_11199/*"REJECT_ALL_TXT"*/, v13, v14, v15);
    sub_B5D5C4(&StringLiteral_1/*""*/, v16, v17, v18);
    byte_42E6A82 = 1;
  }
  this->fields.receivecCallbackFunc = callback;
  sub_B5D560(
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
    v22 = &StringLiteral_11203/*"REJECT_NORMAL_TXT"*/;
    goto LABEL_14;
  }
  if ( (unsigned int)(kind - 1) <= 2 )
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v22 = &StringLiteral_11199/*"REJECT_ALL_TXT"*/;
LABEL_14:
    v21 = LocalizationManager__Get((System_String_o *)*v22, 0LL);
    goto LABEL_15;
  }
  v21 = (System_String_o *)StringLiteral_1/*""*/;
LABEL_15:
  UserPresentListViewManager__OpenNoticeDlg(this, v21, v19);
}


void __fastcall UserPresentListViewManager__updateCheckStatus(
        UserPresentListViewManager_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  struct System_Collections_Generic_List_long__o *checkedIdList; // x21
  char v30; // w22
  UserPresentBoxWindow_o *m_parent; // x0
  int32_t size; // w25
  BalanceConfig_c *v33; // x0
  int32_t PresentBoxCheckMax; // w26
  System_Collections_Generic_List_long__o *v35; // x20
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x21
  __int64 v37; // x24
  char v38; // w27
  int v39; // w8
  UserPresentListViewItem_o *v40; // x21
  __int64 v41; // x9
  int64_t presentId; // x22
  const MethodInfo *v43; // x3
  int32_t v44; // w0
  const MethodInfo *v45; // x3
  const MethodInfo *v46; // x2
  struct UserPresentBoxEntity_o *usrPresentEnt; // x8
  struct ItemEntity_o *itemEnt; // x8
  struct System_Collections_Generic_List_long__o *v49; // x8
  UserPresentListViewManager_o *v50; // x0
  const MethodInfo *v51; // x1

  if ( (byte_42E6A7E & 1) == 0 )
  {
    sub_B5D5C4(&BalanceConfig_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_long__IndexOf__, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_long__Remove__, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_List_long___ctor___68740392, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_List_long__get_Count__, v14, v15, v16);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v17, v18, v19);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v20, v21, v22);
    sub_B5D5C4(&System_Collections_Generic_List_long__TypeInfo, v23, v24, v25);
    sub_B5D5C4(&UserPresentListViewItem_TypeInfo, v26, v27, v28);
    byte_42E6A7E = 1;
  }
  checkedIdList = this->fields.checkedIdList;
  if ( checkedIdList && checkedIdList->fields._size )
  {
    v30 = 0;
  }
  else
  {
    m_parent = this->fields.m_parent;
    if ( !m_parent )
      goto LABEL_35;
    v30 = 1;
    UserPresentBoxWindow__SetCheckedItemsButtonEnable(m_parent, 0, 1, 0LL);
    checkedIdList = this->fields.checkedIdList;
    if ( !checkedIdList )
      goto LABEL_35;
  }
  size = checkedIdList->fields._size;
  v33 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v33 = BalanceConfig_TypeInfo;
    checkedIdList = this->fields.checkedIdList;
  }
  PresentBoxCheckMax = v33->static_fields->PresentBoxCheckMax;
  v35 = (System_Collections_Generic_List_long__o *)sub_B5D694(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor_50621476(
    v35,
    (System_Collections_Generic_IEnumerable_T__o *)checkedIdList,
    (const MethodInfo_3046C24 *)Method_System_Collections_Generic_List_long___ctor___68740392);
  itemList = this->fields.itemList;
  if ( !itemList )
LABEL_35:
    sub_B5D69C(m_parent, method);
  v37 = 0LL;
  v38 = (size >= PresentBoxCheckMax) | v30;
  while ( 1 )
  {
    v39 = itemList->fields._size;
    if ( (int)v37 >= v39 )
    {
      v49 = this->fields.checkedIdList;
      if ( v49 )
      {
        m_parent = this->fields.m_parent;
        if ( m_parent )
        {
          UserPresentBoxWindow__SetSelectCount(m_parent, v49->fields._size, 0LL);
          return;
        }
      }
      goto LABEL_35;
    }
    if ( v39 <= (unsigned int)v37 )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
    v40 = (UserPresentListViewItem_o *)itemList->fields._items->m_Items[v37];
    if ( !v40 )
      goto LABEL_35;
    method = (const MethodInfo *)UserPresentListViewItem_TypeInfo;
    v41 = *(&UserPresentListViewItem_TypeInfo->_2.bitflags2 + 1);
    if ( *(&v40->klass->_2.bitflags2 + 1) < (unsigned int)v41
      || (UserPresentListViewItem_c *)v40->klass->_2.typeHierarchy[v41 - 1] != UserPresentListViewItem_TypeInfo )
    {
      break;
    }
    if ( !v35 )
      goto LABEL_35;
    presentId = v40->fields.presentId;
    if ( System_Collections_Generic_List_long___Remove(
           v35,
           presentId,
           (const MethodInfo_3049104 *)Method_System_Collections_Generic_List_long__Remove__) )
    {
      m_parent = (UserPresentBoxWindow_o *)this->fields.checkedIdList;
      if ( !m_parent )
        goto LABEL_35;
      v44 = System_Collections_Generic_List_long___IndexOf(
              (System_Collections_Generic_List_long__o *)m_parent,
              presentId,
              (const MethodInfo_3048800 *)Method_System_Collections_Generic_List_long__IndexOf__);
      UserPresentListViewItem__setCheckBoxed(v40, 1, v44 + 1, v45);
    }
    else
    {
      UserPresentListViewItem__setCheckBoxed(v40, 0, -1, v43);
      method = (const MethodInfo *)(size >= PresentBoxCheckMax);
      if ( (v38 & 1) == 0 )
      {
        usrPresentEnt = v40->fields.usrPresentEnt;
        if ( usrPresentEnt && usrPresentEnt->fields.giftType == 2 )
        {
          itemEnt = v40->fields.itemEnt;
          if ( !itemEnt )
            goto LABEL_35;
          LOBYTE(method) = itemEnt->fields.type == 24;
        }
        else
        {
          LOBYTE(method) = 0;
        }
      }
      UserPresentListViewItem__setBlocked(v40, (bool)method, v46);
    }
    itemList = this->fields.itemList;
    ++v37;
    if ( !itemList )
      goto LABEL_35;
  }
  v50 = (UserPresentListViewManager_o *)sub_B5D990(v40);
  UserPresentListViewManager__DestroyList(v50, v51);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall UserPresentListViewManager_CallbackFunc___ctor(
        UserPresentListViewManager_CallbackFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  struct BattleServantClassBoardSkillEffectListComponent_o *v8; // x8
  BattleServantConfConponent_o *p_method; // x0

  v8 = **(struct BattleServantClassBoardSkillEffectListComponent_o ***)&method;
  *(_QWORD *)&this->fields.method = object;
  p_method = (BattleServantConfConponent_o *)&this->fields.method;
  p_method->monitor = *(void **)&method;
  p_method[-1].fields.classBoardSkillObj = v8;
  sub_B5D560(
    p_method,
    (System_Int32_array **)object,
    *(System_String_array ***)&method,
    (System_String_array **)a4,
    v4,
    v5,
    v6,
    v7);
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
  return (System_IAsyncResult_o *)sub_B5D568(this, v6, callback, object);
}


void __fastcall UserPresentListViewManager_CallbackFunc__EndInvoke(
        UserPresentListViewManager_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B5D56C(result, 0LL, method);
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
  __int64 v11; // x3
  System_String_c *v12; // x8
  unsigned __int64 v13; // x10
  int32_t *v14; // x11
  __int64 v15; // x0
  __int64 v16; // x0
  unsigned int v17; // w23
  __int64 v18; // x0
  __int64 v19; // x3
  __int64 v20; // x8
  unsigned __int64 v21; // x10
  _DWORD *v22; // x11
  __int64 v23; // x0
  __int64 v24; // x0
  __int64 v25; // x0
  void (__fastcall **v26)(System_String_o *, _QWORD); // x0
  __int64 v27; // x0
  void (__fastcall **v28)(__int64 *, System_String_o *, _QWORD); // x0
  UserPresentListViewManager_CallbackFunc_o *v29; // x8
  __int64 v30; // x21
  __int64 *v31; // x22
  void (__fastcall *v32)(System_String_o *, __int64); // x23
  char v33; // w0
  int v34; // w8
  char v35; // w23
  char v36; // w0
  __int64 v37; // x3
  __int64 v38; // x8
  __int64 v39; // x1
  __int64 v40; // x2
  unsigned __int64 v41; // x10
  _DWORD *v42; // x11
  char v43; // w22
  char v44; // w0
  __int64 v45; // x3
  System_String_c *klass; // x8
  __int64 v47; // x1
  __int64 v48; // x2
  unsigned __int64 v49; // x10
  int32_t *p_offset; // x11
  UserPresentListViewManager_CallbackFunc_o *v51; // [xsp+8h] [xbp-48h] BYREF

  v51 = this;
  v3 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v3 )
  {
    v7 = &v51;
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
      v29 = v7[i];
      v31 = *(__int64 **)&v29->fields.method;
      v30 = *(_QWORD *)&v29->fields.extra_arg;
      v32 = *(void (__fastcall **)(System_String_o *, __int64))&v29->fields.method_ptr;
      if ( *(__int16 *)(v30 + 72) == -1 )
        sub_B5D680(*(_QWORD *)&v29->fields.extra_arg, result, method);
      v33 = sub_B5D5F4(v30);
      v34 = *(unsigned __int8 *)(v30 + 74);
      if ( (v33 & 1) != 0 )
      {
        if ( v34 == 1 )
          goto LABEL_58;
      }
      else
      {
        if ( v34 != 1 )
        {
          if ( *(__int16 *)(v30 + 72) != -1 && this->fields.m_target )
          {
            v43 = sub_B5D5EC(v30);
            v44 = sub_B5D9F0(v30);
            if ( (v43 & 1) != 0 )
            {
              if ( (v44 & 1) != 0 )
              {
                klass = result->klass;
                v47 = *(_QWORD *)(v30 + 24);
                v48 = *(unsigned __int16 *)(v30 + 72);
                if ( *(_WORD *)&result->klass->_2.bitflags1 )
                {
                  v49 = 0LL;
                  p_offset = &klass->_1.interfaceOffsets->offset;
                  while ( *((_QWORD *)p_offset - 1) != v47 )
                  {
                    ++v49;
                    p_offset += 4;
                    if ( v49 >= *(unsigned __int16 *)&result->klass->_2.bitflags1 )
                      goto LABEL_57;
                  }
                  v25 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset + 2 * (int)v48);
                }
                else
                {
LABEL_57:
                  v25 = sub_AF54C0(result, v47, v48, v45);
                }
                v16 = *(_QWORD *)(v25 + 8);
              }
              else
              {
                v16 = *((_QWORD *)&result->klass->vtable._1_Finalize.methodPtr + 2 * *(unsigned __int16 *)(v30 + 72));
              }
              v26 = (void (__fastcall **)(System_String_o *, _QWORD))sub_B5D674(v16, v30);
              (*v26)(result, v26);
            }
            else
            {
              v9 = *(unsigned __int16 *)(v30 + 72);
              if ( (v44 & 1) != 0 )
              {
                class_0 = j_il2cpp_method_get_class_0(v30);
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
                  v15 = (__int64)(&v12->vtable._0_Equals.method + 2 * (int)(*v14 + v9));
                }
                else
                {
LABEL_11:
                  v15 = sub_AF54C0(result, class_0, v9, v11);
                }
                (*(void (__fastcall **)(System_String_o *, _QWORD))v15)(result, *(_QWORD *)(v15 + 8));
              }
              else
              {
                (*((void (__fastcall **)(System_String_o *, _QWORD))&result->klass->vtable._0_Equals.method
                 + 2 * *(unsigned __int16 *)(v30 + 72)))(
                  result,
                  *((_QWORD *)&result->klass->vtable._1_Finalize.methodPtr + 2 * *(unsigned __int16 *)(v30 + 72)));
              }
            }
            continue;
          }
LABEL_58:
          v32(result, v30);
          continue;
        }
        if ( !v31 )
          goto LABEL_58;
        if ( *(__int16 *)(v30 + 72) != -1 && (*(_BYTE *)(*v31 + 277) & 1) == 0 && this->fields.m_target )
        {
          v35 = sub_B5D5EC(v30);
          v36 = sub_B5D9F0(v30);
          if ( (v35 & 1) != 0 )
          {
            if ( (v36 & 1) != 0 )
            {
              v38 = *v31;
              v39 = *(_QWORD *)(v30 + 24);
              v40 = *(unsigned __int16 *)(v30 + 72);
              if ( *(_WORD *)(*v31 + 298) )
              {
                v41 = 0LL;
                v42 = (_DWORD *)(*(_QWORD *)(v38 + 176) + 8LL);
                while ( *((_QWORD *)v42 - 1) != v39 )
                {
                  ++v41;
                  v42 += 4;
                  if ( v41 >= *(unsigned __int16 *)(*v31 + 298) )
                    goto LABEL_48;
                }
                v27 = v38 + 16LL * (*v42 + (int)v40) + 312;
              }
              else
              {
LABEL_48:
                v27 = sub_AF54C0(v31, v39, v40, v37);
              }
              v24 = *(_QWORD *)(v27 + 8);
            }
            else
            {
              v24 = *(_QWORD *)(*v31 + 16LL * *(unsigned __int16 *)(v30 + 72) + 320);
            }
            v28 = (void (__fastcall **)(__int64 *, System_String_o *, _QWORD))sub_B5D674(v24, v30);
            (*v28)(v31, result, v28);
          }
          else
          {
            v17 = *(unsigned __int16 *)(v30 + 72);
            if ( (v36 & 1) != 0 )
            {
              v18 = j_il2cpp_method_get_class_0(v30);
              v20 = *v31;
              if ( *(_WORD *)(*v31 + 298) )
              {
                v21 = 0LL;
                v22 = (_DWORD *)(*(_QWORD *)(v20 + 176) + 8LL);
                while ( *((_QWORD *)v22 - 1) != v18 )
                {
                  ++v21;
                  v22 += 4;
                  if ( v21 >= *(unsigned __int16 *)(*v31 + 298) )
                    goto LABEL_19;
                }
                v23 = v20 + 16LL * (int)(*v22 + v17) + 312;
              }
              else
              {
LABEL_19:
                v23 = sub_AF54C0(v31, v18, v17, v19);
              }
              (*(void (__fastcall **)(__int64 *, System_String_o *, _QWORD))v23)(v31, result, *(_QWORD *)(v23 + 8));
            }
            else
            {
              (*(void (__fastcall **)(__int64 *, System_String_o *, _QWORD))(*v31
                                                                           + 16LL * *(unsigned __int16 *)(v30 + 72)
                                                                           + 312))(
                v31,
                result,
                *(_QWORD *)(*v31 + 16LL * *(unsigned __int16 *)(v30 + 72) + 320));
            }
          }
          continue;
        }
      }
      ((void (__fastcall *)(__int64 *, System_String_o *, __int64))v32)(v31, result, v30);
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
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  struct BattleServantClassBoardSkillEffectListComponent_o *v8; // x8
  BattleServantConfConponent_o *p_method; // x0

  v8 = **(struct BattleServantClassBoardSkillEffectListComponent_o ***)&method;
  *(_QWORD *)&this->fields.method = object;
  p_method = (BattleServantConfConponent_o *)&this->fields.method;
  p_method->monitor = *(void **)&method;
  p_method[-1].fields.classBoardSkillObj = v8;
  sub_B5D560(
    p_method,
    (System_Int32_array **)object,
    *(System_String_array ***)&method,
    (System_String_array **)a4,
    v4,
    v5,
    v6,
    v7);
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
  if ( (byte_42E7023 & 1) == 0 )
  {
    sub_B5D5C4(&bool_TypeInfo, isReceive, (_DWORD)callback, object);
    byte_42E7023 = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10);
  return (System_IAsyncResult_o *)sub_B5D568(this, v9, callback, object);
}


void __fastcall UserPresentListViewManager_ReceiveCallbackFunc__EndInvoke(
        UserPresentListViewManager_ReceiveCallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B5D56C(result, 0LL, method);
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
  __int64 v11; // x3
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
  __int64 v25; // x3
  __int64 v26; // x8
  __int64 v27; // x1
  __int64 v28; // x2
  unsigned __int64 v29; // x10
  _DWORD *v30; // x11
  UserPresentListViewManager_ReceiveCallbackFunc_o *v31; // [xsp+8h] [xbp-48h] BYREF

  v31 = this;
  v3 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v3 )
  {
    v7 = &v31;
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
      v19 = v7[v8];
      v20 = *(__int64 **)&v19->fields.method;
      v21 = *(_QWORD *)&v19->fields.extra_arg;
      v22 = *(void (__fastcall **)(bool, __int64))&v19->fields.method_ptr;
      if ( *(__int16 *)(v21 + 72) == -1 )
        sub_B5D680(*(_QWORD *)&v19->fields.extra_arg, isReceive, method);
      if ( (sub_B5D5F4(v21) & 1) == 0 )
        break;
      if ( *(_BYTE *)(v21 + 74) != 1 )
        goto LABEL_36;
      v22(isReceive, v21);
LABEL_37:
      if ( ++v8 == v6 )
        return;
    }
    if ( v20 && *(__int16 *)(v21 + 72) != -1 && (*(_BYTE *)(*v20 + 277) & 1) == 0 && this->fields.m_target )
    {
      v23 = sub_B5D5EC(v21);
      v24 = sub_B5D9F0(v21);
      if ( (v23 & 1) != 0 )
      {
        if ( (v24 & 1) != 0 )
        {
          v26 = *v20;
          v27 = *(_QWORD *)(v21 + 24);
          v28 = *(unsigned __int16 *)(v21 + 72);
          if ( *(_WORD *)(*v20 + 298) )
          {
            v29 = 0LL;
            v30 = (_DWORD *)(*(_QWORD *)(v26 + 176) + 8LL);
            while ( *((_QWORD *)v30 - 1) != v27 )
            {
              ++v29;
              v30 += 4;
              if ( v29 >= *(unsigned __int16 *)(*v20 + 298) )
                goto LABEL_35;
            }
            v17 = v26 + 16LL * (*v30 + (int)v28) + 312;
          }
          else
          {
LABEL_35:
            v17 = sub_AF54C0(v20, v27, v28, v25);
          }
          v16 = *(_QWORD *)(v17 + 8);
        }
        else
        {
          v16 = *(_QWORD *)(*v20 + 16LL * *(unsigned __int16 *)(v21 + 72) + 320);
        }
        v18 = (void (__fastcall **)(__int64 *, bool, _QWORD))sub_B5D674(v16, v21);
        (*v18)(v20, isReceive, v18);
      }
      else
      {
        v9 = *(unsigned __int16 *)(v21 + 72);
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
            v15 = v12 + 16LL * (int)(*v14 + v9) + 312;
          }
          else
          {
LABEL_11:
            v15 = sub_AF54C0(v20, class_0, v9, v11);
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
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7

  if ( (byte_42E701D & 1) == 0 )
  {
    sub_B5D5C4(&UserPresentListViewManager___c_TypeInfo, v1, v2, v3);
    byte_42E701D = 1;
  }
  v4 = (Il2CppObject *)sub_B5D694(UserPresentListViewManager___c_TypeInfo);
  System_Object___ctor(v4, 0LL);
  static_fields = (BattleServantConfConponent_o *)UserPresentListViewManager___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v4;
  sub_B5D560(static_fields, (System_Int32_array **)v4, v6, v7, v8, v9, v10, v11);
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

  if ( (byte_42E701E & 1) == 0 )
  {
    this = (UserPresentListViewManager___c_o *)sub_B5D5C4(
                                                 &UserPresentListViewItem_TypeInfo,
                                                 (_DWORD)a,
                                                 (_DWORD)b,
                                                 method);
    byte_42E701E = 1;
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
      sub_B5D69C(this, a);
    }
  }
  else
  {
    sub_B5D990(a);
  }
  v10 = (UserPresentListViewManager___c_o *)sub_B5D990(b);
  return UserPresentListViewManager___c___GetAllPresentStrings_b__60_1(v10, v11, v12);
}


bool __fastcall UserPresentListViewManager___c___GetAllPresentStrings_b__60_1(
        UserPresentListViewManager___c_o *this,
        ListViewItem_o *obj,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v5; // x9
  __int64 v6; // x9
  __int64 v7; // x9

  if ( (byte_42E701F & 1) == 0 )
  {
    this = (UserPresentListViewManager___c_o *)sub_B5D5C4(
                                                 &UserPresentListViewItem_TypeInfo,
                                                 (_DWORD)obj,
                                                 (_DWORD)method,
                                                 v3);
    byte_42E701F = 1;
  }
  if ( !obj )
    goto LABEL_16;
  v5 = *(&UserPresentListViewItem_TypeInfo->_2.bitflags2 + 1);
  if ( *(&obj->klass->_2.bitflags2 + 1) < (unsigned int)v5
    || (UserPresentListViewItem_c *)obj->klass->_2.typeHierarchy[v5 - 1] != UserPresentListViewItem_TypeInfo
    || (v6 = *(&UserPresentListViewItem_TypeInfo->_2.bitflags2 + 1), *(&obj->klass->_2.bitflags2 + 1) < (unsigned int)v6)
    || (UserPresentListViewItem_c *)obj->klass->_2.typeHierarchy[v6 - 1] != UserPresentListViewItem_TypeInfo )
  {
LABEL_15:
    this = (UserPresentListViewManager___c_o *)sub_B5D990(obj);
    goto LABEL_16;
  }
  this = (UserPresentListViewManager___c_o *)UserPresentListViewItem__get_UserPresentEntity(
                                               (UserPresentListViewItem_o *)obj,
                                               0LL);
  if ( !this )
    goto LABEL_16;
  if ( LODWORD(this[4].monitor) == 2 )
  {
    v7 = *(&UserPresentListViewItem_TypeInfo->_2.bitflags2 + 1);
    if ( *(&obj->klass->_2.bitflags2 + 1) >= (unsigned int)v7
      && (UserPresentListViewItem_c *)obj->klass->_2.typeHierarchy[v7 - 1] == UserPresentListViewItem_TypeInfo )
    {
      this = (UserPresentListViewManager___c_o *)UserPresentListViewItem__get_ItemEntity(
                                                   (UserPresentListViewItem_o *)obj,
                                                   0LL);
      if ( this )
        return LODWORD(this[3].klass) == 24;
LABEL_16:
      sub_B5D69C(this, obj);
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
  if ( (byte_42E7020 & 1) == 0 )
  {
    this = (UserPresentListViewManager___c_o *)sub_B5D5C4(
                                                 &UserPresentListViewItem_TypeInfo,
                                                 (_DWORD)a,
                                                 (_DWORD)b,
                                                 method);
    byte_42E7020 = 1;
  }
  if ( !v5 )
LABEL_23:
    sub_B5D69C(this, a);
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
  result = System_String__CompareTo_44648532(v10, (System_String_o *)this, 0LL);
  if ( result )
    return result;
  a = (ListViewItem_o *)UserPresentListViewItem_TypeInfo;
  v12 = *(&UserPresentListViewItem_TypeInfo->_2.bitflags2 + 1);
  if ( *(&v5->klass->_2.bitflags2 + 1) < (unsigned int)v12
    || (UserPresentListViewItem_c *)v5->klass->_2.typeHierarchy[v12 - 1] != UserPresentListViewItem_TypeInfo )
  {
LABEL_21:
    sub_B5D990(v5);
LABEL_22:
    this = (UserPresentListViewManager___c_o *)sub_B5D990(b);
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
  return System_String__CompareTo_44648532((System_String_o *)this, (System_String_o *)b[1].fields.sortValue2, 0LL);
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

  if ( (byte_42E7021 & 1) == 0 )
  {
    this = (UserPresentListViewManager___c_o *)sub_B5D5C4(
                                                 &UserPresentListViewItem_TypeInfo,
                                                 (_DWORD)a,
                                                 (_DWORD)b,
                                                 method);
    byte_42E7021 = 1;
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
      sub_B5D69C(this, a);
    }
  }
  else
  {
    sub_B5D990(a);
  }
  v10 = (UserPresentListViewManager___c__DisplayClass67_0_o *)sub_B5D990(b);
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
  __int64 v3; // x3
  UserPresentListViewManager___c__DisplayClass67_0_o *v5; // x19
  __int64 v6; // x10
  int32_t ticketsHave; // w21
  BattleServantConfConponent_o *p_ticketItem; // x19
  struct ItemEntity_o *ticketItem; // t1
  System_Int32_array **ItemEntity; // x0
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7

  v5 = this;
  if ( (byte_42E7022 & 1) == 0 )
  {
    this = (UserPresentListViewManager___c__DisplayClass67_0_o *)sub_B5D5C4(
                                                                   &UserPresentListViewItem_TypeInfo,
                                                                   (_DWORD)obj,
                                                                   (_DWORD)method,
                                                                   v3);
    byte_42E7022 = 1;
  }
  if ( !obj )
    goto LABEL_19;
  v6 = *(&UserPresentListViewItem_TypeInfo->_2.bitflags2 + 1);
  if ( *(&obj->klass->_2.bitflags2 + 1) < (unsigned int)v6
    || (UserPresentListViewItem_c *)obj->klass->_2.typeHierarchy[v6 - 1] != UserPresentListViewItem_TypeInfo )
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
  if ( this->fields.ticketId != v5->fields.ticketId )
    return 1;
  ticketsHave = v5->fields.ticketsHave;
  this = (UserPresentListViewManager___c__DisplayClass67_0_o *)UserPresentListViewItem__get_UserPresentEntity(
                                                                 (UserPresentListViewItem_o *)obj,
                                                                 0LL);
  if ( !this )
LABEL_19:
    sub_B5D69C(this, obj);
  ticketItem = v5->fields.ticketItem;
  p_ticketItem = (BattleServantConfConponent_o *)&v5->fields.ticketItem;
  p_ticketItem[-1].fields.adjustHeight = this[2].fields.ticketId + ticketsHave;
  if ( !ticketItem )
  {
    ItemEntity = (System_Int32_array **)UserPresentListViewItem__get_ItemEntity((UserPresentListViewItem_o *)obj, 0LL);
    p_ticketItem->klass = (BattleServantConfConponent_c *)ItemEntity;
    sub_B5D560(p_ticketItem, ItemEntity, v11, v12, v13, v14, v15, v16);
  }
  return 0;
}