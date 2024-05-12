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

  if ( (byte_438C3B0 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Action_CheckMaterialSvtListViewItem__Invoke__);
    byte_438C3B0 = 1;
  }
  onSelectItem = this->fields.onSelectItem;
  if ( onSelectItem )
  {
    this->fields.onSelectItem = 0LL;
    sub_B77560(
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
      (const MethodInfo_26A087C *)Method_System_Action_CheckMaterialSvtListViewItem__Invoke__);
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
  System_Collections_Generic_List_UserCommandCodeEntity__o *v9; // x0
  __int64 v10; // x1
  System_Collections_Generic_List_WarBoardManager_TaskList__o *v11; // x20
  Il2CppObject *current; // x22
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *itemList; // x21
  int32_t v14; // w24
  CheckMaterialSvtListViewItem_o *v15; // x23
  const MethodInfo *v16; // x4
  __int64 v17; // x0
  __int64 v18; // x1
  System_Collections_Generic_List_Enumerator_T__o v19; // [xsp+8h] [xbp-68h] BYREF

  v8 = this;
  if ( (byte_438C3A9 & 1) == 0 )
  {
    sub_B775C4(&CheckMaterialSvtListViewItem_TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_UserCommandCodeEntity__Dispose__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_UserCommandCodeEntity__MoveNext__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_UserCommandCodeEntity__get_Current__);
    sub_B775C4(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    sub_B775C4(&Method_System_Collections_Generic_List_UserCommandCodeEntity__GetEnumerator__);
    sub_B775C4(&Method_System_Collections_Generic_List_UserCommandCodeEntity__IndexOf__);
    this = (CheckMaterialSvtListViewManager_o *)sub_B775C4(&Method_System_Collections_Generic_List_long__get_Count__);
    byte_438C3A9 = 1;
  }
  memset(&v19, 0, sizeof(v19));
  if ( commandCodeIds && commandCodeIds->fields._size >= 1 && !isExceeded && !isSellLastServant )
  {
    v9 = CheckMaterialSvtListViewManager__GetSortEntList(this, commandCodeIds, (const MethodInfo *)isExceeded);
    if ( !v9 )
      sub_B7769C(0LL, v10);
    v11 = (System_Collections_Generic_List_WarBoardManager_TaskList__o *)v9;
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v19,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v9,
      (const MethodInfo_3054114 *)Method_System_Collections_Generic_List_UserCommandCodeEntity__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v19,
              (const MethodInfo_225C720 *)Method_System_Collections_Generic_List_Enumerator_UserCommandCodeEntity__MoveNext__) )
    {
      current = v19.fields.current;
      itemList = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v8->fields.itemList;
      v14 = System_Collections_Generic_List_WarBoardManager_TaskList___IndexOf(
              v11,
              (WarBoardManager_TaskList_o *)v19.fields.current,
              (const MethodInfo_3054348 *)Method_System_Collections_Generic_List_UserCommandCodeEntity__IndexOf__);
      v15 = (CheckMaterialSvtListViewItem_o *)sub_B77694(CheckMaterialSvtListViewItem_TypeInfo);
      CheckMaterialSvtListViewItem___ctor_27294832(v15, v14, (UserCommandCodeEntity_o *)current, 0, v16);
      if ( !itemList )
        sub_B7769C(v17, v18);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        itemList,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v15,
        (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v19,
      (const MethodInfo_225C71C *)Method_System_Collections_Generic_List_Enumerator_UserCommandCodeEntity__Dispose__);
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
  UserDeckMaster_o *MasterData_WarQuestSelectionMaster; // x21
  CheckMaterialSvtListViewManager_o *v10; // x0
  const MethodInfo *v11; // x2
  const MethodInfo *v12; // x2
  CheckMaterialSvtListViewManager_o *v13; // x22
  _BOOL8 v14; // x0
  __int64 v15; // x1
  Il2CppObject *current; // x25
  void *monitor; // x19
  Il2CppClass *klass; // x20
  __int64 v19; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *itemList; // x26
  __int64 v21; // x0
  __int64 v22; // x1
  Il2CppObject v23; // q0
  int32_t v24; // w27
  System_Int64_array *v25; // x21
  System_Int64_array *v26; // x23
  int64_t v27; // x0
  __int64 v28; // x1
  int64_t favoriteUserSvtId; // x24
  int64_t v30; // x20
  CheckMaterialSvtListViewItem_o *v31; // x19
  const MethodInfo *v32; // x6
  __int64 v33; // x0
  __int64 v34; // x1
  System_Collections_Generic_List_int__o *v35; // [xsp+0h] [xbp-E0h]
  UserGameEntity_o *SelfUserGame; // [xsp+8h] [xbp-D8h]
  CheckMaterialSvtListViewManager_o *v37; // [xsp+10h] [xbp-D0h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v39; // [xsp+20h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v40; // [xsp+40h] [xbp-A0h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v41; // [xsp+60h] [xbp-80h] BYREF
  System_Int64_array *equipIdList; // [xsp+80h] [xbp-60h] BYREF
  System_Int64_array *svtIdList; // [xsp+88h] [xbp-58h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v44; // 0:x0.16

  v37 = this;
  if ( (byte_438C3A7 & 1) == 0 )
  {
    sub_B775C4(&CheckMaterialSvtListViewItem_TypeInfo);
    sub_B775C4(&Method_DataManager_GetMasterData_UserDeckMaster___);
    sub_B775C4(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_UserServantEntity__Dispose__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_UserServantEntity__MoveNext__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_UserServantEntity__get_Current__);
    sub_B775C4(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    sub_B775C4(&Method_System_Collections_Generic_List_int__Contains__);
    sub_B775C4(&Method_System_Collections_Generic_List_UserServantEntity__GetEnumerator__);
    sub_B775C4(&Method_System_Collections_Generic_List_UserServantEntity__IndexOf__);
    sub_B775C4(&Method_System_Collections_Generic_List_long__get_Count__);
    sub_B775C4(&Method_System_Collections_Generic_List_CombineServantListViewItem__get_Count__);
    sub_B775C4(&NetworkManager_TypeInfo);
    sub_B775C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B775C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    this = (CheckMaterialSvtListViewManager_o *)sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_438C3A7 = 1;
  }
  equipIdList = 0LL;
  svtIdList = 0LL;
  memset(&v41, 0, sizeof(v41));
  if ( servantIds && servantIds->fields._size >= 1 )
  {
    if ( !selectMaterialItemList )
      goto LABEL_41;
    if ( selectMaterialItemList->fields._size < 1 )
      return;
    this = (CheckMaterialSvtListViewManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !this )
      goto LABEL_41;
    DataManager__GetMasterData_WarQuestSelectionMaster_(
      (DataManager_o *)this,
      (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_UserServantMaster___);
    SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
    this = (CheckMaterialSvtListViewManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !this )
      goto LABEL_41;
    MasterData_WarQuestSelectionMaster = (UserDeckMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                               (DataManager_o *)this,
                                                               (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_UserDeckMaster___);
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    this = (CheckMaterialSvtListViewManager_o *)NetworkManager__get_UserId(0LL);
    if ( !MasterData_WarQuestSelectionMaster
      || (UserDeckMaster__getPartyList(MasterData_WarQuestSelectionMaster, &svtIdList, &equipIdList, (int64_t)this, 0LL),
          v35 = CheckMaterialSvtListViewManager__GetEquipedCommandCodeSellLastSvtList(v10, selectMaterialItemList, v11),
          (this = (CheckMaterialSvtListViewManager_o *)CheckMaterialSvtListViewManager__GetSvtSortEntList(
                                                         (CheckMaterialSvtListViewManager_o *)v35,
                                                         servantIds,
                                                         v12)) == 0LL) )
    {
LABEL_41:
      sub_B7769C(this, selectMaterialItemList);
    }
    v13 = this;
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v40,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this,
      (const MethodInfo_3054114 *)Method_System_Collections_Generic_List_UserServantEntity__GetEnumerator__);
    v41.fields.current = (Il2CppObject *)v40.fields.fakeValue;
    *(_OWORD *)&v41.fields.list = *(_OWORD *)&v40.fields.currentCryptoKey;
    while ( 1 )
    {
      v14 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v41,
              (const MethodInfo_225C720 *)Method_System_Collections_Generic_List_Enumerator_UserServantEntity__MoveNext__);
      if ( !v14 )
        break;
      current = v41.fields.current;
      if ( isExceeded )
      {
        if ( !v41.fields.current )
          sub_B7769C(v14, v15);
        v14 = UserServantEntity__isExceeded((UserServantEntity_o *)v41.fields.current, 0LL);
        if ( !v14 )
          continue;
      }
      if ( !isSellLastServant )
        goto LABEL_26;
      if ( !current )
        sub_B7769C(v14, v15);
      klass = current[5].klass;
      monitor = current[5].monitor;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v44.fields.currentCryptoKey = klass;
      *(_QWORD *)&v44.fields.fakeValue = monitor;
      v19 = (unsigned int)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45425956(v44, 0LL);
      if ( !v35 )
        sub_B7769C(0LL, v19);
      if ( System_Collections_Generic_List_int___Contains(
             v35,
             v19,
             (const MethodInfo_30E623C *)Method_System_Collections_Generic_List_int__Contains__) )
      {
LABEL_26:
        itemList = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v37->fields.itemList;
        v21 = System_Collections_Generic_List_WarBoardManager_TaskList___IndexOf(
                (System_Collections_Generic_List_WarBoardManager_TaskList__o *)v13,
                (WarBoardManager_TaskList_o *)current,
                (const MethodInfo_3054348 *)Method_System_Collections_Generic_List_UserServantEntity__IndexOf__);
        if ( !current )
          sub_B7769C(v21, v22);
        v23 = current[2];
        v24 = v21;
        v25 = equipIdList;
        v26 = svtIdList;
        *(Il2CppObject *)&v40.fields.currentCryptoKey = current[1];
        *(Il2CppObject *)&v40.fields.fakeValue = v23;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        }
        v39 = v40;
        v27 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_45429112(&v39, 0LL);
        if ( !SelfUserGame )
          sub_B7769C(v27, v28);
        favoriteUserSvtId = SelfUserGame->fields.favoriteUserSvtId;
        v30 = v27;
        v31 = (CheckMaterialSvtListViewItem_o *)sub_B77694(CheckMaterialSvtListViewItem_TypeInfo);
        CheckMaterialSvtListViewItem___ctor(
          v31,
          v24,
          (UserServantEntity_o *)current,
          v26,
          v25,
          v30 == favoriteUserSvtId,
          v32);
        if ( !itemList )
          sub_B7769C(v33, v34);
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          itemList,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v31,
          (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
      }
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v41,
      (const MethodInfo_225C71C *)Method_System_Collections_Generic_List_Enumerator_UserServantEntity__Dispose__);
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
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x22
  unsigned __int64 v6; // x24
  int64_t v7; // x21
  ListViewItem_o *v8; // x8
  __int64 v9; // x11
  __int64 v10; // x22
  __int64 v11; // x23
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v13; // 0:x0.16

  v4 = this;
  if ( (byte_438C3B1 & 1) == 0 )
  {
    sub_B775C4(&CheckMaterialSvtListViewItem_TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_B775C4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    this = (CheckMaterialSvtListViewManager_o *)sub_B775C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_438C3B1 = 1;
  }
  itemList = v4->fields.itemList;
  if ( !itemList )
LABEL_19:
    sub_B7769C(this, *(_QWORD *)&svtId);
  v6 = 0LL;
  v7 = 0LL;
  while ( (__int64)v6 < itemList->fields._size )
  {
    if ( v6 >= (unsigned int)itemList->fields._size )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_42293568(0LL);
    v8 = itemList->fields._items->m_Items[v6];
    if ( v8 )
    {
      v9 = *(&CheckMaterialSvtListViewItem_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v8->klass->_2.bitflags2 + 1) >= (unsigned int)v9
        && (CheckMaterialSvtListViewItem_c *)v8->klass->_2.typeHierarchy[v9 - 1] == CheckMaterialSvtListViewItem_TypeInfo )
      {
        if ( (CheckMaterialSvtListViewItem_c *)v8->klass->_2.typeHierarchy[*(&CheckMaterialSvtListViewItem_TypeInfo->_2.bitflags2
                                                                           + 1)
                                                                         - 1] != CheckMaterialSvtListViewItem_TypeInfo )
          v8 = 0LL;
        v11 = *(_QWORD *)&v8[1].fields.selectNum;
        v10 = *(_QWORD *)&v8[1].fields.sortIndex;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        }
        *(_QWORD *)&v13.fields.currentCryptoKey = v11;
        *(_QWORD *)&v13.fields.fakeValue = v10;
        this = (CheckMaterialSvtListViewManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45425956(
                                                      v13,
                                                      0LL);
        itemList = v4->fields.itemList;
        if ( (_DWORD)this == svtId )
          ++v7;
        ++v6;
        if ( itemList )
          continue;
      }
    }
    goto LABEL_19;
  }
  return v7;
}


// local variable allocation has failed, the output may be wrong!
int64_t __fastcall CheckMaterialSvtListViewManager__GetCommandCodeAmountSortValue(
        CheckMaterialSvtListViewManager_o *this,
        int32_t commandCodeId,
        const MethodInfo *method)
{
  CheckMaterialSvtListViewManager_o *v4; // x20
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x24
  unsigned __int64 v6; // x22
  int64_t v7; // x21
  ListViewItem_o *v8; // x8
  __int64 v9; // x11

  v4 = this;
  if ( (byte_438C3B2 & 1) == 0 )
  {
    sub_B775C4(&CheckMaterialSvtListViewItem_TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    this = (CheckMaterialSvtListViewManager_o *)sub_B775C4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    byte_438C3B2 = 1;
  }
  itemList = v4->fields.itemList;
  if ( !itemList )
LABEL_16:
    sub_B7769C(this, *(_QWORD *)&commandCodeId);
  v6 = 0LL;
  v7 = 0LL;
  while ( (__int64)v6 < itemList->fields._size )
  {
    if ( v6 >= (unsigned int)itemList->fields._size )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_42293568(0LL);
    v8 = itemList->fields._items->m_Items[v6];
    if ( v8 )
    {
      v9 = *(&CheckMaterialSvtListViewItem_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v8->klass->_2.bitflags2 + 1) >= (unsigned int)v9
        && (CheckMaterialSvtListViewItem_c *)v8->klass->_2.typeHierarchy[v9 - 1] == CheckMaterialSvtListViewItem_TypeInfo )
      {
        itemList = v4->fields.itemList;
        ++v6;
        if ( (CheckMaterialSvtListViewItem_c *)v8->klass->_2.typeHierarchy[*(&CheckMaterialSvtListViewItem_TypeInfo->_2.bitflags2
                                                                           + 1)
                                                                         - 1] != CheckMaterialSvtListViewItem_TypeInfo )
          v8 = 0LL;
        if ( LODWORD(v8[1].fields.sortValue1) != commandCodeId )
          ++v7;
        if ( itemList )
          continue;
      }
    }
    goto LABEL_16;
  }
  return v7;
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
  int32_t size; // w22
  System_Collections_Generic_List_int__o *v5; // x28
  UserServantEntity_array *AllList; // x23
  System_Collections_Generic_List_int__o *v7; // x21
  System_Collections_Generic_Dictionary_int__int__o *v8; // x22
  int32_t v9; // w8
  int32_t i; // w20
  CombineServantListViewItem_o *v11; // x26
  int32_t v12; // w8
  int32_t svtId; // w24
  __int64 v14; // x28
  int32_t v15; // w25
  CombineServantListViewItem_o *v16; // x8
  int32_t v17; // w9
  bool v18; // zf
  int max_length; // w8
  DataMasterBase_WarMaster__WarEntity__int__o *v20; // x24
  unsigned int v21; // w28
  UserServantEntity_o *v22; // x25
  __int64 v23; // x26
  __int64 v24; // x27
  __int64 v25; // x25
  __int64 v26; // x26
  int32_t v27; // w8
  unsigned int v28; // w20
  CombineServantListViewItem_o *v29; // x9
  signed __int64 v30; // x8
  int32_t v31; // w23
  int v32; // w26
  unsigned __int64 v33; // x27
  int32_t v34; // w9
  __int64 v36; // x0
  System_Collections_Generic_List_int__o *v37; // [xsp+8h] [xbp-58h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v38; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v39; // 0:x0.16

  if ( (byte_438C3AB & 1) == 0 )
  {
    sub_B775C4(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_B775C4(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_B775C4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_int__int__Add__);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_int__int___ctor__);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_int__int__get_Item__);
    sub_B775C4(&System_Collections_Generic_Dictionary_int__int__TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_List_int__Add__);
    sub_B775C4(&Method_System_Collections_Generic_List_int___ctor___69397304);
    sub_B775C4(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_B775C4(&Method_System_Collections_Generic_List_CombineServantListViewItem__get_Count__);
    sub_B775C4(&Method_System_Collections_Generic_List_int__get_Item__);
    sub_B775C4(&Method_System_Collections_Generic_List_CombineServantListViewItem__get_Item__);
    sub_B775C4(&System_Collections_Generic_List_int__TypeInfo);
    sub_B775C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    this = (CheckMaterialSvtListViewManager_o *)sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_438C3AB = 1;
  }
  if ( !selectEquipedCommandCodeServantList )
    goto LABEL_66;
  size = selectEquipedCommandCodeServantList->fields._size;
  v5 = (System_Collections_Generic_List_int__o *)sub_B77694(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v5,
    (const MethodInfo_30E508C *)Method_System_Collections_Generic_List_int___ctor___69397304);
  if ( size )
  {
    this = (CheckMaterialSvtListViewManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !this )
      goto LABEL_66;
    this = (CheckMaterialSvtListViewManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                  (DataManager_o *)this,
                                                  (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_UserServantMaster___);
    if ( !this )
      goto LABEL_66;
    AllList = UserServantMaster__getAllList((UserServantMaster_o *)this, 0LL);
    v7 = (System_Collections_Generic_List_int__o *)sub_B77694(System_Collections_Generic_List_int__TypeInfo);
    System_Collections_Generic_List_int____ctor(
      v7,
      (const MethodInfo_30E508C *)Method_System_Collections_Generic_List_int___ctor___69397304);
    v8 = (System_Collections_Generic_Dictionary_int__int__o *)sub_B77694(System_Collections_Generic_Dictionary_int__int__TypeInfo);
    System_Collections_Generic_Dictionary_int__int____ctor(
      v8,
      (const MethodInfo_2FE81CC *)Method_System_Collections_Generic_Dictionary_int__int___ctor__);
    v9 = selectEquipedCommandCodeServantList->fields._size;
    v37 = v5;
    if ( v9 >= 1 )
    {
      for ( i = 0; i < v9; ++i )
      {
        if ( v9 <= (unsigned int)i )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_42293568(0LL);
        v11 = selectEquipedCommandCodeServantList->fields._items->m_Items[i];
        if ( !v11 || !v8 )
          goto LABEL_66;
        this = (CheckMaterialSvtListViewManager_o *)System_Collections_Generic_Dictionary_int__int___ContainsKey(
                                                      v8,
                                                      v11->fields.svtId,
                                                      (const MethodInfo_2FE8FD4 *)Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__);
        if ( ((unsigned __int8)this & 1) == 0 )
        {
          v12 = selectEquipedCommandCodeServantList->fields._size;
          svtId = v11->fields.svtId;
          if ( v12 >= 1 )
          {
            v14 = 0LL;
            v15 = 0;
            while ( 1 )
            {
              if ( v12 <= (unsigned int)v14 )
                System_ThrowHelper__ThrowArgumentOutOfRangeException_42293568(0LL);
              v16 = selectEquipedCommandCodeServantList->fields._items->m_Items[v14];
              if ( !v16 )
                break;
              v17 = v16->fields.svtId;
              v12 = selectEquipedCommandCodeServantList->fields._size;
              ++v14;
              v18 = svtId == v17;
              svtId = v11->fields.svtId;
              if ( v18 )
                ++v15;
              if ( (int)v14 >= v12 )
                goto LABEL_24;
            }
LABEL_66:
            sub_B7769C(this, selectEquipedCommandCodeServantList);
          }
          v15 = 0;
LABEL_24:
          System_Collections_Generic_Dictionary_int__int___Add(
            v8,
            svtId,
            v15,
            (const MethodInfo_2FE8D70 *)Method_System_Collections_Generic_Dictionary_int__int__Add__);
        }
        v9 = selectEquipedCommandCodeServantList->fields._size;
      }
    }
    this = (CheckMaterialSvtListViewManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !this )
      goto LABEL_66;
    this = (CheckMaterialSvtListViewManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                  (DataManager_o *)this,
                                                  (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_ServantMaster___);
    if ( !AllList )
      goto LABEL_66;
    max_length = AllList->max_length;
    if ( max_length >= 1 )
    {
      v20 = (DataMasterBase_WarMaster__WarEntity__int__o *)this;
      v21 = 0;
      do
      {
        if ( v21 >= max_length )
        {
          v36 = sub_B776C8(this);
          sub_B77668(v36, 0LL);
        }
        v22 = AllList->m_Items[v21];
        if ( !v22 )
          goto LABEL_66;
        v24 = *(_QWORD *)&v22->fields.svtId.fields.currentCryptoKey;
        v23 = *(_QWORD *)&v22->fields.svtId.fields.fakeValue;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        }
        *(_QWORD *)&v38.fields.currentCryptoKey = v24;
        *(_QWORD *)&v38.fields.fakeValue = v23;
        this = (CheckMaterialSvtListViewManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45425956(
                                                      v38,
                                                      0LL);
        if ( !v20 )
          goto LABEL_66;
        this = (CheckMaterialSvtListViewManager_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                                      v20,
                                                      (int32_t)this,
                                                      (const MethodInfo_21FB894 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
        if ( !this )
          goto LABEL_66;
        this = (CheckMaterialSvtListViewManager_o *)ServantEntity__get_IsServant((ServantEntity_o *)this, 0LL);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          this = (CheckMaterialSvtListViewManager_o *)UserServantEntity__IsEventJoin(v22, 0LL);
          if ( ((unsigned __int8)this & 1) == 0 )
          {
            v26 = *(_QWORD *)&v22->fields.svtId.fields.currentCryptoKey;
            v25 = *(_QWORD *)&v22->fields.svtId.fields.fakeValue;
            if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            }
            *(_QWORD *)&v39.fields.currentCryptoKey = v26;
            *(_QWORD *)&v39.fields.fakeValue = v25;
            this = (CheckMaterialSvtListViewManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45425956(
                                                          v39,
                                                          0LL);
            if ( !v7 )
              goto LABEL_66;
            System_Collections_Generic_List_int___Add(
              v7,
              (int32_t)this,
              (const MethodInfo_30E5DE8 *)Method_System_Collections_Generic_List_int__Add__);
          }
        }
        max_length = AllList->max_length;
      }
      while ( (int)++v21 < max_length );
    }
    v27 = selectEquipedCommandCodeServantList->fields._size;
    v5 = v37;
    if ( v27 >= 1 )
    {
      v28 = 0;
      while ( 1 )
      {
        if ( v27 <= v28 )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_42293568(0LL);
        v29 = selectEquipedCommandCodeServantList->fields._items->m_Items[v28];
        if ( !v29 || !v7 )
          goto LABEL_66;
        LODWORD(v30) = v7->fields._size;
        v31 = v29->fields.svtId;
        if ( (int)v30 < 1 )
        {
          v32 = 0;
          if ( !v8 )
            goto LABEL_66;
        }
        else
        {
          v32 = 0;
          v33 = 0LL;
          do
          {
            if ( v33 >= (unsigned int)v30 )
              System_ThrowHelper__ThrowArgumentOutOfRangeException_42293568(0LL);
            v34 = v7->fields._items->m_Items[v33 + 1];
            v30 = v7->fields._size;
            ++v33;
            if ( v31 == v34 )
              ++v32;
          }
          while ( (__int64)v33 < v30 );
          if ( !v8 )
            goto LABEL_66;
        }
        this = (CheckMaterialSvtListViewManager_o *)System_Collections_Generic_Dictionary_int__int___get_Item(
                                                      v8,
                                                      v31,
                                                      (const MethodInfo_2FE8CB0 *)Method_System_Collections_Generic_Dictionary_int__int__get_Item__);
        if ( (_DWORD)this == v32 )
        {
          if ( !v37 )
            goto LABEL_66;
          System_Collections_Generic_List_int___Add(
            v37,
            v31,
            (const MethodInfo_30E5DE8 *)Method_System_Collections_Generic_List_int__Add__);
        }
        v27 = selectEquipedCommandCodeServantList->fields._size;
        if ( (int)++v28 >= v27 )
          return v5;
      }
    }
  }
  return v5;
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
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v4; // x19
  void *Instance; // x0
  __int64 v6; // x1
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *v7; // x21
  _BOOL8 v8; // x0
  __int64 v9; // x1
  UserServantEntity_o *Entity; // x0
  struct CheckMaterialSvtListViewManager___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__16_0; // x20
  Il2CppObject *v13; // x21
  struct CheckMaterialSvtListViewManager___c_StaticFields *v14; // x0
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  System_Collections_Generic_List_Enumerator_T__o v22; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v23; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_438C3AA & 1) == 0 )
  {
    sub_B775C4(&Method_System_Comparison_UserCommandCodeEntity___ctor__);
    sub_B775C4(&System_Comparison_UserCommandCodeEntity__TypeInfo);
    sub_B775C4(&Method_DataManager_GetMasterData_UserCommandCodeMaster___);
    sub_B775C4(&Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__GetEntity__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_long__Dispose__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_long__MoveNext__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_long__get_Current__);
    sub_B775C4(&Method_System_Collections_Generic_List_UserCommandCodeEntity__Add__);
    sub_B775C4(&Method_System_Collections_Generic_List_long__GetEnumerator__);
    sub_B775C4(&Method_System_Collections_Generic_List_UserCommandCodeEntity__Sort__);
    sub_B775C4(&Method_System_Collections_Generic_List_UserCommandCodeEntity___ctor__);
    sub_B775C4(&System_Collections_Generic_List_UserCommandCodeEntity__TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B775C4(&Method_CheckMaterialSvtListViewManager___c__GetSortEntList_b__16_0__);
    sub_B775C4(&CheckMaterialSvtListViewManager___c_TypeInfo);
    byte_438C3AA = 1;
  }
  memset(&v23, 0, sizeof(v23));
  v4 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B77694(System_Collections_Generic_List_UserCommandCodeEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v4,
    (const MethodInfo_30525D4 *)Method_System_Collections_Generic_List_UserCommandCodeEntity___ctor__);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_22;
  Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
               (DataManager_o *)Instance,
               (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_UserCommandCodeMaster___);
  if ( !commandCodeIds )
    goto LABEL_22;
  v7 = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)Instance;
  System_Collections_Generic_List_long___GetEnumerator(
    &v22,
    commandCodeIds,
    (const MethodInfo_30ECBDC *)Method_System_Collections_Generic_List_long__GetEnumerator__);
  v23 = v22;
  while ( 1 )
  {
    v8 = System_Collections_Generic_List_Enumerator_long___MoveNext(
           &v23,
           (const MethodInfo_225AF74 *)Method_System_Collections_Generic_List_Enumerator_long__MoveNext__);
    if ( !v8 )
      break;
    if ( !v7 )
      sub_B7769C(v8, v9);
    Entity = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
               v7,
               (int64_t)v23.fields.current,
               (const MethodInfo_21FBABC *)Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__GetEntity__);
    if ( !v4 )
      sub_B7769C(Entity, Entity);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      v4,
      (EventMissionProgressRequest_Argument_ProgressData_o *)Entity,
      (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_UserCommandCodeEntity__Add__);
  }
  System_Collections_Generic_List_Enumerator_long___Dispose(
    &v23,
    (const MethodInfo_225AF70 *)Method_System_Collections_Generic_List_Enumerator_long__Dispose__);
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
    v13 = (Il2CppObject *)static_fields->__9;
    _9__16_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B77694(System_Comparison_UserCommandCodeEntity__TypeInfo);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__16_0,
      v13,
      Method_CheckMaterialSvtListViewManager___c__GetSortEntList_b__16_0__,
      (const MethodInfo_2B42C0C *)Method_System_Comparison_UserCommandCodeEntity___ctor__);
    v14 = CheckMaterialSvtListViewManager___c_TypeInfo->static_fields;
    v14->__9__16_0 = (struct System_Comparison_UserCommandCodeEntity__o *)_9__16_0;
    sub_B77560(
      (BattleServantConfConponent_o *)&v14->__9__16_0,
      (System_Int32_array **)_9__16_0,
      v15,
      v16,
      v17,
      v18,
      v19,
      v20);
  }
  if ( !v4 )
LABEL_22:
    sub_B7769C(Instance, v6);
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v4,
    (System_Comparison_T__o *)_9__16_0,
    (const MethodInfo_3055374 *)Method_System_Collections_Generic_List_UserCommandCodeEntity__Sort__);
  return (System_Collections_Generic_List_UserCommandCodeEntity__o *)v4;
}


System_Collections_Generic_List_UserServantEntity__o *__fastcall CheckMaterialSvtListViewManager__GetSvtSortEntList(
        CheckMaterialSvtListViewManager_o *this,
        System_Collections_Generic_List_long__o *servantIds,
        const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v4; // x19
  void *Instance; // x0
  __int64 v6; // x1
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *v7; // x21
  _BOOL8 v8; // x0
  __int64 v9; // x1
  UserServantEntity_o *Entity; // x0
  struct CheckMaterialSvtListViewManager___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__14_0; // x20
  Il2CppObject *v13; // x21
  struct CheckMaterialSvtListViewManager___c_StaticFields *v14; // x0
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  System_Collections_Generic_List_Enumerator_T__o v22; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v23; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_438C3A8 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Comparison_UserServantEntity___ctor__);
    sub_B775C4(&System_Comparison_UserServantEntity__TypeInfo);
    sub_B775C4(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_B775C4(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_long__Dispose__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_long__MoveNext__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_long__get_Current__);
    sub_B775C4(&Method_System_Collections_Generic_List_UserServantEntity__Add__);
    sub_B775C4(&Method_System_Collections_Generic_List_long__GetEnumerator__);
    sub_B775C4(&Method_System_Collections_Generic_List_UserServantEntity__Sort__);
    sub_B775C4(&Method_System_Collections_Generic_List_UserServantEntity___ctor__);
    sub_B775C4(&System_Collections_Generic_List_UserServantEntity__TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B775C4(&Method_CheckMaterialSvtListViewManager___c__GetSvtSortEntList_b__14_0__);
    sub_B775C4(&CheckMaterialSvtListViewManager___c_TypeInfo);
    byte_438C3A8 = 1;
  }
  memset(&v23, 0, sizeof(v23));
  v4 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B77694(System_Collections_Generic_List_UserServantEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v4,
    (const MethodInfo_30525D4 *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_22;
  Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
               (DataManager_o *)Instance,
               (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !servantIds )
    goto LABEL_22;
  v7 = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)Instance;
  System_Collections_Generic_List_long___GetEnumerator(
    &v22,
    servantIds,
    (const MethodInfo_30ECBDC *)Method_System_Collections_Generic_List_long__GetEnumerator__);
  v23 = v22;
  while ( 1 )
  {
    v8 = System_Collections_Generic_List_Enumerator_long___MoveNext(
           &v23,
           (const MethodInfo_225AF74 *)Method_System_Collections_Generic_List_Enumerator_long__MoveNext__);
    if ( !v8 )
      break;
    if ( !v7 )
      sub_B7769C(v8, v9);
    Entity = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
               v7,
               (int64_t)v23.fields.current,
               (const MethodInfo_21FBABC *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    if ( !v4 )
      sub_B7769C(Entity, Entity);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      v4,
      (EventMissionProgressRequest_Argument_ProgressData_o *)Entity,
      (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_UserServantEntity__Add__);
  }
  System_Collections_Generic_List_Enumerator_long___Dispose(
    &v23,
    (const MethodInfo_225AF70 *)Method_System_Collections_Generic_List_Enumerator_long__Dispose__);
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
    v13 = (Il2CppObject *)static_fields->__9;
    _9__14_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B77694(System_Comparison_UserServantEntity__TypeInfo);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__14_0,
      v13,
      Method_CheckMaterialSvtListViewManager___c__GetSvtSortEntList_b__14_0__,
      (const MethodInfo_2B42C0C *)Method_System_Comparison_UserServantEntity___ctor__);
    v14 = CheckMaterialSvtListViewManager___c_TypeInfo->static_fields;
    v14->__9__14_0 = (struct System_Comparison_UserServantEntity__o *)_9__14_0;
    sub_B77560(
      (BattleServantConfConponent_o *)&v14->__9__14_0,
      (System_Int32_array **)_9__14_0,
      v15,
      v16,
      v17,
      v18,
      v19,
      v20);
  }
  if ( !v4 )
LABEL_22:
    sub_B7769C(Instance, v6);
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v4,
    (System_Comparison_T__o *)_9__14_0,
    (const MethodInfo_3055374 *)Method_System_Collections_Generic_List_UserServantEntity__Sort__);
  return (System_Collections_Generic_List_UserServantEntity__o *)v4;
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
  int32_t kind; // w21
  __int64 Instance; // x0
  const MethodInfo *v7; // x1
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x20
  unsigned __int64 v9; // x22
  ListViewItem_o *v10; // x20
  __int64 v11; // x10
  __int128 v12; // q0
  __int64 v13; // x21
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  System_Int32_array **v20; // x1
  UnityEngine_Object_o *viewObject; // x21
  struct System_Collections_Generic_List_ListViewItem__o *v22; // x21
  __int64 v23; // x20
  unsigned __int64 v24; // x23
  ListViewItem_o *v25; // x21
  __int64 v26; // x10
  __int128 v27; // q0
  __int64 v28; // x22
  const MethodInfo *v29; // x1
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7
  System_Int32_array **v36; // x1
  __int64 v37; // x8
  UnityEngine_Object_o *v38; // x22
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v39; // [xsp+0h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v40; // [xsp+20h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v41; // [xsp+40h] [xbp-80h]
  UserServantEntity_o *v42; // [xsp+68h] [xbp-58h] BYREF
  UserServantEntity_o *entity; // [xsp+78h] [xbp-48h] BYREF

  if ( (byte_438C3AC & 1) == 0 )
  {
    sub_B775C4(&CheckMaterialSvtListViewItem_TypeInfo);
    sub_B775C4(&Method_DataManager_GetMasterData_UserCommandCodeMaster___);
    sub_B775C4(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_B775C4(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
    sub_B775C4(&Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__TryGetEntity__);
    sub_B775C4(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_B775C4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_438C3AC = 1;
  }
  entity = 0LL;
  v42 = 0LL;
  if ( !this->fields.itemList )
    return;
  kind = this->fields.kind;
  Instance = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_54;
  if ( kind == 2 )
  {
    Instance = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_UserCommandCodeMaster___);
    if ( Instance )
    {
      Instance = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___TryGetEntity(
                   (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)Instance,
                   &entity,
                   selectedId,
                   (const MethodInfo_21FBB18 *)Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__TryGetEntity__);
      if ( (Instance & 1) == 0 )
        return;
      itemList = this->fields.itemList;
      if ( itemList )
      {
        v9 = 0LL;
        while ( (__int64)v9 < itemList->fields._size )
        {
          if ( v9 >= (unsigned int)itemList->fields._size )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_42293568(0LL);
          v10 = itemList->fields._items->m_Items[v9];
          if ( v10 )
          {
            v11 = *(&CheckMaterialSvtListViewItem_TypeInfo->_2.bitflags2 + 1);
            if ( *(&v10->klass->_2.bitflags2 + 1) >= (unsigned int)v11
              && (CheckMaterialSvtListViewItem_c *)v10->klass->_2.typeHierarchy[v11 - 1] == CheckMaterialSvtListViewItem_TypeInfo )
            {
              Instance = CheckMaterialSvtListViewItem__get_UserCommandCodeId((CheckMaterialSvtListViewItem_o *)v10, v7);
              if ( entity )
              {
                v12 = *(_OWORD *)&entity->fields.id.fields.fakeValue;
                v13 = Instance;
                *(_OWORD *)&v41.fields.currentCryptoKey = *(_OWORD *)&entity->fields.id.fields.currentCryptoKey;
                *(_OWORD *)&v41.fields.fakeValue = v12;
                if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
                }
                v40 = v41;
                if ( v13 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_45429112(&v40, 0LL) )
                {
                  v20 = (System_Int32_array **)entity;
                  v10[1].fields.sortValue0 = (int64_t)entity;
                  sub_B77560(
                    (BattleServantConfConponent_o *)&v10[1].fields.sortValue0,
                    v20,
                    v14,
                    v15,
                    v16,
                    v17,
                    v18,
                    v19);
                }
                BYTE4(v10[1].fields.sortValue2) = 0;
                LODWORD(v10[1].fields.viewObject) = -1;
                viewObject = (UnityEngine_Object_o *)v10->fields.viewObject;
                if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                }
                Instance = UnityEngine_Object__op_Inequality(viewObject, 0LL, 0LL);
                if ( (Instance & 1) != 0 )
                {
                  Instance = (__int64)v10->fields.viewObject;
                  if ( !Instance )
                    goto LABEL_54;
                  Instance = (*(__int64 (__fastcall **)(__int64, ListViewItem_o *, _QWORD))(*(_QWORD *)Instance + 392LL))(
                               Instance,
                               v10,
                               *(_QWORD *)(*(_QWORD *)Instance + 400LL));
                }
                itemList = this->fields.itemList;
                ++v9;
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
    sub_B7769C(Instance, v7);
  }
  Instance = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !Instance )
    goto LABEL_54;
  if ( !DataMasterBase_UserServantStorageMaster__UserServantEntity__long___TryGetEntity(
          (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)Instance,
          &v42,
          selectedId,
          (const MethodInfo_21FBB18 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__) )
    return;
  Instance = (__int64)UserGameMaster__getSelfUserGame(0LL);
  v22 = this->fields.itemList;
  if ( !v22 )
    goto LABEL_54;
  v23 = Instance;
  v24 = 0LL;
  while ( (__int64)v24 < v22->fields._size )
  {
    if ( v24 >= (unsigned int)v22->fields._size )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_42293568(0LL);
    v25 = v22->fields._items->m_Items[v24];
    if ( v25 )
    {
      v26 = *(&CheckMaterialSvtListViewItem_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v25->klass->_2.bitflags2 + 1) >= (unsigned int)v26
        && (CheckMaterialSvtListViewItem_c *)v25->klass->_2.typeHierarchy[v26 - 1] == CheckMaterialSvtListViewItem_TypeInfo )
      {
        Instance = CheckMaterialSvtListViewItem__get_UserSvtId((CheckMaterialSvtListViewItem_o *)v25, v7);
        if ( v42 )
        {
          v27 = *(_OWORD *)&v42->fields.id.fields.fakeValue;
          v28 = Instance;
          *(_OWORD *)&v41.fields.currentCryptoKey = *(_OWORD *)&v42->fields.id.fields.currentCryptoKey;
          *(_OWORD *)&v41.fields.fakeValue = v27;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          }
          v39 = v41;
          if ( v28 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_45429112(&v39, 0LL) )
          {
            v36 = (System_Int32_array **)v42;
            v25[1].klass = (ListViewItem_c *)v42;
            sub_B77560((BattleServantConfConponent_o *)&v25[1], v36, v30, v31, v32, v33, v34, v35);
          }
          Instance = CheckMaterialSvtListViewItem__get_UserSvtId((CheckMaterialSvtListViewItem_o *)v25, v29);
          if ( v23 )
          {
            v37 = *(_QWORD *)(v23 + 112);
            LODWORD(v25[1].fields.viewObject) = -1;
            v38 = (UnityEngine_Object_o *)v25->fields.viewObject;
            BYTE4(v25[1].fields.sortValue2) = Instance == v37;
            if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            }
            Instance = UnityEngine_Object__op_Inequality(v38, 0LL, 0LL);
            if ( (Instance & 1) != 0 )
            {
              Instance = (__int64)v25->fields.viewObject;
              if ( !Instance )
                goto LABEL_54;
              Instance = (*(__int64 (__fastcall **)(__int64, ListViewItem_o *, _QWORD))(*(_QWORD *)Instance + 392LL))(
                           Instance,
                           v25,
                           *(_QWORD *)(*(_QWORD *)Instance + 400LL));
            }
            v22 = this->fields.itemList;
            ++v24;
            if ( v22 )
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

  if ( (byte_438C3AF & 1) == 0 )
  {
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    byte_438C3AF = 1;
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
  System_Collections_Generic_List_CheckMaterialSvtListViewObject__o *v5; // x0
  __int64 v6; // x1
  int32_t size; // w8
  System_Collections_Generic_List_CheckMaterialSvtListViewObject__o *v8; // x21
  int v9; // w8
  __int64 v10; // x24
  CheckMaterialSvtListViewObject_o *v11; // x22
  System_Action_o *v12; // x23
  const MethodInfo *v13; // x3

  if ( (byte_438C3AE & 1) == 0 )
  {
    sub_B775C4(&System_Action_TypeInfo);
    sub_B775C4(&Method_CheckMaterialSvtListViewManager_OnMoveEnd__);
    sub_B775C4(&Method_System_Collections_Generic_List_CheckMaterialSvtListViewObject__get_Count__);
    sub_B775C4(&Method_System_Collections_Generic_List_CheckMaterialSvtListViewObject__get_Item__);
    sub_B775C4(&StringLiteral_10218/*"OnMoveEnd"*/);
    byte_438C3AE = 1;
  }
  v5 = CheckMaterialSvtListViewManager__get_ObjectList(this, *(const MethodInfo **)&mode);
  if ( !v5 )
    goto LABEL_13;
  size = v5->fields._size;
  v8 = v5;
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
    v9 = v5->fields._size;
    if ( v9 >= 1 )
    {
      v10 = 0LL;
      while ( 1 )
      {
        if ( v9 <= (unsigned int)v10 )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_42293568(0LL);
        v11 = v8->fields._items->m_Items[v10];
        v12 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
        System_Action___ctor(v12, (Il2CppObject *)this, Method_CheckMaterialSvtListViewManager_OnMoveEnd__, 0LL);
        if ( !v11 )
          break;
        CheckMaterialSvtListViewObject__Init(v11, mode, v12, v13);
        v9 = v8->fields._size;
        if ( (int)++v10 >= v9 )
          return;
      }
LABEL_13:
      sub_B7769C(v5, v6);
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
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.onSelectItem,
    (System_Int32_array **)onSelectItem,
    (System_String_array **)onSelectItem,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  CheckMaterialSvtListViewManager__SetMode_27304572(this, mode, v10);
}


void __fastcall CheckMaterialSvtListViewManager__SetMode_27304572(
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
  if ( (byte_438C3AD & 1) == 0 )
  {
    this = (CheckMaterialSvtListViewManager_o *)sub_B775C4(&CheckMaterialSvtListViewObject_TypeInfo);
    byte_438C3AD = 1;
  }
  if ( !obj
    || (v6 = *(&CheckMaterialSvtListViewObject_TypeInfo->_2.bitflags2 + 1),
        *(&obj->klass->_2.bitflags2 + 1) < (unsigned int)v6)
    || (CheckMaterialSvtListViewObject_c *)obj->klass->_2.typeHierarchy[v6 - 1] != CheckMaterialSvtListViewObject_TypeInfo )
  {
    sub_B7769C(this, obj);
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
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v3; // x20
  UnityEngine_GameObject_o *Component_srcLineSprite; // x0
  const MethodInfo *v5; // x1
  struct System_Collections_Generic_List_GameObject__o *objectList; // x21
  __int64 v7; // x22
  unsigned __int64 v8; // x26
  UnityEngine_Object_o *v9; // x21
  struct System_Collections_Generic_List_GameObject__o *v10; // x21
  EventMissionProgressRequest_Argument_ProgressData_o *v11; // x21

  if ( (byte_438C3A6 & 1) == 0 )
  {
    sub_B775C4(&Method_UnityEngine_GameObject_GetComponent_CheckMaterialSvtListViewObject___);
    sub_B775C4(&Method_System_Collections_Generic_List_CheckMaterialSvtListViewObject__Add__);
    sub_B775C4(&Method_System_Collections_Generic_List_CheckMaterialSvtListViewObject___ctor__);
    sub_B775C4(&Method_System_Collections_Generic_List_GameObject__get_Count__);
    sub_B775C4(&Method_System_Collections_Generic_List_GameObject__get_Item__);
    sub_B775C4(&System_Collections_Generic_List_CheckMaterialSvtListViewObject__TypeInfo);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    byte_438C3A6 = 1;
  }
  v3 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B77694(System_Collections_Generic_List_CheckMaterialSvtListViewObject__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v3,
    (const MethodInfo_30525D4 *)Method_System_Collections_Generic_List_CheckMaterialSvtListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
LABEL_23:
    sub_B7769C(Component_srcLineSprite, v5);
  v7 = 4LL;
  while ( 1 )
  {
    v8 = v7 - 4;
    if ( v7 - 4 >= objectList->fields._size )
      return (System_Collections_Generic_List_CheckMaterialSvtListViewObject__o *)v3;
    if ( v8 >= (unsigned int)objectList->fields._size )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_42293568(0LL);
    v9 = (UnityEngine_Object_o *)*((_QWORD *)&objectList->fields._items->obj.klass + v7);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    Component_srcLineSprite = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality(v9, 0LL, 0LL);
    if ( ((unsigned __int8)Component_srcLineSprite & 1) == 0 )
    {
      v10 = this->fields.objectList;
      if ( !v10 )
        goto LABEL_23;
      if ( v8 >= (unsigned int)v10->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42293568(0LL);
      Component_srcLineSprite = (UnityEngine_GameObject_o *)*((_QWORD *)&v10->fields._items->obj.klass + v7);
      if ( !Component_srcLineSprite )
        goto LABEL_23;
      Component_srcLineSprite = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                              Component_srcLineSprite,
                                                              (const MethodInfo_1DEBFC4 *)Method_UnityEngine_GameObject_GetComponent_CheckMaterialSvtListViewObject___);
      if ( !Component_srcLineSprite )
        goto LABEL_23;
      v11 = (EventMissionProgressRequest_Argument_ProgressData_o *)Component_srcLineSprite;
      Component_srcLineSprite = (UnityEngine_GameObject_o *)CheckMaterialSvtListViewObject__GetItem(
                                                              (CheckMaterialSvtListViewObject_o *)Component_srcLineSprite,
                                                              v5);
      if ( Component_srcLineSprite )
      {
        v5 = (const MethodInfo *)Component_srcLineSprite;
        if ( !LOBYTE(Component_srcLineSprite[3].fields.m_CachedPtr)
          || (Component_srcLineSprite = (UnityEngine_GameObject_o *)ListViewManager__ClippingItem_24185472(
                                                                      (ListViewManager_o *)this,
                                                                      (ListViewItem_o *)Component_srcLineSprite,
                                                                      0LL),
              ((unsigned __int8)Component_srcLineSprite & 1) != 0) )
        {
          if ( !v3 )
            goto LABEL_23;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v3,
            v11,
            (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_CheckMaterialSvtListViewObject__Add__);
        }
      }
    }
    objectList = this->fields.objectList;
    ++v7;
    if ( !objectList )
      goto LABEL_23;
  }
}


System_Collections_Generic_List_CheckMaterialSvtListViewObject__o *__fastcall CheckMaterialSvtListViewManager__get_ObjectList(
        CheckMaterialSvtListViewManager_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v3; // x20
  srcLineSprite_o *Component_srcLineSprite; // x0
  __int64 v5; // x1
  struct System_Collections_Generic_List_GameObject__o *objectList; // x21
  __int64 v7; // x22
  unsigned __int64 v8; // x26
  UnityEngine_Object_o *v9; // x21
  struct System_Collections_Generic_List_GameObject__o *v10; // x21

  if ( (byte_438C3A5 & 1) == 0 )
  {
    sub_B775C4(&Method_UnityEngine_GameObject_GetComponent_CheckMaterialSvtListViewObject___);
    sub_B775C4(&Method_System_Collections_Generic_List_CheckMaterialSvtListViewObject__Add__);
    sub_B775C4(&Method_System_Collections_Generic_List_CheckMaterialSvtListViewObject___ctor__);
    sub_B775C4(&Method_System_Collections_Generic_List_GameObject__get_Count__);
    sub_B775C4(&Method_System_Collections_Generic_List_GameObject__get_Item__);
    sub_B775C4(&System_Collections_Generic_List_CheckMaterialSvtListViewObject__TypeInfo);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    byte_438C3A5 = 1;
  }
  v3 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B77694(System_Collections_Generic_List_CheckMaterialSvtListViewObject__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v3,
    (const MethodInfo_30525D4 *)Method_System_Collections_Generic_List_CheckMaterialSvtListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
LABEL_19:
    sub_B7769C(Component_srcLineSprite, v5);
  v7 = 4LL;
  while ( 1 )
  {
    v8 = v7 - 4;
    if ( v7 - 4 >= objectList->fields._size )
      return (System_Collections_Generic_List_CheckMaterialSvtListViewObject__o *)v3;
    if ( v8 >= (unsigned int)objectList->fields._size )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_42293568(0LL);
    v9 = (UnityEngine_Object_o *)*((_QWORD *)&objectList->fields._items->obj.klass + v7);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    Component_srcLineSprite = (srcLineSprite_o *)UnityEngine_Object__op_Equality(v9, 0LL, 0LL);
    if ( ((unsigned __int8)Component_srcLineSprite & 1) == 0 )
    {
      v10 = this->fields.objectList;
      if ( !v10 )
        goto LABEL_19;
      if ( v8 >= (unsigned int)v10->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42293568(0LL);
      Component_srcLineSprite = (srcLineSprite_o *)*((_QWORD *)&v10->fields._items->obj.klass + v7);
      if ( !Component_srcLineSprite )
        goto LABEL_19;
      Component_srcLineSprite = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                  (UnityEngine_GameObject_o *)Component_srcLineSprite,
                                  (const MethodInfo_1DEBFC4 *)Method_UnityEngine_GameObject_GetComponent_CheckMaterialSvtListViewObject___);
      if ( !v3 )
        goto LABEL_19;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v3,
        (EventMissionProgressRequest_Argument_ProgressData_o *)Component_srcLineSprite,
        (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_CheckMaterialSvtListViewObject__Add__);
    }
    objectList = this->fields.objectList;
    ++v7;
    if ( !objectList )
      goto LABEL_19;
  }
}


void __fastcall CheckMaterialSvtListViewManager___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  struct CheckMaterialSvtListViewManager___c_StaticFields *static_fields; // x0

  if ( (byte_438856A & 1) == 0 )
  {
    sub_B775C4(&CheckMaterialSvtListViewManager___c_TypeInfo);
    byte_438856A = 1;
  }
  v1 = (Il2CppObject *)sub_B77694(CheckMaterialSvtListViewManager___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  static_fields = CheckMaterialSvtListViewManager___c_TypeInfo->static_fields;
  static_fields->__9 = (struct CheckMaterialSvtListViewManager___c_o *)v1;
  sub_B77560(static_fields);
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

  if ( (byte_438856B & 1) == 0 )
  {
    this = (CheckMaterialSvtListViewManager___c_o *)sub_B775C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_438856B = 1;
  }
  if ( !a || (this = (CheckMaterialSvtListViewManager___c_o *)UserCommandCodeEntity__GetRarity(a, 0LL), !b) )
    sub_B7769C(this, a);
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
  v10 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45425956(v16, 0LL);
  if ( v10 < CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45425956(b->fields.commandCodeId, 0LL) )
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
  v13 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45425956(v17, 0LL);
  v14 = *(_QWORD *)&b->fields.commandCodeId.fields.currentCryptoKey;
  *(_QWORD *)&v18.fields.fakeValue = *(_QWORD *)&b->fields.commandCodeId.fields.fakeValue;
  v15 = v13;
  *(_QWORD *)&v18.fields.currentCryptoKey = v14;
  if ( v15 <= CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45425956(v18, 0LL) )
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
    sub_B7769C(this, a);
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