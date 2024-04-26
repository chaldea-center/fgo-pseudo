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

  if ( (byte_435394F & 1) == 0 )
  {
    sub_B70694(&Method_System_Action_ServantSellConfirmListViewItem__Invoke__);
    byte_435394F = 1;
  }
  onSelectItem = this->fields.onSelectItem;
  if ( onSelectItem )
  {
    this->fields.onSelectItem = 0LL;
    sub_B70630(
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
      (const MethodInfo_264C15C *)Method_System_Action_ServantSellConfirmListViewItem__Invoke__);
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
  DataManager_o *Instance; // x0
  __int64 v10; // x1
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v12; // x8
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *v13; // x21
  unsigned __int64 v14; // x26
  int64_t v15; // x24
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x22
  int32_t v17; // w23
  UserServantEntity_o *Entity; // x25
  ServantSellConfirmListViewItem_o *v19; // x24
  const MethodInfo *v20; // x4
  __int64 v21; // x0

  if ( (byte_4353948 & 1) == 0 )
  {
    sub_B70694(&Method_DataManager_GetMasterData_UserCommandCodeMaster___);
    sub_B70694(&Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__GetEntity__);
    sub_B70694(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    sub_B70694(&ServantSellConfirmListViewItem_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4353948 = 1;
  }
  if ( commandCodeIds && *(_QWORD *)&commandCodeIds->max_length && !isExceeded && !isSellLastServant )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_16;
    MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                           Instance,
                                           (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_UserCommandCodeMaster___);
    v12 = *(_QWORD *)&commandCodeIds->max_length;
    if ( (int)v12 >= 1 )
    {
      v13 = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)MasterData_WarQuestSelectionMaster;
      v14 = 0LL;
      while ( 1 )
      {
        if ( v14 >= (unsigned int)v12 )
        {
          v21 = sub_B70798(MasterData_WarQuestSelectionMaster);
          sub_B70738(v21, 0LL);
        }
        Instance = (DataManager_o *)this->fields.parentManager;
        if ( !Instance )
          break;
        v15 = commandCodeIds->m_Items[v14];
        itemList = this->fields.itemList;
        Instance = (DataManager_o *)ServantOperationManager__GetSelectedOrderByCommandCodeId(
                                      (ServantOperationManager_o *)Instance,
                                      v15,
                                      0LL);
        if ( !v13 )
          break;
        v17 = (int)Instance;
        Entity = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
                   v13,
                   v15,
                   (const MethodInfo_21C0668 *)Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__GetEntity__);
        v19 = (ServantSellConfirmListViewItem_o *)sub_B70764(ServantSellConfirmListViewItem_TypeInfo);
        ServantSellConfirmListViewItem___ctor_28574024(v19, v17, (UserCommandCodeEntity_o *)Entity, 0, v20);
        if ( !itemList )
          break;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)itemList,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v19,
          (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
        LODWORD(v12) = commandCodeIds->max_length;
        if ( (__int64)++v14 >= (int)v12 )
          return;
      }
LABEL_16:
      sub_B7076C(Instance, v10);
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
  ServantSellConfirmListViewManager_o *v9; // x0
  const MethodInfo *v10; // x2
  System_Collections_Generic_List_UserCommandCodeEntity__o *SortEntList; // x0
  __int64 v12; // x1
  System_Collections_Generic_List_WarBoardManager_TaskList__o *v13; // x20
  Il2CppObject *current; // x22
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x21
  int32_t v16; // w24
  ServantSellConfirmListViewItem_o *v17; // x23
  const MethodInfo *v18; // x4
  __int64 v19; // x0
  __int64 v20; // x1
  System_Collections_Generic_List_Enumerator_T__o v21; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4353949 & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_UserCommandCodeEntity__Dispose__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_UserCommandCodeEntity__MoveNext__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_UserCommandCodeEntity__get_Current__);
    sub_B70694(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    sub_B70694(&Method_System_Collections_Generic_List_UserCommandCodeEntity__GetEnumerator__);
    sub_B70694(&Method_System_Collections_Generic_List_UserCommandCodeEntity__IndexOf__);
    sub_B70694(&Method_System_Collections_Generic_List_long__get_Count__);
    sub_B70694(&ServantSellConfirmListViewItem_TypeInfo);
    byte_4353949 = 1;
  }
  memset(&v21, 0, sizeof(v21));
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
  if ( commandCodeIds && commandCodeIds->fields._size >= 1 && !isExceeded && !isSellLastServant )
  {
    SortEntList = ServantSellConfirmListViewManager__GetSortEntList(v9, commandCodeIds, v10);
    if ( !SortEntList )
      sub_B7076C(0LL, v12);
    v13 = (System_Collections_Generic_List_WarBoardManager_TaskList__o *)SortEntList;
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v21,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)SortEntList,
      (const MethodInfo_3026504 *)Method_System_Collections_Generic_List_UserCommandCodeEntity__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v21,
              (const MethodInfo_22212CC *)Method_System_Collections_Generic_List_Enumerator_UserCommandCodeEntity__MoveNext__) )
    {
      current = v21.fields.current;
      itemList = this->fields.itemList;
      v16 = System_Collections_Generic_List_WarBoardManager_TaskList___IndexOf(
              v13,
              (WarBoardManager_TaskList_o *)v21.fields.current,
              (const MethodInfo_3026738 *)Method_System_Collections_Generic_List_UserCommandCodeEntity__IndexOf__);
      v17 = (ServantSellConfirmListViewItem_o *)sub_B70764(ServantSellConfirmListViewItem_TypeInfo);
      ServantSellConfirmListViewItem___ctor_28574024(v17, v16, (UserCommandCodeEntity_o *)current, 0, v18);
      if ( !itemList )
        sub_B7076C(v19, v20);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)itemList,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v17,
        (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v21,
      (const MethodInfo_22212C8 *)Method_System_Collections_Generic_List_Enumerator_UserCommandCodeEntity__Dispose__);
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
  int64_t Instance; // x0
  __int64 v9; // x1
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *MasterData_WarQuestSelectionMaster; // x23
  UserDeckMaster_o *v11; // x25
  ServantOperationManager_o *parentManager; // x19
  System_Collections_Generic_List_ServantOperationListViewItem__o *SelectedEquipeCmdCardServantList; // x0
  __int64 v14; // x8
  unsigned __int64 v15; // x25
  int64_t v16; // x19
  int64_t v17; // x27
  int64_t v18; // x26
  __int64 v19; // x19
  __int64 v20; // x20
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x28
  ServantSellConfirmListViewManager_o *v22; // x23
  int64_t favoriteUserSvtId; // x24
  int32_t v24; // w20
  ServantSellConfirmListViewItem_o *v25; // x0
  bool v26; // w5
  EventMissionProgressRequest_Argument_ProgressData_o *v27; // x19
  const MethodInfo *v28; // x6
  __int64 v29; // x0
  System_Collections_Generic_List_int__o *v30; // [xsp+8h] [xbp-98h]
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *v31; // [xsp+10h] [xbp-90h]
  UserGameEntity_o *SelfUserGame; // [xsp+18h] [xbp-88h]
  System_Int64_array *v34; // [xsp+30h] [xbp-70h]
  System_Int64_array *v35; // [xsp+38h] [xbp-68h]
  System_Int64_array *equipIdList; // [xsp+40h] [xbp-60h] BYREF
  System_Int64_array *svtIdList; // [xsp+48h] [xbp-58h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v38; // 0:x0.16

  if ( (byte_4353945 & 1) == 0 )
  {
    sub_B70694(&Method_DataManager_GetMasterData_UserDeckMaster___);
    sub_B70694(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_B70694(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_B70694(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    sub_B70694(&Method_System_Collections_Generic_List_int__Contains__);
    sub_B70694(&NetworkManager_TypeInfo);
    sub_B70694(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B70694(&ServantSellConfirmListViewItem_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4353945 = 1;
  }
  equipIdList = 0LL;
  svtIdList = 0LL;
  if ( servantIds && *(_QWORD *)&servantIds->max_length )
  {
    Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_32;
    MasterData_WarQuestSelectionMaster = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)DataManager__GetMasterData_WarQuestSelectionMaster_((DataManager_o *)Instance, (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_UserServantMaster___);
    SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
    Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_32;
    v11 = (UserDeckMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                (DataManager_o *)Instance,
                                (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_UserDeckMaster___);
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    Instance = NetworkManager__get_UserId(0LL);
    if ( !v11 )
      goto LABEL_32;
    UserDeckMaster__getPartyList(v11, &svtIdList, &equipIdList, Instance, 0LL);
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
    v14 = *(_QWORD *)&servantIds->max_length;
    v30 = (System_Collections_Generic_List_int__o *)Instance;
    if ( (int)v14 >= 1 )
    {
      v15 = 0LL;
      v31 = MasterData_WarQuestSelectionMaster;
      while ( 1 )
      {
        if ( v15 >= (unsigned int)v14 )
        {
          v29 = sub_B70798(Instance);
          sub_B70738(v29, 0LL);
        }
        if ( !MasterData_WarQuestSelectionMaster )
          break;
        v16 = servantIds->m_Items[v15];
        Instance = (int64_t)DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
                              MasterData_WarQuestSelectionMaster,
                              v16,
                              (const MethodInfo_21C0668 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
        v17 = Instance;
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
          if ( !v17 )
            break;
          v18 = v16;
          v20 = *(_QWORD *)(v17 + 80);
          v19 = *(_QWORD *)(v17 + 88);
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          }
          *(_QWORD *)&v38.fields.currentCryptoKey = v20;
          *(_QWORD *)&v38.fields.fakeValue = v19;
          v9 = (unsigned int)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984(v38, 0LL);
          Instance = (int64_t)v30;
          if ( !v30 )
            break;
          Instance = System_Collections_Generic_List_int___Contains(
                       v30,
                       v9,
                       (const MethodInfo_30B662C *)Method_System_Collections_Generic_List_int__Contains__);
          v16 = v18;
          if ( (Instance & 1) != 0 )
          {
LABEL_26:
            Instance = (int64_t)this->fields.parentManager;
            if ( !Instance )
              break;
            itemList = this->fields.itemList;
            v22 = this;
            Instance = ServantOperationManager__GetSelectedOrderByServantId(
                         (ServantOperationManager_o *)Instance,
                         v16,
                         0LL);
            if ( !SelfUserGame )
              break;
            favoriteUserSvtId = SelfUserGame->fields.favoriteUserSvtId;
            v24 = Instance;
            v35 = equipIdList;
            v34 = svtIdList;
            v25 = (ServantSellConfirmListViewItem_o *)sub_B70764(ServantSellConfirmListViewItem_TypeInfo);
            v26 = v16 == favoriteUserSvtId;
            v27 = (EventMissionProgressRequest_Argument_ProgressData_o *)v25;
            ServantSellConfirmListViewItem___ctor(v25, v24, (UserServantEntity_o *)v17, v34, v35, v26, v28);
            if ( !itemList )
              break;
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)itemList,
              v27,
              (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
            this = v22;
            MasterData_WarQuestSelectionMaster = v31;
          }
        }
        LODWORD(v14) = servantIds->max_length;
        if ( (__int64)++v15 >= (int)v14 )
          return;
      }
LABEL_32:
      sub_B7076C(Instance, v9);
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
  DataManager_o *Instance; // x0
  __int64 v7; // x1
  UserGameEntity_o *SelfUserGame; // x22
  UserDeckMaster_o *MasterData_WarQuestSelectionMaster; // x19
  ServantOperationManager_o *parentManager; // x19
  System_Collections_Generic_List_ServantOperationListViewItem__o *SelectedEquipeCmdCardServantList; // x0
  System_Collections_Generic_List_long__o *v12; // x19
  const MethodInfo *v13; // x2
  __int64 v14; // x8
  unsigned __int64 v15; // x20
  System_Collections_Generic_List_WarBoardManager_TaskList__o *v16; // x24
  _BOOL8 v17; // x0
  __int64 v18; // x1
  Il2CppObject *current; // x25
  void *monitor; // x19
  Il2CppClass *klass; // x20
  __int64 v22; // x1
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x26
  __int64 v24; // x0
  __int64 v25; // x1
  Il2CppObject v26; // q0
  int32_t v27; // w27
  System_Int64_array *v28; // x19
  System_Int64_array *v29; // x28
  int64_t v30; // x0
  __int64 v31; // x1
  int64_t favoriteUserSvtId; // x23
  int64_t v33; // x21
  ServantSellConfirmListViewItem_o *v34; // x20
  const MethodInfo *v35; // x6
  __int64 v36; // x0
  __int64 v37; // x1
  __int64 v38; // x0
  System_Collections_Generic_List_int__o *EquipedCommandCodeSellLastSvtList; // [xsp+8h] [xbp-D8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v43; // [xsp+20h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v44; // [xsp+40h] [xbp-A0h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v45; // [xsp+60h] [xbp-80h] BYREF
  System_Int64_array *equipIdList; // [xsp+80h] [xbp-60h] BYREF
  System_Int64_array *svtIdList; // [xsp+88h] [xbp-58h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v48; // 0:x0.16

  if ( (byte_4353946 & 1) == 0 )
  {
    sub_B70694(&Method_DataManager_GetMasterData_UserDeckMaster___);
    sub_B70694(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_UserServantEntity__Dispose__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_UserServantEntity__MoveNext__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_UserServantEntity__get_Current__);
    sub_B70694(&Method_System_Collections_Generic_List_long__Add__);
    sub_B70694(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    sub_B70694(&Method_System_Collections_Generic_List_int__Contains__);
    sub_B70694(&Method_System_Collections_Generic_List_UserServantEntity__GetEnumerator__);
    sub_B70694(&Method_System_Collections_Generic_List_UserServantEntity__IndexOf__);
    sub_B70694(&Method_System_Collections_Generic_List_long___ctor__);
    sub_B70694(&System_Collections_Generic_List_long__TypeInfo);
    sub_B70694(&NetworkManager_TypeInfo);
    sub_B70694(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B70694(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_B70694(&ServantSellConfirmListViewItem_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4353946 = 1;
  }
  equipIdList = 0LL;
  svtIdList = 0LL;
  memset(&v45, 0, sizeof(v45));
  this->fields.kind = 3;
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
  if ( servantIds && *(_QWORD *)&servantIds->max_length )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_39;
    DataManager__GetMasterData_WarQuestSelectionMaster_(
      Instance,
      (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_UserServantMaster___);
    SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_39;
    MasterData_WarQuestSelectionMaster = (UserDeckMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                               Instance,
                                                               (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_UserDeckMaster___);
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
    v12 = (System_Collections_Generic_List_long__o *)sub_B70764(System_Collections_Generic_List_long__TypeInfo);
    System_Collections_Generic_List_long____ctor(
      v12,
      (const MethodInfo_30BB42C *)Method_System_Collections_Generic_List_long___ctor__);
    v14 = *(_QWORD *)&servantIds->max_length;
    if ( (int)v14 >= 1 )
    {
      v15 = 0LL;
      while ( 1 )
      {
        if ( v15 >= (unsigned int)v14 )
        {
          v38 = sub_B70798(Instance);
          sub_B70738(v38, 0LL);
        }
        if ( !v12 )
          break;
        System_Collections_Generic_List_long___Add(
          v12,
          servantIds->m_Items[v15],
          (const MethodInfo_30BC188 *)Method_System_Collections_Generic_List_long__Add__);
        LODWORD(v14) = servantIds->max_length;
        if ( (__int64)++v15 >= (int)v14 )
          goto LABEL_17;
      }
LABEL_39:
      sub_B7076C(Instance, v7);
    }
LABEL_17:
    Instance = (DataManager_o *)ServantSellConfirmListViewManager__GetSvtSortEntList(
                                  (ServantSellConfirmListViewManager_o *)Instance,
                                  v12,
                                  v13);
    if ( !Instance )
      goto LABEL_39;
    v16 = (System_Collections_Generic_List_WarBoardManager_TaskList__o *)Instance;
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v44,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)Instance,
      (const MethodInfo_3026504 *)Method_System_Collections_Generic_List_UserServantEntity__GetEnumerator__);
    v45.fields.current = (Il2CppObject *)v44.fields.fakeValue;
    *(_OWORD *)&v45.fields.list = *(_OWORD *)&v44.fields.currentCryptoKey;
    while ( 1 )
    {
      v17 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v45,
              (const MethodInfo_22212CC *)Method_System_Collections_Generic_List_Enumerator_UserServantEntity__MoveNext__);
      if ( !v17 )
        break;
      current = v45.fields.current;
      if ( isExceeded )
      {
        if ( !v45.fields.current )
          sub_B7076C(v17, v18);
        v17 = UserServantEntity__isExceeded((UserServantEntity_o *)v45.fields.current, 0LL);
        if ( !v17 )
          continue;
      }
      if ( !isSellLastServant )
        goto LABEL_30;
      if ( !current )
        sub_B7076C(v17, v18);
      klass = current[5].klass;
      monitor = current[5].monitor;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v48.fields.currentCryptoKey = klass;
      *(_QWORD *)&v48.fields.fakeValue = monitor;
      v22 = (unsigned int)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984(v48, 0LL);
      if ( !EquipedCommandCodeSellLastSvtList )
        sub_B7076C(0LL, v22);
      if ( System_Collections_Generic_List_int___Contains(
             EquipedCommandCodeSellLastSvtList,
             v22,
             (const MethodInfo_30B662C *)Method_System_Collections_Generic_List_int__Contains__) )
      {
LABEL_30:
        itemList = this->fields.itemList;
        v24 = System_Collections_Generic_List_WarBoardManager_TaskList___IndexOf(
                v16,
                (WarBoardManager_TaskList_o *)current,
                (const MethodInfo_3026738 *)Method_System_Collections_Generic_List_UserServantEntity__IndexOf__);
        if ( !current )
          sub_B7076C(v24, v25);
        v26 = current[2];
        v27 = v24;
        v28 = equipIdList;
        v29 = svtIdList;
        *(Il2CppObject *)&v44.fields.currentCryptoKey = current[1];
        *(Il2CppObject *)&v44.fields.fakeValue = v26;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        }
        v43 = v44;
        v30 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_45183140(&v43, 0LL);
        if ( !SelfUserGame )
          sub_B7076C(v30, v31);
        favoriteUserSvtId = SelfUserGame->fields.favoriteUserSvtId;
        v33 = v30;
        v34 = (ServantSellConfirmListViewItem_o *)sub_B70764(ServantSellConfirmListViewItem_TypeInfo);
        ServantSellConfirmListViewItem___ctor(
          v34,
          v27,
          (UserServantEntity_o *)current,
          v29,
          v28,
          v33 == favoriteUserSvtId,
          v35);
        if ( !itemList )
          sub_B7076C(v36, v37);
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)itemList,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v34,
          (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
      }
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v45,
      (const MethodInfo_22212C8 *)Method_System_Collections_Generic_List_Enumerator_UserServantEntity__Dispose__);
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
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x22
  unsigned __int64 v6; // x24
  int64_t v7; // x21
  ListViewItem_o *v8; // x8
  __int64 v9; // x11
  __int64 v10; // x22
  __int64 v11; // x23
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v13; // 0:x0.16

  v4 = this;
  if ( (byte_4353950 & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_B70694(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_B70694(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    this = (ServantSellConfirmListViewManager_o *)sub_B70694(&ServantSellConfirmListViewItem_TypeInfo);
    byte_4353950 = 1;
  }
  itemList = v4->fields.itemList;
  if ( !itemList )
LABEL_19:
    sub_B7076C(this, *(_QWORD *)&svtId);
  v6 = 0LL;
  v7 = 0LL;
  while ( (__int64)v6 < itemList->fields._size )
  {
    if ( v6 >= (unsigned int)itemList->fields._size )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41939488(0LL);
    v8 = itemList->fields._items->m_Items[v6];
    if ( v8 )
    {
      v9 = *(&ServantSellConfirmListViewItem_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v8->klass->_2.bitflags2 + 1) >= (unsigned int)v9
        && (ServantSellConfirmListViewItem_c *)v8->klass->_2.typeHierarchy[v9 - 1] == ServantSellConfirmListViewItem_TypeInfo )
      {
        if ( (ServantSellConfirmListViewItem_c *)v8->klass->_2.typeHierarchy[*(&ServantSellConfirmListViewItem_TypeInfo->_2.bitflags2
                                                                             + 1)
                                                                           - 1] != ServantSellConfirmListViewItem_TypeInfo )
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
        this = (ServantSellConfirmListViewManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984(
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
int64_t __fastcall ServantSellConfirmListViewManager__GetCommandCodeAmountSortValue(
        ServantSellConfirmListViewManager_o *this,
        int32_t commandCodeId,
        const MethodInfo *method)
{
  ServantSellConfirmListViewManager_o *v4; // x20
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x24
  unsigned __int64 v6; // x22
  int64_t v7; // x21
  ListViewItem_o *v8; // x8
  __int64 v9; // x11

  v4 = this;
  if ( (byte_4353951 & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_B70694(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    this = (ServantSellConfirmListViewManager_o *)sub_B70694(&ServantSellConfirmListViewItem_TypeInfo);
    byte_4353951 = 1;
  }
  itemList = v4->fields.itemList;
  if ( !itemList )
LABEL_16:
    sub_B7076C(this, *(_QWORD *)&commandCodeId);
  v6 = 0LL;
  v7 = 0LL;
  while ( (__int64)v6 < itemList->fields._size )
  {
    if ( v6 >= (unsigned int)itemList->fields._size )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41939488(0LL);
    v8 = itemList->fields._items->m_Items[v6];
    if ( v8 )
    {
      v9 = *(&ServantSellConfirmListViewItem_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v8->klass->_2.bitflags2 + 1) >= (unsigned int)v9
        && (ServantSellConfirmListViewItem_c *)v8->klass->_2.typeHierarchy[v9 - 1] == ServantSellConfirmListViewItem_TypeInfo )
      {
        itemList = v4->fields.itemList;
        ++v6;
        if ( (ServantSellConfirmListViewItem_c *)v8->klass->_2.typeHierarchy[*(&ServantSellConfirmListViewItem_TypeInfo->_2.bitflags2
                                                                             + 1)
                                                                           - 1] != ServantSellConfirmListViewItem_TypeInfo )
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
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v4; // x19
  void *Instance; // x0
  __int64 v6; // x1
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *v7; // x21
  _BOOL8 v8; // x0
  __int64 v9; // x1
  UserServantEntity_o *Entity; // x0
  struct ServantSellConfirmListViewManager___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__19_0; // x20
  Il2CppObject *v13; // x21
  struct ServantSellConfirmListViewManager___c_StaticFields *v14; // x0
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  System_Collections_Generic_List_Enumerator_T__o v22; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v23; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_435394A & 1) == 0 )
  {
    sub_B70694(&Method_System_Comparison_UserCommandCodeEntity___ctor__);
    sub_B70694(&System_Comparison_UserCommandCodeEntity__TypeInfo);
    sub_B70694(&Method_DataManager_GetMasterData_UserCommandCodeMaster___);
    sub_B70694(&Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__GetEntity__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_long__Dispose__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_long__MoveNext__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_long__get_Current__);
    sub_B70694(&Method_System_Collections_Generic_List_UserCommandCodeEntity__Add__);
    sub_B70694(&Method_System_Collections_Generic_List_long__GetEnumerator__);
    sub_B70694(&Method_System_Collections_Generic_List_UserCommandCodeEntity__Sort__);
    sub_B70694(&Method_System_Collections_Generic_List_UserCommandCodeEntity___ctor__);
    sub_B70694(&System_Collections_Generic_List_UserCommandCodeEntity__TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B70694(&Method_ServantSellConfirmListViewManager___c__GetSortEntList_b__19_0__);
    sub_B70694(&ServantSellConfirmListViewManager___c_TypeInfo);
    byte_435394A = 1;
  }
  memset(&v23, 0, sizeof(v23));
  v4 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B70764(System_Collections_Generic_List_UserCommandCodeEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v4,
    (const MethodInfo_30249C4 *)Method_System_Collections_Generic_List_UserCommandCodeEntity___ctor__);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_22;
  Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
               (DataManager_o *)Instance,
               (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_UserCommandCodeMaster___);
  if ( !commandCodeIds )
    goto LABEL_22;
  v7 = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)Instance;
  System_Collections_Generic_List_long___GetEnumerator(
    &v22,
    commandCodeIds,
    (const MethodInfo_30BCFCC *)Method_System_Collections_Generic_List_long__GetEnumerator__);
  v23 = v22;
  while ( 1 )
  {
    v8 = System_Collections_Generic_List_Enumerator_long___MoveNext(
           &v23,
           (const MethodInfo_221FB20 *)Method_System_Collections_Generic_List_Enumerator_long__MoveNext__);
    if ( !v8 )
      break;
    if ( !v7 )
      sub_B7076C(v8, v9);
    Entity = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
               v7,
               (int64_t)v23.fields.current,
               (const MethodInfo_21C0668 *)Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__GetEntity__);
    if ( !v4 )
      sub_B7076C(Entity, Entity);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      v4,
      (EventMissionProgressRequest_Argument_ProgressData_o *)Entity,
      (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_UserCommandCodeEntity__Add__);
  }
  System_Collections_Generic_List_Enumerator_long___Dispose(
    &v23,
    (const MethodInfo_221FB1C *)Method_System_Collections_Generic_List_Enumerator_long__Dispose__);
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
    v13 = (Il2CppObject *)static_fields->__9;
    _9__19_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B70764(System_Comparison_UserCommandCodeEntity__TypeInfo);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__19_0,
      v13,
      Method_ServantSellConfirmListViewManager___c__GetSortEntList_b__19_0__,
      (const MethodInfo_2B05B38 *)Method_System_Comparison_UserCommandCodeEntity___ctor__);
    v14 = ServantSellConfirmListViewManager___c_TypeInfo->static_fields;
    v14->__9__19_0 = (struct System_Comparison_UserCommandCodeEntity__o *)_9__19_0;
    sub_B70630(
      (BattleServantConfConponent_o *)&v14->__9__19_0,
      (System_Int32_array **)_9__19_0,
      v15,
      v16,
      v17,
      v18,
      v19,
      v20);
  }
  if ( !v4 )
LABEL_22:
    sub_B7076C(Instance, v6);
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v4,
    (System_Comparison_T__o *)_9__19_0,
    (const MethodInfo_3027764 *)Method_System_Collections_Generic_List_UserCommandCodeEntity__Sort__);
  return (System_Collections_Generic_List_UserCommandCodeEntity__o *)v4;
}


System_Collections_Generic_List_UserServantEntity__o *__fastcall ServantSellConfirmListViewManager__GetSvtSortEntList(
        ServantSellConfirmListViewManager_o *this,
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
  struct ServantSellConfirmListViewManager___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__16_0; // x20
  Il2CppObject *v13; // x21
  struct ServantSellConfirmListViewManager___c_StaticFields *v14; // x0
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  System_Collections_Generic_List_Enumerator_T__o v22; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v23; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_4353947 & 1) == 0 )
  {
    sub_B70694(&Method_System_Comparison_UserServantEntity___ctor__);
    sub_B70694(&System_Comparison_UserServantEntity__TypeInfo);
    sub_B70694(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_B70694(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_long__Dispose__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_long__MoveNext__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_long__get_Current__);
    sub_B70694(&Method_System_Collections_Generic_List_UserServantEntity__Add__);
    sub_B70694(&Method_System_Collections_Generic_List_long__GetEnumerator__);
    sub_B70694(&Method_System_Collections_Generic_List_UserServantEntity__Sort__);
    sub_B70694(&Method_System_Collections_Generic_List_UserServantEntity___ctor__);
    sub_B70694(&System_Collections_Generic_List_UserServantEntity__TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B70694(&Method_ServantSellConfirmListViewManager___c__GetSvtSortEntList_b__16_0__);
    sub_B70694(&ServantSellConfirmListViewManager___c_TypeInfo);
    byte_4353947 = 1;
  }
  memset(&v23, 0, sizeof(v23));
  v4 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B70764(System_Collections_Generic_List_UserServantEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v4,
    (const MethodInfo_30249C4 *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_22;
  Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
               (DataManager_o *)Instance,
               (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !servantIds )
    goto LABEL_22;
  v7 = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)Instance;
  System_Collections_Generic_List_long___GetEnumerator(
    &v22,
    servantIds,
    (const MethodInfo_30BCFCC *)Method_System_Collections_Generic_List_long__GetEnumerator__);
  v23 = v22;
  while ( 1 )
  {
    v8 = System_Collections_Generic_List_Enumerator_long___MoveNext(
           &v23,
           (const MethodInfo_221FB20 *)Method_System_Collections_Generic_List_Enumerator_long__MoveNext__);
    if ( !v8 )
      break;
    if ( !v7 )
      sub_B7076C(v8, v9);
    Entity = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
               v7,
               (int64_t)v23.fields.current,
               (const MethodInfo_21C0668 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    if ( !v4 )
      sub_B7076C(Entity, Entity);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      v4,
      (EventMissionProgressRequest_Argument_ProgressData_o *)Entity,
      (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_UserServantEntity__Add__);
  }
  System_Collections_Generic_List_Enumerator_long___Dispose(
    &v23,
    (const MethodInfo_221FB1C *)Method_System_Collections_Generic_List_Enumerator_long__Dispose__);
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
    v13 = (Il2CppObject *)static_fields->__9;
    _9__16_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B70764(System_Comparison_UserServantEntity__TypeInfo);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__16_0,
      v13,
      Method_ServantSellConfirmListViewManager___c__GetSvtSortEntList_b__16_0__,
      (const MethodInfo_2B05B38 *)Method_System_Comparison_UserServantEntity___ctor__);
    v14 = ServantSellConfirmListViewManager___c_TypeInfo->static_fields;
    v14->__9__16_0 = (struct System_Comparison_UserServantEntity__o *)_9__16_0;
    sub_B70630(
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
    sub_B7076C(Instance, v6);
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v4,
    (System_Comparison_T__o *)_9__16_0,
    (const MethodInfo_3027764 *)Method_System_Collections_Generic_List_UserServantEntity__Sort__);
  return (System_Collections_Generic_List_UserServantEntity__o *)v4;
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

  if ( (byte_435394B & 1) == 0 )
  {
    sub_B70694(&Method_DataManager_GetMasterData_UserCommandCodeMaster___);
    sub_B70694(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_B70694(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
    sub_B70694(&Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__TryGetEntity__);
    sub_B70694(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_B70694(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    sub_B70694(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_B70694(&ServantSellConfirmListViewItem_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_435394B = 1;
  }
  entity = 0LL;
  v42 = 0LL;
  if ( !this->fields.itemList )
    return;
  kind = this->fields.kind;
  Instance = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_54;
  if ( kind == 2 )
  {
    Instance = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_UserCommandCodeMaster___);
    if ( Instance )
    {
      Instance = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___TryGetEntity(
                   (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)Instance,
                   &entity,
                   selectedId,
                   (const MethodInfo_21C06C4 *)Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__TryGetEntity__);
      if ( (Instance & 1) == 0 )
        return;
      itemList = this->fields.itemList;
      if ( itemList )
      {
        v9 = 0LL;
        while ( (__int64)v9 < itemList->fields._size )
        {
          if ( v9 >= (unsigned int)itemList->fields._size )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_41939488(0LL);
          v10 = itemList->fields._items->m_Items[v9];
          if ( v10 )
          {
            v11 = *(&ServantSellConfirmListViewItem_TypeInfo->_2.bitflags2 + 1);
            if ( *(&v10->klass->_2.bitflags2 + 1) >= (unsigned int)v11
              && (ServantSellConfirmListViewItem_c *)v10->klass->_2.typeHierarchy[v11 - 1] == ServantSellConfirmListViewItem_TypeInfo )
            {
              Instance = ServantSellConfirmListViewItem__get_UserCommandCodeId(
                           (ServantSellConfirmListViewItem_o *)v10,
                           v7);
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
                if ( v13 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_45183140(&v40, 0LL) )
                {
                  v20 = (System_Int32_array **)entity;
                  v10[1].fields.sortValue0 = (int64_t)entity;
                  sub_B70630(
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
    sub_B7076C(Instance, v7);
  }
  Instance = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !Instance )
    goto LABEL_54;
  if ( !DataMasterBase_UserServantStorageMaster__UserServantEntity__long___TryGetEntity(
          (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)Instance,
          &v42,
          selectedId,
          (const MethodInfo_21C06C4 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__) )
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
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41939488(0LL);
    v25 = v22->fields._items->m_Items[v24];
    if ( v25 )
    {
      v26 = *(&ServantSellConfirmListViewItem_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v25->klass->_2.bitflags2 + 1) >= (unsigned int)v26
        && (ServantSellConfirmListViewItem_c *)v25->klass->_2.typeHierarchy[v26 - 1] == ServantSellConfirmListViewItem_TypeInfo )
      {
        Instance = ServantSellConfirmListViewItem__get_UserSvtId((ServantSellConfirmListViewItem_o *)v25, v7);
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
          if ( v28 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_45183140(&v39, 0LL) )
          {
            v36 = (System_Int32_array **)v42;
            v25[1].klass = (ListViewItem_c *)v42;
            sub_B70630((BattleServantConfConponent_o *)&v25[1], v36, v30, v31, v32, v33, v34, v35);
          }
          Instance = ServantSellConfirmListViewItem__get_UserSvtId((ServantSellConfirmListViewItem_o *)v25, v29);
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

  if ( (byte_435394E & 1) == 0 )
  {
    sub_B70694(&UnityEngine_Object_TypeInfo);
    byte_435394E = 1;
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
  System_Collections_Generic_List_ServantSellConfirmListViewObject__o *ObjectList; // x0
  __int64 v6; // x1
  int32_t size; // w8
  System_Collections_Generic_List_ServantSellConfirmListViewObject__o *v8; // x21
  int v9; // w8
  __int64 v10; // x24
  ServantSellConfirmListViewObject_o *v11; // x22
  System_Action_o *v12; // x23
  const MethodInfo *v13; // x3

  if ( (byte_435394D & 1) == 0 )
  {
    sub_B70694(&System_Action_TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_List_ServantSellConfirmListViewObject__get_Count__);
    sub_B70694(&Method_System_Collections_Generic_List_ServantSellConfirmListViewObject__get_Item__);
    sub_B70694(&Method_ServantSellConfirmListViewManager_OnMoveEnd__);
    sub_B70694(&StringLiteral_10159/*"OnMoveEnd"*/);
    byte_435394D = 1;
  }
  ObjectList = ServantSellConfirmListViewManager__get_ObjectList(this, *(const MethodInfo **)&mode);
  if ( !ObjectList )
    goto LABEL_13;
  size = ObjectList->fields._size;
  v8 = ObjectList;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10159/*"OnMoveEnd"*/,
      0.0,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    v9 = ObjectList->fields._size;
    if ( v9 >= 1 )
    {
      v10 = 0LL;
      while ( 1 )
      {
        if ( v9 <= (unsigned int)v10 )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41939488(0LL);
        v11 = v8->fields._items->m_Items[v10];
        v12 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
        System_Action___ctor(v12, (Il2CppObject *)this, Method_ServantSellConfirmListViewManager_OnMoveEnd__, 0LL);
        if ( !v11 )
          break;
        ServantSellConfirmListViewObject__Init(v11, mode, v12, v13);
        v9 = v8->fields._size;
        if ( (int)++v10 >= v9 )
          return;
      }
LABEL_13:
      sub_B7076C(ObjectList, v6);
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
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.onSelectItem,
    (System_Int32_array **)onSelectItem,
    (System_String_array **)onSelectItem,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  ServantSellConfirmListViewManager__SetMode_28585732(this, mode, v10);
}


void __fastcall ServantSellConfirmListViewManager__SetMode_28585732(
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
  if ( (byte_435394C & 1) == 0 )
  {
    this = (ServantSellConfirmListViewManager_o *)sub_B70694(&ServantSellConfirmListViewObject_TypeInfo);
    byte_435394C = 1;
  }
  if ( !obj
    || (v6 = *(&ServantSellConfirmListViewObject_TypeInfo->_2.bitflags2 + 1),
        *(&obj->klass->_2.bitflags2 + 1) < (unsigned int)v6)
    || (ServantSellConfirmListViewObject_c *)obj->klass->_2.typeHierarchy[v6 - 1] != ServantSellConfirmListViewObject_TypeInfo )
  {
    sub_B7076C(this, obj);
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
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v3; // x20
  UnityEngine_GameObject_o *Component_srcLineSprite; // x0
  const MethodInfo *v5; // x1
  struct System_Collections_Generic_List_GameObject__o *objectList; // x21
  __int64 v7; // x22
  unsigned __int64 v8; // x26
  UnityEngine_Object_o *v9; // x21
  struct System_Collections_Generic_List_GameObject__o *v10; // x21
  EventMissionProgressRequest_Argument_ProgressData_o *v11; // x21

  if ( (byte_4353944 & 1) == 0 )
  {
    sub_B70694(&Method_UnityEngine_GameObject_GetComponent_ServantSellConfirmListViewObject___);
    sub_B70694(&Method_System_Collections_Generic_List_ServantSellConfirmListViewObject__Add__);
    sub_B70694(&Method_System_Collections_Generic_List_ServantSellConfirmListViewObject___ctor__);
    sub_B70694(&Method_System_Collections_Generic_List_GameObject__get_Count__);
    sub_B70694(&Method_System_Collections_Generic_List_GameObject__get_Item__);
    sub_B70694(&System_Collections_Generic_List_ServantSellConfirmListViewObject__TypeInfo);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    byte_4353944 = 1;
  }
  v3 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B70764(System_Collections_Generic_List_ServantSellConfirmListViewObject__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v3,
    (const MethodInfo_30249C4 *)Method_System_Collections_Generic_List_ServantSellConfirmListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
LABEL_23:
    sub_B7076C(Component_srcLineSprite, v5);
  v7 = 4LL;
  while ( 1 )
  {
    v8 = v7 - 4;
    if ( v7 - 4 >= objectList->fields._size )
      return (System_Collections_Generic_List_ServantSellConfirmListViewObject__o *)v3;
    if ( v8 >= (unsigned int)objectList->fields._size )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41939488(0LL);
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
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41939488(0LL);
      Component_srcLineSprite = (UnityEngine_GameObject_o *)*((_QWORD *)&v10->fields._items->obj.klass + v7);
      if ( !Component_srcLineSprite )
        goto LABEL_23;
      Component_srcLineSprite = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                              Component_srcLineSprite,
                                                              (const MethodInfo_1D4AE28 *)Method_UnityEngine_GameObject_GetComponent_ServantSellConfirmListViewObject___);
      if ( !Component_srcLineSprite )
        goto LABEL_23;
      v11 = (EventMissionProgressRequest_Argument_ProgressData_o *)Component_srcLineSprite;
      Component_srcLineSprite = (UnityEngine_GameObject_o *)ServantSellConfirmListViewObject__GetItem(
                                                              (ServantSellConfirmListViewObject_o *)Component_srcLineSprite,
                                                              v5);
      if ( Component_srcLineSprite )
      {
        v5 = (const MethodInfo *)Component_srcLineSprite;
        if ( !LOBYTE(Component_srcLineSprite[3].fields.m_CachedPtr)
          || (Component_srcLineSprite = (UnityEngine_GameObject_o *)ListViewManager__ClippingItem_23985548(
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
            (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_ServantSellConfirmListViewObject__Add__);
        }
      }
    }
    objectList = this->fields.objectList;
    ++v7;
    if ( !objectList )
      goto LABEL_23;
  }
}


System_Collections_Generic_List_ServantSellConfirmListViewObject__o *__fastcall ServantSellConfirmListViewManager__get_ObjectList(
        ServantSellConfirmListViewManager_o *this,
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

  if ( (byte_4353943 & 1) == 0 )
  {
    sub_B70694(&Method_UnityEngine_GameObject_GetComponent_ServantSellConfirmListViewObject___);
    sub_B70694(&Method_System_Collections_Generic_List_ServantSellConfirmListViewObject__Add__);
    sub_B70694(&Method_System_Collections_Generic_List_ServantSellConfirmListViewObject___ctor__);
    sub_B70694(&Method_System_Collections_Generic_List_GameObject__get_Count__);
    sub_B70694(&Method_System_Collections_Generic_List_GameObject__get_Item__);
    sub_B70694(&System_Collections_Generic_List_ServantSellConfirmListViewObject__TypeInfo);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    byte_4353943 = 1;
  }
  v3 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B70764(System_Collections_Generic_List_ServantSellConfirmListViewObject__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v3,
    (const MethodInfo_30249C4 *)Method_System_Collections_Generic_List_ServantSellConfirmListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
LABEL_19:
    sub_B7076C(Component_srcLineSprite, v5);
  v7 = 4LL;
  while ( 1 )
  {
    v8 = v7 - 4;
    if ( v7 - 4 >= objectList->fields._size )
      return (System_Collections_Generic_List_ServantSellConfirmListViewObject__o *)v3;
    if ( v8 >= (unsigned int)objectList->fields._size )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41939488(0LL);
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
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41939488(0LL);
      Component_srcLineSprite = (srcLineSprite_o *)*((_QWORD *)&v10->fields._items->obj.klass + v7);
      if ( !Component_srcLineSprite )
        goto LABEL_19;
      Component_srcLineSprite = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                  (UnityEngine_GameObject_o *)Component_srcLineSprite,
                                  (const MethodInfo_1D4AE28 *)Method_UnityEngine_GameObject_GetComponent_ServantSellConfirmListViewObject___);
      if ( !v3 )
        goto LABEL_19;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v3,
        (EventMissionProgressRequest_Argument_ProgressData_o *)Component_srcLineSprite,
        (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_ServantSellConfirmListViewObject__Add__);
    }
    objectList = this->fields.objectList;
    ++v7;
    if ( !objectList )
      goto LABEL_19;
  }
}


void __fastcall ServantSellConfirmListViewManager___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v3; // x2
  System_String_array **v4; // x3
  System_Boolean_array **v5; // x4
  System_Int32_array **v6; // x5
  System_Int32_array *v7; // x6
  System_Int32_array *v8; // x7

  if ( (byte_434F842 & 1) == 0 )
  {
    sub_B70694(&ServantSellConfirmListViewManager___c_TypeInfo);
    byte_434F842 = 1;
  }
  v1 = (Il2CppObject *)sub_B70764(ServantSellConfirmListViewManager___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  static_fields = (BattleServantConfConponent_o *)ServantSellConfirmListViewManager___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v1;
  sub_B70630(static_fields, (System_Int32_array **)v1, v3, v4, v5, v6, v7, v8);
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

  if ( (byte_434F843 & 1) == 0 )
  {
    this = (ServantSellConfirmListViewManager___c_o *)sub_B70694(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_434F843 = 1;
  }
  if ( !a || (this = (ServantSellConfirmListViewManager___c_o *)UserCommandCodeEntity__GetRarity(a, 0LL), !b) )
    sub_B7076C(this, a);
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
  v10 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984(v16, 0LL);
  if ( v10 < CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984(b->fields.commandCodeId, 0LL) )
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
  v13 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984(v17, 0LL);
  v14 = *(_QWORD *)&b->fields.commandCodeId.fields.currentCryptoKey;
  *(_QWORD *)&v18.fields.fakeValue = *(_QWORD *)&b->fields.commandCodeId.fields.fakeValue;
  v15 = v13;
  *(_QWORD *)&v18.fields.currentCryptoKey = v14;
  if ( v15 <= CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984(v18, 0LL) )
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
    sub_B7076C(this, a);
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