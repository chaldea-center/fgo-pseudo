void __fastcall FriendOperationItemListViewManager___cctor(const MethodInfo *method)
{
  System_Array_o *v1; // x19
  struct FriendOperationItemListViewManager_StaticFields *static_fields; // x0
  System_String_array **v3; // x2
  System_String_array **v4; // x3
  System_Boolean_array **v5; // x4
  System_Int32_array **v6; // x5
  System_Int32_array *v7; // x6
  System_Int32_array *v8; // x7
  System_RuntimeFieldHandle_o v9; // 0:w1.4

  if ( (byte_438EAF4 & 1) == 0 )
  {
    sub_B775C4(&ListViewSort_FilterKind___TypeInfo);
    sub_B775C4(&FriendOperationItemListViewManager_TypeInfo);
    sub_B775C4(&Field__PrivateImplementationDetails__6B3B6BC014A692F226080502E0DED60D67C84EBC03CC8CF43A550A89694FF5C0);
    byte_438EAF4 = 1;
  }
  FriendOperationItemListViewManager_TypeInfo->static_fields->isInitSystem = 0;
  v1 = (System_Array_o *)sub_B775DC(ListViewSort_FilterKind___TypeInfo, 8LL);
  v9.fields.value = Field__PrivateImplementationDetails__6B3B6BC014A692F226080502E0DED60D67C84EBC03CC8CF43A550A89694FF5C0;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_43528236(v1, v9, 0LL);
  static_fields = FriendOperationItemListViewManager_TypeInfo->static_fields;
  static_fields->classFilter = (struct ListViewSort_FilterKind_array *)v1;
  sub_B77560(
    (BattleServantConfConponent_o *)&static_fields->classFilter,
    (System_Int32_array **)v1,
    v3,
    v4,
    v5,
    v6,
    v7,
    v8);
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
  CommonUI_o *Instance; // x0
  __int64 v6; // x1

  if ( (byte_438EAED & 1) == 0 )
  {
    sub_B775C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_438EAED = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B7769C(0LL, v6);
  CommonUI__CloseOtherUserSortDialog(Instance, 0LL, 0LL);
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
  int64_t sort; // x0
  __int64 v7; // x1
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  struct ListViewSort_array *sortStatusList; // x8
  struct ListViewSort_o *v15; // x1
  System_String_o *v16; // x22
  OtherUserGameEntity_array *FriendCodeList; // x20
  __int64 v18; // x8
  unsigned __int64 v19; // x22
  struct System_Collections_Generic_List_ListViewItem__o *v20; // x9
  int32_t v21; // w23
  OtherUserGameEntity_o *v22; // x24
  System_Collections_Generic_Dictionary_int__int__o *v23; // x25
  FriendOperationItemListViewItem_o *v24; // x21
  const MethodInfo *v25; // x6
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *MasterData_WarQuestSelectionMaster; // x20
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *v27; // x21
  int32_t v28; // w22
  UserBlacklistEntity_o *v29; // x23
  __int64 v30; // x10
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x8
  int32_t size; // w26
  System_Collections_Generic_Dictionary_int__int__o *classBoardMaxDictionary; // x27
  OtherUserGameEntity_o *v34; // x25
  FriendOperationItemListViewItem_o *v35; // x24
  const MethodInfo *v36; // x7
  __int64 *v37; // x8
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *v38; // x20
  System_Collections_Generic_IEnumerable_T__o *v39; // x22
  System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *v40; // x21
  struct FriendOperationItemListViewManager___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__35_0; // x22
  Il2CppObject *v43; // x23
  struct FriendOperationItemListViewManager___c_StaticFields *v44; // x0
  System_String_array **v45; // x2
  System_String_array **v46; // x3
  System_Boolean_array **v47; // x4
  System_Int32_array **v48; // x5
  System_Int32_array *v49; // x6
  System_Int32_array *v50; // x7
  int32_t v51; // w23
  BalanceConfig_c *v52; // x0
  int32_t MaxFriendHistoryNum; // w1
  signed __int64 v54; // x8
  unsigned __int64 v55; // x27
  UserFriendRequestHistoryEntity_o *v56; // x22
  __int64 v57; // x10
  struct System_Collections_Generic_List_ListViewItem__o *v58; // x8
  int32_t v59; // w25
  System_Collections_Generic_Dictionary_int__int__o *v60; // x26
  OtherUserGameEntity_o *v61; // x24
  FriendOperationItemListViewItem_o *v62; // x23
  const MethodInfo *v63; // x7
  TblFriendMaster_o *v64; // x23
  OtherUserGameEntity_array *List; // x24
  __int64 v66; // x8
  unsigned __int64 v67; // x22
  struct System_Collections_Generic_List_ListViewItem__o *v68; // x9
  int32_t v69; // w26
  OtherUserGameEntity_o *v70; // x27
  System_Collections_Generic_Dictionary_int__int__o *v71; // x28
  FriendOperationItemListViewItem_o *v72; // x25
  const MethodInfo *v73; // x6
  __int64 v74; // x8
  unsigned __int64 v75; // x22
  struct System_Collections_Generic_List_ListViewItem__o *v76; // x9
  int32_t v77; // w26
  OtherUserGameEntity_o *v78; // x27
  System_Collections_Generic_Dictionary_int__int__o *v79; // x28
  FriendOperationItemListViewItem_o *v80; // x25
  const MethodInfo *v81; // x6
  UILabel_o *emptyMessageLabel; // x20
  struct UIScrollView_o *scrollView; // x8
  __int64 v84; // x0
  System_String_o *v85; // [xsp+8h] [xbp-68h]
  OtherUserGameEntity_array *v86; // [xsp+10h] [xbp-60h]

  if ( (byte_438EAE3 & 1) == 0 )
  {
    sub_B775C4(&BalanceConfig_TypeInfo);
    sub_B775C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_B775C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_B775C4(&Method_System_Comparison_DataEntityBase___ctor__);
    sub_B775C4(&System_Comparison_DataEntityBase__TypeInfo);
    sub_B775C4(&Method_DataManager_GetMasterData_OtherUserGameMaster___);
    sub_B775C4(&Method_DataManager_GetMasterData_TblFriendMaster___);
    sub_B775C4(&Method_DataManager_GetMasterData_UserBlacklistMaster___);
    sub_B775C4(&Method_DataManager_GetMasterData_UserFriendRequestHistoryMaster___);
    sub_B775C4(&Method_DataMasterBase_OtherUserGameMaster__OtherUserGameEntity__long__GetEntity__);
    sub_B775C4(&FriendOperationItemListViewItem_TypeInfo);
    sub_B775C4(&FriendOperationItemListViewManager_TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    sub_B775C4(&Method_System_Collections_Generic_List_DataEntityBase__RemoveRange__);
    sub_B775C4(&Method_System_Collections_Generic_List_DataEntityBase__Reverse__);
    sub_B775C4(&Method_System_Collections_Generic_List_DataEntityBase__Sort__);
    sub_B775C4(&Method_System_Collections_Generic_List_DataEntityBase___ctor___69389672);
    sub_B775C4(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_B775C4(&Method_System_Collections_Generic_List_DataEntityBase__get_Count__);
    sub_B775C4(&Method_System_Collections_Generic_List_DataEntityBase__get_Item__);
    sub_B775C4(&System_Collections_Generic_List_DataEntityBase__TypeInfo);
    sub_B775C4(&LocalizationManager_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B775C4(&Method_FriendOperationItemListViewManager___c__CreateList_b__35_0__);
    sub_B775C4(&FriendOperationItemListViewManager___c_TypeInfo);
    sub_B775C4(&UserBlacklistEntity_TypeInfo);
    sub_B775C4(&UserFriendRequestHistoryEntity_TypeInfo);
    sub_B775C4(&StringLiteral_2675/*"BLACKLIST_EMPTY_MESSAGE"*/);
    sub_B775C4(&StringLiteral_6611/*"FRIEND_EMPTY_FRIEND_MESSAGE"*/);
    sub_B775C4(&StringLiteral_2678/*"BLACKLIST_FRIEND_HISTORY_EMPTY_MESSAGE"*/);
    sub_B775C4(&StringLiteral_6612/*"FRIEND_EMPTY_OFFERED_MESSAGE"*/);
    byte_438EAE3 = 1;
  }
  if ( (BYTE3(FriendOperationItemListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !FriendOperationItemListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FriendOperationItemListViewManager_TypeInfo);
  }
  FriendOperationItemListViewManager__CreateSorteData(classPos, *(const MethodInfo **)&kind);
  this->fields.menuKind = kind;
  sortStatusList = FriendOperationItemListViewManager_TypeInfo->static_fields->sortStatusList;
  if ( !sortStatusList )
    goto LABEL_101;
  if ( sortStatusList->max_length <= kind )
  {
LABEL_102:
    v84 = sub_B776C8(sort);
    sub_B77668(v84, 0LL);
  }
  v15 = sortStatusList->m_Items[kind];
  this->fields.sort = v15;
  sub_B77560((BattleServantConfConponent_o *)&this->fields.sort, (System_Int32_array **)v15, v8, v9, v10, v11, v12, v13);
  sort = (int64_t)this->fields.sort;
  if ( !sort )
    goto LABEL_101;
  ListViewSort__Load((ListViewSort_o *)sort, 0LL);
  if ( kind == 8 )
  {
    sort = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !sort )
      goto LABEL_101;
    MasterData_WarQuestSelectionMaster = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)DataManager__GetMasterData_WarQuestSelectionMaster_((DataManager_o *)sort, (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_OtherUserGameMaster___);
    sort = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !sort )
      goto LABEL_101;
    sort = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                      (DataManager_o *)sort,
                      (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_UserBlacklistMaster___);
    if ( !sort )
      goto LABEL_101;
    v27 = *(System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o **)(sort + 32);
    ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
    if ( !v27 )
      goto LABEL_101;
    if ( System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
           v27,
           (const MethodInfo_2CC5044 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__) < 1 )
    {
LABEL_35:
      v37 = &StringLiteral_2675/*"BLACKLIST_EMPTY_MESSAGE"*/;
      goto LABEL_68;
    }
    v28 = 0;
    while ( 1 )
    {
      sort = (int64_t)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                        v27,
                        v28,
                        (const MethodInfo_2CC50E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !sort )
        break;
      v29 = (UserBlacklistEntity_o *)sort;
      v30 = *(&UserBlacklistEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(unsigned __int8 *)(*(_QWORD *)sort + 300LL) < (unsigned int)v30 )
        break;
      if ( *(UserBlacklistEntity_c **)(*(_QWORD *)(*(_QWORD *)sort + 200LL) + 8 * v30 - 8) != UserBlacklistEntity_TypeInfo )
        break;
      sort = UserBlacklistEntity__getOtherUserId((UserBlacklistEntity_o *)sort, 0LL);
      if ( !MasterData_WarQuestSelectionMaster )
        break;
      sort = (int64_t)DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
                        MasterData_WarQuestSelectionMaster,
                        sort,
                        (const MethodInfo_21FBABC *)Method_DataMasterBase_OtherUserGameMaster__OtherUserGameEntity__long__GetEntity__);
      itemList = this->fields.itemList;
      if ( !itemList )
        break;
      size = itemList->fields._size;
      classBoardMaxDictionary = this->fields.classBoardMaxDictionary;
      v34 = (OtherUserGameEntity_o *)sort;
      v35 = (FriendOperationItemListViewItem_o *)sub_B77694(FriendOperationItemListViewItem_TypeInfo);
      FriendOperationItemListViewItem___ctor_31980812(v35, 8, size, v34, v29, 0, classBoardMaxDictionary, v36);
      sort = (int64_t)this->fields.itemList;
      if ( !sort )
        break;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sort,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v35,
        (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
      if ( ++v28 >= System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
                      v27,
                      (const MethodInfo_2CC5044 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__) )
        goto LABEL_35;
    }
LABEL_101:
    sub_B7769C(sort, v7);
  }
  if ( kind == 7 )
  {
    sort = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !sort )
      goto LABEL_101;
    v38 = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                   (DataManager_o *)sort,
                                                                                   (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_OtherUserGameMaster___);
    sort = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !sort )
      goto LABEL_101;
    sort = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                      (DataManager_o *)sort,
                      (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_UserFriendRequestHistoryMaster___);
    if ( !sort )
      goto LABEL_101;
    v39 = *(System_Collections_Generic_IEnumerable_T__o **)(sort + 32);
    v40 = (System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *)sub_B77694(System_Collections_Generic_List_DataEntityBase__TypeInfo);
    System_Collections_Generic_List_WarBoardAIRoute_RouteData____ctor(
      v40,
      v39,
      (const MethodInfo_30527CC *)Method_System_Collections_Generic_List_DataEntityBase___ctor___69389672);
    sort = (int64_t)FriendOperationItemListViewManager___c_TypeInfo;
    if ( (BYTE3(FriendOperationItemListViewManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !FriendOperationItemListViewManager___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(FriendOperationItemListViewManager___c_TypeInfo);
      sort = (int64_t)FriendOperationItemListViewManager___c_TypeInfo;
    }
    static_fields = *(struct FriendOperationItemListViewManager___c_StaticFields **)(sort + 184);
    _9__35_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)static_fields->__9__35_0;
    if ( !_9__35_0 )
    {
      if ( (*(_BYTE *)(sort + 307) & 4) != 0 && !*(_DWORD *)(sort + 224) )
      {
        j_il2cpp_runtime_class_init_0(sort);
        static_fields = FriendOperationItemListViewManager___c_TypeInfo->static_fields;
      }
      v43 = (Il2CppObject *)static_fields->__9;
      _9__35_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B77694(System_Comparison_DataEntityBase__TypeInfo);
      System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
        _9__35_0,
        v43,
        Method_FriendOperationItemListViewManager___c__CreateList_b__35_0__,
        (const MethodInfo_2B42C0C *)Method_System_Comparison_DataEntityBase___ctor__);
      v44 = FriendOperationItemListViewManager___c_TypeInfo->static_fields;
      v44->__9__35_0 = (struct System_Comparison_DataEntityBase__o *)_9__35_0;
      sub_B77560(
        (BattleServantConfConponent_o *)&v44->__9__35_0,
        (System_Int32_array **)_9__35_0,
        v45,
        v46,
        v47,
        v48,
        v49,
        v50);
    }
    if ( !v40 )
      goto LABEL_101;
    System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
      (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v40,
      (System_Comparison_T__o *)_9__35_0,
      (const MethodInfo_3055374 *)Method_System_Collections_Generic_List_DataEntityBase__Sort__);
    v51 = v40->fields._size;
    v52 = BalanceConfig_TypeInfo;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v52 = BalanceConfig_TypeInfo;
    }
    MaxFriendHistoryNum = v52->static_fields->MaxFriendHistoryNum;
    if ( v51 > MaxFriendHistoryNum )
    {
      if ( (BYTE3(v52->vtable._0_Equals.methodPtr) & 4) != 0 && !v52->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v52);
        MaxFriendHistoryNum = BalanceConfig_TypeInfo->static_fields->MaxFriendHistoryNum;
      }
      System_Collections_Generic_List_RegexCharClass_SingleRange___RemoveRange(
        (System_Collections_Generic_List_RegexCharClass_SingleRange__o *)v40,
        MaxFriendHistoryNum,
        v40->fields._size - MaxFriendHistoryNum,
        (const MethodInfo_305502C *)Method_System_Collections_Generic_List_DataEntityBase__RemoveRange__);
    }
    System_Collections_Generic_List_MapControl_WarInfo___Reverse(
      (System_Collections_Generic_List_MapControl_WarInfo__o *)v40,
      (const MethodInfo_30550F8 *)Method_System_Collections_Generic_List_DataEntityBase__Reverse__);
    ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
    LODWORD(v54) = v40->fields._size;
    if ( (int)v54 < 1 )
    {
LABEL_67:
      v37 = &StringLiteral_2678/*"BLACKLIST_FRIEND_HISTORY_EMPTY_MESSAGE"*/;
      goto LABEL_68;
    }
    v55 = 0LL;
    while ( 1 )
    {
      if ( v55 >= (unsigned int)v54 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42293568(0LL);
      v56 = (UserFriendRequestHistoryEntity_o *)v40->fields._items->m_Items[v55];
      if ( !v56 )
        goto LABEL_101;
      v57 = *(&UserFriendRequestHistoryEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v56->klass->_2.bitflags2 + 1) < (unsigned int)v57 )
        goto LABEL_101;
      if ( (UserFriendRequestHistoryEntity_c *)v56->klass->_2.typeHierarchy[v57 - 1] != UserFriendRequestHistoryEntity_TypeInfo )
        goto LABEL_101;
      sort = UserFriendRequestHistoryEntity__getOtherUserId(v56, 0LL);
      if ( !v38 )
        goto LABEL_101;
      sort = (int64_t)DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
                        v38,
                        sort,
                        (const MethodInfo_21FBABC *)Method_DataMasterBase_OtherUserGameMaster__OtherUserGameEntity__long__GetEntity__);
      v58 = this->fields.itemList;
      if ( !v58 )
        goto LABEL_101;
      v59 = v58->fields._size;
      v60 = this->fields.classBoardMaxDictionary;
      v61 = (OtherUserGameEntity_o *)sort;
      v62 = (FriendOperationItemListViewItem_o *)sub_B77694(FriendOperationItemListViewItem_TypeInfo);
      FriendOperationItemListViewItem___ctor_31981160(v62, 7, v59, v61, v56, 0, v60, v63);
      sort = (int64_t)this->fields.itemList;
      if ( !sort )
        goto LABEL_101;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sort,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v62,
        (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
      v54 = v40->fields._size;
      if ( (__int64)++v55 >= v54 )
        goto LABEL_67;
    }
  }
  v16 = (System_String_o *)StringLiteral_6612/*"FRIEND_EMPTY_OFFERED_MESSAGE"*/;
  if ( !kind )
  {
    sort = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !sort )
      goto LABEL_101;
    sort = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                      (DataManager_o *)sort,
                      (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_OtherUserGameMaster___);
    if ( !sort )
      goto LABEL_101;
    FriendCodeList = OtherUserGameMaster__GetFriendCodeList((OtherUserGameMaster_o *)sort, this->fields.friendCode, 0LL);
    ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
    if ( !FriendCodeList )
      goto LABEL_101;
    v18 = *(_QWORD *)&FriendCodeList->max_length;
    if ( (int)v18 >= 1 )
    {
      v85 = v16;
      v19 = 0LL;
      while ( 1 )
      {
        v20 = this->fields.itemList;
        if ( !v20 )
          goto LABEL_101;
        if ( v19 >= (unsigned int)v18 )
          goto LABEL_102;
        v21 = v20->fields._size;
        v22 = FriendCodeList->m_Items[v19];
        v23 = this->fields.classBoardMaxDictionary;
        v24 = (FriendOperationItemListViewItem_o *)sub_B77694(FriendOperationItemListViewItem_TypeInfo);
        FriendOperationItemListViewItem___ctor_31980492(v24, 0, v21, v22, 0, v23, v25);
        sort = (int64_t)this->fields.itemList;
        if ( !sort )
          goto LABEL_101;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sort,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v24,
          (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
        LODWORD(v18) = FriendCodeList->max_length;
        if ( (__int64)++v19 >= (int)v18 )
          goto LABEL_87;
      }
    }
    goto LABEL_88;
  }
  sort = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !sort )
    goto LABEL_101;
  v85 = v16;
  sort = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                    (DataManager_o *)sort,
                    (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_TblFriendMaster___);
  if ( !sort )
    goto LABEL_101;
  v64 = (TblFriendMaster_o *)sort;
  List = TblFriendMaster__GetList((TblFriendMaster_o *)sort, kind, 0LL);
  v86 = TblFriendMaster__GetList(v64, 9, 0LL);
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
  if ( kind == 3 )
  {
    if ( !v86 )
      goto LABEL_101;
    v66 = *(_QWORD *)&v86->max_length;
    if ( (int)v66 >= 1 )
    {
      v67 = 0LL;
      do
      {
        v68 = this->fields.itemList;
        if ( !v68 )
          goto LABEL_101;
        if ( v67 >= (unsigned int)v66 )
          goto LABEL_102;
        v69 = v68->fields._size;
        v70 = v86->m_Items[v67];
        v71 = this->fields.classBoardMaxDictionary;
        v72 = (FriendOperationItemListViewItem_o *)sub_B77694(FriendOperationItemListViewItem_TypeInfo);
        FriendOperationItemListViewItem___ctor_31980492(v72, 9, v69, v70, classPos, v71, v73);
        sort = (int64_t)this->fields.itemList;
        if ( !sort )
          goto LABEL_101;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sort,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v72,
          (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
        ++v67;
        LODWORD(v66) = v86->max_length;
      }
      while ( (__int64)v67 < (int)v66 );
    }
  }
  if ( !List )
    goto LABEL_101;
  v74 = *(_QWORD *)&List->max_length;
  if ( (int)v74 >= 1 )
  {
    v75 = 0LL;
    do
    {
      v76 = this->fields.itemList;
      if ( !v76 )
        goto LABEL_101;
      if ( v75 >= (unsigned int)v74 )
        goto LABEL_102;
      v77 = v76->fields._size;
      v78 = List->m_Items[v75];
      v79 = this->fields.classBoardMaxDictionary;
      v80 = (FriendOperationItemListViewItem_o *)sub_B77694(FriendOperationItemListViewItem_TypeInfo);
      FriendOperationItemListViewItem___ctor_31980492(v80, kind, v77, v78, classPos, v79, v81);
      sort = (int64_t)this->fields.itemList;
      if ( !sort )
        goto LABEL_101;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sort,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v80,
        (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
      v74 = *(_QWORD *)&List->max_length;
    }
    while ( (__int64)++v75 < (int)v74 );
  }
  if ( v74 )
  {
LABEL_87:
    v16 = v85;
    goto LABEL_88;
  }
  v16 = v85;
  if ( !v86 )
    goto LABEL_101;
  if ( !*(_QWORD *)&v86->max_length )
  {
    if ( kind != 2 )
    {
      if ( kind == 3 )
        v16 = (System_String_o *)StringLiteral_6611/*"FRIEND_EMPTY_FRIEND_MESSAGE"*/;
      goto LABEL_88;
    }
    v37 = &StringLiteral_6612/*"FRIEND_EMPTY_OFFERED_MESSAGE"*/;
LABEL_68:
    v16 = (System_String_o *)*v37;
  }
LABEL_88:
  emptyMessageLabel = this->fields.emptyMessageLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  sort = (int64_t)LocalizationManager__Get(v16, 0LL);
  if ( !emptyMessageLabel )
    goto LABEL_101;
  UILabel__set_text(emptyMessageLabel, (System_String_o *)sort, 0LL);
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, 3, 0LL);
  scrollView = this->fields.scrollView;
  if ( !scrollView )
    goto LABEL_101;
  BYTE2(scrollView->fields.scrollWheelFactor) = 1;
}


void __fastcall FriendOperationItemListViewManager__CreateListFriendCode(
        FriendOperationItemListViewManager_o *this,
        System_String_o *friendCode,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  const MethodInfo *v9; // x3

  this->fields.friendCode = friendCode;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.friendCode,
    (System_Int32_array **)friendCode,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  FriendOperationItemListViewManager__CreateList(this, 0, 0, v9);
}


void __fastcall FriendOperationItemListViewManager__CreateSorteData(int32_t classPos, const MethodInfo *method)
{
  FriendOperationItemListViewManager_c *v3; // x0
  __int64 v4; // x0
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7
  FriendOperationItemListViewManager_c *v11; // x8
  System_Int32_array **v12; // x20
  struct FriendOperationItemListViewManager_StaticFields *static_fields; // x0
  FriendOperationItemListViewManager_c *v14; // x0
  unsigned int v15; // w23
  int v16; // w8
  struct ListViewSort_array *sortStatusList; // x28
  System_String_o *v18; // x0
  System_String_o *v19; // x21
  ListViewSort_o *v20; // x20
  __int64 v21; // x1
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  Il2CppClass **v28; // x0
  struct ListViewSort_array *v29; // x8
  Il2CppClass **v30; // x8
  ListViewSort_o *v31; // x20
  struct ListViewSort_FilterKind_array *v32; // x8
  unsigned __int64 i; // x21
  struct ListViewSort_FilterKind_array *classFilter; // x8
  unsigned int v35; // w9
  bool v36; // cf
  __int64 v37; // x0
  __int64 v38; // x0
  unsigned int v39; // [xsp+Ch] [xbp-54h] BYREF

  if ( (byte_438EADD & 1) == 0 )
  {
    sub_B775C4(&FriendOperationItemListViewManager_TypeInfo);
    sub_B775C4(&ListViewSort___TypeInfo);
    sub_B775C4(&ListViewSort_TypeInfo);
    sub_B775C4(&StringLiteral_6957/*"FriendOperation"*/);
    byte_438EADD = 1;
  }
  v39 = 0;
  v3 = FriendOperationItemListViewManager_TypeInfo;
  if ( (BYTE3(FriendOperationItemListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !FriendOperationItemListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FriendOperationItemListViewManager_TypeInfo);
    v3 = FriendOperationItemListViewManager_TypeInfo;
  }
  if ( !v3->static_fields->isInitSystem )
  {
    v4 = sub_B775DC(ListViewSort___TypeInfo, 10LL);
    v11 = FriendOperationItemListViewManager_TypeInfo;
    v12 = (System_Int32_array **)v4;
    if ( (BYTE3(FriendOperationItemListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !FriendOperationItemListViewManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(FriendOperationItemListViewManager_TypeInfo);
      v11 = FriendOperationItemListViewManager_TypeInfo;
    }
    static_fields = v11->static_fields;
    static_fields->sortStatusList = (struct ListViewSort_array *)v12;
    sub_B77560((BattleServantConfConponent_o *)&static_fields->sortStatusList, v12, v5, v6, v7, v8, v9, v10);
    v14 = FriendOperationItemListViewManager_TypeInfo;
    v15 = 0;
    v16 = (BYTE3(FriendOperationItemListViewManager_TypeInfo->vtable._0_Equals.methodPtr) >> 2) & 1;
    do
    {
      if ( (v16 & 1) != 0 && !v14->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v14);
        v14 = FriendOperationItemListViewManager_TypeInfo;
      }
      sortStatusList = v14->static_fields->sortStatusList;
      v39 = v15 + 1;
      v18 = System_Int32__ToString((int32_t)&v39, 0LL);
      v19 = System_String__Concat_44901936((System_String_o *)StringLiteral_6957/*"FriendOperation"*/, v18, 0LL);
      v20 = (ListViewSort_o *)sub_B77694(ListViewSort_TypeInfo);
      ListViewSort___ctor_34308400(v20, v19, 3, 0, 0LL);
      if ( !sortStatusList )
        goto LABEL_46;
      if ( v20 )
      {
        v14 = (FriendOperationItemListViewManager_c *)sub_B77684(v20, sortStatusList->obj.klass->_1.element_class);
        if ( !v14 )
        {
          v38 = sub_B776BC(0LL);
          sub_B77668(v38, 0LL);
        }
      }
      if ( v15 >= sortStatusList->max_length )
        goto LABEL_47;
      v28 = &sortStatusList->obj.klass + (int)v15;
      v28[4] = (Il2CppClass *)v20;
      sub_B77560((BattleServantConfConponent_o *)(v28 + 4), (System_Int32_array **)v20, v22, v23, v24, v25, v26, v27);
      v29 = FriendOperationItemListViewManager_TypeInfo->static_fields->sortStatusList;
      if ( !v29 )
        goto LABEL_46;
      if ( v15 >= v29->max_length )
      {
LABEL_47:
        v37 = sub_B776C8(v14);
        sub_B77668(v37, 0LL);
      }
      v30 = &v29->obj.klass + (int)v15;
      v31 = (ListViewSort_o *)v30[4];
      if ( !v31 )
        goto LABEL_46;
      ListViewSort__ClassFilterOFF((ListViewSort_o *)v30[4], 0LL);
      if ( !classPos )
      {
        for ( i = 0LL; ; ++i )
        {
          v14 = FriendOperationItemListViewManager_TypeInfo;
          if ( (BYTE3(FriendOperationItemListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !FriendOperationItemListViewManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(FriendOperationItemListViewManager_TypeInfo);
            v14 = FriendOperationItemListViewManager_TypeInfo;
          }
          classFilter = v14->static_fields->classFilter;
          if ( !classFilter )
            break;
          if ( (__int64)i >= (int)classFilter->max_length )
            goto LABEL_39;
          if ( (BYTE3(v14->vtable._0_Equals.methodPtr) & 4) != 0 && !v14->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v14);
            classFilter = FriendOperationItemListViewManager_TypeInfo->static_fields->classFilter;
            if ( !classFilter )
              break;
          }
          if ( i >= classFilter->max_length )
            goto LABEL_47;
          ListViewSort__SetFilter(v31, classFilter->m_Items[i + 1], 1, 0LL);
        }
LABEL_46:
        sub_B7769C(v14, v21);
      }
      v14 = FriendOperationItemListViewManager_TypeInfo;
      if ( (BYTE3(FriendOperationItemListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !FriendOperationItemListViewManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(FriendOperationItemListViewManager_TypeInfo);
        v14 = FriendOperationItemListViewManager_TypeInfo;
      }
      v32 = v14->static_fields->classFilter;
      if ( !v32 )
        goto LABEL_46;
      if ( v32->max_length <= classPos )
        goto LABEL_47;
      ListViewSort__SetFilter(v31, v32->m_Items[classPos + 1], 1, 0LL);
      v14 = FriendOperationItemListViewManager_TypeInfo;
LABEL_39:
      v35 = WORD1(v14->vtable._0_Equals.methodPtr);
      v36 = v15++ >= 9;
      v16 = (v35 >> 10) & 1;
    }
    while ( !v36 );
    if ( (v35 & 0x400) != 0 && !v14->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v14);
      v14 = FriendOperationItemListViewManager_TypeInfo;
    }
    v14->static_fields->isInitSystem = 1;
  }
}


void __fastcall FriendOperationItemListViewManager__DeleteContinueData(const MethodInfo *method)
{
  const MethodInfo *v1; // x1
  __int64 v2; // x1
  __int64 v3; // x20
  ListViewSort_o *v4; // x0
  _DWORD *gc_desc; // x8
  __int64 v6; // x0

  if ( (byte_438EADE & 1) == 0 )
  {
    sub_B775C4(&FriendOperationItemListViewManager_TypeInfo);
    byte_438EADE = 1;
  }
  if ( (BYTE3(FriendOperationItemListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !FriendOperationItemListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FriendOperationItemListViewManager_TypeInfo);
  }
  FriendOperationItemListViewManager__CreateSorteData(0, v1);
  v3 = 0LL;
  do
  {
    v4 = (ListViewSort_o *)FriendOperationItemListViewManager_TypeInfo;
    if ( (BYTE3(FriendOperationItemListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !FriendOperationItemListViewManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(FriendOperationItemListViewManager_TypeInfo);
      v4 = (ListViewSort_o *)FriendOperationItemListViewManager_TypeInfo;
    }
    gc_desc = v4[1].klass->_1.gc_desc;
    if ( !gc_desc )
      goto LABEL_15;
    if ( (unsigned int)v3 >= gc_desc[6] )
    {
      v6 = sub_B776C8(v4);
      sub_B77668(v6, 0LL);
    }
    v4 = *(ListViewSort_o **)&gc_desc[2 * v3 + 8];
    if ( !v4 )
LABEL_15:
      sub_B7769C(v4, v2);
    ListViewSort__DeleteContinueData(v4, 0LL);
    ++v3;
  }
  while ( (unsigned int)(v3 - 1) < 9 );
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
    sub_B7769C(0LL, v3);
  ListViewSort__Save(sort, 0LL);
}


void __fastcall FriendOperationItemListViewManager__EndCloseClassBoardEffectListDialog(
        FriendOperationItemListViewManager_o *this,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  __int64 v4; // x1

  if ( (byte_438EAF3 & 1) == 0 )
  {
    sub_B775C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_438EAF3 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B7769C(0LL, v4);
  CommonUI__CloseClassBoardEffectListDialog(Instance, 0LL, 0LL);
  this->fields.isInput = 1;
}


FriendOperationItemListViewItem_o *__fastcall FriendOperationItemListViewManager__GetItem(
        FriendOperationItemListViewManager_o *this,
        int32_t index,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x20
  ListViewItem_o *v6; // x8
  __int64 v7; // x11

  if ( (byte_438EAE4 & 1) == 0 )
  {
    sub_B775C4(&FriendOperationItemListViewItem_TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    byte_438EAE4 = 1;
  }
  itemList = this->fields.itemList;
  if ( !itemList )
    return 0LL;
  if ( itemList->fields._size <= (unsigned int)index )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_42293568(0LL);
  v6 = itemList->fields._items->m_Items[index];
  if ( !v6 )
    return 0LL;
  v7 = *(&FriendOperationItemListViewItem_TypeInfo->_2.bitflags2 + 1);
  if ( *(&v6->klass->_2.bitflags2 + 1) < (unsigned int)v7 )
    return 0LL;
  if ( (FriendOperationItemListViewItem_c *)v6->klass->_2.typeHierarchy[v7 - 1] == FriendOperationItemListViewItem_TypeInfo )
    return (FriendOperationItemListViewItem_o *)itemList->fields._items->m_Items[index];
  return 0LL;
}


void __fastcall FriendOperationItemListViewManager__InitLoad(const MethodInfo *method)
{
  __int64 v1; // x1
  FriendOperationItemListViewManager_c *v2; // x0
  __int64 i; // x20
  struct ListViewSort_array *sortStatusList; // x8
  __int64 v5; // x0

  if ( (byte_438EADF & 1) == 0 )
  {
    sub_B775C4(&FriendOperationItemListViewManager_TypeInfo);
    byte_438EADF = 1;
  }
  v2 = FriendOperationItemListViewManager_TypeInfo;
  if ( (BYTE3(FriendOperationItemListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !FriendOperationItemListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FriendOperationItemListViewManager_TypeInfo);
    v2 = FriendOperationItemListViewManager_TypeInfo;
  }
  if ( v2->static_fields->isInitSystem )
  {
    for ( i = 0LL; ; ++i )
    {
      if ( (BYTE3(v2->vtable._0_Equals.methodPtr) & 4) != 0 && !v2->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v2);
        v2 = FriendOperationItemListViewManager_TypeInfo;
      }
      sortStatusList = v2->static_fields->sortStatusList;
      if ( !sortStatusList )
        goto LABEL_17;
      if ( (unsigned int)i >= sortStatusList->max_length )
      {
        v5 = sub_B776C8(v2);
        sub_B77668(v5, 0LL);
      }
      v2 = (FriendOperationItemListViewManager_c *)sortStatusList->m_Items[i];
      if ( !v2 )
LABEL_17:
        sub_B7769C(v2, v1);
      ListViewSort__InitLoad((ListViewSort_o *)v2, 0LL);
      if ( (unsigned int)i > 8 )
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
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  FriendOperationItemListViewManager_CallbackFunc_o *callbackFunc; // x19
  __int64 v10; // x0
  __int64 v11; // x1
  int32_t Index; // w2

  callbackFunc = this->fields.callbackFunc;
  this->fields.callbackFunc = 0LL;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.callbackFunc,
    0LL,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  if ( callbackFunc )
  {
    if ( !obj )
      sub_B7769C(v10, v11);
    Index = ListViewObject__get_Index(obj, 0LL);
    FriendOperationItemListViewManager_CallbackFunc__Invoke(callbackFunc, 0, Index, 0LL);
  }
}


void __fastcall FriendOperationItemListViewManager__OnClickListViewAccept(
        FriendOperationItemListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  FriendOperationItemListViewManager_CallbackFunc_o *callbackFunc; // x19
  __int64 v10; // x0
  __int64 v11; // x1
  int32_t Index; // w2

  callbackFunc = this->fields.callbackFunc;
  this->fields.callbackFunc = 0LL;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.callbackFunc,
    0LL,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  if ( callbackFunc )
  {
    if ( !obj )
      sub_B7769C(v10, v11);
    Index = ListViewObject__get_Index(obj, 0LL);
    FriendOperationItemListViewManager_CallbackFunc__Invoke(callbackFunc, 5, Index, 0LL);
  }
}


void __fastcall FriendOperationItemListViewManager__OnClickListViewCancel(
        FriendOperationItemListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  FriendOperationItemListViewManager_CallbackFunc_o *callbackFunc; // x19
  __int64 v10; // x0
  __int64 v11; // x1
  int32_t Index; // w2

  callbackFunc = this->fields.callbackFunc;
  this->fields.callbackFunc = 0LL;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.callbackFunc,
    0LL,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  if ( callbackFunc )
  {
    if ( !obj )
      sub_B7769C(v10, v11);
    Index = ListViewObject__get_Index(obj, 0LL);
    FriendOperationItemListViewManager_CallbackFunc__Invoke(callbackFunc, 7, Index, 0LL);
  }
}


void __fastcall FriendOperationItemListViewManager__OnClickListViewOffer(
        FriendOperationItemListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  FriendOperationItemListViewManager_CallbackFunc_o *callbackFunc; // x19
  __int64 v10; // x0
  __int64 v11; // x1
  int32_t Index; // w2

  callbackFunc = this->fields.callbackFunc;
  this->fields.callbackFunc = 0LL;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.callbackFunc,
    0LL,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  if ( callbackFunc )
  {
    if ( !obj )
      sub_B7769C(v10, v11);
    Index = ListViewObject__get_Index(obj, 0LL);
    FriendOperationItemListViewManager_CallbackFunc__Invoke(callbackFunc, 4, Index, 0LL);
  }
}


void __fastcall FriendOperationItemListViewManager__OnClickListViewReject(
        FriendOperationItemListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  FriendOperationItemListViewManager_CallbackFunc_o *callbackFunc; // x19
  __int64 v10; // x0
  __int64 v11; // x1
  int32_t Index; // w2

  callbackFunc = this->fields.callbackFunc;
  this->fields.callbackFunc = 0LL;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.callbackFunc,
    0LL,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  if ( callbackFunc )
  {
    if ( !obj )
      sub_B7769C(v10, v11);
    Index = ListViewObject__get_Index(obj, 0LL);
    FriendOperationItemListViewManager_CallbackFunc__Invoke(callbackFunc, 6, Index, 0LL);
  }
}


void __fastcall FriendOperationItemListViewManager__OnClickListViewRemove(
        FriendOperationItemListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  FriendOperationItemListViewManager_CallbackFunc_o *callbackFunc; // x19
  __int64 v10; // x0
  __int64 v11; // x1
  int32_t Index; // w2

  callbackFunc = this->fields.callbackFunc;
  this->fields.callbackFunc = 0LL;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.callbackFunc,
    0LL,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  if ( callbackFunc )
  {
    if ( !obj )
      sub_B7769C(v10, v11);
    Index = ListViewObject__get_Index(obj, 0LL);
    FriendOperationItemListViewManager_CallbackFunc__Invoke(callbackFunc, 8, Index, 0LL);
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
  __int64 v3; // x0
  __int64 v4; // x1
  struct ListViewSort_o *sort; // x8

  if ( (byte_438EAEE & 1) == 0 )
  {
    sub_B775C4(&SoundManager_TypeInfo);
    byte_438EAEE = 1;
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
      sub_B7769C(v3, v4);
    sort->fields.isAscendingOrder ^= 1u;
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, 3, 0LL);
  }
}


void __fastcall FriendOperationItemListViewManager__OnClickSortKind(
        FriendOperationItemListViewManager_o *this,
        const MethodInfo *method)
{
  int32_t menuKind; // w8
  WebViewManager_o *v4; // x0
  ListViewSort_o *sort; // x20
  CommonUI_o *v6; // x21
  OtherUserSortDialog_CallbackFunc_o *v7; // x22
  __int64 v8; // x0
  __int64 v9; // x1
  int32_t v10; // w1
  WebViewManager_o *Instance; // x0

  if ( (byte_438EAEC & 1) == 0 )
  {
    sub_B775C4(&OtherUserSortDialog_CallbackFunc_TypeInfo);
    sub_B775C4(&Method_FriendOperationItemListViewManager_CloseSortDialog__);
    sub_B775C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B775C4(&SoundManager_TypeInfo);
    byte_438EAEC = 1;
  }
  if ( this->fields.isInput )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    menuKind = this->fields.menuKind;
    if ( menuKind == 2 )
    {
      Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      sort = this->fields.sort;
      v6 = (CommonUI_o *)Instance;
      v7 = (OtherUserSortDialog_CallbackFunc_o *)sub_B77694(OtherUserSortDialog_CallbackFunc_TypeInfo);
      OtherUserSortDialog_CallbackFunc___ctor(
        v7,
        (Il2CppObject *)this,
        Method_FriendOperationItemListViewManager_CloseSortDialog__,
        0LL);
      if ( v6 )
      {
        v10 = 2;
        goto LABEL_14;
      }
LABEL_15:
      sub_B7769C(v8, v9);
    }
    if ( menuKind == 3 )
    {
      v4 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      sort = this->fields.sort;
      v6 = (CommonUI_o *)v4;
      v7 = (OtherUserSortDialog_CallbackFunc_o *)sub_B77694(OtherUserSortDialog_CallbackFunc_TypeInfo);
      OtherUserSortDialog_CallbackFunc___ctor(
        v7,
        (Il2CppObject *)this,
        Method_FriendOperationItemListViewManager_CloseSortDialog__,
        0LL);
      if ( v6 )
      {
        v10 = 1;
LABEL_14:
        CommonUI__OpenOtherUserSortDialog(v6, v10, sort, v7, 0LL);
        return;
      }
      goto LABEL_15;
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
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  FriendOperationItemListViewManager_CallbackFunc_o *callbackFunc; // x19
  __int64 v10; // x0
  __int64 v11; // x1
  int32_t Index; // w2

  callbackFunc = this->fields.callbackFunc;
  this->fields.callbackFunc = 0LL;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.callbackFunc,
    0LL,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  if ( callbackFunc )
  {
    if ( !obj )
      sub_B7769C(v10, v11);
    Index = ListViewObject__get_Index(obj, 0LL);
    FriendOperationItemListViewManager_CallbackFunc__Invoke(callbackFunc, 12, Index, 0LL);
  }
}


void __fastcall FriendOperationItemListViewManager__OnLongPushSkill(
        FriendOperationItemListViewManager_o *this,
        ListViewObject_o *obj,
        int32_t kind,
        const MethodInfo *method)
{
  UIScrollView_o *scrollView; // x0
  FriendOperationItemListViewManager_CallbackFunc_o *callbackFunc; // x22
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  int32_t Index; // w0

  if ( (byte_438EAEB & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_12869/*"ScrollViewEnabled"*/);
    byte_438EAEB = 1;
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
      (System_String_o *)StringLiteral_12869/*"ScrollViewEnabled"*/,
      0.1,
      0LL);
    callbackFunc = this->fields.callbackFunc;
    this->fields.callbackFunc = 0LL;
    sub_B77560((BattleServantConfConponent_o *)&this->fields.callbackFunc, 0LL, v9, v10, v11, v12, v13, v14);
    if ( callbackFunc )
    {
      if ( obj )
      {
        Index = ListViewObject__get_Index(obj, 0LL);
        FriendOperationItemListViewManager_CallbackFunc__Invoke(callbackFunc, kind, Index, 0LL);
        return;
      }
LABEL_10:
      sub_B7769C(scrollView, obj);
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
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  System_Action_o *callbackFunc2; // x20

  if ( (byte_438EAEA & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    byte_438EAEA = 1;
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
          goto LABEL_19;
        emptyMessageBase = this->fields.emptyMessageBase;
        if ( !emptyMessageBase )
          goto LABEL_19;
        UnityEngine_GameObject__SetActive(emptyMessageBase, itemSortList->fields._size < 1, 0LL);
      }
      scrollView = (UnityEngine_Object_o *)this->fields.scrollView;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( !UnityEngine_Object__op_Inequality(scrollView, 0LL, 0LL) )
        goto LABEL_17;
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
LABEL_17:
          callbackFunc2 = this->fields.callbackFunc2;
          this->fields.callbackFunc2 = 0LL;
          sub_B77560((BattleServantConfConponent_o *)&this->fields.callbackFunc2, 0LL, v10, v11, v12, v13, v14, v15);
          if ( callbackFunc2 )
            System_Action__Invoke(callbackFunc2, 0LL);
          return;
        }
      }
LABEL_19:
      sub_B7769C(emptyMessageBase, v7);
    }
  }
}


void __fastcall FriendOperationItemListViewManager__OpenSupportClassBoard(
        FriendOperationItemListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  FriendOperationItemListViewManager_o *v4; // x19
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x21
  int32_t Index; // w20
  FriendOperationItemListViewItem_o *v7; // x20
  __int64 v8; // x10
  _QWORD *v9; // x0
  System_Reflection_MethodBase_o *v10; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *Master_WarQuestSelectionMaster; // x21
  const MethodInfo *v12; // x1
  int32_t scrollBar; // w22
  struct OtherUserGameEntity_o *otherUserGameEntity; // x8
  struct ClassBoardInfo_array *userClassBoardInfo; // x23
  int max_length; // w8
  int32_t v17; // w20
  unsigned int v18; // w24
  __int64 v19; // x21
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  _QWORD **v26; // x24
  __int64 v27; // x22
  __int16 v28; // w8
  __int64 v29; // x22
  __int64 v30; // x22
  __int64 v31; // x22
  System_Int32_array ***v32; // x8
  System_Int32_array **v33; // x1
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7
  _QWORD **v40; // x23
  __int64 v41; // x22
  __int16 v42; // w8
  __int64 v43; // x22
  __int64 v44; // x22
  __int64 v45; // x22
  System_Int32_array ***v46; // x8
  System_Int32_array **v47; // x1
  CommonUI_o *Instance; // x22
  System_Action_o *v49; // x23
  __int64 v50; // x0

  v4 = this;
  if ( (byte_438EAF2 & 1) == 0 )
  {
    sub_B775C4(&System_Action_TypeInfo);
    sub_B775C4(&Method_System_Array_Empty_int___);
    sub_B775C4(&ClassBoardInfo_TypeInfo);
    sub_B775C4(&Method_DataManager_GetMaster_ClassBoardClassMaster___);
    sub_B775C4(&Method_DataManager_GetMaster_ServantMaster___);
    sub_B775C4(&DataManager_TypeInfo);
    sub_B775C4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_B775C4(&FriendOperationItemListViewItem_TypeInfo);
    sub_B775C4(&Method_FriendOperationItemListViewManager_EndCloseClassBoardEffectListDialog__);
    sub_B775C4(&Method_FriendOperationItemListViewManager_OpenSupportClassBoard__);
    sub_B775C4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    this = (FriendOperationItemListViewManager_o *)sub_B775C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_438EAF2 = 1;
  }
  if ( v4->fields.isInput )
  {
    itemList = v4->fields.itemList;
    if ( itemList )
    {
      if ( obj )
      {
        Index = ListViewObject__get_Index(obj, 0LL);
        if ( itemList->fields._size <= (unsigned int)Index )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_42293568(0LL);
        v7 = (FriendOperationItemListViewItem_o *)itemList->fields._items->m_Items[Index];
        if ( !v7 )
          return;
        v8 = *(&FriendOperationItemListViewItem_TypeInfo->_2.bitflags2 + 1);
        if ( *(&v7->klass->_2.bitflags2 + 1) < (unsigned int)v8
          || (FriendOperationItemListViewItem_c *)v7->klass->_2.typeHierarchy[v8 - 1] != FriendOperationItemListViewItem_TypeInfo )
        {
          return;
        }
        v4->fields.isInput = 0;
        v9 = Method_FriendOperationItemListViewManager_OpenSupportClassBoard__;
        if ( (*((_BYTE *)Method_FriendOperationItemListViewManager_OpenSupportClassBoard__ + 75) & 2) != 0 )
          v9 = (_QWORD *)sub_B775CC(Method_FriendOperationItemListViewManager_OpenSupportClassBoard__);
        v10 = (System_Reflection_MethodBase_o *)sub_B775A8(v9, v9[3]);
        OverwriteAssetSoundName__PlaySystemSe(v10, 0, 0LL);
        if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !DataManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        }
        Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1D18390 *)Method_DataManager_GetMaster_ServantMaster___);
        this = (FriendOperationItemListViewManager_o *)FriendOperationItemListViewItem__get_SvtId(v7, v12);
        if ( Master_WarQuestSelectionMaster )
        {
          this = (FriendOperationItemListViewManager_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                                           Master_WarQuestSelectionMaster,
                                                           (int32_t)this,
                                                           (const MethodInfo_21FB894 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
          if ( this )
          {
            scrollBar = (int32_t)this->fields.scrollBar;
            this = (FriendOperationItemListViewManager_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1D18390 *)Method_DataManager_GetMaster_ClassBoardClassMaster___);
            if ( this )
            {
              this = (FriendOperationItemListViewManager_o *)ClassBoardClassMaster__GetClassBoardBaseId(
                                                               (ClassBoardClassMaster_o *)this,
                                                               scrollBar,
                                                               0LL);
              otherUserGameEntity = v7->fields.otherUserGameEntity;
              if ( otherUserGameEntity )
              {
                userClassBoardInfo = otherUserGameEntity->fields.userClassBoardInfo;
                if ( userClassBoardInfo )
                {
                  max_length = userClassBoardInfo->max_length;
                  v17 = (int)this;
                  if ( max_length < 1 )
                  {
LABEL_29:
                    v19 = sub_B77694(ClassBoardInfo_TypeInfo);
                    ClassBoardInfo___ctor((ClassBoardInfo_o *)v19, 0LL);
                    if ( v19 )
                    {
                      *(_DWORD *)(v19 + 16) = v17;
                      v26 = (_QWORD **)Method_System_Array_Empty_int___;
                      v27 = **((_QWORD **)Method_System_Array_Empty_int___ + 6);
                      v28 = *(_WORD *)(v27 + 306);
                      if ( (v28 & 1) == 0 )
                      {
                        sub_B0F2C4(**((_QWORD **)Method_System_Array_Empty_int___ + 6));
                        v28 = *(_WORD *)(v27 + 306);
                      }
                      if ( (v28 & 0x400) != 0 )
                      {
                        v29 = *v26[6];
                        if ( (*(_BYTE *)(v29 + 306) & 1) == 0 )
                          sub_B0F2C4(*v26[6]);
                        if ( !*(_DWORD *)(v29 + 224) )
                        {
                          v30 = *v26[6];
                          if ( (*(_BYTE *)(v30 + 306) & 1) == 0 )
                            sub_B0F2C4(*v26[6]);
                          j_il2cpp_runtime_class_init_0(v30);
                        }
                      }
                      v31 = *v26[6];
                      if ( (*(_BYTE *)(v31 + 306) & 1) == 0 )
                        sub_B0F2C4(*v26[6]);
                      v32 = *(System_Int32_array ****)(v31 + 184);
                      v33 = *v32;
                      *(_QWORD *)(v19 + 24) = *v32;
                      sub_B77560((BattleServantConfConponent_o *)(v19 + 24), v33, v20, v21, v22, v23, v24, v25);
                      v40 = (_QWORD **)Method_System_Array_Empty_int___;
                      v41 = **((_QWORD **)Method_System_Array_Empty_int___ + 6);
                      v42 = *(_WORD *)(v41 + 306);
                      if ( (v42 & 1) == 0 )
                      {
                        sub_B0F2C4(**((_QWORD **)Method_System_Array_Empty_int___ + 6));
                        v42 = *(_WORD *)(v41 + 306);
                      }
                      if ( (v42 & 0x400) != 0 )
                      {
                        v43 = *v40[6];
                        if ( (*(_BYTE *)(v43 + 306) & 1) == 0 )
                          sub_B0F2C4(*v40[6]);
                        if ( !*(_DWORD *)(v43 + 224) )
                        {
                          v44 = *v40[6];
                          if ( (*(_BYTE *)(v44 + 306) & 1) == 0 )
                            sub_B0F2C4(*v40[6]);
                          j_il2cpp_runtime_class_init_0(v44);
                        }
                      }
                      v45 = *v40[6];
                      if ( (*(_BYTE *)(v45 + 306) & 1) == 0 )
                        sub_B0F2C4(*v40[6]);
                      v46 = *(System_Int32_array ****)(v45 + 184);
                      v47 = *v46;
                      *(_QWORD *)(v19 + 32) = *v46;
                      sub_B77560((BattleServantConfConponent_o *)(v19 + 32), v47, v34, v35, v36, v37, v38, v39);
LABEL_53:
                      Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                      v49 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
                      System_Action___ctor(
                        v49,
                        (Il2CppObject *)v4,
                        Method_FriendOperationItemListViewManager_EndCloseClassBoardEffectListDialog__,
                        0LL);
                      if ( Instance )
                      {
                        CommonUI__OpenClassBoardEffectListDialog(
                          Instance,
                          1,
                          v17,
                          0,
                          v49,
                          1,
                          (ClassBoardInfo_o *)v19,
                          0LL);
                        return;
                      }
                    }
                  }
                  else
                  {
                    v18 = 0;
                    while ( 1 )
                    {
                      if ( v18 >= max_length )
                      {
                        v50 = sub_B776C8(this);
                        sub_B77668(v50, 0LL);
                      }
                      v19 = (__int64)userClassBoardInfo->m_Items[v18];
                      if ( !v19 )
                        break;
                      if ( *(_DWORD *)(v19 + 16) == v17 )
                      {
                        this = (FriendOperationItemListViewManager_o *)ClassBoardInfo__IsReleasedClassId(
                                                                         (ClassBoardInfo_o *)v19,
                                                                         scrollBar,
                                                                         0LL);
                        if ( ((unsigned __int8)this & 1) != 0 )
                          goto LABEL_53;
                      }
                      max_length = userClassBoardInfo->max_length;
                      if ( (int)++v18 >= max_length )
                        goto LABEL_29;
                    }
                  }
                }
              }
            }
          }
        }
      }
      sub_B7769C(this, obj);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FriendOperationItemListViewManager__RequestInto(
        FriendOperationItemListViewManager_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  System_Collections_Generic_List_FriendOperationItemListViewObject__o *ObjectList; // x0
  __int64 v5; // x1
  System_Collections_Generic_List_FriendOperationItemListViewObject__o *v6; // x20
  signed __int64 size; // x8
  unsigned __int64 v8; // x24
  int v9; // w23
  FriendOperationItemListViewObject_o *v10; // x21
  System_Action_o *v11; // x22
  const MethodInfo *v12; // x3
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  if ( (byte_438EAE9 & 1) == 0 )
  {
    sub_B775C4(&System_Action_TypeInfo);
    sub_B775C4(&Method_FriendOperationItemListViewManager_OnMoveEnd__);
    sub_B775C4(&Method_System_Collections_Generic_List_FriendOperationItemListViewObject__get_Count__);
    sub_B775C4(&Method_System_Collections_Generic_List_FriendOperationItemListViewObject__get_Item__);
    sub_B775C4(&StringLiteral_10218/*"OnMoveEnd"*/);
    byte_438EAE9 = 1;
  }
  ListViewManager__ClippingItems((ListViewManager_o *)this, 1, 0, 0LL);
  ListViewManager__DragMaskStart((ListViewManager_o *)this, 0LL);
  ObjectList = FriendOperationItemListViewManager__get_ObjectList(this, v3);
  if ( !ObjectList )
LABEL_15:
    sub_B7769C(ObjectList, v5);
  v6 = ObjectList;
  this->fields.callbackCount = ObjectList->fields._size;
  LODWORD(size) = ObjectList->fields._size;
  if ( (int)size < 1 )
    goto LABEL_14;
  v8 = 0LL;
  v9 = 0;
  do
  {
    if ( v8 >= (unsigned int)size )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_42293568(0LL);
    v10 = v6->fields._items->m_Items[v8];
    if ( ListViewManager__ClippingItem((ListViewManager_o *)this, (ListViewObject_o *)v10, 0LL) )
    {
      v11 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
      System_Action___ctor(v11, (Il2CppObject *)this, Method_FriendOperationItemListViewManager_OnMoveEnd__, 0LL);
      if ( !v10 )
        goto LABEL_15;
      ++v9;
      zero = UnityEngine_Vector3__get_zero(0LL);
      FriendOperationItemListViewObject__Init(v10, 4, v11, 0.1, *(UnityEngine_Vector3_o *)&zero.fields.y, v12);
    }
    else
    {
      --this->fields.callbackCount;
    }
    size = v6->fields._size;
    ++v8;
  }
  while ( (__int64)v8 < size );
  if ( !v9 )
  {
LABEL_14:
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10218/*"OnMoveEnd"*/,
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
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *ObjectList; // x0
  __int64 v8; // x1
  int32_t size; // w8
  Il2CppObject *current; // x21
  System_Action_o *v11; // x22
  __int64 v12; // x0
  __int64 v13; // x1
  const MethodInfo *v14; // x3
  System_Collections_Generic_List_Enumerator_T__o v15; // [xsp+8h] [xbp-58h] BYREF
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  if ( (byte_438EAE7 & 1) == 0 )
  {
    sub_B775C4(&System_Action_TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_FriendOperationItemListViewObject__Dispose__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_FriendOperationItemListViewObject__MoveNext__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_FriendOperationItemListViewObject__get_Current__);
    sub_B775C4(&Method_FriendOperationItemListViewManager_OnMoveEnd__);
    sub_B775C4(&Method_System_Collections_Generic_List_FriendOperationItemListViewObject__GetEnumerator__);
    sub_B775C4(&Method_System_Collections_Generic_List_FriendOperationItemListViewObject__get_Count__);
    sub_B775C4(&StringLiteral_10218/*"OnMoveEnd"*/);
    byte_438EAE7 = 1;
  }
  memset(&v15, 0, sizeof(v15));
  ObjectList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)FriendOperationItemListViewManager__get_ObjectList(
                                                                                                this,
                                                                                                *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_B7769C(0LL, v8);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10218/*"OnMoveEnd"*/,
      delay,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v15,
      ObjectList,
      (const MethodInfo_3054114 *)Method_System_Collections_Generic_List_FriendOperationItemListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v15,
              (const MethodInfo_225C720 *)Method_System_Collections_Generic_List_Enumerator_FriendOperationItemListViewObject__MoveNext__) )
    {
      current = v15.fields.current;
      v11 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
      System_Action___ctor(v11, (Il2CppObject *)this, Method_FriendOperationItemListViewManager_OnMoveEnd__, 0LL);
      if ( !current )
        sub_B7769C(v12, v13);
      zero = UnityEngine_Vector3__get_zero(0LL);
      FriendOperationItemListViewObject__Init(
        (FriendOperationItemListViewObject_o *)current,
        mode,
        v11,
        delay,
        *(UnityEngine_Vector3_o *)&zero.fields.y,
        v14);
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v15,
      (const MethodInfo_225C71C *)Method_System_Collections_Generic_List_Enumerator_FriendOperationItemListViewObject__Dispose__);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FriendOperationItemListViewManager__RequestListObject_32005140(
        FriendOperationItemListViewManager_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *ObjectList; // x0
  __int64 v6; // x1
  int32_t size; // w8
  Il2CppObject *current; // x21
  System_Action_o *v9; // x22
  __int64 v10; // x0
  __int64 v11; // x1
  const MethodInfo *v12; // x3
  System_Collections_Generic_List_Enumerator_T__o v13; // [xsp+8h] [xbp-58h] BYREF
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  if ( (byte_438EAE8 & 1) == 0 )
  {
    sub_B775C4(&System_Action_TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_FriendOperationItemListViewObject__Dispose__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_FriendOperationItemListViewObject__MoveNext__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_FriendOperationItemListViewObject__get_Current__);
    sub_B775C4(&Method_FriendOperationItemListViewManager_OnMoveEnd__);
    sub_B775C4(&Method_System_Collections_Generic_List_FriendOperationItemListViewObject__GetEnumerator__);
    sub_B775C4(&Method_System_Collections_Generic_List_FriendOperationItemListViewObject__get_Count__);
    sub_B775C4(&StringLiteral_10218/*"OnMoveEnd"*/);
    byte_438EAE8 = 1;
  }
  memset(&v13, 0, sizeof(v13));
  ObjectList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)FriendOperationItemListViewManager__get_ObjectList(
                                                                                                this,
                                                                                                *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_B7769C(0LL, v6);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10218/*"OnMoveEnd"*/,
      0.0,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v13,
      ObjectList,
      (const MethodInfo_3054114 *)Method_System_Collections_Generic_List_FriendOperationItemListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v13,
              (const MethodInfo_225C720 *)Method_System_Collections_Generic_List_Enumerator_FriendOperationItemListViewObject__MoveNext__) )
    {
      current = v13.fields.current;
      v9 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
      System_Action___ctor(v9, (Il2CppObject *)this, Method_FriendOperationItemListViewManager_OnMoveEnd__, 0LL);
      if ( !current )
        sub_B7769C(v10, v11);
      zero = UnityEngine_Vector3__get_zero(0LL);
      FriendOperationItemListViewObject__Init(
        (FriendOperationItemListViewObject_o *)current,
        mode,
        v9,
        0.0,
        *(UnityEngine_Vector3_o *)&zero.fields.y,
        v12);
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v13,
      (const MethodInfo_225C71C *)Method_System_Collections_Generic_List_Enumerator_FriendOperationItemListViewObject__Dispose__);
  }
}


void __fastcall FriendOperationItemListViewManager__ScrollViewEnabled(
        FriendOperationItemListViewManager_o *this,
        const MethodInfo *method)
{
  UnityEngine_Behaviour_o *scrollView; // x0

  scrollView = (UnityEngine_Behaviour_o *)this->fields.scrollView;
  if ( !scrollView )
    sub_B7769C(0LL, method);
  UnityEngine_Behaviour__set_enabled(scrollView, 1, 0LL);
}


void __fastcall FriendOperationItemListViewManager__SetClassId(
        FriendOperationItemListViewManager_o *this,
        int32_t classPos,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x0
  const MethodInfo *v6; // x2
  __int64 v7; // x10
  __int64 v8; // x1
  struct System_Collections_Generic_List_ListViewItem__o *itemSortList; // x0
  struct ListViewSort_o *sort; // x8
  __int64 v11; // x1
  int v12; // w20
  const MethodInfo *v13; // x2
  struct System_Collections_Generic_List_ListViewItem__o *v14; // x8
  ListViewItem_o *v15; // x8
  struct System_Collections_Generic_List_ListViewItem__o *v16; // x20
  int32_t size; // w8
  ListViewItem_o *v18; // x8
  struct System_Collections_Generic_List_ListViewItem__o *v19; // x8
  int v20; // w9
  ListViewItem_o *v21; // x8
  System_Collections_Generic_List_Enumerator_T__o v22; // [xsp+8h] [xbp-78h] BYREF
  int v23[2]; // [xsp+20h] [xbp-60h]
  int v24; // [xsp+28h] [xbp-58h]
  System_Collections_Generic_List_Enumerator_T__o i; // [xsp+30h] [xbp-50h] BYREF

  if ( (byte_438EAF0 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__);
    sub_B775C4(&FriendOperationItemListViewItem_TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    sub_B775C4(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_B775C4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    byte_438EAF0 = 1;
  }
  memset(&i, 0, sizeof(i));
  v24 = 0;
  itemList = this->fields.itemList;
  if ( itemList )
  {
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v22,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)itemList,
      (const MethodInfo_3054114 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    i = v22;
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &i,
              (const MethodInfo_225C720 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__) )
    {
      if ( i.fields.current )
      {
        v7 = *(&FriendOperationItemListViewItem_TypeInfo->_2.bitflags2 + 1);
        if ( *(&i.fields.current->klass->_2.bitflags2 + 1) >= (unsigned int)v7
          && (FriendOperationItemListViewItem_c *)i.fields.current->klass->_2.typeHierarchy[v7 - 1] == FriendOperationItemListViewItem_TypeInfo )
        {
          FriendOperationItemListViewItem__AnalyzeEntity(
            (FriendOperationItemListViewItem_o *)i.fields.current,
            classPos,
            v6);
        }
      }
    }
    v23[0] = 71;
    v24 = 1;
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &i,
      (const MethodInfo_225C71C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    v24 = 0;
    itemSortList = this->fields.itemSortList;
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
        System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
          &v22,
          (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)itemSortList,
          (const MethodInfo_3054114 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
        for ( i = v22;
              System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                &i,
                (const MethodInfo_225C720 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
              ((void (*)(void))i.fields.current->klass->vtable[4].method)() )
        {
          if ( !i.fields.current )
            sub_B7769C(0LL, v11);
        }
        v23[0] = 190;
        v12 = ++v24;
        System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
          &i,
          (const MethodInfo_225C71C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
        if ( v12 && v23[v12 - 1] == 190 )
          v24 = v12 - 1;
        v14 = this->fields.itemSortList;
        if ( v14 )
        {
          if ( v14->fields._size < 1 )
            goto LABEL_34;
          v15 = v14->fields._items->m_Items[0];
          if ( !v15 )
            goto LABEL_36;
          v15->fields.isTermination = 1;
          v16 = this->fields.itemSortList;
          if ( !v16 )
            goto LABEL_36;
          size = v16->fields._size;
          if ( !size )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_42293568(0LL);
          v18 = v16->fields._items->m_Items[size - 1];
          if ( !v18 )
            goto LABEL_36;
          v18->fields.isTermination = 1;
          v19 = this->fields.itemSortList;
          if ( !v19 )
            goto LABEL_36;
          v20 = v19->fields._size;
          if ( v20 < 3 )
          {
LABEL_34:
            FriendOperationItemListViewManager__SetMode_32004036(this, 5, v13);
            return;
          }
          v21 = v19->fields._items->m_Items[v20 - 1];
          if ( v21 )
          {
            v21->fields.isTerminationSpace = 1;
            goto LABEL_34;
          }
        }
      }
LABEL_36:
      sub_B7769C(itemSortList, v8);
    }
  }
}


void __fastcall FriendOperationItemListViewManager__SetMode(
        FriendOperationItemListViewManager_o *this,
        int32_t mode,
        FriendOperationItemListViewManager_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  const MethodInfo *v10; // x2

  this->fields.callbackFunc = callback;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.callbackFunc,
    (System_Int32_array **)callback,
    (System_String_array **)callback,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  FriendOperationItemListViewManager__SetMode_32004036(this, mode, v10);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FriendOperationItemListViewManager__SetMode_32004036(
        FriendOperationItemListViewManager_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  void *emptyMessageBase; // x0
  __int64 v6; // x1
  int32_t v7; // w8
  void *v8; // x20
  int v9; // w8
  __int64 v10; // x23
  FriendOperationItemListViewObject_o *v11; // x22
  System_Action_o *v12; // x0
  const MethodInfo *v13; // x1
  const MethodInfo *v14; // x2
  int v15; // s0
  System_String_o *v16; // x1
  const MethodInfo *v17; // x1
  int32_t v18; // w8
  void *v19; // x20
  int v20; // w8
  __int64 v21; // x23
  FriendOperationItemListViewObject_o *v22; // x21
  System_Action_o *v23; // x22
  const MethodInfo *v24; // x3
  const MethodInfo *v25; // x1
  int32_t v26; // w8
  void *v27; // x20
  int v28; // w8
  __int64 v29; // x23
  FriendOperationItemListViewObject_o *v30; // x21
  System_Action_o *v31; // x22
  const MethodInfo *v32; // x3
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED
  UnityEngine_Vector3_o v34; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  if ( (byte_438EAE6 & 1) == 0 )
  {
    sub_B775C4(&System_Action_TypeInfo);
    sub_B775C4(&Method_FriendOperationItemListViewManager_OnMoveEnd__);
    sub_B775C4(&Method_System_Collections_Generic_List_FriendOperationItemListViewObject__get_Count__);
    sub_B775C4(&Method_System_Collections_Generic_List_FriendOperationItemListViewObject__get_Item__);
    sub_B775C4(&StringLiteral_10218/*"OnMoveEnd"*/);
    sub_B775C4(&StringLiteral_11644/*"RequestInto"*/);
    byte_438EAE6 = 1;
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
          goto LABEL_39;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)emptyMessageBase, 0, 0LL);
        v15 = 0;
        v16 = (System_String_o *)StringLiteral_11644/*"RequestInto"*/;
        goto LABEL_38;
      case 2:
        FriendOperationItemListViewManager__RequestListObject_32005140(this, 3, v14);
        return;
      case 3:
        ListViewManager__DragMaskStart((ListViewManager_o *)this, 0LL);
        emptyMessageBase = FriendOperationItemListViewManager__get_ClippingObjectList(this, v17);
        if ( !emptyMessageBase )
          goto LABEL_39;
        v18 = *((_DWORD *)emptyMessageBase + 6);
        v19 = emptyMessageBase;
        if ( v18 < 1 )
          goto LABEL_37;
        this->fields.callbackCount = v18;
        v20 = *((_DWORD *)emptyMessageBase + 6);
        if ( v20 < 1 )
          return;
        v21 = 0LL;
        while ( 1 )
        {
          if ( v20 <= (unsigned int)v21 )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_42293568(0LL);
          v22 = *(FriendOperationItemListViewObject_o **)(*((_QWORD *)v19 + 2) + 8 * v21 + 32);
          v23 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
          System_Action___ctor(v23, (Il2CppObject *)this, Method_FriendOperationItemListViewManager_OnMoveEnd__, 0LL);
          if ( !v22 )
            break;
          zero = UnityEngine_Vector3__get_zero(0LL);
          FriendOperationItemListViewObject__Init(v22, 5, v23, 0.1, *(UnityEngine_Vector3_o *)&zero.fields.y, v24);
          v20 = *((_DWORD *)v19 + 6);
          if ( (int)++v21 >= v20 )
            return;
        }
        goto LABEL_39;
      case 4:
        ListViewManager__DragMaskStart((ListViewManager_o *)this, 0LL);
        emptyMessageBase = FriendOperationItemListViewManager__get_ClippingObjectList(this, v25);
        if ( !emptyMessageBase )
          goto LABEL_39;
        v26 = *((_DWORD *)emptyMessageBase + 6);
        v27 = emptyMessageBase;
        if ( v26 < 1 )
          goto LABEL_37;
        this->fields.callbackCount = v26;
        v28 = *((_DWORD *)emptyMessageBase + 6);
        if ( v28 < 1 )
          return;
        v29 = 0LL;
        break;
      default:
        return;
    }
    while ( 1 )
    {
      if ( v28 <= (unsigned int)v29 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42293568(0LL);
      v30 = *(FriendOperationItemListViewObject_o **)(*((_QWORD *)v27 + 2) + 8 * v29 + 32);
      v31 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
      System_Action___ctor(v31, (Il2CppObject *)this, Method_FriendOperationItemListViewManager_OnMoveEnd__, 0LL);
      if ( !v30 )
        break;
      v34 = UnityEngine_Vector3__get_zero(0LL);
      FriendOperationItemListViewObject__Init(v30, 6, v31, 0.1, *(UnityEngine_Vector3_o *)&v34.fields.y, v32);
      v28 = *((_DWORD *)v27 + 6);
      if ( (int)++v29 >= v28 )
        return;
    }
LABEL_39:
    sub_B7769C(emptyMessageBase, v6);
  }
  emptyMessageBase = FriendOperationItemListViewManager__get_ObjectList(this, *(const MethodInfo **)&mode);
  if ( !emptyMessageBase )
    goto LABEL_39;
  v7 = *((_DWORD *)emptyMessageBase + 6);
  v8 = emptyMessageBase;
  if ( v7 < 1 )
  {
LABEL_37:
    this->fields.callbackCount = 1;
    v16 = (System_String_o *)StringLiteral_10218/*"OnMoveEnd"*/;
    v15 = 1045220557;
LABEL_38:
    UnityEngine_MonoBehaviour__Invoke((UnityEngine_MonoBehaviour_o *)this, v16, *(float *)&v15, 0LL);
  }
  else
  {
    this->fields.callbackCount = v7;
    v9 = *((_DWORD *)emptyMessageBase + 6);
    if ( v9 >= 1 )
    {
      v10 = 0LL;
      while ( 1 )
      {
        if ( v9 <= (unsigned int)v10 )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_42293568(0LL);
        v11 = *(FriendOperationItemListViewObject_o **)(*((_QWORD *)v8 + 2) + 8 * v10 + 32);
        v12 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
        System_Action___ctor(v12, (Il2CppObject *)this, Method_FriendOperationItemListViewManager_OnMoveEnd__, 0LL);
        if ( !v11 )
          break;
        UnityEngine_Vector3__get_zero(0LL);
        if ( (byte_438EAFC & 1) == 0 )
        {
          sub_B775C4(&FriendOperationItemListViewItem_TypeInfo);
          byte_438EAFC = 1;
        }
        FriendOperationItemListViewObject__SetupDisp(v11, v13);
        v9 = *((_DWORD *)v8 + 6);
        if ( (int)++v10 >= v9 )
          return;
      }
      goto LABEL_39;
    }
  }
}


void __fastcall FriendOperationItemListViewManager__SetMode_32005004(
        FriendOperationItemListViewManager_o *this,
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
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.callbackFunc2,
    (System_Int32_array **)callback,
    (System_String_array **)callback,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  FriendOperationItemListViewManager__SetMode_32004036(this, mode, v10);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FriendOperationItemListViewManager__SetObjectItem(
        FriendOperationItemListViewManager_o *this,
        ListViewObject_o *obj,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  FriendOperationItemListViewManager_o *v5; // x20
  __int64 v6; // x10
  int32_t initMode; // w20
  const MethodInfo *v8; // x3
  int v9; // s1
  int32_t v12; // w1

  v5 = this;
  if ( (byte_438EAE5 & 1) == 0 )
  {
    this = (FriendOperationItemListViewManager_o *)sub_B775C4(&FriendOperationItemListViewObject_TypeInfo);
    byte_438EAE5 = 1;
  }
  if ( !obj
    || (v6 = *(&FriendOperationItemListViewObject_TypeInfo->_2.bitflags2 + 1),
        *(&obj->klass->_2.bitflags2 + 1) < (unsigned int)v6)
    || (FriendOperationItemListViewObject_c *)obj->klass->_2.typeHierarchy[v6 - 1] != FriendOperationItemListViewObject_TypeInfo )
  {
    sub_B7769C(this, obj);
  }
  initMode = v5->fields.initMode;
  *(UnityEngine_Vector3_o *)(&v9 - 1) = UnityEngine_Vector3__get_zero(0LL);
  if ( initMode == 2 )
    v12 = 3;
  else
    v12 = 2;
  FriendOperationItemListViewObject__Init(
    (FriendOperationItemListViewObject_o *)obj,
    v12,
    0LL,
    0.0,
    *(UnityEngine_Vector3_o *)&v9,
    v8);
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
  _BOOL4 isAscendingOrder; // w8
  System_String_o **v13; // x9
  System_String_o **v14; // x10
  System_String_o **v15; // x8
  System_String_o **v16; // x8
  struct ListViewSort_o *v17; // x8

  if ( (byte_438EAEF & 1) == 0 )
  {
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&StringLiteral_17360/*"btn_sort_up"*/);
    sub_B775C4(&StringLiteral_17444/*"btn_txt_up"*/);
    sub_B775C4(&StringLiteral_17400/*"btn_txt_new"*/);
    sub_B775C4(&StringLiteral_17390/*"btn_txt_down"*/);
    sub_B775C4(&StringLiteral_17407/*"btn_txt_old"*/);
    sub_B775C4(&StringLiteral_17357/*"btn_sort_down"*/);
    byte_438EAEF = 1;
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
      goto LABEL_38;
    v6 = this->fields.sortKindLabel;
    sort = (ListViewSort_o *)ListViewSort__GetSortKindButtonText(sort, 0LL);
    if ( !v6 )
      goto LABEL_38;
    UILabel__set_text(v6, (System_String_o *)sort, 0LL);
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
    v8 = this->fields.sort;
    if ( !v8 )
      goto LABEL_38;
    sortKind = v8->fields.sortKind;
    if ( sortKind == 1 || sortKind == 11 || (unsigned int)(sortKind - 17) <= 1 )
    {
      sort = (ListViewSort_o *)this->fields.sortExplanationSprite;
      if ( !sort )
        goto LABEL_38;
      v10 = (System_String_o **)(v8->fields.isAscendingOrder ? &StringLiteral_17407/*"btn_txt_old"*/ : &StringLiteral_17400/*"btn_txt_new"*/);
      UISprite__set_spriteName((UISprite_o *)sort, *v10, 0LL);
      v11 = this->fields.sort;
      if ( !v11 )
        goto LABEL_38;
      sort = (ListViewSort_o *)this->fields.sortOrderSprite;
      if ( !sort )
        goto LABEL_38;
      isAscendingOrder = v11->fields.isAscendingOrder;
      v13 = (System_String_o **)&StringLiteral_17357/*"btn_sort_down"*/;
      v14 = (System_String_o **)&StringLiteral_17360/*"btn_sort_up"*/;
    }
    else
    {
      sort = (ListViewSort_o *)this->fields.sortExplanationSprite;
      if ( !sort )
        goto LABEL_38;
      v16 = (System_String_o **)(v8->fields.isAscendingOrder ? &StringLiteral_17444/*"btn_txt_up"*/ : &StringLiteral_17390/*"btn_txt_down"*/);
      UISprite__set_spriteName((UISprite_o *)sort, *v16, 0LL);
      v17 = this->fields.sort;
      if ( !v17 )
        goto LABEL_38;
      sort = (ListViewSort_o *)this->fields.sortOrderSprite;
      if ( !sort )
        goto LABEL_38;
      isAscendingOrder = v17->fields.isAscendingOrder;
      v13 = (System_String_o **)&StringLiteral_17360/*"btn_sort_up"*/;
      v14 = (System_String_o **)&StringLiteral_17357/*"btn_sort_down"*/;
    }
    if ( isAscendingOrder )
      v15 = v13;
    else
      v15 = v14;
    UISprite__set_spriteName((UISprite_o *)sort, *v15, 0LL);
    sort = (ListViewSort_o *)this->fields.sortExplanationSprite;
    if ( sort )
    {
      ((void (__fastcall *)(ListViewSort_o *, void *))sort->klass[2]._1.typeMetadataHandle)(
        sort,
        sort->klass[2]._1.interopData);
      return;
    }
LABEL_38:
    sub_B7769C(sort, v4);
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
    sub_B7769C(this, kind);
  sort->fields.sortKind = kind;
}


void __fastcall FriendOperationItemListViewManager__SetupClassBoardInfo(
        FriendOperationItemListViewManager_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_int__int__o *classBoardMaxDictionary; // x0
  BattleServantConfConponent_o *p_classBoardMaxDictionary; // x20
  System_Collections_Generic_Dictionary_int__int__o *v5; // x19
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *Master_WarQuestSelectionMaster; // x0
  __int64 v13; // x1
  __int64 v14; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v17; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v20; // x8
  unsigned __int64 v21; // x10
  int32_t *v22; // x11
  __int64 v23; // x0
  __int64 v24; // x0
  __int64 v25; // x21
  __int64 v26; // x9
  ClassBoardSquareMaster_o *v27; // x0
  __int64 v28; // x1
  ClassBoardSquareEntity_array *OtherThanNoneEntity; // x0
  __int64 v30; // x1
  System_Collections_Generic_IEnumerator_T__c *v31; // x8
  unsigned __int64 v32; // x10
  int32_t *v33; // x11
  __int64 v34; // x0

  if ( (byte_438EAF1 & 1) == 0 )
  {
    sub_B775C4(&ClassBoardBaseEntity_TypeInfo);
    sub_B775C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
    sub_B775C4(&Method_DataManager_GetMaster_ClassBoardBaseMaster___);
    sub_B775C4(&Method_DataManager_GetMaster_ClassBoardSquareMaster___);
    sub_B775C4(&DataManager_TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_int__int__Add__);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_int__int__Clear__);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_int__int___ctor__);
    sub_B775C4(&System_Collections_Generic_Dictionary_int__int__TypeInfo);
    sub_B775C4(&System_IDisposable_TypeInfo);
    sub_B775C4(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo);
    sub_B775C4(&System_Collections_IEnumerator_TypeInfo);
    byte_438EAF1 = 1;
  }
  classBoardMaxDictionary = this->fields.classBoardMaxDictionary;
  p_classBoardMaxDictionary = (BattleServantConfConponent_o *)&this->fields.classBoardMaxDictionary;
  if ( classBoardMaxDictionary )
  {
    System_Collections_Generic_Dictionary_int__int___Clear(
      classBoardMaxDictionary,
      (const MethodInfo_2FE8F3C *)Method_System_Collections_Generic_Dictionary_int__int__Clear__);
  }
  else
  {
    v5 = (System_Collections_Generic_Dictionary_int__int__o *)sub_B77694(System_Collections_Generic_Dictionary_int__int__TypeInfo);
    System_Collections_Generic_Dictionary_int__int____ctor(
      v5,
      (const MethodInfo_2FE81CC *)Method_System_Collections_Generic_Dictionary_int__int___ctor__);
    p_classBoardMaxDictionary->klass = (BattleServantConfConponent_c *)v5;
    sub_B77560(p_classBoardMaxDictionary, (System_Int32_array **)v5, v6, v7, v8, v9, v10, v11);
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1D18390 *)Method_DataManager_GetMaster_ClassBoardBaseMaster___);
  if ( !Master_WarQuestSelectionMaster
    || (Master_WarQuestSelectionMaster = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)Master_WarQuestSelectionMaster[1].klass) == 0LL )
  {
    sub_B7769C(Master_WarQuestSelectionMaster, v13);
  }
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 Master_WarQuestSelectionMaster,
                 (const MethodInfo_2CC56C8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B7769C(0LL, v14);
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v17 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v17;
        p_offset += 4;
        if ( v17 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_16;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_16:
      p_method = sub_B0F4C0(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v20 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v21 = 0LL;
      v22 = &v20->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v22 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v21;
        v22 += 4;
        if ( v21 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_23;
      }
      v23 = (__int64)&v20->vtable[*v22].method;
    }
    else
    {
LABEL_23:
      v23 = sub_B0F4C0(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v24 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v23)(
            Enumerator,
            *(_QWORD *)(v23 + 8));
    v25 = v24;
    if ( v24 )
    {
      v26 = *(&ClassBoardBaseEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(unsigned __int8 *)(*(_QWORD *)v24 + 300LL) < (unsigned int)v26
        || *(ClassBoardBaseEntity_c **)(*(_QWORD *)(*(_QWORD *)v24 + 200LL) + 8 * v26 - 8) != ClassBoardBaseEntity_TypeInfo )
      {
        sub_B77990(v24);
LABEL_44:
        sub_B7769C(v27, v28);
      }
    }
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    v27 = (ClassBoardSquareMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1D18390 *)Method_DataManager_GetMaster_ClassBoardSquareMaster___);
    if ( !v25 )
      goto LABEL_44;
    if ( !v27 )
      sub_B7769C(0LL, v28);
    OtherThanNoneEntity = ClassBoardSquareMaster__GetOtherThanNoneEntity(v27, *(_DWORD *)(v25 + 16), 0LL);
    if ( OtherThanNoneEntity )
    {
      if ( !p_classBoardMaxDictionary->klass )
        sub_B7769C(OtherThanNoneEntity, v30);
      System_Collections_Generic_Dictionary_int__int___Add(
        (System_Collections_Generic_Dictionary_int__int__o *)p_classBoardMaxDictionary->klass,
        *(_DWORD *)(v25 + 16),
        OtherThanNoneEntity->max_length,
        (const MethodInfo_2FE8D70 *)Method_System_Collections_Generic_Dictionary_int__int__Add__);
    }
  }
  v31 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v32 = 0LL;
    v33 = &v31->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v33 - 1) != System_IDisposable_TypeInfo )
    {
      ++v32;
      v33 += 4;
      if ( v32 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_40;
    }
    v34 = (__int64)&v31->vtable[*v33].method;
  }
  else
  {
LABEL_40:
    v34 = sub_B0F4C0(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v34)(Enumerator, *(_QWORD *)(v34 + 8));
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

  if ( (byte_438EAD9 & 1) == 0 )
  {
    sub_B775C4(&FriendOperationItemListViewManager_CallbackFunc_TypeInfo);
    byte_438EAD9 = 1;
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
    v8 = sub_B6BFDC(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_B77990(v7);
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

  if ( (byte_438EADB & 1) == 0 )
  {
    sub_B775C4(&System_Action_TypeInfo);
    byte_438EADB = 1;
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
    v8 = sub_B6BFDC(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_B77990(v7);
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
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v3; // x19
  __int64 v4; // x1
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  Il2CppObject *current; // x21
  _BOOL8 v7; // x0
  __int64 v8; // x1
  FriendOperationItemListViewObject_o *Component_srcLineSprite; // x0
  const MethodInfo *v10; // x1
  EventMissionProgressRequest_Argument_ProgressData_o *v11; // x21
  ListViewItem_o *Item; // x0
  __int64 v13; // x1
  _BOOL8 v14; // x0
  __int64 v15; // x1
  System_Collections_Generic_List_Enumerator_T__o v17; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v18; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_438EAE1 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_B775C4(&Method_UnityEngine_GameObject_GetComponent_FriendOperationItemListViewObject___);
    sub_B775C4(&Method_System_Collections_Generic_List_FriendOperationItemListViewObject__Add__);
    sub_B775C4(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_B775C4(&Method_System_Collections_Generic_List_FriendOperationItemListViewObject___ctor__);
    sub_B775C4(&System_Collections_Generic_List_FriendOperationItemListViewObject__TypeInfo);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    byte_438EAE1 = 1;
  }
  memset(&v18, 0, sizeof(v18));
  v3 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B77694(System_Collections_Generic_List_FriendOperationItemListViewObject__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v3,
    (const MethodInfo_30525D4 *)Method_System_Collections_Generic_List_FriendOperationItemListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_B7769C(0LL, v4);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v17,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)objectList,
    (const MethodInfo_3054114 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v18 = v17;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v18,
            (const MethodInfo_225C720 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v18.fields.current;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v7 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v7 )
    {
      if ( !current )
        sub_B7769C(v7, v8);
      Component_srcLineSprite = (FriendOperationItemListViewObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                         (UnityEngine_GameObject_o *)current,
                                                                         (const MethodInfo_1DEBFC4 *)Method_UnityEngine_GameObject_GetComponent_FriendOperationItemListViewObject___);
      v11 = (EventMissionProgressRequest_Argument_ProgressData_o *)Component_srcLineSprite;
      if ( !Component_srcLineSprite )
        sub_B7769C(0LL, v10);
      Item = (ListViewItem_o *)FriendOperationItemListViewObject__GetItem(Component_srcLineSprite, v10);
      if ( !Item )
        sub_B7769C(0LL, v13);
      if ( Item->fields.isTermination )
      {
        v14 = ListViewManager__ClippingItem_24185472((ListViewManager_o *)this, Item, 0LL);
        if ( v14 )
        {
          if ( !v3 )
            sub_B7769C(v14, v15);
          goto LABEL_16;
        }
      }
      else
      {
        if ( !v3 )
          sub_B7769C(Item, v13);
LABEL_16:
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v3,
          v11,
          (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_FriendOperationItemListViewObject__Add__);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v18,
    (const MethodInfo_225C71C *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_FriendOperationItemListViewObject__o *)v3;
}


bool __fastcall FriendOperationItemListViewManager__get_IsExistSwapLockUser(
        FriendOperationItemListViewManager_o *this,
        const MethodInfo *method)
{
  FriendOperationItemListViewManager_o *v2; // x19
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x22
  unsigned __int64 i; // x20
  ListViewItem_o *v5; // x8
  __int64 v6; // x11

  v2 = this;
  if ( (byte_438EAE2 & 1) == 0 )
  {
    sub_B775C4(&FriendOperationItemListViewItem_TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    this = (FriendOperationItemListViewManager_o *)sub_B775C4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    byte_438EAE2 = 1;
  }
  itemList = v2->fields.itemList;
  if ( itemList )
  {
    for ( i = 0LL; (__int64)i < itemList->fields._size; ++i )
    {
      if ( i >= (unsigned int)itemList->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42293568(0LL);
      v5 = itemList->fields._items->m_Items[i];
      if ( v5 )
      {
        v6 = *(&FriendOperationItemListViewItem_TypeInfo->_2.bitflags2 + 1);
        if ( *(&v5->klass->_2.bitflags2 + 1) >= (unsigned int)v6
          && (FriendOperationItemListViewItem_c *)v5->klass->_2.typeHierarchy[v6 - 1] == FriendOperationItemListViewItem_TypeInfo
          && BYTE2(v5[1].fields.sortValue1B) )
        {
          return 1;
        }
      }
      itemList = v2->fields.itemList;
      if ( !itemList )
        sub_B7769C(this, method);
    }
  }
  return 0;
}


System_Collections_Generic_List_FriendOperationItemListViewObject__o *__fastcall FriendOperationItemListViewManager__get_ObjectList(
        FriendOperationItemListViewManager_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v3; // x19
  __int64 v4; // x1
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  Il2CppObject *current; // x20
  _BOOL8 v7; // x0
  __int64 v8; // x1
  EventMissionProgressRequest_Argument_ProgressData_o *Component_srcLineSprite; // x0
  System_Collections_Generic_List_Enumerator_T__o v11; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v12; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_438EAE0 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_B775C4(&Method_UnityEngine_GameObject_GetComponent_FriendOperationItemListViewObject___);
    sub_B775C4(&Method_System_Collections_Generic_List_FriendOperationItemListViewObject__Add__);
    sub_B775C4(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_B775C4(&Method_System_Collections_Generic_List_FriendOperationItemListViewObject___ctor__);
    sub_B775C4(&System_Collections_Generic_List_FriendOperationItemListViewObject__TypeInfo);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    byte_438EAE0 = 1;
  }
  memset(&v12, 0, sizeof(v12));
  v3 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B77694(System_Collections_Generic_List_FriendOperationItemListViewObject__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v3,
    (const MethodInfo_30525D4 *)Method_System_Collections_Generic_List_FriendOperationItemListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_B7769C(0LL, v4);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v11,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)objectList,
    (const MethodInfo_3054114 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v12 = v11;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v12,
            (const MethodInfo_225C720 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v12.fields.current;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v7 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v7 )
    {
      if ( !current )
        sub_B7769C(v7, v8);
      Component_srcLineSprite = (EventMissionProgressRequest_Argument_ProgressData_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                                         (UnityEngine_GameObject_o *)current,
                                                                                         (const MethodInfo_1DEBFC4 *)Method_UnityEngine_GameObject_GetComponent_FriendOperationItemListViewObject___);
      if ( !v3 )
        sub_B7769C(Component_srcLineSprite, Component_srcLineSprite);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v3,
        Component_srcLineSprite,
        (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_FriendOperationItemListViewObject__Add__);
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v12,
    (const MethodInfo_225C71C *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
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
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  FriendOperationItemListViewManager_CallbackFunc_o *callbackFunc; // x19
  __int64 v10; // x0
  __int64 v11; // x1
  int32_t Index; // w2

  callbackFunc = this->fields.callbackFunc;
  this->fields.callbackFunc = 0LL;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.callbackFunc,
    0LL,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  if ( callbackFunc )
  {
    if ( !obj )
      sub_B7769C(v10, v11);
    Index = ListViewObject__get_Index(obj, 0LL);
    FriendOperationItemListViewManager_CallbackFunc__Invoke(callbackFunc, 9, Index, 0LL);
  }
}


void __fastcall FriendOperationItemListViewManager__onClickListViewBlacklistRemove(
        FriendOperationItemListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  FriendOperationItemListViewManager_CallbackFunc_o *callbackFunc; // x19
  __int64 v10; // x0
  __int64 v11; // x1
  int32_t Index; // w2

  callbackFunc = this->fields.callbackFunc;
  this->fields.callbackFunc = 0LL;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.callbackFunc,
    0LL,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  if ( callbackFunc )
  {
    if ( !obj )
      sub_B7769C(v10, v11);
    Index = ListViewObject__get_Index(obj, 0LL);
    FriendOperationItemListViewManager_CallbackFunc__Invoke(callbackFunc, 10, Index, 0LL);
  }
}


void __fastcall FriendOperationItemListViewManager__onClickListViewMessageDisp(
        FriendOperationItemListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  FriendOperationItemListViewManager_CallbackFunc_o *callbackFunc; // x19
  __int64 v10; // x0
  __int64 v11; // x1
  int32_t Index; // w2

  callbackFunc = this->fields.callbackFunc;
  this->fields.callbackFunc = 0LL;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.callbackFunc,
    0LL,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  if ( callbackFunc )
  {
    if ( !obj )
      sub_B7769C(v10, v11);
    Index = ListViewObject__get_Index(obj, 0LL);
    FriendOperationItemListViewManager_CallbackFunc__Invoke(callbackFunc, 11, Index, 0LL);
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

  if ( (byte_438EADA & 1) == 0 )
  {
    sub_B775C4(&FriendOperationItemListViewManager_CallbackFunc_TypeInfo);
    byte_438EADA = 1;
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
    v8 = sub_B6BFDC(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_B77990(v7);
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

  if ( (byte_438EADC & 1) == 0 )
  {
    sub_B775C4(&System_Action_TypeInfo);
    byte_438EADC = 1;
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
    v8 = sub_B6BFDC(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_B77990(v7);
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
    sub_B7769C(scrollBar, method);
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
    sub_B7769C(scrollBar, b);
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
  intptr_t *p_method; // x0

  v4 = **(_QWORD **)&method;
  *(_QWORD *)&this->fields.method = object;
  p_method = &this->fields.method;
  *((_QWORD *)p_method + 1) = *(_QWORD *)&method;
  *((_QWORD *)p_method - 2) = v4;
  sub_B77560(p_method);
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
  __int64 v11[3]; // [xsp+0h] [xbp-40h] BYREF
  int32_t v12; // [xsp+18h] [xbp-28h] BYREF
  int32_t v13; // [xsp+1Ch] [xbp-24h] BYREF

  v12 = result;
  v13 = kind;
  if ( (byte_438809D & 1) == 0 )
  {
    sub_B775C4(&int_TypeInfo);
    sub_B775C4(&FriendOperationItemListViewManager_ResultKind_TypeInfo);
    byte_438809D = 1;
  }
  v11[2] = 0LL;
  v11[0] = j_il2cpp_value_box_0(FriendOperationItemListViewManager_ResultKind_TypeInfo, &v13, *(_QWORD *)&result);
  v11[1] = j_il2cpp_value_box_0(int_TypeInfo, &v12, v9);
  return (System_IAsyncResult_o *)sub_B77568(this, v11, callback, object);
}


void __fastcall FriendOperationItemListViewManager_CallbackFunc__EndInvoke(
        FriendOperationItemListViewManager_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B7756C(result, 0LL, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FriendOperationItemListViewManager_CallbackFunc__Invoke(
        FriendOperationItemListViewManager_CallbackFunc_o *this,
        int32_t kind,
        int32_t result,
        const MethodInfo *method)
{
  __int64 v4; // x8
  __int64 v7; // x25
  FriendOperationItemListViewManager_CallbackFunc_o **v8; // x26
  __int64 v9; // x27
  unsigned int v10; // w24
  __int64 class_0; // x0
  __int64 v12; // x8
  unsigned int v13; // w23
  unsigned __int64 v14; // x10
  _DWORD *v15; // x11
  __int64 v16; // x0
  __int64 v17; // x0
  __int64 v18; // x0
  void (__fastcall **v19)(__int64 *, _QWORD, _QWORD, _QWORD); // x0
  FriendOperationItemListViewManager_CallbackFunc_o *v20; // x8
  __int64 *v21; // x22
  __int64 v22; // x23
  void (__fastcall *v23)(unsigned int *, _QWORD, __int64); // x24
  char v24; // w24
  char v25; // w0
  unsigned int v26; // w24
  __int64 v27; // x8
  __int64 v28; // x1
  __int64 v29; // x2
  unsigned __int64 v30; // x10
  _DWORD *v31; // x11
  unsigned int v32; // [xsp+Ch] [xbp-54h] BYREF
  FriendOperationItemListViewManager_CallbackFunc_o *v33; // [xsp+18h] [xbp-48h] BYREF

  v33 = this;
  v32 = kind;
  v4 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v4 )
  {
    v8 = &v33;
    v7 = 1LL;
    goto LABEL_5;
  }
  v7 = *(_QWORD *)(v4 + 24);
  if ( v7 )
  {
    v8 = (FriendOperationItemListViewManager_CallbackFunc_o **)(v4 + 32);
LABEL_5:
    v9 = 0LL;
    while ( 1 )
    {
      v20 = v8[v9];
      v21 = *(__int64 **)&v20->fields.method;
      v22 = *(_QWORD *)&v20->fields.extra_arg;
      v23 = *(void (__fastcall **)(unsigned int *, _QWORD, __int64))&v20->fields.method_ptr;
      if ( *(__int16 *)(v22 + 72) == -1 )
        sub_B77680(*(_QWORD *)&v20->fields.extra_arg, *(_QWORD *)&kind);
      if ( (sub_B775F4(v22) & 1) == 0 )
        break;
      if ( *(_BYTE *)(v22 + 74) != 2 )
        goto LABEL_36;
      v23((unsigned int *)v32, (unsigned int)result, v22);
LABEL_38:
      if ( ++v9 == v7 )
        return;
    }
    if ( !v21 )
    {
      v23(&v32 - 4, (unsigned int)result, v22);
      goto LABEL_38;
    }
    if ( *(__int16 *)(v22 + 72) != -1 && (*(_BYTE *)(*v21 + 277) & 1) == 0 && this->fields.m_target )
    {
      v24 = sub_B775EC(v22);
      v25 = sub_B779F0(v22);
      if ( (v24 & 1) != 0 )
      {
        v26 = v32;
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
            v18 = sub_B0F4C0(v21, v28, v29);
          }
          v17 = *(_QWORD *)(v18 + 8);
        }
        else
        {
          v17 = *(_QWORD *)(*v21 + 16LL * *(unsigned __int16 *)(v22 + 72) + 320);
        }
        v19 = (void (__fastcall **)(__int64 *, _QWORD, _QWORD, _QWORD))sub_B77674(v17, v22);
        (*v19)(v21, v26, (unsigned int)result, v19);
      }
      else
      {
        v10 = *(unsigned __int16 *)(v22 + 72);
        if ( (v25 & 1) != 0 )
        {
          class_0 = j_il2cpp_method_get_class_0(v22);
          v12 = *v21;
          v13 = v32;
          if ( *(_WORD *)(*v21 + 298) )
          {
            v14 = 0LL;
            v15 = (_DWORD *)(*(_QWORD *)(v12 + 176) + 8LL);
            while ( *((_QWORD *)v15 - 1) != class_0 )
            {
              ++v14;
              v15 += 4;
              if ( v14 >= *(unsigned __int16 *)(*v21 + 298) )
                goto LABEL_11;
            }
            v16 = v12 + 16LL * (int)(*v15 + v10) + 312;
          }
          else
          {
LABEL_11:
            v16 = sub_B0F4C0(v21, class_0, v10);
          }
          (*(void (__fastcall **)(__int64 *, _QWORD, _QWORD, _QWORD))v16)(
            v21,
            v13,
            (unsigned int)result,
            *(_QWORD *)(v16 + 8));
        }
        else
        {
          (*(void (__fastcall **)(__int64 *, _QWORD, _QWORD, _QWORD))(*v21 + 16LL * *(unsigned __int16 *)(v22 + 72) + 312))(
            v21,
            v32,
            (unsigned int)result,
            *(_QWORD *)(*v21 + 16LL * *(unsigned __int16 *)(v22 + 72) + 320));
        }
      }
      goto LABEL_38;
    }
LABEL_36:
    ((void (__fastcall *)(__int64 *, _QWORD, _QWORD, __int64))v23)(v21, v32, (unsigned int)result, v22);
    goto LABEL_38;
  }
}


void __fastcall FriendOperationItemListViewManager___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  struct FriendOperationItemListViewManager___c_StaticFields *static_fields; // x0

  if ( (byte_438809B & 1) == 0 )
  {
    sub_B775C4(&FriendOperationItemListViewManager___c_TypeInfo);
    byte_438809B = 1;
  }
  v1 = (Il2CppObject *)sub_B77694(FriendOperationItemListViewManager___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  static_fields = FriendOperationItemListViewManager___c_TypeInfo->static_fields;
  static_fields->__9 = (struct FriendOperationItemListViewManager___c_o *)v1;
  sub_B77560(static_fields);
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
  __int64 v6; // x8
  int32_t result; // w0
  FriendOperationItemListViewManager_CallbackFunc_o *v8; // x0
  Il2CppObject *v9; // x1
  intptr_t v10; // w2
  const MethodInfo *v11; // x3

  v5 = (int64_t *)a;
  if ( (byte_438809C & 1) == 0 )
  {
    this = (FriendOperationItemListViewManager___c_o *)sub_B775C4(&UserFriendRequestHistoryEntity_TypeInfo);
    byte_438809C = 1;
  }
  if ( !b )
LABEL_11:
    sub_B7769C(this, a);
  a = (DataEntityBase_o *)UserFriendRequestHistoryEntity_TypeInfo;
  v6 = *(&UserFriendRequestHistoryEntity_TypeInfo->_2.bitflags2 + 1);
  if ( *(&b->klass->_2.bitflags2 + 1) < (unsigned int)v6
    || (UserFriendRequestHistoryEntity_c *)b->klass->_2.typeHierarchy[v6 - 1] != UserFriendRequestHistoryEntity_TypeInfo )
  {
    this = (FriendOperationItemListViewManager___c_o *)sub_B77990(b);
    goto LABEL_11;
  }
  if ( !v5 )
    goto LABEL_11;
  if ( *(unsigned __int8 *)(*v5 + 300) >= (unsigned int)v6
    && *(UserFriendRequestHistoryEntity_c **)(*(_QWORD *)(*v5 + 200) + 8 * (v6 - 1)) == UserFriendRequestHistoryEntity_TypeInfo )
  {
    return System_Int64__CompareTo_39549724((int64_t)&b[2].monitor, v5[5], 0LL);
  }
  v8 = (FriendOperationItemListViewManager_CallbackFunc_o *)sub_B77990(v5);
  FriendOperationItemListViewManager_CallbackFunc___ctor(v8, v9, v10, v11);
  return result;
}