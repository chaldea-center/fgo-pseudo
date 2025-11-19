void FriendOperationItemListViewManager___cctor(const MethodInfo *method)
{
  System_Array_o *v1; // x0
  System_RuntimeFieldHandle_o v2; // x1
  System_Array_o *v3; // x19
  struct FriendOperationItemListViewManager_StaticFields *static_fields; // x0

  if ( (byte_4CB0E57 & 1) == 0 )
  {
    sub_1C6BA08(&ListViewSort_FilterKind___TypeInfo);
    sub_1C6BA08(&FriendOperationItemListViewManager_TypeInfo);
    sub_1C6BA08(&Field__PrivateImplementationDetails__CECDD0BE7FC2683E9048A1EAA2B2C479E05BE86E55C4C967D9E866EDE0AD71AB);
    byte_4CB0E57 = 1;
  }
  FriendOperationItemListViewManager_TypeInfo->static_fields->isInitSystem = 0;
  v1 = (System_Array_o *)sub_1C6BAB0(ListViewSort_FilterKind___TypeInfo, 9);
  v2.fields.value = Field__PrivateImplementationDetails__CECDD0BE7FC2683E9048A1EAA2B2C479E05BE86E55C4C967D9E866EDE0AD71AB;
  v3 = v1;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_64666016(v1, v2, 0);
  static_fields = FriendOperationItemListViewManager_TypeInfo->static_fields;
  static_fields->classFilter = (struct ListViewSort_FilterKind_array *)v3;
  sub_1C6B9AC(&static_fields->classFilter, v3);
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

  if ( (byte_4CB0E50 & 1) == 0 )
  {
    sub_1C6BA08(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4CB0E50 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1C6BC60(0, v6);
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
  __int64 sort; // x0
  __int64 v7; // x1
  struct ListViewSort_array *sortStatusList; // x8
  struct ListViewSort_o *v9; // x1
  System_String_o *v10; // x29
  OtherUserGameEntity_array *FriendCodeList; // x20
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 v13; // x26
  struct System_Collections_Generic_List_ListViewItem__o *v14; // x9
  int32_t v15; // w23
  OtherUserGameEntity_o *v16; // x24
  System_Collections_Generic_Dictionary_int__int__o *v17; // x25
  FriendOperationItemListViewItem_o *v18; // x21
  const MethodInfo *v19; // x6
  __int64 v20; // x8
  _QWORD *v21; // x9
  __int64 v22; // x10
  __int64 v23; // x8
  Il2CppObject *MasterData_object; // x20
  System_Collections_ObjectModel_Collection_T__o *v25; // x21
  int32_t v26; // w22
  UserBlacklistEntity_o *v27; // x24
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x8
  OtherUserGameEntity_o *v29; // x25
  int32_t size; // w26
  System_Collections_Generic_Dictionary_int__int__o *classBoardMaxDictionary; // x27
  FriendOperationItemListViewItem_o *v32; // x23
  const MethodInfo *v33; // x7
  __int64 v34; // x8
  _QWORD *v35; // x9
  __int64 v36; // x10
  __int64 v37; // x8
  __int64 *v38; // x8
  Il2CppObject *v39; // x20
  System_Collections_Generic_IEnumerable_T__o *v40; // x22
  System_Collections_Generic_List_object__o *v41; // x21
  System_Comparison_T__o *v42; // x22
  Il2CppObject *v43; // x23
  struct FriendOperationItemListViewManager___c_StaticFields *static_fields; // x0
  int32_t v45; // w23
  BalanceConfig_c *v46; // x0
  int32_t MaxFriendHistoryNum; // w1
  int32_t v48; // w22
  UserFriendRequestHistoryEntity_o *v49; // x23
  __int64 naturalAligment; // x10
  struct System_Collections_Generic_List_ListViewItem__o *v51; // x8
  OtherUserGameEntity_o *v52; // x25
  int32_t v53; // w26
  System_Collections_Generic_Dictionary_int__int__o *v54; // x27
  FriendOperationItemListViewItem_o *v55; // x24
  const MethodInfo *v56; // x7
  __int64 v57; // x8
  _QWORD *v58; // x9
  __int64 v59; // x10
  __int64 v60; // x8
  TblFriendMaster_o *v61; // x23
  OtherUserGameEntity_array *List; // x24
  OtherUserGameEntity_array *v63; // x23
  il2cpp_array_size_t v64; // x8
  unsigned __int64 v65; // x29
  struct System_Collections_Generic_List_ListViewItem__o *v66; // x9
  int32_t v67; // w26
  OtherUserGameEntity_o *v68; // x27
  System_Collections_Generic_Dictionary_int__int__o *v69; // x28
  FriendOperationItemListViewItem_o *v70; // x25
  const MethodInfo *v71; // x6
  __int64 v72; // x8
  _QWORD *v73; // x9
  __int64 v74; // x10
  __int64 v75; // x8
  il2cpp_array_size_t v76; // x8
  unsigned __int64 v77; // x29
  struct System_Collections_Generic_List_ListViewItem__o *v78; // x9
  int32_t v79; // w26
  OtherUserGameEntity_o *v80; // x27
  System_Collections_Generic_Dictionary_int__int__o *v81; // x28
  FriendOperationItemListViewItem_o *v82; // x25
  const MethodInfo *v83; // x6
  __int64 v84; // x8
  _QWORD *v85; // x9
  __int64 v86; // x10
  __int64 v87; // x8
  UILabel_o *emptyMessageLabel; // x20
  struct UIScrollView_o *scrollView; // x8
  System_String_o *v90; // [xsp+10h] [xbp-70h]

  if ( (byte_4CB0E46 & 1) == 0 )
  {
    sub_1C6BA08(&BalanceConfig_TypeInfo);
    sub_1C6BA08(&Method_System_Collections_ObjectModel_Collection_UserBlacklistEntity__get_Count__);
    sub_1C6BA08(&Method_System_Collections_ObjectModel_Collection_UserBlacklistEntity__get_Item__);
    sub_1C6BA08(&System_Comparison_DataEntityBase__TypeInfo);
    sub_1C6BA08(&Method_DataManager_GetMasterData_OtherUserGameMaster___);
    sub_1C6BA08(&Method_DataManager_GetMasterData_TblFriendMaster___);
    sub_1C6BA08(&Method_DataManager_GetMasterData_UserBlacklistMaster___);
    sub_1C6BA08(&Method_DataManager_GetMasterData_UserFriendRequestHistoryMaster___);
    sub_1C6BA08(&Method_DataMasterBase_OtherUserGameMaster__OtherUserGameEntity__long__GetEntity__);
    sub_1C6BA08(&Method_DataMasterBase_UserBlacklistMaster__UserBlacklistEntity__string__getEntityList__);
    sub_1C6BA08(&Method_DataMasterBase_UserFriendRequestHistoryMaster__UserFriendRequestHistoryEntity__int__getEntityList__);
    sub_1C6BA08(&FriendOperationItemListViewItem_TypeInfo);
    sub_1C6BA08(&FriendOperationItemListViewManager_TypeInfo);
    sub_1C6BA08(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_DataEntityBase__RemoveRange__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_DataEntityBase__Reverse__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_DataEntityBase__Sort__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_DataEntityBase___ctor___78509720);
    sub_1C6BA08(&Method_System_Collections_Generic_List_DataEntityBase__get_Count__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_DataEntityBase__get_Item__);
    sub_1C6BA08(&System_Collections_Generic_List_DataEntityBase__TypeInfo);
    sub_1C6BA08(&LocalizationManager_TypeInfo);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C6BA08(&Method_FriendOperationItemListViewManager___c__CreateList_b__35_0__);
    sub_1C6BA08(&FriendOperationItemListViewManager___c_TypeInfo);
    sub_1C6BA08(&UserFriendRequestHistoryEntity_TypeInfo);
    sub_1C6BA08(&StringLiteral_2924/*"BLACKLIST_EMPTY_MESSAGE"*/);
    sub_1C6BA08(&StringLiteral_6521/*"FRIEND_EMPTY_FRIEND_MESSAGE"*/);
    sub_1C6BA08(&StringLiteral_2927/*"BLACKLIST_FRIEND_HISTORY_EMPTY_MESSAGE"*/);
    sub_1C6BA08(&StringLiteral_6522/*"FRIEND_EMPTY_OFFERED_MESSAGE"*/);
    byte_4CB0E46 = 1;
  }
  if ( !FriendOperationItemListViewManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(FriendOperationItemListViewManager_TypeInfo);
  FriendOperationItemListViewManager__CreateSorteData(classPos, *(const MethodInfo **)&kind);
  this->fields.menuKind = kind;
  sortStatusList = FriendOperationItemListViewManager_TypeInfo->static_fields->sortStatusList;
  if ( !sortStatusList )
    goto LABEL_110;
  if ( LODWORD(sortStatusList->max_length) <= kind )
LABEL_111:
    sub_1C6BC68(sort);
  v9 = sortStatusList->m_Items[kind];
  this->fields.sort = v9;
  sub_1C6B9AC(&this->fields.sort, v9);
  sort = (__int64)this->fields.sort;
  if ( !sort )
    goto LABEL_110;
  ListViewSort__Load((ListViewSort_o *)sort, 0);
  if ( kind == 8 )
  {
    sort = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !sort )
      goto LABEL_110;
    MasterData_object = DataManager__GetMasterData_object_(
                          (DataManager_o *)sort,
                          (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_OtherUserGameMaster___);
    sort = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !sort )
      goto LABEL_110;
    sort = (__int64)DataManager__GetMasterData_object_(
                      (DataManager_o *)sort,
                      (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_UserBlacklistMaster___);
    if ( !sort )
      goto LABEL_110;
    v25 = *(System_Collections_ObjectModel_Collection_T__o **)(sort + 40);
    ListViewManager__CreateList((ListViewManager_o *)this, 0, 0);
    if ( !v25 )
      goto LABEL_110;
    if ( System_Collections_ObjectModel_Collection_object___get_Count(
           v25,
           (const MethodInfo_3391E64 *)Method_System_Collections_ObjectModel_Collection_UserBlacklistEntity__get_Count__) < 1 )
    {
LABEL_40:
      v38 = &StringLiteral_2924/*"BLACKLIST_EMPTY_MESSAGE"*/;
      goto LABEL_71;
    }
    v26 = 0;
    while ( 1 )
    {
      sort = (__int64)System_Collections_ObjectModel_Collection_object___get_Item(
                        v25,
                        v26,
                        (const MethodInfo_3391EF4 *)Method_System_Collections_ObjectModel_Collection_UserBlacklistEntity__get_Item__);
      if ( !sort )
        break;
      v27 = (UserBlacklistEntity_o *)sort;
      sort = UserBlacklistEntity__getOtherUserId((UserBlacklistEntity_o *)sort, 0);
      if ( !MasterData_object )
        break;
      sort = (__int64)DataMasterBase_object__object__long___GetEntity(
                        (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                        sort,
                        (const MethodInfo_33FB638 *)Method_DataMasterBase_OtherUserGameMaster__OtherUserGameEntity__long__GetEntity__);
      itemList = this->fields.itemList;
      if ( !itemList )
        break;
      v29 = (OtherUserGameEntity_o *)sort;
      size = itemList->fields._size;
      classBoardMaxDictionary = this->fields.classBoardMaxDictionary;
      v32 = (FriendOperationItemListViewItem_o *)sub_1C6BC54(FriendOperationItemListViewItem_TypeInfo);
      FriendOperationItemListViewItem___ctor_32960688(v32, 8, size, v29, v27, 0, classBoardMaxDictionary, v33);
      sort = (__int64)this->fields.itemList;
      if ( !sort )
        break;
      v34 = *(_QWORD *)(sort + 16);
      v35 = Method_System_Collections_Generic_List_ListViewItem__Add__;
      ++*(_DWORD *)(sort + 28);
      if ( !v34 )
        break;
      v36 = *(int *)(sort + 24);
      if ( (unsigned int)v36 >= *(_DWORD *)(v34 + 24) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)sort,
          (Il2CppObject *)v32,
          *(const MethodInfo_3800974 **)(*(_QWORD *)(v35[4] + 192LL) + 112LL));
      }
      else
      {
        v37 = v34 + 8 * v36;
        *(_DWORD *)(sort + 24) = v36 + 1;
        *(_QWORD *)(v37 + 32) = v32;
        sub_1C6B9AC(v37 + 32, v32);
      }
      if ( ++v26 >= System_Collections_ObjectModel_Collection_object___get_Count(
                      v25,
                      (const MethodInfo_3391E64 *)Method_System_Collections_ObjectModel_Collection_UserBlacklistEntity__get_Count__) )
        goto LABEL_40;
    }
LABEL_110:
    sub_1C6BC60(sort, v7);
  }
  if ( kind == 7 )
  {
    sort = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !sort )
      goto LABEL_110;
    v39 = DataManager__GetMasterData_object_(
            (DataManager_o *)sort,
            (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_OtherUserGameMaster___);
    sort = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !sort )
      goto LABEL_110;
    sort = (__int64)DataManager__GetMasterData_object_(
                      (DataManager_o *)sort,
                      (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_UserFriendRequestHistoryMaster___);
    if ( !sort )
      goto LABEL_110;
    v40 = *(System_Collections_Generic_IEnumerable_T__o **)(sort + 40);
    v41 = (System_Collections_Generic_List_object__o *)sub_1C6BC54(System_Collections_Generic_List_DataEntityBase__TypeInfo);
    System_Collections_Generic_List_object____ctor_58720872(
      v41,
      v40,
      (const MethodInfo_3800268 *)Method_System_Collections_Generic_List_DataEntityBase___ctor___78509720);
    sort = (__int64)FriendOperationItemListViewManager___c_TypeInfo;
    if ( !FriendOperationItemListViewManager___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(FriendOperationItemListViewManager___c_TypeInfo);
      sort = (__int64)FriendOperationItemListViewManager___c_TypeInfo;
    }
    v42 = *(System_Comparison_T__o **)(*(_QWORD *)(sort + 184) + 8LL);
    if ( !v42 )
    {
      if ( !*(_DWORD *)(sort + 224) )
      {
        j_il2cpp_runtime_class_init_0(sort);
        sort = (__int64)FriendOperationItemListViewManager___c_TypeInfo;
      }
      v43 = **(Il2CppObject ***)(sort + 184);
      v42 = (System_Comparison_T__o *)sub_1C6BC54(System_Comparison_DataEntityBase__TypeInfo);
      System_Comparison_object____ctor(v42, v43, Method_FriendOperationItemListViewManager___c__CreateList_b__35_0__, 0);
      static_fields = FriendOperationItemListViewManager___c_TypeInfo->static_fields;
      static_fields->__9__35_0 = (struct System_Comparison_DataEntityBase__o *)v42;
      sort = sub_1C6B9AC(&static_fields->__9__35_0, v42);
    }
    if ( !v41 )
      goto LABEL_110;
    System_Collections_Generic_List_object___Sort_58729528(
      v41,
      v42,
      (const MethodInfo_3802438 *)Method_System_Collections_Generic_List_DataEntityBase__Sort__);
    v45 = v41->fields._size;
    v46 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v46 = BalanceConfig_TypeInfo;
    }
    MaxFriendHistoryNum = v46->static_fields->MaxFriendHistoryNum;
    if ( v45 > MaxFriendHistoryNum )
    {
      if ( !v46->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v46);
        MaxFriendHistoryNum = BalanceConfig_TypeInfo->static_fields->MaxFriendHistoryNum;
      }
      System_Collections_Generic_List_object___RemoveRange(
        v41,
        MaxFriendHistoryNum,
        v41->fields._size - MaxFriendHistoryNum,
        (const MethodInfo_38021E0 *)Method_System_Collections_Generic_List_DataEntityBase__RemoveRange__);
    }
    System_Collections_Generic_List_object___Reverse(
      v41,
      (const MethodInfo_38022A0 *)Method_System_Collections_Generic_List_DataEntityBase__Reverse__);
    ListViewManager__CreateList((ListViewManager_o *)this, 0, 0);
    if ( v41->fields._size < 1 )
    {
LABEL_70:
      v38 = &StringLiteral_2927/*"BLACKLIST_FRIEND_HISTORY_EMPTY_MESSAGE"*/;
      goto LABEL_71;
    }
    v48 = 0;
    while ( 1 )
    {
      sort = (__int64)System_Collections_Generic_List_object___get_Item(
                        v41,
                        v48,
                        (const MethodInfo_38006A4 *)Method_System_Collections_Generic_List_DataEntityBase__get_Item__);
      if ( !sort )
        goto LABEL_110;
      v49 = (UserFriendRequestHistoryEntity_o *)sort;
      naturalAligment = UserFriendRequestHistoryEntity_TypeInfo->_2.naturalAligment;
      if ( *(unsigned __int8 *)(*(_QWORD *)sort + 304LL) < (unsigned int)naturalAligment )
        goto LABEL_110;
      if ( *(UserFriendRequestHistoryEntity_c **)(*(_QWORD *)(*(_QWORD *)sort + 200LL) + 8 * naturalAligment - 8) != UserFriendRequestHistoryEntity_TypeInfo )
        goto LABEL_110;
      sort = UserFriendRequestHistoryEntity__getOtherUserId((UserFriendRequestHistoryEntity_o *)sort, 0);
      if ( !v39 )
        goto LABEL_110;
      sort = (__int64)DataMasterBase_object__object__long___GetEntity(
                        (DataMasterBase_TMaster__TEntity__PKType__o *)v39,
                        sort,
                        (const MethodInfo_33FB638 *)Method_DataMasterBase_OtherUserGameMaster__OtherUserGameEntity__long__GetEntity__);
      v51 = this->fields.itemList;
      if ( !v51 )
        goto LABEL_110;
      v52 = (OtherUserGameEntity_o *)sort;
      v53 = v51->fields._size;
      v54 = this->fields.classBoardMaxDictionary;
      v55 = (FriendOperationItemListViewItem_o *)sub_1C6BC54(FriendOperationItemListViewItem_TypeInfo);
      FriendOperationItemListViewItem___ctor_32961024(v55, 7, v53, v52, v49, 0, v54, v56);
      sort = (__int64)this->fields.itemList;
      if ( !sort )
        goto LABEL_110;
      v57 = *(_QWORD *)(sort + 16);
      v58 = Method_System_Collections_Generic_List_ListViewItem__Add__;
      ++*(_DWORD *)(sort + 28);
      if ( !v57 )
        goto LABEL_110;
      v59 = *(int *)(sort + 24);
      if ( (unsigned int)v59 >= *(_DWORD *)(v57 + 24) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)sort,
          (Il2CppObject *)v55,
          *(const MethodInfo_3800974 **)(*(_QWORD *)(v58[4] + 192LL) + 112LL));
      }
      else
      {
        v60 = v57 + 8 * v59;
        *(_DWORD *)(sort + 24) = v59 + 1;
        *(_QWORD *)(v60 + 32) = v55;
        sub_1C6B9AC(v60 + 32, v55);
      }
      if ( ++v48 >= v41->fields._size )
        goto LABEL_70;
    }
  }
  v10 = (System_String_o *)StringLiteral_6522/*"FRIEND_EMPTY_OFFERED_MESSAGE"*/;
  if ( !kind )
  {
    sort = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !sort )
      goto LABEL_110;
    sort = (__int64)DataManager__GetMasterData_object_(
                      (DataManager_o *)sort,
                      (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_OtherUserGameMaster___);
    if ( !sort )
      goto LABEL_110;
    FriendCodeList = OtherUserGameMaster__GetFriendCodeList((OtherUserGameMaster_o *)sort, this->fields.friendCode, 0);
    ListViewManager__CreateList((ListViewManager_o *)this, 0, 0);
    if ( !FriendCodeList )
      goto LABEL_110;
    max_length = FriendCodeList->max_length;
    if ( (int)max_length >= 1 )
    {
      v13 = 0;
      while ( 1 )
      {
        v14 = this->fields.itemList;
        if ( !v14 )
          goto LABEL_110;
        if ( v13 >= (unsigned int)max_length )
          goto LABEL_111;
        v15 = v14->fields._size;
        v16 = FriendCodeList->m_Items[v13];
        v17 = this->fields.classBoardMaxDictionary;
        v18 = (FriendOperationItemListViewItem_o *)sub_1C6BC54(FriendOperationItemListViewItem_TypeInfo);
        FriendOperationItemListViewItem___ctor_32960372(v18, 0, v15, v16, 0, v17, v19);
        sort = (__int64)this->fields.itemList;
        if ( !sort )
          goto LABEL_110;
        v20 = *(_QWORD *)(sort + 16);
        v21 = Method_System_Collections_Generic_List_ListViewItem__Add__;
        ++*(_DWORD *)(sort + 28);
        if ( !v20 )
          goto LABEL_110;
        v22 = *(int *)(sort + 24);
        if ( (unsigned int)v22 >= *(_DWORD *)(v20 + 24) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)sort,
            (Il2CppObject *)v18,
            *(const MethodInfo_3800974 **)(*(_QWORD *)(v21[4] + 192LL) + 112LL));
        }
        else
        {
          v23 = v20 + 8 * v22;
          *(_DWORD *)(sort + 24) = v22 + 1;
          *(_QWORD *)(v23 + 32) = v18;
          sort = sub_1C6B9AC(v23 + 32, v18);
        }
        LODWORD(max_length) = FriendCodeList->max_length;
        if ( (__int64)++v13 >= (int)max_length )
          goto LABEL_105;
      }
    }
    goto LABEL_105;
  }
  sort = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !sort )
    goto LABEL_110;
  v90 = v10;
  sort = (__int64)DataManager__GetMasterData_object_(
                    (DataManager_o *)sort,
                    (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_TblFriendMaster___);
  if ( !sort )
    goto LABEL_110;
  v61 = (TblFriendMaster_o *)sort;
  List = TblFriendMaster__GetList((TblFriendMaster_o *)sort, kind, 0);
  v63 = TblFriendMaster__GetList(v61, 9, 0);
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0);
  if ( kind == 3 )
  {
    if ( !v63 )
      goto LABEL_110;
    v64 = v63->max_length;
    if ( (int)v64 >= 1 )
    {
      v65 = 0;
      do
      {
        v66 = this->fields.itemList;
        if ( !v66 )
          goto LABEL_110;
        if ( v65 >= (unsigned int)v64 )
          goto LABEL_111;
        v67 = v66->fields._size;
        v68 = v63->m_Items[v65];
        v69 = this->fields.classBoardMaxDictionary;
        v70 = (FriendOperationItemListViewItem_o *)sub_1C6BC54(FriendOperationItemListViewItem_TypeInfo);
        FriendOperationItemListViewItem___ctor_32960372(v70, 9, v67, v68, classPos, v69, v71);
        sort = (__int64)this->fields.itemList;
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
            (Il2CppObject *)v70,
            *(const MethodInfo_3800974 **)(*(_QWORD *)(v73[4] + 192LL) + 112LL));
        }
        else
        {
          v75 = v72 + 8 * v74;
          *(_DWORD *)(sort + 24) = v74 + 1;
          *(_QWORD *)(v75 + 32) = v70;
          sort = sub_1C6B9AC(v75 + 32, v70);
        }
        LODWORD(v64) = v63->max_length;
      }
      while ( (__int64)++v65 < (int)v64 );
    }
  }
  if ( !List )
    goto LABEL_110;
  v76 = List->max_length;
  if ( (int)v76 >= 1 )
  {
    v77 = 0;
    do
    {
      v78 = this->fields.itemList;
      if ( !v78 )
        goto LABEL_110;
      if ( v77 >= (unsigned int)v76 )
        goto LABEL_111;
      v79 = v78->fields._size;
      v80 = List->m_Items[v77];
      v81 = this->fields.classBoardMaxDictionary;
      v82 = (FriendOperationItemListViewItem_o *)sub_1C6BC54(FriendOperationItemListViewItem_TypeInfo);
      FriendOperationItemListViewItem___ctor_32960372(v82, kind, v79, v80, classPos, v81, v83);
      sort = (__int64)this->fields.itemList;
      if ( !sort )
        goto LABEL_110;
      v84 = *(_QWORD *)(sort + 16);
      v85 = Method_System_Collections_Generic_List_ListViewItem__Add__;
      ++*(_DWORD *)(sort + 28);
      if ( !v84 )
        goto LABEL_110;
      v86 = *(int *)(sort + 24);
      if ( (unsigned int)v86 >= *(_DWORD *)(v84 + 24) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)sort,
          (Il2CppObject *)v82,
          *(const MethodInfo_3800974 **)(*(_QWORD *)(v85[4] + 192LL) + 112LL));
      }
      else
      {
        v87 = v84 + 8 * v86;
        *(_DWORD *)(sort + 24) = v86 + 1;
        *(_QWORD *)(v87 + 32) = v82;
        sort = sub_1C6B9AC(v87 + 32, v82);
      }
      v76 = List->max_length;
    }
    while ( (__int64)++v77 < (int)v76 );
  }
  if ( v76 )
  {
    v10 = v90;
    goto LABEL_105;
  }
  v10 = v90;
  if ( !v63 )
    goto LABEL_110;
  if ( !v63->max_length )
  {
    if ( kind != 2 )
    {
      if ( kind == 3 )
        v10 = (System_String_o *)StringLiteral_6521/*"FRIEND_EMPTY_FRIEND_MESSAGE"*/;
      goto LABEL_105;
    }
    v38 = &StringLiteral_6522/*"FRIEND_EMPTY_OFFERED_MESSAGE"*/;
LABEL_71:
    v10 = (System_String_o *)*v38;
  }
LABEL_105:
  emptyMessageLabel = this->fields.emptyMessageLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  sort = (__int64)LocalizationManager__Get(v10, 0);
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
  const MethodInfo *v4; // x3

  this->fields.friendCode = friendCode;
  sub_1C6B9AC(&this->fields.friendCode, friendCode);
  FriendOperationItemListViewManager__CreateList(this, 0, 0, v4);
}


void FriendOperationItemListViewManager__CreateSorteData(int32_t classPos, const MethodInfo *method)
{
  FriendOperationItemListViewManager_c *v3; // x0
  __int64 v4; // x0
  FriendOperationItemListViewManager_c *v5; // x8
  __int64 v6; // x20
  struct FriendOperationItemListViewManager_StaticFields *static_fields; // x0
  unsigned __int64 i; // x27
  FriendOperationItemListViewManager_c *v9; // x0
  struct FriendOperationItemListViewManager_StaticFields *v10; // x8
  unsigned int *sortStatusList; // x28
  System_String_o *v12; // x0
  System_String_o *v13; // x21
  ListViewSort_o *v14; // x20
  FriendOperationItemListViewManager_c *v15; // x0
  __int64 v16; // x1
  unsigned int *v17; // x0
  struct ListViewSort_array *v18; // x8
  Il2CppClass **v19; // x8
  ListViewSort_o *v20; // x20
  struct ListViewSort_FilterKind_array *v21; // x8
  __int64 j; // x21
  struct ListViewSort_FilterKind_array *classFilter; // x8
  __int64 v24; // x0
  int v25; // [xsp+Ch] [xbp-54h] BYREF

  if ( (byte_4CB0E40 & 1) == 0 )
  {
    sub_1C6BA08(&FriendOperationItemListViewManager_TypeInfo);
    sub_1C6BA08(&ListViewSort___TypeInfo);
    sub_1C6BA08(&ListViewSort_TypeInfo);
    sub_1C6BA08(&StringLiteral_6867/*"FriendOperation"*/);
    byte_4CB0E40 = 1;
  }
  v3 = FriendOperationItemListViewManager_TypeInfo;
  v25 = 0;
  if ( !FriendOperationItemListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FriendOperationItemListViewManager_TypeInfo);
    v3 = FriendOperationItemListViewManager_TypeInfo;
  }
  if ( !v3->static_fields->isInitSystem )
  {
    v4 = sub_1C6BAB0(ListViewSort___TypeInfo, 10);
    v5 = FriendOperationItemListViewManager_TypeInfo;
    v6 = v4;
    if ( !FriendOperationItemListViewManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(FriendOperationItemListViewManager_TypeInfo);
      v5 = FriendOperationItemListViewManager_TypeInfo;
    }
    static_fields = v5->static_fields;
    static_fields->sortStatusList = (struct ListViewSort_array *)v6;
    sub_1C6B9AC(&static_fields->sortStatusList, v6);
    for ( i = 0; ; ++i )
    {
      v9 = FriendOperationItemListViewManager_TypeInfo;
      if ( !FriendOperationItemListViewManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(FriendOperationItemListViewManager_TypeInfo);
        v9 = FriendOperationItemListViewManager_TypeInfo;
      }
      v10 = v9->static_fields;
      if ( i == 10 )
        break;
      sortStatusList = (unsigned int *)v10->sortStatusList;
      v25 = i + 1;
      v12 = System_Int32__ToString((int32_t)&v25, 0);
      v13 = System_String__Concat_63966792((System_String_o *)StringLiteral_6867/*"FriendOperation"*/, v12, 0);
      v14 = (ListViewSort_o *)sub_1C6BC54(ListViewSort_TypeInfo);
      ListViewSort___ctor_44084664(v14, v13, 3, 0, 0);
      if ( !sortStatusList )
        goto LABEL_40;
      if ( v14 )
      {
        v15 = (FriendOperationItemListViewManager_c *)sub_1C6BB44(v14, *(_QWORD *)(*(_QWORD *)sortStatusList + 64LL));
        if ( !v15 )
        {
          v24 = sub_1C6BC84();
          sub_1C6BB30(v24, 0);
        }
      }
      if ( i >= sortStatusList[6] )
        goto LABEL_41;
      v17 = &sortStatusList[2 * i];
      *((_QWORD *)v17 + 4) = v14;
      v15 = (FriendOperationItemListViewManager_c *)sub_1C6B9AC(v17 + 8, v14);
      v18 = FriendOperationItemListViewManager_TypeInfo->static_fields->sortStatusList;
      if ( !v18 )
        goto LABEL_40;
      if ( i >= LODWORD(v18->max_length) )
LABEL_41:
        sub_1C6BC68(v15);
      v19 = &v18->obj.klass + i;
      v20 = (ListViewSort_o *)v19[4];
      if ( !v20 )
        goto LABEL_40;
      ListViewSort__ClassFilterOFF((ListViewSort_o *)v19[4], 0);
      if ( !classPos )
      {
LABEL_29:
        for ( j = 9; ; ++j )
        {
          v15 = FriendOperationItemListViewManager_TypeInfo;
          if ( !FriendOperationItemListViewManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(FriendOperationItemListViewManager_TypeInfo);
            v15 = FriendOperationItemListViewManager_TypeInfo;
          }
          classFilter = v15->static_fields->classFilter;
          if ( !classFilter )
            break;
          if ( j - 8 >= SLODWORD(classFilter->max_length) )
            goto LABEL_28;
          if ( !v15->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v15);
            classFilter = FriendOperationItemListViewManager_TypeInfo->static_fields->classFilter;
            if ( !classFilter )
              break;
          }
          if ( j - 8 >= (unsigned __int64)LODWORD(classFilter->max_length) )
            goto LABEL_41;
          ListViewSort__SetFilter(v20, *((_DWORD *)&classFilter->obj.klass + j), 1, 0);
        }
LABEL_40:
        sub_1C6BC60(v15, v16);
      }
      v15 = FriendOperationItemListViewManager_TypeInfo;
      if ( !FriendOperationItemListViewManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(FriendOperationItemListViewManager_TypeInfo);
        v15 = FriendOperationItemListViewManager_TypeInfo;
      }
      v21 = v15->static_fields->classFilter;
      if ( !v21 )
        goto LABEL_40;
      if ( SLODWORD(v21->max_length) <= classPos )
        goto LABEL_29;
      if ( !v15->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v15);
        v21 = FriendOperationItemListViewManager_TypeInfo->static_fields->classFilter;
        if ( !v21 )
          goto LABEL_40;
      }
      if ( LODWORD(v21->max_length) <= classPos )
        goto LABEL_41;
      ListViewSort__SetFilter(v20, v21->m_Items[classPos], 1, 0);
LABEL_28:
      ;
    }
    v10->isInitSystem = 1;
  }
}


void FriendOperationItemListViewManager__DeleteContinueData(const MethodInfo *method)
{
  const MethodInfo *v1; // x1
  __int64 v2; // x1
  __int64 v3; // x20
  FriendOperationItemListViewManager_c *v4; // x0
  struct ListViewSort_array *sortStatusList; // x8

  if ( (byte_4CB0E41 & 1) == 0 )
  {
    sub_1C6BA08(&FriendOperationItemListViewManager_TypeInfo);
    byte_4CB0E41 = 1;
  }
  if ( !FriendOperationItemListViewManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(FriendOperationItemListViewManager_TypeInfo);
  FriendOperationItemListViewManager__CreateSorteData(0, v1);
  v3 = 4;
  do
  {
    v4 = FriendOperationItemListViewManager_TypeInfo;
    if ( !FriendOperationItemListViewManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(FriendOperationItemListViewManager_TypeInfo);
      v4 = FriendOperationItemListViewManager_TypeInfo;
    }
    sortStatusList = v4->static_fields->sortStatusList;
    if ( !sortStatusList )
      goto LABEL_13;
    if ( (unsigned int)(v3 - 4) >= LODWORD(sortStatusList->max_length) )
      sub_1C6BC68(v4);
    v4 = (FriendOperationItemListViewManager_c *)*((_QWORD *)&sortStatusList->obj.klass + v3);
    if ( !v4 )
LABEL_13:
      sub_1C6BC60(v4, v2);
    ListViewSort__DeleteContinueData((ListViewSort_o *)v4, 0);
    ++v3;
  }
  while ( (_DWORD)v3 != 14 );
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
    sub_1C6BC60(0, v3);
  ListViewSort__Save(sort, 0);
}


void FriendOperationItemListViewManager__EndCloseClassBoardEffectListDialog(
        FriendOperationItemListViewManager_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4CB0E56 & 1) == 0 )
  {
    sub_1C6BA08(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4CB0E56 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1C6BC60(0, v4);
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

  if ( (byte_4CB0E47 & 1) == 0 )
  {
    sub_1C6BA08(&FriendOperationItemListViewItem_TypeInfo);
    sub_1C6BA08(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    byte_4CB0E47 = 1;
  }
  result = (FriendOperationItemListViewItem_o *)this->fields.itemList;
  if ( result )
  {
    result = (FriendOperationItemListViewItem_o *)System_Collections_Generic_List_object___get_Item(
                                                    (System_Collections_Generic_List_object__o *)result,
                                                    index,
                                                    (const MethodInfo_38006A4 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
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
  FriendOperationItemListViewManager_c *v2; // x0
  __int64 i; // x20
  struct ListViewSort_array *sortStatusList; // x8

  if ( (byte_4CB0E42 & 1) == 0 )
  {
    sub_1C6BA08(&FriendOperationItemListViewManager_TypeInfo);
    byte_4CB0E42 = 1;
  }
  v2 = FriendOperationItemListViewManager_TypeInfo;
  if ( !FriendOperationItemListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FriendOperationItemListViewManager_TypeInfo);
    v2 = FriendOperationItemListViewManager_TypeInfo;
  }
  if ( v2->static_fields->isInitSystem )
  {
    for ( i = 4; ; ++i )
    {
      if ( !v2->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v2);
        v2 = FriendOperationItemListViewManager_TypeInfo;
      }
      sortStatusList = v2->static_fields->sortStatusList;
      if ( !sortStatusList )
        goto LABEL_15;
      if ( (unsigned int)(i - 4) >= LODWORD(sortStatusList->max_length) )
        sub_1C6BC68(v2);
      v2 = (FriendOperationItemListViewManager_c *)*((_QWORD *)&sortStatusList->obj.klass + i);
      if ( !v2 )
LABEL_15:
        sub_1C6BC60(v2, v1);
      ListViewSort__InitLoad((ListViewSort_o *)v2, 0);
      if ( (_DWORD)i == 13 )
        break;
      v2 = FriendOperationItemListViewManager_TypeInfo;
    }
  }
}


void FriendOperationItemListViewManager__OnClickListView(
        FriendOperationItemListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  struct FriendOperationItemListViewManager_CallbackFunc_o *callbackFunc; // x20
  __int64 v5; // x0
  __int64 v6; // x1
  unsigned int Index; // w0

  callbackFunc = this->fields.callbackFunc;
  this->fields.callbackFunc = 0;
  v5 = sub_1C6B9AC(&this->fields.callbackFunc, 0);
  if ( callbackFunc )
  {
    if ( !obj )
      sub_1C6BC60(v5, v6);
    Index = ListViewObject__get_Index(obj, 0);
    ((void (__fastcall *)(intptr_t, _QWORD, _QWORD, intptr_t))callbackFunc->fields.invoke_impl)(
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
  struct FriendOperationItemListViewManager_CallbackFunc_o *callbackFunc; // x20
  __int64 v5; // x0
  __int64 v6; // x1
  unsigned int Index; // w0

  callbackFunc = this->fields.callbackFunc;
  this->fields.callbackFunc = 0;
  v5 = sub_1C6B9AC(&this->fields.callbackFunc, 0);
  if ( callbackFunc )
  {
    if ( !obj )
      sub_1C6BC60(v5, v6);
    Index = ListViewObject__get_Index(obj, 0);
    ((void (__fastcall *)(intptr_t, __int64, _QWORD, intptr_t))callbackFunc->fields.invoke_impl)(
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
  struct FriendOperationItemListViewManager_CallbackFunc_o *callbackFunc; // x20
  __int64 v5; // x0
  __int64 v6; // x1
  unsigned int Index; // w0

  callbackFunc = this->fields.callbackFunc;
  this->fields.callbackFunc = 0;
  v5 = sub_1C6B9AC(&this->fields.callbackFunc, 0);
  if ( callbackFunc )
  {
    if ( !obj )
      sub_1C6BC60(v5, v6);
    Index = ListViewObject__get_Index(obj, 0);
    ((void (__fastcall *)(intptr_t, __int64, _QWORD, intptr_t))callbackFunc->fields.invoke_impl)(
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
  struct FriendOperationItemListViewManager_CallbackFunc_o *callbackFunc; // x20
  __int64 v5; // x0
  __int64 v6; // x1
  unsigned int Index; // w0

  callbackFunc = this->fields.callbackFunc;
  this->fields.callbackFunc = 0;
  v5 = sub_1C6B9AC(&this->fields.callbackFunc, 0);
  if ( callbackFunc )
  {
    if ( !obj )
      sub_1C6BC60(v5, v6);
    Index = ListViewObject__get_Index(obj, 0);
    ((void (__fastcall *)(intptr_t, __int64, _QWORD, intptr_t))callbackFunc->fields.invoke_impl)(
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
  struct FriendOperationItemListViewManager_CallbackFunc_o *callbackFunc; // x20
  __int64 v5; // x0
  __int64 v6; // x1
  unsigned int Index; // w0

  callbackFunc = this->fields.callbackFunc;
  this->fields.callbackFunc = 0;
  v5 = sub_1C6B9AC(&this->fields.callbackFunc, 0);
  if ( callbackFunc )
  {
    if ( !obj )
      sub_1C6BC60(v5, v6);
    Index = ListViewObject__get_Index(obj, 0);
    ((void (__fastcall *)(intptr_t, __int64, _QWORD, intptr_t))callbackFunc->fields.invoke_impl)(
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
  struct FriendOperationItemListViewManager_CallbackFunc_o *callbackFunc; // x20
  __int64 v5; // x0
  __int64 v6; // x1
  unsigned int Index; // w0

  callbackFunc = this->fields.callbackFunc;
  this->fields.callbackFunc = 0;
  v5 = sub_1C6B9AC(&this->fields.callbackFunc, 0);
  if ( callbackFunc )
  {
    if ( !obj )
      sub_1C6BC60(v5, v6);
    Index = ListViewObject__get_Index(obj, 0);
    ((void (__fastcall *)(intptr_t, __int64, _QWORD, intptr_t))callbackFunc->fields.invoke_impl)(
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

  if ( (byte_4CB0E51 & 1) == 0 )
  {
    sub_1C6BA08(&Method_FriendOperationItemListViewManager_OnClickSortAscendingOrder__);
    byte_4CB0E51 = 1;
  }
  if ( this->fields.isInput )
  {
    v3 = Method_FriendOperationItemListViewManager_OnClickSortAscendingOrder__;
    if ( (*((_BYTE *)Method_FriendOperationItemListViewManager_OnClickSortAscendingOrder__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C6BA20(Method_FriendOperationItemListViewManager_OnClickSortAscendingOrder__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C6B9EC(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    sort = this->fields.sort;
    if ( !sort )
      sub_1C6BC60(v5, v6);
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
  Il2CppObject *v6; // x0
  ListViewSort_o *sort; // x20
  CommonUI_o *v8; // x21
  OtherUserSortDialog_CallbackFunc_o *v9; // x22
  __int64 v10; // x0
  __int64 v11; // x1
  int32_t v12; // w1
  Il2CppObject *Instance; // x0

  if ( (byte_4CB0E4F & 1) == 0 )
  {
    sub_1C6BA08(&OtherUserSortDialog_CallbackFunc_TypeInfo);
    sub_1C6BA08(&Method_FriendOperationItemListViewManager_CloseSortDialog__);
    sub_1C6BA08(&Method_FriendOperationItemListViewManager_OnClickSortKind__);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4CB0E4F = 1;
  }
  if ( this->fields.isInput )
  {
    v3 = Method_FriendOperationItemListViewManager_OnClickSortKind__;
    if ( (*((_BYTE *)Method_FriendOperationItemListViewManager_OnClickSortKind__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C6BA20(Method_FriendOperationItemListViewManager_OnClickSortKind__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C6B9EC(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    menuKind = this->fields.menuKind;
    if ( menuKind == 2 )
    {
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      sort = this->fields.sort;
      v8 = (CommonUI_o *)Instance;
      v9 = (OtherUserSortDialog_CallbackFunc_o *)sub_1C6BC54(OtherUserSortDialog_CallbackFunc_TypeInfo);
      OtherUserSortDialog_CallbackFunc___ctor(
        v9,
        (Il2CppObject *)this,
        Method_FriendOperationItemListViewManager_CloseSortDialog__,
        0);
      if ( v8 )
      {
        v12 = 2;
        goto LABEL_13;
      }
LABEL_14:
      sub_1C6BC60(v10, v11);
    }
    if ( menuKind == 3 )
    {
      v6 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      sort = this->fields.sort;
      v8 = (CommonUI_o *)v6;
      v9 = (OtherUserSortDialog_CallbackFunc_o *)sub_1C6BC54(OtherUserSortDialog_CallbackFunc_TypeInfo);
      OtherUserSortDialog_CallbackFunc___ctor(
        v9,
        (Il2CppObject *)this,
        Method_FriendOperationItemListViewManager_CloseSortDialog__,
        0);
      if ( v8 )
      {
        v12 = 1;
LABEL_13:
        CommonUI__OpenOtherUserSortDialog(v8, v12, sort, v9, 0);
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
  struct FriendOperationItemListViewManager_CallbackFunc_o *callbackFunc; // x20
  __int64 v5; // x0
  __int64 v6; // x1
  unsigned int Index; // w0

  callbackFunc = this->fields.callbackFunc;
  this->fields.callbackFunc = 0;
  v5 = sub_1C6B9AC(&this->fields.callbackFunc, 0);
  if ( callbackFunc )
  {
    if ( !obj )
      sub_1C6BC60(v5, v6);
    Index = ListViewObject__get_Index(obj, 0);
    ((void (__fastcall *)(intptr_t, __int64, _QWORD, intptr_t))callbackFunc->fields.invoke_impl)(
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
  unsigned int Index; // w0

  if ( (byte_4CB0E4E & 1) == 0 )
  {
    sub_1C6BA08(&StringLiteral_12653/*"ScrollViewEnabled"*/);
    byte_4CB0E4E = 1;
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
      (System_String_o *)StringLiteral_12653/*"ScrollViewEnabled"*/,
      0.1,
      0);
    callbackFunc = this->fields.callbackFunc;
    this->fields.callbackFunc = 0;
    scrollView = (UIScrollView_o *)sub_1C6B9AC(&this->fields.callbackFunc, 0);
    if ( callbackFunc )
    {
      if ( obj )
      {
        Index = ListViewObject__get_Index(obj, 0);
        ((void (__fastcall *)(intptr_t, _QWORD, _QWORD, intptr_t))callbackFunc->fields.invoke_impl)(
          callbackFunc->fields.method_code,
          (unsigned int)kind,
          Index,
          callbackFunc->fields.method);
        return;
      }
LABEL_10:
      sub_1C6BC60(scrollView, obj);
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
  struct System_Collections_Generic_List_ListViewItem__o *itemSortList; // x8
  UnityEngine_Object_o *scrollView; // x20
  struct System_Action_o *callbackFunc2; // x20

  if ( (byte_4CB0E4D & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    byte_4CB0E4D = 1;
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
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
          sub_1C6B9AC(&this->fields.callbackFunc2, 0);
          if ( callbackFunc2 )
            ((void (__fastcall *)(intptr_t, intptr_t))callbackFunc2->fields.invoke_impl)(
              callbackFunc2->fields.method_code,
              callbackFunc2->fields.method);
          return;
        }
      }
LABEL_18:
      sub_1C6BC60(emptyMessageBase, v7);
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
  Il2CppObject *Master_object; // x21
  const MethodInfo *v13; // x1
  int32_t scrollView; // w23
  struct OtherUserGameEntity_o *otherUserGameEntity; // x8
  struct ClassBoardInfo_array *userClassBoardInfo; // x24
  int max_length; // w8
  int32_t v18; // w21
  unsigned int v19; // w25
  ClassBoardInfo_o *v20; // x22
  long double inited; // q0
  _QWORD *v22; // x23
  __int64 v23; // x8
  __int64 v24; // x0
  __int64 v25; // x0
  struct System_Int32_array **v26; // x8
  struct System_Int32_array *v27; // x1
  long double v28; // q0
  _QWORD *v29; // x23
  __int64 v30; // x8
  __int64 v31; // x0
  __int64 v32; // x0
  struct System_Int32_array **v33; // x8
  struct System_Int32_array *v34; // x1
  Il2CppObject *Instance; // x23
  System_Action_o *v36; // x24
  struct OtherUserGameEntity_o *v37; // x8

  v4 = this;
  if ( (byte_4CB0E55 & 1) == 0 )
  {
    sub_1C6BA08(&System_Action_TypeInfo);
    sub_1C6BA08(&Method_System_Array_Empty_int___);
    sub_1C6BA08(&ClassBoardInfo_TypeInfo);
    sub_1C6BA08(&Method_DataManager_GetMaster_ClassBoardClassMaster___);
    sub_1C6BA08(&Method_DataManager_GetMaster_ServantMaster___);
    sub_1C6BA08(&DataManager_TypeInfo);
    sub_1C6BA08(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C6BA08(&FriendOperationItemListViewItem_TypeInfo);
    sub_1C6BA08(&Method_FriendOperationItemListViewManager_EndCloseClassBoardEffectListDialog__);
    sub_1C6BA08(&Method_FriendOperationItemListViewManager_OpenSupportClassBoard__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    this = (FriendOperationItemListViewManager_o *)sub_1C6BA08(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4CB0E55 = 1;
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
               (const MethodInfo_38006A4 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
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
            v10 = (_QWORD *)sub_1C6BA20(Method_FriendOperationItemListViewManager_OpenSupportClassBoard__);
          v11 = (System_Reflection_MethodBase_o *)sub_1C6B9EC(v10, v10[4]);
          OverwriteAssetSoundName__PlaySystemSe(v11, 0, 0, 0);
          if ( !DataManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
          Master_object = DataManager__GetMaster_object_((const MethodInfo_313B314 *)Method_DataManager_GetMaster_ServantMaster___);
          this = (FriendOperationItemListViewManager_o *)FriendOperationItemListViewItem__get_SvtId(v8, v13);
          if ( !Master_object )
            goto LABEL_47;
          this = (FriendOperationItemListViewManager_o *)DataMasterBase_object__object__int___GetEntity(
                                                           (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                                           (int32_t)this,
                                                           (const MethodInfo_33F90DC *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
          if ( !this )
            goto LABEL_47;
          scrollView = (int32_t)this->fields.scrollView;
          this = (FriendOperationItemListViewManager_o *)DataManager__GetMaster_object_((const MethodInfo_313B314 *)Method_DataManager_GetMaster_ClassBoardClassMaster___);
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
          v18 = (int)this;
          if ( max_length >= 1 )
          {
            v19 = 0;
            do
            {
              if ( v19 >= max_length )
                sub_1C6BC68(this);
              v20 = userClassBoardInfo->m_Items[v19];
              if ( !v20 )
                goto LABEL_47;
              if ( v20->fields.classBoardBaseId == v18 )
              {
                this = (FriendOperationItemListViewManager_o *)ClassBoardInfo__IsReleasedClassId(v20, scrollView, 0);
                if ( ((unsigned __int8)this & 1) != 0 )
                  goto LABEL_43;
              }
              max_length = userClassBoardInfo->max_length;
            }
            while ( (int)++v19 < max_length );
          }
          v20 = (ClassBoardInfo_o *)sub_1C6BC54(ClassBoardInfo_TypeInfo);
          ClassBoardInfo___ctor(v20, 0);
          if ( !v20 )
            goto LABEL_47;
          v20->fields.classBoardBaseId = v18;
          v22 = Method_System_Array_Empty_int___;
          v23 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
          if ( !v23 )
          {
            sub_1C41AF8(Method_System_Array_Empty_int___);
            v23 = v22[7];
          }
          v24 = *(_QWORD *)(v23 + 16);
          if ( (*(_BYTE *)(v24 + 309) & 1) == 0 )
            v24 = sub_1C41A9C(inited);
          if ( !*(_DWORD *)(v24 + 224) )
            inited = j_il2cpp_runtime_class_init_0(v24);
          v25 = *(_QWORD *)(v22[7] + 16LL);
          if ( (*(_BYTE *)(v25 + 309) & 1) == 0 )
            v25 = sub_1C41A9C(inited);
          v26 = *(struct System_Int32_array ***)(v25 + 184);
          v27 = *v26;
          v20->fields.squareIds = *v26;
          sub_1C6B9AC(&v20->fields.squareIds, v27);
          v29 = Method_System_Array_Empty_int___;
          v30 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
          if ( !v30 )
          {
            sub_1C41AF8(Method_System_Array_Empty_int___);
            v30 = v29[7];
          }
          v31 = *(_QWORD *)(v30 + 16);
          if ( (*(_BYTE *)(v31 + 309) & 1) == 0 )
            v31 = sub_1C41A9C(v28);
          if ( !*(_DWORD *)(v31 + 224) )
            v28 = j_il2cpp_runtime_class_init_0(v31);
          v32 = *(_QWORD *)(v29[7] + 16LL);
          if ( (*(_BYTE *)(v32 + 309) & 1) == 0 )
            v32 = sub_1C41A9C(v28);
          v33 = *(struct System_Int32_array ***)(v32 + 184);
          v34 = *v33;
          v20->fields.releasedClassIds = *v33;
          sub_1C6B9AC(&v20->fields.releasedClassIds, v34);
LABEL_43:
          Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          v36 = (System_Action_o *)sub_1C6BC54(System_Action_TypeInfo);
          System_Action___ctor(
            v36,
            (Il2CppObject *)v4,
            Method_FriendOperationItemListViewManager_EndCloseClassBoardEffectListDialog__,
            0);
          v37 = v8->fields.otherUserGameEntity;
          if ( !v37 || !Instance )
LABEL_47:
            sub_1C6BC60(this, obj);
          CommonUI__OpenClassBoardEffectListDialog(
            (CommonUI_o *)Instance,
            1,
            v18,
            0,
            v36,
            1,
            v20,
            0,
            0,
            v37->fields.followerClassStatistics,
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
  const MethodInfo *v12; // x3

  if ( (byte_4CB0E4C & 1) == 0 )
  {
    sub_1C6BA08(&System_Action_TypeInfo);
    sub_1C6BA08(&Method_FriendOperationItemListViewManager_OnMoveEnd__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_FriendOperationItemListViewObject__get_Count__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_FriendOperationItemListViewObject__get_Item__);
    sub_1C6BA08(&StringLiteral_9938/*"OnMoveEnd"*/);
    byte_4CB0E4C = 1;
  }
  ListViewManager__ClippingItems((ListViewManager_o *)this, 1, 0, 0);
  ListViewManager__DragMaskStart((ListViewManager_o *)this, 0);
  ObjectList = FriendOperationItemListViewManager__get_ObjectList(this, v3);
  if ( !ObjectList )
LABEL_13:
    sub_1C6BC60(ObjectList, v5);
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
             (const MethodInfo_38006A4 *)Method_System_Collections_Generic_List_FriendOperationItemListViewObject__get_Item__);
    if ( ListViewManager__ClippingItem((ListViewManager_o *)this, (ListViewObject_o *)Item, 0) )
    {
      v11 = (System_Action_o *)sub_1C6BC54(System_Action_TypeInfo);
      System_Action___ctor(v11, (Il2CppObject *)this, Method_FriendOperationItemListViewManager_OnMoveEnd__, 0);
      if ( !Item )
        goto LABEL_13;
      ++v8;
      FriendOperationItemListViewObject__Init_32984680((FriendOperationItemListViewObject_o *)Item, 4, v11, 0.1, v12);
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
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_9938/*"OnMoveEnd"*/,
      0.2,
      0);
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
  Il2CppObject *current; // x21
  System_Action_o *v11; // x22
  __int64 v12; // x0
  __int64 v13; // x1
  const MethodInfo *v14; // x3
  System_Collections_Generic_List_Enumerator_object__o v15; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4CB0E4A & 1) == 0 )
  {
    sub_1C6BA08(&System_Action_TypeInfo);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_FriendOperationItemListViewObject__Dispose__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_FriendOperationItemListViewObject__MoveNext__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_FriendOperationItemListViewObject__get_Current__);
    sub_1C6BA08(&Method_FriendOperationItemListViewManager_OnMoveEnd__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_FriendOperationItemListViewObject__GetEnumerator__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_FriendOperationItemListViewObject__get_Count__);
    sub_1C6BA08(&StringLiteral_9938/*"OnMoveEnd"*/);
    byte_4CB0E4A = 1;
  }
  memset(&v15, 0, sizeof(v15));
  ObjectList = (System_Collections_Generic_List_object__o *)FriendOperationItemListViewManager__get_ObjectList(
                                                              this,
                                                              *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_1C6BC60(0, v8);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_9938/*"OnMoveEnd"*/,
      delay,
      0);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v15,
      ObjectList,
      (const MethodInfo_380146C *)Method_System_Collections_Generic_List_FriendOperationItemListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v15,
              (const MethodInfo_3586524 *)Method_System_Collections_Generic_List_Enumerator_FriendOperationItemListViewObject__MoveNext__) )
    {
      current = v15.fields._current;
      v11 = (System_Action_o *)sub_1C6BC54(System_Action_TypeInfo);
      System_Action___ctor(v11, (Il2CppObject *)this, Method_FriendOperationItemListViewManager_OnMoveEnd__, 0);
      if ( !current )
        sub_1C6BC60(v12, v13);
      FriendOperationItemListViewObject__Init_32984680(
        (FriendOperationItemListViewObject_o *)current,
        mode,
        v11,
        delay,
        v14);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v15,
      (const MethodInfo_3586520 *)Method_System_Collections_Generic_List_Enumerator_FriendOperationItemListViewObject__Dispose__);
  }
}


// local variable allocation has failed, the output may be wrong!
void FriendOperationItemListViewManager__RequestListObject_32984780(
        FriendOperationItemListViewManager_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *ObjectList; // x0
  __int64 v6; // x1
  int32_t size; // w8
  Il2CppObject *current; // x21
  System_Action_o *v9; // x22
  __int64 v10; // x0
  __int64 v11; // x1
  const MethodInfo *v12; // x3
  System_Collections_Generic_List_Enumerator_object__o v13; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4CB0E4B & 1) == 0 )
  {
    sub_1C6BA08(&System_Action_TypeInfo);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_FriendOperationItemListViewObject__Dispose__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_FriendOperationItemListViewObject__MoveNext__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_FriendOperationItemListViewObject__get_Current__);
    sub_1C6BA08(&Method_FriendOperationItemListViewManager_OnMoveEnd__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_FriendOperationItemListViewObject__GetEnumerator__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_FriendOperationItemListViewObject__get_Count__);
    sub_1C6BA08(&StringLiteral_9938/*"OnMoveEnd"*/);
    byte_4CB0E4B = 1;
  }
  memset(&v13, 0, sizeof(v13));
  ObjectList = (System_Collections_Generic_List_object__o *)FriendOperationItemListViewManager__get_ObjectList(
                                                              this,
                                                              *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_1C6BC60(0, v6);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_9938/*"OnMoveEnd"*/,
      0.0,
      0);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v13,
      ObjectList,
      (const MethodInfo_380146C *)Method_System_Collections_Generic_List_FriendOperationItemListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v13,
              (const MethodInfo_3586524 *)Method_System_Collections_Generic_List_Enumerator_FriendOperationItemListViewObject__MoveNext__) )
    {
      current = v13.fields._current;
      v9 = (System_Action_o *)sub_1C6BC54(System_Action_TypeInfo);
      System_Action___ctor(v9, (Il2CppObject *)this, Method_FriendOperationItemListViewManager_OnMoveEnd__, 0);
      if ( !current )
        sub_1C6BC60(v10, v11);
      FriendOperationItemListViewObject__Init_32985808((FriendOperationItemListViewObject_o *)current, mode, v9, v12);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v13,
      (const MethodInfo_3586520 *)Method_System_Collections_Generic_List_Enumerator_FriendOperationItemListViewObject__Dispose__);
  }
}


void FriendOperationItemListViewManager__ScrollViewEnabled(
        FriendOperationItemListViewManager_o *this,
        const MethodInfo *method)
{
  UnityEngine_Behaviour_o *scrollView; // x0

  scrollView = (UnityEngine_Behaviour_o *)this->fields.scrollView;
  if ( !scrollView )
    sub_1C6BC60(0, method);
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
  System_Collections_Generic_List_Enumerator_object__o i; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4CB0E53 & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__);
    sub_1C6BA08(&FriendOperationItemListViewItem_TypeInfo);
    sub_1C6BA08(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    byte_4CB0E53 = 1;
  }
  memset(&i, 0, sizeof(i));
  itemList = this->fields.itemList;
  if ( itemList )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v16,
      (System_Collections_Generic_List_object__o *)itemList,
      (const MethodInfo_380146C *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    i = v16;
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &i,
              (const MethodInfo_3586524 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__) )
    {
      if ( i.fields._current )
      {
        naturalAligment = FriendOperationItemListViewItem_TypeInfo->_2.naturalAligment;
        if ( i.fields._current->klass->_2.naturalAligment >= (unsigned int)naturalAligment
          && (FriendOperationItemListViewItem_c *)i.fields._current->klass->_2.typeHierarchy[naturalAligment - 1] == FriendOperationItemListViewItem_TypeInfo )
        {
          FriendOperationItemListViewItem__AnalyzeEntity(
            (FriendOperationItemListViewItem_o *)i.fields._current,
            classPos,
            inFollowerGrandGraphId,
            v8);
        }
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &i,
      (const MethodInfo_3586520 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
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
          (const MethodInfo_380146C *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
        for ( i = v16;
              System_Collections_Generic_List_Enumerator_object___MoveNext(
                &i,
                (const MethodInfo_3586524 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
              i.fields._current->klass->vtable[4].methodPtr() )
        {
          if ( !i.fields._current )
            sub_1C6BC60(0, v13);
        }
        System_Collections_Generic_List_Enumerator_object___Dispose(
          &i,
          (const MethodInfo_3586520 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
        itemSortList = (System_Collections_Generic_List_object__o *)this->fields.itemSortList;
        if ( itemSortList )
        {
          if ( itemSortList->fields._size < 1 )
            goto LABEL_29;
          itemSortList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                        itemSortList,
                                                                        0,
                                                                        (const MethodInfo_38006A4 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
          if ( !itemSortList )
            goto LABEL_31;
          LOBYTE(itemSortList[2].fields._items) = 1;
          itemSortList = (System_Collections_Generic_List_object__o *)this->fields.itemSortList;
          if ( !itemSortList )
            goto LABEL_31;
          itemSortList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                        itemSortList,
                                                                        itemSortList->fields._size - 1,
                                                                        (const MethodInfo_38006A4 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
          if ( !itemSortList )
            goto LABEL_31;
          LOBYTE(itemSortList[2].fields._items) = 1;
          itemSortList = (System_Collections_Generic_List_object__o *)this->fields.itemSortList;
          if ( !itemSortList )
            goto LABEL_31;
          size = itemSortList->fields._size;
          if ( size < 3 )
          {
LABEL_29:
            FriendOperationItemListViewManager__SetMode_32983736(this, 5, v14);
            return;
          }
          itemSortList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                        itemSortList,
                                                                        size - 1,
                                                                        (const MethodInfo_38006A4 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
          if ( itemSortList )
          {
            BYTE1(itemSortList[2].fields._items) = 1;
            goto LABEL_29;
          }
        }
      }
LABEL_31:
      sub_1C6BC60(itemSortList, v10);
    }
  }
}


void FriendOperationItemListViewManager__SetMode(
        FriendOperationItemListViewManager_o *this,
        int32_t mode,
        FriendOperationItemListViewManager_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v6; // x2

  this->fields.callbackFunc = callback;
  sub_1C6B9AC(&this->fields.callbackFunc, callback);
  FriendOperationItemListViewManager__SetMode_32983736(this, mode, v6);
}


// local variable allocation has failed, the output may be wrong!
void FriendOperationItemListViewManager__SetMode_32983736(
        FriendOperationItemListViewManager_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  void *emptyMessageBase; // x0
  __int64 v6; // x1
  int32_t v7; // w8
  System_Collections_Generic_List_object__o *v8; // x20
  int32_t v9; // w21
  Il2CppObject *v10; // x22
  System_Action_o *v11; // x23
  const MethodInfo *v12; // x3
  const MethodInfo *v13; // x2
  float v14; // s0
  System_String_o *v15; // x1
  const MethodInfo *v16; // x1
  int32_t v17; // w8
  System_Collections_Generic_List_object__o *v18; // x20
  int32_t v19; // w21
  Il2CppObject *Item; // x22
  System_Action_o *v21; // x23
  const MethodInfo *v22; // x3
  const MethodInfo *v23; // x1
  int32_t v24; // w8
  System_Collections_Generic_List_object__o *v25; // x20
  int32_t v26; // w21
  Il2CppObject *v27; // x22
  System_Action_o *v28; // x23
  const MethodInfo *v29; // x3

  if ( (byte_4CB0E49 & 1) == 0 )
  {
    sub_1C6BA08(&System_Action_TypeInfo);
    sub_1C6BA08(&Method_FriendOperationItemListViewManager_OnMoveEnd__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_FriendOperationItemListViewObject__get_Count__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_FriendOperationItemListViewObject__get_Item__);
    sub_1C6BA08(&StringLiteral_9938/*"OnMoveEnd"*/);
    sub_1C6BA08(&StringLiteral_11345/*"RequestInto"*/);
    byte_4CB0E49 = 1;
  }
  if ( mode != 5 )
  {
    this->fields.initMode = mode;
    this->fields.callbackCount = ListViewManager__get_ObjectSum((ListViewManager_o *)this, 0);
    ListViewManager__set_IsInput((ListViewManager_o *)this, mode == 2, 0);
    switch ( mode )
    {
      case 1:
        emptyMessageBase = this->fields.emptyMessageBase;
        if ( !emptyMessageBase )
          goto LABEL_28;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)emptyMessageBase, 0, 0);
        v14 = 0.0;
        v15 = (System_String_o *)StringLiteral_11345/*"RequestInto"*/;
        goto LABEL_27;
      case 2:
        FriendOperationItemListViewManager__RequestListObject_32984780(this, 3, v13);
        return;
      case 3:
        ListViewManager__DragMaskStart((ListViewManager_o *)this, 0);
        emptyMessageBase = FriendOperationItemListViewManager__get_ClippingObjectList(this, v16);
        if ( !emptyMessageBase )
          goto LABEL_28;
        v17 = *((_DWORD *)emptyMessageBase + 6);
        v18 = (System_Collections_Generic_List_object__o *)emptyMessageBase;
        if ( v17 < 1 )
          goto LABEL_26;
        this->fields.callbackCount = v17;
        v19 = 0;
        while ( 1 )
        {
          Item = System_Collections_Generic_List_object___get_Item(
                   v18,
                   v19,
                   (const MethodInfo_38006A4 *)Method_System_Collections_Generic_List_FriendOperationItemListViewObject__get_Item__);
          v21 = (System_Action_o *)sub_1C6BC54(System_Action_TypeInfo);
          System_Action___ctor(v21, (Il2CppObject *)this, Method_FriendOperationItemListViewManager_OnMoveEnd__, 0);
          if ( !Item )
            break;
          FriendOperationItemListViewObject__Init_32984680(
            (FriendOperationItemListViewObject_o *)Item,
            5,
            v21,
            0.1,
            v22);
          if ( ++v19 >= v18->fields._size )
            return;
        }
        goto LABEL_28;
      case 4:
        ListViewManager__DragMaskStart((ListViewManager_o *)this, 0);
        emptyMessageBase = FriendOperationItemListViewManager__get_ClippingObjectList(this, v23);
        if ( !emptyMessageBase )
          goto LABEL_28;
        v24 = *((_DWORD *)emptyMessageBase + 6);
        v25 = (System_Collections_Generic_List_object__o *)emptyMessageBase;
        if ( v24 < 1 )
          goto LABEL_26;
        this->fields.callbackCount = v24;
        v26 = 0;
        break;
      default:
        return;
    }
    while ( 1 )
    {
      v27 = System_Collections_Generic_List_object___get_Item(
              v25,
              v26,
              (const MethodInfo_38006A4 *)Method_System_Collections_Generic_List_FriendOperationItemListViewObject__get_Item__);
      v28 = (System_Action_o *)sub_1C6BC54(System_Action_TypeInfo);
      System_Action___ctor(v28, (Il2CppObject *)this, Method_FriendOperationItemListViewManager_OnMoveEnd__, 0);
      if ( !v27 )
        break;
      FriendOperationItemListViewObject__Init_32984680((FriendOperationItemListViewObject_o *)v27, 6, v28, 0.1, v29);
      if ( ++v26 >= v25->fields._size )
        return;
    }
LABEL_28:
    sub_1C6BC60(emptyMessageBase, v6);
  }
  emptyMessageBase = FriendOperationItemListViewManager__get_ObjectList(this, *(const MethodInfo **)&mode);
  if ( !emptyMessageBase )
    goto LABEL_28;
  v7 = *((_DWORD *)emptyMessageBase + 6);
  v8 = (System_Collections_Generic_List_object__o *)emptyMessageBase;
  if ( v7 >= 1 )
  {
    this->fields.callbackCount = v7;
    v9 = 0;
    while ( 1 )
    {
      v10 = System_Collections_Generic_List_object___get_Item(
              v8,
              v9,
              (const MethodInfo_38006A4 *)Method_System_Collections_Generic_List_FriendOperationItemListViewObject__get_Item__);
      v11 = (System_Action_o *)sub_1C6BC54(System_Action_TypeInfo);
      System_Action___ctor(v11, (Il2CppObject *)this, Method_FriendOperationItemListViewManager_OnMoveEnd__, 0);
      if ( !v10 )
        break;
      FriendOperationItemListViewObject__Init_32984680((FriendOperationItemListViewObject_o *)v10, 7, v11, 0.1, v12);
      if ( ++v9 >= v8->fields._size )
        return;
    }
    goto LABEL_28;
  }
LABEL_26:
  this->fields.callbackCount = 1;
  v15 = (System_String_o *)StringLiteral_9938/*"OnMoveEnd"*/;
  v14 = 0.2;
LABEL_27:
  UnityEngine_MonoBehaviour__Invoke((UnityEngine_MonoBehaviour_o *)this, v15, v14, 0);
}


void FriendOperationItemListViewManager__SetMode_32984628(
        FriendOperationItemListViewManager_o *this,
        int32_t mode,
        System_Action_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v6; // x2

  this->fields.callbackFunc2 = callback;
  sub_1C6B9AC(&this->fields.callbackFunc2, callback);
  FriendOperationItemListViewManager__SetMode_32983736(this, mode, v6);
}


void FriendOperationItemListViewManager__SetObjectItem(
        FriendOperationItemListViewManager_o *this,
        ListViewObject_o *obj,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  FriendOperationItemListViewManager_o *v5; // x20
  __int64 naturalAligment; // x10
  int32_t v7; // w1

  v5 = this;
  if ( (byte_4CB0E48 & 1) == 0 )
  {
    this = (FriendOperationItemListViewManager_o *)sub_1C6BA08(&FriendOperationItemListViewObject_TypeInfo);
    byte_4CB0E48 = 1;
  }
  if ( !obj
    || (naturalAligment = FriendOperationItemListViewObject_TypeInfo->_2.naturalAligment,
        obj->klass->_2.naturalAligment < (unsigned int)naturalAligment)
    || (FriendOperationItemListViewObject_c *)obj->klass->_2.typeHierarchy[naturalAligment - 1] != FriendOperationItemListViewObject_TypeInfo )
  {
    sub_1C6BC60(this, obj);
  }
  if ( v5->fields.initMode == 2 )
    v7 = 3;
  else
    v7 = 2;
  FriendOperationItemListViewObject__Init_32983608(
    (FriendOperationItemListViewObject_o *)obj,
    v7,
    (const MethodInfo *)item);
}


void FriendOperationItemListViewManager__SetSortButtonImage(
        FriendOperationItemListViewManager_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *sortKindLabel; // x20
  __int64 v4; // x1
  ListViewSort_o *sort; // x0
  UILabel_o *v6; // x20
  UnityEngine_Object_o *sortOrderSprite; // x20
  struct ListViewSort_o *v8; // x8
  int32_t sortKind; // w9
  System_String_o **v10; // x8
  struct ListViewSort_o *v11; // x8
  System_String_o **v12; // x9
  System_String_o **v13; // x10
  System_String_o **v14; // x8
  System_String_o **v15; // x8

  if ( (byte_4CB0E52 & 1) == 0 )
  {
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    sub_1C6BA08(&StringLiteral_17538/*"btn_sort_up"*/);
    sub_1C6BA08(&StringLiteral_17636/*"btn_txt_up"*/);
    sub_1C6BA08(&StringLiteral_17587/*"btn_txt_new"*/);
    sub_1C6BA08(&StringLiteral_17577/*"btn_txt_down"*/);
    sub_1C6BA08(&StringLiteral_17594/*"btn_txt_old"*/);
    sub_1C6BA08(&StringLiteral_17535/*"btn_sort_down"*/);
    byte_4CB0E52 = 1;
  }
  sortKindLabel = (UnityEngine_Object_o *)this->fields.sortKindLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(sortKindLabel, 0, 0) )
  {
    sort = this->fields.sort;
    if ( !sort )
      goto LABEL_36;
    v6 = this->fields.sortKindLabel;
    sort = (ListViewSort_o *)ListViewSort__GetSortKindButtonText(sort, 0, 0);
    if ( !v6 )
      goto LABEL_36;
    UILabel__set_text(v6, (System_String_o *)sort, 0);
  }
  sortOrderSprite = (UnityEngine_Object_o *)this->fields.sortOrderSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  sort = (ListViewSort_o *)UnityEngine_Object__op_Inequality(sortOrderSprite, 0, 0);
  if ( ((unsigned __int8)sort & 1) != 0 )
  {
    v8 = this->fields.sort;
    if ( !v8 )
      goto LABEL_36;
    sortKind = v8->fields.sortKind;
    if ( sortKind == 1 || sortKind == 11 || (unsigned int)(sortKind - 17) <= 1 )
    {
      sort = (ListViewSort_o *)this->fields.sortExplanationSprite;
      if ( !sort )
        goto LABEL_36;
      v10 = (System_String_o **)(v8->fields.isAscendingOrder ? &StringLiteral_17594/*"btn_txt_old"*/ : &StringLiteral_17587/*"btn_txt_new"*/);
      UISprite__set_spriteName((UISprite_o *)sort, *v10, 0);
      v11 = this->fields.sort;
      if ( !v11 )
        goto LABEL_36;
      sort = (ListViewSort_o *)this->fields.sortOrderSprite;
      if ( !sort )
        goto LABEL_36;
      v12 = (System_String_o **)&StringLiteral_17535/*"btn_sort_down"*/;
      v13 = (System_String_o **)&StringLiteral_17538/*"btn_sort_up"*/;
    }
    else
    {
      sort = (ListViewSort_o *)this->fields.sortExplanationSprite;
      if ( !sort )
        goto LABEL_36;
      v15 = (System_String_o **)(v8->fields.isAscendingOrder ? &StringLiteral_17636/*"btn_txt_up"*/ : &StringLiteral_17577/*"btn_txt_down"*/);
      UISprite__set_spriteName((UISprite_o *)sort, *v15, 0);
      v11 = this->fields.sort;
      if ( !v11 )
        goto LABEL_36;
      sort = (ListViewSort_o *)this->fields.sortOrderSprite;
      if ( !sort )
        goto LABEL_36;
      v12 = (System_String_o **)&StringLiteral_17538/*"btn_sort_up"*/;
      v13 = (System_String_o **)&StringLiteral_17535/*"btn_sort_down"*/;
    }
    if ( v11->fields.isAscendingOrder )
      v14 = v12;
    else
      v14 = v13;
    UISprite__set_spriteName((UISprite_o *)sort, *v14, 0);
    sort = (ListViewSort_o *)this->fields.sortExplanationSprite;
    if ( sort )
    {
      ((void (__fastcall *)(ListViewSort_o *, void *))sort->klass[2]._1.parent)(sort, sort->klass[2]._1.generic_class);
      return;
    }
LABEL_36:
    sub_1C6BC60(sort, v4);
  }
}


void FriendOperationItemListViewManager__SetSortKind(
        FriendOperationItemListViewManager_o *this,
        int32_t kind,
        const MethodInfo *method)
{
  struct ListViewSort_o *sort; // x8

  sort = this->fields.sort;
  if ( !sort )
    sub_1C6BC60(this, kind);
  sort->fields.sortKind = kind;
}


void FriendOperationItemListViewManager__SetupClassBoardInfo(
        FriendOperationItemListViewManager_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_int__int__o *classBoardMaxDictionary; // x0
  System_Collections_Generic_Dictionary_int__int__o **p_classBoardMaxDictionary; // x20
  System_Collections_Generic_Dictionary_int__int__o *v5; // x19
  System_Collections_ObjectModel_Collection_T__o *Master_object; // x0
  __int64 v7; // x1
  __int64 v8; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v11; // x9
  int32_t *p_offset; // x10
  __int64 v13; // x0
  System_Collections_Generic_IEnumerator_T__c *v14; // x8
  __int64 v15; // x9
  int32_t *v16; // x10
  __int64 v17; // x0
  __int64 v18; // x21
  Il2CppObject *v19; // x0
  __int64 v20; // x1
  ClassBoardSquareEntity_array *OtherThanNoneEntity; // x0
  __int64 v22; // x1
  System_Collections_Generic_IEnumerator_T__c *v23; // x8
  __int64 v24; // x9
  int32_t *v25; // x10
  __int64 v26; // x0

  if ( (byte_4CB0E54 & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_ObjectModel_Collection_ClassBoardBaseEntity__GetEnumerator__);
    sub_1C6BA08(&Method_DataManager_GetMaster_ClassBoardBaseMaster___);
    sub_1C6BA08(&Method_DataManager_GetMaster_ClassBoardSquareMaster___);
    sub_1C6BA08(&DataManager_TypeInfo);
    sub_1C6BA08(&Method_DataMasterBase_ClassBoardBaseMaster__ClassBoardBaseEntity__int__getEntityList__);
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_int__int__Add__);
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_int__int__Clear__);
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_int__int___ctor__);
    sub_1C6BA08(&System_Collections_Generic_Dictionary_int__int__TypeInfo);
    sub_1C6BA08(&System_IDisposable_TypeInfo);
    sub_1C6BA08(&System_Collections_Generic_IEnumerator_ClassBoardBaseEntity__TypeInfo);
    sub_1C6BA08(&System_Collections_IEnumerator_TypeInfo);
    byte_4CB0E54 = 1;
  }
  classBoardMaxDictionary = this->fields.classBoardMaxDictionary;
  p_classBoardMaxDictionary = &this->fields.classBoardMaxDictionary;
  if ( classBoardMaxDictionary )
  {
    System_Collections_Generic_Dictionary_int__int___Clear(
      classBoardMaxDictionary,
      (const MethodInfo_3449BB8 *)Method_System_Collections_Generic_Dictionary_int__int__Clear__);
  }
  else
  {
    v5 = (System_Collections_Generic_Dictionary_int__int__o *)sub_1C6BC54(System_Collections_Generic_Dictionary_int__int__TypeInfo);
    System_Collections_Generic_Dictionary_int__int____ctor(
      v5,
      (const MethodInfo_3449074 *)Method_System_Collections_Generic_Dictionary_int__int___ctor__);
    *p_classBoardMaxDictionary = v5;
    sub_1C6B9AC(p_classBoardMaxDictionary, v5);
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (System_Collections_ObjectModel_Collection_T__o *)DataManager__GetMaster_object_((const MethodInfo_313B314 *)Method_DataManager_GetMaster_ClassBoardBaseMaster___);
  if ( !Master_object
    || (Master_object = (System_Collections_ObjectModel_Collection_T__o *)Master_object[1].fields.items) == 0 )
  {
    sub_1C6BC60(Master_object, v7);
  }
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 Master_object,
                 (const MethodInfo_339243C *)Method_System_Collections_ObjectModel_Collection_ClassBoardBaseEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1C6BC60(0, v8);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v11 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v11;
        p_offset += 4;
        if ( !v11 )
          goto LABEL_15;
      }
      v13 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_15:
      v13 = sub_1C41D90(Enumerator, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v13)(
            Enumerator,
            *(_QWORD *)(v13 + 8))
        & 1) == 0 )
      break;
    v14 = Enumerator->klass;
    v15 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      v16 = &v14->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_ClassBoardBaseEntity__c **)v16 - 1) != System_Collections_Generic_IEnumerator_ClassBoardBaseEntity__TypeInfo )
      {
        --v15;
        v16 += 4;
        if ( !v15 )
          goto LABEL_22;
      }
      v17 = (__int64)&v14->vtable[*v16];
    }
    else
    {
LABEL_22:
      v17 = sub_1C41D90(Enumerator, System_Collections_Generic_IEnumerator_ClassBoardBaseEntity__TypeInfo, 0);
    }
    v18 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v17)(
            Enumerator,
            *(_QWORD *)(v17 + 8));
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    v19 = DataManager__GetMaster_object_((const MethodInfo_313B314 *)Method_DataManager_GetMaster_ClassBoardSquareMaster___);
    if ( !v18 )
      sub_1C6BC60(v19, v20);
    if ( !v19 )
      sub_1C6BC60(0, v20);
    OtherThanNoneEntity = ClassBoardSquareMaster__GetOtherThanNoneEntity(
                            (ClassBoardSquareMaster_o *)v19,
                            *(_DWORD *)(v18 + 16),
                            0);
    if ( OtherThanNoneEntity )
    {
      if ( !*p_classBoardMaxDictionary )
        sub_1C6BC60(OtherThanNoneEntity, v22);
      System_Collections_Generic_Dictionary_int__int___Add(
        *p_classBoardMaxDictionary,
        *(_DWORD *)(v18 + 16),
        OtherThanNoneEntity->max_length,
        (const MethodInfo_3449A38 *)Method_System_Collections_Generic_Dictionary_int__int__Add__);
    }
  }
  v23 = Enumerator->klass;
  v24 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
  if ( *(_WORD *)&Enumerator->klass->_2.rank )
  {
    v25 = &v23->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v25 - 1) != System_IDisposable_TypeInfo )
    {
      --v24;
      v25 += 4;
      if ( !v24 )
        goto LABEL_35;
    }
    v26 = (__int64)&v23->vtable[*v25];
  }
  else
  {
LABEL_35:
    v26 = sub_1C41D90(Enumerator, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v26)(Enumerator, *(_QWORD *)(v26 + 8));
}


void FriendOperationItemListViewManager__add_callbackFunc(
        FriendOperationItemListViewManager_o *this,
        FriendOperationItemListViewManager_CallbackFunc_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *callbackFunc; // x21
  struct FriendOperationItemListViewManager_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v7; // x0
  __int64 v8; // x0
  bool v9; // zf
  FriendOperationItemListViewManager_o *v10; // x0
  FriendOperationItemListViewManager_CallbackFunc_o *v11; // x1
  const MethodInfo *v12; // x2

  if ( (byte_4CB0E3C & 1) == 0 )
  {
    sub_1C6BA08(&FriendOperationItemListViewManager_CallbackFunc_TypeInfo);
    byte_4CB0E3C = 1;
  }
  callbackFunc = (System_Delegate_o *)this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  while ( 1 )
  {
    v7 = System_Delegate__Combine(callbackFunc, (System_Delegate_o *)value, 0);
    if ( v7 )
    {
      if ( (FriendOperationItemListViewManager_CallbackFunc_c *)v7->klass != FriendOperationItemListViewManager_CallbackFunc_TypeInfo )
        break;
    }
    v8 = sub_1CC77DC(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (FriendOperationItemListViewManager_o *)sub_1C6BFFC(v7);
  FriendOperationItemListViewManager__remove_callbackFunc(v10, v11, v12);
}


void FriendOperationItemListViewManager__add_callbackFunc2(
        FriendOperationItemListViewManager_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *callbackFunc2; // x21
  struct System_Action_o **p_callbackFunc2; // x20
  System_Delegate_o *v7; // x0
  __int64 v8; // x0
  bool v9; // zf
  FriendOperationItemListViewManager_o *v10; // x0
  System_Action_o *v11; // x1
  const MethodInfo *v12; // x2

  if ( (byte_4CB0E3E & 1) == 0 )
  {
    sub_1C6BA08(&System_Action_TypeInfo);
    byte_4CB0E3E = 1;
  }
  callbackFunc2 = (System_Delegate_o *)this->fields.callbackFunc2;
  p_callbackFunc2 = &this->fields.callbackFunc2;
  while ( 1 )
  {
    v7 = System_Delegate__Combine(callbackFunc2, (System_Delegate_o *)value, 0);
    if ( v7 )
    {
      if ( (System_Action_c *)v7->klass != System_Action_TypeInfo )
        break;
    }
    v8 = sub_1CC77DC(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (FriendOperationItemListViewManager_o *)sub_1C6BFFC(v7);
  FriendOperationItemListViewManager__remove_callbackFunc2(v10, v11, v12);
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
  Il2CppObject *current; // x21
  _BOOL8 v7; // x0
  __int64 v8; // x1
  Il2CppObject *Component_object; // x0
  const MethodInfo *v10; // x1
  Il2CppObject *v11; // x21
  ListViewItem_o *Item; // x0
  __int64 v13; // x1
  _BOOL8 v14; // x0
  __int64 v15; // x1
  struct System_Object_array *items; // x8
  _QWORD *v17; // x9
  __int64 size; // x10
  Il2CppClass **v19; // x0
  System_Collections_Generic_List_Enumerator_object__o v21; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v22; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_4CB0E44 & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_1C6BA08(&Method_UnityEngine_GameObject_GetComponent_FriendOperationItemListViewObject___);
    sub_1C6BA08(&Method_System_Collections_Generic_List_FriendOperationItemListViewObject__Add__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_FriendOperationItemListViewObject___ctor__);
    sub_1C6BA08(&System_Collections_Generic_List_FriendOperationItemListViewObject__TypeInfo);
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    byte_4CB0E44 = 1;
  }
  memset(&v22, 0, sizeof(v22));
  v3 = (System_Collections_Generic_List_object__o *)sub_1C6BC54(System_Collections_Generic_List_FriendOperationItemListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_3800140 *)Method_System_Collections_Generic_List_FriendOperationItemListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_1C6BC60(0, v4);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v21,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_380146C *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v22 = v21;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v22,
            (const MethodInfo_3586524 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v22.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v7 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0, 0);
    if ( v7 )
    {
      if ( !current )
        sub_1C6BC60(v7, v8);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_319312C *)Method_UnityEngine_GameObject_GetComponent_FriendOperationItemListViewObject___);
      v11 = Component_object;
      if ( !Component_object )
        sub_1C6BC60(0, v10);
      Item = (ListViewItem_o *)FriendOperationItemListViewObject__GetItem(
                                 (FriendOperationItemListViewObject_o *)Component_object,
                                 v10);
      if ( !Item )
        sub_1C6BC60(0, v13);
      if ( Item->fields.isTermination )
      {
        v14 = ListViewManager__ClippingItem_44066648((ListViewManager_o *)this, Item, 0);
        if ( v14 )
        {
          if ( !v3 )
            sub_1C6BC60(v14, v15);
          items = v3->fields._items;
          v17 = Method_System_Collections_Generic_List_FriendOperationItemListViewObject__Add__;
          ++v3->fields._version;
          if ( !items )
            sub_1C6BC60(v14, v15);
          size = v3->fields._size;
          if ( (unsigned int)size < LODWORD(items->max_length) )
            goto LABEL_17;
LABEL_21:
          System_Collections_Generic_List_object___AddWithResize(
            v3,
            v11,
            *(const MethodInfo_3800974 **)(*(_QWORD *)(v17[4] + 192LL) + 112LL));
        }
      }
      else
      {
        if ( !v3 )
          sub_1C6BC60(Item, v13);
        items = v3->fields._items;
        v17 = Method_System_Collections_Generic_List_FriendOperationItemListViewObject__Add__;
        ++v3->fields._version;
        if ( !items )
          sub_1C6BC60(Item, v13);
        size = v3->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
          goto LABEL_21;
LABEL_17:
        v19 = &items->obj.klass + size;
        v3->fields._size = size + 1;
        v19[4] = (Il2CppClass *)v11;
        sub_1C6B9AC(v19 + 4, v11);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v22,
    (const MethodInfo_3586520 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
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

  if ( (byte_4CB0E45 & 1) == 0 )
  {
    sub_1C6BA08(&FriendOperationItemListViewItem_TypeInfo);
    sub_1C6BA08(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    byte_4CB0E45 = 1;
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
             (const MethodInfo_38006A4 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
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
      sub_1C6BC60(0, v8);
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
  Il2CppObject *current; // x20
  _BOOL8 v7; // x0
  __int64 v8; // x1
  Il2CppObject *Component_object; // x0
  Il2CppObject *v10; // x1
  struct System_Object_array *items; // x8
  _QWORD *v12; // x9
  __int64 size; // x10
  Il2CppClass **v14; // x0
  System_Collections_Generic_List_Enumerator_object__o v16; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v17; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4CB0E43 & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_1C6BA08(&Method_UnityEngine_GameObject_GetComponent_FriendOperationItemListViewObject___);
    sub_1C6BA08(&Method_System_Collections_Generic_List_FriendOperationItemListViewObject__Add__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_FriendOperationItemListViewObject___ctor__);
    sub_1C6BA08(&System_Collections_Generic_List_FriendOperationItemListViewObject__TypeInfo);
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    byte_4CB0E43 = 1;
  }
  memset(&v17, 0, sizeof(v17));
  v3 = (System_Collections_Generic_List_object__o *)sub_1C6BC54(System_Collections_Generic_List_FriendOperationItemListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_3800140 *)Method_System_Collections_Generic_List_FriendOperationItemListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_1C6BC60(0, v4);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v16,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_380146C *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v17 = v16;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v17,
            (const MethodInfo_3586524 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v17.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v7 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0, 0);
    if ( v7 )
    {
      if ( !current )
        sub_1C6BC60(v7, v8);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_319312C *)Method_UnityEngine_GameObject_GetComponent_FriendOperationItemListViewObject___);
      v10 = Component_object;
      if ( !v3 )
        sub_1C6BC60(Component_object, Component_object);
      items = v3->fields._items;
      v12 = Method_System_Collections_Generic_List_FriendOperationItemListViewObject__Add__;
      ++v3->fields._version;
      if ( !items )
        sub_1C6BC60(Component_object, Component_object);
      size = v3->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v3,
          Component_object,
          *(const MethodInfo_3800974 **)(*(_QWORD *)(v12[4] + 192LL) + 112LL));
      }
      else
      {
        v14 = &items->obj.klass + size;
        v3->fields._size = size + 1;
        v14[4] = (Il2CppClass *)v10;
        sub_1C6B9AC(v14 + 4, v10);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v17,
    (const MethodInfo_3586520 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
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
  struct FriendOperationItemListViewManager_CallbackFunc_o *callbackFunc; // x20
  __int64 v5; // x0
  __int64 v6; // x1
  unsigned int Index; // w0

  callbackFunc = this->fields.callbackFunc;
  this->fields.callbackFunc = 0;
  v5 = sub_1C6B9AC(&this->fields.callbackFunc, 0);
  if ( callbackFunc )
  {
    if ( !obj )
      sub_1C6BC60(v5, v6);
    Index = ListViewObject__get_Index(obj, 0);
    ((void (__fastcall *)(intptr_t, __int64, _QWORD, intptr_t))callbackFunc->fields.invoke_impl)(
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
  struct FriendOperationItemListViewManager_CallbackFunc_o *callbackFunc; // x20
  __int64 v5; // x0
  __int64 v6; // x1
  unsigned int Index; // w0

  callbackFunc = this->fields.callbackFunc;
  this->fields.callbackFunc = 0;
  v5 = sub_1C6B9AC(&this->fields.callbackFunc, 0);
  if ( callbackFunc )
  {
    if ( !obj )
      sub_1C6BC60(v5, v6);
    Index = ListViewObject__get_Index(obj, 0);
    ((void (__fastcall *)(intptr_t, __int64, _QWORD, intptr_t))callbackFunc->fields.invoke_impl)(
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
  struct FriendOperationItemListViewManager_CallbackFunc_o *callbackFunc; // x20
  __int64 v5; // x0
  __int64 v6; // x1
  unsigned int Index; // w0

  callbackFunc = this->fields.callbackFunc;
  this->fields.callbackFunc = 0;
  v5 = sub_1C6B9AC(&this->fields.callbackFunc, 0);
  if ( callbackFunc )
  {
    if ( !obj )
      sub_1C6BC60(v5, v6);
    Index = ListViewObject__get_Index(obj, 0);
    ((void (__fastcall *)(intptr_t, __int64, _QWORD, intptr_t))callbackFunc->fields.invoke_impl)(
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
  struct FriendOperationItemListViewManager_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v7; // x0
  __int64 v8; // x0
  bool v9; // zf
  FriendOperationItemListViewManager_o *v10; // x0
  System_Action_o *v11; // x1
  const MethodInfo *v12; // x2

  if ( (byte_4CB0E3D & 1) == 0 )
  {
    sub_1C6BA08(&FriendOperationItemListViewManager_CallbackFunc_TypeInfo);
    byte_4CB0E3D = 1;
  }
  callbackFunc = (System_Delegate_o *)this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  while ( 1 )
  {
    v7 = System_Delegate__Remove(callbackFunc, (System_Delegate_o *)value, 0);
    if ( v7 )
    {
      if ( (FriendOperationItemListViewManager_CallbackFunc_c *)v7->klass != FriendOperationItemListViewManager_CallbackFunc_TypeInfo )
        break;
    }
    v8 = sub_1CC77DC(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (FriendOperationItemListViewManager_o *)sub_1C6BFFC(v7);
  FriendOperationItemListViewManager__add_callbackFunc2(v10, v11, v12);
}


void FriendOperationItemListViewManager__remove_callbackFunc2(
        FriendOperationItemListViewManager_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *callbackFunc2; // x21
  struct System_Action_o **p_callbackFunc2; // x20
  System_Delegate_o *v7; // x0
  __int64 v8; // x0
  bool v9; // zf
  FriendOperationItemListViewManager_o *v10; // x0
  const MethodInfo *v11; // x1

  if ( (byte_4CB0E3F & 1) == 0 )
  {
    sub_1C6BA08(&System_Action_TypeInfo);
    byte_4CB0E3F = 1;
  }
  callbackFunc2 = (System_Delegate_o *)this->fields.callbackFunc2;
  p_callbackFunc2 = &this->fields.callbackFunc2;
  while ( 1 )
  {
    v7 = System_Delegate__Remove(callbackFunc2, (System_Delegate_o *)value, 0);
    if ( v7 )
    {
      if ( (System_Action_c *)v7->klass != System_Action_TypeInfo )
        break;
    }
    v8 = sub_1CC77DC(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (FriendOperationItemListViewManager_o *)sub_1C6BFFC(v7);
  FriendOperationItemListViewManager__get_isMessageApply(v10, v11);
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
    sub_1C6BC60(scrollBar, method);
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
    sub_1C6BC60(scrollBar, b);
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
  intptr_t v4; // x8
  int v8; // w22
  Il2CppObject *m_target; // x9
  __int64 v10; // x0

  v4 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v4;
  this->fields.m_target = object;
  sub_1C6B9AC(&this->fields.m_target, object);
  v8 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1C6BAC8(method) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1C6BC7C(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C6BB30(v10, 0);
    }
    goto LABEL_5;
  }
  if ( v8 != 2 )
  {
LABEL_5:
    m_target = this->fields.m_target;
    this->fields.invoke_impl = this->fields.method_ptr;
    this->fields.method_code = (intptr_t)m_target;
    goto LABEL_6;
  }
  this->fields.invoke_impl = (intptr_t)sub_1A99754;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1A996FC;
}


System_IAsyncResult_o *FriendOperationItemListViewManager_CallbackFunc__BeginInvoke(
        FriendOperationItemListViewManager_CallbackFunc_o *this,
        int32_t kind,
        int32_t result,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  _QWORD v10[3]; // [xsp+8h] [xbp-58h] BYREF
  int32_t v11; // [xsp+28h] [xbp-38h] BYREF
  int32_t v12; // [xsp+2Ch] [xbp-34h] BYREF

  v11 = result;
  v12 = kind;
  if ( (byte_4CB0E58 & 1) == 0 )
  {
    sub_1C6BA08(&int_TypeInfo);
    sub_1C6BA08(&FriendOperationItemListViewManager_ResultKind_TypeInfo);
    byte_4CB0E58 = 1;
  }
  v10[2] = 0;
  v10[0] = j_il2cpp_value_box_0(FriendOperationItemListViewManager_ResultKind_TypeInfo, &v12);
  v10[1] = j_il2cpp_value_box_0(int_TypeInfo, &v11);
  return (System_IAsyncResult_o *)sub_1C6B9BC(this, v10, callback, object);
}


void FriendOperationItemListViewManager_CallbackFunc__EndInvoke(
        FriendOperationItemListViewManager_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C6B9C0(result, 0, method);
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

  if ( (byte_4CB0E59 & 1) == 0 )
  {
    sub_1C6BA08(&FriendOperationItemListViewManager___c_TypeInfo);
    byte_4CB0E59 = 1;
  }
  v1 = (Il2CppObject *)sub_1C6BC54(FriendOperationItemListViewManager___c_TypeInfo);
  System_Object___ctor(v1, 0);
  FriendOperationItemListViewManager___c_TypeInfo->static_fields->__9 = (struct FriendOperationItemListViewManager___c_o *)v1;
  sub_1C6B9AC(FriendOperationItemListViewManager___c_TypeInfo->static_fields, v1);
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
  if ( (byte_4CB0E5A & 1) == 0 )
  {
    this = (FriendOperationItemListViewManager___c_o *)sub_1C6BA08(&UserFriendRequestHistoryEntity_TypeInfo);
    byte_4CB0E5A = 1;
  }
  if ( !b )
LABEL_11:
    sub_1C6BC60(this, a);
  a = (DataEntityBase_o *)UserFriendRequestHistoryEntity_TypeInfo;
  naturalAligment = UserFriendRequestHistoryEntity_TypeInfo->_2.naturalAligment;
  if ( b->klass->_2.naturalAligment < (unsigned int)naturalAligment
    || (UserFriendRequestHistoryEntity_c *)b->klass->_2.typeHierarchy[naturalAligment - 1] != UserFriendRequestHistoryEntity_TypeInfo )
  {
    this = (FriendOperationItemListViewManager___c_o *)sub_1C6BFFC(b);
    goto LABEL_11;
  }
  if ( !v5 )
    goto LABEL_11;
  if ( *(unsigned __int8 *)(*v5 + 304) >= (unsigned int)naturalAligment
    && *(UserFriendRequestHistoryEntity_c **)(*(_QWORD *)(*v5 + 200) + 8 * (naturalAligment - 1)) == UserFriendRequestHistoryEntity_TypeInfo )
  {
    return System_Int64__CompareTo_65479324((int64_t)&b[2].monitor, v5[5], 0);
  }
  v8 = (FriendOperationItemListViewObject_o *)sub_1C6BFFC(v5);
  FriendOperationItemListViewObject__add_callbackFunc(v8, v9, v10);
  return result;
}