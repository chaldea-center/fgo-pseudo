void __fastcall FriendOperationItemListViewManager___cctor(const MethodInfo *method)
{
  System_Array_o *v1; // x0
  System_Array_o *v2; // x19
  struct FriendOperationItemListViewManager_StaticFields *static_fields; // x0
  System_RuntimeFieldHandle_o v4; // 0:w1.4

  if ( (byte_4A5650B & 1) == 0 )
  {
    sub_1B885B0(&ListViewSort_FilterKind___TypeInfo);
    sub_1B885B0(&FriendOperationItemListViewManager_TypeInfo);
    sub_1B885B0(&Field__PrivateImplementationDetails__6B3B6BC014A692F226080502E0DED60D67C84EBC03CC8CF43A550A89694FF5C0);
    byte_4A5650B = 1;
  }
  FriendOperationItemListViewManager_TypeInfo->static_fields->isInitSystem = 0;
  v1 = (System_Array_o *)sub_1B88658(ListViewSort_FilterKind___TypeInfo, 8LL);
  v4.fields.value = Field__PrivateImplementationDetails__6B3B6BC014A692F226080502E0DED60D67C84EBC03CC8CF43A550A89694FF5C0;
  v2 = v1;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_61615112(v1, v4, 0LL);
  static_fields = FriendOperationItemListViewManager_TypeInfo->static_fields;
  static_fields->classFilter = (struct ListViewSort_FilterKind_array *)v2;
  sub_1B88554(&static_fields->classFilter, v2);
}


void __fastcall FriendOperationItemListViewManager___ctor(
        FriendOperationItemListViewManager_o *this,
        const MethodInfo *method)
{
  ListViewManager___ctor((ListViewManager_o *)this, 0LL);
}


void __fastcall FriendOperationItemListViewManager__CloseSortDialog(
        FriendOperationItemListViewManager_o *this,
        bool isResult,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v6; // x1

  if ( (byte_4A56504 & 1) == 0 )
  {
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4A56504 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1B8880C(0LL, v6);
  CommonUI__CloseOtherUserSortDialog((CommonUI_o *)Instance, 0LL, 0LL);
  if ( isResult )
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, 3, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FriendOperationItemListViewManager__CreateList(
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
  __int64 v12; // x8
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
  UserBlacklistEntity_o *v27; // x23
  __int64 methodPtr_low; // x10
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x8
  OtherUserGameEntity_o *v30; // x25
  int32_t size; // w26
  System_Collections_Generic_Dictionary_int__int__o *classBoardMaxDictionary; // x27
  FriendOperationItemListViewItem_o *v33; // x24
  const MethodInfo *v34; // x7
  __int64 v35; // x8
  _QWORD *v36; // x9
  __int64 v37; // x10
  __int64 v38; // x8
  __int64 *v39; // x8
  Il2CppObject *v40; // x20
  System_Collections_Generic_IEnumerable_T__o *v41; // x22
  System_Collections_Generic_List_object__o *v42; // x21
  System_Comparison_T__o *v43; // x22
  Il2CppObject *v44; // x23
  struct FriendOperationItemListViewManager___c_StaticFields *static_fields; // x0
  int32_t v46; // w23
  BalanceConfig_c *v47; // x0
  int32_t MaxFriendHistoryNum; // w1
  int32_t v49; // w22
  UserFriendRequestHistoryEntity_o *v50; // x23
  __int64 v51; // x10
  struct System_Collections_Generic_List_ListViewItem__o *v52; // x8
  OtherUserGameEntity_o *v53; // x25
  int32_t v54; // w26
  System_Collections_Generic_Dictionary_int__int__o *v55; // x27
  FriendOperationItemListViewItem_o *v56; // x24
  const MethodInfo *v57; // x7
  __int64 v58; // x8
  _QWORD *v59; // x9
  __int64 v60; // x10
  __int64 v61; // x8
  TblFriendMaster_o *v62; // x23
  OtherUserGameEntity_array *List; // x24
  OtherUserGameEntity_array *v64; // x23
  __int64 v65; // x8
  unsigned __int64 v66; // x29
  struct System_Collections_Generic_List_ListViewItem__o *v67; // x9
  int32_t v68; // w26
  OtherUserGameEntity_o *v69; // x27
  System_Collections_Generic_Dictionary_int__int__o *v70; // x28
  FriendOperationItemListViewItem_o *v71; // x25
  const MethodInfo *v72; // x6
  __int64 v73; // x8
  _QWORD *v74; // x9
  __int64 v75; // x10
  __int64 v76; // x8
  __int64 v77; // x8
  unsigned __int64 v78; // x29
  struct System_Collections_Generic_List_ListViewItem__o *v79; // x9
  int32_t v80; // w26
  OtherUserGameEntity_o *v81; // x27
  System_Collections_Generic_Dictionary_int__int__o *v82; // x28
  FriendOperationItemListViewItem_o *v83; // x25
  const MethodInfo *v84; // x6
  __int64 v85; // x8
  _QWORD *v86; // x9
  __int64 v87; // x10
  __int64 v88; // x8
  UILabel_o *emptyMessageLabel; // x20
  struct UIScrollView_o *scrollView; // x8
  System_String_o *v91; // [xsp+10h] [xbp-70h]

  if ( (byte_4A564FA & 1) == 0 )
  {
    sub_1B885B0(&BalanceConfig_TypeInfo);
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_1B885B0(&System_Comparison_DataEntityBase__TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMasterData_OtherUserGameMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_TblFriendMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_UserBlacklistMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_UserFriendRequestHistoryMaster___);
    sub_1B885B0(&Method_DataMasterBase_OtherUserGameMaster__OtherUserGameEntity__long__GetEntity__);
    sub_1B885B0(&FriendOperationItemListViewItem_TypeInfo);
    sub_1B885B0(&FriendOperationItemListViewManager_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_DataEntityBase__RemoveRange__);
    sub_1B885B0(&Method_System_Collections_Generic_List_DataEntityBase__Reverse__);
    sub_1B885B0(&Method_System_Collections_Generic_List_DataEntityBase__Sort__);
    sub_1B885B0(&Method_System_Collections_Generic_List_DataEntityBase___ctor___76027984);
    sub_1B885B0(&Method_System_Collections_Generic_List_DataEntityBase__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_DataEntityBase__get_Item__);
    sub_1B885B0(&System_Collections_Generic_List_DataEntityBase__TypeInfo);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&Method_FriendOperationItemListViewManager___c__CreateList_b__35_0__);
    sub_1B885B0(&FriendOperationItemListViewManager___c_TypeInfo);
    sub_1B885B0(&UserBlacklistEntity_TypeInfo);
    sub_1B885B0(&UserFriendRequestHistoryEntity_TypeInfo);
    sub_1B885B0(&StringLiteral_3035/*"BLACKLIST_EMPTY_MESSAGE"*/);
    sub_1B885B0(&StringLiteral_6497/*"FRIEND_EMPTY_FRIEND_MESSAGE"*/);
    sub_1B885B0(&StringLiteral_3038/*"BLACKLIST_FRIEND_HISTORY_EMPTY_MESSAGE"*/);
    sub_1B885B0(&StringLiteral_6498/*"FRIEND_EMPTY_OFFERED_MESSAGE"*/);
    byte_4A564FA = 1;
  }
  if ( !FriendOperationItemListViewManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(FriendOperationItemListViewManager_TypeInfo);
  FriendOperationItemListViewManager__CreateSorteData(classPos, *(const MethodInfo **)&kind);
  this->fields.menuKind = kind;
  sortStatusList = FriendOperationItemListViewManager_TypeInfo->static_fields->sortStatusList;
  if ( !sortStatusList )
    goto LABEL_112;
  if ( sortStatusList->max_length <= kind )
LABEL_113:
    sub_1B88814(sort, v7);
  v9 = sortStatusList->m_Items[kind];
  this->fields.sort = v9;
  sub_1B88554(&this->fields.sort, v9);
  sort = (__int64)this->fields.sort;
  if ( !sort )
    goto LABEL_112;
  ListViewSort__Load((ListViewSort_o *)sort, 0LL);
  if ( kind == 8 )
  {
    sort = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !sort )
      goto LABEL_112;
    MasterData_object = DataManager__GetMasterData_object_(
                          (DataManager_o *)sort,
                          (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_OtherUserGameMaster___);
    sort = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !sort )
      goto LABEL_112;
    sort = (__int64)DataManager__GetMasterData_object_(
                      (DataManager_o *)sort,
                      (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserBlacklistMaster___);
    if ( !sort )
      goto LABEL_112;
    v25 = *(System_Collections_ObjectModel_Collection_T__o **)(sort + 32);
    ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
    if ( !v25 )
      goto LABEL_112;
    if ( System_Collections_ObjectModel_Collection_object___get_Count(
           v25,
           (const MethodInfo_30BA580 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__) < 1 )
    {
LABEL_42:
      v39 = &StringLiteral_3035/*"BLACKLIST_EMPTY_MESSAGE"*/;
      goto LABEL_73;
    }
    v26 = 0;
    while ( 1 )
    {
      sort = (__int64)System_Collections_ObjectModel_Collection_object___get_Item(
                        v25,
                        v26,
                        (const MethodInfo_30BA610 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !sort )
        break;
      v27 = (UserBlacklistEntity_o *)sort;
      methodPtr_low = LOBYTE(UserBlacklistEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( *(unsigned __int8 *)(*(_QWORD *)sort + 304LL) < (unsigned int)methodPtr_low )
        break;
      if ( *(UserBlacklistEntity_c **)(*(_QWORD *)(*(_QWORD *)sort + 200LL) + 8 * methodPtr_low - 8) != UserBlacklistEntity_TypeInfo )
        break;
      sort = UserBlacklistEntity__getOtherUserId((UserBlacklistEntity_o *)sort, 0LL);
      if ( !MasterData_object )
        break;
      sort = (__int64)DataMasterBase_object__object__long___GetEntity(
                        (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                        sort,
                        (const MethodInfo_311DAE0 *)Method_DataMasterBase_OtherUserGameMaster__OtherUserGameEntity__long__GetEntity__);
      itemList = this->fields.itemList;
      if ( !itemList )
        break;
      v30 = (OtherUserGameEntity_o *)sort;
      size = itemList->fields._size;
      classBoardMaxDictionary = this->fields.classBoardMaxDictionary;
      v33 = (FriendOperationItemListViewItem_o *)sub_1B887FC(FriendOperationItemListViewItem_TypeInfo);
      FriendOperationItemListViewItem___ctor_30877824(v33, 8, size, v30, v27, 0, classBoardMaxDictionary, v34);
      sort = (__int64)this->fields.itemList;
      if ( !sort )
        break;
      v35 = *(_QWORD *)(sort + 16);
      v36 = Method_System_Collections_Generic_List_ListViewItem__Add__;
      ++*(_DWORD *)(sort + 28);
      if ( !v35 )
        break;
      v37 = *(int *)(sort + 24);
      if ( (unsigned int)v37 >= *(_DWORD *)(v35 + 24) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)sort,
          (Il2CppObject *)v33,
          *(const MethodInfo_34FD834 **)(*(_QWORD *)(v36[4] + 192LL) + 112LL));
      }
      else
      {
        v38 = v35 + 8 * v37;
        *(_DWORD *)(sort + 24) = v37 + 1;
        *(_QWORD *)(v38 + 32) = v33;
        sub_1B88554(v38 + 32, v33);
      }
      if ( ++v26 >= System_Collections_ObjectModel_Collection_object___get_Count(
                      v25,
                      (const MethodInfo_30BA580 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__) )
        goto LABEL_42;
    }
LABEL_112:
    sub_1B8880C(sort, v7);
  }
  if ( kind == 7 )
  {
    sort = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !sort )
      goto LABEL_112;
    v40 = DataManager__GetMasterData_object_(
            (DataManager_o *)sort,
            (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_OtherUserGameMaster___);
    sort = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !sort )
      goto LABEL_112;
    sort = (__int64)DataManager__GetMasterData_object_(
                      (DataManager_o *)sort,
                      (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserFriendRequestHistoryMaster___);
    if ( !sort )
      goto LABEL_112;
    v41 = *(System_Collections_Generic_IEnumerable_T__o **)(sort + 32);
    v42 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_DataEntityBase__TypeInfo);
    System_Collections_Generic_List_object____ctor_55562536(
      v42,
      v41,
      (const MethodInfo_34FD128 *)Method_System_Collections_Generic_List_DataEntityBase___ctor___76027984);
    sort = (__int64)FriendOperationItemListViewManager___c_TypeInfo;
    if ( !FriendOperationItemListViewManager___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(FriendOperationItemListViewManager___c_TypeInfo);
      sort = (__int64)FriendOperationItemListViewManager___c_TypeInfo;
    }
    v43 = *(System_Comparison_T__o **)(*(_QWORD *)(sort + 184) + 8LL);
    if ( !v43 )
    {
      if ( !*(_DWORD *)(sort + 224) )
      {
        j_il2cpp_runtime_class_init_0(sort);
        sort = (__int64)FriendOperationItemListViewManager___c_TypeInfo;
      }
      v44 = **(Il2CppObject ***)(sort + 184);
      v43 = (System_Comparison_T__o *)sub_1B887FC(System_Comparison_DataEntityBase__TypeInfo);
      System_Comparison_object____ctor(
        v43,
        v44,
        Method_FriendOperationItemListViewManager___c__CreateList_b__35_0__,
        0LL);
      static_fields = FriendOperationItemListViewManager___c_TypeInfo->static_fields;
      static_fields->__9__35_0 = (struct System_Comparison_DataEntityBase__o *)v43;
      sort = sub_1B88554(&static_fields->__9__35_0, v43);
    }
    if ( !v42 )
      goto LABEL_112;
    System_Collections_Generic_List_object___Sort_55571192(
      v42,
      v43,
      (const MethodInfo_34FF2F8 *)Method_System_Collections_Generic_List_DataEntityBase__Sort__);
    v46 = v42->fields._size;
    v47 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v47 = BalanceConfig_TypeInfo;
    }
    MaxFriendHistoryNum = v47->static_fields->MaxFriendHistoryNum;
    if ( v46 > MaxFriendHistoryNum )
    {
      if ( !v47->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v47);
        MaxFriendHistoryNum = BalanceConfig_TypeInfo->static_fields->MaxFriendHistoryNum;
      }
      System_Collections_Generic_List_object___RemoveRange(
        v42,
        MaxFriendHistoryNum,
        v42->fields._size - MaxFriendHistoryNum,
        (const MethodInfo_34FF0A0 *)Method_System_Collections_Generic_List_DataEntityBase__RemoveRange__);
    }
    System_Collections_Generic_List_object___Reverse(
      v42,
      (const MethodInfo_34FF160 *)Method_System_Collections_Generic_List_DataEntityBase__Reverse__);
    ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
    if ( v42->fields._size < 1 )
    {
LABEL_72:
      v39 = &StringLiteral_3038/*"BLACKLIST_FRIEND_HISTORY_EMPTY_MESSAGE"*/;
      goto LABEL_73;
    }
    v49 = 0;
    while ( 1 )
    {
      sort = (__int64)System_Collections_Generic_List_object___get_Item(
                        v42,
                        v49,
                        (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_DataEntityBase__get_Item__);
      if ( !sort )
        goto LABEL_112;
      v50 = (UserFriendRequestHistoryEntity_o *)sort;
      v51 = LOBYTE(UserFriendRequestHistoryEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( *(unsigned __int8 *)(*(_QWORD *)sort + 304LL) < (unsigned int)v51 )
        goto LABEL_112;
      if ( *(UserFriendRequestHistoryEntity_c **)(*(_QWORD *)(*(_QWORD *)sort + 200LL) + 8 * v51 - 8) != UserFriendRequestHistoryEntity_TypeInfo )
        goto LABEL_112;
      sort = UserFriendRequestHistoryEntity__getOtherUserId((UserFriendRequestHistoryEntity_o *)sort, 0LL);
      if ( !v40 )
        goto LABEL_112;
      sort = (__int64)DataMasterBase_object__object__long___GetEntity(
                        (DataMasterBase_TMaster__TEntity__PKType__o *)v40,
                        sort,
                        (const MethodInfo_311DAE0 *)Method_DataMasterBase_OtherUserGameMaster__OtherUserGameEntity__long__GetEntity__);
      v52 = this->fields.itemList;
      if ( !v52 )
        goto LABEL_112;
      v53 = (OtherUserGameEntity_o *)sort;
      v54 = v52->fields._size;
      v55 = this->fields.classBoardMaxDictionary;
      v56 = (FriendOperationItemListViewItem_o *)sub_1B887FC(FriendOperationItemListViewItem_TypeInfo);
      FriendOperationItemListViewItem___ctor_30878160(v56, 7, v54, v53, v50, 0, v55, v57);
      sort = (__int64)this->fields.itemList;
      if ( !sort )
        goto LABEL_112;
      v58 = *(_QWORD *)(sort + 16);
      v59 = Method_System_Collections_Generic_List_ListViewItem__Add__;
      ++*(_DWORD *)(sort + 28);
      if ( !v58 )
        goto LABEL_112;
      v60 = *(int *)(sort + 24);
      if ( (unsigned int)v60 >= *(_DWORD *)(v58 + 24) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)sort,
          (Il2CppObject *)v56,
          *(const MethodInfo_34FD834 **)(*(_QWORD *)(v59[4] + 192LL) + 112LL));
      }
      else
      {
        v61 = v58 + 8 * v60;
        *(_DWORD *)(sort + 24) = v60 + 1;
        *(_QWORD *)(v61 + 32) = v56;
        sub_1B88554(v61 + 32, v56);
      }
      if ( ++v49 >= v42->fields._size )
        goto LABEL_72;
    }
  }
  v10 = (System_String_o *)StringLiteral_6498/*"FRIEND_EMPTY_OFFERED_MESSAGE"*/;
  if ( !kind )
  {
    sort = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !sort )
      goto LABEL_112;
    sort = (__int64)DataManager__GetMasterData_object_(
                      (DataManager_o *)sort,
                      (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_OtherUserGameMaster___);
    if ( !sort )
      goto LABEL_112;
    FriendCodeList = OtherUserGameMaster__GetFriendCodeList((OtherUserGameMaster_o *)sort, this->fields.friendCode, 0LL);
    ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
    if ( !FriendCodeList )
      goto LABEL_112;
    v12 = *(_QWORD *)&FriendCodeList->max_length;
    if ( (int)v12 >= 1 )
    {
      v13 = 0LL;
      while ( 1 )
      {
        v14 = this->fields.itemList;
        if ( !v14 )
          goto LABEL_112;
        if ( v13 >= (unsigned int)v12 )
          goto LABEL_113;
        v15 = v14->fields._size;
        v16 = FriendCodeList->m_Items[v13];
        v17 = this->fields.classBoardMaxDictionary;
        v18 = (FriendOperationItemListViewItem_o *)sub_1B887FC(FriendOperationItemListViewItem_TypeInfo);
        FriendOperationItemListViewItem___ctor_30877508(v18, 0, v15, v16, 0, v17, v19);
        sort = (__int64)this->fields.itemList;
        if ( !sort )
          goto LABEL_112;
        v20 = *(_QWORD *)(sort + 16);
        v21 = Method_System_Collections_Generic_List_ListViewItem__Add__;
        ++*(_DWORD *)(sort + 28);
        if ( !v20 )
          goto LABEL_112;
        v22 = *(int *)(sort + 24);
        if ( (unsigned int)v22 >= *(_DWORD *)(v20 + 24) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)sort,
            (Il2CppObject *)v18,
            *(const MethodInfo_34FD834 **)(*(_QWORD *)(v21[4] + 192LL) + 112LL));
        }
        else
        {
          v23 = v20 + 8 * v22;
          *(_DWORD *)(sort + 24) = v22 + 1;
          *(_QWORD *)(v23 + 32) = v18;
          sort = sub_1B88554(v23 + 32, v18);
        }
        LODWORD(v12) = FriendCodeList->max_length;
        if ( (__int64)++v13 >= (int)v12 )
          goto LABEL_107;
      }
    }
    goto LABEL_107;
  }
  sort = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !sort )
    goto LABEL_112;
  v91 = v10;
  sort = (__int64)DataManager__GetMasterData_object_(
                    (DataManager_o *)sort,
                    (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_TblFriendMaster___);
  if ( !sort )
    goto LABEL_112;
  v62 = (TblFriendMaster_o *)sort;
  List = TblFriendMaster__GetList((TblFriendMaster_o *)sort, kind, 0LL);
  v64 = TblFriendMaster__GetList(v62, 9, 0LL);
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
  if ( kind == 3 )
  {
    if ( !v64 )
      goto LABEL_112;
    v65 = *(_QWORD *)&v64->max_length;
    if ( (int)v65 >= 1 )
    {
      v66 = 0LL;
      do
      {
        v67 = this->fields.itemList;
        if ( !v67 )
          goto LABEL_112;
        if ( v66 >= (unsigned int)v65 )
          goto LABEL_113;
        v68 = v67->fields._size;
        v69 = v64->m_Items[v66];
        v70 = this->fields.classBoardMaxDictionary;
        v71 = (FriendOperationItemListViewItem_o *)sub_1B887FC(FriendOperationItemListViewItem_TypeInfo);
        FriendOperationItemListViewItem___ctor_30877508(v71, 9, v68, v69, classPos, v70, v72);
        sort = (__int64)this->fields.itemList;
        if ( !sort )
          goto LABEL_112;
        v73 = *(_QWORD *)(sort + 16);
        v74 = Method_System_Collections_Generic_List_ListViewItem__Add__;
        ++*(_DWORD *)(sort + 28);
        if ( !v73 )
          goto LABEL_112;
        v75 = *(int *)(sort + 24);
        if ( (unsigned int)v75 >= *(_DWORD *)(v73 + 24) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)sort,
            (Il2CppObject *)v71,
            *(const MethodInfo_34FD834 **)(*(_QWORD *)(v74[4] + 192LL) + 112LL));
        }
        else
        {
          v76 = v73 + 8 * v75;
          *(_DWORD *)(sort + 24) = v75 + 1;
          *(_QWORD *)(v76 + 32) = v71;
          sort = sub_1B88554(v76 + 32, v71);
        }
        LODWORD(v65) = v64->max_length;
      }
      while ( (__int64)++v66 < (int)v65 );
    }
  }
  if ( !List )
    goto LABEL_112;
  v77 = *(_QWORD *)&List->max_length;
  if ( (int)v77 >= 1 )
  {
    v78 = 0LL;
    do
    {
      v79 = this->fields.itemList;
      if ( !v79 )
        goto LABEL_112;
      if ( v78 >= (unsigned int)v77 )
        goto LABEL_113;
      v80 = v79->fields._size;
      v81 = List->m_Items[v78];
      v82 = this->fields.classBoardMaxDictionary;
      v83 = (FriendOperationItemListViewItem_o *)sub_1B887FC(FriendOperationItemListViewItem_TypeInfo);
      FriendOperationItemListViewItem___ctor_30877508(v83, kind, v80, v81, classPos, v82, v84);
      sort = (__int64)this->fields.itemList;
      if ( !sort )
        goto LABEL_112;
      v85 = *(_QWORD *)(sort + 16);
      v86 = Method_System_Collections_Generic_List_ListViewItem__Add__;
      ++*(_DWORD *)(sort + 28);
      if ( !v85 )
        goto LABEL_112;
      v87 = *(int *)(sort + 24);
      if ( (unsigned int)v87 >= *(_DWORD *)(v85 + 24) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)sort,
          (Il2CppObject *)v83,
          *(const MethodInfo_34FD834 **)(*(_QWORD *)(v86[4] + 192LL) + 112LL));
      }
      else
      {
        v88 = v85 + 8 * v87;
        *(_DWORD *)(sort + 24) = v87 + 1;
        *(_QWORD *)(v88 + 32) = v83;
        sort = sub_1B88554(v88 + 32, v83);
      }
      v77 = *(_QWORD *)&List->max_length;
    }
    while ( (__int64)++v78 < (int)v77 );
  }
  if ( v77 )
  {
    v10 = v91;
    goto LABEL_107;
  }
  v10 = v91;
  if ( !v64 )
    goto LABEL_112;
  if ( !*(_QWORD *)&v64->max_length )
  {
    if ( kind != 2 )
    {
      if ( kind == 3 )
        v10 = (System_String_o *)StringLiteral_6497/*"FRIEND_EMPTY_FRIEND_MESSAGE"*/;
      goto LABEL_107;
    }
    v39 = &StringLiteral_6498/*"FRIEND_EMPTY_OFFERED_MESSAGE"*/;
LABEL_73:
    v10 = (System_String_o *)*v39;
  }
LABEL_107:
  emptyMessageLabel = this->fields.emptyMessageLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  sort = (__int64)LocalizationManager__Get(v10, 0LL);
  if ( !emptyMessageLabel )
    goto LABEL_112;
  UILabel__set_text(emptyMessageLabel, (System_String_o *)sort, 0LL);
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, 3, 0LL);
  scrollView = this->fields.scrollView;
  if ( !scrollView )
    goto LABEL_112;
  scrollView->fields.smoothDragStart = 1;
}


void __fastcall FriendOperationItemListViewManager__CreateListFriendCode(
        FriendOperationItemListViewManager_o *this,
        System_String_o *friendCode,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x3

  this->fields.friendCode = friendCode;
  sub_1B88554(&this->fields.friendCode, friendCode);
  FriendOperationItemListViewManager__CreateList(this, 0, 0, v4);
}


void __fastcall FriendOperationItemListViewManager__CreateSorteData(int32_t classPos, const MethodInfo *method)
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
  FriendOperationItemListViewManager_c *inited; // x0
  __int64 v16; // x1
  unsigned int *v17; // x0
  struct ListViewSort_array *v18; // x8
  Il2CppClass **v19; // x8
  ListViewSort_o *v20; // x20
  struct ListViewSort_FilterKind_array *v21; // x8
  unsigned __int64 j; // x21
  struct ListViewSort_FilterKind_array *classFilter; // x8
  __int64 v24; // x0
  int v25; // [xsp+Ch] [xbp-54h] BYREF

  if ( (byte_4A564F4 & 1) == 0 )
  {
    sub_1B885B0(&FriendOperationItemListViewManager_TypeInfo);
    sub_1B885B0(&ListViewSort___TypeInfo);
    sub_1B885B0(&ListViewSort_TypeInfo);
    sub_1B885B0(&StringLiteral_6844/*"FriendOperation"*/);
    byte_4A564F4 = 1;
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
    v4 = sub_1B88658(ListViewSort___TypeInfo, 10LL);
    v5 = FriendOperationItemListViewManager_TypeInfo;
    v6 = v4;
    if ( !FriendOperationItemListViewManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(FriendOperationItemListViewManager_TypeInfo);
      v5 = FriendOperationItemListViewManager_TypeInfo;
    }
    static_fields = v5->static_fields;
    static_fields->sortStatusList = (struct ListViewSort_array *)v6;
    sub_1B88554(&static_fields->sortStatusList, v6);
    for ( i = 0LL; ; ++i )
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
      v12 = System_Int32__ToString((int32_t)&v25, 0LL);
      v13 = System_String__Concat_61707032((System_String_o *)StringLiteral_6844/*"FriendOperation"*/, v12, 0LL);
      v14 = (ListViewSort_o *)sub_1B887FC(ListViewSort_TypeInfo);
      ListViewSort___ctor_40759068(v14, v13, 3, 0, 0LL);
      if ( !sortStatusList )
        goto LABEL_37;
      if ( v14 )
      {
        inited = (FriendOperationItemListViewManager_c *)sub_1B886EC(v14, *(_QWORD *)(*(_QWORD *)sortStatusList + 64LL));
        if ( !inited )
        {
          v24 = sub_1B88830();
          sub_1B886D8(v24, 0LL);
        }
      }
      if ( i >= sortStatusList[6] )
        goto LABEL_38;
      v17 = &sortStatusList[2 * i];
      *((_QWORD *)v17 + 4) = v14;
      inited = (FriendOperationItemListViewManager_c *)sub_1B88554(v17 + 8, v14);
      v18 = FriendOperationItemListViewManager_TypeInfo->static_fields->sortStatusList;
      if ( !v18 )
        goto LABEL_37;
      if ( i >= v18->max_length )
LABEL_38:
        sub_1B88814(inited, v16);
      v19 = &v18->obj.klass + i;
      v20 = (ListViewSort_o *)v19[4];
      if ( !v20 )
        goto LABEL_37;
      ListViewSort__ClassFilterOFF((ListViewSort_o *)v19[4], 0LL);
      if ( !classPos )
      {
        for ( j = 0LL; ; ++j )
        {
          inited = FriendOperationItemListViewManager_TypeInfo;
          if ( !FriendOperationItemListViewManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(FriendOperationItemListViewManager_TypeInfo);
            inited = FriendOperationItemListViewManager_TypeInfo;
          }
          classFilter = inited->static_fields->classFilter;
          if ( !classFilter )
            break;
          if ( (__int64)j >= (int)classFilter->max_length )
            goto LABEL_25;
          if ( !inited->_2.cctor_finished )
          {
            inited = (FriendOperationItemListViewManager_c *)j_il2cpp_runtime_class_init_0(inited);
            classFilter = FriendOperationItemListViewManager_TypeInfo->static_fields->classFilter;
            if ( !classFilter )
              break;
          }
          if ( j >= classFilter->max_length )
            goto LABEL_38;
          ListViewSort__SetFilter(v20, classFilter->m_Items[j + 1], 1, 0LL);
        }
LABEL_37:
        sub_1B8880C(inited, v16);
      }
      inited = FriendOperationItemListViewManager_TypeInfo;
      if ( !FriendOperationItemListViewManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(FriendOperationItemListViewManager_TypeInfo);
        inited = FriendOperationItemListViewManager_TypeInfo;
      }
      v21 = inited->static_fields->classFilter;
      if ( !v21 )
        goto LABEL_37;
      if ( v21->max_length <= classPos )
        goto LABEL_38;
      ListViewSort__SetFilter(v20, v21->m_Items[classPos + 1], 1, 0LL);
LABEL_25:
      ;
    }
    v10->isInitSystem = 1;
  }
}


void __fastcall FriendOperationItemListViewManager__DeleteContinueData(const MethodInfo *method)
{
  const MethodInfo *v1; // x1
  __int64 v2; // x1
  __int64 v3; // x20
  FriendOperationItemListViewManager_c *v4; // x0
  struct ListViewSort_array *sortStatusList; // x8

  if ( (byte_4A564F5 & 1) == 0 )
  {
    sub_1B885B0(&FriendOperationItemListViewManager_TypeInfo);
    byte_4A564F5 = 1;
  }
  if ( !FriendOperationItemListViewManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(FriendOperationItemListViewManager_TypeInfo);
  FriendOperationItemListViewManager__CreateSorteData(0, v1);
  v3 = 4LL;
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
    if ( (unsigned int)(v3 - 4) >= sortStatusList->max_length )
      sub_1B88814(v4, v2);
    v4 = (FriendOperationItemListViewManager_c *)*((_QWORD *)&sortStatusList->obj.klass + v3);
    if ( !v4 )
LABEL_13:
      sub_1B8880C(v4, v2);
    ListViewSort__DeleteContinueData((ListViewSort_o *)v4, 0LL);
    ++v3;
  }
  while ( (_DWORD)v3 != 14 );
}


void __fastcall FriendOperationItemListViewManager__DestroyList(
        FriendOperationItemListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  ListViewSort_o *sort; // x0

  ListViewManager__DestroyList((ListViewManager_o *)this, 0LL);
  sort = this->fields.sort;
  if ( !sort )
    sub_1B8880C(0LL, v3);
  ListViewSort__Save(sort, 0LL);
}


void __fastcall FriendOperationItemListViewManager__EndCloseClassBoardEffectListDialog(
        FriendOperationItemListViewManager_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4A5650A & 1) == 0 )
  {
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4A5650A = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1B8880C(0LL, v4);
  CommonUI__CloseClassBoardEffectListDialog((CommonUI_o *)Instance, 0LL, 0LL);
  this->fields.isInput = 1;
}


FriendOperationItemListViewItem_o *__fastcall FriendOperationItemListViewManager__GetItem(
        FriendOperationItemListViewManager_o *this,
        int32_t index,
        const MethodInfo *method)
{
  FriendOperationItemListViewItem_o *result; // x0
  __int64 methodPtr_low; // x10

  if ( (byte_4A564FB & 1) == 0 )
  {
    sub_1B885B0(&FriendOperationItemListViewItem_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    byte_4A564FB = 1;
  }
  result = (FriendOperationItemListViewItem_o *)this->fields.itemList;
  if ( result )
  {
    result = (FriendOperationItemListViewItem_o *)System_Collections_Generic_List_object___get_Item(
                                                    (System_Collections_Generic_List_object__o *)result,
                                                    index,
                                                    (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    if ( result )
    {
      methodPtr_low = LOBYTE(FriendOperationItemListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(result->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low )
      {
        if ( (FriendOperationItemListViewItem_c *)result->klass->_2.typeHierarchy[methodPtr_low - 1] != FriendOperationItemListViewItem_TypeInfo )
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


void __fastcall FriendOperationItemListViewManager__InitLoad(const MethodInfo *method)
{
  __int64 v1; // x1
  FriendOperationItemListViewManager_c *v2; // x0
  __int64 i; // x20
  struct ListViewSort_array *sortStatusList; // x8

  if ( (byte_4A564F6 & 1) == 0 )
  {
    sub_1B885B0(&FriendOperationItemListViewManager_TypeInfo);
    byte_4A564F6 = 1;
  }
  v2 = FriendOperationItemListViewManager_TypeInfo;
  if ( !FriendOperationItemListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FriendOperationItemListViewManager_TypeInfo);
    v2 = FriendOperationItemListViewManager_TypeInfo;
  }
  if ( v2->static_fields->isInitSystem )
  {
    for ( i = 4LL; ; ++i )
    {
      if ( !v2->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v2);
        v2 = FriendOperationItemListViewManager_TypeInfo;
      }
      sortStatusList = v2->static_fields->sortStatusList;
      if ( !sortStatusList )
        goto LABEL_15;
      if ( (unsigned int)(i - 4) >= sortStatusList->max_length )
        sub_1B88814(v2, v1);
      v2 = (FriendOperationItemListViewManager_c *)*((_QWORD *)&sortStatusList->obj.klass + i);
      if ( !v2 )
LABEL_15:
        sub_1B8880C(v2, v1);
      ListViewSort__InitLoad((ListViewSort_o *)v2, 0LL);
      if ( (_DWORD)i == 13 )
        break;
      v2 = FriendOperationItemListViewManager_TypeInfo;
    }
  }
}


void __fastcall FriendOperationItemListViewManager__OnClickListView(
        FriendOperationItemListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  struct FriendOperationItemListViewManager_CallbackFunc_o *callbackFunc; // x20
  __int64 v5; // x0
  __int64 v6; // x1
  unsigned int Index; // w0

  callbackFunc = this->fields.callbackFunc;
  this->fields.callbackFunc = 0LL;
  v5 = sub_1B88554(&this->fields.callbackFunc, 0LL);
  if ( callbackFunc )
  {
    if ( !obj )
      sub_1B8880C(v5, v6);
    Index = ListViewObject__get_Index(obj, 0LL);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD, _QWORD, _QWORD))callbackFunc->fields.m_target)(
      callbackFunc->fields.original_method_info,
      0LL,
      Index,
      *(_QWORD *)&callbackFunc->fields.extra_arg);
  }
}


void __fastcall FriendOperationItemListViewManager__OnClickListViewAccept(
        FriendOperationItemListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  struct FriendOperationItemListViewManager_CallbackFunc_o *callbackFunc; // x20
  __int64 v5; // x0
  __int64 v6; // x1
  unsigned int Index; // w0

  callbackFunc = this->fields.callbackFunc;
  this->fields.callbackFunc = 0LL;
  v5 = sub_1B88554(&this->fields.callbackFunc, 0LL);
  if ( callbackFunc )
  {
    if ( !obj )
      sub_1B8880C(v5, v6);
    Index = ListViewObject__get_Index(obj, 0LL);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD, _QWORD))callbackFunc->fields.m_target)(
      callbackFunc->fields.original_method_info,
      5LL,
      Index,
      *(_QWORD *)&callbackFunc->fields.extra_arg);
  }
}


void __fastcall FriendOperationItemListViewManager__OnClickListViewCancel(
        FriendOperationItemListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  struct FriendOperationItemListViewManager_CallbackFunc_o *callbackFunc; // x20
  __int64 v5; // x0
  __int64 v6; // x1
  unsigned int Index; // w0

  callbackFunc = this->fields.callbackFunc;
  this->fields.callbackFunc = 0LL;
  v5 = sub_1B88554(&this->fields.callbackFunc, 0LL);
  if ( callbackFunc )
  {
    if ( !obj )
      sub_1B8880C(v5, v6);
    Index = ListViewObject__get_Index(obj, 0LL);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD, _QWORD))callbackFunc->fields.m_target)(
      callbackFunc->fields.original_method_info,
      7LL,
      Index,
      *(_QWORD *)&callbackFunc->fields.extra_arg);
  }
}


void __fastcall FriendOperationItemListViewManager__OnClickListViewOffer(
        FriendOperationItemListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  struct FriendOperationItemListViewManager_CallbackFunc_o *callbackFunc; // x20
  __int64 v5; // x0
  __int64 v6; // x1
  unsigned int Index; // w0

  callbackFunc = this->fields.callbackFunc;
  this->fields.callbackFunc = 0LL;
  v5 = sub_1B88554(&this->fields.callbackFunc, 0LL);
  if ( callbackFunc )
  {
    if ( !obj )
      sub_1B8880C(v5, v6);
    Index = ListViewObject__get_Index(obj, 0LL);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD, _QWORD))callbackFunc->fields.m_target)(
      callbackFunc->fields.original_method_info,
      4LL,
      Index,
      *(_QWORD *)&callbackFunc->fields.extra_arg);
  }
}


void __fastcall FriendOperationItemListViewManager__OnClickListViewReject(
        FriendOperationItemListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  struct FriendOperationItemListViewManager_CallbackFunc_o *callbackFunc; // x20
  __int64 v5; // x0
  __int64 v6; // x1
  unsigned int Index; // w0

  callbackFunc = this->fields.callbackFunc;
  this->fields.callbackFunc = 0LL;
  v5 = sub_1B88554(&this->fields.callbackFunc, 0LL);
  if ( callbackFunc )
  {
    if ( !obj )
      sub_1B8880C(v5, v6);
    Index = ListViewObject__get_Index(obj, 0LL);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD, _QWORD))callbackFunc->fields.m_target)(
      callbackFunc->fields.original_method_info,
      6LL,
      Index,
      *(_QWORD *)&callbackFunc->fields.extra_arg);
  }
}


void __fastcall FriendOperationItemListViewManager__OnClickListViewRemove(
        FriendOperationItemListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  struct FriendOperationItemListViewManager_CallbackFunc_o *callbackFunc; // x20
  __int64 v5; // x0
  __int64 v6; // x1
  unsigned int Index; // w0

  callbackFunc = this->fields.callbackFunc;
  this->fields.callbackFunc = 0LL;
  v5 = sub_1B88554(&this->fields.callbackFunc, 0LL);
  if ( callbackFunc )
  {
    if ( !obj )
      sub_1B8880C(v5, v6);
    Index = ListViewObject__get_Index(obj, 0LL);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD, _QWORD))callbackFunc->fields.m_target)(
      callbackFunc->fields.original_method_info,
      8LL,
      Index,
      *(_QWORD *)&callbackFunc->fields.extra_arg);
  }
}


void __fastcall FriendOperationItemListViewManager__OnClickSkill1ListView(
        FriendOperationItemListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  ;
}


void __fastcall FriendOperationItemListViewManager__OnClickSkill2ListView(
        FriendOperationItemListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  ;
}


void __fastcall FriendOperationItemListViewManager__OnClickSkill3ListView(
        FriendOperationItemListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  ;
}


void __fastcall FriendOperationItemListViewManager__OnClickSortAscendingOrder(
        FriendOperationItemListViewManager_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x0
  __int64 v6; // x1
  struct ListViewSort_o *sort; // x8

  if ( (byte_4A56505 & 1) == 0 )
  {
    sub_1B885B0(&Method_FriendOperationItemListViewManager_OnClickSortAscendingOrder__);
    byte_4A56505 = 1;
  }
  if ( this->fields.isInput )
  {
    v3 = Method_FriendOperationItemListViewManager_OnClickSortAscendingOrder__;
    if ( (*((_BYTE *)Method_FriendOperationItemListViewManager_OnClickSortAscendingOrder__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B885C8();
    v4 = (System_Reflection_MethodBase_o *)sub_1B88594(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
    sort = this->fields.sort;
    if ( !sort )
      sub_1B8880C(v5, v6);
    sort->fields.isAscendingOrder ^= 1u;
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, 3, 0LL);
  }
}


void __fastcall FriendOperationItemListViewManager__OnClickSortKind(
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

  if ( (byte_4A56503 & 1) == 0 )
  {
    sub_1B885B0(&OtherUserSortDialog_CallbackFunc_TypeInfo);
    sub_1B885B0(&Method_FriendOperationItemListViewManager_CloseSortDialog__);
    sub_1B885B0(&Method_FriendOperationItemListViewManager_OnClickSortKind__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4A56503 = 1;
  }
  if ( this->fields.isInput )
  {
    v3 = Method_FriendOperationItemListViewManager_OnClickSortKind__;
    if ( (*((_BYTE *)Method_FriendOperationItemListViewManager_OnClickSortKind__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B885C8();
    v4 = (System_Reflection_MethodBase_o *)sub_1B88594(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
    menuKind = this->fields.menuKind;
    if ( menuKind == 2 )
    {
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      sort = this->fields.sort;
      v8 = (CommonUI_o *)Instance;
      v9 = (OtherUserSortDialog_CallbackFunc_o *)sub_1B887FC(OtherUserSortDialog_CallbackFunc_TypeInfo);
      OtherUserSortDialog_CallbackFunc___ctor(
        v9,
        (Il2CppObject *)this,
        Method_FriendOperationItemListViewManager_CloseSortDialog__,
        0LL);
      if ( v8 )
      {
        v12 = 2;
        goto LABEL_13;
      }
LABEL_14:
      sub_1B8880C(v10, v11);
    }
    if ( menuKind == 3 )
    {
      v6 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      sort = this->fields.sort;
      v8 = (CommonUI_o *)v6;
      v9 = (OtherUserSortDialog_CallbackFunc_o *)sub_1B887FC(OtherUserSortDialog_CallbackFunc_TypeInfo);
      OtherUserSortDialog_CallbackFunc___ctor(
        v9,
        (Il2CppObject *)this,
        Method_FriendOperationItemListViewManager_CloseSortDialog__,
        0LL);
      if ( v8 )
      {
        v12 = 1;
LABEL_13:
        CommonUI__OpenOtherUserSortDialog(v8, v12, sort, v9, 0LL);
        return;
      }
      goto LABEL_14;
    }
  }
}


void __fastcall FriendOperationItemListViewManager__OnLongPushAppendSkill1ListView(
        FriendOperationItemListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  FriendOperationItemListViewManager__OnLongPushSkill(this, obj, 13, v3);
}


void __fastcall FriendOperationItemListViewManager__OnLongPushAppendSkill2ListView(
        FriendOperationItemListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  FriendOperationItemListViewManager__OnLongPushSkill(this, obj, 14, v3);
}


void __fastcall FriendOperationItemListViewManager__OnLongPushAppendSkill3ListView(
        FriendOperationItemListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  FriendOperationItemListViewManager__OnLongPushSkill(this, obj, 15, v3);
}


void __fastcall FriendOperationItemListViewManager__OnLongPushAppendSkill4ListView(
        FriendOperationItemListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  FriendOperationItemListViewManager__OnLongPushSkill(this, obj, 16, v3);
}


void __fastcall FriendOperationItemListViewManager__OnLongPushAppendSkill5ListView(
        FriendOperationItemListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  FriendOperationItemListViewManager__OnLongPushSkill(this, obj, 17, v3);
}


void __fastcall FriendOperationItemListViewManager__OnLongPushServantEquip(
        FriendOperationItemListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  struct FriendOperationItemListViewManager_CallbackFunc_o *callbackFunc; // x20
  __int64 v5; // x0
  __int64 v6; // x1
  unsigned int Index; // w0

  callbackFunc = this->fields.callbackFunc;
  this->fields.callbackFunc = 0LL;
  v5 = sub_1B88554(&this->fields.callbackFunc, 0LL);
  if ( callbackFunc )
  {
    if ( !obj )
      sub_1B8880C(v5, v6);
    Index = ListViewObject__get_Index(obj, 0LL);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD, _QWORD))callbackFunc->fields.m_target)(
      callbackFunc->fields.original_method_info,
      12LL,
      Index,
      *(_QWORD *)&callbackFunc->fields.extra_arg);
  }
}


void __fastcall FriendOperationItemListViewManager__OnLongPushSkill(
        FriendOperationItemListViewManager_o *this,
        ListViewObject_o *obj,
        int32_t kind,
        const MethodInfo *method)
{
  UIScrollView_o *scrollView; // x0
  struct FriendOperationItemListViewManager_CallbackFunc_o *callbackFunc; // x22
  unsigned int Index; // w0

  if ( (byte_4A56502 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_12549/*"ScrollViewEnabled"*/);
    byte_4A56502 = 1;
  }
  if ( this->fields.isInput )
  {
    scrollView = this->fields.scrollView;
    if ( !scrollView )
      goto LABEL_10;
    UIScrollView__Press(scrollView, 0, 0LL);
    scrollView = this->fields.scrollView;
    if ( !scrollView )
      goto LABEL_10;
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)scrollView, 0, 0LL);
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_12549/*"ScrollViewEnabled"*/,
      0.1,
      0LL);
    callbackFunc = this->fields.callbackFunc;
    this->fields.callbackFunc = 0LL;
    scrollView = (UIScrollView_o *)sub_1B88554(&this->fields.callbackFunc, 0LL);
    if ( callbackFunc )
    {
      if ( obj )
      {
        Index = ListViewObject__get_Index(obj, 0LL);
        ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD, _QWORD, _QWORD))callbackFunc->fields.m_target)(
          callbackFunc->fields.original_method_info,
          (unsigned int)kind,
          Index,
          *(_QWORD *)&callbackFunc->fields.extra_arg);
        return;
      }
LABEL_10:
      sub_1B8880C(scrollView, obj);
    }
  }
}


void __fastcall FriendOperationItemListViewManager__OnLongPushSkill1ListView(
        FriendOperationItemListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  FriendOperationItemListViewManager__OnLongPushSkill(this, obj, 1, v3);
}


void __fastcall FriendOperationItemListViewManager__OnLongPushSkill2ListView(
        FriendOperationItemListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  FriendOperationItemListViewManager__OnLongPushSkill(this, obj, 2, v3);
}


void __fastcall FriendOperationItemListViewManager__OnLongPushSkill3ListView(
        FriendOperationItemListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  FriendOperationItemListViewManager__OnLongPushSkill(this, obj, 3, v3);
}


void __fastcall FriendOperationItemListViewManager__OnMoveEnd(
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

  if ( (byte_4A56501 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A56501 = 1;
  }
  callbackCount = this->fields.callbackCount;
  v4 = __OFSUB__(callbackCount, 1);
  v5 = callbackCount - 1;
  if ( v5 < 0 == v4 )
  {
    this->fields.callbackCount = v5;
    if ( !v5 )
    {
      ListViewManager__DragMaskEnd((ListViewManager_o *)this, 0LL);
      if ( this->fields.initMode == 1 )
      {
        itemSortList = this->fields.itemSortList;
        if ( !itemSortList )
          goto LABEL_18;
        emptyMessageBase = this->fields.emptyMessageBase;
        if ( !emptyMessageBase )
          goto LABEL_18;
        UnityEngine_GameObject__SetActive(emptyMessageBase, itemSortList->fields._size < 1, 0LL);
      }
      scrollView = (UnityEngine_Object_o *)this->fields.scrollView;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( !UnityEngine_Object__op_Inequality(scrollView, 0LL, 0LL) )
        goto LABEL_16;
      emptyMessageBase = (UnityEngine_GameObject_o *)this->fields.scrollView;
      if ( emptyMessageBase )
      {
        ((void (__fastcall *)(UnityEngine_GameObject_o *, __int64, Il2CppClass *))emptyMessageBase->klass[1]._1.castClass)(
          emptyMessageBase,
          1LL,
          emptyMessageBase->klass[1]._1.declaringType);
        emptyMessageBase = (UnityEngine_GameObject_o *)this->fields.scrollView;
        if ( emptyMessageBase )
        {
          UIScrollView__UpdatePosition((UIScrollView_o *)emptyMessageBase, 0LL);
          this->fields.isScrollRefresh = 1;
LABEL_16:
          callbackFunc2 = this->fields.callbackFunc2;
          this->fields.callbackFunc2 = 0LL;
          sub_1B88554(&this->fields.callbackFunc2, 0LL);
          if ( callbackFunc2 )
            ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))callbackFunc2->fields.m_target)(
              callbackFunc2->fields.original_method_info,
              *(_QWORD *)&callbackFunc2->fields.extra_arg);
          return;
        }
      }
LABEL_18:
      sub_1B8880C(emptyMessageBase, v7);
    }
  }
}


void __fastcall FriendOperationItemListViewManager__OpenSupportClassBoard(
        FriendOperationItemListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  FriendOperationItemListViewManager_o *v4; // x19
  System_Collections_Generic_List_object__o *itemList; // x21
  int32_t Index; // w0
  Il2CppObject *Item; // x0
  FriendOperationItemListViewItem_o *v8; // x20
  __int64 methodPtr_low; // x10
  _QWORD *v10; // x0
  System_Reflection_MethodBase_o *v11; // x0
  Il2CppObject *Master_object; // x21
  const MethodInfo *v13; // x1
  int32_t scrollView; // w22
  struct OtherUserGameEntity_o *otherUserGameEntity; // x8
  struct ClassBoardInfo_array *userClassBoardInfo; // x23
  int max_length; // w8
  int32_t v18; // w20
  unsigned int v19; // w24
  ClassBoardInfo_o *v20; // x21
  _QWORD *v21; // x22
  __int64 v22; // x8
  __int64 v23; // x0
  __int64 v24; // x0
  struct System_Int32_array **v25; // x8
  struct System_Int32_array *v26; // x1
  _QWORD *v27; // x22
  __int64 v28; // x8
  __int64 v29; // x0
  __int64 v30; // x0
  struct System_Int32_array **v31; // x8
  struct System_Int32_array *v32; // x1
  Il2CppObject *Instance; // x22
  System_Action_o *v34; // x23

  v4 = this;
  if ( (byte_4A56509 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_System_Array_Empty_int___);
    sub_1B885B0(&ClassBoardInfo_TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMaster_ClassBoardClassMaster___);
    sub_1B885B0(&Method_DataManager_GetMaster_ServantMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1B885B0(&FriendOperationItemListViewItem_TypeInfo);
    sub_1B885B0(&Method_FriendOperationItemListViewManager_EndCloseClassBoardEffectListDialog__);
    sub_1B885B0(&Method_FriendOperationItemListViewManager_OpenSupportClassBoard__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    this = (FriendOperationItemListViewManager_o *)sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4A56509 = 1;
  }
  if ( v4->fields.isInput )
  {
    itemList = (System_Collections_Generic_List_object__o *)v4->fields.itemList;
    if ( itemList )
    {
      if ( obj )
      {
        Index = ListViewObject__get_Index(obj, 0LL);
        Item = System_Collections_Generic_List_object___get_Item(
                 itemList,
                 Index,
                 (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
        if ( !Item )
          return;
        v8 = (FriendOperationItemListViewItem_o *)Item;
        methodPtr_low = LOBYTE(FriendOperationItemListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(Item->klass->vtable[0].methodPtr) < (unsigned int)methodPtr_low
          || (FriendOperationItemListViewItem_c *)Item->klass->_2.typeHierarchy[methodPtr_low - 1] != FriendOperationItemListViewItem_TypeInfo )
        {
          return;
        }
        v4->fields.isInput = 0;
        v10 = Method_FriendOperationItemListViewManager_OpenSupportClassBoard__;
        if ( (*((_BYTE *)Method_FriendOperationItemListViewManager_OpenSupportClassBoard__ + 83) & 2) != 0 )
          v10 = (_QWORD *)sub_1B885C8();
        v11 = (System_Reflection_MethodBase_o *)sub_1B88594(v10, v10[4]);
        OverwriteAssetSoundName__PlaySystemSe(v11, 0, 0LL);
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        Master_object = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_ServantMaster___);
        this = (FriendOperationItemListViewManager_o *)FriendOperationItemListViewItem__get_SvtId(v8, v13);
        if ( Master_object )
        {
          this = (FriendOperationItemListViewManager_o *)DataMasterBase_object__object__int___GetEntity(
                                                           (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                                           (int32_t)this,
                                                           (const MethodInfo_311D934 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
          if ( this )
          {
            scrollView = (int32_t)this->fields.scrollView;
            this = (FriendOperationItemListViewManager_o *)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_ClassBoardClassMaster___);
            if ( this )
            {
              this = (FriendOperationItemListViewManager_o *)ClassBoardClassMaster__GetClassBoardBaseId(
                                                               (ClassBoardClassMaster_o *)this,
                                                               scrollView,
                                                               0LL);
              otherUserGameEntity = v8->fields.otherUserGameEntity;
              if ( otherUserGameEntity )
              {
                userClassBoardInfo = otherUserGameEntity->fields.userClassBoardInfo;
                if ( userClassBoardInfo )
                {
                  max_length = userClassBoardInfo->max_length;
                  v18 = (int)this;
                  if ( max_length < 1 )
                  {
LABEL_26:
                    v20 = (ClassBoardInfo_o *)sub_1B887FC(ClassBoardInfo_TypeInfo);
                    ClassBoardInfo___ctor(v20, 0LL);
                    if ( v20 )
                    {
                      v20->fields.classBoardBaseId = v18;
                      v21 = Method_System_Array_Empty_int___;
                      v22 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
                      if ( !v22 )
                      {
                        sub_1BDA4E8(Method_System_Array_Empty_int___);
                        v22 = v21[7];
                      }
                      v23 = *(_QWORD *)(v22 + 16);
                      if ( (*(_BYTE *)(v23 + 309) & 1) == 0 )
                        v23 = sub_1BDA48C();
                      if ( !*(_DWORD *)(v23 + 224) )
                        j_il2cpp_runtime_class_init_0(v23);
                      v24 = *(_QWORD *)(v21[7] + 16LL);
                      if ( (*(_BYTE *)(v24 + 309) & 1) == 0 )
                        v24 = sub_1BDA48C();
                      v25 = *(struct System_Int32_array ***)(v24 + 184);
                      v26 = *v25;
                      v20->fields.squareIds = *v25;
                      sub_1B88554(&v20->fields.squareIds, v26);
                      v27 = Method_System_Array_Empty_int___;
                      v28 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
                      if ( !v28 )
                      {
                        sub_1BDA4E8(Method_System_Array_Empty_int___);
                        v28 = v27[7];
                      }
                      v29 = *(_QWORD *)(v28 + 16);
                      if ( (*(_BYTE *)(v29 + 309) & 1) == 0 )
                        v29 = sub_1BDA48C();
                      if ( !*(_DWORD *)(v29 + 224) )
                        j_il2cpp_runtime_class_init_0(v29);
                      v30 = *(_QWORD *)(v27[7] + 16LL);
                      if ( (*(_BYTE *)(v30 + 309) & 1) == 0 )
                        v30 = sub_1BDA48C();
                      v31 = *(struct System_Int32_array ***)(v30 + 184);
                      v32 = *v31;
                      v20->fields.releasedClassIds = *v31;
                      sub_1B88554(&v20->fields.releasedClassIds, v32);
LABEL_44:
                      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                      v34 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
                      System_Action___ctor(
                        v34,
                        (Il2CppObject *)v4,
                        Method_FriendOperationItemListViewManager_EndCloseClassBoardEffectListDialog__,
                        0LL);
                      if ( Instance )
                      {
                        CommonUI__OpenClassBoardEffectListDialog((CommonUI_o *)Instance, 1, v18, 0, v34, 1, v20, 0LL);
                        return;
                      }
                    }
                  }
                  else
                  {
                    v19 = 0;
                    while ( 1 )
                    {
                      if ( v19 >= max_length )
                        sub_1B88814(this, obj);
                      v20 = userClassBoardInfo->m_Items[v19];
                      if ( !v20 )
                        break;
                      if ( v20->fields.classBoardBaseId == v18 )
                      {
                        this = (FriendOperationItemListViewManager_o *)ClassBoardInfo__IsReleasedClassId(
                                                                         v20,
                                                                         scrollView,
                                                                         0LL);
                        if ( ((unsigned __int8)this & 1) != 0 )
                          goto LABEL_44;
                      }
                      max_length = userClassBoardInfo->max_length;
                      if ( (int)++v19 >= max_length )
                        goto LABEL_26;
                    }
                  }
                }
              }
            }
          }
        }
      }
      sub_1B8880C(this, obj);
    }
  }
}


void __fastcall FriendOperationItemListViewManager__RequestInto(
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

  if ( (byte_4A56500 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_FriendOperationItemListViewManager_OnMoveEnd__);
    sub_1B885B0(&Method_System_Collections_Generic_List_FriendOperationItemListViewObject__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_FriendOperationItemListViewObject__get_Item__);
    sub_1B885B0(&StringLiteral_9935/*"OnMoveEnd"*/);
    byte_4A56500 = 1;
  }
  ListViewManager__ClippingItems((ListViewManager_o *)this, 1, 0, 0LL);
  ListViewManager__DragMaskStart((ListViewManager_o *)this, 0LL);
  ObjectList = FriendOperationItemListViewManager__get_ObjectList(this, v3);
  if ( !ObjectList )
LABEL_13:
    sub_1B8880C(ObjectList, v5);
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
             (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_FriendOperationItemListViewObject__get_Item__);
    if ( ListViewManager__ClippingItem((ListViewManager_o *)this, (ListViewObject_o *)Item, 0LL) )
    {
      v11 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
      System_Action___ctor(v11, (Il2CppObject *)this, Method_FriendOperationItemListViewManager_OnMoveEnd__, 0LL);
      if ( !Item )
        goto LABEL_13;
      ++v8;
      FriendOperationItemListViewObject__Init_30902864((FriendOperationItemListViewObject_o *)Item, 4, v11, 0.1, v12);
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
      (System_String_o *)StringLiteral_9935/*"OnMoveEnd"*/,
      0.2,
      0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FriendOperationItemListViewManager__RequestListObject(
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

  if ( (byte_4A564FE & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_FriendOperationItemListViewObject__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_FriendOperationItemListViewObject__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_FriendOperationItemListViewObject__get_Current__);
    sub_1B885B0(&Method_FriendOperationItemListViewManager_OnMoveEnd__);
    sub_1B885B0(&Method_System_Collections_Generic_List_FriendOperationItemListViewObject__GetEnumerator__);
    sub_1B885B0(&Method_System_Collections_Generic_List_FriendOperationItemListViewObject__get_Count__);
    sub_1B885B0(&StringLiteral_9935/*"OnMoveEnd"*/);
    byte_4A564FE = 1;
  }
  memset(&v15, 0, sizeof(v15));
  ObjectList = (System_Collections_Generic_List_object__o *)FriendOperationItemListViewManager__get_ObjectList(
                                                              this,
                                                              *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_1B8880C(0LL, v8);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_9935/*"OnMoveEnd"*/,
      delay,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v15,
      ObjectList,
      (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_FriendOperationItemListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v15,
              (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_FriendOperationItemListViewObject__MoveNext__) )
    {
      current = v15.fields._current;
      v11 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
      System_Action___ctor(v11, (Il2CppObject *)this, Method_FriendOperationItemListViewManager_OnMoveEnd__, 0LL);
      if ( !current )
        sub_1B8880C(v12, v13);
      FriendOperationItemListViewObject__Init_30902864(
        (FriendOperationItemListViewObject_o *)current,
        mode,
        v11,
        delay,
        v14);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v15,
      (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_FriendOperationItemListViewObject__Dispose__);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FriendOperationItemListViewManager__RequestListObject_30902964(
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

  if ( (byte_4A564FF & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_FriendOperationItemListViewObject__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_FriendOperationItemListViewObject__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_FriendOperationItemListViewObject__get_Current__);
    sub_1B885B0(&Method_FriendOperationItemListViewManager_OnMoveEnd__);
    sub_1B885B0(&Method_System_Collections_Generic_List_FriendOperationItemListViewObject__GetEnumerator__);
    sub_1B885B0(&Method_System_Collections_Generic_List_FriendOperationItemListViewObject__get_Count__);
    sub_1B885B0(&StringLiteral_9935/*"OnMoveEnd"*/);
    byte_4A564FF = 1;
  }
  memset(&v13, 0, sizeof(v13));
  ObjectList = (System_Collections_Generic_List_object__o *)FriendOperationItemListViewManager__get_ObjectList(
                                                              this,
                                                              *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_1B8880C(0LL, v6);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_9935/*"OnMoveEnd"*/,
      0.0,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v13,
      ObjectList,
      (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_FriendOperationItemListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v13,
              (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_FriendOperationItemListViewObject__MoveNext__) )
    {
      current = v13.fields._current;
      v9 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
      System_Action___ctor(v9, (Il2CppObject *)this, Method_FriendOperationItemListViewManager_OnMoveEnd__, 0LL);
      if ( !current )
        sub_1B8880C(v10, v11);
      FriendOperationItemListViewObject__Init_30903992((FriendOperationItemListViewObject_o *)current, mode, v9, v12);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v13,
      (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_FriendOperationItemListViewObject__Dispose__);
  }
}


void __fastcall FriendOperationItemListViewManager__ScrollViewEnabled(
        FriendOperationItemListViewManager_o *this,
        const MethodInfo *method)
{
  UnityEngine_Behaviour_o *scrollView; // x0

  scrollView = (UnityEngine_Behaviour_o *)this->fields.scrollView;
  if ( !scrollView )
    sub_1B8880C(0LL, method);
  UnityEngine_Behaviour__set_enabled(scrollView, 1, 0LL);
}


void __fastcall FriendOperationItemListViewManager__SetClassId(
        FriendOperationItemListViewManager_o *this,
        int32_t classPos,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x0
  const MethodInfo *v6; // x2
  __int64 methodPtr_low; // x10
  __int64 v8; // x1
  System_Collections_Generic_List_object__o *itemSortList; // x0
  struct ListViewSort_o *sort; // x8
  __int64 v11; // x1
  const MethodInfo *v12; // x2
  int size; // w8
  System_Collections_Generic_List_Enumerator_object__o v14; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o i; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4A56507 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__);
    sub_1B885B0(&FriendOperationItemListViewItem_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    byte_4A56507 = 1;
  }
  memset(&i, 0, sizeof(i));
  itemList = this->fields.itemList;
  if ( itemList )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v14,
      (System_Collections_Generic_List_object__o *)itemList,
      (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    i = v14;
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &i,
              (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__) )
    {
      if ( i.fields._current )
      {
        methodPtr_low = LOBYTE(FriendOperationItemListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(i.fields._current->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low
          && (FriendOperationItemListViewItem_c *)i.fields._current->klass->_2.typeHierarchy[methodPtr_low - 1] == FriendOperationItemListViewItem_TypeInfo )
        {
          FriendOperationItemListViewItem__AnalyzeEntity(
            (FriendOperationItemListViewItem_o *)i.fields._current,
            classPos,
            v6);
        }
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &i,
      (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    itemSortList = (System_Collections_Generic_List_object__o *)this->fields.itemSortList;
    if ( itemSortList )
    {
      sort = this->fields.sort;
      if ( sort )
      {
        if ( sort->fields.sortKind != 11 || sort->fields.priorityKind )
        {
          ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, 3, 0LL);
          return;
        }
        System_Collections_Generic_List_object___GetEnumerator(
          (System_Collections_Generic_List_Enumerator_T__o *)&v14,
          itemSortList,
          (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
        for ( i = v14;
              System_Collections_Generic_List_Enumerator_object___MoveNext(
                &i,
                (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
              ((void (*)(void))i.fields._current->klass->vtable[4].method)() )
        {
          if ( !i.fields._current )
            sub_1B8880C(0LL, v11);
        }
        System_Collections_Generic_List_Enumerator_object___Dispose(
          &i,
          (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
        itemSortList = (System_Collections_Generic_List_object__o *)this->fields.itemSortList;
        if ( itemSortList )
        {
          if ( itemSortList->fields._size < 1 )
            goto LABEL_29;
          itemSortList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                        itemSortList,
                                                                        0,
                                                                        (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
          if ( !itemSortList )
            goto LABEL_31;
          LOBYTE(itemSortList[2].monitor) = 1;
          itemSortList = (System_Collections_Generic_List_object__o *)this->fields.itemSortList;
          if ( !itemSortList )
            goto LABEL_31;
          itemSortList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                        itemSortList,
                                                                        itemSortList->fields._size - 1,
                                                                        (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
          if ( !itemSortList )
            goto LABEL_31;
          LOBYTE(itemSortList[2].monitor) = 1;
          itemSortList = (System_Collections_Generic_List_object__o *)this->fields.itemSortList;
          if ( !itemSortList )
            goto LABEL_31;
          size = itemSortList->fields._size;
          if ( size < 3 )
          {
LABEL_29:
            FriendOperationItemListViewManager__SetMode_30901920(this, 5, v12);
            return;
          }
          itemSortList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                        itemSortList,
                                                                        size - 1,
                                                                        (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
          if ( itemSortList )
          {
            BYTE1(itemSortList[2].monitor) = 1;
            goto LABEL_29;
          }
        }
      }
LABEL_31:
      sub_1B8880C(itemSortList, v8);
    }
  }
}


void __fastcall FriendOperationItemListViewManager__SetMode(
        FriendOperationItemListViewManager_o *this,
        int32_t mode,
        FriendOperationItemListViewManager_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v6; // x2

  this->fields.callbackFunc = callback;
  sub_1B88554(&this->fields.callbackFunc, callback);
  FriendOperationItemListViewManager__SetMode_30901920(this, mode, v6);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FriendOperationItemListViewManager__SetMode_30901920(
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
  int v14; // s0
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

  if ( (byte_4A564FD & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_FriendOperationItemListViewManager_OnMoveEnd__);
    sub_1B885B0(&Method_System_Collections_Generic_List_FriendOperationItemListViewObject__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_FriendOperationItemListViewObject__get_Item__);
    sub_1B885B0(&StringLiteral_9935/*"OnMoveEnd"*/);
    sub_1B885B0(&StringLiteral_11311/*"RequestInto"*/);
    byte_4A564FD = 1;
  }
  if ( mode != 5 )
  {
    this->fields.initMode = mode;
    this->fields.callbackCount = ListViewManager__get_ObjectSum((ListViewManager_o *)this, 0LL);
    ListViewManager__set_IsInput((ListViewManager_o *)this, mode == 2, 0LL);
    switch ( mode )
    {
      case 1:
        emptyMessageBase = this->fields.emptyMessageBase;
        if ( !emptyMessageBase )
          goto LABEL_28;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)emptyMessageBase, 0, 0LL);
        v14 = 0;
        v15 = (System_String_o *)StringLiteral_11311/*"RequestInto"*/;
        goto LABEL_27;
      case 2:
        FriendOperationItemListViewManager__RequestListObject_30902964(this, 3, v13);
        return;
      case 3:
        ListViewManager__DragMaskStart((ListViewManager_o *)this, 0LL);
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
                   (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_FriendOperationItemListViewObject__get_Item__);
          v21 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
          System_Action___ctor(v21, (Il2CppObject *)this, Method_FriendOperationItemListViewManager_OnMoveEnd__, 0LL);
          if ( !Item )
            break;
          FriendOperationItemListViewObject__Init_30902864(
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
        ListViewManager__DragMaskStart((ListViewManager_o *)this, 0LL);
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
              (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_FriendOperationItemListViewObject__get_Item__);
      v28 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
      System_Action___ctor(v28, (Il2CppObject *)this, Method_FriendOperationItemListViewManager_OnMoveEnd__, 0LL);
      if ( !v27 )
        break;
      FriendOperationItemListViewObject__Init_30902864((FriendOperationItemListViewObject_o *)v27, 6, v28, 0.1, v29);
      if ( ++v26 >= v25->fields._size )
        return;
    }
LABEL_28:
    sub_1B8880C(emptyMessageBase, v6);
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
              (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_FriendOperationItemListViewObject__get_Item__);
      v11 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
      System_Action___ctor(v11, (Il2CppObject *)this, Method_FriendOperationItemListViewManager_OnMoveEnd__, 0LL);
      if ( !v10 )
        break;
      FriendOperationItemListViewObject__Init_30902864((FriendOperationItemListViewObject_o *)v10, 7, v11, 0.1, v12);
      if ( ++v9 >= v8->fields._size )
        return;
    }
    goto LABEL_28;
  }
LABEL_26:
  this->fields.callbackCount = 1;
  v15 = (System_String_o *)StringLiteral_9935/*"OnMoveEnd"*/;
  v14 = 1045220557;
LABEL_27:
  UnityEngine_MonoBehaviour__Invoke((UnityEngine_MonoBehaviour_o *)this, v15, *(float *)&v14, 0LL);
}


void __fastcall FriendOperationItemListViewManager__SetMode_30902812(
        FriendOperationItemListViewManager_o *this,
        int32_t mode,
        System_Action_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v6; // x2

  this->fields.callbackFunc2 = callback;
  sub_1B88554(&this->fields.callbackFunc2, callback);
  FriendOperationItemListViewManager__SetMode_30901920(this, mode, v6);
}


void __fastcall FriendOperationItemListViewManager__SetObjectItem(
        FriendOperationItemListViewManager_o *this,
        ListViewObject_o *obj,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  FriendOperationItemListViewManager_o *v5; // x20
  __int64 methodPtr_low; // x10
  int32_t v7; // w1

  v5 = this;
  if ( (byte_4A564FC & 1) == 0 )
  {
    this = (FriendOperationItemListViewManager_o *)sub_1B885B0(&FriendOperationItemListViewObject_TypeInfo);
    byte_4A564FC = 1;
  }
  if ( !obj
    || (methodPtr_low = LOBYTE(FriendOperationItemListViewObject_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(obj->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low)
    || (FriendOperationItemListViewObject_c *)obj->klass->_2.typeHierarchy[methodPtr_low - 1] != FriendOperationItemListViewObject_TypeInfo )
  {
    sub_1B8880C(this, obj);
  }
  if ( v5->fields.initMode == 2 )
    v7 = 3;
  else
    v7 = 2;
  FriendOperationItemListViewObject__Init_30901792(
    (FriendOperationItemListViewObject_o *)obj,
    v7,
    (const MethodInfo *)item);
}


void __fastcall FriendOperationItemListViewManager__SetSortButtonImage(
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

  if ( (byte_4A56506 & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&StringLiteral_17541/*"btn_sort_up"*/);
    sub_1B885B0(&StringLiteral_17628/*"btn_txt_up"*/);
    sub_1B885B0(&StringLiteral_17584/*"btn_txt_new"*/);
    sub_1B885B0(&StringLiteral_17574/*"btn_txt_down"*/);
    sub_1B885B0(&StringLiteral_17591/*"btn_txt_old"*/);
    sub_1B885B0(&StringLiteral_17538/*"btn_sort_down"*/);
    byte_4A56506 = 1;
  }
  sortKindLabel = (UnityEngine_Object_o *)this->fields.sortKindLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(sortKindLabel, 0LL, 0LL) )
  {
    sort = this->fields.sort;
    if ( !sort )
      goto LABEL_36;
    v6 = this->fields.sortKindLabel;
    sort = (ListViewSort_o *)ListViewSort__GetSortKindButtonText(sort, 0, 0LL);
    if ( !v6 )
      goto LABEL_36;
    UILabel__set_text(v6, (System_String_o *)sort, 0LL);
  }
  sortOrderSprite = (UnityEngine_Object_o *)this->fields.sortOrderSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  sort = (ListViewSort_o *)UnityEngine_Object__op_Inequality(sortOrderSprite, 0LL, 0LL);
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
      v10 = (System_String_o **)(v8->fields.isAscendingOrder ? &StringLiteral_17591/*"btn_txt_old"*/ : &StringLiteral_17584/*"btn_txt_new"*/);
      UISprite__set_spriteName((UISprite_o *)sort, *v10, 0LL);
      v11 = this->fields.sort;
      if ( !v11 )
        goto LABEL_36;
      sort = (ListViewSort_o *)this->fields.sortOrderSprite;
      if ( !sort )
        goto LABEL_36;
      v12 = (System_String_o **)&StringLiteral_17538/*"btn_sort_down"*/;
      v13 = (System_String_o **)&StringLiteral_17541/*"btn_sort_up"*/;
    }
    else
    {
      sort = (ListViewSort_o *)this->fields.sortExplanationSprite;
      if ( !sort )
        goto LABEL_36;
      v15 = (System_String_o **)(v8->fields.isAscendingOrder ? &StringLiteral_17628/*"btn_txt_up"*/ : &StringLiteral_17574/*"btn_txt_down"*/);
      UISprite__set_spriteName((UISprite_o *)sort, *v15, 0LL);
      v11 = this->fields.sort;
      if ( !v11 )
        goto LABEL_36;
      sort = (ListViewSort_o *)this->fields.sortOrderSprite;
      if ( !sort )
        goto LABEL_36;
      v12 = (System_String_o **)&StringLiteral_17541/*"btn_sort_up"*/;
      v13 = (System_String_o **)&StringLiteral_17538/*"btn_sort_down"*/;
    }
    if ( v11->fields.isAscendingOrder )
      v14 = v12;
    else
      v14 = v13;
    UISprite__set_spriteName((UISprite_o *)sort, *v14, 0LL);
    sort = (ListViewSort_o *)this->fields.sortExplanationSprite;
    if ( sort )
    {
      ((void (__fastcall *)(ListViewSort_o *, void *))sort->klass[2]._1.typeMetadataHandle)(
        sort,
        sort->klass[2]._1.interopData);
      return;
    }
LABEL_36:
    sub_1B8880C(sort, v4);
  }
}


void __fastcall FriendOperationItemListViewManager__SetSortKind(
        FriendOperationItemListViewManager_o *this,
        int32_t kind,
        const MethodInfo *method)
{
  struct ListViewSort_o *sort; // x8

  sort = this->fields.sort;
  if ( !sort )
    sub_1B8880C(this, kind);
  sort->fields.sortKind = kind;
}


void __fastcall FriendOperationItemListViewManager__SetupClassBoardInfo(
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
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v14; // x8
  __int64 v15; // x9
  int32_t *v16; // x10
  __int64 v17; // x0
  __int64 v18; // x0
  __int64 v19; // x21
  __int64 methodPtr_low; // x9
  Il2CppObject *v21; // x0
  __int64 v22; // x1
  ClassBoardSquareEntity_array *OtherThanNoneEntity; // x0
  __int64 v24; // x1
  System_Collections_Generic_IEnumerator_T__c *v25; // x8
  __int64 v26; // x9
  int32_t *v27; // x10
  __int64 v28; // x0

  if ( (byte_4A56508 & 1) == 0 )
  {
    sub_1B885B0(&ClassBoardBaseEntity_TypeInfo);
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
    sub_1B885B0(&Method_DataManager_GetMaster_ClassBoardBaseMaster___);
    sub_1B885B0(&Method_DataManager_GetMaster_ClassBoardSquareMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_int__int__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_int__int__Clear__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_int__int___ctor__);
    sub_1B885B0(&System_Collections_Generic_Dictionary_int__int__TypeInfo);
    sub_1B885B0(&System_IDisposable_TypeInfo);
    sub_1B885B0(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo);
    sub_1B885B0(&System_Collections_IEnumerator_TypeInfo);
    byte_4A56508 = 1;
  }
  classBoardMaxDictionary = this->fields.classBoardMaxDictionary;
  p_classBoardMaxDictionary = &this->fields.classBoardMaxDictionary;
  if ( classBoardMaxDictionary )
  {
    System_Collections_Generic_Dictionary_int__int___Clear(
      classBoardMaxDictionary,
      (const MethodInfo_3165008 *)Method_System_Collections_Generic_Dictionary_int__int__Clear__);
  }
  else
  {
    v5 = (System_Collections_Generic_Dictionary_int__int__o *)sub_1B887FC(System_Collections_Generic_Dictionary_int__int__TypeInfo);
    System_Collections_Generic_Dictionary_int__int____ctor(
      v5,
      (const MethodInfo_31644C4 *)Method_System_Collections_Generic_Dictionary_int__int___ctor__);
    *p_classBoardMaxDictionary = v5;
    sub_1B88554(p_classBoardMaxDictionary, v5);
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (System_Collections_ObjectModel_Collection_T__o *)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_ClassBoardBaseMaster___);
  if ( !Master_object
    || (Master_object = (System_Collections_ObjectModel_Collection_T__o *)Master_object[1].monitor) == 0LL )
  {
    sub_1B8880C(Master_object, v7);
  }
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 Master_object,
                 (const MethodInfo_30BAB58 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_1B8880C(0LL, v8);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v11 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v11;
        p_offset += 4;
        if ( !v11 )
          goto LABEL_15;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_15:
      p_method = sub_1BDA590(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v14 = Enumerator->klass;
    v15 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v16 = &v14->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v16 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        --v15;
        v16 += 4;
        if ( !v15 )
          goto LABEL_22;
      }
      v17 = (__int64)&v14->vtable[*v16].method;
    }
    else
    {
LABEL_22:
      v17 = sub_1BDA590(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v18 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v17)(
            Enumerator,
            *(_QWORD *)(v17 + 8));
    v19 = v18;
    if ( v18 )
    {
      methodPtr_low = LOBYTE(ClassBoardBaseEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( *(unsigned __int8 *)(*(_QWORD *)v18 + 304LL) < (unsigned int)methodPtr_low
        || *(ClassBoardBaseEntity_c **)(*(_QWORD *)(*(_QWORD *)v18 + 200LL) + 8 * methodPtr_low - 8) != ClassBoardBaseEntity_TypeInfo )
      {
        v21 = (Il2CppObject *)sub_1B88ACC(v18);
LABEL_42:
        sub_1B8880C(v21, v22);
      }
    }
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    v21 = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_ClassBoardSquareMaster___);
    if ( !v19 )
      goto LABEL_42;
    if ( !v21 )
      sub_1B8880C(0LL, v22);
    OtherThanNoneEntity = ClassBoardSquareMaster__GetOtherThanNoneEntity(
                            (ClassBoardSquareMaster_o *)v21,
                            *(_DWORD *)(v19 + 16),
                            0LL);
    if ( OtherThanNoneEntity )
    {
      if ( !*p_classBoardMaxDictionary )
        sub_1B8880C(OtherThanNoneEntity, v24);
      System_Collections_Generic_Dictionary_int__int___Add(
        *p_classBoardMaxDictionary,
        *(_DWORD *)(v19 + 16),
        OtherThanNoneEntity->max_length,
        (const MethodInfo_3164E88 *)Method_System_Collections_Generic_Dictionary_int__int__Add__);
    }
  }
  v25 = Enumerator->klass;
  v26 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v27 = &v25->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v27 - 1) != System_IDisposable_TypeInfo )
    {
      --v26;
      v27 += 4;
      if ( !v26 )
        goto LABEL_38;
    }
    v28 = (__int64)&v25->vtable[*v27].method;
  }
  else
  {
LABEL_38:
    v28 = sub_1BDA590(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v28)(Enumerator, *(_QWORD *)(v28 + 8));
}


void __fastcall FriendOperationItemListViewManager__add_callbackFunc(
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

  if ( (byte_4A564F0 & 1) == 0 )
  {
    sub_1B885B0(&FriendOperationItemListViewManager_CallbackFunc_TypeInfo);
    byte_4A564F0 = 1;
  }
  callbackFunc = (System_Delegate_o *)this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  while ( 1 )
  {
    v7 = System_Delegate__Combine(callbackFunc, (System_Delegate_o *)value, 0LL);
    if ( v7 )
    {
      if ( (FriendOperationItemListViewManager_CallbackFunc_c *)v7->klass != FriendOperationItemListViewManager_CallbackFunc_TypeInfo )
        break;
    }
    v8 = sub_1BC3AA0(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (FriendOperationItemListViewManager_o *)sub_1B88ACC(v7);
  FriendOperationItemListViewManager__remove_callbackFunc(v10, v11, v12);
}


void __fastcall FriendOperationItemListViewManager__add_callbackFunc2(
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

  if ( (byte_4A564F2 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    byte_4A564F2 = 1;
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
    v8 = sub_1BC3AA0(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (FriendOperationItemListViewManager_o *)sub_1B88ACC(v7);
  FriendOperationItemListViewManager__remove_callbackFunc2(v10, v11, v12);
}


void __fastcall FriendOperationItemListViewManager__changeSortKindDisp(
        FriendOperationItemListViewManager_o *this,
        const MethodInfo *method)
{
  ((void (__fastcall *)(FriendOperationItemListViewManager_o *, Il2CppMethodPointer))this->klass->vtable._5_SetSortButtonImage.method)(
    this,
    this->klass->vtable._6_GetFocusItemIndex.methodPtr);
}


System_Collections_Generic_List_FriendOperationItemListViewObject__o *__fastcall FriendOperationItemListViewManager__get_ClippingObjectList(
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

  if ( (byte_4A564F8 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_FriendOperationItemListViewObject___);
    sub_1B885B0(&Method_System_Collections_Generic_List_FriendOperationItemListViewObject__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_1B885B0(&Method_System_Collections_Generic_List_FriendOperationItemListViewObject___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_FriendOperationItemListViewObject__TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A564F8 = 1;
  }
  memset(&v22, 0, sizeof(v22));
  v3 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_FriendOperationItemListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_FriendOperationItemListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_1B8880C(0LL, v4);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v21,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v22 = v21;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v22,
            (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v22.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v7 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v7 )
    {
      if ( !current )
        sub_1B8880C(v7, v8);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_FriendOperationItemListViewObject___);
      v11 = Component_object;
      if ( !Component_object )
        sub_1B8880C(0LL, v10);
      Item = (ListViewItem_o *)FriendOperationItemListViewObject__GetItem(
                                 (FriendOperationItemListViewObject_o *)Component_object,
                                 v10);
      if ( !Item )
        sub_1B8880C(0LL, v13);
      if ( Item->fields.isTermination )
      {
        v14 = ListViewManager__ClippingItem_40722428((ListViewManager_o *)this, Item, 0LL);
        if ( v14 )
        {
          if ( !v3 )
            sub_1B8880C(v14, v15);
          items = v3->fields._items;
          v17 = Method_System_Collections_Generic_List_FriendOperationItemListViewObject__Add__;
          ++v3->fields._version;
          if ( !items )
            sub_1B8880C(v14, v15);
          size = v3->fields._size;
          if ( (unsigned int)size < items->max_length )
            goto LABEL_17;
LABEL_21:
          System_Collections_Generic_List_object___AddWithResize(
            v3,
            v11,
            *(const MethodInfo_34FD834 **)(*(_QWORD *)(v17[4] + 192LL) + 112LL));
        }
      }
      else
      {
        if ( !v3 )
          sub_1B8880C(Item, v13);
        items = v3->fields._items;
        v17 = Method_System_Collections_Generic_List_FriendOperationItemListViewObject__Add__;
        ++v3->fields._version;
        if ( !items )
          sub_1B8880C(Item, v13);
        size = v3->fields._size;
        if ( (unsigned int)size >= items->max_length )
          goto LABEL_21;
LABEL_17:
        v19 = &items->obj.klass + size;
        v3->fields._size = size + 1;
        v19[4] = (Il2CppClass *)v11;
        sub_1B88554(v19 + 4, v11);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v22,
    (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_FriendOperationItemListViewObject__o *)v3;
}


bool __fastcall FriendOperationItemListViewManager__get_IsExistSwapLockUser(
        FriendOperationItemListViewManager_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *itemList; // x0
  int32_t i; // w20
  int32_t size; // w8
  bool v6; // w21
  Il2CppObject *Item; // x0
  __int64 v8; // x1
  __int64 methodPtr_low; // x10

  if ( (byte_4A564F9 & 1) == 0 )
  {
    sub_1B885B0(&FriendOperationItemListViewItem_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    byte_4A564F9 = 1;
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
             (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    if ( Item )
    {
      methodPtr_low = LOBYTE(FriendOperationItemListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(Item->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low
        && (FriendOperationItemListViewItem_c *)Item->klass->_2.typeHierarchy[methodPtr_low - 1] == FriendOperationItemListViewItem_TypeInfo
        && BYTE2(Item[11].klass) )
      {
        break;
      }
    }
    itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
    if ( !itemList )
      sub_1B8880C(0LL, v8);
  }
  return v6;
}


System_Collections_Generic_List_FriendOperationItemListViewObject__o *__fastcall FriendOperationItemListViewManager__get_ObjectList(
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

  if ( (byte_4A564F7 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_FriendOperationItemListViewObject___);
    sub_1B885B0(&Method_System_Collections_Generic_List_FriendOperationItemListViewObject__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_1B885B0(&Method_System_Collections_Generic_List_FriendOperationItemListViewObject___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_FriendOperationItemListViewObject__TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A564F7 = 1;
  }
  memset(&v17, 0, sizeof(v17));
  v3 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_FriendOperationItemListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_FriendOperationItemListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_1B8880C(0LL, v4);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v16,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v17 = v16;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v17,
            (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v17.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v7 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v7 )
    {
      if ( !current )
        sub_1B8880C(v7, v8);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_FriendOperationItemListViewObject___);
      v10 = Component_object;
      if ( !v3 )
        sub_1B8880C(Component_object, Component_object);
      items = v3->fields._items;
      v12 = Method_System_Collections_Generic_List_FriendOperationItemListViewObject__Add__;
      ++v3->fields._version;
      if ( !items )
        sub_1B8880C(Component_object, Component_object);
      size = v3->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v3,
          Component_object,
          *(const MethodInfo_34FD834 **)(*(_QWORD *)(v12[4] + 192LL) + 112LL));
      }
      else
      {
        v14 = &items->obj.klass + size;
        v3->fields._size = size + 1;
        v14[4] = (Il2CppClass *)v10;
        sub_1B88554(v14 + 4, v10);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v17,
    (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_FriendOperationItemListViewObject__o *)v3;
}


bool __fastcall FriendOperationItemListViewManager__get_isMessageApply(
        FriendOperationItemListViewManager_o *this,
        const MethodInfo *method)
{
  return this->fields._isMessageApply_k__BackingField;
}


void __fastcall FriendOperationItemListViewManager__onClickListViewBlacklistRegist(
        FriendOperationItemListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  struct FriendOperationItemListViewManager_CallbackFunc_o *callbackFunc; // x20
  __int64 v5; // x0
  __int64 v6; // x1
  unsigned int Index; // w0

  callbackFunc = this->fields.callbackFunc;
  this->fields.callbackFunc = 0LL;
  v5 = sub_1B88554(&this->fields.callbackFunc, 0LL);
  if ( callbackFunc )
  {
    if ( !obj )
      sub_1B8880C(v5, v6);
    Index = ListViewObject__get_Index(obj, 0LL);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD, _QWORD))callbackFunc->fields.m_target)(
      callbackFunc->fields.original_method_info,
      9LL,
      Index,
      *(_QWORD *)&callbackFunc->fields.extra_arg);
  }
}


void __fastcall FriendOperationItemListViewManager__onClickListViewBlacklistRemove(
        FriendOperationItemListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  struct FriendOperationItemListViewManager_CallbackFunc_o *callbackFunc; // x20
  __int64 v5; // x0
  __int64 v6; // x1
  unsigned int Index; // w0

  callbackFunc = this->fields.callbackFunc;
  this->fields.callbackFunc = 0LL;
  v5 = sub_1B88554(&this->fields.callbackFunc, 0LL);
  if ( callbackFunc )
  {
    if ( !obj )
      sub_1B8880C(v5, v6);
    Index = ListViewObject__get_Index(obj, 0LL);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD, _QWORD))callbackFunc->fields.m_target)(
      callbackFunc->fields.original_method_info,
      10LL,
      Index,
      *(_QWORD *)&callbackFunc->fields.extra_arg);
  }
}


void __fastcall FriendOperationItemListViewManager__onClickListViewMessageDisp(
        FriendOperationItemListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  struct FriendOperationItemListViewManager_CallbackFunc_o *callbackFunc; // x20
  __int64 v5; // x0
  __int64 v6; // x1
  unsigned int Index; // w0

  callbackFunc = this->fields.callbackFunc;
  this->fields.callbackFunc = 0LL;
  v5 = sub_1B88554(&this->fields.callbackFunc, 0LL);
  if ( callbackFunc )
  {
    if ( !obj )
      sub_1B8880C(v5, v6);
    Index = ListViewObject__get_Index(obj, 0LL);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD, _QWORD))callbackFunc->fields.m_target)(
      callbackFunc->fields.original_method_info,
      11LL,
      Index,
      *(_QWORD *)&callbackFunc->fields.extra_arg);
  }
}


void __fastcall FriendOperationItemListViewManager__remove_callbackFunc(
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

  if ( (byte_4A564F1 & 1) == 0 )
  {
    sub_1B885B0(&FriendOperationItemListViewManager_CallbackFunc_TypeInfo);
    byte_4A564F1 = 1;
  }
  callbackFunc = (System_Delegate_o *)this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  while ( 1 )
  {
    v7 = System_Delegate__Remove(callbackFunc, (System_Delegate_o *)value, 0LL);
    if ( v7 )
    {
      if ( (FriendOperationItemListViewManager_CallbackFunc_c *)v7->klass != FriendOperationItemListViewManager_CallbackFunc_TypeInfo )
        break;
    }
    v8 = sub_1BC3AA0(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (FriendOperationItemListViewManager_o *)sub_1B88ACC(v7);
  FriendOperationItemListViewManager__add_callbackFunc2(v10, v11, v12);
}


void __fastcall FriendOperationItemListViewManager__remove_callbackFunc2(
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

  if ( (byte_4A564F3 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    byte_4A564F3 = 1;
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
    v8 = sub_1BC3AA0(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (FriendOperationItemListViewManager_o *)sub_1B88ACC(v7);
  FriendOperationItemListViewManager__get_isMessageApply(v10, v11);
}


void __fastcall FriendOperationItemListViewManager__resetScrollBarPos(
        FriendOperationItemListViewManager_o *this,
        const MethodInfo *method)
{
  UIProgressBar_o *scrollBar; // x0

  scrollBar = (UIProgressBar_o *)this->fields.scrollBar;
  if ( !scrollBar
    || (UIProgressBar__set_value(scrollBar, 0.0, 0LL), (scrollBar = (UIProgressBar_o *)this->fields.scrollBar) == 0LL) )
  {
    sub_1B8880C(scrollBar, method);
  }
  ((void (__fastcall *)(UIProgressBar_o *, void *))scrollBar->klass->vtable._7_ForceUpdate.method)(
    scrollBar,
    scrollBar->klass[1]._1.image);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FriendOperationItemListViewManager__setScrollBarActive(
        FriendOperationItemListViewManager_o *this,
        bool b,
        const MethodInfo *method)
{
  UnityEngine_Component_o *scrollBar; // x0

  scrollBar = (UnityEngine_Component_o *)this->fields.scrollBar;
  if ( !scrollBar
    || (scrollBar = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(scrollBar, 0LL)) == 0LL )
  {
    sub_1B8880C(scrollBar, b);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)scrollBar, b, 0LL);
}


void __fastcall FriendOperationItemListViewManager__set_isMessageApply(
        FriendOperationItemListViewManager_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._isMessageApply_k__BackingField = value;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FriendOperationItemListViewManager_CallbackFunc___ctor(
        FriendOperationItemListViewManager_CallbackFunc_o *this,
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
  sub_1B88554(&this->fields.method, object);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1B88670(v6) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1B88828(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1B886D8(v10, 0LL);
    }
    goto LABEL_5;
  }
  if ( v8 != 2 )
  {
LABEL_5:
    v9 = *(struct System_Reflection_MethodInfo_o **)&this->fields.method;
    this->fields.m_target = *(Il2CppObject **)&this->fields.method_ptr;
    this->fields.original_method_info = v9;
    goto LABEL_6;
  }
  this->fields.m_target = (Il2CppObject *)sub_19C7234;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_19C71DC;
}


// local variable allocation has failed, the output may be wrong!
System_IAsyncResult_o *__fastcall FriendOperationItemListViewManager_CallbackFunc__BeginInvoke(
        FriendOperationItemListViewManager_CallbackFunc_o *this,
        int32_t kind,
        int32_t result,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v9; // x2
  __int64 v10; // x3
  __int64 v11; // x4
  __int64 v13[3]; // [xsp+8h] [xbp-58h] BYREF
  int32_t v14; // [xsp+28h] [xbp-38h] BYREF
  int32_t v15; // [xsp+2Ch] [xbp-34h] BYREF

  v14 = result;
  v15 = kind;
  if ( (byte_4A5650C & 1) == 0 )
  {
    sub_1B885B0(&int_TypeInfo);
    sub_1B885B0(&FriendOperationItemListViewManager_ResultKind_TypeInfo);
    byte_4A5650C = 1;
  }
  v13[2] = 0LL;
  v13[0] = j_il2cpp_value_box_0(
             FriendOperationItemListViewManager_ResultKind_TypeInfo,
             &v15,
             *(_QWORD *)&result,
             callback,
             object);
  v13[1] = j_il2cpp_value_box_0(int_TypeInfo, &v14, v9, v10, v11);
  return (System_IAsyncResult_o *)sub_1B88564(this, v13, callback, object);
}


void __fastcall FriendOperationItemListViewManager_CallbackFunc__EndInvoke(
        FriendOperationItemListViewManager_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1B88568(result, 0LL, method);
}


void __fastcall FriendOperationItemListViewManager_CallbackFunc__Invoke(
        FriendOperationItemListViewManager_CallbackFunc_o *this,
        int32_t kind,
        int32_t result,
        const MethodInfo *method)
{
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, int32_t, int32_t, _QWORD))this->fields.m_target)(
    this->fields.original_method_info,
    kind,
    result,
    *(_QWORD *)&this->fields.extra_arg);
}


void __fastcall FriendOperationItemListViewManager___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19

  if ( (byte_4A5650D & 1) == 0 )
  {
    sub_1B885B0(&FriendOperationItemListViewManager___c_TypeInfo);
    byte_4A5650D = 1;
  }
  v1 = (Il2CppObject *)sub_1B887FC(FriendOperationItemListViewManager___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  FriendOperationItemListViewManager___c_TypeInfo->static_fields->__9 = (struct FriendOperationItemListViewManager___c_o *)v1;
  sub_1B88554(FriendOperationItemListViewManager___c_TypeInfo->static_fields, v1);
}


void __fastcall FriendOperationItemListViewManager___c___ctor(
        FriendOperationItemListViewManager___c_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall FriendOperationItemListViewManager___c___CreateList_b__35_0(
        FriendOperationItemListViewManager___c_o *this,
        DataEntityBase_o *a,
        DataEntityBase_o *b,
        const MethodInfo *method)
{
  int64_t *v5; // x20
  __int64 methodPtr_low; // x8
  int32_t result; // w0
  FriendOperationItemListViewObject_o *v8; // x0
  System_Action_o *v9; // x1
  const MethodInfo *v10; // x2

  v5 = (int64_t *)a;
  if ( (byte_4A5650E & 1) == 0 )
  {
    this = (FriendOperationItemListViewManager___c_o *)sub_1B885B0(&UserFriendRequestHistoryEntity_TypeInfo);
    byte_4A5650E = 1;
  }
  if ( !b )
LABEL_11:
    sub_1B8880C(this, a);
  a = (DataEntityBase_o *)UserFriendRequestHistoryEntity_TypeInfo;
  methodPtr_low = LOBYTE(UserFriendRequestHistoryEntity_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(b->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
    || (UserFriendRequestHistoryEntity_c *)b->klass->_2.typeHierarchy[methodPtr_low - 1] != UserFriendRequestHistoryEntity_TypeInfo )
  {
    this = (FriendOperationItemListViewManager___c_o *)sub_1B88ACC(b);
    goto LABEL_11;
  }
  if ( !v5 )
    goto LABEL_11;
  if ( *(unsigned __int8 *)(*v5 + 304) >= (unsigned int)methodPtr_low
    && *(UserFriendRequestHistoryEntity_c **)(*(_QWORD *)(*v5 + 200) + 8 * (methodPtr_low - 1)) == UserFriendRequestHistoryEntity_TypeInfo )
  {
    return System_Int64__CompareTo_62516348((int64_t)&b[2].monitor, v5[5], 0LL);
  }
  v8 = (FriendOperationItemListViewObject_o *)sub_1B88ACC(v5);
  FriendOperationItemListViewObject__add_callbackFunc(v8, v9, v10);
  return result;
}