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
  Il2CppObject *current; // x21
  int32_t v31; // w23
  ServantCheckEquipListViewItem_o *v32; // x22
  const MethodInfo *v33; // x4
  __int64 v34; // x1
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x0
  __int64 v36; // x0
  __int64 v37; // x1
  const MethodInfo *v38; // x2
  struct System_Collections_Generic_List_ListViewItem__o *v39; // x8
  struct ListViewItemSeed_o *seed; // x9
  System_Collections_Generic_List_Enumerator_T__o v41; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v42; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_42E9C6B & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_UserServantEntity__Dispose__,
      (_DWORD)userSvtEntityList,
      (_DWORD)method,
      v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_UserServantEntity__MoveNext__, v6, v7, v8);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_UserServantEntity__get_Current__, v9, v10, v11);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewItem__Add__, v12, v13, v14);
    sub_B5D5C4(&Method_System_Collections_Generic_List_UserServantEntity__GetEnumerator__, v15, v16, v17);
    sub_B5D5C4(&Method_System_Collections_Generic_List_UserServantEntity__IndexOf__, v18, v19, v20);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v21, v22, v23);
    sub_B5D5C4(&Method_System_Collections_Generic_List_UserServantEntity__get_Count__, v24, v25, v26);
    sub_B5D5C4(&ServantCheckEquipListViewItem_TypeInfo, v27, v28, v29);
    byte_42E9C6B = 1;
  }
  memset(&v42, 0, sizeof(v42));
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
  if ( userSvtEntityList && userSvtEntityList->fields._size >= 1 )
  {
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v41,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)userSvtEntityList,
      (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_UserServantEntity__GetEnumerator__);
    v42 = v41;
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v42,
              (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_UserServantEntity__MoveNext__) )
    {
      current = v42.fields.current;
      if ( NpCombineControl__CheckConfirm_26143828((UserServantEntity_o *)v42.fields.current, 0LL) )
      {
        v31 = System_Collections_Generic_List_WarBoardManager_TaskList___IndexOf(
                (System_Collections_Generic_List_WarBoardManager_TaskList__o *)userSvtEntityList,
                (WarBoardManager_TaskList_o *)current,
                (const MethodInfo_3058070 *)Method_System_Collections_Generic_List_UserServantEntity__IndexOf__);
        v32 = (ServantCheckEquipListViewItem_o *)sub_B5D694(ServantCheckEquipListViewItem_TypeInfo);
        ServantCheckEquipListViewItem___ctor(v32, (UserServantEntity_o *)current, v31, 1, v33);
        itemList = this->fields.itemList;
        if ( !itemList )
          sub_B5D69C(0LL, v34);
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)itemList,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v32,
          (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
      }
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v42,
      (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_UserServantEntity__Dispose__);
    v39 = this->fields.itemList;
    if ( !v39 || (seed = this->fields.seed) == 0LL )
      sub_B5D69C(v36, v37);
    ServantCheckEquipListViewManager__SetScrollBarActive(
      this,
      seed->fields.arrangementVolume.fields.x < (float)v39->fields._size,
      v38);
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
  }
}


void __fastcall ServantCheckEquipListViewManager__CreateList(
        ServantCheckEquipListViewManager_o *this,
        System_Collections_Generic_List_SvtEqCombineListViewItem__o *materialList,
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
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v18; // x0
  __int64 v19; // x1
  const MethodInfo *v20; // x2
  int32_t size; // w25
  __int64 v22; // x26
  struct System_Collections_Generic_List_ListViewItem__o **p_itemList; // x24
  unsigned int v24; // w8
  SvtEqCombineListViewItem_o *v25; // x8
  UserServantEntity_o *userSvtEntity; // x22
  int32_t selectNum; // w23
  ServantCheckEquipListViewItem_o *v28; // x21
  const MethodInfo *v29; // x4
  struct ListViewItemSeed_o *seed; // x9

  if ( (byte_42E9C69 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewItem__Add__, (_DWORD)materialList, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_SvtEqCombineListViewItem__get_Count__, v6, v7, v8);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v9, v10, v11);
    sub_B5D5C4(&Method_System_Collections_Generic_List_SvtEqCombineListViewItem__get_Item__, v12, v13, v14);
    sub_B5D5C4(&ServantCheckEquipListViewItem_TypeInfo, v15, v16, v17);
    byte_42E9C69 = 1;
  }
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
  if ( !materialList )
    goto LABEL_20;
  size = materialList->fields._size;
  if ( size > 0 )
  {
    v22 = 0LL;
    p_itemList = &this->fields.itemList;
    v24 = materialList->fields._size;
    while ( 1 )
    {
      if ( v24 <= (unsigned int)v22 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
      v25 = materialList->fields._items->m_Items[v22];
      if ( !v25 )
        goto LABEL_20;
      if ( v25->fields.isEquiped || v25->fields.isUseSupportEquip )
      {
        userSvtEntity = v25->fields.userSvtEntity;
        selectNum = v25->fields.selectNum;
        v28 = (ServantCheckEquipListViewItem_o *)sub_B5D694(ServantCheckEquipListViewItem_TypeInfo);
        ServantCheckEquipListViewItem___ctor(v28, userSvtEntity, selectNum, 0, v29);
        v18 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)*p_itemList;
        if ( !*p_itemList )
          goto LABEL_20;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v18,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v28,
          (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
      }
      if ( (int)v22 + 1 >= size )
        goto LABEL_17;
      v24 = materialList->fields._size;
      ++v22;
    }
  }
  p_itemList = &this->fields.itemList;
LABEL_17:
  if ( !*p_itemList || (seed = this->fields.seed) == 0LL )
LABEL_20:
    sub_B5D69C(v18, v19);
  ServantCheckEquipListViewManager__SetScrollBarActive(
    this,
    seed->fields.arrangementVolume.fields.x < (float)(*p_itemList)->fields._size,
    v20);
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
}


void __fastcall ServantCheckEquipListViewManager__CreateList_27473884(
        ServantCheckEquipListViewManager_o *this,
        System_Collections_Generic_List_ServantOperationListViewItem__o *materialList,
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
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *IsServantEquip; // x0
  __int64 v19; // x1
  const MethodInfo *v20; // x2
  int32_t size; // w25
  __int64 v22; // x26
  struct System_Collections_Generic_List_ListViewItem__o **p_itemList; // x24
  unsigned int v24; // w8
  Il2CppClass **v25; // x8
  Il2CppClass *v26; // x21
  UserServantEntity_o *interopData; // x22
  int32_t name; // w23
  ServantCheckEquipListViewItem_o *v29; // x21
  const MethodInfo *v30; // x4
  struct ListViewItemSeed_o *seed; // x9

  if ( (byte_42E9C6A & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewItem__Add__, (_DWORD)materialList, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v6, v7, v8);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ServantOperationListViewItem__get_Count__, v9, v10, v11);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ServantOperationListViewItem__get_Item__, v12, v13, v14);
    sub_B5D5C4(&ServantCheckEquipListViewItem_TypeInfo, v15, v16, v17);
    byte_42E9C6A = 1;
  }
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
  if ( !materialList )
    goto LABEL_21;
  size = materialList->fields._size;
  if ( size > 0 )
  {
    v22 = 0LL;
    p_itemList = &this->fields.itemList;
    v24 = materialList->fields._size;
    while ( 1 )
    {
      if ( v24 <= (unsigned int)v22 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
      v25 = &materialList->fields._items->obj.klass + v22;
      v26 = v25[4];
      if ( !v26 )
        goto LABEL_21;
      IsServantEquip = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)ServantOperationListViewItem__get_IsServantEquip((ServantOperationListViewItem_o *)v25[4], 0LL);
      if ( ((unsigned __int8)IsServantEquip & 1) != 0 && (BYTE4(v26->static_fields) || BYTE6(v26->static_fields)) )
      {
        interopData = (UserServantEntity_o *)v26->_1.interopData;
        name = (int32_t)v26->_1.name;
        v29 = (ServantCheckEquipListViewItem_o *)sub_B5D694(ServantCheckEquipListViewItem_TypeInfo);
        ServantCheckEquipListViewItem___ctor(v29, interopData, name, 0, v30);
        IsServantEquip = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)*p_itemList;
        if ( !*p_itemList )
          goto LABEL_21;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          IsServantEquip,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v29,
          (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
      }
      if ( (int)v22 + 1 >= size )
        goto LABEL_18;
      v24 = materialList->fields._size;
      ++v22;
    }
  }
  p_itemList = &this->fields.itemList;
LABEL_18:
  if ( !*p_itemList || (seed = this->fields.seed) == 0LL )
LABEL_21:
    sub_B5D69C(IsServantEquip, v19);
  ServantCheckEquipListViewManager__SetScrollBarActive(
    this,
    seed->fields.arrangementVolume.fields.x < (float)(*p_itemList)->fields._size,
    v20);
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
}


void __fastcall ServantCheckEquipListViewManager__CreateMaterialTdServantList(
        ServantCheckEquipListViewManager_o *this,
        System_Collections_Generic_List_UserServantEntity__o *userSvtEntityList,
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
  int v33; // w1
  int v34; // w2
  __int64 v35; // x3
  int v36; // w1
  int v37; // w2
  __int64 v38; // x3
  int v39; // w1
  int v40; // w2
  __int64 v41; // x3
  Il2CppObject *current; // x21
  WebViewManager_o *Instance; // x0
  __int64 v44; // x1
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v46; // x1
  DataMasterBase_WarMaster__WarEntity__int__o *v47; // x22
  void *monitor; // x23
  Il2CppClass *klass; // x24
  __int64 v50; // x0
  ServantEntity_o *Entity; // x0
  __int64 v52; // x1
  int32_t v53; // w23
  ServantCheckEquipListViewItem_o *v54; // x22
  const MethodInfo *v55; // x4
  __int64 v56; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *itemList; // x0
  __int64 v58; // x0
  __int64 v59; // x1
  const MethodInfo *v60; // x2
  struct System_Collections_Generic_List_ListViewItem__o *v61; // x8
  struct ListViewItemSeed_o *seed; // x9
  ServantCheckEquipListViewManager_o *v63; // [xsp+0h] [xbp-90h]
  System_Collections_Generic_List_Enumerator_T__o v64; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v65; // [xsp+20h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v66; // 0:x0.16

  if ( (byte_42E9C6D & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantMaster___, (_DWORD)userSvtEntityList, (_DWORD)method, v3);
    sub_B5D5C4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v6, v7, v8);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_UserServantEntity__Dispose__, v9, v10, v11);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_UserServantEntity__MoveNext__, v12, v13, v14);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_UserServantEntity__get_Current__, v15, v16, v17);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewItem__Add__, v18, v19, v20);
    sub_B5D5C4(&Method_System_Collections_Generic_List_UserServantEntity__GetEnumerator__, v21, v22, v23);
    sub_B5D5C4(&Method_System_Collections_Generic_List_UserServantEntity__IndexOf__, v24, v25, v26);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v27, v28, v29);
    sub_B5D5C4(&Method_System_Collections_Generic_List_UserServantEntity__get_Count__, v30, v31, v32);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v33, v34, v35);
    sub_B5D5C4(&ServantCheckEquipListViewItem_TypeInfo, v36, v37, v38);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v39, v40, v41);
    byte_42E9C6D = 1;
  }
  memset(&v65, 0, sizeof(v65));
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
  if ( userSvtEntityList && userSvtEntityList->fields._size >= 1 )
  {
    v63 = this;
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v64,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)userSvtEntityList,
      (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_UserServantEntity__GetEnumerator__);
    v65 = v64;
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v65,
              (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_UserServantEntity__MoveNext__) )
    {
      current = v65.fields.current;
      Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        sub_B5D69C(0LL, v44);
      MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                             (DataManager_o *)Instance,
                                             (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantMaster___);
      if ( !current )
        sub_B5D69C(MasterData_WarQuestSelectionMaster, v46);
      v47 = (DataMasterBase_WarMaster__WarEntity__int__o *)MasterData_WarQuestSelectionMaster;
      klass = current[5].klass;
      monitor = current[5].monitor;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v66.fields.currentCryptoKey = klass;
      *(_QWORD *)&v66.fields.fakeValue = monitor;
      v50 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v66, 0LL);
      if ( !v47 )
        sub_B5D69C(v50, (unsigned int)v50);
      Entity = (ServantEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                    v47,
                                    v50,
                                    (const MethodInfo_23FAE10 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
      if ( !Entity )
        sub_B5D69C(0LL, v52);
      if ( ServantEntity__get_IsServantMaterialTd(Entity, 0LL) )
      {
        v53 = System_Collections_Generic_List_WarBoardManager_TaskList___IndexOf(
                (System_Collections_Generic_List_WarBoardManager_TaskList__o *)userSvtEntityList,
                (WarBoardManager_TaskList_o *)current,
                (const MethodInfo_3058070 *)Method_System_Collections_Generic_List_UserServantEntity__IndexOf__);
        v54 = (ServantCheckEquipListViewItem_o *)sub_B5D694(ServantCheckEquipListViewItem_TypeInfo);
        ServantCheckEquipListViewItem___ctor(v54, (UserServantEntity_o *)current, v53, 3, v55);
        itemList = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v63->fields.itemList;
        if ( !itemList )
          sub_B5D69C(0LL, v56);
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          itemList,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v54,
          (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
      }
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v65,
      (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_UserServantEntity__Dispose__);
    v61 = v63->fields.itemList;
    if ( !v61 || (seed = v63->fields.seed) == 0LL )
      sub_B5D69C(v58, v59);
    ServantCheckEquipListViewManager__SetScrollBarActive(
      v63,
      seed->fields.arrangementVolume.fields.x < (float)v61->fields._size,
      v60);
    ListViewManager__SortItem((ListViewManager_o *)v63, -1, 0, -1, 0LL);
  }
}


void __fastcall ServantCheckEquipListViewManager__CreateSSRareServantList(
        ServantCheckEquipListViewManager_o *this,
        System_Collections_Generic_List_UserServantEntity__o *userSvtEntityList,
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
  int v33; // w1
  int v34; // w2
  __int64 v35; // x3
  int v36; // w1
  int v37; // w2
  __int64 v38; // x3
  int v39; // w1
  int v40; // w2
  __int64 v41; // x3
  Il2CppObject *current; // x21
  WebViewManager_o *Instance; // x0
  __int64 v44; // x1
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v46; // x1
  DataMasterBase_WarMaster__WarEntity__int__o *v47; // x22
  void *monitor; // x23
  Il2CppClass *klass; // x24
  __int64 v50; // x0
  ServantEntity_o *Entity; // x0
  __int64 v52; // x1
  int32_t v53; // w23
  ServantCheckEquipListViewItem_o *v54; // x22
  const MethodInfo *v55; // x4
  __int64 v56; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *itemList; // x0
  __int64 v58; // x0
  __int64 v59; // x1
  const MethodInfo *v60; // x2
  struct System_Collections_Generic_List_ListViewItem__o *v61; // x8
  struct ListViewItemSeed_o *seed; // x9
  ServantCheckEquipListViewManager_o *v63; // [xsp+0h] [xbp-90h]
  System_Collections_Generic_List_Enumerator_T__o v64; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v65; // [xsp+20h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v66; // 0:x0.16

  if ( (byte_42E9C6C & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantMaster___, (_DWORD)userSvtEntityList, (_DWORD)method, v3);
    sub_B5D5C4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v6, v7, v8);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_UserServantEntity__Dispose__, v9, v10, v11);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_UserServantEntity__MoveNext__, v12, v13, v14);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_UserServantEntity__get_Current__, v15, v16, v17);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewItem__Add__, v18, v19, v20);
    sub_B5D5C4(&Method_System_Collections_Generic_List_UserServantEntity__GetEnumerator__, v21, v22, v23);
    sub_B5D5C4(&Method_System_Collections_Generic_List_UserServantEntity__IndexOf__, v24, v25, v26);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v27, v28, v29);
    sub_B5D5C4(&Method_System_Collections_Generic_List_UserServantEntity__get_Count__, v30, v31, v32);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v33, v34, v35);
    sub_B5D5C4(&ServantCheckEquipListViewItem_TypeInfo, v36, v37, v38);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v39, v40, v41);
    byte_42E9C6C = 1;
  }
  memset(&v65, 0, sizeof(v65));
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
  if ( userSvtEntityList && userSvtEntityList->fields._size >= 1 )
  {
    v63 = this;
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v64,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)userSvtEntityList,
      (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_UserServantEntity__GetEnumerator__);
    v65 = v64;
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v65,
              (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_UserServantEntity__MoveNext__) )
    {
      current = v65.fields.current;
      Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        sub_B5D69C(0LL, v44);
      MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                             (DataManager_o *)Instance,
                                             (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantMaster___);
      if ( !current )
        sub_B5D69C(MasterData_WarQuestSelectionMaster, v46);
      v47 = (DataMasterBase_WarMaster__WarEntity__int__o *)MasterData_WarQuestSelectionMaster;
      klass = current[5].klass;
      monitor = current[5].monitor;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v66.fields.currentCryptoKey = klass;
      *(_QWORD *)&v66.fields.fakeValue = monitor;
      v50 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v66, 0LL);
      if ( !v47 )
        sub_B5D69C(v50, (unsigned int)v50);
      Entity = (ServantEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                    v47,
                                    v50,
                                    (const MethodInfo_23FAE10 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
      if ( !Entity )
        sub_B5D69C(0LL, v52);
      if ( ServantEntity__get_IsServant(Entity, 0LL)
        && UserServantEntity__getRarity((UserServantEntity_o *)current, 0LL) == 5 )
      {
        v53 = System_Collections_Generic_List_WarBoardManager_TaskList___IndexOf(
                (System_Collections_Generic_List_WarBoardManager_TaskList__o *)userSvtEntityList,
                (WarBoardManager_TaskList_o *)current,
                (const MethodInfo_3058070 *)Method_System_Collections_Generic_List_UserServantEntity__IndexOf__);
        v54 = (ServantCheckEquipListViewItem_o *)sub_B5D694(ServantCheckEquipListViewItem_TypeInfo);
        ServantCheckEquipListViewItem___ctor(v54, (UserServantEntity_o *)current, v53, 2, v55);
        itemList = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v63->fields.itemList;
        if ( !itemList )
          sub_B5D69C(0LL, v56);
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          itemList,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v54,
          (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
      }
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v65,
      (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_UserServantEntity__Dispose__);
    v61 = v63->fields.itemList;
    if ( !v61 || (seed = v63->fields.seed) == 0LL )
      sub_B5D69C(v58, v59);
    ServantCheckEquipListViewManager__SetScrollBarActive(
      v63,
      seed->fields.arrangementVolume.fields.x < (float)v61->fields._size,
      v60);
    ListViewManager__SortItem((ListViewManager_o *)v63, -1, 0, -1, 0LL);
  }
}


ServantCheckEquipListViewItem_o *__fastcall ServantCheckEquipListViewManager__GetItem(
        ServantCheckEquipListViewManager_o *this,
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

  if ( (byte_42E9C6E & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, index, (_DWORD)method, v3);
    sub_B5D5C4(&ServantCheckEquipListViewItem_TypeInfo, v6, v7, v8);
    byte_42E9C6E = 1;
  }
  itemList = this->fields.itemList;
  if ( !itemList )
    return 0LL;
  if ( itemList->fields._size <= (unsigned int)index )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
  v10 = itemList->fields._items->m_Items[index];
  if ( !v10 )
    return 0LL;
  v11 = *(&ServantCheckEquipListViewItem_TypeInfo->_2.bitflags2 + 1);
  if ( *(&v10->klass->_2.bitflags2 + 1) < (unsigned int)v11 )
    return 0LL;
  if ( (ServantCheckEquipListViewItem_c *)v10->klass->_2.typeHierarchy[v11 - 1] == ServantCheckEquipListViewItem_TypeInfo )
    return (ServantCheckEquipListViewItem_o *)itemList->fields._items->m_Items[index];
  return 0LL;
}


void __fastcall ServantCheckEquipListViewManager__OnClickListView(
        ServantCheckEquipListViewManager_o *this,
        ListViewObject_o *obj,
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
  struct ListViewItem_o *linkItem; // x19
  __int64 v21; // x9
  UserServantEntity_o *v22; // x19
  CommonUI_o *v23; // x20
  ServantCheckEquipListViewManager___c_c *v24; // x8
  struct ServantCheckEquipListViewManager___c_StaticFields *static_fields; // x9
  ServantStatusDialog_EndDelegate_o *_9__21_0; // x21
  Il2CppObject *v27; // x22
  struct ServantCheckEquipListViewManager___c_StaticFields *v28; // x0
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  ServantCheckEquipListViewManager_o *v35; // x0
  const MethodInfo *v36; // x1

  if ( (byte_42E9C72 & 1) == 0 )
  {
    sub_B5D5C4(&ServantStatusDialog_EndDelegate_TypeInfo, (_DWORD)obj, (_DWORD)method, v3);
    sub_B5D5C4(&ServantCheckEquipListViewItem_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v8, v9, v10);
    sub_B5D5C4(&SoundManager_TypeInfo, v11, v12, v13);
    sub_B5D5C4(&Method_ServantCheckEquipListViewManager___c__OnClickListView_b__21_0__, v14, v15, v16);
    this = (ServantCheckEquipListViewManager_o *)sub_B5D5C4(
                                                   &ServantCheckEquipListViewManager___c_TypeInfo,
                                                   v17,
                                                   v18,
                                                   v19);
    byte_42E9C72 = 1;
  }
  if ( !obj )
    goto LABEL_21;
  linkItem = obj->fields.linkItem;
  if ( linkItem )
  {
    v21 = *(&ServantCheckEquipListViewItem_TypeInfo->_2.bitflags2 + 1);
    if ( *(&linkItem->klass->_2.bitflags2 + 1) >= (unsigned int)v21
      && (ServantCheckEquipListViewItem_c *)linkItem->klass->_2.typeHierarchy[v21 - 1] == ServantCheckEquipListViewItem_TypeInfo )
    {
      if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SoundManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      }
      SoundManager__playSystemSe(0, 0LL);
      this = (ServantCheckEquipListViewManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v22 = *(UserServantEntity_o **)&linkItem[1].fields.selectNum;
      v23 = (CommonUI_o *)this;
      v24 = ServantCheckEquipListViewManager___c_TypeInfo;
      if ( (BYTE3(ServantCheckEquipListViewManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ServantCheckEquipListViewManager___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantCheckEquipListViewManager___c_TypeInfo);
        v24 = ServantCheckEquipListViewManager___c_TypeInfo;
      }
      static_fields = v24->static_fields;
      _9__21_0 = static_fields->__9__21_0;
      if ( !_9__21_0 )
      {
        if ( (BYTE3(v24->vtable._0_Equals.methodPtr) & 4) != 0 && !v24->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v24);
          static_fields = ServantCheckEquipListViewManager___c_TypeInfo->static_fields;
        }
        v27 = (Il2CppObject *)static_fields->__9;
        _9__21_0 = (ServantStatusDialog_EndDelegate_o *)sub_B5D694(ServantStatusDialog_EndDelegate_TypeInfo);
        ServantStatusDialog_EndDelegate___ctor(
          _9__21_0,
          v27,
          Method_ServantCheckEquipListViewManager___c__OnClickListView_b__21_0__,
          0LL);
        v28 = ServantCheckEquipListViewManager___c_TypeInfo->static_fields;
        v28->__9__21_0 = _9__21_0;
        sub_B5D560(
          (BattleServantConfConponent_o *)&v28->__9__21_0,
          (System_Int32_array **)_9__21_0,
          v29,
          v30,
          v31,
          v32,
          v33,
          v34);
      }
      if ( v23 )
      {
        CommonUI__OpenServantStatusDialog_18212884(v23, 29, v22, _9__21_0, 0LL);
        return;
      }
LABEL_21:
      sub_B5D69C(this, obj);
    }
    v35 = (ServantCheckEquipListViewManager_o *)sub_B5D990(linkItem);
    ServantCheckEquipListViewManager__SetContentPivot(v35, v36);
  }
}


void __fastcall ServantCheckEquipListViewManager__OnMoveEnd(
        ServantCheckEquipListViewManager_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int32_t callbackCount; // w8
  bool v6; // vf
  int32_t v7; // w8
  UnityEngine_Object_o *scrollView; // x20
  __int64 v9; // x1
  struct UIScrollView_o *v10; // x0
  System_Action_o *callbackFunc2; // x20
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7

  if ( (byte_42E9C71 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E9C71 = 1;
  }
  callbackCount = this->fields.callbackCount;
  v6 = __OFSUB__(callbackCount, 1);
  v7 = callbackCount - 1;
  if ( v7 < 0 == v6 )
  {
    this->fields.callbackCount = v7;
    if ( !v7 )
    {
      scrollView = (UnityEngine_Object_o *)this->fields.scrollView;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Inequality(scrollView, 0LL, 0LL) )
      {
        v10 = this->fields.scrollView;
        if ( !v10 )
          sub_B5D69C(0LL, v9);
        ((void (__fastcall *)(struct UIScrollView_o *, __int64, Il2CppMethodPointer))v10->klass->vtable._8_UpdateScrollbars.method)(
          v10,
          1LL,
          v10->klass->vtable._9_SetDragAmount.methodPtr);
        callbackFunc2 = this->fields.callbackFunc2;
        this->fields.callbackFunc2 = 0LL;
        sub_B5D560((BattleServantConfConponent_o *)&this->fields.callbackFunc2, 0LL, v12, v13, v14, v15, v16, v17);
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
  System_Collections_Generic_List_ServantCheckEquipListViewObject__o *v20; // x0
  __int64 v21; // x1
  int32_t size; // w8
  System_Collections_Generic_List_ServantCheckEquipListViewObject__o *v23; // x21
  int v24; // w24
  __int64 v25; // x25
  unsigned int v26; // w8
  ServantCheckEquipListViewObject_o *v27; // x22
  System_Action_o *v28; // x23
  const MethodInfo *v29; // x3
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  if ( (byte_42E9C70 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, mode, (_DWORD)method, v4);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ServantCheckEquipListViewObject__get_Count__, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ServantCheckEquipListViewObject__get_Item__, v11, v12, v13);
    sub_B5D5C4(&Method_ServantCheckEquipListViewManager_OnMoveEnd__, v14, v15, v16);
    sub_B5D5C4(&StringLiteral_10142/*"OnMoveEnd"*/, v17, v18, v19);
    byte_42E9C70 = 1;
  }
  v20 = ServantCheckEquipListViewManager__get_ObjectList(this, *(const MethodInfo **)&mode);
  if ( !v20 )
    goto LABEL_14;
  size = v20->fields._size;
  v23 = v20;
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
    v24 = v20->fields._size;
    if ( v24 >= 1 )
    {
      v25 = 0LL;
      v26 = v20->fields._size;
      while ( 1 )
      {
        if ( v26 <= (unsigned int)v25 )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
        v27 = v23->fields._items->m_Items[v25];
        v28 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
        System_Action___ctor(v28, (Il2CppObject *)this, Method_ServantCheckEquipListViewManager_OnMoveEnd__, 0LL);
        if ( !v27 )
          break;
        zero = UnityEngine_Vector3__get_zero(0LL);
        ServantCheckEquipListViewObject__Init(
          v27,
          mode,
          v28,
          zero.fields.x,
          *(UnityEngine_Vector3_o *)&zero.fields.y,
          v29);
        if ( (int)v25 + 1 >= v24 )
          return;
        v26 = v23->fields._size;
        ++v25;
      }
LABEL_14:
      sub_B5D69C(v20, v21);
    }
  }
}


void __fastcall ServantCheckEquipListViewManager__SetContentPivot(
        ServantCheckEquipListViewManager_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  ServantCheckEquipListViewManager_o *v4; // x19
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x8
  struct UIScrollView_o *scrollView; // x9

  v4 = this;
  if ( (byte_42E9C74 & 1) == 0 )
  {
    this = (ServantCheckEquipListViewManager_o *)sub_B5D5C4(
                                                   &Method_System_Collections_Generic_List_ListViewItem__get_Count__,
                                                   (_DWORD)method,
                                                   v2,
                                                   v3);
    byte_42E9C74 = 1;
  }
  itemList = v4->fields.itemList;
  if ( !itemList || (scrollView = v4->fields.scrollView) == 0LL )
    sub_B5D69C(this, method);
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
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.callbackFunc2,
    (System_Int32_array **)callback,
    (System_String_array **)callback,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  ServantCheckEquipListViewManager__SetMode_27477060(this, mode, v10);
}


void __fastcall ServantCheckEquipListViewManager__SetMode_27477060(
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
  if ( (byte_42E9C6F & 1) == 0 )
  {
    this = (ServantCheckEquipListViewManager_o *)sub_B5D5C4(
                                                   &ServantCheckEquipListViewObject_TypeInfo,
                                                   (_DWORD)obj,
                                                   (_DWORD)item,
                                                   method);
    byte_42E9C6F = 1;
  }
  if ( !obj
    || (v6 = *(&ServantCheckEquipListViewObject_TypeInfo->_2.bitflags2 + 1),
        *(&obj->klass->_2.bitflags2 + 1) < (unsigned int)v6)
    || (ServantCheckEquipListViewObject_c *)obj->klass->_2.typeHierarchy[v6 - 1] != ServantCheckEquipListViewObject_TypeInfo )
  {
    sub_B5D69C(this, obj);
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
  __int64 v3; // x3
  UnityEngine_Object_o *scrollBar; // x21
  __int64 v7; // x1
  UnityEngine_Component_o *gameObject; // x0

  if ( (byte_42E9C73 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, isActive, (_DWORD)method, v3);
    byte_42E9C73 = 1;
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
      sub_B5D69C(gameObject, v7);
    }
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, isActive, 0LL);
  }
}


void __fastcall ServantCheckEquipListViewManager__add_callbackFunc2(
        ServantCheckEquipListViewManager_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  __int64 v3; // x3
  System_Delegate_o *callbackFunc2; // x21
  struct System_Action_o **p_callbackFunc2; // x20
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  ServantCheckEquipListViewManager_o *v11; // x0
  System_Action_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_42E9C65 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)value, (_DWORD)method, v3);
    byte_42E9C65 = 1;
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
  v11 = (ServantCheckEquipListViewManager_o *)sub_B5D990(v8);
  ServantCheckEquipListViewManager__remove_callbackFunc2(v11, v12, v13);
}


System_Collections_Generic_List_ServantCheckEquipListViewObject__o *__fastcall ServantCheckEquipListViewManager__get_ClippingObjectList(
        ServantCheckEquipListViewManager_o *this,
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
  EventMissionProgressRequest_Argument_ProgressData_o *Component_srcLineSprite; // x0
  const MethodInfo *v25; // x1
  struct System_Collections_Generic_List_GameObject__o *objectList; // x21
  signed __int64 size; // x22
  unsigned __int64 v28; // x23
  UnityEngine_Object_o *v29; // x21
  EventMissionProgressRequest_Argument_ProgressData_o *v30; // x21

  if ( (byte_42E9C68 & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_ServantCheckEquipListViewObject___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ServantCheckEquipListViewObject__Add__, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ServantCheckEquipListViewObject___ctor__, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_List_GameObject__get_Count__, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_List_GameObject__get_Item__, v14, v15, v16);
    sub_B5D5C4(&System_Collections_Generic_List_ServantCheckEquipListViewObject__TypeInfo, v17, v18, v19);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v20, v21, v22);
    byte_42E9C68 = 1;
  }
  v23 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_ServantCheckEquipListViewObject__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v23,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_ServantCheckEquipListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    goto LABEL_21;
  size = objectList->fields._size;
  if ( (int)size >= 1 )
  {
    v28 = 0LL;
    do
    {
      if ( v28 >= (unsigned int)objectList->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
      v29 = (UnityEngine_Object_o *)objectList->fields._items->m_Items[v28];
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      Component_srcLineSprite = (EventMissionProgressRequest_Argument_ProgressData_o *)UnityEngine_Object__op_Equality(
                                                                                         v29,
                                                                                         0LL,
                                                                                         0LL);
      if ( ((unsigned __int8)Component_srcLineSprite & 1) == 0 )
      {
        if ( !v29 )
          break;
        Component_srcLineSprite = (EventMissionProgressRequest_Argument_ProgressData_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                                           (UnityEngine_GameObject_o *)v29,
                                                                                           (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_ServantCheckEquipListViewObject___);
        if ( !Component_srcLineSprite )
          break;
        v30 = Component_srcLineSprite;
        Component_srcLineSprite = (EventMissionProgressRequest_Argument_ProgressData_o *)ServantCheckEquipListViewObject__GetItem(
                                                                                           (ServantCheckEquipListViewObject_o *)Component_srcLineSprite,
                                                                                           v25);
        if ( !Component_srcLineSprite )
          break;
        v25 = (const MethodInfo *)Component_srcLineSprite;
        if ( !LOBYTE(Component_srcLineSprite[2].monitor)
          || (Component_srcLineSprite = (EventMissionProgressRequest_Argument_ProgressData_o *)ListViewManager__ClippingItem_23920288(
                                                                                                 (ListViewManager_o *)this,
                                                                                                 (ListViewItem_o *)Component_srcLineSprite,
                                                                                                 0LL),
              ((unsigned __int8)Component_srcLineSprite & 1) != 0) )
        {
          if ( !v23 )
            break;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v23,
            v30,
            (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_ServantCheckEquipListViewObject__Add__);
        }
      }
      if ( (__int64)++v28 >= size )
        return (System_Collections_Generic_List_ServantCheckEquipListViewObject__o *)v23;
      objectList = this->fields.objectList;
    }
    while ( objectList );
LABEL_21:
    sub_B5D69C(Component_srcLineSprite, v25);
  }
  return (System_Collections_Generic_List_ServantCheckEquipListViewObject__o *)v23;
}


System_Collections_Generic_List_ServantCheckEquipListViewObject__o *__fastcall ServantCheckEquipListViewManager__get_ObjectList(
        ServantCheckEquipListViewManager_o *this,
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
  signed __int64 size; // x22
  unsigned __int64 v28; // x23
  UnityEngine_Object_o *v29; // x21

  if ( (byte_42E9C67 & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_ServantCheckEquipListViewObject___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ServantCheckEquipListViewObject__Add__, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ServantCheckEquipListViewObject___ctor__, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_List_GameObject__get_Count__, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_List_GameObject__get_Item__, v14, v15, v16);
    sub_B5D5C4(&System_Collections_Generic_List_ServantCheckEquipListViewObject__TypeInfo, v17, v18, v19);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v20, v21, v22);
    byte_42E9C67 = 1;
  }
  v23 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_ServantCheckEquipListViewObject__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v23,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_ServantCheckEquipListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    goto LABEL_17;
  size = objectList->fields._size;
  if ( (int)size >= 1 )
  {
    v28 = 0LL;
    do
    {
      if ( v28 >= (unsigned int)objectList->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
      v29 = (UnityEngine_Object_o *)objectList->fields._items->m_Items[v28];
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      Component_srcLineSprite = (srcLineSprite_o *)UnityEngine_Object__op_Equality(v29, 0LL, 0LL);
      if ( ((unsigned __int8)Component_srcLineSprite & 1) == 0 )
      {
        if ( !v29 )
          break;
        Component_srcLineSprite = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                    (UnityEngine_GameObject_o *)v29,
                                    (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_ServantCheckEquipListViewObject___);
        if ( !v23 )
          break;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v23,
          (EventMissionProgressRequest_Argument_ProgressData_o *)Component_srcLineSprite,
          (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_ServantCheckEquipListViewObject__Add__);
      }
      if ( (__int64)++v28 >= size )
        return (System_Collections_Generic_List_ServantCheckEquipListViewObject__o *)v23;
      objectList = this->fields.objectList;
    }
    while ( objectList );
LABEL_17:
    sub_B5D69C(Component_srcLineSprite, v25);
  }
  return (System_Collections_Generic_List_ServantCheckEquipListViewObject__o *)v23;
}


void __fastcall ServantCheckEquipListViewManager__remove_callbackFunc2(
        ServantCheckEquipListViewManager_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  __int64 v3; // x3
  System_Delegate_o *callbackFunc2; // x21
  struct System_Action_o **p_callbackFunc2; // x20
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  ServantCheckEquipListViewManager_o *v11; // x0
  const MethodInfo *v12; // x1

  if ( (byte_42E9C66 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)value, (_DWORD)method, v3);
    byte_42E9C66 = 1;
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
  v11 = (ServantCheckEquipListViewManager_o *)sub_B5D990(v8);
  ServantCheckEquipListViewManager__get_ObjectList(v11, v12);
}


void __fastcall ServantCheckEquipListViewManager___c___cctor(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  struct ServantCheckEquipListViewManager___c_StaticFields *static_fields; // x0

  if ( (byte_42E5D3A & 1) == 0 )
  {
    sub_B5D5C4(&ServantCheckEquipListViewManager___c_TypeInfo, v1, v2, v3);
    byte_42E5D3A = 1;
  }
  v4 = (Il2CppObject *)sub_B5D694(ServantCheckEquipListViewManager___c_TypeInfo);
  System_Object___ctor(v4, 0LL);
  static_fields = ServantCheckEquipListViewManager___c_TypeInfo->static_fields;
  static_fields->__9 = (struct ServantCheckEquipListViewManager___c_o *)v4;
  sub_B5D560(static_fields);
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
  __int64 v3; // x3
  CommonUI_o *Instance; // x0
  __int64 v5; // x1

  if ( (byte_42E5D3B & 1) == 0 )
  {
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, isDecide, (_DWORD)method, v3);
    byte_42E5D3B = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B5D69C(0LL, v5);
  CommonUI__CloseServantStatusDialog(Instance, 0LL, 0LL);
}