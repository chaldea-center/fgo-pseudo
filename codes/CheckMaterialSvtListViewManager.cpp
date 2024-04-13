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

  if ( (byte_42E9B91 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Action_CheckMaterialSvtListViewItem__Invoke__, (_DWORD)selectItem, (_DWORD)method, v3);
    byte_42E9B91 = 1;
  }
  onSelectItem = this->fields.onSelectItem;
  if ( onSelectItem )
  {
    this->fields.onSelectItem = 0LL;
    sub_B5D560(
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
      (const MethodInfo_258B334 *)Method_System_Action_CheckMaterialSvtListViewItem__Invoke__);
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
  System_Collections_Generic_List_UserCommandCodeEntity__o *v30; // x0
  __int64 v31; // x1
  System_Collections_Generic_List_WarBoardManager_TaskList__o *v32; // x20
  Il2CppObject *current; // x22
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *itemList; // x21
  int32_t v35; // w24
  CheckMaterialSvtListViewItem_o *v36; // x23
  const MethodInfo *v37; // x4
  __int64 v38; // x0
  __int64 v39; // x1
  System_Collections_Generic_List_Enumerator_T__o v40; // [xsp+8h] [xbp-68h] BYREF

  v8 = this;
  if ( (byte_42E9B8A & 1) == 0 )
  {
    sub_B5D5C4(&CheckMaterialSvtListViewItem_TypeInfo, (_DWORD)commandCodeIds, isExceeded, isSellLastServant);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_UserCommandCodeEntity__Dispose__, v9, v10, v11);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_UserCommandCodeEntity__MoveNext__, v12, v13, v14);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_UserCommandCodeEntity__get_Current__, v15, v16, v17);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewItem__Add__, v18, v19, v20);
    sub_B5D5C4(&Method_System_Collections_Generic_List_UserCommandCodeEntity__GetEnumerator__, v21, v22, v23);
    sub_B5D5C4(&Method_System_Collections_Generic_List_UserCommandCodeEntity__IndexOf__, v24, v25, v26);
    this = (CheckMaterialSvtListViewManager_o *)sub_B5D5C4(
                                                  &Method_System_Collections_Generic_List_long__get_Count__,
                                                  v27,
                                                  v28,
                                                  v29);
    byte_42E9B8A = 1;
  }
  memset(&v40, 0, sizeof(v40));
  if ( commandCodeIds && commandCodeIds->fields._size >= 1 && !isExceeded && !isSellLastServant )
  {
    v30 = CheckMaterialSvtListViewManager__GetSortEntList(this, commandCodeIds, (const MethodInfo *)isExceeded);
    if ( !v30 )
      sub_B5D69C(0LL, v31);
    v32 = (System_Collections_Generic_List_WarBoardManager_TaskList__o *)v30;
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v40,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v30,
      (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_UserCommandCodeEntity__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v40,
              (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_UserCommandCodeEntity__MoveNext__) )
    {
      current = v40.fields.current;
      itemList = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v8->fields.itemList;
      v35 = System_Collections_Generic_List_WarBoardManager_TaskList___IndexOf(
              v32,
              (WarBoardManager_TaskList_o *)v40.fields.current,
              (const MethodInfo_3058070 *)Method_System_Collections_Generic_List_UserCommandCodeEntity__IndexOf__);
      v36 = (CheckMaterialSvtListViewItem_o *)sub_B5D694(CheckMaterialSvtListViewItem_TypeInfo);
      CheckMaterialSvtListViewItem___ctor_27166604(v36, v35, (UserCommandCodeEntity_o *)current, 0, v37);
      if ( !itemList )
        sub_B5D69C(v38, v39);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        itemList,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v36,
        (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v40,
      (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_UserCommandCodeEntity__Dispose__);
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


// local variable allocation has failed, the output may be wrong!
void __fastcall CheckMaterialSvtListViewManager__CreateServantList(
        CheckMaterialSvtListViewManager_o *this,
        System_Collections_Generic_List_CombineServantListViewItem__o *selectMaterialItemList,
        System_Collections_Generic_List_long__o *servantIds,
        bool isExceeded,
        bool isSellLastServant,
        const MethodInfo *method)
{
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
  UserDeckMaster_o *MasterData_WarQuestSelectionMaster; // x21
  CheckMaterialSvtListViewManager_o *v55; // x0
  const MethodInfo *v56; // x2
  const MethodInfo *v57; // x2
  CheckMaterialSvtListViewManager_o *v58; // x22
  _BOOL8 v59; // x0
  __int64 v60; // x1
  Il2CppObject *current; // x25
  void *monitor; // x19
  Il2CppClass *klass; // x20
  __int64 v64; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *itemList; // x26
  __int64 v66; // x0
  __int64 v67; // x1
  Il2CppObject v68; // q0
  int32_t v69; // w27
  System_Int64_array *v70; // x21
  System_Int64_array *v71; // x23
  int64_t v72; // x0
  __int64 v73; // x1
  int64_t favoriteUserSvtId; // x24
  int64_t v75; // x20
  CheckMaterialSvtListViewItem_o *v76; // x19
  const MethodInfo *v77; // x6
  __int64 v78; // x0
  __int64 v79; // x1
  System_Collections_Generic_List_int__o *v80; // [xsp+0h] [xbp-E0h]
  UserGameEntity_o *SelfUserGame; // [xsp+8h] [xbp-D8h]
  CheckMaterialSvtListViewManager_o *v82; // [xsp+10h] [xbp-D0h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v84; // [xsp+20h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v85; // [xsp+40h] [xbp-A0h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v86; // [xsp+60h] [xbp-80h] BYREF
  System_Int64_array *equipIdList; // [xsp+80h] [xbp-60h] BYREF
  System_Int64_array *svtIdList; // [xsp+88h] [xbp-58h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v89; // 0:x0.16

  v82 = this;
  if ( (byte_42E9B88 & 1) == 0 )
  {
    sub_B5D5C4(&CheckMaterialSvtListViewItem_TypeInfo, (_DWORD)selectMaterialItemList, (_DWORD)servantIds, isExceeded);
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserDeckMaster___, v9, v10, v11);
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserServantMaster___, v12, v13, v14);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_UserServantEntity__Dispose__, v15, v16, v17);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_UserServantEntity__MoveNext__, v18, v19, v20);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_UserServantEntity__get_Current__, v21, v22, v23);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewItem__Add__, v24, v25, v26);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__Contains__, v27, v28, v29);
    sub_B5D5C4(&Method_System_Collections_Generic_List_UserServantEntity__GetEnumerator__, v30, v31, v32);
    sub_B5D5C4(&Method_System_Collections_Generic_List_UserServantEntity__IndexOf__, v33, v34, v35);
    sub_B5D5C4(&Method_System_Collections_Generic_List_long__get_Count__, v36, v37, v38);
    sub_B5D5C4(&Method_System_Collections_Generic_List_CombineServantListViewItem__get_Count__, v39, v40, v41);
    sub_B5D5C4(&NetworkManager_TypeInfo, v42, v43, v44);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v45, v46, v47);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v48, v49, v50);
    this = (CheckMaterialSvtListViewManager_o *)sub_B5D5C4(
                                                  &Method_SingletonMonoBehaviour_DataManager__get_Instance__,
                                                  v51,
                                                  v52,
                                                  v53);
    byte_42E9B88 = 1;
  }
  equipIdList = 0LL;
  svtIdList = 0LL;
  memset(&v86, 0, sizeof(v86));
  if ( servantIds && servantIds->fields._size >= 1 )
  {
    if ( !selectMaterialItemList )
      goto LABEL_41;
    if ( selectMaterialItemList->fields._size < 1 )
      return;
    this = (CheckMaterialSvtListViewManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !this )
      goto LABEL_41;
    DataManager__GetMasterData_WarQuestSelectionMaster_(
      (DataManager_o *)this,
      (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserServantMaster___);
    SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
    this = (CheckMaterialSvtListViewManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !this )
      goto LABEL_41;
    MasterData_WarQuestSelectionMaster = (UserDeckMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                               (DataManager_o *)this,
                                                               (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserDeckMaster___);
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    this = (CheckMaterialSvtListViewManager_o *)NetworkManager__get_UserId(0LL);
    if ( !MasterData_WarQuestSelectionMaster
      || (UserDeckMaster__getPartyList(MasterData_WarQuestSelectionMaster, &svtIdList, &equipIdList, (int64_t)this, 0LL),
          v80 = CheckMaterialSvtListViewManager__GetEquipedCommandCodeSellLastSvtList(v55, selectMaterialItemList, v56),
          (this = (CheckMaterialSvtListViewManager_o *)CheckMaterialSvtListViewManager__GetSvtSortEntList(
                                                         (CheckMaterialSvtListViewManager_o *)v80,
                                                         servantIds,
                                                         v57)) == 0LL) )
    {
LABEL_41:
      sub_B5D69C(this, selectMaterialItemList);
    }
    v58 = this;
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v85,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this,
      (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_UserServantEntity__GetEnumerator__);
    v86.fields.current = (Il2CppObject *)v85.fields.fakeValue;
    *(_OWORD *)&v86.fields.list = *(_OWORD *)&v85.fields.currentCryptoKey;
    while ( 1 )
    {
      v59 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v86,
              (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_UserServantEntity__MoveNext__);
      if ( !v59 )
        break;
      current = v86.fields.current;
      if ( isExceeded )
      {
        if ( !v86.fields.current )
          sub_B5D69C(v59, v60);
        v59 = UserServantEntity__isExceeded((UserServantEntity_o *)v86.fields.current, 0LL);
        if ( !v59 )
          continue;
      }
      if ( !isSellLastServant )
        goto LABEL_26;
      if ( !current )
        sub_B5D69C(v59, v60);
      klass = current[5].klass;
      monitor = current[5].monitor;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v89.fields.currentCryptoKey = klass;
      *(_QWORD *)&v89.fields.fakeValue = monitor;
      v64 = (unsigned int)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v89, 0LL);
      if ( !v80 )
        sub_B5D69C(0LL, v64);
      if ( System_Collections_Generic_List_int___Contains(
             v80,
             v64,
             (const MethodInfo_3084860 *)Method_System_Collections_Generic_List_int__Contains__) )
      {
LABEL_26:
        itemList = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v82->fields.itemList;
        v66 = System_Collections_Generic_List_WarBoardManager_TaskList___IndexOf(
                (System_Collections_Generic_List_WarBoardManager_TaskList__o *)v58,
                (WarBoardManager_TaskList_o *)current,
                (const MethodInfo_3058070 *)Method_System_Collections_Generic_List_UserServantEntity__IndexOf__);
        if ( !current )
          sub_B5D69C(v66, v67);
        v68 = current[2];
        v69 = v66;
        v70 = equipIdList;
        v71 = svtIdList;
        *(Il2CppObject *)&v85.fields.currentCryptoKey = current[1];
        *(Il2CppObject *)&v85.fields.fakeValue = v68;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        }
        v84 = v85;
        v72 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v84, 0LL);
        if ( !SelfUserGame )
          sub_B5D69C(v72, v73);
        favoriteUserSvtId = SelfUserGame->fields.favoriteUserSvtId;
        v75 = v72;
        v76 = (CheckMaterialSvtListViewItem_o *)sub_B5D694(CheckMaterialSvtListViewItem_TypeInfo);
        CheckMaterialSvtListViewItem___ctor(
          v76,
          v69,
          (UserServantEntity_o *)current,
          v71,
          v70,
          v75 == favoriteUserSvtId,
          v77);
        if ( !itemList )
          sub_B5D69C(v78, v79);
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          itemList,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v76,
          (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
      }
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v86,
      (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_UserServantEntity__Dispose__);
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
  __int64 v3; // x3
  CheckMaterialSvtListViewManager_o *v5; // x20
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x22
  unsigned __int64 v16; // x24
  int64_t v17; // x21
  ListViewItem_o *v18; // x8
  __int64 v19; // x11
  __int64 v20; // x22
  __int64 v21; // x23
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v23; // 0:x0.16

  v5 = this;
  if ( (byte_42E9B92 & 1) == 0 )
  {
    sub_B5D5C4(&CheckMaterialSvtListViewItem_TypeInfo, svtId, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v6, v7, v8);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v9, v10, v11);
    this = (CheckMaterialSvtListViewManager_o *)sub_B5D5C4(
                                                  &CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo,
                                                  v12,
                                                  v13,
                                                  v14);
    byte_42E9B92 = 1;
  }
  itemList = v5->fields.itemList;
  if ( !itemList )
LABEL_19:
    sub_B5D69C(this, *(_QWORD *)&svtId);
  v16 = 0LL;
  v17 = 0LL;
  while ( (__int64)v16 < itemList->fields._size )
  {
    if ( v16 >= (unsigned int)itemList->fields._size )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
    v18 = itemList->fields._items->m_Items[v16];
    if ( v18 )
    {
      v19 = *(&CheckMaterialSvtListViewItem_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v18->klass->_2.bitflags2 + 1) >= (unsigned int)v19
        && (CheckMaterialSvtListViewItem_c *)v18->klass->_2.typeHierarchy[v19 - 1] == CheckMaterialSvtListViewItem_TypeInfo )
      {
        if ( (CheckMaterialSvtListViewItem_c *)v18->klass->_2.typeHierarchy[*(&CheckMaterialSvtListViewItem_TypeInfo->_2.bitflags2
                                                                            + 1)
                                                                          - 1] != CheckMaterialSvtListViewItem_TypeInfo )
          v18 = 0LL;
        v21 = *(_QWORD *)&v18[1].fields.selectNum;
        v20 = *(_QWORD *)&v18[1].fields.sortIndex;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        }
        *(_QWORD *)&v23.fields.currentCryptoKey = v21;
        *(_QWORD *)&v23.fields.fakeValue = v20;
        this = (CheckMaterialSvtListViewManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(
                                                      v23,
                                                      0LL);
        itemList = v5->fields.itemList;
        if ( (_DWORD)this == svtId )
          ++v17;
        ++v16;
        if ( itemList )
          continue;
      }
    }
    goto LABEL_19;
  }
  return v17;
}


// local variable allocation has failed, the output may be wrong!
int64_t __fastcall CheckMaterialSvtListViewManager__GetCommandCodeAmountSortValue(
        CheckMaterialSvtListViewManager_o *this,
        int32_t commandCodeId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  CheckMaterialSvtListViewManager_o *v5; // x20
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x24
  unsigned __int64 v13; // x22
  int64_t v14; // x21
  ListViewItem_o *v15; // x8
  __int64 v16; // x11

  v5 = this;
  if ( (byte_42E9B93 & 1) == 0 )
  {
    sub_B5D5C4(&CheckMaterialSvtListViewItem_TypeInfo, commandCodeId, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v6, v7, v8);
    this = (CheckMaterialSvtListViewManager_o *)sub_B5D5C4(
                                                  &Method_System_Collections_Generic_List_ListViewItem__get_Item__,
                                                  v9,
                                                  v10,
                                                  v11);
    byte_42E9B93 = 1;
  }
  itemList = v5->fields.itemList;
  if ( !itemList )
LABEL_16:
    sub_B5D69C(this, *(_QWORD *)&commandCodeId);
  v13 = 0LL;
  v14 = 0LL;
  while ( (__int64)v13 < itemList->fields._size )
  {
    if ( v13 >= (unsigned int)itemList->fields._size )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
    v15 = itemList->fields._items->m_Items[v13];
    if ( v15 )
    {
      v16 = *(&CheckMaterialSvtListViewItem_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v15->klass->_2.bitflags2 + 1) >= (unsigned int)v16
        && (CheckMaterialSvtListViewItem_c *)v15->klass->_2.typeHierarchy[v16 - 1] == CheckMaterialSvtListViewItem_TypeInfo )
      {
        itemList = v5->fields.itemList;
        ++v13;
        if ( (CheckMaterialSvtListViewItem_c *)v15->klass->_2.typeHierarchy[*(&CheckMaterialSvtListViewItem_TypeInfo->_2.bitflags2
                                                                            + 1)
                                                                          - 1] != CheckMaterialSvtListViewItem_TypeInfo )
          v15 = 0LL;
        if ( LODWORD(v15[1].fields.sortValue1) != commandCodeId )
          ++v14;
        if ( itemList )
          continue;
      }
    }
    goto LABEL_16;
  }
  return v14;
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
  int v38; // w1
  int v39; // w2
  __int64 v40; // x3
  int v41; // w1
  int v42; // w2
  __int64 v43; // x3
  int v44; // w1
  int v45; // w2
  __int64 v46; // x3
  int v47; // w1
  int v48; // w2
  __int64 v49; // x3
  int v50; // w1
  int v51; // w2
  __int64 v52; // x3
  int32_t size; // w22
  System_Collections_Generic_List_int__o *v54; // x28
  UserServantEntity_array *AllList; // x23
  System_Collections_Generic_List_int__o *v56; // x21
  System_Collections_Generic_Dictionary_int__int__o *v57; // x22
  int32_t v58; // w8
  int32_t i; // w20
  CombineServantListViewItem_o *v60; // x26
  int32_t v61; // w8
  int32_t svtId; // w24
  __int64 v63; // x28
  int32_t v64; // w25
  CombineServantListViewItem_o *v65; // x8
  int32_t v66; // w9
  bool v67; // zf
  int max_length; // w8
  DataMasterBase_WarMaster__WarEntity__int__o *v69; // x24
  unsigned int v70; // w28
  UserServantEntity_o *v71; // x25
  __int64 v72; // x26
  __int64 v73; // x27
  __int64 v74; // x25
  __int64 v75; // x26
  int32_t v76; // w8
  unsigned int v77; // w20
  CombineServantListViewItem_o *v78; // x9
  signed __int64 v79; // x8
  int32_t v80; // w23
  int v81; // w26
  unsigned __int64 v82; // x27
  int32_t v83; // w9
  __int64 v85; // x0
  System_Collections_Generic_List_int__o *v86; // [xsp+8h] [xbp-58h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v87; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v88; // 0:x0.16

  if ( (byte_42E9B8C & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataManager_GetMasterData_ServantMaster___,
      (_DWORD)selectEquipedCommandCodeServantList,
      (_DWORD)method,
      v3);
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserServantMaster___, v5, v6, v7);
    sub_B5D5C4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_int__int__Add__, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__, v14, v15, v16);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_int__int___ctor__, v17, v18, v19);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_int__int__get_Item__, v20, v21, v22);
    sub_B5D5C4(&System_Collections_Generic_Dictionary_int__int__TypeInfo, v23, v24, v25);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__Add__, v26, v27, v28);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int___ctor___68740224, v29, v30, v31);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__get_Count__, v32, v33, v34);
    sub_B5D5C4(&Method_System_Collections_Generic_List_CombineServantListViewItem__get_Count__, v35, v36, v37);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__get_Item__, v38, v39, v40);
    sub_B5D5C4(&Method_System_Collections_Generic_List_CombineServantListViewItem__get_Item__, v41, v42, v43);
    sub_B5D5C4(&System_Collections_Generic_List_int__TypeInfo, v44, v45, v46);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v47, v48, v49);
    this = (CheckMaterialSvtListViewManager_o *)sub_B5D5C4(
                                                  &Method_SingletonMonoBehaviour_DataManager__get_Instance__,
                                                  v50,
                                                  v51,
                                                  v52);
    byte_42E9B8C = 1;
  }
  if ( !selectEquipedCommandCodeServantList )
    goto LABEL_66;
  size = selectEquipedCommandCodeServantList->fields._size;
  v54 = (System_Collections_Generic_List_int__o *)sub_B5D694(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v54,
    (const MethodInfo_30836B0 *)Method_System_Collections_Generic_List_int___ctor___68740224);
  if ( size )
  {
    this = (CheckMaterialSvtListViewManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !this )
      goto LABEL_66;
    this = (CheckMaterialSvtListViewManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                  (DataManager_o *)this,
                                                  (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserServantMaster___);
    if ( !this )
      goto LABEL_66;
    AllList = UserServantMaster__getAllList((UserServantMaster_o *)this, 0LL);
    v56 = (System_Collections_Generic_List_int__o *)sub_B5D694(System_Collections_Generic_List_int__TypeInfo);
    System_Collections_Generic_List_int____ctor(
      v56,
      (const MethodInfo_30836B0 *)Method_System_Collections_Generic_List_int___ctor___68740224);
    v57 = (System_Collections_Generic_Dictionary_int__int__o *)sub_B5D694(System_Collections_Generic_Dictionary_int__int__TypeInfo);
    System_Collections_Generic_Dictionary_int__int____ctor(
      v57,
      (const MethodInfo_2F0A2B4 *)Method_System_Collections_Generic_Dictionary_int__int___ctor__);
    v58 = selectEquipedCommandCodeServantList->fields._size;
    v86 = v54;
    if ( v58 >= 1 )
    {
      for ( i = 0; i < v58; ++i )
      {
        if ( v58 <= (unsigned int)i )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
        v60 = selectEquipedCommandCodeServantList->fields._items->m_Items[i];
        if ( !v60 || !v57 )
          goto LABEL_66;
        this = (CheckMaterialSvtListViewManager_o *)System_Collections_Generic_Dictionary_int__int___ContainsKey(
                                                      v57,
                                                      v60->fields.svtId,
                                                      (const MethodInfo_2F0B0BC *)Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__);
        if ( ((unsigned __int8)this & 1) == 0 )
        {
          v61 = selectEquipedCommandCodeServantList->fields._size;
          svtId = v60->fields.svtId;
          if ( v61 >= 1 )
          {
            v63 = 0LL;
            v64 = 0;
            while ( 1 )
            {
              if ( v61 <= (unsigned int)v63 )
                System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
              v65 = selectEquipedCommandCodeServantList->fields._items->m_Items[v63];
              if ( !v65 )
                break;
              v66 = v65->fields.svtId;
              v61 = selectEquipedCommandCodeServantList->fields._size;
              ++v63;
              v67 = svtId == v66;
              svtId = v60->fields.svtId;
              if ( v67 )
                ++v64;
              if ( (int)v63 >= v61 )
                goto LABEL_24;
            }
LABEL_66:
            sub_B5D69C(this, selectEquipedCommandCodeServantList);
          }
          v64 = 0;
LABEL_24:
          System_Collections_Generic_Dictionary_int__int___Add(
            v57,
            svtId,
            v64,
            (const MethodInfo_2F0AE58 *)Method_System_Collections_Generic_Dictionary_int__int__Add__);
        }
        v58 = selectEquipedCommandCodeServantList->fields._size;
      }
    }
    this = (CheckMaterialSvtListViewManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !this )
      goto LABEL_66;
    this = (CheckMaterialSvtListViewManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                  (DataManager_o *)this,
                                                  (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantMaster___);
    if ( !AllList )
      goto LABEL_66;
    max_length = AllList->max_length;
    if ( max_length >= 1 )
    {
      v69 = (DataMasterBase_WarMaster__WarEntity__int__o *)this;
      v70 = 0;
      do
      {
        if ( v70 >= max_length )
        {
          v85 = sub_B5D6C8(this);
          sub_B5D668(v85, 0LL);
        }
        v71 = AllList->m_Items[v70];
        if ( !v71 )
          goto LABEL_66;
        v73 = *(_QWORD *)&v71->fields.svtId.fields.currentCryptoKey;
        v72 = *(_QWORD *)&v71->fields.svtId.fields.fakeValue;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        }
        *(_QWORD *)&v87.fields.currentCryptoKey = v73;
        *(_QWORD *)&v87.fields.fakeValue = v72;
        this = (CheckMaterialSvtListViewManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(
                                                      v87,
                                                      0LL);
        if ( !v69 )
          goto LABEL_66;
        this = (CheckMaterialSvtListViewManager_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                                      v69,
                                                      (int32_t)this,
                                                      (const MethodInfo_23FAE10 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
        if ( !this )
          goto LABEL_66;
        this = (CheckMaterialSvtListViewManager_o *)ServantEntity__get_IsServant((ServantEntity_o *)this, 0LL);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          this = (CheckMaterialSvtListViewManager_o *)UserServantEntity__IsEventJoin(v71, 0LL);
          if ( ((unsigned __int8)this & 1) == 0 )
          {
            v75 = *(_QWORD *)&v71->fields.svtId.fields.currentCryptoKey;
            v74 = *(_QWORD *)&v71->fields.svtId.fields.fakeValue;
            if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            }
            *(_QWORD *)&v88.fields.currentCryptoKey = v75;
            *(_QWORD *)&v88.fields.fakeValue = v74;
            this = (CheckMaterialSvtListViewManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(
                                                          v88,
                                                          0LL);
            if ( !v56 )
              goto LABEL_66;
            System_Collections_Generic_List_int___Add(
              v56,
              (int32_t)this,
              (const MethodInfo_308440C *)Method_System_Collections_Generic_List_int__Add__);
          }
        }
        max_length = AllList->max_length;
      }
      while ( (int)++v70 < max_length );
    }
    v76 = selectEquipedCommandCodeServantList->fields._size;
    v54 = v86;
    if ( v76 >= 1 )
    {
      v77 = 0;
      while ( 1 )
      {
        if ( v76 <= v77 )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
        v78 = selectEquipedCommandCodeServantList->fields._items->m_Items[v77];
        if ( !v78 || !v56 )
          goto LABEL_66;
        LODWORD(v79) = v56->fields._size;
        v80 = v78->fields.svtId;
        if ( (int)v79 < 1 )
        {
          v81 = 0;
          if ( !v57 )
            goto LABEL_66;
        }
        else
        {
          v81 = 0;
          v82 = 0LL;
          do
          {
            if ( v82 >= (unsigned int)v79 )
              System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
            v83 = v56->fields._items->m_Items[v82 + 1];
            v79 = v56->fields._size;
            ++v82;
            if ( v80 == v83 )
              ++v81;
          }
          while ( (__int64)v82 < v79 );
          if ( !v57 )
            goto LABEL_66;
        }
        this = (CheckMaterialSvtListViewManager_o *)System_Collections_Generic_Dictionary_int__int___get_Item(
                                                      v57,
                                                      v80,
                                                      (const MethodInfo_2F0AD98 *)Method_System_Collections_Generic_Dictionary_int__int__get_Item__);
        if ( (_DWORD)this == v81 )
        {
          if ( !v86 )
            goto LABEL_66;
          System_Collections_Generic_List_int___Add(
            v86,
            v80,
            (const MethodInfo_308440C *)Method_System_Collections_Generic_List_int__Add__);
        }
        v76 = selectEquipedCommandCodeServantList->fields._size;
        if ( (int)++v77 >= v76 )
          return v54;
      }
    }
  }
  return v54;
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
  int v38; // w1
  int v39; // w2
  __int64 v40; // x3
  int v41; // w1
  int v42; // w2
  __int64 v43; // x3
  int v44; // w1
  int v45; // w2
  __int64 v46; // x3
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v47; // x19
  void *Instance; // x0
  __int64 v49; // x1
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *v50; // x21
  _BOOL8 v51; // x0
  __int64 v52; // x1
  UserServantEntity_o *Entity; // x0
  struct CheckMaterialSvtListViewManager___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__16_0; // x20
  Il2CppObject *v56; // x21
  struct CheckMaterialSvtListViewManager___c_StaticFields *v57; // x0
  System_String_array **v58; // x2
  System_String_array **v59; // x3
  System_Boolean_array **v60; // x4
  System_Int32_array **v61; // x5
  System_Int32_array *v62; // x6
  System_Int32_array *v63; // x7
  System_Collections_Generic_List_Enumerator_T__o v65; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v66; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_42E9B8B & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Comparison_UserCommandCodeEntity___ctor__, (_DWORD)commandCodeIds, (_DWORD)method, v3);
    sub_B5D5C4(&System_Comparison_UserCommandCodeEntity__TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserCommandCodeMaster___, v8, v9, v10);
    sub_B5D5C4(&Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__GetEntity__, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_long__Dispose__, v14, v15, v16);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_long__MoveNext__, v17, v18, v19);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_long__get_Current__, v20, v21, v22);
    sub_B5D5C4(&Method_System_Collections_Generic_List_UserCommandCodeEntity__Add__, v23, v24, v25);
    sub_B5D5C4(&Method_System_Collections_Generic_List_long__GetEnumerator__, v26, v27, v28);
    sub_B5D5C4(&Method_System_Collections_Generic_List_UserCommandCodeEntity__Sort__, v29, v30, v31);
    sub_B5D5C4(&Method_System_Collections_Generic_List_UserCommandCodeEntity___ctor__, v32, v33, v34);
    sub_B5D5C4(&System_Collections_Generic_List_UserCommandCodeEntity__TypeInfo, v35, v36, v37);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v38, v39, v40);
    sub_B5D5C4(&Method_CheckMaterialSvtListViewManager___c__GetSortEntList_b__16_0__, v41, v42, v43);
    sub_B5D5C4(&CheckMaterialSvtListViewManager___c_TypeInfo, v44, v45, v46);
    byte_42E9B8B = 1;
  }
  memset(&v66, 0, sizeof(v66));
  v47 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_UserCommandCodeEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v47,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_UserCommandCodeEntity___ctor__);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_22;
  Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
               (DataManager_o *)Instance,
               (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserCommandCodeMaster___);
  if ( !commandCodeIds )
    goto LABEL_22;
  v50 = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)Instance;
  System_Collections_Generic_List_long___GetEnumerator(
    &v65,
    commandCodeIds,
    (const MethodInfo_30485CC *)Method_System_Collections_Generic_List_long__GetEnumerator__);
  v66 = v65;
  while ( 1 )
  {
    v51 = System_Collections_Generic_List_Enumerator_long___MoveNext(
            &v66,
            (const MethodInfo_201D824 *)Method_System_Collections_Generic_List_Enumerator_long__MoveNext__);
    if ( !v51 )
      break;
    if ( !v50 )
      sub_B5D69C(v51, v52);
    Entity = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
               v50,
               (int64_t)v66.fields.current,
               (const MethodInfo_23FB038 *)Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__GetEntity__);
    if ( !v47 )
      sub_B5D69C(Entity, Entity);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      v47,
      (EventMissionProgressRequest_Argument_ProgressData_o *)Entity,
      (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_UserCommandCodeEntity__Add__);
  }
  System_Collections_Generic_List_Enumerator_long___Dispose(
    &v66,
    (const MethodInfo_201D820 *)Method_System_Collections_Generic_List_Enumerator_long__Dispose__);
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
    v56 = (Il2CppObject *)static_fields->__9;
    _9__16_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B5D694(System_Comparison_UserCommandCodeEntity__TypeInfo);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__16_0,
      v56,
      Method_CheckMaterialSvtListViewManager___c__GetSortEntList_b__16_0__,
      (const MethodInfo_249B1FC *)Method_System_Comparison_UserCommandCodeEntity___ctor__);
    v57 = CheckMaterialSvtListViewManager___c_TypeInfo->static_fields;
    v57->__9__16_0 = (struct System_Comparison_UserCommandCodeEntity__o *)_9__16_0;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v57->__9__16_0,
      (System_Int32_array **)_9__16_0,
      v58,
      v59,
      v60,
      v61,
      v62,
      v63);
  }
  if ( !v47 )
LABEL_22:
    sub_B5D69C(Instance, v49);
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v47,
    (System_Comparison_T__o *)_9__16_0,
    (const MethodInfo_305909C *)Method_System_Collections_Generic_List_UserCommandCodeEntity__Sort__);
  return (System_Collections_Generic_List_UserCommandCodeEntity__o *)v47;
}


System_Collections_Generic_List_UserServantEntity__o *__fastcall CheckMaterialSvtListViewManager__GetSvtSortEntList(
        CheckMaterialSvtListViewManager_o *this,
        System_Collections_Generic_List_long__o *servantIds,
        const MethodInfo *method)
{
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
  int v38; // w1
  int v39; // w2
  __int64 v40; // x3
  int v41; // w1
  int v42; // w2
  __int64 v43; // x3
  int v44; // w1
  int v45; // w2
  __int64 v46; // x3
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v47; // x19
  void *Instance; // x0
  __int64 v49; // x1
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *v50; // x21
  _BOOL8 v51; // x0
  __int64 v52; // x1
  UserServantEntity_o *Entity; // x0
  struct CheckMaterialSvtListViewManager___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__14_0; // x20
  Il2CppObject *v56; // x21
  struct CheckMaterialSvtListViewManager___c_StaticFields *v57; // x0
  System_String_array **v58; // x2
  System_String_array **v59; // x3
  System_Boolean_array **v60; // x4
  System_Int32_array **v61; // x5
  System_Int32_array *v62; // x6
  System_Int32_array *v63; // x7
  System_Collections_Generic_List_Enumerator_T__o v65; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v66; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_42E9B89 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Comparison_UserServantEntity___ctor__, (_DWORD)servantIds, (_DWORD)method, v3);
    sub_B5D5C4(&System_Comparison_UserServantEntity__TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserServantMaster___, v8, v9, v10);
    sub_B5D5C4(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_long__Dispose__, v14, v15, v16);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_long__MoveNext__, v17, v18, v19);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_long__get_Current__, v20, v21, v22);
    sub_B5D5C4(&Method_System_Collections_Generic_List_UserServantEntity__Add__, v23, v24, v25);
    sub_B5D5C4(&Method_System_Collections_Generic_List_long__GetEnumerator__, v26, v27, v28);
    sub_B5D5C4(&Method_System_Collections_Generic_List_UserServantEntity__Sort__, v29, v30, v31);
    sub_B5D5C4(&Method_System_Collections_Generic_List_UserServantEntity___ctor__, v32, v33, v34);
    sub_B5D5C4(&System_Collections_Generic_List_UserServantEntity__TypeInfo, v35, v36, v37);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v38, v39, v40);
    sub_B5D5C4(&Method_CheckMaterialSvtListViewManager___c__GetSvtSortEntList_b__14_0__, v41, v42, v43);
    sub_B5D5C4(&CheckMaterialSvtListViewManager___c_TypeInfo, v44, v45, v46);
    byte_42E9B89 = 1;
  }
  memset(&v66, 0, sizeof(v66));
  v47 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_UserServantEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v47,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_22;
  Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
               (DataManager_o *)Instance,
               (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !servantIds )
    goto LABEL_22;
  v50 = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)Instance;
  System_Collections_Generic_List_long___GetEnumerator(
    &v65,
    servantIds,
    (const MethodInfo_30485CC *)Method_System_Collections_Generic_List_long__GetEnumerator__);
  v66 = v65;
  while ( 1 )
  {
    v51 = System_Collections_Generic_List_Enumerator_long___MoveNext(
            &v66,
            (const MethodInfo_201D824 *)Method_System_Collections_Generic_List_Enumerator_long__MoveNext__);
    if ( !v51 )
      break;
    if ( !v50 )
      sub_B5D69C(v51, v52);
    Entity = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
               v50,
               (int64_t)v66.fields.current,
               (const MethodInfo_23FB038 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    if ( !v47 )
      sub_B5D69C(Entity, Entity);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      v47,
      (EventMissionProgressRequest_Argument_ProgressData_o *)Entity,
      (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_UserServantEntity__Add__);
  }
  System_Collections_Generic_List_Enumerator_long___Dispose(
    &v66,
    (const MethodInfo_201D820 *)Method_System_Collections_Generic_List_Enumerator_long__Dispose__);
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
    v56 = (Il2CppObject *)static_fields->__9;
    _9__14_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B5D694(System_Comparison_UserServantEntity__TypeInfo);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__14_0,
      v56,
      Method_CheckMaterialSvtListViewManager___c__GetSvtSortEntList_b__14_0__,
      (const MethodInfo_249B1FC *)Method_System_Comparison_UserServantEntity___ctor__);
    v57 = CheckMaterialSvtListViewManager___c_TypeInfo->static_fields;
    v57->__9__14_0 = (struct System_Comparison_UserServantEntity__o *)_9__14_0;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v57->__9__14_0,
      (System_Int32_array **)_9__14_0,
      v58,
      v59,
      v60,
      v61,
      v62,
      v63);
  }
  if ( !v47 )
LABEL_22:
    sub_B5D69C(Instance, v49);
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v47,
    (System_Comparison_T__o *)_9__14_0,
    (const MethodInfo_305909C *)Method_System_Collections_Generic_List_UserServantEntity__Sort__);
  return (System_Collections_Generic_List_UserServantEntity__o *)v47;
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
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  int v30; // w1
  int v31; // w2
  __int64 v32; // x3
  int32_t kind; // w21
  __int64 Instance; // x0
  const MethodInfo *v35; // x1
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x20
  unsigned __int64 v37; // x22
  ListViewItem_o *v38; // x20
  __int64 v39; // x10
  __int128 v40; // q0
  __int64 v41; // x21
  System_String_array **v42; // x2
  System_String_array **v43; // x3
  System_Boolean_array **v44; // x4
  System_Int32_array **v45; // x5
  System_Int32_array *v46; // x6
  System_Int32_array *v47; // x7
  System_Int32_array **v48; // x1
  UnityEngine_Object_o *viewObject; // x21
  struct System_Collections_Generic_List_ListViewItem__o *v50; // x21
  __int64 v51; // x20
  unsigned __int64 v52; // x23
  ListViewItem_o *v53; // x21
  __int64 v54; // x10
  __int128 v55; // q0
  __int64 v56; // x22
  const MethodInfo *v57; // x1
  System_String_array **v58; // x2
  System_String_array **v59; // x3
  System_Boolean_array **v60; // x4
  System_Int32_array **v61; // x5
  System_Int32_array *v62; // x6
  System_Int32_array *v63; // x7
  System_Int32_array **v64; // x1
  __int64 v65; // x8
  UnityEngine_Object_o *v66; // x22
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v67; // [xsp+0h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v68; // [xsp+20h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v69; // [xsp+40h] [xbp-80h]
  UserServantEntity_o *v70; // [xsp+68h] [xbp-58h] BYREF
  UserServantEntity_o *entity; // [xsp+78h] [xbp-48h] BYREF

  if ( (byte_42E9B8D & 1) == 0 )
  {
    sub_B5D5C4(&CheckMaterialSvtListViewItem_TypeInfo, selectedId, (_DWORD)method, v3);
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserCommandCodeMaster___, v6, v7, v8);
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserServantMaster___, v9, v10, v11);
    sub_B5D5C4(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__, v12, v13, v14);
    sub_B5D5C4(&Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__TryGetEntity__, v15, v16, v17);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v18, v19, v20);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v21, v22, v23);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v24, v25, v26);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v27, v28, v29);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v30, v31, v32);
    byte_42E9B8D = 1;
  }
  entity = 0LL;
  v70 = 0LL;
  if ( !this->fields.itemList )
    return;
  kind = this->fields.kind;
  Instance = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_54;
  if ( kind == 2 )
  {
    Instance = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserCommandCodeMaster___);
    if ( Instance )
    {
      Instance = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___TryGetEntity(
                   (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)Instance,
                   &entity,
                   selectedId,
                   (const MethodInfo_23FB094 *)Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__TryGetEntity__);
      if ( (Instance & 1) == 0 )
        return;
      itemList = this->fields.itemList;
      if ( itemList )
      {
        v37 = 0LL;
        while ( (__int64)v37 < itemList->fields._size )
        {
          if ( v37 >= (unsigned int)itemList->fields._size )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
          v38 = itemList->fields._items->m_Items[v37];
          if ( v38 )
          {
            v39 = *(&CheckMaterialSvtListViewItem_TypeInfo->_2.bitflags2 + 1);
            if ( *(&v38->klass->_2.bitflags2 + 1) >= (unsigned int)v39
              && (CheckMaterialSvtListViewItem_c *)v38->klass->_2.typeHierarchy[v39 - 1] == CheckMaterialSvtListViewItem_TypeInfo )
            {
              Instance = CheckMaterialSvtListViewItem__get_UserCommandCodeId((CheckMaterialSvtListViewItem_o *)v38, v35);
              if ( entity )
              {
                v40 = *(_OWORD *)&entity->fields.id.fields.fakeValue;
                v41 = Instance;
                *(_OWORD *)&v69.fields.currentCryptoKey = *(_OWORD *)&entity->fields.id.fields.currentCryptoKey;
                *(_OWORD *)&v69.fields.fakeValue = v40;
                if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
                }
                v68 = v69;
                if ( v41 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v68, 0LL) )
                {
                  v48 = (System_Int32_array **)entity;
                  v38[1].fields.sortValue0 = (int64_t)entity;
                  sub_B5D560(
                    (BattleServantConfConponent_o *)&v38[1].fields.sortValue0,
                    v48,
                    v42,
                    v43,
                    v44,
                    v45,
                    v46,
                    v47);
                }
                BYTE4(v38[1].fields.sortValue2) = 0;
                LODWORD(v38[1].fields.viewObject) = -1;
                viewObject = (UnityEngine_Object_o *)v38->fields.viewObject;
                if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                }
                Instance = UnityEngine_Object__op_Inequality(viewObject, 0LL, 0LL);
                if ( (Instance & 1) != 0 )
                {
                  Instance = (__int64)v38->fields.viewObject;
                  if ( !Instance )
                    goto LABEL_54;
                  Instance = (*(__int64 (__fastcall **)(__int64, ListViewItem_o *, _QWORD))(*(_QWORD *)Instance + 392LL))(
                               Instance,
                               v38,
                               *(_QWORD *)(*(_QWORD *)Instance + 400LL));
                }
                itemList = this->fields.itemList;
                ++v37;
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
    sub_B5D69C(Instance, v35);
  }
  Instance = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !Instance )
    goto LABEL_54;
  if ( !DataMasterBase_UserServantStorageMaster__UserServantEntity__long___TryGetEntity(
          (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)Instance,
          &v70,
          selectedId,
          (const MethodInfo_23FB094 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__) )
    return;
  Instance = (__int64)UserGameMaster__getSelfUserGame(0LL);
  v50 = this->fields.itemList;
  if ( !v50 )
    goto LABEL_54;
  v51 = Instance;
  v52 = 0LL;
  while ( (__int64)v52 < v50->fields._size )
  {
    if ( v52 >= (unsigned int)v50->fields._size )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
    v53 = v50->fields._items->m_Items[v52];
    if ( v53 )
    {
      v54 = *(&CheckMaterialSvtListViewItem_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v53->klass->_2.bitflags2 + 1) >= (unsigned int)v54
        && (CheckMaterialSvtListViewItem_c *)v53->klass->_2.typeHierarchy[v54 - 1] == CheckMaterialSvtListViewItem_TypeInfo )
      {
        Instance = CheckMaterialSvtListViewItem__get_UserSvtId((CheckMaterialSvtListViewItem_o *)v53, v35);
        if ( v70 )
        {
          v55 = *(_OWORD *)&v70->fields.id.fields.fakeValue;
          v56 = Instance;
          *(_OWORD *)&v69.fields.currentCryptoKey = *(_OWORD *)&v70->fields.id.fields.currentCryptoKey;
          *(_OWORD *)&v69.fields.fakeValue = v55;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          }
          v67 = v69;
          if ( v56 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v67, 0LL) )
          {
            v64 = (System_Int32_array **)v70;
            v53[1].klass = (ListViewItem_c *)v70;
            sub_B5D560((BattleServantConfConponent_o *)&v53[1], v64, v58, v59, v60, v61, v62, v63);
          }
          Instance = CheckMaterialSvtListViewItem__get_UserSvtId((CheckMaterialSvtListViewItem_o *)v53, v57);
          if ( v51 )
          {
            v65 = *(_QWORD *)(v51 + 112);
            LODWORD(v53[1].fields.viewObject) = -1;
            v66 = (UnityEngine_Object_o *)v53->fields.viewObject;
            BYTE4(v53[1].fields.sortValue2) = Instance == v65;
            if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            }
            Instance = UnityEngine_Object__op_Inequality(v66, 0LL, 0LL);
            if ( (Instance & 1) != 0 )
            {
              Instance = (__int64)v53->fields.viewObject;
              if ( !Instance )
                goto LABEL_54;
              Instance = (*(__int64 (__fastcall **)(__int64, ListViewItem_o *, _QWORD))(*(_QWORD *)Instance + 392LL))(
                           Instance,
                           v53,
                           *(_QWORD *)(*(_QWORD *)Instance + 400LL));
            }
            v50 = this->fields.itemList;
            ++v52;
            if ( v50 )
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
  int v2; // w2
  __int64 v3; // x3
  int32_t callbackCount; // w8
  bool v6; // vf
  int32_t v7; // w8

  if ( (byte_42E9B90 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E9B90 = 1;
  }
  callbackCount = this->fields.callbackCount;
  v6 = __OFSUB__(callbackCount, 1);
  v7 = callbackCount - 1;
  if ( v7 < 0 == v6 )
    this->fields.callbackCount = v7;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CheckMaterialSvtListViewManager__RequestListObject(
        CheckMaterialSvtListViewManager_o *this,
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
  System_Collections_Generic_List_CheckMaterialSvtListViewObject__o *v18; // x0
  __int64 v19; // x1
  int32_t size; // w8
  System_Collections_Generic_List_CheckMaterialSvtListViewObject__o *v21; // x21
  int v22; // w8
  __int64 v23; // x24
  CheckMaterialSvtListViewObject_o *v24; // x22
  System_Action_o *v25; // x23
  const MethodInfo *v26; // x3

  if ( (byte_42E9B8F & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, mode, (_DWORD)method, v3);
    sub_B5D5C4(&Method_CheckMaterialSvtListViewManager_OnMoveEnd__, v6, v7, v8);
    sub_B5D5C4(&Method_System_Collections_Generic_List_CheckMaterialSvtListViewObject__get_Count__, v9, v10, v11);
    sub_B5D5C4(&Method_System_Collections_Generic_List_CheckMaterialSvtListViewObject__get_Item__, v12, v13, v14);
    sub_B5D5C4(&StringLiteral_10142/*"OnMoveEnd"*/, v15, v16, v17);
    byte_42E9B8F = 1;
  }
  v18 = CheckMaterialSvtListViewManager__get_ObjectList(this, *(const MethodInfo **)&mode);
  if ( !v18 )
    goto LABEL_13;
  size = v18->fields._size;
  v21 = v18;
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
    v22 = v18->fields._size;
    if ( v22 >= 1 )
    {
      v23 = 0LL;
      while ( 1 )
      {
        if ( v22 <= (unsigned int)v23 )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
        v24 = v21->fields._items->m_Items[v23];
        v25 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
        System_Action___ctor(v25, (Il2CppObject *)this, Method_CheckMaterialSvtListViewManager_OnMoveEnd__, 0LL);
        if ( !v24 )
          break;
        CheckMaterialSvtListViewObject__Init(v24, mode, v25, v26);
        v22 = v21->fields._size;
        if ( (int)++v23 >= v22 )
          return;
      }
LABEL_13:
      sub_B5D69C(v18, v19);
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
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.onSelectItem,
    (System_Int32_array **)onSelectItem,
    (System_String_array **)onSelectItem,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  CheckMaterialSvtListViewManager__SetMode_27177876(this, mode, v10);
}


void __fastcall CheckMaterialSvtListViewManager__SetMode_27177876(
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
  if ( (byte_42E9B8E & 1) == 0 )
  {
    this = (CheckMaterialSvtListViewManager_o *)sub_B5D5C4(
                                                  &CheckMaterialSvtListViewObject_TypeInfo,
                                                  (_DWORD)obj,
                                                  (_DWORD)item,
                                                  method);
    byte_42E9B8E = 1;
  }
  if ( !obj
    || (v6 = *(&CheckMaterialSvtListViewObject_TypeInfo->_2.bitflags2 + 1),
        *(&obj->klass->_2.bitflags2 + 1) < (unsigned int)v6)
    || (CheckMaterialSvtListViewObject_c *)obj->klass->_2.typeHierarchy[v6 - 1] != CheckMaterialSvtListViewObject_TypeInfo )
  {
    sub_B5D69C(this, obj);
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
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v23; // x20
  UnityEngine_GameObject_o *Component_srcLineSprite; // x0
  const MethodInfo *v25; // x1
  struct System_Collections_Generic_List_GameObject__o *objectList; // x21
  __int64 v27; // x22
  unsigned __int64 v28; // x26
  UnityEngine_Object_o *v29; // x21
  struct System_Collections_Generic_List_GameObject__o *v30; // x21
  EventMissionProgressRequest_Argument_ProgressData_o *v31; // x21

  if ( (byte_42E9B87 & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_CheckMaterialSvtListViewObject___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_CheckMaterialSvtListViewObject__Add__, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_CheckMaterialSvtListViewObject___ctor__, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_List_GameObject__get_Count__, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_List_GameObject__get_Item__, v14, v15, v16);
    sub_B5D5C4(&System_Collections_Generic_List_CheckMaterialSvtListViewObject__TypeInfo, v17, v18, v19);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v20, v21, v22);
    byte_42E9B87 = 1;
  }
  v23 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_CheckMaterialSvtListViewObject__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v23,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_CheckMaterialSvtListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
LABEL_23:
    sub_B5D69C(Component_srcLineSprite, v25);
  v27 = 4LL;
  while ( 1 )
  {
    v28 = v27 - 4;
    if ( v27 - 4 >= objectList->fields._size )
      return (System_Collections_Generic_List_CheckMaterialSvtListViewObject__o *)v23;
    if ( v28 >= (unsigned int)objectList->fields._size )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
    v29 = (UnityEngine_Object_o *)*((_QWORD *)&objectList->fields._items->obj.klass + v27);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    Component_srcLineSprite = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality(v29, 0LL, 0LL);
    if ( ((unsigned __int8)Component_srcLineSprite & 1) == 0 )
    {
      v30 = this->fields.objectList;
      if ( !v30 )
        goto LABEL_23;
      if ( v28 >= (unsigned int)v30->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
      Component_srcLineSprite = (UnityEngine_GameObject_o *)*((_QWORD *)&v30->fields._items->obj.klass + v27);
      if ( !Component_srcLineSprite )
        goto LABEL_23;
      Component_srcLineSprite = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                              Component_srcLineSprite,
                                                              (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_CheckMaterialSvtListViewObject___);
      if ( !Component_srcLineSprite )
        goto LABEL_23;
      v31 = (EventMissionProgressRequest_Argument_ProgressData_o *)Component_srcLineSprite;
      Component_srcLineSprite = (UnityEngine_GameObject_o *)CheckMaterialSvtListViewObject__GetItem(
                                                              (CheckMaterialSvtListViewObject_o *)Component_srcLineSprite,
                                                              v25);
      if ( Component_srcLineSprite )
      {
        v25 = (const MethodInfo *)Component_srcLineSprite;
        if ( !LOBYTE(Component_srcLineSprite[3].fields.m_CachedPtr)
          || (Component_srcLineSprite = (UnityEngine_GameObject_o *)ListViewManager__ClippingItem_23920288(
                                                                      (ListViewManager_o *)this,
                                                                      (ListViewItem_o *)Component_srcLineSprite,
                                                                      0LL),
              ((unsigned __int8)Component_srcLineSprite & 1) != 0) )
        {
          if ( !v23 )
            goto LABEL_23;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v23,
            v31,
            (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_CheckMaterialSvtListViewObject__Add__);
        }
      }
    }
    objectList = this->fields.objectList;
    ++v27;
    if ( !objectList )
      goto LABEL_23;
  }
}


System_Collections_Generic_List_CheckMaterialSvtListViewObject__o *__fastcall CheckMaterialSvtListViewManager__get_ObjectList(
        CheckMaterialSvtListViewManager_o *this,
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
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v23; // x20
  srcLineSprite_o *Component_srcLineSprite; // x0
  __int64 v25; // x1
  struct System_Collections_Generic_List_GameObject__o *objectList; // x21
  __int64 v27; // x22
  unsigned __int64 v28; // x26
  UnityEngine_Object_o *v29; // x21
  struct System_Collections_Generic_List_GameObject__o *v30; // x21

  if ( (byte_42E9B86 & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_CheckMaterialSvtListViewObject___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_CheckMaterialSvtListViewObject__Add__, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_CheckMaterialSvtListViewObject___ctor__, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_List_GameObject__get_Count__, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_List_GameObject__get_Item__, v14, v15, v16);
    sub_B5D5C4(&System_Collections_Generic_List_CheckMaterialSvtListViewObject__TypeInfo, v17, v18, v19);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v20, v21, v22);
    byte_42E9B86 = 1;
  }
  v23 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_CheckMaterialSvtListViewObject__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v23,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_CheckMaterialSvtListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
LABEL_19:
    sub_B5D69C(Component_srcLineSprite, v25);
  v27 = 4LL;
  while ( 1 )
  {
    v28 = v27 - 4;
    if ( v27 - 4 >= objectList->fields._size )
      return (System_Collections_Generic_List_CheckMaterialSvtListViewObject__o *)v23;
    if ( v28 >= (unsigned int)objectList->fields._size )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
    v29 = (UnityEngine_Object_o *)*((_QWORD *)&objectList->fields._items->obj.klass + v27);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    Component_srcLineSprite = (srcLineSprite_o *)UnityEngine_Object__op_Equality(v29, 0LL, 0LL);
    if ( ((unsigned __int8)Component_srcLineSprite & 1) == 0 )
    {
      v30 = this->fields.objectList;
      if ( !v30 )
        goto LABEL_19;
      if ( v28 >= (unsigned int)v30->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
      Component_srcLineSprite = (srcLineSprite_o *)*((_QWORD *)&v30->fields._items->obj.klass + v27);
      if ( !Component_srcLineSprite )
        goto LABEL_19;
      Component_srcLineSprite = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                  (UnityEngine_GameObject_o *)Component_srcLineSprite,
                                  (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_CheckMaterialSvtListViewObject___);
      if ( !v23 )
        goto LABEL_19;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v23,
        (EventMissionProgressRequest_Argument_ProgressData_o *)Component_srcLineSprite,
        (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_CheckMaterialSvtListViewObject__Add__);
    }
    objectList = this->fields.objectList;
    ++v27;
    if ( !objectList )
      goto LABEL_19;
  }
}


void __fastcall CheckMaterialSvtListViewManager___c___cctor(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  struct CheckMaterialSvtListViewManager___c_StaticFields *static_fields; // x0

  if ( (byte_42E5E60 & 1) == 0 )
  {
    sub_B5D5C4(&CheckMaterialSvtListViewManager___c_TypeInfo, v1, v2, v3);
    byte_42E5E60 = 1;
  }
  v4 = (Il2CppObject *)sub_B5D694(CheckMaterialSvtListViewManager___c_TypeInfo);
  System_Object___ctor(v4, 0LL);
  static_fields = CheckMaterialSvtListViewManager___c_TypeInfo->static_fields;
  static_fields->__9 = (struct CheckMaterialSvtListViewManager___c_o *)v4;
  sub_B5D560(static_fields);
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

  if ( (byte_42E5E61 & 1) == 0 )
  {
    this = (CheckMaterialSvtListViewManager___c_o *)sub_B5D5C4(
                                                      &CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo,
                                                      (_DWORD)a,
                                                      (_DWORD)b,
                                                      method);
    byte_42E5E61 = 1;
  }
  if ( !a || (this = (CheckMaterialSvtListViewManager___c_o *)UserCommandCodeEntity__GetRarity(a, 0LL), !b) )
    sub_B5D69C(this, a);
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
  v10 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v16, 0LL);
  if ( v10 < CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(b->fields.commandCodeId, 0LL) )
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
  v13 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v17, 0LL);
  v14 = *(_QWORD *)&b->fields.commandCodeId.fields.currentCryptoKey;
  *(_QWORD *)&v18.fields.fakeValue = *(_QWORD *)&b->fields.commandCodeId.fields.fakeValue;
  v15 = v13;
  *(_QWORD *)&v18.fields.currentCryptoKey = v14;
  if ( v15 <= CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v18, 0LL) )
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
    sub_B5D69C(this, a);
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