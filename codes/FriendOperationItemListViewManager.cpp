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

  if ( (byte_418A8BD & 1) == 0 )
  {
    sub_B2C35C(&ListViewSort_FilterKind___TypeInfo, v1);
    sub_B2C35C(&FriendOperationItemListViewManager_TypeInfo, v2);
    sub_B2C35C(
      &Field__PrivateImplementationDetails__6B3B6BC014A692F226080502E0DED60D67C84EBC03CC8CF43A550A89694FF5C0,
      v3);
    byte_418A8BD = 1;
  }
  FriendOperationItemListViewManager_TypeInfo->static_fields->isInitSystem = 0;
  v4 = (System_Array_o *)sub_B2C374(ListViewSort_FilterKind___TypeInfo, 8LL);
  v12.fields.value = Field__PrivateImplementationDetails__6B3B6BC014A692F226080502E0DED60D67C84EBC03CC8CF43A550A89694FF5C0;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_43133304(v4, v12, 0LL);
  static_fields = FriendOperationItemListViewManager_TypeInfo->static_fields;
  static_fields->classFilter = (struct ListViewSort_FilterKind_array *)v4;
  sub_B2C2F8(
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
  __int64 v6; // x1

  if ( (byte_418A8B6 & 1) == 0 )
  {
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, isResult);
    byte_418A8B6 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B2C434(0LL, v6);
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
  __int64 v37; // x1
  System_String_array **v38; // x2
  System_String_array **v39; // x3
  System_Boolean_array **v40; // x4
  System_Int32_array **v41; // x5
  System_Int32_array *v42; // x6
  System_Int32_array *v43; // x7
  struct ListViewSort_array *sortStatusList; // x8
  struct ListViewSort_o *v45; // x1
  System_String_o *v46; // x22
  OtherUserGameEntity_array *FriendCodeList; // x20
  __int64 v48; // x8
  unsigned __int64 v49; // x22
  struct System_Collections_Generic_List_ListViewItem__o *v50; // x9
  int32_t v51; // w23
  OtherUserGameEntity_o *v52; // x24
  System_Collections_Generic_Dictionary_int__int__o *v53; // x25
  FriendOperationItemListViewItem_o *v54; // x21
  const MethodInfo *v55; // x6
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *MasterData_WarQuestSelectionMaster; // x20
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *v57; // x21
  int32_t v58; // w22
  UserBlacklistEntity_o *v59; // x23
  __int64 v60; // x10
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x8
  int32_t size; // w26
  System_Collections_Generic_Dictionary_int__int__o *classBoardMaxDictionary; // x27
  OtherUserGameEntity_o *v64; // x25
  FriendOperationItemListViewItem_o *v65; // x24
  const MethodInfo *v66; // x7
  __int64 *v67; // x8
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *v68; // x20
  System_Collections_Generic_IEnumerable_T__o *v69; // x22
  System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *v70; // x21
  struct FriendOperationItemListViewManager___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__35_0; // x22
  Il2CppObject *v73; // x23
  struct FriendOperationItemListViewManager___c_StaticFields *v74; // x0
  System_String_array **v75; // x2
  System_String_array **v76; // x3
  System_Boolean_array **v77; // x4
  System_Int32_array **v78; // x5
  System_Int32_array *v79; // x6
  System_Int32_array *v80; // x7
  int32_t v81; // w23
  BalanceConfig_c *v82; // x0
  int32_t MaxFriendHistoryNum; // w1
  signed __int64 v84; // x8
  unsigned __int64 v85; // x27
  UserFriendRequestHistoryEntity_o *v86; // x22
  __int64 v87; // x10
  struct System_Collections_Generic_List_ListViewItem__o *v88; // x8
  int32_t v89; // w25
  System_Collections_Generic_Dictionary_int__int__o *v90; // x26
  OtherUserGameEntity_o *v91; // x24
  FriendOperationItemListViewItem_o *v92; // x23
  const MethodInfo *v93; // x7
  TblFriendMaster_o *v94; // x23
  OtherUserGameEntity_array *List; // x24
  __int64 v96; // x8
  unsigned __int64 v97; // x22
  struct System_Collections_Generic_List_ListViewItem__o *v98; // x9
  int32_t v99; // w26
  OtherUserGameEntity_o *v100; // x27
  System_Collections_Generic_Dictionary_int__int__o *v101; // x28
  FriendOperationItemListViewItem_o *v102; // x25
  const MethodInfo *v103; // x6
  __int64 v104; // x8
  unsigned __int64 v105; // x22
  struct System_Collections_Generic_List_ListViewItem__o *v106; // x9
  int32_t v107; // w26
  OtherUserGameEntity_o *v108; // x27
  System_Collections_Generic_Dictionary_int__int__o *v109; // x28
  FriendOperationItemListViewItem_o *v110; // x25
  const MethodInfo *v111; // x6
  UILabel_o *emptyMessageLabel; // x20
  struct UIScrollView_o *scrollView; // x8
  __int64 v114; // x0
  System_String_o *v115; // [xsp+8h] [xbp-68h]
  OtherUserGameEntity_array *v116; // [xsp+10h] [xbp-60h]

  if ( (byte_418A8AC & 1) == 0 )
  {
    sub_B2C35C(&BalanceConfig_TypeInfo, *(_QWORD *)&kind);
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, v6);
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v7);
    sub_B2C35C(&Method_System_Comparison_DataEntityBase___ctor__, v8);
    sub_B2C35C(&System_Comparison_DataEntityBase__TypeInfo, v9);
    sub_B2C35C(&Method_DataManager_GetMasterData_OtherUserGameMaster___, v10);
    sub_B2C35C(&Method_DataManager_GetMasterData_TblFriendMaster___, v11);
    sub_B2C35C(&Method_DataManager_GetMasterData_UserBlacklistMaster___, v12);
    sub_B2C35C(&Method_DataManager_GetMasterData_UserFriendRequestHistoryMaster___, v13);
    sub_B2C35C(&Method_DataMasterBase_OtherUserGameMaster__OtherUserGameEntity__long__GetEntity__, v14);
    sub_B2C35C(&FriendOperationItemListViewItem_TypeInfo, v15);
    sub_B2C35C(&FriendOperationItemListViewManager_TypeInfo, v16);
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewItem__Add__, v17);
    sub_B2C35C(&Method_System_Collections_Generic_List_DataEntityBase__RemoveRange__, v18);
    sub_B2C35C(&Method_System_Collections_Generic_List_DataEntityBase__Reverse__, v19);
    sub_B2C35C(&Method_System_Collections_Generic_List_DataEntityBase__Sort__, v20);
    sub_B2C35C(&Method_System_Collections_Generic_List_DataEntityBase___ctor___67303760, v21);
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v22);
    sub_B2C35C(&Method_System_Collections_Generic_List_DataEntityBase__get_Count__, v23);
    sub_B2C35C(&Method_System_Collections_Generic_List_DataEntityBase__get_Item__, v24);
    sub_B2C35C(&System_Collections_Generic_List_DataEntityBase__TypeInfo, v25);
    sub_B2C35C(&LocalizationManager_TypeInfo, v26);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v27);
    sub_B2C35C(&Method_FriendOperationItemListViewManager___c__CreateList_b__35_0__, v28);
    sub_B2C35C(&FriendOperationItemListViewManager___c_TypeInfo, v29);
    sub_B2C35C(&UserBlacklistEntity_TypeInfo, v30);
    sub_B2C35C(&UserFriendRequestHistoryEntity_TypeInfo, v31);
    sub_B2C35C(&StringLiteral_2567/*"BLACKLIST_EMPTY_MESSAGE"*/, v32);
    sub_B2C35C(&StringLiteral_6463/*"FRIEND_EMPTY_FRIEND_MESSAGE"*/, v33);
    sub_B2C35C(&StringLiteral_2570/*"BLACKLIST_FRIEND_HISTORY_EMPTY_MESSAGE"*/, v34);
    sub_B2C35C(&StringLiteral_6464/*"FRIEND_EMPTY_OFFERED_MESSAGE"*/, v35);
    byte_418A8AC = 1;
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
    v114 = sub_B2C460(sort);
    sub_B2C400(v114, 0LL);
  }
  v45 = sortStatusList->m_Items[kind];
  this->fields.sort = v45;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.sort,
    (System_Int32_array **)v45,
    v38,
    v39,
    v40,
    v41,
    v42,
    v43);
  sort = (int64_t)this->fields.sort;
  if ( !sort )
    goto LABEL_101;
  ListViewSort__Load((ListViewSort_o *)sort, 0LL);
  if ( kind == 8 )
  {
    sort = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !sort )
      goto LABEL_101;
    MasterData_WarQuestSelectionMaster = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)DataManager__GetMasterData_WarQuestSelectionMaster_((DataManager_o *)sort, (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_OtherUserGameMaster___);
    sort = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !sort )
      goto LABEL_101;
    sort = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                      (DataManager_o *)sort,
                      (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserBlacklistMaster___);
    if ( !sort )
      goto LABEL_101;
    v57 = *(System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o **)(sort + 32);
    ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
    if ( !v57 )
      goto LABEL_101;
    if ( System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
           v57,
           (const MethodInfo_2A0E2E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__) < 1 )
    {
LABEL_35:
      v67 = &StringLiteral_2567/*"BLACKLIST_EMPTY_MESSAGE"*/;
      goto LABEL_68;
    }
    v58 = 0;
    while ( 1 )
    {
      sort = (int64_t)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                        v57,
                        v58,
                        (const MethodInfo_2A0E38C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !sort )
        break;
      v59 = (UserBlacklistEntity_o *)sort;
      v60 = *(&UserBlacklistEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(unsigned __int8 *)(*(_QWORD *)sort + 300LL) < (unsigned int)v60 )
        break;
      if ( *(UserBlacklistEntity_c **)(*(_QWORD *)(*(_QWORD *)sort + 200LL) + 8 * v60 - 8) != UserBlacklistEntity_TypeInfo )
        break;
      sort = UserBlacklistEntity__getOtherUserId((UserBlacklistEntity_o *)sort, 0LL);
      if ( !MasterData_WarQuestSelectionMaster )
        break;
      sort = (int64_t)DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
                        MasterData_WarQuestSelectionMaster,
                        sort,
                        (const MethodInfo_24E42F8 *)Method_DataMasterBase_OtherUserGameMaster__OtherUserGameEntity__long__GetEntity__);
      itemList = this->fields.itemList;
      if ( !itemList )
        break;
      size = itemList->fields._size;
      classBoardMaxDictionary = this->fields.classBoardMaxDictionary;
      v64 = (OtherUserGameEntity_o *)sort;
      v65 = (FriendOperationItemListViewItem_o *)sub_B2C42C(FriendOperationItemListViewItem_TypeInfo);
      FriendOperationItemListViewItem___ctor_30396524(v65, 8, size, v64, v59, 0, classBoardMaxDictionary, v66);
      sort = (int64_t)this->fields.itemList;
      if ( !sort )
        break;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sort,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v65,
        (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
      if ( ++v58 >= System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
                      v57,
                      (const MethodInfo_2A0E2E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__) )
        goto LABEL_35;
    }
LABEL_101:
    sub_B2C434(sort, v37);
  }
  if ( kind == 7 )
  {
    sort = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !sort )
      goto LABEL_101;
    v68 = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                   (DataManager_o *)sort,
                                                                                   (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_OtherUserGameMaster___);
    sort = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !sort )
      goto LABEL_101;
    sort = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                      (DataManager_o *)sort,
                      (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserFriendRequestHistoryMaster___);
    if ( !sort )
      goto LABEL_101;
    v69 = *(System_Collections_Generic_IEnumerable_T__o **)(sort + 32);
    v70 = (System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *)sub_B2C42C(System_Collections_Generic_List_DataEntityBase__TypeInfo);
    System_Collections_Generic_List_WarBoardAIRoute_RouteData____ctor(
      v70,
      v69,
      (const MethodInfo_2EF3994 *)Method_System_Collections_Generic_List_DataEntityBase___ctor___67303760);
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
      v73 = (Il2CppObject *)static_fields->__9;
      _9__35_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B2C42C(System_Comparison_DataEntityBase__TypeInfo);
      System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
        _9__35_0,
        v73,
        Method_FriendOperationItemListViewManager___c__CreateList_b__35_0__,
        (const MethodInfo_25D8DF8 *)Method_System_Comparison_DataEntityBase___ctor__);
      v74 = FriendOperationItemListViewManager___c_TypeInfo->static_fields;
      v74->__9__35_0 = (struct System_Comparison_DataEntityBase__o *)_9__35_0;
      sub_B2C2F8(
        (BattleServantConfConponent_o *)&v74->__9__35_0,
        (System_Int32_array **)_9__35_0,
        v75,
        v76,
        v77,
        v78,
        v79,
        v80);
    }
    if ( !v70 )
      goto LABEL_101;
    System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
      (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v70,
      (System_Comparison_T__o *)_9__35_0,
      (const MethodInfo_2EF653C *)Method_System_Collections_Generic_List_DataEntityBase__Sort__);
    v81 = v70->fields._size;
    v82 = BalanceConfig_TypeInfo;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v82 = BalanceConfig_TypeInfo;
    }
    MaxFriendHistoryNum = v82->static_fields->MaxFriendHistoryNum;
    if ( v81 > MaxFriendHistoryNum )
    {
      if ( (BYTE3(v82->vtable._0_Equals.methodPtr) & 4) != 0 && !v82->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v82);
        MaxFriendHistoryNum = BalanceConfig_TypeInfo->static_fields->MaxFriendHistoryNum;
      }
      System_Collections_Generic_List_RegexCharClass_SingleRange___RemoveRange(
        (System_Collections_Generic_List_RegexCharClass_SingleRange__o *)v70,
        MaxFriendHistoryNum,
        v70->fields._size - MaxFriendHistoryNum,
        (const MethodInfo_2EF61F4 *)Method_System_Collections_Generic_List_DataEntityBase__RemoveRange__);
    }
    System_Collections_Generic_List_MapControl_WarInfo___Reverse(
      (System_Collections_Generic_List_MapControl_WarInfo__o *)v70,
      (const MethodInfo_2EF62C0 *)Method_System_Collections_Generic_List_DataEntityBase__Reverse__);
    ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
    LODWORD(v84) = v70->fields._size;
    if ( (int)v84 < 1 )
    {
LABEL_67:
      v67 = &StringLiteral_2570/*"BLACKLIST_FRIEND_HISTORY_EMPTY_MESSAGE"*/;
      goto LABEL_68;
    }
    v85 = 0LL;
    while ( 1 )
    {
      if ( v85 >= (unsigned int)v84 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
      v86 = (UserFriendRequestHistoryEntity_o *)v70->fields._items->m_Items[v85];
      if ( !v86 )
        goto LABEL_101;
      v87 = *(&UserFriendRequestHistoryEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v86->klass->_2.bitflags2 + 1) < (unsigned int)v87 )
        goto LABEL_101;
      if ( (UserFriendRequestHistoryEntity_c *)v86->klass->_2.typeHierarchy[v87 - 1] != UserFriendRequestHistoryEntity_TypeInfo )
        goto LABEL_101;
      sort = UserFriendRequestHistoryEntity__getOtherUserId(v86, 0LL);
      if ( !v68 )
        goto LABEL_101;
      sort = (int64_t)DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
                        v68,
                        sort,
                        (const MethodInfo_24E42F8 *)Method_DataMasterBase_OtherUserGameMaster__OtherUserGameEntity__long__GetEntity__);
      v88 = this->fields.itemList;
      if ( !v88 )
        goto LABEL_101;
      v89 = v88->fields._size;
      v90 = this->fields.classBoardMaxDictionary;
      v91 = (OtherUserGameEntity_o *)sort;
      v92 = (FriendOperationItemListViewItem_o *)sub_B2C42C(FriendOperationItemListViewItem_TypeInfo);
      FriendOperationItemListViewItem___ctor_30396872(v92, 7, v89, v91, v86, 0, v90, v93);
      sort = (int64_t)this->fields.itemList;
      if ( !sort )
        goto LABEL_101;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sort,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v92,
        (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
      v84 = v70->fields._size;
      if ( (__int64)++v85 >= v84 )
        goto LABEL_67;
    }
  }
  v46 = (System_String_o *)StringLiteral_6464/*"FRIEND_EMPTY_OFFERED_MESSAGE"*/;
  if ( !kind )
  {
    sort = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !sort )
      goto LABEL_101;
    sort = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                      (DataManager_o *)sort,
                      (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_OtherUserGameMaster___);
    if ( !sort )
      goto LABEL_101;
    FriendCodeList = OtherUserGameMaster__GetFriendCodeList((OtherUserGameMaster_o *)sort, this->fields.friendCode, 0LL);
    ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
    if ( !FriendCodeList )
      goto LABEL_101;
    v48 = *(_QWORD *)&FriendCodeList->max_length;
    if ( (int)v48 >= 1 )
    {
      v115 = v46;
      v49 = 0LL;
      while ( 1 )
      {
        v50 = this->fields.itemList;
        if ( !v50 )
          goto LABEL_101;
        if ( v49 >= (unsigned int)v48 )
          goto LABEL_102;
        v51 = v50->fields._size;
        v52 = FriendCodeList->m_Items[v49];
        v53 = this->fields.classBoardMaxDictionary;
        v54 = (FriendOperationItemListViewItem_o *)sub_B2C42C(FriendOperationItemListViewItem_TypeInfo);
        FriendOperationItemListViewItem___ctor_30396204(v54, 0, v51, v52, 0, v53, v55);
        sort = (int64_t)this->fields.itemList;
        if ( !sort )
          goto LABEL_101;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sort,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v54,
          (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
        LODWORD(v48) = FriendCodeList->max_length;
        if ( (__int64)++v49 >= (int)v48 )
          goto LABEL_87;
      }
    }
    goto LABEL_88;
  }
  sort = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !sort )
    goto LABEL_101;
  v115 = v46;
  sort = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                    (DataManager_o *)sort,
                    (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_TblFriendMaster___);
  if ( !sort )
    goto LABEL_101;
  v94 = (TblFriendMaster_o *)sort;
  List = TblFriendMaster__GetList((TblFriendMaster_o *)sort, kind, 0LL);
  v116 = TblFriendMaster__GetList(v94, 9, 0LL);
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
  if ( kind == 3 )
  {
    if ( !v116 )
      goto LABEL_101;
    v96 = *(_QWORD *)&v116->max_length;
    if ( (int)v96 >= 1 )
    {
      v97 = 0LL;
      do
      {
        v98 = this->fields.itemList;
        if ( !v98 )
          goto LABEL_101;
        if ( v97 >= (unsigned int)v96 )
          goto LABEL_102;
        v99 = v98->fields._size;
        v100 = v116->m_Items[v97];
        v101 = this->fields.classBoardMaxDictionary;
        v102 = (FriendOperationItemListViewItem_o *)sub_B2C42C(FriendOperationItemListViewItem_TypeInfo);
        FriendOperationItemListViewItem___ctor_30396204(v102, 9, v99, v100, classPos, v101, v103);
        sort = (int64_t)this->fields.itemList;
        if ( !sort )
          goto LABEL_101;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sort,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v102,
          (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
        ++v97;
        LODWORD(v96) = v116->max_length;
      }
      while ( (__int64)v97 < (int)v96 );
    }
  }
  if ( !List )
    goto LABEL_101;
  v104 = *(_QWORD *)&List->max_length;
  if ( (int)v104 >= 1 )
  {
    v105 = 0LL;
    do
    {
      v106 = this->fields.itemList;
      if ( !v106 )
        goto LABEL_101;
      if ( v105 >= (unsigned int)v104 )
        goto LABEL_102;
      v107 = v106->fields._size;
      v108 = List->m_Items[v105];
      v109 = this->fields.classBoardMaxDictionary;
      v110 = (FriendOperationItemListViewItem_o *)sub_B2C42C(FriendOperationItemListViewItem_TypeInfo);
      FriendOperationItemListViewItem___ctor_30396204(v110, kind, v107, v108, classPos, v109, v111);
      sort = (int64_t)this->fields.itemList;
      if ( !sort )
        goto LABEL_101;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sort,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v110,
        (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
      v104 = *(_QWORD *)&List->max_length;
    }
    while ( (__int64)++v105 < (int)v104 );
  }
  if ( v104 )
  {
LABEL_87:
    v46 = v115;
    goto LABEL_88;
  }
  v46 = v115;
  if ( !v116 )
    goto LABEL_101;
  if ( !*(_QWORD *)&v116->max_length )
  {
    if ( kind != 2 )
    {
      if ( kind == 3 )
        v46 = (System_String_o *)StringLiteral_6463/*"FRIEND_EMPTY_FRIEND_MESSAGE"*/;
      goto LABEL_88;
    }
    v67 = &StringLiteral_6464/*"FRIEND_EMPTY_OFFERED_MESSAGE"*/;
LABEL_68:
    v46 = (System_String_o *)*v67;
  }
LABEL_88:
  emptyMessageLabel = this->fields.emptyMessageLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  sort = (int64_t)LocalizationManager__Get(v46, 0LL);
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
  sub_B2C2F8(
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
  ListViewSort_o *v23; // x20
  __int64 v24; // x1
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  Il2CppClass **v31; // x0
  struct ListViewSort_array *v32; // x8
  Il2CppClass **v33; // x8
  ListViewSort_o *v34; // x20
  struct ListViewSort_FilterKind_array *v35; // x8
  unsigned __int64 i; // x21
  struct ListViewSort_FilterKind_array *classFilter; // x8
  unsigned int v38; // w9
  bool v39; // cf
  __int64 v40; // x0
  __int64 v41; // x0
  unsigned int v42; // [xsp+Ch] [xbp-54h] BYREF

  if ( (byte_418A8A6 & 1) == 0 )
  {
    sub_B2C35C(&FriendOperationItemListViewManager_TypeInfo, method);
    sub_B2C35C(&ListViewSort___TypeInfo, v3);
    sub_B2C35C(&ListViewSort_TypeInfo, v4);
    sub_B2C35C(&StringLiteral_6806/*"FriendOperation"*/, v5);
    byte_418A8A6 = 1;
  }
  v42 = 0;
  v6 = FriendOperationItemListViewManager_TypeInfo;
  if ( (BYTE3(FriendOperationItemListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !FriendOperationItemListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FriendOperationItemListViewManager_TypeInfo);
    v6 = FriendOperationItemListViewManager_TypeInfo;
  }
  if ( !v6->static_fields->isInitSystem )
  {
    v7 = sub_B2C374(ListViewSort___TypeInfo, 10LL);
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
    sub_B2C2F8((BattleServantConfConponent_o *)&static_fields->sortStatusList, v15, v8, v9, v10, v11, v12, v13);
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
      v42 = v18 + 1;
      v21 = System_Int32__ToString((int32_t)&v42, 0LL);
      v22 = System_String__Concat_44305532((System_String_o *)StringLiteral_6806/*"FriendOperation"*/, v21, 0LL);
      v23 = (ListViewSort_o *)sub_B2C42C(ListViewSort_TypeInfo);
      ListViewSort___ctor_33914184(v23, v22, 3, 0, 0LL);
      if ( !sortStatusList )
        goto LABEL_46;
      if ( v23 )
      {
        v17 = (FriendOperationItemListViewManager_c *)sub_B2C41C(v23, sortStatusList->obj.klass->_1.element_class);
        if ( !v17 )
        {
          v41 = sub_B2C454(0LL);
          sub_B2C400(v41, 0LL);
        }
      }
      if ( v18 >= sortStatusList->max_length )
        goto LABEL_47;
      v31 = &sortStatusList->obj.klass + (int)v18;
      v31[4] = (Il2CppClass *)v23;
      sub_B2C2F8((BattleServantConfConponent_o *)(v31 + 4), (System_Int32_array **)v23, v25, v26, v27, v28, v29, v30);
      v32 = FriendOperationItemListViewManager_TypeInfo->static_fields->sortStatusList;
      if ( !v32 )
        goto LABEL_46;
      if ( v18 >= v32->max_length )
      {
LABEL_47:
        v40 = sub_B2C460(v17);
        sub_B2C400(v40, 0LL);
      }
      v33 = &v32->obj.klass + (int)v18;
      v34 = (ListViewSort_o *)v33[4];
      if ( !v34 )
        goto LABEL_46;
      ListViewSort__ClassFilterOFF((ListViewSort_o *)v33[4], 0LL);
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
          ListViewSort__SetFilter(v34, classFilter->m_Items[i + 1], 1, 0LL);
        }
LABEL_46:
        sub_B2C434(v17, v24);
      }
      v17 = FriendOperationItemListViewManager_TypeInfo;
      if ( (BYTE3(FriendOperationItemListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !FriendOperationItemListViewManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(FriendOperationItemListViewManager_TypeInfo);
        v17 = FriendOperationItemListViewManager_TypeInfo;
      }
      v35 = v17->static_fields->classFilter;
      if ( !v35 )
        goto LABEL_46;
      if ( v35->max_length <= classPos )
        goto LABEL_47;
      ListViewSort__SetFilter(v34, v35->m_Items[classPos + 1], 1, 0LL);
      v17 = FriendOperationItemListViewManager_TypeInfo;
LABEL_39:
      v38 = WORD1(v17->vtable._0_Equals.methodPtr);
      v39 = v18++ >= 9;
      v19 = (v38 >> 10) & 1;
    }
    while ( !v39 );
    if ( (v38 & 0x400) != 0 && !v17->_2.cctor_finished )
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
  __int64 v2; // x1
  __int64 v3; // x20
  ListViewSort_o *v4; // x0
  _DWORD *gc_desc; // x8
  __int64 v6; // x0

  if ( (byte_418A8A7 & 1) == 0 )
  {
    sub_B2C35C(&FriendOperationItemListViewManager_TypeInfo, v1);
    byte_418A8A7 = 1;
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
      v6 = sub_B2C460(v4);
      sub_B2C400(v6, 0LL);
    }
    v4 = *(ListViewSort_o **)&gc_desc[2 * v3 + 8];
    if ( !v4 )
LABEL_15:
      sub_B2C434(v4, v2);
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
    sub_B2C434(0LL, v3);
  ListViewSort__Save(sort, 0LL);
}


void __fastcall FriendOperationItemListViewManager__EndCloseClassBoardEffectListDialog(
        FriendOperationItemListViewManager_o *this,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  __int64 v4; // x1

  if ( (byte_418A8BC & 1) == 0 )
  {
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    byte_418A8BC = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B2C434(0LL, v4);
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

  if ( (byte_418A8AD & 1) == 0 )
  {
    sub_B2C35C(&FriendOperationItemListViewItem_TypeInfo, *(_QWORD *)&index);
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v5);
    byte_418A8AD = 1;
  }
  itemList = this->fields.itemList;
  if ( !itemList )
    return 0LL;
  if ( itemList->fields._size <= (unsigned int)index )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
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

  if ( (byte_418A8A8 & 1) == 0 )
  {
    sub_B2C35C(&FriendOperationItemListViewManager_TypeInfo, v1);
    byte_418A8A8 = 1;
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
        v5 = sub_B2C460(v2);
        sub_B2C400(v5, 0LL);
      }
      v2 = (FriendOperationItemListViewManager_c *)sortStatusList->m_Items[i];
      if ( !v2 )
LABEL_17:
        sub_B2C434(v2, v1);
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
  sub_B2C2F8(
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
      sub_B2C434(v10, v11);
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
  sub_B2C2F8(
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
      sub_B2C434(v10, v11);
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
  sub_B2C2F8(
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
      sub_B2C434(v10, v11);
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
  sub_B2C2F8(
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
      sub_B2C434(v10, v11);
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
  sub_B2C2F8(
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
      sub_B2C434(v10, v11);
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
  sub_B2C2F8(
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
      sub_B2C434(v10, v11);
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

  if ( (byte_418A8B7 & 1) == 0 )
  {
    sub_B2C35C(&SoundManager_TypeInfo, method);
    byte_418A8B7 = 1;
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
      sub_B2C434(v3, v4);
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
  OtherUserSortDialog_CallbackFunc_o *v10; // x22
  __int64 v11; // x0
  __int64 v12; // x1
  int32_t v13; // w1
  WebViewManager_o *Instance; // x0

  if ( (byte_418A8B5 & 1) == 0 )
  {
    sub_B2C35C(&OtherUserSortDialog_CallbackFunc_TypeInfo, method);
    sub_B2C35C(&Method_FriendOperationItemListViewManager_CloseSortDialog__, v3);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    sub_B2C35C(&SoundManager_TypeInfo, v5);
    byte_418A8B5 = 1;
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
      Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      sort = this->fields.sort;
      v9 = (CommonUI_o *)Instance;
      v10 = (OtherUserSortDialog_CallbackFunc_o *)sub_B2C42C(OtherUserSortDialog_CallbackFunc_TypeInfo);
      OtherUserSortDialog_CallbackFunc___ctor(
        v10,
        (Il2CppObject *)this,
        Method_FriendOperationItemListViewManager_CloseSortDialog__,
        0LL);
      if ( v9 )
      {
        v13 = 2;
        goto LABEL_14;
      }
LABEL_15:
      sub_B2C434(v11, v12);
    }
    if ( menuKind == 3 )
    {
      v7 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      sort = this->fields.sort;
      v9 = (CommonUI_o *)v7;
      v10 = (OtherUserSortDialog_CallbackFunc_o *)sub_B2C42C(OtherUserSortDialog_CallbackFunc_TypeInfo);
      OtherUserSortDialog_CallbackFunc___ctor(
        v10,
        (Il2CppObject *)this,
        Method_FriendOperationItemListViewManager_CloseSortDialog__,
        0LL);
      if ( v9 )
      {
        v13 = 1;
LABEL_14:
        CommonUI__OpenOtherUserSortDialog(v9, v13, sort, v10, 0LL);
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
  sub_B2C2F8(
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
      sub_B2C434(v10, v11);
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

  if ( (byte_418A8B4 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_12634/*"ScrollViewEnabled"*/, obj);
    byte_418A8B4 = 1;
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
      (System_String_o *)StringLiteral_12634/*"ScrollViewEnabled"*/,
      0.1,
      0LL);
    callbackFunc = this->fields.callbackFunc;
    this->fields.callbackFunc = 0LL;
    sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.callbackFunc, 0LL, v9, v10, v11, v12, v13, v14);
    if ( callbackFunc )
    {
      if ( obj )
      {
        Index = ListViewObject__get_Index(obj, 0LL);
        FriendOperationItemListViewManager_CallbackFunc__Invoke(callbackFunc, kind, Index, 0LL);
        return;
      }
LABEL_10:
      sub_B2C434(scrollView, obj);
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
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  System_Action_o *callbackFunc2; // x20

  if ( (byte_418A8B3 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, method);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v3);
    byte_418A8B3 = 1;
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
          sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.callbackFunc2, 0LL, v11, v12, v13, v14, v15, v16);
          if ( callbackFunc2 )
            System_Action__Invoke(callbackFunc2, 0LL);
          return;
        }
      }
LABEL_19:
      sub_B2C434(emptyMessageBase, v8);
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
  struct OtherUserGameEntity_o *otherUserGameEntity; // x8
  struct ClassBoardInfo_array *userClassBoardInfo; // x8
  int max_length; // w9
  unsigned int v29; // w10
  __int64 v30; // x21
  System_String_array **v31; // x2
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7
  _QWORD **v37; // x23
  __int64 v38; // x22
  __int16 v39; // w8
  __int64 v40; // x22
  __int64 v41; // x22
  __int64 v42; // x22
  System_Int32_array ***v43; // x8
  System_Int32_array **v44; // x1
  CommonUI_o *Instance; // x22
  System_Action_o *v46; // x23
  __int64 v47; // x0

  v4 = this;
  if ( (byte_418A8BB & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, obj);
    sub_B2C35C(&Method_System_Array_Empty_int___, v5);
    sub_B2C35C(&ClassBoardInfo_TypeInfo, v6);
    sub_B2C35C(&Method_DataManager_GetMaster_ClassBoardClassMaster___, v7);
    sub_B2C35C(&Method_DataManager_GetMaster_ServantMaster___, v8);
    sub_B2C35C(&DataManager_TypeInfo, v9);
    sub_B2C35C(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v10);
    sub_B2C35C(&FriendOperationItemListViewItem_TypeInfo, v11);
    sub_B2C35C(&Method_FriendOperationItemListViewManager_EndCloseClassBoardEffectListDialog__, v12);
    sub_B2C35C(&Method_FriendOperationItemListViewManager_OpenSupportClassBoard__, v13);
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v14);
    this = (FriendOperationItemListViewManager_o *)sub_B2C35C(
                                                     &Method_SingletonMonoBehaviour_CommonUI__get_Instance__,
                                                     v15);
    byte_418A8BB = 1;
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
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
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
          v20 = (_QWORD *)sub_B2C364(Method_FriendOperationItemListViewManager_OpenSupportClassBoard__);
        v21 = (System_Reflection_MethodBase_o *)sub_B2C340(v20, v20[3]);
        OverwriteAssetSoundName__PlaySystemSe(v21, 0, 0LL);
        if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !DataManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        }
        Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_ServantMaster___);
        this = (FriendOperationItemListViewManager_o *)FriendOperationItemListViewItem__get_SvtId(v18, v23);
        if ( Master_WarQuestSelectionMaster )
        {
          this = (FriendOperationItemListViewManager_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                                           Master_WarQuestSelectionMaster,
                                                           (int32_t)this,
                                                           (const MethodInfo_24E40D0 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
          if ( this )
          {
            scrollBar = (int32_t)this->fields.scrollBar;
            this = (FriendOperationItemListViewManager_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_ClassBoardClassMaster___);
            if ( this )
            {
              ClassBoardBaseId = ClassBoardClassMaster__GetClassBoardBaseId(
                                   (ClassBoardClassMaster_o *)this,
                                   scrollBar,
                                   0LL);
              this = (FriendOperationItemListViewManager_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_ClassBoardClassMaster___);
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
                  v30 = sub_B2C42C(ClassBoardInfo_TypeInfo);
                  ClassBoardInfo___ctor((ClassBoardInfo_o *)v30, 0LL);
                  if ( v30 )
                  {
                    *(_DWORD *)(v30 + 16) = ClassBoardBaseId;
                    v37 = (_QWORD **)Method_System_Array_Empty_int___;
                    v38 = **((_QWORD **)Method_System_Array_Empty_int___ + 6);
                    v39 = *(_WORD *)(v38 + 306);
                    if ( (v39 & 1) == 0 )
                    {
                      sub_AC505C(**((_QWORD **)Method_System_Array_Empty_int___ + 6));
                      v39 = *(_WORD *)(v38 + 306);
                    }
                    if ( (v39 & 0x400) != 0 )
                    {
                      v40 = *v37[6];
                      if ( (*(_BYTE *)(v40 + 306) & 1) == 0 )
                        sub_AC505C(*v37[6]);
                      if ( !*(_DWORD *)(v40 + 224) )
                      {
                        v41 = *v37[6];
                        if ( (*(_BYTE *)(v41 + 306) & 1) == 0 )
                          sub_AC505C(*v37[6]);
                        j_il2cpp_runtime_class_init_0(v41);
                      }
                    }
                    v42 = *v37[6];
                    if ( (*(_BYTE *)(v42 + 306) & 1) == 0 )
                      sub_AC505C(*v37[6]);
                    v43 = *(System_Int32_array ****)(v42 + 184);
                    v44 = *v43;
                    *(_QWORD *)(v30 + 24) = *v43;
                    sub_B2C2F8((BattleServantConfConponent_o *)(v30 + 24), v44, v31, v32, v33, v34, v35, v36);
LABEL_43:
                    Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                    v46 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
                    System_Action___ctor(
                      v46,
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
                        v46,
                        1,
                        (ClassBoardInfo_o *)v30,
                        0LL);
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
                    {
                      v47 = sub_B2C460(this);
                      sub_B2C400(v47, 0LL);
                    }
                    v30 = (__int64)userClassBoardInfo->m_Items[v29];
                    if ( !v30 )
                      break;
                    if ( *(_DWORD *)(v30 + 16) == ClassBoardBaseId )
                      goto LABEL_43;
                    if ( (int)++v29 >= max_length )
                      goto LABEL_30;
                  }
                }
              }
            }
          }
        }
      }
LABEL_45:
      sub_B2C434(this, obj);
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
  __int64 v9; // x1
  System_Collections_Generic_List_FriendOperationItemListViewObject__o *v10; // x20
  signed __int64 size; // x8
  unsigned __int64 v12; // x24
  int v13; // w23
  FriendOperationItemListViewObject_o *v14; // x21
  System_Action_o *v15; // x22
  const MethodInfo *v16; // x3
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  if ( (byte_418A8B2 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, method);
    sub_B2C35C(&Method_FriendOperationItemListViewManager_OnMoveEnd__, v3);
    sub_B2C35C(&Method_System_Collections_Generic_List_FriendOperationItemListViewObject__get_Count__, v4);
    sub_B2C35C(&Method_System_Collections_Generic_List_FriendOperationItemListViewObject__get_Item__, v5);
    sub_B2C35C(&StringLiteral_10036/*"OnMoveEnd"*/, v6);
    byte_418A8B2 = 1;
  }
  ListViewManager__ClippingItems((ListViewManager_o *)this, 1, 0, 0LL);
  ListViewManager__DragMaskStart((ListViewManager_o *)this, 0LL);
  ObjectList = FriendOperationItemListViewManager__get_ObjectList(this, v7);
  if ( !ObjectList )
LABEL_15:
    sub_B2C434(ObjectList, v9);
  v10 = ObjectList;
  this->fields.callbackCount = ObjectList->fields._size;
  LODWORD(size) = ObjectList->fields._size;
  if ( (int)size < 1 )
    goto LABEL_14;
  v12 = 0LL;
  v13 = 0;
  do
  {
    if ( v12 >= (unsigned int)size )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
    v14 = v10->fields._items->m_Items[v12];
    if ( ListViewManager__ClippingItem((ListViewManager_o *)this, (ListViewObject_o *)v14, 0LL) )
    {
      v15 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
      System_Action___ctor(v15, (Il2CppObject *)this, Method_FriendOperationItemListViewManager_OnMoveEnd__, 0LL);
      if ( !v14 )
        goto LABEL_15;
      ++v13;
      zero = UnityEngine_Vector3__get_zero(0LL);
      FriendOperationItemListViewObject__Init(v14, 4, v15, 0.1, *(UnityEngine_Vector3_o *)&zero.fields.y, v16);
    }
    else
    {
      --this->fields.callbackCount;
    }
    size = v10->fields._size;
    ++v12;
  }
  while ( (__int64)v12 < size );
  if ( !v13 )
  {
LABEL_14:
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10036/*"OnMoveEnd"*/,
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
  __int64 v15; // x1
  int32_t size; // w8
  Il2CppObject *current; // x21
  System_Action_o *v18; // x22
  __int64 v19; // x0
  __int64 v20; // x1
  const MethodInfo *v21; // x3
  System_Collections_Generic_List_Enumerator_T__o v22; // [xsp+8h] [xbp-58h] BYREF
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  if ( (byte_418A8B0 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, *(_QWORD *)&mode);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_FriendOperationItemListViewObject__Dispose__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_FriendOperationItemListViewObject__MoveNext__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_FriendOperationItemListViewObject__get_Current__, v9);
    sub_B2C35C(&Method_FriendOperationItemListViewManager_OnMoveEnd__, v10);
    sub_B2C35C(&Method_System_Collections_Generic_List_FriendOperationItemListViewObject__GetEnumerator__, v11);
    sub_B2C35C(&Method_System_Collections_Generic_List_FriendOperationItemListViewObject__get_Count__, v12);
    sub_B2C35C(&StringLiteral_10036/*"OnMoveEnd"*/, v13);
    byte_418A8B0 = 1;
  }
  memset(&v22, 0, sizeof(v22));
  ObjectList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)FriendOperationItemListViewManager__get_ObjectList(
                                                                                                this,
                                                                                                *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_B2C434(0LL, v15);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10036/*"OnMoveEnd"*/,
      delay,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v22,
      ObjectList,
      (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_FriendOperationItemListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v22,
              (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_FriendOperationItemListViewObject__MoveNext__) )
    {
      current = v22.fields.current;
      v18 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
      System_Action___ctor(v18, (Il2CppObject *)this, Method_FriendOperationItemListViewManager_OnMoveEnd__, 0LL);
      if ( !current )
        sub_B2C434(v19, v20);
      zero = UnityEngine_Vector3__get_zero(0LL);
      FriendOperationItemListViewObject__Init(
        (FriendOperationItemListViewObject_o *)current,
        mode,
        v18,
        delay,
        *(UnityEngine_Vector3_o *)&zero.fields.y,
        v21);
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v22,
      (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_FriendOperationItemListViewObject__Dispose__);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FriendOperationItemListViewManager__RequestListObject_30421024(
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
  __int64 v13; // x1
  int32_t size; // w8
  Il2CppObject *current; // x21
  System_Action_o *v16; // x22
  __int64 v17; // x0
  __int64 v18; // x1
  const MethodInfo *v19; // x3
  System_Collections_Generic_List_Enumerator_T__o v20; // [xsp+8h] [xbp-58h] BYREF
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  if ( (byte_418A8B1 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, *(_QWORD *)&mode);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_FriendOperationItemListViewObject__Dispose__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_FriendOperationItemListViewObject__MoveNext__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_FriendOperationItemListViewObject__get_Current__, v7);
    sub_B2C35C(&Method_FriendOperationItemListViewManager_OnMoveEnd__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_FriendOperationItemListViewObject__GetEnumerator__, v9);
    sub_B2C35C(&Method_System_Collections_Generic_List_FriendOperationItemListViewObject__get_Count__, v10);
    sub_B2C35C(&StringLiteral_10036/*"OnMoveEnd"*/, v11);
    byte_418A8B1 = 1;
  }
  memset(&v20, 0, sizeof(v20));
  ObjectList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)FriendOperationItemListViewManager__get_ObjectList(
                                                                                                this,
                                                                                                *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_B2C434(0LL, v13);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10036/*"OnMoveEnd"*/,
      0.0,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v20,
      ObjectList,
      (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_FriendOperationItemListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v20,
              (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_FriendOperationItemListViewObject__MoveNext__) )
    {
      current = v20.fields.current;
      v16 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
      System_Action___ctor(v16, (Il2CppObject *)this, Method_FriendOperationItemListViewManager_OnMoveEnd__, 0LL);
      if ( !current )
        sub_B2C434(v17, v18);
      zero = UnityEngine_Vector3__get_zero(0LL);
      FriendOperationItemListViewObject__Init(
        (FriendOperationItemListViewObject_o *)current,
        mode,
        v16,
        0.0,
        *(UnityEngine_Vector3_o *)&zero.fields.y,
        v19);
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v20,
      (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_FriendOperationItemListViewObject__Dispose__);
  }
}


void __fastcall FriendOperationItemListViewManager__ScrollViewEnabled(
        FriendOperationItemListViewManager_o *this,
        const MethodInfo *method)
{
  UnityEngine_Behaviour_o *scrollView; // x0

  scrollView = (UnityEngine_Behaviour_o *)this->fields.scrollView;
  if ( !scrollView )
    sub_B2C434(0LL, method);
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
  __int64 v14; // x1
  struct System_Collections_Generic_List_ListViewItem__o *itemSortList; // x0
  struct ListViewSort_o *sort; // x8
  __int64 v17; // x1
  int v18; // w20
  const MethodInfo *v19; // x2
  struct System_Collections_Generic_List_ListViewItem__o *v20; // x8
  ListViewItem_o *v21; // x8
  struct System_Collections_Generic_List_ListViewItem__o *v22; // x20
  int32_t size; // w8
  ListViewItem_o *v24; // x8
  struct System_Collections_Generic_List_ListViewItem__o *v25; // x8
  int v26; // w9
  ListViewItem_o *v27; // x8
  System_Collections_Generic_List_Enumerator_T__o v28; // [xsp+8h] [xbp-78h] BYREF
  int v29[2]; // [xsp+20h] [xbp-60h]
  int v30; // [xsp+28h] [xbp-58h]
  System_Collections_Generic_List_Enumerator_T__o i; // [xsp+30h] [xbp-50h] BYREF

  if ( (byte_418A8B9 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__, *(_QWORD *)&classPos);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v6);
    sub_B2C35C(&FriendOperationItemListViewItem_TypeInfo, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v9);
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v10);
    byte_418A8B9 = 1;
  }
  memset(&i, 0, sizeof(i));
  v30 = 0;
  itemList = this->fields.itemList;
  if ( itemList )
  {
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v28,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)itemList,
      (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    i = v28;
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &i,
              (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__) )
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
    v29[0] = 71;
    v30 = 1;
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &i,
      (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    v30 = 0;
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
          &v28,
          (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)itemSortList,
          (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
        for ( i = v28;
              System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                &i,
                (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
              ((void (*)(void))i.fields.current->klass->vtable[4].method)() )
        {
          if ( !i.fields.current )
            sub_B2C434(0LL, v17);
        }
        v29[0] = 190;
        v18 = ++v30;
        System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
          &i,
          (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
        if ( v18 && v29[v18 - 1] == 190 )
          v30 = v18 - 1;
        v20 = this->fields.itemSortList;
        if ( v20 )
        {
          if ( v20->fields._size < 1 )
            goto LABEL_34;
          v21 = v20->fields._items->m_Items[0];
          if ( !v21 )
            goto LABEL_36;
          v21->fields.isTermination = 1;
          v22 = this->fields.itemSortList;
          if ( !v22 )
            goto LABEL_36;
          size = v22->fields._size;
          if ( !size )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
          v24 = v22->fields._items->m_Items[size - 1];
          if ( !v24 )
            goto LABEL_36;
          v24->fields.isTermination = 1;
          v25 = this->fields.itemSortList;
          if ( !v25 )
            goto LABEL_36;
          v26 = v25->fields._size;
          if ( v26 < 3 )
          {
LABEL_34:
            FriendOperationItemListViewManager__SetMode_30419920(this, 5, v19);
            return;
          }
          v27 = v25->fields._items->m_Items[v26 - 1];
          if ( v27 )
          {
            v27->fields.isTerminationSpace = 1;
            goto LABEL_34;
          }
        }
      }
LABEL_36:
      sub_B2C434(itemSortList, v14);
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
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.callbackFunc,
    (System_Int32_array **)callback,
    (System_String_array **)callback,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  FriendOperationItemListViewManager__SetMode_30419920(this, mode, v10);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FriendOperationItemListViewManager__SetMode_30419920(
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
  void *v13; // x20
  int v14; // w8
  __int64 v15; // x23
  FriendOperationItemListViewObject_o *v16; // x22
  System_Action_o *v17; // x0
  const MethodInfo *v18; // x1
  const MethodInfo *v19; // x2
  int v20; // s0
  System_String_o *v21; // x1
  const MethodInfo *v22; // x1
  int32_t v23; // w8
  void *v24; // x20
  int v25; // w8
  __int64 v26; // x23
  FriendOperationItemListViewObject_o *v27; // x21
  System_Action_o *v28; // x22
  const MethodInfo *v29; // x3
  const MethodInfo *v30; // x1
  int32_t v31; // w8
  void *v32; // x20
  int v33; // w8
  __int64 v34; // x23
  FriendOperationItemListViewObject_o *v35; // x21
  System_Action_o *v36; // x22
  const MethodInfo *v37; // x3
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED
  UnityEngine_Vector3_o v39; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  if ( (byte_418A8AF & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, *(_QWORD *)&mode);
    sub_B2C35C(&Method_FriendOperationItemListViewManager_OnMoveEnd__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_FriendOperationItemListViewObject__get_Count__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_FriendOperationItemListViewObject__get_Item__, v7);
    sub_B2C35C(&StringLiteral_10036/*"OnMoveEnd"*/, v8);
    sub_B2C35C(&StringLiteral_11429/*"RequestInto"*/, v9);
    byte_418A8AF = 1;
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
        v20 = 0;
        v21 = (System_String_o *)StringLiteral_11429/*"RequestInto"*/;
        goto LABEL_38;
      case 2:
        FriendOperationItemListViewManager__RequestListObject_30421024(this, 3, v19);
        return;
      case 3:
        ListViewManager__DragMaskStart((ListViewManager_o *)this, 0LL);
        emptyMessageBase = FriendOperationItemListViewManager__get_ClippingObjectList(this, v22);
        if ( !emptyMessageBase )
          goto LABEL_39;
        v23 = *((_DWORD *)emptyMessageBase + 6);
        v24 = emptyMessageBase;
        if ( v23 < 1 )
          goto LABEL_37;
        this->fields.callbackCount = v23;
        v25 = *((_DWORD *)emptyMessageBase + 6);
        if ( v25 < 1 )
          return;
        v26 = 0LL;
        while ( 1 )
        {
          if ( v25 <= (unsigned int)v26 )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
          v27 = *(FriendOperationItemListViewObject_o **)(*((_QWORD *)v24 + 2) + 8 * v26 + 32);
          v28 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
          System_Action___ctor(v28, (Il2CppObject *)this, Method_FriendOperationItemListViewManager_OnMoveEnd__, 0LL);
          if ( !v27 )
            break;
          zero = UnityEngine_Vector3__get_zero(0LL);
          FriendOperationItemListViewObject__Init(v27, 5, v28, 0.1, *(UnityEngine_Vector3_o *)&zero.fields.y, v29);
          v25 = *((_DWORD *)v24 + 6);
          if ( (int)++v26 >= v25 )
            return;
        }
        goto LABEL_39;
      case 4:
        ListViewManager__DragMaskStart((ListViewManager_o *)this, 0LL);
        emptyMessageBase = FriendOperationItemListViewManager__get_ClippingObjectList(this, v30);
        if ( !emptyMessageBase )
          goto LABEL_39;
        v31 = *((_DWORD *)emptyMessageBase + 6);
        v32 = emptyMessageBase;
        if ( v31 < 1 )
          goto LABEL_37;
        this->fields.callbackCount = v31;
        v33 = *((_DWORD *)emptyMessageBase + 6);
        if ( v33 < 1 )
          return;
        v34 = 0LL;
        break;
      default:
        return;
    }
    while ( 1 )
    {
      if ( v33 <= (unsigned int)v34 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
      v35 = *(FriendOperationItemListViewObject_o **)(*((_QWORD *)v32 + 2) + 8 * v34 + 32);
      v36 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
      System_Action___ctor(v36, (Il2CppObject *)this, Method_FriendOperationItemListViewManager_OnMoveEnd__, 0LL);
      if ( !v35 )
        break;
      v39 = UnityEngine_Vector3__get_zero(0LL);
      FriendOperationItemListViewObject__Init(v35, 6, v36, 0.1, *(UnityEngine_Vector3_o *)&v39.fields.y, v37);
      v33 = *((_DWORD *)v32 + 6);
      if ( (int)++v34 >= v33 )
        return;
    }
LABEL_39:
    sub_B2C434(emptyMessageBase, v11);
  }
  emptyMessageBase = FriendOperationItemListViewManager__get_ObjectList(this, *(const MethodInfo **)&mode);
  if ( !emptyMessageBase )
    goto LABEL_39;
  v12 = *((_DWORD *)emptyMessageBase + 6);
  v13 = emptyMessageBase;
  if ( v12 < 1 )
  {
LABEL_37:
    this->fields.callbackCount = 1;
    v21 = (System_String_o *)StringLiteral_10036/*"OnMoveEnd"*/;
    v20 = 1045220557;
LABEL_38:
    UnityEngine_MonoBehaviour__Invoke((UnityEngine_MonoBehaviour_o *)this, v21, *(float *)&v20, 0LL);
  }
  else
  {
    this->fields.callbackCount = v12;
    v14 = *((_DWORD *)emptyMessageBase + 6);
    if ( v14 >= 1 )
    {
      v15 = 0LL;
      while ( 1 )
      {
        if ( v14 <= (unsigned int)v15 )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
        v16 = *(FriendOperationItemListViewObject_o **)(*((_QWORD *)v13 + 2) + 8 * v15 + 32);
        v17 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
        System_Action___ctor(v17, (Il2CppObject *)this, Method_FriendOperationItemListViewManager_OnMoveEnd__, 0LL);
        if ( !v16 )
          break;
        UnityEngine_Vector3__get_zero(0LL);
        if ( (byte_418A8C5 & 1) == 0 )
        {
          sub_B2C35C(&FriendOperationItemListViewItem_TypeInfo, v18);
          byte_418A8C5 = 1;
        }
        FriendOperationItemListViewObject__SetupDisp(v16, v18);
        v14 = *((_DWORD *)v13 + 6);
        if ( (int)++v15 >= v14 )
          return;
      }
      goto LABEL_39;
    }
  }
}


void __fastcall FriendOperationItemListViewManager__SetMode_30420888(
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
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.callbackFunc2,
    (System_Int32_array **)callback,
    (System_String_array **)callback,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  FriendOperationItemListViewManager__SetMode_30419920(this, mode, v10);
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
  if ( (byte_418A8AE & 1) == 0 )
  {
    this = (FriendOperationItemListViewManager_o *)sub_B2C35C(&FriendOperationItemListViewObject_TypeInfo, obj);
    byte_418A8AE = 1;
  }
  if ( !obj
    || (v6 = *(&FriendOperationItemListViewObject_TypeInfo->_2.bitflags2 + 1),
        *(&obj->klass->_2.bitflags2 + 1) < (unsigned int)v6)
    || (FriendOperationItemListViewObject_c *)obj->klass->_2.typeHierarchy[v6 - 1] != FriendOperationItemListViewObject_TypeInfo )
  {
    sub_B2C434(this, obj);
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
  __int64 v10; // x1
  ListViewSort_o *sort; // x0
  UILabel_o *v12; // x20
  UnityEngine_Object_o *sortOrderSprite; // x20
  struct ListViewSort_o *v14; // x8
  int32_t sortKind; // w9
  System_String_o **v16; // x8
  struct ListViewSort_o *v17; // x8
  _BOOL4 isAscendingOrder; // w8
  System_String_o **v19; // x9
  System_String_o **v20; // x10
  System_String_o **v21; // x8
  System_String_o **v22; // x8
  struct ListViewSort_o *v23; // x8

  if ( (byte_418A8B8 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, method);
    sub_B2C35C(&StringLiteral_17021/*"btn_sort_up"*/, v3);
    sub_B2C35C(&StringLiteral_17104/*"btn_txt_up"*/, v4);
    sub_B2C35C(&StringLiteral_17061/*"btn_txt_new"*/, v5);
    sub_B2C35C(&StringLiteral_17051/*"btn_txt_down"*/, v6);
    sub_B2C35C(&StringLiteral_17068/*"btn_txt_old"*/, v7);
    sub_B2C35C(&StringLiteral_17018/*"btn_sort_down"*/, v8);
    byte_418A8B8 = 1;
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
    v12 = this->fields.sortKindLabel;
    sort = (ListViewSort_o *)ListViewSort__GetSortKindButtonText(sort, 0LL);
    if ( !v12 )
      goto LABEL_38;
    UILabel__set_text(v12, (System_String_o *)sort, 0LL);
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
    v14 = this->fields.sort;
    if ( !v14 )
      goto LABEL_38;
    sortKind = v14->fields.sortKind;
    if ( sortKind == 1 || sortKind == 11 || (unsigned int)(sortKind - 17) <= 1 )
    {
      sort = (ListViewSort_o *)this->fields.sortExplanationSprite;
      if ( !sort )
        goto LABEL_38;
      v16 = (System_String_o **)(v14->fields.isAscendingOrder ? &StringLiteral_17068/*"btn_txt_old"*/ : &StringLiteral_17061/*"btn_txt_new"*/);
      UISprite__set_spriteName((UISprite_o *)sort, *v16, 0LL);
      v17 = this->fields.sort;
      if ( !v17 )
        goto LABEL_38;
      sort = (ListViewSort_o *)this->fields.sortOrderSprite;
      if ( !sort )
        goto LABEL_38;
      isAscendingOrder = v17->fields.isAscendingOrder;
      v19 = (System_String_o **)&StringLiteral_17018/*"btn_sort_down"*/;
      v20 = (System_String_o **)&StringLiteral_17021/*"btn_sort_up"*/;
    }
    else
    {
      sort = (ListViewSort_o *)this->fields.sortExplanationSprite;
      if ( !sort )
        goto LABEL_38;
      v22 = (System_String_o **)(v14->fields.isAscendingOrder ? &StringLiteral_17104/*"btn_txt_up"*/ : &StringLiteral_17051/*"btn_txt_down"*/);
      UISprite__set_spriteName((UISprite_o *)sort, *v22, 0LL);
      v23 = this->fields.sort;
      if ( !v23 )
        goto LABEL_38;
      sort = (ListViewSort_o *)this->fields.sortOrderSprite;
      if ( !sort )
        goto LABEL_38;
      isAscendingOrder = v23->fields.isAscendingOrder;
      v19 = (System_String_o **)&StringLiteral_17021/*"btn_sort_up"*/;
      v20 = (System_String_o **)&StringLiteral_17018/*"btn_sort_down"*/;
    }
    if ( isAscendingOrder )
      v21 = v19;
    else
      v21 = v20;
    UISprite__set_spriteName((UISprite_o *)sort, *v21, 0LL);
    sort = (ListViewSort_o *)this->fields.sortExplanationSprite;
    if ( sort )
    {
      ((void (__fastcall *)(ListViewSort_o *, void *))sort->klass[2]._1.typeMetadataHandle)(
        sort,
        sort->klass[2]._1.interopData);
      return;
    }
LABEL_38:
    sub_B2C434(sort, v10);
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
    sub_B2C434(this, kind);
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
  BattleServantConfConponent_o *p_classBoardMaxDictionary; // x20
  System_Collections_Generic_Dictionary_int__int__o *v16; // x19
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *Master_WarQuestSelectionMaster; // x0
  __int64 v24; // x1
  __int64 v25; // x1
  __int64 v26; // x3
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v29; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v32; // x3
  System_Collections_Generic_IEnumerator_T__c *v33; // x8
  unsigned __int64 v34; // x10
  int32_t *v35; // x11
  __int64 v36; // x0
  __int64 v37; // x0
  __int64 v38; // x21
  __int64 v39; // x9
  ClassBoardSquareMaster_o *v40; // x0
  __int64 v41; // x1
  ClassBoardSquareEntity_array *OtherThanNoneEntity; // x0
  __int64 v43; // x1
  System_Collections_Generic_IEnumerator_T__c *v44; // x8
  unsigned __int64 v45; // x10
  int32_t *v46; // x11
  __int64 v47; // x0

  if ( (byte_418A8BA & 1) == 0 )
  {
    sub_B2C35C(&ClassBoardBaseEntity_TypeInfo, method);
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, v3);
    sub_B2C35C(&Method_DataManager_GetMaster_ClassBoardBaseMaster___, v4);
    sub_B2C35C(&Method_DataManager_GetMaster_ClassBoardSquareMaster___, v5);
    sub_B2C35C(&DataManager_TypeInfo, v6);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__int__Add__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__int__Clear__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__int___ctor__, v9);
    sub_B2C35C(&System_Collections_Generic_Dictionary_int__int__TypeInfo, v10);
    sub_B2C35C(&System_IDisposable_TypeInfo, v11);
    sub_B2C35C(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v12);
    sub_B2C35C(&System_Collections_IEnumerator_TypeInfo, v13);
    byte_418A8BA = 1;
  }
  classBoardMaxDictionary = this->fields.classBoardMaxDictionary;
  p_classBoardMaxDictionary = (BattleServantConfConponent_o *)&this->fields.classBoardMaxDictionary;
  if ( classBoardMaxDictionary )
  {
    System_Collections_Generic_Dictionary_int__int___Clear(
      classBoardMaxDictionary,
      (const MethodInfo_2E2470C *)Method_System_Collections_Generic_Dictionary_int__int__Clear__);
  }
  else
  {
    v16 = (System_Collections_Generic_Dictionary_int__int__o *)sub_B2C42C(System_Collections_Generic_Dictionary_int__int__TypeInfo);
    System_Collections_Generic_Dictionary_int__int____ctor(
      v16,
      (const MethodInfo_2E2399C *)Method_System_Collections_Generic_Dictionary_int__int___ctor__);
    p_classBoardMaxDictionary->klass = (BattleServantConfConponent_c *)v16;
    sub_B2C2F8(p_classBoardMaxDictionary, (System_Int32_array **)v16, v17, v18, v19, v20, v21, v22);
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_ClassBoardBaseMaster___);
  if ( !Master_WarQuestSelectionMaster
    || (Master_WarQuestSelectionMaster = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)Master_WarQuestSelectionMaster[1].klass) == 0LL )
  {
    sub_B2C434(Master_WarQuestSelectionMaster, v24);
  }
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 Master_WarQuestSelectionMaster,
                 (const MethodInfo_2A0E96C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B2C434(0LL, v25);
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v29 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v29;
        p_offset += 4;
        if ( v29 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_16;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_16:
      p_method = sub_AC5258(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL, v26);
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
      v36 = sub_AC5258(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL, v32);
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
        sub_B2C728(v37);
LABEL_44:
        sub_B2C434(v40, v41);
      }
    }
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    v40 = (ClassBoardSquareMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_ClassBoardSquareMaster___);
    if ( !v38 )
      goto LABEL_44;
    if ( !v40 )
      sub_B2C434(0LL, v41);
    OtherThanNoneEntity = ClassBoardSquareMaster__GetOtherThanNoneEntity(v40, *(_DWORD *)(v38 + 16), 0LL);
    if ( OtherThanNoneEntity )
    {
      if ( !p_classBoardMaxDictionary->klass )
        sub_B2C434(OtherThanNoneEntity, v43);
      System_Collections_Generic_Dictionary_int__int___Add(
        (System_Collections_Generic_Dictionary_int__int__o *)p_classBoardMaxDictionary->klass,
        *(_DWORD *)(v38 + 16),
        OtherThanNoneEntity->max_length,
        (const MethodInfo_2E24540 *)Method_System_Collections_Generic_Dictionary_int__int__Add__);
    }
  }
  v44 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v45 = 0LL;
    v46 = &v44->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v46 - 1) != System_IDisposable_TypeInfo )
    {
      ++v45;
      v46 += 4;
      if ( v45 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_40;
    }
    v47 = (__int64)&v44->vtable[*v46].method;
  }
  else
  {
LABEL_40:
    v47 = sub_AC5258(Enumerator, System_IDisposable_TypeInfo, 0LL, v32);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v47)(Enumerator, *(_QWORD *)(v47 + 8));
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

  if ( (byte_418A8A2 & 1) == 0 )
  {
    sub_B2C35C(&FriendOperationItemListViewManager_CallbackFunc_TypeInfo, value);
    byte_418A8A2 = 1;
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
    v8 = sub_B20D74(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_B2C728(v7);
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

  if ( (byte_418A8A4 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, value);
    byte_418A8A4 = 1;
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
    v8 = sub_B20D74(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_B2C728(v7);
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
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v11; // x19
  __int64 v12; // x1
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  Il2CppObject *current; // x21
  _BOOL8 v15; // x0
  __int64 v16; // x1
  FriendOperationItemListViewObject_o *Component_srcLineSprite; // x0
  const MethodInfo *v18; // x1
  EventMissionProgressRequest_Argument_ProgressData_o *v19; // x21
  ListViewItem_o *Item; // x0
  __int64 v21; // x1
  _BOOL8 v22; // x0
  __int64 v23; // x1
  System_Collections_Generic_List_Enumerator_T__o v25; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v26; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_418A8AA & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v3);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v4);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_FriendOperationItemListViewObject___, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_FriendOperationItemListViewObject__Add__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_FriendOperationItemListViewObject___ctor__, v8);
    sub_B2C35C(&System_Collections_Generic_List_FriendOperationItemListViewObject__TypeInfo, v9);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v10);
    byte_418A8AA = 1;
  }
  memset(&v26, 0, sizeof(v26));
  v11 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_FriendOperationItemListViewObject__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v11,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_FriendOperationItemListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_B2C434(0LL, v12);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v25,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)objectList,
    (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v26 = v25;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v26,
            (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v26.fields.current;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v15 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v15 )
    {
      if ( !current )
        sub_B2C434(v15, v16);
      Component_srcLineSprite = (FriendOperationItemListViewObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                         (UnityEngine_GameObject_o *)current,
                                                                         (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_FriendOperationItemListViewObject___);
      v19 = (EventMissionProgressRequest_Argument_ProgressData_o *)Component_srcLineSprite;
      if ( !Component_srcLineSprite )
        sub_B2C434(0LL, v18);
      Item = (ListViewItem_o *)FriendOperationItemListViewObject__GetItem(Component_srcLineSprite, v18);
      if ( !Item )
        sub_B2C434(0LL, v21);
      if ( Item->fields.isTermination )
      {
        v22 = ListViewManager__ClippingItem_24147020((ListViewManager_o *)this, Item, 0LL);
        if ( v22 )
        {
          if ( !v11 )
            sub_B2C434(v22, v23);
          goto LABEL_16;
        }
      }
      else
      {
        if ( !v11 )
          sub_B2C434(Item, v21);
LABEL_16:
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v11,
          v19,
          (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_FriendOperationItemListViewObject__Add__);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v26,
    (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_FriendOperationItemListViewObject__o *)v11;
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
  if ( (byte_418A8AB & 1) == 0 )
  {
    sub_B2C35C(&FriendOperationItemListViewItem_TypeInfo, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v3);
    this = (FriendOperationItemListViewManager_o *)sub_B2C35C(
                                                     &Method_System_Collections_Generic_List_ListViewItem__get_Item__,
                                                     v4);
    byte_418A8AB = 1;
  }
  itemList = v2->fields.itemList;
  if ( itemList )
  {
    for ( i = 0LL; (__int64)i < itemList->fields._size; ++i )
    {
      if ( i >= (unsigned int)itemList->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
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
        sub_B2C434(this, method);
    }
  }
  return 0;
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
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v11; // x19
  __int64 v12; // x1
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  Il2CppObject *current; // x20
  _BOOL8 v15; // x0
  __int64 v16; // x1
  EventMissionProgressRequest_Argument_ProgressData_o *Component_srcLineSprite; // x0
  System_Collections_Generic_List_Enumerator_T__o v19; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v20; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_418A8A9 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v3);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v4);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_FriendOperationItemListViewObject___, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_FriendOperationItemListViewObject__Add__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_FriendOperationItemListViewObject___ctor__, v8);
    sub_B2C35C(&System_Collections_Generic_List_FriendOperationItemListViewObject__TypeInfo, v9);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v10);
    byte_418A8A9 = 1;
  }
  memset(&v20, 0, sizeof(v20));
  v11 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_FriendOperationItemListViewObject__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v11,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_FriendOperationItemListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_B2C434(0LL, v12);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v19,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)objectList,
    (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v20 = v19;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v20,
            (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v20.fields.current;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v15 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v15 )
    {
      if ( !current )
        sub_B2C434(v15, v16);
      Component_srcLineSprite = (EventMissionProgressRequest_Argument_ProgressData_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                                         (UnityEngine_GameObject_o *)current,
                                                                                         (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_FriendOperationItemListViewObject___);
      if ( !v11 )
        sub_B2C434(Component_srcLineSprite, Component_srcLineSprite);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v11,
        Component_srcLineSprite,
        (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_FriendOperationItemListViewObject__Add__);
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v20,
    (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
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
  sub_B2C2F8(
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
      sub_B2C434(v10, v11);
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
  sub_B2C2F8(
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
      sub_B2C434(v10, v11);
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
  sub_B2C2F8(
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
      sub_B2C434(v10, v11);
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

  if ( (byte_418A8A3 & 1) == 0 )
  {
    sub_B2C35C(&FriendOperationItemListViewManager_CallbackFunc_TypeInfo, value);
    byte_418A8A3 = 1;
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
    v8 = sub_B20D74(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_B2C728(v7);
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

  if ( (byte_418A8A5 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, value);
    byte_418A8A5 = 1;
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
    v8 = sub_B20D74(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_B2C728(v7);
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
    sub_B2C434(scrollBar, method);
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
    sub_B2C434(scrollBar, b);
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
  sub_B2C2F8(p_method, object);
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
  if ( (byte_41841E1 & 1) == 0 )
  {
    sub_B2C35C(&int_TypeInfo, *(_QWORD *)&kind);
    sub_B2C35C(&FriendOperationItemListViewManager_ResultKind_TypeInfo, v9);
    byte_41841E1 = 1;
  }
  v11[2] = 0LL;
  v11[0] = j_il2cpp_value_box_0(FriendOperationItemListViewManager_ResultKind_TypeInfo, &v13);
  v11[1] = j_il2cpp_value_box_0(int_TypeInfo, &v12);
  return (System_IAsyncResult_o *)sub_B2C300(this, v11, callback, object);
}


void __fastcall FriendOperationItemListViewManager_CallbackFunc__EndInvoke(
        FriendOperationItemListViewManager_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B2C304(result, 0LL, method);
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
  __int64 v12; // x3
  __int64 v13; // x8
  unsigned int v14; // w23
  unsigned __int64 v15; // x10
  _DWORD *v16; // x11
  __int64 v17; // x0
  __int64 v18; // x0
  __int64 v19; // x0
  void (__fastcall **v20)(__int64 *, _QWORD, _QWORD, _QWORD); // x0
  FriendOperationItemListViewManager_CallbackFunc_o *v21; // x8
  __int64 *v22; // x22
  __int64 v23; // x23
  void (__fastcall *v24)(unsigned int *, _QWORD, __int64); // x24
  char v25; // w24
  char v26; // w0
  __int64 v27; // x3
  unsigned int v28; // w24
  __int64 v29; // x8
  __int64 v30; // x1
  __int64 v31; // x2
  unsigned __int64 v32; // x10
  _DWORD *v33; // x11
  unsigned int v34; // [xsp+Ch] [xbp-54h] BYREF
  FriendOperationItemListViewManager_CallbackFunc_o *v35; // [xsp+18h] [xbp-48h] BYREF

  v35 = this;
  v34 = kind;
  v4 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v4 )
  {
    v8 = &v35;
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
      v21 = v8[v9];
      v22 = *(__int64 **)&v21->fields.method;
      v23 = *(_QWORD *)&v21->fields.extra_arg;
      v24 = *(void (__fastcall **)(unsigned int *, _QWORD, __int64))&v21->fields.method_ptr;
      if ( *(__int16 *)(v23 + 72) == -1 )
        sub_B2C418(*(_QWORD *)&v21->fields.extra_arg, *(_QWORD *)&kind, *(_QWORD *)&result, method);
      if ( (sub_B2C38C(v23) & 1) == 0 )
        break;
      if ( *(_BYTE *)(v23 + 74) != 2 )
        goto LABEL_36;
      v24((unsigned int *)v34, (unsigned int)result, v23);
LABEL_38:
      if ( ++v9 == v7 )
        return;
    }
    if ( !v22 )
    {
      v24(&v34 - 4, (unsigned int)result, v23);
      goto LABEL_38;
    }
    if ( *(__int16 *)(v23 + 72) != -1 && (*(_BYTE *)(*v22 + 277) & 1) == 0 && this->fields.m_target )
    {
      v25 = sub_B2C384(v23);
      v26 = sub_B2C788(v23);
      if ( (v25 & 1) != 0 )
      {
        v28 = v34;
        if ( (v26 & 1) != 0 )
        {
          v29 = *v22;
          v30 = *(_QWORD *)(v23 + 24);
          v31 = *(unsigned __int16 *)(v23 + 72);
          if ( *(_WORD *)(*v22 + 298) )
          {
            v32 = 0LL;
            v33 = (_DWORD *)(*(_QWORD *)(v29 + 176) + 8LL);
            while ( *((_QWORD *)v33 - 1) != v30 )
            {
              ++v32;
              v33 += 4;
              if ( v32 >= *(unsigned __int16 *)(*v22 + 298) )
                goto LABEL_35;
            }
            v19 = v29 + 16LL * (*v33 + (int)v31) + 312;
          }
          else
          {
LABEL_35:
            v19 = sub_AC5258(v22, v30, v31, v27);
          }
          v18 = *(_QWORD *)(v19 + 8);
        }
        else
        {
          v18 = *(_QWORD *)(*v22 + 16LL * *(unsigned __int16 *)(v23 + 72) + 320);
        }
        v20 = (void (__fastcall **)(__int64 *, _QWORD, _QWORD, _QWORD))sub_B2C40C(v18, v23);
        (*v20)(v22, v28, (unsigned int)result, v20);
      }
      else
      {
        v10 = *(unsigned __int16 *)(v23 + 72);
        if ( (v26 & 1) != 0 )
        {
          class_0 = j_il2cpp_method_get_class_0(v23);
          v13 = *v22;
          v14 = v34;
          if ( *(_WORD *)(*v22 + 298) )
          {
            v15 = 0LL;
            v16 = (_DWORD *)(*(_QWORD *)(v13 + 176) + 8LL);
            while ( *((_QWORD *)v16 - 1) != class_0 )
            {
              ++v15;
              v16 += 4;
              if ( v15 >= *(unsigned __int16 *)(*v22 + 298) )
                goto LABEL_11;
            }
            v17 = v13 + 16LL * (int)(*v16 + v10) + 312;
          }
          else
          {
LABEL_11:
            v17 = sub_AC5258(v22, class_0, v10, v12);
          }
          (*(void (__fastcall **)(__int64 *, _QWORD, _QWORD, _QWORD))v17)(
            v22,
            v14,
            (unsigned int)result,
            *(_QWORD *)(v17 + 8));
        }
        else
        {
          (*(void (__fastcall **)(__int64 *, _QWORD, _QWORD, _QWORD))(*v22 + 16LL * *(unsigned __int16 *)(v23 + 72) + 312))(
            v22,
            v34,
            (unsigned int)result,
            *(_QWORD *)(*v22 + 16LL * *(unsigned __int16 *)(v23 + 72) + 320));
        }
      }
      goto LABEL_38;
    }
LABEL_36:
    ((void (__fastcall *)(__int64 *, _QWORD, _QWORD, __int64))v24)(v22, v34, (unsigned int)result, v23);
    goto LABEL_38;
  }
}


void __fastcall FriendOperationItemListViewManager___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  struct FriendOperationItemListViewManager___c_StaticFields *static_fields; // x0

  if ( (byte_41841DF & 1) == 0 )
  {
    sub_B2C35C(&FriendOperationItemListViewManager___c_TypeInfo, v1);
    byte_41841DF = 1;
  }
  v2 = (Il2CppObject *)sub_B2C42C(FriendOperationItemListViewManager___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  static_fields = FriendOperationItemListViewManager___c_TypeInfo->static_fields;
  static_fields->__9 = (struct FriendOperationItemListViewManager___c_o *)v2;
  sub_B2C2F8(static_fields, v2);
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
  if ( (byte_41841E0 & 1) == 0 )
  {
    this = (FriendOperationItemListViewManager___c_o *)sub_B2C35C(&UserFriendRequestHistoryEntity_TypeInfo, a);
    byte_41841E0 = 1;
  }
  if ( !b )
LABEL_11:
    sub_B2C434(this, a);
  a = (DataEntityBase_o *)UserFriendRequestHistoryEntity_TypeInfo;
  v6 = *(&UserFriendRequestHistoryEntity_TypeInfo->_2.bitflags2 + 1);
  if ( *(&b->klass->_2.bitflags2 + 1) < (unsigned int)v6
    || (UserFriendRequestHistoryEntity_c *)b->klass->_2.typeHierarchy[v6 - 1] != UserFriendRequestHistoryEntity_TypeInfo )
  {
    this = (FriendOperationItemListViewManager___c_o *)sub_B2C728(b);
    goto LABEL_11;
  }
  if ( !v5 )
    goto LABEL_11;
  if ( *(unsigned __int8 *)(*v5 + 300) >= (unsigned int)v6
    && *(UserFriendRequestHistoryEntity_c **)(*(_QWORD *)(*v5 + 200) + 8 * (v6 - 1)) == UserFriendRequestHistoryEntity_TypeInfo )
  {
    return System_Int64__CompareTo_38383904((int64_t)&b[2].monitor, v5[5], 0LL);
  }
  v8 = (FriendOperationItemListViewManager_CallbackFunc_o *)sub_B2C728(v5);
  FriendOperationItemListViewManager_CallbackFunc___ctor(v8, v9, v10, v11);
  return result;
}