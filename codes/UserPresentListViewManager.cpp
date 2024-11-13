void __fastcall UserPresentListViewManager___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  ListViewSort_o *v8; // x19
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7

  if ( (byte_4B15058 & 1) == 0 )
  {
    sub_1BCA7E0(&ListViewSort_TypeInfo, v1, v2);
    sub_1BCA7E0(&UserPresentListViewManager_TypeInfo, v4, v5);
    sub_1BCA7E0(&StringLiteral_15391/*"UserPresent"*/, v6, v7);
    byte_4B15058 = 1;
  }
  v8 = (ListViewSort_o *)sub_1BCAA2C(ListViewSort_TypeInfo, v1, v2, v3);
  ListViewSort___ctor_41480716(v8, (System_String_o *)StringLiteral_15391/*"UserPresent"*/, 1, 0, 0LL);
  UserPresentListViewManager_TypeInfo->static_fields->sortInfo = v8;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)UserPresentListViewManager_TypeInfo->static_fields,
    (int64_t)v8,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14);
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
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7
  int64_t v23; // x2
  int32_t v24; // w3
  System_String_o *v25; // x4
  BattleSetupInfo_o *v26; // x5
  FollowerInfo_o *v27; // x6
  PartyListViewItem_o *v28; // x7
  __int64 v29; // x1
  const MethodInfo *v30; // x3
  int64_t m_parent; // x0
  __int64 v32; // x2
  __int64 v33; // x3
  System_Collections_Generic_IEnumerable_T__o *checkedIdList; // x22
  System_Collections_Generic_List_long__o *v35; // x21
  const MethodInfo *v36; // x3
  signed int max_length; // w8
  il2cpp_array_size_t v38; // w22
  Il2CppClass **v39; // x23
  Il2CppClass *v40; // x8
  UserPresentBoxEntity_o **v41; // x23
  Il2CppClass *v42; // t1
  __int64 v43; // x2
  __int64 v44; // x3
  UserPresentBoxEntity_o *v45; // x24
  UserPresentListViewItem_o *v46; // x23
  const MethodInfo *v47; // x3
  int64_t v48; // x2
  int32_t v49; // w3
  System_String_o *v50; // x4
  BattleSetupInfo_o *v51; // x5
  FollowerInfo_o *v52; // x6
  PartyListViewItem_o *v53; // x7
  __int64 v54; // x8
  _QWORD *v55; // x9
  __int64 v56; // x10
  __int64 v57; // x8
  struct System_Collections_Generic_List_long__o *v58; // x20
  int32_t v59; // w22
  const MethodInfo *v60; // x1
  __int64 v61; // x8
  unsigned __int64 v62; // x21
  UserPresentBoxEntity_o *v63; // x23
  UserPresentListViewItem_o *v64; // x22
  const MethodInfo *v65; // x3
  int64_t v66; // x2
  int32_t v67; // w3
  System_String_o *v68; // x4
  BattleSetupInfo_o *v69; // x5
  FollowerInfo_o *v70; // x6
  PartyListViewItem_o *v71; // x7
  __int64 v72; // x8
  _QWORD *v73; // x9
  __int64 v74; // x10
  __int64 v75; // x8

  if ( (byte_4B15043 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewItem__Add__, presentList, method);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_long__Remove__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_long___ctor___76787640, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_long__get_Count__, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_long__get_Item__, v11, v12);
    sub_1BCA7E0(&System_Collections_Generic_List_long__TypeInfo, v13, v14);
    sub_1BCA7E0(&UserPresentListViewItem_TypeInfo, v15, v16);
    byte_4B15043 = 1;
  }
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
  this->fields.selectPresentData = 0LL;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.selectPresentData, 0LL, v17, v18, v19, v20, v21, v22);
  this->fields.presentIds = 0LL;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.presentIds, 0LL, v23, v24, v25, v26, v27, v28);
  m_parent = (int64_t)this->fields.m_parent;
  if ( !m_parent )
    goto LABEL_38;
  UserPresentBoxWindow__SetCheckedItemsButtonEnable((UserPresentBoxWindow_o *)m_parent, 0, 0, v30);
  checkedIdList = (System_Collections_Generic_IEnumerable_T__o *)this->fields.checkedIdList;
  if ( checkedIdList )
  {
    v35 = (System_Collections_Generic_List_long__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_long__TypeInfo,
                                                       v29,
                                                       v32,
                                                       v33);
    System_Collections_Generic_List_long____ctor_56137060(
      v35,
      checkedIdList,
      (const MethodInfo_3589564 *)Method_System_Collections_Generic_List_long___ctor___76787640);
    if ( !presentList )
      goto LABEL_38;
    max_length = presentList->max_length;
    if ( max_length >= 1 )
    {
      v38 = 0;
      while ( v38 < max_length )
      {
        v39 = &presentList->obj.klass + (int)v38;
        v42 = v39[4];
        v41 = (UserPresentBoxEntity_o **)(v39 + 4);
        v40 = v42;
        if ( !v42 || !v35 )
          goto LABEL_38;
        m_parent = System_Collections_Generic_List_long___Remove(
                     v35,
                     (int64_t)v40->_1.namespaze,
                     (const MethodInfo_358B18C *)Method_System_Collections_Generic_List_long__Remove__);
        if ( v38 >= presentList->max_length )
          goto LABEL_39;
        v45 = *v41;
        v46 = (UserPresentListViewItem_o *)sub_1BCAA2C(UserPresentListViewItem_TypeInfo, v29, v43, v44);
        UserPresentListViewItem___ctor(v46, v38, v45, v47);
        m_parent = (int64_t)this->fields.itemList;
        if ( !m_parent )
          goto LABEL_38;
        v54 = *(_QWORD *)(m_parent + 16);
        v55 = Method_System_Collections_Generic_List_ListViewItem__Add__;
        ++*(_DWORD *)(m_parent + 28);
        if ( !v54 )
          goto LABEL_38;
        v56 = *(int *)(m_parent + 24);
        if ( (unsigned int)v56 >= *(_DWORD *)(v54 + 24) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)m_parent,
            (Il2CppObject *)v46,
            *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v55[4] + 192LL) + 112LL));
        }
        else
        {
          v57 = v54 + 8 * v56;
          *(_DWORD *)(m_parent + 24) = v56 + 1;
          *(_QWORD *)(v57 + 32) = v46;
          sub_1BCA784((PartyOrganizationUtility_o *)(v57 + 32), (int64_t)v46, v48, v49, v50, v51, v52, v53);
        }
        max_length = presentList->max_length;
        if ( (int)++v38 >= max_length )
          goto LABEL_18;
      }
      goto LABEL_39;
    }
LABEL_18:
    if ( !v35 )
LABEL_38:
      sub_1BCAA3C(m_parent, v29);
    v58 = this->fields.checkedIdList;
    if ( v35->fields._size >= 1 )
    {
      v59 = 0;
      do
      {
        m_parent = System_Collections_Generic_List_long___get_Item(
                     v35,
                     v59,
                     (const MethodInfo_35899A0 *)Method_System_Collections_Generic_List_long__get_Item__);
        if ( !v58 )
          goto LABEL_38;
        m_parent = System_Collections_Generic_List_long___Remove(
                     v58,
                     m_parent,
                     (const MethodInfo_358B18C *)Method_System_Collections_Generic_List_long__Remove__);
        v58 = this->fields.checkedIdList;
      }
      while ( ++v59 < v35->fields._size );
    }
    if ( !v58 )
      goto LABEL_38;
    if ( v58->fields._size >= 1 )
    {
      m_parent = (int64_t)this->fields.m_parent;
      if ( !m_parent )
        goto LABEL_38;
      UserPresentBoxWindow__SetCheckedItemsButtonEnable((UserPresentBoxWindow_o *)m_parent, 1, 1, v36);
      UserPresentListViewManager__updateCheckStatus(this, v60);
    }
  }
  else
  {
    if ( !presentList )
      goto LABEL_38;
    v61 = *(_QWORD *)&presentList->max_length;
    if ( (int)v61 >= 1 )
    {
      v62 = 0LL;
      while ( v62 < (unsigned int)v61 )
      {
        v63 = presentList->m_Items[v62];
        v64 = (UserPresentListViewItem_o *)sub_1BCAA2C(UserPresentListViewItem_TypeInfo, v29, v32, v33);
        UserPresentListViewItem___ctor(v64, v62, v63, v65);
        m_parent = (int64_t)this->fields.itemList;
        if ( !m_parent )
          goto LABEL_38;
        v72 = *(_QWORD *)(m_parent + 16);
        v73 = Method_System_Collections_Generic_List_ListViewItem__Add__;
        ++*(_DWORD *)(m_parent + 28);
        if ( !v72 )
          goto LABEL_38;
        v74 = *(int *)(m_parent + 24);
        if ( (unsigned int)v74 >= *(_DWORD *)(v72 + 24) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)m_parent,
            (Il2CppObject *)v64,
            *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v73[4] + 192LL) + 112LL));
        }
        else
        {
          v75 = v72 + 8 * v74;
          *(_DWORD *)(m_parent + 24) = v74 + 1;
          *(_QWORD *)(v75 + 32) = v64;
          sub_1BCA784((PartyOrganizationUtility_o *)(v75 + 32), (int64_t)v64, v66, v67, v68, v69, v70, v71);
        }
        LODWORD(v61) = presentList->max_length;
        if ( (__int64)++v62 >= (int)v61 )
          goto LABEL_37;
      }
LABEL_39:
      sub_1BCAA44(m_parent, v29);
    }
  }
LABEL_37:
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
}


void __fastcall UserPresentListViewManager__DeleteContinueData(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  UserPresentListViewManager_c *v3; // x0
  ListViewSort_o *sortInfo; // x0

  if ( (byte_4B1503E & 1) == 0 )
  {
    sub_1BCA7E0(&UserPresentListViewManager_TypeInfo, v1, v2);
    byte_4B1503E = 1;
  }
  v3 = UserPresentListViewManager_TypeInfo;
  if ( !UserPresentListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserPresentListViewManager_TypeInfo, v1);
    v3 = UserPresentListViewManager_TypeInfo;
  }
  sortInfo = v3->static_fields->sortInfo;
  if ( !sortInfo )
    sub_1BCAA3C(0LL, v1);
  ListViewSort__DeleteContinueData(sortInfo, 0LL);
}


void __fastcall UserPresentListViewManager__DestroyList(UserPresentListViewManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  ListViewSort_o *sort; // x0

  ListViewManager__DestroyList((ListViewManager_o *)this, 0LL);
  sort = this->fields.sort;
  if ( !sort )
    sub_1BCAA3C(0LL, v3);
  ListViewSort__Save(sort, 0LL);
}


void __fastcall UserPresentListViewManager__DlgForExpiredPresent(
        UserPresentListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  Il2CppObject *Instance; // x20
  System_String_o *v14; // x21
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x3
  System_Action_o *v18; // x22
  __int64 v19; // x0
  __int64 v20; // x1

  if ( (byte_4B15057 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v4, v5);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6, v7);
    sub_1BCA7E0(&Method_UserPresentListViewManager__DlgForExpiredPresent_b__69_0__, v8, v9);
    sub_1BCA7E0(&StringLiteral_10584/*"PRESENT_EXPIRED_ERROR_MESSAGE"*/, v10, v11);
    byte_4B15057 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v12);
  v14 = LocalizationManager__Get((System_String_o *)StringLiteral_10584/*"PRESENT_EXPIRED_ERROR_MESSAGE"*/, 0LL);
  v18 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v15, v16, v17);
  System_Action___ctor(
    v18,
    (Il2CppObject *)this,
    Method_UserPresentListViewManager__DlgForExpiredPresent_b__69_0__,
    0LL);
  if ( !Instance )
    sub_1BCAA3C(v19, v20);
  CommonUI__OpenNotificationDialog((CommonUI_o *)Instance, 0LL, v14, v18, -1, 0, 0, 0, 1, 0, 0, 0, 0LL, 0.0, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall UserPresentListViewManager__EndNoticeDlg(
        UserPresentListViewManager_o *this,
        int32_t scene,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  UserPresentBoxErrorDialog_o *dialog; // x21
  System_Action_T__o *v11; // x22
  Il2CppObject *Instance; // x0
  __int64 v13; // x1
  const MethodInfo *v14; // x2
  struct UserPresentListViewManager_ReceiveCallbackFunc_o *receivecCallbackFunc; // x8

  if ( (byte_4B15052 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_SceneList_Type__TypeInfo, *(_QWORD *)&scene, method);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6, v7);
    sub_1BCA7E0(&Method_UserPresentListViewManager_EndNoticeDlg__, v8, v9);
    byte_4B15052 = 1;
  }
  dialog = this->fields.dialog;
  v11 = (System_Action_T__o *)sub_1BCAA2C(System_Action_SceneList_Type__TypeInfo, *(_QWORD *)&scene, method, v3);
  System_Action_Int32Enum____ctor(v11, (Il2CppObject *)this, Method_UserPresentListViewManager_EndNoticeDlg__, 0LL);
  if ( !dialog )
    goto LABEL_14;
  UserPresentBoxErrorDialog__remove_OnErrorDialogClosed(dialog, (System_Action_SceneList_Type__o *)v11, v14);
  if ( scene == -1 )
    goto LABEL_11;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_14;
  if ( CommonUI__IsActive_MasterMission((CommonUI_o *)Instance, 0LL) )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !Instance )
      goto LABEL_14;
    CommonUI__CloseMasterMission((CommonUI_o *)Instance, 0LL);
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
LABEL_14:
    sub_1BCAA3C(Instance, v13);
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
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x1
  __int64 v36; // x2
  __int64 v37; // x1
  __int64 v38; // x2
  __int64 v39; // x1
  __int64 v40; // x2
  struct System_Collections_Generic_List_ListViewItem__o *presentAllSelectedList; // x8
  System_Collections_Generic_List_object__o **p_presentAllSelectedList; // x19
  int v43; // w9
  System_Collections_Generic_IEnumerable_T__o *itemList; // x21
  System_Collections_Generic_List_object__o *v45; // x22
  int64_t v46; // x2
  int32_t v47; // w3
  System_String_o *v48; // x4
  BattleSetupInfo_o *v49; // x5
  FollowerInfo_o *v50; // x6
  PartyListViewItem_o *v51; // x7
  const MethodInfo *v52; // x1
  __int64 v53; // x2
  __int64 v54; // x3
  System_Collections_Generic_List_object__o *NameText; // x0
  struct System_Collections_Generic_List_ListViewItem__o *v56; // x20
  System_Comparison_T__o *v57; // x21
  Il2CppObject *v58; // x22
  struct UserPresentListViewManager___c_StaticFields *static_fields; // x0
  int64_t v60; // x2
  int32_t v61; // w3
  System_String_o *v62; // x4
  BattleSetupInfo_o *v63; // x5
  FollowerInfo_o *v64; // x6
  PartyListViewItem_o *v65; // x7
  __int64 v66; // x2
  __int64 v67; // x3
  System_Collections_Generic_List_object__o *v68; // x20
  System_Predicate_object__o *v69; // x21
  Il2CppObject *v70; // x22
  struct UserPresentListViewManager___c_StaticFields *v71; // x0
  int64_t v72; // x2
  int32_t v73; // w3
  System_String_o *v74; // x4
  BattleSetupInfo_o *v75; // x5
  FollowerInfo_o *v76; // x6
  PartyListViewItem_o *v77; // x7
  __int64 v78; // x3
  System_Collections_Generic_List_object__o *v79; // x20
  int v80; // w8
  __int64 v81; // x2
  System_Comparison_T__o *v82; // x21
  Il2CppObject *v83; // x22
  struct UserPresentListViewManager___c_StaticFields *v84; // x0
  int64_t v85; // x2
  int32_t v86; // w3
  System_String_o *v87; // x4
  BattleSetupInfo_o *v88; // x5
  FollowerInfo_o *v89; // x6
  PartyListViewItem_o *v90; // x7
  __int64 v91; // x1
  __int64 v92; // x2
  __int64 v93; // x3
  System_Text_StringBuilder_o *v94; // x20
  int v95; // w24
  int32_t v96; // w21
  Il2CppObject *Item; // x0
  __int64 v98; // x1
  __int64 methodPtr_low; // x10
  Il2CppObject *v100; // x22
  System_String_o *v101; // x23

  if ( (byte_4B1504F & 1) == 0 )
  {
    sub_1BCA7E0(&BalanceConfig_TypeInfo, method, size);
    sub_1BCA7E0(&System_Comparison_ListViewItem__TypeInfo, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewItem__Clear__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewItem__RemoveAll__, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewItem__RemoveRange__, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewItem__Sort__, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewItem___ctor___76788512, v15, v16);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v17, v18);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v19, v20);
    sub_1BCA7E0(&System_Collections_Generic_List_ListViewItem__TypeInfo, v21, v22);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v23, v24);
    sub_1BCA7E0(&System_Predicate_ListViewItem__TypeInfo, v25, v26);
    sub_1BCA7E0(&System_Text_StringBuilder_TypeInfo, v27, v28);
    sub_1BCA7E0(&Method_UserPresentListViewManager___c__GetAllPresentStrings_b__60_0__, v29, v30);
    sub_1BCA7E0(&Method_UserPresentListViewManager___c__GetAllPresentStrings_b__60_1__, v31, v32);
    sub_1BCA7E0(&Method_UserPresentListViewManager___c__GetAllPresentStrings_b__60_2__, v33, v34);
    sub_1BCA7E0(&UserPresentListViewManager___c_TypeInfo, v35, v36);
    sub_1BCA7E0(&UserPresentListViewItem_TypeInfo, v37, v38);
    sub_1BCA7E0(&StringLiteral_10589/*"PRESENT_INFO"*/, v39, v40);
    byte_4B1504F = 1;
  }
  presentAllSelectedList = this->fields.presentAllSelectedList;
  p_presentAllSelectedList = (System_Collections_Generic_List_object__o **)&this->fields.presentAllSelectedList;
  if ( presentAllSelectedList )
  {
    size = (unsigned int)presentAllSelectedList->fields._size;
    v43 = presentAllSelectedList->fields._version + 1;
    presentAllSelectedList->fields._size = 0;
    presentAllSelectedList->fields._version = v43;
    if ( (int)size >= 1 )
      System_Array__Clear((System_Array_o *)presentAllSelectedList->fields._items, 0, size, 0LL);
  }
  itemList = (System_Collections_Generic_IEnumerable_T__o *)this->fields.itemList;
  v45 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_ListViewItem__TypeInfo,
                                                       method,
                                                       size,
                                                       v3);
  System_Collections_Generic_List_object____ctor_56235344(
    v45,
    itemList,
    (const MethodInfo_35A1550 *)Method_System_Collections_Generic_List_ListViewItem___ctor___76788512);
  this->fields.presentAllSelectedList = (struct System_Collections_Generic_List_ListViewItem__o *)v45;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.presentAllSelectedList,
    (int64_t)v45,
    v46,
    v47,
    v48,
    v49,
    v50,
    v51);
  NameText = (System_Collections_Generic_List_object__o *)UserPresentListViewManager___c_TypeInfo;
  v56 = this->fields.presentAllSelectedList;
  if ( !UserPresentListViewManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserPresentListViewManager___c_TypeInfo, v52);
    NameText = (System_Collections_Generic_List_object__o *)UserPresentListViewManager___c_TypeInfo;
  }
  v57 = *(System_Comparison_T__o **)(*(_QWORD *)&NameText[4].fields._size + 24LL);
  if ( !v57 )
  {
    if ( !NameText[5].fields._size )
    {
      j_il2cpp_runtime_class_init_0(NameText, v52);
      NameText = (System_Collections_Generic_List_object__o *)UserPresentListViewManager___c_TypeInfo;
    }
    v58 = **(Il2CppObject ***)&NameText[4].fields._size;
    v57 = (System_Comparison_T__o *)sub_1BCAA2C(System_Comparison_ListViewItem__TypeInfo, v52, v53, v54);
    System_Comparison_object____ctor(
      v57,
      v58,
      Method_UserPresentListViewManager___c__GetAllPresentStrings_b__60_0__,
      0LL);
    static_fields = UserPresentListViewManager___c_TypeInfo->static_fields;
    static_fields->__9__60_0 = (struct System_Comparison_ListViewItem__o *)v57;
    sub_1BCA784((PartyOrganizationUtility_o *)&static_fields->__9__60_0, (int64_t)v57, v60, v61, v62, v63, v64, v65);
  }
  if ( !v56 )
    goto LABEL_53;
  System_Collections_Generic_List_object___Sort_56244000(
    (System_Collections_Generic_List_object__o *)v56,
    v57,
    (const MethodInfo_35A3720 *)Method_System_Collections_Generic_List_ListViewItem__Sort__);
  NameText = (System_Collections_Generic_List_object__o *)UserPresentListViewManager___c_TypeInfo;
  v68 = *p_presentAllSelectedList;
  if ( !UserPresentListViewManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserPresentListViewManager___c_TypeInfo, v52);
    NameText = (System_Collections_Generic_List_object__o *)UserPresentListViewManager___c_TypeInfo;
  }
  v69 = *(System_Predicate_object__o **)(*(_QWORD *)&NameText[4].fields._size + 32LL);
  if ( !v69 )
  {
    if ( !NameText[5].fields._size )
    {
      j_il2cpp_runtime_class_init_0(NameText, v52);
      NameText = (System_Collections_Generic_List_object__o *)UserPresentListViewManager___c_TypeInfo;
    }
    v70 = **(Il2CppObject ***)&NameText[4].fields._size;
    v69 = (System_Predicate_object__o *)sub_1BCAA2C(System_Predicate_ListViewItem__TypeInfo, v52, v66, v67);
    System_Predicate_object____ctor(
      v69,
      v70,
      Method_UserPresentListViewManager___c__GetAllPresentStrings_b__60_1__,
      0LL);
    v71 = UserPresentListViewManager___c_TypeInfo->static_fields;
    v71->__9__60_1 = (struct System_Predicate_ListViewItem__o *)v69;
    sub_1BCA784((PartyOrganizationUtility_o *)&v71->__9__60_1, (int64_t)v69, v72, v73, v74, v75, v76, v77);
  }
  if ( !v68 )
    goto LABEL_53;
  System_Collections_Generic_List_object___RemoveAll(
    v68,
    (System_Predicate_T__o *)v69,
    (const MethodInfo_35A32B8 *)Method_System_Collections_Generic_List_ListViewItem__RemoveAll__);
  NameText = (System_Collections_Generic_List_object__o *)BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v52);
    NameText = (System_Collections_Generic_List_object__o *)BalanceConfig_TypeInfo;
  }
  v79 = *p_presentAllSelectedList;
  if ( !*p_presentAllSelectedList )
    goto LABEL_53;
  v52 = (const MethodInfo *)*(unsigned int *)(*(_QWORD *)&NameText[4].fields._size + 116LL);
  v80 = v79->fields._size;
  v81 = (unsigned int)(v80 - (_DWORD)v52);
  if ( v80 > (int)v52 )
  {
    System_Collections_Generic_List_object___RemoveRange(
      *p_presentAllSelectedList,
      (int32_t)v52,
      v81,
      (const MethodInfo_35A34C8 *)Method_System_Collections_Generic_List_ListViewItem__RemoveRange__);
    v79 = *p_presentAllSelectedList;
  }
  NameText = (System_Collections_Generic_List_object__o *)UserPresentListViewManager___c_TypeInfo;
  if ( !UserPresentListViewManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserPresentListViewManager___c_TypeInfo, v52);
    NameText = (System_Collections_Generic_List_object__o *)UserPresentListViewManager___c_TypeInfo;
  }
  v82 = *(System_Comparison_T__o **)(*(_QWORD *)&NameText[4].fields._size + 40LL);
  if ( !v82 )
  {
    if ( !NameText[5].fields._size )
    {
      j_il2cpp_runtime_class_init_0(NameText, v52);
      NameText = (System_Collections_Generic_List_object__o *)UserPresentListViewManager___c_TypeInfo;
    }
    v83 = **(Il2CppObject ***)&NameText[4].fields._size;
    v82 = (System_Comparison_T__o *)sub_1BCAA2C(System_Comparison_ListViewItem__TypeInfo, v52, v81, v78);
    System_Comparison_object____ctor(
      v82,
      v83,
      Method_UserPresentListViewManager___c__GetAllPresentStrings_b__60_2__,
      0LL);
    v84 = UserPresentListViewManager___c_TypeInfo->static_fields;
    v84->__9__60_2 = (struct System_Comparison_ListViewItem__o *)v82;
    sub_1BCA784((PartyOrganizationUtility_o *)&v84->__9__60_2, (int64_t)v82, v85, v86, v87, v88, v89, v90);
  }
  if ( !v79 )
    goto LABEL_53;
  System_Collections_Generic_List_object___Sort_56244000(
    v79,
    v82,
    (const MethodInfo_35A3720 *)Method_System_Collections_Generic_List_ListViewItem__Sort__);
  v94 = (System_Text_StringBuilder_o *)sub_1BCAA2C(System_Text_StringBuilder_TypeInfo, v91, v92, v93);
  System_Text_StringBuilder___ctor(v94, 0LL);
  if ( !*p_presentAllSelectedList )
    goto LABEL_53;
  v95 = (*p_presentAllSelectedList)->fields._size;
  if ( v95 >= 1 )
  {
    v96 = 0;
    while ( 1 )
    {
      if ( v96 )
      {
        if ( !v94 )
          break;
        System_Text_StringBuilder__Append_61565444(v94, 0xAu, 0LL);
      }
      NameText = *p_presentAllSelectedList;
      if ( !*p_presentAllSelectedList )
        break;
      Item = System_Collections_Generic_List_object___get_Item(
               NameText,
               v96,
               (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
      if ( Item
        && (methodPtr_low = LOBYTE(UserPresentListViewItem_TypeInfo->vtable._0_Equals.methodPtr),
            LOBYTE(Item->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low) )
      {
        v100 = (UserPresentListViewItem_c *)Item->klass->_2.typeHierarchy[methodPtr_low - 1] == UserPresentListViewItem_TypeInfo
             ? Item
             : 0LL;
      }
      else
      {
        v100 = 0LL;
      }
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v98);
      NameText = (System_Collections_Generic_List_object__o *)LocalizationManager__Get(
                                                                (System_String_o *)StringLiteral_10589/*"PRESENT_INFO"*/,
                                                                0LL);
      if ( !v100 )
        break;
      v101 = (System_String_o *)NameText;
      NameText = (System_Collections_Generic_List_object__o *)UserPresentListViewItem__get_NameText(
                                                                (UserPresentListViewItem_o *)v100,
                                                                v52);
      if ( !v94 )
        break;
      NameText = (System_Collections_Generic_List_object__o *)System_Text_StringBuilder__AppendFormat_61569468(
                                                                v94,
                                                                v101,
                                                                (Il2CppObject *)NameText,
                                                                (Il2CppObject *)v100[11].monitor,
                                                                0LL);
      if ( v95 == ++v96 )
        return (System_String_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v94->klass->vtable._3_ToString.method)(
                                    v94,
                                    v94->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
    }
LABEL_53:
    sub_1BCAA3C(NameText, v52);
  }
  if ( !v94 )
    goto LABEL_53;
  return (System_String_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v94->klass->vtable._3_ToString.method)(
                              v94,
                              v94->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
}


// local variable allocation has failed, the output may be wrong!
UserPresentListViewItem_o *__fastcall UserPresentListViewManager__GetItem(
        UserPresentListViewManager_o *this,
        int32_t index,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  UserPresentListViewItem_o *result; // x0
  __int64 methodPtr_low; // x10

  if ( (byte_4B15044 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, *(_QWORD *)&index, method);
    sub_1BCA7E0(&UserPresentListViewItem_TypeInfo, v5, v6);
    byte_4B15044 = 1;
  }
  result = (UserPresentListViewItem_o *)this->fields.itemList;
  if ( result )
  {
    result = (UserPresentListViewItem_o *)System_Collections_Generic_List_object___get_Item(
                                            (System_Collections_Generic_List_object__o *)result,
                                            index,
                                            (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
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
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  UserPresentListViewManager_c *v9; // x0
  struct ListViewSort_o **p_sortInfo; // x8
  struct ListViewSort_o *v11; // x1
  __int64 v12; // x1
  struct ListViewSort_o *sort; // x0

  if ( (byte_4B15042 & 1) == 0 )
  {
    sub_1BCA7E0(&UserPresentListViewManager_TypeInfo, method, v2);
    byte_4B15042 = 1;
  }
  v9 = UserPresentListViewManager_TypeInfo;
  if ( !UserPresentListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserPresentListViewManager_TypeInfo, method);
    v9 = UserPresentListViewManager_TypeInfo;
  }
  p_sortInfo = &v9->static_fields->sortInfo;
  v11 = *p_sortInfo;
  this->fields.sort = *p_sortInfo;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.sort, (int64_t)v11, v2, v3, v4, v5, v6, v7);
  sort = this->fields.sort;
  if ( !sort )
    sub_1BCAA3C(0LL, v12);
  sort->fields.listViewKind = 4;
  ListViewSort__Load(sort, 0LL);
  ((void (__fastcall *)(UserPresentListViewManager_o *, Il2CppMethodPointer))this->klass->vtable._5_SetSortButtonImage.method)(
    this,
    this->klass->vtable._6_GetFocusItemIndex.methodPtr);
}


void __fastcall UserPresentListViewManager__InitLoad(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  UserPresentListViewManager_c *v3; // x0
  ListViewSort_o *sortInfo; // x0

  if ( (byte_4B1503F & 1) == 0 )
  {
    sub_1BCA7E0(&UserPresentListViewManager_TypeInfo, v1, v2);
    byte_4B1503F = 1;
  }
  v3 = UserPresentListViewManager_TypeInfo;
  if ( !UserPresentListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserPresentListViewManager_TypeInfo, v1);
    v3 = UserPresentListViewManager_TypeInfo;
  }
  sortInfo = v3->static_fields->sortInfo;
  if ( !sortInfo )
    sub_1BCAA3C(0LL, v1);
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
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  UserPresentListViewItem_o *Item; // x0
  struct UserPresentListViewItem_o **p_selectItem; // x22
  int64_t v33; // x2
  int32_t v34; // w3
  System_String_o *v35; // x4
  BattleSetupInfo_o *v36; // x5
  FollowerInfo_o *v37; // x6
  PartyListViewItem_o *v38; // x7
  int64_t v39; // x2
  int32_t v40; // w3
  System_String_o *v41; // x4
  BattleSetupInfo_o *v42; // x5
  FollowerInfo_o *v43; // x6
  PartyListViewItem_o *v44; // x7
  struct UserPresentListViewItem_o *selectItem; // x8
  int64_t usrPresentEnt; // x1
  UserPresentListViewManager_o **p_selectPresentData; // x23
  __int64 v48; // x2
  __int64 v49; // x3
  UserPresentListViewManager_o **p_checkedIdList; // x21
  System_Collections_Generic_List_long__o *v51; // x24
  int64_t v52; // x2
  int32_t v53; // w3
  System_String_o *v54; // x4
  BattleSetupInfo_o *v55; // x5
  FollowerInfo_o *v56; // x6
  PartyListViewItem_o *v57; // x7
  int m_CancellationTokenSource; // w8
  int v59; // w25
  int32_t v60; // w24
  struct ItemEntity_o *itemEnt; // x8
  int64_t endedAt; // x25
  __int64 v63; // x1
  Il2CppObject *MasterData_object; // x24
  BalanceConfig_c *v65; // x0
  int v66; // w24
  _QWORD *v67; // x0
  System_Reflection_MethodBase_o *v68; // x0
  _QWORD *v69; // x0
  System_Reflection_MethodBase_o *v70; // x0
  const MethodInfo *v71; // x1
  int32_t v72; // w24
  BalanceConfig_c *v73; // x0
  _QWORD *v74; // x8
  int32_t PresentBoxCheckMax; // w25
  __int64 v76; // x8
  _QWORD *v77; // x9
  __int64 m_CancellationTokenSource_low; // x10
  BalanceConfig_c *v79; // x8
  int32_t v80; // w22
  const MethodInfo *v81; // x3
  const MethodInfo *v82; // x2
  struct System_Collections_Generic_List_long__o *checkedIdList; // x8
  const MethodInfo *v84; // x3
  Il2CppObject *v85; // [xsp+8h] [xbp-58h] BYREF
  UserItemEntity_o *entity; // [xsp+18h] [xbp-48h] BYREF

  v3 = obj;
  v4 = this;
  if ( (byte_4B1504B & 1) == 0 )
  {
    sub_1BCA7E0(&BalanceConfig_TypeInfo, obj, method);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserItemMaster___, v5, v6);
    sub_1BCA7E0(&Method_DataManager_GetMaster_ItemMaster___, v7, v8);
    sub_1BCA7E0(&DataManager_TypeInfo, v9, v10);
    sub_1BCA7E0(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_long__Add__, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_long__RemoveAt__, v15, v16);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_long___ctor__, v17, v18);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_long__get_Count__, v19, v20);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_long__get_Item__, v21, v22);
    sub_1BCA7E0(&System_Collections_Generic_List_long__TypeInfo, v23, v24);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v25, v26);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v27, v28);
    this = (UserPresentListViewManager_o *)sub_1BCA7E0(&Method_UserPresentListViewManager_OnClickListCheck__, v29, v30);
    byte_4B1504B = 1;
  }
  entity = 0LL;
  v85 = 0LL;
  if ( !v3 )
    goto LABEL_77;
  Item = UserPresentListViewObject__GetItem(v3, (const MethodInfo *)obj);
  p_selectItem = &v4->fields.selectItem;
  v4->fields.selectItem = Item;
  sub_1BCA784((PartyOrganizationUtility_o *)&v4->fields.selectItem, (int64_t)Item, v33, v34, v35, v36, v37, v38);
  selectItem = v4->fields.selectItem;
  if ( !selectItem )
    goto LABEL_77;
  usrPresentEnt = (int64_t)selectItem->fields.usrPresentEnt;
  p_selectPresentData = (UserPresentListViewManager_o **)&v4->fields.selectPresentData;
  v4->fields.selectPresentData = (struct UserPresentBoxEntity_o *)usrPresentEnt;
  sub_1BCA784((PartyOrganizationUtility_o *)&v4->fields.selectPresentData, usrPresentEnt, v39, v40, v41, v42, v43, v44);
  p_checkedIdList = (UserPresentListViewManager_o **)&v4->fields.checkedIdList;
  if ( !v4->fields.checkedIdList )
  {
    v51 = (System_Collections_Generic_List_long__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_long__TypeInfo,
                                                       obj,
                                                       v48,
                                                       v49);
    System_Collections_Generic_List_long____ctor(
      v51,
      (const MethodInfo_358943C *)Method_System_Collections_Generic_List_long___ctor__);
    *p_checkedIdList = (UserPresentListViewManager_o *)v51;
    sub_1BCA784((PartyOrganizationUtility_o *)&v4->fields.checkedIdList, (int64_t)v51, v52, v53, v54, v55, v56, v57);
  }
  if ( !*p_selectItem )
    goto LABEL_77;
  if ( (*p_selectItem)->fields.presentId >= 1 )
  {
    this = *p_checkedIdList;
    if ( !*p_checkedIdList )
      goto LABEL_77;
    m_CancellationTokenSource = (int)this->fields.m_CancellationTokenSource;
    v59 = m_CancellationTokenSource - 1;
    if ( m_CancellationTokenSource >= 1 )
    {
      v60 = 0;
      while ( 1 )
      {
        this = (UserPresentListViewManager_o *)System_Collections_Generic_List_long___get_Item(
                                                 (System_Collections_Generic_List_long__o *)this,
                                                 v60,
                                                 (const MethodInfo_35899A0 *)Method_System_Collections_Generic_List_long__get_Item__);
        if ( !*p_selectItem )
          goto LABEL_77;
        if ( this == (UserPresentListViewManager_o *)(*p_selectItem)->fields.presentId )
          break;
        if ( v59 == v60 )
          goto LABEL_17;
        this = *p_checkedIdList;
        ++v60;
        if ( !*p_checkedIdList )
          goto LABEL_77;
      }
      v69 = Method_UserPresentListViewManager_OnClickListCheck__;
      if ( (*((_BYTE *)Method_UserPresentListViewManager_OnClickListCheck__ + 83) & 2) != 0 )
        v69 = (_QWORD *)sub_1BCA7F8(Method_UserPresentListViewManager_OnClickListCheck__);
      v70 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v69, v69[4]);
      OverwriteAssetSoundName__PlaySystemSe(v70, 0, 0LL);
      this = *p_checkedIdList;
      if ( *p_checkedIdList )
      {
        System_Collections_Generic_List_long___RemoveAt(
          (System_Collections_Generic_List_long__o *)this,
          v60,
          (const MethodInfo_358B410 *)Method_System_Collections_Generic_List_long__RemoveAt__);
        UserPresentListViewManager__updateCheckStatus(v4, v71);
        return;
      }
LABEL_77:
      sub_1BCAA3C(this, obj);
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
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, obj);
      if ( endedAt > NetworkManager__getTime(0LL) )
      {
        this = (UserPresentListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !this )
          goto LABEL_77;
        MasterData_object = DataManager__GetMasterData_object_(
                              (DataManager_o *)this,
                              (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserItemMaster___);
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v63);
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
          v65 = BalanceConfig_TypeInfo;
          v66 = LODWORD((*p_selectPresentData)->fields.scrollView) + entity->fields.num;
          if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, obj);
            v65 = BalanceConfig_TypeInfo;
          }
          if ( v66 > v65->static_fields->UserItemMax )
            goto LABEL_36;
          if ( !DataManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, obj);
          this = (UserPresentListViewManager_o *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_ItemMaster___);
          if ( !*p_selectPresentData || !this )
            goto LABEL_77;
          this = (UserPresentListViewManager_o *)DataMasterBase_object__object__int___TryGetEntity(
                                                   (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                                   &v85,
                                                   HIDWORD((*p_selectPresentData)->fields.sortOrderSprite),
                                                   (const MethodInfo_31B2E94 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
          if ( ((unsigned __int8)this & 1) != 0 )
          {
            this = (UserPresentListViewManager_o *)v85;
            if ( !v85 )
              goto LABEL_77;
            this = (UserPresentListViewManager_o *)ItemEntity__GetMaxNum((ItemEntity_o *)v85, 0LL);
            if ( (int)this >= 1 )
            {
              this = (UserPresentListViewManager_o *)v85;
              if ( !v85 )
                goto LABEL_77;
              this = (UserPresentListViewManager_o *)ItemEntity__GetMaxNum((ItemEntity_o *)v85, 0LL);
              if ( v66 > (int)this )
              {
LABEL_36:
                v67 = Method_UserPresentListViewManager_OnClickListCheck__;
                if ( (*((_BYTE *)Method_UserPresentListViewManager_OnClickListCheck__ + 83) & 2) != 0 )
                  v67 = (_QWORD *)sub_1BCA7F8(Method_UserPresentListViewManager_OnClickListCheck__);
                v68 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v67, v67[4]);
                goto LABEL_64;
              }
            }
          }
        }
LABEL_53:
        if ( !*p_checkedIdList )
          goto LABEL_77;
        v72 = (int32_t)(*p_checkedIdList)->fields.m_CancellationTokenSource;
        v73 = BalanceConfig_TypeInfo;
        if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, obj);
          v73 = BalanceConfig_TypeInfo;
        }
        v74 = Method_UserPresentListViewManager_OnClickListCheck__;
        PresentBoxCheckMax = v73->static_fields->PresentBoxCheckMax;
        if ( (*((_BYTE *)Method_UserPresentListViewManager_OnClickListCheck__ + 83) & 2) != 0 )
          v74 = (_QWORD *)sub_1BCA7F8(Method_UserPresentListViewManager_OnClickListCheck__);
        v68 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v74, v74[4]);
        if ( v72 < PresentBoxCheckMax )
        {
          OverwriteAssetSoundName__PlaySystemSe(v68, 0, 0LL);
          if ( !*p_selectItem )
            goto LABEL_77;
          this = *p_checkedIdList;
          if ( !*p_checkedIdList )
            goto LABEL_77;
          obj = (UserPresentListViewObject_o *)(*p_selectItem)->fields.presentId;
          v76 = *(_QWORD *)&this->fields.m_CachedPtr;
          v77 = Method_System_Collections_Generic_List_long__Add__;
          ++HIDWORD(this->fields.m_CancellationTokenSource);
          if ( !v76 )
            goto LABEL_77;
          m_CancellationTokenSource_low = SLODWORD(this->fields.m_CancellationTokenSource);
          if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(v76 + 24) )
          {
            System_Collections_Generic_List_long___AddWithResize(
              (System_Collections_Generic_List_long__o *)this,
              (int64_t)obj,
              *(const MethodInfo_3589C90 **)(*(_QWORD *)(v77[4] + 192LL) + 112LL));
            this = *p_checkedIdList;
            if ( !*p_checkedIdList )
              goto LABEL_77;
          }
          else
          {
            LODWORD(this->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
            *(_QWORD *)(v76 + 8 * m_CancellationTokenSource_low + 32) = obj;
          }
          v79 = BalanceConfig_TypeInfo;
          v80 = (int32_t)this->fields.m_CancellationTokenSource;
          if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, obj);
            v79 = BalanceConfig_TypeInfo;
          }
          if ( v80 < v79->static_fields->PresentBoxCheckMax )
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
              v81);
            checkedIdList = v4->fields.checkedIdList;
            if ( !checkedIdList )
              goto LABEL_77;
            this = (UserPresentListViewManager_o *)v4->fields.m_parent;
            if ( !this )
              goto LABEL_77;
            UserPresentBoxWindow__SetSelectCount((UserPresentBoxWindow_o *)this, checkedIdList->fields._size, v82);
          }
          UserPresentListViewManager__updateCheckStatus(v4, (const MethodInfo *)obj);
          this = (UserPresentListViewManager_o *)v4->fields.m_parent;
          if ( !this )
            goto LABEL_77;
          UserPresentBoxWindow__SetCheckedItemsButtonEnable((UserPresentBoxWindow_o *)this, 1, 1, v84);
          return;
        }
LABEL_64:
        OverwriteAssetSoundName__PlaySystemSe(v68, 1, 0LL);
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
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x1
  __int64 v36; // x2
  struct System_Collections_Generic_List_long__o *checkedIdList; // x8
  UserPresentListViewItem_o *Item; // x0
  struct UserPresentListViewItem_o **p_selectItem; // x20
  int64_t v40; // x2
  int32_t v41; // w3
  System_String_o *v42; // x4
  BattleSetupInfo_o *v43; // x5
  FollowerInfo_o *v44; // x6
  PartyListViewItem_o *v45; // x7
  int64_t v46; // x2
  int32_t v47; // w3
  System_String_o *v48; // x4
  BattleSetupInfo_o *v49; // x5
  FollowerInfo_o *v50; // x6
  PartyListViewItem_o *v51; // x7
  struct UserPresentListViewItem_o *selectItem; // x8
  int64_t usrPresentEnt; // x1
  struct UserPresentBoxEntity_o **p_selectPresentData; // x21
  _QWORD *v55; // x0
  System_Reflection_MethodBase_o *v56; // x0
  const MethodInfo *v57; // x1
  struct ItemEntity_o *itemEnt; // x8
  __int64 endedAt; // x23
  struct ItemEntity_o *v60; // x8
  _QWORD *v61; // x0
  System_Reflection_MethodBase_o *v62; // x0
  const MethodInfo *v63; // x2
  struct ItemEntity_o *v64; // x8
  __int64 v65; // x1
  Il2CppObject *MasterData_object; // x22
  BalanceConfig_c *v67; // x0
  int32_t v68; // w22
  _QWORD *v69; // x0
  System_Reflection_MethodBase_o *v70; // x0
  __int64 v71; // x1
  const MethodInfo *v72; // x2
  __int64 v73; // x3
  UserPresentListViewManager___c_c *v74; // x0
  UserPresentListViewManager_ReceiveCallbackFunc_o *_9__55_0; // x20
  Il2CppObject *v76; // x21
  const MethodInfo *v77; // x3
  int64_t v78; // x2
  int32_t v79; // w3
  System_String_o *v80; // x4
  BattleSetupInfo_o *v81; // x5
  FollowerInfo_o *v82; // x6
  PartyListViewItem_o *v83; // x7
  struct UserPresentListViewManager___c_StaticFields *static_fields; // x0
  PartyOrganizationUtility_o *p__9__55_0; // x0
  _QWORD *v86; // x0
  System_Reflection_MethodBase_o *v87; // x0
  __int64 v88; // x1
  __int64 v89; // x3
  UserPresentListViewManager___c_c *v90; // x0
  Il2CppObject *v91; // x21
  const MethodInfo *v92; // x3
  struct UserPresentListViewManager___c_StaticFields *v93; // x0
  _QWORD *v94; // x0
  System_Reflection_MethodBase_o *v95; // x0
  __int64 v96; // x2
  __int64 v97; // x3
  System_Collections_Generic_List_long__o *v98; // x21
  UserPresentListViewManager_o **p_presentIds; // x20
  int64_t v100; // x2
  int32_t v101; // w3
  System_String_o *v102; // x4
  BattleSetupInfo_o *v103; // x5
  FollowerInfo_o *v104; // x6
  PartyListViewItem_o *v105; // x7
  struct UserPresentListViewItem_o *v106; // x8
  __int64 v107; // x8
  _QWORD *v108; // x9
  __int64 m_CancellationTokenSource_low; // x10
  const MethodInfo *v110; // x4
  const MethodInfo *v111; // x2
  ItemEntity_o *v112; // [xsp+0h] [xbp-40h] BYREF
  UserItemEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  v3 = obj;
  v4 = this;
  if ( (byte_4B1504A & 1) == 0 )
  {
    sub_1BCA7E0(&BalanceConfig_TypeInfo, obj, method);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserItemMaster___, v5, v6);
    sub_1BCA7E0(&Method_DataManager_GetMaster_ItemMaster___, v7, v8);
    sub_1BCA7E0(&DataManager_TypeInfo, v9, v10);
    sub_1BCA7E0(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_long__Add__, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_long__ToArray__, v15, v16);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_long___ctor__, v17, v18);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_long__get_Count__, v19, v20);
    sub_1BCA7E0(&System_Collections_Generic_List_long__TypeInfo, v21, v22);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v23, v24);
    sub_1BCA7E0(&UserPresentListViewManager_ReceiveCallbackFunc_TypeInfo, v25, v26);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v27, v28);
    sub_1BCA7E0(&Method_UserPresentListViewManager___c__OnClickListView_b__55_0__, v29, v30);
    sub_1BCA7E0(&Method_UserPresentListViewManager___c__OnClickListView_b__55_1__, v31, v32);
    sub_1BCA7E0(&UserPresentListViewManager___c_TypeInfo, v33, v34);
    this = (UserPresentListViewManager_o *)sub_1BCA7E0(&Method_UserPresentListViewManager_OnClickListView__, v35, v36);
    byte_4B1504A = 1;
  }
  v112 = 0LL;
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
  sub_1BCA784((PartyOrganizationUtility_o *)&v4->fields.selectItem, (int64_t)Item, v40, v41, v42, v43, v44, v45);
  selectItem = v4->fields.selectItem;
  if ( !selectItem )
    goto LABEL_83;
  usrPresentEnt = (int64_t)selectItem->fields.usrPresentEnt;
  p_selectPresentData = &v4->fields.selectPresentData;
  v4->fields.selectPresentData = (struct UserPresentBoxEntity_o *)usrPresentEnt;
  sub_1BCA784((PartyOrganizationUtility_o *)&v4->fields.selectPresentData, usrPresentEnt, v46, v47, v48, v49, v50, v51);
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
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, obj);
      this = (UserPresentListViewManager_o *)NetworkManager__getTime(0LL);
      if ( endedAt <= (__int64)this )
        goto LABEL_14;
      if ( !*p_selectItem )
        goto LABEL_83;
      v60 = (*p_selectItem)->fields.itemEnt;
      if ( !v60 )
        goto LABEL_83;
      if ( v60->fields.type == 24 )
      {
        v61 = Method_UserPresentListViewManager_OnClickListView__;
        if ( (*((_BYTE *)Method_UserPresentListViewManager_OnClickListView__ + 83) & 2) != 0 )
          v61 = (_QWORD *)sub_1BCA7F8(Method_UserPresentListViewManager_OnClickListView__);
        v62 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v61, v61[4]);
        OverwriteAssetSoundName__PlaySystemSe(v62, 0, 0LL);
        if ( *p_selectItem )
        {
          v64 = (*p_selectItem)->fields.itemEnt;
          if ( v64 )
          {
            UserPresentListViewManager__OpenSelectableDialog(v4, v64->fields.id, v63);
            return;
          }
        }
        goto LABEL_83;
      }
      this = (UserPresentListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !this )
        goto LABEL_83;
      MasterData_object = DataManager__GetMasterData_object_(
                            (DataManager_o *)this,
                            (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserItemMaster___);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v65);
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
        v67 = BalanceConfig_TypeInfo;
        v68 = (*p_selectPresentData)->fields.num + entity->fields.num;
        if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, obj);
          v67 = BalanceConfig_TypeInfo;
        }
        if ( v68 > v67->static_fields->UserItemMax )
        {
          v69 = Method_UserPresentListViewManager_OnClickListView__;
          if ( (*((_BYTE *)Method_UserPresentListViewManager_OnClickListView__ + 83) & 2) != 0 )
            v69 = (_QWORD *)sub_1BCA7F8(Method_UserPresentListViewManager_OnClickListView__);
          v70 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v69, v69[4]);
          OverwriteAssetSoundName__PlaySystemSe(v70, 0, 0LL);
          v74 = UserPresentListViewManager___c_TypeInfo;
          if ( !UserPresentListViewManager___c_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UserPresentListViewManager___c_TypeInfo, v71);
            v74 = UserPresentListViewManager___c_TypeInfo;
          }
          _9__55_0 = v74->static_fields->__9__55_0;
          if ( _9__55_0 )
            goto LABEL_52;
          if ( !v74->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v74, v71);
            v74 = UserPresentListViewManager___c_TypeInfo;
          }
          v76 = (Il2CppObject *)v74->static_fields->__9;
          _9__55_0 = (UserPresentListViewManager_ReceiveCallbackFunc_o *)sub_1BCAA2C(
                                                                           UserPresentListViewManager_ReceiveCallbackFunc_TypeInfo,
                                                                           v71,
                                                                           v72,
                                                                           v73);
          UserPresentListViewManager_ReceiveCallbackFunc___ctor(
            _9__55_0,
            v76,
            Method_UserPresentListViewManager___c__OnClickListView_b__55_0__,
            v77);
          static_fields = UserPresentListViewManager___c_TypeInfo->static_fields;
          static_fields->__9__55_0 = _9__55_0;
          p__9__55_0 = (PartyOrganizationUtility_o *)&static_fields->__9__55_0;
LABEL_51:
          sub_1BCA784(p__9__55_0, (int64_t)_9__55_0, v78, v79, v80, v81, v82, v83);
LABEL_52:
          UserPresentListViewManager__showErrorResultDlg(v4, _9__55_0, v72);
          return;
        }
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, obj);
        this = (UserPresentListViewManager_o *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_ItemMaster___);
        if ( !*p_selectPresentData || !this )
          goto LABEL_83;
        if ( DataMasterBase_object__object__int___TryGetEntity(
               (DataMasterBase_TMaster__TEntity__PKType__o *)this,
               (Il2CppObject **)&v112,
               (*p_selectPresentData)->fields.objectId,
               (const MethodInfo_31B2E94 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__) )
        {
          this = (UserPresentListViewManager_o *)v112;
          if ( !v112 )
            goto LABEL_83;
          if ( ItemEntity__GetMaxNum(v112, 0LL) >= 1 )
          {
            this = (UserPresentListViewManager_o *)v112;
            if ( !v112 )
              goto LABEL_83;
            if ( v68 > ItemEntity__GetMaxNum(v112, 0LL) )
            {
              v86 = Method_UserPresentListViewManager_OnClickListView__;
              if ( (*((_BYTE *)Method_UserPresentListViewManager_OnClickListView__ + 83) & 2) != 0 )
                v86 = (_QWORD *)sub_1BCA7F8(Method_UserPresentListViewManager_OnClickListView__);
              v87 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v86, v86[4]);
              OverwriteAssetSoundName__PlaySystemSe(v87, 0, 0LL);
              v90 = UserPresentListViewManager___c_TypeInfo;
              if ( !UserPresentListViewManager___c_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(UserPresentListViewManager___c_TypeInfo, v88);
                v90 = UserPresentListViewManager___c_TypeInfo;
              }
              _9__55_0 = v90->static_fields->__9__55_1;
              if ( _9__55_0 )
                goto LABEL_52;
              if ( !v90->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(v90, v88);
                v90 = UserPresentListViewManager___c_TypeInfo;
              }
              v91 = (Il2CppObject *)v90->static_fields->__9;
              _9__55_0 = (UserPresentListViewManager_ReceiveCallbackFunc_o *)sub_1BCAA2C(
                                                                               UserPresentListViewManager_ReceiveCallbackFunc_TypeInfo,
                                                                               v88,
                                                                               v72,
                                                                               v89);
              UserPresentListViewManager_ReceiveCallbackFunc___ctor(
                _9__55_0,
                v91,
                Method_UserPresentListViewManager___c__OnClickListView_b__55_1__,
                v92);
              v93 = UserPresentListViewManager___c_TypeInfo->static_fields;
              v93->__9__55_1 = _9__55_0;
              p__9__55_0 = (PartyOrganizationUtility_o *)&v93->__9__55_1;
              goto LABEL_51;
            }
          }
        }
      }
    }
    v94 = Method_UserPresentListViewManager_OnClickListView__;
    if ( (*((_BYTE *)Method_UserPresentListViewManager_OnClickListView__ + 83) & 2) != 0 )
      v94 = (_QWORD *)sub_1BCA7F8(Method_UserPresentListViewManager_OnClickListView__);
    v95 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v94, v94[4]);
    OverwriteAssetSoundName__PlaySystemSe(v95, 8, 0LL);
    if ( *p_selectItem )
    {
      v4->fields._select_idx_k__BackingField = (*p_selectItem)->fields.index;
      v98 = (System_Collections_Generic_List_long__o *)sub_1BCAA2C(
                                                         System_Collections_Generic_List_long__TypeInfo,
                                                         obj,
                                                         v96,
                                                         v97);
      System_Collections_Generic_List_long____ctor(
        v98,
        (const MethodInfo_358943C *)Method_System_Collections_Generic_List_long___ctor__);
      p_presentIds = (UserPresentListViewManager_o **)&v4->fields.presentIds;
      v4->fields.presentIds = v98;
      sub_1BCA784(
        (PartyOrganizationUtility_o *)&v4->fields.presentIds,
        (int64_t)v98,
        v100,
        v101,
        v102,
        v103,
        v104,
        v105);
      v106 = v4->fields.selectItem;
      if ( v106 )
      {
        obj = (UserPresentListViewObject_o *)v106->fields.presentId;
        if ( (__int64)obj >= 1 )
        {
          this = *p_presentIds;
          if ( !*p_presentIds )
            goto LABEL_83;
          v107 = *(_QWORD *)&this->fields.m_CachedPtr;
          v108 = Method_System_Collections_Generic_List_long__Add__;
          ++HIDWORD(this->fields.m_CancellationTokenSource);
          if ( !v107 )
            goto LABEL_83;
          m_CancellationTokenSource_low = SLODWORD(this->fields.m_CancellationTokenSource);
          if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(v107 + 24) )
          {
            System_Collections_Generic_List_long___AddWithResize(
              (System_Collections_Generic_List_long__o *)this,
              (int64_t)obj,
              *(const MethodInfo_3589C90 **)(*(_QWORD *)(v108[4] + 192LL) + 112LL));
          }
          else
          {
            LODWORD(this->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
            *(_QWORD *)(v107 + 8 * m_CancellationTokenSource_low + 32) = obj;
          }
        }
        this = *p_presentIds;
        if ( *p_presentIds )
        {
          this = (UserPresentListViewManager_o *)System_Collections_Generic_List_long___ToArray(
                                                   (System_Collections_Generic_List_long__o *)this,
                                                   (const MethodInfo_358B748 *)Method_System_Collections_Generic_List_long__ToArray__);
          if ( v4->fields.m_parent )
          {
            UserPresentBoxWindow__receivePresent(v4->fields.m_parent, (System_Int64_array *)this, 0, 0, v110);
            UserPresentListViewManager__SetMode_38194828(v4, 2, v111);
            return;
          }
        }
      }
    }
LABEL_83:
    sub_1BCAA3C(this, obj);
  }
LABEL_14:
  v55 = Method_UserPresentListViewManager_OnClickListView__;
  if ( (*((_BYTE *)Method_UserPresentListViewManager_OnClickListView__ + 83) & 2) != 0 )
    v55 = (_QWORD *)sub_1BCA7F8(Method_UserPresentListViewManager_OnClickListView__);
  v56 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v55, v55[4]);
  OverwriteAssetSoundName__PlaySystemSe(v56, 0, 0LL);
  UserPresentListViewManager__DlgForExpiredPresent(v4, v57);
}


void __fastcall UserPresentListViewManager__OnClickSortAscendingOrder(
        UserPresentListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  __int64 v6; // x0
  __int64 v7; // x1
  struct ListViewSort_o *sort; // x8

  if ( (byte_4B15053 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UserPresentListViewManager_OnClickSortAscendingOrder__, method, v2);
    byte_4B15053 = 1;
  }
  if ( this->fields.isInput )
  {
    v4 = Method_UserPresentListViewManager_OnClickSortAscendingOrder__;
    if ( (*((_BYTE *)Method_UserPresentListViewManager_OnClickSortAscendingOrder__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1BCA7F8(Method_UserPresentListViewManager_OnClickSortAscendingOrder__);
    v5 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v4, v4[4]);
    OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0LL);
    sort = this->fields.sort;
    if ( !sort )
      sub_1BCAA3C(v6, v7);
    sort->fields.isAscendingOrder ^= 1u;
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
  }
}


void __fastcall UserPresentListViewManager__OnMoveEnd(UserPresentListViewManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  int32_t callbackCount; // w8
  bool v5; // vf
  int32_t v6; // w8
  UnityEngine_Object_o *scrollView; // x20
  __int64 v8; // x1
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7
  struct UIScrollView_o *v15; // x0
  struct System_Action_o *callbackFunc2; // x20

  if ( (byte_4B15049 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    byte_4B15049 = 1;
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
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
      if ( UnityEngine_Object__op_Inequality(scrollView, 0LL, 0LL) )
      {
        v15 = this->fields.scrollView;
        if ( !v15 )
          sub_1BCAA3C(0LL, v8);
        ((void (__fastcall *)(struct UIScrollView_o *, __int64, Il2CppMethodPointer))v15->klass->vtable._8_UpdateScrollbars.method)(
          v15,
          1LL,
          v15->klass->vtable._9_SetDragAmount.methodPtr);
      }
      callbackFunc2 = this->fields.callbackFunc2;
      this->fields.callbackFunc2 = 0LL;
      sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.callbackFunc2, 0LL, v9, v10, v11, v12, v13, v14);
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
  __int64 v6; // x2
  UserPresentBoxErrorDialog_o *dialog; // x0
  UserPresentBoxErrorDialog_o *v8; // x20
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x3
  System_Action_T__o *v12; // x21
  const MethodInfo *v13; // x2

  if ( (byte_4B15051 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_SceneList_Type__TypeInfo, msg, method);
    sub_1BCA7E0(&Method_UserPresentListViewManager_EndNoticeDlg__, v5, v6);
    byte_4B15051 = 1;
  }
  dialog = this->fields.dialog;
  if ( !dialog
    || (UserPresentBoxErrorDialog__Open(dialog, msg, method),
        v8 = this->fields.dialog,
        v12 = (System_Action_T__o *)sub_1BCAA2C(System_Action_SceneList_Type__TypeInfo, v9, v10, v11),
        System_Action_Int32Enum____ctor(
          v12,
          (Il2CppObject *)this,
          Method_UserPresentListViewManager_EndNoticeDlg__,
          0LL),
        !v8) )
  {
    sub_1BCAA3C(dialog, msg);
  }
  UserPresentBoxErrorDialog__add_OnErrorDialogClosed(v8, (System_Action_SceneList_Type__o *)v12, v13);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall UserPresentListViewManager__OpenSelectableDialog(
        UserPresentListViewManager_o *this,
        int32_t ticketId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x20
  void *selectDialog; // x0
  __int64 v28; // x1
  __int64 size; // x2
  __int64 v30; // x3
  struct System_Collections_Generic_List_ListViewItem__o *presentTicketList; // x8
  int v32; // w9
  struct UserPresentBoxWindow_o *m_parent; // x8
  System_Collections_Generic_IEnumerable_T__o *itemList; // x22
  System_Collections_Generic_List_object__o *v35; // x23
  int64_t v36; // x2
  int32_t v37; // w3
  System_String_o *v38; // x4
  BattleSetupInfo_o *v39; // x5
  FollowerInfo_o *v40; // x6
  PartyListViewItem_o *v41; // x7
  int64_t v42; // x2
  int32_t v43; // w3
  System_String_o *v44; // x4
  BattleSetupInfo_o *v45; // x5
  FollowerInfo_o *v46; // x6
  PartyListViewItem_o *v47; // x7
  struct System_Collections_Generic_List_ListViewItem__o *v48; // x22
  __int64 v49; // x1
  __int64 v50; // x2
  __int64 v51; // x3
  System_Predicate_object__o *v52; // x23
  __int64 v53; // x2
  __int64 v54; // x3
  struct System_Collections_Generic_List_ListViewItem__o *v55; // x21
  System_Comparison_T__o *v56; // x22
  Il2CppObject *v57; // x23
  struct UserPresentListViewManager___c_StaticFields *static_fields; // x0
  int64_t v59; // x2
  int32_t v60; // w3
  System_String_o *v61; // x4
  BattleSetupInfo_o *v62; // x5
  FollowerInfo_o *v63; // x6
  PartyListViewItem_o *v64; // x7
  const MethodInfo *v65; // x3

  if ( (byte_4B15055 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Comparison_ListViewItem__TypeInfo, *(_QWORD *)&ticketId, method);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewItem__Clear__, v6, v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewItem__RemoveAll__, v8, v9);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewItem__Sort__, v10, v11);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewItem___ctor___76788512, v12, v13);
    sub_1BCA7E0(&System_Collections_Generic_List_ListViewItem__TypeInfo, v14, v15);
    sub_1BCA7E0(&System_Predicate_ListViewItem__TypeInfo, v16, v17);
    sub_1BCA7E0(&Method_UserPresentListViewManager___c__OpenSelectableDialog_b__67_1__, v18, v19);
    sub_1BCA7E0(&Method_UserPresentListViewManager___c__DisplayClass67_0__OpenSelectableDialog_b__0__, v20, v21);
    sub_1BCA7E0(&UserPresentListViewManager___c__DisplayClass67_0_TypeInfo, v22, v23);
    sub_1BCA7E0(&UserPresentListViewManager___c_TypeInfo, v24, v25);
    byte_4B15055 = 1;
  }
  v26 = sub_1BCAA2C(UserPresentListViewManager___c__DisplayClass67_0_TypeInfo, *(_QWORD *)&ticketId, method, v3);
  System_Object___ctor((Il2CppObject *)v26, 0LL);
  if ( !v26 )
    goto LABEL_18;
  *(_DWORD *)(v26 + 16) = ticketId;
  presentTicketList = this->fields.presentTicketList;
  if ( presentTicketList )
  {
    size = (unsigned int)presentTicketList->fields._size;
    v32 = presentTicketList->fields._version + 1;
    presentTicketList->fields._size = 0;
    presentTicketList->fields._version = v32;
    if ( (int)size >= 1 )
      System_Array__Clear((System_Array_o *)presentTicketList->fields._items, 0, size, 0LL);
  }
  m_parent = this->fields.m_parent;
  if ( !m_parent )
    goto LABEL_18;
  m_parent->fields.mIsScrlResetPosition = 1;
  itemList = (System_Collections_Generic_IEnumerable_T__o *)this->fields.itemList;
  v35 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_ListViewItem__TypeInfo,
                                                       v28,
                                                       size,
                                                       v30);
  System_Collections_Generic_List_object____ctor_56235344(
    v35,
    itemList,
    (const MethodInfo_35A1550 *)Method_System_Collections_Generic_List_ListViewItem___ctor___76788512);
  this->fields.presentTicketList = (struct System_Collections_Generic_List_ListViewItem__o *)v35;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.presentTicketList, (int64_t)v35, v36, v37, v38, v39, v40, v41);
  *(_DWORD *)(v26 + 20) = 0;
  *(_QWORD *)(v26 + 24) = 0LL;
  sub_1BCA784((PartyOrganizationUtility_o *)(v26 + 24), 0LL, v42, v43, v44, v45, v46, v47);
  v48 = this->fields.presentTicketList;
  v52 = (System_Predicate_object__o *)sub_1BCAA2C(System_Predicate_ListViewItem__TypeInfo, v49, v50, v51);
  System_Predicate_object____ctor(
    v52,
    (Il2CppObject *)v26,
    Method_UserPresentListViewManager___c__DisplayClass67_0__OpenSelectableDialog_b__0__,
    0LL);
  if ( !v48 )
    goto LABEL_18;
  System_Collections_Generic_List_object___RemoveAll(
    (System_Collections_Generic_List_object__o *)v48,
    (System_Predicate_T__o *)v52,
    (const MethodInfo_35A32B8 *)Method_System_Collections_Generic_List_ListViewItem__RemoveAll__);
  selectDialog = UserPresentListViewManager___c_TypeInfo;
  v55 = this->fields.presentTicketList;
  if ( !UserPresentListViewManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserPresentListViewManager___c_TypeInfo, v28);
    selectDialog = UserPresentListViewManager___c_TypeInfo;
  }
  v56 = *(System_Comparison_T__o **)(*((_QWORD *)selectDialog + 23) + 48LL);
  if ( !v56 )
  {
    if ( !*((_DWORD *)selectDialog + 56) )
    {
      j_il2cpp_runtime_class_init_0(selectDialog, v28);
      selectDialog = UserPresentListViewManager___c_TypeInfo;
    }
    v57 = (Il2CppObject *)**((_QWORD **)selectDialog + 23);
    v56 = (System_Comparison_T__o *)sub_1BCAA2C(System_Comparison_ListViewItem__TypeInfo, v28, v53, v54);
    System_Comparison_object____ctor(
      v56,
      v57,
      Method_UserPresentListViewManager___c__OpenSelectableDialog_b__67_1__,
      0LL);
    static_fields = UserPresentListViewManager___c_TypeInfo->static_fields;
    static_fields->__9__67_1 = (struct System_Comparison_ListViewItem__o *)v56;
    sub_1BCA784((PartyOrganizationUtility_o *)&static_fields->__9__67_1, (int64_t)v56, v59, v60, v61, v62, v63, v64);
  }
  if ( !v55
    || (System_Collections_Generic_List_object___Sort_56244000(
          (System_Collections_Generic_List_object__o *)v55,
          v56,
          (const MethodInfo_35A3720 *)Method_System_Collections_Generic_List_ListViewItem__Sort__),
        (selectDialog = this->fields.selectDialog) == 0LL) )
  {
LABEL_18:
    sub_1BCAA3C(selectDialog, v28);
  }
  PresentSelectableDlgComponent__Open(
    (PresentSelectableDlgComponent_o *)selectDialog,
    *(ItemEntity_o **)(v26 + 24),
    *(_DWORD *)(v26 + 20),
    v65);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall UserPresentListViewManager__ReceiveMultiPresent(
        UserPresentListViewManager_o *this,
        int32_t kind,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x1
  __int64 v36; // x2
  __int64 v37; // x1
  __int64 v38; // x2
  __int64 v39; // x1
  __int64 v40; // x2
  __int64 v41; // x1
  __int64 v42; // x2
  __int64 v43; // x1
  __int64 v44; // x2
  System_Collections_Generic_List_long__o *v45; // x21
  struct System_Collections_Generic_List_long__o **p_presentIds; // x20
  int64_t v47; // x2
  int32_t v48; // w3
  System_String_o *v49; // x4
  BattleSetupInfo_o *v50; // x5
  FollowerInfo_o *v51; // x6
  PartyListViewItem_o *v52; // x7
  __int64 v53; // x1
  __int64 v54; // x2
  __int64 v55; // x3
  System_Collections_Generic_List_object__o *v56; // x21
  __int64 v57; // x1
  __int64 v58; // x8
  System_Collections_Generic_List_object__o *v59; // x0
  void **v60; // x25
  void **v61; // x26
  _BOOL8 v62; // x0
  UserPresentListViewItem_c *v63; // x1
  UserPresentListViewItem_o *current; // x23
  __int64 methodPtr_low; // x9
  System_Collections_Generic_List_long__o *checkedIdList; // x0
  UserPresentBoxEntity_o *usrPresentEnt; // x0
  _BOOL8 IsExpired; // x0
  const MethodInfo *v69; // x1
  struct UserPresentBoxEntity_o *v70; // x9
  struct ItemEntity_o *itemEnt; // x9
  struct System_Collections_Generic_List_long__o **v72; // x19
  void **v73; // x20
  void **v74; // x26
  int64_t endedAt; // x25
  bool v76; // cc
  Il2CppObject *NameText; // x0
  const MethodInfo *v78; // x1
  Il2CppObject *v79; // x0
  int64_t v80; // x2
  int32_t v81; // w3
  System_String_o *v82; // x4
  BattleSetupInfo_o *v83; // x5
  FollowerInfo_o *v84; // x6
  PartyListViewItem_o *v85; // x7
  int64_t v86; // x1
  struct System_Object_array *v87; // x8
  _QWORD *v88; // x9
  __int64 v89; // x10
  Il2CppClass **v90; // x0
  System_Collections_Generic_List_long__o *v91; // x0
  int64_t presentId; // x1
  struct System_Int64_array *items; // x8
  _QWORD *v94; // x9
  __int64 size; // x10
  void *v96; // x1
  PartyOrganizationUtility_o *p_expiredPresents_k__BackingField; // x22
  int64_t v98; // x2
  int32_t v99; // w3
  System_String_o *v100; // x4
  BattleSetupInfo_o *v101; // x5
  FollowerInfo_o *v102; // x6
  PartyListViewItem_o *v103; // x7
  System_String_o *klass; // x23
  Il2CppObject *Item; // x0
  System_String_o *v106; // x0
  int64_t v107; // x2
  int32_t v108; // w3
  System_String_o *v109; // x4
  BattleSetupInfo_o *v110; // x5
  FollowerInfo_o *v111; // x6
  PartyListViewItem_o *v112; // x7
  const MethodInfo *v113; // x4
  System_Collections_Generic_List_Enumerator_object__o v115; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v116; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_4B1504E & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__, *(_QWORD *)&kind, method);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_long__Add__, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_string__Add__, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_long__Contains__, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_string__Contains__, v15, v16);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v17, v18);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_string__RemoveAt__, v19, v20);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_long__ToArray__, v21, v22);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_long___ctor__, v23, v24);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_string___ctor__, v25, v26);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_string__get_Count__, v27, v28);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_string__get_Item__, v29, v30);
    sub_1BCA7E0(&System_Collections_Generic_List_string__TypeInfo, v31, v32);
    sub_1BCA7E0(&System_Collections_Generic_List_long__TypeInfo, v33, v34);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v35, v36);
    sub_1BCA7E0(&UserPresentListViewItem_TypeInfo, v37, v38);
    sub_1BCA7E0(&StringLiteral_15978/*"["*/, v39, v40);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v41, v42);
    sub_1BCA7E0(&StringLiteral_16236/*"]"*/, v43, v44);
    byte_4B1504E = 1;
  }
  memset(&v116, 0, sizeof(v116));
  this->fields.kind = kind;
  v45 = (System_Collections_Generic_List_long__o *)sub_1BCAA2C(
                                                     System_Collections_Generic_List_long__TypeInfo,
                                                     *(_QWORD *)&kind,
                                                     method,
                                                     v3);
  System_Collections_Generic_List_long____ctor(
    v45,
    (const MethodInfo_358943C *)Method_System_Collections_Generic_List_long___ctor__);
  p_presentIds = &this->fields.presentIds;
  this->fields.presentIds = v45;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.presentIds, (int64_t)v45, v47, v48, v49, v50, v51, v52);
  v56 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_string__TypeInfo,
                                                       v53,
                                                       v54,
                                                       v55);
  System_Collections_Generic_List_object____ctor(
    v56,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_string___ctor__);
  v58 = 192LL;
  if ( kind == 1 )
    v58 = 432LL;
  v59 = *(System_Collections_Generic_List_object__o **)((char *)&this->klass + v58);
  if ( !v59 )
    goto LABEL_62;
  v60 = &Method_System_Collections_Generic_List_string__Add__;
  v61 = &Method_System_Collections_Generic_List_long__Add__;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v115,
    v59,
    (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  v116 = v115;
  while ( 1 )
  {
    v62 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v116,
            (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    if ( !v62 )
      break;
    current = (UserPresentListViewItem_o *)v116.fields._current;
    if ( v116.fields._current )
    {
      v63 = UserPresentListViewItem_TypeInfo;
      methodPtr_low = LOBYTE(UserPresentListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(v116.fields._current->klass->vtable[0].methodPtr) < (unsigned int)methodPtr_low
        || (UserPresentListViewItem_c *)v116.fields._current->klass->_2.typeHierarchy[methodPtr_low - 1] != UserPresentListViewItem_TypeInfo )
      {
        sub_1BCACFC(v116.fields._current);
LABEL_52:
        sub_1BCAA3C(IsExpired, v69);
      }
    }
    switch ( kind )
    {
      case 1:
        if ( !v116.fields._current )
          sub_1BCAA3C(v62, v63);
        goto LABEL_23;
      case 2:
        if ( !v116.fields._current )
          sub_1BCAA3C(v62, v63);
        if ( !Gift__IsServant_38401528((int32_t)v116.fields._current[10].monitor, 0LL)
          && !Gift__IsCommandCode_38401920(current->fields.giftType, 0LL) )
        {
          goto LABEL_23;
        }
        break;
      case 3:
        if ( !v116.fields._current )
          sub_1BCAA3C(v62, v63);
        checkedIdList = this->fields.checkedIdList;
        if ( !checkedIdList )
          sub_1BCAA3C(0LL, v63);
        if ( System_Collections_Generic_List_long___Contains(
               checkedIdList,
               (int64_t)v116.fields._current[10].klass,
               (const MethodInfo_358A008 *)Method_System_Collections_Generic_List_long__Contains__) )
        {
LABEL_23:
          usrPresentEnt = current->fields.usrPresentEnt;
          if ( !usrPresentEnt )
            sub_1BCAA3C(0LL, v63);
          IsExpired = UserPresentBoxEntity__IsExpired(usrPresentEnt, 0, 0LL);
          v70 = current->fields.usrPresentEnt;
          if ( !v70 )
            goto LABEL_52;
          if ( v70->fields.giftType == 2 )
          {
            itemEnt = current->fields.itemEnt;
            if ( !itemEnt )
              sub_1BCAA3C(IsExpired, v69);
            if ( itemEnt->fields.type != 24 )
            {
              if ( IsExpired )
                goto LABEL_33;
              v72 = p_presentIds;
              v73 = v61;
              v74 = v60;
              endedAt = itemEnt->fields.endedAt;
              if ( !NetworkManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v69);
              v76 = endedAt <= NetworkManager__getTime(0LL);
              v60 = v74;
              v61 = v73;
              p_presentIds = v72;
              if ( v76 )
                goto LABEL_33;
LABEL_39:
              v91 = *p_presentIds;
              if ( !*p_presentIds )
                sub_1BCAA3C(0LL, v69);
              presentId = current->fields.presentId;
              items = v91->fields._items;
              v94 = *v61;
              ++v91->fields._version;
              if ( !items )
                sub_1BCAA3C(v91, presentId);
              size = v91->fields._size;
              if ( (unsigned int)size >= items->max_length )
              {
                System_Collections_Generic_List_long___AddWithResize(
                  v91,
                  presentId,
                  *(const MethodInfo_3589C90 **)(*(_QWORD *)(v94[4] + 192LL) + 112LL));
              }
              else
              {
                v91->fields._size = size + 1;
                items->m_Items[size] = presentId;
              }
            }
          }
          else
          {
            if ( !IsExpired )
              goto LABEL_39;
LABEL_33:
            NameText = (Il2CppObject *)UserPresentListViewItem__get_NameText(current, v69);
            if ( !v56 )
              sub_1BCAA3C(NameText, NameText);
            if ( !System_Collections_Generic_List_object___Contains(
                    v56,
                    NameText,
                    (const MethodInfo_35A1FEC *)Method_System_Collections_Generic_List_string__Contains__) )
            {
              v79 = (Il2CppObject *)UserPresentListViewItem__get_NameText(current, v78);
              v86 = (int64_t)v79;
              v87 = v56->fields._items;
              v88 = *v60;
              ++v56->fields._version;
              if ( !v87 )
                sub_1BCAA3C(v79, v79);
              v89 = v56->fields._size;
              if ( (unsigned int)v89 >= v87->max_length )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  v56,
                  v79,
                  *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v88[4] + 192LL) + 112LL));
              }
              else
              {
                v90 = &v87->obj.klass + v89;
                v56->fields._size = v89 + 1;
                v90[4] = (Il2CppClass *)v86;
                sub_1BCA784((PartyOrganizationUtility_o *)(v90 + 4), v86, v80, v81, v82, v83, v84, v85);
              }
            }
          }
        }
        break;
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v116,
    (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
  v96 = StringLiteral_1/*""*/;
  p_expiredPresents_k__BackingField = (PartyOrganizationUtility_o *)&this->fields._expiredPresents_k__BackingField;
  this->fields._expiredPresents_k__BackingField = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields._expiredPresents_k__BackingField,
    (int64_t)v96,
    v98,
    v99,
    v100,
    v101,
    v102,
    v103);
  if ( !v56 )
    goto LABEL_62;
  if ( v56->fields._size >= 1 )
  {
    do
    {
      klass = (System_String_o *)p_expiredPresents_k__BackingField->klass;
      Item = System_Collections_Generic_List_object___get_Item(
               v56,
               0,
               (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_string__get_Item__);
      v106 = System_String__Concat_62414484(
               klass,
               (System_String_o *)StringLiteral_15978/*"["*/,
               (System_String_o *)Item,
               (System_String_o *)StringLiteral_16236/*"]"*/,
               0LL);
      p_expiredPresents_k__BackingField->klass = (PartyOrganizationUtility_c *)v106;
      sub_1BCA784(p_expiredPresents_k__BackingField, (int64_t)v106, v107, v108, v109, v110, v111, v112);
      System_Collections_Generic_List_object___RemoveAt(
        v56,
        0,
        (const MethodInfo_35A3430 *)Method_System_Collections_Generic_List_string__RemoveAt__);
    }
    while ( v56->fields._size > 0 );
  }
  v59 = (System_Collections_Generic_List_object__o *)*p_presentIds;
  if ( !*p_presentIds
    || (v59 = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_long___ToArray(
                                                             (System_Collections_Generic_List_long__o *)v59,
                                                             (const MethodInfo_358B748 *)Method_System_Collections_Generic_List_long__ToArray__),
        !this->fields.m_parent) )
  {
LABEL_62:
    sub_1BCAA3C(v59, v57);
  }
  UserPresentBoxWindow__receivePresent(this->fields.m_parent, (System_Int64_array *)v59, 0, 0, v113);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall UserPresentListViewManager__RequestItemSelect(
        UserPresentListViewManager_o *this,
        ItemSelectEntity_o *selectItm,
        int32_t num,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  System_Collections_Generic_List_long__o *v25; // x22
  UserPresentListViewItem_c *v26; // x1
  int64_t presentTicketList; // x0
  int v28; // w26
  int v29; // w27
  int v30; // w29
  int v31; // w24
  _QWORD *v32; // x23
  __int64 methodPtr_low; // x10
  __int64 v34; // x8
  int64_t v35; // x25
  __int64 v36; // x8
  int v37; // w25
  struct System_Int64_array *items; // x8
  _QWORD *v39; // x9
  __int64 size; // x10
  UserPresentBoxWindow_o *m_parent; // x23
  const MethodInfo *v42; // x4
  const MethodInfo *v43; // x2
  __int64 v44; // x9
  __int64 v45; // x8
  struct System_String_o *v46; // x0
  int64_t v47; // x2
  int32_t v48; // w3
  System_String_o *v49; // x4
  BattleSetupInfo_o *v50; // x5
  FollowerInfo_o *v51; // x6
  PartyListViewItem_o *v52; // x7
  UserPresentBoxWindow_o *v53; // x20
  const MethodInfo *v54; // x4
  PresentSelectableDlgComponent___c__DisplayClass21_0_o *v55; // x0
  int32_t v56; // w1
  const MethodInfo *v57; // x2
  int32_t selectNum; // [xsp+4h] [xbp-6Ch]
  ItemSelectEntity_o *v59; // [xsp+8h] [xbp-68h]

  if ( (byte_4B15056 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_long__Add__, selectItm, *(_QWORD *)&num);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_long__ToArray__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_long___ctor__, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v13, v14);
    sub_1BCA7E0(&System_Collections_Generic_List_long__TypeInfo, v15, v16);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v17, v18);
    sub_1BCA7E0(&UserPresentListViewItem_TypeInfo, v19, v20);
    sub_1BCA7E0(&StringLiteral_15978/*"["*/, v21, v22);
    sub_1BCA7E0(&StringLiteral_16236/*"]"*/, v23, v24);
    byte_4B15056 = 1;
  }
  v25 = (System_Collections_Generic_List_long__o *)sub_1BCAA2C(
                                                     System_Collections_Generic_List_long__TypeInfo,
                                                     selectItm,
                                                     *(_QWORD *)&num,
                                                     method);
  System_Collections_Generic_List_long____ctor(
    v25,
    (const MethodInfo_358943C *)Method_System_Collections_Generic_List_long___ctor__);
  presentTicketList = (int64_t)this->fields.presentTicketList;
  if ( !presentTicketList || !selectItm )
    goto LABEL_26;
  v28 = *(_DWORD *)(presentTicketList + 24);
  v59 = selectItm;
  selectNum = num;
  if ( v28 < 1 || (v29 = selectItm->fields.requireNum * num, v29 < 1) )
  {
    if ( v25 )
    {
LABEL_28:
      m_parent = this->fields.m_parent;
      presentTicketList = (int64_t)System_Collections_Generic_List_long___ToArray(
                                     v25,
                                     (const MethodInfo_358B748 *)Method_System_Collections_Generic_List_long__ToArray__);
      if ( m_parent )
      {
        UserPresentBoxWindow__receivePresent(
          m_parent,
          (System_Int64_array *)presentTicketList,
          v59->fields.idx,
          selectNum,
          v42);
        UserPresentListViewManager__SetMode_38194828(this, 2, v43);
        return;
      }
    }
    goto LABEL_26;
  }
  v30 = 0;
  v31 = 1;
  while ( 1 )
  {
    presentTicketList = (int64_t)System_Collections_Generic_List_object___get_Item(
                                   (System_Collections_Generic_List_object__o *)presentTicketList,
                                   v31 - 1,
                                   (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    if ( !presentTicketList )
      goto LABEL_26;
    v32 = (_QWORD *)presentTicketList;
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
    v34 = v32[15];
    if ( !v34 )
      goto LABEL_26;
    v35 = *(_QWORD *)(v34 + 96);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v26);
    presentTicketList = NetworkManager__getTime(0LL);
    if ( v35 <= presentTicketList )
      break;
    v36 = v32[18];
    if ( !v36 )
      goto LABEL_26;
    if ( !v25 )
      goto LABEL_26;
    v37 = *(_DWORD *)(v36 + 80);
    v26 = (UserPresentListViewItem_c *)v32[20];
    items = v25->fields._items;
    v39 = Method_System_Collections_Generic_List_long__Add__;
    ++v25->fields._version;
    if ( !items )
      goto LABEL_26;
    size = v25->fields._size;
    if ( (unsigned int)size >= items->max_length )
    {
      System_Collections_Generic_List_long___AddWithResize(
        v25,
        (int64_t)v26,
        *(const MethodInfo_3589C90 **)(*(_QWORD *)(v39[4] + 192LL) + 112LL));
    }
    else
    {
      v25->fields._size = size + 1;
      items->m_Items[size] = (int64_t)v26;
    }
    if ( v31 >= v28 )
      goto LABEL_28;
    v30 += v37;
    if ( v30 >= v29 )
      goto LABEL_28;
    presentTicketList = (int64_t)this->fields.presentTicketList;
    ++v31;
    if ( !presentTicketList )
      goto LABEL_26;
  }
  presentTicketList = (int64_t)this->fields.presentTicketList;
  if ( !presentTicketList )
    goto LABEL_26;
  presentTicketList = (int64_t)System_Collections_Generic_List_object___get_Item(
                                 (System_Collections_Generic_List_object__o *)presentTicketList,
                                 0,
                                 (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
  if ( !presentTicketList )
    goto LABEL_26;
  v26 = UserPresentListViewItem_TypeInfo;
  v44 = LOBYTE(UserPresentListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
  if ( *(unsigned __int8 *)(*(_QWORD *)presentTicketList + 304LL) >= (unsigned int)v44
    && *(UserPresentListViewItem_c **)(*(_QWORD *)(*(_QWORD *)presentTicketList + 200LL) + 8 * v44 - 8) == UserPresentListViewItem_TypeInfo )
  {
    v45 = *(_QWORD *)(presentTicketList + 120);
    if ( v45 )
    {
      v46 = System_String__Concat_62412480(
              (System_String_o *)StringLiteral_15978/*"["*/,
              *(System_String_o **)(v45 + 24),
              (System_String_o *)StringLiteral_16236/*"]"*/,
              0LL);
      this->fields._expiredPresents_k__BackingField = v46;
      sub_1BCA784(
        (PartyOrganizationUtility_o *)&this->fields._expiredPresents_k__BackingField,
        (int64_t)v46,
        v47,
        v48,
        v49,
        v50,
        v51,
        v52);
      if ( v25 )
      {
        v53 = this->fields.m_parent;
        presentTicketList = (int64_t)System_Collections_Generic_List_long___ToArray(
                                       v25,
                                       (const MethodInfo_358B748 *)Method_System_Collections_Generic_List_long__ToArray__);
        if ( v53 )
        {
          UserPresentBoxWindow__receivePresent(v53, (System_Int64_array *)presentTicketList, v59->fields.idx, 0, v54);
          return;
        }
      }
    }
LABEL_26:
    sub_1BCAA3C(presentTicketList, v26);
  }
  sub_1BCACFC(presentTicketList);
  PresentSelectableDlgComponent___c__DisplayClass21_0___OpenItemConfirmDlg_b__2(v55, v56, v57);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall UserPresentListViewManager__RequestListObject(
        UserPresentListViewManager_o *this,
        int32_t mode,
        float delay,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  System_Collections_Generic_List_object__o *ObjectList; // x0
  __int64 v22; // x1
  int32_t size; // w8
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x3
  Il2CppObject *current; // x21
  System_Action_o *v28; // x22
  __int64 v29; // x0
  __int64 v30; // x1
  const MethodInfo *v31; // x3
  System_Collections_Generic_List_Enumerator_object__o v32; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4B15047 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, *(_QWORD *)&mode, method);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_UserPresentListViewObject__Dispose__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_UserPresentListViewObject__MoveNext__, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_UserPresentListViewObject__get_Current__, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_UserPresentListViewObject__GetEnumerator__, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_UserPresentListViewObject__get_Count__, v15, v16);
    sub_1BCA7E0(&Method_UserPresentListViewManager_OnMoveEnd__, v17, v18);
    sub_1BCA7E0(&StringLiteral_10069/*"OnMoveEnd"*/, v19, v20);
    byte_4B15047 = 1;
  }
  memset(&v32, 0, sizeof(v32));
  ObjectList = (System_Collections_Generic_List_object__o *)UserPresentListViewManager__get_ObjectList(
                                                              this,
                                                              *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_1BCAA3C(0LL, v22);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10069/*"OnMoveEnd"*/,
      delay,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v32,
      ObjectList,
      (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_UserPresentListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v32,
              (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_UserPresentListViewObject__MoveNext__) )
    {
      current = v32.fields._current;
      v28 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v24, v25, v26);
      System_Action___ctor(v28, (Il2CppObject *)this, Method_UserPresentListViewManager_OnMoveEnd__, 0LL);
      if ( !current )
        sub_1BCAA3C(v29, v30);
      UserPresentListViewObject__Init_38235380((UserPresentListViewObject_o *)current, mode, v28, delay, v31);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v32,
      (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_UserPresentListViewObject__Dispose__);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall UserPresentListViewManager__RequestListObject_38234352(
        UserPresentListViewManager_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  System_Collections_Generic_List_object__o *ObjectList; // x0
  __int64 v20; // x1
  int32_t size; // w8
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x3
  Il2CppObject *current; // x21
  System_Action_o *v26; // x22
  __int64 v27; // x0
  __int64 v28; // x1
  const MethodInfo *v29; // x3
  System_Collections_Generic_List_Enumerator_object__o v30; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4B15048 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, *(_QWORD *)&mode, method);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_UserPresentListViewObject__Dispose__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_UserPresentListViewObject__MoveNext__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_UserPresentListViewObject__get_Current__, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_UserPresentListViewObject__GetEnumerator__, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_UserPresentListViewObject__get_Count__, v13, v14);
    sub_1BCA7E0(&Method_UserPresentListViewManager_OnMoveEnd__, v15, v16);
    sub_1BCA7E0(&StringLiteral_10069/*"OnMoveEnd"*/, v17, v18);
    byte_4B15048 = 1;
  }
  memset(&v30, 0, sizeof(v30));
  ObjectList = (System_Collections_Generic_List_object__o *)UserPresentListViewManager__get_ObjectList(
                                                              this,
                                                              *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_1BCAA3C(0LL, v20);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10069/*"OnMoveEnd"*/,
      0.0,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v30,
      ObjectList,
      (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_UserPresentListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v30,
              (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_UserPresentListViewObject__MoveNext__) )
    {
      current = v30.fields._current;
      v26 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v22, v23, v24);
      System_Action___ctor(v26, (Il2CppObject *)this, Method_UserPresentListViewManager_OnMoveEnd__, 0LL);
      if ( !current )
        sub_1BCAA3C(v27, v28);
      UserPresentListViewObject__Init_38235464((UserPresentListViewObject_o *)current, mode, v26, v29);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v30,
      (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_UserPresentListViewObject__Dispose__);
  }
}


void __fastcall UserPresentListViewManager__SetMode(
        UserPresentListViewManager_o *this,
        int32_t mode,
        UserPresentListViewManager_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  const MethodInfo *v10; // x2

  this->fields.callbackFunc = callback;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.callbackFunc,
    (int64_t)callback,
    (int64_t)callback,
    (int32_t)method,
    v4,
    v5,
    v6,
    v7);
  UserPresentListViewManager__SetMode_38194828(this, mode, v10);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall UserPresentListViewManager__SetMode_38194828(
        UserPresentListViewManager_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  UserPresentListViewManager_o *v4; // x19
  struct System_Collections_Generic_List_GameObject__o *objectList; // x8
  const MethodInfo *v6; // x2
  int32_t v7; // w1

  v4 = this;
  if ( (byte_4B15046 & 1) == 0 )
  {
    this = (UserPresentListViewManager_o *)sub_1BCA7E0(
                                             &Method_System_Collections_Generic_List_GameObject__get_Count__,
                                             *(_QWORD *)&mode,
                                             method);
    byte_4B15046 = 1;
  }
  objectList = v4->fields.objectList;
  v4->fields.initMode = mode;
  if ( !objectList )
    sub_1BCAA3C(this, *(_QWORD *)&mode);
  v4->fields.callbackCount = objectList->fields._size;
  ListViewManager__set_IsInput((ListViewManager_o *)v4, mode == 1, 0LL);
  if ( mode == 1 )
  {
    v7 = 3;
LABEL_8:
    UserPresentListViewManager__RequestListObject_38234352(v4, v7, v6);
    return;
  }
  if ( mode == 2 )
  {
    v7 = 4;
    goto LABEL_8;
  }
}


void __fastcall UserPresentListViewManager__SetMode_38234300(
        UserPresentListViewManager_o *this,
        int32_t mode,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  const MethodInfo *v10; // x2

  this->fields.callbackFunc2 = callback;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.callbackFunc2,
    (int64_t)callback,
    (int64_t)callback,
    (int32_t)method,
    v4,
    v5,
    v6,
    v7);
  UserPresentListViewManager__SetMode_38194828(this, mode, v10);
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
  if ( (byte_4B15045 & 1) == 0 )
  {
    this = (UserPresentListViewManager_o *)sub_1BCA7E0(&UserPresentListViewObject_TypeInfo, obj, item);
    byte_4B15045 = 1;
  }
  if ( !obj
    || (methodPtr_low = LOBYTE(UserPresentListViewObject_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(obj->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low)
    || (UserPresentListViewObject_c *)obj->klass->_2.typeHierarchy[methodPtr_low - 1] != UserPresentListViewObject_TypeInfo )
  {
    sub_1BCAA3C(this, obj);
  }
  if ( v5->fields.initMode == 1 )
    v7 = 3;
  else
    v7 = 2;
  UserPresentListViewObject__Init_38234176((UserPresentListViewObject_o *)obj, v7, (const MethodInfo *)item);
}


void __fastcall UserPresentListViewManager__SetSortButtonImage(
        UserPresentListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  UnityEngine_Object_o *sortKindLabel; // x20
  __int64 v13; // x1
  ListViewSort_o *sort; // x0
  UILabel_o *v15; // x20
  UnityEngine_Object_o *sortOrderSprite; // x20
  struct ListViewSort_o *v17; // x8
  System_String_o **v18; // x8
  struct ListViewSort_o *v19; // x8
  System_String_o **v20; // x8

  if ( (byte_4B15054 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    sub_1BCA7E0(&StringLiteral_17718/*"btn_sort_up"*/, v4, v5);
    sub_1BCA7E0(&StringLiteral_17761/*"btn_txt_new"*/, v6, v7);
    sub_1BCA7E0(&StringLiteral_17768/*"btn_txt_old"*/, v8, v9);
    sub_1BCA7E0(&StringLiteral_17715/*"btn_sort_down"*/, v10, v11);
    byte_4B15054 = 1;
  }
  sortKindLabel = (UnityEngine_Object_o *)this->fields.sortKindLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Inequality(sortKindLabel, 0LL, 0LL) )
  {
    sort = this->fields.sort;
    if ( !sort )
      goto LABEL_24;
    v15 = this->fields.sortKindLabel;
    sort = (ListViewSort_o *)ListViewSort__GetSortKindButtonText(sort, 0, 0LL);
    if ( !v15 )
      goto LABEL_24;
    UILabel__set_text(v15, (System_String_o *)sort, 0LL);
  }
  sortOrderSprite = (UnityEngine_Object_o *)this->fields.sortOrderSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v13);
  sort = (ListViewSort_o *)UnityEngine_Object__op_Inequality(sortOrderSprite, 0LL, 0LL);
  if ( ((unsigned __int8)sort & 1) != 0 )
  {
    v17 = this->fields.sort;
    if ( v17 )
    {
      sort = (ListViewSort_o *)this->fields.sortExplanationSprite;
      if ( sort )
      {
        v18 = (System_String_o **)(v17->fields.isAscendingOrder ? &StringLiteral_17768/*"btn_txt_old"*/ : &StringLiteral_17761/*"btn_txt_new"*/);
        UISprite__set_spriteName((UISprite_o *)sort, *v18, 0LL);
        v19 = this->fields.sort;
        if ( v19 )
        {
          sort = (ListViewSort_o *)this->fields.sortOrderSprite;
          if ( sort )
          {
            if ( v19->fields.isAscendingOrder )
              v20 = (System_String_o **)&StringLiteral_17715/*"btn_sort_down"*/;
            else
              v20 = (System_String_o **)&StringLiteral_17718/*"btn_sort_up"*/;
            UISprite__set_spriteName((UISprite_o *)sort, *v20, 0LL);
            return;
          }
        }
      }
    }
LABEL_24:
    sub_1BCAA3C(sort, v13);
  }
}


void __fastcall UserPresentListViewManager___DlgForExpiredPresent_b__69_0(
        UserPresentListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  Il2CppObject *Instance; // x0
  __int64 v9; // x1
  Il2CppObject *v10; // x20
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x3
  System_Action_o *v14; // x21

  if ( (byte_4B15059 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4, v5);
    sub_1BCA7E0(&Method_UserPresentListViewManager__DlgForExpiredPresent_b__69_1__, v6, v7);
    byte_4B15059 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__CloseNotificationDialog((CommonUI_o *)Instance, 0LL),
        v10 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
        v14 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v11, v12, v13),
        System_Action___ctor(
          v14,
          (Il2CppObject *)this,
          Method_UserPresentListViewManager__DlgForExpiredPresent_b__69_1__,
          0LL),
        !v10) )
  {
    sub_1BCAA3C(Instance, v9);
  }
  CommonUI__maskFadeout((CommonUI_o *)v10, 1, 0.5, v14, 0LL);
}


void __fastcall UserPresentListViewManager___DlgForExpiredPresent_b__69_1(
        UserPresentListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  const MethodInfo *v4; // x1
  UserPresentBoxWindow_o *m_parent; // x0

  if ( (byte_4B1505A & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method, v2);
    byte_4B1505A = 1;
  }
  UserPresentListViewManager__DestroyList(this, method);
  m_parent = this->fields.m_parent;
  if ( !m_parent
    || (UserPresentBoxWindow__ReDisp(m_parent, v4), (m_parent = (UserPresentBoxWindow_o *)this->fields.scrollView) == 0LL)
    || (UIScrollView__ResetPosition((UIScrollView_o *)m_parent, 0LL),
        (m_parent = (UserPresentBoxWindow_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__)) == 0LL) )
  {
    sub_1BCAA3C(m_parent, v4);
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

  if ( (byte_4B15038 & 1) == 0 )
  {
    sub_1BCA7E0(&UserPresentListViewManager_CallbackFunc_TypeInfo, value, method);
    byte_4B15038 = 1;
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
    v8 = sub_1C05CD0(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1BCACFC(v7);
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

  if ( (byte_4B1503A & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, value, method);
    byte_4B1503A = 1;
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
    v8 = sub_1C05CD0(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1BCACFC(v7);
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

  if ( (byte_4B1503C & 1) == 0 )
  {
    sub_1BCA7E0(&UserPresentListViewManager_ReceiveCallbackFunc_TypeInfo, value, method);
    byte_4B1503C = 1;
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
    v8 = sub_1C05CD0(p_receivecCallbackFunc, v7, receivecCallbackFunc);
    v9 = receivecCallbackFunc == (System_Delegate_o *)v8;
    receivecCallbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1BCACFC(v7);
  UserPresentListViewManager__remove_receivecCallbackFunc(v10, v11, v12);
}


System_Collections_Generic_List_UserPresentListViewObject__o *__fastcall UserPresentListViewManager__get_ClippingObjectList(
        UserPresentListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  System_Collections_Generic_List_object__o *v21; // x19
  __int64 v22; // x1
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  __int64 v24; // x1
  Il2CppObject *current; // x21
  _BOOL8 v26; // x0
  __int64 v27; // x1
  Il2CppObject *Component_object; // x0
  const MethodInfo *v29; // x1
  Il2CppObject *v30; // x21
  ListViewItem_o *Item; // x0
  __int64 v32; // x1
  int64_t v33; // x2
  int32_t v34; // w3
  System_String_o *v35; // x4
  BattleSetupInfo_o *v36; // x5
  FollowerInfo_o *v37; // x6
  PartyListViewItem_o *v38; // x7
  _BOOL8 v39; // x0
  __int64 v40; // x1
  struct System_Object_array *items; // x8
  _QWORD *v42; // x9
  __int64 size; // x10
  Il2CppClass **v44; // x0
  System_Collections_Generic_List_Enumerator_object__o v46; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v47; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_4B15041 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v7, v8);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_UserPresentListViewObject___, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_UserPresentListViewObject__Add__, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_UserPresentListViewObject___ctor__, v15, v16);
    sub_1BCA7E0(&System_Collections_Generic_List_UserPresentListViewObject__TypeInfo, v17, v18);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v19, v20);
    byte_4B15041 = 1;
  }
  memset(&v47, 0, sizeof(v47));
  v21 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_UserPresentListViewObject__TypeInfo,
                                                       method,
                                                       v2,
                                                       v3);
  System_Collections_Generic_List_object____ctor(
    v21,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_UserPresentListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_1BCAA3C(0LL, v22);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v46,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v47 = v46;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v47,
            (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v47.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v24);
    v26 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v26 )
    {
      if ( !current )
        sub_1BCAA3C(v26, v27);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_UserPresentListViewObject___);
      v30 = Component_object;
      if ( !Component_object )
        sub_1BCAA3C(0LL, v29);
      Item = (ListViewItem_o *)UserPresentListViewObject__GetItem((UserPresentListViewObject_o *)Component_object, v29);
      if ( !Item )
        sub_1BCAA3C(0LL, v32);
      if ( Item->fields.isTermination )
      {
        v39 = ListViewManager__ClippingItem_41463120((ListViewManager_o *)this, Item, 0LL);
        if ( v39 )
        {
          if ( !v21 )
            sub_1BCAA3C(v39, v40);
          items = v21->fields._items;
          v42 = Method_System_Collections_Generic_List_UserPresentListViewObject__Add__;
          ++v21->fields._version;
          if ( !items )
            sub_1BCAA3C(v39, v40);
          size = v21->fields._size;
          if ( (unsigned int)size < items->max_length )
            goto LABEL_17;
LABEL_21:
          System_Collections_Generic_List_object___AddWithResize(
            v21,
            v30,
            *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v42[4] + 192LL) + 112LL));
        }
      }
      else
      {
        if ( !v21 )
          sub_1BCAA3C(Item, v32);
        items = v21->fields._items;
        v42 = Method_System_Collections_Generic_List_UserPresentListViewObject__Add__;
        ++v21->fields._version;
        if ( !items )
          sub_1BCAA3C(Item, v32);
        size = v21->fields._size;
        if ( (unsigned int)size >= items->max_length )
          goto LABEL_21;
LABEL_17:
        v44 = &items->obj.klass + size;
        v21->fields._size = size + 1;
        v44[4] = (Il2CppClass *)v30;
        sub_1BCA784((PartyOrganizationUtility_o *)(v44 + 4), (int64_t)v30, v33, v34, v35, v36, v37, v38);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v47,
    (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_UserPresentListViewObject__o *)v21;
}


System_Collections_Generic_List_UserPresentListViewObject__o *__fastcall UserPresentListViewManager__get_ObjectList(
        UserPresentListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  System_Collections_Generic_List_object__o *v21; // x19
  __int64 v22; // x1
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  __int64 v24; // x1
  Il2CppObject *current; // x20
  _BOOL8 v26; // x0
  __int64 v27; // x1
  Il2CppObject *Component_object; // x0
  int64_t v29; // x2
  int32_t v30; // w3
  System_String_o *v31; // x4
  BattleSetupInfo_o *v32; // x5
  FollowerInfo_o *v33; // x6
  PartyListViewItem_o *v34; // x7
  int64_t v35; // x1
  struct System_Object_array *items; // x8
  _QWORD *v37; // x9
  __int64 size; // x10
  Il2CppClass **v39; // x0
  System_Collections_Generic_List_Enumerator_object__o v41; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v42; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4B15040 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v7, v8);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_UserPresentListViewObject___, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_UserPresentListViewObject__Add__, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_UserPresentListViewObject___ctor__, v15, v16);
    sub_1BCA7E0(&System_Collections_Generic_List_UserPresentListViewObject__TypeInfo, v17, v18);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v19, v20);
    byte_4B15040 = 1;
  }
  memset(&v42, 0, sizeof(v42));
  v21 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_UserPresentListViewObject__TypeInfo,
                                                       method,
                                                       v2,
                                                       v3);
  System_Collections_Generic_List_object____ctor(
    v21,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_UserPresentListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_1BCAA3C(0LL, v22);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v41,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v42 = v41;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v42,
            (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v42.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v24);
    v26 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v26 )
    {
      if ( !current )
        sub_1BCAA3C(v26, v27);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_UserPresentListViewObject___);
      v35 = (int64_t)Component_object;
      if ( !v21 )
        sub_1BCAA3C(Component_object, Component_object);
      items = v21->fields._items;
      v37 = Method_System_Collections_Generic_List_UserPresentListViewObject__Add__;
      ++v21->fields._version;
      if ( !items )
        sub_1BCAA3C(Component_object, Component_object);
      size = v21->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v21,
          Component_object,
          *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v37[4] + 192LL) + 112LL));
      }
      else
      {
        v39 = &items->obj.klass + size;
        v21->fields._size = size + 1;
        v39[4] = (Il2CppClass *)v35;
        sub_1BCA784((PartyOrganizationUtility_o *)(v39 + 4), v35, v29, v30, v31, v32, v33, v34);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v42,
    (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_UserPresentListViewObject__o *)v21;
}


ListViewSort_o *__fastcall UserPresentListViewManager__get_SortInfo(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  UserPresentListViewManager_c *v3; // x0

  if ( (byte_4B15037 & 1) == 0 )
  {
    sub_1BCA7E0(&UserPresentListViewManager_TypeInfo, v1, v2);
    byte_4B15037 = 1;
  }
  v3 = UserPresentListViewManager_TypeInfo;
  if ( !UserPresentListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserPresentListViewManager_TypeInfo, v1);
    v3 = UserPresentListViewManager_TypeInfo;
  }
  return v3->static_fields->sortInfo;
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

  if ( (byte_4B15039 & 1) == 0 )
  {
    sub_1BCA7E0(&UserPresentListViewManager_CallbackFunc_TypeInfo, value, method);
    byte_4B15039 = 1;
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
    v8 = sub_1C05CD0(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1BCACFC(v7);
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

  if ( (byte_4B1503B & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, value, method);
    byte_4B1503B = 1;
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
    v8 = sub_1C05CD0(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1BCACFC(v7);
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

  if ( (byte_4B1503D & 1) == 0 )
  {
    sub_1BCA7E0(&UserPresentListViewManager_ReceiveCallbackFunc_TypeInfo, value, method);
    byte_4B1503D = 1;
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
    v8 = sub_1C05CD0(p_receivecCallbackFunc, v7, receivecCallbackFunc);
    v9 = receivecCallbackFunc == (System_Delegate_o *)v8;
    receivecCallbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1BCACFC(v7);
  UserPresentListViewManager__get_select_idx(v10, v11);
}


void __fastcall UserPresentListViewManager__resetCheckStatus(
        UserPresentListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  struct System_Collections_Generic_List_long__o *checkedIdList; // x8
  int v5; // w9

  if ( (byte_4B1504D & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_long__Clear__, method, v2);
    byte_4B1504D = 1;
  }
  checkedIdList = this->fields.checkedIdList;
  if ( checkedIdList )
  {
    v5 = checkedIdList->fields._version + 1;
    checkedIdList->fields._size = 0;
    checkedIdList->fields._version = v5;
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall UserPresentListViewManager__setJumpType(
        UserPresentListViewManager_o *this,
        int32_t type,
        const MethodInfo *method)
{
  UserPresentBoxErrorDialog_o *dialog; // x0

  dialog = this->fields.dialog;
  if ( !dialog )
    sub_1BCAA3C(0LL, *(_QWORD *)&type);
  UserPresentBoxErrorDialog__setJumpType(dialog, type, method);
}


void __fastcall UserPresentListViewManager__set_expiredPresents(
        UserPresentListViewManager_o *this,
        System_String_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields._expiredPresents_k__BackingField = value;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields._expiredPresents_k__BackingField,
    (int64_t)value,
    (int64_t)method,
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
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  const MethodInfo *v17; // x2
  int32_t kind; // w8
  System_String_o *v19; // x1
  __int64 *v20; // x8

  if ( (byte_4B15050 & 1) == 0 )
  {
    sub_1BCA7E0(&LocalizationManager_TypeInfo, callback, method);
    sub_1BCA7E0(&StringLiteral_11188/*"REJECT_NORMAL_TXT"*/, v10, v11);
    sub_1BCA7E0(&StringLiteral_11184/*"REJECT_ALL_TXT"*/, v12, v13);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v14, v15);
    byte_4B15050 = 1;
  }
  this->fields.receivecCallbackFunc = callback;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.receivecCallbackFunc,
    (int64_t)callback,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  kind = this->fields.kind;
  if ( !kind )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v16);
    v20 = &StringLiteral_11188/*"REJECT_NORMAL_TXT"*/;
    goto LABEL_12;
  }
  if ( (unsigned int)(kind - 1) <= 2 )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v16);
    v20 = &StringLiteral_11184/*"REJECT_ALL_TXT"*/;
LABEL_12:
    v19 = LocalizationManager__Get((System_String_o *)*v20, 0LL);
    goto LABEL_13;
  }
  v19 = (System_String_o *)StringLiteral_1/*""*/;
LABEL_13:
  UserPresentListViewManager__OpenNoticeDlg(this, v19, v17);
}


void __fastcall UserPresentListViewManager__updateCheckStatus(
        UserPresentListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  const MethodInfo *v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  struct System_Collections_Generic_List_long__o *checkedIdList; // x21
  void *m_parent; // x0
  int32_t size; // w25
  BalanceConfig_c *v24; // x0
  int32_t PresentBoxCheckMax; // w26
  System_Collections_Generic_List_long__o *v26; // x20
  const MethodInfo *v27; // x2
  int32_t v28; // w21
  UserPresentListViewItem_o *v29; // x27
  UserPresentListViewItem_o *v30; // x22
  __int64 methodPtr_low; // x9
  int64_t v32; // x23
  const MethodInfo *v33; // x3
  int32_t v34; // w0
  const MethodInfo *v35; // x3
  const MethodInfo *v36; // x2
  struct UserPresentBoxEntity_o *usrPresentEnt; // x8
  struct ItemEntity_o *itemEnt; // x8
  struct System_Collections_Generic_List_long__o *v39; // x8
  UserPresentListViewManager_o *v40; // x0
  int32_t v41; // w1
  const MethodInfo *v42; // x2
  int v43; // [xsp+Ch] [xbp-64h]

  if ( (byte_4B1504C & 1) == 0 )
  {
    sub_1BCA7E0(&BalanceConfig_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_long__IndexOf__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_long__Remove__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_long___ctor___76787640, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_long__get_Count__, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v15, v16);
    sub_1BCA7E0(&System_Collections_Generic_List_long__TypeInfo, v17, v18);
    sub_1BCA7E0(&UserPresentListViewItem_TypeInfo, v19, v20);
    byte_4B1504C = 1;
  }
  checkedIdList = this->fields.checkedIdList;
  if ( checkedIdList && checkedIdList->fields._size )
  {
    v43 = 1;
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
    v43 = 0;
  }
  size = checkedIdList->fields._size;
  v24 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, method);
    v24 = BalanceConfig_TypeInfo;
    checkedIdList = this->fields.checkedIdList;
  }
  PresentBoxCheckMax = v24->static_fields->PresentBoxCheckMax;
  v26 = (System_Collections_Generic_List_long__o *)sub_1BCAA2C(
                                                     System_Collections_Generic_List_long__TypeInfo,
                                                     method,
                                                     v2,
                                                     v3);
  System_Collections_Generic_List_long____ctor_56137060(
    v26,
    (System_Collections_Generic_IEnumerable_T__o *)checkedIdList,
    (const MethodInfo_3589564 *)Method_System_Collections_Generic_List_long___ctor___76787640);
  m_parent = this->fields.itemList;
  if ( !m_parent )
LABEL_39:
    sub_1BCAA3C(m_parent, method);
  v28 = 0;
  v29 = 0LL;
  while ( 1 )
  {
    if ( v28 >= *((_DWORD *)m_parent + 6) )
    {
      v39 = this->fields.checkedIdList;
      if ( v39 )
      {
        m_parent = this->fields.m_parent;
        if ( m_parent )
        {
          UserPresentBoxWindow__SetSelectCount((UserPresentBoxWindow_o *)m_parent, v39->fields._size, v27);
          return;
        }
      }
      goto LABEL_39;
    }
    m_parent = System_Collections_Generic_List_object___get_Item(
                 (System_Collections_Generic_List_object__o *)m_parent,
                 v28,
                 (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    if ( !m_parent )
      goto LABEL_39;
    method = (const MethodInfo *)UserPresentListViewItem_TypeInfo;
    v30 = (UserPresentListViewItem_o *)m_parent;
    methodPtr_low = LOBYTE(UserPresentListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
    if ( *(unsigned __int8 *)(*(_QWORD *)m_parent + 304LL) < (unsigned int)methodPtr_low
      || *(UserPresentListViewItem_c **)(*(_QWORD *)(*(_QWORD *)m_parent + 200LL) + 8 * methodPtr_low - 8) != UserPresentListViewItem_TypeInfo )
    {
      break;
    }
    if ( !v26 )
      goto LABEL_39;
    v32 = *((_QWORD *)m_parent + 20);
    if ( System_Collections_Generic_List_long___Remove(
           v26,
           v32,
           (const MethodInfo_358B18C *)Method_System_Collections_Generic_List_long__Remove__) )
    {
      m_parent = this->fields.checkedIdList;
      if ( !m_parent )
        goto LABEL_39;
      v34 = System_Collections_Generic_List_long___IndexOf(
              (System_Collections_Generic_List_long__o *)m_parent,
              v32,
              (const MethodInfo_358A90C *)Method_System_Collections_Generic_List_long__IndexOf__);
      UserPresentListViewItem__setCheckBoxed(v30, 1, v34 + 1, v35);
    }
    else
    {
      UserPresentListViewItem__setCheckBoxed(v30, 0, -1, v33);
      if ( size < PresentBoxCheckMax )
        v29 = v30;
      if ( size < PresentBoxCheckMax )
      {
        if ( v43 && (usrPresentEnt = v30->fields.usrPresentEnt) != 0LL )
        {
          if ( usrPresentEnt->fields.giftType == 2 )
          {
            itemEnt = v30->fields.itemEnt;
            if ( !itemEnt )
              goto LABEL_39;
            method = (const MethodInfo *)(itemEnt->fields.type == 24);
          }
          else
          {
            method = 0LL;
          }
          v30 = v29;
          if ( !v29 )
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
      UserPresentListViewItem__setBlocked(v30, (bool)method, v36);
    }
    m_parent = this->fields.itemList;
    ++v28;
    if ( !m_parent )
      goto LABEL_39;
  }
  sub_1BCACFC(m_parent);
  UserPresentListViewManager__GetItem(v40, v41, v42);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall UserPresentListViewManager_CallbackFunc___ctor(
        UserPresentListViewManager_CallbackFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v8; // x8
  __int64 v10; // x21
  int v12; // w22
  Il2CppObject *v13; // x8
  struct System_Reflection_MethodInfo_o *v14; // x9
  __int64 v15; // x0

  v8 = *(_QWORD *)(*(_QWORD *)&method + 8LL);
  *(_QWORD *)&this->fields.extra_arg = *(_QWORD *)&method;
  v10 = *(_QWORD *)&method;
  *(_QWORD *)&this->fields.method_ptr = v8;
  *(_QWORD *)&this->fields.method = object;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.method,
    (int64_t)object,
    *(int64_t *)&method,
    (int32_t)a4,
    v4,
    v5,
    v6,
    v7);
  v12 = *(unsigned __int8 *)(v10 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1BCA8A0(v10) & 1) != 0 )
  {
    if ( v12 == 1 )
    {
      v13 = (Il2CppObject *)sub_1A0C344;
LABEL_8:
      this->fields.m_target = v13;
      goto LABEL_9;
    }
  }
  else
  {
    if ( !v12 )
    {
      v13 = (Il2CppObject *)sub_1A0C324;
      goto LABEL_8;
    }
    if ( !object )
    {
      v15 = sub_1BCAA58(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1BCA908(v15, 0LL);
    }
  }
  v14 = *(struct System_Reflection_MethodInfo_o **)&this->fields.method;
  this->fields.m_target = *(Il2CppObject **)&this->fields.method_ptr;
  this->fields.original_method_info = v14;
LABEL_9:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_1A0C2DC;
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
  return (System_IAsyncResult_o *)sub_1BCA794(this, &v6, callback, object);
}


void __fastcall UserPresentListViewManager_CallbackFunc__EndInvoke(
        UserPresentListViewManager_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1BCA798(result, 0LL, method);
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
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v8; // x8
  __int64 v10; // x21
  int v12; // w22
  struct System_Reflection_MethodInfo_o *v13; // x9
  __int64 v14; // x0

  v8 = *(_QWORD *)(*(_QWORD *)&method + 8LL);
  *(_QWORD *)&this->fields.extra_arg = *(_QWORD *)&method;
  v10 = *(_QWORD *)&method;
  *(_QWORD *)&this->fields.method_ptr = v8;
  *(_QWORD *)&this->fields.method = object;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.method,
    (int64_t)object,
    *(int64_t *)&method,
    (int32_t)a4,
    v4,
    v5,
    v6,
    v7);
  v12 = *(unsigned __int8 *)(v10 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1BCA8A0(v10) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_1BCAA58(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1BCA908(v14, 0LL);
    }
    goto LABEL_5;
  }
  if ( v12 != 1 )
  {
LABEL_5:
    v13 = *(struct System_Reflection_MethodInfo_o **)&this->fields.method;
    this->fields.m_target = *(Il2CppObject **)&this->fields.method_ptr;
    this->fields.original_method_info = v13;
    goto LABEL_6;
  }
  this->fields.m_target = (Il2CppObject *)sub_1A0C3C8;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_1A0C380;
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
  if ( (byte_4B1505B & 1) == 0 )
  {
    sub_1BCA7E0(&bool_TypeInfo, isReceive, callback);
    byte_4B1505B = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10);
  return (System_IAsyncResult_o *)sub_1BCA794(this, v9, callback, object);
}


void __fastcall UserPresentListViewManager_ReceiveCallbackFunc__EndInvoke(
        UserPresentListViewManager_ReceiveCallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1BCA798(result, 0LL, method);
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
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7

  if ( (byte_4B1505C & 1) == 0 )
  {
    sub_1BCA7E0(&UserPresentListViewManager___c_TypeInfo, v1, v2);
    byte_4B1505C = 1;
  }
  v4 = (Il2CppObject *)sub_1BCAA2C(UserPresentListViewManager___c_TypeInfo, v1, v2, v3);
  System_Object___ctor(v4, 0LL);
  UserPresentListViewManager___c_TypeInfo->static_fields->__9 = (struct UserPresentListViewManager___c_o *)v4;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)UserPresentListViewManager___c_TypeInfo->static_fields,
    (int64_t)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
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
  if ( (byte_4B1505D & 1) == 0 )
  {
    this = (UserPresentListViewManager___c_o *)sub_1BCA7E0(&UserPresentListViewItem_TypeInfo, a, b);
    byte_4B1505D = 1;
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
      sub_1BCAA3C(this, a);
    }
  }
  else
  {
    sub_1BCACFC(v5);
  }
  sub_1BCACFC(b);
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
  if ( (byte_4B1505E & 1) == 0 )
  {
    this = (UserPresentListViewManager___c_o *)sub_1BCA7E0(&UserPresentListViewItem_TypeInfo, obj, method);
    byte_4B1505E = 1;
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
      sub_1BCAA3C(this, obj);
    }
    return 0;
  }
  else
  {
    sub_1BCACFC(v3);
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
  if ( (byte_4B1505F & 1) == 0 )
  {
    this = (UserPresentListViewManager___c_o *)sub_1BCA7E0(&UserPresentListViewItem_TypeInfo, a, b);
    byte_4B1505F = 1;
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
  result = System_String__CompareTo_62408520((System_String_o *)v8, (System_String_o *)this, 0LL);
  if ( result )
    return result;
  a = (ListViewItem_o *)UserPresentListViewItem_TypeInfo;
  v10 = LOBYTE(UserPresentListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(v5->klass->vtable._0_Equals.methodPtr) < (unsigned int)v10
    || (UserPresentListViewItem_c *)v5->klass->_2.typeHierarchy[v10 - 1] != UserPresentListViewItem_TypeInfo )
  {
LABEL_18:
    sub_1BCACFC(v5);
    goto LABEL_19;
  }
  v11 = LOBYTE(UserPresentListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(b->klass->vtable._0_Equals.methodPtr) >= (unsigned int)v11
    && (UserPresentListViewItem_c *)b->klass->_2.typeHierarchy[v11 - 1] == UserPresentListViewItem_TypeInfo )
  {
    this = (UserPresentListViewManager___c_o *)v5[1].fields.sortValue2;
    if ( this )
      return System_String__CompareTo_62408520((System_String_o *)this, (System_String_o *)b[1].fields.sortValue2, 0LL);
LABEL_17:
    sub_1BCAA3C(this, a);
  }
LABEL_19:
  sub_1BCACFC(b);
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
  if ( (byte_4B15060 & 1) == 0 )
  {
    this = (UserPresentListViewManager___c_o *)sub_1BCA7E0(&UserPresentListViewItem_TypeInfo, a, b);
    byte_4B15060 = 1;
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
      sub_1BCAA3C(this, a);
    }
  }
  else
  {
    sub_1BCACFC(v5);
  }
  sub_1BCACFC(b);
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
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  UserPresentListViewManager___c__DisplayClass67_0_o *v9; // x19
  __int64 methodPtr_low; // x10
  int64_t sortValue0; // x8
  PartyOrganizationUtility_c *monitor; // x1
  PartyOrganizationUtility_o *p_ticketItem; // x19
  struct ItemEntity_o *ticketItem; // t1

  v9 = this;
  if ( (byte_4B15061 & 1) == 0 )
  {
    this = (UserPresentListViewManager___c__DisplayClass67_0_o *)sub_1BCA7E0(
                                                                   &UserPresentListViewItem_TypeInfo,
                                                                   obj,
                                                                   method);
    byte_4B15061 = 1;
  }
  if ( !obj
    || (methodPtr_low = LOBYTE(UserPresentListViewItem_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(obj->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low)
    || (UserPresentListViewItem_c *)obj->klass->_2.typeHierarchy[methodPtr_low - 1] != UserPresentListViewItem_TypeInfo )
  {
    sub_1BCAA3C(this, obj);
  }
  sortValue0 = obj[1].fields.sortValue0;
  if ( !sortValue0 )
    return 1;
  if ( *(_DWORD *)(sortValue0 + 72) != 2 )
    return 1;
  monitor = (PartyOrganizationUtility_c *)obj[1].monitor;
  if ( !monitor || LODWORD(monitor->_1.this_arg.data) != 24 || LODWORD(monitor->_1.name) != v9->fields.ticketId )
    return 1;
  ticketItem = v9->fields.ticketItem;
  p_ticketItem = (PartyOrganizationUtility_o *)&v9->fields.ticketItem;
  *(_DWORD *)(&p_ticketItem[-1].fields._IsNormalFlowQuest_k__BackingField + 3) += *(_DWORD *)(sortValue0 + 80);
  if ( !ticketItem )
  {
    p_ticketItem->klass = monitor;
    sub_1BCA784(p_ticketItem, (int64_t)monitor, (int64_t)method, v3, v4, v5, v6, v7);
  }
  return 0;
}