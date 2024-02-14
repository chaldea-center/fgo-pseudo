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
  ServantCheckEquipListViewItem_o *v17; // x22
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x0
  __int64 v19; // x0
  const MethodInfo *v20; // x2
  struct System_Collections_Generic_List_ListViewItem__o *v21; // x8
  struct ListViewItemSeed_o *seed; // x9
  System_Collections_Generic_List_Enumerator_T__o v23; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v24; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_4215E7A & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_UserServantEntity__Dispose__, userSvtEntityList);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_UserServantEntity__MoveNext__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_UserServantEntity__get_Current__, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ListViewItem__Add__, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_UserServantEntity__GetEnumerator__, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_List_UserServantEntity__IndexOf__, v9);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v10);
    sub_B0D8A4(&Method_System_Collections_Generic_List_UserServantEntity__get_Count__, v11);
    sub_B0D8A4(&ServantCheckEquipListViewItem_TypeInfo, v12);
    byte_4215E7A = 1;
  }
  memset(&v24, 0, sizeof(v24));
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
  if ( userSvtEntityList && userSvtEntityList->fields._size >= 1 )
  {
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v23,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)userSvtEntityList,
      (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_UserServantEntity__GetEnumerator__);
    v24 = v23;
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v24,
              (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_UserServantEntity__MoveNext__) )
    {
      current = v24.fields.current;
      if ( NpCombineControl__CheckConfirm_25570972((UserServantEntity_o *)v24.fields.current, 0LL) )
      {
        v14 = System_Collections_Generic_List_WarBoardManager_TaskList___IndexOf(
                (System_Collections_Generic_List_WarBoardManager_TaskList__o *)userSvtEntityList,
                (WarBoardManager_TaskList_o *)current,
                (const MethodInfo_2FC6798 *)Method_System_Collections_Generic_List_UserServantEntity__IndexOf__);
        v17 = (ServantCheckEquipListViewItem_o *)sub_B0D974(ServantCheckEquipListViewItem_TypeInfo, v15, v16);
        ServantCheckEquipListViewItem___ctor(v17, (UserServantEntity_o *)current, v14, 1, 0LL);
        itemList = this->fields.itemList;
        if ( !itemList )
          sub_B0D97C(0LL);
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)itemList,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v17,
          (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
      }
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v24,
      (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_UserServantEntity__Dispose__);
    v21 = this->fields.itemList;
    if ( !v21 || (seed = this->fields.seed) == 0LL )
      sub_B0D97C(v19);
    ServantCheckEquipListViewManager__SetScrollBarActive(
      this,
      seed->fields.arrangementVolume.fields.x < (float)v21->fields._size,
      v20);
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
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v9; // x0
  __int64 v10; // x1
  const MethodInfo *v11; // x2
  int32_t size; // w25
  __int64 v13; // x26
  struct System_Collections_Generic_List_ListViewItem__o **p_itemList; // x24
  unsigned int v15; // w8
  SvtEqCombineListViewItem_o *v16; // x8
  UserServantEntity_o *userSvtEntity; // x22
  int32_t selectNum; // w23
  ServantCheckEquipListViewItem_o *v19; // x21
  struct ListViewItemSeed_o *seed; // x9

  if ( (byte_4215E78 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_ListViewItem__Add__, materialList);
    sub_B0D8A4(&Method_System_Collections_Generic_List_SvtEqCombineListViewItem__get_Count__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_SvtEqCombineListViewItem__get_Item__, v7);
    sub_B0D8A4(&ServantCheckEquipListViewItem_TypeInfo, v8);
    byte_4215E78 = 1;
  }
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
  if ( !materialList )
    goto LABEL_20;
  size = materialList->fields._size;
  if ( size > 0 )
  {
    v13 = 0LL;
    p_itemList = &this->fields.itemList;
    v15 = materialList->fields._size;
    while ( 1 )
    {
      if ( v15 <= (unsigned int)v13 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
      v16 = materialList->fields._items->m_Items[v13];
      if ( !v16 )
        goto LABEL_20;
      if ( v16->fields.isEquiped || v16->fields.isUseSupportEquip )
      {
        userSvtEntity = v16->fields.userSvtEntity;
        selectNum = v16->fields.selectNum;
        v19 = (ServantCheckEquipListViewItem_o *)sub_B0D974(ServantCheckEquipListViewItem_TypeInfo, v10, v11);
        ServantCheckEquipListViewItem___ctor(v19, userSvtEntity, selectNum, 0, 0LL);
        v9 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)*p_itemList;
        if ( !*p_itemList )
          goto LABEL_20;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v9,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v19,
          (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
      }
      if ( (int)v13 + 1 >= size )
        goto LABEL_17;
      v15 = materialList->fields._size;
      ++v13;
    }
  }
  p_itemList = &this->fields.itemList;
LABEL_17:
  if ( !*p_itemList || (seed = this->fields.seed) == 0LL )
LABEL_20:
    sub_B0D97C(v9);
  ServantCheckEquipListViewManager__SetScrollBarActive(
    this,
    seed->fields.arrangementVolume.fields.x < (float)(*p_itemList)->fields._size,
    v11);
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
}


void __fastcall ServantCheckEquipListViewManager__CreateList_26993784(
        ServantCheckEquipListViewManager_o *this,
        System_Collections_Generic_List_ServantOperationListViewItem__o *materialList,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *IsServantEquip; // x0
  const MethodInfo *v10; // x2
  int32_t size; // w25
  __int64 v12; // x26
  struct System_Collections_Generic_List_ListViewItem__o **p_itemList; // x24
  unsigned int v14; // w8
  Il2CppClass **v15; // x8
  Il2CppClass *v16; // x21
  __int64 v17; // x1
  UserServantEntity_o *interopData; // x22
  int32_t name; // w23
  ServantCheckEquipListViewItem_o *v20; // x21
  struct ListViewItemSeed_o *seed; // x9

  if ( (byte_4215E79 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_ListViewItem__Add__, materialList);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ServantOperationListViewItem__get_Count__, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ServantOperationListViewItem__get_Item__, v7);
    sub_B0D8A4(&ServantCheckEquipListViewItem_TypeInfo, v8);
    byte_4215E79 = 1;
  }
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
  if ( !materialList )
    goto LABEL_21;
  size = materialList->fields._size;
  if ( size > 0 )
  {
    v12 = 0LL;
    p_itemList = &this->fields.itemList;
    v14 = materialList->fields._size;
    while ( 1 )
    {
      if ( v14 <= (unsigned int)v12 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
      v15 = &materialList->fields._items->obj.klass + v12;
      v16 = v15[4];
      if ( !v16 )
        goto LABEL_21;
      IsServantEquip = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)ServantOperationListViewItem__get_IsServantEquip((ServantOperationListViewItem_o *)v15[4], 0LL);
      if ( ((unsigned __int8)IsServantEquip & 1) != 0 && (BYTE4(v16->static_fields) || BYTE6(v16->static_fields)) )
      {
        interopData = (UserServantEntity_o *)v16->_1.interopData;
        name = (int32_t)v16->_1.name;
        v20 = (ServantCheckEquipListViewItem_o *)sub_B0D974(ServantCheckEquipListViewItem_TypeInfo, v17, v10);
        ServantCheckEquipListViewItem___ctor(v20, interopData, name, 0, 0LL);
        IsServantEquip = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)*p_itemList;
        if ( !*p_itemList )
          goto LABEL_21;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          IsServantEquip,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v20,
          (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
      }
      if ( (int)v12 + 1 >= size )
        goto LABEL_18;
      v14 = materialList->fields._size;
      ++v12;
    }
  }
  p_itemList = &this->fields.itemList;
LABEL_18:
  if ( !*p_itemList || (seed = this->fields.seed) == 0LL )
LABEL_21:
    sub_B0D97C(IsServantEquip);
  ServantCheckEquipListViewManager__SetScrollBarActive(
    this,
    seed->fields.arrangementVolume.fields.x < (float)(*p_itemList)->fields._size,
    v10);
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
  __int64 v23; // x0
  ServantEntity_o *Entity; // x0
  int32_t v25; // w23
  __int64 v26; // x1
  __int64 v27; // x2
  ServantCheckEquipListViewItem_o *v28; // x22
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *itemList; // x0
  __int64 v30; // x0
  const MethodInfo *v31; // x2
  struct System_Collections_Generic_List_ListViewItem__o *v32; // x8
  struct ListViewItemSeed_o *seed; // x9
  ServantCheckEquipListViewManager_o *v34; // [xsp+0h] [xbp-90h]
  System_Collections_Generic_List_Enumerator_T__o v35; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v36; // [xsp+20h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v37; // 0:x0.16

  if ( (byte_4215E7C & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_ServantMaster___, userSvtEntityList);
    sub_B0D8A4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_UserServantEntity__Dispose__, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_UserServantEntity__MoveNext__, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_UserServantEntity__get_Current__, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ListViewItem__Add__, v9);
    sub_B0D8A4(&Method_System_Collections_Generic_List_UserServantEntity__GetEnumerator__, v10);
    sub_B0D8A4(&Method_System_Collections_Generic_List_UserServantEntity__IndexOf__, v11);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v12);
    sub_B0D8A4(&Method_System_Collections_Generic_List_UserServantEntity__get_Count__, v13);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v14);
    sub_B0D8A4(&ServantCheckEquipListViewItem_TypeInfo, v15);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v16);
    byte_4215E7C = 1;
  }
  memset(&v36, 0, sizeof(v36));
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
  if ( userSvtEntityList && userSvtEntityList->fields._size >= 1 )
  {
    v34 = this;
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v35,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)userSvtEntityList,
      (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_UserServantEntity__GetEnumerator__);
    v36 = v35;
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v36,
              (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_UserServantEntity__MoveNext__) )
    {
      current = v36.fields.current;
      Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        sub_B0D97C(0LL);
      MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                             (DataManager_o *)Instance,
                                             (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ServantMaster___);
      if ( !current )
        sub_B0D97C(MasterData_WarQuestSelectionMaster);
      v20 = (DataMasterBase_WarMaster__WarEntity__int__o *)MasterData_WarQuestSelectionMaster;
      klass = current[5].klass;
      monitor = current[5].monitor;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v37.fields.currentCryptoKey = klass;
      *(_QWORD *)&v37.fields.fakeValue = monitor;
      v23 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v37, 0LL);
      if ( !v20 )
        sub_B0D97C(v23);
      Entity = (ServantEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                    v20,
                                    v23,
                                    (const MethodInfo_2669BD4 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
      if ( !Entity )
        sub_B0D97C(0LL);
      if ( ServantEntity__get_IsServantMaterialTd(Entity, 0LL) )
      {
        v25 = System_Collections_Generic_List_WarBoardManager_TaskList___IndexOf(
                (System_Collections_Generic_List_WarBoardManager_TaskList__o *)userSvtEntityList,
                (WarBoardManager_TaskList_o *)current,
                (const MethodInfo_2FC6798 *)Method_System_Collections_Generic_List_UserServantEntity__IndexOf__);
        v28 = (ServantCheckEquipListViewItem_o *)sub_B0D974(ServantCheckEquipListViewItem_TypeInfo, v26, v27);
        ServantCheckEquipListViewItem___ctor(v28, (UserServantEntity_o *)current, v25, 3, 0LL);
        itemList = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v34->fields.itemList;
        if ( !itemList )
          sub_B0D97C(0LL);
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          itemList,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v28,
          (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
      }
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v36,
      (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_UserServantEntity__Dispose__);
    v32 = v34->fields.itemList;
    if ( !v32 || (seed = v34->fields.seed) == 0LL )
      sub_B0D97C(v30);
    ServantCheckEquipListViewManager__SetScrollBarActive(
      v34,
      seed->fields.arrangementVolume.fields.x < (float)v32->fields._size,
      v31);
    ListViewManager__SortItem((ListViewManager_o *)v34, -1, 0, -1, 0LL);
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
  __int64 v23; // x0
  ServantEntity_o *Entity; // x0
  int32_t v25; // w23
  __int64 v26; // x1
  __int64 v27; // x2
  ServantCheckEquipListViewItem_o *v28; // x22
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *itemList; // x0
  __int64 v30; // x0
  const MethodInfo *v31; // x2
  struct System_Collections_Generic_List_ListViewItem__o *v32; // x8
  struct ListViewItemSeed_o *seed; // x9
  ServantCheckEquipListViewManager_o *v34; // [xsp+0h] [xbp-90h]
  System_Collections_Generic_List_Enumerator_T__o v35; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v36; // [xsp+20h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v37; // 0:x0.16

  if ( (byte_4215E7B & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_ServantMaster___, userSvtEntityList);
    sub_B0D8A4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_UserServantEntity__Dispose__, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_UserServantEntity__MoveNext__, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_UserServantEntity__get_Current__, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ListViewItem__Add__, v9);
    sub_B0D8A4(&Method_System_Collections_Generic_List_UserServantEntity__GetEnumerator__, v10);
    sub_B0D8A4(&Method_System_Collections_Generic_List_UserServantEntity__IndexOf__, v11);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v12);
    sub_B0D8A4(&Method_System_Collections_Generic_List_UserServantEntity__get_Count__, v13);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v14);
    sub_B0D8A4(&ServantCheckEquipListViewItem_TypeInfo, v15);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v16);
    byte_4215E7B = 1;
  }
  memset(&v36, 0, sizeof(v36));
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
  if ( userSvtEntityList && userSvtEntityList->fields._size >= 1 )
  {
    v34 = this;
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v35,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)userSvtEntityList,
      (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_UserServantEntity__GetEnumerator__);
    v36 = v35;
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v36,
              (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_UserServantEntity__MoveNext__) )
    {
      current = v36.fields.current;
      Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        sub_B0D97C(0LL);
      MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                             (DataManager_o *)Instance,
                                             (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ServantMaster___);
      if ( !current )
        sub_B0D97C(MasterData_WarQuestSelectionMaster);
      v20 = (DataMasterBase_WarMaster__WarEntity__int__o *)MasterData_WarQuestSelectionMaster;
      klass = current[5].klass;
      monitor = current[5].monitor;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v37.fields.currentCryptoKey = klass;
      *(_QWORD *)&v37.fields.fakeValue = monitor;
      v23 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v37, 0LL);
      if ( !v20 )
        sub_B0D97C(v23);
      Entity = (ServantEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                    v20,
                                    v23,
                                    (const MethodInfo_2669BD4 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
      if ( !Entity )
        sub_B0D97C(0LL);
      if ( ServantEntity__get_IsServant(Entity, 0LL)
        && UserServantEntity__getRarity((UserServantEntity_o *)current, 0LL) == 5 )
      {
        v25 = System_Collections_Generic_List_WarBoardManager_TaskList___IndexOf(
                (System_Collections_Generic_List_WarBoardManager_TaskList__o *)userSvtEntityList,
                (WarBoardManager_TaskList_o *)current,
                (const MethodInfo_2FC6798 *)Method_System_Collections_Generic_List_UserServantEntity__IndexOf__);
        v28 = (ServantCheckEquipListViewItem_o *)sub_B0D974(ServantCheckEquipListViewItem_TypeInfo, v26, v27);
        ServantCheckEquipListViewItem___ctor(v28, (UserServantEntity_o *)current, v25, 2, 0LL);
        itemList = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v34->fields.itemList;
        if ( !itemList )
          sub_B0D97C(0LL);
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          itemList,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v28,
          (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
      }
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v36,
      (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_UserServantEntity__Dispose__);
    v32 = v34->fields.itemList;
    if ( !v32 || (seed = v34->fields.seed) == 0LL )
      sub_B0D97C(v30);
    ServantCheckEquipListViewManager__SetScrollBarActive(
      v34,
      seed->fields.arrangementVolume.fields.x < (float)v32->fields._size,
      v31);
    ListViewManager__SortItem((ListViewManager_o *)v34, -1, 0, -1, 0LL);
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

  if ( (byte_4215E7D & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, *(_QWORD *)&index);
    sub_B0D8A4(&ServantCheckEquipListViewItem_TypeInfo, v5);
    byte_4215E7D = 1;
  }
  itemList = this->fields.itemList;
  if ( !itemList )
    return 0LL;
  if ( itemList->fields._size <= (unsigned int)index )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
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
  __int64 v11; // x1
  __int64 v12; // x2
  UserServantEntity_o *v13; // x19
  CommonUI_o *v14; // x20
  ServantCheckEquipListViewManager___c_c *v15; // x8
  struct ServantCheckEquipListViewManager___c_StaticFields *static_fields; // x9
  ServantStatusDialog_EndDelegate_o *_9__21_0; // x21
  Il2CppObject *v18; // x22
  struct ServantCheckEquipListViewManager___c_StaticFields *v19; // x0
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  ServantCheckEquipListViewManager_o *v26; // x0
  const MethodInfo *v27; // x1

  if ( (byte_4215E81 & 1) == 0 )
  {
    sub_B0D8A4(&ServantStatusDialog_EndDelegate_TypeInfo, obj);
    sub_B0D8A4(&ServantCheckEquipListViewItem_TypeInfo, v4);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    sub_B0D8A4(&SoundManager_TypeInfo, v6);
    sub_B0D8A4(&Method_ServantCheckEquipListViewManager___c__OnClickListView_b__21_0__, v7);
    this = (ServantCheckEquipListViewManager_o *)sub_B0D8A4(&ServantCheckEquipListViewManager___c_TypeInfo, v8);
    byte_4215E81 = 1;
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
      this = (ServantCheckEquipListViewManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v13 = *(UserServantEntity_o **)&linkItem[1].fields.selectNum;
      v14 = (CommonUI_o *)this;
      v15 = ServantCheckEquipListViewManager___c_TypeInfo;
      if ( (BYTE3(ServantCheckEquipListViewManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ServantCheckEquipListViewManager___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantCheckEquipListViewManager___c_TypeInfo);
        v15 = ServantCheckEquipListViewManager___c_TypeInfo;
      }
      static_fields = v15->static_fields;
      _9__21_0 = static_fields->__9__21_0;
      if ( !_9__21_0 )
      {
        if ( (BYTE3(v15->vtable._0_Equals.methodPtr) & 4) != 0 && !v15->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v15);
          static_fields = ServantCheckEquipListViewManager___c_TypeInfo->static_fields;
        }
        v18 = (Il2CppObject *)static_fields->__9;
        _9__21_0 = (ServantStatusDialog_EndDelegate_o *)sub_B0D974(ServantStatusDialog_EndDelegate_TypeInfo, v11, v12);
        ServantStatusDialog_EndDelegate___ctor(
          _9__21_0,
          v18,
          Method_ServantCheckEquipListViewManager___c__OnClickListView_b__21_0__,
          0LL);
        v19 = ServantCheckEquipListViewManager___c_TypeInfo->static_fields;
        v19->__9__21_0 = _9__21_0;
        sub_B0D840(
          (BattleServantConfConponent_o *)&v19->__9__21_0,
          (System_Int32_array **)_9__21_0,
          v20,
          v21,
          v22,
          v23,
          v24,
          v25);
      }
      if ( v14 )
      {
        CommonUI__OpenServantStatusDialog_17027696(v14, 29, v13, _9__21_0, 0LL);
        return;
      }
LABEL_21:
      sub_B0D97C(this);
    }
    v26 = (ServantCheckEquipListViewManager_o *)sub_B0DC70(linkItem);
    ServantCheckEquipListViewManager__SetContentPivot(v26, v27);
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

  if ( (byte_4215E80 & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, method);
    byte_4215E80 = 1;
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
          sub_B0D97C(0LL);
        ((void (__fastcall *)(struct UIScrollView_o *, __int64, Il2CppMethodPointer))v7->klass->vtable._8_UpdateScrollbars.method)(
          v7,
          1LL,
          v7->klass->vtable._9_SetDragAmount.methodPtr);
        callbackFunc2 = this->fields.callbackFunc2;
        this->fields.callbackFunc2 = 0LL;
        sub_B0D840((BattleServantConfConponent_o *)&this->fields.callbackFunc2, 0LL, v9, v10, v11, v12, v13, v14);
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
  int32_t size; // w8
  System_Collections_Generic_List_ServantCheckEquipListViewObject__o *v15; // x21
  int v16; // w24
  __int64 v17; // x25
  unsigned int v18; // w8
  ServantCheckEquipListViewObject_o *v19; // x22
  System_Action_o *v20; // x23
  const MethodInfo *v21; // x3
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  if ( (byte_4215E7F & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, *(_QWORD *)&mode);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ServantCheckEquipListViewObject__get_Count__, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ServantCheckEquipListViewObject__get_Item__, v8);
    sub_B0D8A4(&Method_ServantCheckEquipListViewManager_OnMoveEnd__, v9);
    sub_B0D8A4(&StringLiteral_10060/*"OnMoveEnd"*/, v10);
    byte_4215E7F = 1;
  }
  v11 = ServantCheckEquipListViewManager__get_ObjectList(this, *(const MethodInfo **)&mode);
  if ( !v11 )
    goto LABEL_14;
  size = v11->fields._size;
  v15 = v11;
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
    v16 = v11->fields._size;
    if ( v16 >= 1 )
    {
      v17 = 0LL;
      v18 = v11->fields._size;
      while ( 1 )
      {
        if ( v18 <= (unsigned int)v17 )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
        v19 = v15->fields._items->m_Items[v17];
        v20 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v12, v13);
        System_Action___ctor(v20, (Il2CppObject *)this, Method_ServantCheckEquipListViewManager_OnMoveEnd__, 0LL);
        if ( !v19 )
          break;
        zero = UnityEngine_Vector3__get_zero(0LL);
        ServantCheckEquipListViewObject__Init(
          v19,
          mode,
          v20,
          zero.fields.x,
          *(UnityEngine_Vector3_o *)&zero.fields.y,
          v21);
        if ( (int)v17 + 1 >= v16 )
          return;
        v18 = v15->fields._size;
        ++v17;
      }
LABEL_14:
      sub_B0D97C(v11);
    }
  }
}


void __fastcall ServantCheckEquipListViewManager__SetContentPivot(
        ServantCheckEquipListViewManager_o *this,
        const MethodInfo *method)
{
  ServantCheckEquipListViewManager_o *v2; // x19
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x8
  struct UIScrollView_o *scrollView; // x9

  v2 = this;
  if ( (byte_4215E83 & 1) == 0 )
  {
    this = (ServantCheckEquipListViewManager_o *)sub_B0D8A4(
                                                   &Method_System_Collections_Generic_List_ListViewItem__get_Count__,
                                                   method);
    byte_4215E83 = 1;
  }
  itemList = v2->fields.itemList;
  if ( !itemList || (scrollView = v2->fields.scrollView) == 0LL )
    sub_B0D97C(this);
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
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.callbackFunc2,
    (System_Int32_array **)callback,
    (System_String_array **)callback,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  ServantCheckEquipListViewManager__SetMode_26996976(this, mode, v10);
}


void __fastcall ServantCheckEquipListViewManager__SetMode_26996976(
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
  ServantCheckEquipListViewManager_o *v5; // x20
  __int64 v6; // x10
  int32_t initMode; // w20
  const MethodInfo *v8; // x3
  float v9; // s0
  int v10; // s1
  int32_t v13; // w1

  v5 = this;
  if ( (byte_4215E7E & 1) == 0 )
  {
    this = (ServantCheckEquipListViewManager_o *)sub_B0D8A4(&ServantCheckEquipListViewObject_TypeInfo, obj);
    byte_4215E7E = 1;
  }
  if ( !obj
    || (v6 = *(&ServantCheckEquipListViewObject_TypeInfo->_2.bitflags2 + 1),
        *(&obj->klass->_2.bitflags2 + 1) < (unsigned int)v6)
    || (ServantCheckEquipListViewObject_c *)obj->klass->_2.typeHierarchy[v6 - 1] != ServantCheckEquipListViewObject_TypeInfo )
  {
    sub_B0D97C(this);
  }
  initMode = v5->fields.initMode;
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
  UnityEngine_Component_o *gameObject; // x0

  if ( (byte_4215E82 & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, isActive);
    byte_4215E82 = 1;
  }
  scrollBar = (UnityEngine_Object_o *)this->fields.scrollBar;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality(scrollBar, 0LL, 0LL) )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.scrollBar;
    if ( !gameObject
      || (gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0LL)) == 0LL )
    {
      sub_B0D97C(gameObject);
    }
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, isActive, 0LL);
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

  if ( (byte_4215E74 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, value);
    byte_4215E74 = 1;
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
  v10 = (ServantCheckEquipListViewManager_o *)sub_B0DC70(v7);
  ServantCheckEquipListViewManager__remove_callbackFunc2(v10, v11, v12);
}


System_Collections_Generic_List_ServantCheckEquipListViewObject__o *__fastcall ServantCheckEquipListViewManager__get_ClippingObjectList(
        ServantCheckEquipListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v10; // x20
  EventMissionProgressRequest_Argument_ProgressData_o *Component_srcLineSprite; // x0
  struct System_Collections_Generic_List_GameObject__o *objectList; // x21
  signed __int64 size; // x22
  unsigned __int64 v14; // x23
  UnityEngine_Object_o *v15; // x21
  const MethodInfo *v16; // x1
  EventMissionProgressRequest_Argument_ProgressData_o *v17; // x21

  if ( (byte_4215E77 & 1) == 0 )
  {
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_ServantCheckEquipListViewObject___, method);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ServantCheckEquipListViewObject__Add__, v4);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ServantCheckEquipListViewObject___ctor__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_GameObject__get_Count__, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_GameObject__get_Item__, v7);
    sub_B0D8A4(&System_Collections_Generic_List_ServantCheckEquipListViewObject__TypeInfo, v8);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v9);
    byte_4215E77 = 1;
  }
  v10 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_ServantCheckEquipListViewObject__TypeInfo,
                                                                                                  method,
                                                                                                  v2);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v10,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_ServantCheckEquipListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    goto LABEL_21;
  size = objectList->fields._size;
  if ( (int)size >= 1 )
  {
    v14 = 0LL;
    do
    {
      if ( v14 >= (unsigned int)objectList->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
      v15 = (UnityEngine_Object_o *)objectList->fields._items->m_Items[v14];
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      Component_srcLineSprite = (EventMissionProgressRequest_Argument_ProgressData_o *)UnityEngine_Object__op_Equality(
                                                                                         v15,
                                                                                         0LL,
                                                                                         0LL);
      if ( ((unsigned __int8)Component_srcLineSprite & 1) == 0 )
      {
        if ( !v15 )
          break;
        Component_srcLineSprite = (EventMissionProgressRequest_Argument_ProgressData_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                                           (UnityEngine_GameObject_o *)v15,
                                                                                           (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_ServantCheckEquipListViewObject___);
        if ( !Component_srcLineSprite )
          break;
        v17 = Component_srcLineSprite;
        Component_srcLineSprite = (EventMissionProgressRequest_Argument_ProgressData_o *)ServantCheckEquipListViewObject__GetItem(
                                                                                           (ServantCheckEquipListViewObject_o *)Component_srcLineSprite,
                                                                                           v16);
        if ( !Component_srcLineSprite )
          break;
        if ( !LOBYTE(Component_srcLineSprite[2].monitor)
          || (Component_srcLineSprite = (EventMissionProgressRequest_Argument_ProgressData_o *)ListViewManager__ClippingItem_23719204(
                                                                                                 (ListViewManager_o *)this,
                                                                                                 (ListViewItem_o *)Component_srcLineSprite,
                                                                                                 0LL),
              ((unsigned __int8)Component_srcLineSprite & 1) != 0) )
        {
          if ( !v10 )
            break;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v10,
            v17,
            (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_ServantCheckEquipListViewObject__Add__);
        }
      }
      if ( (__int64)++v14 >= size )
        return (System_Collections_Generic_List_ServantCheckEquipListViewObject__o *)v10;
      objectList = this->fields.objectList;
    }
    while ( objectList );
LABEL_21:
    sub_B0D97C(Component_srcLineSprite);
  }
  return (System_Collections_Generic_List_ServantCheckEquipListViewObject__o *)v10;
}


System_Collections_Generic_List_ServantCheckEquipListViewObject__o *__fastcall ServantCheckEquipListViewManager__get_ObjectList(
        ServantCheckEquipListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v10; // x20
  srcLineSprite_o *Component_srcLineSprite; // x0
  struct System_Collections_Generic_List_GameObject__o *objectList; // x21
  signed __int64 size; // x22
  unsigned __int64 v14; // x23
  UnityEngine_Object_o *v15; // x21

  if ( (byte_4215E76 & 1) == 0 )
  {
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_ServantCheckEquipListViewObject___, method);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ServantCheckEquipListViewObject__Add__, v4);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ServantCheckEquipListViewObject___ctor__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_GameObject__get_Count__, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_GameObject__get_Item__, v7);
    sub_B0D8A4(&System_Collections_Generic_List_ServantCheckEquipListViewObject__TypeInfo, v8);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v9);
    byte_4215E76 = 1;
  }
  v10 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_ServantCheckEquipListViewObject__TypeInfo,
                                                                                                  method,
                                                                                                  v2);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v10,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_ServantCheckEquipListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    goto LABEL_17;
  size = objectList->fields._size;
  if ( (int)size >= 1 )
  {
    v14 = 0LL;
    do
    {
      if ( v14 >= (unsigned int)objectList->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
      v15 = (UnityEngine_Object_o *)objectList->fields._items->m_Items[v14];
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      Component_srcLineSprite = (srcLineSprite_o *)UnityEngine_Object__op_Equality(v15, 0LL, 0LL);
      if ( ((unsigned __int8)Component_srcLineSprite & 1) == 0 )
      {
        if ( !v15 )
          break;
        Component_srcLineSprite = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                    (UnityEngine_GameObject_o *)v15,
                                    (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_ServantCheckEquipListViewObject___);
        if ( !v10 )
          break;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v10,
          (EventMissionProgressRequest_Argument_ProgressData_o *)Component_srcLineSprite,
          (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_ServantCheckEquipListViewObject__Add__);
      }
      if ( (__int64)++v14 >= size )
        return (System_Collections_Generic_List_ServantCheckEquipListViewObject__o *)v10;
      objectList = this->fields.objectList;
    }
    while ( objectList );
LABEL_17:
    sub_B0D97C(Component_srcLineSprite);
  }
  return (System_Collections_Generic_List_ServantCheckEquipListViewObject__o *)v10;
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

  if ( (byte_4215E75 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, value);
    byte_4215E75 = 1;
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
  v10 = (ServantCheckEquipListViewManager_o *)sub_B0DC70(v7);
  ServantCheckEquipListViewManager__get_ObjectList(v10, v11);
}


void __fastcall ServantCheckEquipListViewManager___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  Il2CppObject *v3; // x19
  struct ServantCheckEquipListViewManager___c_StaticFields *static_fields; // x0

  if ( (byte_4212211 & 1) == 0 )
  {
    sub_B0D8A4(&ServantCheckEquipListViewManager___c_TypeInfo, v1);
    byte_4212211 = 1;
  }
  v3 = (Il2CppObject *)sub_B0D974(ServantCheckEquipListViewManager___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  static_fields = ServantCheckEquipListViewManager___c_TypeInfo->static_fields;
  static_fields->__9 = (struct ServantCheckEquipListViewManager___c_o *)v3;
  sub_B0D840(static_fields, v3);
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

  if ( (byte_4212212 & 1) == 0 )
  {
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, isDecide);
    byte_4212212 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B0D97C(0LL);
  CommonUI__CloseServantStatusDialog(Instance, 0LL, 0LL);
}