void FriendOperationItemListViewManager___cctor(const MethodInfo *method)
{
  Il2CppClass *v1; // x0
  System_Array_o *v2; // x0
  System_RuntimeFieldHandle_o v3; // x1
  System_Array_o *v4; // x19
  struct FriendOperationItemListViewManager_StaticFields *static_fields; // x0
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7

  if ( (byte_5932F43 & 1) == 0 )
  {
    sub_21FFC50(&ListViewSort_FilterKind___TypeInfo);
    sub_21FFC50(&FriendOperationItemListViewManager_TypeInfo);
    sub_21FFC50(&Field__PrivateImplementationDetails__CECDD0BE7FC2683E9048A1EAA2B2C479E05BE86E55C4C967D9E866EDE0AD71AB);
    byte_5932F43 = 1;
  }
  v1 = ListViewSort_FilterKind___TypeInfo;
  FriendOperationItemListViewManager_TypeInfo->static_fields->isInitSystem = 0;
  v2 = (System_Array_o *)sub_21FFD10(v1, 9);
  v3.fields.value = Field__PrivateImplementationDetails__CECDD0BE7FC2683E9048A1EAA2B2C479E05BE86E55C4C967D9E866EDE0AD71AB;
  v4 = v2;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_76127424(v2, v3, 0);
  static_fields = FriendOperationItemListViewManager_TypeInfo->static_fields;
  static_fields->classFilter = (struct ListViewSort_FilterKind_array *)v4;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&static_fields->classFilter, (int32_t)v4, v6, v7, v8, v9, v10, v11);
}


void FriendOperationItemListViewManager___ctor(FriendOperationItemListViewManager_o *this, const MethodInfo *method)
{
  ListViewManager___ctor((ListViewManager_o *)this, 0);
}


void FriendOperationItemListViewManager__CloseSortDialog(
        FriendOperationItemListViewManager_o *this,
        bool isResult,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v6; // x1

  if ( (byte_5932F3C & 1) == 0 )
  {
    sub_21FFC50(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_5932F3C = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_21FFECC(0, v6);
  CommonUI__CloseOtherUserSortDialog((CommonUI_o *)Instance, 0, 0);
  if ( isResult )
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, 3, 0);
}


// local variable allocation has failed, the output may be wrong!
void FriendOperationItemListViewManager__CreateList(
        FriendOperationItemListViewManager_o *this,
        int32_t kind,
        int32_t classPos,
        const MethodInfo *method)
{
  int64_t sort; // x0
  __int64 v7; // x1
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  FriendOperationItemListViewManager_c *v14; // x8
  struct ListViewSort_array *sortStatusList; // x8
  struct ListViewSort_o *v16; // x1
  System_String_o *v17; // x29
  OtherUserGameEntity_array *FriendCodeList; // x20
  __int64 v19; // x2
  il2cpp_array_size_t v20; // x8
  unsigned __int64 v21; // x26
  struct System_Collections_Generic_List_ListViewItem__o *v22; // x9
  int32_t v23; // w23
  OtherUserGameEntity_o *v24; // x24
  System_Collections_Generic_Dictionary_int__int__o *v25; // x25
  FriendOperationItemListViewItem_o *v26; // x21
  const MethodInfo *v27; // x6
  System_String_o *v28; // x2
  System_String_o *v29; // x3
  int32_t v30; // w4
  int32_t v31; // w5
  bool v32; // w6
  bool v33; // w7
  __int64 v34; // x8
  _QWORD *v35; // x9
  __int64 v36; // x10
  __int64 v37; // x8
  Il2CppObject *v38; // x20
  System_Collections_Generic_IEnumerable_T__o *v39; // x22
  System_Collections_Generic_List_object__o *v40; // x21
  __int64 v41; // x2
  struct FriendOperationItemListViewManager___c_StaticFields *static_fields; // x8
  System_Comparison_T__o *_9__35_0; // x22
  Il2CppObject *v44; // x23
  struct FriendOperationItemListViewManager___c_StaticFields *v45; // x0
  System_String_o *v46; // x2
  System_String_o *v47; // x3
  int32_t v48; // w4
  int32_t v49; // w5
  bool v50; // w6
  bool v51; // w7
  __int64 v52; // x1
  __int64 v53; // x2
  int v54; // w23
  BalanceConfig_c *v55; // x0
  __int64 MaxFriendHistoryNum; // x1
  int32_t v57; // w22
  UserFriendRequestHistoryEntity_o *v58; // x23
  __int64 naturalAligment; // x10
  struct System_Collections_Generic_List_ListViewItem__o *v60; // x8
  OtherUserGameEntity_o *v61; // x25
  int32_t v62; // w26
  System_Collections_Generic_Dictionary_int__int__o *v63; // x27
  FriendOperationItemListViewItem_o *v64; // x24
  const MethodInfo *v65; // x7
  System_String_o *v66; // x2
  System_String_o *v67; // x3
  int32_t v68; // w4
  int32_t v69; // w5
  bool v70; // w6
  bool v71; // w7
  __int64 v72; // x8
  _QWORD *v73; // x9
  __int64 v74; // x10
  __int64 v75; // x8
  __int64 *v76; // x8
  Il2CppObject *MasterData_object; // x20
  System_Collections_ObjectModel_Collection_T__o *v78; // x21
  int32_t v79; // w22
  UserBlacklistEntity_o *v80; // x24
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x8
  OtherUserGameEntity_o *v82; // x25
  int32_t size; // w26
  System_Collections_Generic_Dictionary_int__int__o *classBoardMaxDictionary; // x27
  FriendOperationItemListViewItem_o *v85; // x23
  const MethodInfo *v86; // x7
  System_String_o *v87; // x2
  System_String_o *v88; // x3
  int32_t v89; // w4
  int32_t v90; // w5
  bool v91; // w6
  bool v92; // w7
  __int64 v93; // x8
  _QWORD *v94; // x9
  __int64 v95; // x10
  __int64 v96; // x8
  TblFriendMaster_o *v97; // x23
  OtherUserGameEntity_array *List; // x24
  OtherUserGameEntity_array *v99; // x23
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 v101; // x29
  struct System_Collections_Generic_List_ListViewItem__o *v102; // x9
  int32_t v103; // w26
  OtherUserGameEntity_o *v104; // x27
  System_Collections_Generic_Dictionary_int__int__o *v105; // x28
  FriendOperationItemListViewItem_o *v106; // x25
  const MethodInfo *v107; // x6
  System_String_o *v108; // x2
  System_String_o *v109; // x3
  int32_t v110; // w4
  int32_t v111; // w5
  bool v112; // w6
  bool v113; // w7
  __int64 v114; // x8
  _QWORD *v115; // x9
  __int64 v116; // x10
  __int64 v117; // x8
  il2cpp_array_size_t v118; // x8
  unsigned __int64 v119; // x29
  struct System_Collections_Generic_List_ListViewItem__o *v120; // x9
  int32_t v121; // w26
  OtherUserGameEntity_o *v122; // x27
  System_Collections_Generic_Dictionary_int__int__o *v123; // x28
  FriendOperationItemListViewItem_o *v124; // x25
  const MethodInfo *v125; // x6
  System_String_o *v126; // x2
  System_String_o *v127; // x3
  int32_t v128; // w4
  int32_t v129; // w5
  bool v130; // w6
  bool v131; // w7
  __int64 v132; // x8
  _QWORD *v133; // x9
  __int64 v134; // x10
  __int64 v135; // x8
  UILabel_o *emptyMessageLabel; // x20
  struct UIScrollView_o *scrollView; // x8
  System_String_o *v138; // [xsp+10h] [xbp-70h]

  if ( (byte_5932F32 & 1) == 0 )
  {
    sub_21FFC50(&BalanceConfig_TypeInfo);
    sub_21FFC50(&Method_System_Collections_ObjectModel_Collection_UserBlacklistEntity__get_Count__);
    sub_21FFC50(&Method_System_Collections_ObjectModel_Collection_UserBlacklistEntity__get_Item__);
    sub_21FFC50(&System_Comparison_DataEntityBase__TypeInfo);
    sub_21FFC50(&Method_DataManager_GetMasterData_OtherUserGameMaster___);
    sub_21FFC50(&Method_DataManager_GetMasterData_TblFriendMaster___);
    sub_21FFC50(&Method_DataManager_GetMasterData_UserBlacklistMaster___);
    sub_21FFC50(&Method_DataManager_GetMasterData_UserFriendRequestHistoryMaster___);
    sub_21FFC50(&Method_DataMasterBase_OtherUserGameMaster__OtherUserGameEntity__long__GetEntity__);
    sub_21FFC50(&Method_DataMasterBase_UserBlacklistMaster__UserBlacklistEntity__string__getEntityList__);
    sub_21FFC50(&Method_DataMasterBase_UserFriendRequestHistoryMaster__UserFriendRequestHistoryEntity__int__getEntityList__);
    sub_21FFC50(&FriendOperationItemListViewItem_TypeInfo);
    sub_21FFC50(&FriendOperationItemListViewManager_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_DataEntityBase__RemoveRange__);
    sub_21FFC50(&Method_System_Collections_Generic_List_DataEntityBase__Reverse__);
    sub_21FFC50(&Method_System_Collections_Generic_List_DataEntityBase__Sort__);
    sub_21FFC50(&Method_System_Collections_Generic_List_DataEntityBase___ctor___91417600);
    sub_21FFC50(&Method_System_Collections_Generic_List_DataEntityBase__get_Count__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_21FFC50(&Method_System_Collections_Generic_List_DataEntityBase__get_Item__);
    sub_21FFC50(&System_Collections_Generic_List_DataEntityBase__TypeInfo);
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_21FFC50(&Method_FriendOperationItemListViewManager___c__CreateList_b__35_0__);
    sub_21FFC50(&FriendOperationItemListViewManager___c_TypeInfo);
    sub_21FFC50(&UserFriendRequestHistoryEntity_TypeInfo);
    sub_21FFC50(&StringLiteral_3050/*"BLACKLIST_EMPTY_MESSAGE"*/);
    sub_21FFC50(&StringLiteral_6802/*"FRIEND_EMPTY_FRIEND_MESSAGE"*/);
    sub_21FFC50(&StringLiteral_3053/*"BLACKLIST_FRIEND_HISTORY_EMPTY_MESSAGE"*/);
    sub_21FFC50(&StringLiteral_6803/*"FRIEND_EMPTY_OFFERED_MESSAGE"*/);
    byte_5932F32 = 1;
  }
  if ( !*(&FriendOperationItemListViewManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(FriendOperationItemListViewManager_TypeInfo, *(_QWORD *)&kind, *(_QWORD *)&classPos);
  FriendOperationItemListViewManager__CreateSorteData(classPos, *(const MethodInfo **)&kind);
  v14 = FriendOperationItemListViewManager_TypeInfo;
  this->fields.menuKind = kind;
  sortStatusList = v14->static_fields->sortStatusList;
  if ( !sortStatusList )
    goto LABEL_110;
  if ( LODWORD(sortStatusList->max_length) <= kind )
LABEL_111:
    sub_21FFED4(sort);
  v16 = sortStatusList->m_Items[kind];
  this->fields.sort = v16;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.sort, (int32_t)v16, v8, v9, v10, v11, v12, v13);
  sort = (int64_t)this->fields.sort;
  if ( !sort )
    goto LABEL_110;
  ListViewSort__Load((ListViewSort_o *)sort, 0);
  v17 = (System_String_o *)StringLiteral_6803/*"FRIEND_EMPTY_OFFERED_MESSAGE"*/;
  sort = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( kind == 8 )
  {
    if ( !sort )
      goto LABEL_110;
    MasterData_object = DataManager__GetMasterData_object_(
                          (DataManager_o *)sort,
                          (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_OtherUserGameMaster___);
    sort = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !sort )
      goto LABEL_110;
    sort = (int64_t)DataManager__GetMasterData_object_(
                      (DataManager_o *)sort,
                      (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_UserBlacklistMaster___);
    if ( !sort )
      goto LABEL_110;
    v78 = *(System_Collections_ObjectModel_Collection_T__o **)(sort + 40);
    ListViewManager__CreateList((ListViewManager_o *)this, 0, 0);
    if ( !v78 )
      goto LABEL_110;
    if ( System_Collections_ObjectModel_Collection_object___get_Count(
           v78,
           (const MethodInfo_3E60A6C *)Method_System_Collections_ObjectModel_Collection_UserBlacklistEntity__get_Count__) >= 1 )
    {
      v79 = 0;
      do
      {
        sort = (int64_t)System_Collections_ObjectModel_Collection_object___get_Item(
                          v78,
                          v79,
                          (const MethodInfo_3E60B00 *)Method_System_Collections_ObjectModel_Collection_UserBlacklistEntity__get_Item__);
        if ( !sort )
          goto LABEL_110;
        v80 = (UserBlacklistEntity_o *)sort;
        sort = UserBlacklistEntity__getOtherUserId((UserBlacklistEntity_o *)sort, 0);
        if ( !MasterData_object )
          goto LABEL_110;
        sort = (int64_t)DataMasterBase_object__object__long___GetEntity(
                          (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                          sort,
                          (const MethodInfo_3EDF9E8 *)Method_DataMasterBase_OtherUserGameMaster__OtherUserGameEntity__long__GetEntity__);
        itemList = this->fields.itemList;
        if ( !itemList )
          goto LABEL_110;
        v82 = (OtherUserGameEntity_o *)sort;
        size = itemList->fields._size;
        classBoardMaxDictionary = this->fields.classBoardMaxDictionary;
        v85 = (FriendOperationItemListViewItem_o *)sub_21FFEBC(FriendOperationItemListViewItem_TypeInfo);
        FriendOperationItemListViewItem___ctor_39321140(v85, 8, size, v82, v80, 0, classBoardMaxDictionary, v86);
        sort = (int64_t)this->fields.itemList;
        if ( !sort )
          goto LABEL_110;
        v93 = *(_QWORD *)(sort + 16);
        v94 = Method_System_Collections_Generic_List_ListViewItem__Add__;
        ++*(_DWORD *)(sort + 28);
        if ( !v93 )
          goto LABEL_110;
        v95 = *(int *)(sort + 24);
        if ( (unsigned int)v95 >= *(_DWORD *)(v93 + 24) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)sort,
            (Il2CppObject *)v85,
            *(const MethodInfo_444FB2C **)(*(_QWORD *)(v94[4] + 192LL) + 112LL));
        }
        else
        {
          v96 = v93 + 8 * v95;
          *(_DWORD *)(sort + 24) = v95 + 1;
          *(_QWORD *)(v96 + 32) = v85;
          sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v96 + 32), (int32_t)v85, v87, v88, v89, v90, v91, v92);
        }
      }
      while ( ++v79 < System_Collections_ObjectModel_Collection_object___get_Count(
                        v78,
                        (const MethodInfo_3E60A6C *)Method_System_Collections_ObjectModel_Collection_UserBlacklistEntity__get_Count__) );
    }
    v76 = &StringLiteral_3050/*"BLACKLIST_EMPTY_MESSAGE"*/;
LABEL_71:
    v17 = (System_String_o *)*v76;
    goto LABEL_105;
  }
  if ( kind == 7 )
  {
    if ( !sort )
      goto LABEL_110;
    v38 = DataManager__GetMasterData_object_(
            (DataManager_o *)sort,
            (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_OtherUserGameMaster___);
    sort = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !sort )
      goto LABEL_110;
    sort = (int64_t)DataManager__GetMasterData_object_(
                      (DataManager_o *)sort,
                      (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_UserFriendRequestHistoryMaster___);
    if ( !sort )
      goto LABEL_110;
    v39 = *(System_Collections_Generic_IEnumerable_T__o **)(sort + 40);
    v40 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_DataEntityBase__TypeInfo);
    System_Collections_Generic_List_object____ctor_71627776(
      v40,
      v39,
      (const MethodInfo_444F400 *)Method_System_Collections_Generic_List_DataEntityBase___ctor___91417600);
    sort = (int64_t)FriendOperationItemListViewManager___c_TypeInfo;
    if ( !*(&FriendOperationItemListViewManager___c_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(FriendOperationItemListViewManager___c_TypeInfo, v7, v41);
      sort = (int64_t)FriendOperationItemListViewManager___c_TypeInfo;
    }
    static_fields = *(struct FriendOperationItemListViewManager___c_StaticFields **)(sort + 184);
    _9__35_0 = (System_Comparison_T__o *)static_fields->__9__35_0;
    if ( !_9__35_0 )
    {
      if ( !*(_DWORD *)(sort + 228) )
      {
        j_il2cpp_runtime_class_init_0(sort, v7, v41);
        static_fields = FriendOperationItemListViewManager___c_TypeInfo->static_fields;
      }
      v44 = (Il2CppObject *)static_fields->__9;
      _9__35_0 = (System_Comparison_T__o *)sub_21FFEBC(System_Comparison_DataEntityBase__TypeInfo);
      System_Comparison_object____ctor(
        _9__35_0,
        v44,
        Method_FriendOperationItemListViewManager___c__CreateList_b__35_0__,
        0);
      v45 = FriendOperationItemListViewManager___c_TypeInfo->static_fields;
      v45->__9__35_0 = (struct System_Comparison_DataEntityBase__o *)_9__35_0;
      sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v45->__9__35_0, (int32_t)_9__35_0, v46, v47, v48, v49, v50, v51);
    }
    if ( !v40 )
      goto LABEL_110;
    System_Collections_Generic_List_object___Sort_71636404(
      v40,
      _9__35_0,
      (const MethodInfo_44515B4 *)Method_System_Collections_Generic_List_DataEntityBase__Sort__);
    v54 = v40->fields._size;
    v55 = BalanceConfig_TypeInfo;
    if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v52, v53);
      v55 = BalanceConfig_TypeInfo;
    }
    MaxFriendHistoryNum = (unsigned int)v55->static_fields->MaxFriendHistoryNum;
    if ( v54 > (int)MaxFriendHistoryNum )
    {
      if ( !*(&v55->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(v55, MaxFriendHistoryNum, v53);
        LODWORD(MaxFriendHistoryNum) = BalanceConfig_TypeInfo->static_fields->MaxFriendHistoryNum;
      }
      System_Collections_Generic_List_object___RemoveRange(
        v40,
        MaxFriendHistoryNum,
        v40->fields._size - MaxFriendHistoryNum,
        (const MethodInfo_445135C *)Method_System_Collections_Generic_List_DataEntityBase__RemoveRange__);
    }
    System_Collections_Generic_List_object___Reverse(
      v40,
      (const MethodInfo_445141C *)Method_System_Collections_Generic_List_DataEntityBase__Reverse__);
    ListViewManager__CreateList((ListViewManager_o *)this, 0, 0);
    if ( v40->fields._size >= 1 )
    {
      v57 = 0;
      do
      {
        sort = (int64_t)System_Collections_Generic_List_object___get_Item(
                          v40,
                          v57,
                          (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_DataEntityBase__get_Item__);
        if ( !sort )
          goto LABEL_110;
        v58 = (UserFriendRequestHistoryEntity_o *)sort;
        naturalAligment = UserFriendRequestHistoryEntity_TypeInfo->_2.naturalAligment;
        if ( *(unsigned __int8 *)(*(_QWORD *)sort + 304LL) < (unsigned int)naturalAligment )
          goto LABEL_110;
        if ( *(UserFriendRequestHistoryEntity_c **)(*(_QWORD *)(*(_QWORD *)sort + 200LL) + 8 * naturalAligment - 8) != UserFriendRequestHistoryEntity_TypeInfo )
          goto LABEL_110;
        sort = UserFriendRequestHistoryEntity__getOtherUserId((UserFriendRequestHistoryEntity_o *)sort, 0);
        if ( !v38 )
          goto LABEL_110;
        sort = (int64_t)DataMasterBase_object__object__long___GetEntity(
                          (DataMasterBase_TMaster__TEntity__PKType__o *)v38,
                          sort,
                          (const MethodInfo_3EDF9E8 *)Method_DataMasterBase_OtherUserGameMaster__OtherUserGameEntity__long__GetEntity__);
        v60 = this->fields.itemList;
        if ( !v60 )
          goto LABEL_110;
        v61 = (OtherUserGameEntity_o *)sort;
        v62 = v60->fields._size;
        v63 = this->fields.classBoardMaxDictionary;
        v64 = (FriendOperationItemListViewItem_o *)sub_21FFEBC(FriendOperationItemListViewItem_TypeInfo);
        FriendOperationItemListViewItem___ctor_39321476(v64, 7, v62, v61, v58, 0, v63, v65);
        sort = (int64_t)this->fields.itemList;
        if ( !sort )
          goto LABEL_110;
        v72 = *(_QWORD *)(sort + 16);
        v73 = Method_System_Collections_Generic_List_ListViewItem__Add__;
        ++*(_DWORD *)(sort + 28);
        if ( !v72 )
          goto LABEL_110;
        v74 = *(int *)(sort + 24);
        if ( (unsigned int)v74 >= *(_DWORD *)(v72 + 24) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)sort,
            (Il2CppObject *)v64,
            *(const MethodInfo_444FB2C **)(*(_QWORD *)(v73[4] + 192LL) + 112LL));
        }
        else
        {
          v75 = v72 + 8 * v74;
          *(_DWORD *)(sort + 24) = v74 + 1;
          *(_QWORD *)(v75 + 32) = v64;
          sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v75 + 32), (int32_t)v64, v66, v67, v68, v69, v70, v71);
        }
      }
      while ( ++v57 < v40->fields._size );
    }
    v76 = &StringLiteral_3053/*"BLACKLIST_FRIEND_HISTORY_EMPTY_MESSAGE"*/;
    goto LABEL_71;
  }
  if ( kind )
  {
    if ( !sort )
      goto LABEL_110;
    v138 = v17;
    sort = (int64_t)DataManager__GetMasterData_object_(
                      (DataManager_o *)sort,
                      (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_TblFriendMaster___);
    if ( !sort )
      goto LABEL_110;
    v97 = (TblFriendMaster_o *)sort;
    List = TblFriendMaster__GetList((TblFriendMaster_o *)sort, kind, 0);
    v99 = TblFriendMaster__GetList(v97, 9, 0);
    ListViewManager__CreateList((ListViewManager_o *)this, 0, 0);
    if ( kind != 3 )
      goto LABEL_86;
    if ( !v99 )
      goto LABEL_110;
    max_length = v99->max_length;
    if ( (int)max_length >= 1 )
    {
      v101 = 0;
      while ( 1 )
      {
        v102 = this->fields.itemList;
        if ( !v102 )
          break;
        if ( v101 >= (unsigned int)max_length )
          goto LABEL_111;
        v103 = v102->fields._size;
        v104 = v99->m_Items[v101];
        v105 = this->fields.classBoardMaxDictionary;
        v106 = (FriendOperationItemListViewItem_o *)sub_21FFEBC(FriendOperationItemListViewItem_TypeInfo);
        FriendOperationItemListViewItem___ctor(v106, 9, v103, v104, classPos, v105, v107);
        sort = (int64_t)this->fields.itemList;
        if ( !sort )
          break;
        v114 = *(_QWORD *)(sort + 16);
        v115 = Method_System_Collections_Generic_List_ListViewItem__Add__;
        ++*(_DWORD *)(sort + 28);
        if ( !v114 )
          break;
        v116 = *(int *)(sort + 24);
        if ( (unsigned int)v116 >= *(_DWORD *)(v114 + 24) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)sort,
            (Il2CppObject *)v106,
            *(const MethodInfo_444FB2C **)(*(_QWORD *)(v115[4] + 192LL) + 112LL));
        }
        else
        {
          v117 = v114 + 8 * v116;
          *(_DWORD *)(sort + 24) = v116 + 1;
          *(_QWORD *)(v117 + 32) = v106;
          sub_21FFBF4(
            (MissionNaviTransitionBoardItem_o *)(v117 + 32),
            (int32_t)v106,
            v108,
            v109,
            v110,
            v111,
            v112,
            v113);
        }
        LODWORD(max_length) = v99->max_length;
        if ( (__int64)++v101 >= (int)max_length )
          goto LABEL_86;
      }
    }
    else
    {
LABEL_86:
      if ( !List )
        goto LABEL_110;
      v118 = List->max_length;
      if ( (int)v118 < 1 )
      {
LABEL_97:
        if ( v118 )
        {
          v17 = v138;
        }
        else
        {
          v17 = v138;
          if ( !v99 )
            goto LABEL_110;
          if ( !v99->max_length )
          {
            if ( kind == 2 )
            {
              v17 = (System_String_o *)StringLiteral_6803/*"FRIEND_EMPTY_OFFERED_MESSAGE"*/;
            }
            else if ( kind == 3 )
            {
              v17 = (System_String_o *)StringLiteral_6802/*"FRIEND_EMPTY_FRIEND_MESSAGE"*/;
            }
          }
        }
        goto LABEL_105;
      }
      v119 = 0;
      while ( 1 )
      {
        v120 = this->fields.itemList;
        if ( !v120 )
          break;
        if ( v119 >= (unsigned int)v118 )
          goto LABEL_111;
        v121 = v120->fields._size;
        v122 = List->m_Items[v119];
        v123 = this->fields.classBoardMaxDictionary;
        v124 = (FriendOperationItemListViewItem_o *)sub_21FFEBC(FriendOperationItemListViewItem_TypeInfo);
        FriendOperationItemListViewItem___ctor(v124, kind, v121, v122, classPos, v123, v125);
        sort = (int64_t)this->fields.itemList;
        if ( !sort )
          break;
        v132 = *(_QWORD *)(sort + 16);
        v133 = Method_System_Collections_Generic_List_ListViewItem__Add__;
        ++*(_DWORD *)(sort + 28);
        if ( !v132 )
          break;
        v134 = *(int *)(sort + 24);
        if ( (unsigned int)v134 >= *(_DWORD *)(v132 + 24) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)sort,
            (Il2CppObject *)v124,
            *(const MethodInfo_444FB2C **)(*(_QWORD *)(v133[4] + 192LL) + 112LL));
        }
        else
        {
          v135 = v132 + 8 * v134;
          *(_DWORD *)(sort + 24) = v134 + 1;
          *(_QWORD *)(v135 + 32) = v124;
          sub_21FFBF4(
            (MissionNaviTransitionBoardItem_o *)(v135 + 32),
            (int32_t)v124,
            v126,
            v127,
            v128,
            v129,
            v130,
            v131);
        }
        v118 = List->max_length;
        if ( (__int64)++v119 >= (int)v118 )
          goto LABEL_97;
      }
    }
LABEL_110:
    sub_21FFECC(sort, v7);
  }
  if ( !sort )
    goto LABEL_110;
  sort = (int64_t)DataManager__GetMasterData_object_(
                    (DataManager_o *)sort,
                    (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_OtherUserGameMaster___);
  if ( !sort )
    goto LABEL_110;
  FriendCodeList = OtherUserGameMaster__GetFriendCodeList((OtherUserGameMaster_o *)sort, this->fields.friendCode, 0);
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0);
  if ( !FriendCodeList )
    goto LABEL_110;
  v20 = FriendCodeList->max_length;
  if ( (int)v20 >= 1 )
  {
    v21 = 0;
    do
    {
      v22 = this->fields.itemList;
      if ( !v22 )
        goto LABEL_110;
      if ( v21 >= (unsigned int)v20 )
        goto LABEL_111;
      v23 = v22->fields._size;
      v24 = FriendCodeList->m_Items[v21];
      v25 = this->fields.classBoardMaxDictionary;
      v26 = (FriendOperationItemListViewItem_o *)sub_21FFEBC(FriendOperationItemListViewItem_TypeInfo);
      FriendOperationItemListViewItem___ctor(v26, 0, v23, v24, 0, v25, v27);
      sort = (int64_t)this->fields.itemList;
      if ( !sort )
        goto LABEL_110;
      v34 = *(_QWORD *)(sort + 16);
      v35 = Method_System_Collections_Generic_List_ListViewItem__Add__;
      ++*(_DWORD *)(sort + 28);
      if ( !v34 )
        goto LABEL_110;
      v36 = *(int *)(sort + 24);
      if ( (unsigned int)v36 >= *(_DWORD *)(v34 + 24) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)sort,
          (Il2CppObject *)v26,
          *(const MethodInfo_444FB2C **)(*(_QWORD *)(v35[4] + 192LL) + 112LL));
      }
      else
      {
        v37 = v34 + 8 * v36;
        *(_DWORD *)(sort + 24) = v36 + 1;
        *(_QWORD *)(v37 + 32) = v26;
        sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v37 + 32), (int32_t)v26, v28, v29, v30, v31, v32, v33);
      }
      LODWORD(v20) = FriendCodeList->max_length;
    }
    while ( (__int64)++v21 < (int)v20 );
  }
LABEL_105:
  emptyMessageLabel = this->fields.emptyMessageLabel;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v7, v19);
  sort = (int64_t)LocalizationManager__Get(v17, 0);
  if ( !emptyMessageLabel )
    goto LABEL_110;
  UILabel__set_text(emptyMessageLabel, (System_String_o *)sort, 0);
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, 3, 0);
  scrollView = this->fields.scrollView;
  if ( !scrollView )
    goto LABEL_110;
  scrollView->fields.smoothDragStart = 1;
}


void FriendOperationItemListViewManager__CreateListFriendCode(
        FriendOperationItemListViewManager_o *this,
        System_String_o *friendCode,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  const MethodInfo *v9; // x3

  this->fields.friendCode = friendCode;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.friendCode,
    (int32_t)friendCode,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  FriendOperationItemListViewManager__CreateList(this, 0, 0, v9);
}


void FriendOperationItemListViewManager__CreateSorteData(int32_t classPos, const MethodInfo *method)
{
  __int64 v2; // x2
  FriendOperationItemListViewManager_c *v4; // x0
  __int64 v5; // x0
  __int64 v6; // x1
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7
  FriendOperationItemListViewManager_c *v13; // x8
  __int64 v14; // x20
  struct FriendOperationItemListViewManager_StaticFields *static_fields; // x0
  __int64 v16; // x1
  __int64 v17; // x2
  FriendOperationItemListViewManager_c *v18; // x0
  unsigned __int64 v19; // x27
  struct FriendOperationItemListViewManager_StaticFields *v20; // x8
  unsigned __int64 v21; // x26
  unsigned int *sortStatusList; // x28
  System_String_o *v23; // x0
  System_String_o *v24; // x21
  ListViewSort_o *v25; // x20
  System_String_o *v26; // x2
  System_String_o *v27; // x3
  int32_t v28; // w4
  int32_t v29; // w5
  bool v30; // w6
  bool v31; // w7
  __int64 v32; // x1
  unsigned int *v33; // x0
  struct ListViewSort_array *v34; // x8
  Il2CppClass **v35; // x8
  ListViewSort_o *v36; // x20
  struct ListViewSort_FilterKind_array *v37; // x8
  __int64 i; // x21
  struct ListViewSort_FilterKind_array *classFilter; // x8
  __int64 v40; // x0
  int v41; // [xsp+Ch] [xbp-54h] BYREF

  if ( (byte_5932F2C & 1) == 0 )
  {
    sub_21FFC50(&FriendOperationItemListViewManager_TypeInfo);
    sub_21FFC50(&ListViewSort___TypeInfo);
    sub_21FFC50(&ListViewSort_TypeInfo);
    sub_21FFC50(&StringLiteral_7152/*"FriendOperation"*/);
    byte_5932F2C = 1;
  }
  v4 = FriendOperationItemListViewManager_TypeInfo;
  v41 = 0;
  if ( !*(&FriendOperationItemListViewManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(FriendOperationItemListViewManager_TypeInfo, method, v2);
    v4 = FriendOperationItemListViewManager_TypeInfo;
  }
  if ( !v4->static_fields->isInitSystem )
  {
    v5 = sub_21FFD10(ListViewSort___TypeInfo, 10);
    v13 = FriendOperationItemListViewManager_TypeInfo;
    v14 = v5;
    if ( !*(&FriendOperationItemListViewManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(FriendOperationItemListViewManager_TypeInfo, v6, v7);
      v13 = FriendOperationItemListViewManager_TypeInfo;
    }
    static_fields = v13->static_fields;
    static_fields->sortStatusList = (struct ListViewSort_array *)v14;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&static_fields->sortStatusList, v14, v7, v8, v9, v10, v11, v12);
    v18 = FriendOperationItemListViewManager_TypeInfo;
    v19 = 0;
    do
    {
      if ( !*(&v18->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(v18, v16, v17);
        v18 = FriendOperationItemListViewManager_TypeInfo;
      }
      v20 = v18->static_fields;
      v21 = v19 + 1;
      v41 = v19 + 1;
      sortStatusList = (unsigned int *)v20->sortStatusList;
      v23 = System_Int32__ToString((int32_t)&v41, 0);
      v24 = System_String__Concat_75438412((System_String_o *)StringLiteral_7152/*"FriendOperation"*/, v23, 0);
      v25 = (ListViewSort_o *)sub_21FFEBC(ListViewSort_TypeInfo);
      ListViewSort___ctor_50784632(v25, v24, 3, 0, 0);
      if ( !sortStatusList )
        goto LABEL_42;
      if ( v25 )
      {
        v18 = (FriendOperationItemListViewManager_c *)sub_21FFDA4(v25, *(_QWORD *)(*(_QWORD *)sortStatusList + 64LL));
        if ( !v18 )
        {
          v40 = sub_21FFEF0(0, v32);
          sub_21FFD90(v40, 0);
        }
      }
      if ( v19 >= sortStatusList[6] )
        goto LABEL_43;
      v33 = &sortStatusList[2 * v19];
      *((_QWORD *)v33 + 4) = v25;
      sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v33 + 8), (int32_t)v25, v26, v27, v28, v29, v30, v31);
      v34 = FriendOperationItemListViewManager_TypeInfo->static_fields->sortStatusList;
      if ( !v34 )
        goto LABEL_42;
      if ( v19 >= LODWORD(v34->max_length) )
LABEL_43:
        sub_21FFED4(v18);
      v35 = &v34->obj.klass + v19;
      v36 = (ListViewSort_o *)v35[4];
      if ( !v36 )
        goto LABEL_42;
      ListViewSort__ClassFilterOFF((ListViewSort_o *)v35[4], 0);
      if ( !classPos )
      {
LABEL_29:
        for ( i = 9; ; ++i )
        {
          v18 = FriendOperationItemListViewManager_TypeInfo;
          if ( !*(&FriendOperationItemListViewManager_TypeInfo->_2.cctor_finished + 1) )
          {
            j_il2cpp_runtime_class_init_0(FriendOperationItemListViewManager_TypeInfo, v16, v17);
            v18 = FriendOperationItemListViewManager_TypeInfo;
          }
          classFilter = v18->static_fields->classFilter;
          if ( !classFilter )
            break;
          if ( i - 8 >= SLODWORD(classFilter->max_length) )
            goto LABEL_27;
          if ( !*(&v18->_2.cctor_finished + 1) )
          {
            j_il2cpp_runtime_class_init_0(v18, v16, v17);
            classFilter = FriendOperationItemListViewManager_TypeInfo->static_fields->classFilter;
            if ( !classFilter )
              break;
          }
          if ( i - 8 >= (unsigned __int64)LODWORD(classFilter->max_length) )
            goto LABEL_43;
          ListViewSort__SetFilter(v36, *((_DWORD *)&classFilter->obj.klass + i), 1, 0);
        }
LABEL_42:
        sub_21FFECC(v18, v16);
      }
      v18 = FriendOperationItemListViewManager_TypeInfo;
      if ( !*(&FriendOperationItemListViewManager_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(FriendOperationItemListViewManager_TypeInfo, v16, v17);
        v18 = FriendOperationItemListViewManager_TypeInfo;
      }
      v37 = v18->static_fields->classFilter;
      if ( !v37 )
        goto LABEL_42;
      if ( SLODWORD(v37->max_length) <= classPos )
        goto LABEL_29;
      if ( !*(&v18->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(v18, v16, v17);
        v37 = FriendOperationItemListViewManager_TypeInfo->static_fields->classFilter;
        if ( !v37 )
          goto LABEL_42;
      }
      if ( LODWORD(v37->max_length) <= classPos )
        goto LABEL_43;
      ListViewSort__SetFilter(v36, v37->m_Items[classPos], 1, 0);
      v18 = FriendOperationItemListViewManager_TypeInfo;
LABEL_27:
      ++v19;
    }
    while ( v21 != 10 );
    if ( !*(&v18->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v18, v16, v17);
      v18 = FriendOperationItemListViewManager_TypeInfo;
    }
    v18->static_fields->isInitSystem = 1;
  }
}


void FriendOperationItemListViewManager__DeleteContinueData(const MethodInfo *method)
{
  const MethodInfo *v1; // x1
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x20
  FriendOperationItemListViewManager_c *v6; // x0
  struct ListViewSort_array *sortStatusList; // x8

  if ( (byte_5932F2D & 1) == 0 )
  {
    sub_21FFC50(&FriendOperationItemListViewManager_TypeInfo);
    byte_5932F2D = 1;
  }
  if ( !*(&FriendOperationItemListViewManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(FriendOperationItemListViewManager_TypeInfo, v1, v2);
  FriendOperationItemListViewManager__CreateSorteData(0, v1);
  v5 = 4;
  do
  {
    v6 = FriendOperationItemListViewManager_TypeInfo;
    if ( !*(&FriendOperationItemListViewManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(FriendOperationItemListViewManager_TypeInfo, v3, v4);
      v6 = FriendOperationItemListViewManager_TypeInfo;
    }
    sortStatusList = v6->static_fields->sortStatusList;
    if ( !sortStatusList )
      goto LABEL_13;
    if ( (unsigned int)(v5 - 4) >= LODWORD(sortStatusList->max_length) )
      sub_21FFED4(v6);
    v6 = (FriendOperationItemListViewManager_c *)*((_QWORD *)&sortStatusList->obj.klass + v5);
    if ( !v6 )
LABEL_13:
      sub_21FFECC(v6, v3);
    ListViewSort__DeleteContinueData((ListViewSort_o *)v6, 0);
    ++v5;
  }
  while ( (_DWORD)v5 != 14 );
}


void FriendOperationItemListViewManager__DestroyList(
        FriendOperationItemListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  ListViewSort_o *sort; // x0

  ListViewManager__DestroyList((ListViewManager_o *)this, 0);
  sort = this->fields.sort;
  if ( !sort )
    sub_21FFECC(0, v3);
  ListViewSort__Save(sort, 0);
}


void FriendOperationItemListViewManager__EndCloseClassBoardEffectListDialog(
        FriendOperationItemListViewManager_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_5932F42 & 1) == 0 )
  {
    sub_21FFC50(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_5932F42 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_21FFECC(0, v4);
  CommonUI__CloseClassBoardEffectListDialog((CommonUI_o *)Instance, 0, 0);
  this->fields.isInput = 1;
}


FriendOperationItemListViewItem_o *FriendOperationItemListViewManager__GetItem(
        FriendOperationItemListViewManager_o *this,
        int32_t index,
        const MethodInfo *method)
{
  FriendOperationItemListViewItem_o *result; // x0
  __int64 naturalAligment; // x10

  if ( (byte_5932F33 & 1) == 0 )
  {
    sub_21FFC50(&FriendOperationItemListViewItem_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    byte_5932F33 = 1;
  }
  result = (FriendOperationItemListViewItem_o *)this->fields.itemList;
  if ( result )
  {
    result = (FriendOperationItemListViewItem_o *)System_Collections_Generic_List_object___get_Item(
                                                    (System_Collections_Generic_List_object__o *)result,
                                                    index,
                                                    (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    if ( result )
    {
      naturalAligment = FriendOperationItemListViewItem_TypeInfo->_2.naturalAligment;
      if ( result->klass->_2.naturalAligment >= (unsigned int)naturalAligment )
      {
        if ( (FriendOperationItemListViewItem_c *)result->klass->_2.typeHierarchy[naturalAligment - 1] != FriendOperationItemListViewItem_TypeInfo )
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


void FriendOperationItemListViewManager__InitLoad(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  FriendOperationItemListViewManager_c *v3; // x0
  __int64 v4; // x20
  FriendOperationItemListViewManager_c *v5; // x0
  struct ListViewSort_array *sortStatusList; // x8

  if ( (byte_5932F2E & 1) == 0 )
  {
    sub_21FFC50(&FriendOperationItemListViewManager_TypeInfo);
    byte_5932F2E = 1;
  }
  v3 = FriendOperationItemListViewManager_TypeInfo;
  if ( !*(&FriendOperationItemListViewManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(FriendOperationItemListViewManager_TypeInfo, v1, v2);
    v3 = FriendOperationItemListViewManager_TypeInfo;
  }
  if ( v3->static_fields->isInitSystem )
  {
    v4 = 4;
    do
    {
      v5 = FriendOperationItemListViewManager_TypeInfo;
      if ( !*(&FriendOperationItemListViewManager_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(FriendOperationItemListViewManager_TypeInfo, v1, v2);
        v5 = FriendOperationItemListViewManager_TypeInfo;
      }
      sortStatusList = v5->static_fields->sortStatusList;
      if ( !sortStatusList )
        goto LABEL_14;
      if ( (unsigned int)(v4 - 4) >= LODWORD(sortStatusList->max_length) )
        sub_21FFED4(v5);
      v5 = (FriendOperationItemListViewManager_c *)*((_QWORD *)&sortStatusList->obj.klass + v4);
      if ( !v5 )
LABEL_14:
        sub_21FFECC(v5, v1);
      ListViewSort__InitLoad((ListViewSort_o *)v5, 0);
      ++v4;
    }
    while ( (_DWORD)v4 != 14 );
  }
}


void FriendOperationItemListViewManager__OnClickListView(
        FriendOperationItemListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  struct FriendOperationItemListViewManager_CallbackFunc_o *callbackFunc; // x20
  __int64 v10; // x0
  __int64 v11; // x1
  __int64 Index; // x2

  callbackFunc = this->fields.callbackFunc;
  this->fields.callbackFunc = 0;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.callbackFunc,
    0,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  if ( callbackFunc )
  {
    if ( !obj )
      sub_21FFECC(v10, v11);
    Index = (unsigned int)ListViewObject__get_Index(obj, 0);
    ((void (__fastcall *)(intptr_t, _QWORD, __int64, intptr_t))callbackFunc->fields.invoke_impl)(
      callbackFunc->fields.method_code,
      0,
      Index,
      callbackFunc->fields.method);
  }
}


void FriendOperationItemListViewManager__OnClickListViewAccept(
        FriendOperationItemListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  struct FriendOperationItemListViewManager_CallbackFunc_o *callbackFunc; // x20
  __int64 v10; // x0
  __int64 v11; // x1
  __int64 Index; // x2

  callbackFunc = this->fields.callbackFunc;
  this->fields.callbackFunc = 0;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.callbackFunc,
    0,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  if ( callbackFunc )
  {
    if ( !obj )
      sub_21FFECC(v10, v11);
    Index = (unsigned int)ListViewObject__get_Index(obj, 0);
    ((void (__fastcall *)(intptr_t, __int64, __int64, intptr_t))callbackFunc->fields.invoke_impl)(
      callbackFunc->fields.method_code,
      5,
      Index,
      callbackFunc->fields.method);
  }
}


void FriendOperationItemListViewManager__OnClickListViewCancel(
        FriendOperationItemListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  struct FriendOperationItemListViewManager_CallbackFunc_o *callbackFunc; // x20
  __int64 v10; // x0
  __int64 v11; // x1
  __int64 Index; // x2

  callbackFunc = this->fields.callbackFunc;
  this->fields.callbackFunc = 0;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.callbackFunc,
    0,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  if ( callbackFunc )
  {
    if ( !obj )
      sub_21FFECC(v10, v11);
    Index = (unsigned int)ListViewObject__get_Index(obj, 0);
    ((void (__fastcall *)(intptr_t, __int64, __int64, intptr_t))callbackFunc->fields.invoke_impl)(
      callbackFunc->fields.method_code,
      7,
      Index,
      callbackFunc->fields.method);
  }
}


void FriendOperationItemListViewManager__OnClickListViewOffer(
        FriendOperationItemListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  struct FriendOperationItemListViewManager_CallbackFunc_o *callbackFunc; // x20
  __int64 v10; // x0
  __int64 v11; // x1
  __int64 Index; // x2

  callbackFunc = this->fields.callbackFunc;
  this->fields.callbackFunc = 0;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.callbackFunc,
    0,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  if ( callbackFunc )
  {
    if ( !obj )
      sub_21FFECC(v10, v11);
    Index = (unsigned int)ListViewObject__get_Index(obj, 0);
    ((void (__fastcall *)(intptr_t, __int64, __int64, intptr_t))callbackFunc->fields.invoke_impl)(
      callbackFunc->fields.method_code,
      4,
      Index,
      callbackFunc->fields.method);
  }
}


void FriendOperationItemListViewManager__OnClickListViewReject(
        FriendOperationItemListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  struct FriendOperationItemListViewManager_CallbackFunc_o *callbackFunc; // x20
  __int64 v10; // x0
  __int64 v11; // x1
  __int64 Index; // x2

  callbackFunc = this->fields.callbackFunc;
  this->fields.callbackFunc = 0;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.callbackFunc,
    0,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  if ( callbackFunc )
  {
    if ( !obj )
      sub_21FFECC(v10, v11);
    Index = (unsigned int)ListViewObject__get_Index(obj, 0);
    ((void (__fastcall *)(intptr_t, __int64, __int64, intptr_t))callbackFunc->fields.invoke_impl)(
      callbackFunc->fields.method_code,
      6,
      Index,
      callbackFunc->fields.method);
  }
}


void FriendOperationItemListViewManager__OnClickListViewRemove(
        FriendOperationItemListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  struct FriendOperationItemListViewManager_CallbackFunc_o *callbackFunc; // x20
  __int64 v10; // x0
  __int64 v11; // x1
  __int64 Index; // x2

  callbackFunc = this->fields.callbackFunc;
  this->fields.callbackFunc = 0;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.callbackFunc,
    0,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  if ( callbackFunc )
  {
    if ( !obj )
      sub_21FFECC(v10, v11);
    Index = (unsigned int)ListViewObject__get_Index(obj, 0);
    ((void (__fastcall *)(intptr_t, __int64, __int64, intptr_t))callbackFunc->fields.invoke_impl)(
      callbackFunc->fields.method_code,
      8,
      Index,
      callbackFunc->fields.method);
  }
}


void FriendOperationItemListViewManager__OnClickSkill1ListView(
        FriendOperationItemListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  ;
}


void FriendOperationItemListViewManager__OnClickSkill2ListView(
        FriendOperationItemListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  ;
}


void FriendOperationItemListViewManager__OnClickSkill3ListView(
        FriendOperationItemListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  ;
}


void FriendOperationItemListViewManager__OnClickSortAscendingOrder(
        FriendOperationItemListViewManager_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x0
  __int64 v6; // x1
  struct ListViewSort_o *sort; // x8

  if ( (byte_5932F3D & 1) == 0 )
  {
    sub_21FFC50(&Method_FriendOperationItemListViewManager_OnClickSortAscendingOrder__);
    byte_5932F3D = 1;
  }
  if ( this->fields.isInput )
  {
    v3 = Method_FriendOperationItemListViewManager_OnClickSortAscendingOrder__;
    if ( (*((_BYTE *)Method_FriendOperationItemListViewManager_OnClickSortAscendingOrder__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_21FFC68(Method_FriendOperationItemListViewManager_OnClickSortAscendingOrder__);
    v4 = (System_Reflection_MethodBase_o *)sub_21FFC34(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    sort = this->fields.sort;
    if ( !sort )
      sub_21FFECC(v5, v6);
    sort->fields.isAscendingOrder ^= 1u;
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, 3, 0);
  }
}


void FriendOperationItemListViewManager__OnClickSortKind(
        FriendOperationItemListViewManager_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  int32_t menuKind; // w8
  Il2CppObject *v6; // x21
  ListViewSort_o *sort; // x20
  OtherUserSortDialog_CallbackFunc_o *v8; // x22
  __int64 v9; // x0
  __int64 v10; // x1
  CommonUI_o *v11; // x0
  int32_t v12; // w1
  Il2CppObject *Instance; // x21

  if ( (byte_5932F3B & 1) == 0 )
  {
    sub_21FFC50(&OtherUserSortDialog_CallbackFunc_TypeInfo);
    sub_21FFC50(&Method_FriendOperationItemListViewManager_CloseSortDialog__);
    sub_21FFC50(&Method_FriendOperationItemListViewManager_OnClickSortKind__);
    sub_21FFC50(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_5932F3B = 1;
  }
  if ( this->fields.isInput )
  {
    v3 = Method_FriendOperationItemListViewManager_OnClickSortKind__;
    if ( (*((_BYTE *)Method_FriendOperationItemListViewManager_OnClickSortKind__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_21FFC68(Method_FriendOperationItemListViewManager_OnClickSortKind__);
    v4 = (System_Reflection_MethodBase_o *)sub_21FFC34(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    menuKind = this->fields.menuKind;
    if ( menuKind == 2 )
    {
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      sort = this->fields.sort;
      v8 = (OtherUserSortDialog_CallbackFunc_o *)sub_21FFEBC(OtherUserSortDialog_CallbackFunc_TypeInfo);
      OtherUserSortDialog_CallbackFunc___ctor(
        v8,
        (Il2CppObject *)this,
        Method_FriendOperationItemListViewManager_CloseSortDialog__,
        0);
      if ( Instance )
      {
        v11 = (CommonUI_o *)Instance;
        v12 = 2;
        goto LABEL_13;
      }
LABEL_14:
      sub_21FFECC(v9, v10);
    }
    if ( menuKind == 3 )
    {
      v6 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      sort = this->fields.sort;
      v8 = (OtherUserSortDialog_CallbackFunc_o *)sub_21FFEBC(OtherUserSortDialog_CallbackFunc_TypeInfo);
      OtherUserSortDialog_CallbackFunc___ctor(
        v8,
        (Il2CppObject *)this,
        Method_FriendOperationItemListViewManager_CloseSortDialog__,
        0);
      if ( v6 )
      {
        v11 = (CommonUI_o *)v6;
        v12 = 1;
LABEL_13:
        CommonUI__OpenOtherUserSortDialog(v11, v12, sort, v8, 0);
        return;
      }
      goto LABEL_14;
    }
  }
}


void FriendOperationItemListViewManager__OnLongPushAppendSkill1ListView(
        FriendOperationItemListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  FriendOperationItemListViewManager__OnLongPushSkill(this, obj, 13, v3);
}


void FriendOperationItemListViewManager__OnLongPushAppendSkill2ListView(
        FriendOperationItemListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  FriendOperationItemListViewManager__OnLongPushSkill(this, obj, 14, v3);
}


void FriendOperationItemListViewManager__OnLongPushAppendSkill3ListView(
        FriendOperationItemListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  FriendOperationItemListViewManager__OnLongPushSkill(this, obj, 15, v3);
}


void FriendOperationItemListViewManager__OnLongPushAppendSkill4ListView(
        FriendOperationItemListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  FriendOperationItemListViewManager__OnLongPushSkill(this, obj, 16, v3);
}


void FriendOperationItemListViewManager__OnLongPushAppendSkill5ListView(
        FriendOperationItemListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  FriendOperationItemListViewManager__OnLongPushSkill(this, obj, 17, v3);
}


void FriendOperationItemListViewManager__OnLongPushServantEquip(
        FriendOperationItemListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  struct FriendOperationItemListViewManager_CallbackFunc_o *callbackFunc; // x20
  __int64 v10; // x0
  __int64 v11; // x1
  __int64 Index; // x2

  callbackFunc = this->fields.callbackFunc;
  this->fields.callbackFunc = 0;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.callbackFunc,
    0,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  if ( callbackFunc )
  {
    if ( !obj )
      sub_21FFECC(v10, v11);
    Index = (unsigned int)ListViewObject__get_Index(obj, 0);
    ((void (__fastcall *)(intptr_t, __int64, __int64, intptr_t))callbackFunc->fields.invoke_impl)(
      callbackFunc->fields.method_code,
      12,
      Index,
      callbackFunc->fields.method);
  }
}


void FriendOperationItemListViewManager__OnLongPushSkill(
        FriendOperationItemListViewManager_o *this,
        ListViewObject_o *obj,
        int32_t kind,
        const MethodInfo *method)
{
  UIScrollView_o *scrollView; // x0
  struct FriendOperationItemListViewManager_CallbackFunc_o *callbackFunc; // x22
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7
  __int64 Index; // x2

  if ( (byte_5932F3A & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_13157/*"ScrollViewEnabled"*/);
    byte_5932F3A = 1;
  }
  if ( this->fields.isInput )
  {
    scrollView = this->fields.scrollView;
    if ( !scrollView )
      goto LABEL_10;
    UIScrollView__Press(scrollView, 0, 0);
    scrollView = this->fields.scrollView;
    if ( !scrollView )
      goto LABEL_10;
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)scrollView, 0, 0);
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_13157/*"ScrollViewEnabled"*/,
      0.1,
      0);
    callbackFunc = this->fields.callbackFunc;
    this->fields.callbackFunc = 0;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.callbackFunc, 0, v9, v10, v11, v12, v13, v14);
    if ( callbackFunc )
    {
      if ( obj )
      {
        Index = (unsigned int)ListViewObject__get_Index(obj, 0);
        ((void (__fastcall *)(intptr_t, _QWORD, __int64, intptr_t))callbackFunc->fields.invoke_impl)(
          callbackFunc->fields.method_code,
          (unsigned int)kind,
          Index,
          callbackFunc->fields.method);
        return;
      }
LABEL_10:
      sub_21FFECC(scrollView, obj);
    }
  }
}


void FriendOperationItemListViewManager__OnLongPushSkill1ListView(
        FriendOperationItemListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  FriendOperationItemListViewManager__OnLongPushSkill(this, obj, 1, v3);
}


void FriendOperationItemListViewManager__OnLongPushSkill2ListView(
        FriendOperationItemListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  FriendOperationItemListViewManager__OnLongPushSkill(this, obj, 2, v3);
}


void FriendOperationItemListViewManager__OnLongPushSkill3ListView(
        FriendOperationItemListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  FriendOperationItemListViewManager__OnLongPushSkill(this, obj, 3, v3);
}


void FriendOperationItemListViewManager__OnMoveEnd(
        FriendOperationItemListViewManager_o *this,
        const MethodInfo *method)
{
  int32_t callbackCount; // w8
  bool v4; // vf
  int32_t v5; // w8
  UnityEngine_GameObject_o *emptyMessageBase; // x0
  __int64 v7; // x1
  __int64 v8; // x2
  struct System_Collections_Generic_List_ListViewItem__o *itemSortList; // x8
  UnityEngine_Object_o *scrollView; // x20
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  struct System_Action_o *callbackFunc2; // x20

  if ( (byte_5932F39 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_5932F39 = 1;
  }
  callbackCount = this->fields.callbackCount;
  v4 = __OFSUB__(callbackCount, 1);
  v5 = callbackCount - 1;
  if ( v5 < 0 == v4 )
  {
    this->fields.callbackCount = v5;
    if ( !v5 )
    {
      ListViewManager__DragMaskEnd((ListViewManager_o *)this, 0);
      if ( this->fields.initMode == 1 )
      {
        itemSortList = this->fields.itemSortList;
        if ( !itemSortList )
          goto LABEL_18;
        emptyMessageBase = this->fields.emptyMessageBase;
        if ( !emptyMessageBase )
          goto LABEL_18;
        UnityEngine_GameObject__SetActive(emptyMessageBase, itemSortList->fields._size < 1, 0);
      }
      scrollView = (UnityEngine_Object_o *)this->fields.scrollView;
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7, v8);
      if ( !UnityEngine_Object__op_Inequality(scrollView, 0, 0) )
        goto LABEL_16;
      emptyMessageBase = (UnityEngine_GameObject_o *)this->fields.scrollView;
      if ( emptyMessageBase )
      {
        ((void (__fastcall *)(UnityEngine_GameObject_o *, __int64, Il2CppClass *))emptyMessageBase->klass[1]._1.element_class)(
          emptyMessageBase,
          1,
          emptyMessageBase->klass[1]._1.castClass);
        emptyMessageBase = (UnityEngine_GameObject_o *)this->fields.scrollView;
        if ( emptyMessageBase )
        {
          UIScrollView__UpdatePosition((UIScrollView_o *)emptyMessageBase, 0);
          this->fields.isScrollRefresh = 1;
LABEL_16:
          callbackFunc2 = this->fields.callbackFunc2;
          this->fields.callbackFunc2 = 0;
          sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.callbackFunc2, 0, v11, v12, v13, v14, v15, v16);
          if ( callbackFunc2 )
            ((void (__fastcall *)(intptr_t, intptr_t))callbackFunc2->fields.invoke_impl)(
              callbackFunc2->fields.method_code,
              callbackFunc2->fields.method);
          return;
        }
      }
LABEL_18:
      sub_21FFECC(emptyMessageBase, v7);
    }
  }
}


void FriendOperationItemListViewManager__OpenSupportClassBoard(
        FriendOperationItemListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  FriendOperationItemListViewManager_o *v4; // x19
  System_Collections_Generic_List_object__o *itemList; // x21
  int32_t Index; // w0
  Il2CppObject *Item; // x0
  FriendOperationItemListViewItem_o *v8; // x20
  __int64 naturalAligment; // x10
  _QWORD *v10; // x0
  System_Reflection_MethodBase_o *v11; // x0
  __int64 v12; // x1
  __int64 v13; // x2
  Il2CppObject *Master_object; // x21
  const MethodInfo *v15; // x1
  int32_t scrollView; // w23
  struct OtherUserGameEntity_o *otherUserGameEntity; // x8
  struct ClassBoardInfo_array *userClassBoardInfo; // x24
  int max_length; // w8
  int32_t v20; // w21
  unsigned int v21; // w25
  __int64 v22; // x22
  System_String_o *v23; // x2
  System_String_o *v24; // x3
  int32_t v25; // w4
  int32_t v26; // w5
  bool v27; // w6
  bool v28; // w7
  long double v29; // q0
  _QWORD *v30; // x23
  __int64 v31; // x8
  __int64 v32; // x0
  __int64 v33; // x0
  __int64 *v34; // x8
  __int64 v35; // x1
  __int64 v36; // x1
  System_String_o *v37; // x2
  System_String_o *v38; // x3
  int32_t v39; // w4
  int32_t v40; // w5
  bool v41; // w6
  bool v42; // w7
  long double v43; // q0
  _QWORD *v44; // x23
  __int64 v45; // x8
  __int64 v46; // x0
  __int64 v47; // x0
  __int64 *v48; // x8
  __int64 v49; // x1
  Il2CppObject *Instance; // x23
  System_Action_o *v51; // x24
  struct OtherUserGameEntity_o *v52; // x8

  v4 = this;
  if ( (byte_5932F41 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_System_Array_Empty_int___);
    sub_21FFC50(&ClassBoardInfo_TypeInfo);
    sub_21FFC50(&Method_DataManager_GetMaster_ClassBoardClassMaster___);
    sub_21FFC50(&Method_DataManager_GetMaster_ServantMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_21FFC50(&FriendOperationItemListViewItem_TypeInfo);
    sub_21FFC50(&Method_FriendOperationItemListViewManager_EndCloseClassBoardEffectListDialog__);
    sub_21FFC50(&Method_FriendOperationItemListViewManager_OpenSupportClassBoard__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    this = (FriendOperationItemListViewManager_o *)sub_21FFC50(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_5932F41 = 1;
  }
  if ( v4->fields.isInput )
  {
    itemList = (System_Collections_Generic_List_object__o *)v4->fields.itemList;
    if ( itemList )
    {
      if ( !obj )
        goto LABEL_47;
      Index = ListViewObject__get_Index(obj, 0);
      Item = System_Collections_Generic_List_object___get_Item(
               itemList,
               Index,
               (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
      if ( Item )
      {
        v8 = (FriendOperationItemListViewItem_o *)Item;
        naturalAligment = FriendOperationItemListViewItem_TypeInfo->_2.naturalAligment;
        if ( Item->klass->_2.naturalAligment >= (unsigned int)naturalAligment
          && (FriendOperationItemListViewItem_c *)Item->klass->_2.typeHierarchy[naturalAligment - 1] == FriendOperationItemListViewItem_TypeInfo )
        {
          v4->fields.isInput = 0;
          v10 = Method_FriendOperationItemListViewManager_OpenSupportClassBoard__;
          if ( (*((_BYTE *)Method_FriendOperationItemListViewManager_OpenSupportClassBoard__ + 83) & 2) != 0 )
            v10 = (_QWORD *)sub_21FFC68(Method_FriendOperationItemListViewManager_OpenSupportClassBoard__);
          v11 = (System_Reflection_MethodBase_o *)sub_21FFC34(v10, v10[4]);
          OverwriteAssetSoundName__PlaySystemSe(v11, 0, 0, 0);
          if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v12, v13);
          Master_object = DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_ServantMaster___);
          this = (FriendOperationItemListViewManager_o *)FriendOperationItemListViewItem__get_SvtId(v8, v15);
          if ( !Master_object )
            goto LABEL_47;
          this = (FriendOperationItemListViewManager_o *)DataMasterBase_object__object__int___GetEntity(
                                                           (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                                           (int32_t)this,
                                                           (const MethodInfo_3EDD388 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
          if ( !this )
            goto LABEL_47;
          scrollView = (int32_t)this->fields.scrollView;
          this = (FriendOperationItemListViewManager_o *)DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_ClassBoardClassMaster___);
          if ( !this )
            goto LABEL_47;
          this = (FriendOperationItemListViewManager_o *)ClassBoardClassMaster__GetClassBoardBaseId(
                                                           (ClassBoardClassMaster_o *)this,
                                                           scrollView,
                                                           0);
          otherUserGameEntity = v8->fields.otherUserGameEntity;
          if ( !otherUserGameEntity )
            goto LABEL_47;
          userClassBoardInfo = otherUserGameEntity->fields.userClassBoardInfo;
          if ( !userClassBoardInfo )
            goto LABEL_47;
          max_length = userClassBoardInfo->max_length;
          v20 = (int)this;
          if ( max_length >= 1 )
          {
            v21 = 0;
            do
            {
              if ( v21 >= max_length )
                sub_21FFED4(this);
              v22 = (__int64)userClassBoardInfo->m_Items[v21];
              if ( !v22 )
                goto LABEL_47;
              if ( *(_DWORD *)(v22 + 16) == v20 )
              {
                this = (FriendOperationItemListViewManager_o *)ClassBoardInfo__IsReleasedClassId(
                                                                 (ClassBoardInfo_o *)v22,
                                                                 scrollView,
                                                                 0);
                if ( ((unsigned __int8)this & 1) != 0 )
                  goto LABEL_43;
              }
              max_length = userClassBoardInfo->max_length;
            }
            while ( (int)++v21 < max_length );
          }
          v22 = sub_21FFEBC(ClassBoardInfo_TypeInfo);
          ClassBoardInfo___ctor((ClassBoardInfo_o *)v22, 0);
          if ( !v22 )
            goto LABEL_47;
          *(_DWORD *)(v22 + 16) = v20;
          v30 = Method_System_Array_Empty_int___;
          v31 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
          if ( !v31 )
          {
            sub_2237B54(Method_System_Array_Empty_int___);
            v31 = v30[7];
          }
          v32 = *(_QWORD *)(v31 + 16);
          if ( (*(_WORD *)(v32 + 309) & 1) == 0 )
            v32 = sub_2237AF8(v29);
          if ( !*(_DWORD *)(v32 + 228) )
            *(__n128 *)&v29 = j_il2cpp_runtime_class_init_0(v32, obj, v23);
          v33 = *(_QWORD *)(v30[7] + 16LL);
          if ( (*(_WORD *)(v33 + 309) & 1) == 0 )
            v33 = sub_2237AF8(v29);
          v34 = *(__int64 **)(v33 + 184);
          v35 = *v34;
          *(_QWORD *)(v22 + 24) = *v34;
          sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v22 + 24), v35, v23, v24, v25, v26, v27, v28);
          v44 = Method_System_Array_Empty_int___;
          v45 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
          if ( !v45 )
          {
            sub_2237B54(Method_System_Array_Empty_int___);
            v45 = v44[7];
          }
          v46 = *(_QWORD *)(v45 + 16);
          if ( (*(_WORD *)(v46 + 309) & 1) == 0 )
            v46 = sub_2237AF8(v43);
          if ( !*(_DWORD *)(v46 + 228) )
            *(__n128 *)&v43 = j_il2cpp_runtime_class_init_0(v46, v36, v37);
          v47 = *(_QWORD *)(v44[7] + 16LL);
          if ( (*(_WORD *)(v47 + 309) & 1) == 0 )
            v47 = sub_2237AF8(v43);
          v48 = *(__int64 **)(v47 + 184);
          v49 = *v48;
          *(_QWORD *)(v22 + 32) = *v48;
          sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v22 + 32), v49, v37, v38, v39, v40, v41, v42);
LABEL_43:
          Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          v51 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
          System_Action___ctor(
            v51,
            (Il2CppObject *)v4,
            Method_FriendOperationItemListViewManager_EndCloseClassBoardEffectListDialog__,
            0);
          v52 = v8->fields.otherUserGameEntity;
          if ( !v52 || !Instance )
LABEL_47:
            sub_21FFECC(this, obj);
          CommonUI__OpenClassBoardEffectListDialog(
            (CommonUI_o *)Instance,
            1,
            v20,
            0,
            v51,
            1,
            (ClassBoardInfo_o *)v22,
            0,
            0,
            v52->fields.followerClassStatistics,
            0,
            0);
        }
      }
    }
  }
}


void FriendOperationItemListViewManager__RequestInto(
        FriendOperationItemListViewManager_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  System_Collections_Generic_List_FriendOperationItemListViewObject__o *ObjectList; // x0
  __int64 v5; // x1
  int32_t size; // w8
  System_Collections_Generic_List_object__o *v7; // x20
  int v8; // w24
  int32_t v9; // w21
  Il2CppObject *Item; // x22
  System_Action_o *v11; // x23
  System_String_o *v12; // x1

  if ( (byte_5932F38 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_FriendOperationItemListViewManager_OnMoveEnd__);
    sub_21FFC50(&Method_System_Collections_Generic_List_FriendOperationItemListViewObject__get_Count__);
    sub_21FFC50(&Method_System_Collections_Generic_List_FriendOperationItemListViewObject__get_Item__);
    sub_21FFC50(&StringLiteral_10331/*"OnMoveEnd"*/);
    byte_5932F38 = 1;
  }
  ListViewManager__ClippingItems((ListViewManager_o *)this, 1, 0, 0);
  ListViewManager__DragMaskStart((ListViewManager_o *)this, 0);
  ObjectList = FriendOperationItemListViewManager__get_ObjectList(this, v3);
  if ( !ObjectList )
LABEL_13:
    sub_21FFECC(ObjectList, v5);
  size = ObjectList->fields._size;
  v7 = (System_Collections_Generic_List_object__o *)ObjectList;
  this->fields.callbackCount = size;
  if ( size < 1 )
    goto LABEL_12;
  v8 = 0;
  v9 = 0;
  do
  {
    Item = System_Collections_Generic_List_object___get_Item(
             v7,
             v9,
             (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_FriendOperationItemListViewObject__get_Item__);
    if ( ListViewManager__ClippingItem((ListViewManager_o *)this, (ListViewObject_o *)Item, 0) )
    {
      v11 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
      System_Action___ctor(v11, (Il2CppObject *)this, Method_FriendOperationItemListViewManager_OnMoveEnd__, 0);
      if ( !Item )
        goto LABEL_13;
      ++v8;
      FriendOperationItemListViewObject__Init_39477500((FriendOperationItemListViewObject_o *)Item, 4, v11, 0.1, 0);
    }
    else
    {
      --this->fields.callbackCount;
    }
    ++v9;
  }
  while ( v9 < v7->fields._size );
  if ( !v8 )
  {
LABEL_12:
    v12 = (System_String_o *)StringLiteral_10331/*"OnMoveEnd"*/;
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke((UnityEngine_MonoBehaviour_o *)this, v12, 0.2, 0);
  }
}


// local variable allocation has failed, the output may be wrong!
void FriendOperationItemListViewManager__RequestListObject(
        FriendOperationItemListViewManager_o *this,
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
  System_Collections_Generic_List_Enumerator_object__o v15; // [xsp+18h] [xbp-68h] BYREF

  if ( (byte_5932F36 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_FriendOperationItemListViewObject__Dispose__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_FriendOperationItemListViewObject__MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_FriendOperationItemListViewObject__get_Current__);
    sub_21FFC50(&Method_FriendOperationItemListViewManager_OnMoveEnd__);
    sub_21FFC50(&Method_System_Collections_Generic_List_FriendOperationItemListViewObject__GetEnumerator__);
    sub_21FFC50(&Method_System_Collections_Generic_List_FriendOperationItemListViewObject__get_Count__);
    sub_21FFC50(&StringLiteral_10331/*"OnMoveEnd"*/);
    byte_5932F36 = 1;
  }
  memset(&v15, 0, sizeof(v15));
  ObjectList = (System_Collections_Generic_List_object__o *)FriendOperationItemListViewManager__get_ObjectList(
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
    v10 = (const MethodInfo_4450604 *)Method_System_Collections_Generic_List_FriendOperationItemListViewObject__GetEnumerator__;
    this->fields.callbackCount = size;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v15,
      ObjectList,
      v10);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v15,
              (const MethodInfo_40C7F4C *)Method_System_Collections_Generic_List_Enumerator_FriendOperationItemListViewObject__MoveNext__) )
    {
      current = v15.fields._current;
      v12 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
      System_Action___ctor(v12, (Il2CppObject *)this, Method_FriendOperationItemListViewManager_OnMoveEnd__, 0);
      if ( !current )
        sub_21FFECC(v13, v14);
      FriendOperationItemListViewObject__Init_39477500(
        (FriendOperationItemListViewObject_o *)current,
        mode,
        v12,
        delay,
        0);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v15,
      (const MethodInfo_40C7F48 *)Method_System_Collections_Generic_List_Enumerator_FriendOperationItemListViewObject__Dispose__);
  }
}


// local variable allocation has failed, the output may be wrong!
void FriendOperationItemListViewManager__RequestListObject_39344324(
        FriendOperationItemListViewManager_o *this,
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
  __int64 v13; // [xsp+8h] [xbp-78h]
  System_Collections_Generic_List_Enumerator_object__o *v14; // [xsp+10h] [xbp-70h]
  System_Collections_Generic_List_Enumerator_object__o v15; // [xsp+18h] [xbp-68h] BYREF

  if ( (byte_5932F37 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_FriendOperationItemListViewObject__Dispose__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_FriendOperationItemListViewObject__MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_FriendOperationItemListViewObject__get_Current__);
    sub_21FFC50(&Method_FriendOperationItemListViewManager_OnMoveEnd__);
    sub_21FFC50(&Method_System_Collections_Generic_List_FriendOperationItemListViewObject__GetEnumerator__);
    sub_21FFC50(&Method_System_Collections_Generic_List_FriendOperationItemListViewObject__get_Count__);
    sub_21FFC50(&StringLiteral_10331/*"OnMoveEnd"*/);
    byte_5932F37 = 1;
  }
  memset(&v15, 0, sizeof(v15));
  ObjectList = (System_Collections_Generic_List_object__o *)FriendOperationItemListViewManager__get_ObjectList(
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
    v8 = (const MethodInfo_4450604 *)Method_System_Collections_Generic_List_FriendOperationItemListViewObject__GetEnumerator__;
    this->fields.callbackCount = size;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v15,
      ObjectList,
      v8);
    v13 = 0;
    v14 = &v15;
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v15,
              (const MethodInfo_40C7F4C *)Method_System_Collections_Generic_List_Enumerator_FriendOperationItemListViewObject__MoveNext__) )
    {
      current = v15.fields._current;
      v10 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
      System_Action___ctor(v10, (Il2CppObject *)this, Method_FriendOperationItemListViewManager_OnMoveEnd__, 0);
      if ( !current )
        sub_21FFECC(v11, v12);
      FriendOperationItemListViewObject__Init_39477600((FriendOperationItemListViewObject_o *)current, mode, v10, 0);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v15,
      (const MethodInfo_40C7F48 *)Method_System_Collections_Generic_List_Enumerator_FriendOperationItemListViewObject__Dispose__);
  }
}


void FriendOperationItemListViewManager__ScrollViewEnabled(
        FriendOperationItemListViewManager_o *this,
        const MethodInfo *method)
{
  UnityEngine_Behaviour_o *scrollView; // x0

  scrollView = (UnityEngine_Behaviour_o *)this->fields.scrollView;
  if ( !scrollView )
    sub_21FFECC(0, method);
  UnityEngine_Behaviour__set_enabled(scrollView, 1, 0);
}


void FriendOperationItemListViewManager__SetClassId(
        FriendOperationItemListViewManager_o *this,
        int32_t classPos,
        int32_t inFollowerGrandGraphId,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x0
  const MethodInfo *v8; // x3
  __int64 naturalAligment; // x10
  __int64 v10; // x1
  System_Collections_Generic_List_object__o *itemSortList; // x0
  struct ListViewSort_o *sort; // x8
  __int64 v13; // x1
  const MethodInfo *v14; // x2
  int size; // w8
  System_Collections_Generic_List_Enumerator_object__o v16; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v17; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_5932F3F & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__);
    sub_21FFC50(&FriendOperationItemListViewItem_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    byte_5932F3F = 1;
  }
  itemList = this->fields.itemList;
  memset(&v17, 0, sizeof(v17));
  if ( itemList )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v16,
      (System_Collections_Generic_List_object__o *)itemList,
      (const MethodInfo_4450604 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    v17 = v16;
    v16.fields._list = 0;
    *(_QWORD *)&v16.fields._index = &v17;
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v17,
              (const MethodInfo_40C7F4C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__) )
    {
      if ( v17.fields._current )
      {
        naturalAligment = FriendOperationItemListViewItem_TypeInfo->_2.naturalAligment;
        if ( v17.fields._current->klass->_2.naturalAligment >= (unsigned int)naturalAligment
          && (FriendOperationItemListViewItem_c *)v17.fields._current->klass->_2.typeHierarchy[naturalAligment - 1] == FriendOperationItemListViewItem_TypeInfo )
        {
          FriendOperationItemListViewItem__AnalyzeEntity(
            (FriendOperationItemListViewItem_o *)v17.fields._current,
            classPos,
            inFollowerGrandGraphId,
            v8);
        }
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v17,
      (const MethodInfo_40C7F48 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    itemSortList = (System_Collections_Generic_List_object__o *)this->fields.itemSortList;
    if ( itemSortList )
    {
      sort = this->fields.sort;
      if ( sort )
      {
        if ( sort->fields.sortKind != 11 || sort->fields.priorityKind )
        {
          ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, 3, 0);
          return;
        }
        System_Collections_Generic_List_object___GetEnumerator(
          (System_Collections_Generic_List_Enumerator_T__o *)&v16,
          itemSortList,
          (const MethodInfo_4450604 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
        v17 = v16;
        v16.fields._list = 0;
        *(_QWORD *)&v16.fields._index = &v17;
        while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
                  &v17,
                  (const MethodInfo_40C7F4C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__) )
        {
          if ( !v17.fields._current )
            sub_21FFECC(0, v13);
          v17.fields._current->klass->vtable[4].methodPtr();
        }
        sub_1FEBF90(&v16);
        itemSortList = (System_Collections_Generic_List_object__o *)this->fields.itemSortList;
        if ( itemSortList )
        {
          if ( itemSortList->fields._size < 1 )
            goto LABEL_30;
          itemSortList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                        itemSortList,
                                                                        0,
                                                                        (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
          if ( !itemSortList )
            goto LABEL_31;
          LOBYTE(itemSortList[2].fields._items) = 1;
          itemSortList = (System_Collections_Generic_List_object__o *)this->fields.itemSortList;
          if ( !itemSortList )
            goto LABEL_31;
          itemSortList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                        itemSortList,
                                                                        itemSortList->fields._size - 1,
                                                                        (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
          if ( !itemSortList )
            goto LABEL_31;
          LOBYTE(itemSortList[2].fields._items) = 1;
          itemSortList = (System_Collections_Generic_List_object__o *)this->fields.itemSortList;
          if ( !itemSortList )
            goto LABEL_31;
          size = itemSortList->fields._size;
          if ( size < 3 )
          {
LABEL_30:
            FriendOperationItemListViewManager__SetMode_39343356(this, 5, v14);
            return;
          }
          itemSortList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                        itemSortList,
                                                                        size - 1,
                                                                        (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
          if ( itemSortList )
          {
            BYTE1(itemSortList[2].fields._items) = 1;
            goto LABEL_30;
          }
        }
      }
LABEL_31:
      sub_21FFECC(itemSortList, v10);
    }
  }
}


void FriendOperationItemListViewManager__SetMode(
        FriendOperationItemListViewManager_o *this,
        int32_t mode,
        FriendOperationItemListViewManager_CallbackFunc_o *callback,
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
  FriendOperationItemListViewManager__SetMode_39343356(this, mode, v10);
}


// local variable allocation has failed, the output may be wrong!
void FriendOperationItemListViewManager__SetMode_39343356(
        FriendOperationItemListViewManager_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *ObjectList; // x0
  __int64 v6; // x1
  int32_t size; // w8
  System_Collections_Generic_List_object__o *v8; // x20
  int32_t v9; // w21
  Il2CppObject *Item; // x22
  System_Action_o *v11; // x23
  const MethodInfo *v12; // x2
  const MethodInfo *v13; // x1
  int32_t v14; // w8
  System_Collections_Generic_List_object__o *v15; // x20
  int32_t v16; // w21
  Il2CppObject *v17; // x22
  System_Action_o *v18; // x23
  float v19; // s0
  UnityEngine_MonoBehaviour_o *v20; // x0
  System_String_o *v21; // x1
  const MethodInfo *v22; // x1
  int32_t v23; // w8
  System_Collections_Generic_List_object__o *v24; // x20
  int32_t v25; // w21
  Il2CppObject *v26; // x22
  System_Action_o *v27; // x23

  if ( (byte_5932F35 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_FriendOperationItemListViewManager_OnMoveEnd__);
    sub_21FFC50(&Method_System_Collections_Generic_List_FriendOperationItemListViewObject__get_Count__);
    sub_21FFC50(&Method_System_Collections_Generic_List_FriendOperationItemListViewObject__get_Item__);
    sub_21FFC50(&StringLiteral_10331/*"OnMoveEnd"*/);
    sub_21FFC50(&StringLiteral_11820/*"RequestInto"*/);
    byte_5932F35 = 1;
  }
  if ( mode == 5 )
  {
    ObjectList = (System_Collections_Generic_List_object__o *)FriendOperationItemListViewManager__get_ObjectList(
                                                                this,
                                                                *(const MethodInfo **)&mode);
    if ( !ObjectList )
      goto LABEL_32;
    size = ObjectList->fields._size;
    v8 = ObjectList;
    if ( size >= 1 )
    {
      v9 = 0;
      this->fields.callbackCount = size;
      while ( 1 )
      {
        Item = System_Collections_Generic_List_object___get_Item(
                 v8,
                 v9,
                 (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_FriendOperationItemListViewObject__get_Item__);
        v11 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
        System_Action___ctor(v11, (Il2CppObject *)this, Method_FriendOperationItemListViewManager_OnMoveEnd__, 0);
        if ( !Item )
          break;
        FriendOperationItemListViewObject__Init_39477500((FriendOperationItemListViewObject_o *)Item, 7, v11, 0.1, 0);
        if ( ++v9 >= v8->fields._size )
          return;
      }
      goto LABEL_32;
    }
    goto LABEL_30;
  }
  this->fields.initMode = mode;
  this->fields.callbackCount = ListViewManager__get_ObjectSum((ListViewManager_o *)this, 0);
  ListViewManager__set_IsInput((ListViewManager_o *)this, mode == 2, 0);
  if ( mode > 2 )
  {
    if ( mode == 3 )
    {
      ListViewManager__DragMaskStart((ListViewManager_o *)this, 0);
      ObjectList = (System_Collections_Generic_List_object__o *)FriendOperationItemListViewManager__get_ClippingObjectList(
                                                                  this,
                                                                  v22);
      if ( !ObjectList )
        goto LABEL_32;
      v23 = ObjectList->fields._size;
      v24 = ObjectList;
      if ( v23 >= 1 )
      {
        v25 = 0;
        this->fields.callbackCount = v23;
        while ( 1 )
        {
          v26 = System_Collections_Generic_List_object___get_Item(
                  v24,
                  v25,
                  (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_FriendOperationItemListViewObject__get_Item__);
          v27 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
          System_Action___ctor(v27, (Il2CppObject *)this, Method_FriendOperationItemListViewManager_OnMoveEnd__, 0);
          if ( !v26 )
            break;
          FriendOperationItemListViewObject__Init_39477500((FriendOperationItemListViewObject_o *)v26, 5, v27, 0.1, 0);
          if ( ++v25 >= v24->fields._size )
            return;
        }
LABEL_32:
        sub_21FFECC(ObjectList, v6);
      }
    }
    else
    {
      if ( mode != 4 )
        return;
      ListViewManager__DragMaskStart((ListViewManager_o *)this, 0);
      ObjectList = (System_Collections_Generic_List_object__o *)FriendOperationItemListViewManager__get_ClippingObjectList(
                                                                  this,
                                                                  v13);
      if ( !ObjectList )
        goto LABEL_32;
      v14 = ObjectList->fields._size;
      v15 = ObjectList;
      if ( v14 >= 1 )
      {
        v16 = 0;
        this->fields.callbackCount = v14;
        while ( 1 )
        {
          v17 = System_Collections_Generic_List_object___get_Item(
                  v15,
                  v16,
                  (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_FriendOperationItemListViewObject__get_Item__);
          v18 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
          System_Action___ctor(v18, (Il2CppObject *)this, Method_FriendOperationItemListViewManager_OnMoveEnd__, 0);
          if ( !v17 )
            break;
          FriendOperationItemListViewObject__Init_39477500((FriendOperationItemListViewObject_o *)v17, 6, v18, 0.1, 0);
          if ( ++v16 >= v15->fields._size )
            return;
        }
        goto LABEL_32;
      }
    }
LABEL_30:
    v20 = (UnityEngine_MonoBehaviour_o *)this;
    v19 = 0.2;
    v21 = (System_String_o *)StringLiteral_10331/*"OnMoveEnd"*/;
    this->fields.callbackCount = 1;
LABEL_31:
    UnityEngine_MonoBehaviour__Invoke(v20, v21, v19, 0);
    return;
  }
  if ( mode == 1 )
  {
    ObjectList = (System_Collections_Generic_List_object__o *)this->fields.emptyMessageBase;
    if ( !ObjectList )
      goto LABEL_32;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)ObjectList, 0, 0);
    v19 = 0.0;
    v20 = (UnityEngine_MonoBehaviour_o *)this;
    v21 = (System_String_o *)StringLiteral_11820/*"RequestInto"*/;
    goto LABEL_31;
  }
  if ( mode == 2 )
    FriendOperationItemListViewManager__RequestListObject_39344324(this, 3, v12);
}


void FriendOperationItemListViewManager__SetMode_39344272(
        FriendOperationItemListViewManager_o *this,
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
  FriendOperationItemListViewManager__SetMode_39343356(this, mode, v10);
}


void FriendOperationItemListViewManager__SetObjectItem(
        FriendOperationItemListViewManager_o *this,
        ListViewObject_o *obj,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  __int64 naturalAligment; // x10
  ListViewObject_o *v7; // x0
  int32_t v8; // w1

  if ( (byte_5932F34 & 1) == 0 )
  {
    sub_21FFC50(&FriendOperationItemListViewObject_TypeInfo);
    byte_5932F34 = 1;
  }
  if ( obj
    && (naturalAligment = FriendOperationItemListViewObject_TypeInfo->_2.naturalAligment,
        obj->klass->_2.naturalAligment >= (unsigned int)naturalAligment) )
  {
    if ( (FriendOperationItemListViewObject_c *)obj->klass->_2.typeHierarchy[naturalAligment - 1] == FriendOperationItemListViewObject_TypeInfo )
      v7 = obj;
    else
      v7 = 0;
  }
  else
  {
    v7 = 0;
  }
  if ( this->fields.initMode != 2 )
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
  FriendOperationItemListViewObject__Init_39475976((FriendOperationItemListViewObject_o *)v7, v8, 0);
}


void FriendOperationItemListViewManager__SetSortButtonImage(
        FriendOperationItemListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *sortKindLabel; // x20
  __int64 v5; // x1
  __int64 v6; // x2
  ListViewSort_o *sort; // x0
  UILabel_o *v8; // x20
  UnityEngine_Object_o *sortOrderSprite; // x20
  struct ListViewSort_o *v10; // x8
  int32_t sortKind; // w9
  System_String_o **v12; // x8
  struct ListViewSort_o *v13; // x8
  System_String_o **v14; // x9
  System_String_o **v15; // x10
  System_String_o **v16; // x8
  System_String_o **v17; // x8

  if ( (byte_5932F3E & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&StringLiteral_18253/*"btn_sort_up"*/);
    sub_21FFC50(&StringLiteral_18357/*"btn_txt_up"*/);
    sub_21FFC50(&StringLiteral_18306/*"btn_txt_new"*/);
    sub_21FFC50(&StringLiteral_18296/*"btn_txt_down"*/);
    sub_21FFC50(&StringLiteral_18314/*"btn_txt_old"*/);
    sub_21FFC50(&StringLiteral_18250/*"btn_sort_down"*/);
    byte_5932F3E = 1;
  }
  sortKindLabel = (UnityEngine_Object_o *)this->fields.sortKindLabel;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  if ( UnityEngine_Object__op_Inequality(sortKindLabel, 0, 0) )
  {
    sort = this->fields.sort;
    if ( !sort )
      goto LABEL_36;
    v8 = this->fields.sortKindLabel;
    sort = (ListViewSort_o *)ListViewSort__GetSortKindButtonText(sort, 0, 0);
    if ( !v8 )
      goto LABEL_36;
    UILabel__set_text(v8, (System_String_o *)sort, 0);
  }
  sortOrderSprite = (UnityEngine_Object_o *)this->fields.sortOrderSprite;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5, v6);
  sort = (ListViewSort_o *)UnityEngine_Object__op_Inequality(sortOrderSprite, 0, 0);
  if ( ((unsigned __int8)sort & 1) != 0 )
  {
    v10 = this->fields.sort;
    if ( !v10 )
      goto LABEL_36;
    sortKind = v10->fields.sortKind;
    if ( sortKind == 1 || sortKind == 11 || (unsigned int)(sortKind - 17) <= 1 )
    {
      sort = (ListViewSort_o *)this->fields.sortExplanationSprite;
      if ( !sort )
        goto LABEL_36;
      v12 = (System_String_o **)(v10->fields.isAscendingOrder ? &StringLiteral_18314/*"btn_txt_old"*/ : &StringLiteral_18306/*"btn_txt_new"*/);
      UISprite__set_spriteName((UISprite_o *)sort, *v12, 0);
      v13 = this->fields.sort;
      if ( !v13 )
        goto LABEL_36;
      sort = (ListViewSort_o *)this->fields.sortOrderSprite;
      if ( !sort )
        goto LABEL_36;
      v14 = (System_String_o **)&StringLiteral_18250/*"btn_sort_down"*/;
      v15 = (System_String_o **)&StringLiteral_18253/*"btn_sort_up"*/;
    }
    else
    {
      sort = (ListViewSort_o *)this->fields.sortExplanationSprite;
      if ( !sort )
        goto LABEL_36;
      v17 = (System_String_o **)(v10->fields.isAscendingOrder ? &StringLiteral_18357/*"btn_txt_up"*/ : &StringLiteral_18296/*"btn_txt_down"*/);
      UISprite__set_spriteName((UISprite_o *)sort, *v17, 0);
      v13 = this->fields.sort;
      if ( !v13 )
        goto LABEL_36;
      sort = (ListViewSort_o *)this->fields.sortOrderSprite;
      if ( !sort )
        goto LABEL_36;
      v14 = (System_String_o **)&StringLiteral_18253/*"btn_sort_up"*/;
      v15 = (System_String_o **)&StringLiteral_18250/*"btn_sort_down"*/;
    }
    if ( v13->fields.isAscendingOrder )
      v16 = v14;
    else
      v16 = v15;
    UISprite__set_spriteName((UISprite_o *)sort, *v16, 0);
    sort = (ListViewSort_o *)this->fields.sortExplanationSprite;
    if ( sort )
    {
      ((void (__fastcall *)(ListViewSort_o *, void *))sort->klass[2]._1.parent)(sort, sort->klass[2]._1.generic_class);
      return;
    }
LABEL_36:
    sub_21FFECC(sort, v5);
  }
}


// local variable allocation has failed, the output may be wrong!
void FriendOperationItemListViewManager__SetSortKind(
        FriendOperationItemListViewManager_o *this,
        int32_t kind,
        const MethodInfo *method)
{
  struct ListViewSort_o *sort; // x8

  sort = this->fields.sort;
  if ( !sort )
    sub_21FFECC(this, *(_QWORD *)&kind);
  sort->fields.sortKind = kind;
}


void FriendOperationItemListViewManager__SetupClassBoardInfo(
        FriendOperationItemListViewManager_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_int__int__o *classBoardMaxDictionary; // x0
  __int64 v4; // x1
  __int64 v5; // x2
  System_Collections_Generic_Dictionary_int__int__o *v6; // x20
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7
  System_Collections_ObjectModel_Collection_T__o *Master_object; // x0
  __int64 v14; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x0
  __int64 v16; // x1
  System_Collections_Generic_IEnumerator_T__o *i; // x20
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v19; // x9
  int *p_offset; // x10
  __int64 v21; // x0
  __int64 v22; // x0
  __int64 v23; // x1
  System_Collections_Generic_IEnumerator_T__c *v24; // x8
  __int64 v25; // x9
  int *v26; // x10
  __int64 v27; // x0
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x20
  Il2CppObject *v31; // x0
  __int64 v32; // x1
  ClassBoardSquareEntity_array *OtherThanNoneEntity; // x0
  __int64 v34; // x1
  System_Collections_Generic_IEnumerator_T__c *v35; // x8
  __int64 v36; // x9
  int *v37; // x10
  __int64 v38; // x0
  System_Collections_Generic_IEnumerator_T__o *v39; // [xsp+18h] [xbp-48h]

  if ( (byte_5932F40 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_ObjectModel_Collection_ClassBoardBaseEntity__GetEnumerator__);
    sub_21FFC50(&Method_DataManager_GetMaster_ClassBoardBaseMaster___);
    sub_21FFC50(&Method_DataManager_GetMaster_ClassBoardSquareMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&Method_DataMasterBase_ClassBoardBaseMaster__ClassBoardBaseEntity__int__getEntityList__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_int__int__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_int__int__Clear__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_int__int___ctor__);
    sub_21FFC50(&System_Collections_Generic_Dictionary_int__int__TypeInfo);
    sub_21FFC50(&System_IDisposable_TypeInfo);
    sub_21FFC50(&System_Collections_Generic_IEnumerator_ClassBoardBaseEntity__TypeInfo);
    sub_21FFC50(&System_Collections_IEnumerator_TypeInfo);
    byte_5932F40 = 1;
  }
  classBoardMaxDictionary = this->fields.classBoardMaxDictionary;
  if ( classBoardMaxDictionary )
  {
    System_Collections_Generic_Dictionary_int__int___Clear(
      classBoardMaxDictionary,
      (const MethodInfo_3F5F5F8 *)Method_System_Collections_Generic_Dictionary_int__int__Clear__);
  }
  else
  {
    v6 = (System_Collections_Generic_Dictionary_int__int__o *)sub_21FFEBC(System_Collections_Generic_Dictionary_int__int__TypeInfo);
    System_Collections_Generic_Dictionary_int__int____ctor(
      v6,
      (const MethodInfo_3F5EAD4 *)Method_System_Collections_Generic_Dictionary_int__int___ctor__);
    this->fields.classBoardMaxDictionary = v6;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)&this->fields.classBoardMaxDictionary,
      (int32_t)v6,
      v7,
      v8,
      v9,
      v10,
      v11,
      v12);
  }
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v4, v5);
  Master_object = (System_Collections_ObjectModel_Collection_T__o *)DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_ClassBoardBaseMaster___);
  if ( !Master_object
    || (Master_object = (System_Collections_ObjectModel_Collection_T__o *)Master_object[1].fields.items) == 0 )
  {
    sub_21FFECC(Master_object, v14);
  }
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 Master_object,
                 (const MethodInfo_3E61068 *)Method_System_Collections_ObjectModel_Collection_ClassBoardBaseEntity__GetEnumerator__);
  v39 = Enumerator;
  if ( !Enumerator )
    sub_21FFECC(Enumerator, v16);
  for ( i = Enumerator; ; i = v39 )
  {
    klass = i->klass;
    v19 = *(unsigned __int16 *)&i->klass->_2.rank;
    if ( *(_WORD *)&i->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v19;
        p_offset += 4;
        if ( !v19 )
          goto LABEL_16;
      }
      v21 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_16:
      v21 = sub_2237E2C(i, System_Collections_IEnumerator_TypeInfo, 0);
    }
    v22 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v21)(
            i,
            *(_QWORD *)(v21 + 8));
    if ( (v22 & 1) == 0 )
      break;
    if ( !v39 )
      sub_21FFECC(v22, v23);
    v24 = v39->klass;
    v25 = *(unsigned __int16 *)&v39->klass->_2.rank;
    if ( *(_WORD *)&v39->klass->_2.rank )
    {
      v26 = &v24->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_ClassBoardBaseEntity__c **)v26 - 1) != System_Collections_Generic_IEnumerator_ClassBoardBaseEntity__TypeInfo )
      {
        --v25;
        v26 += 4;
        if ( !v25 )
          goto LABEL_24;
      }
      v27 = (__int64)&v24->vtable[*v26];
    }
    else
    {
LABEL_24:
      v27 = sub_2237E2C(v39, System_Collections_Generic_IEnumerator_ClassBoardBaseEntity__TypeInfo, 0);
    }
    v30 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v27)(
            v39,
            *(_QWORD *)(v27 + 8));
    if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v28, v29);
    v31 = DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_ClassBoardSquareMaster___);
    if ( !v30 )
      sub_21FFECC(v31, v32);
    if ( !v31 )
      sub_21FFECC(0, v32);
    OtherThanNoneEntity = ClassBoardSquareMaster__GetOtherThanNoneEntity(
                            (ClassBoardSquareMaster_o *)v31,
                            *(_DWORD *)(v30 + 16),
                            0);
    if ( OtherThanNoneEntity )
    {
      if ( !this->fields.classBoardMaxDictionary )
        sub_21FFECC(OtherThanNoneEntity, v34);
      System_Collections_Generic_Dictionary_int__int___Add(
        this->fields.classBoardMaxDictionary,
        *(_DWORD *)(v30 + 16),
        OtherThanNoneEntity->max_length,
        (const MethodInfo_3F5F478 *)Method_System_Collections_Generic_Dictionary_int__int__Add__);
    }
  }
  if ( v39 )
  {
    v35 = v39->klass;
    v36 = *(unsigned __int16 *)&v39->klass->_2.rank;
    if ( *(_WORD *)&v39->klass->_2.rank )
    {
      v37 = &v35->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)v37 - 1) != System_IDisposable_TypeInfo )
      {
        --v36;
        v37 += 4;
        if ( !v36 )
          goto LABEL_40;
      }
      v38 = (__int64)&v35->vtable[*v37];
    }
    else
    {
LABEL_40:
      v38 = sub_2237E2C(v39, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v38)(v39, *(_QWORD *)(v38 + 8));
  }
}


void FriendOperationItemListViewManager__add_callbackFunc(
        FriendOperationItemListViewManager_o *this,
        FriendOperationItemListViewManager_CallbackFunc_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *callbackFunc; // x21
  System_Delegate_o *v6; // x0
  __int64 v7; // x2
  __int64 v8; // x3
  __int64 v9; // x0
  bool v10; // zf
  FriendOperationItemListViewManager_o *v11; // x0
  FriendOperationItemListViewManager_CallbackFunc_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_5932F28 & 1) == 0 )
  {
    sub_21FFC50(&FriendOperationItemListViewManager_CallbackFunc_TypeInfo);
    byte_5932F28 = 1;
  }
  callbackFunc = (System_Delegate_o *)this->fields.callbackFunc;
  while ( 1 )
  {
    v6 = System_Delegate__Combine(callbackFunc, (System_Delegate_o *)value, 0);
    if ( v6 )
    {
      if ( (FriendOperationItemListViewManager_CallbackFunc_c *)v6->klass != FriendOperationItemListViewManager_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_223767C(&this->fields.callbackFunc, v6, callbackFunc);
    v10 = v9 == (_QWORD)callbackFunc;
    callbackFunc = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (FriendOperationItemListViewManager_o *)sub_220024C(
                                                  v6,
                                                  FriendOperationItemListViewManager_CallbackFunc_TypeInfo,
                                                  v7,
                                                  v8);
  FriendOperationItemListViewManager__remove_callbackFunc(v11, v12, v13);
}


void FriendOperationItemListViewManager__add_callbackFunc2(
        FriendOperationItemListViewManager_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *callbackFunc2; // x21
  System_Delegate_o *v6; // x0
  __int64 v7; // x2
  __int64 v8; // x3
  __int64 v9; // x0
  bool v10; // zf
  FriendOperationItemListViewManager_o *v11; // x0
  System_Action_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_5932F2A & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    byte_5932F2A = 1;
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
  v11 = (FriendOperationItemListViewManager_o *)sub_220024C(v6, System_Action_TypeInfo, v7, v8);
  FriendOperationItemListViewManager__remove_callbackFunc2(v11, v12, v13);
}


void FriendOperationItemListViewManager__changeSortKindDisp(
        FriendOperationItemListViewManager_o *this,
        const MethodInfo *method)
{
  ((void (__fastcall *)(FriendOperationItemListViewManager_o *, const MethodInfo *))this->klass->vtable._5_SetSortButtonImage.methodPtr)(
    this,
    this->klass->vtable._5_SetSortButtonImage.method);
}


System_Collections_Generic_List_FriendOperationItemListViewObject__o *FriendOperationItemListViewManager__get_ClippingObjectList(
        FriendOperationItemListViewManager_o *this,
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
  __int64 v12; // x1
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

  if ( (byte_5932F30 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_21FFC50(&Method_UnityEngine_GameObject_GetComponent_FriendOperationItemListViewObject___);
    sub_21FFC50(&Method_System_Collections_Generic_List_FriendOperationItemListViewObject__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_21FFC50(&Method_System_Collections_Generic_List_FriendOperationItemListViewObject___ctor__);
    sub_21FFC50(&System_Collections_Generic_List_FriendOperationItemListViewObject__TypeInfo);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_5932F30 = 1;
  }
  memset(&v29, 0, sizeof(v29));
  v3 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_FriendOperationItemListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_FriendOperationItemListViewObject___ctor__);
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
                           (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_FriendOperationItemListViewObject___);
      v13 = Component_object;
      if ( !Component_object )
        sub_21FFECC(0, v12);
      Item = (ListViewItem_o *)FriendOperationItemListViewObject__GetItem(
                                 (FriendOperationItemListViewObject_o *)Component_object,
                                 0);
      if ( !Item )
        sub_21FFECC(0, 0);
      if ( Item->fields.isTermination )
      {
        v21 = ListViewManager__ClippingItem_50765052((ListViewManager_o *)this, Item, 0);
        if ( v21 )
        {
          if ( !v3
            || (items = v3->fields._items,
                v24 = Method_System_Collections_Generic_List_FriendOperationItemListViewObject__Add__,
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
              v24 = Method_System_Collections_Generic_List_FriendOperationItemListViewObject__Add__,
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
  return (System_Collections_Generic_List_FriendOperationItemListViewObject__o *)v3;
}


bool FriendOperationItemListViewManager__get_IsExistSwapLockUser(
        FriendOperationItemListViewManager_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *itemList; // x0
  int32_t i; // w20
  int32_t size; // w8
  bool v6; // w21
  Il2CppObject *Item; // x0
  __int64 v8; // x1
  __int64 naturalAligment; // x10

  if ( (byte_5932F31 & 1) == 0 )
  {
    sub_21FFC50(&FriendOperationItemListViewItem_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    byte_5932F31 = 1;
  }
  itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
  if ( !itemList )
    return 0;
  for ( i = 0; ; ++i )
  {
    size = itemList->fields._size;
    v6 = i < size;
    if ( i >= size )
      break;
    Item = System_Collections_Generic_List_object___get_Item(
             itemList,
             i,
             (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    if ( Item )
    {
      naturalAligment = FriendOperationItemListViewItem_TypeInfo->_2.naturalAligment;
      if ( Item->klass->_2.naturalAligment >= (unsigned int)naturalAligment
        && (FriendOperationItemListViewItem_c *)Item->klass->_2.typeHierarchy[naturalAligment - 1] == FriendOperationItemListViewItem_TypeInfo
        && BYTE5(Item[12].klass) )
      {
        break;
      }
    }
    itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
    if ( !itemList )
      sub_21FFECC(0, v8);
  }
  return v6;
}


System_Collections_Generic_List_FriendOperationItemListViewObject__o *FriendOperationItemListViewManager__get_ObjectList(
        FriendOperationItemListViewManager_o *this,
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

  if ( (byte_5932F2F & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_21FFC50(&Method_UnityEngine_GameObject_GetComponent_FriendOperationItemListViewObject___);
    sub_21FFC50(&Method_System_Collections_Generic_List_FriendOperationItemListViewObject__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_21FFC50(&Method_System_Collections_Generic_List_FriendOperationItemListViewObject___ctor__);
    sub_21FFC50(&System_Collections_Generic_List_FriendOperationItemListViewObject__TypeInfo);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_5932F2F = 1;
  }
  memset(&v25, 0, sizeof(v25));
  v3 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_FriendOperationItemListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_FriendOperationItemListViewObject___ctor__);
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
                           (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_FriendOperationItemListViewObject___);
      v18 = Component_object;
      if ( !v3
        || (items = v3->fields._items,
            v20 = Method_System_Collections_Generic_List_FriendOperationItemListViewObject__Add__,
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
  return (System_Collections_Generic_List_FriendOperationItemListViewObject__o *)v3;
}


bool FriendOperationItemListViewManager__get_isMessageApply(
        FriendOperationItemListViewManager_o *this,
        const MethodInfo *method)
{
  return this->fields._isMessageApply_k__BackingField;
}


void FriendOperationItemListViewManager__onClickListViewBlacklistRegist(
        FriendOperationItemListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  struct FriendOperationItemListViewManager_CallbackFunc_o *callbackFunc; // x20
  __int64 v10; // x0
  __int64 v11; // x1
  __int64 Index; // x2

  callbackFunc = this->fields.callbackFunc;
  this->fields.callbackFunc = 0;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.callbackFunc,
    0,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  if ( callbackFunc )
  {
    if ( !obj )
      sub_21FFECC(v10, v11);
    Index = (unsigned int)ListViewObject__get_Index(obj, 0);
    ((void (__fastcall *)(intptr_t, __int64, __int64, intptr_t))callbackFunc->fields.invoke_impl)(
      callbackFunc->fields.method_code,
      9,
      Index,
      callbackFunc->fields.method);
  }
}


void FriendOperationItemListViewManager__onClickListViewBlacklistRemove(
        FriendOperationItemListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  struct FriendOperationItemListViewManager_CallbackFunc_o *callbackFunc; // x20
  __int64 v10; // x0
  __int64 v11; // x1
  __int64 Index; // x2

  callbackFunc = this->fields.callbackFunc;
  this->fields.callbackFunc = 0;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.callbackFunc,
    0,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  if ( callbackFunc )
  {
    if ( !obj )
      sub_21FFECC(v10, v11);
    Index = (unsigned int)ListViewObject__get_Index(obj, 0);
    ((void (__fastcall *)(intptr_t, __int64, __int64, intptr_t))callbackFunc->fields.invoke_impl)(
      callbackFunc->fields.method_code,
      10,
      Index,
      callbackFunc->fields.method);
  }
}


void FriendOperationItemListViewManager__onClickListViewMessageDisp(
        FriendOperationItemListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  struct FriendOperationItemListViewManager_CallbackFunc_o *callbackFunc; // x20
  __int64 v10; // x0
  __int64 v11; // x1
  __int64 Index; // x2

  callbackFunc = this->fields.callbackFunc;
  this->fields.callbackFunc = 0;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.callbackFunc,
    0,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  if ( callbackFunc )
  {
    if ( !obj )
      sub_21FFECC(v10, v11);
    Index = (unsigned int)ListViewObject__get_Index(obj, 0);
    ((void (__fastcall *)(intptr_t, __int64, __int64, intptr_t))callbackFunc->fields.invoke_impl)(
      callbackFunc->fields.method_code,
      11,
      Index,
      callbackFunc->fields.method);
  }
}


void FriendOperationItemListViewManager__remove_callbackFunc(
        FriendOperationItemListViewManager_o *this,
        FriendOperationItemListViewManager_CallbackFunc_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *callbackFunc; // x21
  System_Delegate_o *v6; // x0
  __int64 v7; // x2
  __int64 v8; // x3
  __int64 v9; // x0
  bool v10; // zf
  FriendOperationItemListViewManager_o *v11; // x0
  System_Action_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_5932F29 & 1) == 0 )
  {
    sub_21FFC50(&FriendOperationItemListViewManager_CallbackFunc_TypeInfo);
    byte_5932F29 = 1;
  }
  callbackFunc = (System_Delegate_o *)this->fields.callbackFunc;
  while ( 1 )
  {
    v6 = System_Delegate__Remove(callbackFunc, (System_Delegate_o *)value, 0);
    if ( v6 )
    {
      if ( (FriendOperationItemListViewManager_CallbackFunc_c *)v6->klass != FriendOperationItemListViewManager_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_223767C(&this->fields.callbackFunc, v6, callbackFunc);
    v10 = v9 == (_QWORD)callbackFunc;
    callbackFunc = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (FriendOperationItemListViewManager_o *)sub_220024C(
                                                  v6,
                                                  FriendOperationItemListViewManager_CallbackFunc_TypeInfo,
                                                  v7,
                                                  v8);
  FriendOperationItemListViewManager__add_callbackFunc2(v11, v12, v13);
}


void FriendOperationItemListViewManager__remove_callbackFunc2(
        FriendOperationItemListViewManager_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *callbackFunc2; // x21
  System_Delegate_o *v6; // x0
  __int64 v7; // x2
  __int64 v8; // x3
  __int64 v9; // x0
  bool v10; // zf
  FriendOperationItemListViewManager_o *v11; // x0
  const MethodInfo *v12; // x1

  if ( (byte_5932F2B & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    byte_5932F2B = 1;
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
  v11 = (FriendOperationItemListViewManager_o *)sub_220024C(v6, System_Action_TypeInfo, v7, v8);
  FriendOperationItemListViewManager__get_isMessageApply(v11, v12);
}


void FriendOperationItemListViewManager__resetScrollBarPos(
        FriendOperationItemListViewManager_o *this,
        const MethodInfo *method)
{
  UIProgressBar_o *scrollBar; // x0

  scrollBar = (UIProgressBar_o *)this->fields.scrollBar;
  if ( !scrollBar
    || (UIProgressBar__set_value(scrollBar, 0.0, 0), (scrollBar = (UIProgressBar_o *)this->fields.scrollBar) == 0) )
  {
    sub_21FFECC(scrollBar, method);
  }
  ((void (__fastcall *)(UIProgressBar_o *, const MethodInfo *))scrollBar->klass->vtable._7_ForceUpdate.methodPtr)(
    scrollBar,
    scrollBar->klass->vtable._7_ForceUpdate.method);
}


// local variable allocation has failed, the output may be wrong!
void FriendOperationItemListViewManager__setScrollBarActive(
        FriendOperationItemListViewManager_o *this,
        bool b,
        const MethodInfo *method)
{
  UnityEngine_Component_o *scrollBar; // x0

  scrollBar = (UnityEngine_Component_o *)this->fields.scrollBar;
  if ( !scrollBar || (scrollBar = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(scrollBar, 0)) == 0 )
    sub_21FFECC(scrollBar, b);
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)scrollBar, b, 0);
}


void FriendOperationItemListViewManager__set_isMessageApply(
        FriendOperationItemListViewManager_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._isMessageApply_k__BackingField = value;
}


void FriendOperationItemListViewManager_CallbackFunc___ctor(
        FriendOperationItemListViewManager_CallbackFunc_o *this,
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
  if ( v12 != 2 )
  {
LABEL_5:
    m_target = this->fields.m_target;
    this->fields.invoke_impl = this->fields.method_ptr;
    this->fields.method_code = (intptr_t)m_target;
    goto LABEL_6;
  }
  this->fields.invoke_impl = (intptr_t)sub_1FEE550;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1FEE4F8;
}


System_IAsyncResult_o *FriendOperationItemListViewManager_CallbackFunc__BeginInvoke(
        FriendOperationItemListViewManager_CallbackFunc_o *this,
        int32_t kind,
        int32_t result,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  _QWORD v10[3]; // [xsp+0h] [xbp-50h] BYREF
  int32_t v11; // [xsp+18h] [xbp-38h] BYREF
  int32_t v12; // [xsp+1Ch] [xbp-34h] BYREF

  v12 = kind;
  v11 = result;
  if ( (byte_593301F & 1) == 0 )
  {
    sub_21FFC50(&FriendOperationItemListViewManager_ResultKind_TypeInfo);
    byte_593301F = 1;
  }
  v10[2] = 0;
  v10[0] = j_il2cpp_value_box_0(FriendOperationItemListViewManager_ResultKind_TypeInfo, &v12);
  v10[1] = j_il2cpp_value_box_0(qword_594C070, &v11);
  return (System_IAsyncResult_o *)sub_21FFC04(this, v10, callback, object);
}


void FriendOperationItemListViewManager_CallbackFunc__EndInvoke(
        FriendOperationItemListViewManager_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_21FFC08(result, 0, method);
}


void FriendOperationItemListViewManager_CallbackFunc__Invoke(
        FriendOperationItemListViewManager_CallbackFunc_o *this,
        int32_t kind,
        int32_t result,
        const MethodInfo *method)
{
  ((void (__fastcall *)(intptr_t, int32_t, int32_t, intptr_t))this->fields.invoke_impl)(
    this->fields.method_code,
    kind,
    result,
    this->fields.method);
}


void FriendOperationItemListViewManager___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_5933020 & 1) == 0 )
  {
    sub_21FFC50(&FriendOperationItemListViewManager___c_TypeInfo);
    byte_5933020 = 1;
  }
  v1 = (Il2CppObject *)sub_21FFEBC(FriendOperationItemListViewManager___c_TypeInfo);
  System_Object___ctor(v1, 0);
  FriendOperationItemListViewManager___c_TypeInfo->static_fields->__9 = (struct FriendOperationItemListViewManager___c_o *)v1;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)FriendOperationItemListViewManager___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void FriendOperationItemListViewManager___c___ctor(
        FriendOperationItemListViewManager___c_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


int32_t FriendOperationItemListViewManager___c___CreateList_b__35_0(
        FriendOperationItemListViewManager___c_o *this,
        DataEntityBase_o *a,
        DataEntityBase_o *b,
        const MethodInfo *method)
{
  int64_t *v5; // x20
  __int64 naturalAligment; // x8
  int32_t result; // w0
  FriendOperationItemListViewObject_o *v8; // x0
  System_Action_o *v9; // x1
  const MethodInfo *v10; // x2

  v5 = (int64_t *)a;
  if ( (byte_5933021 & 1) == 0 )
  {
    this = (FriendOperationItemListViewManager___c_o *)sub_21FFC50(&UserFriendRequestHistoryEntity_TypeInfo);
    byte_5933021 = 1;
  }
  if ( !b )
LABEL_11:
    sub_21FFECC(this, a);
  a = (DataEntityBase_o *)UserFriendRequestHistoryEntity_TypeInfo;
  naturalAligment = UserFriendRequestHistoryEntity_TypeInfo->_2.naturalAligment;
  if ( b->klass->_2.naturalAligment < (unsigned int)naturalAligment
    || (UserFriendRequestHistoryEntity_c *)b->klass->_2.typeHierarchy[naturalAligment - 1] != UserFriendRequestHistoryEntity_TypeInfo )
  {
    this = (FriendOperationItemListViewManager___c_o *)sub_220024C(
                                                         b,
                                                         UserFriendRequestHistoryEntity_TypeInfo,
                                                         b,
                                                         method);
    goto LABEL_11;
  }
  if ( !v5 )
    goto LABEL_11;
  if ( *(unsigned __int8 *)(*v5 + 304) >= (unsigned int)naturalAligment
    && *(UserFriendRequestHistoryEntity_c **)(*(_QWORD *)(*v5 + 200) + 8 * naturalAligment - 8) == UserFriendRequestHistoryEntity_TypeInfo )
  {
    return System_Int64__CompareTo_76929328((int64_t)&b[2].monitor, v5[5], 0);
  }
  v8 = (FriendOperationItemListViewObject_o *)sub_220024C(v5, UserFriendRequestHistoryEntity_TypeInfo, b, method);
  FriendOperationItemListViewObject__add_callbackFunc(v8, v9, v10);
  return result;
}