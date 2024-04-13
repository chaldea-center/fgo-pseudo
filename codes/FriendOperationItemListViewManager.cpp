void __fastcall FriendOperationItemListViewManager___cctor(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  System_Array_o *v10; // x19
  struct FriendOperationItemListViewManager_StaticFields *static_fields; // x0
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  System_RuntimeFieldHandle_o v18; // 0:w1.4

  if ( (byte_42EBE40 & 1) == 0 )
  {
    sub_B5D5C4(&ListViewSort_FilterKind___TypeInfo, v1, v2, v3);
    sub_B5D5C4(&FriendOperationItemListViewManager_TypeInfo, v4, v5, v6);
    sub_B5D5C4(
      &Field__PrivateImplementationDetails__6B3B6BC014A692F226080502E0DED60D67C84EBC03CC8CF43A550A89694FF5C0,
      v7,
      v8,
      v9);
    byte_42EBE40 = 1;
  }
  FriendOperationItemListViewManager_TypeInfo->static_fields->isInitSystem = 0;
  v10 = (System_Array_o *)sub_B5D5DC(ListViewSort_FilterKind___TypeInfo, 8LL);
  v18.fields.value = Field__PrivateImplementationDetails__6B3B6BC014A692F226080502E0DED60D67C84EBC03CC8CF43A550A89694FF5C0;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_43674272(v10, v18, 0LL);
  static_fields = FriendOperationItemListViewManager_TypeInfo->static_fields;
  static_fields->classFilter = (struct ListViewSort_FilterKind_array *)v10;
  sub_B5D560(
    (BattleServantConfConponent_o *)&static_fields->classFilter,
    (System_Int32_array **)v10,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
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
  __int64 v3; // x3
  CommonUI_o *Instance; // x0
  __int64 v7; // x1

  if ( (byte_42EBE39 & 1) == 0 )
  {
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, isResult, (_DWORD)method, v3);
    byte_42EBE39 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B5D69C(0LL, v7);
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
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  int v30; // w1
  int v31; // w2
  __int64 v32; // x3
  int v33; // w1
  int v34; // w2
  __int64 v35; // x3
  int v36; // w1
  int v37; // w2
  __int64 v38; // x3
  int v39; // w1
  int v40; // w2
  __int64 v41; // x3
  int v42; // w1
  int v43; // w2
  __int64 v44; // x3
  int v45; // w1
  int v46; // w2
  __int64 v47; // x3
  int v48; // w1
  int v49; // w2
  __int64 v50; // x3
  int v51; // w1
  int v52; // w2
  __int64 v53; // x3
  int v54; // w1
  int v55; // w2
  __int64 v56; // x3
  int v57; // w1
  int v58; // w2
  __int64 v59; // x3
  int v60; // w1
  int v61; // w2
  __int64 v62; // x3
  int v63; // w1
  int v64; // w2
  __int64 v65; // x3
  int v66; // w1
  int v67; // w2
  __int64 v68; // x3
  int v69; // w1
  int v70; // w2
  __int64 v71; // x3
  int v72; // w1
  int v73; // w2
  __int64 v74; // x3
  int v75; // w1
  int v76; // w2
  __int64 v77; // x3
  int v78; // w1
  int v79; // w2
  __int64 v80; // x3
  int v81; // w1
  int v82; // w2
  __int64 v83; // x3
  int v84; // w1
  int v85; // w2
  __int64 v86; // x3
  int v87; // w1
  int v88; // w2
  __int64 v89; // x3
  int v90; // w1
  int v91; // w2
  __int64 v92; // x3
  int v93; // w1
  int v94; // w2
  __int64 v95; // x3
  int64_t sort; // x0
  __int64 v97; // x1
  System_String_array **v98; // x2
  System_String_array **v99; // x3
  System_Boolean_array **v100; // x4
  System_Int32_array **v101; // x5
  System_Int32_array *v102; // x6
  System_Int32_array *v103; // x7
  struct ListViewSort_array *sortStatusList; // x8
  struct ListViewSort_o *v105; // x1
  System_String_o *v106; // x22
  OtherUserGameEntity_array *FriendCodeList; // x20
  __int64 v108; // x8
  unsigned __int64 v109; // x22
  struct System_Collections_Generic_List_ListViewItem__o *v110; // x9
  int32_t v111; // w23
  OtherUserGameEntity_o *v112; // x24
  System_Collections_Generic_Dictionary_int__int__o *v113; // x25
  FriendOperationItemListViewItem_o *v114; // x21
  const MethodInfo *v115; // x6
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *MasterData_WarQuestSelectionMaster; // x20
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *v117; // x21
  int32_t v118; // w22
  UserBlacklistEntity_o *v119; // x23
  __int64 v120; // x10
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x8
  int32_t size; // w26
  System_Collections_Generic_Dictionary_int__int__o *classBoardMaxDictionary; // x27
  OtherUserGameEntity_o *v124; // x25
  FriendOperationItemListViewItem_o *v125; // x24
  const MethodInfo *v126; // x7
  __int64 *v127; // x8
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *v128; // x20
  System_Collections_Generic_IEnumerable_T__o *v129; // x22
  System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *v130; // x21
  struct FriendOperationItemListViewManager___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__35_0; // x22
  Il2CppObject *v133; // x23
  struct FriendOperationItemListViewManager___c_StaticFields *v134; // x0
  System_String_array **v135; // x2
  System_String_array **v136; // x3
  System_Boolean_array **v137; // x4
  System_Int32_array **v138; // x5
  System_Int32_array *v139; // x6
  System_Int32_array *v140; // x7
  int32_t v141; // w23
  BalanceConfig_c *v142; // x0
  int32_t MaxFriendHistoryNum; // w1
  signed __int64 v144; // x8
  unsigned __int64 v145; // x27
  UserFriendRequestHistoryEntity_o *v146; // x22
  __int64 v147; // x10
  struct System_Collections_Generic_List_ListViewItem__o *v148; // x8
  int32_t v149; // w25
  System_Collections_Generic_Dictionary_int__int__o *v150; // x26
  OtherUserGameEntity_o *v151; // x24
  FriendOperationItemListViewItem_o *v152; // x23
  const MethodInfo *v153; // x7
  TblFriendMaster_o *v154; // x23
  OtherUserGameEntity_array *List; // x24
  __int64 v156; // x8
  unsigned __int64 v157; // x22
  struct System_Collections_Generic_List_ListViewItem__o *v158; // x9
  int32_t v159; // w26
  OtherUserGameEntity_o *v160; // x27
  System_Collections_Generic_Dictionary_int__int__o *v161; // x28
  FriendOperationItemListViewItem_o *v162; // x25
  const MethodInfo *v163; // x6
  __int64 v164; // x8
  unsigned __int64 v165; // x22
  struct System_Collections_Generic_List_ListViewItem__o *v166; // x9
  int32_t v167; // w26
  OtherUserGameEntity_o *v168; // x27
  System_Collections_Generic_Dictionary_int__int__o *v169; // x28
  FriendOperationItemListViewItem_o *v170; // x25
  const MethodInfo *v171; // x6
  UILabel_o *emptyMessageLabel; // x20
  struct UIScrollView_o *scrollView; // x8
  __int64 v174; // x0
  System_String_o *v175; // [xsp+8h] [xbp-68h]
  OtherUserGameEntity_array *v176; // [xsp+10h] [xbp-60h]

  if ( (byte_42EBE2F & 1) == 0 )
  {
    sub_B5D5C4(&BalanceConfig_TypeInfo, kind, classPos, method);
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, v6, v7, v8);
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v9, v10, v11);
    sub_B5D5C4(&Method_System_Comparison_DataEntityBase___ctor__, v12, v13, v14);
    sub_B5D5C4(&System_Comparison_DataEntityBase__TypeInfo, v15, v16, v17);
    sub_B5D5C4(&Method_DataManager_GetMasterData_OtherUserGameMaster___, v18, v19, v20);
    sub_B5D5C4(&Method_DataManager_GetMasterData_TblFriendMaster___, v21, v22, v23);
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserBlacklistMaster___, v24, v25, v26);
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserFriendRequestHistoryMaster___, v27, v28, v29);
    sub_B5D5C4(&Method_DataMasterBase_OtherUserGameMaster__OtherUserGameEntity__long__GetEntity__, v30, v31, v32);
    sub_B5D5C4(&FriendOperationItemListViewItem_TypeInfo, v33, v34, v35);
    sub_B5D5C4(&FriendOperationItemListViewManager_TypeInfo, v36, v37, v38);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewItem__Add__, v39, v40, v41);
    sub_B5D5C4(&Method_System_Collections_Generic_List_DataEntityBase__RemoveRange__, v42, v43, v44);
    sub_B5D5C4(&Method_System_Collections_Generic_List_DataEntityBase__Reverse__, v45, v46, v47);
    sub_B5D5C4(&Method_System_Collections_Generic_List_DataEntityBase__Sort__, v48, v49, v50);
    sub_B5D5C4(&Method_System_Collections_Generic_List_DataEntityBase___ctor___68732568, v51, v52, v53);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v54, v55, v56);
    sub_B5D5C4(&Method_System_Collections_Generic_List_DataEntityBase__get_Count__, v57, v58, v59);
    sub_B5D5C4(&Method_System_Collections_Generic_List_DataEntityBase__get_Item__, v60, v61, v62);
    sub_B5D5C4(&System_Collections_Generic_List_DataEntityBase__TypeInfo, v63, v64, v65);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v66, v67, v68);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v69, v70, v71);
    sub_B5D5C4(&Method_FriendOperationItemListViewManager___c__CreateList_b__35_0__, v72, v73, v74);
    sub_B5D5C4(&FriendOperationItemListViewManager___c_TypeInfo, v75, v76, v77);
    sub_B5D5C4(&UserBlacklistEntity_TypeInfo, v78, v79, v80);
    sub_B5D5C4(&UserFriendRequestHistoryEntity_TypeInfo, v81, v82, v83);
    sub_B5D5C4(&StringLiteral_2621/*"BLACKLIST_EMPTY_MESSAGE"*/, v84, v85, v86);
    sub_B5D5C4(&StringLiteral_6542/*"FRIEND_EMPTY_FRIEND_MESSAGE"*/, v87, v88, v89);
    sub_B5D5C4(&StringLiteral_2624/*"BLACKLIST_FRIEND_HISTORY_EMPTY_MESSAGE"*/, v90, v91, v92);
    sub_B5D5C4(&StringLiteral_6543/*"FRIEND_EMPTY_OFFERED_MESSAGE"*/, v93, v94, v95);
    byte_42EBE2F = 1;
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
    v174 = sub_B5D6C8(sort);
    sub_B5D668(v174, 0LL);
  }
  v105 = sortStatusList->m_Items[kind];
  this->fields.sort = v105;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.sort,
    (System_Int32_array **)v105,
    v98,
    v99,
    v100,
    v101,
    v102,
    v103);
  sort = (int64_t)this->fields.sort;
  if ( !sort )
    goto LABEL_101;
  ListViewSort__Load((ListViewSort_o *)sort, 0LL);
  if ( kind == 8 )
  {
    sort = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !sort )
      goto LABEL_101;
    MasterData_WarQuestSelectionMaster = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)DataManager__GetMasterData_WarQuestSelectionMaster_((DataManager_o *)sort, (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_OtherUserGameMaster___);
    sort = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !sort )
      goto LABEL_101;
    sort = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                      (DataManager_o *)sort,
                      (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserBlacklistMaster___);
    if ( !sort )
      goto LABEL_101;
    v117 = *(System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o **)(sort + 32);
    ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
    if ( !v117 )
      goto LABEL_101;
    if ( System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
           v117,
           (const MethodInfo_2BB85C4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__) < 1 )
    {
LABEL_35:
      v127 = &StringLiteral_2621/*"BLACKLIST_EMPTY_MESSAGE"*/;
      goto LABEL_68;
    }
    v118 = 0;
    while ( 1 )
    {
      sort = (int64_t)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                        v117,
                        v118,
                        (const MethodInfo_2BB8668 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !sort )
        break;
      v119 = (UserBlacklistEntity_o *)sort;
      v120 = *(&UserBlacklistEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(unsigned __int8 *)(*(_QWORD *)sort + 300LL) < (unsigned int)v120 )
        break;
      if ( *(UserBlacklistEntity_c **)(*(_QWORD *)(*(_QWORD *)sort + 200LL) + 8 * v120 - 8) != UserBlacklistEntity_TypeInfo )
        break;
      sort = UserBlacklistEntity__getOtherUserId((UserBlacklistEntity_o *)sort, 0LL);
      if ( !MasterData_WarQuestSelectionMaster )
        break;
      sort = (int64_t)DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
                        MasterData_WarQuestSelectionMaster,
                        sort,
                        (const MethodInfo_23FB038 *)Method_DataMasterBase_OtherUserGameMaster__OtherUserGameEntity__long__GetEntity__);
      itemList = this->fields.itemList;
      if ( !itemList )
        break;
      size = itemList->fields._size;
      classBoardMaxDictionary = this->fields.classBoardMaxDictionary;
      v124 = (OtherUserGameEntity_o *)sort;
      v125 = (FriendOperationItemListViewItem_o *)sub_B5D694(FriendOperationItemListViewItem_TypeInfo);
      FriendOperationItemListViewItem___ctor_31294460(v125, 8, size, v124, v119, 0, classBoardMaxDictionary, v126);
      sort = (int64_t)this->fields.itemList;
      if ( !sort )
        break;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sort,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v125,
        (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
      if ( ++v118 >= System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
                       v117,
                       (const MethodInfo_2BB85C4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__) )
        goto LABEL_35;
    }
LABEL_101:
    sub_B5D69C(sort, v97);
  }
  if ( kind == 7 )
  {
    sort = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !sort )
      goto LABEL_101;
    v128 = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                    (DataManager_o *)sort,
                                                                                    (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_OtherUserGameMaster___);
    sort = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !sort )
      goto LABEL_101;
    sort = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                      (DataManager_o *)sort,
                      (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserFriendRequestHistoryMaster___);
    if ( !sort )
      goto LABEL_101;
    v129 = *(System_Collections_Generic_IEnumerable_T__o **)(sort + 32);
    v130 = (System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *)sub_B5D694(System_Collections_Generic_List_DataEntityBase__TypeInfo);
    System_Collections_Generic_List_WarBoardAIRoute_RouteData____ctor(
      v130,
      v129,
      (const MethodInfo_30564F4 *)Method_System_Collections_Generic_List_DataEntityBase___ctor___68732568);
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
      v133 = (Il2CppObject *)static_fields->__9;
      _9__35_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B5D694(System_Comparison_DataEntityBase__TypeInfo);
      System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
        _9__35_0,
        v133,
        Method_FriendOperationItemListViewManager___c__CreateList_b__35_0__,
        (const MethodInfo_249B1FC *)Method_System_Comparison_DataEntityBase___ctor__);
      v134 = FriendOperationItemListViewManager___c_TypeInfo->static_fields;
      v134->__9__35_0 = (struct System_Comparison_DataEntityBase__o *)_9__35_0;
      sub_B5D560(
        (BattleServantConfConponent_o *)&v134->__9__35_0,
        (System_Int32_array **)_9__35_0,
        v135,
        v136,
        v137,
        v138,
        v139,
        v140);
    }
    if ( !v130 )
      goto LABEL_101;
    System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
      (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v130,
      (System_Comparison_T__o *)_9__35_0,
      (const MethodInfo_305909C *)Method_System_Collections_Generic_List_DataEntityBase__Sort__);
    v141 = v130->fields._size;
    v142 = BalanceConfig_TypeInfo;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v142 = BalanceConfig_TypeInfo;
    }
    MaxFriendHistoryNum = v142->static_fields->MaxFriendHistoryNum;
    if ( v141 > MaxFriendHistoryNum )
    {
      if ( (BYTE3(v142->vtable._0_Equals.methodPtr) & 4) != 0 && !v142->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v142);
        MaxFriendHistoryNum = BalanceConfig_TypeInfo->static_fields->MaxFriendHistoryNum;
      }
      System_Collections_Generic_List_RegexCharClass_SingleRange___RemoveRange(
        (System_Collections_Generic_List_RegexCharClass_SingleRange__o *)v130,
        MaxFriendHistoryNum,
        v130->fields._size - MaxFriendHistoryNum,
        (const MethodInfo_3058D54 *)Method_System_Collections_Generic_List_DataEntityBase__RemoveRange__);
    }
    System_Collections_Generic_List_MapControl_WarInfo___Reverse(
      (System_Collections_Generic_List_MapControl_WarInfo__o *)v130,
      (const MethodInfo_3058E20 *)Method_System_Collections_Generic_List_DataEntityBase__Reverse__);
    ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
    LODWORD(v144) = v130->fields._size;
    if ( (int)v144 < 1 )
    {
LABEL_67:
      v127 = &StringLiteral_2624/*"BLACKLIST_FRIEND_HISTORY_EMPTY_MESSAGE"*/;
      goto LABEL_68;
    }
    v145 = 0LL;
    while ( 1 )
    {
      if ( v145 >= (unsigned int)v144 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
      v146 = (UserFriendRequestHistoryEntity_o *)v130->fields._items->m_Items[v145];
      if ( !v146 )
        goto LABEL_101;
      v147 = *(&UserFriendRequestHistoryEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v146->klass->_2.bitflags2 + 1) < (unsigned int)v147 )
        goto LABEL_101;
      if ( (UserFriendRequestHistoryEntity_c *)v146->klass->_2.typeHierarchy[v147 - 1] != UserFriendRequestHistoryEntity_TypeInfo )
        goto LABEL_101;
      sort = UserFriendRequestHistoryEntity__getOtherUserId(v146, 0LL);
      if ( !v128 )
        goto LABEL_101;
      sort = (int64_t)DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
                        v128,
                        sort,
                        (const MethodInfo_23FB038 *)Method_DataMasterBase_OtherUserGameMaster__OtherUserGameEntity__long__GetEntity__);
      v148 = this->fields.itemList;
      if ( !v148 )
        goto LABEL_101;
      v149 = v148->fields._size;
      v150 = this->fields.classBoardMaxDictionary;
      v151 = (OtherUserGameEntity_o *)sort;
      v152 = (FriendOperationItemListViewItem_o *)sub_B5D694(FriendOperationItemListViewItem_TypeInfo);
      FriendOperationItemListViewItem___ctor_31294808(v152, 7, v149, v151, v146, 0, v150, v153);
      sort = (int64_t)this->fields.itemList;
      if ( !sort )
        goto LABEL_101;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sort,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v152,
        (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
      v144 = v130->fields._size;
      if ( (__int64)++v145 >= v144 )
        goto LABEL_67;
    }
  }
  v106 = (System_String_o *)StringLiteral_6543/*"FRIEND_EMPTY_OFFERED_MESSAGE"*/;
  if ( !kind )
  {
    sort = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !sort )
      goto LABEL_101;
    sort = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                      (DataManager_o *)sort,
                      (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_OtherUserGameMaster___);
    if ( !sort )
      goto LABEL_101;
    FriendCodeList = OtherUserGameMaster__GetFriendCodeList((OtherUserGameMaster_o *)sort, this->fields.friendCode, 0LL);
    ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
    if ( !FriendCodeList )
      goto LABEL_101;
    v108 = *(_QWORD *)&FriendCodeList->max_length;
    if ( (int)v108 >= 1 )
    {
      v175 = v106;
      v109 = 0LL;
      while ( 1 )
      {
        v110 = this->fields.itemList;
        if ( !v110 )
          goto LABEL_101;
        if ( v109 >= (unsigned int)v108 )
          goto LABEL_102;
        v111 = v110->fields._size;
        v112 = FriendCodeList->m_Items[v109];
        v113 = this->fields.classBoardMaxDictionary;
        v114 = (FriendOperationItemListViewItem_o *)sub_B5D694(FriendOperationItemListViewItem_TypeInfo);
        FriendOperationItemListViewItem___ctor_31294140(v114, 0, v111, v112, 0, v113, v115);
        sort = (int64_t)this->fields.itemList;
        if ( !sort )
          goto LABEL_101;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sort,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v114,
          (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
        LODWORD(v108) = FriendCodeList->max_length;
        if ( (__int64)++v109 >= (int)v108 )
          goto LABEL_87;
      }
    }
    goto LABEL_88;
  }
  sort = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !sort )
    goto LABEL_101;
  v175 = v106;
  sort = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                    (DataManager_o *)sort,
                    (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_TblFriendMaster___);
  if ( !sort )
    goto LABEL_101;
  v154 = (TblFriendMaster_o *)sort;
  List = TblFriendMaster__GetList((TblFriendMaster_o *)sort, kind, 0LL);
  v176 = TblFriendMaster__GetList(v154, 9, 0LL);
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
  if ( kind == 3 )
  {
    if ( !v176 )
      goto LABEL_101;
    v156 = *(_QWORD *)&v176->max_length;
    if ( (int)v156 >= 1 )
    {
      v157 = 0LL;
      do
      {
        v158 = this->fields.itemList;
        if ( !v158 )
          goto LABEL_101;
        if ( v157 >= (unsigned int)v156 )
          goto LABEL_102;
        v159 = v158->fields._size;
        v160 = v176->m_Items[v157];
        v161 = this->fields.classBoardMaxDictionary;
        v162 = (FriendOperationItemListViewItem_o *)sub_B5D694(FriendOperationItemListViewItem_TypeInfo);
        FriendOperationItemListViewItem___ctor_31294140(v162, 9, v159, v160, classPos, v161, v163);
        sort = (int64_t)this->fields.itemList;
        if ( !sort )
          goto LABEL_101;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sort,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v162,
          (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
        ++v157;
        LODWORD(v156) = v176->max_length;
      }
      while ( (__int64)v157 < (int)v156 );
    }
  }
  if ( !List )
    goto LABEL_101;
  v164 = *(_QWORD *)&List->max_length;
  if ( (int)v164 >= 1 )
  {
    v165 = 0LL;
    do
    {
      v166 = this->fields.itemList;
      if ( !v166 )
        goto LABEL_101;
      if ( v165 >= (unsigned int)v164 )
        goto LABEL_102;
      v167 = v166->fields._size;
      v168 = List->m_Items[v165];
      v169 = this->fields.classBoardMaxDictionary;
      v170 = (FriendOperationItemListViewItem_o *)sub_B5D694(FriendOperationItemListViewItem_TypeInfo);
      FriendOperationItemListViewItem___ctor_31294140(v170, kind, v167, v168, classPos, v169, v171);
      sort = (int64_t)this->fields.itemList;
      if ( !sort )
        goto LABEL_101;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sort,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v170,
        (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
      v164 = *(_QWORD *)&List->max_length;
    }
    while ( (__int64)++v165 < (int)v164 );
  }
  if ( v164 )
  {
LABEL_87:
    v106 = v175;
    goto LABEL_88;
  }
  v106 = v175;
  if ( !v176 )
    goto LABEL_101;
  if ( !*(_QWORD *)&v176->max_length )
  {
    if ( kind != 2 )
    {
      if ( kind == 3 )
        v106 = (System_String_o *)StringLiteral_6542/*"FRIEND_EMPTY_FRIEND_MESSAGE"*/;
      goto LABEL_88;
    }
    v127 = &StringLiteral_6543/*"FRIEND_EMPTY_OFFERED_MESSAGE"*/;
LABEL_68:
    v106 = (System_String_o *)*v127;
  }
LABEL_88:
  emptyMessageLabel = this->fields.emptyMessageLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  sort = (int64_t)LocalizationManager__Get(v106, 0LL);
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
  sub_B5D560(
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  FriendOperationItemListViewManager_c *v14; // x0
  __int64 v15; // x0
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  FriendOperationItemListViewManager_c *v22; // x8
  System_Int32_array **v23; // x20
  struct FriendOperationItemListViewManager_StaticFields *static_fields; // x0
  FriendOperationItemListViewManager_c *v25; // x0
  unsigned int v26; // w23
  int v27; // w8
  struct ListViewSort_array *sortStatusList; // x28
  System_String_o *v29; // x0
  System_String_o *v30; // x21
  ListViewSort_o *v31; // x20
  __int64 v32; // x1
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7
  Il2CppClass **v39; // x0
  struct ListViewSort_array *v40; // x8
  Il2CppClass **v41; // x8
  ListViewSort_o *v42; // x20
  struct ListViewSort_FilterKind_array *v43; // x8
  unsigned __int64 i; // x21
  struct ListViewSort_FilterKind_array *classFilter; // x8
  unsigned int v46; // w9
  bool v47; // cf
  __int64 v48; // x0
  __int64 v49; // x0
  unsigned int v50; // [xsp+Ch] [xbp-54h] BYREF

  if ( (byte_42EBE29 & 1) == 0 )
  {
    sub_B5D5C4(&FriendOperationItemListViewManager_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&ListViewSort___TypeInfo, v5, v6, v7);
    sub_B5D5C4(&ListViewSort_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&StringLiteral_6888/*"FriendOperation"*/, v11, v12, v13);
    byte_42EBE29 = 1;
  }
  v50 = 0;
  v14 = FriendOperationItemListViewManager_TypeInfo;
  if ( (BYTE3(FriendOperationItemListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !FriendOperationItemListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FriendOperationItemListViewManager_TypeInfo);
    v14 = FriendOperationItemListViewManager_TypeInfo;
  }
  if ( !v14->static_fields->isInitSystem )
  {
    v15 = sub_B5D5DC(ListViewSort___TypeInfo, 10LL);
    v22 = FriendOperationItemListViewManager_TypeInfo;
    v23 = (System_Int32_array **)v15;
    if ( (BYTE3(FriendOperationItemListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !FriendOperationItemListViewManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(FriendOperationItemListViewManager_TypeInfo);
      v22 = FriendOperationItemListViewManager_TypeInfo;
    }
    static_fields = v22->static_fields;
    static_fields->sortStatusList = (struct ListViewSort_array *)v23;
    sub_B5D560((BattleServantConfConponent_o *)&static_fields->sortStatusList, v23, v16, v17, v18, v19, v20, v21);
    v25 = FriendOperationItemListViewManager_TypeInfo;
    v26 = 0;
    v27 = (BYTE3(FriendOperationItemListViewManager_TypeInfo->vtable._0_Equals.methodPtr) >> 2) & 1;
    do
    {
      if ( (v27 & 1) != 0 && !v25->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v25);
        v25 = FriendOperationItemListViewManager_TypeInfo;
      }
      sortStatusList = v25->static_fields->sortStatusList;
      v50 = v26 + 1;
      v29 = System_Int32__ToString((int32_t)&v50, 0LL);
      v30 = System_String__Concat_44577788((System_String_o *)StringLiteral_6888/*"FriendOperation"*/, v29, 0LL);
      v31 = (ListViewSort_o *)sub_B5D694(ListViewSort_TypeInfo);
      ListViewSort___ctor_34028932(v31, v30, 3, 0, 0LL);
      if ( !sortStatusList )
        goto LABEL_46;
      if ( v31 )
      {
        v25 = (FriendOperationItemListViewManager_c *)sub_B5D684(v31, sortStatusList->obj.klass->_1.element_class);
        if ( !v25 )
        {
          v49 = sub_B5D6BC(0LL);
          sub_B5D668(v49, 0LL);
        }
      }
      if ( v26 >= sortStatusList->max_length )
        goto LABEL_47;
      v39 = &sortStatusList->obj.klass + (int)v26;
      v39[4] = (Il2CppClass *)v31;
      sub_B5D560((BattleServantConfConponent_o *)(v39 + 4), (System_Int32_array **)v31, v33, v34, v35, v36, v37, v38);
      v40 = FriendOperationItemListViewManager_TypeInfo->static_fields->sortStatusList;
      if ( !v40 )
        goto LABEL_46;
      if ( v26 >= v40->max_length )
      {
LABEL_47:
        v48 = sub_B5D6C8(v25);
        sub_B5D668(v48, 0LL);
      }
      v41 = &v40->obj.klass + (int)v26;
      v42 = (ListViewSort_o *)v41[4];
      if ( !v42 )
        goto LABEL_46;
      ListViewSort__ClassFilterOFF((ListViewSort_o *)v41[4], 0LL);
      if ( !classPos )
      {
        for ( i = 0LL; ; ++i )
        {
          v25 = FriendOperationItemListViewManager_TypeInfo;
          if ( (BYTE3(FriendOperationItemListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !FriendOperationItemListViewManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(FriendOperationItemListViewManager_TypeInfo);
            v25 = FriendOperationItemListViewManager_TypeInfo;
          }
          classFilter = v25->static_fields->classFilter;
          if ( !classFilter )
            break;
          if ( (__int64)i >= (int)classFilter->max_length )
            goto LABEL_39;
          if ( (BYTE3(v25->vtable._0_Equals.methodPtr) & 4) != 0 && !v25->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v25);
            classFilter = FriendOperationItemListViewManager_TypeInfo->static_fields->classFilter;
            if ( !classFilter )
              break;
          }
          if ( i >= classFilter->max_length )
            goto LABEL_47;
          ListViewSort__SetFilter(v42, classFilter->m_Items[i + 1], 1, 0LL);
        }
LABEL_46:
        sub_B5D69C(v25, v32);
      }
      v25 = FriendOperationItemListViewManager_TypeInfo;
      if ( (BYTE3(FriendOperationItemListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !FriendOperationItemListViewManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(FriendOperationItemListViewManager_TypeInfo);
        v25 = FriendOperationItemListViewManager_TypeInfo;
      }
      v43 = v25->static_fields->classFilter;
      if ( !v43 )
        goto LABEL_46;
      if ( v43->max_length <= classPos )
        goto LABEL_47;
      ListViewSort__SetFilter(v42, v43->m_Items[classPos + 1], 1, 0LL);
      v25 = FriendOperationItemListViewManager_TypeInfo;
LABEL_39:
      v46 = WORD1(v25->vtable._0_Equals.methodPtr);
      v47 = v26++ >= 9;
      v27 = (v46 >> 10) & 1;
    }
    while ( !v47 );
    if ( (v46 & 0x400) != 0 && !v25->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v25);
      v25 = FriendOperationItemListViewManager_TypeInfo;
    }
    v25->static_fields->isInitSystem = 1;
  }
}


void __fastcall FriendOperationItemListViewManager__DeleteContinueData(const MethodInfo *method)
{
  const MethodInfo *v1; // x1
  int v2; // w2
  __int64 v3; // x3
  __int64 v4; // x1
  __int64 v5; // x20
  ListViewSort_o *v6; // x0
  _DWORD *gc_desc; // x8
  __int64 v8; // x0

  if ( (byte_42EBE2A & 1) == 0 )
  {
    sub_B5D5C4(&FriendOperationItemListViewManager_TypeInfo, (_DWORD)v1, v2, v3);
    byte_42EBE2A = 1;
  }
  if ( (BYTE3(FriendOperationItemListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !FriendOperationItemListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FriendOperationItemListViewManager_TypeInfo);
  }
  FriendOperationItemListViewManager__CreateSorteData(0, v1);
  v5 = 0LL;
  do
  {
    v6 = (ListViewSort_o *)FriendOperationItemListViewManager_TypeInfo;
    if ( (BYTE3(FriendOperationItemListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !FriendOperationItemListViewManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(FriendOperationItemListViewManager_TypeInfo);
      v6 = (ListViewSort_o *)FriendOperationItemListViewManager_TypeInfo;
    }
    gc_desc = v6[1].klass->_1.gc_desc;
    if ( !gc_desc )
      goto LABEL_15;
    if ( (unsigned int)v5 >= gc_desc[6] )
    {
      v8 = sub_B5D6C8(v6);
      sub_B5D668(v8, 0LL);
    }
    v6 = *(ListViewSort_o **)&gc_desc[2 * v5 + 8];
    if ( !v6 )
LABEL_15:
      sub_B5D69C(v6, v4);
    ListViewSort__DeleteContinueData(v6, 0LL);
    ++v5;
  }
  while ( (unsigned int)(v5 - 1) < 9 );
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
    sub_B5D69C(0LL, v3);
  ListViewSort__Save(sort, 0LL);
}


void __fastcall FriendOperationItemListViewManager__EndCloseClassBoardEffectListDialog(
        FriendOperationItemListViewManager_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  CommonUI_o *Instance; // x0
  __int64 v6; // x1

  if ( (byte_42EBE3F & 1) == 0 )
  {
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, (_DWORD)method, v2, v3);
    byte_42EBE3F = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B5D69C(0LL, v6);
  CommonUI__CloseClassBoardEffectListDialog(Instance, 0LL, 0LL);
  this->fields.isInput = 1;
}


FriendOperationItemListViewItem_o *__fastcall FriendOperationItemListViewManager__GetItem(
        FriendOperationItemListViewManager_o *this,
        int32_t index,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x20
  ListViewItem_o *v10; // x8
  __int64 v11; // x11

  if ( (byte_42EBE30 & 1) == 0 )
  {
    sub_B5D5C4(&FriendOperationItemListViewItem_TypeInfo, index, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v6, v7, v8);
    byte_42EBE30 = 1;
  }
  itemList = this->fields.itemList;
  if ( !itemList )
    return 0LL;
  if ( itemList->fields._size <= (unsigned int)index )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
  v10 = itemList->fields._items->m_Items[index];
  if ( !v10 )
    return 0LL;
  v11 = *(&FriendOperationItemListViewItem_TypeInfo->_2.bitflags2 + 1);
  if ( *(&v10->klass->_2.bitflags2 + 1) < (unsigned int)v11 )
    return 0LL;
  if ( (FriendOperationItemListViewItem_c *)v10->klass->_2.typeHierarchy[v11 - 1] == FriendOperationItemListViewItem_TypeInfo )
    return (FriendOperationItemListViewItem_o *)itemList->fields._items->m_Items[index];
  return 0LL;
}


void __fastcall FriendOperationItemListViewManager__InitLoad(const MethodInfo *method)
{
  __int64 v1; // x1
  int v2; // w2
  __int64 v3; // x3
  FriendOperationItemListViewManager_c *v4; // x0
  __int64 i; // x20
  struct ListViewSort_array *sortStatusList; // x8
  __int64 v7; // x0

  if ( (byte_42EBE2B & 1) == 0 )
  {
    sub_B5D5C4(&FriendOperationItemListViewManager_TypeInfo, v1, v2, v3);
    byte_42EBE2B = 1;
  }
  v4 = FriendOperationItemListViewManager_TypeInfo;
  if ( (BYTE3(FriendOperationItemListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !FriendOperationItemListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FriendOperationItemListViewManager_TypeInfo);
    v4 = FriendOperationItemListViewManager_TypeInfo;
  }
  if ( v4->static_fields->isInitSystem )
  {
    for ( i = 0LL; ; ++i )
    {
      if ( (BYTE3(v4->vtable._0_Equals.methodPtr) & 4) != 0 && !v4->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v4);
        v4 = FriendOperationItemListViewManager_TypeInfo;
      }
      sortStatusList = v4->static_fields->sortStatusList;
      if ( !sortStatusList )
        goto LABEL_17;
      if ( (unsigned int)i >= sortStatusList->max_length )
      {
        v7 = sub_B5D6C8(v4);
        sub_B5D668(v7, 0LL);
      }
      v4 = (FriendOperationItemListViewManager_c *)sortStatusList->m_Items[i];
      if ( !v4 )
LABEL_17:
        sub_B5D69C(v4, v1);
      ListViewSort__InitLoad((ListViewSort_o *)v4, 0LL);
      if ( (unsigned int)i > 8 )
        break;
      v4 = FriendOperationItemListViewManager_TypeInfo;
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
  sub_B5D560(
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
      sub_B5D69C(v10, v11);
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
  sub_B5D560(
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
      sub_B5D69C(v10, v11);
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
  sub_B5D560(
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
      sub_B5D69C(v10, v11);
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
  sub_B5D560(
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
      sub_B5D69C(v10, v11);
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
  sub_B5D560(
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
      sub_B5D69C(v10, v11);
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
  sub_B5D560(
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
      sub_B5D69C(v10, v11);
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
  int v2; // w2
  __int64 v3; // x3
  __int64 v5; // x0
  __int64 v6; // x1
  struct ListViewSort_o *sort; // x8

  if ( (byte_42EBE3A & 1) == 0 )
  {
    sub_B5D5C4(&SoundManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EBE3A = 1;
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
      sub_B5D69C(v5, v6);
    sort->fields.isAscendingOrder ^= 1u;
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, 3, 0LL);
  }
}


void __fastcall FriendOperationItemListViewManager__OnClickSortKind(
        FriendOperationItemListViewManager_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int32_t menuKind; // w8
  WebViewManager_o *v15; // x0
  ListViewSort_o *sort; // x20
  CommonUI_o *v17; // x21
  OtherUserSortDialog_CallbackFunc_o *v18; // x22
  __int64 v19; // x0
  __int64 v20; // x1
  int32_t v21; // w1
  WebViewManager_o *Instance; // x0

  if ( (byte_42EBE38 & 1) == 0 )
  {
    sub_B5D5C4(&OtherUserSortDialog_CallbackFunc_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_FriendOperationItemListViewManager_CloseSortDialog__, v5, v6, v7);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v8, v9, v10);
    sub_B5D5C4(&SoundManager_TypeInfo, v11, v12, v13);
    byte_42EBE38 = 1;
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
      Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      sort = this->fields.sort;
      v17 = (CommonUI_o *)Instance;
      v18 = (OtherUserSortDialog_CallbackFunc_o *)sub_B5D694(OtherUserSortDialog_CallbackFunc_TypeInfo);
      OtherUserSortDialog_CallbackFunc___ctor(
        v18,
        (Il2CppObject *)this,
        Method_FriendOperationItemListViewManager_CloseSortDialog__,
        0LL);
      if ( v17 )
      {
        v21 = 2;
        goto LABEL_14;
      }
LABEL_15:
      sub_B5D69C(v19, v20);
    }
    if ( menuKind == 3 )
    {
      v15 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      sort = this->fields.sort;
      v17 = (CommonUI_o *)v15;
      v18 = (OtherUserSortDialog_CallbackFunc_o *)sub_B5D694(OtherUserSortDialog_CallbackFunc_TypeInfo);
      OtherUserSortDialog_CallbackFunc___ctor(
        v18,
        (Il2CppObject *)this,
        Method_FriendOperationItemListViewManager_CloseSortDialog__,
        0LL);
      if ( v17 )
      {
        v21 = 1;
LABEL_14:
        CommonUI__OpenOtherUserSortDialog(v17, v21, sort, v18, 0LL);
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
  sub_B5D560(
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
      sub_B5D69C(v10, v11);
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

  if ( (byte_42EBE37 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_12784/*"ScrollViewEnabled"*/, (_DWORD)obj, kind, method);
    byte_42EBE37 = 1;
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
      (System_String_o *)StringLiteral_12784/*"ScrollViewEnabled"*/,
      0.1,
      0LL);
    callbackFunc = this->fields.callbackFunc;
    this->fields.callbackFunc = 0LL;
    sub_B5D560((BattleServantConfConponent_o *)&this->fields.callbackFunc, 0LL, v9, v10, v11, v12, v13, v14);
    if ( callbackFunc )
    {
      if ( obj )
      {
        Index = ListViewObject__get_Index(obj, 0LL);
        FriendOperationItemListViewManager_CallbackFunc__Invoke(callbackFunc, kind, Index, 0LL);
        return;
      }
LABEL_10:
      sub_B5D69C(scrollView, obj);
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int32_t callbackCount; // w8
  bool v9; // vf
  int32_t v10; // w8
  UnityEngine_GameObject_o *emptyMessageBase; // x0
  __int64 v12; // x1
  struct System_Collections_Generic_List_ListViewItem__o *itemSortList; // x8
  UnityEngine_Object_o *scrollView; // x20
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  System_Action_o *callbackFunc2; // x20

  if ( (byte_42EBE36 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v5, v6, v7);
    byte_42EBE36 = 1;
  }
  callbackCount = this->fields.callbackCount;
  v9 = __OFSUB__(callbackCount, 1);
  v10 = callbackCount - 1;
  if ( v10 < 0 == v9 )
  {
    this->fields.callbackCount = v10;
    if ( !v10 )
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
          sub_B5D560((BattleServantConfConponent_o *)&this->fields.callbackFunc2, 0LL, v15, v16, v17, v18, v19, v20);
          if ( callbackFunc2 )
            System_Action__Invoke(callbackFunc2, 0LL);
          return;
        }
      }
LABEL_19:
      sub_B5D69C(emptyMessageBase, v12);
    }
  }
}


void __fastcall FriendOperationItemListViewManager__OpenSupportClassBoard(
        FriendOperationItemListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  __int64 v3; // x3
  FriendOperationItemListViewManager_o *v5; // x19
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  int v30; // w1
  int v31; // w2
  __int64 v32; // x3
  int v33; // w1
  int v34; // w2
  __int64 v35; // x3
  int v36; // w1
  int v37; // w2
  __int64 v38; // x3
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x21
  int32_t Index; // w20
  FriendOperationItemListViewItem_o *v41; // x20
  __int64 v42; // x10
  _QWORD *v43; // x0
  System_Reflection_MethodBase_o *v44; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *Master_WarQuestSelectionMaster; // x21
  const MethodInfo *v46; // x1
  int32_t scrollBar; // w22
  struct OtherUserGameEntity_o *otherUserGameEntity; // x8
  struct ClassBoardInfo_array *userClassBoardInfo; // x23
  int max_length; // w8
  int32_t v51; // w20
  unsigned int v52; // w24
  __int64 v53; // x21
  System_String_array **v54; // x2
  System_String_array **v55; // x3
  System_Boolean_array **v56; // x4
  System_Int32_array **v57; // x5
  System_Int32_array *v58; // x6
  System_Int32_array *v59; // x7
  _QWORD **v60; // x24
  __int64 v61; // x22
  __int16 v62; // w8
  __int64 v63; // x22
  __int64 v64; // x22
  __int64 v65; // x22
  System_Int32_array ***v66; // x8
  System_Int32_array **v67; // x1
  System_String_array **v68; // x2
  System_String_array **v69; // x3
  System_Boolean_array **v70; // x4
  System_Int32_array **v71; // x5
  System_Int32_array *v72; // x6
  System_Int32_array *v73; // x7
  _QWORD **v74; // x23
  __int64 v75; // x22
  __int16 v76; // w8
  __int64 v77; // x22
  __int64 v78; // x22
  __int64 v79; // x22
  System_Int32_array ***v80; // x8
  System_Int32_array **v81; // x1
  CommonUI_o *Instance; // x22
  System_Action_o *v83; // x23
  __int64 v84; // x0

  v5 = this;
  if ( (byte_42EBE3E & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)obj, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Array_Empty_int___, v6, v7, v8);
    sub_B5D5C4(&ClassBoardInfo_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&Method_DataManager_GetMaster_ClassBoardClassMaster___, v12, v13, v14);
    sub_B5D5C4(&Method_DataManager_GetMaster_ServantMaster___, v15, v16, v17);
    sub_B5D5C4(&DataManager_TypeInfo, v18, v19, v20);
    sub_B5D5C4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v21, v22, v23);
    sub_B5D5C4(&FriendOperationItemListViewItem_TypeInfo, v24, v25, v26);
    sub_B5D5C4(&Method_FriendOperationItemListViewManager_EndCloseClassBoardEffectListDialog__, v27, v28, v29);
    sub_B5D5C4(&Method_FriendOperationItemListViewManager_OpenSupportClassBoard__, v30, v31, v32);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v33, v34, v35);
    this = (FriendOperationItemListViewManager_o *)sub_B5D5C4(
                                                     &Method_SingletonMonoBehaviour_CommonUI__get_Instance__,
                                                     v36,
                                                     v37,
                                                     v38);
    byte_42EBE3E = 1;
  }
  if ( v5->fields.isInput )
  {
    itemList = v5->fields.itemList;
    if ( itemList )
    {
      if ( obj )
      {
        Index = ListViewObject__get_Index(obj, 0LL);
        if ( itemList->fields._size <= (unsigned int)Index )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
        v41 = (FriendOperationItemListViewItem_o *)itemList->fields._items->m_Items[Index];
        if ( !v41 )
          return;
        v42 = *(&FriendOperationItemListViewItem_TypeInfo->_2.bitflags2 + 1);
        if ( *(&v41->klass->_2.bitflags2 + 1) < (unsigned int)v42
          || (FriendOperationItemListViewItem_c *)v41->klass->_2.typeHierarchy[v42 - 1] != FriendOperationItemListViewItem_TypeInfo )
        {
          return;
        }
        v5->fields.isInput = 0;
        v43 = Method_FriendOperationItemListViewManager_OpenSupportClassBoard__;
        if ( (*((_BYTE *)Method_FriendOperationItemListViewManager_OpenSupportClassBoard__ + 75) & 2) != 0 )
          v43 = (_QWORD *)sub_B5D5CC(Method_FriendOperationItemListViewManager_OpenSupportClassBoard__);
        v44 = (System_Reflection_MethodBase_o *)sub_B5D5A8(v43, v43[3]);
        OverwriteAssetSoundName__PlaySystemSe(v44, 0, 0LL);
        if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !DataManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        }
        Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_ServantMaster___);
        this = (FriendOperationItemListViewManager_o *)FriendOperationItemListViewItem__get_SvtId(v41, v46);
        if ( Master_WarQuestSelectionMaster )
        {
          this = (FriendOperationItemListViewManager_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                                           Master_WarQuestSelectionMaster,
                                                           (int32_t)this,
                                                           (const MethodInfo_23FAE10 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
          if ( this )
          {
            scrollBar = (int32_t)this->fields.scrollBar;
            this = (FriendOperationItemListViewManager_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_ClassBoardClassMaster___);
            if ( this )
            {
              this = (FriendOperationItemListViewManager_o *)ClassBoardClassMaster__GetClassBoardBaseId(
                                                               (ClassBoardClassMaster_o *)this,
                                                               scrollBar,
                                                               0LL);
              otherUserGameEntity = v41->fields.otherUserGameEntity;
              if ( otherUserGameEntity )
              {
                userClassBoardInfo = otherUserGameEntity->fields.userClassBoardInfo;
                if ( userClassBoardInfo )
                {
                  max_length = userClassBoardInfo->max_length;
                  v51 = (int)this;
                  if ( max_length < 1 )
                  {
LABEL_29:
                    v53 = sub_B5D694(ClassBoardInfo_TypeInfo);
                    ClassBoardInfo___ctor((ClassBoardInfo_o *)v53, 0LL);
                    if ( v53 )
                    {
                      *(_DWORD *)(v53 + 16) = v51;
                      v60 = (_QWORD **)Method_System_Array_Empty_int___;
                      v61 = **((_QWORD **)Method_System_Array_Empty_int___ + 6);
                      v62 = *(_WORD *)(v61 + 306);
                      if ( (v62 & 1) == 0 )
                      {
                        sub_AF52C4(**((_QWORD **)Method_System_Array_Empty_int___ + 6));
                        v62 = *(_WORD *)(v61 + 306);
                      }
                      if ( (v62 & 0x400) != 0 )
                      {
                        v63 = *v60[6];
                        if ( (*(_BYTE *)(v63 + 306) & 1) == 0 )
                          sub_AF52C4(*v60[6]);
                        if ( !*(_DWORD *)(v63 + 224) )
                        {
                          v64 = *v60[6];
                          if ( (*(_BYTE *)(v64 + 306) & 1) == 0 )
                            sub_AF52C4(*v60[6]);
                          j_il2cpp_runtime_class_init_0(v64);
                        }
                      }
                      v65 = *v60[6];
                      if ( (*(_BYTE *)(v65 + 306) & 1) == 0 )
                        sub_AF52C4(*v60[6]);
                      v66 = *(System_Int32_array ****)(v65 + 184);
                      v67 = *v66;
                      *(_QWORD *)(v53 + 24) = *v66;
                      sub_B5D560((BattleServantConfConponent_o *)(v53 + 24), v67, v54, v55, v56, v57, v58, v59);
                      v74 = (_QWORD **)Method_System_Array_Empty_int___;
                      v75 = **((_QWORD **)Method_System_Array_Empty_int___ + 6);
                      v76 = *(_WORD *)(v75 + 306);
                      if ( (v76 & 1) == 0 )
                      {
                        sub_AF52C4(**((_QWORD **)Method_System_Array_Empty_int___ + 6));
                        v76 = *(_WORD *)(v75 + 306);
                      }
                      if ( (v76 & 0x400) != 0 )
                      {
                        v77 = *v74[6];
                        if ( (*(_BYTE *)(v77 + 306) & 1) == 0 )
                          sub_AF52C4(*v74[6]);
                        if ( !*(_DWORD *)(v77 + 224) )
                        {
                          v78 = *v74[6];
                          if ( (*(_BYTE *)(v78 + 306) & 1) == 0 )
                            sub_AF52C4(*v74[6]);
                          j_il2cpp_runtime_class_init_0(v78);
                        }
                      }
                      v79 = *v74[6];
                      if ( (*(_BYTE *)(v79 + 306) & 1) == 0 )
                        sub_AF52C4(*v74[6]);
                      v80 = *(System_Int32_array ****)(v79 + 184);
                      v81 = *v80;
                      *(_QWORD *)(v53 + 32) = *v80;
                      sub_B5D560((BattleServantConfConponent_o *)(v53 + 32), v81, v68, v69, v70, v71, v72, v73);
LABEL_53:
                      Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                      v83 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
                      System_Action___ctor(
                        v83,
                        (Il2CppObject *)v5,
                        Method_FriendOperationItemListViewManager_EndCloseClassBoardEffectListDialog__,
                        0LL);
                      if ( Instance )
                      {
                        CommonUI__OpenClassBoardEffectListDialog(
                          Instance,
                          1,
                          v51,
                          0,
                          v83,
                          1,
                          (ClassBoardInfo_o *)v53,
                          0LL);
                        return;
                      }
                    }
                  }
                  else
                  {
                    v52 = 0;
                    while ( 1 )
                    {
                      if ( v52 >= max_length )
                      {
                        v84 = sub_B5D6C8(this);
                        sub_B5D668(v84, 0LL);
                      }
                      v53 = (__int64)userClassBoardInfo->m_Items[v52];
                      if ( !v53 )
                        break;
                      if ( *(_DWORD *)(v53 + 16) == v51 )
                      {
                        this = (FriendOperationItemListViewManager_o *)ClassBoardInfo__IsReleasedClassId(
                                                                         (ClassBoardInfo_o *)v53,
                                                                         scrollBar,
                                                                         0LL);
                        if ( ((unsigned __int8)this & 1) != 0 )
                          goto LABEL_53;
                      }
                      max_length = userClassBoardInfo->max_length;
                      if ( (int)++v52 >= max_length )
                        goto LABEL_29;
                    }
                  }
                }
              }
            }
          }
        }
      }
      sub_B5D69C(this, obj);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FriendOperationItemListViewManager__RequestInto(
        FriendOperationItemListViewManager_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  const MethodInfo *v17; // x1
  System_Collections_Generic_List_FriendOperationItemListViewObject__o *ObjectList; // x0
  __int64 v19; // x1
  System_Collections_Generic_List_FriendOperationItemListViewObject__o *v20; // x20
  signed __int64 size; // x8
  unsigned __int64 v22; // x24
  int v23; // w23
  FriendOperationItemListViewObject_o *v24; // x21
  System_Action_o *v25; // x22
  const MethodInfo *v26; // x3
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  if ( (byte_42EBE35 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_FriendOperationItemListViewManager_OnMoveEnd__, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_FriendOperationItemListViewObject__get_Count__, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_List_FriendOperationItemListViewObject__get_Item__, v11, v12, v13);
    sub_B5D5C4(&StringLiteral_10142/*"OnMoveEnd"*/, v14, v15, v16);
    byte_42EBE35 = 1;
  }
  ListViewManager__ClippingItems((ListViewManager_o *)this, 1, 0, 0LL);
  ListViewManager__DragMaskStart((ListViewManager_o *)this, 0LL);
  ObjectList = FriendOperationItemListViewManager__get_ObjectList(this, v17);
  if ( !ObjectList )
LABEL_15:
    sub_B5D69C(ObjectList, v19);
  v20 = ObjectList;
  this->fields.callbackCount = ObjectList->fields._size;
  LODWORD(size) = ObjectList->fields._size;
  if ( (int)size < 1 )
    goto LABEL_14;
  v22 = 0LL;
  v23 = 0;
  do
  {
    if ( v22 >= (unsigned int)size )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
    v24 = v20->fields._items->m_Items[v22];
    if ( ListViewManager__ClippingItem((ListViewManager_o *)this, (ListViewObject_o *)v24, 0LL) )
    {
      v25 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
      System_Action___ctor(v25, (Il2CppObject *)this, Method_FriendOperationItemListViewManager_OnMoveEnd__, 0LL);
      if ( !v24 )
        goto LABEL_15;
      ++v23;
      zero = UnityEngine_Vector3__get_zero(0LL);
      FriendOperationItemListViewObject__Init(v24, 4, v25, 0.1, *(UnityEngine_Vector3_o *)&zero.fields.y, v26);
    }
    else
    {
      --this->fields.callbackCount;
    }
    size = v20->fields._size;
    ++v22;
  }
  while ( (__int64)v22 < size );
  if ( !v23 )
  {
LABEL_14:
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10142/*"OnMoveEnd"*/,
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
  __int64 v4; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *ObjectList; // x0
  __int64 v30; // x1
  int32_t size; // w8
  Il2CppObject *current; // x21
  System_Action_o *v33; // x22
  __int64 v34; // x0
  __int64 v35; // x1
  const MethodInfo *v36; // x3
  System_Collections_Generic_List_Enumerator_T__o v37; // [xsp+8h] [xbp-58h] BYREF
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  if ( (byte_42EBE33 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, mode, (_DWORD)method, v4);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_FriendOperationItemListViewObject__Dispose__,
      v8,
      v9,
      v10);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_FriendOperationItemListViewObject__MoveNext__,
      v11,
      v12,
      v13);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_FriendOperationItemListViewObject__get_Current__,
      v14,
      v15,
      v16);
    sub_B5D5C4(&Method_FriendOperationItemListViewManager_OnMoveEnd__, v17, v18, v19);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_FriendOperationItemListViewObject__GetEnumerator__,
      v20,
      v21,
      v22);
    sub_B5D5C4(&Method_System_Collections_Generic_List_FriendOperationItemListViewObject__get_Count__, v23, v24, v25);
    sub_B5D5C4(&StringLiteral_10142/*"OnMoveEnd"*/, v26, v27, v28);
    byte_42EBE33 = 1;
  }
  memset(&v37, 0, sizeof(v37));
  ObjectList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)FriendOperationItemListViewManager__get_ObjectList(
                                                                                                this,
                                                                                                *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_B5D69C(0LL, v30);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10142/*"OnMoveEnd"*/,
      delay,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v37,
      ObjectList,
      (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_FriendOperationItemListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v37,
              (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_FriendOperationItemListViewObject__MoveNext__) )
    {
      current = v37.fields.current;
      v33 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
      System_Action___ctor(v33, (Il2CppObject *)this, Method_FriendOperationItemListViewManager_OnMoveEnd__, 0LL);
      if ( !current )
        sub_B5D69C(v34, v35);
      zero = UnityEngine_Vector3__get_zero(0LL);
      FriendOperationItemListViewObject__Init(
        (FriendOperationItemListViewObject_o *)current,
        mode,
        v33,
        delay,
        *(UnityEngine_Vector3_o *)&zero.fields.y,
        v36);
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v37,
      (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_FriendOperationItemListViewObject__Dispose__);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FriendOperationItemListViewManager__RequestListObject_31318788(
        FriendOperationItemListViewManager_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *ObjectList; // x0
  __int64 v28; // x1
  int32_t size; // w8
  Il2CppObject *current; // x21
  System_Action_o *v31; // x22
  __int64 v32; // x0
  __int64 v33; // x1
  const MethodInfo *v34; // x3
  System_Collections_Generic_List_Enumerator_T__o v35; // [xsp+8h] [xbp-58h] BYREF
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  if ( (byte_42EBE34 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, mode, (_DWORD)method, v3);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_FriendOperationItemListViewObject__Dispose__,
      v6,
      v7,
      v8);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_FriendOperationItemListViewObject__MoveNext__,
      v9,
      v10,
      v11);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_FriendOperationItemListViewObject__get_Current__,
      v12,
      v13,
      v14);
    sub_B5D5C4(&Method_FriendOperationItemListViewManager_OnMoveEnd__, v15, v16, v17);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_FriendOperationItemListViewObject__GetEnumerator__,
      v18,
      v19,
      v20);
    sub_B5D5C4(&Method_System_Collections_Generic_List_FriendOperationItemListViewObject__get_Count__, v21, v22, v23);
    sub_B5D5C4(&StringLiteral_10142/*"OnMoveEnd"*/, v24, v25, v26);
    byte_42EBE34 = 1;
  }
  memset(&v35, 0, sizeof(v35));
  ObjectList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)FriendOperationItemListViewManager__get_ObjectList(
                                                                                                this,
                                                                                                *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_B5D69C(0LL, v28);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10142/*"OnMoveEnd"*/,
      0.0,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v35,
      ObjectList,
      (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_FriendOperationItemListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v35,
              (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_FriendOperationItemListViewObject__MoveNext__) )
    {
      current = v35.fields.current;
      v31 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
      System_Action___ctor(v31, (Il2CppObject *)this, Method_FriendOperationItemListViewManager_OnMoveEnd__, 0LL);
      if ( !current )
        sub_B5D69C(v32, v33);
      zero = UnityEngine_Vector3__get_zero(0LL);
      FriendOperationItemListViewObject__Init(
        (FriendOperationItemListViewObject_o *)current,
        mode,
        v31,
        0.0,
        *(UnityEngine_Vector3_o *)&zero.fields.y,
        v34);
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v35,
      (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_FriendOperationItemListViewObject__Dispose__);
  }
}


void __fastcall FriendOperationItemListViewManager__ScrollViewEnabled(
        FriendOperationItemListViewManager_o *this,
        const MethodInfo *method)
{
  UnityEngine_Behaviour_o *scrollView; // x0

  scrollView = (UnityEngine_Behaviour_o *)this->fields.scrollView;
  if ( !scrollView )
    sub_B5D69C(0LL, method);
  UnityEngine_Behaviour__set_enabled(scrollView, 1, 0LL);
}


void __fastcall FriendOperationItemListViewManager__SetClassId(
        FriendOperationItemListViewManager_o *this,
        int32_t classPos,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x0
  const MethodInfo *v25; // x2
  __int64 v26; // x10
  __int64 v27; // x1
  struct System_Collections_Generic_List_ListViewItem__o *itemSortList; // x0
  struct ListViewSort_o *sort; // x8
  __int64 v30; // x1
  int v31; // w20
  const MethodInfo *v32; // x2
  struct System_Collections_Generic_List_ListViewItem__o *v33; // x8
  ListViewItem_o *v34; // x8
  struct System_Collections_Generic_List_ListViewItem__o *v35; // x20
  int32_t size; // w8
  ListViewItem_o *v37; // x8
  struct System_Collections_Generic_List_ListViewItem__o *v38; // x8
  int v39; // w9
  ListViewItem_o *v40; // x8
  System_Collections_Generic_List_Enumerator_T__o v41; // [xsp+8h] [xbp-78h] BYREF
  int v42[2]; // [xsp+20h] [xbp-60h]
  int v43; // [xsp+28h] [xbp-58h]
  System_Collections_Generic_List_Enumerator_T__o i; // [xsp+30h] [xbp-50h] BYREF

  if ( (byte_42EBE3C & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__, classPos, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v6, v7, v8);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v9, v10, v11);
    sub_B5D5C4(&FriendOperationItemListViewItem_TypeInfo, v12, v13, v14);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v15, v16, v17);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v18, v19, v20);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v21, v22, v23);
    byte_42EBE3C = 1;
  }
  memset(&i, 0, sizeof(i));
  v43 = 0;
  itemList = this->fields.itemList;
  if ( itemList )
  {
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v41,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)itemList,
      (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    i = v41;
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &i,
              (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__) )
    {
      if ( i.fields.current )
      {
        v26 = *(&FriendOperationItemListViewItem_TypeInfo->_2.bitflags2 + 1);
        if ( *(&i.fields.current->klass->_2.bitflags2 + 1) >= (unsigned int)v26
          && (FriendOperationItemListViewItem_c *)i.fields.current->klass->_2.typeHierarchy[v26 - 1] == FriendOperationItemListViewItem_TypeInfo )
        {
          FriendOperationItemListViewItem__AnalyzeEntity(
            (FriendOperationItemListViewItem_o *)i.fields.current,
            classPos,
            v25);
        }
      }
    }
    v42[0] = 71;
    v43 = 1;
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &i,
      (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    v43 = 0;
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
          &v41,
          (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)itemSortList,
          (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
        for ( i = v41;
              System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                &i,
                (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
              ((void (*)(void))i.fields.current->klass->vtable[4].method)() )
        {
          if ( !i.fields.current )
            sub_B5D69C(0LL, v30);
        }
        v42[0] = 190;
        v31 = ++v43;
        System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
          &i,
          (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
        if ( v31 && v42[v31 - 1] == 190 )
          v43 = v31 - 1;
        v33 = this->fields.itemSortList;
        if ( v33 )
        {
          if ( v33->fields._size < 1 )
            goto LABEL_34;
          v34 = v33->fields._items->m_Items[0];
          if ( !v34 )
            goto LABEL_36;
          v34->fields.isTermination = 1;
          v35 = this->fields.itemSortList;
          if ( !v35 )
            goto LABEL_36;
          size = v35->fields._size;
          if ( !size )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
          v37 = v35->fields._items->m_Items[size - 1];
          if ( !v37 )
            goto LABEL_36;
          v37->fields.isTermination = 1;
          v38 = this->fields.itemSortList;
          if ( !v38 )
            goto LABEL_36;
          v39 = v38->fields._size;
          if ( v39 < 3 )
          {
LABEL_34:
            FriendOperationItemListViewManager__SetMode_31317684(this, 5, v32);
            return;
          }
          v40 = v38->fields._items->m_Items[v39 - 1];
          if ( v40 )
          {
            v40->fields.isTerminationSpace = 1;
            goto LABEL_34;
          }
        }
      }
LABEL_36:
      sub_B5D69C(itemSortList, v27);
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
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.callbackFunc,
    (System_Int32_array **)callback,
    (System_String_array **)callback,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  FriendOperationItemListViewManager__SetMode_31317684(this, mode, v10);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FriendOperationItemListViewManager__SetMode_31317684(
        FriendOperationItemListViewManager_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  void *emptyMessageBase; // x0
  __int64 v22; // x1
  int32_t v23; // w8
  void *v24; // x20
  int v25; // w8
  __int64 v26; // x23
  FriendOperationItemListViewObject_o *v27; // x22
  System_Action_o *v28; // x0
  const MethodInfo *v29; // x1
  int v30; // w2
  __int64 v31; // x3
  const MethodInfo *v32; // x2
  int v33; // s0
  System_String_o *v34; // x1
  const MethodInfo *v35; // x1
  int32_t v36; // w8
  void *v37; // x20
  int v38; // w8
  __int64 v39; // x23
  FriendOperationItemListViewObject_o *v40; // x21
  System_Action_o *v41; // x22
  const MethodInfo *v42; // x3
  const MethodInfo *v43; // x1
  int32_t v44; // w8
  void *v45; // x20
  int v46; // w8
  __int64 v47; // x23
  FriendOperationItemListViewObject_o *v48; // x21
  System_Action_o *v49; // x22
  const MethodInfo *v50; // x3
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED
  UnityEngine_Vector3_o v52; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  if ( (byte_42EBE32 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, mode, (_DWORD)method, v3);
    sub_B5D5C4(&Method_FriendOperationItemListViewManager_OnMoveEnd__, v6, v7, v8);
    sub_B5D5C4(&Method_System_Collections_Generic_List_FriendOperationItemListViewObject__get_Count__, v9, v10, v11);
    sub_B5D5C4(&Method_System_Collections_Generic_List_FriendOperationItemListViewObject__get_Item__, v12, v13, v14);
    sub_B5D5C4(&StringLiteral_10142/*"OnMoveEnd"*/, v15, v16, v17);
    sub_B5D5C4(&StringLiteral_11562/*"RequestInto"*/, v18, v19, v20);
    byte_42EBE32 = 1;
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
        v33 = 0;
        v34 = (System_String_o *)StringLiteral_11562/*"RequestInto"*/;
        goto LABEL_38;
      case 2:
        FriendOperationItemListViewManager__RequestListObject_31318788(this, 3, v32);
        return;
      case 3:
        ListViewManager__DragMaskStart((ListViewManager_o *)this, 0LL);
        emptyMessageBase = FriendOperationItemListViewManager__get_ClippingObjectList(this, v35);
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
        while ( 1 )
        {
          if ( v38 <= (unsigned int)v39 )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
          v40 = *(FriendOperationItemListViewObject_o **)(*((_QWORD *)v37 + 2) + 8 * v39 + 32);
          v41 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
          System_Action___ctor(v41, (Il2CppObject *)this, Method_FriendOperationItemListViewManager_OnMoveEnd__, 0LL);
          if ( !v40 )
            break;
          zero = UnityEngine_Vector3__get_zero(0LL);
          FriendOperationItemListViewObject__Init(v40, 5, v41, 0.1, *(UnityEngine_Vector3_o *)&zero.fields.y, v42);
          v38 = *((_DWORD *)v37 + 6);
          if ( (int)++v39 >= v38 )
            return;
        }
        goto LABEL_39;
      case 4:
        ListViewManager__DragMaskStart((ListViewManager_o *)this, 0LL);
        emptyMessageBase = FriendOperationItemListViewManager__get_ClippingObjectList(this, v43);
        if ( !emptyMessageBase )
          goto LABEL_39;
        v44 = *((_DWORD *)emptyMessageBase + 6);
        v45 = emptyMessageBase;
        if ( v44 < 1 )
          goto LABEL_37;
        this->fields.callbackCount = v44;
        v46 = *((_DWORD *)emptyMessageBase + 6);
        if ( v46 < 1 )
          return;
        v47 = 0LL;
        break;
      default:
        return;
    }
    while ( 1 )
    {
      if ( v46 <= (unsigned int)v47 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
      v48 = *(FriendOperationItemListViewObject_o **)(*((_QWORD *)v45 + 2) + 8 * v47 + 32);
      v49 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
      System_Action___ctor(v49, (Il2CppObject *)this, Method_FriendOperationItemListViewManager_OnMoveEnd__, 0LL);
      if ( !v48 )
        break;
      v52 = UnityEngine_Vector3__get_zero(0LL);
      FriendOperationItemListViewObject__Init(v48, 6, v49, 0.1, *(UnityEngine_Vector3_o *)&v52.fields.y, v50);
      v46 = *((_DWORD *)v45 + 6);
      if ( (int)++v47 >= v46 )
        return;
    }
LABEL_39:
    sub_B5D69C(emptyMessageBase, v22);
  }
  emptyMessageBase = FriendOperationItemListViewManager__get_ObjectList(this, *(const MethodInfo **)&mode);
  if ( !emptyMessageBase )
    goto LABEL_39;
  v23 = *((_DWORD *)emptyMessageBase + 6);
  v24 = emptyMessageBase;
  if ( v23 < 1 )
  {
LABEL_37:
    this->fields.callbackCount = 1;
    v34 = (System_String_o *)StringLiteral_10142/*"OnMoveEnd"*/;
    v33 = 1045220557;
LABEL_38:
    UnityEngine_MonoBehaviour__Invoke((UnityEngine_MonoBehaviour_o *)this, v34, *(float *)&v33, 0LL);
  }
  else
  {
    this->fields.callbackCount = v23;
    v25 = *((_DWORD *)emptyMessageBase + 6);
    if ( v25 >= 1 )
    {
      v26 = 0LL;
      while ( 1 )
      {
        if ( v25 <= (unsigned int)v26 )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
        v27 = *(FriendOperationItemListViewObject_o **)(*((_QWORD *)v24 + 2) + 8 * v26 + 32);
        v28 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
        System_Action___ctor(v28, (Il2CppObject *)this, Method_FriendOperationItemListViewManager_OnMoveEnd__, 0LL);
        if ( !v27 )
          break;
        UnityEngine_Vector3__get_zero(0LL);
        if ( (byte_42EBE48 & 1) == 0 )
        {
          sub_B5D5C4(&FriendOperationItemListViewItem_TypeInfo, (_DWORD)v29, v30, v31);
          byte_42EBE48 = 1;
        }
        FriendOperationItemListViewObject__SetupDisp(v27, v29);
        v25 = *((_DWORD *)v24 + 6);
        if ( (int)++v26 >= v25 )
          return;
      }
      goto LABEL_39;
    }
  }
}


void __fastcall FriendOperationItemListViewManager__SetMode_31318652(
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
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.callbackFunc2,
    (System_Int32_array **)callback,
    (System_String_array **)callback,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  FriendOperationItemListViewManager__SetMode_31317684(this, mode, v10);
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
  if ( (byte_42EBE31 & 1) == 0 )
  {
    this = (FriendOperationItemListViewManager_o *)sub_B5D5C4(
                                                     &FriendOperationItemListViewObject_TypeInfo,
                                                     (_DWORD)obj,
                                                     (_DWORD)item,
                                                     method);
    byte_42EBE31 = 1;
  }
  if ( !obj
    || (v6 = *(&FriendOperationItemListViewObject_TypeInfo->_2.bitflags2 + 1),
        *(&obj->klass->_2.bitflags2 + 1) < (unsigned int)v6)
    || (FriendOperationItemListViewObject_c *)obj->klass->_2.typeHierarchy[v6 - 1] != FriendOperationItemListViewObject_TypeInfo )
  {
    sub_B5D69C(this, obj);
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  UnityEngine_Object_o *sortKindLabel; // x20
  __int64 v24; // x1
  ListViewSort_o *sort; // x0
  UILabel_o *v26; // x20
  UnityEngine_Object_o *sortOrderSprite; // x20
  struct ListViewSort_o *v28; // x8
  int32_t sortKind; // w9
  System_String_o **v30; // x8
  struct ListViewSort_o *v31; // x8
  _BOOL4 isAscendingOrder; // w8
  System_String_o **v33; // x9
  System_String_o **v34; // x10
  System_String_o **v35; // x8
  System_String_o **v36; // x8
  struct ListViewSort_o *v37; // x8

  if ( (byte_42EBE3B & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_17230/*"btn_sort_up"*/, v5, v6, v7);
    sub_B5D5C4(&StringLiteral_17314/*"btn_txt_up"*/, v8, v9, v10);
    sub_B5D5C4(&StringLiteral_17270/*"btn_txt_new"*/, v11, v12, v13);
    sub_B5D5C4(&StringLiteral_17260/*"btn_txt_down"*/, v14, v15, v16);
    sub_B5D5C4(&StringLiteral_17277/*"btn_txt_old"*/, v17, v18, v19);
    sub_B5D5C4(&StringLiteral_17227/*"btn_sort_down"*/, v20, v21, v22);
    byte_42EBE3B = 1;
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
    v26 = this->fields.sortKindLabel;
    sort = (ListViewSort_o *)ListViewSort__GetSortKindButtonText(sort, 0LL);
    if ( !v26 )
      goto LABEL_38;
    UILabel__set_text(v26, (System_String_o *)sort, 0LL);
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
    v28 = this->fields.sort;
    if ( !v28 )
      goto LABEL_38;
    sortKind = v28->fields.sortKind;
    if ( sortKind == 1 || sortKind == 11 || (unsigned int)(sortKind - 17) <= 1 )
    {
      sort = (ListViewSort_o *)this->fields.sortExplanationSprite;
      if ( !sort )
        goto LABEL_38;
      v30 = (System_String_o **)(v28->fields.isAscendingOrder ? &StringLiteral_17277/*"btn_txt_old"*/ : &StringLiteral_17270/*"btn_txt_new"*/);
      UISprite__set_spriteName((UISprite_o *)sort, *v30, 0LL);
      v31 = this->fields.sort;
      if ( !v31 )
        goto LABEL_38;
      sort = (ListViewSort_o *)this->fields.sortOrderSprite;
      if ( !sort )
        goto LABEL_38;
      isAscendingOrder = v31->fields.isAscendingOrder;
      v33 = (System_String_o **)&StringLiteral_17227/*"btn_sort_down"*/;
      v34 = (System_String_o **)&StringLiteral_17230/*"btn_sort_up"*/;
    }
    else
    {
      sort = (ListViewSort_o *)this->fields.sortExplanationSprite;
      if ( !sort )
        goto LABEL_38;
      v36 = (System_String_o **)(v28->fields.isAscendingOrder ? &StringLiteral_17314/*"btn_txt_up"*/ : &StringLiteral_17260/*"btn_txt_down"*/);
      UISprite__set_spriteName((UISprite_o *)sort, *v36, 0LL);
      v37 = this->fields.sort;
      if ( !v37 )
        goto LABEL_38;
      sort = (ListViewSort_o *)this->fields.sortOrderSprite;
      if ( !sort )
        goto LABEL_38;
      isAscendingOrder = v37->fields.isAscendingOrder;
      v33 = (System_String_o **)&StringLiteral_17230/*"btn_sort_up"*/;
      v34 = (System_String_o **)&StringLiteral_17227/*"btn_sort_down"*/;
    }
    if ( isAscendingOrder )
      v35 = v33;
    else
      v35 = v34;
    UISprite__set_spriteName((UISprite_o *)sort, *v35, 0LL);
    sort = (ListViewSort_o *)this->fields.sortExplanationSprite;
    if ( sort )
    {
      ((void (__fastcall *)(ListViewSort_o *, void *))sort->klass[2]._1.typeMetadataHandle)(
        sort,
        sort->klass[2]._1.interopData);
      return;
    }
LABEL_38:
    sub_B5D69C(sort, v24);
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
    sub_B5D69C(this, kind);
  sort->fields.sortKind = kind;
}


void __fastcall FriendOperationItemListViewManager__SetupClassBoardInfo(
        FriendOperationItemListViewManager_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  int v32; // w1
  int v33; // w2
  __int64 v34; // x3
  int v35; // w1
  int v36; // w2
  __int64 v37; // x3
  System_Collections_Generic_Dictionary_int__int__o *classBoardMaxDictionary; // x0
  BattleServantConfConponent_o *p_classBoardMaxDictionary; // x20
  System_Collections_Generic_Dictionary_int__int__o *v40; // x19
  System_String_array **v41; // x2
  System_String_array **v42; // x3
  System_Boolean_array **v43; // x4
  System_Int32_array **v44; // x5
  System_Int32_array *v45; // x6
  System_Int32_array *v46; // x7
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *Master_WarQuestSelectionMaster; // x0
  __int64 v48; // x1
  __int64 v49; // x1
  __int64 v50; // x3
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v53; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v56; // x3
  System_Collections_Generic_IEnumerator_T__c *v57; // x8
  unsigned __int64 v58; // x10
  int32_t *v59; // x11
  __int64 v60; // x0
  __int64 v61; // x0
  __int64 v62; // x21
  __int64 v63; // x9
  ClassBoardSquareMaster_o *v64; // x0
  __int64 v65; // x1
  ClassBoardSquareEntity_array *OtherThanNoneEntity; // x0
  __int64 v67; // x1
  System_Collections_Generic_IEnumerator_T__c *v68; // x8
  unsigned __int64 v69; // x10
  int32_t *v70; // x11
  __int64 v71; // x0

  if ( (byte_42EBE3D & 1) == 0 )
  {
    sub_B5D5C4(&ClassBoardBaseEntity_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, v5, v6, v7);
    sub_B5D5C4(&Method_DataManager_GetMaster_ClassBoardBaseMaster___, v8, v9, v10);
    sub_B5D5C4(&Method_DataManager_GetMaster_ClassBoardSquareMaster___, v11, v12, v13);
    sub_B5D5C4(&DataManager_TypeInfo, v14, v15, v16);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_int__int__Add__, v17, v18, v19);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_int__int__Clear__, v20, v21, v22);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_int__int___ctor__, v23, v24, v25);
    sub_B5D5C4(&System_Collections_Generic_Dictionary_int__int__TypeInfo, v26, v27, v28);
    sub_B5D5C4(&System_IDisposable_TypeInfo, v29, v30, v31);
    sub_B5D5C4(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v32, v33, v34);
    sub_B5D5C4(&System_Collections_IEnumerator_TypeInfo, v35, v36, v37);
    byte_42EBE3D = 1;
  }
  classBoardMaxDictionary = this->fields.classBoardMaxDictionary;
  p_classBoardMaxDictionary = (BattleServantConfConponent_o *)&this->fields.classBoardMaxDictionary;
  if ( classBoardMaxDictionary )
  {
    System_Collections_Generic_Dictionary_int__int___Clear(
      classBoardMaxDictionary,
      (const MethodInfo_2F0B024 *)Method_System_Collections_Generic_Dictionary_int__int__Clear__);
  }
  else
  {
    v40 = (System_Collections_Generic_Dictionary_int__int__o *)sub_B5D694(System_Collections_Generic_Dictionary_int__int__TypeInfo);
    System_Collections_Generic_Dictionary_int__int____ctor(
      v40,
      (const MethodInfo_2F0A2B4 *)Method_System_Collections_Generic_Dictionary_int__int___ctor__);
    p_classBoardMaxDictionary->klass = (BattleServantConfConponent_c *)v40;
    sub_B5D560(p_classBoardMaxDictionary, (System_Int32_array **)v40, v41, v42, v43, v44, v45, v46);
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_ClassBoardBaseMaster___);
  if ( !Master_WarQuestSelectionMaster
    || (Master_WarQuestSelectionMaster = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)Master_WarQuestSelectionMaster[1].klass) == 0LL )
  {
    sub_B5D69C(Master_WarQuestSelectionMaster, v48);
  }
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 Master_WarQuestSelectionMaster,
                 (const MethodInfo_2BB8C48 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B5D69C(0LL, v49);
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v53 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v53;
        p_offset += 4;
        if ( v53 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_16;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_16:
      p_method = sub_AF54C0(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL, v50);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v57 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v58 = 0LL;
      v59 = &v57->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v59 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v58;
        v59 += 4;
        if ( v58 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_23;
      }
      v60 = (__int64)&v57->vtable[*v59].method;
    }
    else
    {
LABEL_23:
      v60 = sub_AF54C0(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL, v56);
    }
    v61 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v60)(
            Enumerator,
            *(_QWORD *)(v60 + 8));
    v62 = v61;
    if ( v61 )
    {
      v63 = *(&ClassBoardBaseEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(unsigned __int8 *)(*(_QWORD *)v61 + 300LL) < (unsigned int)v63
        || *(ClassBoardBaseEntity_c **)(*(_QWORD *)(*(_QWORD *)v61 + 200LL) + 8 * v63 - 8) != ClassBoardBaseEntity_TypeInfo )
      {
        sub_B5D990(v61);
LABEL_44:
        sub_B5D69C(v64, v65);
      }
    }
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    v64 = (ClassBoardSquareMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_ClassBoardSquareMaster___);
    if ( !v62 )
      goto LABEL_44;
    if ( !v64 )
      sub_B5D69C(0LL, v65);
    OtherThanNoneEntity = ClassBoardSquareMaster__GetOtherThanNoneEntity(v64, *(_DWORD *)(v62 + 16), 0LL);
    if ( OtherThanNoneEntity )
    {
      if ( !p_classBoardMaxDictionary->klass )
        sub_B5D69C(OtherThanNoneEntity, v67);
      System_Collections_Generic_Dictionary_int__int___Add(
        (System_Collections_Generic_Dictionary_int__int__o *)p_classBoardMaxDictionary->klass,
        *(_DWORD *)(v62 + 16),
        OtherThanNoneEntity->max_length,
        (const MethodInfo_2F0AE58 *)Method_System_Collections_Generic_Dictionary_int__int__Add__);
    }
  }
  v68 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v69 = 0LL;
    v70 = &v68->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v70 - 1) != System_IDisposable_TypeInfo )
    {
      ++v69;
      v70 += 4;
      if ( v69 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_40;
    }
    v71 = (__int64)&v68->vtable[*v70].method;
  }
  else
  {
LABEL_40:
    v71 = sub_AF54C0(Enumerator, System_IDisposable_TypeInfo, 0LL, v56);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v71)(Enumerator, *(_QWORD *)(v71 + 8));
}


void __fastcall FriendOperationItemListViewManager__add_callbackFunc(
        FriendOperationItemListViewManager_o *this,
        FriendOperationItemListViewManager_CallbackFunc_o *value,
        const MethodInfo *method)
{
  __int64 v3; // x3
  System_Delegate_o *callbackFunc; // x21
  struct FriendOperationItemListViewManager_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  FriendOperationItemListViewManager_o *v11; // x0
  FriendOperationItemListViewManager_CallbackFunc_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_42EBE25 & 1) == 0 )
  {
    sub_B5D5C4(&FriendOperationItemListViewManager_CallbackFunc_TypeInfo, (_DWORD)value, (_DWORD)method, v3);
    byte_42EBE25 = 1;
  }
  callbackFunc = (System_Delegate_o *)this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Combine(callbackFunc, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (FriendOperationItemListViewManager_CallbackFunc_c *)v8->klass != FriendOperationItemListViewManager_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_B51FDC(p_callbackFunc, v8, callbackFunc);
    v10 = callbackFunc == (System_Delegate_o *)v9;
    callbackFunc = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_B5D990(v8);
  FriendOperationItemListViewManager__remove_callbackFunc(v11, v12, v13);
}


void __fastcall FriendOperationItemListViewManager__add_callbackFunc2(
        FriendOperationItemListViewManager_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  __int64 v3; // x3
  System_Delegate_o *callbackFunc2; // x21
  struct System_Action_o **p_callbackFunc2; // x20
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  FriendOperationItemListViewManager_o *v11; // x0
  System_Action_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_42EBE27 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)value, (_DWORD)method, v3);
    byte_42EBE27 = 1;
  }
  callbackFunc2 = (System_Delegate_o *)this->fields.callbackFunc2;
  p_callbackFunc2 = &this->fields.callbackFunc2;
  while ( 1 )
  {
    v8 = System_Delegate__Combine(callbackFunc2, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (System_Action_c *)v8->klass != System_Action_TypeInfo )
        break;
    }
    v9 = sub_B51FDC(p_callbackFunc2, v8, callbackFunc2);
    v10 = callbackFunc2 == (System_Delegate_o *)v9;
    callbackFunc2 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_B5D990(v8);
  FriendOperationItemListViewManager__remove_callbackFunc2(v11, v12, v13);
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v29; // x19
  __int64 v30; // x1
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  Il2CppObject *current; // x21
  _BOOL8 v33; // x0
  __int64 v34; // x1
  FriendOperationItemListViewObject_o *Component_srcLineSprite; // x0
  const MethodInfo *v36; // x1
  EventMissionProgressRequest_Argument_ProgressData_o *v37; // x21
  ListViewItem_o *Item; // x0
  __int64 v39; // x1
  _BOOL8 v40; // x0
  __int64 v41; // x1
  System_Collections_Generic_List_Enumerator_T__o v43; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v44; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_42EBE2D & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v8, v9, v10);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_FriendOperationItemListViewObject___, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_List_FriendOperationItemListViewObject__Add__, v14, v15, v16);
    sub_B5D5C4(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v17, v18, v19);
    sub_B5D5C4(&Method_System_Collections_Generic_List_FriendOperationItemListViewObject___ctor__, v20, v21, v22);
    sub_B5D5C4(&System_Collections_Generic_List_FriendOperationItemListViewObject__TypeInfo, v23, v24, v25);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v26, v27, v28);
    byte_42EBE2D = 1;
  }
  memset(&v44, 0, sizeof(v44));
  v29 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_FriendOperationItemListViewObject__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v29,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_FriendOperationItemListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_B5D69C(0LL, v30);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v43,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)objectList,
    (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v44 = v43;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v44,
            (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v44.fields.current;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v33 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v33 )
    {
      if ( !current )
        sub_B5D69C(v33, v34);
      Component_srcLineSprite = (FriendOperationItemListViewObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                         (UnityEngine_GameObject_o *)current,
                                                                         (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_FriendOperationItemListViewObject___);
      v37 = (EventMissionProgressRequest_Argument_ProgressData_o *)Component_srcLineSprite;
      if ( !Component_srcLineSprite )
        sub_B5D69C(0LL, v36);
      Item = (ListViewItem_o *)FriendOperationItemListViewObject__GetItem(Component_srcLineSprite, v36);
      if ( !Item )
        sub_B5D69C(0LL, v39);
      if ( Item->fields.isTermination )
      {
        v40 = ListViewManager__ClippingItem_23920288((ListViewManager_o *)this, Item, 0LL);
        if ( v40 )
        {
          if ( !v29 )
            sub_B5D69C(v40, v41);
          goto LABEL_16;
        }
      }
      else
      {
        if ( !v29 )
          sub_B5D69C(Item, v39);
LABEL_16:
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v29,
          v37,
          (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_FriendOperationItemListViewObject__Add__);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v44,
    (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_FriendOperationItemListViewObject__o *)v29;
}


bool __fastcall FriendOperationItemListViewManager__get_IsExistSwapLockUser(
        FriendOperationItemListViewManager_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  FriendOperationItemListViewManager_o *v4; // x19
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x22
  unsigned __int64 i; // x20
  ListViewItem_o *v13; // x8
  __int64 v14; // x11

  v4 = this;
  if ( (byte_42EBE2E & 1) == 0 )
  {
    sub_B5D5C4(&FriendOperationItemListViewItem_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v5, v6, v7);
    this = (FriendOperationItemListViewManager_o *)sub_B5D5C4(
                                                     &Method_System_Collections_Generic_List_ListViewItem__get_Item__,
                                                     v8,
                                                     v9,
                                                     v10);
    byte_42EBE2E = 1;
  }
  itemList = v4->fields.itemList;
  if ( itemList )
  {
    for ( i = 0LL; (__int64)i < itemList->fields._size; ++i )
    {
      if ( i >= (unsigned int)itemList->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
      v13 = itemList->fields._items->m_Items[i];
      if ( v13 )
      {
        v14 = *(&FriendOperationItemListViewItem_TypeInfo->_2.bitflags2 + 1);
        if ( *(&v13->klass->_2.bitflags2 + 1) >= (unsigned int)v14
          && (FriendOperationItemListViewItem_c *)v13->klass->_2.typeHierarchy[v14 - 1] == FriendOperationItemListViewItem_TypeInfo
          && BYTE2(v13[1].fields.sortValue1B) )
        {
          return 1;
        }
      }
      itemList = v4->fields.itemList;
      if ( !itemList )
        sub_B5D69C(this, method);
    }
  }
  return 0;
}


System_Collections_Generic_List_FriendOperationItemListViewObject__o *__fastcall FriendOperationItemListViewManager__get_ObjectList(
        FriendOperationItemListViewManager_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v29; // x19
  __int64 v30; // x1
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  Il2CppObject *current; // x20
  _BOOL8 v33; // x0
  __int64 v34; // x1
  EventMissionProgressRequest_Argument_ProgressData_o *Component_srcLineSprite; // x0
  System_Collections_Generic_List_Enumerator_T__o v37; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v38; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_42EBE2C & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v8, v9, v10);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_FriendOperationItemListViewObject___, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_List_FriendOperationItemListViewObject__Add__, v14, v15, v16);
    sub_B5D5C4(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v17, v18, v19);
    sub_B5D5C4(&Method_System_Collections_Generic_List_FriendOperationItemListViewObject___ctor__, v20, v21, v22);
    sub_B5D5C4(&System_Collections_Generic_List_FriendOperationItemListViewObject__TypeInfo, v23, v24, v25);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v26, v27, v28);
    byte_42EBE2C = 1;
  }
  memset(&v38, 0, sizeof(v38));
  v29 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_FriendOperationItemListViewObject__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v29,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_FriendOperationItemListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_B5D69C(0LL, v30);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v37,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)objectList,
    (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v38 = v37;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v38,
            (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v38.fields.current;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v33 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v33 )
    {
      if ( !current )
        sub_B5D69C(v33, v34);
      Component_srcLineSprite = (EventMissionProgressRequest_Argument_ProgressData_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                                         (UnityEngine_GameObject_o *)current,
                                                                                         (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_FriendOperationItemListViewObject___);
      if ( !v29 )
        sub_B5D69C(Component_srcLineSprite, Component_srcLineSprite);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v29,
        Component_srcLineSprite,
        (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_FriendOperationItemListViewObject__Add__);
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v38,
    (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_FriendOperationItemListViewObject__o *)v29;
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
  sub_B5D560(
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
      sub_B5D69C(v10, v11);
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
  sub_B5D560(
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
      sub_B5D69C(v10, v11);
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
  sub_B5D560(
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
      sub_B5D69C(v10, v11);
    Index = ListViewObject__get_Index(obj, 0LL);
    FriendOperationItemListViewManager_CallbackFunc__Invoke(callbackFunc, 11, Index, 0LL);
  }
}


void __fastcall FriendOperationItemListViewManager__remove_callbackFunc(
        FriendOperationItemListViewManager_o *this,
        FriendOperationItemListViewManager_CallbackFunc_o *value,
        const MethodInfo *method)
{
  __int64 v3; // x3
  System_Delegate_o *callbackFunc; // x21
  struct FriendOperationItemListViewManager_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  FriendOperationItemListViewManager_o *v11; // x0
  System_Action_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_42EBE26 & 1) == 0 )
  {
    sub_B5D5C4(&FriendOperationItemListViewManager_CallbackFunc_TypeInfo, (_DWORD)value, (_DWORD)method, v3);
    byte_42EBE26 = 1;
  }
  callbackFunc = (System_Delegate_o *)this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Remove(callbackFunc, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (FriendOperationItemListViewManager_CallbackFunc_c *)v8->klass != FriendOperationItemListViewManager_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_B51FDC(p_callbackFunc, v8, callbackFunc);
    v10 = callbackFunc == (System_Delegate_o *)v9;
    callbackFunc = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_B5D990(v8);
  FriendOperationItemListViewManager__add_callbackFunc2(v11, v12, v13);
}


void __fastcall FriendOperationItemListViewManager__remove_callbackFunc2(
        FriendOperationItemListViewManager_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  __int64 v3; // x3
  System_Delegate_o *callbackFunc2; // x21
  struct System_Action_o **p_callbackFunc2; // x20
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  FriendOperationItemListViewManager_o *v11; // x0
  const MethodInfo *v12; // x1

  if ( (byte_42EBE28 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)value, (_DWORD)method, v3);
    byte_42EBE28 = 1;
  }
  callbackFunc2 = (System_Delegate_o *)this->fields.callbackFunc2;
  p_callbackFunc2 = &this->fields.callbackFunc2;
  while ( 1 )
  {
    v8 = System_Delegate__Remove(callbackFunc2, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (System_Action_c *)v8->klass != System_Action_TypeInfo )
        break;
    }
    v9 = sub_B51FDC(p_callbackFunc2, v8, callbackFunc2);
    v10 = callbackFunc2 == (System_Delegate_o *)v9;
    callbackFunc2 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_B5D990(v8);
  FriendOperationItemListViewManager__get_isMessageApply(v11, v12);
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
    sub_B5D69C(scrollBar, method);
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
    sub_B5D69C(scrollBar, b);
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
  sub_B5D560(p_method);
}


System_IAsyncResult_o *__fastcall FriendOperationItemListViewManager_CallbackFunc__BeginInvoke(
        FriendOperationItemListViewManager_CallbackFunc_o *this,
        int32_t kind,
        int32_t result,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  __int64 v13[3]; // [xsp+0h] [xbp-40h] BYREF
  int32_t v14; // [xsp+18h] [xbp-28h] BYREF
  int32_t v15; // [xsp+1Ch] [xbp-24h] BYREF

  v14 = result;
  v15 = kind;
  if ( (byte_42E56E4 & 1) == 0 )
  {
    sub_B5D5C4(&int_TypeInfo, kind, result, callback);
    sub_B5D5C4(&FriendOperationItemListViewManager_ResultKind_TypeInfo, v9, v10, v11);
    byte_42E56E4 = 1;
  }
  v13[2] = 0LL;
  v13[0] = j_il2cpp_value_box_0(FriendOperationItemListViewManager_ResultKind_TypeInfo, &v15);
  v13[1] = j_il2cpp_value_box_0(int_TypeInfo, &v14);
  return (System_IAsyncResult_o *)sub_B5D568(this, v13, callback, object);
}


void __fastcall FriendOperationItemListViewManager_CallbackFunc__EndInvoke(
        FriendOperationItemListViewManager_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B5D56C(result, 0LL, method);
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
        sub_B5D680(*(_QWORD *)&v21->fields.extra_arg, *(_QWORD *)&kind, *(_QWORD *)&result);
      if ( (sub_B5D5F4(v23) & 1) == 0 )
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
      v25 = sub_B5D5EC(v23);
      v26 = sub_B5D9F0(v23);
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
            v19 = sub_AF54C0(v22, v30, v31, v27);
          }
          v18 = *(_QWORD *)(v19 + 8);
        }
        else
        {
          v18 = *(_QWORD *)(*v22 + 16LL * *(unsigned __int16 *)(v23 + 72) + 320);
        }
        v20 = (void (__fastcall **)(__int64 *, _QWORD, _QWORD, _QWORD))sub_B5D674(v18, v23);
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
            v17 = sub_AF54C0(v22, class_0, v10, v12);
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
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  struct FriendOperationItemListViewManager___c_StaticFields *static_fields; // x0

  if ( (byte_42E56E2 & 1) == 0 )
  {
    sub_B5D5C4(&FriendOperationItemListViewManager___c_TypeInfo, v1, v2, v3);
    byte_42E56E2 = 1;
  }
  v4 = (Il2CppObject *)sub_B5D694(FriendOperationItemListViewManager___c_TypeInfo);
  System_Object___ctor(v4, 0LL);
  static_fields = FriendOperationItemListViewManager___c_TypeInfo->static_fields;
  static_fields->__9 = (struct FriendOperationItemListViewManager___c_o *)v4;
  sub_B5D560(static_fields);
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
  if ( (byte_42E56E3 & 1) == 0 )
  {
    this = (FriendOperationItemListViewManager___c_o *)sub_B5D5C4(
                                                         &UserFriendRequestHistoryEntity_TypeInfo,
                                                         (_DWORD)a,
                                                         (_DWORD)b,
                                                         method);
    byte_42E56E3 = 1;
  }
  if ( !b )
LABEL_11:
    sub_B5D69C(this, a);
  a = (DataEntityBase_o *)UserFriendRequestHistoryEntity_TypeInfo;
  v6 = *(&UserFriendRequestHistoryEntity_TypeInfo->_2.bitflags2 + 1);
  if ( *(&b->klass->_2.bitflags2 + 1) < (unsigned int)v6
    || (UserFriendRequestHistoryEntity_c *)b->klass->_2.typeHierarchy[v6 - 1] != UserFriendRequestHistoryEntity_TypeInfo )
  {
    this = (FriendOperationItemListViewManager___c_o *)sub_B5D990(b);
    goto LABEL_11;
  }
  if ( !v5 )
    goto LABEL_11;
  if ( *(unsigned __int8 *)(*v5 + 300) >= (unsigned int)v6
    && *(UserFriendRequestHistoryEntity_c **)(*(_QWORD *)(*v5 + 200) + 8 * (v6 - 1)) == UserFriendRequestHistoryEntity_TypeInfo )
  {
    return System_Int64__CompareTo_39744264((int64_t)&b[2].monitor, v5[5], 0LL);
  }
  v8 = (FriendOperationItemListViewManager_CallbackFunc_o *)sub_B5D990(v5);
  FriendOperationItemListViewManager_CallbackFunc___ctor(v8, v9, v10, v11);
  return result;
}