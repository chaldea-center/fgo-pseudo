void __fastcall UserPresentListViewManager___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v5; // x1
  __int64 v6; // x1
  ListViewSort_o *v7; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7

  if ( (byte_40F80C0 & 1) == 0 )
  {
    sub_B16FFC(&ListViewSort_TypeInfo, v1);
    sub_B16FFC(&UserPresentListViewManager_TypeInfo, v5);
    sub_B16FFC(&StringLiteral_15041/*"UserPresent"*/, v6);
    byte_40F80C0 = 1;
  }
  v7 = (ListViewSort_o *)sub_B170CC(ListViewSort_TypeInfo, v1, v2, v3, v4);
  ListViewSort___ctor_30208480(v7, (System_String_o *)StringLiteral_15041/*"UserPresent"*/, 1, 0, 0LL);
  static_fields = (BattleServantConfConponent_o *)UserPresentListViewManager_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v7;
  sub_B16F98(static_fields, (System_Int32_array **)v7, v9, v10, v11, v12, v13, v14);
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
  _BOOL8 v24; // x0
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x3
  __int64 v28; // x4
  System_Collections_Generic_IEnumerable_T__o *checkedIdList; // x22
  System_Collections_Generic_List_long__o *v30; // x21
  signed int max_length; // w8
  unsigned int v32; // w22
  Il2CppClass **v33; // x23
  Il2CppClass *v34; // x8
  UserPresentBoxEntity_o **v35; // x23
  Il2CppClass *v36; // t1
  __int64 v37; // x3
  __int64 v38; // x4
  UserPresentBoxEntity_o *v39; // x24
  UserPresentListViewItem_o *v40; // x23
  const MethodInfo *v41; // x3
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x0
  signed __int64 size; // x8
  struct System_Collections_Generic_List_long__o *v44; // x20
  unsigned __int64 v45; // x22
  UserPresentBoxWindow_o *v46; // x0
  const MethodInfo *v47; // x1
  __int64 v48; // x8
  unsigned __int64 v49; // x21
  UserPresentBoxEntity_o *v50; // x23
  UserPresentListViewItem_o *v51; // x22
  const MethodInfo *v52; // x3
  struct System_Collections_Generic_List_ListViewItem__o *v53; // x0

  if ( (byte_40F80AB & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewItem__Add__, presentList);
    sub_B16FFC(&Method_System_Collections_Generic_List_long__Remove__, v5);
    sub_B16FFC(&Method_System_Collections_Generic_List_long___ctor___66737392, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_long__get_Count__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_long__get_Item__, v8);
    sub_B16FFC(&System_Collections_Generic_List_long__TypeInfo, v9);
    sub_B16FFC(&UserPresentListViewItem_TypeInfo, v10);
    byte_40F80AB = 1;
  }
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
  this->fields.selectPresentData = 0LL;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.selectPresentData, 0LL, v11, v12, v13, v14, v15, v16);
  this->fields.presentIds = 0LL;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.presentIds, 0LL, v17, v18, v19, v20, v21, v22);
  m_parent = this->fields.m_parent;
  if ( !m_parent )
    goto LABEL_32;
  UserPresentBoxWindow__SetCheckedItemsButtonEnable(m_parent, 0, 0, 0LL);
  checkedIdList = (System_Collections_Generic_IEnumerable_T__o *)this->fields.checkedIdList;
  if ( checkedIdList )
  {
    v30 = (System_Collections_Generic_List_long__o *)sub_B170CC(
                                                       System_Collections_Generic_List_long__TypeInfo,
                                                       v25,
                                                       v26,
                                                       v27,
                                                       v28);
    System_Collections_Generic_List_long____ctor_49371452(
      v30,
      checkedIdList,
      (const MethodInfo_2F1593C *)Method_System_Collections_Generic_List_long___ctor___66737392);
    if ( !presentList )
      goto LABEL_32;
    max_length = presentList->max_length;
    if ( max_length >= 1 )
    {
      v32 = 0;
      while ( v32 < max_length )
      {
        v33 = &presentList->obj.klass + (int)v32;
        v36 = v33[4];
        v35 = (UserPresentBoxEntity_o **)(v33 + 4);
        v34 = v36;
        if ( !v36 || !v30 )
          goto LABEL_32;
        v24 = System_Collections_Generic_List_long___Remove(
                v30,
                (int64_t)v34->_1.namespaze,
                (const MethodInfo_2F17E1C *)Method_System_Collections_Generic_List_long__Remove__);
        if ( v32 >= presentList->max_length )
          goto LABEL_33;
        v39 = *v35;
        v40 = (UserPresentListViewItem_o *)sub_B170CC(UserPresentListViewItem_TypeInfo, v25, v26, v37, v38);
        UserPresentListViewItem___ctor(v40, v32, v39, v41);
        itemList = this->fields.itemList;
        if ( !itemList )
          goto LABEL_32;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)itemList,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v40,
          (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
        max_length = presentList->max_length;
        if ( (int)++v32 >= max_length )
          goto LABEL_14;
      }
      goto LABEL_33;
    }
LABEL_14:
    if ( !v30 )
LABEL_32:
      sub_B170D4();
    LODWORD(size) = v30->fields._size;
    v44 = this->fields.checkedIdList;
    if ( (int)size >= 1 )
    {
      v45 = 0LL;
      do
      {
        if ( v45 >= (unsigned int)size )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
        if ( !v44 )
          goto LABEL_32;
        System_Collections_Generic_List_long___Remove(
          v44,
          v30->fields._items->m_Items[v45],
          (const MethodInfo_2F17E1C *)Method_System_Collections_Generic_List_long__Remove__);
        size = v30->fields._size;
        v44 = this->fields.checkedIdList;
      }
      while ( (__int64)++v45 < size );
    }
    if ( !v44 )
      goto LABEL_32;
    if ( v44->fields._size >= 1 )
    {
      v46 = this->fields.m_parent;
      if ( !v46 )
        goto LABEL_32;
      UserPresentBoxWindow__SetCheckedItemsButtonEnable(v46, 1, 1, 0LL);
      UserPresentListViewManager__updateCheckStatus(this, v47);
    }
  }
  else
  {
    if ( !presentList )
      goto LABEL_32;
    v48 = *(_QWORD *)&presentList->max_length;
    if ( (int)v48 >= 1 )
    {
      v49 = 0LL;
      while ( v49 < (unsigned int)v48 )
      {
        v50 = presentList->m_Items[v49];
        v51 = (UserPresentListViewItem_o *)sub_B170CC(UserPresentListViewItem_TypeInfo, v25, v26, v27, v28);
        UserPresentListViewItem___ctor(v51, v49, v50, v52);
        v53 = this->fields.itemList;
        if ( !v53 )
          goto LABEL_32;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v53,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v51,
          (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
        LODWORD(v48) = presentList->max_length;
        if ( (__int64)++v49 >= (int)v48 )
          goto LABEL_31;
      }
LABEL_33:
      sub_B17100(v24, v25, v26);
      sub_B170A0();
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

  if ( (byte_40F80A6 & 1) == 0 )
  {
    sub_B16FFC(&UserPresentListViewManager_TypeInfo, v1);
    byte_40F80A6 = 1;
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
    sub_B170D4();
  ListViewSort__DeleteContinueData(sortInfo, 0LL);
}


void __fastcall UserPresentListViewManager__DestroyList(UserPresentListViewManager_o *this, const MethodInfo *method)
{
  ListViewSort_o *sort; // x0

  ListViewManager__DestroyList((ListViewManager_o *)this, 0LL);
  sort = this->fields.sort;
  if ( !sort )
    sub_B170D4();
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
  __int64 v11; // x3
  __int64 v12; // x4
  System_Action_o *v13; // x22

  if ( (byte_40F80BF & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, method);
    sub_B16FFC(&LocalizationManager_TypeInfo, v3);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    sub_B16FFC(&Method_UserPresentListViewManager__DlgForExpiredPresent_b__69_0__, v5);
    sub_B16FFC(&StringLiteral_10474/*"PRESENT_EXPIRED_ERROR_MESSAGE"*/, v6);
    byte_40F80BF = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v8 = LocalizationManager__Get((System_String_o *)StringLiteral_10474/*"PRESENT_EXPIRED_ERROR_MESSAGE"*/, 0LL);
  v13 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v9, v10, v11, v12);
  System_Action___ctor(
    v13,
    (Il2CppObject *)this,
    Method_UserPresentListViewManager__DlgForExpiredPresent_b__69_0__,
    0LL);
  if ( !Instance )
    sub_B170D4();
  CommonUI__OpenNotificationDialog(Instance, 0LL, v8, v13, -1, 0, 0, 0, 1, 0, 0, 0, 0LL, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall UserPresentListViewManager__EndNoticeDlg(
        UserPresentListViewManager_o *this,
        int32_t scene,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  UserPresentBoxErrorDialog_o *dialog; // x21
  System_Action_ShopRootConstants_State__o *v11; // x22
  CommonUI_o *Instance; // x0
  CommonUI_o *v13; // x0
  CommonUI_o *v14; // x0
  UserPresentListViewManager_ReceiveCallbackFunc_o *receivecCallbackFunc; // x0

  if ( (byte_40F80BA & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Action_SceneList_Type___ctor__, *(_QWORD *)&scene);
    sub_B16FFC(&System_Action_SceneList_Type__TypeInfo, v7);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v8);
    sub_B16FFC(&Method_UserPresentListViewManager_EndNoticeDlg__, v9);
    byte_40F80BA = 1;
  }
  dialog = this->fields.dialog;
  v11 = (System_Action_ShopRootConstants_State__o *)sub_B170CC(
                                                      System_Action_SceneList_Type__TypeInfo,
                                                      *(_QWORD *)&scene,
                                                      method,
                                                      v3,
                                                      v4);
  System_Action_ShopRootConstants_State____ctor(
    v11,
    (Il2CppObject *)this,
    Method_UserPresentListViewManager_EndNoticeDlg__,
    (const MethodInfo_24B6054 *)Method_System_Action_SceneList_Type___ctor__);
  if ( !dialog )
    goto LABEL_14;
  UserPresentBoxErrorDialog__remove_OnErrorDialogClosed(dialog, (System_Action_SceneList_Type__o *)v11, 0LL);
  if ( scene == -1 )
    goto LABEL_11;
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_14;
  if ( CommonUI__IsActive_MasterMission(Instance, 0LL) )
  {
    v13 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !v13 )
      goto LABEL_14;
    CommonUI__CloseMasterMission(v13, 0LL);
  }
  v14 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !v14 )
LABEL_14:
    sub_B170D4();
  CommonUI__CloseUsrPresentList(v14, 0LL);
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
  __int64 v3; // x3
  __int64 v4; // x4
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
  __int64 v25; // x1
  struct System_Collections_Generic_List_ListViewItem__o *presentAllSelectedList; // x0
  System_Collections_Generic_List_RegexCharClass_SingleRange__o **p_presentAllSelectedList; // x19
  System_Collections_Generic_IEnumerable_T__o *itemList; // x21
  System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *v29; // x22
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7
  __int64 v36; // x1
  __int64 v37; // x2
  __int64 v38; // x3
  __int64 v39; // x4
  struct System_Collections_Generic_List_ListViewItem__o *v40; // x20
  UserPresentListViewManager___c_c *v41; // x0
  struct UserPresentListViewManager___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__60_0; // x21
  Il2CppObject *v44; // x22
  struct UserPresentListViewManager___c_StaticFields *v45; // x0
  System_String_array **v46; // x2
  System_String_array **v47; // x3
  System_Boolean_array **v48; // x4
  System_Int32_array **v49; // x5
  System_Int32_array *v50; // x6
  System_Int32_array *v51; // x7
  __int64 v52; // x1
  __int64 v53; // x2
  __int64 v54; // x3
  __int64 v55; // x4
  UserPresentListViewManager___c_c *v56; // x0
  System_Collections_Generic_List_RegexCharClass_SingleRange__o *v57; // x20
  struct UserPresentListViewManager___c_StaticFields *v58; // x8
  System_Predicate_peRenderTexture_ChangeLayerObject__o *_9__60_1; // x21
  Il2CppObject *v60; // x22
  struct UserPresentListViewManager___c_StaticFields *v61; // x0
  System_String_array **v62; // x2
  System_String_array **v63; // x3
  System_Boolean_array **v64; // x4
  System_Int32_array **v65; // x5
  System_Int32_array *v66; // x6
  System_Int32_array *v67; // x7
  __int64 v68; // x3
  __int64 v69; // x4
  BalanceConfig_c *v70; // x0
  System_Collections_Generic_List_RegexCharClass_SingleRange__o *v71; // x20
  __int64 PresentBoxCheckMax; // x1
  int size; // w8
  __int64 v74; // x2
  UserPresentListViewManager___c_c *v75; // x0
  struct UserPresentListViewManager___c_StaticFields *v76; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__60_2; // x21
  Il2CppObject *v78; // x22
  struct UserPresentListViewManager___c_StaticFields *v79; // x0
  System_String_array **v80; // x2
  System_String_array **v81; // x3
  System_Boolean_array **v82; // x4
  System_Int32_array **v83; // x5
  System_Int32_array *v84; // x6
  System_Int32_array *v85; // x7
  __int64 v86; // x1
  __int64 v87; // x2
  __int64 v88; // x3
  __int64 v89; // x4
  System_Text_StringBuilder_o *v90; // x20
  signed __int64 v91; // x23
  unsigned __int64 v92; // x24
  System_Collections_Generic_List_RegexCharClass_SingleRange__o *v93; // x21
  System_Text_RegularExpressions_RegexCharClass_SingleRange_o *v94; // x8
  __int64 v95; // x11
  System_Text_RegularExpressions_RegexCharClass_SingleRange_o *v96; // x21
  System_String_o *v97; // x0
  const MethodInfo *v98; // x1
  System_String_o *v99; // x22
  Il2CppObject *NameText; // x0

  if ( (byte_40F80B7 & 1) == 0 )
  {
    sub_B16FFC(&BalanceConfig_TypeInfo, method);
    sub_B16FFC(&Method_System_Comparison_ListViewItem___ctor__, v6);
    sub_B16FFC(&System_Comparison_ListViewItem__TypeInfo, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewItem__Clear__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewItem__RemoveAll__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewItem__RemoveRange__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewItem__Sort__, v11);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewItem___ctor___66738096, v12);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v13);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v14);
    sub_B16FFC(&System_Collections_Generic_List_ListViewItem__TypeInfo, v15);
    sub_B16FFC(&LocalizationManager_TypeInfo, v16);
    sub_B16FFC(&Method_System_Predicate_ListViewItem___ctor__, v17);
    sub_B16FFC(&System_Predicate_ListViewItem__TypeInfo, v18);
    sub_B16FFC(&System_Text_StringBuilder_TypeInfo, v19);
    sub_B16FFC(&Method_UserPresentListViewManager___c__GetAllPresentStrings_b__60_0__, v20);
    sub_B16FFC(&Method_UserPresentListViewManager___c__GetAllPresentStrings_b__60_1__, v21);
    sub_B16FFC(&Method_UserPresentListViewManager___c__GetAllPresentStrings_b__60_2__, v22);
    sub_B16FFC(&UserPresentListViewManager___c_TypeInfo, v23);
    sub_B16FFC(&UserPresentListViewItem_TypeInfo, v24);
    sub_B16FFC(&StringLiteral_10479/*"PRESENT_INFO"*/, v25);
    byte_40F80B7 = 1;
  }
  presentAllSelectedList = this->fields.presentAllSelectedList;
  p_presentAllSelectedList = (System_Collections_Generic_List_RegexCharClass_SingleRange__o **)&this->fields.presentAllSelectedList;
  if ( presentAllSelectedList )
    System_Collections_Generic_List_XWeaponTrail_Element___Clear(
      (System_Collections_Generic_List_XWeaponTrail_Element__o *)presentAllSelectedList,
      (const MethodInfo_2F260E0 *)Method_System_Collections_Generic_List_ListViewItem__Clear__);
  itemList = (System_Collections_Generic_IEnumerable_T__o *)this->fields.itemList;
  v29 = (System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *)sub_B170CC(
                                                                          System_Collections_Generic_List_ListViewItem__TypeInfo,
                                                                          method,
                                                                          v2,
                                                                          v3,
                                                                          v4);
  System_Collections_Generic_List_WarBoardAIRoute_RouteData____ctor(
    v29,
    itemList,
    (const MethodInfo_2F2520C *)Method_System_Collections_Generic_List_ListViewItem___ctor___66738096);
  this->fields.presentAllSelectedList = (struct System_Collections_Generic_List_ListViewItem__o *)v29;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.presentAllSelectedList,
    (System_Int32_array **)v29,
    v30,
    v31,
    v32,
    v33,
    v34,
    v35);
  v40 = this->fields.presentAllSelectedList;
  v41 = UserPresentListViewManager___c_TypeInfo;
  if ( (BYTE3(UserPresentListViewManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UserPresentListViewManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserPresentListViewManager___c_TypeInfo);
    v41 = UserPresentListViewManager___c_TypeInfo;
  }
  static_fields = v41->static_fields;
  _9__60_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)static_fields->__9__60_0;
  if ( !_9__60_0 )
  {
    if ( (BYTE3(v41->vtable._0_Equals.methodPtr) & 4) != 0 && !v41->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v41);
      static_fields = UserPresentListViewManager___c_TypeInfo->static_fields;
    }
    v44 = (Il2CppObject *)static_fields->__9;
    _9__60_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B170CC(
                                                                           System_Comparison_ListViewItem__TypeInfo,
                                                                           v36,
                                                                           v37,
                                                                           v38,
                                                                           v39);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__60_0,
      v44,
      Method_UserPresentListViewManager___c__GetAllPresentStrings_b__60_0__,
      (const MethodInfo_25BFD48 *)Method_System_Comparison_ListViewItem___ctor__);
    v45 = UserPresentListViewManager___c_TypeInfo->static_fields;
    v45->__9__60_0 = (struct System_Comparison_ListViewItem__o *)_9__60_0;
    sub_B16F98(
      (BattleServantConfConponent_o *)&v45->__9__60_0,
      (System_Int32_array **)_9__60_0,
      v46,
      v47,
      v48,
      v49,
      v50,
      v51);
  }
  if ( !v40 )
    goto LABEL_62;
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v40,
    (System_Comparison_T__o *)_9__60_0,
    (const MethodInfo_2F27DB4 *)Method_System_Collections_Generic_List_ListViewItem__Sort__);
  v56 = UserPresentListViewManager___c_TypeInfo;
  v57 = *p_presentAllSelectedList;
  if ( (BYTE3(UserPresentListViewManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UserPresentListViewManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserPresentListViewManager___c_TypeInfo);
    v56 = UserPresentListViewManager___c_TypeInfo;
  }
  v58 = v56->static_fields;
  _9__60_1 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)v58->__9__60_1;
  if ( !_9__60_1 )
  {
    if ( (BYTE3(v56->vtable._0_Equals.methodPtr) & 4) != 0 && !v56->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v56);
      v58 = UserPresentListViewManager___c_TypeInfo->static_fields;
    }
    v60 = (Il2CppObject *)v58->__9;
    _9__60_1 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B170CC(
                                                                          System_Predicate_ListViewItem__TypeInfo,
                                                                          v52,
                                                                          v53,
                                                                          v54,
                                                                          v55);
    System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
      _9__60_1,
      v60,
      Method_UserPresentListViewManager___c__GetAllPresentStrings_b__60_1__,
      (const MethodInfo_2B0B204 *)Method_System_Predicate_ListViewItem___ctor__);
    v61 = UserPresentListViewManager___c_TypeInfo->static_fields;
    v61->__9__60_1 = (struct System_Predicate_ListViewItem__o *)_9__60_1;
    sub_B16F98(
      (BattleServantConfConponent_o *)&v61->__9__60_1,
      (System_Int32_array **)_9__60_1,
      v62,
      v63,
      v64,
      v65,
      v66,
      v67);
  }
  if ( !v57 )
    goto LABEL_62;
  System_Collections_Generic_List_ScrTerminalListTop_CaldeaFolderInfo___RemoveAll(
    (System_Collections_Generic_List_ScrTerminalListTop_CaldeaFolderInfo__o *)v57,
    (System_Predicate_T__o *)_9__60_1,
    (const MethodInfo_2F27828 *)Method_System_Collections_Generic_List_ListViewItem__RemoveAll__);
  v70 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v70 = BalanceConfig_TypeInfo;
  }
  v71 = *p_presentAllSelectedList;
  if ( !*p_presentAllSelectedList )
    goto LABEL_62;
  PresentBoxCheckMax = (unsigned int)v70->static_fields->PresentBoxCheckMax;
  size = v71->fields._size;
  v74 = (unsigned int)(size - PresentBoxCheckMax);
  if ( size > (int)PresentBoxCheckMax )
  {
    System_Collections_Generic_List_RegexCharClass_SingleRange___RemoveRange(
      *p_presentAllSelectedList,
      PresentBoxCheckMax,
      v74,
      (const MethodInfo_2F27A6C *)Method_System_Collections_Generic_List_ListViewItem__RemoveRange__);
    v71 = *p_presentAllSelectedList;
  }
  v75 = UserPresentListViewManager___c_TypeInfo;
  if ( (BYTE3(UserPresentListViewManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UserPresentListViewManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserPresentListViewManager___c_TypeInfo);
    v75 = UserPresentListViewManager___c_TypeInfo;
  }
  v76 = v75->static_fields;
  _9__60_2 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)v76->__9__60_2;
  if ( !_9__60_2 )
  {
    if ( (BYTE3(v75->vtable._0_Equals.methodPtr) & 4) != 0 && !v75->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v75);
      v76 = UserPresentListViewManager___c_TypeInfo->static_fields;
    }
    v78 = (Il2CppObject *)v76->__9;
    _9__60_2 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B170CC(
                                                                           System_Comparison_ListViewItem__TypeInfo,
                                                                           PresentBoxCheckMax,
                                                                           v74,
                                                                           v68,
                                                                           v69);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__60_2,
      v78,
      Method_UserPresentListViewManager___c__GetAllPresentStrings_b__60_2__,
      (const MethodInfo_25BFD48 *)Method_System_Comparison_ListViewItem___ctor__);
    v79 = UserPresentListViewManager___c_TypeInfo->static_fields;
    v79->__9__60_2 = (struct System_Comparison_ListViewItem__o *)_9__60_2;
    sub_B16F98(
      (BattleServantConfConponent_o *)&v79->__9__60_2,
      (System_Int32_array **)_9__60_2,
      v80,
      v81,
      v82,
      v83,
      v84,
      v85);
  }
  if ( !v71 )
    goto LABEL_62;
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v71,
    (System_Comparison_T__o *)_9__60_2,
    (const MethodInfo_2F27DB4 *)Method_System_Collections_Generic_List_ListViewItem__Sort__);
  v90 = (System_Text_StringBuilder_o *)sub_B170CC(System_Text_StringBuilder_TypeInfo, v86, v87, v88, v89);
  System_Text_StringBuilder___ctor(v90, 0LL);
  if ( !*p_presentAllSelectedList )
    goto LABEL_62;
  v91 = (*p_presentAllSelectedList)->fields._size;
  if ( (int)v91 >= 1 )
  {
    v92 = 0LL;
    while ( 1 )
    {
      if ( v92 )
      {
        if ( !v90 )
          break;
        System_Text_StringBuilder__Append_41917484(v90, 0xAu, 0LL);
      }
      v93 = *p_presentAllSelectedList;
      if ( !*p_presentAllSelectedList )
        break;
      if ( v92 >= (unsigned int)v93->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
      v94 = v93->fields._items->m_Items[v92];
      if ( v94
        && (v95 = *(&UserPresentListViewItem_TypeInfo->_2.bitflags2 + 1),
            *(&v94->klass->_2.bitflags2 + 1) >= (unsigned int)v95) )
      {
        v96 = (UserPresentListViewItem_c *)v94->klass->_2.typeHierarchy[v95 - 1] == UserPresentListViewItem_TypeInfo
            ? v93->fields._items->m_Items[v92]
            : 0LL;
      }
      else
      {
        v96 = 0LL;
      }
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v97 = LocalizationManager__Get((System_String_o *)StringLiteral_10479/*"PRESENT_INFO"*/, 0LL);
      if ( !v96 )
        break;
      v99 = v97;
      NameText = (Il2CppObject *)UserPresentListViewItem__get_NameText((UserPresentListViewItem_o *)v96, v98);
      if ( !v90 )
        break;
      System_Text_StringBuilder__AppendFormat_41920792(v90, v99, NameText, *(Il2CppObject **)&v96[7].fields._first, 0LL);
      if ( (__int64)++v92 >= v91 )
        return (System_String_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v90->klass->vtable._3_ToString.method)(
                                    v90,
                                    v90->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
    }
LABEL_62:
    sub_B170D4();
  }
  if ( !v90 )
    goto LABEL_62;
  return (System_String_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v90->klass->vtable._3_ToString.method)(
                              v90,
                              v90->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
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

  if ( (byte_40F80AC & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, *(_QWORD *)&index);
    sub_B16FFC(&UserPresentListViewItem_TypeInfo, v5);
    byte_40F80AC = 1;
  }
  itemList = this->fields.itemList;
  if ( !itemList )
    return 0LL;
  if ( itemList->fields._size <= (unsigned int)index )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
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
  ListViewSort_o **p_sort; // x20

  if ( (byte_40F80AA & 1) == 0 )
  {
    sub_B16FFC(&UserPresentListViewManager_TypeInfo, method);
    byte_40F80AA = 1;
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
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.sort, (System_Int32_array **)v11, v2, v3, v4, v5, v6, v7);
  if ( !this->fields.sort || (this->fields.sort->fields.listViewKind = 4, !*p_sort) )
    sub_B170D4();
  ListViewSort__Load(*p_sort, 0LL);
  ((void (__fastcall *)(UserPresentListViewManager_o *, Il2CppMethodPointer))this->klass->vtable._5_SetSortButtonImage.method)(
    this,
    this->klass->vtable._6_GetDragRoot.methodPtr);
}


void __fastcall UserPresentListViewManager__InitLoad(const MethodInfo *method)
{
  __int64 v1; // x1
  UserPresentListViewManager_c *v2; // x0
  ListViewSort_o *sortInfo; // x0

  if ( (byte_40F80A7 & 1) == 0 )
  {
    sub_B16FFC(&UserPresentListViewManager_TypeInfo, v1);
    byte_40F80A7 = 1;
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
    sub_B170D4();
  ListViewSort__InitLoad(sortInfo, 0LL);
}


void __fastcall UserPresentListViewManager__OnClickListCheck(
        UserPresentListViewManager_o *this,
        UserPresentListViewObject_o *obj,
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
  struct UserPresentListViewItem_o *Item; // x0
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
  struct UserPresentBoxEntity_o *usrPresentEnt; // x1
  UserPresentBoxEntity_o **p_selectPresentData; // x23
  __int64 v36; // x1
  __int64 v37; // x2
  __int64 v38; // x3
  __int64 v39; // x4
  System_Collections_Generic_List_long__o **p_checkedIdList; // x21
  System_Collections_Generic_List_long__o *v41; // x24
  System_String_array **v42; // x2
  System_String_array **v43; // x3
  System_Boolean_array **v44; // x4
  System_Int32_array **v45; // x5
  System_Int32_array *v46; // x6
  System_Int32_array *v47; // x7
  struct UserPresentListViewItem_o *v48; // x8
  System_Collections_Generic_List_long__o *v49; // x26
  int size; // w25
  int32_t v51; // w24
  const MethodInfo *v52; // x1
  struct ItemEntity_o *itemEnt; // x8
  int64_t endedAt; // x25
  WebViewManager_o *Instance; // x0
  UserItemMaster_o *MasterData_WarQuestSelectionMaster; // x24
  int64_t UserId; // x0
  BalanceConfig_c *v58; // x0
  int32_t v59; // w24
  SoundManager_c *v60; // x0
  const MethodInfo *v61; // x1
  DataMasterBase_WarMaster__WarEntity__int__o *Master_WarQuestSelectionMaster; // x0
  _QWORD *v63; // x0
  System_Reflection_MethodBase_o *v64; // x0
  int32_t v65; // w24
  BalanceConfig_c *v66; // x0
  struct BalanceConfig_StaticFields *static_fields; // x8
  const MethodInfo *v68; // x1
  BalanceConfig_c *v69; // x0
  int32_t v70; // w22
  UserPresentListViewItem_o *v71; // x0
  const MethodInfo *v72; // x3
  struct System_Collections_Generic_List_long__o *checkedIdList; // x8
  UserPresentBoxWindow_o *m_parent; // x0
  UserPresentBoxWindow_o *v75; // x0
  ItemEntity_o *v76; // [xsp+0h] [xbp-50h] BYREF
  UserItemEntity_o *entity; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_40F80B3 & 1) == 0 )
  {
    sub_B16FFC(&BalanceConfig_TypeInfo, obj);
    sub_B16FFC(&Method_DataManager_GetMasterData_UserItemMaster___, v5);
    sub_B16FFC(&Method_DataManager_GetMaster_ItemMaster___, v6);
    sub_B16FFC(&DataManager_TypeInfo, v7);
    sub_B16FFC(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_long__Add__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_long__RemoveAt__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_long___ctor__, v11);
    sub_B16FFC(&Method_System_Collections_Generic_List_long__get_Count__, v12);
    sub_B16FFC(&Method_System_Collections_Generic_List_long__get_Item__, v13);
    sub_B16FFC(&System_Collections_Generic_List_long__TypeInfo, v14);
    sub_B16FFC(&NetworkManager_TypeInfo, v15);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v16);
    sub_B16FFC(&SoundManager_TypeInfo, v17);
    sub_B16FFC(&Method_UserPresentListViewManager_OnClickListCheck__, v18);
    byte_40F80B3 = 1;
  }
  v76 = 0LL;
  entity = 0LL;
  if ( !obj )
    goto LABEL_88;
  Item = UserPresentListViewObject__GetItem(obj, (const MethodInfo *)obj);
  p_selectItem = &this->fields.selectItem;
  this->fields.selectItem = Item;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.selectItem,
    (System_Int32_array **)Item,
    v21,
    v22,
    v23,
    v24,
    v25,
    v26);
  selectItem = this->fields.selectItem;
  if ( !selectItem )
    goto LABEL_88;
  usrPresentEnt = selectItem->fields.usrPresentEnt;
  p_selectPresentData = &this->fields.selectPresentData;
  this->fields.selectPresentData = usrPresentEnt;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.selectPresentData,
    (System_Int32_array **)usrPresentEnt,
    v27,
    v28,
    v29,
    v30,
    v31,
    v32);
  p_checkedIdList = &this->fields.checkedIdList;
  if ( !this->fields.checkedIdList )
  {
    v41 = (System_Collections_Generic_List_long__o *)sub_B170CC(
                                                       System_Collections_Generic_List_long__TypeInfo,
                                                       v36,
                                                       v37,
                                                       v38,
                                                       v39);
    System_Collections_Generic_List_long____ctor(
      v41,
      (const MethodInfo_2F15744 *)Method_System_Collections_Generic_List_long___ctor__);
    *p_checkedIdList = v41;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.checkedIdList,
      (System_Int32_array **)v41,
      v42,
      v43,
      v44,
      v45,
      v46,
      v47);
  }
  v48 = *p_selectItem;
  if ( !*p_selectItem )
    goto LABEL_88;
  if ( v48->fields.presentId < 1 )
    return;
  v49 = *p_checkedIdList;
  if ( !*p_checkedIdList )
    goto LABEL_88;
  size = v49->fields._size;
  if ( size >= 1 )
  {
    v51 = 0;
    while ( 1 )
    {
      if ( v49->fields._size <= (unsigned int)v51 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
      if ( v49->fields._items->m_Items[v51] == v48->fields.presentId )
        break;
      if ( ++v51 >= size )
        goto LABEL_18;
      v49 = *p_checkedIdList;
      if ( !*p_checkedIdList )
        goto LABEL_88;
    }
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    if ( *p_checkedIdList )
    {
      System_Collections_Generic_List_long___RemoveAt(
        *p_checkedIdList,
        v51,
        (const MethodInfo_2F18158 *)Method_System_Collections_Generic_List_long__RemoveAt__);
      UserPresentListViewManager__updateCheckStatus(this, v61);
      return;
    }
LABEL_88:
    sub_B170D4();
  }
LABEL_18:
  if ( !*p_selectPresentData )
    goto LABEL_88;
  if ( UserPresentBoxEntity__IsExpired(*p_selectPresentData, 0, 0LL) )
    goto LABEL_42;
  if ( !*p_selectPresentData )
    goto LABEL_88;
  if ( (*p_selectPresentData)->fields.giftType == 2 )
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
      Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_88;
      MasterData_WarQuestSelectionMaster = (UserItemMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                 (DataManager_o *)Instance,
                                                                 (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserItemMaster___);
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      UserId = NetworkManager__get_UserId(0LL);
      if ( !*p_selectPresentData || !MasterData_WarQuestSelectionMaster )
        goto LABEL_88;
      UserItemMaster__TryGetEntity(
        MasterData_WarQuestSelectionMaster,
        &entity,
        UserId,
        (*p_selectPresentData)->fields.objectId,
        0LL);
      if ( entity )
      {
        if ( !*p_selectPresentData )
          goto LABEL_88;
        v58 = BalanceConfig_TypeInfo;
        v59 = (*p_selectPresentData)->fields.num + entity->fields.num;
        if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          v58 = BalanceConfig_TypeInfo;
        }
        if ( v59 > v58->static_fields->UserItemMax )
        {
          v60 = SoundManager_TypeInfo;
          if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) == 0 )
            goto LABEL_86;
          goto LABEL_84;
        }
        if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !DataManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        }
        Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_ItemMaster___);
        if ( !*p_selectPresentData || !Master_WarQuestSelectionMaster )
          goto LABEL_88;
        if ( DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
               Master_WarQuestSelectionMaster,
               (WarEntity_o **)&v76,
               (*p_selectPresentData)->fields.objectId,
               (const MethodInfo_266F3E4 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__) )
        {
          if ( !v76 )
            goto LABEL_88;
          if ( ItemEntity__GetMaxNum(v76, 0LL) >= 1 )
          {
            if ( !v76 )
              goto LABEL_88;
            if ( v59 > ItemEntity__GetMaxNum(v76, 0LL) )
            {
              v63 = Method_UserPresentListViewManager_OnClickListCheck__;
              if ( (*((_BYTE *)Method_UserPresentListViewManager_OnClickListCheck__ + 75) & 2) != 0 )
                v63 = (_QWORD *)sub_B17004(Method_UserPresentListViewManager_OnClickListCheck__);
              v64 = (System_Reflection_MethodBase_o *)sub_B16FE0(v63, v63[3]);
              OverwriteAssetSoundName__PlaySystemSe(v64, 1, 0LL);
              return;
            }
          }
        }
      }
      goto LABEL_61;
    }
LABEL_42:
    UserPresentListViewManager__DlgForExpiredPresent(this, v52);
    return;
  }
LABEL_61:
  if ( !*p_checkedIdList )
    goto LABEL_88;
  v65 = (*p_checkedIdList)->fields._size;
  v66 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v66 = BalanceConfig_TypeInfo;
  }
  static_fields = v66->static_fields;
  v60 = SoundManager_TypeInfo;
  if ( v65 >= static_fields->PresentBoxCheckMax )
  {
    if ( (WORD1(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) == 0 )
    {
LABEL_86:
      SoundManager__playSystemSe(1, 0LL);
      return;
    }
LABEL_84:
    if ( !v60->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(v60);
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
  if ( !*p_checkedIdList )
    goto LABEL_88;
  System_Collections_Generic_List_long___Add(
    *p_checkedIdList,
    (*p_selectItem)->fields.presentId,
    (const MethodInfo_2F164A0 *)Method_System_Collections_Generic_List_long__Add__);
  if ( !*p_checkedIdList )
    goto LABEL_88;
  v69 = BalanceConfig_TypeInfo;
  v70 = (*p_checkedIdList)->fields._size;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v69 = BalanceConfig_TypeInfo;
  }
  if ( v70 < v69->static_fields->PresentBoxCheckMax )
  {
    v71 = UserPresentListViewObject__GetItem(obj, v68);
    if ( !*p_checkedIdList )
      goto LABEL_88;
    if ( !v71 )
      goto LABEL_88;
    UserPresentListViewItem__setCheckBoxed(v71, 1, (*p_checkedIdList)->fields._size, v72);
    checkedIdList = this->fields.checkedIdList;
    if ( !checkedIdList )
      goto LABEL_88;
    m_parent = this->fields.m_parent;
    if ( !m_parent )
      goto LABEL_88;
    UserPresentBoxWindow__SetSelectCount(m_parent, checkedIdList->fields._size, 0LL);
  }
  UserPresentListViewManager__updateCheckStatus(this, v68);
  v75 = this->fields.m_parent;
  if ( !v75 )
    goto LABEL_88;
  UserPresentBoxWindow__SetCheckedItemsButtonEnable(v75, 1, 1, 0LL);
}


void __fastcall UserPresentListViewManager__OnClickListView(
        UserPresentListViewManager_o *this,
        UserPresentListViewObject_o *obj,
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
  UserPresentListViewItem_o *Item; // x0
  const MethodInfo *v23; // x1
  UserPresentListViewItem_o *v24; // x0
  const MethodInfo *v25; // x1
  struct System_Collections_Generic_List_long__o *checkedIdList; // x8
  struct UserPresentListViewItem_o *v27; // x0
  struct UserPresentListViewItem_o **p_selectItem; // x20
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  System_String_array **v35; // x2
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7
  struct UserPresentListViewItem_o *selectItem; // x8
  struct UserPresentBoxEntity_o *usrPresentEnt; // x1
  struct UserPresentBoxEntity_o **p_selectPresentData; // x21
  UserPresentBoxEntity_o *selectPresentData; // x0
  struct ItemEntity_o *itemEnt; // x8
  int64_t endedAt; // x23
  struct ItemEntity_o *v47; // x8
  const MethodInfo *v48; // x2
  struct ItemEntity_o *v49; // x8
  const MethodInfo *v50; // x1
  WebViewManager_o *Instance; // x0
  UserItemMaster_o *MasterData_WarQuestSelectionMaster; // x22
  int64_t UserId; // x0
  BalanceConfig_c *v54; // x0
  int32_t v55; // w22
  __int64 v56; // x1
  const MethodInfo *v57; // x2
  __int64 v58; // x3
  __int64 v59; // x4
  UserPresentListViewManager___c_c *v60; // x0
  struct UserPresentListViewManager___c_StaticFields *static_fields; // x8
  UserPresentListViewManager_ReceiveCallbackFunc_o *_9__55_0; // x20
  Il2CppObject *v63; // x21
  System_String_array **v64; // x2
  System_String_array **v65; // x3
  System_Boolean_array **v66; // x4
  System_Int32_array **v67; // x5
  System_Int32_array *v68; // x6
  System_Int32_array *v69; // x7
  struct UserPresentListViewManager___c_StaticFields *v70; // x0
  BattleServantConfConponent_o *p__9__55_0; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *Master_WarQuestSelectionMaster; // x0
  _QWORD *v73; // x0
  System_Reflection_MethodBase_o *v74; // x0
  __int64 v75; // x1
  __int64 v76; // x3
  __int64 v77; // x4
  UserPresentListViewManager___c_c *v78; // x0
  struct UserPresentListViewManager___c_StaticFields *v79; // x8
  Il2CppObject *v80; // x21
  struct UserPresentListViewManager___c_StaticFields *v81; // x0
  __int64 v82; // x1
  __int64 v83; // x2
  __int64 v84; // x3
  __int64 v85; // x4
  System_Collections_Generic_List_long__o *v86; // x21
  System_Collections_Generic_List_long__o **p_presentIds; // x20
  System_String_array **v88; // x2
  System_String_array **v89; // x3
  System_Boolean_array **v90; // x4
  System_Int32_array **v91; // x5
  System_Int32_array *v92; // x6
  System_Int32_array *v93; // x7
  struct UserPresentListViewItem_o *v94; // x8
  int64_t presentId; // x1
  System_Int64_array *v96; // x0
  const MethodInfo *v97; // x2
  WarEntity_o *v98; // [xsp+8h] [xbp-38h] BYREF
  UserItemEntity_o *entity; // [xsp+18h] [xbp-28h] BYREF

  if ( (byte_40F80B2 & 1) == 0 )
  {
    sub_B16FFC(&BalanceConfig_TypeInfo, obj);
    sub_B16FFC(&Method_DataManager_GetMasterData_UserItemMaster___, v5);
    sub_B16FFC(&Method_DataManager_GetMaster_ItemMaster___, v6);
    sub_B16FFC(&DataManager_TypeInfo, v7);
    sub_B16FFC(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_long__Add__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_long__ToArray__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_long___ctor__, v11);
    sub_B16FFC(&Method_System_Collections_Generic_List_long__get_Count__, v12);
    sub_B16FFC(&System_Collections_Generic_List_long__TypeInfo, v13);
    sub_B16FFC(&NetworkManager_TypeInfo, v14);
    sub_B16FFC(&UserPresentListViewManager_ReceiveCallbackFunc_TypeInfo, v15);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v16);
    sub_B16FFC(&SoundManager_TypeInfo, v17);
    sub_B16FFC(&Method_UserPresentListViewManager___c__OnClickListView_b__55_0__, v18);
    sub_B16FFC(&Method_UserPresentListViewManager___c__OnClickListView_b__55_1__, v19);
    sub_B16FFC(&UserPresentListViewManager___c_TypeInfo, v20);
    sub_B16FFC(&Method_UserPresentListViewManager_OnClickListView__, v21);
    byte_40F80B2 = 1;
  }
  entity = 0LL;
  v98 = 0LL;
  if ( !obj )
    goto LABEL_92;
  Item = UserPresentListViewObject__GetItem(obj, (const MethodInfo *)obj);
  if ( !Item )
    goto LABEL_92;
  if ( Item->fields.blocked )
    return;
  v24 = UserPresentListViewObject__GetItem(obj, v23);
  if ( !v24 )
    goto LABEL_92;
  if ( v24->fields.checkBoxed )
    return;
  checkedIdList = this->fields.checkedIdList;
  if ( checkedIdList )
  {
    if ( checkedIdList->fields._size > 0 )
      return;
  }
  this->fields.kind = 0;
  v27 = UserPresentListViewObject__GetItem(obj, v25);
  p_selectItem = &this->fields.selectItem;
  this->fields.selectItem = v27;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.selectItem,
    (System_Int32_array **)v27,
    v29,
    v30,
    v31,
    v32,
    v33,
    v34);
  selectItem = this->fields.selectItem;
  if ( !selectItem )
    goto LABEL_92;
  usrPresentEnt = selectItem->fields.usrPresentEnt;
  p_selectPresentData = &this->fields.selectPresentData;
  this->fields.selectPresentData = usrPresentEnt;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.selectPresentData,
    (System_Int32_array **)usrPresentEnt,
    v35,
    v36,
    v37,
    v38,
    v39,
    v40);
  selectPresentData = this->fields.selectPresentData;
  if ( !selectPresentData )
    goto LABEL_92;
  if ( UserPresentBoxEntity__IsExpired(selectPresentData, 0, 0LL) )
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
    if ( endedAt > NetworkManager__getTime(0LL) )
    {
      if ( !*p_selectItem )
        goto LABEL_92;
      v47 = (*p_selectItem)->fields.itemEnt;
      if ( !v47 )
        goto LABEL_92;
      if ( v47->fields.type == 24 )
      {
        if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !SoundManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
        }
        SoundManager__playSystemSe(0, 0LL);
        if ( *p_selectItem )
        {
          v49 = (*p_selectItem)->fields.itemEnt;
          if ( v49 )
          {
            UserPresentListViewManager__OpenSelectableDialog(this, v49->fields.id, v48);
            return;
          }
        }
        goto LABEL_92;
      }
      Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_92;
      MasterData_WarQuestSelectionMaster = (UserItemMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                 (DataManager_o *)Instance,
                                                                 (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserItemMaster___);
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      UserId = NetworkManager__get_UserId(0LL);
      if ( !*p_selectPresentData || !MasterData_WarQuestSelectionMaster )
        goto LABEL_92;
      if ( UserItemMaster__TryGetEntity(
             MasterData_WarQuestSelectionMaster,
             &entity,
             UserId,
             (*p_selectPresentData)->fields.objectId,
             0LL) )
      {
        if ( !entity || !*p_selectPresentData )
          goto LABEL_92;
        v54 = BalanceConfig_TypeInfo;
        v55 = (*p_selectPresentData)->fields.num + entity->fields.num;
        if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          v54 = BalanceConfig_TypeInfo;
        }
        if ( v55 > v54->static_fields->UserItemMax )
        {
          if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !SoundManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
          }
          SoundManager__playSystemSe(0, 0LL);
          v60 = UserPresentListViewManager___c_TypeInfo;
          if ( (BYTE3(UserPresentListViewManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UserPresentListViewManager___c_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UserPresentListViewManager___c_TypeInfo);
            v60 = UserPresentListViewManager___c_TypeInfo;
          }
          static_fields = v60->static_fields;
          _9__55_0 = static_fields->__9__55_0;
          if ( _9__55_0 )
            goto LABEL_60;
          if ( (BYTE3(v60->vtable._0_Equals.methodPtr) & 4) != 0 && !v60->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v60);
            static_fields = UserPresentListViewManager___c_TypeInfo->static_fields;
          }
          v63 = (Il2CppObject *)static_fields->__9;
          _9__55_0 = (UserPresentListViewManager_ReceiveCallbackFunc_o *)sub_B170CC(
                                                                           UserPresentListViewManager_ReceiveCallbackFunc_TypeInfo,
                                                                           v56,
                                                                           v57,
                                                                           v58,
                                                                           v59);
          UserPresentListViewManager_ReceiveCallbackFunc___ctor(
            _9__55_0,
            v63,
            Method_UserPresentListViewManager___c__OnClickListView_b__55_0__,
            0LL);
          v70 = UserPresentListViewManager___c_TypeInfo->static_fields;
          v70->__9__55_0 = _9__55_0;
          p__9__55_0 = (BattleServantConfConponent_o *)&v70->__9__55_0;
LABEL_59:
          sub_B16F98(p__9__55_0, (System_Int32_array **)_9__55_0, v64, v65, v66, v67, v68, v69);
LABEL_60:
          UserPresentListViewManager__showErrorResultDlg(this, _9__55_0, v57);
          return;
        }
        if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !DataManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        }
        Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_ItemMaster___);
        if ( !*p_selectPresentData || !Master_WarQuestSelectionMaster )
          goto LABEL_92;
        if ( DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
               Master_WarQuestSelectionMaster,
               &v98,
               (*p_selectPresentData)->fields.objectId,
               (const MethodInfo_266F3E4 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__) )
        {
          if ( !v98 )
            goto LABEL_92;
          if ( ItemEntity__GetMaxNum((ItemEntity_o *)v98, 0LL) >= 1 )
          {
            if ( !v98 )
              goto LABEL_92;
            if ( v55 > ItemEntity__GetMaxNum((ItemEntity_o *)v98, 0LL) )
            {
              v73 = Method_UserPresentListViewManager_OnClickListView__;
              if ( (*((_BYTE *)Method_UserPresentListViewManager_OnClickListView__ + 75) & 2) != 0 )
                v73 = (_QWORD *)sub_B17004(Method_UserPresentListViewManager_OnClickListView__);
              v74 = (System_Reflection_MethodBase_o *)sub_B16FE0(v73, v73[3]);
              OverwriteAssetSoundName__PlaySystemSe(v74, 0, 0LL);
              v78 = UserPresentListViewManager___c_TypeInfo;
              if ( (BYTE3(UserPresentListViewManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !UserPresentListViewManager___c_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(UserPresentListViewManager___c_TypeInfo);
                v78 = UserPresentListViewManager___c_TypeInfo;
              }
              v79 = v78->static_fields;
              _9__55_0 = v79->__9__55_1;
              if ( _9__55_0 )
                goto LABEL_60;
              if ( (BYTE3(v78->vtable._0_Equals.methodPtr) & 4) != 0 && !v78->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(v78);
                v79 = UserPresentListViewManager___c_TypeInfo->static_fields;
              }
              v80 = (Il2CppObject *)v79->__9;
              _9__55_0 = (UserPresentListViewManager_ReceiveCallbackFunc_o *)sub_B170CC(
                                                                               UserPresentListViewManager_ReceiveCallbackFunc_TypeInfo,
                                                                               v75,
                                                                               v57,
                                                                               v76,
                                                                               v77);
              UserPresentListViewManager_ReceiveCallbackFunc___ctor(
                _9__55_0,
                v80,
                Method_UserPresentListViewManager___c__OnClickListView_b__55_1__,
                0LL);
              v81 = UserPresentListViewManager___c_TypeInfo->static_fields;
              v81->__9__55_1 = _9__55_0;
              p__9__55_0 = (BattleServantConfConponent_o *)&v81->__9__55_1;
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
    UserPresentListViewManager__DlgForExpiredPresent(this, v50);
    return;
  }
LABEL_81:
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(8, 0LL);
  if ( !*p_selectItem )
    goto LABEL_92;
  this->fields._select_idx_k__BackingField = (*p_selectItem)->fields.index;
  v86 = (System_Collections_Generic_List_long__o *)sub_B170CC(
                                                     System_Collections_Generic_List_long__TypeInfo,
                                                     v82,
                                                     v83,
                                                     v84,
                                                     v85);
  System_Collections_Generic_List_long____ctor(
    v86,
    (const MethodInfo_2F15744 *)Method_System_Collections_Generic_List_long___ctor__);
  p_presentIds = &this->fields.presentIds;
  this->fields.presentIds = v86;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.presentIds,
    (System_Int32_array **)v86,
    v88,
    v89,
    v90,
    v91,
    v92,
    v93);
  v94 = this->fields.selectItem;
  if ( !v94 )
    goto LABEL_92;
  presentId = v94->fields.presentId;
  if ( presentId >= 1 )
  {
    if ( !*p_presentIds )
      goto LABEL_92;
    System_Collections_Generic_List_long___Add(
      *p_presentIds,
      presentId,
      (const MethodInfo_2F164A0 *)Method_System_Collections_Generic_List_long__Add__);
  }
  if ( !*p_presentIds
    || (v96 = System_Collections_Generic_List_long___ToArray(
                *p_presentIds,
                (const MethodInfo_2F185AC *)Method_System_Collections_Generic_List_long__ToArray__),
        !this->fields.m_parent) )
  {
LABEL_92:
    sub_B170D4();
  }
  UserPresentBoxWindow__receivePresent(this->fields.m_parent, v96, 0, 0, 0LL);
  UserPresentListViewManager__SetMode_21347816(this, 2, v97);
}


void __fastcall UserPresentListViewManager__OnClickSortAscendingOrder(
        UserPresentListViewManager_o *this,
        const MethodInfo *method)
{
  struct ListViewSort_o *sort; // x8

  if ( (byte_40F80BB & 1) == 0 )
  {
    sub_B16FFC(&SoundManager_TypeInfo, method);
    byte_40F80BB = 1;
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
      sub_B170D4();
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

  if ( (byte_40F80B1 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    byte_40F80B1 = 1;
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
          sub_B170D4();
        ((void (__fastcall *)(struct UIScrollView_o *, __int64, Il2CppMethodPointer))v13->klass->vtable._8_UpdateScrollbars.method)(
          v13,
          1LL,
          v13->klass->vtable._9_SetDragAmount.methodPtr);
      }
      callbackFunc2 = this->fields.callbackFunc2;
      this->fields.callbackFunc2 = 0LL;
      sub_B16F98((BattleServantConfConponent_o *)&this->fields.callbackFunc2, 0LL, v7, v8, v9, v10, v11, v12);
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
  __int64 v11; // x3
  __int64 v12; // x4
  System_Action_ShopRootConstants_State__o *v13; // x21

  if ( (byte_40F80B9 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Action_SceneList_Type___ctor__, msg);
    sub_B16FFC(&System_Action_SceneList_Type__TypeInfo, v5);
    sub_B16FFC(&Method_UserPresentListViewManager_EndNoticeDlg__, v6);
    byte_40F80B9 = 1;
  }
  dialog = this->fields.dialog;
  if ( !dialog
    || (UserPresentBoxErrorDialog__Open(dialog, msg, 0LL),
        v8 = this->fields.dialog,
        v13 = (System_Action_ShopRootConstants_State__o *)sub_B170CC(
                                                            System_Action_SceneList_Type__TypeInfo,
                                                            v9,
                                                            v10,
                                                            v11,
                                                            v12),
        System_Action_ShopRootConstants_State____ctor(
          v13,
          (Il2CppObject *)this,
          Method_UserPresentListViewManager_EndNoticeDlg__,
          (const MethodInfo_24B6054 *)Method_System_Action_SceneList_Type___ctor__),
        !v8) )
  {
    sub_B170D4();
  }
  UserPresentBoxErrorDialog__add_OnErrorDialogClosed(v8, (System_Action_SceneList_Type__o *)v13, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall UserPresentListViewManager__OpenSelectableDialog(
        UserPresentListViewManager_o *this,
        int32_t ticketId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
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
  __int64 v19; // x20
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x3
  __int64 v23; // x4
  struct System_Collections_Generic_List_ListViewItem__o *presentTicketList; // x0
  struct UserPresentBoxWindow_o *m_parent; // x8
  System_Collections_Generic_IEnumerable_T__o *itemList; // x22
  System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *v27; // x23
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7
  struct System_Collections_Generic_List_ListViewItem__o *v40; // x22
  __int64 v41; // x1
  __int64 v42; // x2
  __int64 v43; // x3
  __int64 v44; // x4
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v45; // x23
  __int64 v46; // x1
  __int64 v47; // x2
  __int64 v48; // x3
  __int64 v49; // x4
  struct System_Collections_Generic_List_ListViewItem__o *v50; // x21
  UserPresentListViewManager___c_c *v51; // x0
  struct UserPresentListViewManager___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__67_1; // x22
  Il2CppObject *v54; // x23
  struct UserPresentListViewManager___c_StaticFields *v55; // x0
  System_String_array **v56; // x2
  System_String_array **v57; // x3
  System_Boolean_array **v58; // x4
  System_Int32_array **v59; // x5
  System_Int32_array *v60; // x6
  System_Int32_array *v61; // x7
  PresentSelectableDlgComponent_o *selectDialog; // x0

  if ( (byte_40F80BD & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Comparison_ListViewItem___ctor__, *(_QWORD *)&ticketId);
    sub_B16FFC(&System_Comparison_ListViewItem__TypeInfo, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewItem__Clear__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewItem__RemoveAll__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewItem__Sort__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewItem___ctor___66738096, v11);
    sub_B16FFC(&System_Collections_Generic_List_ListViewItem__TypeInfo, v12);
    sub_B16FFC(&Method_System_Predicate_ListViewItem___ctor__, v13);
    sub_B16FFC(&System_Predicate_ListViewItem__TypeInfo, v14);
    sub_B16FFC(&Method_UserPresentListViewManager___c__OpenSelectableDialog_b__67_1__, v15);
    sub_B16FFC(&Method_UserPresentListViewManager___c__DisplayClass67_0__OpenSelectableDialog_b__0__, v16);
    sub_B16FFC(&UserPresentListViewManager___c__DisplayClass67_0_TypeInfo, v17);
    sub_B16FFC(&UserPresentListViewManager___c_TypeInfo, v18);
    byte_40F80BD = 1;
  }
  v19 = sub_B170CC(UserPresentListViewManager___c__DisplayClass67_0_TypeInfo, *(_QWORD *)&ticketId, method, v3, v4);
  UserPresentListViewManager___c__DisplayClass67_0___ctor(
    (UserPresentListViewManager___c__DisplayClass67_0_o *)v19,
    0LL);
  if ( !v19 )
    goto LABEL_19;
  *(_DWORD *)(v19 + 16) = ticketId;
  presentTicketList = this->fields.presentTicketList;
  if ( presentTicketList )
    System_Collections_Generic_List_XWeaponTrail_Element___Clear(
      (System_Collections_Generic_List_XWeaponTrail_Element__o *)presentTicketList,
      (const MethodInfo_2F260E0 *)Method_System_Collections_Generic_List_ListViewItem__Clear__);
  m_parent = this->fields.m_parent;
  if ( !m_parent )
    goto LABEL_19;
  m_parent->fields.mIsScrlResetPosition = 1;
  itemList = (System_Collections_Generic_IEnumerable_T__o *)this->fields.itemList;
  v27 = (System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *)sub_B170CC(
                                                                          System_Collections_Generic_List_ListViewItem__TypeInfo,
                                                                          v20,
                                                                          v21,
                                                                          v22,
                                                                          v23);
  System_Collections_Generic_List_WarBoardAIRoute_RouteData____ctor(
    v27,
    itemList,
    (const MethodInfo_2F2520C *)Method_System_Collections_Generic_List_ListViewItem___ctor___66738096);
  this->fields.presentTicketList = (struct System_Collections_Generic_List_ListViewItem__o *)v27;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.presentTicketList,
    (System_Int32_array **)v27,
    v28,
    v29,
    v30,
    v31,
    v32,
    v33);
  *(_DWORD *)(v19 + 20) = 0;
  *(_QWORD *)(v19 + 24) = 0LL;
  sub_B16F98((BattleServantConfConponent_o *)(v19 + 24), 0LL, v34, v35, v36, v37, v38, v39);
  v40 = this->fields.presentTicketList;
  v45 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B170CC(
                                                                   System_Predicate_ListViewItem__TypeInfo,
                                                                   v41,
                                                                   v42,
                                                                   v43,
                                                                   v44);
  System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
    v45,
    (Il2CppObject *)v19,
    Method_UserPresentListViewManager___c__DisplayClass67_0__OpenSelectableDialog_b__0__,
    (const MethodInfo_2B0B204 *)Method_System_Predicate_ListViewItem___ctor__);
  if ( !v40 )
    goto LABEL_19;
  System_Collections_Generic_List_ScrTerminalListTop_CaldeaFolderInfo___RemoveAll(
    (System_Collections_Generic_List_ScrTerminalListTop_CaldeaFolderInfo__o *)v40,
    (System_Predicate_T__o *)v45,
    (const MethodInfo_2F27828 *)Method_System_Collections_Generic_List_ListViewItem__RemoveAll__);
  v50 = this->fields.presentTicketList;
  v51 = UserPresentListViewManager___c_TypeInfo;
  if ( (BYTE3(UserPresentListViewManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UserPresentListViewManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserPresentListViewManager___c_TypeInfo);
    v51 = UserPresentListViewManager___c_TypeInfo;
  }
  static_fields = v51->static_fields;
  _9__67_1 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)static_fields->__9__67_1;
  if ( !_9__67_1 )
  {
    if ( (BYTE3(v51->vtable._0_Equals.methodPtr) & 4) != 0 && !v51->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v51);
      static_fields = UserPresentListViewManager___c_TypeInfo->static_fields;
    }
    v54 = (Il2CppObject *)static_fields->__9;
    _9__67_1 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B170CC(
                                                                           System_Comparison_ListViewItem__TypeInfo,
                                                                           v46,
                                                                           v47,
                                                                           v48,
                                                                           v49);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__67_1,
      v54,
      Method_UserPresentListViewManager___c__OpenSelectableDialog_b__67_1__,
      (const MethodInfo_25BFD48 *)Method_System_Comparison_ListViewItem___ctor__);
    v55 = UserPresentListViewManager___c_TypeInfo->static_fields;
    v55->__9__67_1 = (struct System_Comparison_ListViewItem__o *)_9__67_1;
    sub_B16F98(
      (BattleServantConfConponent_o *)&v55->__9__67_1,
      (System_Int32_array **)_9__67_1,
      v56,
      v57,
      v58,
      v59,
      v60,
      v61);
  }
  if ( !v50
    || (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
          (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v50,
          (System_Comparison_T__o *)_9__67_1,
          (const MethodInfo_2F27DB4 *)Method_System_Collections_Generic_List_ListViewItem__Sort__),
        (selectDialog = this->fields.selectDialog) == 0LL) )
  {
LABEL_19:
    sub_B170D4();
  }
  PresentSelectableDlgComponent__Open(selectDialog, *(ItemEntity_o **)(v19 + 24), *(_DWORD *)(v19 + 20), 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall UserPresentListViewManager__ReceiveMultiPresent(
        UserPresentListViewManager_o *this,
        int32_t kind,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
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
  __int64 v25; // x1
  __int64 v26; // x1
  System_Collections_Generic_List_long__o *v27; // x21
  System_Collections_Generic_List_long__o **p_presentIds; // x20
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  __int64 v35; // x1
  __int64 v36; // x2
  __int64 v37; // x3
  __int64 v38; // x4
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v39; // x21
  __int64 v40; // x8
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *v41; // x0
  const MethodInfo_2F25CD8 **v42; // x26
  UserPresentListViewItem_o *current; // x23
  __int64 v44; // x9
  System_Collections_Generic_List_long__o *checkedIdList; // x0
  UserPresentBoxEntity_o *usrPresentEnt; // x0
  bool IsExpired; // w0
  const MethodInfo *v48; // x1
  struct UserPresentBoxEntity_o *v49; // x9
  struct ItemEntity_o *itemEnt; // x9
  const MethodInfo_2F25CD8 **v51; // x20
  int64_t endedAt; // x26
  bool v53; // cc
  System_String_o *NameText; // x1
  const MethodInfo *v55; // x1
  System_String_o *v56; // x0
  System_String_o **p_expiredPresents_k__BackingField; // x22
  System_Int32_array **v58; // x1
  System_String_array **v59; // x2
  System_String_array **v60; // x3
  System_Boolean_array **v61; // x4
  System_Int32_array **v62; // x5
  System_Int32_array *v63; // x6
  System_Int32_array *v64; // x7
  System_Int32_array **v65; // x0
  System_String_array **v66; // x2
  System_String_array **v67; // x3
  System_Boolean_array **v68; // x4
  System_Int32_array **v69; // x5
  System_Int32_array *v70; // x6
  System_Int32_array *v71; // x7
  System_Int64_array *v72; // x0
  System_Collections_Generic_List_Enumerator_T__o v73; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v74; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_40F80B6 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__, *(_QWORD *)&kind);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_long__Add__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_string__Add__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_string__Contains__, v11);
    sub_B16FFC(&Method_System_Collections_Generic_List_long__Contains__, v12);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v13);
    sub_B16FFC(&Method_System_Collections_Generic_List_string__RemoveAt__, v14);
    sub_B16FFC(&Method_System_Collections_Generic_List_long__ToArray__, v15);
    sub_B16FFC(&Method_System_Collections_Generic_List_string___ctor__, v16);
    sub_B16FFC(&Method_System_Collections_Generic_List_long___ctor__, v17);
    sub_B16FFC(&Method_System_Collections_Generic_List_string__get_Count__, v18);
    sub_B16FFC(&Method_System_Collections_Generic_List_string__get_Item__, v19);
    sub_B16FFC(&System_Collections_Generic_List_string__TypeInfo, v20);
    sub_B16FFC(&System_Collections_Generic_List_long__TypeInfo, v21);
    sub_B16FFC(&NetworkManager_TypeInfo, v22);
    sub_B16FFC(&UserPresentListViewItem_TypeInfo, v23);
    sub_B16FFC(&StringLiteral_15571/*"["*/, v24);
    sub_B16FFC(&StringLiteral_1/*""*/, v25);
    sub_B16FFC(&StringLiteral_15807/*"]"*/, v26);
    byte_40F80B6 = 1;
  }
  memset(&v74, 0, sizeof(v74));
  this->fields.kind = kind;
  v27 = (System_Collections_Generic_List_long__o *)sub_B170CC(
                                                     System_Collections_Generic_List_long__TypeInfo,
                                                     *(_QWORD *)&kind,
                                                     method,
                                                     v3,
                                                     v4);
  System_Collections_Generic_List_long____ctor(
    v27,
    (const MethodInfo_2F15744 *)Method_System_Collections_Generic_List_long___ctor__);
  p_presentIds = &this->fields.presentIds;
  this->fields.presentIds = v27;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.presentIds,
    (System_Int32_array **)v27,
    v29,
    v30,
    v31,
    v32,
    v33,
    v34);
  v39 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_string__TypeInfo,
                                                                                                  v35,
                                                                                                  v36,
                                                                                                  v37,
                                                                                                  v38);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v39,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_string___ctor__);
  v40 = 184LL;
  if ( kind == 1 )
    v40 = 424LL;
  v41 = *(System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o **)((char *)&this->klass + v40);
  if ( !v41 )
    goto LABEL_53;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v73,
    v41,
    (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  v42 = (const MethodInfo_2F25CD8 **)&Method_System_Collections_Generic_List_string__Add__;
  v74 = v73;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v74,
            (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__) )
  {
    current = (UserPresentListViewItem_o *)v74.fields.current;
    if ( v74.fields.current )
    {
      v44 = *(&UserPresentListViewItem_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v74.fields.current->klass->_2.bitflags2 + 1) < (unsigned int)v44
        || (UserPresentListViewItem_c *)v74.fields.current->klass->_2.typeHierarchy[v44 - 1] != UserPresentListViewItem_TypeInfo )
      {
        sub_B173C8(v74.fields.current);
LABEL_47:
        sub_B170D4();
      }
    }
    switch ( kind )
    {
      case 1:
        if ( !v74.fields.current )
          sub_B170D4();
        goto LABEL_19;
      case 2:
        if ( !v74.fields.current )
          sub_B170D4();
        if ( !Gift__IsServant_28854740((int32_t)v74.fields.current[10].monitor, 0LL)
          && !Gift__IsCommandCode_28855136(current->fields.giftType, 0LL) )
        {
          goto LABEL_19;
        }
        break;
      case 3:
        if ( !v74.fields.current )
          sub_B170D4();
        checkedIdList = this->fields.checkedIdList;
        if ( !checkedIdList )
          sub_B170D4();
        if ( System_Collections_Generic_List_long___Contains(
               checkedIdList,
               (int64_t)v74.fields.current[10].klass,
               (const MethodInfo_2F168F4 *)Method_System_Collections_Generic_List_long__Contains__) )
        {
LABEL_19:
          usrPresentEnt = current->fields.usrPresentEnt;
          if ( !usrPresentEnt )
            goto LABEL_47;
          IsExpired = UserPresentBoxEntity__IsExpired(usrPresentEnt, 0, 0LL);
          v49 = current->fields.usrPresentEnt;
          if ( !v49 )
            sub_B170D4();
          if ( v49->fields.giftType == 2 )
          {
            itemEnt = current->fields.itemEnt;
            if ( !itemEnt )
              sub_B170D4();
            if ( itemEnt->fields.type != 24 )
            {
              if ( IsExpired )
                goto LABEL_30;
              v51 = v42;
              endedAt = itemEnt->fields.endedAt;
              if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !NetworkManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
              }
              v53 = endedAt <= NetworkManager__getTime(0LL);
              v42 = v51;
              p_presentIds = &this->fields.presentIds;
              if ( v53 )
                goto LABEL_30;
LABEL_38:
              if ( !*p_presentIds )
                sub_B170D4();
              System_Collections_Generic_List_long___Add(
                *p_presentIds,
                current->fields.presentId,
                (const MethodInfo_2F164A0 *)Method_System_Collections_Generic_List_long__Add__);
            }
          }
          else
          {
            if ( !IsExpired )
              goto LABEL_38;
LABEL_30:
            NameText = UserPresentListViewItem__get_NameText(current, v48);
            if ( !v39 )
              sub_B170D4();
            if ( !System_Collections_Generic_List_WarBoardManager_TaskList___Contains(
                    (System_Collections_Generic_List_WarBoardManager_TaskList__o *)v39,
                    (WarBoardManager_TaskList_o *)NameText,
                    (const MethodInfo_2F26128 *)Method_System_Collections_Generic_List_string__Contains__) )
            {
              v56 = UserPresentListViewItem__get_NameText(current, v55);
              System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                v39,
                (EventMissionProgressRequest_Argument_ProgressData_o *)v56,
                *v42);
            }
          }
        }
        break;
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v74,
    (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
  p_expiredPresents_k__BackingField = &this->fields._expiredPresents_k__BackingField;
  v58 = (System_Int32_array **)StringLiteral_1/*""*/;
  this->fields._expiredPresents_k__BackingField = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields._expiredPresents_k__BackingField,
    v58,
    v59,
    v60,
    v61,
    v62,
    v63,
    v64);
  if ( !v39 )
    goto LABEL_53;
  while ( v39->fields._size >= 1 )
  {
    v65 = (System_Int32_array **)System_String__Concat_43747144(
                                   *p_expiredPresents_k__BackingField,
                                   (System_String_o *)StringLiteral_15571/*"["*/,
                                   (System_String_o *)v39->fields._items->m_Items[0],
                                   (System_String_o *)StringLiteral_15807/*"]"*/,
                                   0LL);
    *p_expiredPresents_k__BackingField = (System_String_o *)v65;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields._expiredPresents_k__BackingField,
      v65,
      v66,
      v67,
      v68,
      v69,
      v70,
      v71);
    System_Collections_Generic_List_XWeaponTrail_Element___RemoveAt(
      (System_Collections_Generic_List_XWeaponTrail_Element__o *)v39,
      0,
      (const MethodInfo_2F279C8 *)Method_System_Collections_Generic_List_string__RemoveAt__);
  }
  if ( !*p_presentIds
    || (v72 = System_Collections_Generic_List_long___ToArray(
                *p_presentIds,
                (const MethodInfo_2F185AC *)Method_System_Collections_Generic_List_long__ToArray__),
        !this->fields.m_parent) )
  {
LABEL_53:
    sub_B170D4();
  }
  UserPresentBoxWindow__receivePresent(this->fields.m_parent, v72, 0, 0, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall UserPresentListViewManager__RequestItemSelect(
        UserPresentListViewManager_o *this,
        ItemSelectEntity_o *selectItm,
        int32_t num,
        const MethodInfo *method)
{
  __int64 v4; // x4
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  System_Collections_Generic_List_long__o *v17; // x22
  struct System_Collections_Generic_List_ListViewItem__o *presentTicketList; // x19
  signed __int64 size; // x24
  int v20; // w25
  int v21; // w26
  unsigned __int64 v22; // x27
  ListViewItem_o *v23; // x19
  __int64 v24; // x10
  UserPresentBoxEntity_o *sortValue0; // x0
  _QWORD *monitor; // x8
  int64_t v27; // x23
  int64_t v28; // x8
  int64_t sortValue1; // x1
  int v30; // w19
  UserPresentBoxWindow_o *m_parent; // x23
  System_Int64_array *v32; // x0
  const MethodInfo *v33; // x2
  struct System_Collections_Generic_List_ListViewItem__o *v34; // x19
  ListViewItem_o *v35; // x0
  __int64 v36; // x9
  System_String_o **v37; // x8
  struct System_String_o *v38; // x0
  System_String_array **v39; // x2
  System_String_array **v40; // x3
  System_Boolean_array **v41; // x4
  System_Int32_array **v42; // x5
  System_Int32_array *v43; // x6
  System_Int32_array *v44; // x7
  UserPresentBoxWindow_o *v45; // x20
  System_Int64_array *v46; // x0
  UserPresentListViewManager_o *v47; // x0
  const MethodInfo *v48; // x1
  int32_t selectNum; // [xsp+4h] [xbp-5Ch]

  if ( (byte_40F80BE & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_long__Add__, selectItm);
    sub_B16FFC(&Method_System_Collections_Generic_List_long__ToArray__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_long___ctor__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v11);
    sub_B16FFC(&System_Collections_Generic_List_long__TypeInfo, v12);
    sub_B16FFC(&NetworkManager_TypeInfo, v13);
    sub_B16FFC(&UserPresentListViewItem_TypeInfo, v14);
    sub_B16FFC(&StringLiteral_15571/*"["*/, v15);
    sub_B16FFC(&StringLiteral_15807/*"]"*/, v16);
    byte_40F80BE = 1;
  }
  v17 = (System_Collections_Generic_List_long__o *)sub_B170CC(
                                                     System_Collections_Generic_List_long__TypeInfo,
                                                     selectItm,
                                                     *(_QWORD *)&num,
                                                     method,
                                                     v4);
  System_Collections_Generic_List_long____ctor(
    v17,
    (const MethodInfo_2F15744 *)Method_System_Collections_Generic_List_long___ctor__);
  presentTicketList = this->fields.presentTicketList;
  if ( !presentTicketList || !selectItm )
    goto LABEL_25;
  size = presentTicketList->fields._size;
  selectNum = num;
  if ( (int)size < 1 || (v20 = selectItm->fields.requireNum * num, v20 < 1) )
  {
    if ( v17 )
    {
LABEL_27:
      m_parent = this->fields.m_parent;
      v32 = System_Collections_Generic_List_long___ToArray(
              v17,
              (const MethodInfo_2F185AC *)Method_System_Collections_Generic_List_long__ToArray__);
      if ( m_parent )
      {
        UserPresentBoxWindow__receivePresent(m_parent, v32, selectItm->fields.idx, selectNum, 0LL);
        UserPresentListViewManager__SetMode_21347816(this, 2, v33);
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
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
    v23 = presentTicketList->fields._items->m_Items[v22];
    if ( !v23 )
      goto LABEL_25;
    v24 = *(&UserPresentListViewItem_TypeInfo->_2.bitflags2 + 1);
    if ( *(&v23->klass->_2.bitflags2 + 1) < (unsigned int)v24 )
      goto LABEL_25;
    if ( (UserPresentListViewItem_c *)v23->klass->_2.typeHierarchy[v24 - 1] != UserPresentListViewItem_TypeInfo )
      goto LABEL_25;
    sortValue0 = (UserPresentBoxEntity_o *)v23[1].fields.sortValue0;
    if ( !sortValue0 )
      goto LABEL_25;
    if ( UserPresentBoxEntity__IsExpired(sortValue0, 0, 0LL) )
      break;
    monitor = v23[1].monitor;
    if ( !monitor )
      goto LABEL_25;
    v27 = monitor[12];
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    if ( v27 <= NetworkManager__getTime(0LL) )
      break;
    v28 = v23[1].fields.sortValue0;
    if ( !v28 || !v17 )
      goto LABEL_25;
    sortValue1 = v23[1].fields.sortValue1;
    v30 = *(_DWORD *)(v28 + 80);
    System_Collections_Generic_List_long___Add(
      v17,
      sortValue1,
      (const MethodInfo_2F164A0 *)Method_System_Collections_Generic_List_long__Add__);
    if ( (__int64)++v22 >= size )
      goto LABEL_27;
    v21 += v30;
    if ( v21 >= v20 )
      goto LABEL_27;
    presentTicketList = this->fields.presentTicketList;
    if ( !presentTicketList )
      goto LABEL_25;
  }
  v34 = this->fields.presentTicketList;
  if ( !v34 )
    goto LABEL_25;
  if ( !v34->fields._size )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
  v35 = v34->fields._items->m_Items[0];
  if ( !v35 )
    goto LABEL_25;
  v36 = *(&UserPresentListViewItem_TypeInfo->_2.bitflags2 + 1);
  if ( *(&v35->klass->_2.bitflags2 + 1) >= (unsigned int)v36
    && (UserPresentListViewItem_c *)v35->klass->_2.typeHierarchy[v36 - 1] == UserPresentListViewItem_TypeInfo )
  {
    v37 = (System_String_o **)v35[1].monitor;
    if ( v37 )
    {
      v38 = System_String__Concat_43746016(
              (System_String_o *)StringLiteral_15571/*"["*/,
              v37[3],
              (System_String_o *)StringLiteral_15807/*"]"*/,
              0LL);
      this->fields._expiredPresents_k__BackingField = v38;
      sub_B16F98(
        (BattleServantConfConponent_o *)&this->fields._expiredPresents_k__BackingField,
        (System_Int32_array **)v38,
        v39,
        v40,
        v41,
        v42,
        v43,
        v44);
      if ( v17 )
      {
        v45 = this->fields.m_parent;
        v46 = System_Collections_Generic_List_long___ToArray(
                v17,
                (const MethodInfo_2F185AC *)Method_System_Collections_Generic_List_long__ToArray__);
        if ( v45 )
        {
          UserPresentBoxWindow__receivePresent(v45, v46, selectItm->fields.idx, 0, 0LL);
          return;
        }
      }
    }
LABEL_25:
    sub_B170D4();
  }
  v47 = (UserPresentListViewManager_o *)sub_B173C8(v35);
  UserPresentListViewManager___ctor(v47, v48);
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
  __int64 v18; // x3
  __int64 v19; // x4
  Il2CppObject *current; // x21
  System_Action_o *v21; // x22
  const MethodInfo *v22; // x3
  System_Collections_Generic_List_Enumerator_T__o v23; // [xsp+8h] [xbp-58h] BYREF
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  if ( (byte_40F80AF & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, *(_QWORD *)&mode);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_UserPresentListViewObject__Dispose__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_UserPresentListViewObject__MoveNext__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_UserPresentListViewObject__get_Current__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_UserPresentListViewObject__GetEnumerator__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_UserPresentListViewObject__get_Count__, v11);
    sub_B16FFC(&Method_UserPresentListViewManager_OnMoveEnd__, v12);
    sub_B16FFC(&StringLiteral_10004/*"OnMoveEnd"*/, v13);
    byte_40F80AF = 1;
  }
  memset(&v23, 0, sizeof(v23));
  ObjectList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)UserPresentListViewManager__get_ObjectList(
                                                                                                this,
                                                                                                *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_B170D4();
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10004/*"OnMoveEnd"*/,
      delay,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v23,
      ObjectList,
      (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_UserPresentListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v23,
              (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_UserPresentListViewObject__MoveNext__) )
    {
      current = v23.fields.current;
      v21 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v16, v17, v18, v19);
      System_Action___ctor(v21, (Il2CppObject *)this, Method_UserPresentListViewManager_OnMoveEnd__, 0LL);
      if ( !current )
        sub_B170D4();
      zero = UnityEngine_Vector3__get_zero(0LL);
      UserPresentListViewObject__Init(
        (UserPresentListViewObject_o *)current,
        mode,
        v21,
        zero.fields.x,
        *(UnityEngine_Vector3_o *)&zero.fields.y,
        v22);
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v23,
      (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_UserPresentListViewObject__Dispose__);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall UserPresentListViewManager__RequestListObject_21348036(
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
  __int64 v16; // x3
  __int64 v17; // x4
  Il2CppObject *current; // x21
  System_Action_o *v19; // x22
  const MethodInfo *v20; // x3
  System_Collections_Generic_List_Enumerator_T__o v21; // [xsp+8h] [xbp-58h] BYREF
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  if ( (byte_40F80B0 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, *(_QWORD *)&mode);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_UserPresentListViewObject__Dispose__, v5);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_UserPresentListViewObject__MoveNext__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_UserPresentListViewObject__get_Current__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_UserPresentListViewObject__GetEnumerator__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_UserPresentListViewObject__get_Count__, v9);
    sub_B16FFC(&Method_UserPresentListViewManager_OnMoveEnd__, v10);
    sub_B16FFC(&StringLiteral_10004/*"OnMoveEnd"*/, v11);
    byte_40F80B0 = 1;
  }
  memset(&v21, 0, sizeof(v21));
  ObjectList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)UserPresentListViewManager__get_ObjectList(
                                                                                                this,
                                                                                                *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_B170D4();
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10004/*"OnMoveEnd"*/,
      0.0,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v21,
      ObjectList,
      (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_UserPresentListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v21,
              (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_UserPresentListViewObject__MoveNext__) )
    {
      current = v21.fields.current;
      v19 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v14, v15, v16, v17);
      System_Action___ctor(v19, (Il2CppObject *)this, Method_UserPresentListViewManager_OnMoveEnd__, 0LL);
      if ( !current )
        sub_B170D4();
      zero = UnityEngine_Vector3__get_zero(0LL);
      UserPresentListViewObject__Init(
        (UserPresentListViewObject_o *)current,
        mode,
        v19,
        zero.fields.x,
        *(UnityEngine_Vector3_o *)&zero.fields.y,
        v20);
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v21,
      (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_UserPresentListViewObject__Dispose__);
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
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.callbackFunc,
    (System_Int32_array **)callback,
    (System_String_array **)callback,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  UserPresentListViewManager__SetMode_21347816(this, mode, v10);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall UserPresentListViewManager__SetMode_21347816(
        UserPresentListViewManager_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_GameObject__o *objectList; // x8
  const MethodInfo *v6; // x2
  int32_t v7; // w1

  if ( (byte_40F80AE & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_GameObject__get_Count__, *(_QWORD *)&mode);
    byte_40F80AE = 1;
  }
  objectList = this->fields.objectList;
  this->fields.initMode = mode;
  if ( !objectList )
    sub_B170D4();
  this->fields.callbackCount = objectList->fields._size;
  ListViewManager__set_IsInput((ListViewManager_o *)this, mode == 1, 0LL);
  if ( mode == 1 )
  {
    v7 = 3;
LABEL_8:
    UserPresentListViewManager__RequestListObject_21348036(this, v7, v6);
    return;
  }
  if ( mode == 2 )
  {
    v7 = 4;
    goto LABEL_8;
  }
}


void __fastcall UserPresentListViewManager__SetMode_21347980(
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
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.callbackFunc2,
    (System_Int32_array **)callback,
    (System_String_array **)callback,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  UserPresentListViewManager__SetMode_21347816(this, mode, v10);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall UserPresentListViewManager__SetObjectItem(
        UserPresentListViewManager_o *this,
        ListViewObject_o *obj,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  __int64 v6; // x10
  int32_t initMode; // w20
  const MethodInfo *v8; // x3
  float v9; // s0
  int v10; // s1
  int32_t v13; // w1

  if ( (byte_40F80AD & 1) == 0 )
  {
    sub_B16FFC(&UserPresentListViewObject_TypeInfo, obj);
    byte_40F80AD = 1;
  }
  if ( !obj
    || (v6 = *(&UserPresentListViewObject_TypeInfo->_2.bitflags2 + 1),
        *(&obj->klass->_2.bitflags2 + 1) < (unsigned int)v6)
    || (UserPresentListViewObject_c *)obj->klass->_2.typeHierarchy[v6 - 1] != UserPresentListViewObject_TypeInfo )
  {
    sub_B170D4();
  }
  initMode = this->fields.initMode;
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
  System_String_o *SortKindButtonText; // x0
  UnityEngine_Object_o *sortOrderSprite; // x20
  struct ListViewSort_o *v12; // x8
  UISprite_o *sortExplanationSprite; // x0
  System_String_o **v14; // x8
  struct ListViewSort_o *v15; // x8
  UISprite_o *v16; // x0
  System_String_o **v17; // x8

  if ( (byte_40F80BC & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    sub_B16FFC(&StringLiteral_16955/*"btn_sort_up"*/, v3);
    sub_B16FFC(&StringLiteral_16995/*"btn_txt_new"*/, v4);
    sub_B16FFC(&StringLiteral_17002/*"btn_txt_old"*/, v5);
    sub_B16FFC(&StringLiteral_16952/*"btn_sort_down"*/, v6);
    byte_40F80BC = 1;
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
    SortKindButtonText = ListViewSort__GetSortKindButtonText(sort, 0LL);
    if ( !v9 )
      goto LABEL_26;
    UILabel__set_text(v9, SortKindButtonText, 0LL);
  }
  sortOrderSprite = (UnityEngine_Object_o *)this->fields.sortOrderSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(sortOrderSprite, 0LL, 0LL) )
  {
    v12 = this->fields.sort;
    if ( v12 )
    {
      sortExplanationSprite = this->fields.sortExplanationSprite;
      if ( sortExplanationSprite )
      {
        v14 = (System_String_o **)(v12->fields.isAscendingOrder ? &StringLiteral_17002/*"btn_txt_old"*/ : &StringLiteral_16995/*"btn_txt_new"*/);
        UISprite__set_spriteName(sortExplanationSprite, *v14, 0LL);
        v15 = this->fields.sort;
        if ( v15 )
        {
          v16 = this->fields.sortOrderSprite;
          if ( v16 )
          {
            if ( v15->fields.isAscendingOrder )
              v17 = (System_String_o **)&StringLiteral_16952/*"btn_sort_down"*/;
            else
              v17 = (System_String_o **)&StringLiteral_16955/*"btn_sort_up"*/;
            UISprite__set_spriteName(v16, *v17, 0LL);
            return;
          }
        }
      }
    }
LABEL_26:
    sub_B170D4();
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
  __int64 v9; // x3
  __int64 v10; // x4
  System_Action_o *v11; // x21

  if ( (byte_40F80C1 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, method);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v3);
    sub_B16FFC(&Method_UserPresentListViewManager__DlgForExpiredPresent_b__69_1__, v4);
    byte_40F80C1 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__CloseNotificationDialog(Instance, 0LL),
        v6 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
        v11 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v7, v8, v9, v10),
        System_Action___ctor(
          v11,
          (Il2CppObject *)this,
          Method_UserPresentListViewManager__DlgForExpiredPresent_b__69_1__,
          0LL),
        !v6) )
  {
    sub_B170D4();
  }
  CommonUI__maskFadeout(v6, 1, 0.5, v11, 0LL);
}


void __fastcall UserPresentListViewManager___DlgForExpiredPresent_b__69_1(
        UserPresentListViewManager_o *this,
        const MethodInfo *method)
{
  UserPresentBoxWindow_o *m_parent; // x0
  UIScrollView_o *scrollView; // x0
  CommonUI_o *Instance; // x0

  if ( (byte_40F80C2 & 1) == 0 )
  {
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    byte_40F80C2 = 1;
  }
  UserPresentListViewManager__DestroyList(this, method);
  m_parent = this->fields.m_parent;
  if ( !m_parent
    || (UserPresentBoxWindow__SetReDispFromExpiredPresent(m_parent, 0LL), (scrollView = this->fields.scrollView) == 0LL)
    || (UIScrollView__ResetPosition(scrollView, 0LL),
        (Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__)) == 0LL) )
  {
    sub_B170D4();
  }
  CommonUI__maskFadein(Instance, 0.5, 0LL, 0LL);
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

  if ( (byte_40F80A0 & 1) == 0 )
  {
    sub_B16FFC(&UserPresentListViewManager_CallbackFunc_TypeInfo, value);
    byte_40F80A0 = 1;
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
    v8 = sub_B0BA14(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (UserPresentListViewManager_o *)sub_B173C8(v7);
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

  if ( (byte_40F80A2 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, value);
    byte_40F80A2 = 1;
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
    v8 = sub_B0BA14(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (UserPresentListViewManager_o *)sub_B173C8(v7);
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

  if ( (byte_40F80A4 & 1) == 0 )
  {
    sub_B16FFC(&UserPresentListViewManager_ReceiveCallbackFunc_TypeInfo, value);
    byte_40F80A4 = 1;
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
    v8 = sub_B0BA14(p_receivecCallbackFunc, v7, receivecCallbackFunc);
    v9 = receivecCallbackFunc == (System_Delegate_o *)v8;
    receivecCallbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (UserPresentListViewManager_o *)sub_B173C8(v7);
  UserPresentListViewManager__remove_receivecCallbackFunc(v10, v11, v12);
}


System_Collections_Generic_List_UserPresentListViewObject__o *__fastcall UserPresentListViewManager__get_ClippingObjectList(
        UserPresentListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v14; // x19
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  Il2CppObject *current; // x21
  UserPresentListViewObject_o *Component_srcLineSprite; // x0
  const MethodInfo *v18; // x1
  EventMissionProgressRequest_Argument_ProgressData_o *v19; // x21
  ListViewItem_o *Item; // x0
  System_Collections_Generic_List_Enumerator_T__o v22; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v23; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_40F80A9 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v7);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_UserPresentListViewObject___, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_UserPresentListViewObject__Add__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_UserPresentListViewObject___ctor__, v11);
    sub_B16FFC(&System_Collections_Generic_List_UserPresentListViewObject__TypeInfo, v12);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v13);
    byte_40F80A9 = 1;
  }
  memset(&v23, 0, sizeof(v23));
  v14 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_UserPresentListViewObject__TypeInfo,
                                                                                                  method,
                                                                                                  v2,
                                                                                                  v3,
                                                                                                  v4);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v14,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_UserPresentListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_B170D4();
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v22,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)objectList,
    (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v23 = v22;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v23,
            (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v23.fields.current;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL) )
    {
      if ( !current )
        sub_B170D4();
      Component_srcLineSprite = (UserPresentListViewObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                 (UnityEngine_GameObject_o *)current,
                                                                 (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_UserPresentListViewObject___);
      v19 = (EventMissionProgressRequest_Argument_ProgressData_o *)Component_srcLineSprite;
      if ( !Component_srcLineSprite )
        sub_B170D4();
      Item = (ListViewItem_o *)UserPresentListViewObject__GetItem(Component_srcLineSprite, v18);
      if ( !Item )
        sub_B170D4();
      if ( Item->fields.isTermination )
      {
        if ( ListViewManager__ClippingItem_30192136((ListViewManager_o *)this, Item, 0LL) )
        {
          if ( !v14 )
            sub_B170D4();
          goto LABEL_16;
        }
      }
      else
      {
        if ( !v14 )
          sub_B170D4();
LABEL_16:
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v14,
          v19,
          (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_UserPresentListViewObject__Add__);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v23,
    (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_UserPresentListViewObject__o *)v14;
}


System_Collections_Generic_List_UserPresentListViewObject__o *__fastcall UserPresentListViewManager__get_ObjectList(
        UserPresentListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v14; // x19
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  Il2CppObject *current; // x20
  EventMissionProgressRequest_Argument_ProgressData_o *Component_srcLineSprite; // x1
  System_Collections_Generic_List_Enumerator_T__o v19; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v20; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_40F80A8 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v7);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_UserPresentListViewObject___, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_UserPresentListViewObject__Add__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_UserPresentListViewObject___ctor__, v11);
    sub_B16FFC(&System_Collections_Generic_List_UserPresentListViewObject__TypeInfo, v12);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v13);
    byte_40F80A8 = 1;
  }
  memset(&v20, 0, sizeof(v20));
  v14 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_UserPresentListViewObject__TypeInfo,
                                                                                                  method,
                                                                                                  v2,
                                                                                                  v3,
                                                                                                  v4);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v14,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_UserPresentListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_B170D4();
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v19,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)objectList,
    (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v20 = v19;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v20,
            (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v20.fields.current;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL) )
    {
      if ( !current )
        sub_B170D4();
      Component_srcLineSprite = (EventMissionProgressRequest_Argument_ProgressData_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                                         (UnityEngine_GameObject_o *)current,
                                                                                         (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_UserPresentListViewObject___);
      if ( !v14 )
        sub_B170D4();
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v14,
        Component_srcLineSprite,
        (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_UserPresentListViewObject__Add__);
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v20,
    (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_UserPresentListViewObject__o *)v14;
}


ListViewSort_o *__fastcall UserPresentListViewManager__get_SortInfo(const MethodInfo *method)
{
  __int64 v1; // x1
  UserPresentListViewManager_c *v2; // x0

  if ( (byte_40F809F & 1) == 0 )
  {
    sub_B16FFC(&UserPresentListViewManager_TypeInfo, v1);
    byte_40F809F = 1;
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

  if ( (byte_40F80A1 & 1) == 0 )
  {
    sub_B16FFC(&UserPresentListViewManager_CallbackFunc_TypeInfo, value);
    byte_40F80A1 = 1;
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
    v8 = sub_B0BA14(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (UserPresentListViewManager_o *)sub_B173C8(v7);
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

  if ( (byte_40F80A3 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, value);
    byte_40F80A3 = 1;
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
    v8 = sub_B0BA14(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (UserPresentListViewManager_o *)sub_B173C8(v7);
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

  if ( (byte_40F80A5 & 1) == 0 )
  {
    sub_B16FFC(&UserPresentListViewManager_ReceiveCallbackFunc_TypeInfo, value);
    byte_40F80A5 = 1;
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
    v8 = sub_B0BA14(p_receivecCallbackFunc, v7, receivecCallbackFunc);
    v9 = receivecCallbackFunc == (System_Delegate_o *)v8;
    receivecCallbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (UserPresentListViewManager_o *)sub_B173C8(v7);
  UserPresentListViewManager__get_select_idx(v10, v11);
}


void __fastcall UserPresentListViewManager__resetCheckStatus(
        UserPresentListViewManager_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_long__o *checkedIdList; // x0

  if ( (byte_40F80B5 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_long__Clear__, method);
    byte_40F80B5 = 1;
  }
  checkedIdList = this->fields.checkedIdList;
  if ( checkedIdList )
    System_Collections_Generic_List_long___Clear(
      checkedIdList,
      (const MethodInfo_2F168AC *)Method_System_Collections_Generic_List_long__Clear__);
}


void __fastcall UserPresentListViewManager__setJumpType(
        UserPresentListViewManager_o *this,
        int32_t type,
        const MethodInfo *method)
{
  UserPresentBoxErrorDialog_o *dialog; // x0

  dialog = this->fields.dialog;
  if ( !dialog )
    sub_B170D4();
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
  sub_B16F98(
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

  if ( (byte_40F80B8 & 1) == 0 )
  {
    sub_B16FFC(&LocalizationManager_TypeInfo, callback);
    sub_B16FFC(&StringLiteral_11034/*"REJECT_NORMAL_TXT"*/, v10);
    sub_B16FFC(&StringLiteral_11030/*"REJECT_ALL_TXT"*/, v11);
    sub_B16FFC(&StringLiteral_1/*""*/, v12);
    byte_40F80B8 = 1;
  }
  this->fields.receivecCallbackFunc = callback;
  sub_B16F98(
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
    v16 = &StringLiteral_11034/*"REJECT_NORMAL_TXT"*/;
    goto LABEL_14;
  }
  if ( (unsigned int)(kind - 1) <= 2 )
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v16 = &StringLiteral_11030/*"REJECT_ALL_TXT"*/;
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
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  struct System_Collections_Generic_List_long__o *checkedIdList; // x21
  char v15; // w22
  UserPresentBoxWindow_o *m_parent; // x0
  int32_t size; // w25
  BalanceConfig_c *v18; // x0
  int32_t PresentBoxCheckMax; // w26
  System_Collections_Generic_List_long__o *v20; // x20
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x21
  __int64 v22; // x24
  char v23; // w27
  int v24; // w8
  UserPresentListViewItem_o *v25; // x21
  __int64 v26; // x9
  int64_t presentId; // x22
  const MethodInfo *v28; // x3
  System_Collections_Generic_List_long__o *v29; // x0
  int32_t v30; // w0
  const MethodInfo *v31; // x3
  const MethodInfo *v32; // x2
  bool v33; // w1
  struct UserPresentBoxEntity_o *usrPresentEnt; // x8
  struct ItemEntity_o *itemEnt; // x8
  struct System_Collections_Generic_List_long__o *v36; // x8
  UserPresentBoxWindow_o *v37; // x0
  UserPresentListViewManager_o *v38; // x0
  const MethodInfo *v39; // x1

  if ( (byte_40F80B4 & 1) == 0 )
  {
    sub_B16FFC(&BalanceConfig_TypeInfo, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_long__IndexOf__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_long__Remove__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_long___ctor___66737392, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_long__get_Count__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v11);
    sub_B16FFC(&System_Collections_Generic_List_long__TypeInfo, v12);
    sub_B16FFC(&UserPresentListViewItem_TypeInfo, v13);
    byte_40F80B4 = 1;
  }
  checkedIdList = this->fields.checkedIdList;
  if ( checkedIdList && checkedIdList->fields._size )
  {
    v15 = 0;
  }
  else
  {
    m_parent = this->fields.m_parent;
    if ( !m_parent )
      goto LABEL_35;
    v15 = 1;
    UserPresentBoxWindow__SetCheckedItemsButtonEnable(m_parent, 0, 1, 0LL);
    checkedIdList = this->fields.checkedIdList;
    if ( !checkedIdList )
      goto LABEL_35;
  }
  size = checkedIdList->fields._size;
  v18 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v18 = BalanceConfig_TypeInfo;
    checkedIdList = this->fields.checkedIdList;
  }
  PresentBoxCheckMax = v18->static_fields->PresentBoxCheckMax;
  v20 = (System_Collections_Generic_List_long__o *)sub_B170CC(
                                                     System_Collections_Generic_List_long__TypeInfo,
                                                     method,
                                                     v2,
                                                     v3,
                                                     v4);
  System_Collections_Generic_List_long____ctor_49371452(
    v20,
    (System_Collections_Generic_IEnumerable_T__o *)checkedIdList,
    (const MethodInfo_2F1593C *)Method_System_Collections_Generic_List_long___ctor___66737392);
  itemList = this->fields.itemList;
  if ( !itemList )
LABEL_35:
    sub_B170D4();
  v22 = 0LL;
  v23 = (size >= PresentBoxCheckMax) | v15;
  while ( 1 )
  {
    v24 = itemList->fields._size;
    if ( (int)v22 >= v24 )
    {
      v36 = this->fields.checkedIdList;
      if ( v36 )
      {
        v37 = this->fields.m_parent;
        if ( v37 )
        {
          UserPresentBoxWindow__SetSelectCount(v37, v36->fields._size, 0LL);
          return;
        }
      }
      goto LABEL_35;
    }
    if ( v24 <= (unsigned int)v22 )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
    v25 = (UserPresentListViewItem_o *)itemList->fields._items->m_Items[v22];
    if ( !v25 )
      goto LABEL_35;
    v26 = *(&UserPresentListViewItem_TypeInfo->_2.bitflags2 + 1);
    if ( *(&v25->klass->_2.bitflags2 + 1) < (unsigned int)v26
      || (UserPresentListViewItem_c *)v25->klass->_2.typeHierarchy[v26 - 1] != UserPresentListViewItem_TypeInfo )
    {
      break;
    }
    if ( !v20 )
      goto LABEL_35;
    presentId = v25->fields.presentId;
    if ( System_Collections_Generic_List_long___Remove(
           v20,
           presentId,
           (const MethodInfo_2F17E1C *)Method_System_Collections_Generic_List_long__Remove__) )
    {
      v29 = this->fields.checkedIdList;
      if ( !v29 )
        goto LABEL_35;
      v30 = System_Collections_Generic_List_long___IndexOf(
              v29,
              presentId,
              (const MethodInfo_2F17518 *)Method_System_Collections_Generic_List_long__IndexOf__);
      UserPresentListViewItem__setCheckBoxed(v25, 1, v30 + 1, v31);
    }
    else
    {
      UserPresentListViewItem__setCheckBoxed(v25, 0, -1, v28);
      v33 = size >= PresentBoxCheckMax;
      if ( (v23 & 1) == 0 )
      {
        usrPresentEnt = v25->fields.usrPresentEnt;
        if ( usrPresentEnt && usrPresentEnt->fields.giftType == 2 )
        {
          itemEnt = v25->fields.itemEnt;
          if ( !itemEnt )
            goto LABEL_35;
          v33 = itemEnt->fields.type == 24;
        }
        else
        {
          v33 = 0;
        }
      }
      UserPresentListViewItem__setBlocked(v25, v33, v32);
    }
    itemList = this->fields.itemList;
    ++v22;
    if ( !itemList )
      goto LABEL_35;
  }
  v38 = (UserPresentListViewManager_o *)sub_B173C8(v25);
  UserPresentListViewManager__DestroyList(v38, v39);
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
  sub_B16F98(
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
  return (System_IAsyncResult_o *)sub_B16FA0(this, v6, callback, object);
}


void __fastcall UserPresentListViewManager_CallbackFunc__EndInvoke(
        UserPresentListViewManager_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B16FA4(result, 0LL, method);
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
        sub_B170B8(*(_QWORD *)&v27->fields.extra_arg, result, method);
      v31 = sub_B1702C(v28);
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
            v40 = sub_B17024(v28);
            v41 = sub_B17428(v28);
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
                  v23 = sub_AAFEF8(result, v43, v44);
                }
                v15 = *(_QWORD *)(v23 + 8);
              }
              else
              {
                v15 = *((_QWORD *)&result->klass->vtable._1_Finalize.methodPtr + 2 * *(unsigned __int16 *)(v28 + 72));
              }
              v24 = (void (__fastcall **)(System_String_o *, _QWORD))sub_B170AC(v15, v28);
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
                  v14 = sub_AAFEF8(result, class_0, v9);
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
          v33 = sub_B17024(v28);
          v34 = sub_B17428(v28);
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
                v25 = sub_AAFEF8(v29, v36, v37);
              }
              v22 = *(_QWORD *)(v25 + 8);
            }
            else
            {
              v22 = *(_QWORD *)(*v29 + 16LL * *(unsigned __int16 *)(v28 + 72) + 320);
            }
            v26 = (void (__fastcall **)(__int64 *, System_String_o *, _QWORD))sub_B170AC(v22, v28);
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
                v21 = sub_AAFEF8(v29, v17, v16);
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
  sub_B16F98(
    p_method,
    (System_Int32_array **)object,
    *(System_String_array ***)&method,
    (System_String_array **)a4,
    v4,
    v5,
    v6,
    v7);
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
  if ( (byte_40F79A9 & 1) == 0 )
  {
    sub_B16FFC(&bool_TypeInfo, isReceive);
    byte_40F79A9 = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10);
  return (System_IAsyncResult_o *)sub_B16FA0(this, v9, callback, object);
}


void __fastcall UserPresentListViewManager_ReceiveCallbackFunc__EndInvoke(
        UserPresentListViewManager_ReceiveCallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B16FA4(result, 0LL, method);
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
        sub_B170B8(*(_QWORD *)&v18->fields.extra_arg, isReceive, method);
      if ( (sub_B1702C(v20) & 1) == 0 )
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
      v22 = sub_B17024(v20);
      v23 = sub_B17428(v20);
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
            v16 = sub_AAFEF8(v19, v25, v26);
          }
          v15 = *(_QWORD *)(v16 + 8);
        }
        else
        {
          v15 = *(_QWORD *)(*v19 + 16LL * *(unsigned __int16 *)(v20 + 72) + 320);
        }
        v17 = (void (__fastcall **)(__int64 *, bool, _QWORD))sub_B170AC(v15, v20);
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
            v14 = sub_AAFEF8(v19, class_0, v9);
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
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  Il2CppObject *v5; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7

  if ( (byte_40F79A3 & 1) == 0 )
  {
    sub_B16FFC(&UserPresentListViewManager___c_TypeInfo, v1);
    byte_40F79A3 = 1;
  }
  v5 = (Il2CppObject *)sub_B170CC(UserPresentListViewManager___c_TypeInfo, v1, v2, v3, v4);
  System_Object___ctor(v5, 0LL);
  static_fields = (BattleServantConfConponent_o *)UserPresentListViewManager___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v5;
  sub_B16F98(static_fields, (System_Int32_array **)v5, v7, v8, v9, v10, v11, v12);
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
  UserPresentBoxEntity_o *UserPresentEntity; // x0
  __int64 v8; // x9
  int64_t createdAt; // x20
  UserPresentBoxEntity_o *v10; // x0
  UserPresentListViewManager___c_o *v12; // x0
  ListViewItem_o *v13; // x1
  const MethodInfo *v14; // x2

  if ( (byte_40F79A4 & 1) == 0 )
  {
    sub_B16FFC(&UserPresentListViewItem_TypeInfo, a);
    byte_40F79A4 = 1;
  }
  if ( !a )
    goto LABEL_12;
  v6 = *(&UserPresentListViewItem_TypeInfo->_2.bitflags2 + 1);
  if ( *(&a->klass->_2.bitflags2 + 1) >= (unsigned int)v6
    && (UserPresentListViewItem_c *)a->klass->_2.typeHierarchy[v6 - 1] == UserPresentListViewItem_TypeInfo )
  {
    UserPresentEntity = UserPresentListViewItem__get_UserPresentEntity((UserPresentListViewItem_o *)a, 0LL);
    if ( !UserPresentEntity || !b )
      goto LABEL_12;
    v8 = *(&UserPresentListViewItem_TypeInfo->_2.bitflags2 + 1);
    if ( *(&b->klass->_2.bitflags2 + 1) >= (unsigned int)v8
      && (UserPresentListViewItem_c *)b->klass->_2.typeHierarchy[v8 - 1] == UserPresentListViewItem_TypeInfo )
    {
      createdAt = UserPresentEntity->fields.createdAt;
      v10 = UserPresentListViewItem__get_UserPresentEntity((UserPresentListViewItem_o *)b, 0LL);
      if ( v10 )
        return createdAt - LODWORD(v10->fields.createdAt);
LABEL_12:
      sub_B170D4();
    }
  }
  else
  {
    sub_B173C8(a);
  }
  v12 = (UserPresentListViewManager___c_o *)sub_B173C8(b);
  return UserPresentListViewManager___c___GetAllPresentStrings_b__60_1(v12, v13, v14);
}


bool __fastcall UserPresentListViewManager___c___GetAllPresentStrings_b__60_1(
        UserPresentListViewManager___c_o *this,
        ListViewItem_o *obj,
        const MethodInfo *method)
{
  __int64 v4; // x9
  __int64 v5; // x9
  UserPresentBoxEntity_o *UserPresentEntity; // x0
  __int64 v7; // x9
  ItemEntity_o *ItemEntity; // x0

  if ( (byte_40F79A5 & 1) == 0 )
  {
    sub_B16FFC(&UserPresentListViewItem_TypeInfo, obj);
    byte_40F79A5 = 1;
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
    sub_B173C8(obj);
    goto LABEL_16;
  }
  UserPresentEntity = UserPresentListViewItem__get_UserPresentEntity((UserPresentListViewItem_o *)obj, 0LL);
  if ( !UserPresentEntity )
    goto LABEL_16;
  if ( UserPresentEntity->fields.giftType == 2 )
  {
    v7 = *(&UserPresentListViewItem_TypeInfo->_2.bitflags2 + 1);
    if ( *(&obj->klass->_2.bitflags2 + 1) >= (unsigned int)v7
      && (UserPresentListViewItem_c *)obj->klass->_2.typeHierarchy[v7 - 1] == UserPresentListViewItem_TypeInfo )
    {
      ItemEntity = UserPresentListViewItem__get_ItemEntity((UserPresentListViewItem_o *)obj, 0LL);
      if ( ItemEntity )
        return ItemEntity->fields.type == 24;
LABEL_16:
      sub_B170D4();
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
  System_String_o *NameText; // x0
  __int64 v9; // x9
  __int64 v10; // x9
  System_String_o *v11; // x21
  System_String_o *v12; // x0
  int32_t result; // w0
  __int64 v14; // x9
  __int64 v15; // x9
  System_String_o *sortValue2; // x0

  if ( (byte_40F79A6 & 1) == 0 )
  {
    sub_B16FFC(&UserPresentListViewItem_TypeInfo, a);
    byte_40F79A6 = 1;
  }
  if ( !a )
LABEL_23:
    sub_B170D4();
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
  NameText = UserPresentListViewItem__get_NameText((UserPresentListViewItem_o *)a, 0LL);
  if ( !b )
    goto LABEL_23;
  v9 = *(&UserPresentListViewItem_TypeInfo->_2.bitflags2 + 1);
  if ( *(&b->klass->_2.bitflags2 + 1) < (unsigned int)v9 )
    goto LABEL_22;
  if ( (UserPresentListViewItem_c *)b->klass->_2.typeHierarchy[v9 - 1] != UserPresentListViewItem_TypeInfo )
    goto LABEL_22;
  v10 = *(&UserPresentListViewItem_TypeInfo->_2.bitflags2 + 1);
  if ( *(&b->klass->_2.bitflags2 + 1) < (unsigned int)v10
    || (UserPresentListViewItem_c *)b->klass->_2.typeHierarchy[v10 - 1] != UserPresentListViewItem_TypeInfo )
  {
    goto LABEL_22;
  }
  v11 = NameText;
  v12 = UserPresentListViewItem__get_NameText((UserPresentListViewItem_o *)b, 0LL);
  if ( !v11 )
    goto LABEL_23;
  result = System_String__CompareTo_43814476(v11, v12, 0LL);
  if ( result )
    return result;
  v14 = *(&UserPresentListViewItem_TypeInfo->_2.bitflags2 + 1);
  if ( *(&a->klass->_2.bitflags2 + 1) < (unsigned int)v14
    || (UserPresentListViewItem_c *)a->klass->_2.typeHierarchy[v14 - 1] != UserPresentListViewItem_TypeInfo )
  {
LABEL_21:
    sub_B173C8(a);
LABEL_22:
    sub_B173C8(b);
    goto LABEL_23;
  }
  v15 = *(&UserPresentListViewItem_TypeInfo->_2.bitflags2 + 1);
  if ( *(&b->klass->_2.bitflags2 + 1) < (unsigned int)v15
    || (UserPresentListViewItem_c *)b->klass->_2.typeHierarchy[v15 - 1] != UserPresentListViewItem_TypeInfo )
  {
    goto LABEL_22;
  }
  sortValue2 = (System_String_o *)a[1].fields.sortValue2;
  if ( !sortValue2 )
    goto LABEL_23;
  return System_String__CompareTo_43814476(sortValue2, (System_String_o *)b[1].fields.sortValue2, 0LL);
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
  UserPresentBoxEntity_o *UserPresentEntity; // x0
  __int64 v8; // x9
  int64_t createdAt; // x20
  UserPresentBoxEntity_o *v10; // x0
  int32_t result; // w0
  UserPresentListViewManager___c__DisplayClass67_0_o *v12; // x0
  const MethodInfo *v13; // x1

  if ( (byte_40F79A7 & 1) == 0 )
  {
    sub_B16FFC(&UserPresentListViewItem_TypeInfo, a);
    byte_40F79A7 = 1;
  }
  if ( !a )
    goto LABEL_12;
  v6 = *(&UserPresentListViewItem_TypeInfo->_2.bitflags2 + 1);
  if ( *(&a->klass->_2.bitflags2 + 1) >= (unsigned int)v6
    && (UserPresentListViewItem_c *)a->klass->_2.typeHierarchy[v6 - 1] == UserPresentListViewItem_TypeInfo )
  {
    UserPresentEntity = UserPresentListViewItem__get_UserPresentEntity((UserPresentListViewItem_o *)a, 0LL);
    if ( !UserPresentEntity || !b )
      goto LABEL_12;
    v8 = *(&UserPresentListViewItem_TypeInfo->_2.bitflags2 + 1);
    if ( *(&b->klass->_2.bitflags2 + 1) >= (unsigned int)v8
      && (UserPresentListViewItem_c *)b->klass->_2.typeHierarchy[v8 - 1] == UserPresentListViewItem_TypeInfo )
    {
      createdAt = UserPresentEntity->fields.createdAt;
      v10 = UserPresentListViewItem__get_UserPresentEntity((UserPresentListViewItem_o *)b, 0LL);
      if ( v10 )
        return createdAt - LODWORD(v10->fields.createdAt);
LABEL_12:
      sub_B170D4();
    }
  }
  else
  {
    sub_B173C8(a);
  }
  v12 = (UserPresentListViewManager___c__DisplayClass67_0_o *)sub_B173C8(b);
  UserPresentListViewManager___c__DisplayClass67_0___ctor(v12, v13);
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
  __int64 v5; // x10
  UserPresentBoxEntity_o *UserPresentEntity; // x0
  ItemEntity_o *ItemEntity; // x0
  ItemEntity_o *v8; // x0
  int32_t ticketsHave; // w21
  UserPresentBoxEntity_o *v10; // x0
  BattleServantConfConponent_o *p_ticketItem; // x19
  struct ItemEntity_o *ticketItem; // t1
  System_Int32_array **v13; // x0
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7

  if ( (byte_40F79A8 & 1) == 0 )
  {
    sub_B16FFC(&UserPresentListViewItem_TypeInfo, obj);
    byte_40F79A8 = 1;
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
  UserPresentEntity = UserPresentListViewItem__get_UserPresentEntity((UserPresentListViewItem_o *)obj, 0LL);
  if ( !UserPresentEntity )
    goto LABEL_19;
  if ( UserPresentEntity->fields.giftType != 2
    || !UserPresentListViewItem__get_ItemEntity((UserPresentListViewItem_o *)obj, 0LL) )
  {
    return 1;
  }
  ItemEntity = UserPresentListViewItem__get_ItemEntity((UserPresentListViewItem_o *)obj, 0LL);
  if ( !ItemEntity )
    goto LABEL_19;
  if ( ItemEntity->fields.type != 24 )
    return 1;
  v8 = UserPresentListViewItem__get_ItemEntity((UserPresentListViewItem_o *)obj, 0LL);
  if ( !v8 )
    goto LABEL_19;
  if ( v8->fields.id != this->fields.ticketId )
    return 1;
  ticketsHave = this->fields.ticketsHave;
  v10 = UserPresentListViewItem__get_UserPresentEntity((UserPresentListViewItem_o *)obj, 0LL);
  if ( !v10 )
LABEL_19:
    sub_B170D4();
  ticketItem = this->fields.ticketItem;
  p_ticketItem = (BattleServantConfConponent_o *)&this->fields.ticketItem;
  p_ticketItem[-1].fields.adjustHeight = v10->fields.num + ticketsHave;
  if ( !ticketItem )
  {
    v13 = (System_Int32_array **)UserPresentListViewItem__get_ItemEntity((UserPresentListViewItem_o *)obj, 0LL);
    p_ticketItem->klass = (BattleServantConfConponent_c *)v13;
    sub_B16F98(p_ticketItem, v13, v14, v15, v16, v17, v18, v19);
  }
  return 0;
}