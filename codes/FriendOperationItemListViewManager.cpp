void __fastcall FriendOperationItemListViewManager___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x1
  System_Array_o *v5; // x19
  struct FriendOperationItemListViewManager_StaticFields *static_fields; // x0
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  System_RuntimeFieldHandle_o v13; // 0:w1.4

  if ( (byte_40FD90E & 1) == 0 )
  {
    sub_B16FFC(&ListViewSort_FilterKind___TypeInfo, v1);
    sub_B16FFC(&FriendOperationItemListViewManager_TypeInfo, v3);
    sub_B16FFC(
      &Field__PrivateImplementationDetails__6B3B6BC014A692F226080502E0DED60D67C84EBC03CC8CF43A550A89694FF5C0,
      v4);
    byte_40FD90E = 1;
  }
  FriendOperationItemListViewManager_TypeInfo->static_fields->isInitSystem = 0;
  v5 = (System_Array_o *)sub_B17014(ListViewSort_FilterKind___TypeInfo, 8LL, v2);
  v13.fields.value = Field__PrivateImplementationDetails__6B3B6BC014A692F226080502E0DED60D67C84EBC03CC8CF43A550A89694FF5C0;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_42629164(v5, v13, 0LL);
  static_fields = FriendOperationItemListViewManager_TypeInfo->static_fields;
  static_fields->classFilter = (struct ListViewSort_FilterKind_array *)v5;
  sub_B16F98(
    (BattleServantConfConponent_o *)&static_fields->classFilter,
    (System_Int32_array **)v5,
    v7,
    v8,
    v9,
    v10,
    v11,
    v12);
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

  if ( (byte_40FD907 & 1) == 0 )
  {
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, isResult);
    byte_40FD907 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B170D4();
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
  __int64 v36; // x0
  __int64 v37; // x1
  System_String_array **v38; // x2
  System_String_array **v39; // x3
  System_Boolean_array **v40; // x4
  System_Int32_array **v41; // x5
  System_Int32_array *v42; // x6
  System_Int32_array *v43; // x7
  struct ListViewSort_array *sortStatusList; // x8
  struct ListViewSort_o *v45; // x1
  ListViewSort_o *sort; // x0
  System_String_o *v47; // x22
  WebViewManager_o *v48; // x0
  OtherUserGameMaster_o *v49; // x0
  OtherUserGameEntity_array *FriendCodeList; // x20
  __int64 v51; // x3
  __int64 v52; // x4
  __int64 v53; // x8
  unsigned __int64 v54; // x22
  struct System_Collections_Generic_List_ListViewItem__o *v55; // x9
  int32_t v56; // w23
  OtherUserGameEntity_o *v57; // x24
  System_Collections_Generic_Dictionary_int__int__o *v58; // x25
  FriendOperationItemListViewItem_o *v59; // x21
  const MethodInfo *v60; // x6
  struct System_Collections_Generic_List_ListViewItem__o *v61; // x0
  WebViewManager_o *Instance; // x0
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *MasterData_WarQuestSelectionMaster; // x20
  WebViewManager_o *v64; // x0
  WarQuestSelectionMaster_o *v65; // x0
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x21
  int32_t v67; // w22
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *Item; // x0
  UserBlacklistEntity_o *v69; // x23
  __int64 v70; // x10
  int64_t OtherUserId; // x0
  UserServantEntity_o *Entity; // x0
  __int64 v73; // x1
  __int64 v74; // x2
  __int64 v75; // x3
  __int64 v76; // x4
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x8
  int32_t size; // w26
  System_Collections_Generic_Dictionary_int__int__o *classBoardMaxDictionary; // x27
  OtherUserGameEntity_o *v80; // x25
  FriendOperationItemListViewItem_o *v81; // x24
  const MethodInfo *v82; // x7
  struct System_Collections_Generic_List_ListViewItem__o *v83; // x0
  __int64 *v84; // x8
  WebViewManager_o *v85; // x0
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *v86; // x20
  WebViewManager_o *v87; // x0
  WarQuestSelectionMaster_o *v88; // x0
  __int64 v89; // x1
  __int64 v90; // x2
  __int64 v91; // x3
  __int64 v92; // x4
  System_Collections_Generic_IEnumerable_T__o *v93; // x22
  System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *v94; // x21
  __int64 v95; // x1
  __int64 v96; // x2
  __int64 v97; // x3
  __int64 v98; // x4
  FriendOperationItemListViewManager___c_c *v99; // x0
  struct FriendOperationItemListViewManager___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__35_0; // x22
  Il2CppObject *v102; // x23
  struct FriendOperationItemListViewManager___c_StaticFields *v103; // x0
  System_String_array **v104; // x2
  System_String_array **v105; // x3
  System_Boolean_array **v106; // x4
  System_Int32_array **v107; // x5
  System_Int32_array *v108; // x6
  System_Int32_array *v109; // x7
  int32_t v110; // w23
  BalanceConfig_c *v111; // x0
  int32_t MaxFriendHistoryNum; // w1
  signed __int64 v113; // x8
  unsigned __int64 v114; // x27
  UserFriendRequestHistoryEntity_o *v115; // x22
  __int64 v116; // x10
  int64_t v117; // x0
  UserServantEntity_o *v118; // x0
  __int64 v119; // x1
  __int64 v120; // x2
  __int64 v121; // x3
  __int64 v122; // x4
  struct System_Collections_Generic_List_ListViewItem__o *v123; // x8
  int32_t v124; // w25
  System_Collections_Generic_Dictionary_int__int__o *v125; // x26
  OtherUserGameEntity_o *v126; // x24
  FriendOperationItemListViewItem_o *v127; // x23
  const MethodInfo *v128; // x7
  struct System_Collections_Generic_List_ListViewItem__o *v129; // x0
  WebViewManager_o *v130; // x0
  TblFriendMaster_o *v131; // x0
  TblFriendMaster_o *v132; // x23
  OtherUserGameEntity_array *v133; // x24
  __int64 v134; // x3
  __int64 v135; // x4
  __int64 v136; // x8
  unsigned __int64 v137; // x22
  struct System_Collections_Generic_List_ListViewItem__o *v138; // x9
  int32_t v139; // w26
  OtherUserGameEntity_o *v140; // x27
  System_Collections_Generic_Dictionary_int__int__o *v141; // x28
  FriendOperationItemListViewItem_o *v142; // x25
  const MethodInfo *v143; // x6
  struct System_Collections_Generic_List_ListViewItem__o *v144; // x0
  __int64 v145; // x8
  unsigned __int64 v146; // x22
  struct System_Collections_Generic_List_ListViewItem__o *v147; // x9
  int32_t v148; // w26
  OtherUserGameEntity_o *v149; // x27
  System_Collections_Generic_Dictionary_int__int__o *v150; // x28
  FriendOperationItemListViewItem_o *v151; // x25
  const MethodInfo *v152; // x6
  struct System_Collections_Generic_List_ListViewItem__o *v153; // x0
  UILabel_o *emptyMessageLabel; // x20
  System_String_o *v155; // x0
  struct UIScrollView_o *scrollView; // x8
  System_String_o *v157; // [xsp+8h] [xbp-68h]
  OtherUserGameEntity_array *v158; // [xsp+10h] [xbp-60h]

  if ( (byte_40FD8FD & 1) == 0 )
  {
    sub_B16FFC(&BalanceConfig_TypeInfo, *(_QWORD *)&kind);
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, v6);
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v7);
    sub_B16FFC(&Method_System_Comparison_DataEntityBase___ctor__, v8);
    sub_B16FFC(&System_Comparison_DataEntityBase__TypeInfo, v9);
    sub_B16FFC(&Method_DataManager_GetMasterData_OtherUserGameMaster___, v10);
    sub_B16FFC(&Method_DataManager_GetMasterData_TblFriendMaster___, v11);
    sub_B16FFC(&Method_DataManager_GetMasterData_UserBlacklistMaster___, v12);
    sub_B16FFC(&Method_DataManager_GetMasterData_UserFriendRequestHistoryMaster___, v13);
    sub_B16FFC(&Method_DataMasterBase_OtherUserGameMaster__OtherUserGameEntity__long__GetEntity__, v14);
    sub_B16FFC(&FriendOperationItemListViewItem_TypeInfo, v15);
    sub_B16FFC(&FriendOperationItemListViewManager_TypeInfo, v16);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewItem__Add__, v17);
    sub_B16FFC(&Method_System_Collections_Generic_List_DataEntityBase__RemoveRange__, v18);
    sub_B16FFC(&Method_System_Collections_Generic_List_DataEntityBase__Reverse__, v19);
    sub_B16FFC(&Method_System_Collections_Generic_List_DataEntityBase__Sort__, v20);
    sub_B16FFC(&Method_System_Collections_Generic_List_DataEntityBase___ctor___66729576, v21);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v22);
    sub_B16FFC(&Method_System_Collections_Generic_List_DataEntityBase__get_Count__, v23);
    sub_B16FFC(&Method_System_Collections_Generic_List_DataEntityBase__get_Item__, v24);
    sub_B16FFC(&System_Collections_Generic_List_DataEntityBase__TypeInfo, v25);
    sub_B16FFC(&LocalizationManager_TypeInfo, v26);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v27);
    sub_B16FFC(&Method_FriendOperationItemListViewManager___c__CreateList_b__35_0__, v28);
    sub_B16FFC(&FriendOperationItemListViewManager___c_TypeInfo, v29);
    sub_B16FFC(&UserBlacklistEntity_TypeInfo, v30);
    sub_B16FFC(&UserFriendRequestHistoryEntity_TypeInfo, v31);
    sub_B16FFC(&StringLiteral_2556, v32);
    sub_B16FFC(&StringLiteral_6439, v33);
    sub_B16FFC(&StringLiteral_2559, v34);
    sub_B16FFC(&StringLiteral_6440, v35);
    byte_40FD8FD = 1;
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
    sub_B17100(v36, v37, v38);
    sub_B170A0();
  }
  v45 = sortStatusList->m_Items[kind];
  this->fields.sort = v45;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.sort,
    (System_Int32_array **)v45,
    v38,
    v39,
    v40,
    v41,
    v42,
    v43);
  sort = this->fields.sort;
  if ( !sort )
    goto LABEL_101;
  ListViewSort__Load(sort, 0LL);
  if ( kind == 8 )
  {
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_101;
    MasterData_WarQuestSelectionMaster = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)DataManager__GetMasterData_WarQuestSelectionMaster_((DataManager_o *)Instance, (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_OtherUserGameMaster___);
    v64 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !v64 )
      goto LABEL_101;
    v65 = DataManager__GetMasterData_WarQuestSelectionMaster_(
            (DataManager_o *)v64,
            (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserBlacklistMaster___);
    if ( !v65 )
      goto LABEL_101;
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)v65->fields.list;
    ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
    if ( !list )
      goto LABEL_101;
    if ( System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
           list,
           (const MethodInfo_290DE84 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__) < 1 )
    {
LABEL_35:
      v84 = &StringLiteral_2556;
      goto LABEL_68;
    }
    v67 = 0;
    while ( 1 )
    {
      Item = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
               list,
               v67,
               (const MethodInfo_290DF28 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !Item )
        break;
      v69 = (UserBlacklistEntity_o *)Item;
      v70 = *(&UserBlacklistEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(&Item->klass->_2.bitflags2 + 1) < (unsigned int)v70 )
        break;
      if ( (UserBlacklistEntity_c *)Item->klass->_2.typeHierarchy[v70 - 1] != UserBlacklistEntity_TypeInfo )
        break;
      OtherUserId = UserBlacklistEntity__getOtherUserId((UserBlacklistEntity_o *)Item, 0LL);
      if ( !MasterData_WarQuestSelectionMaster )
        break;
      Entity = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
                 MasterData_WarQuestSelectionMaster,
                 OtherUserId,
                 (const MethodInfo_266F5B0 *)Method_DataMasterBase_OtherUserGameMaster__OtherUserGameEntity__long__GetEntity__);
      itemList = this->fields.itemList;
      if ( !itemList )
        break;
      size = itemList->fields._size;
      classBoardMaxDictionary = this->fields.classBoardMaxDictionary;
      v80 = (OtherUserGameEntity_o *)Entity;
      v81 = (FriendOperationItemListViewItem_o *)sub_B170CC(
                                                   FriendOperationItemListViewItem_TypeInfo,
                                                   v73,
                                                   v74,
                                                   v75,
                                                   v76);
      FriendOperationItemListViewItem___ctor_31824052(v81, 8, size, v80, v69, 0, classBoardMaxDictionary, v82);
      v83 = this->fields.itemList;
      if ( !v83 )
        break;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v83,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v81,
        (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
      if ( ++v67 >= System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
                      list,
                      (const MethodInfo_290DE84 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__) )
        goto LABEL_35;
    }
LABEL_101:
    sub_B170D4();
  }
  if ( kind == 7 )
  {
    v85 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !v85 )
      goto LABEL_101;
    v86 = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                   (DataManager_o *)v85,
                                                                                   (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_OtherUserGameMaster___);
    v87 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !v87 )
      goto LABEL_101;
    v88 = DataManager__GetMasterData_WarQuestSelectionMaster_(
            (DataManager_o *)v87,
            (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserFriendRequestHistoryMaster___);
    if ( !v88 )
      goto LABEL_101;
    v93 = (System_Collections_Generic_IEnumerable_T__o *)v88->fields.list;
    v94 = (System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *)sub_B170CC(
                                                                            System_Collections_Generic_List_DataEntityBase__TypeInfo,
                                                                            v89,
                                                                            v90,
                                                                            v91,
                                                                            v92);
    System_Collections_Generic_List_WarBoardAIRoute_RouteData____ctor(
      v94,
      v93,
      (const MethodInfo_2F2520C *)Method_System_Collections_Generic_List_DataEntityBase___ctor___66729576);
    v99 = FriendOperationItemListViewManager___c_TypeInfo;
    if ( (BYTE3(FriendOperationItemListViewManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !FriendOperationItemListViewManager___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(FriendOperationItemListViewManager___c_TypeInfo);
      v99 = FriendOperationItemListViewManager___c_TypeInfo;
    }
    static_fields = v99->static_fields;
    _9__35_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)static_fields->__9__35_0;
    if ( !_9__35_0 )
    {
      if ( (BYTE3(v99->vtable._0_Equals.methodPtr) & 4) != 0 && !v99->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v99);
        static_fields = FriendOperationItemListViewManager___c_TypeInfo->static_fields;
      }
      v102 = (Il2CppObject *)static_fields->__9;
      _9__35_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B170CC(
                                                                             System_Comparison_DataEntityBase__TypeInfo,
                                                                             v95,
                                                                             v96,
                                                                             v97,
                                                                             v98);
      System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
        _9__35_0,
        v102,
        Method_FriendOperationItemListViewManager___c__CreateList_b__35_0__,
        (const MethodInfo_25BFD48 *)Method_System_Comparison_DataEntityBase___ctor__);
      v103 = FriendOperationItemListViewManager___c_TypeInfo->static_fields;
      v103->__9__35_0 = (struct System_Comparison_DataEntityBase__o *)_9__35_0;
      sub_B16F98(
        (BattleServantConfConponent_o *)&v103->__9__35_0,
        (System_Int32_array **)_9__35_0,
        v104,
        v105,
        v106,
        v107,
        v108,
        v109);
    }
    if ( !v94 )
      goto LABEL_101;
    System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
      (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v94,
      (System_Comparison_T__o *)_9__35_0,
      (const MethodInfo_2F27DB4 *)Method_System_Collections_Generic_List_DataEntityBase__Sort__);
    v110 = v94->fields._size;
    v111 = BalanceConfig_TypeInfo;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v111 = BalanceConfig_TypeInfo;
    }
    MaxFriendHistoryNum = v111->static_fields->MaxFriendHistoryNum;
    if ( v110 > MaxFriendHistoryNum )
    {
      if ( (BYTE3(v111->vtable._0_Equals.methodPtr) & 4) != 0 && !v111->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v111);
        MaxFriendHistoryNum = BalanceConfig_TypeInfo->static_fields->MaxFriendHistoryNum;
      }
      System_Collections_Generic_List_RegexCharClass_SingleRange___RemoveRange(
        (System_Collections_Generic_List_RegexCharClass_SingleRange__o *)v94,
        MaxFriendHistoryNum,
        v94->fields._size - MaxFriendHistoryNum,
        (const MethodInfo_2F27A6C *)Method_System_Collections_Generic_List_DataEntityBase__RemoveRange__);
    }
    System_Collections_Generic_List_MapControl_WarInfo___Reverse(
      (System_Collections_Generic_List_MapControl_WarInfo__o *)v94,
      (const MethodInfo_2F27B38 *)Method_System_Collections_Generic_List_DataEntityBase__Reverse__);
    ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
    LODWORD(v113) = v94->fields._size;
    if ( (int)v113 < 1 )
    {
LABEL_67:
      v84 = &StringLiteral_2559;
      goto LABEL_68;
    }
    v114 = 0LL;
    while ( 1 )
    {
      if ( v114 >= (unsigned int)v113 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
      v115 = (UserFriendRequestHistoryEntity_o *)v94->fields._items->m_Items[v114];
      if ( !v115 )
        goto LABEL_101;
      v116 = *(&UserFriendRequestHistoryEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v115->klass->_2.bitflags2 + 1) < (unsigned int)v116 )
        goto LABEL_101;
      if ( (UserFriendRequestHistoryEntity_c *)v115->klass->_2.typeHierarchy[v116 - 1] != UserFriendRequestHistoryEntity_TypeInfo )
        goto LABEL_101;
      v117 = UserFriendRequestHistoryEntity__getOtherUserId(v115, 0LL);
      if ( !v86 )
        goto LABEL_101;
      v118 = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
               v86,
               v117,
               (const MethodInfo_266F5B0 *)Method_DataMasterBase_OtherUserGameMaster__OtherUserGameEntity__long__GetEntity__);
      v123 = this->fields.itemList;
      if ( !v123 )
        goto LABEL_101;
      v124 = v123->fields._size;
      v125 = this->fields.classBoardMaxDictionary;
      v126 = (OtherUserGameEntity_o *)v118;
      v127 = (FriendOperationItemListViewItem_o *)sub_B170CC(
                                                    FriendOperationItemListViewItem_TypeInfo,
                                                    v119,
                                                    v120,
                                                    v121,
                                                    v122);
      FriendOperationItemListViewItem___ctor_31824400(v127, 7, v124, v126, v115, 0, v125, v128);
      v129 = this->fields.itemList;
      if ( !v129 )
        goto LABEL_101;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v129,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v127,
        (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
      v113 = v94->fields._size;
      if ( (__int64)++v114 >= v113 )
        goto LABEL_67;
    }
  }
  v47 = (System_String_o *)StringLiteral_6440;
  if ( !kind )
  {
    v48 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !v48 )
      goto LABEL_101;
    v49 = (OtherUserGameMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                     (DataManager_o *)v48,
                                     (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_OtherUserGameMaster___);
    if ( !v49 )
      goto LABEL_101;
    FriendCodeList = OtherUserGameMaster__GetFriendCodeList(v49, this->fields.friendCode, 0LL);
    ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
    if ( !FriendCodeList )
      goto LABEL_101;
    v53 = *(_QWORD *)&FriendCodeList->max_length;
    if ( (int)v53 >= 1 )
    {
      v157 = v47;
      v54 = 0LL;
      while ( 1 )
      {
        v55 = this->fields.itemList;
        if ( !v55 )
          goto LABEL_101;
        if ( v54 >= (unsigned int)v53 )
          goto LABEL_102;
        v56 = v55->fields._size;
        v57 = FriendCodeList->m_Items[v54];
        v58 = this->fields.classBoardMaxDictionary;
        v59 = (FriendOperationItemListViewItem_o *)sub_B170CC(
                                                     FriendOperationItemListViewItem_TypeInfo,
                                                     v37,
                                                     v38,
                                                     v51,
                                                     v52);
        FriendOperationItemListViewItem___ctor_31823732(v59, 0, v56, v57, 0, v58, v60);
        v61 = this->fields.itemList;
        if ( !v61 )
          goto LABEL_101;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v61,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v59,
          (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
        LODWORD(v53) = FriendCodeList->max_length;
        if ( (__int64)++v54 >= (int)v53 )
          goto LABEL_87;
      }
    }
    goto LABEL_88;
  }
  v130 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !v130 )
    goto LABEL_101;
  v157 = v47;
  v131 = (TblFriendMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                (DataManager_o *)v130,
                                (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_TblFriendMaster___);
  if ( !v131 )
    goto LABEL_101;
  v132 = v131;
  v133 = TblFriendMaster__GetList(v131, kind, 0LL);
  v158 = TblFriendMaster__GetList(v132, 9, 0LL);
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
  if ( kind == 3 )
  {
    if ( !v158 )
      goto LABEL_101;
    v136 = *(_QWORD *)&v158->max_length;
    if ( (int)v136 >= 1 )
    {
      v137 = 0LL;
      do
      {
        v138 = this->fields.itemList;
        if ( !v138 )
          goto LABEL_101;
        if ( v137 >= (unsigned int)v136 )
          goto LABEL_102;
        v139 = v138->fields._size;
        v140 = v158->m_Items[v137];
        v141 = this->fields.classBoardMaxDictionary;
        v142 = (FriendOperationItemListViewItem_o *)sub_B170CC(
                                                      FriendOperationItemListViewItem_TypeInfo,
                                                      v37,
                                                      v38,
                                                      v134,
                                                      v135);
        FriendOperationItemListViewItem___ctor_31823732(v142, 9, v139, v140, classPos, v141, v143);
        v144 = this->fields.itemList;
        if ( !v144 )
          goto LABEL_101;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v144,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v142,
          (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
        ++v137;
        LODWORD(v136) = v158->max_length;
      }
      while ( (__int64)v137 < (int)v136 );
    }
  }
  if ( !v133 )
    goto LABEL_101;
  v145 = *(_QWORD *)&v133->max_length;
  if ( (int)v145 >= 1 )
  {
    v146 = 0LL;
    do
    {
      v147 = this->fields.itemList;
      if ( !v147 )
        goto LABEL_101;
      if ( v146 >= (unsigned int)v145 )
        goto LABEL_102;
      v148 = v147->fields._size;
      v149 = v133->m_Items[v146];
      v150 = this->fields.classBoardMaxDictionary;
      v151 = (FriendOperationItemListViewItem_o *)sub_B170CC(
                                                    FriendOperationItemListViewItem_TypeInfo,
                                                    v37,
                                                    v38,
                                                    v134,
                                                    v135);
      FriendOperationItemListViewItem___ctor_31823732(v151, kind, v148, v149, classPos, v150, v152);
      v153 = this->fields.itemList;
      if ( !v153 )
        goto LABEL_101;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v153,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v151,
        (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
      v145 = *(_QWORD *)&v133->max_length;
    }
    while ( (__int64)++v146 < (int)v145 );
  }
  if ( v145 )
  {
LABEL_87:
    v47 = v157;
    goto LABEL_88;
  }
  v47 = v157;
  if ( !v158 )
    goto LABEL_101;
  if ( !*(_QWORD *)&v158->max_length )
  {
    if ( kind != 2 )
    {
      if ( kind == 3 )
        v47 = (System_String_o *)StringLiteral_6439;
      goto LABEL_88;
    }
    v84 = &StringLiteral_6440;
LABEL_68:
    v47 = (System_String_o *)*v84;
  }
LABEL_88:
  emptyMessageLabel = this->fields.emptyMessageLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v155 = LocalizationManager__Get(v47, 0LL);
  if ( !emptyMessageLabel )
    goto LABEL_101;
  UILabel__set_text(emptyMessageLabel, v155, 0LL);
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
  sub_B16F98(
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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  FriendOperationItemListViewManager_c *v7; // x0
  __int64 v8; // x0
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  FriendOperationItemListViewManager_c *v15; // x8
  System_Int32_array **v16; // x20
  struct FriendOperationItemListViewManager_StaticFields *static_fields; // x0
  FriendOperationItemListViewManager_c *v18; // x0
  unsigned int v19; // w23
  int v20; // w8
  struct ListViewSort_array *sortStatusList; // x28
  System_String_o *v22; // x0
  System_String_o *v23; // x21
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x3
  __int64 v27; // x4
  ListViewSort_o *v28; // x20
  __int64 v29; // x1
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7
  Il2CppClass **v36; // x0
  struct ListViewSort_array *v37; // x8
  Il2CppClass **v38; // x8
  ListViewSort_o *v39; // x20
  struct ListViewSort_FilterKind_array *v40; // x8
  unsigned __int64 i; // x21
  struct ListViewSort_FilterKind_array *classFilter; // x8
  unsigned int v43; // w9
  bool v44; // cf
  unsigned int v45; // [xsp+Ch] [xbp-54h] BYREF

  if ( (byte_40FD8F7 & 1) == 0 )
  {
    sub_B16FFC(&FriendOperationItemListViewManager_TypeInfo, method);
    sub_B16FFC(&ListViewSort___TypeInfo, v4);
    sub_B16FFC(&ListViewSort_TypeInfo, v5);
    sub_B16FFC(&StringLiteral_6778, v6);
    byte_40FD8F7 = 1;
  }
  v45 = 0;
  v7 = FriendOperationItemListViewManager_TypeInfo;
  if ( (BYTE3(FriendOperationItemListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !FriendOperationItemListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FriendOperationItemListViewManager_TypeInfo);
    v7 = FriendOperationItemListViewManager_TypeInfo;
  }
  if ( !v7->static_fields->isInitSystem )
  {
    v8 = sub_B17014(ListViewSort___TypeInfo, 10LL, v2);
    v15 = FriendOperationItemListViewManager_TypeInfo;
    v16 = (System_Int32_array **)v8;
    if ( (BYTE3(FriendOperationItemListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !FriendOperationItemListViewManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(FriendOperationItemListViewManager_TypeInfo);
      v15 = FriendOperationItemListViewManager_TypeInfo;
    }
    static_fields = v15->static_fields;
    static_fields->sortStatusList = (struct ListViewSort_array *)v16;
    sub_B16F98((BattleServantConfConponent_o *)&static_fields->sortStatusList, v16, v9, v10, v11, v12, v13, v14);
    v18 = FriendOperationItemListViewManager_TypeInfo;
    v19 = 0;
    v20 = (BYTE3(FriendOperationItemListViewManager_TypeInfo->vtable._0_Equals.methodPtr) >> 2) & 1;
    do
    {
      if ( (v20 & 1) != 0 && !v18->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v18);
        v18 = FriendOperationItemListViewManager_TypeInfo;
      }
      sortStatusList = v18->static_fields->sortStatusList;
      v45 = v19 + 1;
      v22 = System_Int32__ToString((int32_t)&v45, 0LL);
      v23 = System_String__Concat_43743732((System_String_o *)StringLiteral_6778, v22, 0LL);
      v28 = (ListViewSort_o *)sub_B170CC(ListViewSort_TypeInfo, v24, v25, v26, v27);
      ListViewSort___ctor_30208480(v28, v23, 3, 0, 0LL);
      if ( !sortStatusList )
        goto LABEL_46;
      if ( v28 )
      {
        v18 = (FriendOperationItemListViewManager_c *)sub_B170BC(v28, sortStatusList->obj.klass->_1.element_class);
        if ( !v18 )
        {
          sub_B170F4(0LL);
          sub_B170A0();
        }
      }
      if ( v19 >= sortStatusList->max_length )
        goto LABEL_47;
      v36 = &sortStatusList->obj.klass + (int)v19;
      v36[4] = (Il2CppClass *)v28;
      sub_B16F98((BattleServantConfConponent_o *)(v36 + 4), (System_Int32_array **)v28, v30, v31, v32, v33, v34, v35);
      v37 = FriendOperationItemListViewManager_TypeInfo->static_fields->sortStatusList;
      if ( !v37 )
        goto LABEL_46;
      if ( v19 >= v37->max_length )
      {
LABEL_47:
        sub_B17100(v18, v29, v30);
        sub_B170A0();
      }
      v38 = &v37->obj.klass + (int)v19;
      v39 = (ListViewSort_o *)v38[4];
      if ( !v39 )
        goto LABEL_46;
      ListViewSort__ClassFilterOFF((ListViewSort_o *)v38[4], 0LL);
      if ( !classPos )
      {
        for ( i = 0LL; ; ++i )
        {
          v18 = FriendOperationItemListViewManager_TypeInfo;
          if ( (BYTE3(FriendOperationItemListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !FriendOperationItemListViewManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(FriendOperationItemListViewManager_TypeInfo);
            v18 = FriendOperationItemListViewManager_TypeInfo;
          }
          classFilter = v18->static_fields->classFilter;
          if ( !classFilter )
            break;
          if ( (__int64)i >= (int)classFilter->max_length )
            goto LABEL_39;
          if ( (BYTE3(v18->vtable._0_Equals.methodPtr) & 4) != 0 && !v18->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v18);
            classFilter = FriendOperationItemListViewManager_TypeInfo->static_fields->classFilter;
            if ( !classFilter )
              break;
          }
          if ( i >= classFilter->max_length )
            goto LABEL_47;
          ListViewSort__SetFilter(v39, classFilter->m_Items[i + 1], 1, 0LL);
        }
LABEL_46:
        sub_B170D4();
      }
      v18 = FriendOperationItemListViewManager_TypeInfo;
      if ( (BYTE3(FriendOperationItemListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !FriendOperationItemListViewManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(FriendOperationItemListViewManager_TypeInfo);
        v18 = FriendOperationItemListViewManager_TypeInfo;
      }
      v40 = v18->static_fields->classFilter;
      if ( !v40 )
        goto LABEL_46;
      if ( v40->max_length <= classPos )
        goto LABEL_47;
      ListViewSort__SetFilter(v39, v40->m_Items[classPos + 1], 1, 0LL);
      v18 = FriendOperationItemListViewManager_TypeInfo;
LABEL_39:
      v43 = WORD1(v18->vtable._0_Equals.methodPtr);
      v44 = v19++ >= 9;
      v20 = (v43 >> 10) & 1;
    }
    while ( !v44 );
    if ( (v43 & 0x400) != 0 && !v18->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v18);
      v18 = FriendOperationItemListViewManager_TypeInfo;
    }
    v18->static_fields->isInitSystem = 1;
  }
}


void __fastcall FriendOperationItemListViewManager__DeleteContinueData(const MethodInfo *method)
{
  const MethodInfo *v1; // x1
  __int64 v2; // x1
  __int64 v3; // x2
  __int64 v4; // x20
  FriendOperationItemListViewManager_c *v5; // x0
  struct ListViewSort_array *sortStatusList; // x8
  ListViewSort_o *v7; // x0

  if ( (byte_40FD8F8 & 1) == 0 )
  {
    sub_B16FFC(&FriendOperationItemListViewManager_TypeInfo, v1);
    byte_40FD8F8 = 1;
  }
  if ( (BYTE3(FriendOperationItemListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !FriendOperationItemListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FriendOperationItemListViewManager_TypeInfo);
  }
  FriendOperationItemListViewManager__CreateSorteData(0, v1);
  v4 = 0LL;
  do
  {
    v5 = FriendOperationItemListViewManager_TypeInfo;
    if ( (BYTE3(FriendOperationItemListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !FriendOperationItemListViewManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(FriendOperationItemListViewManager_TypeInfo);
      v5 = FriendOperationItemListViewManager_TypeInfo;
    }
    sortStatusList = v5->static_fields->sortStatusList;
    if ( !sortStatusList )
      goto LABEL_15;
    if ( (unsigned int)v4 >= sortStatusList->max_length )
    {
      sub_B17100(v5, v2, v3);
      sub_B170A0();
    }
    v7 = sortStatusList->m_Items[v4];
    if ( !v7 )
LABEL_15:
      sub_B170D4();
    ListViewSort__DeleteContinueData(v7, 0LL);
    ++v4;
  }
  while ( (unsigned int)(v4 - 1) < 9 );
}


void __fastcall FriendOperationItemListViewManager__DestroyList(
        FriendOperationItemListViewManager_o *this,
        const MethodInfo *method)
{
  ListViewSort_o *sort; // x0

  ListViewManager__DestroyList((ListViewManager_o *)this, 0LL);
  sort = this->fields.sort;
  if ( !sort )
    sub_B170D4();
  ListViewSort__Save(sort, 0LL);
}


void __fastcall FriendOperationItemListViewManager__EndCloseClassBoardEffectListDialog(
        FriendOperationItemListViewManager_o *this,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x0

  if ( (byte_40FD90D & 1) == 0 )
  {
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    byte_40FD90D = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B170D4();
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

  if ( (byte_40FD8FE & 1) == 0 )
  {
    sub_B16FFC(&FriendOperationItemListViewItem_TypeInfo, *(_QWORD *)&index);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v5);
    byte_40FD8FE = 1;
  }
  itemList = this->fields.itemList;
  if ( !itemList )
    return 0LL;
  if ( itemList->fields._size <= (unsigned int)index )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
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
  __int64 v2; // x2
  FriendOperationItemListViewManager_c *v3; // x0
  __int64 i; // x20
  struct ListViewSort_array *sortStatusList; // x8
  ListViewSort_o *v6; // x0

  if ( (byte_40FD8F9 & 1) == 0 )
  {
    sub_B16FFC(&FriendOperationItemListViewManager_TypeInfo, v1);
    byte_40FD8F9 = 1;
  }
  v3 = FriendOperationItemListViewManager_TypeInfo;
  if ( (BYTE3(FriendOperationItemListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !FriendOperationItemListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FriendOperationItemListViewManager_TypeInfo);
    v3 = FriendOperationItemListViewManager_TypeInfo;
  }
  if ( v3->static_fields->isInitSystem )
  {
    for ( i = 0LL; ; ++i )
    {
      if ( (BYTE3(v3->vtable._0_Equals.methodPtr) & 4) != 0 && !v3->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v3);
        v3 = FriendOperationItemListViewManager_TypeInfo;
      }
      sortStatusList = v3->static_fields->sortStatusList;
      if ( !sortStatusList )
        goto LABEL_17;
      if ( (unsigned int)i >= sortStatusList->max_length )
      {
        sub_B17100(v3, v1, v2);
        sub_B170A0();
      }
      v6 = sortStatusList->m_Items[i];
      if ( !v6 )
LABEL_17:
        sub_B170D4();
      ListViewSort__InitLoad(v6, 0LL);
      if ( (unsigned int)i > 8 )
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
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  FriendOperationItemListViewManager_CallbackFunc_o *callbackFunc; // x19
  int32_t Index; // w2

  callbackFunc = this->fields.callbackFunc;
  this->fields.callbackFunc = 0LL;
  sub_B16F98(
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
      sub_B170D4();
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
  int32_t Index; // w2

  callbackFunc = this->fields.callbackFunc;
  this->fields.callbackFunc = 0LL;
  sub_B16F98(
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
      sub_B170D4();
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
  int32_t Index; // w2

  callbackFunc = this->fields.callbackFunc;
  this->fields.callbackFunc = 0LL;
  sub_B16F98(
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
      sub_B170D4();
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
  int32_t Index; // w2

  callbackFunc = this->fields.callbackFunc;
  this->fields.callbackFunc = 0LL;
  sub_B16F98(
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
      sub_B170D4();
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
  int32_t Index; // w2

  callbackFunc = this->fields.callbackFunc;
  this->fields.callbackFunc = 0LL;
  sub_B16F98(
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
      sub_B170D4();
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
  int32_t Index; // w2

  callbackFunc = this->fields.callbackFunc;
  this->fields.callbackFunc = 0LL;
  sub_B16F98(
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
      sub_B170D4();
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
  struct ListViewSort_o *sort; // x8

  if ( (byte_40FD908 & 1) == 0 )
  {
    sub_B16FFC(&SoundManager_TypeInfo, method);
    byte_40FD908 = 1;
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
      sub_B170D4();
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
  __int64 v12; // x3
  __int64 v13; // x4
  OtherUserSortDialog_CallbackFunc_o *v14; // x22
  int32_t v15; // w1
  WebViewManager_o *Instance; // x0
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x3
  __int64 v20; // x4

  if ( (byte_40FD906 & 1) == 0 )
  {
    sub_B16FFC(&OtherUserSortDialog_CallbackFunc_TypeInfo, method);
    sub_B16FFC(&Method_FriendOperationItemListViewManager_CloseSortDialog__, v3);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    sub_B16FFC(&SoundManager_TypeInfo, v5);
    byte_40FD906 = 1;
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
      Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      sort = this->fields.sort;
      v9 = (CommonUI_o *)Instance;
      v14 = (OtherUserSortDialog_CallbackFunc_o *)sub_B170CC(
                                                    OtherUserSortDialog_CallbackFunc_TypeInfo,
                                                    v17,
                                                    v18,
                                                    v19,
                                                    v20);
      OtherUserSortDialog_CallbackFunc___ctor(
        v14,
        (Il2CppObject *)this,
        Method_FriendOperationItemListViewManager_CloseSortDialog__,
        0LL);
      if ( v9 )
      {
        v15 = 2;
        goto LABEL_14;
      }
LABEL_15:
      sub_B170D4();
    }
    if ( menuKind == 3 )
    {
      v7 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      sort = this->fields.sort;
      v9 = (CommonUI_o *)v7;
      v14 = (OtherUserSortDialog_CallbackFunc_o *)sub_B170CC(
                                                    OtherUserSortDialog_CallbackFunc_TypeInfo,
                                                    v10,
                                                    v11,
                                                    v12,
                                                    v13);
      OtherUserSortDialog_CallbackFunc___ctor(
        v14,
        (Il2CppObject *)this,
        Method_FriendOperationItemListViewManager_CloseSortDialog__,
        0LL);
      if ( v9 )
      {
        v15 = 1;
LABEL_14:
        CommonUI__OpenOtherUserSortDialog(v9, v15, sort, v14, 0LL);
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
  int32_t Index; // w2

  callbackFunc = this->fields.callbackFunc;
  this->fields.callbackFunc = 0LL;
  sub_B16F98(
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
      sub_B170D4();
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
  UnityEngine_Behaviour_o *v8; // x0
  FriendOperationItemListViewManager_CallbackFunc_o *callbackFunc; // x22
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  int32_t Index; // w0

  if ( (byte_40FD905 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_12578, obj);
    byte_40FD905 = 1;
  }
  if ( this->fields.isInput )
  {
    scrollView = this->fields.scrollView;
    if ( !scrollView )
      goto LABEL_10;
    UIScrollView__Press(scrollView, 0, 0LL);
    v8 = (UnityEngine_Behaviour_o *)this->fields.scrollView;
    if ( !v8 )
      goto LABEL_10;
    UnityEngine_Behaviour__set_enabled(v8, 0, 0LL);
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_12578,
      0.1,
      0LL);
    callbackFunc = this->fields.callbackFunc;
    this->fields.callbackFunc = 0LL;
    sub_B16F98((BattleServantConfConponent_o *)&this->fields.callbackFunc, 0LL, v10, v11, v12, v13, v14, v15);
    if ( callbackFunc )
    {
      if ( obj )
      {
        Index = ListViewObject__get_Index(obj, 0LL);
        FriendOperationItemListViewManager_CallbackFunc__Invoke(callbackFunc, kind, Index, 0LL);
        return;
      }
LABEL_10:
      sub_B170D4();
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
  struct System_Collections_Generic_List_ListViewItem__o *itemSortList; // x8
  UnityEngine_GameObject_o *emptyMessageBase; // x0
  UnityEngine_Object_o *scrollView; // x20
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  struct UIScrollView_o *v16; // x0
  UIScrollView_o *v17; // x0
  System_Action_o *callbackFunc2; // x20

  if ( (byte_40FD904 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, method);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v3);
    byte_40FD904 = 1;
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
      v16 = this->fields.scrollView;
      if ( v16 )
      {
        ((void (__fastcall *)(struct UIScrollView_o *, __int64, Il2CppMethodPointer))v16->klass->vtable._8_UpdateScrollbars.method)(
          v16,
          1LL,
          v16->klass->vtable._9_SetDragAmount.methodPtr);
        v17 = this->fields.scrollView;
        if ( v17 )
        {
          UIScrollView__UpdatePosition(v17, 0LL);
          this->fields.isScrollRefresh = 1;
LABEL_17:
          callbackFunc2 = this->fields.callbackFunc2;
          this->fields.callbackFunc2 = 0LL;
          sub_B16F98((BattleServantConfConponent_o *)&this->fields.callbackFunc2, 0LL, v10, v11, v12, v13, v14, v15);
          if ( callbackFunc2 )
            System_Action__Invoke(callbackFunc2, 0LL);
          return;
        }
      }
LABEL_19:
      sub_B170D4();
    }
  }
}


void __fastcall FriendOperationItemListViewManager__OpenSupportClassBoard(
        FriendOperationItemListViewManager_o *this,
        ListViewObject_o *obj,
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
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x21
  int32_t Index; // w20
  FriendOperationItemListViewItem_o *v18; // x21
  __int64 v19; // x10
  _QWORD *v20; // x0
  System_Reflection_MethodBase_o *v21; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *Master_WarQuestSelectionMaster; // x20
  const MethodInfo *v23; // x1
  int32_t SvtId; // w0
  WarEntity_o *Entity; // x0
  int32_t startType; // w22
  ClassBoardClassMaster_o *v27; // x0
  int32_t ClassBoardBaseId; // w20
  ClassBoardClassMaster_o *v29; // x0
  _BOOL8 IsInvalidClass; // x0
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x3
  __int64 v34; // x4
  struct OtherUserGameEntity_o *otherUserGameEntity; // x8
  struct ClassBoardInfo_array *userClassBoardInfo; // x8
  int max_length; // w9
  unsigned int v38; // w10
  __int64 v39; // x21
  System_String_array **v40; // x2
  System_String_array **v41; // x3
  System_Boolean_array **v42; // x4
  System_Int32_array **v43; // x5
  System_Int32_array *v44; // x6
  System_Int32_array *v45; // x7
  _QWORD **v46; // x23
  __int64 v47; // x22
  __int16 v48; // w8
  __int64 v49; // x22
  __int64 v50; // x22
  __int64 v51; // x22
  System_Int32_array ***v52; // x8
  System_Int32_array **v53; // x1
  CommonUI_o *Instance; // x22
  __int64 v55; // x1
  __int64 v56; // x2
  __int64 v57; // x3
  __int64 v58; // x4
  System_Action_o *v59; // x23

  if ( (byte_40FD90C & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, obj);
    sub_B16FFC(&Method_System_Array_Empty_int___, v5);
    sub_B16FFC(&ClassBoardInfo_TypeInfo, v6);
    sub_B16FFC(&Method_DataManager_GetMaster_ClassBoardClassMaster___, v7);
    sub_B16FFC(&Method_DataManager_GetMaster_ServantMaster___, v8);
    sub_B16FFC(&DataManager_TypeInfo, v9);
    sub_B16FFC(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v10);
    sub_B16FFC(&FriendOperationItemListViewItem_TypeInfo, v11);
    sub_B16FFC(&Method_FriendOperationItemListViewManager_EndCloseClassBoardEffectListDialog__, v12);
    sub_B16FFC(&Method_FriendOperationItemListViewManager_OpenSupportClassBoard__, v13);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v14);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v15);
    byte_40FD90C = 1;
  }
  if ( this->fields.isInput )
  {
    itemList = this->fields.itemList;
    if ( itemList )
    {
      if ( obj )
      {
        Index = ListViewObject__get_Index(obj, 0LL);
        if ( itemList->fields._size <= (unsigned int)Index )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
        v18 = (FriendOperationItemListViewItem_o *)itemList->fields._items->m_Items[Index];
        if ( !v18 )
          return;
        v19 = *(&FriendOperationItemListViewItem_TypeInfo->_2.bitflags2 + 1);
        if ( *(&v18->klass->_2.bitflags2 + 1) < (unsigned int)v19
          || (FriendOperationItemListViewItem_c *)v18->klass->_2.typeHierarchy[v19 - 1] != FriendOperationItemListViewItem_TypeInfo )
        {
          return;
        }
        this->fields.isInput = 0;
        v20 = Method_FriendOperationItemListViewManager_OpenSupportClassBoard__;
        if ( (*((_BYTE *)Method_FriendOperationItemListViewManager_OpenSupportClassBoard__ + 75) & 2) != 0 )
          v20 = (_QWORD *)sub_B17004(Method_FriendOperationItemListViewManager_OpenSupportClassBoard__);
        v21 = (System_Reflection_MethodBase_o *)sub_B16FE0(v20, v20[3]);
        OverwriteAssetSoundName__PlaySystemSe(v21, 0, 0LL);
        if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !DataManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        }
        Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_ServantMaster___);
        SvtId = FriendOperationItemListViewItem__get_SvtId(v18, v23);
        if ( Master_WarQuestSelectionMaster )
        {
          Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                     Master_WarQuestSelectionMaster,
                     SvtId,
                     (const MethodInfo_266F388 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
          if ( Entity )
          {
            startType = Entity->fields.startType;
            v27 = (ClassBoardClassMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_ClassBoardClassMaster___);
            if ( v27 )
            {
              ClassBoardBaseId = ClassBoardClassMaster__GetClassBoardBaseId(v27, startType, 0LL);
              v29 = (ClassBoardClassMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_ClassBoardClassMaster___);
              if ( v29 )
              {
                IsInvalidClass = ClassBoardClassMaster__IsInvalidClass(v29, startType, 0LL);
                if ( IsInvalidClass )
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
                  v39 = sub_B170CC(ClassBoardInfo_TypeInfo, v31, v32, v33, v34);
                  ClassBoardInfo___ctor((ClassBoardInfo_o *)v39, 0LL);
                  if ( v39 )
                  {
                    *(_DWORD *)(v39 + 16) = ClassBoardBaseId;
                    v46 = (_QWORD **)Method_System_Array_Empty_int___;
                    v47 = **((_QWORD **)Method_System_Array_Empty_int___ + 6);
                    v48 = *(_WORD *)(v47 + 306);
                    if ( (v48 & 1) == 0 )
                    {
                      sub_AAFCFC(**((_QWORD **)Method_System_Array_Empty_int___ + 6));
                      v48 = *(_WORD *)(v47 + 306);
                    }
                    if ( (v48 & 0x400) != 0 )
                    {
                      v49 = *v46[6];
                      if ( (*(_BYTE *)(v49 + 306) & 1) == 0 )
                        sub_AAFCFC(*v46[6]);
                      if ( !*(_DWORD *)(v49 + 224) )
                      {
                        v50 = *v46[6];
                        if ( (*(_BYTE *)(v50 + 306) & 1) == 0 )
                          sub_AAFCFC(*v46[6]);
                        j_il2cpp_runtime_class_init_0(v50);
                      }
                    }
                    v51 = *v46[6];
                    if ( (*(_BYTE *)(v51 + 306) & 1) == 0 )
                      sub_AAFCFC(*v46[6]);
                    v52 = *(System_Int32_array ****)(v51 + 184);
                    v53 = *v52;
                    *(_QWORD *)(v39 + 24) = *v52;
                    sub_B16F98((BattleServantConfConponent_o *)(v39 + 24), v53, v40, v41, v42, v43, v44, v45);
LABEL_43:
                    Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                    v59 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v55, v56, v57, v58);
                    System_Action___ctor(
                      v59,
                      (Il2CppObject *)this,
                      Method_FriendOperationItemListViewManager_EndCloseClassBoardEffectListDialog__,
                      0LL);
                    if ( Instance )
                    {
                      CommonUI__OpenClassBoardEffectListDialog(
                        Instance,
                        1,
                        ClassBoardBaseId,
                        0,
                        v59,
                        1,
                        (ClassBoardInfo_o *)v39,
                        0LL);
                      return;
                    }
                  }
                }
                else
                {
                  v38 = 0;
                  while ( 1 )
                  {
                    if ( v38 >= max_length )
                    {
                      sub_B17100(IsInvalidClass, v31, v32);
                      sub_B170A0();
                    }
                    v39 = (__int64)userClassBoardInfo->m_Items[v38];
                    if ( !v39 )
                      break;
                    if ( *(_DWORD *)(v39 + 16) == ClassBoardBaseId )
                      goto LABEL_43;
                    if ( (int)++v38 >= max_length )
                      goto LABEL_30;
                  }
                }
              }
            }
          }
        }
      }
LABEL_45:
      sub_B170D4();
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
  __int64 v16; // x3
  __int64 v17; // x4
  System_Action_o *v18; // x22
  const MethodInfo *v19; // x3
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  if ( (byte_40FD903 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, method);
    sub_B16FFC(&Method_FriendOperationItemListViewManager_OnMoveEnd__, v3);
    sub_B16FFC(&Method_System_Collections_Generic_List_FriendOperationItemListViewObject__get_Count__, v4);
    sub_B16FFC(&Method_System_Collections_Generic_List_FriendOperationItemListViewObject__get_Item__, v5);
    sub_B16FFC(&StringLiteral_10004, v6);
    byte_40FD903 = 1;
  }
  ListViewManager__ClippingItems((ListViewManager_o *)this, 1, 0, 0LL);
  ListViewManager__DragMaskStart((ListViewManager_o *)this, 0LL);
  ObjectList = FriendOperationItemListViewManager__get_ObjectList(this, v7);
  if ( !ObjectList )
LABEL_15:
    sub_B170D4();
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
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
    v13 = v9->fields._items->m_Items[v11];
    if ( ListViewManager__ClippingItem((ListViewManager_o *)this, (ListViewObject_o *)v13, 0LL) )
    {
      v18 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v14, v15, v16, v17);
      System_Action___ctor(v18, (Il2CppObject *)this, Method_FriendOperationItemListViewManager_OnMoveEnd__, 0LL);
      if ( !v13 )
        goto LABEL_15;
      ++v12;
      zero = UnityEngine_Vector3__get_zero(0LL);
      FriendOperationItemListViewObject__Init(v13, 4, v18, 0.1, *(UnityEngine_Vector3_o *)&zero.fields.y, v19);
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
      (System_String_o *)StringLiteral_10004,
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
  __int64 v18; // x3
  __int64 v19; // x4
  Il2CppObject *current; // x21
  System_Action_o *v21; // x22
  const MethodInfo *v22; // x3
  System_Collections_Generic_List_Enumerator_T__o v23; // [xsp+8h] [xbp-58h] BYREF
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  if ( (byte_40FD901 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, *(_QWORD *)&mode);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_FriendOperationItemListViewObject__Dispose__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_FriendOperationItemListViewObject__MoveNext__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_FriendOperationItemListViewObject__get_Current__, v9);
    sub_B16FFC(&Method_FriendOperationItemListViewManager_OnMoveEnd__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_FriendOperationItemListViewObject__GetEnumerator__, v11);
    sub_B16FFC(&Method_System_Collections_Generic_List_FriendOperationItemListViewObject__get_Count__, v12);
    sub_B16FFC(&StringLiteral_10004, v13);
    byte_40FD901 = 1;
  }
  memset(&v23, 0, sizeof(v23));
  ObjectList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)FriendOperationItemListViewManager__get_ObjectList(
                                                                                                this,
                                                                                                *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_B170D4();
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10004,
      delay,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v23,
      ObjectList,
      (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_FriendOperationItemListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v23,
              (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_FriendOperationItemListViewObject__MoveNext__) )
    {
      current = v23.fields.current;
      v21 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v16, v17, v18, v19);
      System_Action___ctor(v21, (Il2CppObject *)this, Method_FriendOperationItemListViewManager_OnMoveEnd__, 0LL);
      if ( !current )
        sub_B170D4();
      zero = UnityEngine_Vector3__get_zero(0LL);
      FriendOperationItemListViewObject__Init(
        (FriendOperationItemListViewObject_o *)current,
        mode,
        v21,
        delay,
        *(UnityEngine_Vector3_o *)&zero.fields.y,
        v22);
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v23,
      (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_FriendOperationItemListViewObject__Dispose__);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FriendOperationItemListViewManager__RequestListObject_31848396(
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
  __int64 v16; // x3
  __int64 v17; // x4
  Il2CppObject *current; // x21
  System_Action_o *v19; // x22
  const MethodInfo *v20; // x3
  System_Collections_Generic_List_Enumerator_T__o v21; // [xsp+8h] [xbp-58h] BYREF
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  if ( (byte_40FD902 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, *(_QWORD *)&mode);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_FriendOperationItemListViewObject__Dispose__, v5);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_FriendOperationItemListViewObject__MoveNext__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_FriendOperationItemListViewObject__get_Current__, v7);
    sub_B16FFC(&Method_FriendOperationItemListViewManager_OnMoveEnd__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_FriendOperationItemListViewObject__GetEnumerator__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_FriendOperationItemListViewObject__get_Count__, v10);
    sub_B16FFC(&StringLiteral_10004, v11);
    byte_40FD902 = 1;
  }
  memset(&v21, 0, sizeof(v21));
  ObjectList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)FriendOperationItemListViewManager__get_ObjectList(
                                                                                                this,
                                                                                                *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_B170D4();
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10004,
      0.0,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v21,
      ObjectList,
      (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_FriendOperationItemListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v21,
              (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_FriendOperationItemListViewObject__MoveNext__) )
    {
      current = v21.fields.current;
      v19 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v14, v15, v16, v17);
      System_Action___ctor(v19, (Il2CppObject *)this, Method_FriendOperationItemListViewManager_OnMoveEnd__, 0LL);
      if ( !current )
        sub_B170D4();
      zero = UnityEngine_Vector3__get_zero(0LL);
      FriendOperationItemListViewObject__Init(
        (FriendOperationItemListViewObject_o *)current,
        mode,
        v19,
        0.0,
        *(UnityEngine_Vector3_o *)&zero.fields.y,
        v20);
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v21,
      (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_FriendOperationItemListViewObject__Dispose__);
  }
}


void __fastcall FriendOperationItemListViewManager__ScrollViewEnabled(
        FriendOperationItemListViewManager_o *this,
        const MethodInfo *method)
{
  UnityEngine_Behaviour_o *scrollView; // x0

  scrollView = (UnityEngine_Behaviour_o *)this->fields.scrollView;
  if ( !scrollView )
    sub_B170D4();
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

  if ( (byte_40FD90A & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__, *(_QWORD *)&classPos);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v5);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v6);
    sub_B16FFC(&FriendOperationItemListViewItem_TypeInfo, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v10);
    byte_40FD90A = 1;
  }
  memset(&i, 0, sizeof(i));
  v28 = 0;
  itemList = this->fields.itemList;
  if ( itemList )
  {
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v26,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)itemList,
      (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    i = v26;
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &i,
              (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__) )
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
      (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
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
          (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
        for ( i = v26;
              System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                &i,
                (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
              ((void (*)(void))i.fields.current->klass->vtable[4].method)() )
        {
          if ( !i.fields.current )
            sub_B170D4();
        }
        v27[0] = 190;
        v16 = ++v28;
        System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
          &i,
          (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
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
            System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
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
            FriendOperationItemListViewManager__SetMode_31847292(this, 5, v17);
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
      sub_B170D4();
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
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.callbackFunc,
    (System_Int32_array **)callback,
    (System_String_array **)callback,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  FriendOperationItemListViewManager__SetMode_31847292(this, mode, v10);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FriendOperationItemListViewManager__SetMode_31847292(
        FriendOperationItemListViewManager_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  System_Collections_Generic_List_FriendOperationItemListViewObject__o *ObjectList; // x0
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x3
  __int64 v14; // x4
  int32_t v15; // w8
  System_Collections_Generic_List_FriendOperationItemListViewObject__o *v16; // x20
  int v17; // w8
  __int64 v18; // x23
  FriendOperationItemListViewObject_o *v19; // x22
  System_Action_o *v20; // x0
  const MethodInfo *v21; // x1
  const MethodInfo *v22; // x2
  UnityEngine_GameObject_o *emptyMessageBase; // x0
  int v24; // s0
  System_String_o *v25; // x1
  const MethodInfo *v26; // x1
  System_Collections_Generic_List_FriendOperationItemListViewObject__o *ClippingObjectList; // x0
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x3
  __int64 v31; // x4
  int32_t size; // w8
  System_Collections_Generic_List_FriendOperationItemListViewObject__o *v33; // x20
  int v34; // w8
  __int64 v35; // x23
  FriendOperationItemListViewObject_o *v36; // x21
  System_Action_o *v37; // x22
  const MethodInfo *v38; // x3
  const MethodInfo *v39; // x1
  System_Collections_Generic_List_FriendOperationItemListViewObject__o *v40; // x0
  __int64 v41; // x1
  __int64 v42; // x2
  __int64 v43; // x3
  __int64 v44; // x4
  int32_t v45; // w8
  System_Collections_Generic_List_FriendOperationItemListViewObject__o *v46; // x20
  int v47; // w8
  __int64 v48; // x23
  FriendOperationItemListViewObject_o *v49; // x21
  System_Action_o *v50; // x22
  const MethodInfo *v51; // x3
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED
  UnityEngine_Vector3_o v53; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  if ( (byte_40FD900 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, *(_QWORD *)&mode);
    sub_B16FFC(&Method_FriendOperationItemListViewManager_OnMoveEnd__, v5);
    sub_B16FFC(&Method_System_Collections_Generic_List_FriendOperationItemListViewObject__get_Count__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_FriendOperationItemListViewObject__get_Item__, v7);
    sub_B16FFC(&StringLiteral_10004, v8);
    sub_B16FFC(&StringLiteral_11393, v9);
    byte_40FD900 = 1;
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
        UnityEngine_GameObject__SetActive(emptyMessageBase, 0, 0LL);
        v24 = 0;
        v25 = (System_String_o *)StringLiteral_11393;
        goto LABEL_38;
      case 2:
        FriendOperationItemListViewManager__RequestListObject_31848396(this, 3, v22);
        return;
      case 3:
        ListViewManager__DragMaskStart((ListViewManager_o *)this, 0LL);
        ClippingObjectList = FriendOperationItemListViewManager__get_ClippingObjectList(this, v26);
        if ( !ClippingObjectList )
          goto LABEL_39;
        size = ClippingObjectList->fields._size;
        v33 = ClippingObjectList;
        if ( size < 1 )
          goto LABEL_37;
        this->fields.callbackCount = size;
        v34 = ClippingObjectList->fields._size;
        if ( v34 < 1 )
          return;
        v35 = 0LL;
        while ( 1 )
        {
          if ( v34 <= (unsigned int)v35 )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
          v36 = v33->fields._items->m_Items[v35];
          v37 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v28, v29, v30, v31);
          System_Action___ctor(v37, (Il2CppObject *)this, Method_FriendOperationItemListViewManager_OnMoveEnd__, 0LL);
          if ( !v36 )
            break;
          zero = UnityEngine_Vector3__get_zero(0LL);
          FriendOperationItemListViewObject__Init(v36, 5, v37, 0.1, *(UnityEngine_Vector3_o *)&zero.fields.y, v38);
          v34 = v33->fields._size;
          if ( (int)++v35 >= v34 )
            return;
        }
        goto LABEL_39;
      case 4:
        ListViewManager__DragMaskStart((ListViewManager_o *)this, 0LL);
        v40 = FriendOperationItemListViewManager__get_ClippingObjectList(this, v39);
        if ( !v40 )
          goto LABEL_39;
        v45 = v40->fields._size;
        v46 = v40;
        if ( v45 < 1 )
          goto LABEL_37;
        this->fields.callbackCount = v45;
        v47 = v40->fields._size;
        if ( v47 < 1 )
          return;
        v48 = 0LL;
        break;
      default:
        return;
    }
    while ( 1 )
    {
      if ( v47 <= (unsigned int)v48 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
      v49 = v46->fields._items->m_Items[v48];
      v50 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v41, v42, v43, v44);
      System_Action___ctor(v50, (Il2CppObject *)this, Method_FriendOperationItemListViewManager_OnMoveEnd__, 0LL);
      if ( !v49 )
        break;
      v53 = UnityEngine_Vector3__get_zero(0LL);
      FriendOperationItemListViewObject__Init(v49, 6, v50, 0.1, *(UnityEngine_Vector3_o *)&v53.fields.y, v51);
      v47 = v46->fields._size;
      if ( (int)++v48 >= v47 )
        return;
    }
LABEL_39:
    sub_B170D4();
  }
  ObjectList = FriendOperationItemListViewManager__get_ObjectList(this, *(const MethodInfo **)&mode);
  if ( !ObjectList )
    goto LABEL_39;
  v15 = ObjectList->fields._size;
  v16 = ObjectList;
  if ( v15 < 1 )
  {
LABEL_37:
    this->fields.callbackCount = 1;
    v25 = (System_String_o *)StringLiteral_10004;
    v24 = 1045220557;
LABEL_38:
    UnityEngine_MonoBehaviour__Invoke((UnityEngine_MonoBehaviour_o *)this, v25, *(float *)&v24, 0LL);
  }
  else
  {
    this->fields.callbackCount = v15;
    v17 = ObjectList->fields._size;
    if ( v17 >= 1 )
    {
      v18 = 0LL;
      while ( 1 )
      {
        if ( v17 <= (unsigned int)v18 )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
        v19 = v16->fields._items->m_Items[v18];
        v20 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v11, v12, v13, v14);
        System_Action___ctor(v20, (Il2CppObject *)this, Method_FriendOperationItemListViewManager_OnMoveEnd__, 0LL);
        if ( !v19 )
          break;
        UnityEngine_Vector3__get_zero(0LL);
        if ( (byte_40FD916 & 1) == 0 )
        {
          sub_B16FFC(&FriendOperationItemListViewItem_TypeInfo, v21);
          byte_40FD916 = 1;
        }
        FriendOperationItemListViewObject__SetupDisp(v19, v21);
        v17 = v16->fields._size;
        if ( (int)++v18 >= v17 )
          return;
      }
      goto LABEL_39;
    }
  }
}


void __fastcall FriendOperationItemListViewManager__SetMode_31848260(
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
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.callbackFunc2,
    (System_Int32_array **)callback,
    (System_String_array **)callback,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  FriendOperationItemListViewManager__SetMode_31847292(this, mode, v10);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FriendOperationItemListViewManager__SetObjectItem(
        FriendOperationItemListViewManager_o *this,
        ListViewObject_o *obj,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  __int64 v6; // x10
  int32_t initMode; // w20
  const MethodInfo *v8; // x3
  int v9; // s1
  int32_t v12; // w1

  if ( (byte_40FD8FF & 1) == 0 )
  {
    sub_B16FFC(&FriendOperationItemListViewObject_TypeInfo, obj);
    byte_40FD8FF = 1;
  }
  if ( !obj
    || (v6 = *(&FriendOperationItemListViewObject_TypeInfo->_2.bitflags2 + 1),
        *(&obj->klass->_2.bitflags2 + 1) < (unsigned int)v6)
    || (FriendOperationItemListViewObject_c *)obj->klass->_2.typeHierarchy[v6 - 1] != FriendOperationItemListViewObject_TypeInfo )
  {
    sub_B170D4();
  }
  initMode = this->fields.initMode;
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
  System_String_o *SortKindButtonText; // x0
  UnityEngine_Object_o *sortOrderSprite; // x20
  struct ListViewSort_o *v14; // x8
  int32_t sortKind; // w9
  UISprite_o *sortExplanationSprite; // x0
  System_String_o **v17; // x8
  struct ListViewSort_o *v18; // x8
  UISprite_o *v19; // x0
  _BOOL4 isAscendingOrder; // w8
  System_String_o **v21; // x9
  System_String_o **v22; // x10
  System_String_o **v23; // x8
  struct UISprite_o *v24; // x0
  UISprite_o *v25; // x0
  System_String_o **v26; // x8
  struct ListViewSort_o *v27; // x8

  if ( (byte_40FD909 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    sub_B16FFC(&StringLiteral_16955, v3);
    sub_B16FFC(&StringLiteral_17038, v4);
    sub_B16FFC(&StringLiteral_16995, v5);
    sub_B16FFC(&StringLiteral_16985, v6);
    sub_B16FFC(&StringLiteral_17002, v7);
    sub_B16FFC(&StringLiteral_16952, v8);
    byte_40FD909 = 1;
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
    SortKindButtonText = ListViewSort__GetSortKindButtonText(sort, 0LL);
    if ( !v11 )
      goto LABEL_38;
    UILabel__set_text(v11, SortKindButtonText, 0LL);
  }
  sortOrderSprite = (UnityEngine_Object_o *)this->fields.sortOrderSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(sortOrderSprite, 0LL, 0LL) )
  {
    v14 = this->fields.sort;
    if ( !v14 )
      goto LABEL_38;
    sortKind = v14->fields.sortKind;
    if ( sortKind == 1 || sortKind == 11 || (unsigned int)(sortKind - 17) <= 1 )
    {
      sortExplanationSprite = this->fields.sortExplanationSprite;
      if ( !sortExplanationSprite )
        goto LABEL_38;
      v17 = (System_String_o **)(v14->fields.isAscendingOrder ? &StringLiteral_17002 : &StringLiteral_16995);
      UISprite__set_spriteName(sortExplanationSprite, *v17, 0LL);
      v18 = this->fields.sort;
      if ( !v18 )
        goto LABEL_38;
      v19 = this->fields.sortOrderSprite;
      if ( !v19 )
        goto LABEL_38;
      isAscendingOrder = v18->fields.isAscendingOrder;
      v21 = (System_String_o **)&StringLiteral_16952;
      v22 = (System_String_o **)&StringLiteral_16955;
    }
    else
    {
      v25 = this->fields.sortExplanationSprite;
      if ( !v25 )
        goto LABEL_38;
      v26 = (System_String_o **)(v14->fields.isAscendingOrder ? &StringLiteral_17038 : &StringLiteral_16985);
      UISprite__set_spriteName(v25, *v26, 0LL);
      v27 = this->fields.sort;
      if ( !v27 )
        goto LABEL_38;
      v19 = this->fields.sortOrderSprite;
      if ( !v19 )
        goto LABEL_38;
      isAscendingOrder = v27->fields.isAscendingOrder;
      v21 = (System_String_o **)&StringLiteral_16955;
      v22 = (System_String_o **)&StringLiteral_16952;
    }
    if ( isAscendingOrder )
      v23 = v21;
    else
      v23 = v22;
    UISprite__set_spriteName(v19, *v23, 0LL);
    v24 = this->fields.sortExplanationSprite;
    if ( v24 )
    {
      ((void (__fastcall *)(struct UISprite_o *, Il2CppMethodPointer))v24->klass->vtable._33_MakePixelPerfect.method)(
        v24,
        v24->klass->vtable._34_get_minWidth.methodPtr);
      return;
    }
LABEL_38:
    sub_B170D4();
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
    sub_B170D4();
  sort->fields.sortKind = kind;
}


void __fastcall FriendOperationItemListViewManager__SetupClassBoardInfo(
        FriendOperationItemListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
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
  System_Collections_Generic_Dictionary_int__int__o *classBoardMaxDictionary; // x0
  BattleServantConfConponent_o *p_classBoardMaxDictionary; // x20
  System_Collections_Generic_Dictionary_int__int__o *v19; // x19
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  WarQuestSelectionMaster_o *Master_WarQuestSelectionMaster; // x0
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v30; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v33; // x8
  unsigned __int64 v34; // x10
  int32_t *v35; // x11
  __int64 v36; // x0
  __int64 v37; // x0
  __int64 v38; // x21
  __int64 v39; // x9
  ClassBoardSquareMaster_o *v40; // x0
  ClassBoardSquareEntity_array *OtherThanNoneEntity; // x0
  System_Collections_Generic_IEnumerator_T__c *v42; // x8
  unsigned __int64 v43; // x10
  int32_t *v44; // x11
  __int64 v45; // x0

  if ( (byte_40FD90B & 1) == 0 )
  {
    sub_B16FFC(&ClassBoardBaseEntity_TypeInfo, method);
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, v6);
    sub_B16FFC(&Method_DataManager_GetMaster_ClassBoardBaseMaster___, v7);
    sub_B16FFC(&Method_DataManager_GetMaster_ClassBoardSquareMaster___, v8);
    sub_B16FFC(&DataManager_TypeInfo, v9);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__int__Add__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__int__Clear__, v11);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__int___ctor__, v12);
    sub_B16FFC(&System_Collections_Generic_Dictionary_int__int__TypeInfo, v13);
    sub_B16FFC(&System_IDisposable_TypeInfo, v14);
    sub_B16FFC(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v15);
    sub_B16FFC(&System_Collections_IEnumerator_TypeInfo, v16);
    byte_40FD90B = 1;
  }
  classBoardMaxDictionary = this->fields.classBoardMaxDictionary;
  p_classBoardMaxDictionary = (BattleServantConfConponent_o *)&this->fields.classBoardMaxDictionary;
  if ( classBoardMaxDictionary )
  {
    System_Collections_Generic_Dictionary_int__int___Clear(
      classBoardMaxDictionary,
      (const MethodInfo_2DDD180 *)Method_System_Collections_Generic_Dictionary_int__int__Clear__);
  }
  else
  {
    v19 = (System_Collections_Generic_Dictionary_int__int__o *)sub_B170CC(
                                                                 System_Collections_Generic_Dictionary_int__int__TypeInfo,
                                                                 method,
                                                                 v2,
                                                                 v3,
                                                                 v4);
    System_Collections_Generic_Dictionary_int__int____ctor(
      v19,
      (const MethodInfo_2DDC410 *)Method_System_Collections_Generic_Dictionary_int__int___ctor__);
    p_classBoardMaxDictionary->klass = (BattleServantConfConponent_c *)v19;
    sub_B16F98(p_classBoardMaxDictionary, (System_Int32_array **)v19, v20, v21, v22, v23, v24, v25);
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_ClassBoardBaseMaster___);
  if ( !Master_WarQuestSelectionMaster
    || (list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)Master_WarQuestSelectionMaster->fields.list) == 0LL )
  {
    sub_B170D4();
  }
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 list,
                 (const MethodInfo_290E508 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B170D4();
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v30 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v30;
        p_offset += 4;
        if ( v30 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_16;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_16:
      p_method = sub_AAFEF8(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v33 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v34 = 0LL;
      v35 = &v33->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v35 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v34;
        v35 += 4;
        if ( v34 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_23;
      }
      v36 = (__int64)&v33->vtable[*v35].method;
    }
    else
    {
LABEL_23:
      v36 = sub_AAFEF8(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v37 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v36)(
            Enumerator,
            *(_QWORD *)(v36 + 8));
    v38 = v37;
    if ( v37 )
    {
      v39 = *(&ClassBoardBaseEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(unsigned __int8 *)(*(_QWORD *)v37 + 300LL) < (unsigned int)v39
        || *(ClassBoardBaseEntity_c **)(*(_QWORD *)(*(_QWORD *)v37 + 200LL) + 8 * v39 - 8) != ClassBoardBaseEntity_TypeInfo )
      {
        sub_B173C8(v37);
LABEL_44:
        sub_B170D4();
      }
    }
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    v40 = (ClassBoardSquareMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_ClassBoardSquareMaster___);
    if ( !v38 )
      goto LABEL_44;
    if ( !v40 )
      sub_B170D4();
    OtherThanNoneEntity = ClassBoardSquareMaster__GetOtherThanNoneEntity(v40, *(_DWORD *)(v38 + 16), 0LL);
    if ( OtherThanNoneEntity )
    {
      if ( !p_classBoardMaxDictionary->klass )
        sub_B170D4();
      System_Collections_Generic_Dictionary_int__int___Add(
        (System_Collections_Generic_Dictionary_int__int__o *)p_classBoardMaxDictionary->klass,
        *(_DWORD *)(v38 + 16),
        OtherThanNoneEntity->max_length,
        (const MethodInfo_2DDCFB4 *)Method_System_Collections_Generic_Dictionary_int__int__Add__);
    }
  }
  v42 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v43 = 0LL;
    v44 = &v42->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v44 - 1) != System_IDisposable_TypeInfo )
    {
      ++v43;
      v44 += 4;
      if ( v43 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_40;
    }
    v45 = (__int64)&v42->vtable[*v44].method;
  }
  else
  {
LABEL_40:
    v45 = sub_AAFEF8(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v45)(Enumerator, *(_QWORD *)(v45 + 8));
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

  if ( (byte_40FD8F3 & 1) == 0 )
  {
    sub_B16FFC(&FriendOperationItemListViewManager_CallbackFunc_TypeInfo, value);
    byte_40FD8F3 = 1;
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
    v8 = sub_B0BA14(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_B173C8(v7);
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

  if ( (byte_40FD8F5 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, value);
    byte_40FD8F5 = 1;
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
    v8 = sub_B0BA14(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_B173C8(v7);
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
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v14; // x19
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  Il2CppObject *current; // x21
  FriendOperationItemListViewObject_o *Component_srcLineSprite; // x0
  const MethodInfo *v18; // x1
  EventMissionProgressRequest_Argument_ProgressData_o *v19; // x21
  ListViewItem_o *Item; // x0
  System_Collections_Generic_List_Enumerator_T__o v22; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v23; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_40FD8FB & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v7);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_FriendOperationItemListViewObject___, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_FriendOperationItemListViewObject__Add__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_FriendOperationItemListViewObject___ctor__, v11);
    sub_B16FFC(&System_Collections_Generic_List_FriendOperationItemListViewObject__TypeInfo, v12);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v13);
    byte_40FD8FB = 1;
  }
  memset(&v23, 0, sizeof(v23));
  v14 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_FriendOperationItemListViewObject__TypeInfo,
                                                                                                  method,
                                                                                                  v2,
                                                                                                  v3,
                                                                                                  v4);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v14,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_FriendOperationItemListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_B170D4();
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v22,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)objectList,
    (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v23 = v22;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v23,
            (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v23.fields.current;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL) )
    {
      if ( !current )
        sub_B170D4();
      Component_srcLineSprite = (FriendOperationItemListViewObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                         (UnityEngine_GameObject_o *)current,
                                                                         (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_FriendOperationItemListViewObject___);
      v19 = (EventMissionProgressRequest_Argument_ProgressData_o *)Component_srcLineSprite;
      if ( !Component_srcLineSprite )
        sub_B170D4();
      Item = (ListViewItem_o *)FriendOperationItemListViewObject__GetItem(Component_srcLineSprite, v18);
      if ( !Item )
        sub_B170D4();
      if ( Item->fields.isTermination )
      {
        if ( ListViewManager__ClippingItem_30192136((ListViewManager_o *)this, Item, 0LL) )
        {
          if ( !v14 )
            sub_B170D4();
          goto LABEL_16;
        }
      }
      else
      {
        if ( !v14 )
          sub_B170D4();
LABEL_16:
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v14,
          v19,
          (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_FriendOperationItemListViewObject__Add__);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v23,
    (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_FriendOperationItemListViewObject__o *)v14;
}


bool __fastcall FriendOperationItemListViewManager__get_IsExistSwapLockUser(
        FriendOperationItemListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x22
  unsigned __int64 i; // x20
  ListViewItem_o *v7; // x8
  __int64 v8; // x11

  if ( (byte_40FD8FC & 1) == 0 )
  {
    sub_B16FFC(&FriendOperationItemListViewItem_TypeInfo, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v3);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v4);
    byte_40FD8FC = 1;
  }
  itemList = this->fields.itemList;
  if ( itemList )
  {
    for ( i = 0LL; (__int64)i < itemList->fields._size; ++i )
    {
      if ( i >= (unsigned int)itemList->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
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
      itemList = this->fields.itemList;
      if ( !itemList )
        sub_B170D4();
    }
  }
  return 0;
}


System_Collections_Generic_List_FriendOperationItemListViewObject__o *__fastcall FriendOperationItemListViewManager__get_ObjectList(
        FriendOperationItemListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v14; // x19
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  Il2CppObject *current; // x20
  EventMissionProgressRequest_Argument_ProgressData_o *Component_srcLineSprite; // x1
  System_Collections_Generic_List_Enumerator_T__o v19; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v20; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_40FD8FA & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v7);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_FriendOperationItemListViewObject___, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_FriendOperationItemListViewObject__Add__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_FriendOperationItemListViewObject___ctor__, v11);
    sub_B16FFC(&System_Collections_Generic_List_FriendOperationItemListViewObject__TypeInfo, v12);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v13);
    byte_40FD8FA = 1;
  }
  memset(&v20, 0, sizeof(v20));
  v14 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_FriendOperationItemListViewObject__TypeInfo,
                                                                                                  method,
                                                                                                  v2,
                                                                                                  v3,
                                                                                                  v4);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v14,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_FriendOperationItemListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_B170D4();
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v19,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)objectList,
    (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v20 = v19;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v20,
            (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v20.fields.current;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL) )
    {
      if ( !current )
        sub_B170D4();
      Component_srcLineSprite = (EventMissionProgressRequest_Argument_ProgressData_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                                         (UnityEngine_GameObject_o *)current,
                                                                                         (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_FriendOperationItemListViewObject___);
      if ( !v14 )
        sub_B170D4();
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v14,
        Component_srcLineSprite,
        (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_FriendOperationItemListViewObject__Add__);
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v20,
    (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_FriendOperationItemListViewObject__o *)v14;
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
  int32_t Index; // w2

  callbackFunc = this->fields.callbackFunc;
  this->fields.callbackFunc = 0LL;
  sub_B16F98(
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
      sub_B170D4();
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
  int32_t Index; // w2

  callbackFunc = this->fields.callbackFunc;
  this->fields.callbackFunc = 0LL;
  sub_B16F98(
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
      sub_B170D4();
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
  int32_t Index; // w2

  callbackFunc = this->fields.callbackFunc;
  this->fields.callbackFunc = 0LL;
  sub_B16F98(
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
      sub_B170D4();
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

  if ( (byte_40FD8F4 & 1) == 0 )
  {
    sub_B16FFC(&FriendOperationItemListViewManager_CallbackFunc_TypeInfo, value);
    byte_40FD8F4 = 1;
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
    v8 = sub_B0BA14(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_B173C8(v7);
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

  if ( (byte_40FD8F6 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, value);
    byte_40FD8F6 = 1;
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
    v8 = sub_B0BA14(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_B173C8(v7);
  FriendOperationItemListViewManager__get_isMessageApply(v10, v11);
}


void __fastcall FriendOperationItemListViewManager__resetScrollBarPos(
        FriendOperationItemListViewManager_o *this,
        const MethodInfo *method)
{
  UIProgressBar_o *scrollBar; // x0
  struct UIScrollBar_o *v4; // x0

  scrollBar = (UIProgressBar_o *)this->fields.scrollBar;
  if ( !scrollBar || (UIProgressBar__set_value(scrollBar, 0.0, 0LL), (v4 = this->fields.scrollBar) == 0LL) )
    sub_B170D4();
  ((void (__fastcall *)(struct UIScrollBar_o *, void *))v4->klass->vtable._7_ForceUpdate.method)(
    v4,
    v4->klass[1]._1.image);
}


void __fastcall FriendOperationItemListViewManager__setScrollBarActive(
        FriendOperationItemListViewManager_o *this,
        bool b,
        const MethodInfo *method)
{
  UnityEngine_Component_o *scrollBar; // x0
  UnityEngine_GameObject_o *gameObject; // x0

  scrollBar = (UnityEngine_Component_o *)this->fields.scrollBar;
  if ( !scrollBar || (gameObject = UnityEngine_Component__get_gameObject(scrollBar, 0LL)) == 0LL )
    sub_B170D4();
  UnityEngine_GameObject__SetActive(gameObject, b, 0LL);
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
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  struct BattleServantClassBoardSkillEffectListComponent_o *v8; // x8
  BattleServantConfConponent_o *p_method; // x0

  v8 = **(struct BattleServantClassBoardSkillEffectListComponent_o ***)&method;
  *(_QWORD *)&this->fields.method = object;
  p_method = (BattleServantConfConponent_o *)&this->fields.method;
  p_method->monitor = *(void **)&method;
  p_method[-1].fields.classBoardSkillObj = v8;
  sub_B16F98(
    p_method,
    (System_Int32_array **)object,
    *(System_String_array ***)&method,
    (System_String_array **)a4,
    v4,
    v5,
    v6,
    v7);
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
  if ( (byte_40F68CB & 1) == 0 )
  {
    sub_B16FFC(&int_TypeInfo, *(_QWORD *)&kind);
    sub_B16FFC(&FriendOperationItemListViewManager_ResultKind_TypeInfo, v9);
    byte_40F68CB = 1;
  }
  v11[2] = 0LL;
  v11[0] = j_il2cpp_value_box_0(FriendOperationItemListViewManager_ResultKind_TypeInfo, &v13);
  v11[1] = j_il2cpp_value_box_0(int_TypeInfo, &v12);
  return (System_IAsyncResult_o *)sub_B16FA0(this, v11, callback, object);
}


void __fastcall FriendOperationItemListViewManager_CallbackFunc__EndInvoke(
        FriendOperationItemListViewManager_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B16FA4(result, 0LL, method);
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
        sub_B170B8(*(_QWORD *)&v20->fields.extra_arg, *(_QWORD *)&kind, *(_QWORD *)&result);
      if ( (sub_B1702C(v22) & 1) == 0 )
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
      v24 = sub_B17024(v22);
      v25 = sub_B17428(v22);
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
            v18 = sub_AAFEF8(v21, v28, v29);
          }
          v17 = *(_QWORD *)(v18 + 8);
        }
        else
        {
          v17 = *(_QWORD *)(*v21 + 16LL * *(unsigned __int16 *)(v22 + 72) + 320);
        }
        v19 = (void (__fastcall **)(__int64 *, _QWORD, _QWORD, _QWORD))sub_B170AC(v17, v22);
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
            v16 = sub_AAFEF8(v21, class_0, v10);
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
  __int64 v3; // x3
  __int64 v4; // x4
  Il2CppObject *v5; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7

  if ( (byte_40F68C9 & 1) == 0 )
  {
    sub_B16FFC(&FriendOperationItemListViewManager___c_TypeInfo, v1);
    byte_40F68C9 = 1;
  }
  v5 = (Il2CppObject *)sub_B170CC(FriendOperationItemListViewManager___c_TypeInfo, v1, v2, v3, v4);
  System_Object___ctor(v5, 0LL);
  static_fields = (BattleServantConfConponent_o *)FriendOperationItemListViewManager___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v5;
  sub_B16F98(static_fields, (System_Int32_array **)v5, v7, v8, v9, v10, v11, v12);
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

  if ( (byte_40F68CA & 1) == 0 )
  {
    sub_B16FFC(&UserFriendRequestHistoryEntity_TypeInfo, a);
    byte_40F68CA = 1;
  }
  if ( !b )
LABEL_11:
    sub_B170D4();
  v6 = *(&UserFriendRequestHistoryEntity_TypeInfo->_2.bitflags2 + 1);
  if ( *(&b->klass->_2.bitflags2 + 1) < (unsigned int)v6
    || (UserFriendRequestHistoryEntity_c *)b->klass->_2.typeHierarchy[v6 - 1] != UserFriendRequestHistoryEntity_TypeInfo )
  {
    sub_B173C8(b);
    goto LABEL_11;
  }
  if ( !a )
    goto LABEL_11;
  if ( *(&a->klass->_2.bitflags2 + 1) >= (unsigned int)v6
    && (UserFriendRequestHistoryEntity_c *)a->klass->_2.typeHierarchy[v6 - 1] == UserFriendRequestHistoryEntity_TypeInfo )
  {
    return System_Int64__CompareTo_38278296((int64_t)&b[2].monitor, (int64_t)a[2].monitor, 0LL);
  }
  v8 = (FriendOperationItemListViewManager_CallbackFunc_o *)sub_B173C8(a);
  FriendOperationItemListViewManager_CallbackFunc___ctor(v8, v9, v10, v11);
  return result;
}