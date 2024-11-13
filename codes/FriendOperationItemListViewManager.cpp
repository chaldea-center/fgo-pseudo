void __fastcall FriendOperationItemListViewManager___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x1
  __int64 v6; // x2
  System_Array_o *v7; // x0
  System_Array_o *v8; // x19
  struct FriendOperationItemListViewManager_StaticFields *static_fields; // x0
  System_RuntimeFieldHandle_o v10; // 0:w1.4

  if ( (byte_4B1142D & 1) == 0 )
  {
    sub_1BCA7E0(&ListViewSort_FilterKind___TypeInfo, v1, v2);
    sub_1BCA7E0(&FriendOperationItemListViewManager_TypeInfo, v3, v4);
    sub_1BCA7E0(
      &Field__PrivateImplementationDetails__CECDD0BE7FC2683E9048A1EAA2B2C479E05BE86E55C4C967D9E866EDE0AD71AB,
      v5,
      v6);
    byte_4B1142D = 1;
  }
  FriendOperationItemListViewManager_TypeInfo->static_fields->isInitSystem = 0;
  v7 = (System_Array_o *)sub_1BCA888(ListViewSort_FilterKind___TypeInfo, 9LL);
  v10.fields.value = Field__PrivateImplementationDetails__CECDD0BE7FC2683E9048A1EAA2B2C479E05BE86E55C4C967D9E866EDE0AD71AB;
  v8 = v7;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_62309300(v7, v10, 0LL);
  static_fields = FriendOperationItemListViewManager_TypeInfo->static_fields;
  static_fields->classFilter = (struct ListViewSort_FilterKind_array *)v8;
  sub_1BCA784(&static_fields->classFilter, v8);
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

  if ( (byte_4B11426 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, isResult, method);
    byte_4B11426 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1BCAA3C(0LL, v6);
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
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x1
  __int64 v31; // x2
  __int64 v32; // x1
  __int64 v33; // x2
  __int64 v34; // x1
  __int64 v35; // x2
  __int64 v36; // x1
  __int64 v37; // x2
  __int64 v38; // x1
  __int64 v39; // x2
  __int64 v40; // x1
  __int64 v41; // x2
  __int64 v42; // x1
  __int64 v43; // x2
  __int64 v44; // x1
  __int64 v45; // x2
  __int64 v46; // x1
  __int64 v47; // x2
  __int64 v48; // x1
  __int64 v49; // x2
  __int64 v50; // x1
  __int64 v51; // x2
  __int64 v52; // x1
  __int64 v53; // x2
  __int64 v54; // x1
  __int64 v55; // x2
  __int64 v56; // x1
  __int64 v57; // x2
  __int64 v58; // x1
  __int64 v59; // x2
  __int64 v60; // x1
  __int64 v61; // x2
  __int64 v62; // x1
  __int64 v63; // x2
  __int64 sort; // x0
  __int64 v65; // x1
  struct ListViewSort_array *sortStatusList; // x8
  struct ListViewSort_o *v67; // x1
  System_String_o *v68; // x29
  OtherUserGameEntity_array *FriendCodeList; // x20
  __int64 v70; // x2
  __int64 v71; // x3
  __int64 v72; // x8
  unsigned __int64 v73; // x26
  struct System_Collections_Generic_List_ListViewItem__o *v74; // x9
  int32_t v75; // w23
  OtherUserGameEntity_o *v76; // x24
  System_Collections_Generic_Dictionary_int__int__o *v77; // x25
  FriendOperationItemListViewItem_o *v78; // x21
  __int64 v79; // x8
  _QWORD *v80; // x9
  __int64 v81; // x10
  __int64 v82; // x8
  Il2CppObject *MasterData_object; // x20
  System_Collections_ObjectModel_Collection_T__o *v84; // x21
  int32_t v85; // w22
  UserBlacklistEntity_o *v86; // x23
  __int64 methodPtr_low; // x10
  __int64 v88; // x2
  __int64 v89; // x3
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x8
  OtherUserGameEntity_o *v91; // x25
  int32_t size; // w26
  System_Collections_Generic_Dictionary_int__int__o *classBoardMaxDictionary; // x27
  FriendOperationItemListViewItem_o *v94; // x24
  __int64 v95; // x8
  _QWORD *v96; // x9
  __int64 v97; // x10
  __int64 v98; // x8
  __int64 *v99; // x8
  Il2CppObject *v100; // x20
  __int64 v101; // x2
  __int64 v102; // x3
  System_Collections_Generic_IEnumerable_T__o *v103; // x22
  System_Collections_Generic_List_object__o *v104; // x21
  __int64 v105; // x2
  __int64 v106; // x3
  System_Comparison_T__o *v107; // x22
  Il2CppObject *v108; // x23
  struct FriendOperationItemListViewManager___c_StaticFields *static_fields; // x0
  __int64 v110; // x1
  int v111; // w23
  BalanceConfig_c *v112; // x0
  __int64 MaxFriendHistoryNum; // x1
  int32_t v114; // w22
  UserFriendRequestHistoryEntity_o *v115; // x23
  __int64 v116; // x10
  __int64 v117; // x2
  __int64 v118; // x3
  struct System_Collections_Generic_List_ListViewItem__o *v119; // x8
  OtherUserGameEntity_o *v120; // x25
  int32_t v121; // w26
  System_Collections_Generic_Dictionary_int__int__o *v122; // x27
  FriendOperationItemListViewItem_o *v123; // x24
  __int64 v124; // x8
  _QWORD *v125; // x9
  __int64 v126; // x10
  __int64 v127; // x8
  TblFriendMaster_o *v128; // x23
  OtherUserGameEntity_array *List; // x24
  OtherUserGameEntity_array *v130; // x23
  __int64 v131; // x2
  __int64 v132; // x3
  __int64 v133; // x8
  unsigned __int64 v134; // x29
  struct System_Collections_Generic_List_ListViewItem__o *v135; // x9
  int32_t v136; // w26
  OtherUserGameEntity_o *v137; // x27
  System_Collections_Generic_Dictionary_int__int__o *v138; // x28
  FriendOperationItemListViewItem_o *v139; // x25
  __int64 v140; // x8
  _QWORD *v141; // x9
  __int64 v142; // x10
  __int64 v143; // x8
  __int64 v144; // x8
  unsigned __int64 v145; // x29
  struct System_Collections_Generic_List_ListViewItem__o *v146; // x9
  int32_t v147; // w26
  OtherUserGameEntity_o *v148; // x27
  System_Collections_Generic_Dictionary_int__int__o *v149; // x28
  FriendOperationItemListViewItem_o *v150; // x25
  __int64 v151; // x8
  _QWORD *v152; // x9
  __int64 v153; // x10
  __int64 v154; // x8
  UILabel_o *emptyMessageLabel; // x20
  struct UIScrollView_o *scrollView; // x8
  System_String_o *v157; // [xsp+10h] [xbp-70h]

  if ( (byte_4B1141C & 1) == 0 )
  {
    sub_1BCA7E0(&BalanceConfig_TypeInfo, *(_QWORD *)&kind, *(_QWORD *)&classPos);
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, v6, v7);
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v8, v9);
    sub_1BCA7E0(&System_Comparison_DataEntityBase__TypeInfo, v10, v11);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_OtherUserGameMaster___, v12, v13);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_TblFriendMaster___, v14, v15);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserBlacklistMaster___, v16, v17);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserFriendRequestHistoryMaster___, v18, v19);
    sub_1BCA7E0(&Method_DataMasterBase_OtherUserGameMaster__OtherUserGameEntity__long__GetEntity__, v20, v21);
    sub_1BCA7E0(&FriendOperationItemListViewItem_TypeInfo, v22, v23);
    sub_1BCA7E0(&FriendOperationItemListViewManager_TypeInfo, v24, v25);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewItem__Add__, v26, v27);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_DataEntityBase__RemoveRange__, v28, v29);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_DataEntityBase__Reverse__, v30, v31);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_DataEntityBase__Sort__, v32, v33);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_DataEntityBase___ctor___76778776, v34, v35);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_DataEntityBase__get_Count__, v36, v37);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v38, v39);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_DataEntityBase__get_Item__, v40, v41);
    sub_1BCA7E0(&System_Collections_Generic_List_DataEntityBase__TypeInfo, v42, v43);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v44, v45);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v46, v47);
    sub_1BCA7E0(&Method_FriendOperationItemListViewManager___c__CreateList_b__35_0__, v48, v49);
    sub_1BCA7E0(&FriendOperationItemListViewManager___c_TypeInfo, v50, v51);
    sub_1BCA7E0(&UserBlacklistEntity_TypeInfo, v52, v53);
    sub_1BCA7E0(&UserFriendRequestHistoryEntity_TypeInfo, v54, v55);
    sub_1BCA7E0(&StringLiteral_3057/*"BLACKLIST_EMPTY_MESSAGE"*/, v56, v57);
    sub_1BCA7E0(&StringLiteral_6616/*"FRIEND_EMPTY_FRIEND_MESSAGE"*/, v58, v59);
    sub_1BCA7E0(&StringLiteral_3060/*"BLACKLIST_FRIEND_HISTORY_EMPTY_MESSAGE"*/, v60, v61);
    sub_1BCA7E0(&StringLiteral_6617/*"FRIEND_EMPTY_OFFERED_MESSAGE"*/, v62, v63);
    byte_4B1141C = 1;
  }
  if ( !FriendOperationItemListViewManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(FriendOperationItemListViewManager_TypeInfo, *(_QWORD *)&kind);
  FriendOperationItemListViewManager__CreateSorteData(classPos, *(const MethodInfo **)&kind);
  this->fields.menuKind = kind;
  sortStatusList = FriendOperationItemListViewManager_TypeInfo->static_fields->sortStatusList;
  if ( !sortStatusList )
    goto LABEL_112;
  if ( sortStatusList->max_length <= kind )
LABEL_113:
    sub_1BCAA44(sort, v65);
  v67 = sortStatusList->m_Items[kind];
  this->fields.sort = v67;
  sub_1BCA784(&this->fields.sort, v67);
  sort = (__int64)this->fields.sort;
  if ( !sort )
    goto LABEL_112;
  ListViewSort__Load((ListViewSort_o *)sort, 0LL);
  if ( kind == 8 )
  {
    sort = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !sort )
      goto LABEL_112;
    MasterData_object = DataManager__GetMasterData_object_(
                          (DataManager_o *)sort,
                          (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_OtherUserGameMaster___);
    sort = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !sort )
      goto LABEL_112;
    sort = (__int64)DataManager__GetMasterData_object_(
                      (DataManager_o *)sort,
                      (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserBlacklistMaster___);
    if ( !sort )
      goto LABEL_112;
    v84 = *(System_Collections_ObjectModel_Collection_T__o **)(sort + 32);
    ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
    if ( !v84 )
      goto LABEL_112;
    if ( System_Collections_ObjectModel_Collection_object___get_Count(
           v84,
           (const MethodInfo_314F410 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__) < 1 )
    {
LABEL_42:
      v99 = &StringLiteral_3057/*"BLACKLIST_EMPTY_MESSAGE"*/;
      goto LABEL_73;
    }
    v85 = 0;
    while ( 1 )
    {
      sort = (__int64)System_Collections_ObjectModel_Collection_object___get_Item(
                        v84,
                        v85,
                        (const MethodInfo_314F4A0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !sort )
        break;
      v86 = (UserBlacklistEntity_o *)sort;
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
                        (const MethodInfo_31B2FEC *)Method_DataMasterBase_OtherUserGameMaster__OtherUserGameEntity__long__GetEntity__);
      itemList = this->fields.itemList;
      if ( !itemList )
        break;
      v91 = (OtherUserGameEntity_o *)sort;
      size = itemList->fields._size;
      classBoardMaxDictionary = this->fields.classBoardMaxDictionary;
      v94 = (FriendOperationItemListViewItem_o *)sub_1BCAA2C(FriendOperationItemListViewItem_TypeInfo, v65, v88, v89);
      FriendOperationItemListViewItem___ctor_31451928(v94, 8, size, v91, v86, 0, classBoardMaxDictionary, 0LL);
      sort = (__int64)this->fields.itemList;
      if ( !sort )
        break;
      v95 = *(_QWORD *)(sort + 16);
      v96 = Method_System_Collections_Generic_List_ListViewItem__Add__;
      ++*(_DWORD *)(sort + 28);
      if ( !v95 )
        break;
      v97 = *(int *)(sort + 24);
      if ( (unsigned int)v97 >= *(_DWORD *)(v95 + 24) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)sort,
          (Il2CppObject *)v94,
          *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v96[4] + 192LL) + 112LL));
      }
      else
      {
        v98 = v95 + 8 * v97;
        *(_DWORD *)(sort + 24) = v97 + 1;
        *(_QWORD *)(v98 + 32) = v94;
        sub_1BCA784(v98 + 32, v94);
      }
      if ( ++v85 >= System_Collections_ObjectModel_Collection_object___get_Count(
                      v84,
                      (const MethodInfo_314F410 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__) )
        goto LABEL_42;
    }
LABEL_112:
    sub_1BCAA3C(sort, v65);
  }
  if ( kind == 7 )
  {
    sort = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !sort )
      goto LABEL_112;
    v100 = DataManager__GetMasterData_object_(
             (DataManager_o *)sort,
             (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_OtherUserGameMaster___);
    sort = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !sort )
      goto LABEL_112;
    sort = (__int64)DataManager__GetMasterData_object_(
                      (DataManager_o *)sort,
                      (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserFriendRequestHistoryMaster___);
    if ( !sort )
      goto LABEL_112;
    v103 = *(System_Collections_Generic_IEnumerable_T__o **)(sort + 32);
    v104 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                          System_Collections_Generic_List_DataEntityBase__TypeInfo,
                                                          v65,
                                                          v101,
                                                          v102);
    System_Collections_Generic_List_object____ctor_56235344(
      v104,
      v103,
      (const MethodInfo_35A1550 *)Method_System_Collections_Generic_List_DataEntityBase___ctor___76778776);
    sort = (__int64)FriendOperationItemListViewManager___c_TypeInfo;
    if ( !FriendOperationItemListViewManager___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(FriendOperationItemListViewManager___c_TypeInfo, v65);
      sort = (__int64)FriendOperationItemListViewManager___c_TypeInfo;
    }
    v107 = *(System_Comparison_T__o **)(*(_QWORD *)(sort + 184) + 8LL);
    if ( !v107 )
    {
      if ( !*(_DWORD *)(sort + 224) )
      {
        j_il2cpp_runtime_class_init_0(sort, v65);
        sort = (__int64)FriendOperationItemListViewManager___c_TypeInfo;
      }
      v108 = **(Il2CppObject ***)(sort + 184);
      v107 = (System_Comparison_T__o *)sub_1BCAA2C(System_Comparison_DataEntityBase__TypeInfo, v65, v105, v106);
      System_Comparison_object____ctor(
        v107,
        v108,
        Method_FriendOperationItemListViewManager___c__CreateList_b__35_0__,
        0LL);
      static_fields = FriendOperationItemListViewManager___c_TypeInfo->static_fields;
      static_fields->__9__35_0 = (struct System_Comparison_DataEntityBase__o *)v107;
      sort = sub_1BCA784(&static_fields->__9__35_0, v107);
    }
    if ( !v104 )
      goto LABEL_112;
    System_Collections_Generic_List_object___Sort_56244000(
      v104,
      v107,
      (const MethodInfo_35A3720 *)Method_System_Collections_Generic_List_DataEntityBase__Sort__);
    v111 = v104->fields._size;
    v112 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v110);
      v112 = BalanceConfig_TypeInfo;
    }
    MaxFriendHistoryNum = (unsigned int)v112->static_fields->MaxFriendHistoryNum;
    if ( v111 > (int)MaxFriendHistoryNum )
    {
      if ( !v112->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v112, MaxFriendHistoryNum);
        LODWORD(MaxFriendHistoryNum) = BalanceConfig_TypeInfo->static_fields->MaxFriendHistoryNum;
      }
      System_Collections_Generic_List_object___RemoveRange(
        v104,
        MaxFriendHistoryNum,
        v104->fields._size - MaxFriendHistoryNum,
        (const MethodInfo_35A34C8 *)Method_System_Collections_Generic_List_DataEntityBase__RemoveRange__);
    }
    System_Collections_Generic_List_object___Reverse(
      v104,
      (const MethodInfo_35A3588 *)Method_System_Collections_Generic_List_DataEntityBase__Reverse__);
    ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
    if ( v104->fields._size < 1 )
    {
LABEL_72:
      v99 = &StringLiteral_3060/*"BLACKLIST_FRIEND_HISTORY_EMPTY_MESSAGE"*/;
      goto LABEL_73;
    }
    v114 = 0;
    while ( 1 )
    {
      sort = (__int64)System_Collections_Generic_List_object___get_Item(
                        v104,
                        v114,
                        (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_DataEntityBase__get_Item__);
      if ( !sort )
        goto LABEL_112;
      v115 = (UserFriendRequestHistoryEntity_o *)sort;
      v116 = LOBYTE(UserFriendRequestHistoryEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( *(unsigned __int8 *)(*(_QWORD *)sort + 304LL) < (unsigned int)v116 )
        goto LABEL_112;
      if ( *(UserFriendRequestHistoryEntity_c **)(*(_QWORD *)(*(_QWORD *)sort + 200LL) + 8 * v116 - 8) != UserFriendRequestHistoryEntity_TypeInfo )
        goto LABEL_112;
      sort = UserFriendRequestHistoryEntity__getOtherUserId((UserFriendRequestHistoryEntity_o *)sort, 0LL);
      if ( !v100 )
        goto LABEL_112;
      sort = (__int64)DataMasterBase_object__object__long___GetEntity(
                        (DataMasterBase_TMaster__TEntity__PKType__o *)v100,
                        sort,
                        (const MethodInfo_31B2FEC *)Method_DataMasterBase_OtherUserGameMaster__OtherUserGameEntity__long__GetEntity__);
      v119 = this->fields.itemList;
      if ( !v119 )
        goto LABEL_112;
      v120 = (OtherUserGameEntity_o *)sort;
      v121 = v119->fields._size;
      v122 = this->fields.classBoardMaxDictionary;
      v123 = (FriendOperationItemListViewItem_o *)sub_1BCAA2C(FriendOperationItemListViewItem_TypeInfo, v65, v117, v118);
      FriendOperationItemListViewItem___ctor_31452264(v123, 7, v121, v120, v115, 0, v122, 0LL);
      sort = (__int64)this->fields.itemList;
      if ( !sort )
        goto LABEL_112;
      v124 = *(_QWORD *)(sort + 16);
      v125 = Method_System_Collections_Generic_List_ListViewItem__Add__;
      ++*(_DWORD *)(sort + 28);
      if ( !v124 )
        goto LABEL_112;
      v126 = *(int *)(sort + 24);
      if ( (unsigned int)v126 >= *(_DWORD *)(v124 + 24) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)sort,
          (Il2CppObject *)v123,
          *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v125[4] + 192LL) + 112LL));
      }
      else
      {
        v127 = v124 + 8 * v126;
        *(_DWORD *)(sort + 24) = v126 + 1;
        *(_QWORD *)(v127 + 32) = v123;
        sub_1BCA784(v127 + 32, v123);
      }
      if ( ++v114 >= v104->fields._size )
        goto LABEL_72;
    }
  }
  v68 = (System_String_o *)StringLiteral_6617/*"FRIEND_EMPTY_OFFERED_MESSAGE"*/;
  if ( !kind )
  {
    sort = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !sort )
      goto LABEL_112;
    sort = (__int64)DataManager__GetMasterData_object_(
                      (DataManager_o *)sort,
                      (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_OtherUserGameMaster___);
    if ( !sort )
      goto LABEL_112;
    FriendCodeList = OtherUserGameMaster__GetFriendCodeList((OtherUserGameMaster_o *)sort, this->fields.friendCode, 0LL);
    ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
    if ( !FriendCodeList )
      goto LABEL_112;
    v72 = *(_QWORD *)&FriendCodeList->max_length;
    if ( (int)v72 >= 1 )
    {
      v73 = 0LL;
      while ( 1 )
      {
        v74 = this->fields.itemList;
        if ( !v74 )
          goto LABEL_112;
        if ( v73 >= (unsigned int)v72 )
          goto LABEL_113;
        v75 = v74->fields._size;
        v76 = FriendCodeList->m_Items[v73];
        v77 = this->fields.classBoardMaxDictionary;
        v78 = (FriendOperationItemListViewItem_o *)sub_1BCAA2C(FriendOperationItemListViewItem_TypeInfo, v65, v70, v71);
        FriendOperationItemListViewItem___ctor_31451612(v78, 0, v75, v76, 0, v77, 0LL);
        sort = (__int64)this->fields.itemList;
        if ( !sort )
          goto LABEL_112;
        v79 = *(_QWORD *)(sort + 16);
        v80 = Method_System_Collections_Generic_List_ListViewItem__Add__;
        ++*(_DWORD *)(sort + 28);
        if ( !v79 )
          goto LABEL_112;
        v81 = *(int *)(sort + 24);
        if ( (unsigned int)v81 >= *(_DWORD *)(v79 + 24) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)sort,
            (Il2CppObject *)v78,
            *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v80[4] + 192LL) + 112LL));
        }
        else
        {
          v82 = v79 + 8 * v81;
          *(_DWORD *)(sort + 24) = v81 + 1;
          *(_QWORD *)(v82 + 32) = v78;
          sort = sub_1BCA784(v82 + 32, v78);
        }
        LODWORD(v72) = FriendCodeList->max_length;
        if ( (__int64)++v73 >= (int)v72 )
          goto LABEL_107;
      }
    }
    goto LABEL_107;
  }
  sort = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !sort )
    goto LABEL_112;
  v157 = v68;
  sort = (__int64)DataManager__GetMasterData_object_(
                    (DataManager_o *)sort,
                    (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_TblFriendMaster___);
  if ( !sort )
    goto LABEL_112;
  v128 = (TblFriendMaster_o *)sort;
  List = TblFriendMaster__GetList((TblFriendMaster_o *)sort, kind, 0LL);
  v130 = TblFriendMaster__GetList(v128, 9, 0LL);
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
  if ( kind == 3 )
  {
    if ( !v130 )
      goto LABEL_112;
    v133 = *(_QWORD *)&v130->max_length;
    if ( (int)v133 >= 1 )
    {
      v134 = 0LL;
      do
      {
        v135 = this->fields.itemList;
        if ( !v135 )
          goto LABEL_112;
        if ( v134 >= (unsigned int)v133 )
          goto LABEL_113;
        v136 = v135->fields._size;
        v137 = v130->m_Items[v134];
        v138 = this->fields.classBoardMaxDictionary;
        v139 = (FriendOperationItemListViewItem_o *)sub_1BCAA2C(
                                                      FriendOperationItemListViewItem_TypeInfo,
                                                      v65,
                                                      v131,
                                                      v132);
        FriendOperationItemListViewItem___ctor_31451612(v139, 9, v136, v137, classPos, v138, 0LL);
        sort = (__int64)this->fields.itemList;
        if ( !sort )
          goto LABEL_112;
        v140 = *(_QWORD *)(sort + 16);
        v141 = Method_System_Collections_Generic_List_ListViewItem__Add__;
        ++*(_DWORD *)(sort + 28);
        if ( !v140 )
          goto LABEL_112;
        v142 = *(int *)(sort + 24);
        if ( (unsigned int)v142 >= *(_DWORD *)(v140 + 24) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)sort,
            (Il2CppObject *)v139,
            *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v141[4] + 192LL) + 112LL));
        }
        else
        {
          v143 = v140 + 8 * v142;
          *(_DWORD *)(sort + 24) = v142 + 1;
          *(_QWORD *)(v143 + 32) = v139;
          sort = sub_1BCA784(v143 + 32, v139);
        }
        LODWORD(v133) = v130->max_length;
      }
      while ( (__int64)++v134 < (int)v133 );
    }
  }
  if ( !List )
    goto LABEL_112;
  v144 = *(_QWORD *)&List->max_length;
  if ( (int)v144 >= 1 )
  {
    v145 = 0LL;
    do
    {
      v146 = this->fields.itemList;
      if ( !v146 )
        goto LABEL_112;
      if ( v145 >= (unsigned int)v144 )
        goto LABEL_113;
      v147 = v146->fields._size;
      v148 = List->m_Items[v145];
      v149 = this->fields.classBoardMaxDictionary;
      v150 = (FriendOperationItemListViewItem_o *)sub_1BCAA2C(FriendOperationItemListViewItem_TypeInfo, v65, v131, v132);
      FriendOperationItemListViewItem___ctor_31451612(v150, kind, v147, v148, classPos, v149, 0LL);
      sort = (__int64)this->fields.itemList;
      if ( !sort )
        goto LABEL_112;
      v151 = *(_QWORD *)(sort + 16);
      v152 = Method_System_Collections_Generic_List_ListViewItem__Add__;
      ++*(_DWORD *)(sort + 28);
      if ( !v151 )
        goto LABEL_112;
      v153 = *(int *)(sort + 24);
      if ( (unsigned int)v153 >= *(_DWORD *)(v151 + 24) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)sort,
          (Il2CppObject *)v150,
          *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v152[4] + 192LL) + 112LL));
      }
      else
      {
        v154 = v151 + 8 * v153;
        *(_DWORD *)(sort + 24) = v153 + 1;
        *(_QWORD *)(v154 + 32) = v150;
        sort = sub_1BCA784(v154 + 32, v150);
      }
      v144 = *(_QWORD *)&List->max_length;
    }
    while ( (__int64)++v145 < (int)v144 );
  }
  if ( v144 )
  {
    v68 = v157;
    goto LABEL_107;
  }
  v68 = v157;
  if ( !v130 )
    goto LABEL_112;
  if ( !*(_QWORD *)&v130->max_length )
  {
    if ( kind != 2 )
    {
      if ( kind == 3 )
        v68 = (System_String_o *)StringLiteral_6616/*"FRIEND_EMPTY_FRIEND_MESSAGE"*/;
      goto LABEL_107;
    }
    v99 = &StringLiteral_6617/*"FRIEND_EMPTY_OFFERED_MESSAGE"*/;
LABEL_73:
    v68 = (System_String_o *)*v99;
  }
LABEL_107:
  emptyMessageLabel = this->fields.emptyMessageLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v65);
  sort = (__int64)LocalizationManager__Get(v68, 0LL);
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
  sub_1BCA784(&this->fields.friendCode, friendCode);
  FriendOperationItemListViewManager__CreateList(this, 0, 0, v4);
}


void __fastcall FriendOperationItemListViewManager__CreateSorteData(int32_t classPos, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  FriendOperationItemListViewManager_c *v10; // x0
  __int64 v11; // x0
  __int64 v12; // x1
  FriendOperationItemListViewManager_c *v13; // x8
  __int64 v14; // x20
  struct FriendOperationItemListViewManager_StaticFields *static_fields; // x0
  __int64 v16; // x1
  unsigned __int64 i; // x27
  FriendOperationItemListViewManager_c *v18; // x0
  struct FriendOperationItemListViewManager_StaticFields *v19; // x8
  unsigned int *sortStatusList; // x28
  System_String_o *v21; // x0
  System_String_o *v22; // x21
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x3
  ListViewSort_o *v26; // x20
  FriendOperationItemListViewManager_c *v27; // x0
  unsigned int *v28; // x0
  struct ListViewSort_array *v29; // x8
  Il2CppClass **v30; // x8
  ListViewSort_o *v31; // x20
  struct ListViewSort_FilterKind_array *v32; // x8
  __int64 j; // x21
  struct ListViewSort_FilterKind_array *classFilter; // x8
  __int64 v35; // x0
  int v36; // [xsp+Ch] [xbp-54h] BYREF

  if ( (byte_4B11416 & 1) == 0 )
  {
    sub_1BCA7E0(&FriendOperationItemListViewManager_TypeInfo, method, v2);
    sub_1BCA7E0(&ListViewSort___TypeInfo, v4, v5);
    sub_1BCA7E0(&ListViewSort_TypeInfo, v6, v7);
    sub_1BCA7E0(&StringLiteral_6967/*"FriendOperation"*/, v8, v9);
    byte_4B11416 = 1;
  }
  v10 = FriendOperationItemListViewManager_TypeInfo;
  v36 = 0;
  if ( !FriendOperationItemListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FriendOperationItemListViewManager_TypeInfo, method);
    v10 = FriendOperationItemListViewManager_TypeInfo;
  }
  if ( !v10->static_fields->isInitSystem )
  {
    v11 = sub_1BCA888(ListViewSort___TypeInfo, 10LL);
    v13 = FriendOperationItemListViewManager_TypeInfo;
    v14 = v11;
    if ( !FriendOperationItemListViewManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(FriendOperationItemListViewManager_TypeInfo, v12);
      v13 = FriendOperationItemListViewManager_TypeInfo;
    }
    static_fields = v13->static_fields;
    static_fields->sortStatusList = (struct ListViewSort_array *)v14;
    sub_1BCA784(&static_fields->sortStatusList, v14);
    for ( i = 0LL; ; ++i )
    {
      v18 = FriendOperationItemListViewManager_TypeInfo;
      if ( !FriendOperationItemListViewManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(FriendOperationItemListViewManager_TypeInfo, v16);
        v18 = FriendOperationItemListViewManager_TypeInfo;
      }
      v19 = v18->static_fields;
      if ( i == 10 )
        break;
      sortStatusList = (unsigned int *)v19->sortStatusList;
      v36 = i + 1;
      v21 = System_Int32__ToString((int32_t)&v36, 0LL);
      v22 = System_String__Concat_62401220((System_String_o *)StringLiteral_6967/*"FriendOperation"*/, v21, 0LL);
      v26 = (ListViewSort_o *)sub_1BCAA2C(ListViewSort_TypeInfo, v23, v24, v25);
      ListViewSort___ctor_41480716(v26, v22, 3, 0, 0LL);
      if ( !sortStatusList )
        goto LABEL_40;
      if ( v26 )
      {
        v27 = (FriendOperationItemListViewManager_c *)sub_1BCA91C(v26, *(_QWORD *)(*(_QWORD *)sortStatusList + 64LL));
        if ( !v27 )
        {
          v35 = sub_1BCAA60();
          sub_1BCA908(v35, 0LL);
        }
      }
      if ( i >= sortStatusList[6] )
        goto LABEL_41;
      v28 = &sortStatusList[2 * i];
      *((_QWORD *)v28 + 4) = v26;
      v27 = (FriendOperationItemListViewManager_c *)sub_1BCA784(v28 + 8, v26);
      v29 = FriendOperationItemListViewManager_TypeInfo->static_fields->sortStatusList;
      if ( !v29 )
        goto LABEL_40;
      if ( i >= v29->max_length )
LABEL_41:
        sub_1BCAA44(v27, v16);
      v30 = &v29->obj.klass + i;
      v31 = (ListViewSort_o *)v30[4];
      if ( !v31 )
        goto LABEL_40;
      ListViewSort__ClassFilterOFF((ListViewSort_o *)v30[4], 0LL);
      if ( !classPos )
      {
LABEL_29:
        for ( j = 9LL; ; ++j )
        {
          v27 = FriendOperationItemListViewManager_TypeInfo;
          if ( !FriendOperationItemListViewManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(FriendOperationItemListViewManager_TypeInfo, v16);
            v27 = FriendOperationItemListViewManager_TypeInfo;
          }
          classFilter = v27->static_fields->classFilter;
          if ( !classFilter )
            break;
          if ( j - 8 >= (int)classFilter->max_length )
            goto LABEL_28;
          if ( !v27->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v27, v16);
            classFilter = FriendOperationItemListViewManager_TypeInfo->static_fields->classFilter;
            if ( !classFilter )
              break;
          }
          if ( j - 8 >= (unsigned __int64)classFilter->max_length )
            goto LABEL_41;
          ListViewSort__SetFilter(v31, *((_DWORD *)&classFilter->obj.klass + j), 1, 0LL);
        }
LABEL_40:
        sub_1BCAA3C(v27, v16);
      }
      v27 = FriendOperationItemListViewManager_TypeInfo;
      if ( !FriendOperationItemListViewManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(FriendOperationItemListViewManager_TypeInfo, v16);
        v27 = FriendOperationItemListViewManager_TypeInfo;
      }
      v32 = v27->static_fields->classFilter;
      if ( !v32 )
        goto LABEL_40;
      if ( (signed int)v32->max_length <= classPos )
        goto LABEL_29;
      if ( !v27->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v27, v16);
        v32 = FriendOperationItemListViewManager_TypeInfo->static_fields->classFilter;
        if ( !v32 )
          goto LABEL_40;
      }
      if ( v32->max_length <= classPos )
        goto LABEL_41;
      ListViewSort__SetFilter(v31, v32->m_Items[classPos + 1], 1, 0LL);
LABEL_28:
      ;
    }
    v19->isInitSystem = 1;
  }
}


void __fastcall FriendOperationItemListViewManager__DeleteContinueData(const MethodInfo *method)
{
  const MethodInfo *v1; // x1
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x20
  FriendOperationItemListViewManager_c *v5; // x0
  struct ListViewSort_array *sortStatusList; // x8

  if ( (byte_4B11417 & 1) == 0 )
  {
    sub_1BCA7E0(&FriendOperationItemListViewManager_TypeInfo, v1, v2);
    byte_4B11417 = 1;
  }
  if ( !FriendOperationItemListViewManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(FriendOperationItemListViewManager_TypeInfo, v1);
  FriendOperationItemListViewManager__CreateSorteData(0, v1);
  v4 = 4LL;
  do
  {
    v5 = FriendOperationItemListViewManager_TypeInfo;
    if ( !FriendOperationItemListViewManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(FriendOperationItemListViewManager_TypeInfo, v3);
      v5 = FriendOperationItemListViewManager_TypeInfo;
    }
    sortStatusList = v5->static_fields->sortStatusList;
    if ( !sortStatusList )
      goto LABEL_13;
    if ( (unsigned int)(v4 - 4) >= sortStatusList->max_length )
      sub_1BCAA44(v5, v3);
    v5 = (FriendOperationItemListViewManager_c *)*((_QWORD *)&sortStatusList->obj.klass + v4);
    if ( !v5 )
LABEL_13:
      sub_1BCAA3C(v5, v3);
    ListViewSort__DeleteContinueData((ListViewSort_o *)v5, 0LL);
    ++v4;
  }
  while ( (_DWORD)v4 != 14 );
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
    sub_1BCAA3C(0LL, v3);
  ListViewSort__Save(sort, 0LL);
}


void __fastcall FriendOperationItemListViewManager__EndCloseClassBoardEffectListDialog(
        FriendOperationItemListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  Il2CppObject *Instance; // x0
  __int64 v5; // x1

  if ( (byte_4B1142C & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method, v2);
    byte_4B1142C = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1BCAA3C(0LL, v5);
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
  __int64 v6; // x2
  FriendOperationItemListViewItem_o *result; // x0
  __int64 methodPtr_low; // x10

  if ( (byte_4B1141D & 1) == 0 )
  {
    sub_1BCA7E0(&FriendOperationItemListViewItem_TypeInfo, *(_QWORD *)&index, method);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v5, v6);
    byte_4B1141D = 1;
  }
  result = (FriendOperationItemListViewItem_o *)this->fields.itemList;
  if ( result )
  {
    result = (FriendOperationItemListViewItem_o *)System_Collections_Generic_List_object___get_Item(
                                                    (System_Collections_Generic_List_object__o *)result,
                                                    index,
                                                    (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
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
  __int64 v2; // x2
  FriendOperationItemListViewManager_c *v3; // x0
  __int64 i; // x20
  struct ListViewSort_array *sortStatusList; // x8

  if ( (byte_4B11418 & 1) == 0 )
  {
    sub_1BCA7E0(&FriendOperationItemListViewManager_TypeInfo, v1, v2);
    byte_4B11418 = 1;
  }
  v3 = FriendOperationItemListViewManager_TypeInfo;
  if ( !FriendOperationItemListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FriendOperationItemListViewManager_TypeInfo, v1);
    v3 = FriendOperationItemListViewManager_TypeInfo;
  }
  if ( v3->static_fields->isInitSystem )
  {
    for ( i = 4LL; ; ++i )
    {
      if ( !v3->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v3, v1);
        v3 = FriendOperationItemListViewManager_TypeInfo;
      }
      sortStatusList = v3->static_fields->sortStatusList;
      if ( !sortStatusList )
        goto LABEL_15;
      if ( (unsigned int)(i - 4) >= sortStatusList->max_length )
        sub_1BCAA44(v3, v1);
      v3 = (FriendOperationItemListViewManager_c *)*((_QWORD *)&sortStatusList->obj.klass + i);
      if ( !v3 )
LABEL_15:
        sub_1BCAA3C(v3, v1);
      ListViewSort__InitLoad((ListViewSort_o *)v3, 0LL);
      if ( (_DWORD)i == 13 )
        break;
      v3 = FriendOperationItemListViewManager_TypeInfo;
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
  v5 = sub_1BCA784(&this->fields.callbackFunc, 0LL);
  if ( callbackFunc )
  {
    if ( !obj )
      sub_1BCAA3C(v5, v6);
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
  v5 = sub_1BCA784(&this->fields.callbackFunc, 0LL);
  if ( callbackFunc )
  {
    if ( !obj )
      sub_1BCAA3C(v5, v6);
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
  v5 = sub_1BCA784(&this->fields.callbackFunc, 0LL);
  if ( callbackFunc )
  {
    if ( !obj )
      sub_1BCAA3C(v5, v6);
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
  v5 = sub_1BCA784(&this->fields.callbackFunc, 0LL);
  if ( callbackFunc )
  {
    if ( !obj )
      sub_1BCAA3C(v5, v6);
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
  v5 = sub_1BCA784(&this->fields.callbackFunc, 0LL);
  if ( callbackFunc )
  {
    if ( !obj )
      sub_1BCAA3C(v5, v6);
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
  v5 = sub_1BCA784(&this->fields.callbackFunc, 0LL);
  if ( callbackFunc )
  {
    if ( !obj )
      sub_1BCAA3C(v5, v6);
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
  __int64 v2; // x2
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  __int64 v6; // x0
  __int64 v7; // x1
  struct ListViewSort_o *sort; // x8

  if ( (byte_4B11427 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_FriendOperationItemListViewManager_OnClickSortAscendingOrder__, method, v2);
    byte_4B11427 = 1;
  }
  if ( this->fields.isInput )
  {
    v4 = Method_FriendOperationItemListViewManager_OnClickSortAscendingOrder__;
    if ( (*((_BYTE *)Method_FriendOperationItemListViewManager_OnClickSortAscendingOrder__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1BCA7F8(Method_FriendOperationItemListViewManager_OnClickSortAscendingOrder__);
    v5 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v4, v4[4]);
    OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0LL);
    sort = this->fields.sort;
    if ( !sort )
      sub_1BCAA3C(v6, v7);
    sort->fields.isAscendingOrder ^= 1u;
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, 3, 0LL);
  }
}


void __fastcall FriendOperationItemListViewManager__OnClickSortKind(
        FriendOperationItemListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  _QWORD *v10; // x0
  System_Reflection_MethodBase_o *v11; // x0
  int32_t menuKind; // w8
  Il2CppObject *v13; // x0
  ListViewSort_o *sort; // x20
  CommonUI_o *v15; // x21
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x3
  OtherUserSortDialog_CallbackFunc_o *v19; // x22
  __int64 v20; // x0
  __int64 v21; // x1
  int32_t v22; // w1
  Il2CppObject *Instance; // x0
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x3

  if ( (byte_4B11425 & 1) == 0 )
  {
    sub_1BCA7E0(&OtherUserSortDialog_CallbackFunc_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_FriendOperationItemListViewManager_CloseSortDialog__, v4, v5);
    sub_1BCA7E0(&Method_FriendOperationItemListViewManager_OnClickSortKind__, v6, v7);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v8, v9);
    byte_4B11425 = 1;
  }
  if ( this->fields.isInput )
  {
    v10 = Method_FriendOperationItemListViewManager_OnClickSortKind__;
    if ( (*((_BYTE *)Method_FriendOperationItemListViewManager_OnClickSortKind__ + 83) & 2) != 0 )
      v10 = (_QWORD *)sub_1BCA7F8(Method_FriendOperationItemListViewManager_OnClickSortKind__);
    v11 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v10, v10[4]);
    OverwriteAssetSoundName__PlaySystemSe(v11, 0, 0LL);
    menuKind = this->fields.menuKind;
    if ( menuKind == 2 )
    {
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      sort = this->fields.sort;
      v15 = (CommonUI_o *)Instance;
      v19 = (OtherUserSortDialog_CallbackFunc_o *)sub_1BCAA2C(OtherUserSortDialog_CallbackFunc_TypeInfo, v24, v25, v26);
      OtherUserSortDialog_CallbackFunc___ctor(
        v19,
        (Il2CppObject *)this,
        Method_FriendOperationItemListViewManager_CloseSortDialog__,
        0LL);
      if ( v15 )
      {
        v22 = 2;
        goto LABEL_13;
      }
LABEL_14:
      sub_1BCAA3C(v20, v21);
    }
    if ( menuKind == 3 )
    {
      v13 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      sort = this->fields.sort;
      v15 = (CommonUI_o *)v13;
      v19 = (OtherUserSortDialog_CallbackFunc_o *)sub_1BCAA2C(OtherUserSortDialog_CallbackFunc_TypeInfo, v16, v17, v18);
      OtherUserSortDialog_CallbackFunc___ctor(
        v19,
        (Il2CppObject *)this,
        Method_FriendOperationItemListViewManager_CloseSortDialog__,
        0LL);
      if ( v15 )
      {
        v22 = 1;
LABEL_13:
        CommonUI__OpenOtherUserSortDialog(v15, v22, sort, v19, 0LL);
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
  v5 = sub_1BCA784(&this->fields.callbackFunc, 0LL);
  if ( callbackFunc )
  {
    if ( !obj )
      sub_1BCAA3C(v5, v6);
    Index = ListViewObject__get_Index(obj, 0LL);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD, _QWORD))callbackFunc->fields.m_target)(
      callbackFunc->fields.original_method_info,
      12LL,
      Index,
      *(_QWORD *)&callbackFunc->fields.extra_arg);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FriendOperationItemListViewManager__OnLongPushSkill(
        FriendOperationItemListViewManager_o *this,
        ListViewObject_o *obj,
        int32_t kind,
        const MethodInfo *method)
{
  UIScrollView_o *scrollView; // x0
  struct FriendOperationItemListViewManager_CallbackFunc_o *callbackFunc; // x22
  unsigned int Index; // w0

  if ( (byte_4B11424 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_12707/*"ScrollViewEnabled"*/, obj, *(_QWORD *)&kind);
    byte_4B11424 = 1;
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
      (System_String_o *)StringLiteral_12707/*"ScrollViewEnabled"*/,
      0.1,
      0LL);
    callbackFunc = this->fields.callbackFunc;
    this->fields.callbackFunc = 0LL;
    scrollView = (UIScrollView_o *)sub_1BCA784(&this->fields.callbackFunc, 0LL);
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
      sub_1BCAA3C(scrollView, obj);
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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  int32_t callbackCount; // w8
  bool v7; // vf
  int32_t v8; // w8
  UnityEngine_GameObject_o *emptyMessageBase; // x0
  __int64 v10; // x1
  struct System_Collections_Generic_List_ListViewItem__o *itemSortList; // x8
  UnityEngine_Object_o *scrollView; // x20
  struct System_Action_o *callbackFunc2; // x20

  if ( (byte_4B11423 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, method, v2);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v4, v5);
    byte_4B11423 = 1;
  }
  callbackCount = this->fields.callbackCount;
  v7 = __OFSUB__(callbackCount, 1);
  v8 = callbackCount - 1;
  if ( v8 < 0 == v7 )
  {
    this->fields.callbackCount = v8;
    if ( !v8 )
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
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v10);
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
          sub_1BCA784(&this->fields.callbackFunc2, 0LL);
          if ( callbackFunc2 )
            ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))callbackFunc2->fields.m_target)(
              callbackFunc2->fields.original_method_info,
              *(_QWORD *)&callbackFunc2->fields.extra_arg);
          return;
        }
      }
LABEL_18:
      sub_1BCAA3C(emptyMessageBase, v10);
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
  System_Collections_Generic_List_object__o *itemList; // x21
  int32_t Index; // w0
  Il2CppObject *Item; // x0
  FriendOperationItemListViewItem_o *v30; // x20
  __int64 methodPtr_low; // x10
  _QWORD *v32; // x0
  System_Reflection_MethodBase_o *v33; // x0
  __int64 v34; // x1
  Il2CppObject *Master_object; // x21
  int32_t scrollView; // w22
  __int64 v37; // x2
  __int64 v38; // x3
  struct OtherUserGameEntity_o *otherUserGameEntity; // x8
  struct ClassBoardInfo_array *userClassBoardInfo; // x23
  int max_length; // w8
  int32_t v42; // w20
  unsigned int v43; // w24
  ClassBoardInfo_o *v44; // x21
  long double inited; // q0
  _QWORD *v46; // x22
  __int64 v47; // x8
  __int64 v48; // x0
  __int64 v49; // x0
  struct System_Int32_array **v50; // x8
  struct System_Int32_array *v51; // x1
  __int64 v52; // x1
  long double v53; // q0
  _QWORD *v54; // x22
  __int64 v55; // x8
  __int64 v56; // x0
  __int64 v57; // x0
  struct System_Int32_array **v58; // x8
  struct System_Int32_array *v59; // x1
  Il2CppObject *Instance; // x22
  __int64 v61; // x1
  __int64 v62; // x2
  __int64 v63; // x3
  System_Action_o *v64; // x23

  v4 = this;
  if ( (byte_4B1142B & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, obj, method);
    sub_1BCA7E0(&Method_System_Array_Empty_int___, v5, v6);
    sub_1BCA7E0(&ClassBoardInfo_TypeInfo, v7, v8);
    sub_1BCA7E0(&Method_DataManager_GetMaster_ClassBoardClassMaster___, v9, v10);
    sub_1BCA7E0(&Method_DataManager_GetMaster_ServantMaster___, v11, v12);
    sub_1BCA7E0(&DataManager_TypeInfo, v13, v14);
    sub_1BCA7E0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v15, v16);
    sub_1BCA7E0(&FriendOperationItemListViewItem_TypeInfo, v17, v18);
    sub_1BCA7E0(&Method_FriendOperationItemListViewManager_EndCloseClassBoardEffectListDialog__, v19, v20);
    sub_1BCA7E0(&Method_FriendOperationItemListViewManager_OpenSupportClassBoard__, v21, v22);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v23, v24);
    this = (FriendOperationItemListViewManager_o *)sub_1BCA7E0(
                                                     &Method_SingletonMonoBehaviour_CommonUI__get_Instance__,
                                                     v25,
                                                     v26);
    byte_4B1142B = 1;
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
                 (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
        if ( !Item )
          return;
        v30 = (FriendOperationItemListViewItem_o *)Item;
        methodPtr_low = LOBYTE(FriendOperationItemListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(Item->klass->vtable[0].methodPtr) < (unsigned int)methodPtr_low
          || (FriendOperationItemListViewItem_c *)Item->klass->_2.typeHierarchy[methodPtr_low - 1] != FriendOperationItemListViewItem_TypeInfo )
        {
          return;
        }
        v4->fields.isInput = 0;
        v32 = Method_FriendOperationItemListViewManager_OpenSupportClassBoard__;
        if ( (*((_BYTE *)Method_FriendOperationItemListViewManager_OpenSupportClassBoard__ + 83) & 2) != 0 )
          v32 = (_QWORD *)sub_1BCA7F8(Method_FriendOperationItemListViewManager_OpenSupportClassBoard__);
        v33 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v32, v32[4]);
        OverwriteAssetSoundName__PlaySystemSe(v33, 0, 0LL);
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v34);
        Master_object = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_ServantMaster___);
        this = (FriendOperationItemListViewManager_o *)FriendOperationItemListViewItem__get_SvtId(v30, 0LL);
        if ( Master_object )
        {
          this = (FriendOperationItemListViewManager_o *)DataMasterBase_object__object__int___GetEntity(
                                                           (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                                           (int32_t)this,
                                                           (const MethodInfo_31B2E40 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
          if ( this )
          {
            scrollView = (int32_t)this->fields.scrollView;
            this = (FriendOperationItemListViewManager_o *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_ClassBoardClassMaster___);
            if ( this )
            {
              this = (FriendOperationItemListViewManager_o *)ClassBoardClassMaster__GetClassBoardBaseId(
                                                               (ClassBoardClassMaster_o *)this,
                                                               scrollView,
                                                               0LL);
              otherUserGameEntity = v30->fields.otherUserGameEntity;
              if ( otherUserGameEntity )
              {
                userClassBoardInfo = otherUserGameEntity->fields.userClassBoardInfo;
                if ( userClassBoardInfo )
                {
                  max_length = userClassBoardInfo->max_length;
                  v42 = (int)this;
                  if ( max_length < 1 )
                  {
LABEL_26:
                    v44 = (ClassBoardInfo_o *)sub_1BCAA2C(ClassBoardInfo_TypeInfo, obj, v37, v38);
                    ClassBoardInfo___ctor(v44, 0LL);
                    if ( v44 )
                    {
                      v44->fields.classBoardBaseId = v42;
                      v46 = Method_System_Array_Empty_int___;
                      v47 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
                      if ( !v47 )
                      {
                        sub_1C1C718(Method_System_Array_Empty_int___, obj);
                        v47 = v46[7];
                      }
                      v48 = *(_QWORD *)(v47 + 16);
                      if ( (*(_BYTE *)(v48 + 309) & 1) == 0 )
                        v48 = sub_1C1C6BC(inited);
                      if ( !*(_DWORD *)(v48 + 224) )
                        inited = j_il2cpp_runtime_class_init_0(v48, obj);
                      v49 = *(_QWORD *)(v46[7] + 16LL);
                      if ( (*(_BYTE *)(v49 + 309) & 1) == 0 )
                        v49 = sub_1C1C6BC(inited);
                      v50 = *(struct System_Int32_array ***)(v49 + 184);
                      v51 = *v50;
                      v44->fields.squareIds = *v50;
                      sub_1BCA784(&v44->fields.squareIds, v51);
                      v54 = Method_System_Array_Empty_int___;
                      v55 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
                      if ( !v55 )
                      {
                        sub_1C1C718(Method_System_Array_Empty_int___, v52);
                        v55 = v54[7];
                      }
                      v56 = *(_QWORD *)(v55 + 16);
                      if ( (*(_BYTE *)(v56 + 309) & 1) == 0 )
                        v56 = sub_1C1C6BC(v53);
                      if ( !*(_DWORD *)(v56 + 224) )
                        v53 = j_il2cpp_runtime_class_init_0(v56, v52);
                      v57 = *(_QWORD *)(v54[7] + 16LL);
                      if ( (*(_BYTE *)(v57 + 309) & 1) == 0 )
                        v57 = sub_1C1C6BC(v53);
                      v58 = *(struct System_Int32_array ***)(v57 + 184);
                      v59 = *v58;
                      v44->fields.releasedClassIds = *v58;
                      sub_1BCA784(&v44->fields.releasedClassIds, v59);
LABEL_44:
                      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                      v64 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v61, v62, v63);
                      System_Action___ctor(
                        v64,
                        (Il2CppObject *)v4,
                        Method_FriendOperationItemListViewManager_EndCloseClassBoardEffectListDialog__,
                        0LL);
                      if ( Instance )
                      {
                        CommonUI__OpenClassBoardEffectListDialog((CommonUI_o *)Instance, 1, v42, 0, v64, 1, v44, 0LL);
                        return;
                      }
                    }
                  }
                  else
                  {
                    v43 = 0;
                    while ( 1 )
                    {
                      if ( v43 >= max_length )
                        sub_1BCAA44(this, obj);
                      v44 = userClassBoardInfo->m_Items[v43];
                      if ( !v44 )
                        break;
                      if ( v44->fields.classBoardBaseId == v42 )
                      {
                        this = (FriendOperationItemListViewManager_o *)ClassBoardInfo__IsReleasedClassId(
                                                                         v44,
                                                                         scrollView,
                                                                         0LL);
                        if ( ((unsigned __int8)this & 1) != 0 )
                          goto LABEL_44;
                      }
                      max_length = userClassBoardInfo->max_length;
                      if ( (int)++v43 >= max_length )
                        goto LABEL_26;
                    }
                  }
                }
              }
            }
          }
        }
      }
      sub_1BCAA3C(this, obj);
    }
  }
}


void __fastcall FriendOperationItemListViewManager__RequestInto(
        FriendOperationItemListViewManager_o *this,
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
  const MethodInfo *v12; // x1
  System_Collections_Generic_List_FriendOperationItemListViewObject__o *ObjectList; // x0
  __int64 v14; // x1
  int32_t size; // w8
  System_Collections_Generic_List_object__o *v16; // x20
  int v17; // w24
  int32_t v18; // w21
  Il2CppObject *Item; // x22
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x3
  System_Action_o *v23; // x23
  const MethodInfo *v24; // x3

  if ( (byte_4B11422 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_FriendOperationItemListViewManager_OnMoveEnd__, v4, v5);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_FriendOperationItemListViewObject__get_Count__, v6, v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_FriendOperationItemListViewObject__get_Item__, v8, v9);
    sub_1BCA7E0(&StringLiteral_10069/*"OnMoveEnd"*/, v10, v11);
    byte_4B11422 = 1;
  }
  ListViewManager__ClippingItems((ListViewManager_o *)this, 1, 0, 0LL);
  ListViewManager__DragMaskStart((ListViewManager_o *)this, 0LL);
  ObjectList = FriendOperationItemListViewManager__get_ObjectList(this, v12);
  if ( !ObjectList )
LABEL_13:
    sub_1BCAA3C(ObjectList, v14);
  size = ObjectList->fields._size;
  v16 = (System_Collections_Generic_List_object__o *)ObjectList;
  this->fields.callbackCount = size;
  if ( size < 1 )
    goto LABEL_12;
  v17 = 0;
  v18 = 0;
  do
  {
    Item = System_Collections_Generic_List_object___get_Item(
             v16,
             v18,
             (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_FriendOperationItemListViewObject__get_Item__);
    if ( ListViewManager__ClippingItem((ListViewManager_o *)this, (ListViewObject_o *)Item, 0LL) )
    {
      v23 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v20, v21, v22);
      System_Action___ctor(v23, (Il2CppObject *)this, Method_FriendOperationItemListViewManager_OnMoveEnd__, 0LL);
      if ( !Item )
        goto LABEL_13;
      ++v17;
      FriendOperationItemListViewObject__Init_31476852((FriendOperationItemListViewObject_o *)Item, 4, v23, 0.1, v24);
    }
    else
    {
      --this->fields.callbackCount;
    }
    ++v18;
  }
  while ( v18 < v16->fields._size );
  if ( !v17 )
  {
LABEL_12:
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10069/*"OnMoveEnd"*/,
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

  if ( (byte_4B11420 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, *(_QWORD *)&mode, method);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_FriendOperationItemListViewObject__Dispose__, v7, v8);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_Enumerator_FriendOperationItemListViewObject__MoveNext__,
      v9,
      v10);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_Enumerator_FriendOperationItemListViewObject__get_Current__,
      v11,
      v12);
    sub_1BCA7E0(&Method_FriendOperationItemListViewManager_OnMoveEnd__, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_FriendOperationItemListViewObject__GetEnumerator__, v15, v16);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_FriendOperationItemListViewObject__get_Count__, v17, v18);
    sub_1BCA7E0(&StringLiteral_10069/*"OnMoveEnd"*/, v19, v20);
    byte_4B11420 = 1;
  }
  memset(&v32, 0, sizeof(v32));
  ObjectList = (System_Collections_Generic_List_object__o *)FriendOperationItemListViewManager__get_ObjectList(
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
      (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_FriendOperationItemListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v32,
              (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_FriendOperationItemListViewObject__MoveNext__) )
    {
      current = v32.fields._current;
      v28 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v24, v25, v26);
      System_Action___ctor(v28, (Il2CppObject *)this, Method_FriendOperationItemListViewManager_OnMoveEnd__, 0LL);
      if ( !current )
        sub_1BCAA3C(v29, v30);
      FriendOperationItemListViewObject__Init_31476852(
        (FriendOperationItemListViewObject_o *)current,
        mode,
        v28,
        delay,
        v31);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v32,
      (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_FriendOperationItemListViewObject__Dispose__);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FriendOperationItemListViewManager__RequestListObject_31476952(
        FriendOperationItemListViewManager_o *this,
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

  if ( (byte_4B11421 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, *(_QWORD *)&mode, method);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_FriendOperationItemListViewObject__Dispose__, v5, v6);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_Enumerator_FriendOperationItemListViewObject__MoveNext__,
      v7,
      v8);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_Enumerator_FriendOperationItemListViewObject__get_Current__,
      v9,
      v10);
    sub_1BCA7E0(&Method_FriendOperationItemListViewManager_OnMoveEnd__, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_FriendOperationItemListViewObject__GetEnumerator__, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_FriendOperationItemListViewObject__get_Count__, v15, v16);
    sub_1BCA7E0(&StringLiteral_10069/*"OnMoveEnd"*/, v17, v18);
    byte_4B11421 = 1;
  }
  memset(&v30, 0, sizeof(v30));
  ObjectList = (System_Collections_Generic_List_object__o *)FriendOperationItemListViewManager__get_ObjectList(
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
      (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_FriendOperationItemListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v30,
              (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_FriendOperationItemListViewObject__MoveNext__) )
    {
      current = v30.fields._current;
      v26 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v22, v23, v24);
      System_Action___ctor(v26, (Il2CppObject *)this, Method_FriendOperationItemListViewManager_OnMoveEnd__, 0LL);
      if ( !current )
        sub_1BCAA3C(v27, v28);
      FriendOperationItemListViewObject__Init_31477980((FriendOperationItemListViewObject_o *)current, mode, v26, v29);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v30,
      (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_FriendOperationItemListViewObject__Dispose__);
  }
}


void __fastcall FriendOperationItemListViewManager__ScrollViewEnabled(
        FriendOperationItemListViewManager_o *this,
        const MethodInfo *method)
{
  UnityEngine_Behaviour_o *scrollView; // x0

  scrollView = (UnityEngine_Behaviour_o *)this->fields.scrollView;
  if ( !scrollView )
    sub_1BCAA3C(0LL, method);
  UnityEngine_Behaviour__set_enabled(scrollView, 1, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FriendOperationItemListViewManager__SetClassId(
        FriendOperationItemListViewManager_o *this,
        int32_t classPos,
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
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x0
  __int64 methodPtr_low; // x10
  __int64 v19; // x1
  System_Collections_Generic_List_object__o *itemSortList; // x0
  struct ListViewSort_o *sort; // x8
  __int64 v22; // x1
  const MethodInfo *v23; // x2
  int size; // w8
  System_Collections_Generic_List_Enumerator_object__o v25; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o i; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4B11429 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__,
      *(_QWORD *)&classPos,
      method);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v7, v8);
    sub_1BCA7E0(&FriendOperationItemListViewItem_TypeInfo, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v15, v16);
    byte_4B11429 = 1;
  }
  memset(&i, 0, sizeof(i));
  itemList = this->fields.itemList;
  if ( itemList )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v25,
      (System_Collections_Generic_List_object__o *)itemList,
      (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    i = v25;
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &i,
              (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__) )
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
      (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
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
          (System_Collections_Generic_List_Enumerator_T__o *)&v25,
          itemSortList,
          (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
        for ( i = v25;
              System_Collections_Generic_List_Enumerator_object___MoveNext(
                &i,
                (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
              ((void (*)(void))i.fields._current->klass->vtable[4].method)() )
        {
          if ( !i.fields._current )
            sub_1BCAA3C(0LL, v22);
        }
        System_Collections_Generic_List_Enumerator_object___Dispose(
          &i,
          (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
        itemSortList = (System_Collections_Generic_List_object__o *)this->fields.itemSortList;
        if ( itemSortList )
        {
          if ( itemSortList->fields._size < 1 )
            goto LABEL_29;
          itemSortList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                        itemSortList,
                                                                        0,
                                                                        (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
          if ( !itemSortList )
            goto LABEL_31;
          LOBYTE(itemSortList[2].monitor) = 1;
          itemSortList = (System_Collections_Generic_List_object__o *)this->fields.itemSortList;
          if ( !itemSortList )
            goto LABEL_31;
          itemSortList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                        itemSortList,
                                                                        itemSortList->fields._size - 1,
                                                                        (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
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
            FriendOperationItemListViewManager__SetMode_31475908(this, 5, v23);
            return;
          }
          itemSortList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                        itemSortList,
                                                                        size - 1,
                                                                        (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
          if ( itemSortList )
          {
            BYTE1(itemSortList[2].monitor) = 1;
            goto LABEL_29;
          }
        }
      }
LABEL_31:
      sub_1BCAA3C(itemSortList, v19);
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
  sub_1BCA784(&this->fields.callbackFunc, callback);
  FriendOperationItemListViewManager__SetMode_31475908(this, mode, v6);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FriendOperationItemListViewManager__SetMode_31475908(
        FriendOperationItemListViewManager_o *this,
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
  void *emptyMessageBase; // x0
  __int64 v16; // x1
  int32_t v17; // w8
  System_Collections_Generic_List_object__o *v18; // x20
  int32_t v19; // w21
  Il2CppObject *v20; // x22
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x3
  System_Action_o *v24; // x23
  const MethodInfo *v25; // x3
  const MethodInfo *v26; // x2
  int v27; // s0
  System_String_o *v28; // x1
  const MethodInfo *v29; // x1
  int32_t v30; // w8
  System_Collections_Generic_List_object__o *v31; // x20
  int32_t v32; // w21
  Il2CppObject *Item; // x22
  __int64 v34; // x1
  __int64 v35; // x2
  __int64 v36; // x3
  System_Action_o *v37; // x23
  const MethodInfo *v38; // x3
  const MethodInfo *v39; // x1
  int32_t v40; // w8
  System_Collections_Generic_List_object__o *v41; // x20
  int32_t v42; // w21
  Il2CppObject *v43; // x22
  __int64 v44; // x1
  __int64 v45; // x2
  __int64 v46; // x3
  System_Action_o *v47; // x23
  const MethodInfo *v48; // x3

  if ( (byte_4B1141F & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, *(_QWORD *)&mode, method);
    sub_1BCA7E0(&Method_FriendOperationItemListViewManager_OnMoveEnd__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_FriendOperationItemListViewObject__get_Count__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_FriendOperationItemListViewObject__get_Item__, v9, v10);
    sub_1BCA7E0(&StringLiteral_10069/*"OnMoveEnd"*/, v11, v12);
    sub_1BCA7E0(&StringLiteral_11448/*"RequestInto"*/, v13, v14);
    byte_4B1141F = 1;
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
        v27 = 0;
        v28 = (System_String_o *)StringLiteral_11448/*"RequestInto"*/;
        goto LABEL_27;
      case 2:
        FriendOperationItemListViewManager__RequestListObject_31476952(this, 3, v26);
        return;
      case 3:
        ListViewManager__DragMaskStart((ListViewManager_o *)this, 0LL);
        emptyMessageBase = FriendOperationItemListViewManager__get_ClippingObjectList(this, v29);
        if ( !emptyMessageBase )
          goto LABEL_28;
        v30 = *((_DWORD *)emptyMessageBase + 6);
        v31 = (System_Collections_Generic_List_object__o *)emptyMessageBase;
        if ( v30 < 1 )
          goto LABEL_26;
        this->fields.callbackCount = v30;
        v32 = 0;
        while ( 1 )
        {
          Item = System_Collections_Generic_List_object___get_Item(
                   v31,
                   v32,
                   (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_FriendOperationItemListViewObject__get_Item__);
          v37 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v34, v35, v36);
          System_Action___ctor(v37, (Il2CppObject *)this, Method_FriendOperationItemListViewManager_OnMoveEnd__, 0LL);
          if ( !Item )
            break;
          FriendOperationItemListViewObject__Init_31476852(
            (FriendOperationItemListViewObject_o *)Item,
            5,
            v37,
            0.1,
            v38);
          if ( ++v32 >= v31->fields._size )
            return;
        }
        goto LABEL_28;
      case 4:
        ListViewManager__DragMaskStart((ListViewManager_o *)this, 0LL);
        emptyMessageBase = FriendOperationItemListViewManager__get_ClippingObjectList(this, v39);
        if ( !emptyMessageBase )
          goto LABEL_28;
        v40 = *((_DWORD *)emptyMessageBase + 6);
        v41 = (System_Collections_Generic_List_object__o *)emptyMessageBase;
        if ( v40 < 1 )
          goto LABEL_26;
        this->fields.callbackCount = v40;
        v42 = 0;
        break;
      default:
        return;
    }
    while ( 1 )
    {
      v43 = System_Collections_Generic_List_object___get_Item(
              v41,
              v42,
              (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_FriendOperationItemListViewObject__get_Item__);
      v47 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v44, v45, v46);
      System_Action___ctor(v47, (Il2CppObject *)this, Method_FriendOperationItemListViewManager_OnMoveEnd__, 0LL);
      if ( !v43 )
        break;
      FriendOperationItemListViewObject__Init_31476852((FriendOperationItemListViewObject_o *)v43, 6, v47, 0.1, v48);
      if ( ++v42 >= v41->fields._size )
        return;
    }
LABEL_28:
    sub_1BCAA3C(emptyMessageBase, v16);
  }
  emptyMessageBase = FriendOperationItemListViewManager__get_ObjectList(this, *(const MethodInfo **)&mode);
  if ( !emptyMessageBase )
    goto LABEL_28;
  v17 = *((_DWORD *)emptyMessageBase + 6);
  v18 = (System_Collections_Generic_List_object__o *)emptyMessageBase;
  if ( v17 >= 1 )
  {
    this->fields.callbackCount = v17;
    v19 = 0;
    while ( 1 )
    {
      v20 = System_Collections_Generic_List_object___get_Item(
              v18,
              v19,
              (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_FriendOperationItemListViewObject__get_Item__);
      v24 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v21, v22, v23);
      System_Action___ctor(v24, (Il2CppObject *)this, Method_FriendOperationItemListViewManager_OnMoveEnd__, 0LL);
      if ( !v20 )
        break;
      FriendOperationItemListViewObject__Init_31476852((FriendOperationItemListViewObject_o *)v20, 7, v24, 0.1, v25);
      if ( ++v19 >= v18->fields._size )
        return;
    }
    goto LABEL_28;
  }
LABEL_26:
  this->fields.callbackCount = 1;
  v28 = (System_String_o *)StringLiteral_10069/*"OnMoveEnd"*/;
  v27 = 1045220557;
LABEL_27:
  UnityEngine_MonoBehaviour__Invoke((UnityEngine_MonoBehaviour_o *)this, v28, *(float *)&v27, 0LL);
}


void __fastcall FriendOperationItemListViewManager__SetMode_31476800(
        FriendOperationItemListViewManager_o *this,
        int32_t mode,
        System_Action_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v6; // x2

  this->fields.callbackFunc2 = callback;
  sub_1BCA784(&this->fields.callbackFunc2, callback);
  FriendOperationItemListViewManager__SetMode_31475908(this, mode, v6);
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
  if ( (byte_4B1141E & 1) == 0 )
  {
    this = (FriendOperationItemListViewManager_o *)sub_1BCA7E0(&FriendOperationItemListViewObject_TypeInfo, obj, item);
    byte_4B1141E = 1;
  }
  if ( !obj
    || (methodPtr_low = LOBYTE(FriendOperationItemListViewObject_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(obj->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low)
    || (FriendOperationItemListViewObject_c *)obj->klass->_2.typeHierarchy[methodPtr_low - 1] != FriendOperationItemListViewObject_TypeInfo )
  {
    sub_1BCAA3C(this, obj);
  }
  if ( v5->fields.initMode == 2 )
    v7 = 3;
  else
    v7 = 2;
  FriendOperationItemListViewObject__Init_31475780(
    (FriendOperationItemListViewObject_o *)obj,
    v7,
    (const MethodInfo *)item);
}


void __fastcall FriendOperationItemListViewManager__SetSortButtonImage(
        FriendOperationItemListViewManager_o *this,
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
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  UnityEngine_Object_o *sortKindLabel; // x20
  __int64 v17; // x1
  ListViewSort_o *sort; // x0
  UILabel_o *v19; // x20
  UnityEngine_Object_o *sortOrderSprite; // x20
  struct ListViewSort_o *v21; // x8
  int32_t sortKind; // w9
  System_String_o **v23; // x8
  struct ListViewSort_o *v24; // x8
  System_String_o **v25; // x9
  System_String_o **v26; // x10
  System_String_o **v27; // x8
  System_String_o **v28; // x8

  if ( (byte_4B11428 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    sub_1BCA7E0(&StringLiteral_17718/*"btn_sort_up"*/, v4, v5);
    sub_1BCA7E0(&StringLiteral_17806/*"btn_txt_up"*/, v6, v7);
    sub_1BCA7E0(&StringLiteral_17761/*"btn_txt_new"*/, v8, v9);
    sub_1BCA7E0(&StringLiteral_17751/*"btn_txt_down"*/, v10, v11);
    sub_1BCA7E0(&StringLiteral_17768/*"btn_txt_old"*/, v12, v13);
    sub_1BCA7E0(&StringLiteral_17715/*"btn_sort_down"*/, v14, v15);
    byte_4B11428 = 1;
  }
  sortKindLabel = (UnityEngine_Object_o *)this->fields.sortKindLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Inequality(sortKindLabel, 0LL, 0LL) )
  {
    sort = this->fields.sort;
    if ( !sort )
      goto LABEL_36;
    v19 = this->fields.sortKindLabel;
    sort = (ListViewSort_o *)ListViewSort__GetSortKindButtonText(sort, 0, 0LL);
    if ( !v19 )
      goto LABEL_36;
    UILabel__set_text(v19, (System_String_o *)sort, 0LL);
  }
  sortOrderSprite = (UnityEngine_Object_o *)this->fields.sortOrderSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v17);
  sort = (ListViewSort_o *)UnityEngine_Object__op_Inequality(sortOrderSprite, 0LL, 0LL);
  if ( ((unsigned __int8)sort & 1) != 0 )
  {
    v21 = this->fields.sort;
    if ( !v21 )
      goto LABEL_36;
    sortKind = v21->fields.sortKind;
    if ( sortKind == 1 || sortKind == 11 || (unsigned int)(sortKind - 17) <= 1 )
    {
      sort = (ListViewSort_o *)this->fields.sortExplanationSprite;
      if ( !sort )
        goto LABEL_36;
      v23 = (System_String_o **)(v21->fields.isAscendingOrder ? &StringLiteral_17768/*"btn_txt_old"*/ : &StringLiteral_17761/*"btn_txt_new"*/);
      UISprite__set_spriteName((UISprite_o *)sort, *v23, 0LL);
      v24 = this->fields.sort;
      if ( !v24 )
        goto LABEL_36;
      sort = (ListViewSort_o *)this->fields.sortOrderSprite;
      if ( !sort )
        goto LABEL_36;
      v25 = (System_String_o **)&StringLiteral_17715/*"btn_sort_down"*/;
      v26 = (System_String_o **)&StringLiteral_17718/*"btn_sort_up"*/;
    }
    else
    {
      sort = (ListViewSort_o *)this->fields.sortExplanationSprite;
      if ( !sort )
        goto LABEL_36;
      v28 = (System_String_o **)(v21->fields.isAscendingOrder ? &StringLiteral_17806/*"btn_txt_up"*/ : &StringLiteral_17751/*"btn_txt_down"*/);
      UISprite__set_spriteName((UISprite_o *)sort, *v28, 0LL);
      v24 = this->fields.sort;
      if ( !v24 )
        goto LABEL_36;
      sort = (ListViewSort_o *)this->fields.sortOrderSprite;
      if ( !sort )
        goto LABEL_36;
      v25 = (System_String_o **)&StringLiteral_17718/*"btn_sort_up"*/;
      v26 = (System_String_o **)&StringLiteral_17715/*"btn_sort_down"*/;
    }
    if ( v24->fields.isAscendingOrder )
      v27 = v25;
    else
      v27 = v26;
    UISprite__set_spriteName((UISprite_o *)sort, *v27, 0LL);
    sort = (ListViewSort_o *)this->fields.sortExplanationSprite;
    if ( sort )
    {
      ((void (__fastcall *)(ListViewSort_o *, void *))sort->klass[2]._1.typeMetadataHandle)(
        sort,
        sort->klass[2]._1.interopData);
      return;
    }
LABEL_36:
    sub_1BCAA3C(sort, v17);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FriendOperationItemListViewManager__SetSortKind(
        FriendOperationItemListViewManager_o *this,
        int32_t kind,
        const MethodInfo *method)
{
  struct ListViewSort_o *sort; // x8

  sort = this->fields.sort;
  if ( !sort )
    sub_1BCAA3C(this, *(_QWORD *)&kind);
  sort->fields.sortKind = kind;
}


void __fastcall FriendOperationItemListViewManager__SetupClassBoardInfo(
        FriendOperationItemListViewManager_o *this,
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
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  System_Collections_Generic_Dictionary_int__int__o *classBoardMaxDictionary; // x0
  System_Collections_Generic_Dictionary_int__int__o **p_classBoardMaxDictionary; // x20
  __int64 v29; // x1
  System_Collections_Generic_Dictionary_int__int__o *v30; // x19
  System_Collections_ObjectModel_Collection_T__o *Master_object; // x0
  __int64 v32; // x1
  __int64 v33; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v36; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v39; // x8
  __int64 v40; // x9
  int32_t *v41; // x10
  __int64 v42; // x0
  __int64 v43; // x0
  ClassBoardBaseEntity_c *v44; // x1
  __int64 v45; // x21
  __int64 methodPtr_low; // x9
  Il2CppObject *v47; // x0
  __int64 v48; // x1
  ClassBoardSquareEntity_array *OtherThanNoneEntity; // x0
  __int64 v50; // x1
  System_Collections_Generic_IEnumerator_T__c *v51; // x8
  __int64 v52; // x9
  int32_t *v53; // x10
  __int64 v54; // x0

  if ( (byte_4B1142A & 1) == 0 )
  {
    sub_1BCA7E0(&ClassBoardBaseEntity_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, v5, v6);
    sub_1BCA7E0(&Method_DataManager_GetMaster_ClassBoardBaseMaster___, v7, v8);
    sub_1BCA7E0(&Method_DataManager_GetMaster_ClassBoardSquareMaster___, v9, v10);
    sub_1BCA7E0(&DataManager_TypeInfo, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__int__Add__, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__int__Clear__, v15, v16);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__int___ctor__, v17, v18);
    sub_1BCA7E0(&System_Collections_Generic_Dictionary_int__int__TypeInfo, v19, v20);
    sub_1BCA7E0(&System_IDisposable_TypeInfo, v21, v22);
    sub_1BCA7E0(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v23, v24);
    sub_1BCA7E0(&System_Collections_IEnumerator_TypeInfo, v25, v26);
    byte_4B1142A = 1;
  }
  classBoardMaxDictionary = this->fields.classBoardMaxDictionary;
  p_classBoardMaxDictionary = &this->fields.classBoardMaxDictionary;
  if ( classBoardMaxDictionary )
  {
    System_Collections_Generic_Dictionary_int__int___Clear(
      classBoardMaxDictionary,
      (const MethodInfo_31FD3F4 *)Method_System_Collections_Generic_Dictionary_int__int__Clear__);
  }
  else
  {
    v30 = (System_Collections_Generic_Dictionary_int__int__o *)sub_1BCAA2C(
                                                                 System_Collections_Generic_Dictionary_int__int__TypeInfo,
                                                                 method,
                                                                 v2,
                                                                 v3);
    System_Collections_Generic_Dictionary_int__int____ctor(
      v30,
      (const MethodInfo_31FC8B0 *)Method_System_Collections_Generic_Dictionary_int__int___ctor__);
    *p_classBoardMaxDictionary = v30;
    sub_1BCA784(p_classBoardMaxDictionary, v30);
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v29);
  Master_object = (System_Collections_ObjectModel_Collection_T__o *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_ClassBoardBaseMaster___);
  if ( !Master_object
    || (Master_object = (System_Collections_ObjectModel_Collection_T__o *)Master_object[1].monitor) == 0LL )
  {
    sub_1BCAA3C(Master_object, v32);
  }
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 Master_object,
                 (const MethodInfo_314F9E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_1BCAA3C(0LL, v33);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v36 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v36;
        p_offset += 4;
        if ( !v36 )
          goto LABEL_15;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_15:
      p_method = sub_1C1C7C0(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v39 = Enumerator->klass;
    v40 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v41 = &v39->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v41 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        --v40;
        v41 += 4;
        if ( !v40 )
          goto LABEL_22;
      }
      v42 = (__int64)&v39->vtable[*v41].method;
    }
    else
    {
LABEL_22:
      v42 = sub_1C1C7C0(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v43 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v42)(
            Enumerator,
            *(_QWORD *)(v42 + 8));
    v45 = v43;
    if ( v43 )
    {
      v44 = ClassBoardBaseEntity_TypeInfo;
      methodPtr_low = LOBYTE(ClassBoardBaseEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( *(unsigned __int8 *)(*(_QWORD *)v43 + 304LL) < (unsigned int)methodPtr_low
        || *(ClassBoardBaseEntity_c **)(*(_QWORD *)(*(_QWORD *)v43 + 200LL) + 8 * methodPtr_low - 8) != ClassBoardBaseEntity_TypeInfo )
      {
        v47 = (Il2CppObject *)sub_1BCACFC(v43);
LABEL_42:
        sub_1BCAA3C(v47, v48);
      }
    }
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v44);
    v47 = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_ClassBoardSquareMaster___);
    if ( !v45 )
      goto LABEL_42;
    if ( !v47 )
      sub_1BCAA3C(0LL, v48);
    OtherThanNoneEntity = ClassBoardSquareMaster__GetOtherThanNoneEntity(
                            (ClassBoardSquareMaster_o *)v47,
                            *(_DWORD *)(v45 + 16),
                            0LL);
    if ( OtherThanNoneEntity )
    {
      if ( !*p_classBoardMaxDictionary )
        sub_1BCAA3C(OtherThanNoneEntity, v50);
      System_Collections_Generic_Dictionary_int__int___Add(
        *p_classBoardMaxDictionary,
        *(_DWORD *)(v45 + 16),
        OtherThanNoneEntity->max_length,
        (const MethodInfo_31FD274 *)Method_System_Collections_Generic_Dictionary_int__int__Add__);
    }
  }
  v51 = Enumerator->klass;
  v52 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v53 = &v51->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v53 - 1) != System_IDisposable_TypeInfo )
    {
      --v52;
      v53 += 4;
      if ( !v52 )
        goto LABEL_38;
    }
    v54 = (__int64)&v51->vtable[*v53].method;
  }
  else
  {
LABEL_38:
    v54 = sub_1C1C7C0(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v54)(Enumerator, *(_QWORD *)(v54 + 8));
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

  if ( (byte_4B11412 & 1) == 0 )
  {
    sub_1BCA7E0(&FriendOperationItemListViewManager_CallbackFunc_TypeInfo, value, method);
    byte_4B11412 = 1;
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
    v8 = sub_1C05CD0(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (FriendOperationItemListViewManager_o *)sub_1BCACFC(v7);
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

  if ( (byte_4B11414 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, value, method);
    byte_4B11414 = 1;
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
  v10 = (FriendOperationItemListViewManager_o *)sub_1BCACFC(v7);
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
  _BOOL8 v33; // x0
  __int64 v34; // x1
  struct System_Object_array *items; // x8
  _QWORD *v36; // x9
  __int64 size; // x10
  Il2CppClass **v38; // x0
  System_Collections_Generic_List_Enumerator_object__o v40; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v41; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_4B1141A & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v7, v8);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_FriendOperationItemListViewObject___, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_FriendOperationItemListViewObject__Add__, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_FriendOperationItemListViewObject___ctor__, v15, v16);
    sub_1BCA7E0(&System_Collections_Generic_List_FriendOperationItemListViewObject__TypeInfo, v17, v18);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v19, v20);
    byte_4B1141A = 1;
  }
  memset(&v41, 0, sizeof(v41));
  v21 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_FriendOperationItemListViewObject__TypeInfo,
                                                       method,
                                                       v2,
                                                       v3);
  System_Collections_Generic_List_object____ctor(
    v21,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_FriendOperationItemListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_1BCAA3C(0LL, v22);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v40,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v41 = v40;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v41,
            (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v41.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v24);
    v26 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v26 )
    {
      if ( !current )
        sub_1BCAA3C(v26, v27);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_FriendOperationItemListViewObject___);
      v30 = Component_object;
      if ( !Component_object )
        sub_1BCAA3C(0LL, v29);
      Item = (ListViewItem_o *)FriendOperationItemListViewObject__GetItem(
                                 (FriendOperationItemListViewObject_o *)Component_object,
                                 v29);
      if ( !Item )
        sub_1BCAA3C(0LL, v32);
      if ( Item->fields.isTermination )
      {
        v33 = ListViewManager__ClippingItem_41463120((ListViewManager_o *)this, Item, 0LL);
        if ( v33 )
        {
          if ( !v21 )
            sub_1BCAA3C(v33, v34);
          items = v21->fields._items;
          v36 = Method_System_Collections_Generic_List_FriendOperationItemListViewObject__Add__;
          ++v21->fields._version;
          if ( !items )
            sub_1BCAA3C(v33, v34);
          size = v21->fields._size;
          if ( (unsigned int)size < items->max_length )
            goto LABEL_17;
LABEL_21:
          System_Collections_Generic_List_object___AddWithResize(
            v21,
            v30,
            *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v36[4] + 192LL) + 112LL));
        }
      }
      else
      {
        if ( !v21 )
          sub_1BCAA3C(Item, v32);
        items = v21->fields._items;
        v36 = Method_System_Collections_Generic_List_FriendOperationItemListViewObject__Add__;
        ++v21->fields._version;
        if ( !items )
          sub_1BCAA3C(Item, v32);
        size = v21->fields._size;
        if ( (unsigned int)size >= items->max_length )
          goto LABEL_21;
LABEL_17:
        v38 = &items->obj.klass + size;
        v21->fields._size = size + 1;
        v38[4] = (Il2CppClass *)v30;
        sub_1BCA784(v38 + 4, v30);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v41,
    (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_FriendOperationItemListViewObject__o *)v21;
}


bool __fastcall FriendOperationItemListViewManager__get_IsExistSwapLockUser(
        FriendOperationItemListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  System_Collections_Generic_List_object__o *itemList; // x0
  int32_t i; // w20
  int32_t size; // w8
  bool v11; // w21
  Il2CppObject *Item; // x0
  __int64 v13; // x1
  __int64 methodPtr_low; // x10

  if ( (byte_4B1141B & 1) == 0 )
  {
    sub_1BCA7E0(&FriendOperationItemListViewItem_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v4, v5);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v6, v7);
    byte_4B1141B = 1;
  }
  itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
  if ( !itemList )
    return 0;
  for ( i = 0; ; ++i )
  {
    size = itemList->fields._size;
    v11 = i < size;
    if ( i >= size )
      break;
    Item = System_Collections_Generic_List_object___get_Item(
             itemList,
             i,
             (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
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
      sub_1BCAA3C(0LL, v13);
  }
  return v11;
}


System_Collections_Generic_List_FriendOperationItemListViewObject__o *__fastcall FriendOperationItemListViewManager__get_ObjectList(
        FriendOperationItemListViewManager_o *this,
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
  Il2CppObject *v29; // x1
  struct System_Object_array *items; // x8
  _QWORD *v31; // x9
  __int64 size; // x10
  Il2CppClass **v33; // x0
  System_Collections_Generic_List_Enumerator_object__o v35; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v36; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4B11419 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v7, v8);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_FriendOperationItemListViewObject___, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_FriendOperationItemListViewObject__Add__, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_FriendOperationItemListViewObject___ctor__, v15, v16);
    sub_1BCA7E0(&System_Collections_Generic_List_FriendOperationItemListViewObject__TypeInfo, v17, v18);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v19, v20);
    byte_4B11419 = 1;
  }
  memset(&v36, 0, sizeof(v36));
  v21 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_FriendOperationItemListViewObject__TypeInfo,
                                                       method,
                                                       v2,
                                                       v3);
  System_Collections_Generic_List_object____ctor(
    v21,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_FriendOperationItemListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_1BCAA3C(0LL, v22);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v35,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v36 = v35;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v36,
            (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v36.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v24);
    v26 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v26 )
    {
      if ( !current )
        sub_1BCAA3C(v26, v27);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_FriendOperationItemListViewObject___);
      v29 = Component_object;
      if ( !v21 )
        sub_1BCAA3C(Component_object, Component_object);
      items = v21->fields._items;
      v31 = Method_System_Collections_Generic_List_FriendOperationItemListViewObject__Add__;
      ++v21->fields._version;
      if ( !items )
        sub_1BCAA3C(Component_object, Component_object);
      size = v21->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v21,
          Component_object,
          *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v31[4] + 192LL) + 112LL));
      }
      else
      {
        v33 = &items->obj.klass + size;
        v21->fields._size = size + 1;
        v33[4] = (Il2CppClass *)v29;
        sub_1BCA784(v33 + 4, v29);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v36,
    (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_FriendOperationItemListViewObject__o *)v21;
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
  v5 = sub_1BCA784(&this->fields.callbackFunc, 0LL);
  if ( callbackFunc )
  {
    if ( !obj )
      sub_1BCAA3C(v5, v6);
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
  v5 = sub_1BCA784(&this->fields.callbackFunc, 0LL);
  if ( callbackFunc )
  {
    if ( !obj )
      sub_1BCAA3C(v5, v6);
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
  v5 = sub_1BCA784(&this->fields.callbackFunc, 0LL);
  if ( callbackFunc )
  {
    if ( !obj )
      sub_1BCAA3C(v5, v6);
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

  if ( (byte_4B11413 & 1) == 0 )
  {
    sub_1BCA7E0(&FriendOperationItemListViewManager_CallbackFunc_TypeInfo, value, method);
    byte_4B11413 = 1;
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
    v8 = sub_1C05CD0(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (FriendOperationItemListViewManager_o *)sub_1BCACFC(v7);
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

  if ( (byte_4B11415 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, value, method);
    byte_4B11415 = 1;
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
  v10 = (FriendOperationItemListViewManager_o *)sub_1BCACFC(v7);
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
    sub_1BCAA3C(scrollBar, method);
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
    sub_1BCAA3C(scrollBar, b);
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
  sub_1BCA784(&this->fields.method, object);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1BCA8A0(v6) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1BCAA58(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1BCA908(v10, 0LL);
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
  this->fields.m_target = (Il2CppObject *)sub_1A05670;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_1A05618;
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
  __int64 v12[3]; // [xsp+8h] [xbp-58h] BYREF
  int32_t v13; // [xsp+28h] [xbp-38h] BYREF
  int32_t v14; // [xsp+2Ch] [xbp-34h] BYREF

  v13 = result;
  v14 = kind;
  if ( (byte_4B1142E & 1) == 0 )
  {
    sub_1BCA7E0(&int_TypeInfo, *(_QWORD *)&kind, *(_QWORD *)&result);
    sub_1BCA7E0(&FriendOperationItemListViewManager_ResultKind_TypeInfo, v9, v10);
    byte_4B1142E = 1;
  }
  v12[2] = 0LL;
  v12[0] = j_il2cpp_value_box_0(FriendOperationItemListViewManager_ResultKind_TypeInfo, &v14);
  v12[1] = j_il2cpp_value_box_0(int_TypeInfo, &v13);
  return (System_IAsyncResult_o *)sub_1BCA794(this, v12, callback, object);
}


void __fastcall FriendOperationItemListViewManager_CallbackFunc__EndInvoke(
        FriendOperationItemListViewManager_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1BCA798(result, 0LL, method);
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
  __int64 v3; // x3
  Il2CppObject *v4; // x19

  if ( (byte_4B1142F & 1) == 0 )
  {
    sub_1BCA7E0(&FriendOperationItemListViewManager___c_TypeInfo, v1, v2);
    byte_4B1142F = 1;
  }
  v4 = (Il2CppObject *)sub_1BCAA2C(FriendOperationItemListViewManager___c_TypeInfo, v1, v2, v3);
  System_Object___ctor(v4, 0LL);
  FriendOperationItemListViewManager___c_TypeInfo->static_fields->__9 = (struct FriendOperationItemListViewManager___c_o *)v4;
  sub_1BCA784(FriendOperationItemListViewManager___c_TypeInfo->static_fields, v4);
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
  if ( (byte_4B11430 & 1) == 0 )
  {
    this = (FriendOperationItemListViewManager___c_o *)sub_1BCA7E0(&UserFriendRequestHistoryEntity_TypeInfo, a, b);
    byte_4B11430 = 1;
  }
  if ( !b )
LABEL_11:
    sub_1BCAA3C(this, a);
  a = (DataEntityBase_o *)UserFriendRequestHistoryEntity_TypeInfo;
  methodPtr_low = LOBYTE(UserFriendRequestHistoryEntity_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(b->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
    || (UserFriendRequestHistoryEntity_c *)b->klass->_2.typeHierarchy[methodPtr_low - 1] != UserFriendRequestHistoryEntity_TypeInfo )
  {
    this = (FriendOperationItemListViewManager___c_o *)sub_1BCACFC(b);
    goto LABEL_11;
  }
  if ( !v5 )
    goto LABEL_11;
  if ( *(unsigned __int8 *)(*v5 + 304) >= (unsigned int)methodPtr_low
    && *(UserFriendRequestHistoryEntity_c **)(*(_QWORD *)(*v5 + 200) + 8 * (methodPtr_low - 1)) == UserFriendRequestHistoryEntity_TypeInfo )
  {
    return System_Int64__CompareTo_63210864((int64_t)&b[2].monitor, v5[5], 0LL);
  }
  v8 = (FriendOperationItemListViewObject_o *)sub_1BCACFC(v5);
  FriendOperationItemListViewObject__add_callbackFunc(v8, v9, v10);
  return result;
}