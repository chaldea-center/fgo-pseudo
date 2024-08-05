void __fastcall FriendOperationItemListViewManager___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  System_Array_o *v4; // x0
  System_Array_o *v5; // x19
  struct FriendOperationItemListViewManager_StaticFields *static_fields; // x0
  System_RuntimeFieldHandle_o v7; // 0:w1.4

  if ( (byte_49F993F & 1) == 0 )
  {
    sub_1B64870(&ListViewSort_FilterKind___TypeInfo, v1);
    sub_1B64870(&FriendOperationItemListViewManager_TypeInfo, v2);
    sub_1B64870(
      &Field__PrivateImplementationDetails__6B3B6BC014A692F226080502E0DED60D67C84EBC03CC8CF43A550A89694FF5C0,
      v3);
    byte_49F993F = 1;
  }
  FriendOperationItemListViewManager_TypeInfo->static_fields->isInitSystem = 0;
  v4 = (System_Array_o *)sub_1B64918(ListViewSort_FilterKind___TypeInfo, 8LL);
  v7.fields.value = Field__PrivateImplementationDetails__6B3B6BC014A692F226080502E0DED60D67C84EBC03CC8CF43A550A89694FF5C0;
  v5 = v4;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_61291656(v4, v7, 0LL);
  static_fields = FriendOperationItemListViewManager_TypeInfo->static_fields;
  static_fields->classFilter = (struct ListViewSort_FilterKind_array *)v5;
  sub_1B64814(&static_fields->classFilter);
}


void __fastcall FriendOperationItemListViewManager___ctor(
        FriendOperationItemListViewManager_o *this,
        const MethodInfo *method)
{
  ListViewManager___ctor((ListViewManager_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FriendOperationItemListViewManager__CloseSortDialog(
        FriendOperationItemListViewManager_o *this,
        bool isResult,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v6; // x1

  if ( (byte_49F9938 & 1) == 0 )
  {
    sub_1B64870(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, isResult);
    byte_49F9938 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE318 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1B64ACC(0LL, v6);
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
  __int64 v26; // x1
  __int64 v27; // x1
  __int64 v28; // x1
  __int64 v29; // x1
  __int64 v30; // x1
  __int64 v31; // x1
  __int64 v32; // x1
  __int64 v33; // x1
  __int64 v34; // x1
  __int64 sort; // x0
  __int64 v36; // x1
  struct ListViewSort_array *sortStatusList; // x8
  System_String_o *v38; // x29
  OtherUserGameEntity_array *FriendCodeList; // x20
  __int64 v40; // x8
  unsigned __int64 v41; // x26
  struct System_Collections_Generic_List_ListViewItem__o *v42; // x9
  int32_t v43; // w23
  OtherUserGameEntity_o *v44; // x24
  System_Collections_Generic_Dictionary_int__int__o *v45; // x25
  FriendOperationItemListViewItem_o *v46; // x21
  __int64 v47; // x8
  _QWORD *v48; // x9
  __int64 v49; // x10
  __int64 v50; // x8
  Il2CppObject *MasterData_object; // x20
  System_Collections_ObjectModel_Collection_T__o *v52; // x21
  int32_t v53; // w22
  UserBlacklistEntity_o *v54; // x23
  __int64 methodPtr_low; // x10
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x8
  OtherUserGameEntity_o *v57; // x25
  int32_t size; // w26
  System_Collections_Generic_Dictionary_int__int__o *classBoardMaxDictionary; // x27
  FriendOperationItemListViewItem_o *v60; // x24
  __int64 v61; // x8
  _QWORD *v62; // x9
  __int64 v63; // x10
  __int64 v64; // x8
  __int64 *v65; // x8
  Il2CppObject *v66; // x20
  System_Collections_Generic_IEnumerable_T__o *v67; // x22
  System_Collections_Generic_List_object__o *v68; // x21
  System_Comparison_T__o *v69; // x22
  Il2CppObject *v70; // x23
  struct FriendOperationItemListViewManager___c_StaticFields *static_fields; // x0
  int32_t v72; // w23
  BalanceConfig_c *v73; // x0
  int32_t MaxFriendHistoryNum; // w1
  int32_t v75; // w22
  UserFriendRequestHistoryEntity_o *v76; // x23
  __int64 v77; // x10
  struct System_Collections_Generic_List_ListViewItem__o *v78; // x8
  OtherUserGameEntity_o *v79; // x25
  int32_t v80; // w26
  System_Collections_Generic_Dictionary_int__int__o *v81; // x27
  FriendOperationItemListViewItem_o *v82; // x24
  __int64 v83; // x8
  _QWORD *v84; // x9
  __int64 v85; // x10
  __int64 v86; // x8
  TblFriendMaster_o *v87; // x23
  OtherUserGameEntity_array *List; // x24
  OtherUserGameEntity_array *v89; // x23
  __int64 v90; // x8
  unsigned __int64 v91; // x29
  struct System_Collections_Generic_List_ListViewItem__o *v92; // x9
  int32_t v93; // w26
  OtherUserGameEntity_o *v94; // x27
  System_Collections_Generic_Dictionary_int__int__o *v95; // x28
  FriendOperationItemListViewItem_o *v96; // x25
  __int64 v97; // x8
  _QWORD *v98; // x9
  __int64 v99; // x10
  __int64 v100; // x8
  __int64 v101; // x8
  unsigned __int64 v102; // x29
  struct System_Collections_Generic_List_ListViewItem__o *v103; // x9
  int32_t v104; // w26
  OtherUserGameEntity_o *v105; // x27
  System_Collections_Generic_Dictionary_int__int__o *v106; // x28
  FriendOperationItemListViewItem_o *v107; // x25
  __int64 v108; // x8
  _QWORD *v109; // x9
  __int64 v110; // x10
  __int64 v111; // x8
  UILabel_o *emptyMessageLabel; // x20
  struct UIScrollView_o *scrollView; // x8
  System_String_o *v114; // [xsp+10h] [xbp-70h]

  if ( (byte_49F992E & 1) == 0 )
  {
    sub_1B64870(&BalanceConfig_TypeInfo, *(_QWORD *)&kind);
    sub_1B64870(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, v6);
    sub_1B64870(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v7);
    sub_1B64870(&System_Comparison_DataEntityBase__TypeInfo, v8);
    sub_1B64870(&Method_DataManager_GetMasterData_OtherUserGameMaster___, v9);
    sub_1B64870(&Method_DataManager_GetMasterData_TblFriendMaster___, v10);
    sub_1B64870(&Method_DataManager_GetMasterData_UserBlacklistMaster___, v11);
    sub_1B64870(&Method_DataManager_GetMasterData_UserFriendRequestHistoryMaster___, v12);
    sub_1B64870(&Method_DataMasterBase_OtherUserGameMaster__OtherUserGameEntity__long__GetEntity__, v13);
    sub_1B64870(&FriendOperationItemListViewItem_TypeInfo, v14);
    sub_1B64870(&FriendOperationItemListViewManager_TypeInfo, v15);
    sub_1B64870(&Method_System_Collections_Generic_List_ListViewItem__Add__, v16);
    sub_1B64870(&Method_System_Collections_Generic_List_DataEntityBase__RemoveRange__, v17);
    sub_1B64870(&Method_System_Collections_Generic_List_DataEntityBase__Reverse__, v18);
    sub_1B64870(&Method_System_Collections_Generic_List_DataEntityBase__Sort__, v19);
    sub_1B64870(&Method_System_Collections_Generic_List_DataEntityBase___ctor___75657128, v20);
    sub_1B64870(&Method_System_Collections_Generic_List_DataEntityBase__get_Count__, v21);
    sub_1B64870(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v22);
    sub_1B64870(&Method_System_Collections_Generic_List_DataEntityBase__get_Item__, v23);
    sub_1B64870(&System_Collections_Generic_List_DataEntityBase__TypeInfo, v24);
    sub_1B64870(&LocalizationManager_TypeInfo, v25);
    sub_1B64870(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v26);
    sub_1B64870(&Method_FriendOperationItemListViewManager___c__CreateList_b__35_0__, v27);
    sub_1B64870(&FriendOperationItemListViewManager___c_TypeInfo, v28);
    sub_1B64870(&UserBlacklistEntity_TypeInfo, v29);
    sub_1B64870(&UserFriendRequestHistoryEntity_TypeInfo, v30);
    sub_1B64870(&StringLiteral_3014/*"BLACKLIST_EMPTY_MESSAGE"*/, v31);
    sub_1B64870(&StringLiteral_6469/*"FRIEND_EMPTY_FRIEND_MESSAGE"*/, v32);
    sub_1B64870(&StringLiteral_3017/*"BLACKLIST_FRIEND_HISTORY_EMPTY_MESSAGE"*/, v33);
    sub_1B64870(&StringLiteral_6470/*"FRIEND_EMPTY_OFFERED_MESSAGE"*/, v34);
    byte_49F992E = 1;
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
    sub_1B64AD4(sort, v36);
  this->fields.sort = sortStatusList->m_Items[kind];
  sub_1B64814(&this->fields.sort);
  sort = (__int64)this->fields.sort;
  if ( !sort )
    goto LABEL_112;
  ListViewSort__Load((ListViewSort_o *)sort, 0LL);
  if ( kind == 8 )
  {
    sort = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE318 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !sort )
      goto LABEL_112;
    MasterData_object = DataManager__GetMasterData_object_(
                          (DataManager_o *)sort,
                          (const MethodInfo_2E3B6C8 *)Method_DataManager_GetMasterData_OtherUserGameMaster___);
    sort = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE318 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !sort )
      goto LABEL_112;
    sort = (__int64)DataManager__GetMasterData_object_(
                      (DataManager_o *)sort,
                      (const MethodInfo_2E3B6C8 *)Method_DataManager_GetMasterData_UserBlacklistMaster___);
    if ( !sort )
      goto LABEL_112;
    v52 = *(System_Collections_ObjectModel_Collection_T__o **)(sort + 32);
    ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
    if ( !v52 )
      goto LABEL_112;
    if ( System_Collections_ObjectModel_Collection_object___get_Count(
           v52,
           (const MethodInfo_3072DE4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__) < 1 )
    {
LABEL_42:
      v65 = &StringLiteral_3014/*"BLACKLIST_EMPTY_MESSAGE"*/;
      goto LABEL_73;
    }
    v53 = 0;
    while ( 1 )
    {
      sort = (__int64)System_Collections_ObjectModel_Collection_object___get_Item(
                        v52,
                        v53,
                        (const MethodInfo_3072E74 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !sort )
        break;
      v54 = (UserBlacklistEntity_o *)sort;
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
                        (const MethodInfo_30D632C *)Method_DataMasterBase_OtherUserGameMaster__OtherUserGameEntity__long__GetEntity__);
      itemList = this->fields.itemList;
      if ( !itemList )
        break;
      v57 = (OtherUserGameEntity_o *)sort;
      size = itemList->fields._size;
      classBoardMaxDictionary = this->fields.classBoardMaxDictionary;
      v60 = (FriendOperationItemListViewItem_o *)sub_1B64ABC(FriendOperationItemListViewItem_TypeInfo);
      FriendOperationItemListViewItem___ctor_30623592(v60, 8, size, v57, v54, 0, classBoardMaxDictionary, 0LL);
      sort = (__int64)this->fields.itemList;
      if ( !sort )
        break;
      v61 = *(_QWORD *)(sort + 16);
      v62 = Method_System_Collections_Generic_List_ListViewItem__Add__;
      ++*(_DWORD *)(sort + 28);
      if ( !v61 )
        break;
      v63 = *(int *)(sort + 24);
      if ( (unsigned int)v63 >= *(_DWORD *)(v61 + 24) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)sort,
          (Il2CppObject *)v60,
          *(const MethodInfo_34AF9B0 **)(*(_QWORD *)(v62[4] + 192LL) + 112LL));
      }
      else
      {
        v64 = v61 + 8 * v63;
        *(_DWORD *)(sort + 24) = v63 + 1;
        *(_QWORD *)(v64 + 32) = v60;
        sub_1B64814(v64 + 32);
      }
      if ( ++v53 >= System_Collections_ObjectModel_Collection_object___get_Count(
                      v52,
                      (const MethodInfo_3072DE4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__) )
        goto LABEL_42;
    }
LABEL_112:
    sub_1B64ACC(sort, v36);
  }
  if ( kind == 7 )
  {
    sort = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE318 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !sort )
      goto LABEL_112;
    v66 = DataManager__GetMasterData_object_(
            (DataManager_o *)sort,
            (const MethodInfo_2E3B6C8 *)Method_DataManager_GetMasterData_OtherUserGameMaster___);
    sort = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE318 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !sort )
      goto LABEL_112;
    sort = (__int64)DataManager__GetMasterData_object_(
                      (DataManager_o *)sort,
                      (const MethodInfo_2E3B6C8 *)Method_DataManager_GetMasterData_UserFriendRequestHistoryMaster___);
    if ( !sort )
      goto LABEL_112;
    v67 = *(System_Collections_Generic_IEnumerable_T__o **)(sort + 32);
    v68 = (System_Collections_Generic_List_object__o *)sub_1B64ABC(System_Collections_Generic_List_DataEntityBase__TypeInfo);
    System_Collections_Generic_List_object____ctor_55243428(
      v68,
      v67,
      (const MethodInfo_34AF2A4 *)Method_System_Collections_Generic_List_DataEntityBase___ctor___75657128);
    sort = (__int64)FriendOperationItemListViewManager___c_TypeInfo;
    if ( !FriendOperationItemListViewManager___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(FriendOperationItemListViewManager___c_TypeInfo);
      sort = (__int64)FriendOperationItemListViewManager___c_TypeInfo;
    }
    v69 = *(System_Comparison_T__o **)(*(_QWORD *)(sort + 184) + 8LL);
    if ( !v69 )
    {
      if ( !*(_DWORD *)(sort + 224) )
      {
        j_il2cpp_runtime_class_init_0(sort);
        sort = (__int64)FriendOperationItemListViewManager___c_TypeInfo;
      }
      v70 = **(Il2CppObject ***)(sort + 184);
      v69 = (System_Comparison_T__o *)sub_1B64ABC(System_Comparison_DataEntityBase__TypeInfo);
      System_Comparison_object____ctor(
        v69,
        v70,
        Method_FriendOperationItemListViewManager___c__CreateList_b__35_0__,
        0LL);
      static_fields = FriendOperationItemListViewManager___c_TypeInfo->static_fields;
      static_fields->__9__35_0 = (struct System_Comparison_DataEntityBase__o *)v69;
      sort = sub_1B64814(&static_fields->__9__35_0);
    }
    if ( !v68 )
      goto LABEL_112;
    System_Collections_Generic_List_object___Sort_55252244(
      v68,
      v69,
      (const MethodInfo_34B1514 *)Method_System_Collections_Generic_List_DataEntityBase__Sort__);
    v72 = v68->fields._size;
    v73 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v73 = BalanceConfig_TypeInfo;
    }
    MaxFriendHistoryNum = v73->static_fields->MaxFriendHistoryNum;
    if ( v72 > MaxFriendHistoryNum )
    {
      if ( !v73->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v73);
        MaxFriendHistoryNum = BalanceConfig_TypeInfo->static_fields->MaxFriendHistoryNum;
      }
      System_Collections_Generic_List_object___RemoveRange(
        v68,
        MaxFriendHistoryNum,
        v68->fields._size - MaxFriendHistoryNum,
        (const MethodInfo_34B12BC *)Method_System_Collections_Generic_List_DataEntityBase__RemoveRange__);
    }
    System_Collections_Generic_List_object___Reverse(
      v68,
      (const MethodInfo_34B137C *)Method_System_Collections_Generic_List_DataEntityBase__Reverse__);
    ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
    if ( v68->fields._size < 1 )
    {
LABEL_72:
      v65 = &StringLiteral_3017/*"BLACKLIST_FRIEND_HISTORY_EMPTY_MESSAGE"*/;
      goto LABEL_73;
    }
    v75 = 0;
    while ( 1 )
    {
      sort = (__int64)System_Collections_Generic_List_object___get_Item(
                        v68,
                        v75,
                        (const MethodInfo_34AF6E0 *)Method_System_Collections_Generic_List_DataEntityBase__get_Item__);
      if ( !sort )
        goto LABEL_112;
      v76 = (UserFriendRequestHistoryEntity_o *)sort;
      v77 = LOBYTE(UserFriendRequestHistoryEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( *(unsigned __int8 *)(*(_QWORD *)sort + 304LL) < (unsigned int)v77 )
        goto LABEL_112;
      if ( *(UserFriendRequestHistoryEntity_c **)(*(_QWORD *)(*(_QWORD *)sort + 200LL) + 8 * v77 - 8) != UserFriendRequestHistoryEntity_TypeInfo )
        goto LABEL_112;
      sort = UserFriendRequestHistoryEntity__getOtherUserId((UserFriendRequestHistoryEntity_o *)sort, 0LL);
      if ( !v66 )
        goto LABEL_112;
      sort = (__int64)DataMasterBase_object__object__long___GetEntity(
                        (DataMasterBase_TMaster__TEntity__PKType__o *)v66,
                        sort,
                        (const MethodInfo_30D632C *)Method_DataMasterBase_OtherUserGameMaster__OtherUserGameEntity__long__GetEntity__);
      v78 = this->fields.itemList;
      if ( !v78 )
        goto LABEL_112;
      v79 = (OtherUserGameEntity_o *)sort;
      v80 = v78->fields._size;
      v81 = this->fields.classBoardMaxDictionary;
      v82 = (FriendOperationItemListViewItem_o *)sub_1B64ABC(FriendOperationItemListViewItem_TypeInfo);
      FriendOperationItemListViewItem___ctor_30623928(v82, 7, v80, v79, v76, 0, v81, 0LL);
      sort = (__int64)this->fields.itemList;
      if ( !sort )
        goto LABEL_112;
      v83 = *(_QWORD *)(sort + 16);
      v84 = Method_System_Collections_Generic_List_ListViewItem__Add__;
      ++*(_DWORD *)(sort + 28);
      if ( !v83 )
        goto LABEL_112;
      v85 = *(int *)(sort + 24);
      if ( (unsigned int)v85 >= *(_DWORD *)(v83 + 24) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)sort,
          (Il2CppObject *)v82,
          *(const MethodInfo_34AF9B0 **)(*(_QWORD *)(v84[4] + 192LL) + 112LL));
      }
      else
      {
        v86 = v83 + 8 * v85;
        *(_DWORD *)(sort + 24) = v85 + 1;
        *(_QWORD *)(v86 + 32) = v82;
        sub_1B64814(v86 + 32);
      }
      if ( ++v75 >= v68->fields._size )
        goto LABEL_72;
    }
  }
  v38 = (System_String_o *)StringLiteral_6470/*"FRIEND_EMPTY_OFFERED_MESSAGE"*/;
  if ( !kind )
  {
    sort = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE318 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !sort )
      goto LABEL_112;
    sort = (__int64)DataManager__GetMasterData_object_(
                      (DataManager_o *)sort,
                      (const MethodInfo_2E3B6C8 *)Method_DataManager_GetMasterData_OtherUserGameMaster___);
    if ( !sort )
      goto LABEL_112;
    FriendCodeList = OtherUserGameMaster__GetFriendCodeList((OtherUserGameMaster_o *)sort, this->fields.friendCode, 0LL);
    ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
    if ( !FriendCodeList )
      goto LABEL_112;
    v40 = *(_QWORD *)&FriendCodeList->max_length;
    if ( (int)v40 >= 1 )
    {
      v41 = 0LL;
      while ( 1 )
      {
        v42 = this->fields.itemList;
        if ( !v42 )
          goto LABEL_112;
        if ( v41 >= (unsigned int)v40 )
          goto LABEL_113;
        v43 = v42->fields._size;
        v44 = FriendCodeList->m_Items[v41];
        v45 = this->fields.classBoardMaxDictionary;
        v46 = (FriendOperationItemListViewItem_o *)sub_1B64ABC(FriendOperationItemListViewItem_TypeInfo);
        FriendOperationItemListViewItem___ctor_30623276(v46, 0, v43, v44, 0, v45, 0LL);
        sort = (__int64)this->fields.itemList;
        if ( !sort )
          goto LABEL_112;
        v47 = *(_QWORD *)(sort + 16);
        v48 = Method_System_Collections_Generic_List_ListViewItem__Add__;
        ++*(_DWORD *)(sort + 28);
        if ( !v47 )
          goto LABEL_112;
        v49 = *(int *)(sort + 24);
        if ( (unsigned int)v49 >= *(_DWORD *)(v47 + 24) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)sort,
            (Il2CppObject *)v46,
            *(const MethodInfo_34AF9B0 **)(*(_QWORD *)(v48[4] + 192LL) + 112LL));
        }
        else
        {
          v50 = v47 + 8 * v49;
          *(_DWORD *)(sort + 24) = v49 + 1;
          *(_QWORD *)(v50 + 32) = v46;
          sort = sub_1B64814(v50 + 32);
        }
        LODWORD(v40) = FriendCodeList->max_length;
        if ( (__int64)++v41 >= (int)v40 )
          goto LABEL_107;
      }
    }
    goto LABEL_107;
  }
  sort = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE318 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !sort )
    goto LABEL_112;
  v114 = v38;
  sort = (__int64)DataManager__GetMasterData_object_(
                    (DataManager_o *)sort,
                    (const MethodInfo_2E3B6C8 *)Method_DataManager_GetMasterData_TblFriendMaster___);
  if ( !sort )
    goto LABEL_112;
  v87 = (TblFriendMaster_o *)sort;
  List = TblFriendMaster__GetList((TblFriendMaster_o *)sort, kind, 0LL);
  v89 = TblFriendMaster__GetList(v87, 9, 0LL);
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
  if ( kind == 3 )
  {
    if ( !v89 )
      goto LABEL_112;
    v90 = *(_QWORD *)&v89->max_length;
    if ( (int)v90 >= 1 )
    {
      v91 = 0LL;
      do
      {
        v92 = this->fields.itemList;
        if ( !v92 )
          goto LABEL_112;
        if ( v91 >= (unsigned int)v90 )
          goto LABEL_113;
        v93 = v92->fields._size;
        v94 = v89->m_Items[v91];
        v95 = this->fields.classBoardMaxDictionary;
        v96 = (FriendOperationItemListViewItem_o *)sub_1B64ABC(FriendOperationItemListViewItem_TypeInfo);
        FriendOperationItemListViewItem___ctor_30623276(v96, 9, v93, v94, classPos, v95, 0LL);
        sort = (__int64)this->fields.itemList;
        if ( !sort )
          goto LABEL_112;
        v97 = *(_QWORD *)(sort + 16);
        v98 = Method_System_Collections_Generic_List_ListViewItem__Add__;
        ++*(_DWORD *)(sort + 28);
        if ( !v97 )
          goto LABEL_112;
        v99 = *(int *)(sort + 24);
        if ( (unsigned int)v99 >= *(_DWORD *)(v97 + 24) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)sort,
            (Il2CppObject *)v96,
            *(const MethodInfo_34AF9B0 **)(*(_QWORD *)(v98[4] + 192LL) + 112LL));
        }
        else
        {
          v100 = v97 + 8 * v99;
          *(_DWORD *)(sort + 24) = v99 + 1;
          *(_QWORD *)(v100 + 32) = v96;
          sort = sub_1B64814(v100 + 32);
        }
        LODWORD(v90) = v89->max_length;
      }
      while ( (__int64)++v91 < (int)v90 );
    }
  }
  if ( !List )
    goto LABEL_112;
  v101 = *(_QWORD *)&List->max_length;
  if ( (int)v101 >= 1 )
  {
    v102 = 0LL;
    do
    {
      v103 = this->fields.itemList;
      if ( !v103 )
        goto LABEL_112;
      if ( v102 >= (unsigned int)v101 )
        goto LABEL_113;
      v104 = v103->fields._size;
      v105 = List->m_Items[v102];
      v106 = this->fields.classBoardMaxDictionary;
      v107 = (FriendOperationItemListViewItem_o *)sub_1B64ABC(FriendOperationItemListViewItem_TypeInfo);
      FriendOperationItemListViewItem___ctor_30623276(v107, kind, v104, v105, classPos, v106, 0LL);
      sort = (__int64)this->fields.itemList;
      if ( !sort )
        goto LABEL_112;
      v108 = *(_QWORD *)(sort + 16);
      v109 = Method_System_Collections_Generic_List_ListViewItem__Add__;
      ++*(_DWORD *)(sort + 28);
      if ( !v108 )
        goto LABEL_112;
      v110 = *(int *)(sort + 24);
      if ( (unsigned int)v110 >= *(_DWORD *)(v108 + 24) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)sort,
          (Il2CppObject *)v107,
          *(const MethodInfo_34AF9B0 **)(*(_QWORD *)(v109[4] + 192LL) + 112LL));
      }
      else
      {
        v111 = v108 + 8 * v110;
        *(_DWORD *)(sort + 24) = v110 + 1;
        *(_QWORD *)(v111 + 32) = v107;
        sort = sub_1B64814(v111 + 32);
      }
      v101 = *(_QWORD *)&List->max_length;
    }
    while ( (__int64)++v102 < (int)v101 );
  }
  if ( v101 )
  {
    v38 = v114;
    goto LABEL_107;
  }
  v38 = v114;
  if ( !v89 )
    goto LABEL_112;
  if ( !*(_QWORD *)&v89->max_length )
  {
    if ( kind != 2 )
    {
      if ( kind == 3 )
        v38 = (System_String_o *)StringLiteral_6469/*"FRIEND_EMPTY_FRIEND_MESSAGE"*/;
      goto LABEL_107;
    }
    v65 = &StringLiteral_6470/*"FRIEND_EMPTY_OFFERED_MESSAGE"*/;
LABEL_73:
    v38 = (System_String_o *)*v65;
  }
LABEL_107:
  emptyMessageLabel = this->fields.emptyMessageLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  sort = (__int64)LocalizationManager__Get(v38, 0LL);
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
  sub_1B64814(&this->fields.friendCode);
  FriendOperationItemListViewManager__CreateList(this, 0, 0, v4);
}


void __fastcall FriendOperationItemListViewManager__CreateSorteData(int32_t classPos, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  FriendOperationItemListViewManager_c *v6; // x0
  __int64 v7; // x0
  FriendOperationItemListViewManager_c *v8; // x8
  __int64 v9; // x20
  struct FriendOperationItemListViewManager_StaticFields *static_fields; // x0
  unsigned __int64 i; // x27
  FriendOperationItemListViewManager_c *v12; // x0
  struct FriendOperationItemListViewManager_StaticFields *v13; // x8
  unsigned int *sortStatusList; // x28
  System_String_o *v15; // x0
  System_String_o *v16; // x21
  ListViewSort_o *v17; // x20
  FriendOperationItemListViewManager_c *inited; // x0
  __int64 v19; // x1
  unsigned int *v20; // x0
  struct ListViewSort_array *v21; // x8
  Il2CppClass **v22; // x8
  ListViewSort_o *v23; // x20
  struct ListViewSort_FilterKind_array *v24; // x8
  unsigned __int64 j; // x21
  struct ListViewSort_FilterKind_array *classFilter; // x8
  __int64 v27; // x0
  int v28; // [xsp+Ch] [xbp-54h] BYREF

  if ( (byte_49F9928 & 1) == 0 )
  {
    sub_1B64870(&FriendOperationItemListViewManager_TypeInfo, method);
    sub_1B64870(&ListViewSort___TypeInfo, v3);
    sub_1B64870(&ListViewSort_TypeInfo, v4);
    sub_1B64870(&StringLiteral_6816/*"FriendOperation"*/, v5);
    byte_49F9928 = 1;
  }
  v6 = FriendOperationItemListViewManager_TypeInfo;
  v28 = 0;
  if ( !FriendOperationItemListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FriendOperationItemListViewManager_TypeInfo);
    v6 = FriendOperationItemListViewManager_TypeInfo;
  }
  if ( !v6->static_fields->isInitSystem )
  {
    v7 = sub_1B64918(ListViewSort___TypeInfo, 10LL);
    v8 = FriendOperationItemListViewManager_TypeInfo;
    v9 = v7;
    if ( !FriendOperationItemListViewManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(FriendOperationItemListViewManager_TypeInfo);
      v8 = FriendOperationItemListViewManager_TypeInfo;
    }
    static_fields = v8->static_fields;
    static_fields->sortStatusList = (struct ListViewSort_array *)v9;
    sub_1B64814(&static_fields->sortStatusList);
    for ( i = 0LL; ; ++i )
    {
      v12 = FriendOperationItemListViewManager_TypeInfo;
      if ( !FriendOperationItemListViewManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(FriendOperationItemListViewManager_TypeInfo);
        v12 = FriendOperationItemListViewManager_TypeInfo;
      }
      v13 = v12->static_fields;
      if ( i == 10 )
        break;
      sortStatusList = (unsigned int *)v13->sortStatusList;
      v28 = i + 1;
      v15 = System_Int32__ToString((int32_t)&v28, 0LL);
      v16 = System_String__Concat_61383576((System_String_o *)StringLiteral_6816/*"FriendOperation"*/, v15, 0LL);
      v17 = (ListViewSort_o *)sub_1B64ABC(ListViewSort_TypeInfo);
      ListViewSort___ctor_40431268(v17, v16, 3, 0, 0LL);
      if ( !sortStatusList )
        goto LABEL_37;
      if ( v17 )
      {
        inited = (FriendOperationItemListViewManager_c *)sub_1B649AC(v17, *(_QWORD *)(*(_QWORD *)sortStatusList + 64LL));
        if ( !inited )
        {
          v27 = sub_1B64AF0();
          sub_1B64998(v27, 0LL);
        }
      }
      if ( i >= sortStatusList[6] )
        goto LABEL_38;
      v20 = &sortStatusList[2 * i];
      *((_QWORD *)v20 + 4) = v17;
      inited = (FriendOperationItemListViewManager_c *)sub_1B64814(v20 + 8);
      v21 = FriendOperationItemListViewManager_TypeInfo->static_fields->sortStatusList;
      if ( !v21 )
        goto LABEL_37;
      if ( i >= v21->max_length )
LABEL_38:
        sub_1B64AD4(inited, v19);
      v22 = &v21->obj.klass + i;
      v23 = (ListViewSort_o *)v22[4];
      if ( !v23 )
        goto LABEL_37;
      ListViewSort__ClassFilterOFF((ListViewSort_o *)v22[4], 0LL);
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
          ListViewSort__SetFilter(v23, classFilter->m_Items[j + 1], 1, 0LL);
        }
LABEL_37:
        sub_1B64ACC(inited, v19);
      }
      inited = FriendOperationItemListViewManager_TypeInfo;
      if ( !FriendOperationItemListViewManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(FriendOperationItemListViewManager_TypeInfo);
        inited = FriendOperationItemListViewManager_TypeInfo;
      }
      v24 = inited->static_fields->classFilter;
      if ( !v24 )
        goto LABEL_37;
      if ( v24->max_length <= classPos )
        goto LABEL_38;
      ListViewSort__SetFilter(v23, v24->m_Items[classPos + 1], 1, 0LL);
LABEL_25:
      ;
    }
    v13->isInitSystem = 1;
  }
}


void __fastcall FriendOperationItemListViewManager__DeleteContinueData(const MethodInfo *method)
{
  const MethodInfo *v1; // x1
  __int64 v2; // x1
  __int64 v3; // x20
  FriendOperationItemListViewManager_c *v4; // x0
  struct ListViewSort_array *sortStatusList; // x8

  if ( (byte_49F9929 & 1) == 0 )
  {
    sub_1B64870(&FriendOperationItemListViewManager_TypeInfo, v1);
    byte_49F9929 = 1;
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
      sub_1B64AD4(v4, v2);
    v4 = (FriendOperationItemListViewManager_c *)*((_QWORD *)&sortStatusList->obj.klass + v3);
    if ( !v4 )
LABEL_13:
      sub_1B64ACC(v4, v2);
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
    sub_1B64ACC(0LL, v3);
  ListViewSort__Save(sort, 0LL);
}


void __fastcall FriendOperationItemListViewManager__EndCloseClassBoardEffectListDialog(
        FriendOperationItemListViewManager_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_49F993E & 1) == 0 )
  {
    sub_1B64870(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    byte_49F993E = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE318 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1B64ACC(0LL, v4);
  CommonUI__CloseClassBoardEffectListDialog((CommonUI_o *)Instance, 0LL, 0LL);
  this->fields.isInput = 1;
}


// local variable allocation has failed, the output may be wrong!
FriendOperationItemListViewItem_o *__fastcall FriendOperationItemListViewManager__GetItem(
        FriendOperationItemListViewManager_o *this,
        int32_t index,
        const MethodInfo *method)
{
  __int64 v5; // x1
  FriendOperationItemListViewItem_o *result; // x0
  __int64 methodPtr_low; // x10

  if ( (byte_49F992F & 1) == 0 )
  {
    sub_1B64870(&FriendOperationItemListViewItem_TypeInfo, *(_QWORD *)&index);
    sub_1B64870(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v5);
    byte_49F992F = 1;
  }
  result = (FriendOperationItemListViewItem_o *)this->fields.itemList;
  if ( result )
  {
    result = (FriendOperationItemListViewItem_o *)System_Collections_Generic_List_object___get_Item(
                                                    (System_Collections_Generic_List_object__o *)result,
                                                    index,
                                                    (const MethodInfo_34AF6E0 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
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

  if ( (byte_49F992A & 1) == 0 )
  {
    sub_1B64870(&FriendOperationItemListViewManager_TypeInfo, v1);
    byte_49F992A = 1;
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
        sub_1B64AD4(v2, v1);
      v2 = (FriendOperationItemListViewManager_c *)*((_QWORD *)&sortStatusList->obj.klass + i);
      if ( !v2 )
LABEL_15:
        sub_1B64ACC(v2, v1);
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
  v5 = sub_1B64814(&this->fields.callbackFunc);
  if ( callbackFunc )
  {
    if ( !obj )
      sub_1B64ACC(v5, v6);
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
  v5 = sub_1B64814(&this->fields.callbackFunc);
  if ( callbackFunc )
  {
    if ( !obj )
      sub_1B64ACC(v5, v6);
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
  v5 = sub_1B64814(&this->fields.callbackFunc);
  if ( callbackFunc )
  {
    if ( !obj )
      sub_1B64ACC(v5, v6);
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
  v5 = sub_1B64814(&this->fields.callbackFunc);
  if ( callbackFunc )
  {
    if ( !obj )
      sub_1B64ACC(v5, v6);
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
  v5 = sub_1B64814(&this->fields.callbackFunc);
  if ( callbackFunc )
  {
    if ( !obj )
      sub_1B64ACC(v5, v6);
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
  v5 = sub_1B64814(&this->fields.callbackFunc);
  if ( callbackFunc )
  {
    if ( !obj )
      sub_1B64ACC(v5, v6);
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

  if ( (byte_49F9939 & 1) == 0 )
  {
    sub_1B64870(&Method_FriendOperationItemListViewManager_OnClickSortAscendingOrder__, method);
    byte_49F9939 = 1;
  }
  if ( this->fields.isInput )
  {
    v3 = Method_FriendOperationItemListViewManager_OnClickSortAscendingOrder__;
    if ( (*((_BYTE *)Method_FriendOperationItemListViewManager_OnClickSortAscendingOrder__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B64888();
    v4 = (System_Reflection_MethodBase_o *)sub_1B64854(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
    sort = this->fields.sort;
    if ( !sort )
      sub_1B64ACC(v5, v6);
    sort->fields.isAscendingOrder ^= 1u;
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, 3, 0LL);
  }
}


void __fastcall FriendOperationItemListViewManager__OnClickSortKind(
        FriendOperationItemListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  _QWORD *v6; // x0
  System_Reflection_MethodBase_o *v7; // x0
  int32_t menuKind; // w8
  Il2CppObject *v9; // x0
  ListViewSort_o *sort; // x20
  CommonUI_o *v11; // x21
  OtherUserSortDialog_CallbackFunc_o *v12; // x22
  __int64 v13; // x0
  __int64 v14; // x1
  int32_t v15; // w1
  Il2CppObject *Instance; // x0

  if ( (byte_49F9937 & 1) == 0 )
  {
    sub_1B64870(&OtherUserSortDialog_CallbackFunc_TypeInfo, method);
    sub_1B64870(&Method_FriendOperationItemListViewManager_CloseSortDialog__, v3);
    sub_1B64870(&Method_FriendOperationItemListViewManager_OnClickSortKind__, v4);
    sub_1B64870(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    byte_49F9937 = 1;
  }
  if ( this->fields.isInput )
  {
    v6 = Method_FriendOperationItemListViewManager_OnClickSortKind__;
    if ( (*((_BYTE *)Method_FriendOperationItemListViewManager_OnClickSortKind__ + 83) & 2) != 0 )
      v6 = (_QWORD *)sub_1B64888();
    v7 = (System_Reflection_MethodBase_o *)sub_1B64854(v6, v6[4]);
    OverwriteAssetSoundName__PlaySystemSe(v7, 0, 0LL);
    menuKind = this->fields.menuKind;
    if ( menuKind == 2 )
    {
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE318 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      sort = this->fields.sort;
      v11 = (CommonUI_o *)Instance;
      v12 = (OtherUserSortDialog_CallbackFunc_o *)sub_1B64ABC(OtherUserSortDialog_CallbackFunc_TypeInfo);
      OtherUserSortDialog_CallbackFunc___ctor(
        v12,
        (Il2CppObject *)this,
        Method_FriendOperationItemListViewManager_CloseSortDialog__,
        0LL);
      if ( v11 )
      {
        v15 = 2;
        goto LABEL_13;
      }
LABEL_14:
      sub_1B64ACC(v13, v14);
    }
    if ( menuKind == 3 )
    {
      v9 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE318 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      sort = this->fields.sort;
      v11 = (CommonUI_o *)v9;
      v12 = (OtherUserSortDialog_CallbackFunc_o *)sub_1B64ABC(OtherUserSortDialog_CallbackFunc_TypeInfo);
      OtherUserSortDialog_CallbackFunc___ctor(
        v12,
        (Il2CppObject *)this,
        Method_FriendOperationItemListViewManager_CloseSortDialog__,
        0LL);
      if ( v11 )
      {
        v15 = 1;
LABEL_13:
        CommonUI__OpenOtherUserSortDialog(v11, v15, sort, v12, 0LL);
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
  v5 = sub_1B64814(&this->fields.callbackFunc);
  if ( callbackFunc )
  {
    if ( !obj )
      sub_1B64ACC(v5, v6);
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

  if ( (byte_49F9936 & 1) == 0 )
  {
    sub_1B64870(&StringLiteral_12496/*"ScrollViewEnabled"*/, obj);
    byte_49F9936 = 1;
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
      (System_String_o *)StringLiteral_12496/*"ScrollViewEnabled"*/,
      0.1,
      0LL);
    callbackFunc = this->fields.callbackFunc;
    this->fields.callbackFunc = 0LL;
    scrollView = (UIScrollView_o *)sub_1B64814(&this->fields.callbackFunc);
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
      sub_1B64ACC(scrollView, obj);
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
  __int64 v3; // x1
  int32_t callbackCount; // w8
  bool v5; // vf
  int32_t v6; // w8
  UnityEngine_GameObject_o *emptyMessageBase; // x0
  __int64 v8; // x1
  struct System_Collections_Generic_List_ListViewItem__o *itemSortList; // x8
  UnityEngine_Object_o *scrollView; // x20
  struct System_Action_o *callbackFunc2; // x20

  if ( (byte_49F9935 & 1) == 0 )
  {
    sub_1B64870(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, method);
    sub_1B64870(&UnityEngine_Object_TypeInfo, v3);
    byte_49F9935 = 1;
  }
  callbackCount = this->fields.callbackCount;
  v5 = __OFSUB__(callbackCount, 1);
  v6 = callbackCount - 1;
  if ( v6 < 0 == v5 )
  {
    this->fields.callbackCount = v6;
    if ( !v6 )
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
          sub_1B64814(&this->fields.callbackFunc2);
          if ( callbackFunc2 )
            ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))callbackFunc2->fields.m_target)(
              callbackFunc2->fields.original_method_info,
              *(_QWORD *)&callbackFunc2->fields.extra_arg);
          return;
        }
      }
LABEL_18:
      sub_1B64ACC(emptyMessageBase, v8);
    }
  }
}


void __fastcall FriendOperationItemListViewManager__OpenSupportClassBoard(
        FriendOperationItemListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  FriendOperationItemListViewManager_o *v4; // x19
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
  System_Collections_Generic_List_object__o *itemList; // x21
  int32_t Index; // w0
  Il2CppObject *Item; // x0
  FriendOperationItemListViewItem_o *v19; // x20
  __int64 methodPtr_low; // x10
  _QWORD *v21; // x0
  System_Reflection_MethodBase_o *v22; // x0
  Il2CppObject *Master_object; // x21
  int32_t scrollView; // w22
  struct OtherUserGameEntity_o *otherUserGameEntity; // x8
  struct ClassBoardInfo_array *userClassBoardInfo; // x23
  int max_length; // w8
  int32_t v28; // w20
  unsigned int v29; // w24
  ClassBoardInfo_o *v30; // x21
  _QWORD *v31; // x22
  __int64 v32; // x8
  __int64 v33; // x0
  __int64 v34; // x0
  _QWORD *v35; // x22
  __int64 v36; // x8
  __int64 v37; // x0
  __int64 v38; // x0
  Il2CppObject *Instance; // x22
  System_Action_o *v40; // x23

  v4 = this;
  if ( (byte_49F993D & 1) == 0 )
  {
    sub_1B64870(&System_Action_TypeInfo, obj);
    sub_1B64870(&Method_System_Array_Empty_int___, v5);
    sub_1B64870(&ClassBoardInfo_TypeInfo, v6);
    sub_1B64870(&Method_DataManager_GetMaster_ClassBoardClassMaster___, v7);
    sub_1B64870(&Method_DataManager_GetMaster_ServantMaster___, v8);
    sub_1B64870(&DataManager_TypeInfo, v9);
    sub_1B64870(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v10);
    sub_1B64870(&FriendOperationItemListViewItem_TypeInfo, v11);
    sub_1B64870(&Method_FriendOperationItemListViewManager_EndCloseClassBoardEffectListDialog__, v12);
    sub_1B64870(&Method_FriendOperationItemListViewManager_OpenSupportClassBoard__, v13);
    sub_1B64870(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v14);
    this = (FriendOperationItemListViewManager_o *)sub_1B64870(
                                                     &Method_SingletonMonoBehaviour_CommonUI__get_Instance__,
                                                     v15);
    byte_49F993D = 1;
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
                 (const MethodInfo_34AF6E0 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
        if ( !Item )
          return;
        v19 = (FriendOperationItemListViewItem_o *)Item;
        methodPtr_low = LOBYTE(FriendOperationItemListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(Item->klass->vtable[0].methodPtr) < (unsigned int)methodPtr_low
          || (FriendOperationItemListViewItem_c *)Item->klass->_2.typeHierarchy[methodPtr_low - 1] != FriendOperationItemListViewItem_TypeInfo )
        {
          return;
        }
        v4->fields.isInput = 0;
        v21 = Method_FriendOperationItemListViewManager_OpenSupportClassBoard__;
        if ( (*((_BYTE *)Method_FriendOperationItemListViewManager_OpenSupportClassBoard__ + 83) & 2) != 0 )
          v21 = (_QWORD *)sub_1B64888();
        v22 = (System_Reflection_MethodBase_o *)sub_1B64854(v21, v21[4]);
        OverwriteAssetSoundName__PlaySystemSe(v22, 0, 0LL);
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        Master_object = DataManager__GetMaster_object_((const MethodInfo_2E3B674 *)Method_DataManager_GetMaster_ServantMaster___);
        this = (FriendOperationItemListViewManager_o *)FriendOperationItemListViewItem__get_SvtId(v19, 0LL);
        if ( Master_object )
        {
          this = (FriendOperationItemListViewManager_o *)DataMasterBase_object__object__int___GetEntity(
                                                           (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                                           (int32_t)this,
                                                           (const MethodInfo_30D6180 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
          if ( this )
          {
            scrollView = (int32_t)this->fields.scrollView;
            this = (FriendOperationItemListViewManager_o *)DataManager__GetMaster_object_((const MethodInfo_2E3B674 *)Method_DataManager_GetMaster_ClassBoardClassMaster___);
            if ( this )
            {
              this = (FriendOperationItemListViewManager_o *)ClassBoardClassMaster__GetClassBoardBaseId(
                                                               (ClassBoardClassMaster_o *)this,
                                                               scrollView,
                                                               0LL);
              otherUserGameEntity = v19->fields.otherUserGameEntity;
              if ( otherUserGameEntity )
              {
                userClassBoardInfo = otherUserGameEntity->fields.userClassBoardInfo;
                if ( userClassBoardInfo )
                {
                  max_length = userClassBoardInfo->max_length;
                  v28 = (int)this;
                  if ( max_length < 1 )
                  {
LABEL_26:
                    v30 = (ClassBoardInfo_o *)sub_1B64ABC(ClassBoardInfo_TypeInfo);
                    ClassBoardInfo___ctor(v30, 0LL);
                    if ( v30 )
                    {
                      v30->fields.classBoardBaseId = v28;
                      v31 = Method_System_Array_Empty_int___;
                      v32 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
                      if ( !v32 )
                      {
                        sub_1BB67A8(Method_System_Array_Empty_int___);
                        v32 = v31[7];
                      }
                      v33 = *(_QWORD *)(v32 + 16);
                      if ( (*(_BYTE *)(v33 + 309) & 1) == 0 )
                        v33 = sub_1BB674C();
                      if ( !*(_DWORD *)(v33 + 224) )
                        j_il2cpp_runtime_class_init_0(v33);
                      v34 = *(_QWORD *)(v31[7] + 16LL);
                      if ( (*(_BYTE *)(v34 + 309) & 1) == 0 )
                        v34 = sub_1BB674C();
                      v30->fields.squareIds = **(struct System_Int32_array ***)(v34 + 184);
                      sub_1B64814(&v30->fields.squareIds);
                      v35 = Method_System_Array_Empty_int___;
                      v36 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
                      if ( !v36 )
                      {
                        sub_1BB67A8(Method_System_Array_Empty_int___);
                        v36 = v35[7];
                      }
                      v37 = *(_QWORD *)(v36 + 16);
                      if ( (*(_BYTE *)(v37 + 309) & 1) == 0 )
                        v37 = sub_1BB674C();
                      if ( !*(_DWORD *)(v37 + 224) )
                        j_il2cpp_runtime_class_init_0(v37);
                      v38 = *(_QWORD *)(v35[7] + 16LL);
                      if ( (*(_BYTE *)(v38 + 309) & 1) == 0 )
                        v38 = sub_1BB674C();
                      v30->fields.releasedClassIds = **(struct System_Int32_array ***)(v38 + 184);
                      sub_1B64814(&v30->fields.releasedClassIds);
LABEL_44:
                      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE318 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                      v40 = (System_Action_o *)sub_1B64ABC(System_Action_TypeInfo);
                      System_Action___ctor(
                        v40,
                        (Il2CppObject *)v4,
                        Method_FriendOperationItemListViewManager_EndCloseClassBoardEffectListDialog__,
                        0LL);
                      if ( Instance )
                      {
                        CommonUI__OpenClassBoardEffectListDialog((CommonUI_o *)Instance, 1, v28, 0, v40, 1, v30, 0LL);
                        return;
                      }
                    }
                  }
                  else
                  {
                    v29 = 0;
                    while ( 1 )
                    {
                      if ( v29 >= max_length )
                        sub_1B64AD4(this, obj);
                      v30 = userClassBoardInfo->m_Items[v29];
                      if ( !v30 )
                        break;
                      if ( v30->fields.classBoardBaseId == v28 )
                      {
                        this = (FriendOperationItemListViewManager_o *)ClassBoardInfo__IsReleasedClassId(
                                                                         v30,
                                                                         scrollView,
                                                                         0LL);
                        if ( ((unsigned __int8)this & 1) != 0 )
                          goto LABEL_44;
                      }
                      max_length = userClassBoardInfo->max_length;
                      if ( (int)++v29 >= max_length )
                        goto LABEL_26;
                    }
                  }
                }
              }
            }
          }
        }
      }
      sub_1B64ACC(this, obj);
    }
  }
}


void __fastcall FriendOperationItemListViewManager__RequestInto(
        FriendOperationItemListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  const MethodInfo *v7; // x1
  System_Collections_Generic_List_FriendOperationItemListViewObject__o *ObjectList; // x0
  __int64 v9; // x1
  int32_t size; // w8
  System_Collections_Generic_List_object__o *v11; // x20
  int v12; // w24
  int32_t v13; // w21
  Il2CppObject *Item; // x22
  System_Action_o *v15; // x23
  const MethodInfo *v16; // x3

  if ( (byte_49F9934 & 1) == 0 )
  {
    sub_1B64870(&System_Action_TypeInfo, method);
    sub_1B64870(&Method_FriendOperationItemListViewManager_OnMoveEnd__, v3);
    sub_1B64870(&Method_System_Collections_Generic_List_FriendOperationItemListViewObject__get_Count__, v4);
    sub_1B64870(&Method_System_Collections_Generic_List_FriendOperationItemListViewObject__get_Item__, v5);
    sub_1B64870(&StringLiteral_9891/*"OnMoveEnd"*/, v6);
    byte_49F9934 = 1;
  }
  ListViewManager__ClippingItems((ListViewManager_o *)this, 1, 0, 0LL);
  ListViewManager__DragMaskStart((ListViewManager_o *)this, 0LL);
  ObjectList = FriendOperationItemListViewManager__get_ObjectList(this, v7);
  if ( !ObjectList )
LABEL_13:
    sub_1B64ACC(ObjectList, v9);
  size = ObjectList->fields._size;
  v11 = (System_Collections_Generic_List_object__o *)ObjectList;
  this->fields.callbackCount = size;
  if ( size < 1 )
    goto LABEL_12;
  v12 = 0;
  v13 = 0;
  do
  {
    Item = System_Collections_Generic_List_object___get_Item(
             v11,
             v13,
             (const MethodInfo_34AF6E0 *)Method_System_Collections_Generic_List_FriendOperationItemListViewObject__get_Item__);
    if ( ListViewManager__ClippingItem((ListViewManager_o *)this, (ListViewObject_o *)Item, 0LL) )
    {
      v15 = (System_Action_o *)sub_1B64ABC(System_Action_TypeInfo);
      System_Action___ctor(v15, (Il2CppObject *)this, Method_FriendOperationItemListViewManager_OnMoveEnd__, 0LL);
      if ( !Item )
        goto LABEL_13;
      ++v12;
      FriendOperationItemListViewObject__Init_30648312((FriendOperationItemListViewObject_o *)Item, 4, v15, 0.1, v16);
    }
    else
    {
      --this->fields.callbackCount;
    }
    ++v13;
  }
  while ( v13 < v11->fields._size );
  if ( !v12 )
  {
LABEL_12:
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_9891/*"OnMoveEnd"*/,
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

  if ( (byte_49F9932 & 1) == 0 )
  {
    sub_1B64870(&System_Action_TypeInfo, *(_QWORD *)&mode);
    sub_1B64870(&Method_System_Collections_Generic_List_Enumerator_FriendOperationItemListViewObject__Dispose__, v7);
    sub_1B64870(&Method_System_Collections_Generic_List_Enumerator_FriendOperationItemListViewObject__MoveNext__, v8);
    sub_1B64870(&Method_System_Collections_Generic_List_Enumerator_FriendOperationItemListViewObject__get_Current__, v9);
    sub_1B64870(&Method_FriendOperationItemListViewManager_OnMoveEnd__, v10);
    sub_1B64870(&Method_System_Collections_Generic_List_FriendOperationItemListViewObject__GetEnumerator__, v11);
    sub_1B64870(&Method_System_Collections_Generic_List_FriendOperationItemListViewObject__get_Count__, v12);
    sub_1B64870(&StringLiteral_9891/*"OnMoveEnd"*/, v13);
    byte_49F9932 = 1;
  }
  memset(&v22, 0, sizeof(v22));
  ObjectList = (System_Collections_Generic_List_object__o *)FriendOperationItemListViewManager__get_ObjectList(
                                                              this,
                                                              *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_1B64ACC(0LL, v15);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_9891/*"OnMoveEnd"*/,
      delay,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v22,
      ObjectList,
      (const MethodInfo_34B0548 *)Method_System_Collections_Generic_List_FriendOperationItemListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v22,
              (const MethodInfo_322C38C *)Method_System_Collections_Generic_List_Enumerator_FriendOperationItemListViewObject__MoveNext__) )
    {
      current = v22.fields._current;
      v18 = (System_Action_o *)sub_1B64ABC(System_Action_TypeInfo);
      System_Action___ctor(v18, (Il2CppObject *)this, Method_FriendOperationItemListViewManager_OnMoveEnd__, 0LL);
      if ( !current )
        sub_1B64ACC(v19, v20);
      FriendOperationItemListViewObject__Init_30648312(
        (FriendOperationItemListViewObject_o *)current,
        mode,
        v18,
        delay,
        v21);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v22,
      (const MethodInfo_322C388 *)Method_System_Collections_Generic_List_Enumerator_FriendOperationItemListViewObject__Dispose__);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FriendOperationItemListViewManager__RequestListObject_30648412(
        FriendOperationItemListViewManager_o *this,
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

  if ( (byte_49F9933 & 1) == 0 )
  {
    sub_1B64870(&System_Action_TypeInfo, *(_QWORD *)&mode);
    sub_1B64870(&Method_System_Collections_Generic_List_Enumerator_FriendOperationItemListViewObject__Dispose__, v5);
    sub_1B64870(&Method_System_Collections_Generic_List_Enumerator_FriendOperationItemListViewObject__MoveNext__, v6);
    sub_1B64870(&Method_System_Collections_Generic_List_Enumerator_FriendOperationItemListViewObject__get_Current__, v7);
    sub_1B64870(&Method_FriendOperationItemListViewManager_OnMoveEnd__, v8);
    sub_1B64870(&Method_System_Collections_Generic_List_FriendOperationItemListViewObject__GetEnumerator__, v9);
    sub_1B64870(&Method_System_Collections_Generic_List_FriendOperationItemListViewObject__get_Count__, v10);
    sub_1B64870(&StringLiteral_9891/*"OnMoveEnd"*/, v11);
    byte_49F9933 = 1;
  }
  memset(&v20, 0, sizeof(v20));
  ObjectList = (System_Collections_Generic_List_object__o *)FriendOperationItemListViewManager__get_ObjectList(
                                                              this,
                                                              *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_1B64ACC(0LL, v13);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_9891/*"OnMoveEnd"*/,
      0.0,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v20,
      ObjectList,
      (const MethodInfo_34B0548 *)Method_System_Collections_Generic_List_FriendOperationItemListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v20,
              (const MethodInfo_322C38C *)Method_System_Collections_Generic_List_Enumerator_FriendOperationItemListViewObject__MoveNext__) )
    {
      current = v20.fields._current;
      v16 = (System_Action_o *)sub_1B64ABC(System_Action_TypeInfo);
      System_Action___ctor(v16, (Il2CppObject *)this, Method_FriendOperationItemListViewManager_OnMoveEnd__, 0LL);
      if ( !current )
        sub_1B64ACC(v17, v18);
      FriendOperationItemListViewObject__Init_30649440((FriendOperationItemListViewObject_o *)current, mode, v16, v19);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v20,
      (const MethodInfo_322C388 *)Method_System_Collections_Generic_List_Enumerator_FriendOperationItemListViewObject__Dispose__);
  }
}


void __fastcall FriendOperationItemListViewManager__ScrollViewEnabled(
        FriendOperationItemListViewManager_o *this,
        const MethodInfo *method)
{
  UnityEngine_Behaviour_o *scrollView; // x0

  scrollView = (UnityEngine_Behaviour_o *)this->fields.scrollView;
  if ( !scrollView )
    sub_1B64ACC(0LL, method);
  UnityEngine_Behaviour__set_enabled(scrollView, 1, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FriendOperationItemListViewManager__SetClassId(
        FriendOperationItemListViewManager_o *this,
        int32_t classPos,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x0
  __int64 methodPtr_low; // x10
  __int64 v13; // x1
  System_Collections_Generic_List_object__o *itemSortList; // x0
  struct ListViewSort_o *sort; // x8
  __int64 v16; // x1
  const MethodInfo *v17; // x2
  int size; // w8
  System_Collections_Generic_List_Enumerator_object__o v19; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o i; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_49F993B & 1) == 0 )
  {
    sub_1B64870(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__, *(_QWORD *)&classPos);
    sub_1B64870(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v5);
    sub_1B64870(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v6);
    sub_1B64870(&FriendOperationItemListViewItem_TypeInfo, v7);
    sub_1B64870(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v8);
    sub_1B64870(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v9);
    sub_1B64870(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v10);
    byte_49F993B = 1;
  }
  memset(&i, 0, sizeof(i));
  itemList = this->fields.itemList;
  if ( itemList )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v19,
      (System_Collections_Generic_List_object__o *)itemList,
      (const MethodInfo_34B0548 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    i = v19;
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &i,
              (const MethodInfo_322C38C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__) )
    {
      if ( i.fields._current )
      {
        methodPtr_low = LOBYTE(FriendOperationItemListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(i.fields._current->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low
          && (FriendOperationItemListViewItem_c *)i.fields._current->klass->_2.typeHierarchy[methodPtr_low - 1] == FriendOperationItemListViewItem_TypeInfo )
        {
          FriendOperationItemListViewItem__SetClassId(
            (FriendOperationItemListViewItem_o *)i.fields._current,
            classPos,
            0LL);
        }
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &i,
      (const MethodInfo_322C388 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
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
          (System_Collections_Generic_List_Enumerator_T__o *)&v19,
          itemSortList,
          (const MethodInfo_34B0548 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
        for ( i = v19;
              System_Collections_Generic_List_Enumerator_object___MoveNext(
                &i,
                (const MethodInfo_322C38C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
              ((void (*)(void))i.fields._current->klass->vtable[4].method)() )
        {
          if ( !i.fields._current )
            sub_1B64ACC(0LL, v16);
        }
        System_Collections_Generic_List_Enumerator_object___Dispose(
          &i,
          (const MethodInfo_322C388 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
        itemSortList = (System_Collections_Generic_List_object__o *)this->fields.itemSortList;
        if ( itemSortList )
        {
          if ( itemSortList->fields._size < 1 )
            goto LABEL_29;
          itemSortList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                        itemSortList,
                                                                        0,
                                                                        (const MethodInfo_34AF6E0 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
          if ( !itemSortList )
            goto LABEL_31;
          LOBYTE(itemSortList[2].monitor) = 1;
          itemSortList = (System_Collections_Generic_List_object__o *)this->fields.itemSortList;
          if ( !itemSortList )
            goto LABEL_31;
          itemSortList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                        itemSortList,
                                                                        itemSortList->fields._size - 1,
                                                                        (const MethodInfo_34AF6E0 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
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
            FriendOperationItemListViewManager__SetMode_30647368(this, 5, v17);
            return;
          }
          itemSortList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                        itemSortList,
                                                                        size - 1,
                                                                        (const MethodInfo_34AF6E0 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
          if ( itemSortList )
          {
            BYTE1(itemSortList[2].monitor) = 1;
            goto LABEL_29;
          }
        }
      }
LABEL_31:
      sub_1B64ACC(itemSortList, v13);
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
  sub_1B64814(&this->fields.callbackFunc);
  FriendOperationItemListViewManager__SetMode_30647368(this, mode, v6);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FriendOperationItemListViewManager__SetMode_30647368(
        FriendOperationItemListViewManager_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  void *emptyMessageBase; // x0
  __int64 v11; // x1
  int32_t v12; // w8
  System_Collections_Generic_List_object__o *v13; // x20
  int32_t v14; // w21
  Il2CppObject *v15; // x22
  System_Action_o *v16; // x23
  const MethodInfo *v17; // x3
  const MethodInfo *v18; // x2
  int v19; // s0
  System_String_o *v20; // x1
  const MethodInfo *v21; // x1
  int32_t v22; // w8
  System_Collections_Generic_List_object__o *v23; // x20
  int32_t v24; // w21
  Il2CppObject *Item; // x22
  System_Action_o *v26; // x23
  const MethodInfo *v27; // x3
  const MethodInfo *v28; // x1
  int32_t v29; // w8
  System_Collections_Generic_List_object__o *v30; // x20
  int32_t v31; // w21
  Il2CppObject *v32; // x22
  System_Action_o *v33; // x23
  const MethodInfo *v34; // x3

  if ( (byte_49F9931 & 1) == 0 )
  {
    sub_1B64870(&System_Action_TypeInfo, *(_QWORD *)&mode);
    sub_1B64870(&Method_FriendOperationItemListViewManager_OnMoveEnd__, v5);
    sub_1B64870(&Method_System_Collections_Generic_List_FriendOperationItemListViewObject__get_Count__, v6);
    sub_1B64870(&Method_System_Collections_Generic_List_FriendOperationItemListViewObject__get_Item__, v7);
    sub_1B64870(&StringLiteral_9891/*"OnMoveEnd"*/, v8);
    sub_1B64870(&StringLiteral_11260/*"RequestInto"*/, v9);
    byte_49F9931 = 1;
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
        v19 = 0;
        v20 = (System_String_o *)StringLiteral_11260/*"RequestInto"*/;
        goto LABEL_27;
      case 2:
        FriendOperationItemListViewManager__RequestListObject_30648412(this, 3, v18);
        return;
      case 3:
        ListViewManager__DragMaskStart((ListViewManager_o *)this, 0LL);
        emptyMessageBase = FriendOperationItemListViewManager__get_ClippingObjectList(this, v21);
        if ( !emptyMessageBase )
          goto LABEL_28;
        v22 = *((_DWORD *)emptyMessageBase + 6);
        v23 = (System_Collections_Generic_List_object__o *)emptyMessageBase;
        if ( v22 < 1 )
          goto LABEL_26;
        this->fields.callbackCount = v22;
        v24 = 0;
        while ( 1 )
        {
          Item = System_Collections_Generic_List_object___get_Item(
                   v23,
                   v24,
                   (const MethodInfo_34AF6E0 *)Method_System_Collections_Generic_List_FriendOperationItemListViewObject__get_Item__);
          v26 = (System_Action_o *)sub_1B64ABC(System_Action_TypeInfo);
          System_Action___ctor(v26, (Il2CppObject *)this, Method_FriendOperationItemListViewManager_OnMoveEnd__, 0LL);
          if ( !Item )
            break;
          FriendOperationItemListViewObject__Init_30648312(
            (FriendOperationItemListViewObject_o *)Item,
            5,
            v26,
            0.1,
            v27);
          if ( ++v24 >= v23->fields._size )
            return;
        }
        goto LABEL_28;
      case 4:
        ListViewManager__DragMaskStart((ListViewManager_o *)this, 0LL);
        emptyMessageBase = FriendOperationItemListViewManager__get_ClippingObjectList(this, v28);
        if ( !emptyMessageBase )
          goto LABEL_28;
        v29 = *((_DWORD *)emptyMessageBase + 6);
        v30 = (System_Collections_Generic_List_object__o *)emptyMessageBase;
        if ( v29 < 1 )
          goto LABEL_26;
        this->fields.callbackCount = v29;
        v31 = 0;
        break;
      default:
        return;
    }
    while ( 1 )
    {
      v32 = System_Collections_Generic_List_object___get_Item(
              v30,
              v31,
              (const MethodInfo_34AF6E0 *)Method_System_Collections_Generic_List_FriendOperationItemListViewObject__get_Item__);
      v33 = (System_Action_o *)sub_1B64ABC(System_Action_TypeInfo);
      System_Action___ctor(v33, (Il2CppObject *)this, Method_FriendOperationItemListViewManager_OnMoveEnd__, 0LL);
      if ( !v32 )
        break;
      FriendOperationItemListViewObject__Init_30648312((FriendOperationItemListViewObject_o *)v32, 6, v33, 0.1, v34);
      if ( ++v31 >= v30->fields._size )
        return;
    }
LABEL_28:
    sub_1B64ACC(emptyMessageBase, v11);
  }
  emptyMessageBase = FriendOperationItemListViewManager__get_ObjectList(this, *(const MethodInfo **)&mode);
  if ( !emptyMessageBase )
    goto LABEL_28;
  v12 = *((_DWORD *)emptyMessageBase + 6);
  v13 = (System_Collections_Generic_List_object__o *)emptyMessageBase;
  if ( v12 >= 1 )
  {
    this->fields.callbackCount = v12;
    v14 = 0;
    while ( 1 )
    {
      v15 = System_Collections_Generic_List_object___get_Item(
              v13,
              v14,
              (const MethodInfo_34AF6E0 *)Method_System_Collections_Generic_List_FriendOperationItemListViewObject__get_Item__);
      v16 = (System_Action_o *)sub_1B64ABC(System_Action_TypeInfo);
      System_Action___ctor(v16, (Il2CppObject *)this, Method_FriendOperationItemListViewManager_OnMoveEnd__, 0LL);
      if ( !v15 )
        break;
      FriendOperationItemListViewObject__Init_30648312((FriendOperationItemListViewObject_o *)v15, 7, v16, 0.1, v17);
      if ( ++v14 >= v13->fields._size )
        return;
    }
    goto LABEL_28;
  }
LABEL_26:
  this->fields.callbackCount = 1;
  v20 = (System_String_o *)StringLiteral_9891/*"OnMoveEnd"*/;
  v19 = 1045220557;
LABEL_27:
  UnityEngine_MonoBehaviour__Invoke((UnityEngine_MonoBehaviour_o *)this, v20, *(float *)&v19, 0LL);
}


void __fastcall FriendOperationItemListViewManager__SetMode_30648260(
        FriendOperationItemListViewManager_o *this,
        int32_t mode,
        System_Action_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v6; // x2

  this->fields.callbackFunc2 = callback;
  sub_1B64814(&this->fields.callbackFunc2);
  FriendOperationItemListViewManager__SetMode_30647368(this, mode, v6);
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
  if ( (byte_49F9930 & 1) == 0 )
  {
    this = (FriendOperationItemListViewManager_o *)sub_1B64870(&FriendOperationItemListViewObject_TypeInfo, obj);
    byte_49F9930 = 1;
  }
  if ( !obj
    || (methodPtr_low = LOBYTE(FriendOperationItemListViewObject_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(obj->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low)
    || (FriendOperationItemListViewObject_c *)obj->klass->_2.typeHierarchy[methodPtr_low - 1] != FriendOperationItemListViewObject_TypeInfo )
  {
    sub_1B64ACC(this, obj);
  }
  if ( v5->fields.initMode == 2 )
    v7 = 3;
  else
    v7 = 2;
  FriendOperationItemListViewObject__Init_30647240(
    (FriendOperationItemListViewObject_o *)obj,
    v7,
    (const MethodInfo *)item);
}


void __fastcall FriendOperationItemListViewManager__SetSortButtonImage(
        FriendOperationItemListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  UnityEngine_Object_o *sortKindLabel; // x20
  __int64 v10; // x1
  ListViewSort_o *sort; // x0
  UILabel_o *v12; // x20
  UnityEngine_Object_o *sortOrderSprite; // x20
  struct ListViewSort_o *v14; // x8
  int32_t sortKind; // w9
  System_String_o **v16; // x8
  struct ListViewSort_o *v17; // x8
  System_String_o **v18; // x9
  System_String_o **v19; // x10
  System_String_o **v20; // x8
  System_String_o **v21; // x8

  if ( (byte_49F993A & 1) == 0 )
  {
    sub_1B64870(&UnityEngine_Object_TypeInfo, method);
    sub_1B64870(&StringLiteral_17473/*"btn_sort_up"*/, v3);
    sub_1B64870(&StringLiteral_17560/*"btn_txt_up"*/, v4);
    sub_1B64870(&StringLiteral_17516/*"btn_txt_new"*/, v5);
    sub_1B64870(&StringLiteral_17506/*"btn_txt_down"*/, v6);
    sub_1B64870(&StringLiteral_17523/*"btn_txt_old"*/, v7);
    sub_1B64870(&StringLiteral_17470/*"btn_sort_down"*/, v8);
    byte_49F993A = 1;
  }
  sortKindLabel = (UnityEngine_Object_o *)this->fields.sortKindLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(sortKindLabel, 0LL, 0LL) )
  {
    sort = this->fields.sort;
    if ( !sort )
      goto LABEL_36;
    v12 = this->fields.sortKindLabel;
    sort = (ListViewSort_o *)ListViewSort__GetSortKindButtonText(sort, 0, 0LL);
    if ( !v12 )
      goto LABEL_36;
    UILabel__set_text(v12, (System_String_o *)sort, 0LL);
  }
  sortOrderSprite = (UnityEngine_Object_o *)this->fields.sortOrderSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  sort = (ListViewSort_o *)UnityEngine_Object__op_Inequality(sortOrderSprite, 0LL, 0LL);
  if ( ((unsigned __int8)sort & 1) != 0 )
  {
    v14 = this->fields.sort;
    if ( !v14 )
      goto LABEL_36;
    sortKind = v14->fields.sortKind;
    if ( sortKind == 1 || sortKind == 11 || (unsigned int)(sortKind - 17) <= 1 )
    {
      sort = (ListViewSort_o *)this->fields.sortExplanationSprite;
      if ( !sort )
        goto LABEL_36;
      v16 = (System_String_o **)(v14->fields.isAscendingOrder ? &StringLiteral_17523/*"btn_txt_old"*/ : &StringLiteral_17516/*"btn_txt_new"*/);
      UISprite__set_spriteName((UISprite_o *)sort, *v16, 0LL);
      v17 = this->fields.sort;
      if ( !v17 )
        goto LABEL_36;
      sort = (ListViewSort_o *)this->fields.sortOrderSprite;
      if ( !sort )
        goto LABEL_36;
      v18 = (System_String_o **)&StringLiteral_17470/*"btn_sort_down"*/;
      v19 = (System_String_o **)&StringLiteral_17473/*"btn_sort_up"*/;
    }
    else
    {
      sort = (ListViewSort_o *)this->fields.sortExplanationSprite;
      if ( !sort )
        goto LABEL_36;
      v21 = (System_String_o **)(v14->fields.isAscendingOrder ? &StringLiteral_17560/*"btn_txt_up"*/ : &StringLiteral_17506/*"btn_txt_down"*/);
      UISprite__set_spriteName((UISprite_o *)sort, *v21, 0LL);
      v17 = this->fields.sort;
      if ( !v17 )
        goto LABEL_36;
      sort = (ListViewSort_o *)this->fields.sortOrderSprite;
      if ( !sort )
        goto LABEL_36;
      v18 = (System_String_o **)&StringLiteral_17473/*"btn_sort_up"*/;
      v19 = (System_String_o **)&StringLiteral_17470/*"btn_sort_down"*/;
    }
    if ( v17->fields.isAscendingOrder )
      v20 = v18;
    else
      v20 = v19;
    UISprite__set_spriteName((UISprite_o *)sort, *v20, 0LL);
    sort = (ListViewSort_o *)this->fields.sortExplanationSprite;
    if ( sort )
    {
      ((void (__fastcall *)(ListViewSort_o *, void *))sort->klass[2]._1.typeMetadataHandle)(
        sort,
        sort->klass[2]._1.interopData);
      return;
    }
LABEL_36:
    sub_1B64ACC(sort, v10);
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
    sub_1B64ACC(this, kind);
  sort->fields.sortKind = kind;
}


void __fastcall FriendOperationItemListViewManager__SetupClassBoardInfo(
        FriendOperationItemListViewManager_o *this,
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
  System_Collections_Generic_Dictionary_int__int__o *classBoardMaxDictionary; // x0
  System_Collections_Generic_Dictionary_int__int__o **p_classBoardMaxDictionary; // x20
  System_Collections_Generic_Dictionary_int__int__o *v16; // x19
  System_Collections_ObjectModel_Collection_T__o *Master_object; // x0
  __int64 v18; // x1
  __int64 v19; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v22; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v25; // x8
  __int64 v26; // x9
  int32_t *v27; // x10
  __int64 v28; // x0
  __int64 v29; // x0
  __int64 v30; // x21
  __int64 methodPtr_low; // x9
  Il2CppObject *v32; // x0
  __int64 v33; // x1
  ClassBoardSquareEntity_array *OtherThanNoneEntity; // x0
  __int64 v35; // x1
  System_Collections_Generic_IEnumerator_T__c *v36; // x8
  __int64 v37; // x9
  int32_t *v38; // x10
  __int64 v39; // x0

  if ( (byte_49F993C & 1) == 0 )
  {
    sub_1B64870(&ClassBoardBaseEntity_TypeInfo, method);
    sub_1B64870(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, v3);
    sub_1B64870(&Method_DataManager_GetMaster_ClassBoardBaseMaster___, v4);
    sub_1B64870(&Method_DataManager_GetMaster_ClassBoardSquareMaster___, v5);
    sub_1B64870(&DataManager_TypeInfo, v6);
    sub_1B64870(&Method_System_Collections_Generic_Dictionary_int__int__Add__, v7);
    sub_1B64870(&Method_System_Collections_Generic_Dictionary_int__int__Clear__, v8);
    sub_1B64870(&Method_System_Collections_Generic_Dictionary_int__int___ctor__, v9);
    sub_1B64870(&System_Collections_Generic_Dictionary_int__int__TypeInfo, v10);
    sub_1B64870(&System_IDisposable_TypeInfo, v11);
    sub_1B64870(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v12);
    sub_1B64870(&System_Collections_IEnumerator_TypeInfo, v13);
    byte_49F993C = 1;
  }
  classBoardMaxDictionary = this->fields.classBoardMaxDictionary;
  p_classBoardMaxDictionary = &this->fields.classBoardMaxDictionary;
  if ( classBoardMaxDictionary )
  {
    System_Collections_Generic_Dictionary_int__int___Clear(
      classBoardMaxDictionary,
      (const MethodInfo_311D310 *)Method_System_Collections_Generic_Dictionary_int__int__Clear__);
  }
  else
  {
    v16 = (System_Collections_Generic_Dictionary_int__int__o *)sub_1B64ABC(System_Collections_Generic_Dictionary_int__int__TypeInfo);
    System_Collections_Generic_Dictionary_int__int____ctor(
      v16,
      (const MethodInfo_311C7CC *)Method_System_Collections_Generic_Dictionary_int__int___ctor__);
    *p_classBoardMaxDictionary = v16;
    sub_1B64814(p_classBoardMaxDictionary);
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (System_Collections_ObjectModel_Collection_T__o *)DataManager__GetMaster_object_((const MethodInfo_2E3B674 *)Method_DataManager_GetMaster_ClassBoardBaseMaster___);
  if ( !Master_object
    || (Master_object = (System_Collections_ObjectModel_Collection_T__o *)Master_object[1].monitor) == 0LL )
  {
    sub_1B64ACC(Master_object, v18);
  }
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 Master_object,
                 (const MethodInfo_30733BC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_1B64ACC(0LL, v19);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v22 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v22;
        p_offset += 4;
        if ( !v22 )
          goto LABEL_15;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_15:
      p_method = sub_1BB6850(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v25 = Enumerator->klass;
    v26 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v27 = &v25->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v27 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        --v26;
        v27 += 4;
        if ( !v26 )
          goto LABEL_22;
      }
      v28 = (__int64)&v25->vtable[*v27].method;
    }
    else
    {
LABEL_22:
      v28 = sub_1BB6850(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v29 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v28)(
            Enumerator,
            *(_QWORD *)(v28 + 8));
    v30 = v29;
    if ( v29 )
    {
      methodPtr_low = LOBYTE(ClassBoardBaseEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( *(unsigned __int8 *)(*(_QWORD *)v29 + 304LL) < (unsigned int)methodPtr_low
        || *(ClassBoardBaseEntity_c **)(*(_QWORD *)(*(_QWORD *)v29 + 200LL) + 8 * methodPtr_low - 8) != ClassBoardBaseEntity_TypeInfo )
      {
        v32 = (Il2CppObject *)sub_1B64D8C(v29);
LABEL_42:
        sub_1B64ACC(v32, v33);
      }
    }
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    v32 = DataManager__GetMaster_object_((const MethodInfo_2E3B674 *)Method_DataManager_GetMaster_ClassBoardSquareMaster___);
    if ( !v30 )
      goto LABEL_42;
    if ( !v32 )
      sub_1B64ACC(0LL, v33);
    OtherThanNoneEntity = ClassBoardSquareMaster__GetOtherThanNoneEntity(
                            (ClassBoardSquareMaster_o *)v32,
                            *(_DWORD *)(v30 + 16),
                            0LL);
    if ( OtherThanNoneEntity )
    {
      if ( !*p_classBoardMaxDictionary )
        sub_1B64ACC(OtherThanNoneEntity, v35);
      System_Collections_Generic_Dictionary_int__int___Add(
        *p_classBoardMaxDictionary,
        *(_DWORD *)(v30 + 16),
        OtherThanNoneEntity->max_length,
        (const MethodInfo_311D190 *)Method_System_Collections_Generic_Dictionary_int__int__Add__);
    }
  }
  v36 = Enumerator->klass;
  v37 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v38 = &v36->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v38 - 1) != System_IDisposable_TypeInfo )
    {
      --v37;
      v38 += 4;
      if ( !v37 )
        goto LABEL_38;
    }
    v39 = (__int64)&v36->vtable[*v38].method;
  }
  else
  {
LABEL_38:
    v39 = sub_1BB6850(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v39)(Enumerator, *(_QWORD *)(v39 + 8));
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

  if ( (byte_49F9924 & 1) == 0 )
  {
    sub_1B64870(&FriendOperationItemListViewManager_CallbackFunc_TypeInfo, value);
    byte_49F9924 = 1;
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
    v8 = sub_1B9FD60(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (FriendOperationItemListViewManager_o *)sub_1B64D8C(v7);
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

  if ( (byte_49F9926 & 1) == 0 )
  {
    sub_1B64870(&System_Action_TypeInfo, value);
    byte_49F9926 = 1;
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
    v8 = sub_1B9FD60(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (FriendOperationItemListViewManager_o *)sub_1B64D8C(v7);
  FriendOperationItemListViewManager__remove_callbackFunc2(v10, v11, v12);
}


void __fastcall FriendOperationItemListViewManager__changeSortKindDisp(
        FriendOperationItemListViewManager_o *this,
        const MethodInfo *method)
{
  ((void (__fastcall *)(FriendOperationItemListViewManager_o *, Il2CppMethodPointer))this->klass->vtable._5_SetSortButtonImage.method)(
    this,
    this->klass->vtable._6_GetDragRoot.methodPtr);
}


System_Collections_Generic_List_FriendOperationItemListViewObject__o *__fastcall FriendOperationItemListViewManager__get_ClippingObjectList(
        FriendOperationItemListViewManager_o *this,
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
  _BOOL8 v22; // x0
  __int64 v23; // x1
  struct System_Object_array *items; // x8
  _QWORD *v25; // x9
  __int64 size; // x10
  Il2CppClass **v27; // x0
  System_Collections_Generic_List_Enumerator_object__o v29; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v30; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_49F992C & 1) == 0 )
  {
    sub_1B64870(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, method);
    sub_1B64870(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v3);
    sub_1B64870(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v4);
    sub_1B64870(&Method_UnityEngine_GameObject_GetComponent_FriendOperationItemListViewObject___, v5);
    sub_1B64870(&Method_System_Collections_Generic_List_FriendOperationItemListViewObject__Add__, v6);
    sub_1B64870(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v7);
    sub_1B64870(&Method_System_Collections_Generic_List_FriendOperationItemListViewObject___ctor__, v8);
    sub_1B64870(&System_Collections_Generic_List_FriendOperationItemListViewObject__TypeInfo, v9);
    sub_1B64870(&UnityEngine_Object_TypeInfo, v10);
    byte_49F992C = 1;
  }
  memset(&v30, 0, sizeof(v30));
  v11 = (System_Collections_Generic_List_object__o *)sub_1B64ABC(System_Collections_Generic_List_FriendOperationItemListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_34AF17C *)Method_System_Collections_Generic_List_FriendOperationItemListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_1B64ACC(0LL, v12);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v29,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_34B0548 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v30 = v29;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v30,
            (const MethodInfo_322C38C *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v30.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v15 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v15 )
    {
      if ( !current )
        sub_1B64ACC(v15, v16);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_2E8A1B4 *)Method_UnityEngine_GameObject_GetComponent_FriendOperationItemListViewObject___);
      v19 = Component_object;
      if ( !Component_object )
        sub_1B64ACC(0LL, v18);
      Item = (ListViewItem_o *)FriendOperationItemListViewObject__GetItem(
                                 (FriendOperationItemListViewObject_o *)Component_object,
                                 v18);
      if ( !Item )
        sub_1B64ACC(0LL, v21);
      if ( Item->fields.isTermination )
      {
        v22 = ListViewManager__ClippingItem_40394112((ListViewManager_o *)this, Item, 0LL);
        if ( v22 )
        {
          if ( !v11 )
            sub_1B64ACC(v22, v23);
          items = v11->fields._items;
          v25 = Method_System_Collections_Generic_List_FriendOperationItemListViewObject__Add__;
          ++v11->fields._version;
          if ( !items )
            sub_1B64ACC(v22, v23);
          size = v11->fields._size;
          if ( (unsigned int)size < items->max_length )
            goto LABEL_17;
LABEL_21:
          System_Collections_Generic_List_object___AddWithResize(
            v11,
            v19,
            *(const MethodInfo_34AF9B0 **)(*(_QWORD *)(v25[4] + 192LL) + 112LL));
        }
      }
      else
      {
        if ( !v11 )
          sub_1B64ACC(Item, v21);
        items = v11->fields._items;
        v25 = Method_System_Collections_Generic_List_FriendOperationItemListViewObject__Add__;
        ++v11->fields._version;
        if ( !items )
          sub_1B64ACC(Item, v21);
        size = v11->fields._size;
        if ( (unsigned int)size >= items->max_length )
          goto LABEL_21;
LABEL_17:
        v27 = &items->obj.klass + size;
        v11->fields._size = size + 1;
        v27[4] = (Il2CppClass *)v19;
        sub_1B64814(v27 + 4);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v30,
    (const MethodInfo_322C388 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_FriendOperationItemListViewObject__o *)v11;
}


bool __fastcall FriendOperationItemListViewManager__get_IsExistSwapLockUser(
        FriendOperationItemListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  System_Collections_Generic_List_object__o *itemList; // x0
  int32_t i; // w20
  int32_t size; // w8
  bool v8; // w21
  Il2CppObject *Item; // x0
  __int64 v10; // x1
  __int64 methodPtr_low; // x10

  if ( (byte_49F992D & 1) == 0 )
  {
    sub_1B64870(&FriendOperationItemListViewItem_TypeInfo, method);
    sub_1B64870(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v3);
    sub_1B64870(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v4);
    byte_49F992D = 1;
  }
  itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
  if ( !itemList )
    return 0;
  for ( i = 0; ; ++i )
  {
    size = itemList->fields._size;
    v8 = i < size;
    if ( i >= size )
      break;
    Item = System_Collections_Generic_List_object___get_Item(
             itemList,
             i,
             (const MethodInfo_34AF6E0 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
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
      sub_1B64ACC(0LL, v10);
  }
  return v8;
}


System_Collections_Generic_List_FriendOperationItemListViewObject__o *__fastcall FriendOperationItemListViewManager__get_ObjectList(
        FriendOperationItemListViewManager_o *this,
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
  Il2CppObject *v18; // x1
  struct System_Object_array *items; // x8
  _QWORD *v20; // x9
  __int64 size; // x10
  Il2CppClass **v22; // x0
  System_Collections_Generic_List_Enumerator_object__o v24; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v25; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_49F992B & 1) == 0 )
  {
    sub_1B64870(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, method);
    sub_1B64870(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v3);
    sub_1B64870(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v4);
    sub_1B64870(&Method_UnityEngine_GameObject_GetComponent_FriendOperationItemListViewObject___, v5);
    sub_1B64870(&Method_System_Collections_Generic_List_FriendOperationItemListViewObject__Add__, v6);
    sub_1B64870(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v7);
    sub_1B64870(&Method_System_Collections_Generic_List_FriendOperationItemListViewObject___ctor__, v8);
    sub_1B64870(&System_Collections_Generic_List_FriendOperationItemListViewObject__TypeInfo, v9);
    sub_1B64870(&UnityEngine_Object_TypeInfo, v10);
    byte_49F992B = 1;
  }
  memset(&v25, 0, sizeof(v25));
  v11 = (System_Collections_Generic_List_object__o *)sub_1B64ABC(System_Collections_Generic_List_FriendOperationItemListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_34AF17C *)Method_System_Collections_Generic_List_FriendOperationItemListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_1B64ACC(0LL, v12);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v24,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_34B0548 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v25 = v24;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v25,
            (const MethodInfo_322C38C *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v25.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v15 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v15 )
    {
      if ( !current )
        sub_1B64ACC(v15, v16);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_2E8A1B4 *)Method_UnityEngine_GameObject_GetComponent_FriendOperationItemListViewObject___);
      v18 = Component_object;
      if ( !v11 )
        sub_1B64ACC(Component_object, Component_object);
      items = v11->fields._items;
      v20 = Method_System_Collections_Generic_List_FriendOperationItemListViewObject__Add__;
      ++v11->fields._version;
      if ( !items )
        sub_1B64ACC(Component_object, Component_object);
      size = v11->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v11,
          Component_object,
          *(const MethodInfo_34AF9B0 **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
      }
      else
      {
        v22 = &items->obj.klass + size;
        v11->fields._size = size + 1;
        v22[4] = (Il2CppClass *)v18;
        sub_1B64814(v22 + 4);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v25,
    (const MethodInfo_322C388 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_FriendOperationItemListViewObject__o *)v11;
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
  v5 = sub_1B64814(&this->fields.callbackFunc);
  if ( callbackFunc )
  {
    if ( !obj )
      sub_1B64ACC(v5, v6);
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
  v5 = sub_1B64814(&this->fields.callbackFunc);
  if ( callbackFunc )
  {
    if ( !obj )
      sub_1B64ACC(v5, v6);
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
  v5 = sub_1B64814(&this->fields.callbackFunc);
  if ( callbackFunc )
  {
    if ( !obj )
      sub_1B64ACC(v5, v6);
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

  if ( (byte_49F9925 & 1) == 0 )
  {
    sub_1B64870(&FriendOperationItemListViewManager_CallbackFunc_TypeInfo, value);
    byte_49F9925 = 1;
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
    v8 = sub_1B9FD60(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (FriendOperationItemListViewManager_o *)sub_1B64D8C(v7);
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

  if ( (byte_49F9927 & 1) == 0 )
  {
    sub_1B64870(&System_Action_TypeInfo, value);
    byte_49F9927 = 1;
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
    v8 = sub_1B9FD60(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (FriendOperationItemListViewManager_o *)sub_1B64D8C(v7);
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
    sub_1B64ACC(scrollBar, method);
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
    sub_1B64ACC(scrollBar, b);
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
  sub_1B64814(&this->fields.method);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1B64930(v6) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1B64AE8(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1B64998(v10, 0LL);
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
  this->fields.m_target = (Il2CppObject *)sub_19A51E8;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_19A5190;
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
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x3
  __int64 v12; // x4
  __int64 v14[3]; // [xsp+8h] [xbp-58h] BYREF
  int32_t v15; // [xsp+28h] [xbp-38h] BYREF
  int32_t v16; // [xsp+2Ch] [xbp-34h] BYREF

  v15 = result;
  v16 = kind;
  if ( (byte_49F9940 & 1) == 0 )
  {
    sub_1B64870(&int_TypeInfo, *(_QWORD *)&kind);
    sub_1B64870(&FriendOperationItemListViewManager_ResultKind_TypeInfo, v9);
    byte_49F9940 = 1;
  }
  v14[2] = 0LL;
  v14[0] = j_il2cpp_value_box_0(
             FriendOperationItemListViewManager_ResultKind_TypeInfo,
             &v16,
             *(_QWORD *)&result,
             callback,
             object);
  v14[1] = j_il2cpp_value_box_0(int_TypeInfo, &v15, v10, v11, v12);
  return (System_IAsyncResult_o *)sub_1B64824(this, v14, callback, object);
}


void __fastcall FriendOperationItemListViewManager_CallbackFunc__EndInvoke(
        FriendOperationItemListViewManager_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1B64828(result, 0LL, method);
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
  __int64 v1; // x1
  Il2CppObject *v2; // x19

  if ( (byte_49F9941 & 1) == 0 )
  {
    sub_1B64870(&FriendOperationItemListViewManager___c_TypeInfo, v1);
    byte_49F9941 = 1;
  }
  v2 = (Il2CppObject *)sub_1B64ABC(FriendOperationItemListViewManager___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  FriendOperationItemListViewManager___c_TypeInfo->static_fields->__9 = (struct FriendOperationItemListViewManager___c_o *)v2;
  sub_1B64814(FriendOperationItemListViewManager___c_TypeInfo->static_fields);
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
  if ( (byte_49F9942 & 1) == 0 )
  {
    this = (FriendOperationItemListViewManager___c_o *)sub_1B64870(&UserFriendRequestHistoryEntity_TypeInfo, a);
    byte_49F9942 = 1;
  }
  if ( !b )
LABEL_11:
    sub_1B64ACC(this, a);
  a = (DataEntityBase_o *)UserFriendRequestHistoryEntity_TypeInfo;
  methodPtr_low = LOBYTE(UserFriendRequestHistoryEntity_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(b->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
    || (UserFriendRequestHistoryEntity_c *)b->klass->_2.typeHierarchy[methodPtr_low - 1] != UserFriendRequestHistoryEntity_TypeInfo )
  {
    this = (FriendOperationItemListViewManager___c_o *)sub_1B64D8C(b);
    goto LABEL_11;
  }
  if ( !v5 )
    goto LABEL_11;
  if ( *(unsigned __int8 *)(*v5 + 304) >= (unsigned int)methodPtr_low
    && *(UserFriendRequestHistoryEntity_c **)(*(_QWORD *)(*v5 + 200) + 8 * (methodPtr_low - 1)) == UserFriendRequestHistoryEntity_TypeInfo )
  {
    return System_Int64__CompareTo_62192884((int64_t)&b[2].monitor, v5[5], 0LL);
  }
  v8 = (FriendOperationItemListViewObject_o *)sub_1B64D8C(v5);
  FriendOperationItemListViewObject__add_callbackFunc(v8, v9, v10);
  return result;
}