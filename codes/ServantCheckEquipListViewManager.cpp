void __fastcall ServantCheckEquipListViewManager___ctor(
        ServantCheckEquipListViewManager_o *this,
        const MethodInfo *method)
{
  ListViewManager___ctor((ListViewManager_o *)this, 0LL);
}


void __fastcall ServantCheckEquipListViewManager__CreateCombineServantList(
        ServantCheckEquipListViewManager_o *this,
        System_Collections_Generic_List_UserServantEntity__o *userSvtEntityList,
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
  Il2CppObject *current; // x21
  int32_t v14; // w23
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x3
  __int64 v18; // x4
  ServantCheckEquipListViewItem_o *v19; // x22
  const MethodInfo *v20; // x4
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x0
  const MethodInfo *v22; // x2
  struct System_Collections_Generic_List_ListViewItem__o *v23; // x8
  struct ListViewItemSeed_o *seed; // x9
  System_Collections_Generic_List_Enumerator_T__o v25; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v26; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_40F94E8 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_UserServantEntity__Dispose__, userSvtEntityList);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_UserServantEntity__MoveNext__, v5);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_UserServantEntity__get_Current__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewItem__Add__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_UserServantEntity__GetEnumerator__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_UserServantEntity__IndexOf__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_UserServantEntity__get_Count__, v11);
    sub_B16FFC(&ServantCheckEquipListViewItem_TypeInfo, v12);
    byte_40F94E8 = 1;
  }
  memset(&v26, 0, sizeof(v26));
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
  if ( userSvtEntityList && userSvtEntityList->fields._size >= 1 )
  {
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v25,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)userSvtEntityList,
      (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_UserServantEntity__GetEnumerator__);
    v26 = v25;
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v26,
              (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_UserServantEntity__MoveNext__) )
    {
      current = v26.fields.current;
      if ( NpCombineControl__CheckConfirm_23749848((UserServantEntity_o *)v26.fields.current, 0LL) )
      {
        v14 = System_Collections_Generic_List_WarBoardManager_TaskList___IndexOf(
                (System_Collections_Generic_List_WarBoardManager_TaskList__o *)userSvtEntityList,
                (WarBoardManager_TaskList_o *)current,
                (const MethodInfo_2F26D88 *)Method_System_Collections_Generic_List_UserServantEntity__IndexOf__);
        v19 = (ServantCheckEquipListViewItem_o *)sub_B170CC(ServantCheckEquipListViewItem_TypeInfo, v15, v16, v17, v18);
        ServantCheckEquipListViewItem___ctor(v19, (UserServantEntity_o *)current, v14, 1, v20);
        itemList = this->fields.itemList;
        if ( !itemList )
          sub_B170D4();
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)itemList,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v19,
          (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
      }
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v26,
      (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_UserServantEntity__Dispose__);
    v23 = this->fields.itemList;
    if ( !v23 || (seed = this->fields.seed) == 0LL )
      sub_B170D4();
    ServantCheckEquipListViewManager__SetScrollBarActive(
      this,
      seed->fields.arrangementVolume.fields.x < (float)v23->fields._size,
      v22);
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
  }
}


void __fastcall ServantCheckEquipListViewManager__CreateList(
        ServantCheckEquipListViewManager_o *this,
        System_Collections_Generic_List_SvtEqCombineListViewItem__o *materialList,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  const MethodInfo *v10; // x2
  __int64 v11; // x3
  __int64 v12; // x4
  int32_t size; // w25
  __int64 v14; // x26
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o **p_itemList; // x24
  unsigned int v16; // w8
  SvtEqCombineListViewItem_o *v17; // x8
  UserServantEntity_o *userSvtEntity; // x22
  int32_t selectNum; // w23
  ServantCheckEquipListViewItem_o *v20; // x21
  const MethodInfo *v21; // x4
  struct ListViewItemSeed_o *seed; // x9

  if ( (byte_40F94E6 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewItem__Add__, materialList);
    sub_B16FFC(&Method_System_Collections_Generic_List_SvtEqCombineListViewItem__get_Count__, v5);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_SvtEqCombineListViewItem__get_Item__, v7);
    sub_B16FFC(&ServantCheckEquipListViewItem_TypeInfo, v8);
    byte_40F94E6 = 1;
  }
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
  if ( !materialList )
    goto LABEL_20;
  size = materialList->fields._size;
  if ( size > 0 )
  {
    v14 = 0LL;
    p_itemList = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o **)&this->fields.itemList;
    v16 = materialList->fields._size;
    while ( 1 )
    {
      if ( v16 <= (unsigned int)v14 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
      v17 = materialList->fields._items->m_Items[v14];
      if ( !v17 )
        goto LABEL_20;
      if ( v17->fields.isEquiped || v17->fields.isUseSupportEquip )
      {
        userSvtEntity = v17->fields.userSvtEntity;
        selectNum = v17->fields.selectNum;
        v20 = (ServantCheckEquipListViewItem_o *)sub_B170CC(ServantCheckEquipListViewItem_TypeInfo, v9, v10, v11, v12);
        ServantCheckEquipListViewItem___ctor(v20, userSvtEntity, selectNum, 0, v21);
        if ( !*p_itemList )
          goto LABEL_20;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          *p_itemList,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v20,
          (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
      }
      if ( (int)v14 + 1 >= size )
        goto LABEL_17;
      v16 = materialList->fields._size;
      ++v14;
    }
  }
  p_itemList = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o **)&this->fields.itemList;
LABEL_17:
  if ( !*p_itemList || (seed = this->fields.seed) == 0LL )
LABEL_20:
    sub_B170D4();
  ServantCheckEquipListViewManager__SetScrollBarActive(
    this,
    seed->fields.arrangementVolume.fields.x < (float)(*p_itemList)->fields._size,
    v10);
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
}


void __fastcall ServantCheckEquipListViewManager__CreateList_23854664(
        ServantCheckEquipListViewManager_o *this,
        System_Collections_Generic_List_ServantOperationListViewItem__o *materialList,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  const MethodInfo *v9; // x2
  int32_t size; // w25
  __int64 v11; // x26
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o **p_itemList; // x24
  unsigned int v13; // w8
  Il2CppClass **v14; // x8
  Il2CppClass *v15; // x21
  __int64 v16; // x1
  __int64 v17; // x3
  __int64 v18; // x4
  UserServantEntity_o *interopData; // x22
  int32_t name; // w23
  ServantCheckEquipListViewItem_o *v21; // x21
  const MethodInfo *v22; // x4
  struct ListViewItemSeed_o *seed; // x9

  if ( (byte_40F94E7 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewItem__Add__, materialList);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v5);
    sub_B16FFC(&Method_System_Collections_Generic_List_ServantOperationListViewItem__get_Count__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_ServantOperationListViewItem__get_Item__, v7);
    sub_B16FFC(&ServantCheckEquipListViewItem_TypeInfo, v8);
    byte_40F94E7 = 1;
  }
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
  if ( !materialList )
    goto LABEL_21;
  size = materialList->fields._size;
  if ( size > 0 )
  {
    v11 = 0LL;
    p_itemList = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o **)&this->fields.itemList;
    v13 = materialList->fields._size;
    while ( 1 )
    {
      if ( v13 <= (unsigned int)v11 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
      v14 = &materialList->fields._items->obj.klass + v11;
      v15 = v14[4];
      if ( !v15 )
        goto LABEL_21;
      if ( ServantOperationListViewItem__get_IsServantEquip((ServantOperationListViewItem_o *)v14[4], 0LL)
        && (BYTE4(v15->static_fields) || BYTE6(v15->static_fields)) )
      {
        interopData = (UserServantEntity_o *)v15->_1.interopData;
        name = (int32_t)v15->_1.name;
        v21 = (ServantCheckEquipListViewItem_o *)sub_B170CC(ServantCheckEquipListViewItem_TypeInfo, v16, v9, v17, v18);
        ServantCheckEquipListViewItem___ctor(v21, interopData, name, 0, v22);
        if ( !*p_itemList )
          goto LABEL_21;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          *p_itemList,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v21,
          (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
      }
      if ( (int)v11 + 1 >= size )
        goto LABEL_18;
      v13 = materialList->fields._size;
      ++v11;
    }
  }
  p_itemList = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o **)&this->fields.itemList;
LABEL_18:
  if ( !*p_itemList || (seed = this->fields.seed) == 0LL )
LABEL_21:
    sub_B170D4();
  ServantCheckEquipListViewManager__SetScrollBarActive(
    this,
    seed->fields.arrangementVolume.fields.x < (float)(*p_itemList)->fields._size,
    v9);
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
}


void __fastcall ServantCheckEquipListViewManager__CreateMaterialTdServantList(
        ServantCheckEquipListViewManager_o *this,
        System_Collections_Generic_List_UserServantEntity__o *userSvtEntityList,
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
  __int64 v16; // x1
  Il2CppObject *current; // x21
  WebViewManager_o *Instance; // x0
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *v20; // x22
  void *monitor; // x23
  Il2CppClass *klass; // x24
  int32_t v23; // w1
  ServantEntity_o *Entity; // x0
  int32_t v25; // w23
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x3
  __int64 v29; // x4
  ServantCheckEquipListViewItem_o *v30; // x22
  const MethodInfo *v31; // x4
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *itemList; // x0
  const MethodInfo *v33; // x2
  struct System_Collections_Generic_List_ListViewItem__o *v34; // x8
  struct ListViewItemSeed_o *seed; // x9
  ServantCheckEquipListViewManager_o *v36; // [xsp+0h] [xbp-90h]
  System_Collections_Generic_List_Enumerator_T__o v37; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v38; // [xsp+20h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v39; // 0:x0.16

  if ( (byte_40F94EA & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantMaster___, userSvtEntityList);
    sub_B16FFC(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v5);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_UserServantEntity__Dispose__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_UserServantEntity__MoveNext__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_UserServantEntity__get_Current__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewItem__Add__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_UserServantEntity__GetEnumerator__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_UserServantEntity__IndexOf__, v11);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v12);
    sub_B16FFC(&Method_System_Collections_Generic_List_UserServantEntity__get_Count__, v13);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v14);
    sub_B16FFC(&ServantCheckEquipListViewItem_TypeInfo, v15);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v16);
    byte_40F94EA = 1;
  }
  memset(&v38, 0, sizeof(v38));
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
  if ( userSvtEntityList && userSvtEntityList->fields._size >= 1 )
  {
    v36 = this;
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v37,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)userSvtEntityList,
      (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_UserServantEntity__GetEnumerator__);
    v38 = v37;
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v38,
              (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_UserServantEntity__MoveNext__) )
    {
      current = v38.fields.current;
      Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        sub_B170D4();
      MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                             (DataManager_o *)Instance,
                                             (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantMaster___);
      if ( !current )
        sub_B170D4();
      v20 = (DataMasterBase_WarMaster__WarEntity__int__o *)MasterData_WarQuestSelectionMaster;
      klass = current[5].klass;
      monitor = current[5].monitor;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v39.fields.currentCryptoKey = klass;
      *(_QWORD *)&v39.fields.fakeValue = monitor;
      v23 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v39, 0LL);
      if ( !v20 )
        sub_B170D4();
      Entity = (ServantEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                    v20,
                                    v23,
                                    (const MethodInfo_266F388 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
      if ( !Entity )
        sub_B170D4();
      if ( ServantEntity__get_IsServantMaterialTd(Entity, 0LL) )
      {
        v25 = System_Collections_Generic_List_WarBoardManager_TaskList___IndexOf(
                (System_Collections_Generic_List_WarBoardManager_TaskList__o *)userSvtEntityList,
                (WarBoardManager_TaskList_o *)current,
                (const MethodInfo_2F26D88 *)Method_System_Collections_Generic_List_UserServantEntity__IndexOf__);
        v30 = (ServantCheckEquipListViewItem_o *)sub_B170CC(ServantCheckEquipListViewItem_TypeInfo, v26, v27, v28, v29);
        ServantCheckEquipListViewItem___ctor(v30, (UserServantEntity_o *)current, v25, 3, v31);
        itemList = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v36->fields.itemList;
        if ( !itemList )
          sub_B170D4();
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          itemList,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v30,
          (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
      }
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v38,
      (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_UserServantEntity__Dispose__);
    v34 = v36->fields.itemList;
    if ( !v34 || (seed = v36->fields.seed) == 0LL )
      sub_B170D4();
    ServantCheckEquipListViewManager__SetScrollBarActive(
      v36,
      seed->fields.arrangementVolume.fields.x < (float)v34->fields._size,
      v33);
    ListViewManager__SortItem((ListViewManager_o *)v36, -1, 0, -1, 0LL);
  }
}


void __fastcall ServantCheckEquipListViewManager__CreateSSRareServantList(
        ServantCheckEquipListViewManager_o *this,
        System_Collections_Generic_List_UserServantEntity__o *userSvtEntityList,
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
  __int64 v16; // x1
  Il2CppObject *current; // x21
  WebViewManager_o *Instance; // x0
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *v20; // x22
  void *monitor; // x23
  Il2CppClass *klass; // x24
  int32_t v23; // w1
  ServantEntity_o *Entity; // x0
  int32_t v25; // w23
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x3
  __int64 v29; // x4
  ServantCheckEquipListViewItem_o *v30; // x22
  const MethodInfo *v31; // x4
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *itemList; // x0
  const MethodInfo *v33; // x2
  struct System_Collections_Generic_List_ListViewItem__o *v34; // x8
  struct ListViewItemSeed_o *seed; // x9
  ServantCheckEquipListViewManager_o *v36; // [xsp+0h] [xbp-90h]
  System_Collections_Generic_List_Enumerator_T__o v37; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v38; // [xsp+20h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v39; // 0:x0.16

  if ( (byte_40F94E9 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantMaster___, userSvtEntityList);
    sub_B16FFC(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v5);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_UserServantEntity__Dispose__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_UserServantEntity__MoveNext__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_UserServantEntity__get_Current__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewItem__Add__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_UserServantEntity__GetEnumerator__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_UserServantEntity__IndexOf__, v11);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v12);
    sub_B16FFC(&Method_System_Collections_Generic_List_UserServantEntity__get_Count__, v13);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v14);
    sub_B16FFC(&ServantCheckEquipListViewItem_TypeInfo, v15);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v16);
    byte_40F94E9 = 1;
  }
  memset(&v38, 0, sizeof(v38));
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
  if ( userSvtEntityList && userSvtEntityList->fields._size >= 1 )
  {
    v36 = this;
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v37,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)userSvtEntityList,
      (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_UserServantEntity__GetEnumerator__);
    v38 = v37;
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v38,
              (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_UserServantEntity__MoveNext__) )
    {
      current = v38.fields.current;
      Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        sub_B170D4();
      MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                             (DataManager_o *)Instance,
                                             (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantMaster___);
      if ( !current )
        sub_B170D4();
      v20 = (DataMasterBase_WarMaster__WarEntity__int__o *)MasterData_WarQuestSelectionMaster;
      klass = current[5].klass;
      monitor = current[5].monitor;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v39.fields.currentCryptoKey = klass;
      *(_QWORD *)&v39.fields.fakeValue = monitor;
      v23 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v39, 0LL);
      if ( !v20 )
        sub_B170D4();
      Entity = (ServantEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                    v20,
                                    v23,
                                    (const MethodInfo_266F388 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
      if ( !Entity )
        sub_B170D4();
      if ( ServantEntity__get_IsServant(Entity, 0LL)
        && UserServantEntity__getRarity((UserServantEntity_o *)current, 0LL) == 5 )
      {
        v25 = System_Collections_Generic_List_WarBoardManager_TaskList___IndexOf(
                (System_Collections_Generic_List_WarBoardManager_TaskList__o *)userSvtEntityList,
                (WarBoardManager_TaskList_o *)current,
                (const MethodInfo_2F26D88 *)Method_System_Collections_Generic_List_UserServantEntity__IndexOf__);
        v30 = (ServantCheckEquipListViewItem_o *)sub_B170CC(ServantCheckEquipListViewItem_TypeInfo, v26, v27, v28, v29);
        ServantCheckEquipListViewItem___ctor(v30, (UserServantEntity_o *)current, v25, 2, v31);
        itemList = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v36->fields.itemList;
        if ( !itemList )
          sub_B170D4();
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          itemList,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v30,
          (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
      }
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v38,
      (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_UserServantEntity__Dispose__);
    v34 = v36->fields.itemList;
    if ( !v34 || (seed = v36->fields.seed) == 0LL )
      sub_B170D4();
    ServantCheckEquipListViewManager__SetScrollBarActive(
      v36,
      seed->fields.arrangementVolume.fields.x < (float)v34->fields._size,
      v33);
    ListViewManager__SortItem((ListViewManager_o *)v36, -1, 0, -1, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
ServantCheckEquipListViewItem_o *__fastcall ServantCheckEquipListViewManager__GetItem(
        ServantCheckEquipListViewManager_o *this,
        int32_t index,
        const MethodInfo *method)
{
  __int64 v5; // x1
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x20
  ListViewItem_o *v7; // x8
  __int64 v8; // x11

  if ( (byte_40F94EB & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, *(_QWORD *)&index);
    sub_B16FFC(&ServantCheckEquipListViewItem_TypeInfo, v5);
    byte_40F94EB = 1;
  }
  itemList = this->fields.itemList;
  if ( !itemList )
    return 0LL;
  if ( itemList->fields._size <= (unsigned int)index )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
  v7 = itemList->fields._items->m_Items[index];
  if ( !v7 )
    return 0LL;
  v8 = *(&ServantCheckEquipListViewItem_TypeInfo->_2.bitflags2 + 1);
  if ( *(&v7->klass->_2.bitflags2 + 1) < (unsigned int)v8 )
    return 0LL;
  if ( (ServantCheckEquipListViewItem_c *)v7->klass->_2.typeHierarchy[v8 - 1] == ServantCheckEquipListViewItem_TypeInfo )
    return (ServantCheckEquipListViewItem_o *)itemList->fields._items->m_Items[index];
  return 0LL;
}


void __fastcall ServantCheckEquipListViewManager__OnClickListView(
        ServantCheckEquipListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  struct ListViewItem_o *linkItem; // x19
  __int64 v10; // x9
  WebViewManager_o *Instance; // x0
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x3
  __int64 v15; // x4
  UserServantEntity_o *v16; // x19
  CommonUI_o *v17; // x20
  ServantCheckEquipListViewManager___c_c *v18; // x8
  struct ServantCheckEquipListViewManager___c_StaticFields *static_fields; // x9
  ServantStatusDialog_EndDelegate_o *_9__21_0; // x21
  Il2CppObject *v21; // x22
  struct ServantCheckEquipListViewManager___c_StaticFields *v22; // x0
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  ServantCheckEquipListViewManager_o *v29; // x0
  const MethodInfo *v30; // x1

  if ( (byte_40F94EF & 1) == 0 )
  {
    sub_B16FFC(&ServantStatusDialog_EndDelegate_TypeInfo, obj);
    sub_B16FFC(&ServantCheckEquipListViewItem_TypeInfo, v4);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    sub_B16FFC(&SoundManager_TypeInfo, v6);
    sub_B16FFC(&Method_ServantCheckEquipListViewManager___c__OnClickListView_b__21_0__, v7);
    sub_B16FFC(&ServantCheckEquipListViewManager___c_TypeInfo, v8);
    byte_40F94EF = 1;
  }
  if ( !obj )
    goto LABEL_21;
  linkItem = obj->fields.linkItem;
  if ( linkItem )
  {
    v10 = *(&ServantCheckEquipListViewItem_TypeInfo->_2.bitflags2 + 1);
    if ( *(&linkItem->klass->_2.bitflags2 + 1) >= (unsigned int)v10
      && (ServantCheckEquipListViewItem_c *)linkItem->klass->_2.typeHierarchy[v10 - 1] == ServantCheckEquipListViewItem_TypeInfo )
    {
      if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SoundManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      }
      SoundManager__playSystemSe(0, 0LL);
      Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v16 = *(UserServantEntity_o **)&linkItem[1].fields.selectNum;
      v17 = (CommonUI_o *)Instance;
      v18 = ServantCheckEquipListViewManager___c_TypeInfo;
      if ( (BYTE3(ServantCheckEquipListViewManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ServantCheckEquipListViewManager___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantCheckEquipListViewManager___c_TypeInfo);
        v18 = ServantCheckEquipListViewManager___c_TypeInfo;
      }
      static_fields = v18->static_fields;
      _9__21_0 = static_fields->__9__21_0;
      if ( !_9__21_0 )
      {
        if ( (BYTE3(v18->vtable._0_Equals.methodPtr) & 4) != 0 && !v18->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v18);
          static_fields = ServantCheckEquipListViewManager___c_TypeInfo->static_fields;
        }
        v21 = (Il2CppObject *)static_fields->__9;
        _9__21_0 = (ServantStatusDialog_EndDelegate_o *)sub_B170CC(
                                                          ServantStatusDialog_EndDelegate_TypeInfo,
                                                          v12,
                                                          v13,
                                                          v14,
                                                          v15);
        ServantStatusDialog_EndDelegate___ctor(
          _9__21_0,
          v21,
          Method_ServantCheckEquipListViewManager___c__OnClickListView_b__21_0__,
          0LL);
        v22 = ServantCheckEquipListViewManager___c_TypeInfo->static_fields;
        v22->__9__21_0 = _9__21_0;
        sub_B16F98(
          (BattleServantConfConponent_o *)&v22->__9__21_0,
          (System_Int32_array **)_9__21_0,
          v23,
          v24,
          v25,
          v26,
          v27,
          v28);
      }
      if ( v17 )
      {
        CommonUI__OpenServantStatusDialog_18248328(v17, 29, v16, _9__21_0, 0LL);
        return;
      }
LABEL_21:
      sub_B170D4();
    }
    v29 = (ServantCheckEquipListViewManager_o *)sub_B173C8(linkItem);
    ServantCheckEquipListViewManager__SetContentPivot(v29, v30);
  }
}


void __fastcall ServantCheckEquipListViewManager__OnMoveEnd(
        ServantCheckEquipListViewManager_o *this,
        const MethodInfo *method)
{
  int32_t callbackCount; // w8
  bool v4; // vf
  int32_t v5; // w8
  UnityEngine_Object_o *scrollView; // x20
  struct UIScrollView_o *v7; // x0
  System_Action_o *callbackFunc2; // x20
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7

  if ( (byte_40F94EE & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    byte_40F94EE = 1;
  }
  callbackCount = this->fields.callbackCount;
  v4 = __OFSUB__(callbackCount, 1);
  v5 = callbackCount - 1;
  if ( v5 < 0 == v4 )
  {
    this->fields.callbackCount = v5;
    if ( !v5 )
    {
      scrollView = (UnityEngine_Object_o *)this->fields.scrollView;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Inequality(scrollView, 0LL, 0LL) )
      {
        v7 = this->fields.scrollView;
        if ( !v7 )
          sub_B170D4();
        ((void (__fastcall *)(struct UIScrollView_o *, __int64, Il2CppMethodPointer))v7->klass->vtable._8_UpdateScrollbars.method)(
          v7,
          1LL,
          v7->klass->vtable._9_SetDragAmount.methodPtr);
        callbackFunc2 = this->fields.callbackFunc2;
        this->fields.callbackFunc2 = 0LL;
        sub_B16F98((BattleServantConfConponent_o *)&this->fields.callbackFunc2, 0LL, v9, v10, v11, v12, v13, v14);
        if ( callbackFunc2 )
          System_Action__Invoke(callbackFunc2, 0LL);
      }
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantCheckEquipListViewManager__RequestListObject(
        ServantCheckEquipListViewManager_o *this,
        int32_t mode,
        float delay,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  System_Collections_Generic_List_ServantCheckEquipListViewObject__o *v11; // x0
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x3
  __int64 v15; // x4
  int32_t size; // w8
  System_Collections_Generic_List_ServantCheckEquipListViewObject__o *v17; // x21
  int v18; // w24
  __int64 v19; // x25
  unsigned int v20; // w8
  ServantCheckEquipListViewObject_o *v21; // x22
  System_Action_o *v22; // x23
  const MethodInfo *v23; // x3
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  if ( (byte_40F94ED & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, *(_QWORD *)&mode);
    sub_B16FFC(&Method_System_Collections_Generic_List_ServantCheckEquipListViewObject__get_Count__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_ServantCheckEquipListViewObject__get_Item__, v8);
    sub_B16FFC(&Method_ServantCheckEquipListViewManager_OnMoveEnd__, v9);
    sub_B16FFC(&StringLiteral_10004/*"OnMoveEnd"*/, v10);
    byte_40F94ED = 1;
  }
  v11 = ServantCheckEquipListViewManager__get_ObjectList(this, *(const MethodInfo **)&mode);
  if ( !v11 )
    goto LABEL_14;
  size = v11->fields._size;
  v17 = v11;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10004/*"OnMoveEnd"*/,
      delay,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    v18 = v11->fields._size;
    if ( v18 >= 1 )
    {
      v19 = 0LL;
      v20 = v11->fields._size;
      while ( 1 )
      {
        if ( v20 <= (unsigned int)v19 )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
        v21 = v17->fields._items->m_Items[v19];
        v22 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v12, v13, v14, v15);
        System_Action___ctor(v22, (Il2CppObject *)this, Method_ServantCheckEquipListViewManager_OnMoveEnd__, 0LL);
        if ( !v21 )
          break;
        zero = UnityEngine_Vector3__get_zero(0LL);
        ServantCheckEquipListViewObject__Init(
          v21,
          mode,
          v22,
          zero.fields.x,
          *(UnityEngine_Vector3_o *)&zero.fields.y,
          v23);
        if ( (int)v19 + 1 >= v18 )
          return;
        v20 = v17->fields._size;
        ++v19;
      }
LABEL_14:
      sub_B170D4();
    }
  }
}


void __fastcall ServantCheckEquipListViewManager__SetContentPivot(
        ServantCheckEquipListViewManager_o *this,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x8
  struct UIScrollView_o *scrollView; // x9

  if ( (byte_40F94F1 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, method);
    byte_40F94F1 = 1;
  }
  itemList = this->fields.itemList;
  if ( !itemList || (scrollView = this->fields.scrollView) == 0LL )
    sub_B170D4();
  HIDWORD(scrollView->fields.onDragStarted) = 4 * (itemList->fields._size == 1);
}


void __fastcall ServantCheckEquipListViewManager__SetMode(
        ServantCheckEquipListViewManager_o *this,
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
  ServantCheckEquipListViewManager__SetMode_23853976(this, mode, v10);
}


void __fastcall ServantCheckEquipListViewManager__SetMode_23853976(
        ServantCheckEquipListViewManager_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x2
  int32_t v6; // w1

  this->fields.initMode = mode;
  this->fields.callbackCount = ListViewManager__get_ObjectSum((ListViewManager_o *)this, 0LL);
  ListViewManager__set_IsInput((ListViewManager_o *)this, mode == 3, 0LL);
  if ( mode == 2 )
  {
    v6 = 2;
  }
  else
  {
    if ( mode != 3 )
      return;
    v6 = 3;
  }
  ServantCheckEquipListViewManager__RequestListObject(this, v6, 0.0, v5);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantCheckEquipListViewManager__SetObjectItem(
        ServantCheckEquipListViewManager_o *this,
        ListViewObject_o *obj,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  __int64 v6; // x10
  int32_t initMode; // w20
  const MethodInfo *v8; // x3
  float v9; // s0
  int v10; // s1
  int32_t v13; // w1

  if ( (byte_40F94EC & 1) == 0 )
  {
    sub_B16FFC(&ServantCheckEquipListViewObject_TypeInfo, obj);
    byte_40F94EC = 1;
  }
  if ( !obj
    || (v6 = *(&ServantCheckEquipListViewObject_TypeInfo->_2.bitflags2 + 1),
        *(&obj->klass->_2.bitflags2 + 1) < (unsigned int)v6)
    || (ServantCheckEquipListViewObject_c *)obj->klass->_2.typeHierarchy[v6 - 1] != ServantCheckEquipListViewObject_TypeInfo )
  {
    sub_B170D4();
  }
  initMode = this->fields.initMode;
  *(UnityEngine_Vector3_o *)&v9 = UnityEngine_Vector3__get_zero(0LL);
  if ( initMode == 3 )
    v13 = 3;
  else
    v13 = 2;
  ServantCheckEquipListViewObject__Init(
    (ServantCheckEquipListViewObject_o *)obj,
    v13,
    0LL,
    v9,
    *(UnityEngine_Vector3_o *)&v10,
    v8);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantCheckEquipListViewManager__SetScrollBarActive(
        ServantCheckEquipListViewManager_o *this,
        bool isActive,
        const MethodInfo *method)
{
  UnityEngine_Object_o *scrollBar; // x21
  UnityEngine_Component_o *v6; // x0
  UnityEngine_GameObject_o *gameObject; // x0

  if ( (byte_40F94F0 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, isActive);
    byte_40F94F0 = 1;
  }
  scrollBar = (UnityEngine_Object_o *)this->fields.scrollBar;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality(scrollBar, 0LL, 0LL) )
  {
    v6 = (UnityEngine_Component_o *)this->fields.scrollBar;
    if ( !v6 || (gameObject = UnityEngine_Component__get_gameObject(v6, 0LL)) == 0LL )
      sub_B170D4();
    UnityEngine_GameObject__SetActive(gameObject, isActive, 0LL);
  }
}


void __fastcall ServantCheckEquipListViewManager__add_callbackFunc2(
        ServantCheckEquipListViewManager_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *callbackFunc2; // x21
  struct System_Action_o **p_callbackFunc2; // x20
  System_Delegate_o *v7; // x0
  __int64 v8; // x0
  bool v9; // zf
  ServantCheckEquipListViewManager_o *v10; // x0
  System_Action_o *v11; // x1
  const MethodInfo *v12; // x2

  if ( (byte_40F94E2 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, value);
    byte_40F94E2 = 1;
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
  v10 = (ServantCheckEquipListViewManager_o *)sub_B173C8(v7);
  ServantCheckEquipListViewManager__remove_callbackFunc2(v10, v11, v12);
}


System_Collections_Generic_List_ServantCheckEquipListViewObject__o *__fastcall ServantCheckEquipListViewManager__get_ClippingObjectList(
        ServantCheckEquipListViewManager_o *this,
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
  signed __int64 size; // x22
  unsigned __int64 v15; // x23
  UnityEngine_GameObject_o *v16; // x21
  ServantCheckEquipListViewObject_o *Component_srcLineSprite; // x0
  const MethodInfo *v18; // x1
  EventMissionProgressRequest_Argument_ProgressData_o *v19; // x21
  ListViewItem_o *v20; // x0

  if ( (byte_40F94E5 & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_ServantCheckEquipListViewObject___, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_ServantCheckEquipListViewObject__Add__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_ServantCheckEquipListViewObject___ctor__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_GameObject__get_Count__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_GameObject__get_Item__, v9);
    sub_B16FFC(&System_Collections_Generic_List_ServantCheckEquipListViewObject__TypeInfo, v10);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v11);
    byte_40F94E5 = 1;
  }
  v12 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_ServantCheckEquipListViewObject__TypeInfo,
                                                                                                  method,
                                                                                                  v2,
                                                                                                  v3,
                                                                                                  v4);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v12,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_ServantCheckEquipListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    goto LABEL_21;
  size = objectList->fields._size;
  if ( (int)size >= 1 )
  {
    v15 = 0LL;
    do
    {
      if ( v15 >= (unsigned int)objectList->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
      v16 = objectList->fields._items->m_Items[v15];
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v16, 0LL, 0LL) )
      {
        if ( !v16 )
          break;
        Component_srcLineSprite = (ServantCheckEquipListViewObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                         v16,
                                                                         (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_ServantCheckEquipListViewObject___);
        if ( !Component_srcLineSprite )
          break;
        v19 = (EventMissionProgressRequest_Argument_ProgressData_o *)Component_srcLineSprite;
        v20 = (ListViewItem_o *)ServantCheckEquipListViewObject__GetItem(Component_srcLineSprite, v18);
        if ( !v20 )
          break;
        if ( !v20->fields.isTermination || ListViewManager__ClippingItem_30192136((ListViewManager_o *)this, v20, 0LL) )
        {
          if ( !v12 )
            break;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v12,
            v19,
            (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_ServantCheckEquipListViewObject__Add__);
        }
      }
      if ( (__int64)++v15 >= size )
        return (System_Collections_Generic_List_ServantCheckEquipListViewObject__o *)v12;
      objectList = this->fields.objectList;
    }
    while ( objectList );
LABEL_21:
    sub_B170D4();
  }
  return (System_Collections_Generic_List_ServantCheckEquipListViewObject__o *)v12;
}


System_Collections_Generic_List_ServantCheckEquipListViewObject__o *__fastcall ServantCheckEquipListViewManager__get_ObjectList(
        ServantCheckEquipListViewManager_o *this,
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
  signed __int64 size; // x22
  unsigned __int64 v15; // x23
  UnityEngine_GameObject_o *v16; // x21
  EventMissionProgressRequest_Argument_ProgressData_o *Component_srcLineSprite; // x0

  if ( (byte_40F94E4 & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_ServantCheckEquipListViewObject___, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_ServantCheckEquipListViewObject__Add__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_ServantCheckEquipListViewObject___ctor__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_GameObject__get_Count__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_GameObject__get_Item__, v9);
    sub_B16FFC(&System_Collections_Generic_List_ServantCheckEquipListViewObject__TypeInfo, v10);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v11);
    byte_40F94E4 = 1;
  }
  v12 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_ServantCheckEquipListViewObject__TypeInfo,
                                                                                                  method,
                                                                                                  v2,
                                                                                                  v3,
                                                                                                  v4);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v12,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_ServantCheckEquipListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    goto LABEL_17;
  size = objectList->fields._size;
  if ( (int)size >= 1 )
  {
    v15 = 0LL;
    do
    {
      if ( v15 >= (unsigned int)objectList->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
      v16 = objectList->fields._items->m_Items[v15];
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v16, 0LL, 0LL) )
      {
        if ( !v16 )
          break;
        Component_srcLineSprite = (EventMissionProgressRequest_Argument_ProgressData_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                                           v16,
                                                                                           (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_ServantCheckEquipListViewObject___);
        if ( !v12 )
          break;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v12,
          Component_srcLineSprite,
          (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_ServantCheckEquipListViewObject__Add__);
      }
      if ( (__int64)++v15 >= size )
        return (System_Collections_Generic_List_ServantCheckEquipListViewObject__o *)v12;
      objectList = this->fields.objectList;
    }
    while ( objectList );
LABEL_17:
    sub_B170D4();
  }
  return (System_Collections_Generic_List_ServantCheckEquipListViewObject__o *)v12;
}


void __fastcall ServantCheckEquipListViewManager__remove_callbackFunc2(
        ServantCheckEquipListViewManager_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *callbackFunc2; // x21
  struct System_Action_o **p_callbackFunc2; // x20
  System_Delegate_o *v7; // x0
  __int64 v8; // x0
  bool v9; // zf
  ServantCheckEquipListViewManager_o *v10; // x0
  const MethodInfo *v11; // x1

  if ( (byte_40F94E3 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, value);
    byte_40F94E3 = 1;
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
  v10 = (ServantCheckEquipListViewManager_o *)sub_B173C8(v7);
  ServantCheckEquipListViewManager__get_ObjectList(v10, v11);
}


void __fastcall ServantCheckEquipListViewManager___c___cctor(const MethodInfo *method)
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

  if ( (byte_40F760E & 1) == 0 )
  {
    sub_B16FFC(&ServantCheckEquipListViewManager___c_TypeInfo, v1);
    byte_40F760E = 1;
  }
  v5 = (Il2CppObject *)sub_B170CC(ServantCheckEquipListViewManager___c_TypeInfo, v1, v2, v3, v4);
  System_Object___ctor(v5, 0LL);
  static_fields = (BattleServantConfConponent_o *)ServantCheckEquipListViewManager___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v5;
  sub_B16F98(static_fields, (System_Int32_array **)v5, v7, v8, v9, v10, v11, v12);
}


void __fastcall ServantCheckEquipListViewManager___c___ctor(
        ServantCheckEquipListViewManager___c_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantCheckEquipListViewManager___c___OnClickListView_b__21_0(
        ServantCheckEquipListViewManager___c_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x0

  if ( (byte_40F760F & 1) == 0 )
  {
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, isDecide);
    byte_40F760F = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B170D4();
  CommonUI__CloseServantStatusDialog(Instance, 0LL, 0LL);
}