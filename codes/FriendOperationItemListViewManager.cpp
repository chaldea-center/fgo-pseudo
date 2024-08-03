void __fastcall FriendOperationItemListViewManager___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  System_Array_o *v4; // x0
  System_Array_o *v5; // x19
  struct FriendOperationItemListViewManager_StaticFields *static_fields; // x0
  System_RuntimeFieldHandle_o v7; // 0:w1.4

  if ( (byte_49F784F & 1) == 0 )
  {
    sub_1B640C8(&ListViewSort_FilterKind___TypeInfo, v1);
    sub_1B640C8(&FriendOperationItemListViewManager_TypeInfo, v2);
    sub_1B640C8(
      &Field__PrivateImplementationDetails__6B3B6BC014A692F226080502E0DED60D67C84EBC03CC8CF43A550A89694FF5C0,
      v3);
    byte_49F784F = 1;
  }
  FriendOperationItemListViewManager_TypeInfo->static_fields->isInitSystem = 0;
  v4 = (System_Array_o *)sub_1B64170(ListViewSort_FilterKind___TypeInfo, 8LL);
  v7.fields.value = Field__PrivateImplementationDetails__6B3B6BC014A692F226080502E0DED60D67C84EBC03CC8CF43A550A89694FF5C0;
  v5 = v4;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_61282732(v4, v7, 0LL);
  static_fields = FriendOperationItemListViewManager_TypeInfo->static_fields;
  static_fields->classFilter = (struct ListViewSort_FilterKind_array *)v5;
  sub_1B6406C(&static_fields->classFilter);
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

  if ( (byte_49F7848 & 1) == 0 )
  {
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, isResult);
    byte_49F7848 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1B64324(0LL);
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
  __int64 v40; // x2
  __int64 v41; // x8
  unsigned __int64 v42; // x26
  struct System_Collections_Generic_List_ListViewItem__o *v43; // x9
  int32_t v44; // w23
  OtherUserGameEntity_o *v45; // x24
  System_Collections_Generic_Dictionary_int__int__o *v46; // x25
  FriendOperationItemListViewItem_o *v47; // x21
  __int64 v48; // x8
  _QWORD *v49; // x9
  __int64 v50; // x10
  __int64 v51; // x8
  Il2CppObject *MasterData_object; // x20
  System_Collections_ObjectModel_Collection_T__o *v53; // x21
  int32_t v54; // w22
  UserBlacklistEntity_o *v55; // x23
  __int64 methodPtr_low; // x10
  __int64 v57; // x1
  __int64 v58; // x2
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x8
  OtherUserGameEntity_o *v60; // x25
  int32_t size; // w26
  System_Collections_Generic_Dictionary_int__int__o *classBoardMaxDictionary; // x27
  FriendOperationItemListViewItem_o *v63; // x24
  __int64 v64; // x8
  _QWORD *v65; // x9
  __int64 v66; // x10
  __int64 v67; // x8
  __int64 *v68; // x8
  Il2CppObject *v69; // x20
  __int64 v70; // x1
  __int64 v71; // x2
  System_Collections_Generic_IEnumerable_T__o *v72; // x22
  System_Collections_Generic_List_object__o *v73; // x21
  __int64 v74; // x1
  __int64 v75; // x2
  System_Comparison_T__o *v76; // x22
  Il2CppObject *v77; // x23
  struct FriendOperationItemListViewManager___c_StaticFields *static_fields; // x0
  int32_t v79; // w23
  BalanceConfig_c *v80; // x0
  int32_t MaxFriendHistoryNum; // w1
  int32_t v82; // w22
  UserFriendRequestHistoryEntity_o *v83; // x23
  __int64 v84; // x10
  __int64 v85; // x1
  __int64 v86; // x2
  struct System_Collections_Generic_List_ListViewItem__o *v87; // x8
  OtherUserGameEntity_o *v88; // x25
  int32_t v89; // w26
  System_Collections_Generic_Dictionary_int__int__o *v90; // x27
  FriendOperationItemListViewItem_o *v91; // x24
  __int64 v92; // x8
  _QWORD *v93; // x9
  __int64 v94; // x10
  __int64 v95; // x8
  TblFriendMaster_o *v96; // x23
  OtherUserGameEntity_array *List; // x24
  OtherUserGameEntity_array *v98; // x23
  __int64 v99; // x2
  __int64 v100; // x8
  unsigned __int64 v101; // x29
  struct System_Collections_Generic_List_ListViewItem__o *v102; // x9
  int32_t v103; // w26
  OtherUserGameEntity_o *v104; // x27
  System_Collections_Generic_Dictionary_int__int__o *v105; // x28
  FriendOperationItemListViewItem_o *v106; // x25
  __int64 v107; // x8
  _QWORD *v108; // x9
  __int64 v109; // x10
  __int64 v110; // x8
  __int64 v111; // x8
  unsigned __int64 v112; // x29
  struct System_Collections_Generic_List_ListViewItem__o *v113; // x9
  int32_t v114; // w26
  OtherUserGameEntity_o *v115; // x27
  System_Collections_Generic_Dictionary_int__int__o *v116; // x28
  FriendOperationItemListViewItem_o *v117; // x25
  __int64 v118; // x8
  _QWORD *v119; // x9
  __int64 v120; // x10
  __int64 v121; // x8
  UILabel_o *emptyMessageLabel; // x20
  struct UIScrollView_o *scrollView; // x8
  System_String_o *v124; // [xsp+10h] [xbp-70h]

  if ( (byte_49F783E & 1) == 0 )
  {
    sub_1B640C8(&BalanceConfig_TypeInfo, *(_QWORD *)&kind);
    sub_1B640C8(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, v6);
    sub_1B640C8(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v7);
    sub_1B640C8(&System_Comparison_DataEntityBase__TypeInfo, v8);
    sub_1B640C8(&Method_DataManager_GetMasterData_OtherUserGameMaster___, v9);
    sub_1B640C8(&Method_DataManager_GetMasterData_TblFriendMaster___, v10);
    sub_1B640C8(&Method_DataManager_GetMasterData_UserBlacklistMaster___, v11);
    sub_1B640C8(&Method_DataManager_GetMasterData_UserFriendRequestHistoryMaster___, v12);
    sub_1B640C8(&Method_DataMasterBase_OtherUserGameMaster__OtherUserGameEntity__long__GetEntity__, v13);
    sub_1B640C8(&FriendOperationItemListViewItem_TypeInfo, v14);
    sub_1B640C8(&FriendOperationItemListViewManager_TypeInfo, v15);
    sub_1B640C8(&Method_System_Collections_Generic_List_ListViewItem__Add__, v16);
    sub_1B640C8(&Method_System_Collections_Generic_List_DataEntityBase__RemoveRange__, v17);
    sub_1B640C8(&Method_System_Collections_Generic_List_DataEntityBase__Reverse__, v18);
    sub_1B640C8(&Method_System_Collections_Generic_List_DataEntityBase__Sort__, v19);
    sub_1B640C8(&Method_System_Collections_Generic_List_DataEntityBase___ctor___75648672, v20);
    sub_1B640C8(&Method_System_Collections_Generic_List_DataEntityBase__get_Count__, v21);
    sub_1B640C8(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v22);
    sub_1B640C8(&Method_System_Collections_Generic_List_DataEntityBase__get_Item__, v23);
    sub_1B640C8(&System_Collections_Generic_List_DataEntityBase__TypeInfo, v24);
    sub_1B640C8(&LocalizationManager_TypeInfo, v25);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v26);
    sub_1B640C8(&Method_FriendOperationItemListViewManager___c__CreateList_b__35_0__, v27);
    sub_1B640C8(&FriendOperationItemListViewManager___c_TypeInfo, v28);
    sub_1B640C8(&UserBlacklistEntity_TypeInfo, v29);
    sub_1B640C8(&UserFriendRequestHistoryEntity_TypeInfo, v30);
    sub_1B640C8(&StringLiteral_3015/*"BLACKLIST_EMPTY_MESSAGE"*/, v31);
    sub_1B640C8(&StringLiteral_6469/*"FRIEND_EMPTY_FRIEND_MESSAGE"*/, v32);
    sub_1B640C8(&StringLiteral_3018/*"BLACKLIST_FRIEND_HISTORY_EMPTY_MESSAGE"*/, v33);
    sub_1B640C8(&StringLiteral_6470/*"FRIEND_EMPTY_OFFERED_MESSAGE"*/, v34);
    byte_49F783E = 1;
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
    sub_1B6432C(sort, v36);
  this->fields.sort = sortStatusList->m_Items[kind];
  sub_1B6406C(&this->fields.sort);
  sort = (__int64)this->fields.sort;
  if ( !sort )
    goto LABEL_112;
  ListViewSort__Load((ListViewSort_o *)sort, 0LL);
  if ( kind == 8 )
  {
    sort = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !sort )
      goto LABEL_112;
    MasterData_object = DataManager__GetMasterData_object_(
                          (DataManager_o *)sort,
                          (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_OtherUserGameMaster___);
    sort = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !sort )
      goto LABEL_112;
    sort = (__int64)DataManager__GetMasterData_object_(
                      (DataManager_o *)sort,
                      (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_UserBlacklistMaster___);
    if ( !sort )
      goto LABEL_112;
    v53 = *(System_Collections_ObjectModel_Collection_T__o **)(sort + 32);
    ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
    if ( !v53 )
      goto LABEL_112;
    if ( System_Collections_ObjectModel_Collection_object___get_Count(
           v53,
           (const MethodInfo_3070B08 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__) < 1 )
    {
LABEL_42:
      v68 = &StringLiteral_3015/*"BLACKLIST_EMPTY_MESSAGE"*/;
      goto LABEL_73;
    }
    v54 = 0;
    while ( 1 )
    {
      sort = (__int64)System_Collections_ObjectModel_Collection_object___get_Item(
                        v53,
                        v54,
                        (const MethodInfo_3070B98 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !sort )
        break;
      v55 = (UserBlacklistEntity_o *)sort;
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
                        (const MethodInfo_30D4050 *)Method_DataMasterBase_OtherUserGameMaster__OtherUserGameEntity__long__GetEntity__);
      itemList = this->fields.itemList;
      if ( !itemList )
        break;
      v60 = (OtherUserGameEntity_o *)sort;
      size = itemList->fields._size;
      classBoardMaxDictionary = this->fields.classBoardMaxDictionary;
      v63 = (FriendOperationItemListViewItem_o *)sub_1B64314(FriendOperationItemListViewItem_TypeInfo, v57, v58);
      FriendOperationItemListViewItem___ctor_30621740(v63, 8, size, v60, v55, 0, classBoardMaxDictionary, 0LL);
      sort = (__int64)this->fields.itemList;
      if ( !sort )
        break;
      v64 = *(_QWORD *)(sort + 16);
      v65 = Method_System_Collections_Generic_List_ListViewItem__Add__;
      ++*(_DWORD *)(sort + 28);
      if ( !v64 )
        break;
      v66 = *(int *)(sort + 24);
      if ( (unsigned int)v66 >= *(_DWORD *)(v64 + 24) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)sort,
          (Il2CppObject *)v63,
          *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v65[4] + 192LL) + 112LL));
      }
      else
      {
        v67 = v64 + 8 * v66;
        *(_DWORD *)(sort + 24) = v66 + 1;
        *(_QWORD *)(v67 + 32) = v63;
        sub_1B6406C(v67 + 32);
      }
      if ( ++v54 >= System_Collections_ObjectModel_Collection_object___get_Count(
                      v53,
                      (const MethodInfo_3070B08 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__) )
        goto LABEL_42;
    }
LABEL_112:
    sub_1B64324(sort);
  }
  if ( kind == 7 )
  {
    sort = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !sort )
      goto LABEL_112;
    v69 = DataManager__GetMasterData_object_(
            (DataManager_o *)sort,
            (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_OtherUserGameMaster___);
    sort = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !sort )
      goto LABEL_112;
    sort = (__int64)DataManager__GetMasterData_object_(
                      (DataManager_o *)sort,
                      (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_UserFriendRequestHistoryMaster___);
    if ( !sort )
      goto LABEL_112;
    v72 = *(System_Collections_Generic_IEnumerable_T__o **)(sort + 32);
    v73 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                         System_Collections_Generic_List_DataEntityBase__TypeInfo,
                                                         v70,
                                                         v71);
    System_Collections_Generic_List_object____ctor_55234504(
      v73,
      v72,
      (const MethodInfo_34ACFC8 *)Method_System_Collections_Generic_List_DataEntityBase___ctor___75648672);
    sort = (__int64)FriendOperationItemListViewManager___c_TypeInfo;
    if ( !FriendOperationItemListViewManager___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(FriendOperationItemListViewManager___c_TypeInfo);
      sort = (__int64)FriendOperationItemListViewManager___c_TypeInfo;
    }
    v76 = *(System_Comparison_T__o **)(*(_QWORD *)(sort + 184) + 8LL);
    if ( !v76 )
    {
      if ( !*(_DWORD *)(sort + 224) )
      {
        j_il2cpp_runtime_class_init_0(sort);
        sort = (__int64)FriendOperationItemListViewManager___c_TypeInfo;
      }
      v77 = **(Il2CppObject ***)(sort + 184);
      v76 = (System_Comparison_T__o *)sub_1B64314(System_Comparison_DataEntityBase__TypeInfo, v74, v75);
      System_Comparison_object____ctor(
        v76,
        v77,
        Method_FriendOperationItemListViewManager___c__CreateList_b__35_0__,
        0LL);
      static_fields = FriendOperationItemListViewManager___c_TypeInfo->static_fields;
      static_fields->__9__35_0 = (struct System_Comparison_DataEntityBase__o *)v76;
      sort = sub_1B6406C(&static_fields->__9__35_0);
    }
    if ( !v73 )
      goto LABEL_112;
    System_Collections_Generic_List_object___Sort_55243320(
      v73,
      v76,
      (const MethodInfo_34AF238 *)Method_System_Collections_Generic_List_DataEntityBase__Sort__);
    v79 = v73->fields._size;
    v80 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v80 = BalanceConfig_TypeInfo;
    }
    MaxFriendHistoryNum = v80->static_fields->MaxFriendHistoryNum;
    if ( v79 > MaxFriendHistoryNum )
    {
      if ( !v80->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v80);
        MaxFriendHistoryNum = BalanceConfig_TypeInfo->static_fields->MaxFriendHistoryNum;
      }
      System_Collections_Generic_List_object___RemoveRange(
        v73,
        MaxFriendHistoryNum,
        v73->fields._size - MaxFriendHistoryNum,
        (const MethodInfo_34AEFE0 *)Method_System_Collections_Generic_List_DataEntityBase__RemoveRange__);
    }
    System_Collections_Generic_List_object___Reverse(
      v73,
      (const MethodInfo_34AF0A0 *)Method_System_Collections_Generic_List_DataEntityBase__Reverse__);
    ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
    if ( v73->fields._size < 1 )
    {
LABEL_72:
      v68 = &StringLiteral_3018/*"BLACKLIST_FRIEND_HISTORY_EMPTY_MESSAGE"*/;
      goto LABEL_73;
    }
    v82 = 0;
    while ( 1 )
    {
      sort = (__int64)System_Collections_Generic_List_object___get_Item(
                        v73,
                        v82,
                        (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_DataEntityBase__get_Item__);
      if ( !sort )
        goto LABEL_112;
      v83 = (UserFriendRequestHistoryEntity_o *)sort;
      v84 = LOBYTE(UserFriendRequestHistoryEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( *(unsigned __int8 *)(*(_QWORD *)sort + 304LL) < (unsigned int)v84 )
        goto LABEL_112;
      if ( *(UserFriendRequestHistoryEntity_c **)(*(_QWORD *)(*(_QWORD *)sort + 200LL) + 8 * v84 - 8) != UserFriendRequestHistoryEntity_TypeInfo )
        goto LABEL_112;
      sort = UserFriendRequestHistoryEntity__getOtherUserId((UserFriendRequestHistoryEntity_o *)sort, 0LL);
      if ( !v69 )
        goto LABEL_112;
      sort = (__int64)DataMasterBase_object__object__long___GetEntity(
                        (DataMasterBase_TMaster__TEntity__PKType__o *)v69,
                        sort,
                        (const MethodInfo_30D4050 *)Method_DataMasterBase_OtherUserGameMaster__OtherUserGameEntity__long__GetEntity__);
      v87 = this->fields.itemList;
      if ( !v87 )
        goto LABEL_112;
      v88 = (OtherUserGameEntity_o *)sort;
      v89 = v87->fields._size;
      v90 = this->fields.classBoardMaxDictionary;
      v91 = (FriendOperationItemListViewItem_o *)sub_1B64314(FriendOperationItemListViewItem_TypeInfo, v85, v86);
      FriendOperationItemListViewItem___ctor_30622076(v91, 7, v89, v88, v83, 0, v90, 0LL);
      sort = (__int64)this->fields.itemList;
      if ( !sort )
        goto LABEL_112;
      v92 = *(_QWORD *)(sort + 16);
      v93 = Method_System_Collections_Generic_List_ListViewItem__Add__;
      ++*(_DWORD *)(sort + 28);
      if ( !v92 )
        goto LABEL_112;
      v94 = *(int *)(sort + 24);
      if ( (unsigned int)v94 >= *(_DWORD *)(v92 + 24) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)sort,
          (Il2CppObject *)v91,
          *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v93[4] + 192LL) + 112LL));
      }
      else
      {
        v95 = v92 + 8 * v94;
        *(_DWORD *)(sort + 24) = v94 + 1;
        *(_QWORD *)(v95 + 32) = v91;
        sub_1B6406C(v95 + 32);
      }
      if ( ++v82 >= v73->fields._size )
        goto LABEL_72;
    }
  }
  v38 = (System_String_o *)StringLiteral_6470/*"FRIEND_EMPTY_OFFERED_MESSAGE"*/;
  if ( !kind )
  {
    sort = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !sort )
      goto LABEL_112;
    sort = (__int64)DataManager__GetMasterData_object_(
                      (DataManager_o *)sort,
                      (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_OtherUserGameMaster___);
    if ( !sort )
      goto LABEL_112;
    FriendCodeList = OtherUserGameMaster__GetFriendCodeList((OtherUserGameMaster_o *)sort, this->fields.friendCode, 0LL);
    ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
    if ( !FriendCodeList )
      goto LABEL_112;
    v41 = *(_QWORD *)&FriendCodeList->max_length;
    if ( (int)v41 >= 1 )
    {
      v42 = 0LL;
      while ( 1 )
      {
        v43 = this->fields.itemList;
        if ( !v43 )
          goto LABEL_112;
        if ( v42 >= (unsigned int)v41 )
          goto LABEL_113;
        v44 = v43->fields._size;
        v45 = FriendCodeList->m_Items[v42];
        v46 = this->fields.classBoardMaxDictionary;
        v47 = (FriendOperationItemListViewItem_o *)sub_1B64314(FriendOperationItemListViewItem_TypeInfo, v36, v40);
        FriendOperationItemListViewItem___ctor_30621424(v47, 0, v44, v45, 0, v46, 0LL);
        sort = (__int64)this->fields.itemList;
        if ( !sort )
          goto LABEL_112;
        v48 = *(_QWORD *)(sort + 16);
        v49 = Method_System_Collections_Generic_List_ListViewItem__Add__;
        ++*(_DWORD *)(sort + 28);
        if ( !v48 )
          goto LABEL_112;
        v50 = *(int *)(sort + 24);
        if ( (unsigned int)v50 >= *(_DWORD *)(v48 + 24) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)sort,
            (Il2CppObject *)v47,
            *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v49[4] + 192LL) + 112LL));
        }
        else
        {
          v51 = v48 + 8 * v50;
          *(_DWORD *)(sort + 24) = v50 + 1;
          *(_QWORD *)(v51 + 32) = v47;
          sort = sub_1B6406C(v51 + 32);
        }
        LODWORD(v41) = FriendCodeList->max_length;
        if ( (__int64)++v42 >= (int)v41 )
          goto LABEL_107;
      }
    }
    goto LABEL_107;
  }
  sort = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !sort )
    goto LABEL_112;
  v124 = v38;
  sort = (__int64)DataManager__GetMasterData_object_(
                    (DataManager_o *)sort,
                    (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_TblFriendMaster___);
  if ( !sort )
    goto LABEL_112;
  v96 = (TblFriendMaster_o *)sort;
  List = TblFriendMaster__GetList((TblFriendMaster_o *)sort, kind, 0LL);
  v98 = TblFriendMaster__GetList(v96, 9, 0LL);
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
  if ( kind == 3 )
  {
    if ( !v98 )
      goto LABEL_112;
    v100 = *(_QWORD *)&v98->max_length;
    if ( (int)v100 >= 1 )
    {
      v101 = 0LL;
      do
      {
        v102 = this->fields.itemList;
        if ( !v102 )
          goto LABEL_112;
        if ( v101 >= (unsigned int)v100 )
          goto LABEL_113;
        v103 = v102->fields._size;
        v104 = v98->m_Items[v101];
        v105 = this->fields.classBoardMaxDictionary;
        v106 = (FriendOperationItemListViewItem_o *)sub_1B64314(FriendOperationItemListViewItem_TypeInfo, v36, v99);
        FriendOperationItemListViewItem___ctor_30621424(v106, 9, v103, v104, classPos, v105, 0LL);
        sort = (__int64)this->fields.itemList;
        if ( !sort )
          goto LABEL_112;
        v107 = *(_QWORD *)(sort + 16);
        v108 = Method_System_Collections_Generic_List_ListViewItem__Add__;
        ++*(_DWORD *)(sort + 28);
        if ( !v107 )
          goto LABEL_112;
        v109 = *(int *)(sort + 24);
        if ( (unsigned int)v109 >= *(_DWORD *)(v107 + 24) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)sort,
            (Il2CppObject *)v106,
            *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v108[4] + 192LL) + 112LL));
        }
        else
        {
          v110 = v107 + 8 * v109;
          *(_DWORD *)(sort + 24) = v109 + 1;
          *(_QWORD *)(v110 + 32) = v106;
          sort = sub_1B6406C(v110 + 32);
        }
        LODWORD(v100) = v98->max_length;
      }
      while ( (__int64)++v101 < (int)v100 );
    }
  }
  if ( !List )
    goto LABEL_112;
  v111 = *(_QWORD *)&List->max_length;
  if ( (int)v111 >= 1 )
  {
    v112 = 0LL;
    do
    {
      v113 = this->fields.itemList;
      if ( !v113 )
        goto LABEL_112;
      if ( v112 >= (unsigned int)v111 )
        goto LABEL_113;
      v114 = v113->fields._size;
      v115 = List->m_Items[v112];
      v116 = this->fields.classBoardMaxDictionary;
      v117 = (FriendOperationItemListViewItem_o *)sub_1B64314(FriendOperationItemListViewItem_TypeInfo, v36, v99);
      FriendOperationItemListViewItem___ctor_30621424(v117, kind, v114, v115, classPos, v116, 0LL);
      sort = (__int64)this->fields.itemList;
      if ( !sort )
        goto LABEL_112;
      v118 = *(_QWORD *)(sort + 16);
      v119 = Method_System_Collections_Generic_List_ListViewItem__Add__;
      ++*(_DWORD *)(sort + 28);
      if ( !v118 )
        goto LABEL_112;
      v120 = *(int *)(sort + 24);
      if ( (unsigned int)v120 >= *(_DWORD *)(v118 + 24) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)sort,
          (Il2CppObject *)v117,
          *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v119[4] + 192LL) + 112LL));
      }
      else
      {
        v121 = v118 + 8 * v120;
        *(_DWORD *)(sort + 24) = v120 + 1;
        *(_QWORD *)(v121 + 32) = v117;
        sort = sub_1B6406C(v121 + 32);
      }
      v111 = *(_QWORD *)&List->max_length;
    }
    while ( (__int64)++v112 < (int)v111 );
  }
  if ( v111 )
  {
    v38 = v124;
    goto LABEL_107;
  }
  v38 = v124;
  if ( !v98 )
    goto LABEL_112;
  if ( !*(_QWORD *)&v98->max_length )
  {
    if ( kind != 2 )
    {
      if ( kind == 3 )
        v38 = (System_String_o *)StringLiteral_6469/*"FRIEND_EMPTY_FRIEND_MESSAGE"*/;
      goto LABEL_107;
    }
    v68 = &StringLiteral_6470/*"FRIEND_EMPTY_OFFERED_MESSAGE"*/;
LABEL_73:
    v38 = (System_String_o *)*v68;
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
  sub_1B6406C(&this->fields.friendCode);
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
  __int64 v17; // x1
  __int64 v18; // x2
  ListViewSort_o *v19; // x20
  FriendOperationItemListViewManager_c *inited; // x0
  __int64 v21; // x1
  unsigned int *v22; // x0
  struct ListViewSort_array *v23; // x8
  Il2CppClass **v24; // x8
  ListViewSort_o *v25; // x20
  struct ListViewSort_FilterKind_array *v26; // x8
  unsigned __int64 j; // x21
  struct ListViewSort_FilterKind_array *classFilter; // x8
  __int64 v29; // x0
  int v30; // [xsp+Ch] [xbp-54h] BYREF

  if ( (byte_49F7838 & 1) == 0 )
  {
    sub_1B640C8(&FriendOperationItemListViewManager_TypeInfo, method);
    sub_1B640C8(&ListViewSort___TypeInfo, v3);
    sub_1B640C8(&ListViewSort_TypeInfo, v4);
    sub_1B640C8(&StringLiteral_6816/*"FriendOperation"*/, v5);
    byte_49F7838 = 1;
  }
  v6 = FriendOperationItemListViewManager_TypeInfo;
  v30 = 0;
  if ( !FriendOperationItemListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FriendOperationItemListViewManager_TypeInfo);
    v6 = FriendOperationItemListViewManager_TypeInfo;
  }
  if ( !v6->static_fields->isInitSystem )
  {
    v7 = sub_1B64170(ListViewSort___TypeInfo, 10LL);
    v8 = FriendOperationItemListViewManager_TypeInfo;
    v9 = v7;
    if ( !FriendOperationItemListViewManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(FriendOperationItemListViewManager_TypeInfo);
      v8 = FriendOperationItemListViewManager_TypeInfo;
    }
    static_fields = v8->static_fields;
    static_fields->sortStatusList = (struct ListViewSort_array *)v9;
    sub_1B6406C(&static_fields->sortStatusList);
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
      v30 = i + 1;
      v15 = System_Int32__ToString((int32_t)&v30, 0LL);
      v16 = System_String__Concat_61375396((System_String_o *)StringLiteral_6816/*"FriendOperation"*/, v15, 0LL);
      v19 = (ListViewSort_o *)sub_1B64314(ListViewSort_TypeInfo, v17, v18);
      ListViewSort___ctor_40426136(v19, v16, 3, 0, 0LL);
      if ( !sortStatusList )
        goto LABEL_37;
      if ( v19 )
      {
        inited = (FriendOperationItemListViewManager_c *)sub_1B64204(v19, *(_QWORD *)(*(_QWORD *)sortStatusList + 64LL));
        if ( !inited )
        {
          v29 = sub_1B64348();
          sub_1B641F0(v29, 0LL);
        }
      }
      if ( i >= sortStatusList[6] )
        goto LABEL_38;
      v22 = &sortStatusList[2 * i];
      *((_QWORD *)v22 + 4) = v19;
      inited = (FriendOperationItemListViewManager_c *)sub_1B6406C(v22 + 8);
      v23 = FriendOperationItemListViewManager_TypeInfo->static_fields->sortStatusList;
      if ( !v23 )
        goto LABEL_37;
      if ( i >= v23->max_length )
LABEL_38:
        sub_1B6432C(inited, v21);
      v24 = &v23->obj.klass + i;
      v25 = (ListViewSort_o *)v24[4];
      if ( !v25 )
        goto LABEL_37;
      ListViewSort__ClassFilterOFF((ListViewSort_o *)v24[4], 0LL);
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
          ListViewSort__SetFilter(v25, classFilter->m_Items[j + 1], 1, 0LL);
        }
LABEL_37:
        sub_1B64324(inited);
      }
      inited = FriendOperationItemListViewManager_TypeInfo;
      if ( !FriendOperationItemListViewManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(FriendOperationItemListViewManager_TypeInfo);
        inited = FriendOperationItemListViewManager_TypeInfo;
      }
      v26 = inited->static_fields->classFilter;
      if ( !v26 )
        goto LABEL_37;
      if ( v26->max_length <= classPos )
        goto LABEL_38;
      ListViewSort__SetFilter(v25, v26->m_Items[classPos + 1], 1, 0LL);
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

  if ( (byte_49F7839 & 1) == 0 )
  {
    sub_1B640C8(&FriendOperationItemListViewManager_TypeInfo, v1);
    byte_49F7839 = 1;
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
      sub_1B6432C(v4, v2);
    v4 = (FriendOperationItemListViewManager_c *)*((_QWORD *)&sortStatusList->obj.klass + v3);
    if ( !v4 )
LABEL_13:
      sub_1B64324(v4);
    ListViewSort__DeleteContinueData((ListViewSort_o *)v4, 0LL);
    ++v3;
  }
  while ( (_DWORD)v3 != 14 );
}


void __fastcall FriendOperationItemListViewManager__DestroyList(
        FriendOperationItemListViewManager_o *this,
        const MethodInfo *method)
{
  ListViewSort_o *sort; // x0

  ListViewManager__DestroyList((ListViewManager_o *)this, 0LL);
  sort = this->fields.sort;
  if ( !sort )
    sub_1B64324(0LL);
  ListViewSort__Save(sort, 0LL);
}


void __fastcall FriendOperationItemListViewManager__EndCloseClassBoardEffectListDialog(
        FriendOperationItemListViewManager_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0

  if ( (byte_49F784E & 1) == 0 )
  {
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    byte_49F784E = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1B64324(0LL);
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

  if ( (byte_49F783F & 1) == 0 )
  {
    sub_1B640C8(&FriendOperationItemListViewItem_TypeInfo, *(_QWORD *)&index);
    sub_1B640C8(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v5);
    byte_49F783F = 1;
  }
  result = (FriendOperationItemListViewItem_o *)this->fields.itemList;
  if ( result )
  {
    result = (FriendOperationItemListViewItem_o *)System_Collections_Generic_List_object___get_Item(
                                                    (System_Collections_Generic_List_object__o *)result,
                                                    index,
                                                    (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
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

  if ( (byte_49F783A & 1) == 0 )
  {
    sub_1B640C8(&FriendOperationItemListViewManager_TypeInfo, v1);
    byte_49F783A = 1;
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
        sub_1B6432C(v2, v1);
      v2 = (FriendOperationItemListViewManager_c *)*((_QWORD *)&sortStatusList->obj.klass + i);
      if ( !v2 )
LABEL_15:
        sub_1B64324(v2);
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
  unsigned int Index; // w0

  callbackFunc = this->fields.callbackFunc;
  this->fields.callbackFunc = 0LL;
  v5 = sub_1B6406C(&this->fields.callbackFunc);
  if ( callbackFunc )
  {
    if ( !obj )
      sub_1B64324(v5);
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
  unsigned int Index; // w0

  callbackFunc = this->fields.callbackFunc;
  this->fields.callbackFunc = 0LL;
  v5 = sub_1B6406C(&this->fields.callbackFunc);
  if ( callbackFunc )
  {
    if ( !obj )
      sub_1B64324(v5);
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
  unsigned int Index; // w0

  callbackFunc = this->fields.callbackFunc;
  this->fields.callbackFunc = 0LL;
  v5 = sub_1B6406C(&this->fields.callbackFunc);
  if ( callbackFunc )
  {
    if ( !obj )
      sub_1B64324(v5);
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
  unsigned int Index; // w0

  callbackFunc = this->fields.callbackFunc;
  this->fields.callbackFunc = 0LL;
  v5 = sub_1B6406C(&this->fields.callbackFunc);
  if ( callbackFunc )
  {
    if ( !obj )
      sub_1B64324(v5);
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
  unsigned int Index; // w0

  callbackFunc = this->fields.callbackFunc;
  this->fields.callbackFunc = 0LL;
  v5 = sub_1B6406C(&this->fields.callbackFunc);
  if ( callbackFunc )
  {
    if ( !obj )
      sub_1B64324(v5);
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
  unsigned int Index; // w0

  callbackFunc = this->fields.callbackFunc;
  this->fields.callbackFunc = 0LL;
  v5 = sub_1B6406C(&this->fields.callbackFunc);
  if ( callbackFunc )
  {
    if ( !obj )
      sub_1B64324(v5);
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
  struct ListViewSort_o *sort; // x8

  if ( (byte_49F7849 & 1) == 0 )
  {
    sub_1B640C8(&Method_FriendOperationItemListViewManager_OnClickSortAscendingOrder__, method);
    byte_49F7849 = 1;
  }
  if ( this->fields.isInput )
  {
    v3 = Method_FriendOperationItemListViewManager_OnClickSortAscendingOrder__;
    if ( (*((_BYTE *)Method_FriendOperationItemListViewManager_OnClickSortAscendingOrder__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B640E0();
    v4 = (System_Reflection_MethodBase_o *)sub_1B640AC(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
    sort = this->fields.sort;
    if ( !sort )
      sub_1B64324(v5);
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
  __int64 v12; // x1
  __int64 v13; // x2
  OtherUserSortDialog_CallbackFunc_o *v14; // x22
  __int64 v15; // x0
  int32_t v16; // w1
  Il2CppObject *Instance; // x0
  __int64 v18; // x1
  __int64 v19; // x2

  if ( (byte_49F7847 & 1) == 0 )
  {
    sub_1B640C8(&OtherUserSortDialog_CallbackFunc_TypeInfo, method);
    sub_1B640C8(&Method_FriendOperationItemListViewManager_CloseSortDialog__, v3);
    sub_1B640C8(&Method_FriendOperationItemListViewManager_OnClickSortKind__, v4);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    byte_49F7847 = 1;
  }
  if ( this->fields.isInput )
  {
    v6 = Method_FriendOperationItemListViewManager_OnClickSortKind__;
    if ( (*((_BYTE *)Method_FriendOperationItemListViewManager_OnClickSortKind__ + 83) & 2) != 0 )
      v6 = (_QWORD *)sub_1B640E0();
    v7 = (System_Reflection_MethodBase_o *)sub_1B640AC(v6, v6[4]);
    OverwriteAssetSoundName__PlaySystemSe(v7, 0, 0LL);
    menuKind = this->fields.menuKind;
    if ( menuKind == 2 )
    {
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      sort = this->fields.sort;
      v11 = (CommonUI_o *)Instance;
      v14 = (OtherUserSortDialog_CallbackFunc_o *)sub_1B64314(OtherUserSortDialog_CallbackFunc_TypeInfo, v18, v19);
      OtherUserSortDialog_CallbackFunc___ctor(
        v14,
        (Il2CppObject *)this,
        Method_FriendOperationItemListViewManager_CloseSortDialog__,
        0LL);
      if ( v11 )
      {
        v16 = 2;
        goto LABEL_13;
      }
LABEL_14:
      sub_1B64324(v15);
    }
    if ( menuKind == 3 )
    {
      v9 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      sort = this->fields.sort;
      v11 = (CommonUI_o *)v9;
      v14 = (OtherUserSortDialog_CallbackFunc_o *)sub_1B64314(OtherUserSortDialog_CallbackFunc_TypeInfo, v12, v13);
      OtherUserSortDialog_CallbackFunc___ctor(
        v14,
        (Il2CppObject *)this,
        Method_FriendOperationItemListViewManager_CloseSortDialog__,
        0LL);
      if ( v11 )
      {
        v16 = 1;
LABEL_13:
        CommonUI__OpenOtherUserSortDialog(v11, v16, sort, v14, 0LL);
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
  unsigned int Index; // w0

  callbackFunc = this->fields.callbackFunc;
  this->fields.callbackFunc = 0LL;
  v5 = sub_1B6406C(&this->fields.callbackFunc);
  if ( callbackFunc )
  {
    if ( !obj )
      sub_1B64324(v5);
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

  if ( (byte_49F7846 & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_12493/*"ScrollViewEnabled"*/, obj);
    byte_49F7846 = 1;
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
      (System_String_o *)StringLiteral_12493/*"ScrollViewEnabled"*/,
      0.1,
      0LL);
    callbackFunc = this->fields.callbackFunc;
    this->fields.callbackFunc = 0LL;
    scrollView = (UIScrollView_o *)sub_1B6406C(&this->fields.callbackFunc);
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
      sub_1B64324(scrollView);
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
  struct System_Collections_Generic_List_ListViewItem__o *itemSortList; // x8
  UnityEngine_Object_o *scrollView; // x20
  struct System_Action_o *callbackFunc2; // x20

  if ( (byte_49F7845 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, method);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v3);
    byte_49F7845 = 1;
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
          sub_1B6406C(&this->fields.callbackFunc2);
          if ( callbackFunc2 )
            ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))callbackFunc2->fields.m_target)(
              callbackFunc2->fields.original_method_info,
              *(_QWORD *)&callbackFunc2->fields.extra_arg);
          return;
        }
      }
LABEL_18:
      sub_1B64324(emptyMessageBase);
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
  __int64 v25; // x1
  __int64 v26; // x2
  struct OtherUserGameEntity_o *otherUserGameEntity; // x8
  struct ClassBoardInfo_array *userClassBoardInfo; // x23
  int max_length; // w8
  int32_t v30; // w20
  unsigned int v31; // w24
  ClassBoardInfo_o *v32; // x21
  _QWORD *v33; // x22
  __int64 v34; // x8
  __int64 v35; // x0
  __int64 v36; // x0
  _QWORD *v37; // x22
  __int64 v38; // x8
  __int64 v39; // x0
  __int64 v40; // x0
  Il2CppObject *Instance; // x22
  __int64 v42; // x1
  __int64 v43; // x2
  System_Action_o *v44; // x23

  v4 = this;
  if ( (byte_49F784D & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, obj);
    sub_1B640C8(&Method_System_Array_Empty_int___, v5);
    sub_1B640C8(&ClassBoardInfo_TypeInfo, v6);
    sub_1B640C8(&Method_DataManager_GetMaster_ClassBoardClassMaster___, v7);
    sub_1B640C8(&Method_DataManager_GetMaster_ServantMaster___, v8);
    sub_1B640C8(&DataManager_TypeInfo, v9);
    sub_1B640C8(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v10);
    sub_1B640C8(&FriendOperationItemListViewItem_TypeInfo, v11);
    sub_1B640C8(&Method_FriendOperationItemListViewManager_EndCloseClassBoardEffectListDialog__, v12);
    sub_1B640C8(&Method_FriendOperationItemListViewManager_OpenSupportClassBoard__, v13);
    sub_1B640C8(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v14);
    this = (FriendOperationItemListViewManager_o *)sub_1B640C8(
                                                     &Method_SingletonMonoBehaviour_CommonUI__get_Instance__,
                                                     v15);
    byte_49F784D = 1;
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
                 (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
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
          v21 = (_QWORD *)sub_1B640E0();
        v22 = (System_Reflection_MethodBase_o *)sub_1B640AC(v21, v21[4]);
        OverwriteAssetSoundName__PlaySystemSe(v22, 0, 0LL);
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        Master_object = DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_ServantMaster___);
        this = (FriendOperationItemListViewManager_o *)FriendOperationItemListViewItem__get_SvtId(v19, 0LL);
        if ( Master_object )
        {
          this = (FriendOperationItemListViewManager_o *)DataMasterBase_object__object__int___GetEntity(
                                                           (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                                           (int32_t)this,
                                                           (const MethodInfo_30D3EA4 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
          if ( this )
          {
            scrollView = (int32_t)this->fields.scrollView;
            this = (FriendOperationItemListViewManager_o *)DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_ClassBoardClassMaster___);
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
                  v30 = (int)this;
                  if ( max_length < 1 )
                  {
LABEL_26:
                    v32 = (ClassBoardInfo_o *)sub_1B64314(ClassBoardInfo_TypeInfo, v25, v26);
                    ClassBoardInfo___ctor(v32, 0LL);
                    if ( v32 )
                    {
                      v32->fields.classBoardBaseId = v30;
                      v33 = Method_System_Array_Empty_int___;
                      v34 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
                      if ( !v34 )
                      {
                        sub_1BB6000(Method_System_Array_Empty_int___);
                        v34 = v33[7];
                      }
                      v35 = *(_QWORD *)(v34 + 16);
                      if ( (*(_BYTE *)(v35 + 309) & 1) == 0 )
                        v35 = sub_1BB5FA4();
                      if ( !*(_DWORD *)(v35 + 224) )
                        j_il2cpp_runtime_class_init_0(v35);
                      v36 = *(_QWORD *)(v33[7] + 16LL);
                      if ( (*(_BYTE *)(v36 + 309) & 1) == 0 )
                        v36 = sub_1BB5FA4();
                      v32->fields.squareIds = **(struct System_Int32_array ***)(v36 + 184);
                      sub_1B6406C(&v32->fields.squareIds);
                      v37 = Method_System_Array_Empty_int___;
                      v38 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
                      if ( !v38 )
                      {
                        sub_1BB6000(Method_System_Array_Empty_int___);
                        v38 = v37[7];
                      }
                      v39 = *(_QWORD *)(v38 + 16);
                      if ( (*(_BYTE *)(v39 + 309) & 1) == 0 )
                        v39 = sub_1BB5FA4();
                      if ( !*(_DWORD *)(v39 + 224) )
                        j_il2cpp_runtime_class_init_0(v39);
                      v40 = *(_QWORD *)(v37[7] + 16LL);
                      if ( (*(_BYTE *)(v40 + 309) & 1) == 0 )
                        v40 = sub_1BB5FA4();
                      v32->fields.releasedClassIds = **(struct System_Int32_array ***)(v40 + 184);
                      sub_1B6406C(&v32->fields.releasedClassIds);
LABEL_44:
                      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                      v44 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v42, v43);
                      System_Action___ctor(
                        v44,
                        (Il2CppObject *)v4,
                        Method_FriendOperationItemListViewManager_EndCloseClassBoardEffectListDialog__,
                        0LL);
                      if ( Instance )
                      {
                        CommonUI__OpenClassBoardEffectListDialog((CommonUI_o *)Instance, 1, v30, 0, v44, 1, v32, 0LL);
                        return;
                      }
                    }
                  }
                  else
                  {
                    v31 = 0;
                    while ( 1 )
                    {
                      if ( v31 >= max_length )
                        sub_1B6432C(this, v25);
                      v32 = userClassBoardInfo->m_Items[v31];
                      if ( !v32 )
                        break;
                      if ( v32->fields.classBoardBaseId == v30 )
                      {
                        this = (FriendOperationItemListViewManager_o *)ClassBoardInfo__IsReleasedClassId(
                                                                         v32,
                                                                         scrollView,
                                                                         0LL);
                        if ( ((unsigned __int8)this & 1) != 0 )
                          goto LABEL_44;
                      }
                      max_length = userClassBoardInfo->max_length;
                      if ( (int)++v31 >= max_length )
                        goto LABEL_26;
                    }
                  }
                }
              }
            }
          }
        }
      }
      sub_1B64324(this);
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
  int32_t size; // w8
  System_Collections_Generic_List_object__o *v10; // x20
  int v11; // w24
  int32_t v12; // w21
  Il2CppObject *Item; // x22
  __int64 v14; // x1
  __int64 v15; // x2
  System_Action_o *v16; // x23
  const MethodInfo *v17; // x3

  if ( (byte_49F7844 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, method);
    sub_1B640C8(&Method_FriendOperationItemListViewManager_OnMoveEnd__, v3);
    sub_1B640C8(&Method_System_Collections_Generic_List_FriendOperationItemListViewObject__get_Count__, v4);
    sub_1B640C8(&Method_System_Collections_Generic_List_FriendOperationItemListViewObject__get_Item__, v5);
    sub_1B640C8(&StringLiteral_9890/*"OnMoveEnd"*/, v6);
    byte_49F7844 = 1;
  }
  ListViewManager__ClippingItems((ListViewManager_o *)this, 1, 0, 0LL);
  ListViewManager__DragMaskStart((ListViewManager_o *)this, 0LL);
  ObjectList = FriendOperationItemListViewManager__get_ObjectList(this, v7);
  if ( !ObjectList )
LABEL_13:
    sub_1B64324(ObjectList);
  size = ObjectList->fields._size;
  v10 = (System_Collections_Generic_List_object__o *)ObjectList;
  this->fields.callbackCount = size;
  if ( size < 1 )
    goto LABEL_12;
  v11 = 0;
  v12 = 0;
  do
  {
    Item = System_Collections_Generic_List_object___get_Item(
             v10,
             v12,
             (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_FriendOperationItemListViewObject__get_Item__);
    if ( ListViewManager__ClippingItem((ListViewManager_o *)this, (ListViewObject_o *)Item, 0LL) )
    {
      v16 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v14, v15);
      System_Action___ctor(v16, (Il2CppObject *)this, Method_FriendOperationItemListViewManager_OnMoveEnd__, 0LL);
      if ( !Item )
        goto LABEL_13;
      ++v11;
      FriendOperationItemListViewObject__Init_30646460((FriendOperationItemListViewObject_o *)Item, 4, v16, 0.1, v17);
    }
    else
    {
      --this->fields.callbackCount;
    }
    ++v12;
  }
  while ( v12 < v10->fields._size );
  if ( !v11 )
  {
LABEL_12:
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_9890/*"OnMoveEnd"*/,
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
  int32_t size; // w8
  __int64 v16; // x1
  __int64 v17; // x2
  Il2CppObject *current; // x21
  System_Action_o *v19; // x22
  __int64 v20; // x0
  const MethodInfo *v21; // x3
  System_Collections_Generic_List_Enumerator_object__o v22; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_49F7842 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, *(_QWORD *)&mode);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_FriendOperationItemListViewObject__Dispose__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_FriendOperationItemListViewObject__MoveNext__, v8);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_FriendOperationItemListViewObject__get_Current__, v9);
    sub_1B640C8(&Method_FriendOperationItemListViewManager_OnMoveEnd__, v10);
    sub_1B640C8(&Method_System_Collections_Generic_List_FriendOperationItemListViewObject__GetEnumerator__, v11);
    sub_1B640C8(&Method_System_Collections_Generic_List_FriendOperationItemListViewObject__get_Count__, v12);
    sub_1B640C8(&StringLiteral_9890/*"OnMoveEnd"*/, v13);
    byte_49F7842 = 1;
  }
  memset(&v22, 0, sizeof(v22));
  ObjectList = (System_Collections_Generic_List_object__o *)FriendOperationItemListViewManager__get_ObjectList(
                                                              this,
                                                              *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_1B64324(0LL);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_9890/*"OnMoveEnd"*/,
      delay,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v22,
      ObjectList,
      (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_FriendOperationItemListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v22,
              (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_FriendOperationItemListViewObject__MoveNext__) )
    {
      current = v22.fields._current;
      v19 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v16, v17);
      System_Action___ctor(v19, (Il2CppObject *)this, Method_FriendOperationItemListViewManager_OnMoveEnd__, 0LL);
      if ( !current )
        sub_1B64324(v20);
      FriendOperationItemListViewObject__Init_30646460(
        (FriendOperationItemListViewObject_o *)current,
        mode,
        v19,
        delay,
        v21);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v22,
      (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_FriendOperationItemListViewObject__Dispose__);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FriendOperationItemListViewManager__RequestListObject_30646560(
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
  int32_t size; // w8
  __int64 v14; // x1
  __int64 v15; // x2
  Il2CppObject *current; // x21
  System_Action_o *v17; // x22
  __int64 v18; // x0
  const MethodInfo *v19; // x3
  System_Collections_Generic_List_Enumerator_object__o v20; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_49F7843 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, *(_QWORD *)&mode);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_FriendOperationItemListViewObject__Dispose__, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_FriendOperationItemListViewObject__MoveNext__, v6);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_FriendOperationItemListViewObject__get_Current__, v7);
    sub_1B640C8(&Method_FriendOperationItemListViewManager_OnMoveEnd__, v8);
    sub_1B640C8(&Method_System_Collections_Generic_List_FriendOperationItemListViewObject__GetEnumerator__, v9);
    sub_1B640C8(&Method_System_Collections_Generic_List_FriendOperationItemListViewObject__get_Count__, v10);
    sub_1B640C8(&StringLiteral_9890/*"OnMoveEnd"*/, v11);
    byte_49F7843 = 1;
  }
  memset(&v20, 0, sizeof(v20));
  ObjectList = (System_Collections_Generic_List_object__o *)FriendOperationItemListViewManager__get_ObjectList(
                                                              this,
                                                              *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_1B64324(0LL);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_9890/*"OnMoveEnd"*/,
      0.0,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v20,
      ObjectList,
      (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_FriendOperationItemListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v20,
              (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_FriendOperationItemListViewObject__MoveNext__) )
    {
      current = v20.fields._current;
      v17 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v14, v15);
      System_Action___ctor(v17, (Il2CppObject *)this, Method_FriendOperationItemListViewManager_OnMoveEnd__, 0LL);
      if ( !current )
        sub_1B64324(v18);
      FriendOperationItemListViewObject__Init_30647588((FriendOperationItemListViewObject_o *)current, mode, v17, v19);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v20,
      (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_FriendOperationItemListViewObject__Dispose__);
  }
}


void __fastcall FriendOperationItemListViewManager__ScrollViewEnabled(
        FriendOperationItemListViewManager_o *this,
        const MethodInfo *method)
{
  UnityEngine_Behaviour_o *scrollView; // x0

  scrollView = (UnityEngine_Behaviour_o *)this->fields.scrollView;
  if ( !scrollView )
    sub_1B64324(0LL);
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
  System_Collections_Generic_List_object__o *itemSortList; // x0
  struct ListViewSort_o *sort; // x8
  const MethodInfo *v15; // x2
  int size; // w8
  System_Collections_Generic_List_Enumerator_object__o v17; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o i; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_49F784B & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__, *(_QWORD *)&classPos);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v6);
    sub_1B640C8(&FriendOperationItemListViewItem_TypeInfo, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v8);
    sub_1B640C8(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v9);
    sub_1B640C8(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v10);
    byte_49F784B = 1;
  }
  memset(&i, 0, sizeof(i));
  itemList = this->fields.itemList;
  if ( itemList )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v17,
      (System_Collections_Generic_List_object__o *)itemList,
      (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    i = v17;
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &i,
              (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__) )
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
      (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
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
          (System_Collections_Generic_List_Enumerator_T__o *)&v17,
          itemSortList,
          (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
        for ( i = v17;
              System_Collections_Generic_List_Enumerator_object___MoveNext(
                &i,
                (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
              ((void (*)(void))i.fields._current->klass->vtable[4].method)() )
        {
          if ( !i.fields._current )
            sub_1B64324(0LL);
        }
        System_Collections_Generic_List_Enumerator_object___Dispose(
          &i,
          (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
        itemSortList = (System_Collections_Generic_List_object__o *)this->fields.itemSortList;
        if ( itemSortList )
        {
          if ( itemSortList->fields._size < 1 )
            goto LABEL_29;
          itemSortList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                        itemSortList,
                                                                        0,
                                                                        (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
          if ( !itemSortList )
            goto LABEL_31;
          LOBYTE(itemSortList[2].monitor) = 1;
          itemSortList = (System_Collections_Generic_List_object__o *)this->fields.itemSortList;
          if ( !itemSortList )
            goto LABEL_31;
          itemSortList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                        itemSortList,
                                                                        itemSortList->fields._size - 1,
                                                                        (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
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
            FriendOperationItemListViewManager__SetMode_30645516(this, 5, v15);
            return;
          }
          itemSortList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                        itemSortList,
                                                                        size - 1,
                                                                        (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
          if ( itemSortList )
          {
            BYTE1(itemSortList[2].monitor) = 1;
            goto LABEL_29;
          }
        }
      }
LABEL_31:
      sub_1B64324(itemSortList);
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
  sub_1B6406C(&this->fields.callbackFunc);
  FriendOperationItemListViewManager__SetMode_30645516(this, mode, v6);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FriendOperationItemListViewManager__SetMode_30645516(
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
  int32_t v11; // w8
  System_Collections_Generic_List_object__o *v12; // x20
  int32_t v13; // w21
  Il2CppObject *v14; // x22
  __int64 v15; // x1
  __int64 v16; // x2
  System_Action_o *v17; // x23
  const MethodInfo *v18; // x3
  const MethodInfo *v19; // x2
  int v20; // s0
  System_String_o *v21; // x1
  const MethodInfo *v22; // x1
  int32_t v23; // w8
  System_Collections_Generic_List_object__o *v24; // x20
  int32_t v25; // w21
  Il2CppObject *Item; // x22
  __int64 v27; // x1
  __int64 v28; // x2
  System_Action_o *v29; // x23
  const MethodInfo *v30; // x3
  const MethodInfo *v31; // x1
  int32_t v32; // w8
  System_Collections_Generic_List_object__o *v33; // x20
  int32_t v34; // w21
  Il2CppObject *v35; // x22
  __int64 v36; // x1
  __int64 v37; // x2
  System_Action_o *v38; // x23
  const MethodInfo *v39; // x3

  if ( (byte_49F7841 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, *(_QWORD *)&mode);
    sub_1B640C8(&Method_FriendOperationItemListViewManager_OnMoveEnd__, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_FriendOperationItemListViewObject__get_Count__, v6);
    sub_1B640C8(&Method_System_Collections_Generic_List_FriendOperationItemListViewObject__get_Item__, v7);
    sub_1B640C8(&StringLiteral_9890/*"OnMoveEnd"*/, v8);
    sub_1B640C8(&StringLiteral_11257/*"RequestInto"*/, v9);
    byte_49F7841 = 1;
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
        v20 = 0;
        v21 = (System_String_o *)StringLiteral_11257/*"RequestInto"*/;
        goto LABEL_27;
      case 2:
        FriendOperationItemListViewManager__RequestListObject_30646560(this, 3, v19);
        return;
      case 3:
        ListViewManager__DragMaskStart((ListViewManager_o *)this, 0LL);
        emptyMessageBase = FriendOperationItemListViewManager__get_ClippingObjectList(this, v22);
        if ( !emptyMessageBase )
          goto LABEL_28;
        v23 = *((_DWORD *)emptyMessageBase + 6);
        v24 = (System_Collections_Generic_List_object__o *)emptyMessageBase;
        if ( v23 < 1 )
          goto LABEL_26;
        this->fields.callbackCount = v23;
        v25 = 0;
        while ( 1 )
        {
          Item = System_Collections_Generic_List_object___get_Item(
                   v24,
                   v25,
                   (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_FriendOperationItemListViewObject__get_Item__);
          v29 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v27, v28);
          System_Action___ctor(v29, (Il2CppObject *)this, Method_FriendOperationItemListViewManager_OnMoveEnd__, 0LL);
          if ( !Item )
            break;
          FriendOperationItemListViewObject__Init_30646460(
            (FriendOperationItemListViewObject_o *)Item,
            5,
            v29,
            0.1,
            v30);
          if ( ++v25 >= v24->fields._size )
            return;
        }
        goto LABEL_28;
      case 4:
        ListViewManager__DragMaskStart((ListViewManager_o *)this, 0LL);
        emptyMessageBase = FriendOperationItemListViewManager__get_ClippingObjectList(this, v31);
        if ( !emptyMessageBase )
          goto LABEL_28;
        v32 = *((_DWORD *)emptyMessageBase + 6);
        v33 = (System_Collections_Generic_List_object__o *)emptyMessageBase;
        if ( v32 < 1 )
          goto LABEL_26;
        this->fields.callbackCount = v32;
        v34 = 0;
        break;
      default:
        return;
    }
    while ( 1 )
    {
      v35 = System_Collections_Generic_List_object___get_Item(
              v33,
              v34,
              (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_FriendOperationItemListViewObject__get_Item__);
      v38 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v36, v37);
      System_Action___ctor(v38, (Il2CppObject *)this, Method_FriendOperationItemListViewManager_OnMoveEnd__, 0LL);
      if ( !v35 )
        break;
      FriendOperationItemListViewObject__Init_30646460((FriendOperationItemListViewObject_o *)v35, 6, v38, 0.1, v39);
      if ( ++v34 >= v33->fields._size )
        return;
    }
LABEL_28:
    sub_1B64324(emptyMessageBase);
  }
  emptyMessageBase = FriendOperationItemListViewManager__get_ObjectList(this, *(const MethodInfo **)&mode);
  if ( !emptyMessageBase )
    goto LABEL_28;
  v11 = *((_DWORD *)emptyMessageBase + 6);
  v12 = (System_Collections_Generic_List_object__o *)emptyMessageBase;
  if ( v11 >= 1 )
  {
    this->fields.callbackCount = v11;
    v13 = 0;
    while ( 1 )
    {
      v14 = System_Collections_Generic_List_object___get_Item(
              v12,
              v13,
              (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_FriendOperationItemListViewObject__get_Item__);
      v17 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v15, v16);
      System_Action___ctor(v17, (Il2CppObject *)this, Method_FriendOperationItemListViewManager_OnMoveEnd__, 0LL);
      if ( !v14 )
        break;
      FriendOperationItemListViewObject__Init_30646460((FriendOperationItemListViewObject_o *)v14, 7, v17, 0.1, v18);
      if ( ++v13 >= v12->fields._size )
        return;
    }
    goto LABEL_28;
  }
LABEL_26:
  this->fields.callbackCount = 1;
  v21 = (System_String_o *)StringLiteral_9890/*"OnMoveEnd"*/;
  v20 = 1045220557;
LABEL_27:
  UnityEngine_MonoBehaviour__Invoke((UnityEngine_MonoBehaviour_o *)this, v21, *(float *)&v20, 0LL);
}


void __fastcall FriendOperationItemListViewManager__SetMode_30646408(
        FriendOperationItemListViewManager_o *this,
        int32_t mode,
        System_Action_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v6; // x2

  this->fields.callbackFunc2 = callback;
  sub_1B6406C(&this->fields.callbackFunc2);
  FriendOperationItemListViewManager__SetMode_30645516(this, mode, v6);
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
  if ( (byte_49F7840 & 1) == 0 )
  {
    this = (FriendOperationItemListViewManager_o *)sub_1B640C8(&FriendOperationItemListViewObject_TypeInfo, obj);
    byte_49F7840 = 1;
  }
  if ( !obj
    || (methodPtr_low = LOBYTE(FriendOperationItemListViewObject_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(obj->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low)
    || (FriendOperationItemListViewObject_c *)obj->klass->_2.typeHierarchy[methodPtr_low - 1] != FriendOperationItemListViewObject_TypeInfo )
  {
    sub_1B64324(this);
  }
  if ( v5->fields.initMode == 2 )
    v7 = 3;
  else
    v7 = 2;
  FriendOperationItemListViewObject__Init_30645388(
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
  ListViewSort_o *sort; // x0
  UILabel_o *v11; // x20
  UnityEngine_Object_o *sortOrderSprite; // x20
  struct ListViewSort_o *v13; // x8
  int32_t sortKind; // w9
  System_String_o **v15; // x8
  struct ListViewSort_o *v16; // x8
  System_String_o **v17; // x9
  System_String_o **v18; // x10
  System_String_o **v19; // x8
  System_String_o **v20; // x8

  if ( (byte_49F784A & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, method);
    sub_1B640C8(&StringLiteral_17471/*"btn_sort_up"*/, v3);
    sub_1B640C8(&StringLiteral_17558/*"btn_txt_up"*/, v4);
    sub_1B640C8(&StringLiteral_17514/*"btn_txt_new"*/, v5);
    sub_1B640C8(&StringLiteral_17504/*"btn_txt_down"*/, v6);
    sub_1B640C8(&StringLiteral_17521/*"btn_txt_old"*/, v7);
    sub_1B640C8(&StringLiteral_17468/*"btn_sort_down"*/, v8);
    byte_49F784A = 1;
  }
  sortKindLabel = (UnityEngine_Object_o *)this->fields.sortKindLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(sortKindLabel, 0LL, 0LL) )
  {
    sort = this->fields.sort;
    if ( !sort )
      goto LABEL_36;
    v11 = this->fields.sortKindLabel;
    sort = (ListViewSort_o *)ListViewSort__GetSortKindButtonText(sort, 0, 0LL);
    if ( !v11 )
      goto LABEL_36;
    UILabel__set_text(v11, (System_String_o *)sort, 0LL);
  }
  sortOrderSprite = (UnityEngine_Object_o *)this->fields.sortOrderSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  sort = (ListViewSort_o *)UnityEngine_Object__op_Inequality(sortOrderSprite, 0LL, 0LL);
  if ( ((unsigned __int8)sort & 1) != 0 )
  {
    v13 = this->fields.sort;
    if ( !v13 )
      goto LABEL_36;
    sortKind = v13->fields.sortKind;
    if ( sortKind == 1 || sortKind == 11 || (unsigned int)(sortKind - 17) <= 1 )
    {
      sort = (ListViewSort_o *)this->fields.sortExplanationSprite;
      if ( !sort )
        goto LABEL_36;
      v15 = (System_String_o **)(v13->fields.isAscendingOrder ? &StringLiteral_17521/*"btn_txt_old"*/ : &StringLiteral_17514/*"btn_txt_new"*/);
      UISprite__set_spriteName((UISprite_o *)sort, *v15, 0LL);
      v16 = this->fields.sort;
      if ( !v16 )
        goto LABEL_36;
      sort = (ListViewSort_o *)this->fields.sortOrderSprite;
      if ( !sort )
        goto LABEL_36;
      v17 = (System_String_o **)&StringLiteral_17468/*"btn_sort_down"*/;
      v18 = (System_String_o **)&StringLiteral_17471/*"btn_sort_up"*/;
    }
    else
    {
      sort = (ListViewSort_o *)this->fields.sortExplanationSprite;
      if ( !sort )
        goto LABEL_36;
      v20 = (System_String_o **)(v13->fields.isAscendingOrder ? &StringLiteral_17558/*"btn_txt_up"*/ : &StringLiteral_17504/*"btn_txt_down"*/);
      UISprite__set_spriteName((UISprite_o *)sort, *v20, 0LL);
      v16 = this->fields.sort;
      if ( !v16 )
        goto LABEL_36;
      sort = (ListViewSort_o *)this->fields.sortOrderSprite;
      if ( !sort )
        goto LABEL_36;
      v17 = (System_String_o **)&StringLiteral_17471/*"btn_sort_up"*/;
      v18 = (System_String_o **)&StringLiteral_17468/*"btn_sort_down"*/;
    }
    if ( v16->fields.isAscendingOrder )
      v19 = v17;
    else
      v19 = v18;
    UISprite__set_spriteName((UISprite_o *)sort, *v19, 0LL);
    sort = (ListViewSort_o *)this->fields.sortExplanationSprite;
    if ( sort )
    {
      ((void (__fastcall *)(ListViewSort_o *, void *))sort->klass[2]._1.typeMetadataHandle)(
        sort,
        sort->klass[2]._1.interopData);
      return;
    }
LABEL_36:
    sub_1B64324(sort);
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
    sub_1B64324(this);
  sort->fields.sortKind = kind;
}


void __fastcall FriendOperationItemListViewManager__SetupClassBoardInfo(
        FriendOperationItemListViewManager_o *this,
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
  System_Collections_Generic_Dictionary_int__int__o *classBoardMaxDictionary; // x0
  System_Collections_Generic_Dictionary_int__int__o **p_classBoardMaxDictionary; // x20
  System_Collections_Generic_Dictionary_int__int__o *v17; // x19
  System_Collections_ObjectModel_Collection_T__o *Master_object; // x0
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v21; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v24; // x8
  __int64 v25; // x9
  int32_t *v26; // x10
  __int64 v27; // x0
  __int64 v28; // x0
  __int64 v29; // x21
  __int64 methodPtr_low; // x9
  Il2CppObject *v31; // x0
  ClassBoardSquareEntity_array *OtherThanNoneEntity; // x0
  System_Collections_Generic_IEnumerator_T__c *v33; // x8
  __int64 v34; // x9
  int32_t *v35; // x10
  __int64 v36; // x0

  if ( (byte_49F784C & 1) == 0 )
  {
    sub_1B640C8(&ClassBoardBaseEntity_TypeInfo, method);
    sub_1B640C8(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, v4);
    sub_1B640C8(&Method_DataManager_GetMaster_ClassBoardBaseMaster___, v5);
    sub_1B640C8(&Method_DataManager_GetMaster_ClassBoardSquareMaster___, v6);
    sub_1B640C8(&DataManager_TypeInfo, v7);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_int__int__Add__, v8);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_int__int__Clear__, v9);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_int__int___ctor__, v10);
    sub_1B640C8(&System_Collections_Generic_Dictionary_int__int__TypeInfo, v11);
    sub_1B640C8(&System_IDisposable_TypeInfo, v12);
    sub_1B640C8(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v13);
    sub_1B640C8(&System_Collections_IEnumerator_TypeInfo, v14);
    byte_49F784C = 1;
  }
  classBoardMaxDictionary = this->fields.classBoardMaxDictionary;
  p_classBoardMaxDictionary = &this->fields.classBoardMaxDictionary;
  if ( classBoardMaxDictionary )
  {
    System_Collections_Generic_Dictionary_int__int___Clear(
      classBoardMaxDictionary,
      (const MethodInfo_311B034 *)Method_System_Collections_Generic_Dictionary_int__int__Clear__);
  }
  else
  {
    v17 = (System_Collections_Generic_Dictionary_int__int__o *)sub_1B64314(
                                                                 System_Collections_Generic_Dictionary_int__int__TypeInfo,
                                                                 method,
                                                                 v2);
    System_Collections_Generic_Dictionary_int__int____ctor(
      v17,
      (const MethodInfo_311A4F0 *)Method_System_Collections_Generic_Dictionary_int__int___ctor__);
    *p_classBoardMaxDictionary = v17;
    sub_1B6406C(p_classBoardMaxDictionary);
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (System_Collections_ObjectModel_Collection_T__o *)DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_ClassBoardBaseMaster___);
  if ( !Master_object
    || (Master_object = (System_Collections_ObjectModel_Collection_T__o *)Master_object[1].monitor) == 0LL )
  {
    sub_1B64324(Master_object);
  }
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 Master_object,
                 (const MethodInfo_30710E0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_1B64324(0LL);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v21 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v21;
        p_offset += 4;
        if ( !v21 )
          goto LABEL_15;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_15:
      p_method = sub_1BB60A8(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v24 = Enumerator->klass;
    v25 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v26 = &v24->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v26 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        --v25;
        v26 += 4;
        if ( !v25 )
          goto LABEL_22;
      }
      v27 = (__int64)&v24->vtable[*v26].method;
    }
    else
    {
LABEL_22:
      v27 = sub_1BB60A8(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v28 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v27)(
            Enumerator,
            *(_QWORD *)(v27 + 8));
    v29 = v28;
    if ( v28 )
    {
      methodPtr_low = LOBYTE(ClassBoardBaseEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( *(unsigned __int8 *)(*(_QWORD *)v28 + 304LL) < (unsigned int)methodPtr_low
        || *(ClassBoardBaseEntity_c **)(*(_QWORD *)(*(_QWORD *)v28 + 200LL) + 8 * methodPtr_low - 8) != ClassBoardBaseEntity_TypeInfo )
      {
        v31 = (Il2CppObject *)sub_1B645E4(v28);
LABEL_42:
        sub_1B64324(v31);
      }
    }
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    v31 = DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_ClassBoardSquareMaster___);
    if ( !v29 )
      goto LABEL_42;
    if ( !v31 )
      sub_1B64324(0LL);
    OtherThanNoneEntity = ClassBoardSquareMaster__GetOtherThanNoneEntity(
                            (ClassBoardSquareMaster_o *)v31,
                            *(_DWORD *)(v29 + 16),
                            0LL);
    if ( OtherThanNoneEntity )
    {
      if ( !*p_classBoardMaxDictionary )
        sub_1B64324(OtherThanNoneEntity);
      System_Collections_Generic_Dictionary_int__int___Add(
        *p_classBoardMaxDictionary,
        *(_DWORD *)(v29 + 16),
        OtherThanNoneEntity->max_length,
        (const MethodInfo_311AEB4 *)Method_System_Collections_Generic_Dictionary_int__int__Add__);
    }
  }
  v33 = Enumerator->klass;
  v34 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v35 = &v33->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v35 - 1) != System_IDisposable_TypeInfo )
    {
      --v34;
      v35 += 4;
      if ( !v34 )
        goto LABEL_38;
    }
    v36 = (__int64)&v33->vtable[*v35].method;
  }
  else
  {
LABEL_38:
    v36 = sub_1BB60A8(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v36)(Enumerator, *(_QWORD *)(v36 + 8));
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

  if ( (byte_49F7834 & 1) == 0 )
  {
    sub_1B640C8(&FriendOperationItemListViewManager_CallbackFunc_TypeInfo, value);
    byte_49F7834 = 1;
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
    v8 = sub_1B9F5B8(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (FriendOperationItemListViewManager_o *)sub_1B645E4(v7);
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

  if ( (byte_49F7836 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, value);
    byte_49F7836 = 1;
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
    v8 = sub_1B9F5B8(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (FriendOperationItemListViewManager_o *)sub_1B645E4(v7);
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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  System_Collections_Generic_List_object__o *v12; // x19
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  Il2CppObject *current; // x21
  _BOOL8 v15; // x0
  Il2CppObject *Component_object; // x0
  const MethodInfo *v17; // x1
  Il2CppObject *v18; // x21
  ListViewItem_o *Item; // x0
  _BOOL8 v20; // x0
  struct System_Object_array *items; // x8
  _QWORD *v22; // x9
  __int64 size; // x10
  Il2CppClass **v24; // x0
  System_Collections_Generic_List_Enumerator_object__o v26; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v27; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_49F783C & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, method);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v4);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v5);
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_FriendOperationItemListViewObject___, v6);
    sub_1B640C8(&Method_System_Collections_Generic_List_FriendOperationItemListViewObject__Add__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v8);
    sub_1B640C8(&Method_System_Collections_Generic_List_FriendOperationItemListViewObject___ctor__, v9);
    sub_1B640C8(&System_Collections_Generic_List_FriendOperationItemListViewObject__TypeInfo, v10);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v11);
    byte_49F783C = 1;
  }
  memset(&v27, 0, sizeof(v27));
  v12 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_FriendOperationItemListViewObject__TypeInfo,
                                                       method,
                                                       v2);
  System_Collections_Generic_List_object____ctor(
    v12,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_FriendOperationItemListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_1B64324(0LL);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v26,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v27 = v26;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v27,
            (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v27.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v15 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v15 )
    {
      if ( !current )
        sub_1B64324(v15);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_FriendOperationItemListViewObject___);
      v18 = Component_object;
      if ( !Component_object )
        sub_1B64324(0LL);
      Item = (ListViewItem_o *)FriendOperationItemListViewObject__GetItem(
                                 (FriendOperationItemListViewObject_o *)Component_object,
                                 v17);
      if ( !Item )
        sub_1B64324(0LL);
      if ( Item->fields.isTermination )
      {
        v20 = ListViewManager__ClippingItem_40389508((ListViewManager_o *)this, Item, 0LL);
        if ( v20 )
        {
          if ( !v12 )
            sub_1B64324(v20);
          items = v12->fields._items;
          v22 = Method_System_Collections_Generic_List_FriendOperationItemListViewObject__Add__;
          ++v12->fields._version;
          if ( !items )
            sub_1B64324(v20);
          size = v12->fields._size;
          if ( (unsigned int)size < items->max_length )
            goto LABEL_17;
LABEL_21:
          System_Collections_Generic_List_object___AddWithResize(
            v12,
            v18,
            *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v22[4] + 192LL) + 112LL));
        }
      }
      else
      {
        if ( !v12 )
          sub_1B64324(Item);
        items = v12->fields._items;
        v22 = Method_System_Collections_Generic_List_FriendOperationItemListViewObject__Add__;
        ++v12->fields._version;
        if ( !items )
          sub_1B64324(Item);
        size = v12->fields._size;
        if ( (unsigned int)size >= items->max_length )
          goto LABEL_21;
LABEL_17:
        v24 = &items->obj.klass + size;
        v12->fields._size = size + 1;
        v24[4] = (Il2CppClass *)v18;
        sub_1B6406C(v24 + 4);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v27,
    (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_FriendOperationItemListViewObject__o *)v12;
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
  __int64 methodPtr_low; // x10

  if ( (byte_49F783D & 1) == 0 )
  {
    sub_1B640C8(&FriendOperationItemListViewItem_TypeInfo, method);
    sub_1B640C8(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v3);
    sub_1B640C8(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v4);
    byte_49F783D = 1;
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
             (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
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
      sub_1B64324(0LL);
  }
  return v8;
}


System_Collections_Generic_List_FriendOperationItemListViewObject__o *__fastcall FriendOperationItemListViewManager__get_ObjectList(
        FriendOperationItemListViewManager_o *this,
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
  System_Collections_Generic_List_object__o *v12; // x19
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  Il2CppObject *current; // x20
  _BOOL8 v15; // x0
  Il2CppObject *Component_object; // x0
  Il2CppObject *v17; // x1
  struct System_Object_array *items; // x8
  _QWORD *v19; // x9
  __int64 size; // x10
  Il2CppClass **v21; // x0
  System_Collections_Generic_List_Enumerator_object__o v23; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v24; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_49F783B & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, method);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v4);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v5);
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_FriendOperationItemListViewObject___, v6);
    sub_1B640C8(&Method_System_Collections_Generic_List_FriendOperationItemListViewObject__Add__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v8);
    sub_1B640C8(&Method_System_Collections_Generic_List_FriendOperationItemListViewObject___ctor__, v9);
    sub_1B640C8(&System_Collections_Generic_List_FriendOperationItemListViewObject__TypeInfo, v10);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v11);
    byte_49F783B = 1;
  }
  memset(&v24, 0, sizeof(v24));
  v12 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_FriendOperationItemListViewObject__TypeInfo,
                                                       method,
                                                       v2);
  System_Collections_Generic_List_object____ctor(
    v12,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_FriendOperationItemListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_1B64324(0LL);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v23,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v24 = v23;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v24,
            (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v24.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v15 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v15 )
    {
      if ( !current )
        sub_1B64324(v15);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_FriendOperationItemListViewObject___);
      v17 = Component_object;
      if ( !v12 )
        sub_1B64324(Component_object);
      items = v12->fields._items;
      v19 = Method_System_Collections_Generic_List_FriendOperationItemListViewObject__Add__;
      ++v12->fields._version;
      if ( !items )
        sub_1B64324(Component_object);
      size = v12->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v12,
          Component_object,
          *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
      }
      else
      {
        v21 = &items->obj.klass + size;
        v12->fields._size = size + 1;
        v21[4] = (Il2CppClass *)v17;
        sub_1B6406C(v21 + 4);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v24,
    (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_FriendOperationItemListViewObject__o *)v12;
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
  unsigned int Index; // w0

  callbackFunc = this->fields.callbackFunc;
  this->fields.callbackFunc = 0LL;
  v5 = sub_1B6406C(&this->fields.callbackFunc);
  if ( callbackFunc )
  {
    if ( !obj )
      sub_1B64324(v5);
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
  unsigned int Index; // w0

  callbackFunc = this->fields.callbackFunc;
  this->fields.callbackFunc = 0LL;
  v5 = sub_1B6406C(&this->fields.callbackFunc);
  if ( callbackFunc )
  {
    if ( !obj )
      sub_1B64324(v5);
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
  unsigned int Index; // w0

  callbackFunc = this->fields.callbackFunc;
  this->fields.callbackFunc = 0LL;
  v5 = sub_1B6406C(&this->fields.callbackFunc);
  if ( callbackFunc )
  {
    if ( !obj )
      sub_1B64324(v5);
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

  if ( (byte_49F7835 & 1) == 0 )
  {
    sub_1B640C8(&FriendOperationItemListViewManager_CallbackFunc_TypeInfo, value);
    byte_49F7835 = 1;
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
    v8 = sub_1B9F5B8(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (FriendOperationItemListViewManager_o *)sub_1B645E4(v7);
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

  if ( (byte_49F7837 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, value);
    byte_49F7837 = 1;
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
    v8 = sub_1B9F5B8(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (FriendOperationItemListViewManager_o *)sub_1B645E4(v7);
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
    sub_1B64324(scrollBar);
  }
  ((void (__fastcall *)(UIProgressBar_o *, void *))scrollBar->klass->vtable._7_ForceUpdate.method)(
    scrollBar,
    scrollBar->klass[1]._1.image);
}


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
    sub_1B64324(scrollBar);
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
  sub_1B6406C(&this->fields.method);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1B64188(v6) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1B64340(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1B641F0(v10, 0LL);
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
  this->fields.m_target = (Il2CppObject *)sub_19A4A40;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_19A49E8;
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
  __int64 v11[3]; // [xsp+8h] [xbp-58h] BYREF
  int32_t v12; // [xsp+28h] [xbp-38h] BYREF
  int32_t v13; // [xsp+2Ch] [xbp-34h] BYREF

  v12 = result;
  v13 = kind;
  if ( (byte_49F7850 & 1) == 0 )
  {
    sub_1B640C8(&int_TypeInfo, *(_QWORD *)&kind);
    sub_1B640C8(&FriendOperationItemListViewManager_ResultKind_TypeInfo, v9);
    byte_49F7850 = 1;
  }
  v11[2] = 0LL;
  v11[0] = j_il2cpp_value_box_0(FriendOperationItemListViewManager_ResultKind_TypeInfo, &v13);
  v11[1] = j_il2cpp_value_box_0(int_TypeInfo, &v12);
  return (System_IAsyncResult_o *)sub_1B6407C(this, v11, callback, object);
}


void __fastcall FriendOperationItemListViewManager_CallbackFunc__EndInvoke(
        FriendOperationItemListViewManager_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1B64080(result, 0LL, method);
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
  __int64 v2; // x2
  Il2CppObject *v3; // x19

  if ( (byte_49F7851 & 1) == 0 )
  {
    sub_1B640C8(&FriendOperationItemListViewManager___c_TypeInfo, v1);
    byte_49F7851 = 1;
  }
  v3 = (Il2CppObject *)sub_1B64314(FriendOperationItemListViewManager___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  FriendOperationItemListViewManager___c_TypeInfo->static_fields->__9 = (struct FriendOperationItemListViewManager___c_o *)v3;
  sub_1B6406C(FriendOperationItemListViewManager___c_TypeInfo->static_fields);
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
  __int64 methodPtr_low; // x8
  int32_t result; // w0
  FriendOperationItemListViewObject_o *v8; // x0
  System_Action_o *v9; // x1
  const MethodInfo *v10; // x2

  if ( (byte_49F7852 & 1) == 0 )
  {
    this = (FriendOperationItemListViewManager___c_o *)sub_1B640C8(&UserFriendRequestHistoryEntity_TypeInfo, a);
    byte_49F7852 = 1;
  }
  if ( !b )
LABEL_11:
    sub_1B64324(this);
  methodPtr_low = LOBYTE(UserFriendRequestHistoryEntity_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(b->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
    || (UserFriendRequestHistoryEntity_c *)b->klass->_2.typeHierarchy[methodPtr_low - 1] != UserFriendRequestHistoryEntity_TypeInfo )
  {
    this = (FriendOperationItemListViewManager___c_o *)sub_1B645E4(b);
    goto LABEL_11;
  }
  if ( !a )
    goto LABEL_11;
  if ( LOBYTE(a->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
    && (UserFriendRequestHistoryEntity_c *)a->klass->_2.typeHierarchy[methodPtr_low - 1] == UserFriendRequestHistoryEntity_TypeInfo )
  {
    return System_Int64__CompareTo_62184704((int64_t)&b[2].monitor, (int64_t)a[2].monitor, 0LL);
  }
  v8 = (FriendOperationItemListViewObject_o *)sub_1B645E4(a);
  FriendOperationItemListViewObject__add_callbackFunc(v8, v9, v10);
  return result;
}