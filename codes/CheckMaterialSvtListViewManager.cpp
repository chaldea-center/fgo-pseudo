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

  if ( (byte_40FAF59 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Action_CheckMaterialSvtListViewItem__Invoke__, selectItem);
    byte_40FAF59 = 1;
  }
  onSelectItem = this->fields.onSelectItem;
  if ( onSelectItem )
  {
    this->fields.onSelectItem = 0LL;
    sub_B16F98(
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
      (const MethodInfo_24B7324 *)Method_System_Action_CheckMaterialSvtListViewItem__Invoke__);
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
  System_Collections_Generic_List_WarBoardManager_TaskList__o *v17; // x20
  Il2CppObject *current; // x22
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *itemList; // x21
  int32_t v20; // w24
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x3
  __int64 v24; // x4
  CheckMaterialSvtListViewItem_o *v25; // x23
  const MethodInfo *v26; // x4
  System_Collections_Generic_List_Enumerator_T__o v27; // [xsp+8h] [xbp-68h] BYREF

  v8 = this;
  if ( (byte_40FAF52 & 1) == 0 )
  {
    sub_B16FFC(&CheckMaterialSvtListViewItem_TypeInfo, commandCodeIds);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_UserCommandCodeEntity__Dispose__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_UserCommandCodeEntity__MoveNext__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_UserCommandCodeEntity__get_Current__, v11);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewItem__Add__, v12);
    sub_B16FFC(&Method_System_Collections_Generic_List_UserCommandCodeEntity__GetEnumerator__, v13);
    sub_B16FFC(&Method_System_Collections_Generic_List_UserCommandCodeEntity__IndexOf__, v14);
    this = (CheckMaterialSvtListViewManager_o *)sub_B16FFC(
                                                  &Method_System_Collections_Generic_List_long__get_Count__,
                                                  v15);
    byte_40FAF52 = 1;
  }
  memset(&v27, 0, sizeof(v27));
  if ( commandCodeIds && commandCodeIds->fields._size >= 1 && !isExceeded && !isSellLastServant )
  {
    v16 = CheckMaterialSvtListViewManager__GetSortEntList(this, commandCodeIds, (const MethodInfo *)isExceeded);
    if ( !v16 )
      sub_B170D4();
    v17 = (System_Collections_Generic_List_WarBoardManager_TaskList__o *)v16;
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v27,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v16,
      (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_UserCommandCodeEntity__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v27,
              (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_UserCommandCodeEntity__MoveNext__) )
    {
      current = v27.fields.current;
      itemList = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v8->fields.itemList;
      v20 = System_Collections_Generic_List_WarBoardManager_TaskList___IndexOf(
              v17,
              (WarBoardManager_TaskList_o *)v27.fields.current,
              (const MethodInfo_2F26D88 *)Method_System_Collections_Generic_List_UserCommandCodeEntity__IndexOf__);
      v25 = (CheckMaterialSvtListViewItem_o *)sub_B170CC(CheckMaterialSvtListViewItem_TypeInfo, v21, v22, v23, v24);
      CheckMaterialSvtListViewItem___ctor_26918076(v25, v20, (UserCommandCodeEntity_o *)current, 0, v26);
      if ( !itemList )
        sub_B170D4();
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        itemList,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v25,
        (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v27,
      (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_UserCommandCodeEntity__Dispose__);
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
  WebViewManager_o *Instance; // x0
  WebViewManager_o *v25; // x0
  UserDeckMaster_o *MasterData_WarQuestSelectionMaster; // x21
  int64_t UserId; // x0
  CheckMaterialSvtListViewManager_o *v28; // x0
  const MethodInfo *v29; // x2
  const MethodInfo *v30; // x2
  System_Collections_Generic_List_UserServantEntity__o *v31; // x0
  System_Collections_Generic_List_WarBoardManager_TaskList__o *v32; // x22
  Il2CppObject *current; // x25
  void *monitor; // x19
  Il2CppClass *klass; // x20
  int32_t v36; // w1
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x26
  int32_t v38; // w0
  Il2CppObject v39; // q0
  int32_t v40; // w27
  System_Int64_array *v41; // x21
  System_Int64_array *v42; // x23
  int64_t v43; // x0
  __int64 v44; // x1
  __int64 v45; // x2
  __int64 v46; // x3
  __int64 v47; // x4
  int64_t favoriteUserSvtId; // x24
  int64_t v49; // x20
  CheckMaterialSvtListViewItem_o *v50; // x19
  const MethodInfo *v51; // x6
  System_Collections_Generic_List_int__o *v52; // [xsp+0h] [xbp-E0h]
  UserGameEntity_o *SelfUserGame; // [xsp+8h] [xbp-D8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v56; // [xsp+20h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v57; // [xsp+40h] [xbp-A0h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v58; // [xsp+60h] [xbp-80h] BYREF
  System_Int64_array *equipIdList; // [xsp+80h] [xbp-60h] BYREF
  System_Int64_array *svtIdList; // [xsp+88h] [xbp-58h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v61; // 0:x0.16

  if ( (byte_40FAF50 & 1) == 0 )
  {
    sub_B16FFC(&CheckMaterialSvtListViewItem_TypeInfo, selectMaterialItemList);
    sub_B16FFC(&Method_DataManager_GetMasterData_UserDeckMaster___, v9);
    sub_B16FFC(&Method_DataManager_GetMasterData_UserServantMaster___, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_UserServantEntity__Dispose__, v11);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_UserServantEntity__MoveNext__, v12);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_UserServantEntity__get_Current__, v13);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewItem__Add__, v14);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__Contains__, v15);
    sub_B16FFC(&Method_System_Collections_Generic_List_UserServantEntity__GetEnumerator__, v16);
    sub_B16FFC(&Method_System_Collections_Generic_List_UserServantEntity__IndexOf__, v17);
    sub_B16FFC(&Method_System_Collections_Generic_List_long__get_Count__, v18);
    sub_B16FFC(&Method_System_Collections_Generic_List_CombineServantListViewItem__get_Count__, v19);
    sub_B16FFC(&NetworkManager_TypeInfo, v20);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v21);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v22);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v23);
    byte_40FAF50 = 1;
  }
  equipIdList = 0LL;
  svtIdList = 0LL;
  memset(&v58, 0, sizeof(v58));
  if ( servantIds && servantIds->fields._size >= 1 )
  {
    if ( !selectMaterialItemList )
      goto LABEL_41;
    if ( selectMaterialItemList->fields._size < 1 )
      return;
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_41;
    DataManager__GetMasterData_WarQuestSelectionMaster_(
      (DataManager_o *)Instance,
      (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserServantMaster___);
    SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
    v25 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !v25 )
      goto LABEL_41;
    MasterData_WarQuestSelectionMaster = (UserDeckMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                               (DataManager_o *)v25,
                                                               (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserDeckMaster___);
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    UserId = NetworkManager__get_UserId(0LL);
    if ( !MasterData_WarQuestSelectionMaster
      || (UserDeckMaster__getPartyList(MasterData_WarQuestSelectionMaster, &svtIdList, &equipIdList, UserId, 0LL),
          v52 = CheckMaterialSvtListViewManager__GetEquipedCommandCodeSellLastSvtList(v28, selectMaterialItemList, v29),
          (v31 = CheckMaterialSvtListViewManager__GetSvtSortEntList(
                   (CheckMaterialSvtListViewManager_o *)v52,
                   servantIds,
                   v30)) == 0LL) )
    {
LABEL_41:
      sub_B170D4();
    }
    v32 = (System_Collections_Generic_List_WarBoardManager_TaskList__o *)v31;
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v57,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v31,
      (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_UserServantEntity__GetEnumerator__);
    v58.fields.current = (Il2CppObject *)v57.fields.fakeValue;
    *(_OWORD *)&v58.fields.list = *(_OWORD *)&v57.fields.currentCryptoKey;
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v58,
              (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_UserServantEntity__MoveNext__) )
    {
      current = v58.fields.current;
      if ( isExceeded )
      {
        if ( !v58.fields.current )
          sub_B170D4();
        if ( !UserServantEntity__isExceeded((UserServantEntity_o *)v58.fields.current, 0LL) )
          continue;
      }
      if ( !isSellLastServant )
        goto LABEL_26;
      if ( !current )
        sub_B170D4();
      klass = current[5].klass;
      monitor = current[5].monitor;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v61.fields.currentCryptoKey = klass;
      *(_QWORD *)&v61.fields.fakeValue = monitor;
      v36 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v61, 0LL);
      if ( !v52 )
        sub_B170D4();
      if ( System_Collections_Generic_List_int___Contains(
             v52,
             v36,
             (const MethodInfo_2F10944 *)Method_System_Collections_Generic_List_int__Contains__) )
      {
LABEL_26:
        itemList = this->fields.itemList;
        v38 = System_Collections_Generic_List_WarBoardManager_TaskList___IndexOf(
                v32,
                (WarBoardManager_TaskList_o *)current,
                (const MethodInfo_2F26D88 *)Method_System_Collections_Generic_List_UserServantEntity__IndexOf__);
        if ( !current )
          sub_B170D4();
        v39 = current[2];
        v40 = v38;
        v41 = equipIdList;
        v42 = svtIdList;
        *(Il2CppObject *)&v57.fields.currentCryptoKey = current[1];
        *(Il2CppObject *)&v57.fields.fakeValue = v39;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        }
        v56 = v57;
        v43 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v56, 0LL);
        if ( !SelfUserGame )
          sub_B170D4();
        favoriteUserSvtId = SelfUserGame->fields.favoriteUserSvtId;
        v49 = v43;
        v50 = (CheckMaterialSvtListViewItem_o *)sub_B170CC(CheckMaterialSvtListViewItem_TypeInfo, v44, v45, v46, v47);
        CheckMaterialSvtListViewItem___ctor(
          v50,
          v40,
          (UserServantEntity_o *)current,
          v42,
          v41,
          v49 == favoriteUserSvtId,
          v51);
        if ( !itemList )
          sub_B170D4();
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)itemList,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v50,
          (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
      }
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v58,
      (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_UserServantEntity__Dispose__);
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
  int32_t v15; // w0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v17; // 0:x0.16

  if ( (byte_40FAF5A & 1) == 0 )
  {
    sub_B16FFC(&CheckMaterialSvtListViewItem_TypeInfo, *(_QWORD *)&svtId);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v5);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v6);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v7);
    byte_40FAF5A = 1;
  }
  itemList = this->fields.itemList;
  if ( !itemList )
LABEL_19:
    sub_B170D4();
  v9 = 0LL;
  v10 = 0LL;
  while ( (__int64)v9 < itemList->fields._size )
  {
    if ( v9 >= (unsigned int)itemList->fields._size )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
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
        *(_QWORD *)&v17.fields.currentCryptoKey = v14;
        *(_QWORD *)&v17.fields.fakeValue = v13;
        v15 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v17, 0LL);
        itemList = this->fields.itemList;
        if ( v15 == svtId )
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
  __int64 v5; // x1
  __int64 v6; // x1
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x24
  unsigned __int64 v8; // x22
  int64_t v9; // x21
  ListViewItem_o *v10; // x8
  __int64 v11; // x11

  if ( (byte_40FAF5B & 1) == 0 )
  {
    sub_B16FFC(&CheckMaterialSvtListViewItem_TypeInfo, *(_QWORD *)&commandCodeId);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v5);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v6);
    byte_40FAF5B = 1;
  }
  itemList = this->fields.itemList;
  if ( !itemList )
LABEL_16:
    sub_B170D4();
  v8 = 0LL;
  v9 = 0LL;
  while ( (__int64)v8 < itemList->fields._size )
  {
    if ( v8 >= (unsigned int)itemList->fields._size )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
    v10 = itemList->fields._items->m_Items[v8];
    if ( v10 )
    {
      v11 = *(&CheckMaterialSvtListViewItem_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v10->klass->_2.bitflags2 + 1) >= (unsigned int)v11
        && (CheckMaterialSvtListViewItem_c *)v10->klass->_2.typeHierarchy[v11 - 1] == CheckMaterialSvtListViewItem_TypeInfo )
      {
        itemList = this->fields.itemList;
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
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  int32_t size; // w22
  System_Collections_Generic_List_int__o *v23; // x28
  WebViewManager_o *Instance; // x0
  UserServantMaster_o *MasterData_WarQuestSelectionMaster; // x0
  UserServantEntity_array *AllList; // x23
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x3
  __int64 v30; // x4
  System_Collections_Generic_List_int__o *v31; // x21
  __int64 v32; // x1
  __int64 v33; // x2
  __int64 v34; // x3
  __int64 v35; // x4
  System_Collections_Generic_Dictionary_int__int__o *v36; // x22
  int32_t v37; // w8
  int32_t i; // w20
  CombineServantListViewItem_o *v39; // x26
  int32_t v40; // w8
  int32_t svtId; // w24
  __int64 v42; // x28
  int32_t v43; // w25
  CombineServantListViewItem_o *v44; // x8
  int32_t v45; // w9
  bool v46; // zf
  WebViewManager_o *v47; // x0
  WarQuestSelectionMaster_o *IsServant; // x0
  __int64 v49; // x1
  __int64 v50; // x2
  int max_length; // w8
  DataMasterBase_WarMaster__WarEntity__int__o *v52; // x24
  unsigned int v53; // w28
  UserServantEntity_o *v54; // x25
  __int64 v55; // x26
  __int64 v56; // x27
  int32_t v57; // w0
  ServantEntity_o *Entity; // x0
  __int64 v59; // x25
  __int64 v60; // x26
  int32_t v61; // w0
  int32_t v62; // w8
  unsigned int v63; // w20
  CombineServantListViewItem_o *v64; // x9
  signed __int64 v65; // x8
  int32_t v66; // w23
  int v67; // w26
  unsigned __int64 v68; // x27
  int32_t v69; // w9
  System_Collections_Generic_List_int__o *v71; // [xsp+8h] [xbp-58h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v72; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v73; // 0:x0.16

  if ( (byte_40FAF54 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantMaster___, selectEquipedCommandCodeServantList);
    sub_B16FFC(&Method_DataManager_GetMasterData_UserServantMaster___, v6);
    sub_B16FFC(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__int__Add__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__int___ctor__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__int__get_Item__, v11);
    sub_B16FFC(&System_Collections_Generic_Dictionary_int__int__TypeInfo, v12);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__Add__, v13);
    sub_B16FFC(&Method_System_Collections_Generic_List_int___ctor__, v14);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__get_Count__, v15);
    sub_B16FFC(&Method_System_Collections_Generic_List_CombineServantListViewItem__get_Count__, v16);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__get_Item__, v17);
    sub_B16FFC(&Method_System_Collections_Generic_List_CombineServantListViewItem__get_Item__, v18);
    sub_B16FFC(&System_Collections_Generic_List_int__TypeInfo, v19);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v20);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v21);
    byte_40FAF54 = 1;
  }
  if ( !selectEquipedCommandCodeServantList )
    goto LABEL_66;
  size = selectEquipedCommandCodeServantList->fields._size;
  v23 = (System_Collections_Generic_List_int__o *)sub_B170CC(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    selectEquipedCommandCodeServantList,
                                                    method,
                                                    v3,
                                                    v4);
  System_Collections_Generic_List_int____ctor(
    v23,
    (const MethodInfo_2F0F794 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( size )
  {
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_66;
    MasterData_WarQuestSelectionMaster = (UserServantMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                  (DataManager_o *)Instance,
                                                                  (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserServantMaster___);
    if ( !MasterData_WarQuestSelectionMaster )
      goto LABEL_66;
    AllList = UserServantMaster__getAllList(MasterData_WarQuestSelectionMaster, 0LL);
    v31 = (System_Collections_Generic_List_int__o *)sub_B170CC(
                                                      System_Collections_Generic_List_int__TypeInfo,
                                                      v27,
                                                      v28,
                                                      v29,
                                                      v30);
    System_Collections_Generic_List_int____ctor(
      v31,
      (const MethodInfo_2F0F794 *)Method_System_Collections_Generic_List_int___ctor__);
    v36 = (System_Collections_Generic_Dictionary_int__int__o *)sub_B170CC(
                                                                 System_Collections_Generic_Dictionary_int__int__TypeInfo,
                                                                 v32,
                                                                 v33,
                                                                 v34,
                                                                 v35);
    System_Collections_Generic_Dictionary_int__int____ctor(
      v36,
      (const MethodInfo_2DDC410 *)Method_System_Collections_Generic_Dictionary_int__int___ctor__);
    v37 = selectEquipedCommandCodeServantList->fields._size;
    v71 = v23;
    if ( v37 >= 1 )
    {
      for ( i = 0; i < v37; ++i )
      {
        if ( v37 <= (unsigned int)i )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
        v39 = selectEquipedCommandCodeServantList->fields._items->m_Items[i];
        if ( !v39 || !v36 )
          goto LABEL_66;
        if ( !System_Collections_Generic_Dictionary_int__int___ContainsKey(
                v36,
                v39->fields.svtId,
                (const MethodInfo_2DDD218 *)Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__) )
        {
          v40 = selectEquipedCommandCodeServantList->fields._size;
          svtId = v39->fields.svtId;
          if ( v40 >= 1 )
          {
            v42 = 0LL;
            v43 = 0;
            while ( 1 )
            {
              if ( v40 <= (unsigned int)v42 )
                System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
              v44 = selectEquipedCommandCodeServantList->fields._items->m_Items[v42];
              if ( !v44 )
                break;
              v45 = v44->fields.svtId;
              v40 = selectEquipedCommandCodeServantList->fields._size;
              ++v42;
              v46 = svtId == v45;
              svtId = v39->fields.svtId;
              if ( v46 )
                ++v43;
              if ( (int)v42 >= v40 )
                goto LABEL_24;
            }
LABEL_66:
            sub_B170D4();
          }
          v43 = 0;
LABEL_24:
          System_Collections_Generic_Dictionary_int__int___Add(
            v36,
            svtId,
            v43,
            (const MethodInfo_2DDCFB4 *)Method_System_Collections_Generic_Dictionary_int__int__Add__);
        }
        v37 = selectEquipedCommandCodeServantList->fields._size;
      }
    }
    v47 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !v47 )
      goto LABEL_66;
    IsServant = DataManager__GetMasterData_WarQuestSelectionMaster_(
                  (DataManager_o *)v47,
                  (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantMaster___);
    if ( !AllList )
      goto LABEL_66;
    max_length = AllList->max_length;
    if ( max_length >= 1 )
    {
      v52 = (DataMasterBase_WarMaster__WarEntity__int__o *)IsServant;
      v53 = 0;
      do
      {
        if ( v53 >= max_length )
        {
          sub_B17100(IsServant, v49, v50);
          sub_B170A0();
        }
        v54 = AllList->m_Items[v53];
        if ( !v54 )
          goto LABEL_66;
        v56 = *(_QWORD *)&v54->fields.svtId.fields.currentCryptoKey;
        v55 = *(_QWORD *)&v54->fields.svtId.fields.fakeValue;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        }
        *(_QWORD *)&v72.fields.currentCryptoKey = v56;
        *(_QWORD *)&v72.fields.fakeValue = v55;
        v57 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v72, 0LL);
        if ( !v52 )
          goto LABEL_66;
        Entity = (ServantEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                      v52,
                                      v57,
                                      (const MethodInfo_266F388 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
        if ( !Entity )
          goto LABEL_66;
        IsServant = (WarQuestSelectionMaster_o *)ServantEntity__get_IsServant(Entity, 0LL);
        if ( ((unsigned __int8)IsServant & 1) != 0 )
        {
          IsServant = (WarQuestSelectionMaster_o *)UserServantEntity__IsEventJoin(v54, 0LL);
          if ( ((unsigned __int8)IsServant & 1) == 0 )
          {
            v60 = *(_QWORD *)&v54->fields.svtId.fields.currentCryptoKey;
            v59 = *(_QWORD *)&v54->fields.svtId.fields.fakeValue;
            if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            }
            *(_QWORD *)&v73.fields.currentCryptoKey = v60;
            *(_QWORD *)&v73.fields.fakeValue = v59;
            v61 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v73, 0LL);
            if ( !v31 )
              goto LABEL_66;
            System_Collections_Generic_List_int___Add(
              v31,
              v61,
              (const MethodInfo_2F104F0 *)Method_System_Collections_Generic_List_int__Add__);
          }
        }
        max_length = AllList->max_length;
      }
      while ( (int)++v53 < max_length );
    }
    v62 = selectEquipedCommandCodeServantList->fields._size;
    v23 = v71;
    if ( v62 >= 1 )
    {
      v63 = 0;
      while ( 1 )
      {
        if ( v62 <= v63 )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
        v64 = selectEquipedCommandCodeServantList->fields._items->m_Items[v63];
        if ( !v64 || !v31 )
          goto LABEL_66;
        LODWORD(v65) = v31->fields._size;
        v66 = v64->fields.svtId;
        if ( (int)v65 < 1 )
        {
          v67 = 0;
          if ( !v36 )
            goto LABEL_66;
        }
        else
        {
          v67 = 0;
          v68 = 0LL;
          do
          {
            if ( v68 >= (unsigned int)v65 )
              System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
            v69 = v31->fields._items->m_Items[v68 + 1];
            v65 = v31->fields._size;
            ++v68;
            if ( v66 == v69 )
              ++v67;
          }
          while ( (__int64)v68 < v65 );
          if ( !v36 )
            goto LABEL_66;
        }
        if ( System_Collections_Generic_Dictionary_int__int___get_Item(
               v36,
               v66,
               (const MethodInfo_2DDCEF4 *)Method_System_Collections_Generic_Dictionary_int__int__get_Item__) == v67 )
        {
          if ( !v71 )
            goto LABEL_66;
          System_Collections_Generic_List_int___Add(
            v71,
            v66,
            (const MethodInfo_2F104F0 *)Method_System_Collections_Generic_List_int__Add__);
        }
        v62 = selectEquipedCommandCodeServantList->fields._size;
        if ( (int)++v63 >= v62 )
          return v23;
      }
    }
  }
  return v23;
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
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v20; // x19
  WebViewManager_o *Instance; // x0
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *v23; // x21
  UserServantEntity_o *Entity; // x1
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x3
  __int64 v28; // x4
  CheckMaterialSvtListViewManager___c_c *v29; // x0
  struct CheckMaterialSvtListViewManager___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__16_0; // x20
  Il2CppObject *v32; // x21
  struct CheckMaterialSvtListViewManager___c_StaticFields *v33; // x0
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7
  System_Collections_Generic_List_Enumerator_T__o v41; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v42; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_40FAF53 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Comparison_UserCommandCodeEntity___ctor__, commandCodeIds);
    sub_B16FFC(&System_Comparison_UserCommandCodeEntity__TypeInfo, v6);
    sub_B16FFC(&Method_DataManager_GetMasterData_UserCommandCodeMaster___, v7);
    sub_B16FFC(&Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__GetEntity__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_long__Dispose__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_long__MoveNext__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_long__get_Current__, v11);
    sub_B16FFC(&Method_System_Collections_Generic_List_UserCommandCodeEntity__Add__, v12);
    sub_B16FFC(&Method_System_Collections_Generic_List_long__GetEnumerator__, v13);
    sub_B16FFC(&Method_System_Collections_Generic_List_UserCommandCodeEntity__Sort__, v14);
    sub_B16FFC(&Method_System_Collections_Generic_List_UserCommandCodeEntity___ctor__, v15);
    sub_B16FFC(&System_Collections_Generic_List_UserCommandCodeEntity__TypeInfo, v16);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v17);
    sub_B16FFC(&Method_CheckMaterialSvtListViewManager___c__GetSortEntList_b__16_0__, v18);
    sub_B16FFC(&CheckMaterialSvtListViewManager___c_TypeInfo, v19);
    byte_40FAF53 = 1;
  }
  memset(&v42, 0, sizeof(v42));
  v20 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_UserCommandCodeEntity__TypeInfo,
                                                                                                  commandCodeIds,
                                                                                                  method,
                                                                                                  v3,
                                                                                                  v4);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v20,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_UserCommandCodeEntity___ctor__);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_22;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserCommandCodeMaster___);
  if ( !commandCodeIds )
    goto LABEL_22;
  v23 = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)MasterData_WarQuestSelectionMaster;
  System_Collections_Generic_List_long___GetEnumerator(
    &v41,
    commandCodeIds,
    (const MethodInfo_2F172E4 *)Method_System_Collections_Generic_List_long__GetEnumerator__);
  v42 = v41;
  while ( System_Collections_Generic_List_Enumerator_long___MoveNext(
            &v42,
            (const MethodInfo_20728A8 *)Method_System_Collections_Generic_List_Enumerator_long__MoveNext__) )
  {
    if ( !v23 )
      sub_B170D4();
    Entity = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
               v23,
               (int64_t)v42.fields.current,
               (const MethodInfo_266F5B0 *)Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__GetEntity__);
    if ( !v20 )
      sub_B170D4();
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      v20,
      (EventMissionProgressRequest_Argument_ProgressData_o *)Entity,
      (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_UserCommandCodeEntity__Add__);
  }
  System_Collections_Generic_List_Enumerator_long___Dispose(
    &v42,
    (const MethodInfo_20728A4 *)Method_System_Collections_Generic_List_Enumerator_long__Dispose__);
  v29 = CheckMaterialSvtListViewManager___c_TypeInfo;
  if ( (BYTE3(CheckMaterialSvtListViewManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CheckMaterialSvtListViewManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CheckMaterialSvtListViewManager___c_TypeInfo);
    v29 = CheckMaterialSvtListViewManager___c_TypeInfo;
  }
  static_fields = v29->static_fields;
  _9__16_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)static_fields->__9__16_0;
  if ( !_9__16_0 )
  {
    if ( (BYTE3(v29->vtable._0_Equals.methodPtr) & 4) != 0 && !v29->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v29);
      static_fields = CheckMaterialSvtListViewManager___c_TypeInfo->static_fields;
    }
    v32 = (Il2CppObject *)static_fields->__9;
    _9__16_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B170CC(
                                                                           System_Comparison_UserCommandCodeEntity__TypeInfo,
                                                                           v25,
                                                                           v26,
                                                                           v27,
                                                                           v28);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__16_0,
      v32,
      Method_CheckMaterialSvtListViewManager___c__GetSortEntList_b__16_0__,
      (const MethodInfo_25BFD48 *)Method_System_Comparison_UserCommandCodeEntity___ctor__);
    v33 = CheckMaterialSvtListViewManager___c_TypeInfo->static_fields;
    v33->__9__16_0 = (struct System_Comparison_UserCommandCodeEntity__o *)_9__16_0;
    sub_B16F98(
      (BattleServantConfConponent_o *)&v33->__9__16_0,
      (System_Int32_array **)_9__16_0,
      v34,
      v35,
      v36,
      v37,
      v38,
      v39);
  }
  if ( !v20 )
LABEL_22:
    sub_B170D4();
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v20,
    (System_Comparison_T__o *)_9__16_0,
    (const MethodInfo_2F27DB4 *)Method_System_Collections_Generic_List_UserCommandCodeEntity__Sort__);
  return (System_Collections_Generic_List_UserCommandCodeEntity__o *)v20;
}


System_Collections_Generic_List_UserServantEntity__o *__fastcall CheckMaterialSvtListViewManager__GetSvtSortEntList(
        CheckMaterialSvtListViewManager_o *this,
        System_Collections_Generic_List_long__o *servantIds,
        const MethodInfo *method)
{
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
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v20; // x19
  WebViewManager_o *Instance; // x0
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *v23; // x21
  UserServantEntity_o *Entity; // x1
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x3
  __int64 v28; // x4
  CheckMaterialSvtListViewManager___c_c *v29; // x0
  struct CheckMaterialSvtListViewManager___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__14_0; // x20
  Il2CppObject *v32; // x21
  struct CheckMaterialSvtListViewManager___c_StaticFields *v33; // x0
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7
  System_Collections_Generic_List_Enumerator_T__o v41; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v42; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_40FAF51 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Comparison_UserServantEntity___ctor__, servantIds);
    sub_B16FFC(&System_Comparison_UserServantEntity__TypeInfo, v6);
    sub_B16FFC(&Method_DataManager_GetMasterData_UserServantMaster___, v7);
    sub_B16FFC(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_long__Dispose__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_long__MoveNext__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_long__get_Current__, v11);
    sub_B16FFC(&Method_System_Collections_Generic_List_UserServantEntity__Add__, v12);
    sub_B16FFC(&Method_System_Collections_Generic_List_long__GetEnumerator__, v13);
    sub_B16FFC(&Method_System_Collections_Generic_List_UserServantEntity__Sort__, v14);
    sub_B16FFC(&Method_System_Collections_Generic_List_UserServantEntity___ctor__, v15);
    sub_B16FFC(&System_Collections_Generic_List_UserServantEntity__TypeInfo, v16);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v17);
    sub_B16FFC(&Method_CheckMaterialSvtListViewManager___c__GetSvtSortEntList_b__14_0__, v18);
    sub_B16FFC(&CheckMaterialSvtListViewManager___c_TypeInfo, v19);
    byte_40FAF51 = 1;
  }
  memset(&v42, 0, sizeof(v42));
  v20 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_UserServantEntity__TypeInfo,
                                                                                                  servantIds,
                                                                                                  method,
                                                                                                  v3,
                                                                                                  v4);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v20,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_22;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !servantIds )
    goto LABEL_22;
  v23 = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)MasterData_WarQuestSelectionMaster;
  System_Collections_Generic_List_long___GetEnumerator(
    &v41,
    servantIds,
    (const MethodInfo_2F172E4 *)Method_System_Collections_Generic_List_long__GetEnumerator__);
  v42 = v41;
  while ( System_Collections_Generic_List_Enumerator_long___MoveNext(
            &v42,
            (const MethodInfo_20728A8 *)Method_System_Collections_Generic_List_Enumerator_long__MoveNext__) )
  {
    if ( !v23 )
      sub_B170D4();
    Entity = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
               v23,
               (int64_t)v42.fields.current,
               (const MethodInfo_266F5B0 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    if ( !v20 )
      sub_B170D4();
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      v20,
      (EventMissionProgressRequest_Argument_ProgressData_o *)Entity,
      (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_UserServantEntity__Add__);
  }
  System_Collections_Generic_List_Enumerator_long___Dispose(
    &v42,
    (const MethodInfo_20728A4 *)Method_System_Collections_Generic_List_Enumerator_long__Dispose__);
  v29 = CheckMaterialSvtListViewManager___c_TypeInfo;
  if ( (BYTE3(CheckMaterialSvtListViewManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CheckMaterialSvtListViewManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CheckMaterialSvtListViewManager___c_TypeInfo);
    v29 = CheckMaterialSvtListViewManager___c_TypeInfo;
  }
  static_fields = v29->static_fields;
  _9__14_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)static_fields->__9__14_0;
  if ( !_9__14_0 )
  {
    if ( (BYTE3(v29->vtable._0_Equals.methodPtr) & 4) != 0 && !v29->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v29);
      static_fields = CheckMaterialSvtListViewManager___c_TypeInfo->static_fields;
    }
    v32 = (Il2CppObject *)static_fields->__9;
    _9__14_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B170CC(
                                                                           System_Comparison_UserServantEntity__TypeInfo,
                                                                           v25,
                                                                           v26,
                                                                           v27,
                                                                           v28);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__14_0,
      v32,
      Method_CheckMaterialSvtListViewManager___c__GetSvtSortEntList_b__14_0__,
      (const MethodInfo_25BFD48 *)Method_System_Comparison_UserServantEntity___ctor__);
    v33 = CheckMaterialSvtListViewManager___c_TypeInfo->static_fields;
    v33->__9__14_0 = (struct System_Comparison_UserServantEntity__o *)_9__14_0;
    sub_B16F98(
      (BattleServantConfConponent_o *)&v33->__9__14_0,
      (System_Int32_array **)_9__14_0,
      v34,
      v35,
      v36,
      v37,
      v38,
      v39);
  }
  if ( !v20 )
LABEL_22:
    sub_B170D4();
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v20,
    (System_Comparison_T__o *)_9__14_0,
    (const MethodInfo_2F27DB4 *)Method_System_Collections_Generic_List_UserServantEntity__Sort__);
  return (System_Collections_Generic_List_UserServantEntity__o *)v20;
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
  WebViewManager_o *Instance; // x0
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *MasterData_WarQuestSelectionMaster; // x0
  const MethodInfo *v17; // x1
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x20
  unsigned __int64 v19; // x22
  ListViewItem_o *v20; // x20
  __int64 v21; // x10
  int64_t v22; // x0
  __int128 v23; // q0
  int64_t v24; // x21
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  System_Int32_array **v31; // x1
  UnityEngine_Object_o *viewObject; // x21
  struct ListViewObject_o *v33; // x0
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *v34; // x0
  UserGameEntity_o *SelfUserGame; // x0
  const MethodInfo *v36; // x1
  struct System_Collections_Generic_List_ListViewItem__o *v37; // x21
  UserGameEntity_o *v38; // x20
  unsigned __int64 v39; // x23
  ListViewItem_o *v40; // x21
  __int64 v41; // x10
  int64_t v42; // x0
  __int128 v43; // q0
  int64_t v44; // x22
  const MethodInfo *v45; // x1
  System_String_array **v46; // x2
  System_String_array **v47; // x3
  System_Boolean_array **v48; // x4
  System_Int32_array **v49; // x5
  System_Int32_array *v50; // x6
  System_Int32_array *v51; // x7
  System_Int32_array **v52; // x1
  int64_t v53; // x0
  int64_t favoriteUserSvtId; // x8
  UnityEngine_Object_o *v55; // x22
  struct ListViewObject_o *v56; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v57; // [xsp+0h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v58; // [xsp+20h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v59; // [xsp+40h] [xbp-80h]
  UserServantEntity_o *v60; // [xsp+68h] [xbp-58h] BYREF
  UserServantEntity_o *entity; // [xsp+78h] [xbp-48h] BYREF

  if ( (byte_40FAF55 & 1) == 0 )
  {
    sub_B16FFC(&CheckMaterialSvtListViewItem_TypeInfo, selectedId);
    sub_B16FFC(&Method_DataManager_GetMasterData_UserCommandCodeMaster___, v5);
    sub_B16FFC(&Method_DataManager_GetMasterData_UserServantMaster___, v6);
    sub_B16FFC(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__, v7);
    sub_B16FFC(&Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__TryGetEntity__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v10);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v11);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v12);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v13);
    byte_40FAF55 = 1;
  }
  entity = 0LL;
  v60 = 0LL;
  if ( !this->fields.itemList )
    return;
  kind = this->fields.kind;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_54;
  if ( kind == 2 )
  {
    MasterData_WarQuestSelectionMaster = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)DataManager__GetMasterData_WarQuestSelectionMaster_((DataManager_o *)Instance, (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserCommandCodeMaster___);
    if ( MasterData_WarQuestSelectionMaster )
    {
      if ( !DataMasterBase_UserServantStorageMaster__UserServantEntity__long___TryGetEntity(
              MasterData_WarQuestSelectionMaster,
              &entity,
              selectedId,
              (const MethodInfo_266F60C *)Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__TryGetEntity__) )
        return;
      itemList = this->fields.itemList;
      if ( itemList )
      {
        v19 = 0LL;
        while ( (__int64)v19 < itemList->fields._size )
        {
          if ( v19 >= (unsigned int)itemList->fields._size )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
          v20 = itemList->fields._items->m_Items[v19];
          if ( v20 )
          {
            v21 = *(&CheckMaterialSvtListViewItem_TypeInfo->_2.bitflags2 + 1);
            if ( *(&v20->klass->_2.bitflags2 + 1) >= (unsigned int)v21
              && (CheckMaterialSvtListViewItem_c *)v20->klass->_2.typeHierarchy[v21 - 1] == CheckMaterialSvtListViewItem_TypeInfo )
            {
              v22 = CheckMaterialSvtListViewItem__get_UserCommandCodeId((CheckMaterialSvtListViewItem_o *)v20, v17);
              if ( entity )
              {
                v23 = *(_OWORD *)&entity->fields.id.fields.fakeValue;
                v24 = v22;
                *(_OWORD *)&v59.fields.currentCryptoKey = *(_OWORD *)&entity->fields.id.fields.currentCryptoKey;
                *(_OWORD *)&v59.fields.fakeValue = v23;
                if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
                }
                v58 = v59;
                if ( v24 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v58, 0LL) )
                {
                  v31 = (System_Int32_array **)entity;
                  v20[1].fields.sortValue0 = (int64_t)entity;
                  sub_B16F98(
                    (BattleServantConfConponent_o *)&v20[1].fields.sortValue0,
                    v31,
                    v25,
                    v26,
                    v27,
                    v28,
                    v29,
                    v30);
                }
                BYTE4(v20[1].fields.sortValue2) = 0;
                LODWORD(v20[1].fields.viewObject) = -1;
                viewObject = (UnityEngine_Object_o *)v20->fields.viewObject;
                if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                }
                if ( UnityEngine_Object__op_Inequality(viewObject, 0LL, 0LL) )
                {
                  v33 = v20->fields.viewObject;
                  if ( !v33 )
                    goto LABEL_54;
                  ((void (__fastcall *)(struct ListViewObject_o *, ListViewItem_o *, Il2CppMethodPointer))v33->klass->vtable._5_SetItem.method)(
                    v33,
                    v20,
                    v33->klass->vtable._6_SetItem.methodPtr);
                }
                itemList = this->fields.itemList;
                ++v19;
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
    sub_B170D4();
  }
  v34 = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                 (DataManager_o *)Instance,
                                                                                 (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !v34 )
    goto LABEL_54;
  if ( !DataMasterBase_UserServantStorageMaster__UserServantEntity__long___TryGetEntity(
          v34,
          &v60,
          selectedId,
          (const MethodInfo_266F60C *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__) )
    return;
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  v37 = this->fields.itemList;
  if ( !v37 )
    goto LABEL_54;
  v38 = SelfUserGame;
  v39 = 0LL;
  while ( (__int64)v39 < v37->fields._size )
  {
    if ( v39 >= (unsigned int)v37->fields._size )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
    v40 = v37->fields._items->m_Items[v39];
    if ( v40 )
    {
      v41 = *(&CheckMaterialSvtListViewItem_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v40->klass->_2.bitflags2 + 1) >= (unsigned int)v41
        && (CheckMaterialSvtListViewItem_c *)v40->klass->_2.typeHierarchy[v41 - 1] == CheckMaterialSvtListViewItem_TypeInfo )
      {
        v42 = CheckMaterialSvtListViewItem__get_UserSvtId((CheckMaterialSvtListViewItem_o *)v40, v36);
        if ( v60 )
        {
          v43 = *(_OWORD *)&v60->fields.id.fields.fakeValue;
          v44 = v42;
          *(_OWORD *)&v59.fields.currentCryptoKey = *(_OWORD *)&v60->fields.id.fields.currentCryptoKey;
          *(_OWORD *)&v59.fields.fakeValue = v43;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          }
          v57 = v59;
          if ( v44 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v57, 0LL) )
          {
            v52 = (System_Int32_array **)v60;
            v40[1].klass = (ListViewItem_c *)v60;
            sub_B16F98((BattleServantConfConponent_o *)&v40[1], v52, v46, v47, v48, v49, v50, v51);
          }
          v53 = CheckMaterialSvtListViewItem__get_UserSvtId((CheckMaterialSvtListViewItem_o *)v40, v45);
          if ( v38 )
          {
            favoriteUserSvtId = v38->fields.favoriteUserSvtId;
            LODWORD(v40[1].fields.viewObject) = -1;
            v55 = (UnityEngine_Object_o *)v40->fields.viewObject;
            BYTE4(v40[1].fields.sortValue2) = v53 == favoriteUserSvtId;
            if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            }
            if ( UnityEngine_Object__op_Inequality(v55, 0LL, 0LL) )
            {
              v56 = v40->fields.viewObject;
              if ( !v56 )
                goto LABEL_54;
              ((void (__fastcall *)(struct ListViewObject_o *, ListViewItem_o *, Il2CppMethodPointer))v56->klass->vtable._5_SetItem.method)(
                v56,
                v40,
                v56->klass->vtable._6_SetItem.methodPtr);
            }
            v37 = this->fields.itemList;
            ++v39;
            if ( v37 )
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

  if ( (byte_40FAF58 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    byte_40FAF58 = 1;
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
  __int64 v11; // x2
  __int64 v12; // x3
  __int64 v13; // x4
  int32_t size; // w8
  System_Collections_Generic_List_CheckMaterialSvtListViewObject__o *v15; // x21
  int v16; // w8
  __int64 v17; // x24
  CheckMaterialSvtListViewObject_o *v18; // x22
  System_Action_o *v19; // x23
  const MethodInfo *v20; // x3

  if ( (byte_40FAF57 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, *(_QWORD *)&mode);
    sub_B16FFC(&Method_CheckMaterialSvtListViewManager_OnMoveEnd__, v5);
    sub_B16FFC(&Method_System_Collections_Generic_List_CheckMaterialSvtListViewObject__get_Count__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_CheckMaterialSvtListViewObject__get_Item__, v7);
    sub_B16FFC(&StringLiteral_10004, v8);
    byte_40FAF57 = 1;
  }
  v9 = CheckMaterialSvtListViewManager__get_ObjectList(this, *(const MethodInfo **)&mode);
  if ( !v9 )
    goto LABEL_13;
  size = v9->fields._size;
  v15 = v9;
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
    v16 = v9->fields._size;
    if ( v16 >= 1 )
    {
      v17 = 0LL;
      while ( 1 )
      {
        if ( v16 <= (unsigned int)v17 )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
        v18 = v15->fields._items->m_Items[v17];
        v19 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v10, v11, v12, v13);
        System_Action___ctor(v19, (Il2CppObject *)this, Method_CheckMaterialSvtListViewManager_OnMoveEnd__, 0LL);
        if ( !v18 )
          break;
        CheckMaterialSvtListViewObject__Init(v18, mode, v19, v20);
        v16 = v15->fields._size;
        if ( (int)++v17 >= v16 )
          return;
      }
LABEL_13:
      sub_B170D4();
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
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.onSelectItem,
    (System_Int32_array **)onSelectItem,
    (System_String_array **)onSelectItem,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  CheckMaterialSvtListViewManager__SetMode_26927816(this, mode, v10);
}


void __fastcall CheckMaterialSvtListViewManager__SetMode_26927816(
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
  __int64 v6; // x10
  int32_t v7; // w1

  if ( (byte_40FAF56 & 1) == 0 )
  {
    sub_B16FFC(&CheckMaterialSvtListViewObject_TypeInfo, obj);
    byte_40FAF56 = 1;
  }
  if ( !obj
    || (v6 = *(&CheckMaterialSvtListViewObject_TypeInfo->_2.bitflags2 + 1),
        *(&obj->klass->_2.bitflags2 + 1) < (unsigned int)v6)
    || (CheckMaterialSvtListViewObject_c *)obj->klass->_2.typeHierarchy[v6 - 1] != CheckMaterialSvtListViewObject_TypeInfo )
  {
    sub_B170D4();
  }
  if ( this->fields.initMode == 2 )
    v7 = 3;
  else
    v7 = 2;
  CheckMaterialSvtListViewObject__Init((CheckMaterialSvtListViewObject_o *)obj, v7, 0LL, method);
}


System_Collections_Generic_List_CheckMaterialSvtListViewObject__o *__fastcall CheckMaterialSvtListViewManager__get_ClippingObjectList(
        CheckMaterialSvtListViewManager_o *this,
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
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v12; // x20
  struct System_Collections_Generic_List_GameObject__o *objectList; // x21
  __int64 v14; // x22
  unsigned __int64 v15; // x26
  UnityEngine_Object_o *v16; // x21
  struct System_Collections_Generic_List_GameObject__o *v17; // x21
  UnityEngine_GameObject_o *v18; // x0
  CheckMaterialSvtListViewObject_o *Component_srcLineSprite; // x0
  const MethodInfo *v20; // x1
  EventMissionProgressRequest_Argument_ProgressData_o *v21; // x21
  ListViewItem_o *v22; // x0

  if ( (byte_40FAF4F & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_CheckMaterialSvtListViewObject___, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_CheckMaterialSvtListViewObject__Add__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_CheckMaterialSvtListViewObject___ctor__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_GameObject__get_Count__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_GameObject__get_Item__, v9);
    sub_B16FFC(&System_Collections_Generic_List_CheckMaterialSvtListViewObject__TypeInfo, v10);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v11);
    byte_40FAF4F = 1;
  }
  v12 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_CheckMaterialSvtListViewObject__TypeInfo,
                                                                                                  method,
                                                                                                  v2,
                                                                                                  v3,
                                                                                                  v4);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v12,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_CheckMaterialSvtListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
LABEL_23:
    sub_B170D4();
  v14 = 4LL;
  while ( 1 )
  {
    v15 = v14 - 4;
    if ( v14 - 4 >= objectList->fields._size )
      return (System_Collections_Generic_List_CheckMaterialSvtListViewObject__o *)v12;
    if ( v15 >= (unsigned int)objectList->fields._size )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
    v16 = (UnityEngine_Object_o *)*((_QWORD *)&objectList->fields._items->obj.klass + v14);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( !UnityEngine_Object__op_Equality(v16, 0LL, 0LL) )
    {
      v17 = this->fields.objectList;
      if ( !v17 )
        goto LABEL_23;
      if ( v15 >= (unsigned int)v17->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
      v18 = (UnityEngine_GameObject_o *)*((_QWORD *)&v17->fields._items->obj.klass + v14);
      if ( !v18 )
        goto LABEL_23;
      Component_srcLineSprite = (CheckMaterialSvtListViewObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                      v18,
                                                                      (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_CheckMaterialSvtListViewObject___);
      if ( !Component_srcLineSprite )
        goto LABEL_23;
      v21 = (EventMissionProgressRequest_Argument_ProgressData_o *)Component_srcLineSprite;
      v22 = (ListViewItem_o *)CheckMaterialSvtListViewObject__GetItem(Component_srcLineSprite, v20);
      if ( v22
        && (!v22->fields.isTermination || ListViewManager__ClippingItem_30192136((ListViewManager_o *)this, v22, 0LL)) )
      {
        if ( !v12 )
          goto LABEL_23;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v12,
          v21,
          (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_CheckMaterialSvtListViewObject__Add__);
      }
    }
    objectList = this->fields.objectList;
    ++v14;
    if ( !objectList )
      goto LABEL_23;
  }
}


System_Collections_Generic_List_CheckMaterialSvtListViewObject__o *__fastcall CheckMaterialSvtListViewManager__get_ObjectList(
        CheckMaterialSvtListViewManager_o *this,
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
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v12; // x20
  struct System_Collections_Generic_List_GameObject__o *objectList; // x21
  __int64 v14; // x22
  unsigned __int64 v15; // x26
  UnityEngine_Object_o *v16; // x21
  struct System_Collections_Generic_List_GameObject__o *v17; // x21
  UnityEngine_GameObject_o *v18; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *Component_srcLineSprite; // x0

  if ( (byte_40FAF4E & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_CheckMaterialSvtListViewObject___, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_CheckMaterialSvtListViewObject__Add__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_CheckMaterialSvtListViewObject___ctor__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_GameObject__get_Count__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_GameObject__get_Item__, v9);
    sub_B16FFC(&System_Collections_Generic_List_CheckMaterialSvtListViewObject__TypeInfo, v10);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v11);
    byte_40FAF4E = 1;
  }
  v12 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_CheckMaterialSvtListViewObject__TypeInfo,
                                                                                                  method,
                                                                                                  v2,
                                                                                                  v3,
                                                                                                  v4);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v12,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_CheckMaterialSvtListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
LABEL_19:
    sub_B170D4();
  v14 = 4LL;
  while ( 1 )
  {
    v15 = v14 - 4;
    if ( v14 - 4 >= objectList->fields._size )
      return (System_Collections_Generic_List_CheckMaterialSvtListViewObject__o *)v12;
    if ( v15 >= (unsigned int)objectList->fields._size )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
    v16 = (UnityEngine_Object_o *)*((_QWORD *)&objectList->fields._items->obj.klass + v14);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( !UnityEngine_Object__op_Equality(v16, 0LL, 0LL) )
    {
      v17 = this->fields.objectList;
      if ( !v17 )
        goto LABEL_19;
      if ( v15 >= (unsigned int)v17->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
      v18 = (UnityEngine_GameObject_o *)*((_QWORD *)&v17->fields._items->obj.klass + v14);
      if ( !v18 )
        goto LABEL_19;
      Component_srcLineSprite = (EventMissionProgressRequest_Argument_ProgressData_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                                         v18,
                                                                                         (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_CheckMaterialSvtListViewObject___);
      if ( !v12 )
        goto LABEL_19;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v12,
        Component_srcLineSprite,
        (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_CheckMaterialSvtListViewObject__Add__);
    }
    objectList = this->fields.objectList;
    ++v14;
    if ( !objectList )
      goto LABEL_19;
  }
}


void __fastcall CheckMaterialSvtListViewManager___c___cctor(const MethodInfo *method)
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

  if ( (byte_40F70C2 & 1) == 0 )
  {
    sub_B16FFC(&CheckMaterialSvtListViewManager___c_TypeInfo, v1);
    byte_40F70C2 = 1;
  }
  v5 = (Il2CppObject *)sub_B170CC(CheckMaterialSvtListViewManager___c_TypeInfo, v1, v2, v3, v4);
  System_Object___ctor(v5, 0LL);
  static_fields = (BattleServantConfConponent_o *)CheckMaterialSvtListViewManager___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v5;
  sub_B16F98(static_fields, (System_Int32_array **)v5, v7, v8, v9, v10, v11, v12);
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
  int32_t Rarity; // w0
  int32_t v8; // w21
  __int64 v9; // x21
  __int64 v10; // x22
  int32_t v11; // w21
  __int64 v12; // x20
  __int64 v13; // x21
  int32_t v14; // w0
  __int64 v15; // x8
  int32_t v16; // w19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v17; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v18; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v19; // 0:x0.16

  if ( (byte_40F70C3 & 1) == 0 )
  {
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, a);
    byte_40F70C3 = 1;
  }
  if ( !a || (Rarity = UserCommandCodeEntity__GetRarity(a, 0LL), !b) )
    sub_B170D4();
  if ( Rarity < UserCommandCodeEntity__GetRarity(b, 0LL) )
    return 1;
  v8 = UserCommandCodeEntity__GetRarity(a, 0LL);
  if ( v8 > UserCommandCodeEntity__GetRarity(b, 0LL) )
    return -1;
  v10 = *(_QWORD *)&a->fields.commandCodeId.fields.currentCryptoKey;
  v9 = *(_QWORD *)&a->fields.commandCodeId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v17.fields.currentCryptoKey = v10;
  *(_QWORD *)&v17.fields.fakeValue = v9;
  v11 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v17, 0LL);
  if ( v11 < CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(b->fields.commandCodeId, 0LL) )
    return 1;
  v13 = *(_QWORD *)&a->fields.commandCodeId.fields.currentCryptoKey;
  v12 = *(_QWORD *)&a->fields.commandCodeId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v18.fields.currentCryptoKey = v13;
  *(_QWORD *)&v18.fields.fakeValue = v12;
  v14 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v18, 0LL);
  v15 = *(_QWORD *)&b->fields.commandCodeId.fields.currentCryptoKey;
  *(_QWORD *)&v19.fields.fakeValue = *(_QWORD *)&b->fields.commandCodeId.fields.fakeValue;
  v16 = v14;
  *(_QWORD *)&v19.fields.currentCryptoKey = v15;
  if ( v16 <= CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v19, 0LL) )
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
  int32_t Rarity; // w0
  int32_t v8; // w21
  int32_t CollectionNo; // w21
  int32_t v10; // w20

  if ( !a || (Rarity = UserServantEntity__getRarity(a, 0LL), !b) )
    sub_B170D4();
  if ( Rarity < UserServantEntity__getRarity(b, 0LL) )
    return 1;
  v8 = UserServantEntity__getRarity(a, 0LL);
  if ( v8 > UserServantEntity__getRarity(b, 0LL) )
    return -1;
  CollectionNo = UserServantEntity__getCollectionNo(a, 0LL);
  if ( CollectionNo < UserServantEntity__getCollectionNo(b, 0LL) )
    return 1;
  v10 = UserServantEntity__getCollectionNo(a, 0LL);
  if ( v10 <= UserServantEntity__getCollectionNo(b, 0LL) )
    return 0;
  else
    return -1;
}