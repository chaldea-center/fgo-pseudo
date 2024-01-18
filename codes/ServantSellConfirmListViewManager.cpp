void __fastcall ServantSellConfirmListViewManager___ctor(
        ServantSellConfirmListViewManager_o *this,
        const MethodInfo *method)
{
  ListViewManager___ctor((ListViewManager_o *)this, 0LL);
}


void __fastcall ServantSellConfirmListViewManager__CallOnSelectitem(
        ServantSellConfirmListViewManager_o *this,
        ServantSellConfirmListViewItem_o *selectItem,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  struct System_Action_ServantSellConfirmListViewItem__o *onSelectItem; // x21

  if ( (byte_4189C2E & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Action_ServantSellConfirmListViewItem__Invoke__, selectItem);
    byte_4189C2E = 1;
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
      (const MethodInfo_24BBAEC *)Method_System_Action_ServantSellConfirmListViewItem__Invoke__);
  }
}


void __fastcall ServantSellConfirmListViewManager__CancelDragEnd(
        ServantSellConfirmListViewManager_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall ServantSellConfirmListViewManager__CreateCommandCodeList(
        ServantSellConfirmListViewManager_o *this,
        System_Int64_array *commandCodeIds,
        bool isExceeded,
        bool isSellLastServant,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  DataManager_o *Instance; // x0
  __int64 v14; // x1
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v16; // x8
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *v17; // x21
  unsigned __int64 v18; // x26
  int64_t v19; // x24
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x22
  int32_t v21; // w23
  UserServantEntity_o *Entity; // x25
  ServantSellConfirmListViewItem_o *v23; // x24
  const MethodInfo *v24; // x4
  __int64 v25; // x0

  if ( (byte_4189C27 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_UserCommandCodeMaster___, commandCodeIds);
    sub_B2C35C(&Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__GetEntity__, v9);
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewItem__Add__, v10);
    sub_B2C35C(&ServantSellConfirmListViewItem_TypeInfo, v11);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12);
    byte_4189C27 = 1;
  }
  if ( commandCodeIds && *(_QWORD *)&commandCodeIds->max_length && !isExceeded && !isSellLastServant )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_16;
    MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                           Instance,
                                           (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserCommandCodeMaster___);
    v16 = *(_QWORD *)&commandCodeIds->max_length;
    if ( (int)v16 >= 1 )
    {
      v17 = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)MasterData_WarQuestSelectionMaster;
      v18 = 0LL;
      while ( 1 )
      {
        if ( v18 >= (unsigned int)v16 )
        {
          v25 = sub_B2C460(MasterData_WarQuestSelectionMaster);
          sub_B2C400(v25, 0LL);
        }
        Instance = (DataManager_o *)this->fields.parentManager;
        if ( !Instance )
          break;
        v19 = commandCodeIds->m_Items[v18];
        itemList = this->fields.itemList;
        Instance = (DataManager_o *)ServantOperationManager__GetSelectedOrderByCommandCodeId(
                                      (ServantOperationManager_o *)Instance,
                                      v19,
                                      0LL);
        if ( !v17 )
          break;
        v21 = (int)Instance;
        Entity = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
                   v17,
                   v19,
                   (const MethodInfo_24E42F8 *)Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__GetEntity__);
        v23 = (ServantSellConfirmListViewItem_o *)sub_B2C42C(ServantSellConfirmListViewItem_TypeInfo);
        ServantSellConfirmListViewItem___ctor_28850268(v23, v21, (UserCommandCodeEntity_o *)Entity, 0, v24);
        if ( !itemList )
          break;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)itemList,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v23,
          (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
        LODWORD(v16) = commandCodeIds->max_length;
        if ( (__int64)++v18 >= (int)v16 )
          return;
      }
LABEL_16:
      sub_B2C434(Instance, v14);
    }
  }
}


void __fastcall ServantSellConfirmListViewManager__CreateCommandCodeResultList(
        ServantSellConfirmListViewManager_o *this,
        System_Collections_Generic_List_long__o *commandCodeIds,
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
  ServantSellConfirmListViewManager_o *v16; // x0
  const MethodInfo *v17; // x2
  System_Collections_Generic_List_UserCommandCodeEntity__o *SortEntList; // x0
  __int64 v19; // x1
  System_Collections_Generic_List_WarBoardManager_TaskList__o *v20; // x20
  Il2CppObject *current; // x22
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x21
  int32_t v23; // w24
  ServantSellConfirmListViewItem_o *v24; // x23
  const MethodInfo *v25; // x4
  __int64 v26; // x0
  __int64 v27; // x1
  System_Collections_Generic_List_Enumerator_T__o v28; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4189C28 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_UserCommandCodeEntity__Dispose__, commandCodeIds);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_UserCommandCodeEntity__MoveNext__, v9);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_UserCommandCodeEntity__get_Current__, v10);
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewItem__Add__, v11);
    sub_B2C35C(&Method_System_Collections_Generic_List_UserCommandCodeEntity__GetEnumerator__, v12);
    sub_B2C35C(&Method_System_Collections_Generic_List_UserCommandCodeEntity__IndexOf__, v13);
    sub_B2C35C(&Method_System_Collections_Generic_List_long__get_Count__, v14);
    sub_B2C35C(&ServantSellConfirmListViewItem_TypeInfo, v15);
    byte_4189C28 = 1;
  }
  memset(&v28, 0, sizeof(v28));
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
  if ( commandCodeIds && commandCodeIds->fields._size >= 1 && !isExceeded && !isSellLastServant )
  {
    SortEntList = ServantSellConfirmListViewManager__GetSortEntList(v16, commandCodeIds, v17);
    if ( !SortEntList )
      sub_B2C434(0LL, v19);
    v20 = (System_Collections_Generic_List_WarBoardManager_TaskList__o *)SortEntList;
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v28,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)SortEntList,
      (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_UserCommandCodeEntity__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v28,
              (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_UserCommandCodeEntity__MoveNext__) )
    {
      current = v28.fields.current;
      itemList = this->fields.itemList;
      v23 = System_Collections_Generic_List_WarBoardManager_TaskList___IndexOf(
              v20,
              (WarBoardManager_TaskList_o *)v28.fields.current,
              (const MethodInfo_2EF5510 *)Method_System_Collections_Generic_List_UserCommandCodeEntity__IndexOf__);
      v24 = (ServantSellConfirmListViewItem_o *)sub_B2C42C(ServantSellConfirmListViewItem_TypeInfo);
      ServantSellConfirmListViewItem___ctor_28850268(v24, v23, (UserCommandCodeEntity_o *)current, 0, v25);
      if ( !itemList )
        sub_B2C434(v26, v27);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)itemList,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v24,
        (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v28,
      (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_UserCommandCodeEntity__Dispose__);
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
  }
}


void __fastcall ServantSellConfirmListViewManager__CreateList(
        ServantSellConfirmListViewManager_o *this,
        int32_t kind,
        System_Int64_array *servantIds,
        System_Int64_array *commandCodeids,
        bool isExceeded,
        bool isSellLastServant,
        const MethodInfo *method)
{
  const MethodInfo *v12; // x4
  const MethodInfo *v13; // x4

  this->fields.kind = kind;
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
  isExceeded = isExceeded;
  isSellLastServant = isSellLastServant;
  ServantSellConfirmListViewManager__CreateServantList(this, servantIds, isExceeded, isSellLastServant, v12);
  ServantSellConfirmListViewManager__CreateCommandCodeList(this, commandCodeids, isExceeded, isSellLastServant, v13);
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
}


void __fastcall ServantSellConfirmListViewManager__CreateServantList(
        ServantSellConfirmListViewManager_o *this,
        System_Int64_array *servantIds,
        bool isExceeded,
        bool isSellLastServant,
        const MethodInfo *method)
{
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  int64_t Instance; // x0
  __int64 v17; // x1
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *MasterData_WarQuestSelectionMaster; // x23
  UserDeckMaster_o *v19; // x25
  ServantOperationManager_o *parentManager; // x19
  System_Collections_Generic_List_ServantOperationListViewItem__o *SelectedEquipeCmdCardServantList; // x0
  __int64 v22; // x8
  unsigned __int64 v23; // x25
  int64_t v24; // x19
  int64_t v25; // x27
  int64_t v26; // x26
  __int64 v27; // x19
  __int64 v28; // x20
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x28
  ServantSellConfirmListViewManager_o *v30; // x23
  int64_t favoriteUserSvtId; // x24
  int32_t v32; // w20
  ServantSellConfirmListViewItem_o *v33; // x0
  bool v34; // w5
  EventMissionProgressRequest_Argument_ProgressData_o *v35; // x19
  const MethodInfo *v36; // x6
  __int64 v37; // x0
  System_Collections_Generic_List_int__o *v38; // [xsp+8h] [xbp-98h]
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *v39; // [xsp+10h] [xbp-90h]
  UserGameEntity_o *SelfUserGame; // [xsp+18h] [xbp-88h]
  System_Int64_array *v42; // [xsp+30h] [xbp-70h]
  System_Int64_array *v43; // [xsp+38h] [xbp-68h]
  System_Int64_array *equipIdList; // [xsp+40h] [xbp-60h] BYREF
  System_Int64_array *svtIdList; // [xsp+48h] [xbp-58h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v46; // 0:x0.16

  if ( (byte_4189C24 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_UserDeckMaster___, servantIds);
    sub_B2C35C(&Method_DataManager_GetMasterData_UserServantMaster___, v8);
    sub_B2C35C(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v9);
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewItem__Add__, v10);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__Contains__, v11);
    sub_B2C35C(&NetworkManager_TypeInfo, v12);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v13);
    sub_B2C35C(&ServantSellConfirmListViewItem_TypeInfo, v14);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v15);
    byte_4189C24 = 1;
  }
  equipIdList = 0LL;
  svtIdList = 0LL;
  if ( servantIds && *(_QWORD *)&servantIds->max_length )
  {
    Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_32;
    MasterData_WarQuestSelectionMaster = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)DataManager__GetMasterData_WarQuestSelectionMaster_((DataManager_o *)Instance, (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserServantMaster___);
    SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
    Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_32;
    v19 = (UserDeckMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                (DataManager_o *)Instance,
                                (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserDeckMaster___);
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    Instance = NetworkManager__get_UserId(0LL);
    if ( !v19 )
      goto LABEL_32;
    UserDeckMaster__getPartyList(v19, &svtIdList, &equipIdList, Instance, 0LL);
    parentManager = this->fields.parentManager;
    if ( !parentManager )
      goto LABEL_32;
    SelectedEquipeCmdCardServantList = ServantOperationManager__GetSelectedEquipeCmdCardServantList(
                                         this->fields.parentManager,
                                         0LL);
    Instance = (int64_t)ServantOperationManager__GetEquipedCommandCodeSellLastSvtList(
                          parentManager,
                          SelectedEquipeCmdCardServantList,
                          0LL);
    v22 = *(_QWORD *)&servantIds->max_length;
    v38 = (System_Collections_Generic_List_int__o *)Instance;
    if ( (int)v22 >= 1 )
    {
      v23 = 0LL;
      v39 = MasterData_WarQuestSelectionMaster;
      while ( 1 )
      {
        if ( v23 >= (unsigned int)v22 )
        {
          v37 = sub_B2C460(Instance);
          sub_B2C400(v37, 0LL);
        }
        if ( !MasterData_WarQuestSelectionMaster )
          break;
        v24 = servantIds->m_Items[v23];
        Instance = (int64_t)DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
                              MasterData_WarQuestSelectionMaster,
                              v24,
                              (const MethodInfo_24E42F8 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
        v25 = Instance;
        if ( !isExceeded )
          goto LABEL_36;
        if ( !Instance )
          break;
        Instance = UserServantEntity__isExceeded((UserServantEntity_o *)Instance, 0LL);
        if ( (Instance & 1) != 0 )
        {
LABEL_36:
          if ( !isSellLastServant )
            goto LABEL_26;
          if ( !v25 )
            break;
          v26 = v24;
          v28 = *(_QWORD *)(v25 + 80);
          v27 = *(_QWORD *)(v25 + 88);
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          }
          *(_QWORD *)&v46.fields.currentCryptoKey = v28;
          *(_QWORD *)&v46.fields.fakeValue = v27;
          v17 = (unsigned int)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v46, 0LL);
          Instance = (int64_t)v38;
          if ( !v38 )
            break;
          Instance = System_Collections_Generic_List_int___Contains(
                       v38,
                       v17,
                       (const MethodInfo_2F6744C *)Method_System_Collections_Generic_List_int__Contains__);
          v24 = v26;
          if ( (Instance & 1) != 0 )
          {
LABEL_26:
            Instance = (int64_t)this->fields.parentManager;
            if ( !Instance )
              break;
            itemList = this->fields.itemList;
            v30 = this;
            Instance = ServantOperationManager__GetSelectedOrderByServantId(
                         (ServantOperationManager_o *)Instance,
                         v24,
                         0LL);
            if ( !SelfUserGame )
              break;
            favoriteUserSvtId = SelfUserGame->fields.favoriteUserSvtId;
            v32 = Instance;
            v43 = equipIdList;
            v42 = svtIdList;
            v33 = (ServantSellConfirmListViewItem_o *)sub_B2C42C(ServantSellConfirmListViewItem_TypeInfo);
            v34 = v24 == favoriteUserSvtId;
            v35 = (EventMissionProgressRequest_Argument_ProgressData_o *)v33;
            ServantSellConfirmListViewItem___ctor(v33, v32, (UserServantEntity_o *)v25, v42, v43, v34, v36);
            if ( !itemList )
              break;
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)itemList,
              v35,
              (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
            this = v30;
            MasterData_WarQuestSelectionMaster = v39;
          }
        }
        LODWORD(v22) = servantIds->max_length;
        if ( (__int64)++v23 >= (int)v22 )
          return;
      }
LABEL_32:
      sub_B2C434(Instance, v17);
    }
  }
}


void __fastcall ServantSellConfirmListViewManager__CreateSortServantList(
        ServantSellConfirmListViewManager_o *this,
        System_Int64_array *servantIds,
        bool isExceeded,
        bool isSellLastServant,
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
  DataManager_o *Instance; // x0
  __int64 v23; // x1
  UserGameEntity_o *SelfUserGame; // x22
  UserDeckMaster_o *MasterData_WarQuestSelectionMaster; // x19
  ServantOperationManager_o *parentManager; // x19
  System_Collections_Generic_List_ServantOperationListViewItem__o *SelectedEquipeCmdCardServantList; // x0
  System_Collections_Generic_List_long__o *v28; // x19
  const MethodInfo *v29; // x2
  __int64 v30; // x8
  unsigned __int64 v31; // x20
  System_Collections_Generic_List_WarBoardManager_TaskList__o *v32; // x24
  _BOOL8 v33; // x0
  __int64 v34; // x1
  Il2CppObject *current; // x25
  void *monitor; // x19
  Il2CppClass *klass; // x20
  __int64 v38; // x1
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x26
  __int64 v40; // x0
  __int64 v41; // x1
  Il2CppObject v42; // q0
  int32_t v43; // w27
  System_Int64_array *v44; // x19
  System_Int64_array *v45; // x28
  int64_t v46; // x0
  __int64 v47; // x1
  int64_t favoriteUserSvtId; // x23
  int64_t v49; // x21
  ServantSellConfirmListViewItem_o *v50; // x20
  const MethodInfo *v51; // x6
  __int64 v52; // x0
  __int64 v53; // x1
  __int64 v54; // x0
  System_Collections_Generic_List_int__o *EquipedCommandCodeSellLastSvtList; // [xsp+8h] [xbp-D8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v59; // [xsp+20h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v60; // [xsp+40h] [xbp-A0h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v61; // [xsp+60h] [xbp-80h] BYREF
  System_Int64_array *equipIdList; // [xsp+80h] [xbp-60h] BYREF
  System_Int64_array *svtIdList; // [xsp+88h] [xbp-58h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v64; // 0:x0.16

  if ( (byte_4189C25 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_UserDeckMaster___, servantIds);
    sub_B2C35C(&Method_DataManager_GetMasterData_UserServantMaster___, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_UserServantEntity__Dispose__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_UserServantEntity__MoveNext__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_UserServantEntity__get_Current__, v9);
    sub_B2C35C(&Method_System_Collections_Generic_List_long__Add__, v10);
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewItem__Add__, v11);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__Contains__, v12);
    sub_B2C35C(&Method_System_Collections_Generic_List_UserServantEntity__GetEnumerator__, v13);
    sub_B2C35C(&Method_System_Collections_Generic_List_UserServantEntity__IndexOf__, v14);
    sub_B2C35C(&Method_System_Collections_Generic_List_long___ctor__, v15);
    sub_B2C35C(&System_Collections_Generic_List_long__TypeInfo, v16);
    sub_B2C35C(&NetworkManager_TypeInfo, v17);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v18);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v19);
    sub_B2C35C(&ServantSellConfirmListViewItem_TypeInfo, v20);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v21);
    byte_4189C25 = 1;
  }
  equipIdList = 0LL;
  svtIdList = 0LL;
  memset(&v61, 0, sizeof(v61));
  this->fields.kind = 3;
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
  if ( servantIds && *(_QWORD *)&servantIds->max_length )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_39;
    DataManager__GetMasterData_WarQuestSelectionMaster_(
      Instance,
      (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserServantMaster___);
    SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_39;
    MasterData_WarQuestSelectionMaster = (UserDeckMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                               Instance,
                                                               (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserDeckMaster___);
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    Instance = (DataManager_o *)NetworkManager__get_UserId(0LL);
    if ( !MasterData_WarQuestSelectionMaster )
      goto LABEL_39;
    UserDeckMaster__getPartyList(MasterData_WarQuestSelectionMaster, &svtIdList, &equipIdList, (int64_t)Instance, 0LL);
    parentManager = this->fields.parentManager;
    if ( !parentManager )
      goto LABEL_39;
    SelectedEquipeCmdCardServantList = ServantOperationManager__GetSelectedEquipeCmdCardServantList(
                                         this->fields.parentManager,
                                         0LL);
    EquipedCommandCodeSellLastSvtList = ServantOperationManager__GetEquipedCommandCodeSellLastSvtList(
                                          parentManager,
                                          SelectedEquipeCmdCardServantList,
                                          0LL);
    v28 = (System_Collections_Generic_List_long__o *)sub_B2C42C(System_Collections_Generic_List_long__TypeInfo);
    System_Collections_Generic_List_long____ctor(
      v28,
      (const MethodInfo_2F6C24C *)Method_System_Collections_Generic_List_long___ctor__);
    v30 = *(_QWORD *)&servantIds->max_length;
    if ( (int)v30 >= 1 )
    {
      v31 = 0LL;
      while ( 1 )
      {
        if ( v31 >= (unsigned int)v30 )
        {
          v54 = sub_B2C460(Instance);
          sub_B2C400(v54, 0LL);
        }
        if ( !v28 )
          break;
        System_Collections_Generic_List_long___Add(
          v28,
          servantIds->m_Items[v31],
          (const MethodInfo_2F6CFA8 *)Method_System_Collections_Generic_List_long__Add__);
        LODWORD(v30) = servantIds->max_length;
        if ( (__int64)++v31 >= (int)v30 )
          goto LABEL_17;
      }
LABEL_39:
      sub_B2C434(Instance, v23);
    }
LABEL_17:
    Instance = (DataManager_o *)ServantSellConfirmListViewManager__GetSvtSortEntList(
                                  (ServantSellConfirmListViewManager_o *)Instance,
                                  v28,
                                  v29);
    if ( !Instance )
      goto LABEL_39;
    v32 = (System_Collections_Generic_List_WarBoardManager_TaskList__o *)Instance;
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v60,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)Instance,
      (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_UserServantEntity__GetEnumerator__);
    v61.fields.current = (Il2CppObject *)v60.fields.fakeValue;
    *(_OWORD *)&v61.fields.list = *(_OWORD *)&v60.fields.currentCryptoKey;
    while ( 1 )
    {
      v33 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v61,
              (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_UserServantEntity__MoveNext__);
      if ( !v33 )
        break;
      current = v61.fields.current;
      if ( isExceeded )
      {
        if ( !v61.fields.current )
          sub_B2C434(v33, v34);
        v33 = UserServantEntity__isExceeded((UserServantEntity_o *)v61.fields.current, 0LL);
        if ( !v33 )
          continue;
      }
      if ( !isSellLastServant )
        goto LABEL_30;
      if ( !current )
        sub_B2C434(v33, v34);
      klass = current[5].klass;
      monitor = current[5].monitor;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v64.fields.currentCryptoKey = klass;
      *(_QWORD *)&v64.fields.fakeValue = monitor;
      v38 = (unsigned int)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v64, 0LL);
      if ( !EquipedCommandCodeSellLastSvtList )
        sub_B2C434(0LL, v38);
      if ( System_Collections_Generic_List_int___Contains(
             EquipedCommandCodeSellLastSvtList,
             v38,
             (const MethodInfo_2F6744C *)Method_System_Collections_Generic_List_int__Contains__) )
      {
LABEL_30:
        itemList = this->fields.itemList;
        v40 = System_Collections_Generic_List_WarBoardManager_TaskList___IndexOf(
                v32,
                (WarBoardManager_TaskList_o *)current,
                (const MethodInfo_2EF5510 *)Method_System_Collections_Generic_List_UserServantEntity__IndexOf__);
        if ( !current )
          sub_B2C434(v40, v41);
        v42 = current[2];
        v43 = v40;
        v44 = equipIdList;
        v45 = svtIdList;
        *(Il2CppObject *)&v60.fields.currentCryptoKey = current[1];
        *(Il2CppObject *)&v60.fields.fakeValue = v42;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        }
        v59 = v60;
        v46 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v59, 0LL);
        if ( !SelfUserGame )
          sub_B2C434(v46, v47);
        favoriteUserSvtId = SelfUserGame->fields.favoriteUserSvtId;
        v49 = v46;
        v50 = (ServantSellConfirmListViewItem_o *)sub_B2C42C(ServantSellConfirmListViewItem_TypeInfo);
        ServantSellConfirmListViewItem___ctor(
          v50,
          v43,
          (UserServantEntity_o *)current,
          v45,
          v44,
          v49 == favoriteUserSvtId,
          v51);
        if ( !itemList )
          sub_B2C434(v52, v53);
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)itemList,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v50,
          (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
      }
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v61,
      (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_UserServantEntity__Dispose__);
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
  }
}


void __fastcall ServantSellConfirmListViewManager__DestroyList(
        ServantSellConfirmListViewManager_o *this,
        const MethodInfo *method)
{
  ListViewManager__DestroyList((ListViewManager_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
int64_t __fastcall ServantSellConfirmListViewManager__GetAmountSortValue(
        ServantSellConfirmListViewManager_o *this,
        int32_t svtId,
        const MethodInfo *method)
{
  ServantSellConfirmListViewManager_o *v4; // x20
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
  if ( (byte_4189C2F & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, *(_QWORD *)&svtId);
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v5);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v6);
    this = (ServantSellConfirmListViewManager_o *)sub_B2C35C(&ServantSellConfirmListViewItem_TypeInfo, v7);
    byte_4189C2F = 1;
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
      v12 = *(&ServantSellConfirmListViewItem_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v11->klass->_2.bitflags2 + 1) >= (unsigned int)v12
        && (ServantSellConfirmListViewItem_c *)v11->klass->_2.typeHierarchy[v12 - 1] == ServantSellConfirmListViewItem_TypeInfo )
      {
        if ( (ServantSellConfirmListViewItem_c *)v11->klass->_2.typeHierarchy[*(&ServantSellConfirmListViewItem_TypeInfo->_2.bitflags2
                                                                              + 1)
                                                                            - 1] != ServantSellConfirmListViewItem_TypeInfo )
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
        this = (ServantSellConfirmListViewManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(
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
int64_t __fastcall ServantSellConfirmListViewManager__GetCommandCodeAmountSortValue(
        ServantSellConfirmListViewManager_o *this,
        int32_t commandCodeId,
        const MethodInfo *method)
{
  ServantSellConfirmListViewManager_o *v4; // x20
  __int64 v5; // x1
  __int64 v6; // x1
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x24
  unsigned __int64 v8; // x22
  int64_t v9; // x21
  ListViewItem_o *v10; // x8
  __int64 v11; // x11

  v4 = this;
  if ( (byte_4189C30 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, *(_QWORD *)&commandCodeId);
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v5);
    this = (ServantSellConfirmListViewManager_o *)sub_B2C35C(&ServantSellConfirmListViewItem_TypeInfo, v6);
    byte_4189C30 = 1;
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
      v11 = *(&ServantSellConfirmListViewItem_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v10->klass->_2.bitflags2 + 1) >= (unsigned int)v11
        && (ServantSellConfirmListViewItem_c *)v10->klass->_2.typeHierarchy[v11 - 1] == ServantSellConfirmListViewItem_TypeInfo )
      {
        itemList = v4->fields.itemList;
        ++v8;
        if ( (ServantSellConfirmListViewItem_c *)v10->klass->_2.typeHierarchy[*(&ServantSellConfirmListViewItem_TypeInfo->_2.bitflags2
                                                                              + 1)
                                                                            - 1] != ServantSellConfirmListViewItem_TypeInfo )
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


bool __fastcall ServantSellConfirmListViewManager__GetDragSelect(
        ServantSellConfirmListViewManager_o *this,
        const MethodInfo *method)
{
  return 0;
}


int32_t __fastcall ServantSellConfirmListViewManager__GetModeKind(
        ServantSellConfirmListViewManager_o *this,
        const MethodInfo *method)
{
  return this->fields.modeKind;
}


System_Collections_Generic_List_UserCommandCodeEntity__o *__fastcall ServantSellConfirmListViewManager__GetSortEntList(
        ServantSellConfirmListViewManager_o *this,
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
  struct ServantSellConfirmListViewManager___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__19_0; // x20
  Il2CppObject *v27; // x21
  struct ServantSellConfirmListViewManager___c_StaticFields *v28; // x0
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  System_Collections_Generic_List_Enumerator_T__o v36; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v37; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_4189C29 & 1) == 0 )
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
    sub_B2C35C(&Method_ServantSellConfirmListViewManager___c__GetSortEntList_b__19_0__, v16);
    sub_B2C35C(&ServantSellConfirmListViewManager___c_TypeInfo, v17);
    byte_4189C29 = 1;
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
  Instance = ServantSellConfirmListViewManager___c_TypeInfo;
  if ( (BYTE3(ServantSellConfirmListViewManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantSellConfirmListViewManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantSellConfirmListViewManager___c_TypeInfo);
    Instance = ServantSellConfirmListViewManager___c_TypeInfo;
  }
  static_fields = (struct ServantSellConfirmListViewManager___c_StaticFields *)*((_QWORD *)Instance + 23);
  _9__19_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)static_fields->__9__19_0;
  if ( !_9__19_0 )
  {
    if ( (*((_BYTE *)Instance + 307) & 4) != 0 && !*((_DWORD *)Instance + 56) )
    {
      j_il2cpp_runtime_class_init_0(Instance);
      static_fields = ServantSellConfirmListViewManager___c_TypeInfo->static_fields;
    }
    v27 = (Il2CppObject *)static_fields->__9;
    _9__19_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B2C42C(System_Comparison_UserCommandCodeEntity__TypeInfo);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__19_0,
      v27,
      Method_ServantSellConfirmListViewManager___c__GetSortEntList_b__19_0__,
      (const MethodInfo_25D8DF8 *)Method_System_Comparison_UserCommandCodeEntity___ctor__);
    v28 = ServantSellConfirmListViewManager___c_TypeInfo->static_fields;
    v28->__9__19_0 = (struct System_Comparison_UserCommandCodeEntity__o *)_9__19_0;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&v28->__9__19_0,
      (System_Int32_array **)_9__19_0,
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
    (System_Comparison_T__o *)_9__19_0,
    (const MethodInfo_2EF653C *)Method_System_Collections_Generic_List_UserCommandCodeEntity__Sort__);
  return (System_Collections_Generic_List_UserCommandCodeEntity__o *)v18;
}


System_Collections_Generic_List_UserServantEntity__o *__fastcall ServantSellConfirmListViewManager__GetSvtSortEntList(
        ServantSellConfirmListViewManager_o *this,
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
  struct ServantSellConfirmListViewManager___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__16_0; // x20
  Il2CppObject *v27; // x21
  struct ServantSellConfirmListViewManager___c_StaticFields *v28; // x0
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  System_Collections_Generic_List_Enumerator_T__o v36; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v37; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_4189C26 & 1) == 0 )
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
    sub_B2C35C(&Method_ServantSellConfirmListViewManager___c__GetSvtSortEntList_b__16_0__, v16);
    sub_B2C35C(&ServantSellConfirmListViewManager___c_TypeInfo, v17);
    byte_4189C26 = 1;
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
  Instance = ServantSellConfirmListViewManager___c_TypeInfo;
  if ( (BYTE3(ServantSellConfirmListViewManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantSellConfirmListViewManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantSellConfirmListViewManager___c_TypeInfo);
    Instance = ServantSellConfirmListViewManager___c_TypeInfo;
  }
  static_fields = (struct ServantSellConfirmListViewManager___c_StaticFields *)*((_QWORD *)Instance + 23);
  _9__16_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)static_fields->__9__16_0;
  if ( !_9__16_0 )
  {
    if ( (*((_BYTE *)Instance + 307) & 4) != 0 && !*((_DWORD *)Instance + 56) )
    {
      j_il2cpp_runtime_class_init_0(Instance);
      static_fields = ServantSellConfirmListViewManager___c_TypeInfo->static_fields;
    }
    v27 = (Il2CppObject *)static_fields->__9;
    _9__16_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B2C42C(System_Comparison_UserServantEntity__TypeInfo);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__16_0,
      v27,
      Method_ServantSellConfirmListViewManager___c__GetSvtSortEntList_b__16_0__,
      (const MethodInfo_25D8DF8 *)Method_System_Comparison_UserServantEntity___ctor__);
    v28 = ServantSellConfirmListViewManager___c_TypeInfo->static_fields;
    v28->__9__16_0 = (struct System_Comparison_UserServantEntity__o *)_9__16_0;
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
    (const MethodInfo_2EF653C *)Method_System_Collections_Generic_List_UserServantEntity__Sort__);
  return (System_Collections_Generic_List_UserServantEntity__o *)v18;
}


bool __fastcall ServantSellConfirmListViewManager__IsDragEnable(
        ServantSellConfirmListViewManager_o *this,
        ServantSellConfirmListViewItem_o *item,
        const MethodInfo *method)
{
  return 0;
}


bool __fastcall ServantSellConfirmListViewManager__IsDragStart(
        ServantSellConfirmListViewManager_o *this,
        const MethodInfo *method)
{
  return 0;
}


bool __fastcall ServantSellConfirmListViewManager__IsSelectEnable(
        ServantSellConfirmListViewManager_o *this,
        ServantSellConfirmListViewItem_o *item,
        int32_t addSum,
        int32_t addServantSum,
        const MethodInfo *method)
{
  return 1;
}


void __fastcall ServantSellConfirmListViewManager__ModifyItem(
        ServantSellConfirmListViewManager_o *this,
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

  if ( (byte_4189C2A & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_UserCommandCodeMaster___, selectedId);
    sub_B2C35C(&Method_DataManager_GetMasterData_UserServantMaster___, v5);
    sub_B2C35C(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__, v6);
    sub_B2C35C(&Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__TryGetEntity__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v9);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v10);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v11);
    sub_B2C35C(&ServantSellConfirmListViewItem_TypeInfo, v12);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v13);
    byte_4189C2A = 1;
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
            v20 = *(&ServantSellConfirmListViewItem_TypeInfo->_2.bitflags2 + 1);
            if ( *(&v19->klass->_2.bitflags2 + 1) >= (unsigned int)v20
              && (ServantSellConfirmListViewItem_c *)v19->klass->_2.typeHierarchy[v20 - 1] == ServantSellConfirmListViewItem_TypeInfo )
            {
              Instance = ServantSellConfirmListViewItem__get_UserCommandCodeId(
                           (ServantSellConfirmListViewItem_o *)v19,
                           v16);
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
      v35 = *(&ServantSellConfirmListViewItem_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v34->klass->_2.bitflags2 + 1) >= (unsigned int)v35
        && (ServantSellConfirmListViewItem_c *)v34->klass->_2.typeHierarchy[v35 - 1] == ServantSellConfirmListViewItem_TypeInfo )
      {
        Instance = ServantSellConfirmListViewItem__get_UserSvtId((ServantSellConfirmListViewItem_o *)v34, v16);
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
          Instance = ServantSellConfirmListViewItem__get_UserSvtId((ServantSellConfirmListViewItem_o *)v34, v38);
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


void __fastcall ServantSellConfirmListViewManager__OnClickListView(
        ServantSellConfirmListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  ;
}


// attributes: thunk
void __fastcall ServantSellConfirmListViewManager__OnLongPushListView(
        ServantSellConfirmListViewManager_o *this,
        ServantSellConfirmListViewItem_o *selectItem,
        const MethodInfo *method)
{
  ServantSellConfirmListViewManager__CallOnSelectitem(this, selectItem, method);
}


void __fastcall ServantSellConfirmListViewManager__OnMoveEnd(
        ServantSellConfirmListViewManager_o *this,
        const MethodInfo *method)
{
  int32_t callbackCount; // w8
  bool v4; // vf
  int32_t v5; // w8

  if ( (byte_4189C2D & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, method);
    byte_4189C2D = 1;
  }
  callbackCount = this->fields.callbackCount;
  v4 = __OFSUB__(callbackCount, 1);
  v5 = callbackCount - 1;
  if ( v5 < 0 == v4 )
    this->fields.callbackCount = v5;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantSellConfirmListViewManager__RequestListObject(
        ServantSellConfirmListViewManager_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  System_Collections_Generic_List_ServantSellConfirmListViewObject__o *ObjectList; // x0
  __int64 v10; // x1
  int32_t size; // w8
  System_Collections_Generic_List_ServantSellConfirmListViewObject__o *v12; // x21
  int v13; // w8
  __int64 v14; // x24
  ServantSellConfirmListViewObject_o *v15; // x22
  System_Action_o *v16; // x23
  const MethodInfo *v17; // x3

  if ( (byte_4189C2C & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, *(_QWORD *)&mode);
    sub_B2C35C(&Method_System_Collections_Generic_List_ServantSellConfirmListViewObject__get_Count__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_ServantSellConfirmListViewObject__get_Item__, v6);
    sub_B2C35C(&Method_ServantSellConfirmListViewManager_OnMoveEnd__, v7);
    sub_B2C35C(&StringLiteral_10036/*"OnMoveEnd"*/, v8);
    byte_4189C2C = 1;
  }
  ObjectList = ServantSellConfirmListViewManager__get_ObjectList(this, *(const MethodInfo **)&mode);
  if ( !ObjectList )
    goto LABEL_13;
  size = ObjectList->fields._size;
  v12 = ObjectList;
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
    v13 = ObjectList->fields._size;
    if ( v13 >= 1 )
    {
      v14 = 0LL;
      while ( 1 )
      {
        if ( v13 <= (unsigned int)v14 )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
        v15 = v12->fields._items->m_Items[v14];
        v16 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
        System_Action___ctor(v16, (Il2CppObject *)this, Method_ServantSellConfirmListViewManager_OnMoveEnd__, 0LL);
        if ( !v15 )
          break;
        ServantSellConfirmListViewObject__Init(v15, mode, v16, v17);
        v13 = v12->fields._size;
        if ( (int)++v14 >= v13 )
          return;
      }
LABEL_13:
      sub_B2C434(ObjectList, v10);
    }
  }
}


void __fastcall ServantSellConfirmListViewManager__SetDragEnd(
        ServantSellConfirmListViewManager_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall ServantSellConfirmListViewManager__SetDragMove(
        ServantSellConfirmListViewManager_o *this,
        int32_t moveIndex,
        const MethodInfo *method)
{
  ;
}


void __fastcall ServantSellConfirmListViewManager__SetDragStart(
        ServantSellConfirmListViewManager_o *this,
        int32_t startIndex,
        bool isDragSelect,
        const MethodInfo *method)
{
  ;
}


void __fastcall ServantSellConfirmListViewManager__SetMode(
        ServantSellConfirmListViewManager_o *this,
        int32_t mode,
        System_Action_ServantSellConfirmListViewItem__o *onSelectItem,
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
  ServantSellConfirmListViewManager__SetMode_28861976(this, mode, v10);
}


void __fastcall ServantSellConfirmListViewManager__SetMode_28861976(
        ServantSellConfirmListViewManager_o *this,
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
  ServantSellConfirmListViewManager__RequestListObject(this, v8, v6);
}


void __fastcall ServantSellConfirmListViewManager__SetObjectItem(
        ServantSellConfirmListViewManager_o *this,
        ListViewObject_o *obj,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  ServantSellConfirmListViewManager_o *v5; // x20
  __int64 v6; // x10
  int32_t v7; // w1

  v5 = this;
  if ( (byte_4189C2B & 1) == 0 )
  {
    this = (ServantSellConfirmListViewManager_o *)sub_B2C35C(&ServantSellConfirmListViewObject_TypeInfo, obj);
    byte_4189C2B = 1;
  }
  if ( !obj
    || (v6 = *(&ServantSellConfirmListViewObject_TypeInfo->_2.bitflags2 + 1),
        *(&obj->klass->_2.bitflags2 + 1) < (unsigned int)v6)
    || (ServantSellConfirmListViewObject_c *)obj->klass->_2.typeHierarchy[v6 - 1] != ServantSellConfirmListViewObject_TypeInfo )
  {
    sub_B2C434(this, obj);
  }
  if ( v5->fields.initMode == 2 )
    v7 = 3;
  else
    v7 = 2;
  ServantSellConfirmListViewObject__Init((ServantSellConfirmListViewObject_o *)obj, v7, 0LL, method);
}


System_Collections_Generic_List_ServantSellConfirmListViewObject__o *__fastcall ServantSellConfirmListViewManager__get_ClippingObjectList(
        ServantSellConfirmListViewManager_o *this,
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

  if ( (byte_4189C23 & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_ServantSellConfirmListViewObject___, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_ServantSellConfirmListViewObject__Add__, v3);
    sub_B2C35C(&Method_System_Collections_Generic_List_ServantSellConfirmListViewObject___ctor__, v4);
    sub_B2C35C(&Method_System_Collections_Generic_List_GameObject__get_Count__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_GameObject__get_Item__, v6);
    sub_B2C35C(&System_Collections_Generic_List_ServantSellConfirmListViewObject__TypeInfo, v7);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v8);
    byte_4189C23 = 1;
  }
  v9 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_ServantSellConfirmListViewObject__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v9,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_ServantSellConfirmListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
LABEL_23:
    sub_B2C434(Component_srcLineSprite, v11);
  v13 = 4LL;
  while ( 1 )
  {
    v14 = v13 - 4;
    if ( v13 - 4 >= objectList->fields._size )
      return (System_Collections_Generic_List_ServantSellConfirmListViewObject__o *)v9;
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
                                                              (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_ServantSellConfirmListViewObject___);
      if ( !Component_srcLineSprite )
        goto LABEL_23;
      v17 = (EventMissionProgressRequest_Argument_ProgressData_o *)Component_srcLineSprite;
      Component_srcLineSprite = (UnityEngine_GameObject_o *)ServantSellConfirmListViewObject__GetItem(
                                                              (ServantSellConfirmListViewObject_o *)Component_srcLineSprite,
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
            (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_ServantSellConfirmListViewObject__Add__);
        }
      }
    }
    objectList = this->fields.objectList;
    ++v13;
    if ( !objectList )
      goto LABEL_23;
  }
}


System_Collections_Generic_List_ServantSellConfirmListViewObject__o *__fastcall ServantSellConfirmListViewManager__get_ObjectList(
        ServantSellConfirmListViewManager_o *this,
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

  if ( (byte_4189C22 & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_ServantSellConfirmListViewObject___, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_ServantSellConfirmListViewObject__Add__, v3);
    sub_B2C35C(&Method_System_Collections_Generic_List_ServantSellConfirmListViewObject___ctor__, v4);
    sub_B2C35C(&Method_System_Collections_Generic_List_GameObject__get_Count__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_GameObject__get_Item__, v6);
    sub_B2C35C(&System_Collections_Generic_List_ServantSellConfirmListViewObject__TypeInfo, v7);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v8);
    byte_4189C22 = 1;
  }
  v9 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_ServantSellConfirmListViewObject__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v9,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_ServantSellConfirmListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
LABEL_19:
    sub_B2C434(Component_srcLineSprite, v11);
  v13 = 4LL;
  while ( 1 )
  {
    v14 = v13 - 4;
    if ( v13 - 4 >= objectList->fields._size )
      return (System_Collections_Generic_List_ServantSellConfirmListViewObject__o *)v9;
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
                                  (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_ServantSellConfirmListViewObject___);
      if ( !v9 )
        goto LABEL_19;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v9,
        (EventMissionProgressRequest_Argument_ProgressData_o *)Component_srcLineSprite,
        (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_ServantSellConfirmListViewObject__Add__);
    }
    objectList = this->fields.objectList;
    ++v13;
    if ( !objectList )
      goto LABEL_19;
  }
}


void __fastcall ServantSellConfirmListViewManager___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  struct ServantSellConfirmListViewManager___c_StaticFields *static_fields; // x0

  if ( (byte_4185413 & 1) == 0 )
  {
    sub_B2C35C(&ServantSellConfirmListViewManager___c_TypeInfo, v1);
    byte_4185413 = 1;
  }
  v2 = (Il2CppObject *)sub_B2C42C(ServantSellConfirmListViewManager___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  static_fields = ServantSellConfirmListViewManager___c_TypeInfo->static_fields;
  static_fields->__9 = (struct ServantSellConfirmListViewManager___c_o *)v2;
  sub_B2C2F8(static_fields, v2);
}


void __fastcall ServantSellConfirmListViewManager___c___ctor(
        ServantSellConfirmListViewManager___c_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall ServantSellConfirmListViewManager___c___GetSortEntList_b__19_0(
        ServantSellConfirmListViewManager___c_o *this,
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

  if ( (byte_4185414 & 1) == 0 )
  {
    this = (ServantSellConfirmListViewManager___c_o *)sub_B2C35C(
                                                        &CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo,
                                                        a);
    byte_4185414 = 1;
  }
  if ( !a || (this = (ServantSellConfirmListViewManager___c_o *)UserCommandCodeEntity__GetRarity(a, 0LL), !b) )
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


int32_t __fastcall ServantSellConfirmListViewManager___c___GetSvtSortEntList_b__16_0(
        ServantSellConfirmListViewManager___c_o *this,
        UserServantEntity_o *a,
        UserServantEntity_o *b,
        const MethodInfo *method)
{
  int32_t Rarity; // w21
  int32_t CollectionNo; // w21
  int32_t v9; // w20

  if ( !a || (this = (ServantSellConfirmListViewManager___c_o *)UserServantEntity__getRarity(a, 0LL), !b) )
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