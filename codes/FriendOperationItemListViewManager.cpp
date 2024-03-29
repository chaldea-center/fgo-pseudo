void __fastcall FriendOperationItemListViewManager___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  System_Array_o *v4; // x19
  struct FriendOperationItemListViewManager_StaticFields *static_fields; // x0
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7
  System_RuntimeFieldHandle_o v12; // 0:w1.4

  if ( (byte_4217680 & 1) == 0 )
  {
    sub_B0D8A4(&ListViewSort_FilterKind___TypeInfo, v1);
    sub_B0D8A4(&FriendOperationItemListViewManager_TypeInfo, v2);
    sub_B0D8A4(
      &Field__PrivateImplementationDetails__6B3B6BC014A692F226080502E0DED60D67C84EBC03CC8CF43A550A89694FF5C0,
      v3);
    byte_4217680 = 1;
  }
  FriendOperationItemListViewManager_TypeInfo->static_fields->isInitSystem = 0;
  v4 = (System_Array_o *)sub_B0D8BC(ListViewSort_FilterKind___TypeInfo, 8LL);
  v12.fields.value = Field__PrivateImplementationDetails__6B3B6BC014A692F226080502E0DED60D67C84EBC03CC8CF43A550A89694FF5C0;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_42880004(v4, v12, 0LL);
  static_fields = FriendOperationItemListViewManager_TypeInfo->static_fields;
  static_fields->classFilter = (struct ListViewSort_FilterKind_array *)v4;
  sub_B0D840(
    (BattleServantConfConponent_o *)&static_fields->classFilter,
    (System_Int32_array **)v4,
    v6,
    v7,
    v8,
    v9,
    v10,
    v11);
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
  CommonUI_o *Instance; // x0

  if ( (byte_4217679 & 1) == 0 )
  {
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, isResult);
    byte_4217679 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B0D97C(0LL);
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
  __int64 v35; // x1
  int64_t sort; // x0
  System_String_array **v37; // x2
  System_String_array **v38; // x3
  System_Boolean_array **v39; // x4
  System_Int32_array **v40; // x5
  System_Int32_array *v41; // x6
  System_Int32_array *v42; // x7
  struct ListViewSort_array *sortStatusList; // x8
  struct ListViewSort_o *v44; // x1
  System_String_o *v45; // x22
  OtherUserGameEntity_array *FriendCodeList; // x20
  __int64 v47; // x1
  __int64 v48; // x2
  __int64 v49; // x8
  unsigned __int64 v50; // x22
  struct System_Collections_Generic_List_ListViewItem__o *v51; // x9
  int32_t v52; // w23
  OtherUserGameEntity_o *v53; // x24
  System_Collections_Generic_Dictionary_int__int__o *v54; // x25
  FriendOperationItemListViewItem_o *v55; // x21
  const MethodInfo *v56; // x6
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *MasterData_WarQuestSelectionMaster; // x20
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *v58; // x21
  int32_t v59; // w22
  UserBlacklistEntity_o *v60; // x23
  __int64 v61; // x10
  __int64 v62; // x1
  __int64 v63; // x2
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x8
  int32_t size; // w26
  System_Collections_Generic_Dictionary_int__int__o *classBoardMaxDictionary; // x27
  OtherUserGameEntity_o *v67; // x25
  FriendOperationItemListViewItem_o *v68; // x24
  const MethodInfo *v69; // x7
  __int64 *v70; // x8
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *v71; // x20
  __int64 v72; // x1
  __int64 v73; // x2
  System_Collections_Generic_IEnumerable_T__o *v74; // x22
  System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *v75; // x21
  __int64 v76; // x1
  __int64 v77; // x2
  struct FriendOperationItemListViewManager___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__35_0; // x22
  Il2CppObject *v80; // x23
  struct FriendOperationItemListViewManager___c_StaticFields *v81; // x0
  System_String_array **v82; // x2
  System_String_array **v83; // x3
  System_Boolean_array **v84; // x4
  System_Int32_array **v85; // x5
  System_Int32_array *v86; // x6
  System_Int32_array *v87; // x7
  int32_t v88; // w23
  BalanceConfig_c *v89; // x0
  int32_t MaxFriendHistoryNum; // w1
  signed __int64 v91; // x8
  unsigned __int64 v92; // x27
  UserFriendRequestHistoryEntity_o *v93; // x22
  __int64 v94; // x10
  __int64 v95; // x1
  __int64 v96; // x2
  struct System_Collections_Generic_List_ListViewItem__o *v97; // x8
  int32_t v98; // w25
  System_Collections_Generic_Dictionary_int__int__o *v99; // x26
  OtherUserGameEntity_o *v100; // x24
  FriendOperationItemListViewItem_o *v101; // x23
  const MethodInfo *v102; // x7
  TblFriendMaster_o *v103; // x23
  OtherUserGameEntity_array *List; // x24
  __int64 v105; // x1
  __int64 v106; // x2
  __int64 v107; // x8
  unsigned __int64 v108; // x22
  struct System_Collections_Generic_List_ListViewItem__o *v109; // x9
  int32_t v110; // w26
  OtherUserGameEntity_o *v111; // x27
  System_Collections_Generic_Dictionary_int__int__o *v112; // x28
  FriendOperationItemListViewItem_o *v113; // x25
  const MethodInfo *v114; // x6
  __int64 v115; // x8
  unsigned __int64 v116; // x22
  struct System_Collections_Generic_List_ListViewItem__o *v117; // x9
  int32_t v118; // w26
  OtherUserGameEntity_o *v119; // x27
  System_Collections_Generic_Dictionary_int__int__o *v120; // x28
  FriendOperationItemListViewItem_o *v121; // x25
  const MethodInfo *v122; // x6
  UILabel_o *emptyMessageLabel; // x20
  struct UIScrollView_o *scrollView; // x8
  __int64 v125; // x0
  System_String_o *v126; // [xsp+8h] [xbp-68h]
  OtherUserGameEntity_array *v127; // [xsp+10h] [xbp-60h]

  if ( (byte_421766F & 1) == 0 )
  {
    sub_B0D8A4(&BalanceConfig_TypeInfo, *(_QWORD *)&kind);
    sub_B0D8A4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, v6);
    sub_B0D8A4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v7);
    sub_B0D8A4(&Method_System_Comparison_DataEntityBase___ctor__, v8);
    sub_B0D8A4(&System_Comparison_DataEntityBase__TypeInfo, v9);
    sub_B0D8A4(&Method_DataManager_GetMasterData_OtherUserGameMaster___, v10);
    sub_B0D8A4(&Method_DataManager_GetMasterData_TblFriendMaster___, v11);
    sub_B0D8A4(&Method_DataManager_GetMasterData_UserBlacklistMaster___, v12);
    sub_B0D8A4(&Method_DataManager_GetMasterData_UserFriendRequestHistoryMaster___, v13);
    sub_B0D8A4(&Method_DataMasterBase_OtherUserGameMaster__OtherUserGameEntity__long__GetEntity__, v14);
    sub_B0D8A4(&FriendOperationItemListViewItem_TypeInfo, v15);
    sub_B0D8A4(&FriendOperationItemListViewManager_TypeInfo, v16);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ListViewItem__Add__, v17);
    sub_B0D8A4(&Method_System_Collections_Generic_List_DataEntityBase__RemoveRange__, v18);
    sub_B0D8A4(&Method_System_Collections_Generic_List_DataEntityBase__Reverse__, v19);
    sub_B0D8A4(&Method_System_Collections_Generic_List_DataEntityBase__Sort__, v20);
    sub_B0D8A4(&Method_System_Collections_Generic_List_DataEntityBase___ctor___67877320, v21);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v22);
    sub_B0D8A4(&Method_System_Collections_Generic_List_DataEntityBase__get_Count__, v23);
    sub_B0D8A4(&Method_System_Collections_Generic_List_DataEntityBase__get_Item__, v24);
    sub_B0D8A4(&System_Collections_Generic_List_DataEntityBase__TypeInfo, v25);
    sub_B0D8A4(&LocalizationManager_TypeInfo, v26);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v27);
    sub_B0D8A4(&Method_FriendOperationItemListViewManager___c__CreateList_b__35_0__, v28);
    sub_B0D8A4(&FriendOperationItemListViewManager___c_TypeInfo, v29);
    sub_B0D8A4(&UserBlacklistEntity_TypeInfo, v30);
    sub_B0D8A4(&UserFriendRequestHistoryEntity_TypeInfo, v31);
    sub_B0D8A4(&StringLiteral_2578/*"BLACKLIST_EMPTY_MESSAGE"*/, v32);
    sub_B0D8A4(&StringLiteral_6480/*"FRIEND_EMPTY_FRIEND_MESSAGE"*/, v33);
    sub_B0D8A4(&StringLiteral_2581/*"BLACKLIST_FRIEND_HISTORY_EMPTY_MESSAGE"*/, v34);
    sub_B0D8A4(&StringLiteral_6481/*"FRIEND_EMPTY_OFFERED_MESSAGE"*/, v35);
    byte_421766F = 1;
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
    v125 = sub_B0D9A8(sort);
    sub_B0D948(v125, 0LL);
  }
  v44 = sortStatusList->m_Items[kind];
  this->fields.sort = v44;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.sort,
    (System_Int32_array **)v44,
    v37,
    v38,
    v39,
    v40,
    v41,
    v42);
  sort = (int64_t)this->fields.sort;
  if ( !sort )
    goto LABEL_101;
  ListViewSort__Load((ListViewSort_o *)sort, 0LL);
  if ( kind == 8 )
  {
    sort = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !sort )
      goto LABEL_101;
    MasterData_WarQuestSelectionMaster = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)DataManager__GetMasterData_WarQuestSelectionMaster_((DataManager_o *)sort, (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_OtherUserGameMaster___);
    sort = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !sort )
      goto LABEL_101;
    sort = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                      (DataManager_o *)sort,
                      (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_UserBlacklistMaster___);
    if ( !sort )
      goto LABEL_101;
    v58 = *(System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o **)(sort + 32);
    ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
    if ( !v58 )
      goto LABEL_101;
    if ( System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
           v58,
           (const MethodInfo_2AB5718 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__) < 1 )
    {
LABEL_35:
      v70 = &StringLiteral_2578/*"BLACKLIST_EMPTY_MESSAGE"*/;
      goto LABEL_68;
    }
    v59 = 0;
    while ( 1 )
    {
      sort = (int64_t)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                        v58,
                        v59,
                        (const MethodInfo_2AB57BC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !sort )
        break;
      v60 = (UserBlacklistEntity_o *)sort;
      v61 = *(&UserBlacklistEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(unsigned __int8 *)(*(_QWORD *)sort + 300LL) < (unsigned int)v61 )
        break;
      if ( *(UserBlacklistEntity_c **)(*(_QWORD *)(*(_QWORD *)sort + 200LL) + 8 * v61 - 8) != UserBlacklistEntity_TypeInfo )
        break;
      sort = UserBlacklistEntity__getOtherUserId((UserBlacklistEntity_o *)sort, 0LL);
      if ( !MasterData_WarQuestSelectionMaster )
        break;
      sort = (int64_t)DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
                        MasterData_WarQuestSelectionMaster,
                        sort,
                        (const MethodInfo_2669DFC *)Method_DataMasterBase_OtherUserGameMaster__OtherUserGameEntity__long__GetEntity__);
      itemList = this->fields.itemList;
      if ( !itemList )
        break;
      size = itemList->fields._size;
      classBoardMaxDictionary = this->fields.classBoardMaxDictionary;
      v67 = (OtherUserGameEntity_o *)sort;
      v68 = (FriendOperationItemListViewItem_o *)sub_B0D974(FriendOperationItemListViewItem_TypeInfo, v62, v63);
      FriendOperationItemListViewItem___ctor_29768536(v68, 8, size, v67, v60, 0, classBoardMaxDictionary, v69);
      sort = (int64_t)this->fields.itemList;
      if ( !sort )
        break;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sort,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v68,
        (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
      if ( ++v59 >= System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
                      v58,
                      (const MethodInfo_2AB5718 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__) )
        goto LABEL_35;
    }
LABEL_101:
    sub_B0D97C(sort);
  }
  if ( kind == 7 )
  {
    sort = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !sort )
      goto LABEL_101;
    v71 = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                   (DataManager_o *)sort,
                                                                                   (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_OtherUserGameMaster___);
    sort = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !sort )
      goto LABEL_101;
    sort = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                      (DataManager_o *)sort,
                      (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_UserFriendRequestHistoryMaster___);
    if ( !sort )
      goto LABEL_101;
    v74 = *(System_Collections_Generic_IEnumerable_T__o **)(sort + 32);
    v75 = (System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *)sub_B0D974(
                                                                            System_Collections_Generic_List_DataEntityBase__TypeInfo,
                                                                            v72,
                                                                            v73);
    System_Collections_Generic_List_WarBoardAIRoute_RouteData____ctor(
      v75,
      v74,
      (const MethodInfo_2FC4C1C *)Method_System_Collections_Generic_List_DataEntityBase___ctor___67877320);
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
      v80 = (Il2CppObject *)static_fields->__9;
      _9__35_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B0D974(
                                                                             System_Comparison_DataEntityBase__TypeInfo,
                                                                             v76,
                                                                             v77);
      System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
        _9__35_0,
        v80,
        Method_FriendOperationItemListViewManager___c__CreateList_b__35_0__,
        (const MethodInfo_2412E90 *)Method_System_Comparison_DataEntityBase___ctor__);
      v81 = FriendOperationItemListViewManager___c_TypeInfo->static_fields;
      v81->__9__35_0 = (struct System_Comparison_DataEntityBase__o *)_9__35_0;
      sub_B0D840(
        (BattleServantConfConponent_o *)&v81->__9__35_0,
        (System_Int32_array **)_9__35_0,
        v82,
        v83,
        v84,
        v85,
        v86,
        v87);
    }
    if ( !v75 )
      goto LABEL_101;
    System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
      (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v75,
      (System_Comparison_T__o *)_9__35_0,
      (const MethodInfo_2FC77C4 *)Method_System_Collections_Generic_List_DataEntityBase__Sort__);
    v88 = v75->fields._size;
    v89 = BalanceConfig_TypeInfo;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v89 = BalanceConfig_TypeInfo;
    }
    MaxFriendHistoryNum = v89->static_fields->MaxFriendHistoryNum;
    if ( v88 > MaxFriendHistoryNum )
    {
      if ( (BYTE3(v89->vtable._0_Equals.methodPtr) & 4) != 0 && !v89->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v89);
        MaxFriendHistoryNum = BalanceConfig_TypeInfo->static_fields->MaxFriendHistoryNum;
      }
      System_Collections_Generic_List_RegexCharClass_SingleRange___RemoveRange(
        (System_Collections_Generic_List_RegexCharClass_SingleRange__o *)v75,
        MaxFriendHistoryNum,
        v75->fields._size - MaxFriendHistoryNum,
        (const MethodInfo_2FC747C *)Method_System_Collections_Generic_List_DataEntityBase__RemoveRange__);
    }
    System_Collections_Generic_List_MapControl_WarInfo___Reverse(
      (System_Collections_Generic_List_MapControl_WarInfo__o *)v75,
      (const MethodInfo_2FC7548 *)Method_System_Collections_Generic_List_DataEntityBase__Reverse__);
    ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
    LODWORD(v91) = v75->fields._size;
    if ( (int)v91 < 1 )
    {
LABEL_67:
      v70 = &StringLiteral_2581/*"BLACKLIST_FRIEND_HISTORY_EMPTY_MESSAGE"*/;
      goto LABEL_68;
    }
    v92 = 0LL;
    while ( 1 )
    {
      if ( v92 >= (unsigned int)v91 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
      v93 = (UserFriendRequestHistoryEntity_o *)v75->fields._items->m_Items[v92];
      if ( !v93 )
        goto LABEL_101;
      v94 = *(&UserFriendRequestHistoryEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v93->klass->_2.bitflags2 + 1) < (unsigned int)v94 )
        goto LABEL_101;
      if ( (UserFriendRequestHistoryEntity_c *)v93->klass->_2.typeHierarchy[v94 - 1] != UserFriendRequestHistoryEntity_TypeInfo )
        goto LABEL_101;
      sort = UserFriendRequestHistoryEntity__getOtherUserId(v93, 0LL);
      if ( !v71 )
        goto LABEL_101;
      sort = (int64_t)DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
                        v71,
                        sort,
                        (const MethodInfo_2669DFC *)Method_DataMasterBase_OtherUserGameMaster__OtherUserGameEntity__long__GetEntity__);
      v97 = this->fields.itemList;
      if ( !v97 )
        goto LABEL_101;
      v98 = v97->fields._size;
      v99 = this->fields.classBoardMaxDictionary;
      v100 = (OtherUserGameEntity_o *)sort;
      v101 = (FriendOperationItemListViewItem_o *)sub_B0D974(FriendOperationItemListViewItem_TypeInfo, v95, v96);
      FriendOperationItemListViewItem___ctor_29768884(v101, 7, v98, v100, v93, 0, v99, v102);
      sort = (int64_t)this->fields.itemList;
      if ( !sort )
        goto LABEL_101;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sort,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v101,
        (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
      v91 = v75->fields._size;
      if ( (__int64)++v92 >= v91 )
        goto LABEL_67;
    }
  }
  v45 = (System_String_o *)StringLiteral_6481/*"FRIEND_EMPTY_OFFERED_MESSAGE"*/;
  if ( !kind )
  {
    sort = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !sort )
      goto LABEL_101;
    sort = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                      (DataManager_o *)sort,
                      (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_OtherUserGameMaster___);
    if ( !sort )
      goto LABEL_101;
    FriendCodeList = OtherUserGameMaster__GetFriendCodeList((OtherUserGameMaster_o *)sort, this->fields.friendCode, 0LL);
    ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
    if ( !FriendCodeList )
      goto LABEL_101;
    v49 = *(_QWORD *)&FriendCodeList->max_length;
    if ( (int)v49 >= 1 )
    {
      v126 = v45;
      v50 = 0LL;
      while ( 1 )
      {
        v51 = this->fields.itemList;
        if ( !v51 )
          goto LABEL_101;
        if ( v50 >= (unsigned int)v49 )
          goto LABEL_102;
        v52 = v51->fields._size;
        v53 = FriendCodeList->m_Items[v50];
        v54 = this->fields.classBoardMaxDictionary;
        v55 = (FriendOperationItemListViewItem_o *)sub_B0D974(FriendOperationItemListViewItem_TypeInfo, v47, v48);
        FriendOperationItemListViewItem___ctor_29768216(v55, 0, v52, v53, 0, v54, v56);
        sort = (int64_t)this->fields.itemList;
        if ( !sort )
          goto LABEL_101;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sort,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v55,
          (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
        LODWORD(v49) = FriendCodeList->max_length;
        if ( (__int64)++v50 >= (int)v49 )
          goto LABEL_87;
      }
    }
    goto LABEL_88;
  }
  sort = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !sort )
    goto LABEL_101;
  v126 = v45;
  sort = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                    (DataManager_o *)sort,
                    (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_TblFriendMaster___);
  if ( !sort )
    goto LABEL_101;
  v103 = (TblFriendMaster_o *)sort;
  List = TblFriendMaster__GetList((TblFriendMaster_o *)sort, kind, 0LL);
  v127 = TblFriendMaster__GetList(v103, 9, 0LL);
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
  if ( kind == 3 )
  {
    if ( !v127 )
      goto LABEL_101;
    v107 = *(_QWORD *)&v127->max_length;
    if ( (int)v107 >= 1 )
    {
      v108 = 0LL;
      do
      {
        v109 = this->fields.itemList;
        if ( !v109 )
          goto LABEL_101;
        if ( v108 >= (unsigned int)v107 )
          goto LABEL_102;
        v110 = v109->fields._size;
        v111 = v127->m_Items[v108];
        v112 = this->fields.classBoardMaxDictionary;
        v113 = (FriendOperationItemListViewItem_o *)sub_B0D974(FriendOperationItemListViewItem_TypeInfo, v105, v106);
        FriendOperationItemListViewItem___ctor_29768216(v113, 9, v110, v111, classPos, v112, v114);
        sort = (int64_t)this->fields.itemList;
        if ( !sort )
          goto LABEL_101;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sort,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v113,
          (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
        ++v108;
        LODWORD(v107) = v127->max_length;
      }
      while ( (__int64)v108 < (int)v107 );
    }
  }
  if ( !List )
    goto LABEL_101;
  v115 = *(_QWORD *)&List->max_length;
  if ( (int)v115 >= 1 )
  {
    v116 = 0LL;
    do
    {
      v117 = this->fields.itemList;
      if ( !v117 )
        goto LABEL_101;
      if ( v116 >= (unsigned int)v115 )
        goto LABEL_102;
      v118 = v117->fields._size;
      v119 = List->m_Items[v116];
      v120 = this->fields.classBoardMaxDictionary;
      v121 = (FriendOperationItemListViewItem_o *)sub_B0D974(FriendOperationItemListViewItem_TypeInfo, v105, v106);
      FriendOperationItemListViewItem___ctor_29768216(v121, kind, v118, v119, classPos, v120, v122);
      sort = (int64_t)this->fields.itemList;
      if ( !sort )
        goto LABEL_101;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sort,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v121,
        (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
      v115 = *(_QWORD *)&List->max_length;
    }
    while ( (__int64)++v116 < (int)v115 );
  }
  if ( v115 )
  {
LABEL_87:
    v45 = v126;
    goto LABEL_88;
  }
  v45 = v126;
  if ( !v127 )
    goto LABEL_101;
  if ( !*(_QWORD *)&v127->max_length )
  {
    if ( kind != 2 )
    {
      if ( kind == 3 )
        v45 = (System_String_o *)StringLiteral_6480/*"FRIEND_EMPTY_FRIEND_MESSAGE"*/;
      goto LABEL_88;
    }
    v70 = &StringLiteral_6481/*"FRIEND_EMPTY_OFFERED_MESSAGE"*/;
LABEL_68:
    v45 = (System_String_o *)*v70;
  }
LABEL_88:
  emptyMessageLabel = this->fields.emptyMessageLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  sort = (int64_t)LocalizationManager__Get(v45, 0LL);
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
  sub_B0D840(
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  FriendOperationItemListViewManager_c *v6; // x0
  __int64 v7; // x0
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  FriendOperationItemListViewManager_c *v14; // x8
  System_Int32_array **v15; // x20
  struct FriendOperationItemListViewManager_StaticFields *static_fields; // x0
  FriendOperationItemListViewManager_c *v17; // x0
  unsigned int v18; // w23
  int v19; // w8
  struct ListViewSort_array *sortStatusList; // x28
  System_String_o *v21; // x0
  System_String_o *v22; // x21
  __int64 v23; // x1
  __int64 v24; // x2
  ListViewSort_o *v25; // x20
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  Il2CppClass **v32; // x0
  struct ListViewSort_array *v33; // x8
  Il2CppClass **v34; // x8
  ListViewSort_o *v35; // x20
  struct ListViewSort_FilterKind_array *v36; // x8
  unsigned __int64 i; // x21
  struct ListViewSort_FilterKind_array *classFilter; // x8
  unsigned int v39; // w9
  bool v40; // cf
  __int64 v41; // x0
  __int64 v42; // x0
  unsigned int v43; // [xsp+Ch] [xbp-54h] BYREF

  if ( (byte_4217669 & 1) == 0 )
  {
    sub_B0D8A4(&FriendOperationItemListViewManager_TypeInfo, method);
    sub_B0D8A4(&ListViewSort___TypeInfo, v3);
    sub_B0D8A4(&ListViewSort_TypeInfo, v4);
    sub_B0D8A4(&StringLiteral_6825/*"FriendOperation"*/, v5);
    byte_4217669 = 1;
  }
  v43 = 0;
  v6 = FriendOperationItemListViewManager_TypeInfo;
  if ( (BYTE3(FriendOperationItemListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !FriendOperationItemListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FriendOperationItemListViewManager_TypeInfo);
    v6 = FriendOperationItemListViewManager_TypeInfo;
  }
  if ( !v6->static_fields->isInitSystem )
  {
    v7 = sub_B0D8BC(ListViewSort___TypeInfo, 10LL);
    v14 = FriendOperationItemListViewManager_TypeInfo;
    v15 = (System_Int32_array **)v7;
    if ( (BYTE3(FriendOperationItemListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !FriendOperationItemListViewManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(FriendOperationItemListViewManager_TypeInfo);
      v14 = FriendOperationItemListViewManager_TypeInfo;
    }
    static_fields = v14->static_fields;
    static_fields->sortStatusList = (struct ListViewSort_array *)v15;
    sub_B0D840((BattleServantConfConponent_o *)&static_fields->sortStatusList, v15, v8, v9, v10, v11, v12, v13);
    v17 = FriendOperationItemListViewManager_TypeInfo;
    v18 = 0;
    v19 = (BYTE3(FriendOperationItemListViewManager_TypeInfo->vtable._0_Equals.methodPtr) >> 2) & 1;
    do
    {
      if ( (v19 & 1) != 0 && !v17->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v17);
        v17 = FriendOperationItemListViewManager_TypeInfo;
      }
      sortStatusList = v17->static_fields->sortStatusList;
      v43 = v18 + 1;
      v21 = System_Int32__ToString((int32_t)&v43, 0LL);
      v22 = System_String__Concat_43849904((System_String_o *)StringLiteral_6825/*"FriendOperation"*/, v21, 0LL);
      v25 = (ListViewSort_o *)sub_B0D974(ListViewSort_TypeInfo, v23, v24);
      ListViewSort___ctor_32823364(v25, v22, 3, 0, 0LL);
      if ( !sortStatusList )
        goto LABEL_46;
      if ( v25 )
      {
        v17 = (FriendOperationItemListViewManager_c *)sub_B0D964(v25, sortStatusList->obj.klass->_1.element_class);
        if ( !v17 )
        {
          v42 = sub_B0D99C(0LL);
          sub_B0D948(v42, 0LL);
        }
      }
      if ( v18 >= sortStatusList->max_length )
        goto LABEL_47;
      v32 = &sortStatusList->obj.klass + (int)v18;
      v32[4] = (Il2CppClass *)v25;
      sub_B0D840((BattleServantConfConponent_o *)(v32 + 4), (System_Int32_array **)v25, v26, v27, v28, v29, v30, v31);
      v33 = FriendOperationItemListViewManager_TypeInfo->static_fields->sortStatusList;
      if ( !v33 )
        goto LABEL_46;
      if ( v18 >= v33->max_length )
      {
LABEL_47:
        v41 = sub_B0D9A8(v17);
        sub_B0D948(v41, 0LL);
      }
      v34 = &v33->obj.klass + (int)v18;
      v35 = (ListViewSort_o *)v34[4];
      if ( !v35 )
        goto LABEL_46;
      ListViewSort__ClassFilterOFF((ListViewSort_o *)v34[4], 0LL);
      if ( !classPos )
      {
        for ( i = 0LL; ; ++i )
        {
          v17 = FriendOperationItemListViewManager_TypeInfo;
          if ( (BYTE3(FriendOperationItemListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !FriendOperationItemListViewManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(FriendOperationItemListViewManager_TypeInfo);
            v17 = FriendOperationItemListViewManager_TypeInfo;
          }
          classFilter = v17->static_fields->classFilter;
          if ( !classFilter )
            break;
          if ( (__int64)i >= (int)classFilter->max_length )
            goto LABEL_39;
          if ( (BYTE3(v17->vtable._0_Equals.methodPtr) & 4) != 0 && !v17->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v17);
            classFilter = FriendOperationItemListViewManager_TypeInfo->static_fields->classFilter;
            if ( !classFilter )
              break;
          }
          if ( i >= classFilter->max_length )
            goto LABEL_47;
          ListViewSort__SetFilter(v35, classFilter->m_Items[i + 1], 1, 0LL);
        }
LABEL_46:
        sub_B0D97C(v17);
      }
      v17 = FriendOperationItemListViewManager_TypeInfo;
      if ( (BYTE3(FriendOperationItemListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !FriendOperationItemListViewManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(FriendOperationItemListViewManager_TypeInfo);
        v17 = FriendOperationItemListViewManager_TypeInfo;
      }
      v36 = v17->static_fields->classFilter;
      if ( !v36 )
        goto LABEL_46;
      if ( v36->max_length <= classPos )
        goto LABEL_47;
      ListViewSort__SetFilter(v35, v36->m_Items[classPos + 1], 1, 0LL);
      v17 = FriendOperationItemListViewManager_TypeInfo;
LABEL_39:
      v39 = WORD1(v17->vtable._0_Equals.methodPtr);
      v40 = v18++ >= 9;
      v19 = (v39 >> 10) & 1;
    }
    while ( !v40 );
    if ( (v39 & 0x400) != 0 && !v17->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v17);
      v17 = FriendOperationItemListViewManager_TypeInfo;
    }
    v17->static_fields->isInitSystem = 1;
  }
}


void __fastcall FriendOperationItemListViewManager__DeleteContinueData(const MethodInfo *method)
{
  const MethodInfo *v1; // x1
  __int64 v2; // x20
  ListViewSort_o *v3; // x0
  _DWORD *gc_desc; // x8
  __int64 v5; // x0

  if ( (byte_421766A & 1) == 0 )
  {
    sub_B0D8A4(&FriendOperationItemListViewManager_TypeInfo, v1);
    byte_421766A = 1;
  }
  if ( (BYTE3(FriendOperationItemListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !FriendOperationItemListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FriendOperationItemListViewManager_TypeInfo);
  }
  FriendOperationItemListViewManager__CreateSorteData(0, v1);
  v2 = 0LL;
  do
  {
    v3 = (ListViewSort_o *)FriendOperationItemListViewManager_TypeInfo;
    if ( (BYTE3(FriendOperationItemListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !FriendOperationItemListViewManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(FriendOperationItemListViewManager_TypeInfo);
      v3 = (ListViewSort_o *)FriendOperationItemListViewManager_TypeInfo;
    }
    gc_desc = v3[1].klass->_1.gc_desc;
    if ( !gc_desc )
      goto LABEL_15;
    if ( (unsigned int)v2 >= gc_desc[6] )
    {
      v5 = sub_B0D9A8(v3);
      sub_B0D948(v5, 0LL);
    }
    v3 = *(ListViewSort_o **)&gc_desc[2 * v2 + 8];
    if ( !v3 )
LABEL_15:
      sub_B0D97C(v3);
    ListViewSort__DeleteContinueData(v3, 0LL);
    ++v2;
  }
  while ( (unsigned int)(v2 - 1) < 9 );
}


void __fastcall FriendOperationItemListViewManager__DestroyList(
        FriendOperationItemListViewManager_o *this,
        const MethodInfo *method)
{
  ListViewSort_o *sort; // x0

  ListViewManager__DestroyList((ListViewManager_o *)this, 0LL);
  sort = this->fields.sort;
  if ( !sort )
    sub_B0D97C(0LL);
  ListViewSort__Save(sort, 0LL);
}


void __fastcall FriendOperationItemListViewManager__EndCloseClassBoardEffectListDialog(
        FriendOperationItemListViewManager_o *this,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x0

  if ( (byte_421767F & 1) == 0 )
  {
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    byte_421767F = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B0D97C(0LL);
  CommonUI__CloseClassBoardEffectListDialog(Instance, 0LL, 0LL);
  this->fields.isInput = 1;
}


// local variable allocation has failed, the output may be wrong!
FriendOperationItemListViewItem_o *__fastcall FriendOperationItemListViewManager__GetItem(
        FriendOperationItemListViewManager_o *this,
        int32_t index,
        const MethodInfo *method)
{
  __int64 v5; // x1
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x20
  ListViewItem_o *v7; // x8
  __int64 v8; // x11

  if ( (byte_4217670 & 1) == 0 )
  {
    sub_B0D8A4(&FriendOperationItemListViewItem_TypeInfo, *(_QWORD *)&index);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v5);
    byte_4217670 = 1;
  }
  itemList = this->fields.itemList;
  if ( !itemList )
    return 0LL;
  if ( itemList->fields._size <= (unsigned int)index )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
  v7 = itemList->fields._items->m_Items[index];
  if ( !v7 )
    return 0LL;
  v8 = *(&FriendOperationItemListViewItem_TypeInfo->_2.bitflags2 + 1);
  if ( *(&v7->klass->_2.bitflags2 + 1) < (unsigned int)v8 )
    return 0LL;
  if ( (FriendOperationItemListViewItem_c *)v7->klass->_2.typeHierarchy[v8 - 1] == FriendOperationItemListViewItem_TypeInfo )
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

  if ( (byte_421766B & 1) == 0 )
  {
    sub_B0D8A4(&FriendOperationItemListViewManager_TypeInfo, v1);
    byte_421766B = 1;
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
        v5 = sub_B0D9A8(v2);
        sub_B0D948(v5, 0LL);
      }
      v2 = (FriendOperationItemListViewManager_c *)sortStatusList->m_Items[i];
      if ( !v2 )
LABEL_17:
        sub_B0D97C(v2);
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
  int32_t Index; // w2

  callbackFunc = this->fields.callbackFunc;
  this->fields.callbackFunc = 0LL;
  sub_B0D840(
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
      sub_B0D97C(v10);
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
  int32_t Index; // w2

  callbackFunc = this->fields.callbackFunc;
  this->fields.callbackFunc = 0LL;
  sub_B0D840(
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
      sub_B0D97C(v10);
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
  int32_t Index; // w2

  callbackFunc = this->fields.callbackFunc;
  this->fields.callbackFunc = 0LL;
  sub_B0D840(
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
      sub_B0D97C(v10);
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
  int32_t Index; // w2

  callbackFunc = this->fields.callbackFunc;
  this->fields.callbackFunc = 0LL;
  sub_B0D840(
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
      sub_B0D97C(v10);
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
  int32_t Index; // w2

  callbackFunc = this->fields.callbackFunc;
  this->fields.callbackFunc = 0LL;
  sub_B0D840(
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
      sub_B0D97C(v10);
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
  int32_t Index; // w2

  callbackFunc = this->fields.callbackFunc;
  this->fields.callbackFunc = 0LL;
  sub_B0D840(
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
      sub_B0D97C(v10);
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
  struct ListViewSort_o *sort; // x8

  if ( (byte_421767A & 1) == 0 )
  {
    sub_B0D8A4(&SoundManager_TypeInfo, method);
    byte_421767A = 1;
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
      sub_B0D97C(v3);
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
  int32_t menuKind; // w8
  WebViewManager_o *v7; // x0
  ListViewSort_o *sort; // x20
  CommonUI_o *v9; // x21
  __int64 v10; // x1
  __int64 v11; // x2
  OtherUserSortDialog_CallbackFunc_o *v12; // x22
  __int64 v13; // x0
  int32_t v14; // w1
  WebViewManager_o *Instance; // x0
  __int64 v16; // x1
  __int64 v17; // x2

  if ( (byte_4217678 & 1) == 0 )
  {
    sub_B0D8A4(&OtherUserSortDialog_CallbackFunc_TypeInfo, method);
    sub_B0D8A4(&Method_FriendOperationItemListViewManager_CloseSortDialog__, v3);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    sub_B0D8A4(&SoundManager_TypeInfo, v5);
    byte_4217678 = 1;
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
      Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      sort = this->fields.sort;
      v9 = (CommonUI_o *)Instance;
      v12 = (OtherUserSortDialog_CallbackFunc_o *)sub_B0D974(OtherUserSortDialog_CallbackFunc_TypeInfo, v16, v17);
      OtherUserSortDialog_CallbackFunc___ctor(
        v12,
        (Il2CppObject *)this,
        Method_FriendOperationItemListViewManager_CloseSortDialog__,
        0LL);
      if ( v9 )
      {
        v14 = 2;
        goto LABEL_14;
      }
LABEL_15:
      sub_B0D97C(v13);
    }
    if ( menuKind == 3 )
    {
      v7 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      sort = this->fields.sort;
      v9 = (CommonUI_o *)v7;
      v12 = (OtherUserSortDialog_CallbackFunc_o *)sub_B0D974(OtherUserSortDialog_CallbackFunc_TypeInfo, v10, v11);
      OtherUserSortDialog_CallbackFunc___ctor(
        v12,
        (Il2CppObject *)this,
        Method_FriendOperationItemListViewManager_CloseSortDialog__,
        0LL);
      if ( v9 )
      {
        v14 = 1;
LABEL_14:
        CommonUI__OpenOtherUserSortDialog(v9, v14, sort, v12, 0LL);
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
  int32_t Index; // w2

  callbackFunc = this->fields.callbackFunc;
  this->fields.callbackFunc = 0LL;
  sub_B0D840(
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
      sub_B0D97C(v10);
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

  if ( (byte_4217677 & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_12672/*"ScrollViewEnabled"*/, obj);
    byte_4217677 = 1;
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
      (System_String_o *)StringLiteral_12672/*"ScrollViewEnabled"*/,
      0.1,
      0LL);
    callbackFunc = this->fields.callbackFunc;
    this->fields.callbackFunc = 0LL;
    sub_B0D840((BattleServantConfConponent_o *)&this->fields.callbackFunc, 0LL, v9, v10, v11, v12, v13, v14);
    if ( callbackFunc )
    {
      if ( obj )
      {
        Index = ListViewObject__get_Index(obj, 0LL);
        FriendOperationItemListViewManager_CallbackFunc__Invoke(callbackFunc, kind, Index, 0LL);
        return;
      }
LABEL_10:
      sub_B0D97C(scrollView);
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
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  System_Action_o *callbackFunc2; // x20

  if ( (byte_4217676 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, method);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v3);
    byte_4217676 = 1;
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
          sub_B0D840((BattleServantConfConponent_o *)&this->fields.callbackFunc2, 0LL, v10, v11, v12, v13, v14, v15);
          if ( callbackFunc2 )
            System_Action__Invoke(callbackFunc2, 0LL);
          return;
        }
      }
LABEL_19:
      sub_B0D97C(emptyMessageBase);
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
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x21
  int32_t Index; // w20
  FriendOperationItemListViewItem_o *v18; // x21
  __int64 v19; // x10
  _QWORD *v20; // x0
  System_Reflection_MethodBase_o *v21; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *Master_WarQuestSelectionMaster; // x20
  const MethodInfo *v23; // x1
  int32_t scrollBar; // w22
  int32_t ClassBoardBaseId; // w20
  __int64 v26; // x1
  __int64 v27; // x2
  struct OtherUserGameEntity_o *otherUserGameEntity; // x8
  struct ClassBoardInfo_array *userClassBoardInfo; // x8
  int max_length; // w9
  unsigned int v31; // w10
  __int64 v32; // x21
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7
  _QWORD **v39; // x23
  __int64 v40; // x22
  __int16 v41; // w8
  __int64 v42; // x22
  __int64 v43; // x22
  __int64 v44; // x22
  System_Int32_array ***v45; // x8
  System_Int32_array **v46; // x1
  CommonUI_o *Instance; // x22
  __int64 v48; // x1
  __int64 v49; // x2
  System_Action_o *v50; // x23
  __int64 v51; // x0

  v4 = this;
  if ( (byte_421767E & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, obj);
    sub_B0D8A4(&Method_System_Array_Empty_int___, v5);
    sub_B0D8A4(&ClassBoardInfo_TypeInfo, v6);
    sub_B0D8A4(&Method_DataManager_GetMaster_ClassBoardClassMaster___, v7);
    sub_B0D8A4(&Method_DataManager_GetMaster_ServantMaster___, v8);
    sub_B0D8A4(&DataManager_TypeInfo, v9);
    sub_B0D8A4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v10);
    sub_B0D8A4(&FriendOperationItemListViewItem_TypeInfo, v11);
    sub_B0D8A4(&Method_FriendOperationItemListViewManager_EndCloseClassBoardEffectListDialog__, v12);
    sub_B0D8A4(&Method_FriendOperationItemListViewManager_OpenSupportClassBoard__, v13);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v14);
    this = (FriendOperationItemListViewManager_o *)sub_B0D8A4(
                                                     &Method_SingletonMonoBehaviour_CommonUI__get_Instance__,
                                                     v15);
    byte_421767E = 1;
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
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
        v18 = (FriendOperationItemListViewItem_o *)itemList->fields._items->m_Items[Index];
        if ( !v18 )
          return;
        v19 = *(&FriendOperationItemListViewItem_TypeInfo->_2.bitflags2 + 1);
        if ( *(&v18->klass->_2.bitflags2 + 1) < (unsigned int)v19
          || (FriendOperationItemListViewItem_c *)v18->klass->_2.typeHierarchy[v19 - 1] != FriendOperationItemListViewItem_TypeInfo )
        {
          return;
        }
        v4->fields.isInput = 0;
        v20 = Method_FriendOperationItemListViewManager_OpenSupportClassBoard__;
        if ( (*((_BYTE *)Method_FriendOperationItemListViewManager_OpenSupportClassBoard__ + 75) & 2) != 0 )
          v20 = (_QWORD *)sub_B0D8AC(Method_FriendOperationItemListViewManager_OpenSupportClassBoard__);
        v21 = (System_Reflection_MethodBase_o *)sub_B0D888(v20, v20[3]);
        OverwriteAssetSoundName__PlaySystemSe(v21, 0, 0LL);
        if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !DataManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        }
        Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_ServantMaster___);
        this = (FriendOperationItemListViewManager_o *)FriendOperationItemListViewItem__get_SvtId(v18, v23);
        if ( Master_WarQuestSelectionMaster )
        {
          this = (FriendOperationItemListViewManager_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                                           Master_WarQuestSelectionMaster,
                                                           (int32_t)this,
                                                           (const MethodInfo_2669BD4 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
          if ( this )
          {
            scrollBar = (int32_t)this->fields.scrollBar;
            this = (FriendOperationItemListViewManager_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_ClassBoardClassMaster___);
            if ( this )
            {
              ClassBoardBaseId = ClassBoardClassMaster__GetClassBoardBaseId(
                                   (ClassBoardClassMaster_o *)this,
                                   scrollBar,
                                   0LL);
              this = (FriendOperationItemListViewManager_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_ClassBoardClassMaster___);
              if ( this )
              {
                this = (FriendOperationItemListViewManager_o *)ClassBoardClassMaster__IsInvalidClass(
                                                                 (ClassBoardClassMaster_o *)this,
                                                                 scrollBar,
                                                                 0LL);
                if ( ((unsigned __int8)this & 1) != 0 )
                  goto LABEL_30;
                otherUserGameEntity = v18->fields.otherUserGameEntity;
                if ( !otherUserGameEntity )
                  goto LABEL_45;
                userClassBoardInfo = otherUserGameEntity->fields.userClassBoardInfo;
                if ( !userClassBoardInfo )
                  goto LABEL_45;
                max_length = userClassBoardInfo->max_length;
                if ( max_length < 1 )
                {
LABEL_30:
                  v32 = sub_B0D974(ClassBoardInfo_TypeInfo, v26, v27);
                  ClassBoardInfo___ctor((ClassBoardInfo_o *)v32, 0LL);
                  if ( v32 )
                  {
                    *(_DWORD *)(v32 + 16) = ClassBoardBaseId;
                    v39 = (_QWORD **)Method_System_Array_Empty_int___;
                    v40 = **((_QWORD **)Method_System_Array_Empty_int___ + 6);
                    v41 = *(_WORD *)(v40 + 306);
                    if ( (v41 & 1) == 0 )
                    {
                      sub_AA65A4(**((_QWORD **)Method_System_Array_Empty_int___ + 6));
                      v41 = *(_WORD *)(v40 + 306);
                    }
                    if ( (v41 & 0x400) != 0 )
                    {
                      v42 = *v39[6];
                      if ( (*(_BYTE *)(v42 + 306) & 1) == 0 )
                        sub_AA65A4(*v39[6]);
                      if ( !*(_DWORD *)(v42 + 224) )
                      {
                        v43 = *v39[6];
                        if ( (*(_BYTE *)(v43 + 306) & 1) == 0 )
                          sub_AA65A4(*v39[6]);
                        j_il2cpp_runtime_class_init_0(v43);
                      }
                    }
                    v44 = *v39[6];
                    if ( (*(_BYTE *)(v44 + 306) & 1) == 0 )
                      sub_AA65A4(*v39[6]);
                    v45 = *(System_Int32_array ****)(v44 + 184);
                    v46 = *v45;
                    *(_QWORD *)(v32 + 24) = *v45;
                    sub_B0D840((BattleServantConfConponent_o *)(v32 + 24), v46, v33, v34, v35, v36, v37, v38);
LABEL_43:
                    Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                    v50 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v48, v49);
                    System_Action___ctor(
                      v50,
                      (Il2CppObject *)v4,
                      Method_FriendOperationItemListViewManager_EndCloseClassBoardEffectListDialog__,
                      0LL);
                    if ( Instance )
                    {
                      CommonUI__OpenClassBoardEffectListDialog(
                        Instance,
                        1,
                        ClassBoardBaseId,
                        0,
                        v50,
                        1,
                        (ClassBoardInfo_o *)v32,
                        0LL);
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
                    {
                      v51 = sub_B0D9A8(this);
                      sub_B0D948(v51, 0LL);
                    }
                    v32 = (__int64)userClassBoardInfo->m_Items[v31];
                    if ( !v32 )
                      break;
                    if ( *(_DWORD *)(v32 + 16) == ClassBoardBaseId )
                      goto LABEL_43;
                    if ( (int)++v31 >= max_length )
                      goto LABEL_30;
                  }
                }
              }
            }
          }
        }
      }
LABEL_45:
      sub_B0D97C(this);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
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
  System_Collections_Generic_List_FriendOperationItemListViewObject__o *v9; // x20
  signed __int64 size; // x8
  unsigned __int64 v11; // x24
  int v12; // w23
  FriendOperationItemListViewObject_o *v13; // x21
  __int64 v14; // x1
  __int64 v15; // x2
  System_Action_o *v16; // x22
  const MethodInfo *v17; // x3
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  if ( (byte_4217675 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, method);
    sub_B0D8A4(&Method_FriendOperationItemListViewManager_OnMoveEnd__, v3);
    sub_B0D8A4(&Method_System_Collections_Generic_List_FriendOperationItemListViewObject__get_Count__, v4);
    sub_B0D8A4(&Method_System_Collections_Generic_List_FriendOperationItemListViewObject__get_Item__, v5);
    sub_B0D8A4(&StringLiteral_10060/*"OnMoveEnd"*/, v6);
    byte_4217675 = 1;
  }
  ListViewManager__ClippingItems((ListViewManager_o *)this, 1, 0, 0LL);
  ListViewManager__DragMaskStart((ListViewManager_o *)this, 0LL);
  ObjectList = FriendOperationItemListViewManager__get_ObjectList(this, v7);
  if ( !ObjectList )
LABEL_15:
    sub_B0D97C(ObjectList);
  v9 = ObjectList;
  this->fields.callbackCount = ObjectList->fields._size;
  LODWORD(size) = ObjectList->fields._size;
  if ( (int)size < 1 )
    goto LABEL_14;
  v11 = 0LL;
  v12 = 0;
  do
  {
    if ( v11 >= (unsigned int)size )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
    v13 = v9->fields._items->m_Items[v11];
    if ( ListViewManager__ClippingItem((ListViewManager_o *)this, (ListViewObject_o *)v13, 0LL) )
    {
      v16 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v14, v15);
      System_Action___ctor(v16, (Il2CppObject *)this, Method_FriendOperationItemListViewManager_OnMoveEnd__, 0LL);
      if ( !v13 )
        goto LABEL_15;
      ++v12;
      zero = UnityEngine_Vector3__get_zero(0LL);
      FriendOperationItemListViewObject__Init(v13, 4, v16, 0.1, *(UnityEngine_Vector3_o *)&zero.fields.y, v17);
    }
    else
    {
      --this->fields.callbackCount;
    }
    size = v9->fields._size;
    ++v11;
  }
  while ( (__int64)v11 < size );
  if ( !v12 )
  {
LABEL_14:
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10060/*"OnMoveEnd"*/,
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
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *ObjectList; // x0
  int32_t size; // w8
  __int64 v16; // x1
  __int64 v17; // x2
  Il2CppObject *current; // x21
  System_Action_o *v19; // x22
  __int64 v20; // x0
  const MethodInfo *v21; // x3
  System_Collections_Generic_List_Enumerator_T__o v22; // [xsp+8h] [xbp-58h] BYREF
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  if ( (byte_4217673 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, *(_QWORD *)&mode);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_FriendOperationItemListViewObject__Dispose__, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_FriendOperationItemListViewObject__MoveNext__, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_FriendOperationItemListViewObject__get_Current__, v9);
    sub_B0D8A4(&Method_FriendOperationItemListViewManager_OnMoveEnd__, v10);
    sub_B0D8A4(&Method_System_Collections_Generic_List_FriendOperationItemListViewObject__GetEnumerator__, v11);
    sub_B0D8A4(&Method_System_Collections_Generic_List_FriendOperationItemListViewObject__get_Count__, v12);
    sub_B0D8A4(&StringLiteral_10060/*"OnMoveEnd"*/, v13);
    byte_4217673 = 1;
  }
  memset(&v22, 0, sizeof(v22));
  ObjectList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)FriendOperationItemListViewManager__get_ObjectList(
                                                                                                this,
                                                                                                *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_B0D97C(0LL);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10060/*"OnMoveEnd"*/,
      delay,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v22,
      ObjectList,
      (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_FriendOperationItemListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v22,
              (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_FriendOperationItemListViewObject__MoveNext__) )
    {
      current = v22.fields.current;
      v19 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v16, v17);
      System_Action___ctor(v19, (Il2CppObject *)this, Method_FriendOperationItemListViewManager_OnMoveEnd__, 0LL);
      if ( !current )
        sub_B0D97C(v20);
      zero = UnityEngine_Vector3__get_zero(0LL);
      FriendOperationItemListViewObject__Init(
        (FriendOperationItemListViewObject_o *)current,
        mode,
        v19,
        delay,
        *(UnityEngine_Vector3_o *)&zero.fields.y,
        v21);
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v22,
      (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_FriendOperationItemListViewObject__Dispose__);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FriendOperationItemListViewManager__RequestListObject_29792880(
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
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *ObjectList; // x0
  int32_t size; // w8
  __int64 v14; // x1
  __int64 v15; // x2
  Il2CppObject *current; // x21
  System_Action_o *v17; // x22
  __int64 v18; // x0
  const MethodInfo *v19; // x3
  System_Collections_Generic_List_Enumerator_T__o v20; // [xsp+8h] [xbp-58h] BYREF
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  if ( (byte_4217674 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, *(_QWORD *)&mode);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_FriendOperationItemListViewObject__Dispose__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_FriendOperationItemListViewObject__MoveNext__, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_FriendOperationItemListViewObject__get_Current__, v7);
    sub_B0D8A4(&Method_FriendOperationItemListViewManager_OnMoveEnd__, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_List_FriendOperationItemListViewObject__GetEnumerator__, v9);
    sub_B0D8A4(&Method_System_Collections_Generic_List_FriendOperationItemListViewObject__get_Count__, v10);
    sub_B0D8A4(&StringLiteral_10060/*"OnMoveEnd"*/, v11);
    byte_4217674 = 1;
  }
  memset(&v20, 0, sizeof(v20));
  ObjectList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)FriendOperationItemListViewManager__get_ObjectList(
                                                                                                this,
                                                                                                *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_B0D97C(0LL);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10060/*"OnMoveEnd"*/,
      0.0,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v20,
      ObjectList,
      (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_FriendOperationItemListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v20,
              (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_FriendOperationItemListViewObject__MoveNext__) )
    {
      current = v20.fields.current;
      v17 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v14, v15);
      System_Action___ctor(v17, (Il2CppObject *)this, Method_FriendOperationItemListViewManager_OnMoveEnd__, 0LL);
      if ( !current )
        sub_B0D97C(v18);
      zero = UnityEngine_Vector3__get_zero(0LL);
      FriendOperationItemListViewObject__Init(
        (FriendOperationItemListViewObject_o *)current,
        mode,
        v17,
        0.0,
        *(UnityEngine_Vector3_o *)&zero.fields.y,
        v19);
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v20,
      (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_FriendOperationItemListViewObject__Dispose__);
  }
}


void __fastcall FriendOperationItemListViewManager__ScrollViewEnabled(
        FriendOperationItemListViewManager_o *this,
        const MethodInfo *method)
{
  UnityEngine_Behaviour_o *scrollView; // x0

  scrollView = (UnityEngine_Behaviour_o *)this->fields.scrollView;
  if ( !scrollView )
    sub_B0D97C(0LL);
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
  const MethodInfo *v12; // x2
  __int64 v13; // x10
  struct System_Collections_Generic_List_ListViewItem__o *itemSortList; // x0
  struct ListViewSort_o *sort; // x8
  int v16; // w20
  const MethodInfo *v17; // x2
  struct System_Collections_Generic_List_ListViewItem__o *v18; // x8
  ListViewItem_o *v19; // x8
  struct System_Collections_Generic_List_ListViewItem__o *v20; // x20
  int32_t size; // w8
  ListViewItem_o *v22; // x8
  struct System_Collections_Generic_List_ListViewItem__o *v23; // x8
  int v24; // w9
  ListViewItem_o *v25; // x8
  System_Collections_Generic_List_Enumerator_T__o v26; // [xsp+8h] [xbp-78h] BYREF
  int v27[2]; // [xsp+20h] [xbp-60h]
  int v28; // [xsp+28h] [xbp-58h]
  System_Collections_Generic_List_Enumerator_T__o i; // [xsp+30h] [xbp-50h] BYREF

  if ( (byte_421767C & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__, *(_QWORD *)&classPos);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v6);
    sub_B0D8A4(&FriendOperationItemListViewItem_TypeInfo, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v9);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v10);
    byte_421767C = 1;
  }
  memset(&i, 0, sizeof(i));
  v28 = 0;
  itemList = this->fields.itemList;
  if ( itemList )
  {
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v26,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)itemList,
      (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    i = v26;
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &i,
              (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__) )
    {
      if ( i.fields.current )
      {
        v13 = *(&FriendOperationItemListViewItem_TypeInfo->_2.bitflags2 + 1);
        if ( *(&i.fields.current->klass->_2.bitflags2 + 1) >= (unsigned int)v13
          && (FriendOperationItemListViewItem_c *)i.fields.current->klass->_2.typeHierarchy[v13 - 1] == FriendOperationItemListViewItem_TypeInfo )
        {
          FriendOperationItemListViewItem__AnalyzeEntity(
            (FriendOperationItemListViewItem_o *)i.fields.current,
            classPos,
            v12);
        }
      }
    }
    v27[0] = 71;
    v28 = 1;
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &i,
      (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    v28 = 0;
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
          &v26,
          (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)itemSortList,
          (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
        for ( i = v26;
              System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                &i,
                (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
              ((void (*)(void))i.fields.current->klass->vtable[4].method)() )
        {
          if ( !i.fields.current )
            sub_B0D97C(0LL);
        }
        v27[0] = 190;
        v16 = ++v28;
        System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
          &i,
          (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
        if ( v16 && v27[v16 - 1] == 190 )
          v28 = v16 - 1;
        v18 = this->fields.itemSortList;
        if ( v18 )
        {
          if ( v18->fields._size < 1 )
            goto LABEL_34;
          v19 = v18->fields._items->m_Items[0];
          if ( !v19 )
            goto LABEL_36;
          v19->fields.isTermination = 1;
          v20 = this->fields.itemSortList;
          if ( !v20 )
            goto LABEL_36;
          size = v20->fields._size;
          if ( !size )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
          v22 = v20->fields._items->m_Items[size - 1];
          if ( !v22 )
            goto LABEL_36;
          v22->fields.isTermination = 1;
          v23 = this->fields.itemSortList;
          if ( !v23 )
            goto LABEL_36;
          v24 = v23->fields._size;
          if ( v24 < 3 )
          {
LABEL_34:
            FriendOperationItemListViewManager__SetMode_29791776(this, 5, v17);
            return;
          }
          v25 = v23->fields._items->m_Items[v24 - 1];
          if ( v25 )
          {
            v25->fields.isTerminationSpace = 1;
            goto LABEL_34;
          }
        }
      }
LABEL_36:
      sub_B0D97C(itemSortList);
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
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.callbackFunc,
    (System_Int32_array **)callback,
    (System_String_array **)callback,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  FriendOperationItemListViewManager__SetMode_29791776(this, mode, v10);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FriendOperationItemListViewManager__SetMode_29791776(
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
  __int64 v12; // x2
  int32_t v13; // w8
  void *v14; // x20
  int v15; // w8
  __int64 v16; // x23
  FriendOperationItemListViewObject_o *v17; // x22
  System_Action_o *v18; // x0
  const MethodInfo *v19; // x1
  const MethodInfo *v20; // x2
  int v21; // s0
  System_String_o *v22; // x1
  const MethodInfo *v23; // x1
  __int64 v24; // x1
  __int64 v25; // x2
  int32_t v26; // w8
  void *v27; // x20
  int v28; // w8
  __int64 v29; // x23
  FriendOperationItemListViewObject_o *v30; // x21
  System_Action_o *v31; // x22
  const MethodInfo *v32; // x3
  const MethodInfo *v33; // x1
  __int64 v34; // x1
  __int64 v35; // x2
  int32_t v36; // w8
  void *v37; // x20
  int v38; // w8
  __int64 v39; // x23
  FriendOperationItemListViewObject_o *v40; // x21
  System_Action_o *v41; // x22
  const MethodInfo *v42; // x3
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED
  UnityEngine_Vector3_o v44; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  if ( (byte_4217672 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, *(_QWORD *)&mode);
    sub_B0D8A4(&Method_FriendOperationItemListViewManager_OnMoveEnd__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_FriendOperationItemListViewObject__get_Count__, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_FriendOperationItemListViewObject__get_Item__, v7);
    sub_B0D8A4(&StringLiteral_10060/*"OnMoveEnd"*/, v8);
    sub_B0D8A4(&StringLiteral_11456/*"RequestInto"*/, v9);
    byte_4217672 = 1;
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
        v21 = 0;
        v22 = (System_String_o *)StringLiteral_11456/*"RequestInto"*/;
        goto LABEL_38;
      case 2:
        FriendOperationItemListViewManager__RequestListObject_29792880(this, 3, v20);
        return;
      case 3:
        ListViewManager__DragMaskStart((ListViewManager_o *)this, 0LL);
        emptyMessageBase = FriendOperationItemListViewManager__get_ClippingObjectList(this, v23);
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
        while ( 1 )
        {
          if ( v28 <= (unsigned int)v29 )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
          v30 = *(FriendOperationItemListViewObject_o **)(*((_QWORD *)v27 + 2) + 8 * v29 + 32);
          v31 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v24, v25);
          System_Action___ctor(v31, (Il2CppObject *)this, Method_FriendOperationItemListViewManager_OnMoveEnd__, 0LL);
          if ( !v30 )
            break;
          zero = UnityEngine_Vector3__get_zero(0LL);
          FriendOperationItemListViewObject__Init(v30, 5, v31, 0.1, *(UnityEngine_Vector3_o *)&zero.fields.y, v32);
          v28 = *((_DWORD *)v27 + 6);
          if ( (int)++v29 >= v28 )
            return;
        }
        goto LABEL_39;
      case 4:
        ListViewManager__DragMaskStart((ListViewManager_o *)this, 0LL);
        emptyMessageBase = FriendOperationItemListViewManager__get_ClippingObjectList(this, v33);
        if ( !emptyMessageBase )
          goto LABEL_39;
        v36 = *((_DWORD *)emptyMessageBase + 6);
        v37 = emptyMessageBase;
        if ( v36 < 1 )
          goto LABEL_37;
        this->fields.callbackCount = v36;
        v38 = *((_DWORD *)emptyMessageBase + 6);
        if ( v38 < 1 )
          return;
        v39 = 0LL;
        break;
      default:
        return;
    }
    while ( 1 )
    {
      if ( v38 <= (unsigned int)v39 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
      v40 = *(FriendOperationItemListViewObject_o **)(*((_QWORD *)v37 + 2) + 8 * v39 + 32);
      v41 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v34, v35);
      System_Action___ctor(v41, (Il2CppObject *)this, Method_FriendOperationItemListViewManager_OnMoveEnd__, 0LL);
      if ( !v40 )
        break;
      v44 = UnityEngine_Vector3__get_zero(0LL);
      FriendOperationItemListViewObject__Init(v40, 6, v41, 0.1, *(UnityEngine_Vector3_o *)&v44.fields.y, v42);
      v38 = *((_DWORD *)v37 + 6);
      if ( (int)++v39 >= v38 )
        return;
    }
LABEL_39:
    sub_B0D97C(emptyMessageBase);
  }
  emptyMessageBase = FriendOperationItemListViewManager__get_ObjectList(this, *(const MethodInfo **)&mode);
  if ( !emptyMessageBase )
    goto LABEL_39;
  v13 = *((_DWORD *)emptyMessageBase + 6);
  v14 = emptyMessageBase;
  if ( v13 < 1 )
  {
LABEL_37:
    this->fields.callbackCount = 1;
    v22 = (System_String_o *)StringLiteral_10060/*"OnMoveEnd"*/;
    v21 = 1045220557;
LABEL_38:
    UnityEngine_MonoBehaviour__Invoke((UnityEngine_MonoBehaviour_o *)this, v22, *(float *)&v21, 0LL);
  }
  else
  {
    this->fields.callbackCount = v13;
    v15 = *((_DWORD *)emptyMessageBase + 6);
    if ( v15 >= 1 )
    {
      v16 = 0LL;
      while ( 1 )
      {
        if ( v15 <= (unsigned int)v16 )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
        v17 = *(FriendOperationItemListViewObject_o **)(*((_QWORD *)v14 + 2) + 8 * v16 + 32);
        v18 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v11, v12);
        System_Action___ctor(v18, (Il2CppObject *)this, Method_FriendOperationItemListViewManager_OnMoveEnd__, 0LL);
        if ( !v17 )
          break;
        UnityEngine_Vector3__get_zero(0LL);
        if ( (byte_4217688 & 1) == 0 )
        {
          sub_B0D8A4(&FriendOperationItemListViewItem_TypeInfo, v19);
          byte_4217688 = 1;
        }
        FriendOperationItemListViewObject__SetupDisp(v17, v19);
        v15 = *((_DWORD *)v14 + 6);
        if ( (int)++v16 >= v15 )
          return;
      }
      goto LABEL_39;
    }
  }
}


void __fastcall FriendOperationItemListViewManager__SetMode_29792744(
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
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.callbackFunc2,
    (System_Int32_array **)callback,
    (System_String_array **)callback,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  FriendOperationItemListViewManager__SetMode_29791776(this, mode, v10);
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
  if ( (byte_4217671 & 1) == 0 )
  {
    this = (FriendOperationItemListViewManager_o *)sub_B0D8A4(&FriendOperationItemListViewObject_TypeInfo, obj);
    byte_4217671 = 1;
  }
  if ( !obj
    || (v6 = *(&FriendOperationItemListViewObject_TypeInfo->_2.bitflags2 + 1),
        *(&obj->klass->_2.bitflags2 + 1) < (unsigned int)v6)
    || (FriendOperationItemListViewObject_c *)obj->klass->_2.typeHierarchy[v6 - 1] != FriendOperationItemListViewObject_TypeInfo )
  {
    sub_B0D97C(this);
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
  _BOOL4 isAscendingOrder; // w8
  System_String_o **v18; // x9
  System_String_o **v19; // x10
  System_String_o **v20; // x8
  System_String_o **v21; // x8
  struct ListViewSort_o *v22; // x8

  if ( (byte_421767B & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, method);
    sub_B0D8A4(&StringLiteral_17072/*"btn_sort_up"*/, v3);
    sub_B0D8A4(&StringLiteral_17156/*"btn_txt_up"*/, v4);
    sub_B0D8A4(&StringLiteral_17112/*"btn_txt_new"*/, v5);
    sub_B0D8A4(&StringLiteral_17102/*"btn_txt_down"*/, v6);
    sub_B0D8A4(&StringLiteral_17119/*"btn_txt_old"*/, v7);
    sub_B0D8A4(&StringLiteral_17069/*"btn_sort_down"*/, v8);
    byte_421767B = 1;
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
    v11 = this->fields.sortKindLabel;
    sort = (ListViewSort_o *)ListViewSort__GetSortKindButtonText(sort, 0LL);
    if ( !v11 )
      goto LABEL_38;
    UILabel__set_text(v11, (System_String_o *)sort, 0LL);
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
    v13 = this->fields.sort;
    if ( !v13 )
      goto LABEL_38;
    sortKind = v13->fields.sortKind;
    if ( sortKind == 1 || sortKind == 11 || (unsigned int)(sortKind - 17) <= 1 )
    {
      sort = (ListViewSort_o *)this->fields.sortExplanationSprite;
      if ( !sort )
        goto LABEL_38;
      v15 = (System_String_o **)(v13->fields.isAscendingOrder ? &StringLiteral_17119/*"btn_txt_old"*/ : &StringLiteral_17112/*"btn_txt_new"*/);
      UISprite__set_spriteName((UISprite_o *)sort, *v15, 0LL);
      v16 = this->fields.sort;
      if ( !v16 )
        goto LABEL_38;
      sort = (ListViewSort_o *)this->fields.sortOrderSprite;
      if ( !sort )
        goto LABEL_38;
      isAscendingOrder = v16->fields.isAscendingOrder;
      v18 = (System_String_o **)&StringLiteral_17069/*"btn_sort_down"*/;
      v19 = (System_String_o **)&StringLiteral_17072/*"btn_sort_up"*/;
    }
    else
    {
      sort = (ListViewSort_o *)this->fields.sortExplanationSprite;
      if ( !sort )
        goto LABEL_38;
      v21 = (System_String_o **)(v13->fields.isAscendingOrder ? &StringLiteral_17156/*"btn_txt_up"*/ : &StringLiteral_17102/*"btn_txt_down"*/);
      UISprite__set_spriteName((UISprite_o *)sort, *v21, 0LL);
      v22 = this->fields.sort;
      if ( !v22 )
        goto LABEL_38;
      sort = (ListViewSort_o *)this->fields.sortOrderSprite;
      if ( !sort )
        goto LABEL_38;
      isAscendingOrder = v22->fields.isAscendingOrder;
      v18 = (System_String_o **)&StringLiteral_17072/*"btn_sort_up"*/;
      v19 = (System_String_o **)&StringLiteral_17069/*"btn_sort_down"*/;
    }
    if ( isAscendingOrder )
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
LABEL_38:
    sub_B0D97C(sort);
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
    sub_B0D97C(this);
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
  BattleServantConfConponent_o *p_classBoardMaxDictionary; // x20
  System_Collections_Generic_Dictionary_int__int__o *v17; // x19
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *Master_WarQuestSelectionMaster; // x0
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v27; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v30; // x8
  unsigned __int64 v31; // x10
  int32_t *v32; // x11
  __int64 v33; // x0
  __int64 v34; // x0
  __int64 v35; // x21
  __int64 v36; // x9
  ClassBoardSquareMaster_o *v37; // x0
  ClassBoardSquareEntity_array *OtherThanNoneEntity; // x0
  System_Collections_Generic_IEnumerator_T__c *v39; // x8
  unsigned __int64 v40; // x10
  int32_t *v41; // x11
  __int64 v42; // x0

  if ( (byte_421767D & 1) == 0 )
  {
    sub_B0D8A4(&ClassBoardBaseEntity_TypeInfo, method);
    sub_B0D8A4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, v4);
    sub_B0D8A4(&Method_DataManager_GetMaster_ClassBoardBaseMaster___, v5);
    sub_B0D8A4(&Method_DataManager_GetMaster_ClassBoardSquareMaster___, v6);
    sub_B0D8A4(&DataManager_TypeInfo, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_int__int__Add__, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_int__int__Clear__, v9);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_int__int___ctor__, v10);
    sub_B0D8A4(&System_Collections_Generic_Dictionary_int__int__TypeInfo, v11);
    sub_B0D8A4(&System_IDisposable_TypeInfo, v12);
    sub_B0D8A4(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v13);
    sub_B0D8A4(&System_Collections_IEnumerator_TypeInfo, v14);
    byte_421767D = 1;
  }
  classBoardMaxDictionary = this->fields.classBoardMaxDictionary;
  p_classBoardMaxDictionary = (BattleServantConfConponent_o *)&this->fields.classBoardMaxDictionary;
  if ( classBoardMaxDictionary )
  {
    System_Collections_Generic_Dictionary_int__int___Clear(
      classBoardMaxDictionary,
      (const MethodInfo_2E69A20 *)Method_System_Collections_Generic_Dictionary_int__int__Clear__);
  }
  else
  {
    v17 = (System_Collections_Generic_Dictionary_int__int__o *)sub_B0D974(
                                                                 System_Collections_Generic_Dictionary_int__int__TypeInfo,
                                                                 method,
                                                                 v2);
    System_Collections_Generic_Dictionary_int__int____ctor(
      v17,
      (const MethodInfo_2E68CB0 *)Method_System_Collections_Generic_Dictionary_int__int___ctor__);
    p_classBoardMaxDictionary->klass = (BattleServantConfConponent_c *)v17;
    sub_B0D840(p_classBoardMaxDictionary, (System_Int32_array **)v17, v18, v19, v20, v21, v22, v23);
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_ClassBoardBaseMaster___);
  if ( !Master_WarQuestSelectionMaster
    || (Master_WarQuestSelectionMaster = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)Master_WarQuestSelectionMaster[1].klass) == 0LL )
  {
    sub_B0D97C(Master_WarQuestSelectionMaster);
  }
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 Master_WarQuestSelectionMaster,
                 (const MethodInfo_2AB5D9C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B0D97C(0LL);
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v27 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v27;
        p_offset += 4;
        if ( v27 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_16;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_16:
      p_method = sub_AA67A0(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v30 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v31 = 0LL;
      v32 = &v30->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v32 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v31;
        v32 += 4;
        if ( v31 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_23;
      }
      v33 = (__int64)&v30->vtable[*v32].method;
    }
    else
    {
LABEL_23:
      v33 = sub_AA67A0(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v34 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v33)(
            Enumerator,
            *(_QWORD *)(v33 + 8));
    v35 = v34;
    if ( v34 )
    {
      v36 = *(&ClassBoardBaseEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(unsigned __int8 *)(*(_QWORD *)v34 + 300LL) < (unsigned int)v36
        || *(ClassBoardBaseEntity_c **)(*(_QWORD *)(*(_QWORD *)v34 + 200LL) + 8 * v36 - 8) != ClassBoardBaseEntity_TypeInfo )
      {
        sub_B0DC70(v34);
LABEL_44:
        sub_B0D97C(v37);
      }
    }
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    v37 = (ClassBoardSquareMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_ClassBoardSquareMaster___);
    if ( !v35 )
      goto LABEL_44;
    if ( !v37 )
      sub_B0D97C(0LL);
    OtherThanNoneEntity = ClassBoardSquareMaster__GetOtherThanNoneEntity(v37, *(_DWORD *)(v35 + 16), 0LL);
    if ( OtherThanNoneEntity )
    {
      if ( !p_classBoardMaxDictionary->klass )
        sub_B0D97C(OtherThanNoneEntity);
      System_Collections_Generic_Dictionary_int__int___Add(
        (System_Collections_Generic_Dictionary_int__int__o *)p_classBoardMaxDictionary->klass,
        *(_DWORD *)(v35 + 16),
        OtherThanNoneEntity->max_length,
        (const MethodInfo_2E69854 *)Method_System_Collections_Generic_Dictionary_int__int__Add__);
    }
  }
  v39 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v40 = 0LL;
    v41 = &v39->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v41 - 1) != System_IDisposable_TypeInfo )
    {
      ++v40;
      v41 += 4;
      if ( v40 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_40;
    }
    v42 = (__int64)&v39->vtable[*v41].method;
  }
  else
  {
LABEL_40:
    v42 = sub_AA67A0(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v42)(Enumerator, *(_QWORD *)(v42 + 8));
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

  if ( (byte_4217665 & 1) == 0 )
  {
    sub_B0D8A4(&FriendOperationItemListViewManager_CallbackFunc_TypeInfo, value);
    byte_4217665 = 1;
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
    v8 = sub_B022BC(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_B0DC70(v7);
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

  if ( (byte_4217667 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, value);
    byte_4217667 = 1;
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
    v8 = sub_B022BC(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_B0DC70(v7);
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
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v12; // x19
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  Il2CppObject *current; // x21
  _BOOL8 v15; // x0
  FriendOperationItemListViewObject_o *Component_srcLineSprite; // x0
  const MethodInfo *v17; // x1
  EventMissionProgressRequest_Argument_ProgressData_o *v18; // x21
  ListViewItem_o *Item; // x0
  _BOOL8 v20; // x0
  System_Collections_Generic_List_Enumerator_T__o v22; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v23; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_421766D & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, method);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v4);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v5);
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_FriendOperationItemListViewObject___, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_FriendOperationItemListViewObject__Add__, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_List_FriendOperationItemListViewObject___ctor__, v9);
    sub_B0D8A4(&System_Collections_Generic_List_FriendOperationItemListViewObject__TypeInfo, v10);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v11);
    byte_421766D = 1;
  }
  memset(&v23, 0, sizeof(v23));
  v12 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_FriendOperationItemListViewObject__TypeInfo,
                                                                                                  method,
                                                                                                  v2);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v12,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_FriendOperationItemListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_B0D97C(0LL);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v22,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)objectList,
    (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v23 = v22;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v23,
            (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v23.fields.current;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v15 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v15 )
    {
      if ( !current )
        sub_B0D97C(v15);
      Component_srcLineSprite = (FriendOperationItemListViewObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                         (UnityEngine_GameObject_o *)current,
                                                                         (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_FriendOperationItemListViewObject___);
      v18 = (EventMissionProgressRequest_Argument_ProgressData_o *)Component_srcLineSprite;
      if ( !Component_srcLineSprite )
        sub_B0D97C(0LL);
      Item = (ListViewItem_o *)FriendOperationItemListViewObject__GetItem(Component_srcLineSprite, v17);
      if ( !Item )
        sub_B0D97C(0LL);
      if ( Item->fields.isTermination )
      {
        v20 = ListViewManager__ClippingItem_23719204((ListViewManager_o *)this, Item, 0LL);
        if ( v20 )
        {
          if ( !v12 )
            sub_B0D97C(v20);
          goto LABEL_16;
        }
      }
      else
      {
        if ( !v12 )
          sub_B0D97C(Item);
LABEL_16:
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v12,
          v18,
          (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_FriendOperationItemListViewObject__Add__);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v23,
    (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_FriendOperationItemListViewObject__o *)v12;
}


bool __fastcall FriendOperationItemListViewManager__get_IsExistSwapLockUser(
        FriendOperationItemListViewManager_o *this,
        const MethodInfo *method)
{
  FriendOperationItemListViewManager_o *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x22
  unsigned __int64 i; // x20
  ListViewItem_o *v7; // x8
  __int64 v8; // x11

  v2 = this;
  if ( (byte_421766E & 1) == 0 )
  {
    sub_B0D8A4(&FriendOperationItemListViewItem_TypeInfo, method);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v3);
    this = (FriendOperationItemListViewManager_o *)sub_B0D8A4(
                                                     &Method_System_Collections_Generic_List_ListViewItem__get_Item__,
                                                     v4);
    byte_421766E = 1;
  }
  itemList = v2->fields.itemList;
  if ( itemList )
  {
    for ( i = 0LL; (__int64)i < itemList->fields._size; ++i )
    {
      if ( i >= (unsigned int)itemList->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
      v7 = itemList->fields._items->m_Items[i];
      if ( v7 )
      {
        v8 = *(&FriendOperationItemListViewItem_TypeInfo->_2.bitflags2 + 1);
        if ( *(&v7->klass->_2.bitflags2 + 1) >= (unsigned int)v8
          && (FriendOperationItemListViewItem_c *)v7->klass->_2.typeHierarchy[v8 - 1] == FriendOperationItemListViewItem_TypeInfo
          && BYTE2(v7[1].fields.sortValue1B) )
        {
          return 1;
        }
      }
      itemList = v2->fields.itemList;
      if ( !itemList )
        sub_B0D97C(this);
    }
  }
  return 0;
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
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v12; // x19
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  Il2CppObject *current; // x20
  _BOOL8 v15; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *Component_srcLineSprite; // x0
  System_Collections_Generic_List_Enumerator_T__o v18; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v19; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_421766C & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, method);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v4);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v5);
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_FriendOperationItemListViewObject___, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_FriendOperationItemListViewObject__Add__, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_List_FriendOperationItemListViewObject___ctor__, v9);
    sub_B0D8A4(&System_Collections_Generic_List_FriendOperationItemListViewObject__TypeInfo, v10);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v11);
    byte_421766C = 1;
  }
  memset(&v19, 0, sizeof(v19));
  v12 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_FriendOperationItemListViewObject__TypeInfo,
                                                                                                  method,
                                                                                                  v2);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v12,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_FriendOperationItemListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_B0D97C(0LL);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v18,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)objectList,
    (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v19 = v18;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v19,
            (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v19.fields.current;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v15 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v15 )
    {
      if ( !current )
        sub_B0D97C(v15);
      Component_srcLineSprite = (EventMissionProgressRequest_Argument_ProgressData_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                                         (UnityEngine_GameObject_o *)current,
                                                                                         (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_FriendOperationItemListViewObject___);
      if ( !v12 )
        sub_B0D97C(Component_srcLineSprite);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v12,
        Component_srcLineSprite,
        (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_FriendOperationItemListViewObject__Add__);
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v19,
    (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
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
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  FriendOperationItemListViewManager_CallbackFunc_o *callbackFunc; // x19
  __int64 v10; // x0
  int32_t Index; // w2

  callbackFunc = this->fields.callbackFunc;
  this->fields.callbackFunc = 0LL;
  sub_B0D840(
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
      sub_B0D97C(v10);
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
  int32_t Index; // w2

  callbackFunc = this->fields.callbackFunc;
  this->fields.callbackFunc = 0LL;
  sub_B0D840(
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
      sub_B0D97C(v10);
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
  int32_t Index; // w2

  callbackFunc = this->fields.callbackFunc;
  this->fields.callbackFunc = 0LL;
  sub_B0D840(
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
      sub_B0D97C(v10);
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

  if ( (byte_4217666 & 1) == 0 )
  {
    sub_B0D8A4(&FriendOperationItemListViewManager_CallbackFunc_TypeInfo, value);
    byte_4217666 = 1;
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
    v8 = sub_B022BC(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_B0DC70(v7);
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

  if ( (byte_4217668 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, value);
    byte_4217668 = 1;
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
    v8 = sub_B022BC(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_B0DC70(v7);
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
    sub_B0D97C(scrollBar);
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
    sub_B0D97C(scrollBar);
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
  sub_B0D840(p_method, object);
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
  __int64 v11[3]; // [xsp+0h] [xbp-40h] BYREF
  int32_t v12; // [xsp+18h] [xbp-28h] BYREF
  int32_t v13; // [xsp+1Ch] [xbp-24h] BYREF

  v12 = result;
  v13 = kind;
  if ( (byte_4210F60 & 1) == 0 )
  {
    sub_B0D8A4(&int_TypeInfo, *(_QWORD *)&kind);
    sub_B0D8A4(&FriendOperationItemListViewManager_ResultKind_TypeInfo, v9);
    byte_4210F60 = 1;
  }
  v11[2] = 0LL;
  v11[0] = j_il2cpp_value_box_0(FriendOperationItemListViewManager_ResultKind_TypeInfo, &v13);
  v11[1] = j_il2cpp_value_box_0(int_TypeInfo, &v12);
  return (System_IAsyncResult_o *)sub_B0D848(this, v11, callback, object);
}


void __fastcall FriendOperationItemListViewManager_CallbackFunc__EndInvoke(
        FriendOperationItemListViewManager_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B0D84C(result, 0LL, method);
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
        sub_B0D960(*(_QWORD *)&v20->fields.extra_arg, *(_QWORD *)&kind, *(_QWORD *)&result, method);
      if ( (sub_B0D8D4(v22) & 1) == 0 )
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
      v24 = sub_B0D8CC(v22);
      v25 = sub_B0DCD0(v22);
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
            v18 = sub_AA67A0(v21, v28, v29);
          }
          v17 = *(_QWORD *)(v18 + 8);
        }
        else
        {
          v17 = *(_QWORD *)(*v21 + 16LL * *(unsigned __int16 *)(v22 + 72) + 320);
        }
        v19 = (void (__fastcall **)(__int64 *, _QWORD, _QWORD, _QWORD))sub_B0D954(v17, v22);
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
            v16 = sub_AA67A0(v21, class_0, v10);
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
  __int64 v1; // x1
  __int64 v2; // x2
  Il2CppObject *v3; // x19
  struct FriendOperationItemListViewManager___c_StaticFields *static_fields; // x0

  if ( (byte_4210F5E & 1) == 0 )
  {
    sub_B0D8A4(&FriendOperationItemListViewManager___c_TypeInfo, v1);
    byte_4210F5E = 1;
  }
  v3 = (Il2CppObject *)sub_B0D974(FriendOperationItemListViewManager___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  static_fields = FriendOperationItemListViewManager___c_TypeInfo->static_fields;
  static_fields->__9 = (struct FriendOperationItemListViewManager___c_o *)v3;
  sub_B0D840(static_fields, v3);
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
  __int64 v6; // x8
  int32_t result; // w0
  FriendOperationItemListViewManager_CallbackFunc_o *v8; // x0
  Il2CppObject *v9; // x1
  intptr_t v10; // w2
  const MethodInfo *v11; // x3

  if ( (byte_4210F5F & 1) == 0 )
  {
    this = (FriendOperationItemListViewManager___c_o *)sub_B0D8A4(&UserFriendRequestHistoryEntity_TypeInfo, a);
    byte_4210F5F = 1;
  }
  if ( !b )
LABEL_11:
    sub_B0D97C(this);
  v6 = *(&UserFriendRequestHistoryEntity_TypeInfo->_2.bitflags2 + 1);
  if ( *(&b->klass->_2.bitflags2 + 1) < (unsigned int)v6
    || (UserFriendRequestHistoryEntity_c *)b->klass->_2.typeHierarchy[v6 - 1] != UserFriendRequestHistoryEntity_TypeInfo )
  {
    this = (FriendOperationItemListViewManager___c_o *)sub_B0DC70(b);
    goto LABEL_11;
  }
  if ( !a )
    goto LABEL_11;
  if ( *(&a->klass->_2.bitflags2 + 1) >= (unsigned int)v6
    && (UserFriendRequestHistoryEntity_c *)a->klass->_2.typeHierarchy[v6 - 1] == UserFriendRequestHistoryEntity_TypeInfo )
  {
    return System_Int64__CompareTo_38475520((int64_t)&b[2].monitor, (int64_t)a[2].monitor, 0LL);
  }
  v8 = (FriendOperationItemListViewManager_CallbackFunc_o *)sub_B0DC70(a);
  FriendOperationItemListViewManager_CallbackFunc___ctor(v8, v9, v10, v11);
  return result;
}