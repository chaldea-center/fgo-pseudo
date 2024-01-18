void __fastcall UserPresentListViewManager___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  ListViewSort_o *v4; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7

  if ( (byte_4185DD7 & 1) == 0 )
  {
    sub_B2C35C(&ListViewSort_TypeInfo, v1);
    sub_B2C35C(&UserPresentListViewManager_TypeInfo, v2);
    sub_B2C35C(&StringLiteral_15101/*"UserPresent"*/, v3);
    byte_4185DD7 = 1;
  }
  v4 = (ListViewSort_o *)sub_B2C42C(ListViewSort_TypeInfo);
  ListViewSort___ctor_33914184(v4, (System_String_o *)StringLiteral_15101/*"UserPresent"*/, 1, 0, 0LL);
  static_fields = (BattleServantConfConponent_o *)UserPresentListViewManager_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v4;
  sub_B2C2F8(static_fields, (System_Int32_array **)v4, v6, v7, v8, v9, v10, v11);
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
  __int64 v23; // x1
  UserPresentBoxWindow_o *m_parent; // x0
  System_Collections_Generic_IEnumerable_T__o *checkedIdList; // x22
  System_Collections_Generic_List_long__o *v26; // x21
  signed int max_length; // w8
  unsigned int v28; // w22
  Il2CppClass **v29; // x23
  Il2CppClass *v30; // x8
  UserPresentBoxEntity_o **v31; // x23
  Il2CppClass *v32; // t1
  UserPresentBoxEntity_o *v33; // x24
  UserPresentListViewItem_o *v34; // x23
  const MethodInfo *v35; // x3
  signed __int64 size; // x8
  struct System_Collections_Generic_List_long__o *v37; // x20
  unsigned __int64 v38; // x22
  const MethodInfo *v39; // x1
  __int64 v40; // x8
  unsigned __int64 v41; // x21
  UserPresentBoxEntity_o *v42; // x23
  UserPresentListViewItem_o *v43; // x22
  const MethodInfo *v44; // x3
  __int64 v45; // x0

  if ( (byte_4185DC2 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewItem__Add__, presentList);
    sub_B2C35C(&Method_System_Collections_Generic_List_long__Remove__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_long___ctor___67311576, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_long__get_Count__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_long__get_Item__, v8);
    sub_B2C35C(&System_Collections_Generic_List_long__TypeInfo, v9);
    sub_B2C35C(&UserPresentListViewItem_TypeInfo, v10);
    byte_4185DC2 = 1;
  }
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
  this->fields.selectPresentData = 0LL;
  sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.selectPresentData, 0LL, v11, v12, v13, v14, v15, v16);
  this->fields.presentIds = 0LL;
  sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.presentIds, 0LL, v17, v18, v19, v20, v21, v22);
  m_parent = this->fields.m_parent;
  if ( !m_parent )
    goto LABEL_32;
  UserPresentBoxWindow__SetCheckedItemsButtonEnable(m_parent, 0, 0, 0LL);
  checkedIdList = (System_Collections_Generic_IEnumerable_T__o *)this->fields.checkedIdList;
  if ( checkedIdList )
  {
    v26 = (System_Collections_Generic_List_long__o *)sub_B2C42C(System_Collections_Generic_List_long__TypeInfo);
    System_Collections_Generic_List_long____ctor_49726532(
      v26,
      checkedIdList,
      (const MethodInfo_2F6C444 *)Method_System_Collections_Generic_List_long___ctor___67311576);
    if ( !presentList )
      goto LABEL_32;
    max_length = presentList->max_length;
    if ( max_length >= 1 )
    {
      v28 = 0;
      while ( v28 < max_length )
      {
        v29 = &presentList->obj.klass + (int)v28;
        v32 = v29[4];
        v31 = (UserPresentBoxEntity_o **)(v29 + 4);
        v30 = v32;
        if ( !v32 || !v26 )
          goto LABEL_32;
        m_parent = (UserPresentBoxWindow_o *)System_Collections_Generic_List_long___Remove(
                                               v26,
                                               (int64_t)v30->_1.namespaze,
                                               (const MethodInfo_2F6E924 *)Method_System_Collections_Generic_List_long__Remove__);
        if ( v28 >= presentList->max_length )
          goto LABEL_33;
        v33 = *v31;
        v34 = (UserPresentListViewItem_o *)sub_B2C42C(UserPresentListViewItem_TypeInfo);
        UserPresentListViewItem___ctor(v34, v28, v33, v35);
        m_parent = (UserPresentBoxWindow_o *)this->fields.itemList;
        if ( !m_parent )
          goto LABEL_32;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)m_parent,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v34,
          (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
        max_length = presentList->max_length;
        if ( (int)++v28 >= max_length )
          goto LABEL_14;
      }
      goto LABEL_33;
    }
LABEL_14:
    if ( !v26 )
LABEL_32:
      sub_B2C434(m_parent, v23);
    LODWORD(size) = v26->fields._size;
    v37 = this->fields.checkedIdList;
    if ( (int)size >= 1 )
    {
      v38 = 0LL;
      do
      {
        if ( v38 >= (unsigned int)size )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
        if ( !v37 )
          goto LABEL_32;
        m_parent = (UserPresentBoxWindow_o *)System_Collections_Generic_List_long___Remove(
                                               v37,
                                               v26->fields._items->m_Items[v38],
                                               (const MethodInfo_2F6E924 *)Method_System_Collections_Generic_List_long__Remove__);
        size = v26->fields._size;
        v37 = this->fields.checkedIdList;
      }
      while ( (__int64)++v38 < size );
    }
    if ( !v37 )
      goto LABEL_32;
    if ( v37->fields._size >= 1 )
    {
      m_parent = this->fields.m_parent;
      if ( !m_parent )
        goto LABEL_32;
      UserPresentBoxWindow__SetCheckedItemsButtonEnable(m_parent, 1, 1, 0LL);
      UserPresentListViewManager__updateCheckStatus(this, v39);
    }
  }
  else
  {
    if ( !presentList )
      goto LABEL_32;
    v40 = *(_QWORD *)&presentList->max_length;
    if ( (int)v40 >= 1 )
    {
      v41 = 0LL;
      while ( v41 < (unsigned int)v40 )
      {
        v42 = presentList->m_Items[v41];
        v43 = (UserPresentListViewItem_o *)sub_B2C42C(UserPresentListViewItem_TypeInfo);
        UserPresentListViewItem___ctor(v43, v41, v42, v44);
        m_parent = (UserPresentBoxWindow_o *)this->fields.itemList;
        if ( !m_parent )
          goto LABEL_32;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)m_parent,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v43,
          (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
        LODWORD(v40) = presentList->max_length;
        if ( (__int64)++v41 >= (int)v40 )
          goto LABEL_31;
      }
LABEL_33:
      v45 = sub_B2C460(m_parent);
      sub_B2C400(v45, 0LL);
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

  if ( (byte_4185DBD & 1) == 0 )
  {
    sub_B2C35C(&UserPresentListViewManager_TypeInfo, v1);
    byte_4185DBD = 1;
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
    sub_B2C434(0LL, v1);
  ListViewSort__DeleteContinueData(sortInfo, 0LL);
}


void __fastcall UserPresentListViewManager__DestroyList(UserPresentListViewManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  ListViewSort_o *sort; // x0

  ListViewManager__DestroyList((ListViewManager_o *)this, 0LL);
  sort = this->fields.sort;
  if ( !sort )
    sub_B2C434(0LL, v3);
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
  System_Action_o *v9; // x22
  __int64 v10; // x0
  __int64 v11; // x1

  if ( (byte_4185DD6 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, method);
    sub_B2C35C(&LocalizationManager_TypeInfo, v3);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    sub_B2C35C(&Method_UserPresentListViewManager__DlgForExpiredPresent_b__69_0__, v5);
    sub_B2C35C(&StringLiteral_10507/*"PRESENT_EXPIRED_ERROR_MESSAGE"*/, v6);
    byte_4185DD6 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v8 = LocalizationManager__Get((System_String_o *)StringLiteral_10507/*"PRESENT_EXPIRED_ERROR_MESSAGE"*/, 0LL);
  v9 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(v9, (Il2CppObject *)this, Method_UserPresentListViewManager__DlgForExpiredPresent_b__69_0__, 0LL);
  if ( !Instance )
    sub_B2C434(v10, v11);
  CommonUI__OpenNotificationDialog(Instance, 0LL, v8, v9, -1, 0, 0, 0, 1, 0, 0, 0, 0LL, 0LL);
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
  __int64 v11; // x1
  UserPresentListViewManager_ReceiveCallbackFunc_o *receivecCallbackFunc; // x0

  if ( (byte_4185DD1 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Action_SceneList_Type___ctor__, *(_QWORD *)&scene);
    sub_B2C35C(&System_Action_SceneList_Type__TypeInfo, v5);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    sub_B2C35C(&Method_UserPresentListViewManager_EndNoticeDlg__, v7);
    byte_4185DD1 = 1;
  }
  dialog = this->fields.dialog;
  v9 = (System_Action_ShopRootConstants_State__o *)sub_B2C42C(System_Action_SceneList_Type__TypeInfo);
  System_Action_ShopRootConstants_State____ctor(
    v9,
    (Il2CppObject *)this,
    Method_UserPresentListViewManager_EndNoticeDlg__,
    (const MethodInfo_24BA81C *)Method_System_Action_SceneList_Type___ctor__);
  if ( !dialog )
    goto LABEL_14;
  UserPresentBoxErrorDialog__remove_OnErrorDialogClosed(dialog, (System_Action_SceneList_Type__o *)v9, 0LL);
  if ( scene == -1 )
    goto LABEL_11;
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_14;
  if ( CommonUI__IsActive_MasterMission(Instance, 0LL) )
  {
    Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !Instance )
      goto LABEL_14;
    CommonUI__CloseMasterMission(Instance, 0LL);
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
LABEL_14:
    sub_B2C434(Instance, v11);
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
  __int64 v21; // x1
  __int64 v22; // x1
  struct System_Collections_Generic_List_ListViewItem__o *presentAllSelectedList; // x0
  System_Collections_Generic_List_RegexCharClass_SingleRange__o **p_presentAllSelectedList; // x19
  System_Collections_Generic_IEnumerable_T__o *itemList; // x21
  System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *v26; // x22
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  const MethodInfo *v33; // x1
  struct System_Collections_Generic_List_ListViewItem__o *v34; // x20
  void *appended; // x0
  struct UserPresentListViewManager___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__60_0; // x21
  Il2CppObject *v38; // x22
  struct UserPresentListViewManager___c_StaticFields *v39; // x0
  System_String_array **v40; // x2
  System_String_array **v41; // x3
  System_Boolean_array **v42; // x4
  System_Int32_array **v43; // x5
  System_Int32_array *v44; // x6
  System_Int32_array *v45; // x7
  System_Collections_Generic_List_RegexCharClass_SingleRange__o *v46; // x20
  struct UserPresentListViewManager___c_StaticFields *v47; // x8
  System_Predicate_peRenderTexture_ChangeLayerObject__o *_9__60_1; // x21
  Il2CppObject *v49; // x22
  struct UserPresentListViewManager___c_StaticFields *v50; // x0
  System_String_array **v51; // x2
  System_String_array **v52; // x3
  System_Boolean_array **v53; // x4
  System_Int32_array **v54; // x5
  System_Int32_array *v55; // x6
  System_Int32_array *v56; // x7
  System_Collections_Generic_List_RegexCharClass_SingleRange__o *v57; // x20
  int size; // w8
  struct UserPresentListViewManager___c_StaticFields *v59; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__60_2; // x21
  Il2CppObject *v61; // x22
  struct UserPresentListViewManager___c_StaticFields *v62; // x0
  System_String_array **v63; // x2
  System_String_array **v64; // x3
  System_Boolean_array **v65; // x4
  System_Int32_array **v66; // x5
  System_Int32_array *v67; // x6
  System_Int32_array *v68; // x7
  System_Text_StringBuilder_o *v69; // x20
  signed __int64 v70; // x23
  unsigned __int64 v71; // x24
  System_Collections_Generic_List_RegexCharClass_SingleRange__o *v72; // x21
  System_Text_RegularExpressions_RegexCharClass_SingleRange_o *v73; // x8
  __int64 v74; // x11
  System_Text_RegularExpressions_RegexCharClass_SingleRange_o *v75; // x21
  System_String_o *v76; // x22

  if ( (byte_4185DCE & 1) == 0 )
  {
    sub_B2C35C(&BalanceConfig_TypeInfo, method);
    sub_B2C35C(&Method_System_Comparison_ListViewItem___ctor__, v3);
    sub_B2C35C(&System_Comparison_ListViewItem__TypeInfo, v4);
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewItem__Clear__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewItem__RemoveAll__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewItem__RemoveRange__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewItem__Sort__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewItem___ctor___67312280, v9);
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v10);
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v11);
    sub_B2C35C(&System_Collections_Generic_List_ListViewItem__TypeInfo, v12);
    sub_B2C35C(&LocalizationManager_TypeInfo, v13);
    sub_B2C35C(&Method_System_Predicate_ListViewItem___ctor__, v14);
    sub_B2C35C(&System_Predicate_ListViewItem__TypeInfo, v15);
    sub_B2C35C(&System_Text_StringBuilder_TypeInfo, v16);
    sub_B2C35C(&Method_UserPresentListViewManager___c__GetAllPresentStrings_b__60_0__, v17);
    sub_B2C35C(&Method_UserPresentListViewManager___c__GetAllPresentStrings_b__60_1__, v18);
    sub_B2C35C(&Method_UserPresentListViewManager___c__GetAllPresentStrings_b__60_2__, v19);
    sub_B2C35C(&UserPresentListViewManager___c_TypeInfo, v20);
    sub_B2C35C(&UserPresentListViewItem_TypeInfo, v21);
    sub_B2C35C(&StringLiteral_10512/*"PRESENT_INFO"*/, v22);
    byte_4185DCE = 1;
  }
  presentAllSelectedList = this->fields.presentAllSelectedList;
  p_presentAllSelectedList = (System_Collections_Generic_List_RegexCharClass_SingleRange__o **)&this->fields.presentAllSelectedList;
  if ( presentAllSelectedList )
    System_Collections_Generic_List_XWeaponTrail_Element___Clear(
      (System_Collections_Generic_List_XWeaponTrail_Element__o *)presentAllSelectedList,
      (const MethodInfo_2EF4868 *)Method_System_Collections_Generic_List_ListViewItem__Clear__);
  itemList = (System_Collections_Generic_IEnumerable_T__o *)this->fields.itemList;
  v26 = (System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *)sub_B2C42C(System_Collections_Generic_List_ListViewItem__TypeInfo);
  System_Collections_Generic_List_WarBoardAIRoute_RouteData____ctor(
    v26,
    itemList,
    (const MethodInfo_2EF3994 *)Method_System_Collections_Generic_List_ListViewItem___ctor___67312280);
  this->fields.presentAllSelectedList = (struct System_Collections_Generic_List_ListViewItem__o *)v26;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.presentAllSelectedList,
    (System_Int32_array **)v26,
    v27,
    v28,
    v29,
    v30,
    v31,
    v32);
  v34 = this->fields.presentAllSelectedList;
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
    v38 = (Il2CppObject *)static_fields->__9;
    _9__60_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B2C42C(System_Comparison_ListViewItem__TypeInfo);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__60_0,
      v38,
      Method_UserPresentListViewManager___c__GetAllPresentStrings_b__60_0__,
      (const MethodInfo_25D8DF8 *)Method_System_Comparison_ListViewItem___ctor__);
    v39 = UserPresentListViewManager___c_TypeInfo->static_fields;
    v39->__9__60_0 = (struct System_Comparison_ListViewItem__o *)_9__60_0;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&v39->__9__60_0,
      (System_Int32_array **)_9__60_0,
      v40,
      v41,
      v42,
      v43,
      v44,
      v45);
  }
  if ( !v34 )
    goto LABEL_62;
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v34,
    (System_Comparison_T__o *)_9__60_0,
    (const MethodInfo_2EF653C *)Method_System_Collections_Generic_List_ListViewItem__Sort__);
  appended = UserPresentListViewManager___c_TypeInfo;
  v46 = *p_presentAllSelectedList;
  if ( (BYTE3(UserPresentListViewManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UserPresentListViewManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserPresentListViewManager___c_TypeInfo);
    appended = UserPresentListViewManager___c_TypeInfo;
  }
  v47 = (struct UserPresentListViewManager___c_StaticFields *)*((_QWORD *)appended + 23);
  _9__60_1 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)v47->__9__60_1;
  if ( !_9__60_1 )
  {
    if ( (*((_BYTE *)appended + 307) & 4) != 0 && !*((_DWORD *)appended + 56) )
    {
      j_il2cpp_runtime_class_init_0(appended);
      v47 = UserPresentListViewManager___c_TypeInfo->static_fields;
    }
    v49 = (Il2CppObject *)v47->__9;
    _9__60_1 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B2C42C(System_Predicate_ListViewItem__TypeInfo);
    System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
      _9__60_1,
      v49,
      Method_UserPresentListViewManager___c__GetAllPresentStrings_b__60_1__,
      (const MethodInfo_2952BE4 *)Method_System_Predicate_ListViewItem___ctor__);
    v50 = UserPresentListViewManager___c_TypeInfo->static_fields;
    v50->__9__60_1 = (struct System_Predicate_ListViewItem__o *)_9__60_1;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&v50->__9__60_1,
      (System_Int32_array **)_9__60_1,
      v51,
      v52,
      v53,
      v54,
      v55,
      v56);
  }
  if ( !v46 )
    goto LABEL_62;
  System_Collections_Generic_List_ScrTerminalListTop_CaldeaFolderInfo___RemoveAll(
    (System_Collections_Generic_List_ScrTerminalListTop_CaldeaFolderInfo__o *)v46,
    (System_Predicate_T__o *)_9__60_1,
    (const MethodInfo_2EF5FB0 *)Method_System_Collections_Generic_List_ListViewItem__RemoveAll__);
  appended = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    appended = BalanceConfig_TypeInfo;
  }
  v57 = *p_presentAllSelectedList;
  if ( !*p_presentAllSelectedList )
    goto LABEL_62;
  v33 = (const MethodInfo *)*(unsigned int *)(*((_QWORD *)appended + 23) + 116LL);
  size = v57->fields._size;
  if ( size > (int)v33 )
  {
    System_Collections_Generic_List_RegexCharClass_SingleRange___RemoveRange(
      *p_presentAllSelectedList,
      (int32_t)v33,
      size - (_DWORD)v33,
      (const MethodInfo_2EF61F4 *)Method_System_Collections_Generic_List_ListViewItem__RemoveRange__);
    v57 = *p_presentAllSelectedList;
  }
  appended = UserPresentListViewManager___c_TypeInfo;
  if ( (BYTE3(UserPresentListViewManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UserPresentListViewManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserPresentListViewManager___c_TypeInfo);
    appended = UserPresentListViewManager___c_TypeInfo;
  }
  v59 = (struct UserPresentListViewManager___c_StaticFields *)*((_QWORD *)appended + 23);
  _9__60_2 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)v59->__9__60_2;
  if ( !_9__60_2 )
  {
    if ( (*((_BYTE *)appended + 307) & 4) != 0 && !*((_DWORD *)appended + 56) )
    {
      j_il2cpp_runtime_class_init_0(appended);
      v59 = UserPresentListViewManager___c_TypeInfo->static_fields;
    }
    v61 = (Il2CppObject *)v59->__9;
    _9__60_2 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B2C42C(System_Comparison_ListViewItem__TypeInfo);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__60_2,
      v61,
      Method_UserPresentListViewManager___c__GetAllPresentStrings_b__60_2__,
      (const MethodInfo_25D8DF8 *)Method_System_Comparison_ListViewItem___ctor__);
    v62 = UserPresentListViewManager___c_TypeInfo->static_fields;
    v62->__9__60_2 = (struct System_Comparison_ListViewItem__o *)_9__60_2;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&v62->__9__60_2,
      (System_Int32_array **)_9__60_2,
      v63,
      v64,
      v65,
      v66,
      v67,
      v68);
  }
  if ( !v57 )
    goto LABEL_62;
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v57,
    (System_Comparison_T__o *)_9__60_2,
    (const MethodInfo_2EF653C *)Method_System_Collections_Generic_List_ListViewItem__Sort__);
  v69 = (System_Text_StringBuilder_o *)sub_B2C42C(System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor(v69, 0LL);
  if ( !*p_presentAllSelectedList )
    goto LABEL_62;
  v70 = (*p_presentAllSelectedList)->fields._size;
  if ( (int)v70 >= 1 )
  {
    v71 = 0LL;
    while ( 1 )
    {
      if ( v71 )
      {
        if ( !v69 )
          break;
        appended = System_Text_StringBuilder__Append_42411944(v69, 0xAu, 0LL);
      }
      v72 = *p_presentAllSelectedList;
      if ( !*p_presentAllSelectedList )
        break;
      if ( v71 >= (unsigned int)v72->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
      v73 = v72->fields._items->m_Items[v71];
      if ( v73
        && (v74 = *(&UserPresentListViewItem_TypeInfo->_2.bitflags2 + 1),
            *(&v73->klass->_2.bitflags2 + 1) >= (unsigned int)v74) )
      {
        v75 = (UserPresentListViewItem_c *)v73->klass->_2.typeHierarchy[v74 - 1] == UserPresentListViewItem_TypeInfo
            ? v72->fields._items->m_Items[v71]
            : 0LL;
      }
      else
      {
        v75 = 0LL;
      }
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      appended = LocalizationManager__Get((System_String_o *)StringLiteral_10512/*"PRESENT_INFO"*/, 0LL);
      if ( !v75 )
        break;
      v76 = (System_String_o *)appended;
      appended = UserPresentListViewItem__get_NameText((UserPresentListViewItem_o *)v75, v33);
      if ( !v69 )
        break;
      appended = System_Text_StringBuilder__AppendFormat_42415252(
                   v69,
                   v76,
                   (Il2CppObject *)appended,
                   *(Il2CppObject **)&v75[7].fields._first,
                   0LL);
      if ( (__int64)++v71 >= v70 )
        return (System_String_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v69->klass->vtable._3_ToString.method)(
                                    v69,
                                    v69->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
    }
LABEL_62:
    sub_B2C434(appended, v33);
  }
  if ( !v69 )
    goto LABEL_62;
  return (System_String_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v69->klass->vtable._3_ToString.method)(
                              v69,
                              v69->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
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

  if ( (byte_4185DC3 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, *(_QWORD *)&index);
    sub_B2C35C(&UserPresentListViewItem_TypeInfo, v5);
    byte_4185DC3 = 1;
  }
  itemList = this->fields.itemList;
  if ( !itemList )
    return 0LL;
  if ( itemList->fields._size <= (unsigned int)index )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
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
  __int64 v14; // x1

  if ( (byte_4185DC1 & 1) == 0 )
  {
    sub_B2C35C(&UserPresentListViewManager_TypeInfo, method);
    byte_4185DC1 = 1;
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
  sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.sort, (System_Int32_array **)v11, v2, v3, v4, v5, v6, v7);
  if ( !this->fields.sort || (this->fields.sort->fields.listViewKind = 4, (v13 = *p_sort) == 0LL) )
    sub_B2C434(v13, v14);
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

  if ( (byte_4185DBE & 1) == 0 )
  {
    sub_B2C35C(&UserPresentListViewManager_TypeInfo, v1);
    byte_4185DBE = 1;
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
    sub_B2C434(0LL, v1);
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
  UserPresentListViewManager_o **p_checkedIdList; // x21
  System_Collections_Generic_List_long__o *v37; // x24
  System_String_array **v38; // x2
  System_String_array **v39; // x3
  System_Boolean_array **v40; // x4
  System_Int32_array **v41; // x5
  System_Int32_array *v42; // x6
  System_Int32_array *v43; // x7
  struct UserPresentListViewItem_o *v44; // x8
  UserPresentListViewManager_o *v45; // x26
  int dropObjectList; // w25
  int32_t v47; // w24
  struct ItemEntity_o *itemEnt; // x8
  int64_t endedAt; // x25
  UserItemMaster_o *MasterData_WarQuestSelectionMaster; // x24
  BalanceConfig_c *v51; // x0
  int v52; // w24
  SoundManager_c *v53; // x0
  const MethodInfo *v54; // x1
  _QWORD *v55; // x0
  System_Reflection_MethodBase_o *v56; // x0
  int32_t v57; // w24
  BalanceConfig_c *v58; // x0
  struct BalanceConfig_StaticFields *static_fields; // x8
  BalanceConfig_c *v60; // x0
  int32_t v61; // w22
  const MethodInfo *v62; // x3
  struct System_Collections_Generic_List_long__o *checkedIdList; // x8
  ItemEntity_o *v64; // [xsp+0h] [xbp-50h] BYREF
  UserItemEntity_o *entity; // [xsp+8h] [xbp-48h] BYREF

  v4 = this;
  if ( (byte_4185DCA & 1) == 0 )
  {
    sub_B2C35C(&BalanceConfig_TypeInfo, obj);
    sub_B2C35C(&Method_DataManager_GetMasterData_UserItemMaster___, v5);
    sub_B2C35C(&Method_DataManager_GetMaster_ItemMaster___, v6);
    sub_B2C35C(&DataManager_TypeInfo, v7);
    sub_B2C35C(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_long__Add__, v9);
    sub_B2C35C(&Method_System_Collections_Generic_List_long__RemoveAt__, v10);
    sub_B2C35C(&Method_System_Collections_Generic_List_long___ctor__, v11);
    sub_B2C35C(&Method_System_Collections_Generic_List_long__get_Count__, v12);
    sub_B2C35C(&Method_System_Collections_Generic_List_long__get_Item__, v13);
    sub_B2C35C(&System_Collections_Generic_List_long__TypeInfo, v14);
    sub_B2C35C(&NetworkManager_TypeInfo, v15);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v16);
    sub_B2C35C(&SoundManager_TypeInfo, v17);
    this = (UserPresentListViewManager_o *)sub_B2C35C(&Method_UserPresentListViewManager_OnClickListCheck__, v18);
    byte_4185DCA = 1;
  }
  v64 = 0LL;
  entity = 0LL;
  if ( !obj )
    goto LABEL_88;
  Item = (System_Int32_array **)UserPresentListViewObject__GetItem(obj, (const MethodInfo *)obj);
  p_selectItem = &v4->fields.selectItem;
  v4->fields.selectItem = (struct UserPresentListViewItem_o *)Item;
  sub_B2C2F8((BattleServantConfConponent_o *)&v4->fields.selectItem, Item, v21, v22, v23, v24, v25, v26);
  selectItem = v4->fields.selectItem;
  if ( !selectItem )
    goto LABEL_88;
  usrPresentEnt = (System_Int32_array **)selectItem->fields.usrPresentEnt;
  p_selectPresentData = (UserPresentListViewManager_o **)&v4->fields.selectPresentData;
  v4->fields.selectPresentData = (struct UserPresentBoxEntity_o *)usrPresentEnt;
  sub_B2C2F8((BattleServantConfConponent_o *)&v4->fields.selectPresentData, usrPresentEnt, v27, v28, v29, v30, v31, v32);
  p_checkedIdList = (UserPresentListViewManager_o **)&v4->fields.checkedIdList;
  if ( !v4->fields.checkedIdList )
  {
    v37 = (System_Collections_Generic_List_long__o *)sub_B2C42C(System_Collections_Generic_List_long__TypeInfo);
    System_Collections_Generic_List_long____ctor(
      v37,
      (const MethodInfo_2F6C24C *)Method_System_Collections_Generic_List_long___ctor__);
    *p_checkedIdList = (UserPresentListViewManager_o *)v37;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&v4->fields.checkedIdList,
      (System_Int32_array **)v37,
      v38,
      v39,
      v40,
      v41,
      v42,
      v43);
  }
  v44 = *p_selectItem;
  if ( !*p_selectItem )
    goto LABEL_88;
  if ( v44->fields.presentId < 1 )
    return;
  v45 = *p_checkedIdList;
  if ( !*p_checkedIdList )
    goto LABEL_88;
  dropObjectList = (int)v45->fields.dropObjectList;
  if ( dropObjectList >= 1 )
  {
    v47 = 0;
    while ( 1 )
    {
      if ( LODWORD(v45->fields.dropObjectList) <= v47 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
      if ( *(_QWORD *)(*(_QWORD *)&v45->fields.m_CachedPtr + 8LL * v47 + 32) == v44->fields.presentId )
        break;
      if ( ++v47 >= dropObjectList )
        goto LABEL_18;
      v45 = *p_checkedIdList;
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
        v47,
        (const MethodInfo_2F6EC60 *)Method_System_Collections_Generic_List_long__RemoveAt__);
      UserPresentListViewManager__updateCheckStatus(v4, v54);
      return;
    }
LABEL_88:
    sub_B2C434(this, obj);
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
      this = (UserPresentListViewManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !this )
        goto LABEL_88;
      MasterData_WarQuestSelectionMaster = (UserItemMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                 (DataManager_o *)this,
                                                                 (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserItemMaster___);
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
        v51 = BalanceConfig_TypeInfo;
        v52 = LODWORD((*p_selectPresentData)->fields.scrollBar) + entity->fields.num;
        if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          v51 = BalanceConfig_TypeInfo;
        }
        if ( v52 > v51->static_fields->UserItemMax )
        {
          v53 = SoundManager_TypeInfo;
          if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) == 0 )
            goto LABEL_86;
          goto LABEL_84;
        }
        if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !DataManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        }
        this = (UserPresentListViewManager_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_ItemMaster___);
        if ( !*p_selectPresentData || !this )
          goto LABEL_88;
        this = (UserPresentListViewManager_o *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                                 (DataMasterBase_WarMaster__WarEntity__int__o *)this,
                                                 (WarEntity_o **)&v64,
                                                 HIDWORD((*p_selectPresentData)->fields.scrollView),
                                                 (const MethodInfo_24E412C *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          this = (UserPresentListViewManager_o *)v64;
          if ( !v64 )
            goto LABEL_88;
          this = (UserPresentListViewManager_o *)ItemEntity__GetMaxNum(v64, 0LL);
          if ( (int)this >= 1 )
          {
            this = (UserPresentListViewManager_o *)v64;
            if ( !v64 )
              goto LABEL_88;
            this = (UserPresentListViewManager_o *)ItemEntity__GetMaxNum(v64, 0LL);
            if ( v52 > (int)this )
            {
              v55 = Method_UserPresentListViewManager_OnClickListCheck__;
              if ( (*((_BYTE *)Method_UserPresentListViewManager_OnClickListCheck__ + 75) & 2) != 0 )
                v55 = (_QWORD *)sub_B2C364(Method_UserPresentListViewManager_OnClickListCheck__);
              v56 = (System_Reflection_MethodBase_o *)sub_B2C340(v55, v55[3]);
              OverwriteAssetSoundName__PlaySystemSe(v56, 1, 0LL);
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
  v57 = (int32_t)(*p_checkedIdList)->fields.dropObjectList;
  v58 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v58 = BalanceConfig_TypeInfo;
  }
  static_fields = v58->static_fields;
  v53 = SoundManager_TypeInfo;
  if ( v57 >= static_fields->PresentBoxCheckMax )
  {
    if ( (WORD1(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) == 0 )
    {
LABEL_86:
      SoundManager__playSystemSe(1, 0LL);
      return;
    }
LABEL_84:
    if ( !v53->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(v53);
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
    (const MethodInfo_2F6CFA8 *)Method_System_Collections_Generic_List_long__Add__);
  if ( !*p_checkedIdList )
    goto LABEL_88;
  v60 = BalanceConfig_TypeInfo;
  v61 = (int32_t)(*p_checkedIdList)->fields.dropObjectList;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v60 = BalanceConfig_TypeInfo;
  }
  if ( v61 < v60->static_fields->PresentBoxCheckMax )
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
      v62);
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
  struct System_Collections_Generic_List_long__o *checkedIdList; // x8
  System_Int32_array **Item; // x0
  struct UserPresentListViewItem_o **p_selectItem; // x20
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  System_String_array **v31; // x2
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7
  struct UserPresentListViewItem_o *selectItem; // x8
  System_Int32_array **usrPresentEnt; // x1
  struct UserPresentBoxEntity_o **p_selectPresentData; // x21
  struct ItemEntity_o *itemEnt; // x8
  __int64 endedAt; // x23
  struct ItemEntity_o *v42; // x8
  const MethodInfo *v43; // x2
  struct ItemEntity_o *v44; // x8
  const MethodInfo *v45; // x1
  UserItemMaster_o *MasterData_WarQuestSelectionMaster; // x22
  BalanceConfig_c *v47; // x0
  int32_t v48; // w22
  const MethodInfo *v49; // x2
  UserPresentListViewManager___c_c *v50; // x0
  struct UserPresentListViewManager___c_StaticFields *static_fields; // x8
  UserPresentListViewManager_ReceiveCallbackFunc_o *_9__55_0; // x20
  Il2CppObject *v53; // x21
  System_String_array **v54; // x2
  System_String_array **v55; // x3
  System_Boolean_array **v56; // x4
  System_Int32_array **v57; // x5
  System_Int32_array *v58; // x6
  System_Int32_array *v59; // x7
  struct UserPresentListViewManager___c_StaticFields *v60; // x0
  BattleServantConfConponent_o *p__9__55_0; // x0
  _QWORD *v62; // x0
  System_Reflection_MethodBase_o *v63; // x0
  UserPresentListViewManager___c_c *v64; // x0
  struct UserPresentListViewManager___c_StaticFields *v65; // x8
  Il2CppObject *v66; // x21
  struct UserPresentListViewManager___c_StaticFields *v67; // x0
  System_Collections_Generic_List_long__o *v68; // x21
  UserPresentListViewManager_o **p_presentIds; // x20
  System_String_array **v70; // x2
  System_String_array **v71; // x3
  System_Boolean_array **v72; // x4
  System_Int32_array **v73; // x5
  System_Int32_array *v74; // x6
  System_Int32_array *v75; // x7
  struct UserPresentListViewItem_o *v76; // x8
  const MethodInfo *v77; // x2
  WarEntity_o *v78; // [xsp+8h] [xbp-38h] BYREF
  UserItemEntity_o *entity; // [xsp+18h] [xbp-28h] BYREF

  v3 = obj;
  v4 = this;
  if ( (byte_4185DC9 & 1) == 0 )
  {
    sub_B2C35C(&BalanceConfig_TypeInfo, obj);
    sub_B2C35C(&Method_DataManager_GetMasterData_UserItemMaster___, v5);
    sub_B2C35C(&Method_DataManager_GetMaster_ItemMaster___, v6);
    sub_B2C35C(&DataManager_TypeInfo, v7);
    sub_B2C35C(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_long__Add__, v9);
    sub_B2C35C(&Method_System_Collections_Generic_List_long__ToArray__, v10);
    sub_B2C35C(&Method_System_Collections_Generic_List_long___ctor__, v11);
    sub_B2C35C(&Method_System_Collections_Generic_List_long__get_Count__, v12);
    sub_B2C35C(&System_Collections_Generic_List_long__TypeInfo, v13);
    sub_B2C35C(&NetworkManager_TypeInfo, v14);
    sub_B2C35C(&UserPresentListViewManager_ReceiveCallbackFunc_TypeInfo, v15);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v16);
    sub_B2C35C(&SoundManager_TypeInfo, v17);
    sub_B2C35C(&Method_UserPresentListViewManager___c__OnClickListView_b__55_0__, v18);
    sub_B2C35C(&Method_UserPresentListViewManager___c__OnClickListView_b__55_1__, v19);
    sub_B2C35C(&UserPresentListViewManager___c_TypeInfo, v20);
    this = (UserPresentListViewManager_o *)sub_B2C35C(&Method_UserPresentListViewManager_OnClickListView__, v21);
    byte_4185DC9 = 1;
  }
  entity = 0LL;
  v78 = 0LL;
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
  sub_B2C2F8((BattleServantConfConponent_o *)&v4->fields.selectItem, Item, v25, v26, v27, v28, v29, v30);
  selectItem = v4->fields.selectItem;
  if ( !selectItem )
    goto LABEL_92;
  usrPresentEnt = (System_Int32_array **)selectItem->fields.usrPresentEnt;
  p_selectPresentData = &v4->fields.selectPresentData;
  v4->fields.selectPresentData = (struct UserPresentBoxEntity_o *)usrPresentEnt;
  sub_B2C2F8((BattleServantConfConponent_o *)&v4->fields.selectPresentData, usrPresentEnt, v31, v32, v33, v34, v35, v36);
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
      v42 = (*p_selectItem)->fields.itemEnt;
      if ( !v42 )
        goto LABEL_92;
      if ( v42->fields.type == 24 )
      {
        if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !SoundManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
        }
        SoundManager__playSystemSe(0, 0LL);
        if ( *p_selectItem )
        {
          v44 = (*p_selectItem)->fields.itemEnt;
          if ( v44 )
          {
            UserPresentListViewManager__OpenSelectableDialog(v4, v44->fields.id, v43);
            return;
          }
        }
        goto LABEL_92;
      }
      this = (UserPresentListViewManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !this )
        goto LABEL_92;
      MasterData_WarQuestSelectionMaster = (UserItemMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                 (DataManager_o *)this,
                                                                 (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserItemMaster___);
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
        v47 = BalanceConfig_TypeInfo;
        v48 = (*p_selectPresentData)->fields.num + entity->fields.num;
        if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          v47 = BalanceConfig_TypeInfo;
        }
        if ( v48 > v47->static_fields->UserItemMax )
        {
          if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !SoundManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
          }
          SoundManager__playSystemSe(0, 0LL);
          v50 = UserPresentListViewManager___c_TypeInfo;
          if ( (BYTE3(UserPresentListViewManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UserPresentListViewManager___c_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UserPresentListViewManager___c_TypeInfo);
            v50 = UserPresentListViewManager___c_TypeInfo;
          }
          static_fields = v50->static_fields;
          _9__55_0 = static_fields->__9__55_0;
          if ( _9__55_0 )
            goto LABEL_60;
          if ( (BYTE3(v50->vtable._0_Equals.methodPtr) & 4) != 0 && !v50->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v50);
            static_fields = UserPresentListViewManager___c_TypeInfo->static_fields;
          }
          v53 = (Il2CppObject *)static_fields->__9;
          _9__55_0 = (UserPresentListViewManager_ReceiveCallbackFunc_o *)sub_B2C42C(UserPresentListViewManager_ReceiveCallbackFunc_TypeInfo);
          UserPresentListViewManager_ReceiveCallbackFunc___ctor(
            _9__55_0,
            v53,
            Method_UserPresentListViewManager___c__OnClickListView_b__55_0__,
            0LL);
          v60 = UserPresentListViewManager___c_TypeInfo->static_fields;
          v60->__9__55_0 = _9__55_0;
          p__9__55_0 = (BattleServantConfConponent_o *)&v60->__9__55_0;
LABEL_59:
          sub_B2C2F8(p__9__55_0, (System_Int32_array **)_9__55_0, v54, v55, v56, v57, v58, v59);
LABEL_60:
          UserPresentListViewManager__showErrorResultDlg(v4, _9__55_0, v49);
          return;
        }
        if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !DataManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        }
        this = (UserPresentListViewManager_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_ItemMaster___);
        if ( !*p_selectPresentData || !this )
          goto LABEL_92;
        if ( DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
               (DataMasterBase_WarMaster__WarEntity__int__o *)this,
               &v78,
               (*p_selectPresentData)->fields.objectId,
               (const MethodInfo_24E412C *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__) )
        {
          this = (UserPresentListViewManager_o *)v78;
          if ( !v78 )
            goto LABEL_92;
          if ( ItemEntity__GetMaxNum((ItemEntity_o *)v78, 0LL) >= 1 )
          {
            this = (UserPresentListViewManager_o *)v78;
            if ( !v78 )
              goto LABEL_92;
            if ( v48 > ItemEntity__GetMaxNum((ItemEntity_o *)v78, 0LL) )
            {
              v62 = Method_UserPresentListViewManager_OnClickListView__;
              if ( (*((_BYTE *)Method_UserPresentListViewManager_OnClickListView__ + 75) & 2) != 0 )
                v62 = (_QWORD *)sub_B2C364(Method_UserPresentListViewManager_OnClickListView__);
              v63 = (System_Reflection_MethodBase_o *)sub_B2C340(v62, v62[3]);
              OverwriteAssetSoundName__PlaySystemSe(v63, 0, 0LL);
              v64 = UserPresentListViewManager___c_TypeInfo;
              if ( (BYTE3(UserPresentListViewManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !UserPresentListViewManager___c_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(UserPresentListViewManager___c_TypeInfo);
                v64 = UserPresentListViewManager___c_TypeInfo;
              }
              v65 = v64->static_fields;
              _9__55_0 = v65->__9__55_1;
              if ( _9__55_0 )
                goto LABEL_60;
              if ( (BYTE3(v64->vtable._0_Equals.methodPtr) & 4) != 0 && !v64->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(v64);
                v65 = UserPresentListViewManager___c_TypeInfo->static_fields;
              }
              v66 = (Il2CppObject *)v65->__9;
              _9__55_0 = (UserPresentListViewManager_ReceiveCallbackFunc_o *)sub_B2C42C(UserPresentListViewManager_ReceiveCallbackFunc_TypeInfo);
              UserPresentListViewManager_ReceiveCallbackFunc___ctor(
                _9__55_0,
                v66,
                Method_UserPresentListViewManager___c__OnClickListView_b__55_1__,
                0LL);
              v67 = UserPresentListViewManager___c_TypeInfo->static_fields;
              v67->__9__55_1 = _9__55_0;
              p__9__55_0 = (BattleServantConfConponent_o *)&v67->__9__55_1;
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
    UserPresentListViewManager__DlgForExpiredPresent(v4, v45);
    return;
  }
LABEL_81:
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(8, 0LL);
  if ( !*p_selectItem )
    goto LABEL_92;
  v4->fields._select_idx_k__BackingField = (*p_selectItem)->fields.index;
  v68 = (System_Collections_Generic_List_long__o *)sub_B2C42C(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v68,
    (const MethodInfo_2F6C24C *)Method_System_Collections_Generic_List_long___ctor__);
  p_presentIds = (UserPresentListViewManager_o **)&v4->fields.presentIds;
  v4->fields.presentIds = v68;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&v4->fields.presentIds,
    (System_Int32_array **)v68,
    v70,
    v71,
    v72,
    v73,
    v74,
    v75);
  v76 = v4->fields.selectItem;
  if ( !v76 )
    goto LABEL_92;
  obj = (UserPresentListViewObject_o *)v76->fields.presentId;
  if ( (__int64)obj >= 1 )
  {
    this = *p_presentIds;
    if ( !*p_presentIds )
      goto LABEL_92;
    System_Collections_Generic_List_long___Add(
      (System_Collections_Generic_List_long__o *)this,
      (int64_t)obj,
      (const MethodInfo_2F6CFA8 *)Method_System_Collections_Generic_List_long__Add__);
  }
  this = *p_presentIds;
  if ( !*p_presentIds
    || (this = (UserPresentListViewManager_o *)System_Collections_Generic_List_long___ToArray(
                                                 (System_Collections_Generic_List_long__o *)this,
                                                 (const MethodInfo_2F6F0B4 *)Method_System_Collections_Generic_List_long__ToArray__),
        !v4->fields.m_parent) )
  {
LABEL_92:
    sub_B2C434(this, obj);
  }
  UserPresentBoxWindow__receivePresent(v4->fields.m_parent, (System_Int64_array *)this, 0, 0, 0LL);
  UserPresentListViewManager__SetMode_21554288(v4, 2, v77);
}


void __fastcall UserPresentListViewManager__OnClickSortAscendingOrder(
        UserPresentListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x0
  __int64 v4; // x1
  struct ListViewSort_o *sort; // x8

  if ( (byte_4185DD2 & 1) == 0 )
  {
    sub_B2C35C(&SoundManager_TypeInfo, method);
    byte_4185DD2 = 1;
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
      sub_B2C434(v3, v4);
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

  if ( (byte_4185DC8 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, method);
    byte_4185DC8 = 1;
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
          sub_B2C434(0LL, v7);
        ((void (__fastcall *)(struct UIScrollView_o *, __int64, Il2CppMethodPointer))v14->klass->vtable._8_UpdateScrollbars.method)(
          v14,
          1LL,
          v14->klass->vtable._9_SetDragAmount.methodPtr);
      }
      callbackFunc2 = this->fields.callbackFunc2;
      this->fields.callbackFunc2 = 0LL;
      sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.callbackFunc2, 0LL, v8, v9, v10, v11, v12, v13);
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
  System_Action_ShopRootConstants_State__o *v9; // x21

  if ( (byte_4185DD0 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Action_SceneList_Type___ctor__, msg);
    sub_B2C35C(&System_Action_SceneList_Type__TypeInfo, v5);
    sub_B2C35C(&Method_UserPresentListViewManager_EndNoticeDlg__, v6);
    byte_4185DD0 = 1;
  }
  dialog = this->fields.dialog;
  if ( !dialog
    || (UserPresentBoxErrorDialog__Open(dialog, msg, 0LL),
        v8 = this->fields.dialog,
        v9 = (System_Action_ShopRootConstants_State__o *)sub_B2C42C(System_Action_SceneList_Type__TypeInfo),
        System_Action_ShopRootConstants_State____ctor(
          v9,
          (Il2CppObject *)this,
          Method_UserPresentListViewManager_EndNoticeDlg__,
          (const MethodInfo_24BA81C *)Method_System_Action_SceneList_Type___ctor__),
        !v8) )
  {
    sub_B2C434(dialog, msg);
  }
  UserPresentBoxErrorDialog__add_OnErrorDialogClosed(v8, (System_Action_SceneList_Type__o *)v9, 0LL);
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
  struct UserPresentBoxWindow_o *m_parent; // x8
  System_Collections_Generic_IEnumerable_T__o *itemList; // x22
  System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *v22; // x23
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  struct System_Collections_Generic_List_ListViewItem__o *v35; // x22
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v36; // x23
  struct System_Collections_Generic_List_ListViewItem__o *v37; // x21
  struct UserPresentListViewManager___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__67_1; // x22
  Il2CppObject *v40; // x23
  struct UserPresentListViewManager___c_StaticFields *v41; // x0
  System_String_array **v42; // x2
  System_String_array **v43; // x3
  System_Boolean_array **v44; // x4
  System_Int32_array **v45; // x5
  System_Int32_array *v46; // x6
  System_Int32_array *v47; // x7

  if ( (byte_4185DD4 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Comparison_ListViewItem___ctor__, *(_QWORD *)&ticketId);
    sub_B2C35C(&System_Comparison_ListViewItem__TypeInfo, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewItem__Clear__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewItem__RemoveAll__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewItem__Sort__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewItem___ctor___67312280, v9);
    sub_B2C35C(&System_Collections_Generic_List_ListViewItem__TypeInfo, v10);
    sub_B2C35C(&Method_System_Predicate_ListViewItem___ctor__, v11);
    sub_B2C35C(&System_Predicate_ListViewItem__TypeInfo, v12);
    sub_B2C35C(&Method_UserPresentListViewManager___c__OpenSelectableDialog_b__67_1__, v13);
    sub_B2C35C(&Method_UserPresentListViewManager___c__DisplayClass67_0__OpenSelectableDialog_b__0__, v14);
    sub_B2C35C(&UserPresentListViewManager___c__DisplayClass67_0_TypeInfo, v15);
    sub_B2C35C(&UserPresentListViewManager___c_TypeInfo, v16);
    byte_4185DD4 = 1;
  }
  v17 = sub_B2C42C(UserPresentListViewManager___c__DisplayClass67_0_TypeInfo);
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
      (const MethodInfo_2EF4868 *)Method_System_Collections_Generic_List_ListViewItem__Clear__);
  m_parent = this->fields.m_parent;
  if ( !m_parent )
    goto LABEL_19;
  m_parent->fields.mIsScrlResetPosition = 1;
  itemList = (System_Collections_Generic_IEnumerable_T__o *)this->fields.itemList;
  v22 = (System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *)sub_B2C42C(System_Collections_Generic_List_ListViewItem__TypeInfo);
  System_Collections_Generic_List_WarBoardAIRoute_RouteData____ctor(
    v22,
    itemList,
    (const MethodInfo_2EF3994 *)Method_System_Collections_Generic_List_ListViewItem___ctor___67312280);
  this->fields.presentTicketList = (struct System_Collections_Generic_List_ListViewItem__o *)v22;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.presentTicketList,
    (System_Int32_array **)v22,
    v23,
    v24,
    v25,
    v26,
    v27,
    v28);
  *(_DWORD *)(v17 + 20) = 0;
  *(_QWORD *)(v17 + 24) = 0LL;
  sub_B2C2F8((BattleServantConfConponent_o *)(v17 + 24), 0LL, v29, v30, v31, v32, v33, v34);
  v35 = this->fields.presentTicketList;
  v36 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B2C42C(System_Predicate_ListViewItem__TypeInfo);
  System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
    v36,
    (Il2CppObject *)v17,
    Method_UserPresentListViewManager___c__DisplayClass67_0__OpenSelectableDialog_b__0__,
    (const MethodInfo_2952BE4 *)Method_System_Predicate_ListViewItem___ctor__);
  if ( !v35 )
    goto LABEL_19;
  System_Collections_Generic_List_ScrTerminalListTop_CaldeaFolderInfo___RemoveAll(
    (System_Collections_Generic_List_ScrTerminalListTop_CaldeaFolderInfo__o *)v35,
    (System_Predicate_T__o *)v36,
    (const MethodInfo_2EF5FB0 *)Method_System_Collections_Generic_List_ListViewItem__RemoveAll__);
  v37 = this->fields.presentTicketList;
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
    v40 = (Il2CppObject *)static_fields->__9;
    _9__67_1 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B2C42C(System_Comparison_ListViewItem__TypeInfo);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__67_1,
      v40,
      Method_UserPresentListViewManager___c__OpenSelectableDialog_b__67_1__,
      (const MethodInfo_25D8DF8 *)Method_System_Comparison_ListViewItem___ctor__);
    v41 = UserPresentListViewManager___c_TypeInfo->static_fields;
    v41->__9__67_1 = (struct System_Comparison_ListViewItem__o *)_9__67_1;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&v41->__9__67_1,
      (System_Int32_array **)_9__67_1,
      v42,
      v43,
      v44,
      v45,
      v46,
      v47);
  }
  if ( !v37
    || (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
          (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v37,
          (System_Comparison_T__o *)_9__67_1,
          (const MethodInfo_2EF653C *)Method_System_Collections_Generic_List_ListViewItem__Sort__),
        (presentTicketList = this->fields.selectDialog) == 0LL) )
  {
LABEL_19:
    sub_B2C434(presentTicketList, v19);
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
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v33; // x21
  __int64 v34; // x1
  __int64 v35; // x8
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *v36; // x0
  const MethodInfo_2EF4460 **v37; // x26
  _BOOL8 v38; // x0
  UserPresentListViewItem_c *v39; // x1
  UserPresentListViewItem_o *current; // x23
  __int64 v41; // x9
  System_Collections_Generic_List_long__o *checkedIdList; // x0
  UserPresentBoxEntity_o *usrPresentEnt; // x0
  _BOOL8 IsExpired; // x0
  const MethodInfo *v45; // x1
  struct UserPresentBoxEntity_o *v46; // x9
  struct ItemEntity_o *itemEnt; // x9
  const MethodInfo_2EF4460 **v48; // x20
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

  if ( (byte_4185DCD & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__, *(_QWORD *)&kind);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_long__Add__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_string__Add__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_string__Contains__, v9);
    sub_B2C35C(&Method_System_Collections_Generic_List_long__Contains__, v10);
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v11);
    sub_B2C35C(&Method_System_Collections_Generic_List_string__RemoveAt__, v12);
    sub_B2C35C(&Method_System_Collections_Generic_List_long__ToArray__, v13);
    sub_B2C35C(&Method_System_Collections_Generic_List_string___ctor___67320968, v14);
    sub_B2C35C(&Method_System_Collections_Generic_List_long___ctor__, v15);
    sub_B2C35C(&Method_System_Collections_Generic_List_string__get_Count__, v16);
    sub_B2C35C(&Method_System_Collections_Generic_List_string__get_Item__, v17);
    sub_B2C35C(&System_Collections_Generic_List_string__TypeInfo, v18);
    sub_B2C35C(&System_Collections_Generic_List_long__TypeInfo, v19);
    sub_B2C35C(&NetworkManager_TypeInfo, v20);
    sub_B2C35C(&UserPresentListViewItem_TypeInfo, v21);
    sub_B2C35C(&StringLiteral_15634/*"["*/, v22);
    sub_B2C35C(&StringLiteral_1/*""*/, v23);
    sub_B2C35C(&StringLiteral_15870/*"]"*/, v24);
    byte_4185DCD = 1;
  }
  memset(&v70, 0, sizeof(v70));
  this->fields.kind = kind;
  v25 = (System_Collections_Generic_List_long__o *)sub_B2C42C(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v25,
    (const MethodInfo_2F6C24C *)Method_System_Collections_Generic_List_long___ctor__);
  p_presentIds = &this->fields.presentIds;
  this->fields.presentIds = v25;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.presentIds,
    (System_Int32_array **)v25,
    v27,
    v28,
    v29,
    v30,
    v31,
    v32);
  v33 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v33,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_string___ctor___67320968);
  v35 = 184LL;
  if ( kind == 1 )
    v35 = 424LL;
  v36 = *(System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o **)((char *)&this->klass + v35);
  if ( !v36 )
    goto LABEL_53;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v69,
    v36,
    (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  v37 = (const MethodInfo_2EF4460 **)&Method_System_Collections_Generic_List_string__Add__;
  v70 = v69;
  while ( 1 )
  {
    v38 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v70,
            (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    if ( !v38 )
      break;
    current = (UserPresentListViewItem_o *)v70.fields.current;
    if ( v70.fields.current )
    {
      v39 = UserPresentListViewItem_TypeInfo;
      v41 = *(&UserPresentListViewItem_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v70.fields.current->klass->_2.bitflags2 + 1) < (unsigned int)v41
        || (UserPresentListViewItem_c *)v70.fields.current->klass->_2.typeHierarchy[v41 - 1] != UserPresentListViewItem_TypeInfo )
      {
        usrPresentEnt = (UserPresentBoxEntity_o *)sub_B2C728(v70.fields.current);
LABEL_47:
        sub_B2C434(usrPresentEnt, v39);
      }
    }
    switch ( kind )
    {
      case 1:
        if ( !v70.fields.current )
          sub_B2C434(v38, v39);
        goto LABEL_19;
      case 2:
        if ( !v70.fields.current )
          sub_B2C434(v38, v39);
        if ( !Gift__IsServant_27324084((int32_t)v70.fields.current[10].monitor, 0LL)
          && !Gift__IsCommandCode_27324480(current->fields.giftType, 0LL) )
        {
          goto LABEL_19;
        }
        break;
      case 3:
        if ( !v70.fields.current )
          sub_B2C434(v38, v39);
        checkedIdList = this->fields.checkedIdList;
        if ( !checkedIdList )
          sub_B2C434(0LL, v39);
        if ( System_Collections_Generic_List_long___Contains(
               checkedIdList,
               (int64_t)v70.fields.current[10].klass,
               (const MethodInfo_2F6D3FC *)Method_System_Collections_Generic_List_long__Contains__) )
        {
LABEL_19:
          usrPresentEnt = current->fields.usrPresentEnt;
          if ( !usrPresentEnt )
            goto LABEL_47;
          IsExpired = UserPresentBoxEntity__IsExpired(usrPresentEnt, 0, 0LL);
          v46 = current->fields.usrPresentEnt;
          if ( !v46 )
            sub_B2C434(IsExpired, v45);
          if ( v46->fields.giftType == 2 )
          {
            itemEnt = current->fields.itemEnt;
            if ( !itemEnt )
              sub_B2C434(IsExpired, v45);
            if ( itemEnt->fields.type != 24 )
            {
              if ( IsExpired )
                goto LABEL_30;
              v48 = v37;
              endedAt = itemEnt->fields.endedAt;
              if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !NetworkManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
              }
              v50 = endedAt <= NetworkManager__getTime(0LL);
              v37 = v48;
              p_presentIds = &this->fields.presentIds;
              if ( v50 )
                goto LABEL_30;
LABEL_38:
              if ( !*p_presentIds )
                sub_B2C434(0LL, v45);
              System_Collections_Generic_List_long___Add(
                *p_presentIds,
                current->fields.presentId,
                (const MethodInfo_2F6CFA8 *)Method_System_Collections_Generic_List_long__Add__);
            }
          }
          else
          {
            if ( !IsExpired )
              goto LABEL_38;
LABEL_30:
            NameText = UserPresentListViewItem__get_NameText(current, v45);
            if ( !v33 )
              sub_B2C434(NameText, NameText);
            if ( !System_Collections_Generic_List_WarBoardManager_TaskList___Contains(
                    (System_Collections_Generic_List_WarBoardManager_TaskList__o *)v33,
                    (WarBoardManager_TaskList_o *)NameText,
                    (const MethodInfo_2EF48B0 *)Method_System_Collections_Generic_List_string__Contains__) )
            {
              v53 = UserPresentListViewItem__get_NameText(current, v52);
              System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                v33,
                (EventMissionProgressRequest_Argument_ProgressData_o *)v53,
                *v37);
            }
          }
        }
        break;
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v70,
    (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
  p_expiredPresents_k__BackingField = &this->fields._expiredPresents_k__BackingField;
  v55 = (System_Int32_array **)StringLiteral_1/*""*/;
  this->fields._expiredPresents_k__BackingField = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields._expiredPresents_k__BackingField,
    v55,
    v56,
    v57,
    v58,
    v59,
    v60,
    v61);
  if ( !v33 )
    goto LABEL_53;
  while ( v33->fields._size >= 1 )
  {
    v62 = (System_Int32_array **)System_String__Concat_44308944(
                                   *p_expiredPresents_k__BackingField,
                                   (System_String_o *)StringLiteral_15634/*"["*/,
                                   (System_String_o *)v33->fields._items->m_Items[0],
                                   (System_String_o *)StringLiteral_15870/*"]"*/,
                                   0LL);
    *p_expiredPresents_k__BackingField = (System_String_o *)v62;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&this->fields._expiredPresents_k__BackingField,
      v62,
      v63,
      v64,
      v65,
      v66,
      v67,
      v68);
    System_Collections_Generic_List_XWeaponTrail_Element___RemoveAt(
      (System_Collections_Generic_List_XWeaponTrail_Element__o *)v33,
      0,
      (const MethodInfo_2EF6150 *)Method_System_Collections_Generic_List_string__RemoveAt__);
  }
  v36 = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)*p_presentIds;
  if ( !*p_presentIds
    || (v36 = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)System_Collections_Generic_List_long___ToArray(
                                                                                               (System_Collections_Generic_List_long__o *)v36,
                                                                                               (const MethodInfo_2F6F0B4 *)Method_System_Collections_Generic_List_long__ToArray__),
        !this->fields.m_parent) )
  {
LABEL_53:
    sub_B2C434(v36, v34);
  }
  UserPresentBoxWindow__receivePresent(this->fields.m_parent, (System_Int64_array *)v36, 0, 0, 0LL);
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
  int64_t sortValue0; // x0
  UserPresentListViewItem_c *v18; // x1
  struct System_Collections_Generic_List_ListViewItem__o *presentTicketList; // x19
  signed __int64 size; // x24
  int v21; // w25
  int v22; // w26
  unsigned __int64 v23; // x27
  ListViewItem_o *v24; // x19
  __int64 v25; // x10
  _QWORD *monitor; // x8
  int64_t v27; // x23
  int64_t v28; // x8
  int64_t sortValue1; // x1
  int v30; // w19
  UserPresentBoxWindow_o *m_parent; // x23
  const MethodInfo *v32; // x2
  struct System_Collections_Generic_List_ListViewItem__o *v33; // x19
  __int64 v34; // x9
  __int64 v35; // x8
  struct System_String_o *v36; // x0
  System_String_array **v37; // x2
  System_String_array **v38; // x3
  System_Boolean_array **v39; // x4
  System_Int32_array **v40; // x5
  System_Int32_array *v41; // x6
  System_Int32_array *v42; // x7
  UserPresentBoxWindow_o *v43; // x20
  UserPresentListViewManager_o *v44; // x0
  const MethodInfo *v45; // x1
  int32_t selectNum; // [xsp+4h] [xbp-5Ch]

  if ( (byte_4185DD5 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_long__Add__, selectItm);
    sub_B2C35C(&Method_System_Collections_Generic_List_long__ToArray__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_long___ctor__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v9);
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v10);
    sub_B2C35C(&System_Collections_Generic_List_long__TypeInfo, v11);
    sub_B2C35C(&NetworkManager_TypeInfo, v12);
    sub_B2C35C(&UserPresentListViewItem_TypeInfo, v13);
    sub_B2C35C(&StringLiteral_15634/*"["*/, v14);
    sub_B2C35C(&StringLiteral_15870/*"]"*/, v15);
    byte_4185DD5 = 1;
  }
  v16 = (System_Collections_Generic_List_long__o *)sub_B2C42C(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v16,
    (const MethodInfo_2F6C24C *)Method_System_Collections_Generic_List_long___ctor__);
  presentTicketList = this->fields.presentTicketList;
  if ( !presentTicketList || !selectItm )
    goto LABEL_25;
  size = presentTicketList->fields._size;
  selectNum = num;
  if ( (int)size < 1 || (v21 = selectItm->fields.requireNum * num, v21 < 1) )
  {
    if ( v16 )
    {
LABEL_27:
      m_parent = this->fields.m_parent;
      sortValue0 = (int64_t)System_Collections_Generic_List_long___ToArray(
                              v16,
                              (const MethodInfo_2F6F0B4 *)Method_System_Collections_Generic_List_long__ToArray__);
      if ( m_parent )
      {
        UserPresentBoxWindow__receivePresent(
          m_parent,
          (System_Int64_array *)sortValue0,
          selectItm->fields.idx,
          selectNum,
          0LL);
        UserPresentListViewManager__SetMode_21554288(this, 2, v32);
        return;
      }
    }
    goto LABEL_25;
  }
  v22 = 0;
  v23 = 0LL;
  while ( 1 )
  {
    if ( v23 >= (unsigned int)presentTicketList->fields._size )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
    v24 = presentTicketList->fields._items->m_Items[v23];
    if ( !v24 )
      goto LABEL_25;
    v25 = *(&UserPresentListViewItem_TypeInfo->_2.bitflags2 + 1);
    if ( *(&v24->klass->_2.bitflags2 + 1) < (unsigned int)v25 )
      goto LABEL_25;
    if ( (UserPresentListViewItem_c *)v24->klass->_2.typeHierarchy[v25 - 1] != UserPresentListViewItem_TypeInfo )
      goto LABEL_25;
    sortValue0 = v24[1].fields.sortValue0;
    if ( !sortValue0 )
      goto LABEL_25;
    sortValue0 = UserPresentBoxEntity__IsExpired((UserPresentBoxEntity_o *)sortValue0, 0, 0LL);
    if ( (sortValue0 & 1) != 0 )
      break;
    monitor = v24[1].monitor;
    if ( !monitor )
      goto LABEL_25;
    v27 = monitor[12];
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    sortValue0 = NetworkManager__getTime(0LL);
    if ( v27 <= sortValue0 )
      break;
    v28 = v24[1].fields.sortValue0;
    if ( !v28 || !v16 )
      goto LABEL_25;
    sortValue1 = v24[1].fields.sortValue1;
    v30 = *(_DWORD *)(v28 + 80);
    System_Collections_Generic_List_long___Add(
      v16,
      sortValue1,
      (const MethodInfo_2F6CFA8 *)Method_System_Collections_Generic_List_long__Add__);
    if ( (__int64)++v23 >= size )
      goto LABEL_27;
    v22 += v30;
    if ( v22 >= v21 )
      goto LABEL_27;
    presentTicketList = this->fields.presentTicketList;
    if ( !presentTicketList )
      goto LABEL_25;
  }
  v33 = this->fields.presentTicketList;
  if ( !v33 )
    goto LABEL_25;
  if ( !v33->fields._size )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
  sortValue0 = (int64_t)v33->fields._items->m_Items[0];
  if ( !sortValue0 )
    goto LABEL_25;
  v18 = UserPresentListViewItem_TypeInfo;
  v34 = *(&UserPresentListViewItem_TypeInfo->_2.bitflags2 + 1);
  if ( *(unsigned __int8 *)(*(_QWORD *)sortValue0 + 300LL) >= (unsigned int)v34
    && *(UserPresentListViewItem_c **)(*(_QWORD *)(*(_QWORD *)sortValue0 + 200LL) + 8 * v34 - 8) == UserPresentListViewItem_TypeInfo )
  {
    v35 = *(_QWORD *)(sortValue0 + 120);
    if ( v35 )
    {
      v36 = System_String__Concat_44307816(
              (System_String_o *)StringLiteral_15634/*"["*/,
              *(System_String_o **)(v35 + 24),
              (System_String_o *)StringLiteral_15870/*"]"*/,
              0LL);
      this->fields._expiredPresents_k__BackingField = v36;
      sub_B2C2F8(
        (BattleServantConfConponent_o *)&this->fields._expiredPresents_k__BackingField,
        (System_Int32_array **)v36,
        v37,
        v38,
        v39,
        v40,
        v41,
        v42);
      if ( v16 )
      {
        v43 = this->fields.m_parent;
        sortValue0 = (int64_t)System_Collections_Generic_List_long___ToArray(
                                v16,
                                (const MethodInfo_2F6F0B4 *)Method_System_Collections_Generic_List_long__ToArray__);
        if ( v43 )
        {
          UserPresentBoxWindow__receivePresent(v43, (System_Int64_array *)sortValue0, selectItm->fields.idx, 0, 0LL);
          return;
        }
      }
    }
LABEL_25:
    sub_B2C434(sortValue0, v18);
  }
  v44 = (UserPresentListViewManager_o *)sub_B2C728(sortValue0);
  UserPresentListViewManager___ctor(v44, v45);
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
  __int64 v15; // x1
  int32_t size; // w8
  Il2CppObject *current; // x21
  System_Action_o *v18; // x22
  __int64 v19; // x0
  __int64 v20; // x1
  const MethodInfo *v21; // x3
  System_Collections_Generic_List_Enumerator_T__o v22; // [xsp+8h] [xbp-58h] BYREF
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  if ( (byte_4185DC6 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, *(_QWORD *)&mode);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_UserPresentListViewObject__Dispose__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_UserPresentListViewObject__MoveNext__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_UserPresentListViewObject__get_Current__, v9);
    sub_B2C35C(&Method_System_Collections_Generic_List_UserPresentListViewObject__GetEnumerator__, v10);
    sub_B2C35C(&Method_System_Collections_Generic_List_UserPresentListViewObject__get_Count__, v11);
    sub_B2C35C(&Method_UserPresentListViewManager_OnMoveEnd__, v12);
    sub_B2C35C(&StringLiteral_10036/*"OnMoveEnd"*/, v13);
    byte_4185DC6 = 1;
  }
  memset(&v22, 0, sizeof(v22));
  ObjectList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)UserPresentListViewManager__get_ObjectList(
                                                                                                this,
                                                                                                *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_B2C434(0LL, v15);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10036/*"OnMoveEnd"*/,
      delay,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v22,
      ObjectList,
      (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_UserPresentListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v22,
              (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_UserPresentListViewObject__MoveNext__) )
    {
      current = v22.fields.current;
      v18 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
      System_Action___ctor(v18, (Il2CppObject *)this, Method_UserPresentListViewManager_OnMoveEnd__, 0LL);
      if ( !current )
        sub_B2C434(v19, v20);
      zero = UnityEngine_Vector3__get_zero(0LL);
      UserPresentListViewObject__Init(
        (UserPresentListViewObject_o *)current,
        mode,
        v18,
        zero.fields.x,
        *(UnityEngine_Vector3_o *)&zero.fields.y,
        v21);
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v22,
      (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_UserPresentListViewObject__Dispose__);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall UserPresentListViewManager__RequestListObject_21554508(
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
  __int64 v13; // x1
  int32_t size; // w8
  Il2CppObject *current; // x21
  System_Action_o *v16; // x22
  __int64 v17; // x0
  __int64 v18; // x1
  const MethodInfo *v19; // x3
  System_Collections_Generic_List_Enumerator_T__o v20; // [xsp+8h] [xbp-58h] BYREF
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  if ( (byte_4185DC7 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, *(_QWORD *)&mode);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_UserPresentListViewObject__Dispose__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_UserPresentListViewObject__MoveNext__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_UserPresentListViewObject__get_Current__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_UserPresentListViewObject__GetEnumerator__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_UserPresentListViewObject__get_Count__, v9);
    sub_B2C35C(&Method_UserPresentListViewManager_OnMoveEnd__, v10);
    sub_B2C35C(&StringLiteral_10036/*"OnMoveEnd"*/, v11);
    byte_4185DC7 = 1;
  }
  memset(&v20, 0, sizeof(v20));
  ObjectList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)UserPresentListViewManager__get_ObjectList(
                                                                                                this,
                                                                                                *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_B2C434(0LL, v13);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10036/*"OnMoveEnd"*/,
      0.0,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v20,
      ObjectList,
      (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_UserPresentListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v20,
              (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_UserPresentListViewObject__MoveNext__) )
    {
      current = v20.fields.current;
      v16 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
      System_Action___ctor(v16, (Il2CppObject *)this, Method_UserPresentListViewManager_OnMoveEnd__, 0LL);
      if ( !current )
        sub_B2C434(v17, v18);
      zero = UnityEngine_Vector3__get_zero(0LL);
      UserPresentListViewObject__Init(
        (UserPresentListViewObject_o *)current,
        mode,
        v16,
        zero.fields.x,
        *(UnityEngine_Vector3_o *)&zero.fields.y,
        v19);
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v20,
      (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_UserPresentListViewObject__Dispose__);
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
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.callbackFunc,
    (System_Int32_array **)callback,
    (System_String_array **)callback,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  UserPresentListViewManager__SetMode_21554288(this, mode, v10);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall UserPresentListViewManager__SetMode_21554288(
        UserPresentListViewManager_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  UserPresentListViewManager_o *v4; // x19
  struct System_Collections_Generic_List_GameObject__o *objectList; // x8
  const MethodInfo *v6; // x2
  int32_t v7; // w1

  v4 = this;
  if ( (byte_4185DC5 & 1) == 0 )
  {
    this = (UserPresentListViewManager_o *)sub_B2C35C(
                                             &Method_System_Collections_Generic_List_GameObject__get_Count__,
                                             *(_QWORD *)&mode);
    byte_4185DC5 = 1;
  }
  objectList = v4->fields.objectList;
  v4->fields.initMode = mode;
  if ( !objectList )
    sub_B2C434(this, *(_QWORD *)&mode);
  v4->fields.callbackCount = objectList->fields._size;
  ListViewManager__set_IsInput((ListViewManager_o *)v4, mode == 1, 0LL);
  if ( mode == 1 )
  {
    v7 = 3;
LABEL_8:
    UserPresentListViewManager__RequestListObject_21554508(v4, v7, v6);
    return;
  }
  if ( mode == 2 )
  {
    v7 = 4;
    goto LABEL_8;
  }
}


void __fastcall UserPresentListViewManager__SetMode_21554452(
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
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.callbackFunc2,
    (System_Int32_array **)callback,
    (System_String_array **)callback,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  UserPresentListViewManager__SetMode_21554288(this, mode, v10);
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
  if ( (byte_4185DC4 & 1) == 0 )
  {
    this = (UserPresentListViewManager_o *)sub_B2C35C(&UserPresentListViewObject_TypeInfo, obj);
    byte_4185DC4 = 1;
  }
  if ( !obj
    || (v6 = *(&UserPresentListViewObject_TypeInfo->_2.bitflags2 + 1),
        *(&obj->klass->_2.bitflags2 + 1) < (unsigned int)v6)
    || (UserPresentListViewObject_c *)obj->klass->_2.typeHierarchy[v6 - 1] != UserPresentListViewObject_TypeInfo )
  {
    sub_B2C434(this, obj);
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
  __int64 v8; // x1
  ListViewSort_o *sort; // x0
  UILabel_o *v10; // x20
  UnityEngine_Object_o *sortOrderSprite; // x20
  struct ListViewSort_o *v12; // x8
  System_String_o **v13; // x8
  struct ListViewSort_o *v14; // x8
  System_String_o **v15; // x8

  if ( (byte_4185DD3 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, method);
    sub_B2C35C(&StringLiteral_17021/*"btn_sort_up"*/, v3);
    sub_B2C35C(&StringLiteral_17061/*"btn_txt_new"*/, v4);
    sub_B2C35C(&StringLiteral_17068/*"btn_txt_old"*/, v5);
    sub_B2C35C(&StringLiteral_17018/*"btn_sort_down"*/, v6);
    byte_4185DD3 = 1;
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
    v10 = this->fields.sortKindLabel;
    sort = (ListViewSort_o *)ListViewSort__GetSortKindButtonText(sort, 0LL);
    if ( !v10 )
      goto LABEL_26;
    UILabel__set_text(v10, (System_String_o *)sort, 0LL);
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
    v12 = this->fields.sort;
    if ( v12 )
    {
      sort = (ListViewSort_o *)this->fields.sortExplanationSprite;
      if ( sort )
      {
        v13 = (System_String_o **)(v12->fields.isAscendingOrder ? &StringLiteral_17068/*"btn_txt_old"*/ : &StringLiteral_17061/*"btn_txt_new"*/);
        UISprite__set_spriteName((UISprite_o *)sort, *v13, 0LL);
        v14 = this->fields.sort;
        if ( v14 )
        {
          sort = (ListViewSort_o *)this->fields.sortOrderSprite;
          if ( sort )
          {
            if ( v14->fields.isAscendingOrder )
              v15 = (System_String_o **)&StringLiteral_17018/*"btn_sort_down"*/;
            else
              v15 = (System_String_o **)&StringLiteral_17021/*"btn_sort_up"*/;
            UISprite__set_spriteName((UISprite_o *)sort, *v15, 0LL);
            return;
          }
        }
      }
    }
LABEL_26:
    sub_B2C434(sort, v8);
  }
}


void __fastcall UserPresentListViewManager___DlgForExpiredPresent_b__69_0(
        UserPresentListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  CommonUI_o *Instance; // x0
  __int64 v6; // x1
  CommonUI_o *v7; // x20
  System_Action_o *v8; // x21

  if ( (byte_4185DD8 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, method);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v3);
    sub_B2C35C(&Method_UserPresentListViewManager__DlgForExpiredPresent_b__69_1__, v4);
    byte_4185DD8 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__CloseNotificationDialog(Instance, 0LL),
        v7 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
        v8 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo),
        System_Action___ctor(
          v8,
          (Il2CppObject *)this,
          Method_UserPresentListViewManager__DlgForExpiredPresent_b__69_1__,
          0LL),
        !v7) )
  {
    sub_B2C434(Instance, v6);
  }
  CommonUI__maskFadeout(v7, 1, 0.5, v8, 0LL);
}


void __fastcall UserPresentListViewManager___DlgForExpiredPresent_b__69_1(
        UserPresentListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  UserPresentBoxWindow_o *m_parent; // x0

  if ( (byte_4185DD9 & 1) == 0 )
  {
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    byte_4185DD9 = 1;
  }
  UserPresentListViewManager__DestroyList(this, method);
  m_parent = this->fields.m_parent;
  if ( !m_parent
    || (UserPresentBoxWindow__SetReDispFromExpiredPresent(m_parent, 0LL),
        (m_parent = (UserPresentBoxWindow_o *)this->fields.scrollView) == 0LL)
    || (UIScrollView__ResetPosition((UIScrollView_o *)m_parent, 0LL),
        (m_parent = (UserPresentBoxWindow_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__)) == 0LL) )
  {
    sub_B2C434(m_parent, v3);
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

  if ( (byte_4185DB7 & 1) == 0 )
  {
    sub_B2C35C(&UserPresentListViewManager_CallbackFunc_TypeInfo, value);
    byte_4185DB7 = 1;
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
    v8 = sub_B20D74(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (UserPresentListViewManager_o *)sub_B2C728(v7);
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

  if ( (byte_4185DB9 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, value);
    byte_4185DB9 = 1;
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
    v8 = sub_B20D74(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (UserPresentListViewManager_o *)sub_B2C728(v7);
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

  if ( (byte_4185DBB & 1) == 0 )
  {
    sub_B2C35C(&UserPresentListViewManager_ReceiveCallbackFunc_TypeInfo, value);
    byte_4185DBB = 1;
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
    v8 = sub_B20D74(p_receivecCallbackFunc, v7, receivecCallbackFunc);
    v9 = receivecCallbackFunc == (System_Delegate_o *)v8;
    receivecCallbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (UserPresentListViewManager_o *)sub_B2C728(v7);
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
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v11; // x19
  __int64 v12; // x1
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  Il2CppObject *current; // x21
  _BOOL8 v15; // x0
  __int64 v16; // x1
  UserPresentListViewObject_o *Component_srcLineSprite; // x0
  const MethodInfo *v18; // x1
  EventMissionProgressRequest_Argument_ProgressData_o *v19; // x21
  ListViewItem_o *Item; // x0
  __int64 v21; // x1
  _BOOL8 v22; // x0
  __int64 v23; // x1
  System_Collections_Generic_List_Enumerator_T__o v25; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v26; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4185DC0 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v3);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v4);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_UserPresentListViewObject___, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_UserPresentListViewObject__Add__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_UserPresentListViewObject___ctor__, v8);
    sub_B2C35C(&System_Collections_Generic_List_UserPresentListViewObject__TypeInfo, v9);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v10);
    byte_4185DC0 = 1;
  }
  memset(&v26, 0, sizeof(v26));
  v11 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_UserPresentListViewObject__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v11,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_UserPresentListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_B2C434(0LL, v12);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v25,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)objectList,
    (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v26 = v25;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v26,
            (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v26.fields.current;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v15 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v15 )
    {
      if ( !current )
        sub_B2C434(v15, v16);
      Component_srcLineSprite = (UserPresentListViewObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                 (UnityEngine_GameObject_o *)current,
                                                                 (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_UserPresentListViewObject___);
      v19 = (EventMissionProgressRequest_Argument_ProgressData_o *)Component_srcLineSprite;
      if ( !Component_srcLineSprite )
        sub_B2C434(0LL, v18);
      Item = (ListViewItem_o *)UserPresentListViewObject__GetItem(Component_srcLineSprite, v18);
      if ( !Item )
        sub_B2C434(0LL, v21);
      if ( Item->fields.isTermination )
      {
        v22 = ListViewManager__ClippingItem_24147020((ListViewManager_o *)this, Item, 0LL);
        if ( v22 )
        {
          if ( !v11 )
            sub_B2C434(v22, v23);
          goto LABEL_16;
        }
      }
      else
      {
        if ( !v11 )
          sub_B2C434(Item, v21);
LABEL_16:
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v11,
          v19,
          (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_UserPresentListViewObject__Add__);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v26,
    (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
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
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v11; // x19
  __int64 v12; // x1
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  Il2CppObject *current; // x20
  _BOOL8 v15; // x0
  __int64 v16; // x1
  EventMissionProgressRequest_Argument_ProgressData_o *Component_srcLineSprite; // x0
  System_Collections_Generic_List_Enumerator_T__o v19; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v20; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_4185DBF & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v3);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v4);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_UserPresentListViewObject___, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_UserPresentListViewObject__Add__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_UserPresentListViewObject___ctor__, v8);
    sub_B2C35C(&System_Collections_Generic_List_UserPresentListViewObject__TypeInfo, v9);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v10);
    byte_4185DBF = 1;
  }
  memset(&v20, 0, sizeof(v20));
  v11 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_UserPresentListViewObject__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v11,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_UserPresentListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_B2C434(0LL, v12);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v19,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)objectList,
    (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v20 = v19;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v20,
            (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v20.fields.current;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v15 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v15 )
    {
      if ( !current )
        sub_B2C434(v15, v16);
      Component_srcLineSprite = (EventMissionProgressRequest_Argument_ProgressData_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                                         (UnityEngine_GameObject_o *)current,
                                                                                         (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_UserPresentListViewObject___);
      if ( !v11 )
        sub_B2C434(Component_srcLineSprite, Component_srcLineSprite);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v11,
        Component_srcLineSprite,
        (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_UserPresentListViewObject__Add__);
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v20,
    (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_UserPresentListViewObject__o *)v11;
}


ListViewSort_o *__fastcall UserPresentListViewManager__get_SortInfo(const MethodInfo *method)
{
  __int64 v1; // x1
  UserPresentListViewManager_c *v2; // x0

  if ( (byte_4185DB6 & 1) == 0 )
  {
    sub_B2C35C(&UserPresentListViewManager_TypeInfo, v1);
    byte_4185DB6 = 1;
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

  if ( (byte_4185DB8 & 1) == 0 )
  {
    sub_B2C35C(&UserPresentListViewManager_CallbackFunc_TypeInfo, value);
    byte_4185DB8 = 1;
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
    v8 = sub_B20D74(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (UserPresentListViewManager_o *)sub_B2C728(v7);
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

  if ( (byte_4185DBA & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, value);
    byte_4185DBA = 1;
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
    v8 = sub_B20D74(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (UserPresentListViewManager_o *)sub_B2C728(v7);
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

  if ( (byte_4185DBC & 1) == 0 )
  {
    sub_B2C35C(&UserPresentListViewManager_ReceiveCallbackFunc_TypeInfo, value);
    byte_4185DBC = 1;
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
    v8 = sub_B20D74(p_receivecCallbackFunc, v7, receivecCallbackFunc);
    v9 = receivecCallbackFunc == (System_Delegate_o *)v8;
    receivecCallbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (UserPresentListViewManager_o *)sub_B2C728(v7);
  UserPresentListViewManager__get_select_idx(v10, v11);
}


void __fastcall UserPresentListViewManager__resetCheckStatus(
        UserPresentListViewManager_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_long__o *checkedIdList; // x0

  if ( (byte_4185DCC & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_long__Clear__, method);
    byte_4185DCC = 1;
  }
  checkedIdList = this->fields.checkedIdList;
  if ( checkedIdList )
    System_Collections_Generic_List_long___Clear(
      checkedIdList,
      (const MethodInfo_2F6D3B4 *)Method_System_Collections_Generic_List_long__Clear__);
}


void __fastcall UserPresentListViewManager__setJumpType(
        UserPresentListViewManager_o *this,
        int32_t type,
        const MethodInfo *method)
{
  UserPresentBoxErrorDialog_o *dialog; // x0

  dialog = this->fields.dialog;
  if ( !dialog )
    sub_B2C434(0LL, type);
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
  sub_B2C2F8(
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

  if ( (byte_4185DCF & 1) == 0 )
  {
    sub_B2C35C(&LocalizationManager_TypeInfo, callback);
    sub_B2C35C(&StringLiteral_11070/*"REJECT_NORMAL_TXT"*/, v10);
    sub_B2C35C(&StringLiteral_11066/*"REJECT_ALL_TXT"*/, v11);
    sub_B2C35C(&StringLiteral_1/*""*/, v12);
    byte_4185DCF = 1;
  }
  this->fields.receivecCallbackFunc = callback;
  sub_B2C2F8(
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
    v16 = &StringLiteral_11070/*"REJECT_NORMAL_TXT"*/;
    goto LABEL_14;
  }
  if ( (unsigned int)(kind - 1) <= 2 )
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v16 = &StringLiteral_11066/*"REJECT_ALL_TXT"*/;
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  struct System_Collections_Generic_List_long__o *checkedIdList; // x21
  char v12; // w22
  UserPresentBoxWindow_o *m_parent; // x0
  int32_t size; // w25
  BalanceConfig_c *v15; // x0
  int32_t PresentBoxCheckMax; // w26
  System_Collections_Generic_List_long__o *v17; // x20
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x21
  __int64 v19; // x24
  char v20; // w27
  int v21; // w8
  UserPresentListViewItem_o *v22; // x21
  __int64 v23; // x9
  int64_t presentId; // x22
  const MethodInfo *v25; // x3
  int32_t v26; // w0
  const MethodInfo *v27; // x3
  const MethodInfo *v28; // x2
  struct UserPresentBoxEntity_o *usrPresentEnt; // x8
  struct ItemEntity_o *itemEnt; // x8
  struct System_Collections_Generic_List_long__o *v31; // x8
  UserPresentListViewManager_o *v32; // x0
  const MethodInfo *v33; // x1

  if ( (byte_4185DCB & 1) == 0 )
  {
    sub_B2C35C(&BalanceConfig_TypeInfo, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_long__IndexOf__, v3);
    sub_B2C35C(&Method_System_Collections_Generic_List_long__Remove__, v4);
    sub_B2C35C(&Method_System_Collections_Generic_List_long___ctor___67311576, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_long__get_Count__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v8);
    sub_B2C35C(&System_Collections_Generic_List_long__TypeInfo, v9);
    sub_B2C35C(&UserPresentListViewItem_TypeInfo, v10);
    byte_4185DCB = 1;
  }
  checkedIdList = this->fields.checkedIdList;
  if ( checkedIdList && checkedIdList->fields._size )
  {
    v12 = 0;
  }
  else
  {
    m_parent = this->fields.m_parent;
    if ( !m_parent )
      goto LABEL_35;
    v12 = 1;
    UserPresentBoxWindow__SetCheckedItemsButtonEnable(m_parent, 0, 1, 0LL);
    checkedIdList = this->fields.checkedIdList;
    if ( !checkedIdList )
      goto LABEL_35;
  }
  size = checkedIdList->fields._size;
  v15 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v15 = BalanceConfig_TypeInfo;
    checkedIdList = this->fields.checkedIdList;
  }
  PresentBoxCheckMax = v15->static_fields->PresentBoxCheckMax;
  v17 = (System_Collections_Generic_List_long__o *)sub_B2C42C(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor_49726532(
    v17,
    (System_Collections_Generic_IEnumerable_T__o *)checkedIdList,
    (const MethodInfo_2F6C444 *)Method_System_Collections_Generic_List_long___ctor___67311576);
  itemList = this->fields.itemList;
  if ( !itemList )
LABEL_35:
    sub_B2C434(m_parent, method);
  v19 = 0LL;
  v20 = (size >= PresentBoxCheckMax) | v12;
  while ( 1 )
  {
    v21 = itemList->fields._size;
    if ( (int)v19 >= v21 )
    {
      v31 = this->fields.checkedIdList;
      if ( v31 )
      {
        m_parent = this->fields.m_parent;
        if ( m_parent )
        {
          UserPresentBoxWindow__SetSelectCount(m_parent, v31->fields._size, 0LL);
          return;
        }
      }
      goto LABEL_35;
    }
    if ( v21 <= (unsigned int)v19 )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
    v22 = (UserPresentListViewItem_o *)itemList->fields._items->m_Items[v19];
    if ( !v22 )
      goto LABEL_35;
    method = (const MethodInfo *)UserPresentListViewItem_TypeInfo;
    v23 = *(&UserPresentListViewItem_TypeInfo->_2.bitflags2 + 1);
    if ( *(&v22->klass->_2.bitflags2 + 1) < (unsigned int)v23
      || (UserPresentListViewItem_c *)v22->klass->_2.typeHierarchy[v23 - 1] != UserPresentListViewItem_TypeInfo )
    {
      break;
    }
    if ( !v17 )
      goto LABEL_35;
    presentId = v22->fields.presentId;
    if ( System_Collections_Generic_List_long___Remove(
           v17,
           presentId,
           (const MethodInfo_2F6E924 *)Method_System_Collections_Generic_List_long__Remove__) )
    {
      m_parent = (UserPresentBoxWindow_o *)this->fields.checkedIdList;
      if ( !m_parent )
        goto LABEL_35;
      v26 = System_Collections_Generic_List_long___IndexOf(
              (System_Collections_Generic_List_long__o *)m_parent,
              presentId,
              (const MethodInfo_2F6E020 *)Method_System_Collections_Generic_List_long__IndexOf__);
      UserPresentListViewItem__setCheckBoxed(v22, 1, v26 + 1, v27);
    }
    else
    {
      UserPresentListViewItem__setCheckBoxed(v22, 0, -1, v25);
      method = (const MethodInfo *)(size >= PresentBoxCheckMax);
      if ( (v20 & 1) == 0 )
      {
        usrPresentEnt = v22->fields.usrPresentEnt;
        if ( usrPresentEnt && usrPresentEnt->fields.giftType == 2 )
        {
          itemEnt = v22->fields.itemEnt;
          if ( !itemEnt )
            goto LABEL_35;
          LOBYTE(method) = itemEnt->fields.type == 24;
        }
        else
        {
          LOBYTE(method) = 0;
        }
      }
      UserPresentListViewItem__setBlocked(v22, (bool)method, v28);
    }
    itemList = this->fields.itemList;
    ++v19;
    if ( !itemList )
      goto LABEL_35;
  }
  v32 = (UserPresentListViewManager_o *)sub_B2C728(v22);
  UserPresentListViewManager__DestroyList(v32, v33);
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
  sub_B2C2F8(p_method, object);
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
  return (System_IAsyncResult_o *)sub_B2C300(this, v6, callback, object);
}


void __fastcall UserPresentListViewManager_CallbackFunc__EndInvoke(
        UserPresentListViewManager_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B2C304(result, 0LL, method);
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
  __int64 v12; // x3
  System_String_c *v13; // x8
  unsigned __int64 v14; // x10
  int32_t *v15; // x11
  __int64 v16; // x0
  __int64 v17; // x0
  unsigned int v18; // w23
  __int64 v19; // x0
  __int64 v20; // x3
  __int64 v21; // x8
  unsigned __int64 v22; // x10
  _DWORD *v23; // x11
  __int64 v24; // x0
  __int64 v25; // x0
  __int64 v26; // x0
  void (__fastcall **v27)(System_String_o *, _QWORD); // x0
  __int64 v28; // x0
  void (__fastcall **v29)(__int64 *, System_String_o *, _QWORD); // x0
  UserPresentListViewManager_CallbackFunc_o *v30; // x8
  __int64 v31; // x21
  __int64 *v32; // x22
  void (__fastcall *v33)(System_String_o *, __int64); // x23
  char v34; // w0
  int v35; // w8
  char v36; // w23
  char v37; // w0
  __int64 v38; // x3
  __int64 v39; // x8
  __int64 v40; // x1
  __int64 v41; // x2
  unsigned __int64 v42; // x10
  _DWORD *v43; // x11
  char v44; // w22
  char v45; // w0
  __int64 v46; // x3
  System_String_c *klass; // x8
  __int64 v48; // x1
  __int64 v49; // x2
  unsigned __int64 v50; // x10
  int32_t *p_offset; // x11
  UserPresentListViewManager_CallbackFunc_o *v52; // [xsp+8h] [xbp-48h] BYREF

  v52 = this;
  v4 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v4 )
  {
    v8 = &v52;
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
      v30 = v8[i];
      v32 = *(__int64 **)&v30->fields.method;
      v31 = *(_QWORD *)&v30->fields.extra_arg;
      v33 = *(void (__fastcall **)(System_String_o *, __int64))&v30->fields.method_ptr;
      if ( *(__int16 *)(v31 + 72) == -1 )
        sub_B2C418(*(_QWORD *)&v30->fields.extra_arg, result, method, v3);
      v34 = sub_B2C38C(v31);
      v35 = *(unsigned __int8 *)(v31 + 74);
      if ( (v34 & 1) != 0 )
      {
        if ( v35 == 1 )
          goto LABEL_58;
      }
      else
      {
        if ( v35 != 1 )
        {
          if ( *(__int16 *)(v31 + 72) != -1 && this->fields.m_target )
          {
            v44 = sub_B2C384(v31);
            v45 = sub_B2C788(v31);
            if ( (v44 & 1) != 0 )
            {
              if ( (v45 & 1) != 0 )
              {
                klass = result->klass;
                v48 = *(_QWORD *)(v31 + 24);
                v49 = *(unsigned __int16 *)(v31 + 72);
                if ( *(_WORD *)&result->klass->_2.bitflags1 )
                {
                  v50 = 0LL;
                  p_offset = &klass->_1.interfaceOffsets->offset;
                  while ( *((_QWORD *)p_offset - 1) != v48 )
                  {
                    ++v50;
                    p_offset += 4;
                    if ( v50 >= *(unsigned __int16 *)&result->klass->_2.bitflags1 )
                      goto LABEL_57;
                  }
                  v26 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset + 2 * (int)v49);
                }
                else
                {
LABEL_57:
                  v26 = sub_AC5258(result, v48, v49, v46);
                }
                v17 = *(_QWORD *)(v26 + 8);
              }
              else
              {
                v17 = *((_QWORD *)&result->klass->vtable._1_Finalize.methodPtr + 2 * *(unsigned __int16 *)(v31 + 72));
              }
              v27 = (void (__fastcall **)(System_String_o *, _QWORD))sub_B2C40C(v17, v31);
              (*v27)(result, v27);
            }
            else
            {
              v10 = *(unsigned __int16 *)(v31 + 72);
              if ( (v45 & 1) != 0 )
              {
                class_0 = j_il2cpp_method_get_class_0(v31);
                v13 = result->klass;
                if ( *(_WORD *)&result->klass->_2.bitflags1 )
                {
                  v14 = 0LL;
                  v15 = &v13->_1.interfaceOffsets->offset;
                  while ( *((_QWORD *)v15 - 1) != class_0 )
                  {
                    ++v14;
                    v15 += 4;
                    if ( v14 >= *(unsigned __int16 *)&result->klass->_2.bitflags1 )
                      goto LABEL_11;
                  }
                  v16 = (__int64)(&v13->vtable._0_Equals.method + 2 * (int)(*v15 + v10));
                }
                else
                {
LABEL_11:
                  v16 = sub_AC5258(result, class_0, v10, v12);
                }
                (*(void (__fastcall **)(System_String_o *, _QWORD))v16)(result, *(_QWORD *)(v16 + 8));
              }
              else
              {
                (*((void (__fastcall **)(System_String_o *, _QWORD))&result->klass->vtable._0_Equals.method
                 + 2 * *(unsigned __int16 *)(v31 + 72)))(
                  result,
                  *((_QWORD *)&result->klass->vtable._1_Finalize.methodPtr + 2 * *(unsigned __int16 *)(v31 + 72)));
              }
            }
            continue;
          }
LABEL_58:
          v33(result, v31);
          continue;
        }
        if ( !v32 )
          goto LABEL_58;
        if ( *(__int16 *)(v31 + 72) != -1 && (*(_BYTE *)(*v32 + 277) & 1) == 0 && this->fields.m_target )
        {
          v36 = sub_B2C384(v31);
          v37 = sub_B2C788(v31);
          if ( (v36 & 1) != 0 )
          {
            if ( (v37 & 1) != 0 )
            {
              v39 = *v32;
              v40 = *(_QWORD *)(v31 + 24);
              v41 = *(unsigned __int16 *)(v31 + 72);
              if ( *(_WORD *)(*v32 + 298) )
              {
                v42 = 0LL;
                v43 = (_DWORD *)(*(_QWORD *)(v39 + 176) + 8LL);
                while ( *((_QWORD *)v43 - 1) != v40 )
                {
                  ++v42;
                  v43 += 4;
                  if ( v42 >= *(unsigned __int16 *)(*v32 + 298) )
                    goto LABEL_48;
                }
                v28 = v39 + 16LL * (*v43 + (int)v41) + 312;
              }
              else
              {
LABEL_48:
                v28 = sub_AC5258(v32, v40, v41, v38);
              }
              v25 = *(_QWORD *)(v28 + 8);
            }
            else
            {
              v25 = *(_QWORD *)(*v32 + 16LL * *(unsigned __int16 *)(v31 + 72) + 320);
            }
            v29 = (void (__fastcall **)(__int64 *, System_String_o *, _QWORD))sub_B2C40C(v25, v31);
            (*v29)(v32, result, v29);
          }
          else
          {
            v18 = *(unsigned __int16 *)(v31 + 72);
            if ( (v37 & 1) != 0 )
            {
              v19 = j_il2cpp_method_get_class_0(v31);
              v21 = *v32;
              if ( *(_WORD *)(*v32 + 298) )
              {
                v22 = 0LL;
                v23 = (_DWORD *)(*(_QWORD *)(v21 + 176) + 8LL);
                while ( *((_QWORD *)v23 - 1) != v19 )
                {
                  ++v22;
                  v23 += 4;
                  if ( v22 >= *(unsigned __int16 *)(*v32 + 298) )
                    goto LABEL_19;
                }
                v24 = v21 + 16LL * (int)(*v23 + v18) + 312;
              }
              else
              {
LABEL_19:
                v24 = sub_AC5258(v32, v19, v18, v20);
              }
              (*(void (__fastcall **)(__int64 *, System_String_o *, _QWORD))v24)(v32, result, *(_QWORD *)(v24 + 8));
            }
            else
            {
              (*(void (__fastcall **)(__int64 *, System_String_o *, _QWORD))(*v32
                                                                           + 16LL * *(unsigned __int16 *)(v31 + 72)
                                                                           + 312))(
                v32,
                result,
                *(_QWORD *)(*v32 + 16LL * *(unsigned __int16 *)(v31 + 72) + 320));
            }
          }
          continue;
        }
      }
      ((void (__fastcall *)(__int64 *, System_String_o *, __int64))v33)(v32, result, v31);
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
  sub_B2C2F8(p_method, object);
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
  if ( (byte_41856D1 & 1) == 0 )
  {
    sub_B2C35C(&bool_TypeInfo, isReceive);
    byte_41856D1 = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10);
  return (System_IAsyncResult_o *)sub_B2C300(this, v9, callback, object);
}


void __fastcall UserPresentListViewManager_ReceiveCallbackFunc__EndInvoke(
        UserPresentListViewManager_ReceiveCallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B2C304(result, 0LL, method);
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
  __int64 v12; // x3
  __int64 v13; // x8
  unsigned __int64 v14; // x10
  _DWORD *v15; // x11
  __int64 v16; // x0
  __int64 v17; // x0
  __int64 v18; // x0
  void (__fastcall **v19)(__int64 *, bool, _QWORD); // x0
  UserPresentListViewManager_ReceiveCallbackFunc_o *v20; // x8
  __int64 *v21; // x21
  __int64 v22; // x22
  void (__fastcall *v23)(bool, __int64); // x23
  char v24; // w23
  char v25; // w0
  __int64 v26; // x3
  __int64 v27; // x8
  __int64 v28; // x1
  __int64 v29; // x2
  unsigned __int64 v30; // x10
  _DWORD *v31; // x11
  UserPresentListViewManager_ReceiveCallbackFunc_o *v32; // [xsp+8h] [xbp-48h] BYREF

  v32 = this;
  v4 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v4 )
  {
    v8 = &v32;
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
      v20 = v8[v9];
      v21 = *(__int64 **)&v20->fields.method;
      v22 = *(_QWORD *)&v20->fields.extra_arg;
      v23 = *(void (__fastcall **)(bool, __int64))&v20->fields.method_ptr;
      if ( *(__int16 *)(v22 + 72) == -1 )
        sub_B2C418(*(_QWORD *)&v20->fields.extra_arg, isReceive, method, v3);
      if ( (sub_B2C38C(v22) & 1) == 0 )
        break;
      if ( *(_BYTE *)(v22 + 74) != 1 )
        goto LABEL_36;
      v23(isReceive, v22);
LABEL_37:
      if ( ++v9 == v7 )
        return;
    }
    if ( v21 && *(__int16 *)(v22 + 72) != -1 && (*(_BYTE *)(*v21 + 277) & 1) == 0 && this->fields.m_target )
    {
      v24 = sub_B2C384(v22);
      v25 = sub_B2C788(v22);
      if ( (v24 & 1) != 0 )
      {
        if ( (v25 & 1) != 0 )
        {
          v27 = *v21;
          v28 = *(_QWORD *)(v22 + 24);
          v29 = *(unsigned __int16 *)(v22 + 72);
          if ( *(_WORD *)(*v21 + 298) )
          {
            v30 = 0LL;
            v31 = (_DWORD *)(*(_QWORD *)(v27 + 176) + 8LL);
            while ( *((_QWORD *)v31 - 1) != v28 )
            {
              ++v30;
              v31 += 4;
              if ( v30 >= *(unsigned __int16 *)(*v21 + 298) )
                goto LABEL_35;
            }
            v18 = v27 + 16LL * (*v31 + (int)v29) + 312;
          }
          else
          {
LABEL_35:
            v18 = sub_AC5258(v21, v28, v29, v26);
          }
          v17 = *(_QWORD *)(v18 + 8);
        }
        else
        {
          v17 = *(_QWORD *)(*v21 + 16LL * *(unsigned __int16 *)(v22 + 72) + 320);
        }
        v19 = (void (__fastcall **)(__int64 *, bool, _QWORD))sub_B2C40C(v17, v22);
        (*v19)(v21, isReceive, v19);
      }
      else
      {
        v10 = *(unsigned __int16 *)(v22 + 72);
        if ( (v25 & 1) != 0 )
        {
          class_0 = j_il2cpp_method_get_class_0(v22);
          v13 = *v21;
          if ( *(_WORD *)(*v21 + 298) )
          {
            v14 = 0LL;
            v15 = (_DWORD *)(*(_QWORD *)(v13 + 176) + 8LL);
            while ( *((_QWORD *)v15 - 1) != class_0 )
            {
              ++v14;
              v15 += 4;
              if ( v14 >= *(unsigned __int16 *)(*v21 + 298) )
                goto LABEL_11;
            }
            v16 = v13 + 16LL * (int)(*v15 + v10) + 312;
          }
          else
          {
LABEL_11:
            v16 = sub_AC5258(v21, class_0, v10, v12);
          }
          (*(void (__fastcall **)(__int64 *, bool, _QWORD))v16)(v21, isReceive, *(_QWORD *)(v16 + 8));
        }
        else
        {
          (*(void (__fastcall **)(__int64 *, bool, _QWORD))(*v21 + 16LL * *(unsigned __int16 *)(v22 + 72) + 312))(
            v21,
            isReceive,
            *(_QWORD *)(*v21 + 16LL * *(unsigned __int16 *)(v22 + 72) + 320));
        }
      }
      goto LABEL_37;
    }
LABEL_36:
    ((void (__fastcall *)(__int64 *, bool, __int64))v23)(v21, isReceive, v22);
    goto LABEL_37;
  }
}


void __fastcall UserPresentListViewManager___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  struct UserPresentListViewManager___c_StaticFields *static_fields; // x0

  if ( (byte_41856CB & 1) == 0 )
  {
    sub_B2C35C(&UserPresentListViewManager___c_TypeInfo, v1);
    byte_41856CB = 1;
  }
  v2 = (Il2CppObject *)sub_B2C42C(UserPresentListViewManager___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  static_fields = UserPresentListViewManager___c_TypeInfo->static_fields;
  static_fields->__9 = (struct UserPresentListViewManager___c_o *)v2;
  sub_B2C2F8(static_fields, v2);
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

  if ( (byte_41856CC & 1) == 0 )
  {
    this = (UserPresentListViewManager___c_o *)sub_B2C35C(&UserPresentListViewItem_TypeInfo, a);
    byte_41856CC = 1;
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
      sub_B2C434(this, a);
    }
  }
  else
  {
    sub_B2C728(a);
  }
  v10 = (UserPresentListViewManager___c_o *)sub_B2C728(b);
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

  if ( (byte_41856CD & 1) == 0 )
  {
    this = (UserPresentListViewManager___c_o *)sub_B2C35C(&UserPresentListViewItem_TypeInfo, obj);
    byte_41856CD = 1;
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
    this = (UserPresentListViewManager___c_o *)sub_B2C728(obj);
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
      sub_B2C434(this, obj);
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
  if ( (byte_41856CE & 1) == 0 )
  {
    this = (UserPresentListViewManager___c_o *)sub_B2C35C(&UserPresentListViewItem_TypeInfo, a);
    byte_41856CE = 1;
  }
  if ( !v5 )
LABEL_23:
    sub_B2C434(this, a);
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
  result = System_String__CompareTo_44376276(v10, (System_String_o *)this, 0LL);
  if ( result )
    return result;
  a = (ListViewItem_o *)UserPresentListViewItem_TypeInfo;
  v12 = *(&UserPresentListViewItem_TypeInfo->_2.bitflags2 + 1);
  if ( *(&v5->klass->_2.bitflags2 + 1) < (unsigned int)v12
    || (UserPresentListViewItem_c *)v5->klass->_2.typeHierarchy[v12 - 1] != UserPresentListViewItem_TypeInfo )
  {
LABEL_21:
    sub_B2C728(v5);
LABEL_22:
    this = (UserPresentListViewManager___c_o *)sub_B2C728(b);
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
  return System_String__CompareTo_44376276((System_String_o *)this, (System_String_o *)b[1].fields.sortValue2, 0LL);
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

  if ( (byte_41856CF & 1) == 0 )
  {
    this = (UserPresentListViewManager___c_o *)sub_B2C35C(&UserPresentListViewItem_TypeInfo, a);
    byte_41856CF = 1;
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
      sub_B2C434(this, a);
    }
  }
  else
  {
    sub_B2C728(a);
  }
  v10 = (UserPresentListViewManager___c__DisplayClass67_0_o *)sub_B2C728(b);
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
  if ( (byte_41856D0 & 1) == 0 )
  {
    this = (UserPresentListViewManager___c__DisplayClass67_0_o *)sub_B2C35C(&UserPresentListViewItem_TypeInfo, obj);
    byte_41856D0 = 1;
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
    sub_B2C434(this, obj);
  ticketItem = v4->fields.ticketItem;
  p_ticketItem = &v4->fields.ticketItem;
  *((_DWORD *)p_ticketItem - 1) = this[2].fields.ticketId + ticketsHave;
  if ( !ticketItem )
  {
    ItemEntity = UserPresentListViewItem__get_ItemEntity((UserPresentListViewItem_o *)obj, 0LL);
    *p_ticketItem = ItemEntity;
    sub_B2C2F8(p_ticketItem, ItemEntity);
  }
  return 0;
}