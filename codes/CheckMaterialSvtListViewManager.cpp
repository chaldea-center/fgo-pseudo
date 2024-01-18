void __fastcall CheckMaterialSvtListViewManager___ctor(
        CheckMaterialSvtListViewManager_o *this,
        const MethodInfo *method)
{
  ListViewManager___ctor((ListViewManager_o *)this, 0LL);
}


void __fastcall CheckMaterialSvtListViewManager__CallOnSelectitem(
        CheckMaterialSvtListViewManager_o *this,
        CheckMaterialSvtListViewItem_o *selectItem,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  struct System_Action_CheckMaterialSvtListViewItem__o *onSelectItem; // x21

  if ( (byte_4187CE9 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Action_CheckMaterialSvtListViewItem__Invoke__, selectItem);
    byte_4187CE9 = 1;
  }
  onSelectItem = this->fields.onSelectItem;
  if ( onSelectItem )
  {
    this->fields.onSelectItem = 0LL;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&this->fields.onSelectItem,
      0LL,
      (System_String_array **)method,
      v3,
      v4,
      v5,
      v6,
      v7);
    System_Action_Uri___Invoke(
      (System_Action_Uri__o *)onSelectItem,
      (System_Uri_o *)selectItem,
      (const MethodInfo_24BBAEC *)Method_System_Action_CheckMaterialSvtListViewItem__Invoke__);
  }
}


void __fastcall CheckMaterialSvtListViewManager__CancelDragEnd(
        CheckMaterialSvtListViewManager_o *this,
        const MethodInfo *method)
{
  ;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CheckMaterialSvtListViewManager__CreateCommandCodeList(
        CheckMaterialSvtListViewManager_o *this,
        System_Collections_Generic_List_long__o *commandCodeIds,
        bool isExceeded,
        bool isSellLastServant,
        const MethodInfo *method)
{
  CheckMaterialSvtListViewManager_o *v8; // x19
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  System_Collections_Generic_List_UserCommandCodeEntity__o *v16; // x0
  __int64 v17; // x1
  System_Collections_Generic_List_WarBoardManager_TaskList__o *v18; // x20
  Il2CppObject *current; // x22
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *itemList; // x21
  int32_t v21; // w24
  CheckMaterialSvtListViewItem_o *v22; // x23
  const MethodInfo *v23; // x4
  __int64 v24; // x0
  __int64 v25; // x1
  System_Collections_Generic_List_Enumerator_T__o v26; // [xsp+8h] [xbp-68h] BYREF

  v8 = this;
  if ( (byte_4187CE2 & 1) == 0 )
  {
    sub_B2C35C(&CheckMaterialSvtListViewItem_TypeInfo, commandCodeIds);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_UserCommandCodeEntity__Dispose__, v9);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_UserCommandCodeEntity__MoveNext__, v10);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_UserCommandCodeEntity__get_Current__, v11);
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewItem__Add__, v12);
    sub_B2C35C(&Method_System_Collections_Generic_List_UserCommandCodeEntity__GetEnumerator__, v13);
    sub_B2C35C(&Method_System_Collections_Generic_List_UserCommandCodeEntity__IndexOf__, v14);
    this = (CheckMaterialSvtListViewManager_o *)sub_B2C35C(
                                                  &Method_System_Collections_Generic_List_long__get_Count__,
                                                  v15);
    byte_4187CE2 = 1;
  }
  memset(&v26, 0, sizeof(v26));
  if ( commandCodeIds && commandCodeIds->fields._size >= 1 && !isExceeded && !isSellLastServant )
  {
    v16 = CheckMaterialSvtListViewManager__GetSortEntList(this, commandCodeIds, (const MethodInfo *)isExceeded);
    if ( !v16 )
      sub_B2C434(0LL, v17);
    v18 = (System_Collections_Generic_List_WarBoardManager_TaskList__o *)v16;
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v26,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v16,
      (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_UserCommandCodeEntity__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v26,
              (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_UserCommandCodeEntity__MoveNext__) )
    {
      current = v26.fields.current;
      itemList = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v8->fields.itemList;
      v21 = System_Collections_Generic_List_WarBoardManager_TaskList___IndexOf(
              v18,
              (WarBoardManager_TaskList_o *)v26.fields.current,
              (const MethodInfo_2EF5510 *)Method_System_Collections_Generic_List_UserCommandCodeEntity__IndexOf__);
      v22 = (CheckMaterialSvtListViewItem_o *)sub_B2C42C(CheckMaterialSvtListViewItem_TypeInfo);
      CheckMaterialSvtListViewItem___ctor_25437968(v22, v21, (UserCommandCodeEntity_o *)current, 0, v23);
      if ( !itemList )
        sub_B2C434(v24, v25);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        itemList,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v22,
        (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v26,
      (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_UserCommandCodeEntity__Dispose__);
  }
}


void __fastcall CheckMaterialSvtListViewManager__CreateList(
        CheckMaterialSvtListViewManager_o *this,
        System_Collections_Generic_List_CombineServantListViewItem__o *selectMaterialItemList,
        int32_t kind,
        System_Collections_Generic_List_long__o *servantIds,
        System_Collections_Generic_List_long__o *commandCodeids,
        bool isExceeded,
        bool isSellLastServant,
        const MethodInfo *method)
{
  const MethodInfo *v14; // x5
  const MethodInfo *v15; // x4

  this->fields.kind = kind;
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
  isExceeded = isExceeded;
  isSellLastServant = isSellLastServant;
  CheckMaterialSvtListViewManager__CreateServantList(
    this,
    selectMaterialItemList,
    servantIds,
    isExceeded,
    isSellLastServant,
    v14);
  CheckMaterialSvtListViewManager__CreateCommandCodeList(this, commandCodeids, isExceeded, isSellLastServant, v15);
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
}


void __fastcall CheckMaterialSvtListViewManager__CreateServantList(
        CheckMaterialSvtListViewManager_o *this,
        System_Collections_Generic_List_CombineServantListViewItem__o *selectMaterialItemList,
        System_Collections_Generic_List_long__o *servantIds,
        bool isExceeded,
        bool isSellLastServant,
        const MethodInfo *method)
{
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
  UserDeckMaster_o *MasterData_WarQuestSelectionMaster; // x21
  CheckMaterialSvtListViewManager_o *v25; // x0
  const MethodInfo *v26; // x2
  const MethodInfo *v27; // x2
  CheckMaterialSvtListViewManager_o *v28; // x22
  _BOOL8 v29; // x0
  __int64 v30; // x1
  Il2CppObject *current; // x25
  void *monitor; // x19
  Il2CppClass *klass; // x20
  __int64 v34; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *itemList; // x26
  __int64 v36; // x0
  __int64 v37; // x1
  Il2CppObject v38; // q0
  int32_t v39; // w27
  System_Int64_array *v40; // x21
  System_Int64_array *v41; // x23
  int64_t v42; // x0
  __int64 v43; // x1
  int64_t favoriteUserSvtId; // x24
  int64_t v45; // x20
  CheckMaterialSvtListViewItem_o *v46; // x19
  const MethodInfo *v47; // x6
  __int64 v48; // x0
  __int64 v49; // x1
  System_Collections_Generic_List_int__o *v50; // [xsp+0h] [xbp-E0h]
  UserGameEntity_o *SelfUserGame; // [xsp+8h] [xbp-D8h]
  CheckMaterialSvtListViewManager_o *v52; // [xsp+10h] [xbp-D0h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v54; // [xsp+20h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v55; // [xsp+40h] [xbp-A0h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v56; // [xsp+60h] [xbp-80h] BYREF
  System_Int64_array *equipIdList; // [xsp+80h] [xbp-60h] BYREF
  System_Int64_array *svtIdList; // [xsp+88h] [xbp-58h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v59; // 0:x0.16

  v52 = this;
  if ( (byte_4187CE0 & 1) == 0 )
  {
    sub_B2C35C(&CheckMaterialSvtListViewItem_TypeInfo, selectMaterialItemList);
    sub_B2C35C(&Method_DataManager_GetMasterData_UserDeckMaster___, v9);
    sub_B2C35C(&Method_DataManager_GetMasterData_UserServantMaster___, v10);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_UserServantEntity__Dispose__, v11);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_UserServantEntity__MoveNext__, v12);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_UserServantEntity__get_Current__, v13);
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewItem__Add__, v14);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__Contains__, v15);
    sub_B2C35C(&Method_System_Collections_Generic_List_UserServantEntity__GetEnumerator__, v16);
    sub_B2C35C(&Method_System_Collections_Generic_List_UserServantEntity__IndexOf__, v17);
    sub_B2C35C(&Method_System_Collections_Generic_List_long__get_Count__, v18);
    sub_B2C35C(&Method_System_Collections_Generic_List_CombineServantListViewItem__get_Count__, v19);
    sub_B2C35C(&NetworkManager_TypeInfo, v20);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v21);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v22);
    this = (CheckMaterialSvtListViewManager_o *)sub_B2C35C(
                                                  &Method_SingletonMonoBehaviour_DataManager__get_Instance__,
                                                  v23);
    byte_4187CE0 = 1;
  }
  equipIdList = 0LL;
  svtIdList = 0LL;
  memset(&v56, 0, sizeof(v56));
  if ( servantIds && servantIds->fields._size >= 1 )
  {
    if ( !selectMaterialItemList )
      goto LABEL_41;
    if ( selectMaterialItemList->fields._size < 1 )
      return;
    this = (CheckMaterialSvtListViewManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !this )
      goto LABEL_41;
    DataManager__GetMasterData_WarQuestSelectionMaster_(
      (DataManager_o *)this,
      (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserServantMaster___);
    SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
    this = (CheckMaterialSvtListViewManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !this )
      goto LABEL_41;
    MasterData_WarQuestSelectionMaster = (UserDeckMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                               (DataManager_o *)this,
                                                               (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserDeckMaster___);
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    this = (CheckMaterialSvtListViewManager_o *)NetworkManager__get_UserId(0LL);
    if ( !MasterData_WarQuestSelectionMaster
      || (UserDeckMaster__getPartyList(MasterData_WarQuestSelectionMaster, &svtIdList, &equipIdList, (int64_t)this, 0LL),
          v50 = CheckMaterialSvtListViewManager__GetEquipedCommandCodeSellLastSvtList(v25, selectMaterialItemList, v26),
          (this = (CheckMaterialSvtListViewManager_o *)CheckMaterialSvtListViewManager__GetSvtSortEntList(
                                                         (CheckMaterialSvtListViewManager_o *)v50,
                                                         servantIds,
                                                         v27)) == 0LL) )
    {
LABEL_41:
      sub_B2C434(this, selectMaterialItemList);
    }
    v28 = this;
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v55,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this,
      (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_UserServantEntity__GetEnumerator__);
    v56.fields.current = (Il2CppObject *)v55.fields.fakeValue;
    *(_OWORD *)&v56.fields.list = *(_OWORD *)&v55.fields.currentCryptoKey;
    while ( 1 )
    {
      v29 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v56,
              (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_UserServantEntity__MoveNext__);
      if ( !v29 )
        break;
      current = v56.fields.current;
      if ( isExceeded )
      {
        if ( !v56.fields.current )
          sub_B2C434(v29, v30);
        v29 = UserServantEntity__isExceeded((UserServantEntity_o *)v56.fields.current, 0LL);
        if ( !v29 )
          continue;
      }
      if ( !isSellLastServant )
        goto LABEL_26;
      if ( !current )
        sub_B2C434(v29, v30);
      klass = current[5].klass;
      monitor = current[5].monitor;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v59.fields.currentCryptoKey = klass;
      *(_QWORD *)&v59.fields.fakeValue = monitor;
      v34 = (unsigned int)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v59, 0LL);
      if ( !v50 )
        sub_B2C434(0LL, v34);
      if ( System_Collections_Generic_List_int___Contains(
             v50,
             v34,
             (const MethodInfo_2F6744C *)Method_System_Collections_Generic_List_int__Contains__) )
      {
LABEL_26:
        itemList = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v52->fields.itemList;
        v36 = System_Collections_Generic_List_WarBoardManager_TaskList___IndexOf(
                (System_Collections_Generic_List_WarBoardManager_TaskList__o *)v28,
                (WarBoardManager_TaskList_o *)current,
                (const MethodInfo_2EF5510 *)Method_System_Collections_Generic_List_UserServantEntity__IndexOf__);
        if ( !current )
          sub_B2C434(v36, v37);
        v38 = current[2];
        v39 = v36;
        v40 = equipIdList;
        v41 = svtIdList;
        *(Il2CppObject *)&v55.fields.currentCryptoKey = current[1];
        *(Il2CppObject *)&v55.fields.fakeValue = v38;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        }
        v54 = v55;
        v42 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v54, 0LL);
        if ( !SelfUserGame )
          sub_B2C434(v42, v43);
        favoriteUserSvtId = SelfUserGame->fields.favoriteUserSvtId;
        v45 = v42;
        v46 = (CheckMaterialSvtListViewItem_o *)sub_B2C42C(CheckMaterialSvtListViewItem_TypeInfo);
        CheckMaterialSvtListViewItem___ctor(
          v46,
          v39,
          (UserServantEntity_o *)current,
          v41,
          v40,
          v45 == favoriteUserSvtId,
          v47);
        if ( !itemList )
          sub_B2C434(v48, v49);
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          itemList,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v46,
          (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
      }
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v56,
      (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_UserServantEntity__Dispose__);
  }
}


void __fastcall CheckMaterialSvtListViewManager__DestroyList(
        CheckMaterialSvtListViewManager_o *this,
        const MethodInfo *method)
{
  ListViewManager__DestroyList((ListViewManager_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
int64_t __fastcall CheckMaterialSvtListViewManager__GetAmountSortValue(
        CheckMaterialSvtListViewManager_o *this,
        int32_t svtId,
        const MethodInfo *method)
{
  CheckMaterialSvtListViewManager_o *v4; // x20
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x22
  unsigned __int64 v9; // x24
  int64_t v10; // x21
  ListViewItem_o *v11; // x8
  __int64 v12; // x11
  __int64 v13; // x22
  __int64 v14; // x23
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v16; // 0:x0.16

  v4 = this;
  if ( (byte_4187CEA & 1) == 0 )
  {
    sub_B2C35C(&CheckMaterialSvtListViewItem_TypeInfo, *(_QWORD *)&svtId);
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v6);
    this = (CheckMaterialSvtListViewManager_o *)sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v7);
    byte_4187CEA = 1;
  }
  itemList = v4->fields.itemList;
  if ( !itemList )
LABEL_19:
    sub_B2C434(this, *(_QWORD *)&svtId);
  v9 = 0LL;
  v10 = 0LL;
  while ( (__int64)v9 < itemList->fields._size )
  {
    if ( v9 >= (unsigned int)itemList->fields._size )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
    v11 = itemList->fields._items->m_Items[v9];
    if ( v11 )
    {
      v12 = *(&CheckMaterialSvtListViewItem_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v11->klass->_2.bitflags2 + 1) >= (unsigned int)v12
        && (CheckMaterialSvtListViewItem_c *)v11->klass->_2.typeHierarchy[v12 - 1] == CheckMaterialSvtListViewItem_TypeInfo )
      {
        if ( (CheckMaterialSvtListViewItem_c *)v11->klass->_2.typeHierarchy[*(&CheckMaterialSvtListViewItem_TypeInfo->_2.bitflags2
                                                                            + 1)
                                                                          - 1] != CheckMaterialSvtListViewItem_TypeInfo )
          v11 = 0LL;
        v14 = *(_QWORD *)&v11[1].fields.selectNum;
        v13 = *(_QWORD *)&v11[1].fields.sortIndex;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        }
        *(_QWORD *)&v16.fields.currentCryptoKey = v14;
        *(_QWORD *)&v16.fields.fakeValue = v13;
        this = (CheckMaterialSvtListViewManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(
                                                      v16,
                                                      0LL);
        itemList = v4->fields.itemList;
        if ( (_DWORD)this == svtId )
          ++v10;
        ++v9;
        if ( itemList )
          continue;
      }
    }
    goto LABEL_19;
  }
  return v10;
}


// local variable allocation has failed, the output may be wrong!
int64_t __fastcall CheckMaterialSvtListViewManager__GetCommandCodeAmountSortValue(
        CheckMaterialSvtListViewManager_o *this,
        int32_t commandCodeId,
        const MethodInfo *method)
{
  CheckMaterialSvtListViewManager_o *v4; // x20
  __int64 v5; // x1
  __int64 v6; // x1
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x24
  unsigned __int64 v8; // x22
  int64_t v9; // x21
  ListViewItem_o *v10; // x8
  __int64 v11; // x11

  v4 = this;
  if ( (byte_4187CEB & 1) == 0 )
  {
    sub_B2C35C(&CheckMaterialSvtListViewItem_TypeInfo, *(_QWORD *)&commandCodeId);
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v5);
    this = (CheckMaterialSvtListViewManager_o *)sub_B2C35C(
                                                  &Method_System_Collections_Generic_List_ListViewItem__get_Item__,
                                                  v6);
    byte_4187CEB = 1;
  }
  itemList = v4->fields.itemList;
  if ( !itemList )
LABEL_16:
    sub_B2C434(this, *(_QWORD *)&commandCodeId);
  v8 = 0LL;
  v9 = 0LL;
  while ( (__int64)v8 < itemList->fields._size )
  {
    if ( v8 >= (unsigned int)itemList->fields._size )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
    v10 = itemList->fields._items->m_Items[v8];
    if ( v10 )
    {
      v11 = *(&CheckMaterialSvtListViewItem_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v10->klass->_2.bitflags2 + 1) >= (unsigned int)v11
        && (CheckMaterialSvtListViewItem_c *)v10->klass->_2.typeHierarchy[v11 - 1] == CheckMaterialSvtListViewItem_TypeInfo )
      {
        itemList = v4->fields.itemList;
        ++v8;
        if ( (CheckMaterialSvtListViewItem_c *)v10->klass->_2.typeHierarchy[*(&CheckMaterialSvtListViewItem_TypeInfo->_2.bitflags2
                                                                            + 1)
                                                                          - 1] != CheckMaterialSvtListViewItem_TypeInfo )
          v10 = 0LL;
        if ( LODWORD(v10[1].fields.sortValue1) != commandCodeId )
          ++v9;
        if ( itemList )
          continue;
      }
    }
    goto LABEL_16;
  }
  return v9;
}


bool __fastcall CheckMaterialSvtListViewManager__GetDragSelect(
        CheckMaterialSvtListViewManager_o *this,
        const MethodInfo *method)
{
  return 0;
}


System_Collections_Generic_List_int__o *__fastcall CheckMaterialSvtListViewManager__GetEquipedCommandCodeSellLastSvtList(
        CheckMaterialSvtListViewManager_o *this,
        System_Collections_Generic_List_CombineServantListViewItem__o *selectEquipedCommandCodeServantList,
        const MethodInfo *method)
{
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
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  int32_t size; // w22
  System_Collections_Generic_List_int__o *v21; // x28
  UserServantEntity_array *AllList; // x23
  System_Collections_Generic_List_int__o *v23; // x21
  System_Collections_Generic_Dictionary_int__int__o *v24; // x22
  int32_t v25; // w8
  int32_t i; // w20
  CombineServantListViewItem_o *v27; // x26
  int32_t v28; // w8
  int32_t svtId; // w24
  __int64 v30; // x28
  int32_t v31; // w25
  CombineServantListViewItem_o *v32; // x8
  int32_t v33; // w9
  bool v34; // zf
  int max_length; // w8
  DataMasterBase_WarMaster__WarEntity__int__o *v36; // x24
  unsigned int v37; // w28
  UserServantEntity_o *v38; // x25
  __int64 v39; // x26
  __int64 v40; // x27
  __int64 v41; // x25
  __int64 v42; // x26
  int32_t v43; // w8
  unsigned int v44; // w20
  CombineServantListViewItem_o *v45; // x9
  signed __int64 v46; // x8
  int32_t v47; // w23
  int v48; // w26
  unsigned __int64 v49; // x27
  int32_t v50; // w9
  __int64 v52; // x0
  System_Collections_Generic_List_int__o *v53; // [xsp+8h] [xbp-58h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v54; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v55; // 0:x0.16

  if ( (byte_4187CE4 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantMaster___, selectEquipedCommandCodeServantList);
    sub_B2C35C(&Method_DataManager_GetMasterData_UserServantMaster___, v4);
    sub_B2C35C(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__int__Add__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__int___ctor__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__int__get_Item__, v9);
    sub_B2C35C(&System_Collections_Generic_Dictionary_int__int__TypeInfo, v10);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__Add__, v11);
    sub_B2C35C(&Method_System_Collections_Generic_List_int___ctor__, v12);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__get_Count__, v13);
    sub_B2C35C(&Method_System_Collections_Generic_List_CombineServantListViewItem__get_Count__, v14);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__get_Item__, v15);
    sub_B2C35C(&Method_System_Collections_Generic_List_CombineServantListViewItem__get_Item__, v16);
    sub_B2C35C(&System_Collections_Generic_List_int__TypeInfo, v17);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v18);
    this = (CheckMaterialSvtListViewManager_o *)sub_B2C35C(
                                                  &Method_SingletonMonoBehaviour_DataManager__get_Instance__,
                                                  v19);
    byte_4187CE4 = 1;
  }
  if ( !selectEquipedCommandCodeServantList )
    goto LABEL_66;
  size = selectEquipedCommandCodeServantList->fields._size;
  v21 = (System_Collections_Generic_List_int__o *)sub_B2C42C(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v21,
    (const MethodInfo_2F6629C *)Method_System_Collections_Generic_List_int___ctor__);
  if ( size )
  {
    this = (CheckMaterialSvtListViewManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !this )
      goto LABEL_66;
    this = (CheckMaterialSvtListViewManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                  (DataManager_o *)this,
                                                  (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserServantMaster___);
    if ( !this )
      goto LABEL_66;
    AllList = UserServantMaster__getAllList((UserServantMaster_o *)this, 0LL);
    v23 = (System_Collections_Generic_List_int__o *)sub_B2C42C(System_Collections_Generic_List_int__TypeInfo);
    System_Collections_Generic_List_int____ctor(
      v23,
      (const MethodInfo_2F6629C *)Method_System_Collections_Generic_List_int___ctor__);
    v24 = (System_Collections_Generic_Dictionary_int__int__o *)sub_B2C42C(System_Collections_Generic_Dictionary_int__int__TypeInfo);
    System_Collections_Generic_Dictionary_int__int____ctor(
      v24,
      (const MethodInfo_2E2399C *)Method_System_Collections_Generic_Dictionary_int__int___ctor__);
    v25 = selectEquipedCommandCodeServantList->fields._size;
    v53 = v21;
    if ( v25 >= 1 )
    {
      for ( i = 0; i < v25; ++i )
      {
        if ( v25 <= (unsigned int)i )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
        v27 = selectEquipedCommandCodeServantList->fields._items->m_Items[i];
        if ( !v27 || !v24 )
          goto LABEL_66;
        this = (CheckMaterialSvtListViewManager_o *)System_Collections_Generic_Dictionary_int__int___ContainsKey(
                                                      v24,
                                                      v27->fields.svtId,
                                                      (const MethodInfo_2E247A4 *)Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__);
        if ( ((unsigned __int8)this & 1) == 0 )
        {
          v28 = selectEquipedCommandCodeServantList->fields._size;
          svtId = v27->fields.svtId;
          if ( v28 >= 1 )
          {
            v30 = 0LL;
            v31 = 0;
            while ( 1 )
            {
              if ( v28 <= (unsigned int)v30 )
                System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
              v32 = selectEquipedCommandCodeServantList->fields._items->m_Items[v30];
              if ( !v32 )
                break;
              v33 = v32->fields.svtId;
              v28 = selectEquipedCommandCodeServantList->fields._size;
              ++v30;
              v34 = svtId == v33;
              svtId = v27->fields.svtId;
              if ( v34 )
                ++v31;
              if ( (int)v30 >= v28 )
                goto LABEL_24;
            }
LABEL_66:
            sub_B2C434(this, selectEquipedCommandCodeServantList);
          }
          v31 = 0;
LABEL_24:
          System_Collections_Generic_Dictionary_int__int___Add(
            v24,
            svtId,
            v31,
            (const MethodInfo_2E24540 *)Method_System_Collections_Generic_Dictionary_int__int__Add__);
        }
        v25 = selectEquipedCommandCodeServantList->fields._size;
      }
    }
    this = (CheckMaterialSvtListViewManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !this )
      goto LABEL_66;
    this = (CheckMaterialSvtListViewManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                  (DataManager_o *)this,
                                                  (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantMaster___);
    if ( !AllList )
      goto LABEL_66;
    max_length = AllList->max_length;
    if ( max_length >= 1 )
    {
      v36 = (DataMasterBase_WarMaster__WarEntity__int__o *)this;
      v37 = 0;
      do
      {
        if ( v37 >= max_length )
        {
          v52 = sub_B2C460(this);
          sub_B2C400(v52, 0LL);
        }
        v38 = AllList->m_Items[v37];
        if ( !v38 )
          goto LABEL_66;
        v40 = *(_QWORD *)&v38->fields.svtId.fields.currentCryptoKey;
        v39 = *(_QWORD *)&v38->fields.svtId.fields.fakeValue;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        }
        *(_QWORD *)&v54.fields.currentCryptoKey = v40;
        *(_QWORD *)&v54.fields.fakeValue = v39;
        this = (CheckMaterialSvtListViewManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(
                                                      v54,
                                                      0LL);
        if ( !v36 )
          goto LABEL_66;
        this = (CheckMaterialSvtListViewManager_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                                      v36,
                                                      (int32_t)this,
                                                      (const MethodInfo_24E40D0 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
        if ( !this )
          goto LABEL_66;
        this = (CheckMaterialSvtListViewManager_o *)ServantEntity__get_IsServant((ServantEntity_o *)this, 0LL);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          this = (CheckMaterialSvtListViewManager_o *)UserServantEntity__IsEventJoin(v38, 0LL);
          if ( ((unsigned __int8)this & 1) == 0 )
          {
            v42 = *(_QWORD *)&v38->fields.svtId.fields.currentCryptoKey;
            v41 = *(_QWORD *)&v38->fields.svtId.fields.fakeValue;
            if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            }
            *(_QWORD *)&v55.fields.currentCryptoKey = v42;
            *(_QWORD *)&v55.fields.fakeValue = v41;
            this = (CheckMaterialSvtListViewManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(
                                                          v55,
                                                          0LL);
            if ( !v23 )
              goto LABEL_66;
            System_Collections_Generic_List_int___Add(
              v23,
              (int32_t)this,
              (const MethodInfo_2F66FF8 *)Method_System_Collections_Generic_List_int__Add__);
          }
        }
        max_length = AllList->max_length;
      }
      while ( (int)++v37 < max_length );
    }
    v43 = selectEquipedCommandCodeServantList->fields._size;
    v21 = v53;
    if ( v43 >= 1 )
    {
      v44 = 0;
      while ( 1 )
      {
        if ( v43 <= v44 )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
        v45 = selectEquipedCommandCodeServantList->fields._items->m_Items[v44];
        if ( !v45 || !v23 )
          goto LABEL_66;
        LODWORD(v46) = v23->fields._size;
        v47 = v45->fields.svtId;
        if ( (int)v46 < 1 )
        {
          v48 = 0;
          if ( !v24 )
            goto LABEL_66;
        }
        else
        {
          v48 = 0;
          v49 = 0LL;
          do
          {
            if ( v49 >= (unsigned int)v46 )
              System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
            v50 = v23->fields._items->m_Items[v49 + 1];
            v46 = v23->fields._size;
            ++v49;
            if ( v47 == v50 )
              ++v48;
          }
          while ( (__int64)v49 < v46 );
          if ( !v24 )
            goto LABEL_66;
        }
        this = (CheckMaterialSvtListViewManager_o *)System_Collections_Generic_Dictionary_int__int___get_Item(
                                                      v24,
                                                      v47,
                                                      (const MethodInfo_2E24480 *)Method_System_Collections_Generic_Dictionary_int__int__get_Item__);
        if ( (_DWORD)this == v48 )
        {
          if ( !v53 )
            goto LABEL_66;
          System_Collections_Generic_List_int___Add(
            v53,
            v47,
            (const MethodInfo_2F66FF8 *)Method_System_Collections_Generic_List_int__Add__);
        }
        v43 = selectEquipedCommandCodeServantList->fields._size;
        if ( (int)++v44 >= v43 )
          return v21;
      }
    }
  }
  return v21;
}


int32_t __fastcall CheckMaterialSvtListViewManager__GetModeKind(
        CheckMaterialSvtListViewManager_o *this,
        const MethodInfo *method)
{
  return this->fields.modeKind;
}


System_Collections_Generic_List_UserCommandCodeEntity__o *__fastcall CheckMaterialSvtListViewManager__GetSortEntList(
        CheckMaterialSvtListViewManager_o *this,
        System_Collections_Generic_List_long__o *commandCodeIds,
        const MethodInfo *method)
{
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
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v18; // x19
  void *Instance; // x0
  __int64 v20; // x1
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *v21; // x21
  _BOOL8 v22; // x0
  __int64 v23; // x1
  UserServantEntity_o *Entity; // x0
  struct CheckMaterialSvtListViewManager___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__16_0; // x20
  Il2CppObject *v27; // x21
  struct CheckMaterialSvtListViewManager___c_StaticFields *v28; // x0
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  System_Collections_Generic_List_Enumerator_T__o v36; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v37; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_4187CE3 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Comparison_UserCommandCodeEntity___ctor__, commandCodeIds);
    sub_B2C35C(&System_Comparison_UserCommandCodeEntity__TypeInfo, v4);
    sub_B2C35C(&Method_DataManager_GetMasterData_UserCommandCodeMaster___, v5);
    sub_B2C35C(&Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__GetEntity__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_long__Dispose__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_long__MoveNext__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_long__get_Current__, v9);
    sub_B2C35C(&Method_System_Collections_Generic_List_UserCommandCodeEntity__Add__, v10);
    sub_B2C35C(&Method_System_Collections_Generic_List_long__GetEnumerator__, v11);
    sub_B2C35C(&Method_System_Collections_Generic_List_UserCommandCodeEntity__Sort__, v12);
    sub_B2C35C(&Method_System_Collections_Generic_List_UserCommandCodeEntity___ctor__, v13);
    sub_B2C35C(&System_Collections_Generic_List_UserCommandCodeEntity__TypeInfo, v14);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v15);
    sub_B2C35C(&Method_CheckMaterialSvtListViewManager___c__GetSortEntList_b__16_0__, v16);
    sub_B2C35C(&CheckMaterialSvtListViewManager___c_TypeInfo, v17);
    byte_4187CE3 = 1;
  }
  memset(&v37, 0, sizeof(v37));
  v18 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_UserCommandCodeEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v18,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_UserCommandCodeEntity___ctor__);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_22;
  Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
               (DataManager_o *)Instance,
               (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserCommandCodeMaster___);
  if ( !commandCodeIds )
    goto LABEL_22;
  v21 = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)Instance;
  System_Collections_Generic_List_long___GetEnumerator(
    &v36,
    commandCodeIds,
    (const MethodInfo_2F6DDEC *)Method_System_Collections_Generic_List_long__GetEnumerator__);
  v37 = v36;
  while ( 1 )
  {
    v22 = System_Collections_Generic_List_Enumerator_long___MoveNext(
            &v37,
            (const MethodInfo_20E8C80 *)Method_System_Collections_Generic_List_Enumerator_long__MoveNext__);
    if ( !v22 )
      break;
    if ( !v21 )
      sub_B2C434(v22, v23);
    Entity = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
               v21,
               (int64_t)v37.fields.current,
               (const MethodInfo_24E42F8 *)Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__GetEntity__);
    if ( !v18 )
      sub_B2C434(Entity, Entity);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      v18,
      (EventMissionProgressRequest_Argument_ProgressData_o *)Entity,
      (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_UserCommandCodeEntity__Add__);
  }
  System_Collections_Generic_List_Enumerator_long___Dispose(
    &v37,
    (const MethodInfo_20E8C7C *)Method_System_Collections_Generic_List_Enumerator_long__Dispose__);
  Instance = CheckMaterialSvtListViewManager___c_TypeInfo;
  if ( (BYTE3(CheckMaterialSvtListViewManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CheckMaterialSvtListViewManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CheckMaterialSvtListViewManager___c_TypeInfo);
    Instance = CheckMaterialSvtListViewManager___c_TypeInfo;
  }
  static_fields = (struct CheckMaterialSvtListViewManager___c_StaticFields *)*((_QWORD *)Instance + 23);
  _9__16_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)static_fields->__9__16_0;
  if ( !_9__16_0 )
  {
    if ( (*((_BYTE *)Instance + 307) & 4) != 0 && !*((_DWORD *)Instance + 56) )
    {
      j_il2cpp_runtime_class_init_0(Instance);
      static_fields = CheckMaterialSvtListViewManager___c_TypeInfo->static_fields;
    }
    v27 = (Il2CppObject *)static_fields->__9;
    _9__16_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B2C42C(System_Comparison_UserCommandCodeEntity__TypeInfo);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__16_0,
      v27,
      Method_CheckMaterialSvtListViewManager___c__GetSortEntList_b__16_0__,
      (const MethodInfo_25D8DF8 *)Method_System_Comparison_UserCommandCodeEntity___ctor__);
    v28 = CheckMaterialSvtListViewManager___c_TypeInfo->static_fields;
    v28->__9__16_0 = (struct System_Comparison_UserCommandCodeEntity__o *)_9__16_0;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&v28->__9__16_0,
      (System_Int32_array **)_9__16_0,
      v29,
      v30,
      v31,
      v32,
      v33,
      v34);
  }
  if ( !v18 )
LABEL_22:
    sub_B2C434(Instance, v20);
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v18,
    (System_Comparison_T__o *)_9__16_0,
    (const MethodInfo_2EF653C *)Method_System_Collections_Generic_List_UserCommandCodeEntity__Sort__);
  return (System_Collections_Generic_List_UserCommandCodeEntity__o *)v18;
}


System_Collections_Generic_List_UserServantEntity__o *__fastcall CheckMaterialSvtListViewManager__GetSvtSortEntList(
        CheckMaterialSvtListViewManager_o *this,
        System_Collections_Generic_List_long__o *servantIds,
        const MethodInfo *method)
{
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
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v18; // x19
  void *Instance; // x0
  __int64 v20; // x1
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *v21; // x21
  _BOOL8 v22; // x0
  __int64 v23; // x1
  UserServantEntity_o *Entity; // x0
  struct CheckMaterialSvtListViewManager___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__14_0; // x20
  Il2CppObject *v27; // x21
  struct CheckMaterialSvtListViewManager___c_StaticFields *v28; // x0
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  System_Collections_Generic_List_Enumerator_T__o v36; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v37; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_4187CE1 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Comparison_UserServantEntity___ctor__, servantIds);
    sub_B2C35C(&System_Comparison_UserServantEntity__TypeInfo, v4);
    sub_B2C35C(&Method_DataManager_GetMasterData_UserServantMaster___, v5);
    sub_B2C35C(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_long__Dispose__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_long__MoveNext__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_long__get_Current__, v9);
    sub_B2C35C(&Method_System_Collections_Generic_List_UserServantEntity__Add__, v10);
    sub_B2C35C(&Method_System_Collections_Generic_List_long__GetEnumerator__, v11);
    sub_B2C35C(&Method_System_Collections_Generic_List_UserServantEntity__Sort__, v12);
    sub_B2C35C(&Method_System_Collections_Generic_List_UserServantEntity___ctor__, v13);
    sub_B2C35C(&System_Collections_Generic_List_UserServantEntity__TypeInfo, v14);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v15);
    sub_B2C35C(&Method_CheckMaterialSvtListViewManager___c__GetSvtSortEntList_b__14_0__, v16);
    sub_B2C35C(&CheckMaterialSvtListViewManager___c_TypeInfo, v17);
    byte_4187CE1 = 1;
  }
  memset(&v37, 0, sizeof(v37));
  v18 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_UserServantEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v18,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_22;
  Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
               (DataManager_o *)Instance,
               (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !servantIds )
    goto LABEL_22;
  v21 = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)Instance;
  System_Collections_Generic_List_long___GetEnumerator(
    &v36,
    servantIds,
    (const MethodInfo_2F6DDEC *)Method_System_Collections_Generic_List_long__GetEnumerator__);
  v37 = v36;
  while ( 1 )
  {
    v22 = System_Collections_Generic_List_Enumerator_long___MoveNext(
            &v37,
            (const MethodInfo_20E8C80 *)Method_System_Collections_Generic_List_Enumerator_long__MoveNext__);
    if ( !v22 )
      break;
    if ( !v21 )
      sub_B2C434(v22, v23);
    Entity = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
               v21,
               (int64_t)v37.fields.current,
               (const MethodInfo_24E42F8 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    if ( !v18 )
      sub_B2C434(Entity, Entity);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      v18,
      (EventMissionProgressRequest_Argument_ProgressData_o *)Entity,
      (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_UserServantEntity__Add__);
  }
  System_Collections_Generic_List_Enumerator_long___Dispose(
    &v37,
    (const MethodInfo_20E8C7C *)Method_System_Collections_Generic_List_Enumerator_long__Dispose__);
  Instance = CheckMaterialSvtListViewManager___c_TypeInfo;
  if ( (BYTE3(CheckMaterialSvtListViewManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CheckMaterialSvtListViewManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CheckMaterialSvtListViewManager___c_TypeInfo);
    Instance = CheckMaterialSvtListViewManager___c_TypeInfo;
  }
  static_fields = (struct CheckMaterialSvtListViewManager___c_StaticFields *)*((_QWORD *)Instance + 23);
  _9__14_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)static_fields->__9__14_0;
  if ( !_9__14_0 )
  {
    if ( (*((_BYTE *)Instance + 307) & 4) != 0 && !*((_DWORD *)Instance + 56) )
    {
      j_il2cpp_runtime_class_init_0(Instance);
      static_fields = CheckMaterialSvtListViewManager___c_TypeInfo->static_fields;
    }
    v27 = (Il2CppObject *)static_fields->__9;
    _9__14_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B2C42C(System_Comparison_UserServantEntity__TypeInfo);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__14_0,
      v27,
      Method_CheckMaterialSvtListViewManager___c__GetSvtSortEntList_b__14_0__,
      (const MethodInfo_25D8DF8 *)Method_System_Comparison_UserServantEntity___ctor__);
    v28 = CheckMaterialSvtListViewManager___c_TypeInfo->static_fields;
    v28->__9__14_0 = (struct System_Comparison_UserServantEntity__o *)_9__14_0;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&v28->__9__14_0,
      (System_Int32_array **)_9__14_0,
      v29,
      v30,
      v31,
      v32,
      v33,
      v34);
  }
  if ( !v18 )
LABEL_22:
    sub_B2C434(Instance, v20);
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v18,
    (System_Comparison_T__o *)_9__14_0,
    (const MethodInfo_2EF653C *)Method_System_Collections_Generic_List_UserServantEntity__Sort__);
  return (System_Collections_Generic_List_UserServantEntity__o *)v18;
}


bool __fastcall CheckMaterialSvtListViewManager__IsDragEnable(
        CheckMaterialSvtListViewManager_o *this,
        CheckMaterialSvtListViewItem_o *item,
        const MethodInfo *method)
{
  return 0;
}


bool __fastcall CheckMaterialSvtListViewManager__IsDragStart(
        CheckMaterialSvtListViewManager_o *this,
        const MethodInfo *method)
{
  return 0;
}


bool __fastcall CheckMaterialSvtListViewManager__IsSelectEnable(
        CheckMaterialSvtListViewManager_o *this,
        CheckMaterialSvtListViewItem_o *item,
        int32_t addSum,
        int32_t addServantSum,
        const MethodInfo *method)
{
  return 1;
}


void __fastcall CheckMaterialSvtListViewManager__ModifyItem(
        CheckMaterialSvtListViewManager_o *this,
        int64_t selectedId,
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
  int32_t kind; // w21
  __int64 Instance; // x0
  const MethodInfo *v16; // x1
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x20
  unsigned __int64 v18; // x22
  ListViewItem_o *v19; // x20
  __int64 v20; // x10
  __int128 v21; // q0
  __int64 v22; // x21
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  System_Int32_array **v29; // x1
  UnityEngine_Object_o *viewObject; // x21
  struct System_Collections_Generic_List_ListViewItem__o *v31; // x21
  __int64 v32; // x20
  unsigned __int64 v33; // x23
  ListViewItem_o *v34; // x21
  __int64 v35; // x10
  __int128 v36; // q0
  __int64 v37; // x22
  const MethodInfo *v38; // x1
  System_String_array **v39; // x2
  System_String_array **v40; // x3
  System_Boolean_array **v41; // x4
  System_Int32_array **v42; // x5
  System_Int32_array *v43; // x6
  System_Int32_array *v44; // x7
  System_Int32_array **v45; // x1
  __int64 v46; // x8
  UnityEngine_Object_o *v47; // x22
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v48; // [xsp+0h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v49; // [xsp+20h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v50; // [xsp+40h] [xbp-80h]
  UserServantEntity_o *v51; // [xsp+68h] [xbp-58h] BYREF
  UserServantEntity_o *entity; // [xsp+78h] [xbp-48h] BYREF

  if ( (byte_4187CE5 & 1) == 0 )
  {
    sub_B2C35C(&CheckMaterialSvtListViewItem_TypeInfo, selectedId);
    sub_B2C35C(&Method_DataManager_GetMasterData_UserCommandCodeMaster___, v5);
    sub_B2C35C(&Method_DataManager_GetMasterData_UserServantMaster___, v6);
    sub_B2C35C(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__, v7);
    sub_B2C35C(&Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__TryGetEntity__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v9);
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v10);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v11);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v12);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v13);
    byte_4187CE5 = 1;
  }
  entity = 0LL;
  v51 = 0LL;
  if ( !this->fields.itemList )
    return;
  kind = this->fields.kind;
  Instance = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_54;
  if ( kind == 2 )
  {
    Instance = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserCommandCodeMaster___);
    if ( Instance )
    {
      Instance = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___TryGetEntity(
                   (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)Instance,
                   &entity,
                   selectedId,
                   (const MethodInfo_24E4354 *)Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__TryGetEntity__);
      if ( (Instance & 1) == 0 )
        return;
      itemList = this->fields.itemList;
      if ( itemList )
      {
        v18 = 0LL;
        while ( (__int64)v18 < itemList->fields._size )
        {
          if ( v18 >= (unsigned int)itemList->fields._size )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
          v19 = itemList->fields._items->m_Items[v18];
          if ( v19 )
          {
            v20 = *(&CheckMaterialSvtListViewItem_TypeInfo->_2.bitflags2 + 1);
            if ( *(&v19->klass->_2.bitflags2 + 1) >= (unsigned int)v20
              && (CheckMaterialSvtListViewItem_c *)v19->klass->_2.typeHierarchy[v20 - 1] == CheckMaterialSvtListViewItem_TypeInfo )
            {
              Instance = CheckMaterialSvtListViewItem__get_UserCommandCodeId((CheckMaterialSvtListViewItem_o *)v19, v16);
              if ( entity )
              {
                v21 = *(_OWORD *)&entity->fields.id.fields.fakeValue;
                v22 = Instance;
                *(_OWORD *)&v50.fields.currentCryptoKey = *(_OWORD *)&entity->fields.id.fields.currentCryptoKey;
                *(_OWORD *)&v50.fields.fakeValue = v21;
                if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
                }
                v49 = v50;
                if ( v22 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v49, 0LL) )
                {
                  v29 = (System_Int32_array **)entity;
                  v19[1].fields.sortValue0 = (int64_t)entity;
                  sub_B2C2F8(
                    (BattleServantConfConponent_o *)&v19[1].fields.sortValue0,
                    v29,
                    v23,
                    v24,
                    v25,
                    v26,
                    v27,
                    v28);
                }
                BYTE4(v19[1].fields.sortValue2) = 0;
                LODWORD(v19[1].fields.viewObject) = -1;
                viewObject = (UnityEngine_Object_o *)v19->fields.viewObject;
                if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                }
                Instance = UnityEngine_Object__op_Inequality(viewObject, 0LL, 0LL);
                if ( (Instance & 1) != 0 )
                {
                  Instance = (__int64)v19->fields.viewObject;
                  if ( !Instance )
                    goto LABEL_54;
                  Instance = (*(__int64 (__fastcall **)(__int64, ListViewItem_o *, _QWORD))(*(_QWORD *)Instance + 392LL))(
                               Instance,
                               v19,
                               *(_QWORD *)(*(_QWORD *)Instance + 400LL));
                }
                itemList = this->fields.itemList;
                ++v18;
                if ( itemList )
                  continue;
              }
            }
          }
          goto LABEL_54;
        }
        return;
      }
    }
LABEL_54:
    sub_B2C434(Instance, v16);
  }
  Instance = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !Instance )
    goto LABEL_54;
  if ( !DataMasterBase_UserServantStorageMaster__UserServantEntity__long___TryGetEntity(
          (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)Instance,
          &v51,
          selectedId,
          (const MethodInfo_24E4354 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__) )
    return;
  Instance = (__int64)UserGameMaster__getSelfUserGame(0LL);
  v31 = this->fields.itemList;
  if ( !v31 )
    goto LABEL_54;
  v32 = Instance;
  v33 = 0LL;
  while ( (__int64)v33 < v31->fields._size )
  {
    if ( v33 >= (unsigned int)v31->fields._size )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
    v34 = v31->fields._items->m_Items[v33];
    if ( v34 )
    {
      v35 = *(&CheckMaterialSvtListViewItem_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v34->klass->_2.bitflags2 + 1) >= (unsigned int)v35
        && (CheckMaterialSvtListViewItem_c *)v34->klass->_2.typeHierarchy[v35 - 1] == CheckMaterialSvtListViewItem_TypeInfo )
      {
        Instance = CheckMaterialSvtListViewItem__get_UserSvtId((CheckMaterialSvtListViewItem_o *)v34, v16);
        if ( v51 )
        {
          v36 = *(_OWORD *)&v51->fields.id.fields.fakeValue;
          v37 = Instance;
          *(_OWORD *)&v50.fields.currentCryptoKey = *(_OWORD *)&v51->fields.id.fields.currentCryptoKey;
          *(_OWORD *)&v50.fields.fakeValue = v36;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          }
          v48 = v50;
          if ( v37 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v48, 0LL) )
          {
            v45 = (System_Int32_array **)v51;
            v34[1].klass = (ListViewItem_c *)v51;
            sub_B2C2F8((BattleServantConfConponent_o *)&v34[1], v45, v39, v40, v41, v42, v43, v44);
          }
          Instance = CheckMaterialSvtListViewItem__get_UserSvtId((CheckMaterialSvtListViewItem_o *)v34, v38);
          if ( v32 )
          {
            v46 = *(_QWORD *)(v32 + 112);
            LODWORD(v34[1].fields.viewObject) = -1;
            v47 = (UnityEngine_Object_o *)v34->fields.viewObject;
            BYTE4(v34[1].fields.sortValue2) = Instance == v46;
            if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            }
            Instance = UnityEngine_Object__op_Inequality(v47, 0LL, 0LL);
            if ( (Instance & 1) != 0 )
            {
              Instance = (__int64)v34->fields.viewObject;
              if ( !Instance )
                goto LABEL_54;
              Instance = (*(__int64 (__fastcall **)(__int64, ListViewItem_o *, _QWORD))(*(_QWORD *)Instance + 392LL))(
                           Instance,
                           v34,
                           *(_QWORD *)(*(_QWORD *)Instance + 400LL));
            }
            v31 = this->fields.itemList;
            ++v33;
            if ( v31 )
              continue;
          }
        }
      }
    }
    goto LABEL_54;
  }
}


void __fastcall CheckMaterialSvtListViewManager__OnClickListView(
        CheckMaterialSvtListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  ;
}


// attributes: thunk
void __fastcall CheckMaterialSvtListViewManager__OnLongPushListView(
        CheckMaterialSvtListViewManager_o *this,
        CheckMaterialSvtListViewItem_o *selectItem,
        const MethodInfo *method)
{
  CheckMaterialSvtListViewManager__CallOnSelectitem(this, selectItem, method);
}


void __fastcall CheckMaterialSvtListViewManager__OnMoveEnd(
        CheckMaterialSvtListViewManager_o *this,
        const MethodInfo *method)
{
  int32_t callbackCount; // w8
  bool v4; // vf
  int32_t v5; // w8

  if ( (byte_4187CE8 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, method);
    byte_4187CE8 = 1;
  }
  callbackCount = this->fields.callbackCount;
  v4 = __OFSUB__(callbackCount, 1);
  v5 = callbackCount - 1;
  if ( v5 < 0 == v4 )
    this->fields.callbackCount = v5;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CheckMaterialSvtListViewManager__RequestListObject(
        CheckMaterialSvtListViewManager_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  System_Collections_Generic_List_CheckMaterialSvtListViewObject__o *v9; // x0
  __int64 v10; // x1
  int32_t size; // w8
  System_Collections_Generic_List_CheckMaterialSvtListViewObject__o *v12; // x21
  int v13; // w8
  __int64 v14; // x24
  CheckMaterialSvtListViewObject_o *v15; // x22
  System_Action_o *v16; // x23
  const MethodInfo *v17; // x3

  if ( (byte_4187CE7 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, *(_QWORD *)&mode);
    sub_B2C35C(&Method_CheckMaterialSvtListViewManager_OnMoveEnd__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_CheckMaterialSvtListViewObject__get_Count__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_CheckMaterialSvtListViewObject__get_Item__, v7);
    sub_B2C35C(&StringLiteral_10036/*"OnMoveEnd"*/, v8);
    byte_4187CE7 = 1;
  }
  v9 = CheckMaterialSvtListViewManager__get_ObjectList(this, *(const MethodInfo **)&mode);
  if ( !v9 )
    goto LABEL_13;
  size = v9->fields._size;
  v12 = v9;
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
    v13 = v9->fields._size;
    if ( v13 >= 1 )
    {
      v14 = 0LL;
      while ( 1 )
      {
        if ( v13 <= (unsigned int)v14 )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
        v15 = v12->fields._items->m_Items[v14];
        v16 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
        System_Action___ctor(v16, (Il2CppObject *)this, Method_CheckMaterialSvtListViewManager_OnMoveEnd__, 0LL);
        if ( !v15 )
          break;
        CheckMaterialSvtListViewObject__Init(v15, mode, v16, v17);
        v13 = v12->fields._size;
        if ( (int)++v14 >= v13 )
          return;
      }
LABEL_13:
      sub_B2C434(v9, v10);
    }
  }
}


void __fastcall CheckMaterialSvtListViewManager__SetDragEnd(
        CheckMaterialSvtListViewManager_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall CheckMaterialSvtListViewManager__SetDragMove(
        CheckMaterialSvtListViewManager_o *this,
        int32_t moveIndex,
        const MethodInfo *method)
{
  ;
}


void __fastcall CheckMaterialSvtListViewManager__SetDragStart(
        CheckMaterialSvtListViewManager_o *this,
        int32_t startIndex,
        bool isDragSelect,
        const MethodInfo *method)
{
  ;
}


void __fastcall CheckMaterialSvtListViewManager__SetMode(
        CheckMaterialSvtListViewManager_o *this,
        int32_t mode,
        System_Action_CheckMaterialSvtListViewItem__o *onSelectItem,
        const MethodInfo *method)
{
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  const MethodInfo *v10; // x2

  this->fields.onSelectItem = onSelectItem;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.onSelectItem,
    (System_Int32_array **)onSelectItem,
    (System_String_array **)onSelectItem,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  CheckMaterialSvtListViewManager__SetMode_25447708(this, mode, v10);
}


void __fastcall CheckMaterialSvtListViewManager__SetMode_25447708(
        CheckMaterialSvtListViewManager_o *this,
        int32_t initMode,
        const MethodInfo *method)
{
  int32_t ObjectSum; // w0
  int32_t v5; // w8
  const MethodInfo *v6; // x2
  int32_t v7; // w8
  int32_t v8; // w1

  this->fields.initMode = initMode;
  ObjectSum = ListViewManager__get_ObjectSum((ListViewManager_o *)this, 0LL);
  v5 = this->fields.initMode;
  this->fields.callbackCount = ObjectSum;
  ListViewManager__set_IsInput((ListViewManager_o *)this, v5 == 2, 0LL);
  v7 = this->fields.initMode;
  if ( v7 == 2 )
  {
    v8 = 3;
  }
  else
  {
    if ( v7 != 1 )
      return;
    v8 = 2;
  }
  CheckMaterialSvtListViewManager__RequestListObject(this, v8, v6);
}


void __fastcall CheckMaterialSvtListViewManager__SetObjectItem(
        CheckMaterialSvtListViewManager_o *this,
        ListViewObject_o *obj,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  CheckMaterialSvtListViewManager_o *v5; // x20
  __int64 v6; // x10
  int32_t v7; // w1

  v5 = this;
  if ( (byte_4187CE6 & 1) == 0 )
  {
    this = (CheckMaterialSvtListViewManager_o *)sub_B2C35C(&CheckMaterialSvtListViewObject_TypeInfo, obj);
    byte_4187CE6 = 1;
  }
  if ( !obj
    || (v6 = *(&CheckMaterialSvtListViewObject_TypeInfo->_2.bitflags2 + 1),
        *(&obj->klass->_2.bitflags2 + 1) < (unsigned int)v6)
    || (CheckMaterialSvtListViewObject_c *)obj->klass->_2.typeHierarchy[v6 - 1] != CheckMaterialSvtListViewObject_TypeInfo )
  {
    sub_B2C434(this, obj);
  }
  if ( v5->fields.initMode == 2 )
    v7 = 3;
  else
    v7 = 2;
  CheckMaterialSvtListViewObject__Init((CheckMaterialSvtListViewObject_o *)obj, v7, 0LL, method);
}


System_Collections_Generic_List_CheckMaterialSvtListViewObject__o *__fastcall CheckMaterialSvtListViewManager__get_ClippingObjectList(
        CheckMaterialSvtListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v9; // x20
  UnityEngine_GameObject_o *Component_srcLineSprite; // x0
  const MethodInfo *v11; // x1
  struct System_Collections_Generic_List_GameObject__o *objectList; // x21
  __int64 v13; // x22
  unsigned __int64 v14; // x26
  UnityEngine_Object_o *v15; // x21
  struct System_Collections_Generic_List_GameObject__o *v16; // x21
  EventMissionProgressRequest_Argument_ProgressData_o *v17; // x21

  if ( (byte_4187CDF & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_CheckMaterialSvtListViewObject___, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_CheckMaterialSvtListViewObject__Add__, v3);
    sub_B2C35C(&Method_System_Collections_Generic_List_CheckMaterialSvtListViewObject___ctor__, v4);
    sub_B2C35C(&Method_System_Collections_Generic_List_GameObject__get_Count__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_GameObject__get_Item__, v6);
    sub_B2C35C(&System_Collections_Generic_List_CheckMaterialSvtListViewObject__TypeInfo, v7);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v8);
    byte_4187CDF = 1;
  }
  v9 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_CheckMaterialSvtListViewObject__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v9,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_CheckMaterialSvtListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
LABEL_23:
    sub_B2C434(Component_srcLineSprite, v11);
  v13 = 4LL;
  while ( 1 )
  {
    v14 = v13 - 4;
    if ( v13 - 4 >= objectList->fields._size )
      return (System_Collections_Generic_List_CheckMaterialSvtListViewObject__o *)v9;
    if ( v14 >= (unsigned int)objectList->fields._size )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
    v15 = (UnityEngine_Object_o *)*((_QWORD *)&objectList->fields._items->obj.klass + v13);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    Component_srcLineSprite = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality(v15, 0LL, 0LL);
    if ( ((unsigned __int8)Component_srcLineSprite & 1) == 0 )
    {
      v16 = this->fields.objectList;
      if ( !v16 )
        goto LABEL_23;
      if ( v14 >= (unsigned int)v16->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
      Component_srcLineSprite = (UnityEngine_GameObject_o *)*((_QWORD *)&v16->fields._items->obj.klass + v13);
      if ( !Component_srcLineSprite )
        goto LABEL_23;
      Component_srcLineSprite = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                              Component_srcLineSprite,
                                                              (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_CheckMaterialSvtListViewObject___);
      if ( !Component_srcLineSprite )
        goto LABEL_23;
      v17 = (EventMissionProgressRequest_Argument_ProgressData_o *)Component_srcLineSprite;
      Component_srcLineSprite = (UnityEngine_GameObject_o *)CheckMaterialSvtListViewObject__GetItem(
                                                              (CheckMaterialSvtListViewObject_o *)Component_srcLineSprite,
                                                              v11);
      if ( Component_srcLineSprite )
      {
        v11 = (const MethodInfo *)Component_srcLineSprite;
        if ( !LOBYTE(Component_srcLineSprite[3].fields.m_CachedPtr)
          || (Component_srcLineSprite = (UnityEngine_GameObject_o *)ListViewManager__ClippingItem_24147020(
                                                                      (ListViewManager_o *)this,
                                                                      (ListViewItem_o *)Component_srcLineSprite,
                                                                      0LL),
              ((unsigned __int8)Component_srcLineSprite & 1) != 0) )
        {
          if ( !v9 )
            goto LABEL_23;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v9,
            v17,
            (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_CheckMaterialSvtListViewObject__Add__);
        }
      }
    }
    objectList = this->fields.objectList;
    ++v13;
    if ( !objectList )
      goto LABEL_23;
  }
}


System_Collections_Generic_List_CheckMaterialSvtListViewObject__o *__fastcall CheckMaterialSvtListViewManager__get_ObjectList(
        CheckMaterialSvtListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v9; // x20
  srcLineSprite_o *Component_srcLineSprite; // x0
  __int64 v11; // x1
  struct System_Collections_Generic_List_GameObject__o *objectList; // x21
  __int64 v13; // x22
  unsigned __int64 v14; // x26
  UnityEngine_Object_o *v15; // x21
  struct System_Collections_Generic_List_GameObject__o *v16; // x21

  if ( (byte_4187CDE & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_CheckMaterialSvtListViewObject___, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_CheckMaterialSvtListViewObject__Add__, v3);
    sub_B2C35C(&Method_System_Collections_Generic_List_CheckMaterialSvtListViewObject___ctor__, v4);
    sub_B2C35C(&Method_System_Collections_Generic_List_GameObject__get_Count__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_GameObject__get_Item__, v6);
    sub_B2C35C(&System_Collections_Generic_List_CheckMaterialSvtListViewObject__TypeInfo, v7);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v8);
    byte_4187CDE = 1;
  }
  v9 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_CheckMaterialSvtListViewObject__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v9,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_CheckMaterialSvtListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
LABEL_19:
    sub_B2C434(Component_srcLineSprite, v11);
  v13 = 4LL;
  while ( 1 )
  {
    v14 = v13 - 4;
    if ( v13 - 4 >= objectList->fields._size )
      return (System_Collections_Generic_List_CheckMaterialSvtListViewObject__o *)v9;
    if ( v14 >= (unsigned int)objectList->fields._size )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
    v15 = (UnityEngine_Object_o *)*((_QWORD *)&objectList->fields._items->obj.klass + v13);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    Component_srcLineSprite = (srcLineSprite_o *)UnityEngine_Object__op_Equality(v15, 0LL, 0LL);
    if ( ((unsigned __int8)Component_srcLineSprite & 1) == 0 )
    {
      v16 = this->fields.objectList;
      if ( !v16 )
        goto LABEL_19;
      if ( v14 >= (unsigned int)v16->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
      Component_srcLineSprite = (srcLineSprite_o *)*((_QWORD *)&v16->fields._items->obj.klass + v13);
      if ( !Component_srcLineSprite )
        goto LABEL_19;
      Component_srcLineSprite = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                  (UnityEngine_GameObject_o *)Component_srcLineSprite,
                                  (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_CheckMaterialSvtListViewObject___);
      if ( !v9 )
        goto LABEL_19;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v9,
        (EventMissionProgressRequest_Argument_ProgressData_o *)Component_srcLineSprite,
        (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_CheckMaterialSvtListViewObject__Add__);
    }
    objectList = this->fields.objectList;
    ++v13;
    if ( !objectList )
      goto LABEL_19;
  }
}


void __fastcall CheckMaterialSvtListViewManager___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  struct CheckMaterialSvtListViewManager___c_StaticFields *static_fields; // x0

  if ( (byte_4184ECA & 1) == 0 )
  {
    sub_B2C35C(&CheckMaterialSvtListViewManager___c_TypeInfo, v1);
    byte_4184ECA = 1;
  }
  v2 = (Il2CppObject *)sub_B2C42C(CheckMaterialSvtListViewManager___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  static_fields = CheckMaterialSvtListViewManager___c_TypeInfo->static_fields;
  static_fields->__9 = (struct CheckMaterialSvtListViewManager___c_o *)v2;
  sub_B2C2F8(static_fields, v2);
}


void __fastcall CheckMaterialSvtListViewManager___c___ctor(
        CheckMaterialSvtListViewManager___c_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall CheckMaterialSvtListViewManager___c___GetSortEntList_b__16_0(
        CheckMaterialSvtListViewManager___c_o *this,
        UserCommandCodeEntity_o *a,
        UserCommandCodeEntity_o *b,
        const MethodInfo *method)
{
  int32_t Rarity; // w21
  __int64 v8; // x21
  __int64 v9; // x22
  int32_t v10; // w21
  __int64 v11; // x20
  __int64 v12; // x21
  int32_t v13; // w0
  __int64 v14; // x8
  int32_t v15; // w19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v16; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v17; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v18; // 0:x0.16

  if ( (byte_4184ECB & 1) == 0 )
  {
    this = (CheckMaterialSvtListViewManager___c_o *)sub_B2C35C(
                                                      &CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo,
                                                      a);
    byte_4184ECB = 1;
  }
  if ( !a || (this = (CheckMaterialSvtListViewManager___c_o *)UserCommandCodeEntity__GetRarity(a, 0LL), !b) )
    sub_B2C434(this, a);
  if ( (int)this < UserCommandCodeEntity__GetRarity(b, 0LL) )
    return 1;
  Rarity = UserCommandCodeEntity__GetRarity(a, 0LL);
  if ( Rarity > UserCommandCodeEntity__GetRarity(b, 0LL) )
    return -1;
  v9 = *(_QWORD *)&a->fields.commandCodeId.fields.currentCryptoKey;
  v8 = *(_QWORD *)&a->fields.commandCodeId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v16.fields.currentCryptoKey = v9;
  *(_QWORD *)&v16.fields.fakeValue = v8;
  v10 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v16, 0LL);
  if ( v10 < CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(b->fields.commandCodeId, 0LL) )
    return 1;
  v12 = *(_QWORD *)&a->fields.commandCodeId.fields.currentCryptoKey;
  v11 = *(_QWORD *)&a->fields.commandCodeId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v17.fields.currentCryptoKey = v12;
  *(_QWORD *)&v17.fields.fakeValue = v11;
  v13 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v17, 0LL);
  v14 = *(_QWORD *)&b->fields.commandCodeId.fields.currentCryptoKey;
  *(_QWORD *)&v18.fields.fakeValue = *(_QWORD *)&b->fields.commandCodeId.fields.fakeValue;
  v15 = v13;
  *(_QWORD *)&v18.fields.currentCryptoKey = v14;
  if ( v15 <= CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v18, 0LL) )
    return 0;
  else
    return -1;
}


int32_t __fastcall CheckMaterialSvtListViewManager___c___GetSvtSortEntList_b__14_0(
        CheckMaterialSvtListViewManager___c_o *this,
        UserServantEntity_o *a,
        UserServantEntity_o *b,
        const MethodInfo *method)
{
  int32_t Rarity; // w21
  int32_t CollectionNo; // w21
  int32_t v9; // w20

  if ( !a || (this = (CheckMaterialSvtListViewManager___c_o *)UserServantEntity__getRarity(a, 0LL), !b) )
    sub_B2C434(this, a);
  if ( (int)this < UserServantEntity__getRarity(b, 0LL) )
    return 1;
  Rarity = UserServantEntity__getRarity(a, 0LL);
  if ( Rarity > UserServantEntity__getRarity(b, 0LL) )
    return -1;
  CollectionNo = UserServantEntity__getCollectionNo(a, 0LL);
  if ( CollectionNo < UserServantEntity__getCollectionNo(b, 0LL) )
    return 1;
  v9 = UserServantEntity__getCollectionNo(a, 0LL);
  if ( v9 <= UserServantEntity__getCollectionNo(b, 0LL) )
    return 0;
  else
    return -1;
}