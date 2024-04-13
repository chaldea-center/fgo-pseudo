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

  if ( (byte_42EAAA3 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Action_ServantSellConfirmListViewItem__Invoke__, (_DWORD)selectItem, (_DWORD)method, v3);
    byte_42EAAA3 = 1;
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
      (const MethodInfo_258B334 *)Method_System_Action_ServantSellConfirmListViewItem__Invoke__);
  }
}


void __fastcall ServantSellConfirmListViewManager__CancelDragEnd(
        ServantSellConfirmListViewManager_o *this,
        const MethodInfo *method)
{
  ;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantSellConfirmListViewManager__CreateCommandCodeList(
        ServantSellConfirmListViewManager_o *this,
        System_Int64_array *commandCodeIds,
        bool isExceeded,
        bool isSellLastServant,
        const MethodInfo *method)
{
  int v9; // w1
  char v10; // w2
  __int64 v11; // x3
  int v12; // w1
  char v13; // w2
  __int64 v14; // x3
  int v15; // w1
  char v16; // w2
  __int64 v17; // x3
  int v18; // w1
  char v19; // w2
  __int64 v20; // x3
  DataManager_o *Instance; // x0
  __int64 v22; // x1
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v24; // x8
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *v25; // x21
  unsigned __int64 v26; // x26
  int64_t v27; // x24
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x22
  int32_t v29; // w23
  UserServantEntity_o *Entity; // x25
  ServantSellConfirmListViewItem_o *v31; // x24
  const MethodInfo *v32; // x4
  __int64 v33; // x0

  if ( (byte_42EAA9C & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataManager_GetMasterData_UserCommandCodeMaster___,
      (_DWORD)commandCodeIds,
      isExceeded,
      isSellLastServant);
    sub_B5D5C4(&Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__GetEntity__, v9, v10, v11);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewItem__Add__, v12, v13, v14);
    sub_B5D5C4(&ServantSellConfirmListViewItem_TypeInfo, v15, v16, v17);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v18, v19, v20);
    byte_42EAA9C = 1;
  }
  if ( commandCodeIds && *(_QWORD *)&commandCodeIds->max_length && !isExceeded && !isSellLastServant )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_16;
    MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                           Instance,
                                           (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserCommandCodeMaster___);
    v24 = *(_QWORD *)&commandCodeIds->max_length;
    if ( (int)v24 >= 1 )
    {
      v25 = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)MasterData_WarQuestSelectionMaster;
      v26 = 0LL;
      while ( 1 )
      {
        if ( v26 >= (unsigned int)v24 )
        {
          v33 = sub_B5D6C8(MasterData_WarQuestSelectionMaster);
          sub_B5D668(v33, 0LL);
        }
        Instance = (DataManager_o *)this->fields.parentManager;
        if ( !Instance )
          break;
        v27 = commandCodeIds->m_Items[v26];
        itemList = this->fields.itemList;
        Instance = (DataManager_o *)ServantOperationManager__GetSelectedOrderByCommandCodeId(
                                      (ServantOperationManager_o *)Instance,
                                      v27,
                                      0LL);
        if ( !v25 )
          break;
        v29 = (int)Instance;
        Entity = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
                   v25,
                   v27,
                   (const MethodInfo_23FB038 *)Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__GetEntity__);
        v31 = (ServantSellConfirmListViewItem_o *)sub_B5D694(ServantSellConfirmListViewItem_TypeInfo);
        ServantSellConfirmListViewItem___ctor_29050380(v31, v29, (UserCommandCodeEntity_o *)Entity, 0, v32);
        if ( !itemList )
          break;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)itemList,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v31,
          (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
        LODWORD(v24) = commandCodeIds->max_length;
        if ( (__int64)++v26 >= (int)v24 )
          return;
      }
LABEL_16:
      sub_B5D69C(Instance, v22);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantSellConfirmListViewManager__CreateCommandCodeResultList(
        ServantSellConfirmListViewManager_o *this,
        System_Collections_Generic_List_long__o *commandCodeIds,
        bool isExceeded,
        bool isSellLastServant,
        const MethodInfo *method)
{
  int v9; // w1
  char v10; // w2
  __int64 v11; // x3
  int v12; // w1
  char v13; // w2
  __int64 v14; // x3
  int v15; // w1
  char v16; // w2
  __int64 v17; // x3
  int v18; // w1
  char v19; // w2
  __int64 v20; // x3
  int v21; // w1
  char v22; // w2
  __int64 v23; // x3
  int v24; // w1
  char v25; // w2
  __int64 v26; // x3
  int v27; // w1
  char v28; // w2
  __int64 v29; // x3
  ServantSellConfirmListViewManager_o *v30; // x0
  const MethodInfo *v31; // x2
  System_Collections_Generic_List_UserCommandCodeEntity__o *SortEntList; // x0
  __int64 v33; // x1
  System_Collections_Generic_List_WarBoardManager_TaskList__o *v34; // x20
  Il2CppObject *current; // x22
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x21
  int32_t v37; // w24
  ServantSellConfirmListViewItem_o *v38; // x23
  const MethodInfo *v39; // x4
  __int64 v40; // x0
  __int64 v41; // x1
  System_Collections_Generic_List_Enumerator_T__o v42; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_42EAA9D & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_UserCommandCodeEntity__Dispose__,
      (_DWORD)commandCodeIds,
      isExceeded,
      isSellLastServant);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_UserCommandCodeEntity__MoveNext__, v9, v10, v11);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_UserCommandCodeEntity__get_Current__, v12, v13, v14);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewItem__Add__, v15, v16, v17);
    sub_B5D5C4(&Method_System_Collections_Generic_List_UserCommandCodeEntity__GetEnumerator__, v18, v19, v20);
    sub_B5D5C4(&Method_System_Collections_Generic_List_UserCommandCodeEntity__IndexOf__, v21, v22, v23);
    sub_B5D5C4(&Method_System_Collections_Generic_List_long__get_Count__, v24, v25, v26);
    sub_B5D5C4(&ServantSellConfirmListViewItem_TypeInfo, v27, v28, v29);
    byte_42EAA9D = 1;
  }
  memset(&v42, 0, sizeof(v42));
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
  if ( commandCodeIds && commandCodeIds->fields._size >= 1 && !isExceeded && !isSellLastServant )
  {
    SortEntList = ServantSellConfirmListViewManager__GetSortEntList(v30, commandCodeIds, v31);
    if ( !SortEntList )
      sub_B5D69C(0LL, v33);
    v34 = (System_Collections_Generic_List_WarBoardManager_TaskList__o *)SortEntList;
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v42,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)SortEntList,
      (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_UserCommandCodeEntity__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v42,
              (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_UserCommandCodeEntity__MoveNext__) )
    {
      current = v42.fields.current;
      itemList = this->fields.itemList;
      v37 = System_Collections_Generic_List_WarBoardManager_TaskList___IndexOf(
              v34,
              (WarBoardManager_TaskList_o *)v42.fields.current,
              (const MethodInfo_3058070 *)Method_System_Collections_Generic_List_UserCommandCodeEntity__IndexOf__);
      v38 = (ServantSellConfirmListViewItem_o *)sub_B5D694(ServantSellConfirmListViewItem_TypeInfo);
      ServantSellConfirmListViewItem___ctor_29050380(v38, v37, (UserCommandCodeEntity_o *)current, 0, v39);
      if ( !itemList )
        sub_B5D69C(v40, v41);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)itemList,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v38,
        (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v42,
      (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_UserCommandCodeEntity__Dispose__);
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


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantSellConfirmListViewManager__CreateServantList(
        ServantSellConfirmListViewManager_o *this,
        System_Int64_array *servantIds,
        bool isExceeded,
        bool isSellLastServant,
        const MethodInfo *method)
{
  int v8; // w1
  char v9; // w2
  __int64 v10; // x3
  int v11; // w1
  char v12; // w2
  __int64 v13; // x3
  int v14; // w1
  char v15; // w2
  __int64 v16; // x3
  int v17; // w1
  char v18; // w2
  __int64 v19; // x3
  int v20; // w1
  char v21; // w2
  __int64 v22; // x3
  int v23; // w1
  char v24; // w2
  __int64 v25; // x3
  int v26; // w1
  char v27; // w2
  __int64 v28; // x3
  int v29; // w1
  char v30; // w2
  __int64 v31; // x3
  int64_t Instance; // x0
  __int64 v33; // x1
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *MasterData_WarQuestSelectionMaster; // x23
  UserDeckMaster_o *v35; // x25
  ServantOperationManager_o *parentManager; // x19
  System_Collections_Generic_List_ServantOperationListViewItem__o *SelectedEquipeCmdCardServantList; // x0
  __int64 v38; // x8
  unsigned __int64 v39; // x25
  int64_t v40; // x19
  int64_t v41; // x27
  int64_t v42; // x26
  __int64 v43; // x19
  __int64 v44; // x20
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x28
  ServantSellConfirmListViewManager_o *v46; // x23
  int64_t favoriteUserSvtId; // x24
  int32_t v48; // w20
  ServantSellConfirmListViewItem_o *v49; // x0
  bool v50; // w5
  EventMissionProgressRequest_Argument_ProgressData_o *v51; // x19
  const MethodInfo *v52; // x6
  __int64 v53; // x0
  System_Collections_Generic_List_int__o *v54; // [xsp+8h] [xbp-98h]
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *v55; // [xsp+10h] [xbp-90h]
  UserGameEntity_o *SelfUserGame; // [xsp+18h] [xbp-88h]
  System_Int64_array *v58; // [xsp+30h] [xbp-70h]
  System_Int64_array *v59; // [xsp+38h] [xbp-68h]
  System_Int64_array *equipIdList; // [xsp+40h] [xbp-60h] BYREF
  System_Int64_array *svtIdList; // [xsp+48h] [xbp-58h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v62; // 0:x0.16

  if ( (byte_42EAA99 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserDeckMaster___, (_DWORD)servantIds, isExceeded, isSellLastServant);
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserServantMaster___, v8, v9, v10);
    sub_B5D5C4(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewItem__Add__, v14, v15, v16);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__Contains__, v17, v18, v19);
    sub_B5D5C4(&NetworkManager_TypeInfo, v20, v21, v22);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v23, v24, v25);
    sub_B5D5C4(&ServantSellConfirmListViewItem_TypeInfo, v26, v27, v28);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v29, v30, v31);
    byte_42EAA99 = 1;
  }
  equipIdList = 0LL;
  svtIdList = 0LL;
  if ( servantIds && *(_QWORD *)&servantIds->max_length )
  {
    Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_32;
    MasterData_WarQuestSelectionMaster = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)DataManager__GetMasterData_WarQuestSelectionMaster_((DataManager_o *)Instance, (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserServantMaster___);
    SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
    Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_32;
    v35 = (UserDeckMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                (DataManager_o *)Instance,
                                (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserDeckMaster___);
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    Instance = NetworkManager__get_UserId(0LL);
    if ( !v35 )
      goto LABEL_32;
    UserDeckMaster__getPartyList(v35, &svtIdList, &equipIdList, Instance, 0LL);
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
    v38 = *(_QWORD *)&servantIds->max_length;
    v54 = (System_Collections_Generic_List_int__o *)Instance;
    if ( (int)v38 >= 1 )
    {
      v39 = 0LL;
      v55 = MasterData_WarQuestSelectionMaster;
      while ( 1 )
      {
        if ( v39 >= (unsigned int)v38 )
        {
          v53 = sub_B5D6C8(Instance);
          sub_B5D668(v53, 0LL);
        }
        if ( !MasterData_WarQuestSelectionMaster )
          break;
        v40 = servantIds->m_Items[v39];
        Instance = (int64_t)DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
                              MasterData_WarQuestSelectionMaster,
                              v40,
                              (const MethodInfo_23FB038 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
        v41 = Instance;
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
          if ( !v41 )
            break;
          v42 = v40;
          v44 = *(_QWORD *)(v41 + 80);
          v43 = *(_QWORD *)(v41 + 88);
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          }
          *(_QWORD *)&v62.fields.currentCryptoKey = v44;
          *(_QWORD *)&v62.fields.fakeValue = v43;
          v33 = (unsigned int)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v62, 0LL);
          Instance = (int64_t)v54;
          if ( !v54 )
            break;
          Instance = System_Collections_Generic_List_int___Contains(
                       v54,
                       v33,
                       (const MethodInfo_3084860 *)Method_System_Collections_Generic_List_int__Contains__);
          v40 = v42;
          if ( (Instance & 1) != 0 )
          {
LABEL_26:
            Instance = (int64_t)this->fields.parentManager;
            if ( !Instance )
              break;
            itemList = this->fields.itemList;
            v46 = this;
            Instance = ServantOperationManager__GetSelectedOrderByServantId(
                         (ServantOperationManager_o *)Instance,
                         v40,
                         0LL);
            if ( !SelfUserGame )
              break;
            favoriteUserSvtId = SelfUserGame->fields.favoriteUserSvtId;
            v48 = Instance;
            v59 = equipIdList;
            v58 = svtIdList;
            v49 = (ServantSellConfirmListViewItem_o *)sub_B5D694(ServantSellConfirmListViewItem_TypeInfo);
            v50 = v40 == favoriteUserSvtId;
            v51 = (EventMissionProgressRequest_Argument_ProgressData_o *)v49;
            ServantSellConfirmListViewItem___ctor(v49, v48, (UserServantEntity_o *)v41, v58, v59, v50, v52);
            if ( !itemList )
              break;
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)itemList,
              v51,
              (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
            this = v46;
            MasterData_WarQuestSelectionMaster = v55;
          }
        }
        LODWORD(v38) = servantIds->max_length;
        if ( (__int64)++v39 >= (int)v38 )
          return;
      }
LABEL_32:
      sub_B5D69C(Instance, v33);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantSellConfirmListViewManager__CreateSortServantList(
        ServantSellConfirmListViewManager_o *this,
        System_Int64_array *servantIds,
        bool isExceeded,
        bool isSellLastServant,
        const MethodInfo *method)
{
  int v6; // w1
  char v7; // w2
  __int64 v8; // x3
  int v9; // w1
  char v10; // w2
  __int64 v11; // x3
  int v12; // w1
  char v13; // w2
  __int64 v14; // x3
  int v15; // w1
  char v16; // w2
  __int64 v17; // x3
  int v18; // w1
  char v19; // w2
  __int64 v20; // x3
  int v21; // w1
  char v22; // w2
  __int64 v23; // x3
  int v24; // w1
  char v25; // w2
  __int64 v26; // x3
  int v27; // w1
  char v28; // w2
  __int64 v29; // x3
  int v30; // w1
  char v31; // w2
  __int64 v32; // x3
  int v33; // w1
  char v34; // w2
  __int64 v35; // x3
  int v36; // w1
  char v37; // w2
  __int64 v38; // x3
  int v39; // w1
  char v40; // w2
  __int64 v41; // x3
  int v42; // w1
  char v43; // w2
  __int64 v44; // x3
  int v45; // w1
  char v46; // w2
  __int64 v47; // x3
  int v48; // w1
  char v49; // w2
  __int64 v50; // x3
  int v51; // w1
  char v52; // w2
  __int64 v53; // x3
  DataManager_o *Instance; // x0
  __int64 v55; // x1
  UserGameEntity_o *SelfUserGame; // x22
  UserDeckMaster_o *MasterData_WarQuestSelectionMaster; // x19
  ServantOperationManager_o *parentManager; // x19
  System_Collections_Generic_List_ServantOperationListViewItem__o *SelectedEquipeCmdCardServantList; // x0
  System_Collections_Generic_List_long__o *v60; // x19
  const MethodInfo *v61; // x2
  __int64 v62; // x8
  unsigned __int64 v63; // x20
  System_Collections_Generic_List_WarBoardManager_TaskList__o *v64; // x24
  _BOOL8 v65; // x0
  __int64 v66; // x1
  Il2CppObject *current; // x25
  void *monitor; // x19
  Il2CppClass *klass; // x20
  __int64 v70; // x1
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x26
  __int64 v72; // x0
  __int64 v73; // x1
  Il2CppObject v74; // q0
  int32_t v75; // w27
  System_Int64_array *v76; // x19
  System_Int64_array *v77; // x28
  int64_t v78; // x0
  __int64 v79; // x1
  int64_t favoriteUserSvtId; // x23
  int64_t v81; // x21
  ServantSellConfirmListViewItem_o *v82; // x20
  const MethodInfo *v83; // x6
  __int64 v84; // x0
  __int64 v85; // x1
  __int64 v86; // x0
  System_Collections_Generic_List_int__o *EquipedCommandCodeSellLastSvtList; // [xsp+8h] [xbp-D8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v91; // [xsp+20h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v92; // [xsp+40h] [xbp-A0h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v93; // [xsp+60h] [xbp-80h] BYREF
  System_Int64_array *equipIdList; // [xsp+80h] [xbp-60h] BYREF
  System_Int64_array *svtIdList; // [xsp+88h] [xbp-58h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v96; // 0:x0.16

  if ( (byte_42EAA9A & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserDeckMaster___, (_DWORD)servantIds, isExceeded, isSellLastServant);
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserServantMaster___, v6, v7, v8);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_UserServantEntity__Dispose__, v9, v10, v11);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_UserServantEntity__MoveNext__, v12, v13, v14);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_UserServantEntity__get_Current__, v15, v16, v17);
    sub_B5D5C4(&Method_System_Collections_Generic_List_long__Add__, v18, v19, v20);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewItem__Add__, v21, v22, v23);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__Contains__, v24, v25, v26);
    sub_B5D5C4(&Method_System_Collections_Generic_List_UserServantEntity__GetEnumerator__, v27, v28, v29);
    sub_B5D5C4(&Method_System_Collections_Generic_List_UserServantEntity__IndexOf__, v30, v31, v32);
    sub_B5D5C4(&Method_System_Collections_Generic_List_long___ctor__, v33, v34, v35);
    sub_B5D5C4(&System_Collections_Generic_List_long__TypeInfo, v36, v37, v38);
    sub_B5D5C4(&NetworkManager_TypeInfo, v39, v40, v41);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v42, v43, v44);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v45, v46, v47);
    sub_B5D5C4(&ServantSellConfirmListViewItem_TypeInfo, v48, v49, v50);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v51, v52, v53);
    byte_42EAA9A = 1;
  }
  equipIdList = 0LL;
  svtIdList = 0LL;
  memset(&v93, 0, sizeof(v93));
  this->fields.kind = 3;
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
  if ( servantIds && *(_QWORD *)&servantIds->max_length )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_39;
    DataManager__GetMasterData_WarQuestSelectionMaster_(
      Instance,
      (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserServantMaster___);
    SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_39;
    MasterData_WarQuestSelectionMaster = (UserDeckMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                               Instance,
                                                               (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserDeckMaster___);
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
    v60 = (System_Collections_Generic_List_long__o *)sub_B5D694(System_Collections_Generic_List_long__TypeInfo);
    System_Collections_Generic_List_long____ctor(
      v60,
      (const MethodInfo_3046A2C *)Method_System_Collections_Generic_List_long___ctor__);
    v62 = *(_QWORD *)&servantIds->max_length;
    if ( (int)v62 >= 1 )
    {
      v63 = 0LL;
      while ( 1 )
      {
        if ( v63 >= (unsigned int)v62 )
        {
          v86 = sub_B5D6C8(Instance);
          sub_B5D668(v86, 0LL);
        }
        if ( !v60 )
          break;
        System_Collections_Generic_List_long___Add(
          v60,
          servantIds->m_Items[v63],
          (const MethodInfo_3047788 *)Method_System_Collections_Generic_List_long__Add__);
        LODWORD(v62) = servantIds->max_length;
        if ( (__int64)++v63 >= (int)v62 )
          goto LABEL_17;
      }
LABEL_39:
      sub_B5D69C(Instance, v55);
    }
LABEL_17:
    Instance = (DataManager_o *)ServantSellConfirmListViewManager__GetSvtSortEntList(
                                  (ServantSellConfirmListViewManager_o *)Instance,
                                  v60,
                                  v61);
    if ( !Instance )
      goto LABEL_39;
    v64 = (System_Collections_Generic_List_WarBoardManager_TaskList__o *)Instance;
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v92,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)Instance,
      (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_UserServantEntity__GetEnumerator__);
    v93.fields.current = (Il2CppObject *)v92.fields.fakeValue;
    *(_OWORD *)&v93.fields.list = *(_OWORD *)&v92.fields.currentCryptoKey;
    while ( 1 )
    {
      v65 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v93,
              (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_UserServantEntity__MoveNext__);
      if ( !v65 )
        break;
      current = v93.fields.current;
      if ( isExceeded )
      {
        if ( !v93.fields.current )
          sub_B5D69C(v65, v66);
        v65 = UserServantEntity__isExceeded((UserServantEntity_o *)v93.fields.current, 0LL);
        if ( !v65 )
          continue;
      }
      if ( !isSellLastServant )
        goto LABEL_30;
      if ( !current )
        sub_B5D69C(v65, v66);
      klass = current[5].klass;
      monitor = current[5].monitor;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v96.fields.currentCryptoKey = klass;
      *(_QWORD *)&v96.fields.fakeValue = monitor;
      v70 = (unsigned int)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v96, 0LL);
      if ( !EquipedCommandCodeSellLastSvtList )
        sub_B5D69C(0LL, v70);
      if ( System_Collections_Generic_List_int___Contains(
             EquipedCommandCodeSellLastSvtList,
             v70,
             (const MethodInfo_3084860 *)Method_System_Collections_Generic_List_int__Contains__) )
      {
LABEL_30:
        itemList = this->fields.itemList;
        v72 = System_Collections_Generic_List_WarBoardManager_TaskList___IndexOf(
                v64,
                (WarBoardManager_TaskList_o *)current,
                (const MethodInfo_3058070 *)Method_System_Collections_Generic_List_UserServantEntity__IndexOf__);
        if ( !current )
          sub_B5D69C(v72, v73);
        v74 = current[2];
        v75 = v72;
        v76 = equipIdList;
        v77 = svtIdList;
        *(Il2CppObject *)&v92.fields.currentCryptoKey = current[1];
        *(Il2CppObject *)&v92.fields.fakeValue = v74;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        }
        v91 = v92;
        v78 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v91, 0LL);
        if ( !SelfUserGame )
          sub_B5D69C(v78, v79);
        favoriteUserSvtId = SelfUserGame->fields.favoriteUserSvtId;
        v81 = v78;
        v82 = (ServantSellConfirmListViewItem_o *)sub_B5D694(ServantSellConfirmListViewItem_TypeInfo);
        ServantSellConfirmListViewItem___ctor(
          v82,
          v75,
          (UserServantEntity_o *)current,
          v77,
          v76,
          v81 == favoriteUserSvtId,
          v83);
        if ( !itemList )
          sub_B5D69C(v84, v85);
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)itemList,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v82,
          (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
      }
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v93,
      (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_UserServantEntity__Dispose__);
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
  __int64 v3; // x3
  ServantSellConfirmListViewManager_o *v5; // x20
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
  if ( (byte_42EAAA4 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, svtId, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v6, v7, v8);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v9, v10, v11);
    this = (ServantSellConfirmListViewManager_o *)sub_B5D5C4(&ServantSellConfirmListViewItem_TypeInfo, v12, v13, v14);
    byte_42EAAA4 = 1;
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
      v19 = *(&ServantSellConfirmListViewItem_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v18->klass->_2.bitflags2 + 1) >= (unsigned int)v19
        && (ServantSellConfirmListViewItem_c *)v18->klass->_2.typeHierarchy[v19 - 1] == ServantSellConfirmListViewItem_TypeInfo )
      {
        if ( (ServantSellConfirmListViewItem_c *)v18->klass->_2.typeHierarchy[*(&ServantSellConfirmListViewItem_TypeInfo->_2.bitflags2
                                                                              + 1)
                                                                            - 1] != ServantSellConfirmListViewItem_TypeInfo )
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
        this = (ServantSellConfirmListViewManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(
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
int64_t __fastcall ServantSellConfirmListViewManager__GetCommandCodeAmountSortValue(
        ServantSellConfirmListViewManager_o *this,
        int32_t commandCodeId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  ServantSellConfirmListViewManager_o *v5; // x20
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
  if ( (byte_42EAAA5 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, commandCodeId, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v6, v7, v8);
    this = (ServantSellConfirmListViewManager_o *)sub_B5D5C4(&ServantSellConfirmListViewItem_TypeInfo, v9, v10, v11);
    byte_42EAAA5 = 1;
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
      v16 = *(&ServantSellConfirmListViewItem_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v15->klass->_2.bitflags2 + 1) >= (unsigned int)v16
        && (ServantSellConfirmListViewItem_c *)v15->klass->_2.typeHierarchy[v16 - 1] == ServantSellConfirmListViewItem_TypeInfo )
      {
        itemList = v5->fields.itemList;
        ++v13;
        if ( (ServantSellConfirmListViewItem_c *)v15->klass->_2.typeHierarchy[*(&ServantSellConfirmListViewItem_TypeInfo->_2.bitflags2
                                                                              + 1)
                                                                            - 1] != ServantSellConfirmListViewItem_TypeInfo )
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
  struct ServantSellConfirmListViewManager___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__19_0; // x20
  Il2CppObject *v56; // x21
  struct ServantSellConfirmListViewManager___c_StaticFields *v57; // x0
  System_String_array **v58; // x2
  System_String_array **v59; // x3
  System_Boolean_array **v60; // x4
  System_Int32_array **v61; // x5
  System_Int32_array *v62; // x6
  System_Int32_array *v63; // x7
  System_Collections_Generic_List_Enumerator_T__o v65; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v66; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_42EAA9E & 1) == 0 )
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
    sub_B5D5C4(&Method_ServantSellConfirmListViewManager___c__GetSortEntList_b__19_0__, v41, v42, v43);
    sub_B5D5C4(&ServantSellConfirmListViewManager___c_TypeInfo, v44, v45, v46);
    byte_42EAA9E = 1;
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
    v56 = (Il2CppObject *)static_fields->__9;
    _9__19_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B5D694(System_Comparison_UserCommandCodeEntity__TypeInfo);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__19_0,
      v56,
      Method_ServantSellConfirmListViewManager___c__GetSortEntList_b__19_0__,
      (const MethodInfo_249B1FC *)Method_System_Comparison_UserCommandCodeEntity___ctor__);
    v57 = ServantSellConfirmListViewManager___c_TypeInfo->static_fields;
    v57->__9__19_0 = (struct System_Comparison_UserCommandCodeEntity__o *)_9__19_0;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v57->__9__19_0,
      (System_Int32_array **)_9__19_0,
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
    (System_Comparison_T__o *)_9__19_0,
    (const MethodInfo_305909C *)Method_System_Collections_Generic_List_UserCommandCodeEntity__Sort__);
  return (System_Collections_Generic_List_UserCommandCodeEntity__o *)v47;
}


System_Collections_Generic_List_UserServantEntity__o *__fastcall ServantSellConfirmListViewManager__GetSvtSortEntList(
        ServantSellConfirmListViewManager_o *this,
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
  struct ServantSellConfirmListViewManager___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__16_0; // x20
  Il2CppObject *v56; // x21
  struct ServantSellConfirmListViewManager___c_StaticFields *v57; // x0
  System_String_array **v58; // x2
  System_String_array **v59; // x3
  System_Boolean_array **v60; // x4
  System_Int32_array **v61; // x5
  System_Int32_array *v62; // x6
  System_Int32_array *v63; // x7
  System_Collections_Generic_List_Enumerator_T__o v65; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v66; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_42EAA9B & 1) == 0 )
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
    sub_B5D5C4(&Method_ServantSellConfirmListViewManager___c__GetSvtSortEntList_b__16_0__, v41, v42, v43);
    sub_B5D5C4(&ServantSellConfirmListViewManager___c_TypeInfo, v44, v45, v46);
    byte_42EAA9B = 1;
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
    v56 = (Il2CppObject *)static_fields->__9;
    _9__16_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B5D694(System_Comparison_UserServantEntity__TypeInfo);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__16_0,
      v56,
      Method_ServantSellConfirmListViewManager___c__GetSvtSortEntList_b__16_0__,
      (const MethodInfo_249B1FC *)Method_System_Comparison_UserServantEntity___ctor__);
    v57 = ServantSellConfirmListViewManager___c_TypeInfo->static_fields;
    v57->__9__16_0 = (struct System_Comparison_UserServantEntity__o *)_9__16_0;
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
    (const MethodInfo_305909C *)Method_System_Collections_Generic_List_UserServantEntity__Sort__);
  return (System_Collections_Generic_List_UserServantEntity__o *)v47;
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

  if ( (byte_42EAA9F & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserCommandCodeMaster___, selectedId, (_DWORD)method, v3);
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserServantMaster___, v6, v7, v8);
    sub_B5D5C4(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__, v9, v10, v11);
    sub_B5D5C4(&Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__TryGetEntity__, v12, v13, v14);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v15, v16, v17);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v18, v19, v20);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v21, v22, v23);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v24, v25, v26);
    sub_B5D5C4(&ServantSellConfirmListViewItem_TypeInfo, v27, v28, v29);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v30, v31, v32);
    byte_42EAA9F = 1;
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
            v39 = *(&ServantSellConfirmListViewItem_TypeInfo->_2.bitflags2 + 1);
            if ( *(&v38->klass->_2.bitflags2 + 1) >= (unsigned int)v39
              && (ServantSellConfirmListViewItem_c *)v38->klass->_2.typeHierarchy[v39 - 1] == ServantSellConfirmListViewItem_TypeInfo )
            {
              Instance = ServantSellConfirmListViewItem__get_UserCommandCodeId(
                           (ServantSellConfirmListViewItem_o *)v38,
                           v35);
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
      v54 = *(&ServantSellConfirmListViewItem_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v53->klass->_2.bitflags2 + 1) >= (unsigned int)v54
        && (ServantSellConfirmListViewItem_c *)v53->klass->_2.typeHierarchy[v54 - 1] == ServantSellConfirmListViewItem_TypeInfo )
      {
        Instance = ServantSellConfirmListViewItem__get_UserSvtId((ServantSellConfirmListViewItem_o *)v53, v35);
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
          Instance = ServantSellConfirmListViewItem__get_UserSvtId((ServantSellConfirmListViewItem_o *)v53, v57);
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
  int v2; // w2
  __int64 v3; // x3
  int32_t callbackCount; // w8
  bool v6; // vf
  int32_t v7; // w8

  if ( (byte_42EAAA2 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EAAA2 = 1;
  }
  callbackCount = this->fields.callbackCount;
  v6 = __OFSUB__(callbackCount, 1);
  v7 = callbackCount - 1;
  if ( v7 < 0 == v6 )
    this->fields.callbackCount = v7;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantSellConfirmListViewManager__RequestListObject(
        ServantSellConfirmListViewManager_o *this,
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
  System_Collections_Generic_List_ServantSellConfirmListViewObject__o *ObjectList; // x0
  __int64 v19; // x1
  int32_t size; // w8
  System_Collections_Generic_List_ServantSellConfirmListViewObject__o *v21; // x21
  int v22; // w8
  __int64 v23; // x24
  ServantSellConfirmListViewObject_o *v24; // x22
  System_Action_o *v25; // x23
  const MethodInfo *v26; // x3

  if ( (byte_42EAAA1 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, mode, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ServantSellConfirmListViewObject__get_Count__, v6, v7, v8);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ServantSellConfirmListViewObject__get_Item__, v9, v10, v11);
    sub_B5D5C4(&Method_ServantSellConfirmListViewManager_OnMoveEnd__, v12, v13, v14);
    sub_B5D5C4(&StringLiteral_10142/*"OnMoveEnd"*/, v15, v16, v17);
    byte_42EAAA1 = 1;
  }
  ObjectList = ServantSellConfirmListViewManager__get_ObjectList(this, *(const MethodInfo **)&mode);
  if ( !ObjectList )
    goto LABEL_13;
  size = ObjectList->fields._size;
  v21 = ObjectList;
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
    v22 = ObjectList->fields._size;
    if ( v22 >= 1 )
    {
      v23 = 0LL;
      while ( 1 )
      {
        if ( v22 <= (unsigned int)v23 )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
        v24 = v21->fields._items->m_Items[v23];
        v25 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
        System_Action___ctor(v25, (Il2CppObject *)this, Method_ServantSellConfirmListViewManager_OnMoveEnd__, 0LL);
        if ( !v24 )
          break;
        ServantSellConfirmListViewObject__Init(v24, mode, v25, v26);
        v22 = v21->fields._size;
        if ( (int)++v23 >= v22 )
          return;
      }
LABEL_13:
      sub_B5D69C(ObjectList, v19);
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
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.onSelectItem,
    (System_Int32_array **)onSelectItem,
    (System_String_array **)onSelectItem,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  ServantSellConfirmListViewManager__SetMode_29062088(this, mode, v10);
}


void __fastcall ServantSellConfirmListViewManager__SetMode_29062088(
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
  if ( (byte_42EAAA0 & 1) == 0 )
  {
    this = (ServantSellConfirmListViewManager_o *)sub_B5D5C4(
                                                    &ServantSellConfirmListViewObject_TypeInfo,
                                                    (_DWORD)obj,
                                                    (_DWORD)item,
                                                    method);
    byte_42EAAA0 = 1;
  }
  if ( !obj
    || (v6 = *(&ServantSellConfirmListViewObject_TypeInfo->_2.bitflags2 + 1),
        *(&obj->klass->_2.bitflags2 + 1) < (unsigned int)v6)
    || (ServantSellConfirmListViewObject_c *)obj->klass->_2.typeHierarchy[v6 - 1] != ServantSellConfirmListViewObject_TypeInfo )
  {
    sub_B5D69C(this, obj);
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

  if ( (byte_42EAA98 & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_ServantSellConfirmListViewObject___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ServantSellConfirmListViewObject__Add__, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ServantSellConfirmListViewObject___ctor__, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_List_GameObject__get_Count__, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_List_GameObject__get_Item__, v14, v15, v16);
    sub_B5D5C4(&System_Collections_Generic_List_ServantSellConfirmListViewObject__TypeInfo, v17, v18, v19);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v20, v21, v22);
    byte_42EAA98 = 1;
  }
  v23 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_ServantSellConfirmListViewObject__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v23,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_ServantSellConfirmListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
LABEL_23:
    sub_B5D69C(Component_srcLineSprite, v25);
  v27 = 4LL;
  while ( 1 )
  {
    v28 = v27 - 4;
    if ( v27 - 4 >= objectList->fields._size )
      return (System_Collections_Generic_List_ServantSellConfirmListViewObject__o *)v23;
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
                                                              (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_ServantSellConfirmListViewObject___);
      if ( !Component_srcLineSprite )
        goto LABEL_23;
      v31 = (EventMissionProgressRequest_Argument_ProgressData_o *)Component_srcLineSprite;
      Component_srcLineSprite = (UnityEngine_GameObject_o *)ServantSellConfirmListViewObject__GetItem(
                                                              (ServantSellConfirmListViewObject_o *)Component_srcLineSprite,
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
            (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_ServantSellConfirmListViewObject__Add__);
        }
      }
    }
    objectList = this->fields.objectList;
    ++v27;
    if ( !objectList )
      goto LABEL_23;
  }
}


System_Collections_Generic_List_ServantSellConfirmListViewObject__o *__fastcall ServantSellConfirmListViewManager__get_ObjectList(
        ServantSellConfirmListViewManager_o *this,
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

  if ( (byte_42EAA97 & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_ServantSellConfirmListViewObject___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ServantSellConfirmListViewObject__Add__, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ServantSellConfirmListViewObject___ctor__, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_List_GameObject__get_Count__, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_List_GameObject__get_Item__, v14, v15, v16);
    sub_B5D5C4(&System_Collections_Generic_List_ServantSellConfirmListViewObject__TypeInfo, v17, v18, v19);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v20, v21, v22);
    byte_42EAA97 = 1;
  }
  v23 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_ServantSellConfirmListViewObject__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v23,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_ServantSellConfirmListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
LABEL_19:
    sub_B5D69C(Component_srcLineSprite, v25);
  v27 = 4LL;
  while ( 1 )
  {
    v28 = v27 - 4;
    if ( v27 - 4 >= objectList->fields._size )
      return (System_Collections_Generic_List_ServantSellConfirmListViewObject__o *)v23;
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
                                  (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_ServantSellConfirmListViewObject___);
      if ( !v23 )
        goto LABEL_19;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v23,
        (EventMissionProgressRequest_Argument_ProgressData_o *)Component_srcLineSprite,
        (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_ServantSellConfirmListViewObject__Add__);
    }
    objectList = this->fields.objectList;
    ++v27;
    if ( !objectList )
      goto LABEL_19;
  }
}


void __fastcall ServantSellConfirmListViewManager___c___cctor(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  struct ServantSellConfirmListViewManager___c_StaticFields *static_fields; // x0

  if ( (byte_42E5D8C & 1) == 0 )
  {
    sub_B5D5C4(&ServantSellConfirmListViewManager___c_TypeInfo, v1, v2, v3);
    byte_42E5D8C = 1;
  }
  v4 = (Il2CppObject *)sub_B5D694(ServantSellConfirmListViewManager___c_TypeInfo);
  System_Object___ctor(v4, 0LL);
  static_fields = ServantSellConfirmListViewManager___c_TypeInfo->static_fields;
  static_fields->__9 = (struct ServantSellConfirmListViewManager___c_o *)v4;
  sub_B5D560(static_fields);
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

  if ( (byte_42E5D8D & 1) == 0 )
  {
    this = (ServantSellConfirmListViewManager___c_o *)sub_B5D5C4(
                                                        &CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo,
                                                        (_DWORD)a,
                                                        (_DWORD)b,
                                                        method);
    byte_42E5D8D = 1;
  }
  if ( !a || (this = (ServantSellConfirmListViewManager___c_o *)UserCommandCodeEntity__GetRarity(a, 0LL), !b) )
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