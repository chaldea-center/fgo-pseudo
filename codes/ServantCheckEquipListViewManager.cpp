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
  Il2CppObject *current; // x21
  int32_t v6; // w23
  ServantCheckEquipListViewItem_o *v7; // x22
  const MethodInfo *v8; // x4
  __int64 v9; // x1
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x0
  __int64 v11; // x0
  __int64 v12; // x1
  const MethodInfo *v13; // x2
  struct System_Collections_Generic_List_ListViewItem__o *v14; // x8
  struct ListViewItemSeed_o *seed; // x9
  System_Collections_Generic_List_Enumerator_T__o v16; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v17; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_42B11DE & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_UserServantEntity__Dispose__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_UserServantEntity__MoveNext__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_UserServantEntity__get_Current__);
    sub_B52984(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_UserServantEntity__GetEnumerator__);
    sub_B52984(&Method_System_Collections_Generic_List_UserServantEntity__IndexOf__);
    sub_B52984(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_B52984(&Method_System_Collections_Generic_List_UserServantEntity__get_Count__);
    sub_B52984(&ServantCheckEquipListViewItem_TypeInfo);
    byte_42B11DE = 1;
  }
  memset(&v17, 0, sizeof(v17));
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
  if ( userSvtEntityList && userSvtEntityList->fields._size >= 1 )
  {
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v16,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)userSvtEntityList,
      (const MethodInfo_2FF2480 *)Method_System_Collections_Generic_List_UserServantEntity__GetEnumerator__);
    v17 = v16;
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v17,
              (const MethodInfo_201195C *)Method_System_Collections_Generic_List_Enumerator_UserServantEntity__MoveNext__) )
    {
      current = v17.fields.current;
      if ( NpCombineControl__CheckConfirm_25808324((UserServantEntity_o *)v17.fields.current, 0LL) )
      {
        v6 = System_Collections_Generic_List_WarBoardManager_TaskList___IndexOf(
               (System_Collections_Generic_List_WarBoardManager_TaskList__o *)userSvtEntityList,
               (WarBoardManager_TaskList_o *)current,
               (const MethodInfo_2FF26B4 *)Method_System_Collections_Generic_List_UserServantEntity__IndexOf__);
        v7 = (ServantCheckEquipListViewItem_o *)sub_B52A54(ServantCheckEquipListViewItem_TypeInfo);
        ServantCheckEquipListViewItem___ctor(v7, (UserServantEntity_o *)current, v6, 1, v8);
        itemList = this->fields.itemList;
        if ( !itemList )
          sub_B52A5C(0LL, v9);
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)itemList,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v7,
          (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
      }
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v17,
      (const MethodInfo_2011958 *)Method_System_Collections_Generic_List_Enumerator_UserServantEntity__Dispose__);
    v14 = this->fields.itemList;
    if ( !v14 || (seed = this->fields.seed) == 0LL )
      sub_B52A5C(v11, v12);
    ServantCheckEquipListViewManager__SetScrollBarActive(
      this,
      seed->fields.arrangementVolume.fields.x < (float)v14->fields._size,
      v13);
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
  }
}


void __fastcall ServantCheckEquipListViewManager__CreateList(
        ServantCheckEquipListViewManager_o *this,
        System_Collections_Generic_List_SvtEqCombineListViewItem__o *materialList,
        const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v5; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x2
  int32_t size; // w25
  __int64 v9; // x26
  struct System_Collections_Generic_List_ListViewItem__o **p_itemList; // x24
  unsigned int v11; // w8
  SvtEqCombineListViewItem_o *v12; // x8
  UserServantEntity_o *userSvtEntity; // x22
  int32_t selectNum; // w23
  ServantCheckEquipListViewItem_o *v15; // x21
  const MethodInfo *v16; // x4
  struct ListViewItemSeed_o *seed; // x9

  if ( (byte_42B11DC & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_SvtEqCombineListViewItem__get_Count__);
    sub_B52984(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_B52984(&Method_System_Collections_Generic_List_SvtEqCombineListViewItem__get_Item__);
    sub_B52984(&ServantCheckEquipListViewItem_TypeInfo);
    byte_42B11DC = 1;
  }
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
  if ( !materialList )
    goto LABEL_20;
  size = materialList->fields._size;
  if ( size > 0 )
  {
    v9 = 0LL;
    p_itemList = &this->fields.itemList;
    v11 = materialList->fields._size;
    while ( 1 )
    {
      if ( v11 <= (unsigned int)v9 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
      v12 = materialList->fields._items->m_Items[v9];
      if ( !v12 )
        goto LABEL_20;
      if ( v12->fields.isEquiped || v12->fields.isUseSupportEquip )
      {
        userSvtEntity = v12->fields.userSvtEntity;
        selectNum = v12->fields.selectNum;
        v15 = (ServantCheckEquipListViewItem_o *)sub_B52A54(ServantCheckEquipListViewItem_TypeInfo);
        ServantCheckEquipListViewItem___ctor(v15, userSvtEntity, selectNum, 0, v16);
        v5 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)*p_itemList;
        if ( !*p_itemList )
          goto LABEL_20;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v5,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v15,
          (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
      }
      if ( (int)v9 + 1 >= size )
        goto LABEL_17;
      v11 = materialList->fields._size;
      ++v9;
    }
  }
  p_itemList = &this->fields.itemList;
LABEL_17:
  if ( !*p_itemList || (seed = this->fields.seed) == 0LL )
LABEL_20:
    sub_B52A5C(v5, v6);
  ServantCheckEquipListViewManager__SetScrollBarActive(
    this,
    seed->fields.arrangementVolume.fields.x < (float)(*p_itemList)->fields._size,
    v7);
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
}


void __fastcall ServantCheckEquipListViewManager__CreateList_27161096(
        ServantCheckEquipListViewManager_o *this,
        System_Collections_Generic_List_ServantOperationListViewItem__o *materialList,
        const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *IsServantEquip; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x2
  int32_t size; // w25
  __int64 v9; // x26
  struct System_Collections_Generic_List_ListViewItem__o **p_itemList; // x24
  unsigned int v11; // w8
  Il2CppClass **v12; // x8
  Il2CppClass *v13; // x21
  UserServantEntity_o *interopData; // x22
  int32_t name; // w23
  ServantCheckEquipListViewItem_o *v16; // x21
  const MethodInfo *v17; // x4
  struct ListViewItemSeed_o *seed; // x9

  if ( (byte_42B11DD & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_B52984(&Method_System_Collections_Generic_List_ServantOperationListViewItem__get_Count__);
    sub_B52984(&Method_System_Collections_Generic_List_ServantOperationListViewItem__get_Item__);
    sub_B52984(&ServantCheckEquipListViewItem_TypeInfo);
    byte_42B11DD = 1;
  }
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
  if ( !materialList )
    goto LABEL_21;
  size = materialList->fields._size;
  if ( size > 0 )
  {
    v9 = 0LL;
    p_itemList = &this->fields.itemList;
    v11 = materialList->fields._size;
    while ( 1 )
    {
      if ( v11 <= (unsigned int)v9 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
      v12 = &materialList->fields._items->obj.klass + v9;
      v13 = v12[4];
      if ( !v13 )
        goto LABEL_21;
      IsServantEquip = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)ServantOperationListViewItem__get_IsServantEquip((ServantOperationListViewItem_o *)v12[4], 0LL);
      if ( ((unsigned __int8)IsServantEquip & 1) != 0 && (BYTE4(v13->static_fields) || BYTE6(v13->static_fields)) )
      {
        interopData = (UserServantEntity_o *)v13->_1.interopData;
        name = (int32_t)v13->_1.name;
        v16 = (ServantCheckEquipListViewItem_o *)sub_B52A54(ServantCheckEquipListViewItem_TypeInfo);
        ServantCheckEquipListViewItem___ctor(v16, interopData, name, 0, v17);
        IsServantEquip = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)*p_itemList;
        if ( !*p_itemList )
          goto LABEL_21;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          IsServantEquip,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v16,
          (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
      }
      if ( (int)v9 + 1 >= size )
        goto LABEL_18;
      v11 = materialList->fields._size;
      ++v9;
    }
  }
  p_itemList = &this->fields.itemList;
LABEL_18:
  if ( !*p_itemList || (seed = this->fields.seed) == 0LL )
LABEL_21:
    sub_B52A5C(IsServantEquip, v6);
  ServantCheckEquipListViewManager__SetScrollBarActive(
    this,
    seed->fields.arrangementVolume.fields.x < (float)(*p_itemList)->fields._size,
    v7);
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
}


void __fastcall ServantCheckEquipListViewManager__CreateMaterialTdServantList(
        ServantCheckEquipListViewManager_o *this,
        System_Collections_Generic_List_UserServantEntity__o *userSvtEntityList,
        const MethodInfo *method)
{
  Il2CppObject *current; // x21
  WebViewManager_o *Instance; // x0
  __int64 v7; // x1
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v9; // x1
  DataMasterBase_WarMaster__WarEntity__int__o *v10; // x22
  void *monitor; // x23
  Il2CppClass *klass; // x24
  __int64 v13; // x0
  ServantEntity_o *Entity; // x0
  __int64 v15; // x1
  int32_t v16; // w23
  ServantCheckEquipListViewItem_o *v17; // x22
  const MethodInfo *v18; // x4
  __int64 v19; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *itemList; // x0
  __int64 v21; // x0
  __int64 v22; // x1
  const MethodInfo *v23; // x2
  struct System_Collections_Generic_List_ListViewItem__o *v24; // x8
  struct ListViewItemSeed_o *seed; // x9
  ServantCheckEquipListViewManager_o *v26; // [xsp+0h] [xbp-90h]
  System_Collections_Generic_List_Enumerator_T__o v27; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v28; // [xsp+20h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v29; // 0:x0.16

  if ( (byte_42B11E0 & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_B52984(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_UserServantEntity__Dispose__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_UserServantEntity__MoveNext__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_UserServantEntity__get_Current__);
    sub_B52984(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_UserServantEntity__GetEnumerator__);
    sub_B52984(&Method_System_Collections_Generic_List_UserServantEntity__IndexOf__);
    sub_B52984(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_B52984(&Method_System_Collections_Generic_List_UserServantEntity__get_Count__);
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B52984(&ServantCheckEquipListViewItem_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_42B11E0 = 1;
  }
  memset(&v28, 0, sizeof(v28));
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
  if ( userSvtEntityList && userSvtEntityList->fields._size >= 1 )
  {
    v26 = this;
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v27,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)userSvtEntityList,
      (const MethodInfo_2FF2480 *)Method_System_Collections_Generic_List_UserServantEntity__GetEnumerator__);
    v28 = v27;
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v28,
              (const MethodInfo_201195C *)Method_System_Collections_Generic_List_Enumerator_UserServantEntity__MoveNext__) )
    {
      current = v28.fields.current;
      Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        sub_B52A5C(0LL, v7);
      MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                             (DataManager_o *)Instance,
                                             (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_ServantMaster___);
      if ( !current )
        sub_B52A5C(MasterData_WarQuestSelectionMaster, v9);
      v10 = (DataMasterBase_WarMaster__WarEntity__int__o *)MasterData_WarQuestSelectionMaster;
      klass = current[5].klass;
      monitor = current[5].monitor;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v29.fields.currentCryptoKey = klass;
      *(_QWORD *)&v29.fields.fakeValue = monitor;
      v13 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v29, 0LL);
      if ( !v10 )
        sub_B52A5C(v13, (unsigned int)v13);
      Entity = (ServantEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                    v10,
                                    v13,
                                    (const MethodInfo_23E22D8 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
      if ( !Entity )
        sub_B52A5C(0LL, v15);
      if ( ServantEntity__get_IsServantMaterialTd(Entity, 0LL) )
      {
        v16 = System_Collections_Generic_List_WarBoardManager_TaskList___IndexOf(
                (System_Collections_Generic_List_WarBoardManager_TaskList__o *)userSvtEntityList,
                (WarBoardManager_TaskList_o *)current,
                (const MethodInfo_2FF26B4 *)Method_System_Collections_Generic_List_UserServantEntity__IndexOf__);
        v17 = (ServantCheckEquipListViewItem_o *)sub_B52A54(ServantCheckEquipListViewItem_TypeInfo);
        ServantCheckEquipListViewItem___ctor(v17, (UserServantEntity_o *)current, v16, 3, v18);
        itemList = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v26->fields.itemList;
        if ( !itemList )
          sub_B52A5C(0LL, v19);
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          itemList,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v17,
          (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
      }
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v28,
      (const MethodInfo_2011958 *)Method_System_Collections_Generic_List_Enumerator_UserServantEntity__Dispose__);
    v24 = v26->fields.itemList;
    if ( !v24 || (seed = v26->fields.seed) == 0LL )
      sub_B52A5C(v21, v22);
    ServantCheckEquipListViewManager__SetScrollBarActive(
      v26,
      seed->fields.arrangementVolume.fields.x < (float)v24->fields._size,
      v23);
    ListViewManager__SortItem((ListViewManager_o *)v26, -1, 0, -1, 0LL);
  }
}


void __fastcall ServantCheckEquipListViewManager__CreateSSRareServantList(
        ServantCheckEquipListViewManager_o *this,
        System_Collections_Generic_List_UserServantEntity__o *userSvtEntityList,
        const MethodInfo *method)
{
  Il2CppObject *current; // x21
  WebViewManager_o *Instance; // x0
  __int64 v7; // x1
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v9; // x1
  DataMasterBase_WarMaster__WarEntity__int__o *v10; // x22
  void *monitor; // x23
  Il2CppClass *klass; // x24
  __int64 v13; // x0
  ServantEntity_o *Entity; // x0
  __int64 v15; // x1
  int32_t v16; // w23
  ServantCheckEquipListViewItem_o *v17; // x22
  const MethodInfo *v18; // x4
  __int64 v19; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *itemList; // x0
  __int64 v21; // x0
  __int64 v22; // x1
  const MethodInfo *v23; // x2
  struct System_Collections_Generic_List_ListViewItem__o *v24; // x8
  struct ListViewItemSeed_o *seed; // x9
  ServantCheckEquipListViewManager_o *v26; // [xsp+0h] [xbp-90h]
  System_Collections_Generic_List_Enumerator_T__o v27; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v28; // [xsp+20h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v29; // 0:x0.16

  if ( (byte_42B11DF & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_B52984(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_UserServantEntity__Dispose__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_UserServantEntity__MoveNext__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_UserServantEntity__get_Current__);
    sub_B52984(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_UserServantEntity__GetEnumerator__);
    sub_B52984(&Method_System_Collections_Generic_List_UserServantEntity__IndexOf__);
    sub_B52984(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_B52984(&Method_System_Collections_Generic_List_UserServantEntity__get_Count__);
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B52984(&ServantCheckEquipListViewItem_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_42B11DF = 1;
  }
  memset(&v28, 0, sizeof(v28));
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
  if ( userSvtEntityList && userSvtEntityList->fields._size >= 1 )
  {
    v26 = this;
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v27,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)userSvtEntityList,
      (const MethodInfo_2FF2480 *)Method_System_Collections_Generic_List_UserServantEntity__GetEnumerator__);
    v28 = v27;
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v28,
              (const MethodInfo_201195C *)Method_System_Collections_Generic_List_Enumerator_UserServantEntity__MoveNext__) )
    {
      current = v28.fields.current;
      Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        sub_B52A5C(0LL, v7);
      MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                             (DataManager_o *)Instance,
                                             (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_ServantMaster___);
      if ( !current )
        sub_B52A5C(MasterData_WarQuestSelectionMaster, v9);
      v10 = (DataMasterBase_WarMaster__WarEntity__int__o *)MasterData_WarQuestSelectionMaster;
      klass = current[5].klass;
      monitor = current[5].monitor;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v29.fields.currentCryptoKey = klass;
      *(_QWORD *)&v29.fields.fakeValue = monitor;
      v13 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v29, 0LL);
      if ( !v10 )
        sub_B52A5C(v13, (unsigned int)v13);
      Entity = (ServantEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                    v10,
                                    v13,
                                    (const MethodInfo_23E22D8 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
      if ( !Entity )
        sub_B52A5C(0LL, v15);
      if ( ServantEntity__get_IsServant(Entity, 0LL)
        && UserServantEntity__getRarity((UserServantEntity_o *)current, 0LL) == 5 )
      {
        v16 = System_Collections_Generic_List_WarBoardManager_TaskList___IndexOf(
                (System_Collections_Generic_List_WarBoardManager_TaskList__o *)userSvtEntityList,
                (WarBoardManager_TaskList_o *)current,
                (const MethodInfo_2FF26B4 *)Method_System_Collections_Generic_List_UserServantEntity__IndexOf__);
        v17 = (ServantCheckEquipListViewItem_o *)sub_B52A54(ServantCheckEquipListViewItem_TypeInfo);
        ServantCheckEquipListViewItem___ctor(v17, (UserServantEntity_o *)current, v16, 2, v18);
        itemList = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v26->fields.itemList;
        if ( !itemList )
          sub_B52A5C(0LL, v19);
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          itemList,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v17,
          (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
      }
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v28,
      (const MethodInfo_2011958 *)Method_System_Collections_Generic_List_Enumerator_UserServantEntity__Dispose__);
    v24 = v26->fields.itemList;
    if ( !v24 || (seed = v26->fields.seed) == 0LL )
      sub_B52A5C(v21, v22);
    ServantCheckEquipListViewManager__SetScrollBarActive(
      v26,
      seed->fields.arrangementVolume.fields.x < (float)v24->fields._size,
      v23);
    ListViewManager__SortItem((ListViewManager_o *)v26, -1, 0, -1, 0LL);
  }
}


ServantCheckEquipListViewItem_o *__fastcall ServantCheckEquipListViewManager__GetItem(
        ServantCheckEquipListViewManager_o *this,
        int32_t index,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x20
  ListViewItem_o *v6; // x8
  __int64 v7; // x11

  if ( (byte_42B11E1 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_B52984(&ServantCheckEquipListViewItem_TypeInfo);
    byte_42B11E1 = 1;
  }
  itemList = this->fields.itemList;
  if ( !itemList )
    return 0LL;
  if ( itemList->fields._size <= (unsigned int)index )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
  v6 = itemList->fields._items->m_Items[index];
  if ( !v6 )
    return 0LL;
  v7 = *(&ServantCheckEquipListViewItem_TypeInfo->_2.bitflags2 + 1);
  if ( *(&v6->klass->_2.bitflags2 + 1) < (unsigned int)v7 )
    return 0LL;
  if ( (ServantCheckEquipListViewItem_c *)v6->klass->_2.typeHierarchy[v7 - 1] == ServantCheckEquipListViewItem_TypeInfo )
    return (ServantCheckEquipListViewItem_o *)itemList->fields._items->m_Items[index];
  return 0LL;
}


void __fastcall ServantCheckEquipListViewManager__OnClickListView(
        ServantCheckEquipListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  struct ListViewItem_o *linkItem; // x19
  __int64 v5; // x9
  UserServantEntity_o *v6; // x19
  CommonUI_o *v7; // x20
  ServantCheckEquipListViewManager___c_c *v8; // x8
  struct ServantCheckEquipListViewManager___c_StaticFields *static_fields; // x9
  ServantStatusDialog_EndDelegate_o *_9__21_0; // x21
  Il2CppObject *v11; // x22
  struct ServantCheckEquipListViewManager___c_StaticFields *v12; // x0
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  ServantCheckEquipListViewManager_o *v19; // x0
  const MethodInfo *v20; // x1

  if ( (byte_42B11E5 & 1) == 0 )
  {
    sub_B52984(&ServantStatusDialog_EndDelegate_TypeInfo);
    sub_B52984(&ServantCheckEquipListViewItem_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B52984(&SoundManager_TypeInfo);
    sub_B52984(&Method_ServantCheckEquipListViewManager___c__OnClickListView_b__21_0__);
    this = (ServantCheckEquipListViewManager_o *)sub_B52984(&ServantCheckEquipListViewManager___c_TypeInfo);
    byte_42B11E5 = 1;
  }
  if ( !obj )
    goto LABEL_21;
  linkItem = obj->fields.linkItem;
  if ( linkItem )
  {
    v5 = *(&ServantCheckEquipListViewItem_TypeInfo->_2.bitflags2 + 1);
    if ( *(&linkItem->klass->_2.bitflags2 + 1) >= (unsigned int)v5
      && (ServantCheckEquipListViewItem_c *)linkItem->klass->_2.typeHierarchy[v5 - 1] == ServantCheckEquipListViewItem_TypeInfo )
    {
      if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SoundManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      }
      SoundManager__playSystemSe(0, 0LL);
      this = (ServantCheckEquipListViewManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v6 = *(UserServantEntity_o **)&linkItem[1].fields.selectNum;
      v7 = (CommonUI_o *)this;
      v8 = ServantCheckEquipListViewManager___c_TypeInfo;
      if ( (BYTE3(ServantCheckEquipListViewManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ServantCheckEquipListViewManager___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantCheckEquipListViewManager___c_TypeInfo);
        v8 = ServantCheckEquipListViewManager___c_TypeInfo;
      }
      static_fields = v8->static_fields;
      _9__21_0 = static_fields->__9__21_0;
      if ( !_9__21_0 )
      {
        if ( (BYTE3(v8->vtable._0_Equals.methodPtr) & 4) != 0 && !v8->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v8);
          static_fields = ServantCheckEquipListViewManager___c_TypeInfo->static_fields;
        }
        v11 = (Il2CppObject *)static_fields->__9;
        _9__21_0 = (ServantStatusDialog_EndDelegate_o *)sub_B52A54(ServantStatusDialog_EndDelegate_TypeInfo);
        ServantStatusDialog_EndDelegate___ctor(
          _9__21_0,
          v11,
          Method_ServantCheckEquipListViewManager___c__OnClickListView_b__21_0__,
          0LL);
        v12 = ServantCheckEquipListViewManager___c_TypeInfo->static_fields;
        v12->__9__21_0 = _9__21_0;
        sub_B52920(
          (BattleServantConfConponent_o *)&v12->__9__21_0,
          (System_Int32_array **)_9__21_0,
          v13,
          v14,
          v15,
          v16,
          v17,
          v18);
      }
      if ( v7 )
      {
        CommonUI__OpenServantStatusDialog_18168948(v7, 29, v6, _9__21_0, 0LL);
        return;
      }
LABEL_21:
      sub_B52A5C(this, obj);
    }
    v19 = (ServantCheckEquipListViewManager_o *)sub_B52D50(linkItem);
    ServantCheckEquipListViewManager__SetContentPivot(v19, v20);
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
  __int64 v7; // x1
  struct UIScrollView_o *v8; // x0
  System_Action_o *callbackFunc2; // x20
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7

  if ( (byte_42B11E4 & 1) == 0 )
  {
    sub_B52984(&UnityEngine_Object_TypeInfo);
    byte_42B11E4 = 1;
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
        v8 = this->fields.scrollView;
        if ( !v8 )
          sub_B52A5C(0LL, v7);
        ((void (__fastcall *)(struct UIScrollView_o *, __int64, Il2CppMethodPointer))v8->klass->vtable._8_UpdateScrollbars.method)(
          v8,
          1LL,
          v8->klass->vtable._9_SetDragAmount.methodPtr);
        callbackFunc2 = this->fields.callbackFunc2;
        this->fields.callbackFunc2 = 0LL;
        sub_B52920((BattleServantConfConponent_o *)&this->fields.callbackFunc2, 0LL, v10, v11, v12, v13, v14, v15);
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
  System_Collections_Generic_List_ServantCheckEquipListViewObject__o *v7; // x0
  __int64 v8; // x1
  int32_t size; // w8
  System_Collections_Generic_List_ServantCheckEquipListViewObject__o *v10; // x21
  int v11; // w24
  __int64 v12; // x25
  unsigned int v13; // w8
  ServantCheckEquipListViewObject_o *v14; // x22
  System_Action_o *v15; // x23
  const MethodInfo *v16; // x3
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  if ( (byte_42B11E3 & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_ServantCheckEquipListViewObject__get_Count__);
    sub_B52984(&Method_System_Collections_Generic_List_ServantCheckEquipListViewObject__get_Item__);
    sub_B52984(&Method_ServantCheckEquipListViewManager_OnMoveEnd__);
    sub_B52984(&StringLiteral_10100/*"OnMoveEnd"*/);
    byte_42B11E3 = 1;
  }
  v7 = ServantCheckEquipListViewManager__get_ObjectList(this, *(const MethodInfo **)&mode);
  if ( !v7 )
    goto LABEL_14;
  size = v7->fields._size;
  v10 = v7;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10100/*"OnMoveEnd"*/,
      delay,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    v11 = v7->fields._size;
    if ( v11 >= 1 )
    {
      v12 = 0LL;
      v13 = v7->fields._size;
      while ( 1 )
      {
        if ( v13 <= (unsigned int)v12 )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
        v14 = v10->fields._items->m_Items[v12];
        v15 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
        System_Action___ctor(v15, (Il2CppObject *)this, Method_ServantCheckEquipListViewManager_OnMoveEnd__, 0LL);
        if ( !v14 )
          break;
        zero = UnityEngine_Vector3__get_zero(0LL);
        ServantCheckEquipListViewObject__Init(
          v14,
          mode,
          v15,
          zero.fields.x,
          *(UnityEngine_Vector3_o *)&zero.fields.y,
          v16);
        if ( (int)v12 + 1 >= v11 )
          return;
        v13 = v10->fields._size;
        ++v12;
      }
LABEL_14:
      sub_B52A5C(v7, v8);
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
  if ( (byte_42B11E7 & 1) == 0 )
  {
    this = (ServantCheckEquipListViewManager_o *)sub_B52984(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    byte_42B11E7 = 1;
  }
  itemList = v2->fields.itemList;
  if ( !itemList || (scrollView = v2->fields.scrollView) == 0LL )
    sub_B52A5C(this, method);
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
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.callbackFunc2,
    (System_Int32_array **)callback,
    (System_String_array **)callback,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  ServantCheckEquipListViewManager__SetMode_27164272(this, mode, v10);
}


void __fastcall ServantCheckEquipListViewManager__SetMode_27164272(
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
  if ( (byte_42B11E2 & 1) == 0 )
  {
    this = (ServantCheckEquipListViewManager_o *)sub_B52984(&ServantCheckEquipListViewObject_TypeInfo);
    byte_42B11E2 = 1;
  }
  if ( !obj
    || (v6 = *(&ServantCheckEquipListViewObject_TypeInfo->_2.bitflags2 + 1),
        *(&obj->klass->_2.bitflags2 + 1) < (unsigned int)v6)
    || (ServantCheckEquipListViewObject_c *)obj->klass->_2.typeHierarchy[v6 - 1] != ServantCheckEquipListViewObject_TypeInfo )
  {
    sub_B52A5C(this, obj);
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


void __fastcall ServantCheckEquipListViewManager__SetScrollBarActive(
        ServantCheckEquipListViewManager_o *this,
        bool isActive,
        const MethodInfo *method)
{
  UnityEngine_Object_o *scrollBar; // x21
  __int64 v6; // x1
  UnityEngine_Component_o *gameObject; // x0

  if ( (byte_42B11E6 & 1) == 0 )
  {
    sub_B52984(&UnityEngine_Object_TypeInfo);
    byte_42B11E6 = 1;
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
      sub_B52A5C(gameObject, v6);
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

  if ( (byte_42B11D8 & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    byte_42B11D8 = 1;
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
    v8 = sub_B4739C(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (ServantCheckEquipListViewManager_o *)sub_B52D50(v7);
  ServantCheckEquipListViewManager__remove_callbackFunc2(v10, v11, v12);
}


System_Collections_Generic_List_ServantCheckEquipListViewObject__o *__fastcall ServantCheckEquipListViewManager__get_ClippingObjectList(
        ServantCheckEquipListViewManager_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v3; // x20
  EventMissionProgressRequest_Argument_ProgressData_o *Component_srcLineSprite; // x0
  const MethodInfo *v5; // x1
  struct System_Collections_Generic_List_GameObject__o *objectList; // x21
  signed __int64 size; // x22
  unsigned __int64 v8; // x23
  UnityEngine_Object_o *v9; // x21
  EventMissionProgressRequest_Argument_ProgressData_o *v10; // x21

  if ( (byte_42B11DB & 1) == 0 )
  {
    sub_B52984(&Method_UnityEngine_GameObject_GetComponent_ServantCheckEquipListViewObject___);
    sub_B52984(&Method_System_Collections_Generic_List_ServantCheckEquipListViewObject__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_ServantCheckEquipListViewObject___ctor__);
    sub_B52984(&Method_System_Collections_Generic_List_GameObject__get_Count__);
    sub_B52984(&Method_System_Collections_Generic_List_GameObject__get_Item__);
    sub_B52984(&System_Collections_Generic_List_ServantCheckEquipListViewObject__TypeInfo);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    byte_42B11DB = 1;
  }
  v3 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_ServantCheckEquipListViewObject__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v3,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_ServantCheckEquipListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    goto LABEL_21;
  size = objectList->fields._size;
  if ( (int)size >= 1 )
  {
    v8 = 0LL;
    do
    {
      if ( v8 >= (unsigned int)objectList->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
      v9 = (UnityEngine_Object_o *)objectList->fields._items->m_Items[v8];
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      Component_srcLineSprite = (EventMissionProgressRequest_Argument_ProgressData_o *)UnityEngine_Object__op_Equality(
                                                                                         v9,
                                                                                         0LL,
                                                                                         0LL);
      if ( ((unsigned __int8)Component_srcLineSprite & 1) == 0 )
      {
        if ( !v9 )
          break;
        Component_srcLineSprite = (EventMissionProgressRequest_Argument_ProgressData_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                                           (UnityEngine_GameObject_o *)v9,
                                                                                           (const MethodInfo_1B7B1B8 *)Method_UnityEngine_GameObject_GetComponent_ServantCheckEquipListViewObject___);
        if ( !Component_srcLineSprite )
          break;
        v10 = Component_srcLineSprite;
        Component_srcLineSprite = (EventMissionProgressRequest_Argument_ProgressData_o *)ServantCheckEquipListViewObject__GetItem(
                                                                                           (ServantCheckEquipListViewObject_o *)Component_srcLineSprite,
                                                                                           v5);
        if ( !Component_srcLineSprite )
          break;
        v5 = (const MethodInfo *)Component_srcLineSprite;
        if ( !LOBYTE(Component_srcLineSprite[2].monitor)
          || (Component_srcLineSprite = (EventMissionProgressRequest_Argument_ProgressData_o *)ListViewManager__ClippingItem_23551160(
                                                                                                 (ListViewManager_o *)this,
                                                                                                 (ListViewItem_o *)Component_srcLineSprite,
                                                                                                 0LL),
              ((unsigned __int8)Component_srcLineSprite & 1) != 0) )
        {
          if ( !v3 )
            break;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v3,
            v10,
            (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_ServantCheckEquipListViewObject__Add__);
        }
      }
      if ( (__int64)++v8 >= size )
        return (System_Collections_Generic_List_ServantCheckEquipListViewObject__o *)v3;
      objectList = this->fields.objectList;
    }
    while ( objectList );
LABEL_21:
    sub_B52A5C(Component_srcLineSprite, v5);
  }
  return (System_Collections_Generic_List_ServantCheckEquipListViewObject__o *)v3;
}


System_Collections_Generic_List_ServantCheckEquipListViewObject__o *__fastcall ServantCheckEquipListViewManager__get_ObjectList(
        ServantCheckEquipListViewManager_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v3; // x20
  srcLineSprite_o *Component_srcLineSprite; // x0
  __int64 v5; // x1
  struct System_Collections_Generic_List_GameObject__o *objectList; // x21
  signed __int64 size; // x22
  unsigned __int64 v8; // x23
  UnityEngine_Object_o *v9; // x21

  if ( (byte_42B11DA & 1) == 0 )
  {
    sub_B52984(&Method_UnityEngine_GameObject_GetComponent_ServantCheckEquipListViewObject___);
    sub_B52984(&Method_System_Collections_Generic_List_ServantCheckEquipListViewObject__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_ServantCheckEquipListViewObject___ctor__);
    sub_B52984(&Method_System_Collections_Generic_List_GameObject__get_Count__);
    sub_B52984(&Method_System_Collections_Generic_List_GameObject__get_Item__);
    sub_B52984(&System_Collections_Generic_List_ServantCheckEquipListViewObject__TypeInfo);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    byte_42B11DA = 1;
  }
  v3 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_ServantCheckEquipListViewObject__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v3,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_ServantCheckEquipListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    goto LABEL_17;
  size = objectList->fields._size;
  if ( (int)size >= 1 )
  {
    v8 = 0LL;
    do
    {
      if ( v8 >= (unsigned int)objectList->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
      v9 = (UnityEngine_Object_o *)objectList->fields._items->m_Items[v8];
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      Component_srcLineSprite = (srcLineSprite_o *)UnityEngine_Object__op_Equality(v9, 0LL, 0LL);
      if ( ((unsigned __int8)Component_srcLineSprite & 1) == 0 )
      {
        if ( !v9 )
          break;
        Component_srcLineSprite = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                    (UnityEngine_GameObject_o *)v9,
                                    (const MethodInfo_1B7B1B8 *)Method_UnityEngine_GameObject_GetComponent_ServantCheckEquipListViewObject___);
        if ( !v3 )
          break;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v3,
          (EventMissionProgressRequest_Argument_ProgressData_o *)Component_srcLineSprite,
          (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_ServantCheckEquipListViewObject__Add__);
      }
      if ( (__int64)++v8 >= size )
        return (System_Collections_Generic_List_ServantCheckEquipListViewObject__o *)v3;
      objectList = this->fields.objectList;
    }
    while ( objectList );
LABEL_17:
    sub_B52A5C(Component_srcLineSprite, v5);
  }
  return (System_Collections_Generic_List_ServantCheckEquipListViewObject__o *)v3;
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

  if ( (byte_42B11D9 & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    byte_42B11D9 = 1;
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
    v8 = sub_B4739C(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (ServantCheckEquipListViewManager_o *)sub_B52D50(v7);
  ServantCheckEquipListViewManager__get_ObjectList(v10, v11);
}


void __fastcall ServantCheckEquipListViewManager___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  struct ServantCheckEquipListViewManager___c_StaticFields *static_fields; // x0

  if ( (byte_42AD322 & 1) == 0 )
  {
    sub_B52984(&ServantCheckEquipListViewManager___c_TypeInfo);
    byte_42AD322 = 1;
  }
  v1 = (Il2CppObject *)sub_B52A54(ServantCheckEquipListViewManager___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  static_fields = ServantCheckEquipListViewManager___c_TypeInfo->static_fields;
  static_fields->__9 = (struct ServantCheckEquipListViewManager___c_o *)v1;
  sub_B52920(static_fields);
}


void __fastcall ServantCheckEquipListViewManager___c___ctor(
        ServantCheckEquipListViewManager___c_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall ServantCheckEquipListViewManager___c___OnClickListView_b__21_0(
        ServantCheckEquipListViewManager___c_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  __int64 v4; // x1

  if ( (byte_42AD323 & 1) == 0 )
  {
    sub_B52984(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_42AD323 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B52A5C(0LL, v4);
  CommonUI__CloseServantStatusDialog(Instance, 0LL, 0LL);
}