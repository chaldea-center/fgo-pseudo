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

  if ( (byte_40FBBEA & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Action_ServantSellConfirmListViewItem__Invoke__, selectItem);
    byte_40FBBEA = 1;
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
      (const MethodInfo_24B7324 *)Method_System_Action_ServantSellConfirmListViewItem__Invoke__);
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
  WebViewManager_o *Instance; // x0
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x8
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *v18; // x21
  unsigned __int64 v19; // x26
  ServantOperationManager_o *parentManager; // x0
  int64_t v21; // x24
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x22
  int32_t SelectedOrderByCommandCodeId; // w0
  int32_t v24; // w23
  UserServantEntity_o *Entity; // x25
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x3
  __int64 v29; // x4
  ServantSellConfirmListViewItem_o *v30; // x24
  const MethodInfo *v31; // x4

  if ( (byte_40FBBE3 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_UserCommandCodeMaster___, commandCodeIds);
    sub_B16FFC(&Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__GetEntity__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewItem__Add__, v10);
    sub_B16FFC(&ServantSellConfirmListViewItem_TypeInfo, v11);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12);
    byte_40FBBE3 = 1;
  }
  if ( commandCodeIds && *(_QWORD *)&commandCodeIds->max_length && !isExceeded && !isSellLastServant )
  {
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_16;
    MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                           (DataManager_o *)Instance,
                                           (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserCommandCodeMaster___);
    v17 = *(_QWORD *)&commandCodeIds->max_length;
    if ( (int)v17 >= 1 )
    {
      v18 = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)MasterData_WarQuestSelectionMaster;
      v19 = 0LL;
      while ( 1 )
      {
        if ( v19 >= (unsigned int)v17 )
        {
          sub_B17100(MasterData_WarQuestSelectionMaster, v15, v16);
          sub_B170A0();
        }
        parentManager = this->fields.parentManager;
        if ( !parentManager )
          break;
        v21 = commandCodeIds->m_Items[v19];
        itemList = this->fields.itemList;
        SelectedOrderByCommandCodeId = ServantOperationManager__GetSelectedOrderByCommandCodeId(parentManager, v21, 0LL);
        if ( !v18 )
          break;
        v24 = SelectedOrderByCommandCodeId;
        Entity = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
                   v18,
                   v21,
                   (const MethodInfo_266F5B0 *)Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__GetEntity__);
        v30 = (ServantSellConfirmListViewItem_o *)sub_B170CC(
                                                    ServantSellConfirmListViewItem_TypeInfo,
                                                    v26,
                                                    v27,
                                                    v28,
                                                    v29);
        ServantSellConfirmListViewItem___ctor_28292280(v30, v24, (UserCommandCodeEntity_o *)Entity, 0, v31);
        if ( !itemList )
          break;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)itemList,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v30,
          (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
        LODWORD(v17) = commandCodeIds->max_length;
        if ( (__int64)++v19 >= (int)v17 )
          return;
      }
LABEL_16:
      sub_B170D4();
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
  System_Collections_Generic_List_WarBoardManager_TaskList__o *v19; // x20
  Il2CppObject *current; // x22
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x21
  int32_t v22; // w24
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x3
  __int64 v26; // x4
  ServantSellConfirmListViewItem_o *v27; // x23
  const MethodInfo *v28; // x4
  System_Collections_Generic_List_Enumerator_T__o v29; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_40FBBE4 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_UserCommandCodeEntity__Dispose__, commandCodeIds);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_UserCommandCodeEntity__MoveNext__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_UserCommandCodeEntity__get_Current__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewItem__Add__, v11);
    sub_B16FFC(&Method_System_Collections_Generic_List_UserCommandCodeEntity__GetEnumerator__, v12);
    sub_B16FFC(&Method_System_Collections_Generic_List_UserCommandCodeEntity__IndexOf__, v13);
    sub_B16FFC(&Method_System_Collections_Generic_List_long__get_Count__, v14);
    sub_B16FFC(&ServantSellConfirmListViewItem_TypeInfo, v15);
    byte_40FBBE4 = 1;
  }
  memset(&v29, 0, sizeof(v29));
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
  if ( commandCodeIds && commandCodeIds->fields._size >= 1 && !isExceeded && !isSellLastServant )
  {
    SortEntList = ServantSellConfirmListViewManager__GetSortEntList(v16, commandCodeIds, v17);
    if ( !SortEntList )
      sub_B170D4();
    v19 = (System_Collections_Generic_List_WarBoardManager_TaskList__o *)SortEntList;
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v29,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)SortEntList,
      (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_UserCommandCodeEntity__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v29,
              (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_UserCommandCodeEntity__MoveNext__) )
    {
      current = v29.fields.current;
      itemList = this->fields.itemList;
      v22 = System_Collections_Generic_List_WarBoardManager_TaskList___IndexOf(
              v19,
              (WarBoardManager_TaskList_o *)v29.fields.current,
              (const MethodInfo_2F26D88 *)Method_System_Collections_Generic_List_UserCommandCodeEntity__IndexOf__);
      v27 = (ServantSellConfirmListViewItem_o *)sub_B170CC(ServantSellConfirmListViewItem_TypeInfo, v23, v24, v25, v26);
      ServantSellConfirmListViewItem___ctor_28292280(v27, v22, (UserCommandCodeEntity_o *)current, 0, v28);
      if ( !itemList )
        sub_B170D4();
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)itemList,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v27,
        (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v29,
      (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_UserCommandCodeEntity__Dispose__);
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
  WebViewManager_o *Instance; // x0
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *MasterData_WarQuestSelectionMaster; // x23
  WebViewManager_o *v18; // x0
  UserDeckMaster_o *v19; // x25
  int64_t UserId; // x0
  ServantOperationManager_o *parentManager; // x19
  System_Collections_Generic_List_ServantOperationListViewItem__o *SelectedEquipeCmdCardServantList; // x0
  System_Collections_Generic_List_int__o *EquipedCommandCodeSellLastSvtList; // x0
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x8
  unsigned __int64 v27; // x25
  int64_t v28; // x19
  UserServantEntity_o *Entity; // x0
  UserServantEntity_o *v30; // x27
  int64_t v31; // x26
  __int64 v32; // x19
  __int64 v33; // x20
  int32_t v34; // w1
  ServantOperationManager_o *v35; // x0
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x28
  ServantSellConfirmListViewManager_o *v37; // x23
  int32_t SelectedOrderByServantId; // w0
  __int64 v39; // x1
  __int64 v40; // x2
  __int64 v41; // x3
  __int64 v42; // x4
  int64_t favoriteUserSvtId; // x24
  int32_t v44; // w20
  ServantSellConfirmListViewItem_o *v45; // x0
  bool v46; // w5
  EventMissionProgressRequest_Argument_ProgressData_o *v47; // x19
  const MethodInfo *v48; // x6
  System_Collections_Generic_List_int__o *v49; // [xsp+8h] [xbp-98h]
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *v50; // [xsp+10h] [xbp-90h]
  UserGameEntity_o *SelfUserGame; // [xsp+18h] [xbp-88h]
  System_Int64_array *v53; // [xsp+30h] [xbp-70h]
  System_Int64_array *v54; // [xsp+38h] [xbp-68h]
  System_Int64_array *equipIdList; // [xsp+40h] [xbp-60h] BYREF
  System_Int64_array *svtIdList; // [xsp+48h] [xbp-58h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v57; // 0:x0.16

  if ( (byte_40FBBE0 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_UserDeckMaster___, servantIds);
    sub_B16FFC(&Method_DataManager_GetMasterData_UserServantMaster___, v8);
    sub_B16FFC(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewItem__Add__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__Contains__, v11);
    sub_B16FFC(&NetworkManager_TypeInfo, v12);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v13);
    sub_B16FFC(&ServantSellConfirmListViewItem_TypeInfo, v14);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v15);
    byte_40FBBE0 = 1;
  }
  equipIdList = 0LL;
  svtIdList = 0LL;
  if ( servantIds && *(_QWORD *)&servantIds->max_length )
  {
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_32;
    MasterData_WarQuestSelectionMaster = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)DataManager__GetMasterData_WarQuestSelectionMaster_((DataManager_o *)Instance, (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserServantMaster___);
    SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
    v18 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !v18 )
      goto LABEL_32;
    v19 = (UserDeckMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                (DataManager_o *)v18,
                                (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserDeckMaster___);
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    UserId = NetworkManager__get_UserId(0LL);
    if ( !v19 )
      goto LABEL_32;
    UserDeckMaster__getPartyList(v19, &svtIdList, &equipIdList, UserId, 0LL);
    parentManager = this->fields.parentManager;
    if ( !parentManager )
      goto LABEL_32;
    SelectedEquipeCmdCardServantList = ServantOperationManager__GetSelectedEquipeCmdCardServantList(
                                         this->fields.parentManager,
                                         0LL);
    EquipedCommandCodeSellLastSvtList = ServantOperationManager__GetEquipedCommandCodeSellLastSvtList(
                                          parentManager,
                                          SelectedEquipeCmdCardServantList,
                                          0LL);
    v26 = *(_QWORD *)&servantIds->max_length;
    v49 = EquipedCommandCodeSellLastSvtList;
    if ( (int)v26 >= 1 )
    {
      v27 = 0LL;
      v50 = MasterData_WarQuestSelectionMaster;
      while ( 1 )
      {
        if ( v27 >= (unsigned int)v26 )
        {
          sub_B17100(EquipedCommandCodeSellLastSvtList, v24, v25);
          sub_B170A0();
        }
        if ( !MasterData_WarQuestSelectionMaster )
          break;
        v28 = servantIds->m_Items[v27];
        Entity = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
                   MasterData_WarQuestSelectionMaster,
                   v28,
                   (const MethodInfo_266F5B0 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
        v30 = Entity;
        if ( !isExceeded )
          goto LABEL_36;
        if ( !Entity )
          break;
        EquipedCommandCodeSellLastSvtList = (System_Collections_Generic_List_int__o *)UserServantEntity__isExceeded(
                                                                                        Entity,
                                                                                        0LL);
        if ( ((unsigned __int8)EquipedCommandCodeSellLastSvtList & 1) != 0 )
        {
LABEL_36:
          if ( !isSellLastServant )
            goto LABEL_26;
          if ( !v30 )
            break;
          v31 = v28;
          v33 = *(_QWORD *)&v30->fields.svtId.fields.currentCryptoKey;
          v32 = *(_QWORD *)&v30->fields.svtId.fields.fakeValue;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          }
          *(_QWORD *)&v57.fields.currentCryptoKey = v33;
          *(_QWORD *)&v57.fields.fakeValue = v32;
          v34 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v57, 0LL);
          if ( !v49 )
            break;
          EquipedCommandCodeSellLastSvtList = (System_Collections_Generic_List_int__o *)System_Collections_Generic_List_int___Contains(
                                                                                          v49,
                                                                                          v34,
                                                                                          (const MethodInfo_2F10944 *)Method_System_Collections_Generic_List_int__Contains__);
          v28 = v31;
          if ( ((unsigned __int8)EquipedCommandCodeSellLastSvtList & 1) != 0 )
          {
LABEL_26:
            v35 = this->fields.parentManager;
            if ( !v35 )
              break;
            itemList = this->fields.itemList;
            v37 = this;
            SelectedOrderByServantId = ServantOperationManager__GetSelectedOrderByServantId(v35, v28, 0LL);
            if ( !SelfUserGame )
              break;
            favoriteUserSvtId = SelfUserGame->fields.favoriteUserSvtId;
            v44 = SelectedOrderByServantId;
            v54 = equipIdList;
            v53 = svtIdList;
            v45 = (ServantSellConfirmListViewItem_o *)sub_B170CC(
                                                        ServantSellConfirmListViewItem_TypeInfo,
                                                        v39,
                                                        v40,
                                                        v41,
                                                        v42);
            v46 = v28 == favoriteUserSvtId;
            v47 = (EventMissionProgressRequest_Argument_ProgressData_o *)v45;
            ServantSellConfirmListViewItem___ctor(v45, v44, v30, v53, v54, v46, v48);
            if ( !itemList )
              break;
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)itemList,
              v47,
              (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
            this = v37;
            MasterData_WarQuestSelectionMaster = v50;
          }
        }
        LODWORD(v26) = servantIds->max_length;
        if ( (__int64)++v27 >= (int)v26 )
          return;
      }
LABEL_32:
      sub_B170D4();
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
  WebViewManager_o *Instance; // x0
  UserGameEntity_o *SelfUserGame; // x22
  WebViewManager_o *v24; // x0
  UserDeckMaster_o *MasterData_WarQuestSelectionMaster; // x19
  int64_t UserId; // x0
  ServantOperationManager_o *parentManager; // x19
  System_Collections_Generic_List_ServantOperationListViewItem__o *SelectedEquipeCmdCardServantList; // x0
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x3
  __int64 v32; // x4
  System_Collections_Generic_List_long__o *v33; // x19
  ServantSellConfirmListViewManager_o *v34; // x0
  __int64 v35; // x1
  const MethodInfo *v36; // x2
  __int64 v37; // x8
  unsigned __int64 v38; // x20
  System_Collections_Generic_List_UserServantEntity__o *SvtSortEntList; // x0
  System_Collections_Generic_List_WarBoardManager_TaskList__o *v40; // x24
  Il2CppObject *current; // x25
  void *monitor; // x19
  Il2CppClass *klass; // x20
  int32_t v44; // w1
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x26
  int32_t v46; // w0
  Il2CppObject v47; // q0
  int32_t v48; // w27
  System_Int64_array *v49; // x19
  System_Int64_array *v50; // x28
  int64_t v51; // x0
  __int64 v52; // x1
  __int64 v53; // x2
  __int64 v54; // x3
  __int64 v55; // x4
  int64_t favoriteUserSvtId; // x23
  int64_t v57; // x21
  ServantSellConfirmListViewItem_o *v58; // x20
  const MethodInfo *v59; // x6
  System_Collections_Generic_List_int__o *EquipedCommandCodeSellLastSvtList; // [xsp+8h] [xbp-D8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v64; // [xsp+20h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v65; // [xsp+40h] [xbp-A0h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v66; // [xsp+60h] [xbp-80h] BYREF
  System_Int64_array *equipIdList; // [xsp+80h] [xbp-60h] BYREF
  System_Int64_array *svtIdList; // [xsp+88h] [xbp-58h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v69; // 0:x0.16

  if ( (byte_40FBBE1 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_UserDeckMaster___, servantIds);
    sub_B16FFC(&Method_DataManager_GetMasterData_UserServantMaster___, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_UserServantEntity__Dispose__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_UserServantEntity__MoveNext__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_UserServantEntity__get_Current__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_long__Add__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewItem__Add__, v11);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__Contains__, v12);
    sub_B16FFC(&Method_System_Collections_Generic_List_UserServantEntity__GetEnumerator__, v13);
    sub_B16FFC(&Method_System_Collections_Generic_List_UserServantEntity__IndexOf__, v14);
    sub_B16FFC(&Method_System_Collections_Generic_List_long___ctor__, v15);
    sub_B16FFC(&System_Collections_Generic_List_long__TypeInfo, v16);
    sub_B16FFC(&NetworkManager_TypeInfo, v17);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v18);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v19);
    sub_B16FFC(&ServantSellConfirmListViewItem_TypeInfo, v20);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v21);
    byte_40FBBE1 = 1;
  }
  equipIdList = 0LL;
  svtIdList = 0LL;
  memset(&v66, 0, sizeof(v66));
  this->fields.kind = 3;
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
  if ( servantIds && *(_QWORD *)&servantIds->max_length )
  {
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_39;
    DataManager__GetMasterData_WarQuestSelectionMaster_(
      (DataManager_o *)Instance,
      (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserServantMaster___);
    SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
    v24 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !v24 )
      goto LABEL_39;
    MasterData_WarQuestSelectionMaster = (UserDeckMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                               (DataManager_o *)v24,
                                                               (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserDeckMaster___);
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    UserId = NetworkManager__get_UserId(0LL);
    if ( !MasterData_WarQuestSelectionMaster )
      goto LABEL_39;
    UserDeckMaster__getPartyList(MasterData_WarQuestSelectionMaster, &svtIdList, &equipIdList, UserId, 0LL);
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
    v33 = (System_Collections_Generic_List_long__o *)sub_B170CC(
                                                       System_Collections_Generic_List_long__TypeInfo,
                                                       v29,
                                                       v30,
                                                       v31,
                                                       v32);
    System_Collections_Generic_List_long____ctor(
      v33,
      (const MethodInfo_2F15744 *)Method_System_Collections_Generic_List_long___ctor__);
    v37 = *(_QWORD *)&servantIds->max_length;
    if ( (int)v37 >= 1 )
    {
      v38 = 0LL;
      while ( 1 )
      {
        if ( v38 >= (unsigned int)v37 )
        {
          sub_B17100(v34, v35, v36);
          sub_B170A0();
        }
        if ( !v33 )
          break;
        System_Collections_Generic_List_long___Add(
          v33,
          servantIds->m_Items[v38],
          (const MethodInfo_2F164A0 *)Method_System_Collections_Generic_List_long__Add__);
        LODWORD(v37) = servantIds->max_length;
        if ( (__int64)++v38 >= (int)v37 )
          goto LABEL_17;
      }
LABEL_39:
      sub_B170D4();
    }
LABEL_17:
    SvtSortEntList = ServantSellConfirmListViewManager__GetSvtSortEntList(v34, v33, v36);
    if ( !SvtSortEntList )
      goto LABEL_39;
    v40 = (System_Collections_Generic_List_WarBoardManager_TaskList__o *)SvtSortEntList;
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v65,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)SvtSortEntList,
      (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_UserServantEntity__GetEnumerator__);
    v66.fields.current = (Il2CppObject *)v65.fields.fakeValue;
    *(_OWORD *)&v66.fields.list = *(_OWORD *)&v65.fields.currentCryptoKey;
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v66,
              (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_UserServantEntity__MoveNext__) )
    {
      current = v66.fields.current;
      if ( isExceeded )
      {
        if ( !v66.fields.current )
          sub_B170D4();
        if ( !UserServantEntity__isExceeded((UserServantEntity_o *)v66.fields.current, 0LL) )
          continue;
      }
      if ( !isSellLastServant )
        goto LABEL_30;
      if ( !current )
        sub_B170D4();
      klass = current[5].klass;
      monitor = current[5].monitor;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v69.fields.currentCryptoKey = klass;
      *(_QWORD *)&v69.fields.fakeValue = monitor;
      v44 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v69, 0LL);
      if ( !EquipedCommandCodeSellLastSvtList )
        sub_B170D4();
      if ( System_Collections_Generic_List_int___Contains(
             EquipedCommandCodeSellLastSvtList,
             v44,
             (const MethodInfo_2F10944 *)Method_System_Collections_Generic_List_int__Contains__) )
      {
LABEL_30:
        itemList = this->fields.itemList;
        v46 = System_Collections_Generic_List_WarBoardManager_TaskList___IndexOf(
                v40,
                (WarBoardManager_TaskList_o *)current,
                (const MethodInfo_2F26D88 *)Method_System_Collections_Generic_List_UserServantEntity__IndexOf__);
        if ( !current )
          sub_B170D4();
        v47 = current[2];
        v48 = v46;
        v49 = equipIdList;
        v50 = svtIdList;
        *(Il2CppObject *)&v65.fields.currentCryptoKey = current[1];
        *(Il2CppObject *)&v65.fields.fakeValue = v47;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        }
        v64 = v65;
        v51 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v64, 0LL);
        if ( !SelfUserGame )
          sub_B170D4();
        favoriteUserSvtId = SelfUserGame->fields.favoriteUserSvtId;
        v57 = v51;
        v58 = (ServantSellConfirmListViewItem_o *)sub_B170CC(
                                                    ServantSellConfirmListViewItem_TypeInfo,
                                                    v52,
                                                    v53,
                                                    v54,
                                                    v55);
        ServantSellConfirmListViewItem___ctor(
          v58,
          v48,
          (UserServantEntity_o *)current,
          v50,
          v49,
          v57 == favoriteUserSvtId,
          v59);
        if ( !itemList )
          sub_B170D4();
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)itemList,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v58,
          (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
      }
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v66,
      (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_UserServantEntity__Dispose__);
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

  if ( (byte_40FBBEB & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, *(_QWORD *)&svtId);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v5);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v6);
    sub_B16FFC(&ServantSellConfirmListViewItem_TypeInfo, v7);
    byte_40FBBEB = 1;
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
int64_t __fastcall ServantSellConfirmListViewManager__GetCommandCodeAmountSortValue(
        ServantSellConfirmListViewManager_o *this,
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

  if ( (byte_40FBBEC & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, *(_QWORD *)&commandCodeId);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v5);
    sub_B16FFC(&ServantSellConfirmListViewItem_TypeInfo, v6);
    byte_40FBBEC = 1;
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
      v11 = *(&ServantSellConfirmListViewItem_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v10->klass->_2.bitflags2 + 1) >= (unsigned int)v11
        && (ServantSellConfirmListViewItem_c *)v10->klass->_2.typeHierarchy[v11 - 1] == ServantSellConfirmListViewItem_TypeInfo )
      {
        itemList = this->fields.itemList;
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
  ServantSellConfirmListViewManager___c_c *v29; // x0
  struct ServantSellConfirmListViewManager___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__19_0; // x20
  Il2CppObject *v32; // x21
  struct ServantSellConfirmListViewManager___c_StaticFields *v33; // x0
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7
  System_Collections_Generic_List_Enumerator_T__o v41; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v42; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_40FBBE5 & 1) == 0 )
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
    sub_B16FFC(&Method_ServantSellConfirmListViewManager___c__GetSortEntList_b__19_0__, v18);
    sub_B16FFC(&ServantSellConfirmListViewManager___c_TypeInfo, v19);
    byte_40FBBE5 = 1;
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
  v29 = ServantSellConfirmListViewManager___c_TypeInfo;
  if ( (BYTE3(ServantSellConfirmListViewManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantSellConfirmListViewManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantSellConfirmListViewManager___c_TypeInfo);
    v29 = ServantSellConfirmListViewManager___c_TypeInfo;
  }
  static_fields = v29->static_fields;
  _9__19_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)static_fields->__9__19_0;
  if ( !_9__19_0 )
  {
    if ( (BYTE3(v29->vtable._0_Equals.methodPtr) & 4) != 0 && !v29->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v29);
      static_fields = ServantSellConfirmListViewManager___c_TypeInfo->static_fields;
    }
    v32 = (Il2CppObject *)static_fields->__9;
    _9__19_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B170CC(
                                                                           System_Comparison_UserCommandCodeEntity__TypeInfo,
                                                                           v25,
                                                                           v26,
                                                                           v27,
                                                                           v28);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__19_0,
      v32,
      Method_ServantSellConfirmListViewManager___c__GetSortEntList_b__19_0__,
      (const MethodInfo_25BFD48 *)Method_System_Comparison_UserCommandCodeEntity___ctor__);
    v33 = ServantSellConfirmListViewManager___c_TypeInfo->static_fields;
    v33->__9__19_0 = (struct System_Comparison_UserCommandCodeEntity__o *)_9__19_0;
    sub_B16F98(
      (BattleServantConfConponent_o *)&v33->__9__19_0,
      (System_Int32_array **)_9__19_0,
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
    (System_Comparison_T__o *)_9__19_0,
    (const MethodInfo_2F27DB4 *)Method_System_Collections_Generic_List_UserCommandCodeEntity__Sort__);
  return (System_Collections_Generic_List_UserCommandCodeEntity__o *)v20;
}


System_Collections_Generic_List_UserServantEntity__o *__fastcall ServantSellConfirmListViewManager__GetSvtSortEntList(
        ServantSellConfirmListViewManager_o *this,
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
  ServantSellConfirmListViewManager___c_c *v29; // x0
  struct ServantSellConfirmListViewManager___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__16_0; // x20
  Il2CppObject *v32; // x21
  struct ServantSellConfirmListViewManager___c_StaticFields *v33; // x0
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7
  System_Collections_Generic_List_Enumerator_T__o v41; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v42; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_40FBBE2 & 1) == 0 )
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
    sub_B16FFC(&Method_ServantSellConfirmListViewManager___c__GetSvtSortEntList_b__16_0__, v18);
    sub_B16FFC(&ServantSellConfirmListViewManager___c_TypeInfo, v19);
    byte_40FBBE2 = 1;
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
  v29 = ServantSellConfirmListViewManager___c_TypeInfo;
  if ( (BYTE3(ServantSellConfirmListViewManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantSellConfirmListViewManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantSellConfirmListViewManager___c_TypeInfo);
    v29 = ServantSellConfirmListViewManager___c_TypeInfo;
  }
  static_fields = v29->static_fields;
  _9__16_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)static_fields->__9__16_0;
  if ( !_9__16_0 )
  {
    if ( (BYTE3(v29->vtable._0_Equals.methodPtr) & 4) != 0 && !v29->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v29);
      static_fields = ServantSellConfirmListViewManager___c_TypeInfo->static_fields;
    }
    v32 = (Il2CppObject *)static_fields->__9;
    _9__16_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B170CC(
                                                                           System_Comparison_UserServantEntity__TypeInfo,
                                                                           v25,
                                                                           v26,
                                                                           v27,
                                                                           v28);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__16_0,
      v32,
      Method_ServantSellConfirmListViewManager___c__GetSvtSortEntList_b__16_0__,
      (const MethodInfo_25BFD48 *)Method_System_Comparison_UserServantEntity___ctor__);
    v33 = ServantSellConfirmListViewManager___c_TypeInfo->static_fields;
    v33->__9__16_0 = (struct System_Comparison_UserServantEntity__o *)_9__16_0;
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
    (const MethodInfo_2F27DB4 *)Method_System_Collections_Generic_List_UserServantEntity__Sort__);
  return (System_Collections_Generic_List_UserServantEntity__o *)v20;
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
  WebViewManager_o *Instance; // x0
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *MasterData_WarQuestSelectionMaster; // x0
  const MethodInfo *v17; // x1
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x20
  unsigned __int64 v19; // x22
  ListViewItem_o *v20; // x20
  __int64 v21; // x10
  int64_t UserCommandCodeId; // x0
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
  int64_t UserSvtId; // x0
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

  if ( (byte_40FBBE6 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_UserCommandCodeMaster___, selectedId);
    sub_B16FFC(&Method_DataManager_GetMasterData_UserServantMaster___, v5);
    sub_B16FFC(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__, v6);
    sub_B16FFC(&Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__TryGetEntity__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v9);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v10);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v11);
    sub_B16FFC(&ServantSellConfirmListViewItem_TypeInfo, v12);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v13);
    byte_40FBBE6 = 1;
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
            v21 = *(&ServantSellConfirmListViewItem_TypeInfo->_2.bitflags2 + 1);
            if ( *(&v20->klass->_2.bitflags2 + 1) >= (unsigned int)v21
              && (ServantSellConfirmListViewItem_c *)v20->klass->_2.typeHierarchy[v21 - 1] == ServantSellConfirmListViewItem_TypeInfo )
            {
              UserCommandCodeId = ServantSellConfirmListViewItem__get_UserCommandCodeId(
                                    (ServantSellConfirmListViewItem_o *)v20,
                                    v17);
              if ( entity )
              {
                v23 = *(_OWORD *)&entity->fields.id.fields.fakeValue;
                v24 = UserCommandCodeId;
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
      v41 = *(&ServantSellConfirmListViewItem_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v40->klass->_2.bitflags2 + 1) >= (unsigned int)v41
        && (ServantSellConfirmListViewItem_c *)v40->klass->_2.typeHierarchy[v41 - 1] == ServantSellConfirmListViewItem_TypeInfo )
      {
        UserSvtId = ServantSellConfirmListViewItem__get_UserSvtId((ServantSellConfirmListViewItem_o *)v40, v36);
        if ( v60 )
        {
          v43 = *(_OWORD *)&v60->fields.id.fields.fakeValue;
          v44 = UserSvtId;
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
          v53 = ServantSellConfirmListViewItem__get_UserSvtId((ServantSellConfirmListViewItem_o *)v40, v45);
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

  if ( (byte_40FBBE9 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    byte_40FBBE9 = 1;
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
  __int64 v11; // x2
  __int64 v12; // x3
  __int64 v13; // x4
  int32_t size; // w8
  System_Collections_Generic_List_ServantSellConfirmListViewObject__o *v15; // x21
  int v16; // w8
  __int64 v17; // x24
  ServantSellConfirmListViewObject_o *v18; // x22
  System_Action_o *v19; // x23
  const MethodInfo *v20; // x3

  if ( (byte_40FBBE8 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, *(_QWORD *)&mode);
    sub_B16FFC(&Method_System_Collections_Generic_List_ServantSellConfirmListViewObject__get_Count__, v5);
    sub_B16FFC(&Method_System_Collections_Generic_List_ServantSellConfirmListViewObject__get_Item__, v6);
    sub_B16FFC(&Method_ServantSellConfirmListViewManager_OnMoveEnd__, v7);
    sub_B16FFC(&StringLiteral_10004/*"OnMoveEnd"*/, v8);
    byte_40FBBE8 = 1;
  }
  ObjectList = ServantSellConfirmListViewManager__get_ObjectList(this, *(const MethodInfo **)&mode);
  if ( !ObjectList )
    goto LABEL_13;
  size = ObjectList->fields._size;
  v15 = ObjectList;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10004/*"OnMoveEnd"*/,
      0.0,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    v16 = ObjectList->fields._size;
    if ( v16 >= 1 )
    {
      v17 = 0LL;
      while ( 1 )
      {
        if ( v16 <= (unsigned int)v17 )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
        v18 = v15->fields._items->m_Items[v17];
        v19 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v10, v11, v12, v13);
        System_Action___ctor(v19, (Il2CppObject *)this, Method_ServantSellConfirmListViewManager_OnMoveEnd__, 0LL);
        if ( !v18 )
          break;
        ServantSellConfirmListViewObject__Init(v18, mode, v19, v20);
        v16 = v15->fields._size;
        if ( (int)++v17 >= v16 )
          return;
      }
LABEL_13:
      sub_B170D4();
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
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.onSelectItem,
    (System_Int32_array **)onSelectItem,
    (System_String_array **)onSelectItem,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  ServantSellConfirmListViewManager__SetMode_28303988(this, mode, v10);
}


void __fastcall ServantSellConfirmListViewManager__SetMode_28303988(
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
  __int64 v6; // x10
  int32_t v7; // w1

  if ( (byte_40FBBE7 & 1) == 0 )
  {
    sub_B16FFC(&ServantSellConfirmListViewObject_TypeInfo, obj);
    byte_40FBBE7 = 1;
  }
  if ( !obj
    || (v6 = *(&ServantSellConfirmListViewObject_TypeInfo->_2.bitflags2 + 1),
        *(&obj->klass->_2.bitflags2 + 1) < (unsigned int)v6)
    || (ServantSellConfirmListViewObject_c *)obj->klass->_2.typeHierarchy[v6 - 1] != ServantSellConfirmListViewObject_TypeInfo )
  {
    sub_B170D4();
  }
  if ( this->fields.initMode == 2 )
    v7 = 3;
  else
    v7 = 2;
  ServantSellConfirmListViewObject__Init((ServantSellConfirmListViewObject_o *)obj, v7, 0LL, method);
}


System_Collections_Generic_List_ServantSellConfirmListViewObject__o *__fastcall ServantSellConfirmListViewManager__get_ClippingObjectList(
        ServantSellConfirmListViewManager_o *this,
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
  ServantSellConfirmListViewObject_o *Component_srcLineSprite; // x0
  const MethodInfo *v20; // x1
  EventMissionProgressRequest_Argument_ProgressData_o *v21; // x21
  ListViewItem_o *Item; // x0

  if ( (byte_40FBBDF & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_ServantSellConfirmListViewObject___, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_ServantSellConfirmListViewObject__Add__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_ServantSellConfirmListViewObject___ctor__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_GameObject__get_Count__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_GameObject__get_Item__, v9);
    sub_B16FFC(&System_Collections_Generic_List_ServantSellConfirmListViewObject__TypeInfo, v10);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v11);
    byte_40FBBDF = 1;
  }
  v12 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_ServantSellConfirmListViewObject__TypeInfo,
                                                                                                  method,
                                                                                                  v2,
                                                                                                  v3,
                                                                                                  v4);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v12,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_ServantSellConfirmListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
LABEL_23:
    sub_B170D4();
  v14 = 4LL;
  while ( 1 )
  {
    v15 = v14 - 4;
    if ( v14 - 4 >= objectList->fields._size )
      return (System_Collections_Generic_List_ServantSellConfirmListViewObject__o *)v12;
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
      Component_srcLineSprite = (ServantSellConfirmListViewObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                        v18,
                                                                        (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_ServantSellConfirmListViewObject___);
      if ( !Component_srcLineSprite )
        goto LABEL_23;
      v21 = (EventMissionProgressRequest_Argument_ProgressData_o *)Component_srcLineSprite;
      Item = (ListViewItem_o *)ServantSellConfirmListViewObject__GetItem(Component_srcLineSprite, v20);
      if ( Item
        && (!Item->fields.isTermination || ListViewManager__ClippingItem_30192136((ListViewManager_o *)this, Item, 0LL)) )
      {
        if ( !v12 )
          goto LABEL_23;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v12,
          v21,
          (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_ServantSellConfirmListViewObject__Add__);
      }
    }
    objectList = this->fields.objectList;
    ++v14;
    if ( !objectList )
      goto LABEL_23;
  }
}


System_Collections_Generic_List_ServantSellConfirmListViewObject__o *__fastcall ServantSellConfirmListViewManager__get_ObjectList(
        ServantSellConfirmListViewManager_o *this,
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

  if ( (byte_40FBBDE & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_ServantSellConfirmListViewObject___, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_ServantSellConfirmListViewObject__Add__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_ServantSellConfirmListViewObject___ctor__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_GameObject__get_Count__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_GameObject__get_Item__, v9);
    sub_B16FFC(&System_Collections_Generic_List_ServantSellConfirmListViewObject__TypeInfo, v10);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v11);
    byte_40FBBDE = 1;
  }
  v12 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_ServantSellConfirmListViewObject__TypeInfo,
                                                                                                  method,
                                                                                                  v2,
                                                                                                  v3,
                                                                                                  v4);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v12,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_ServantSellConfirmListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
LABEL_19:
    sub_B170D4();
  v14 = 4LL;
  while ( 1 )
  {
    v15 = v14 - 4;
    if ( v14 - 4 >= objectList->fields._size )
      return (System_Collections_Generic_List_ServantSellConfirmListViewObject__o *)v12;
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
                                                                                         (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_ServantSellConfirmListViewObject___);
      if ( !v12 )
        goto LABEL_19;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v12,
        Component_srcLineSprite,
        (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_ServantSellConfirmListViewObject__Add__);
    }
    objectList = this->fields.objectList;
    ++v14;
    if ( !objectList )
      goto LABEL_19;
  }
}


void __fastcall ServantSellConfirmListViewManager___c___cctor(const MethodInfo *method)
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

  if ( (byte_40F7657 & 1) == 0 )
  {
    sub_B16FFC(&ServantSellConfirmListViewManager___c_TypeInfo, v1);
    byte_40F7657 = 1;
  }
  v5 = (Il2CppObject *)sub_B170CC(ServantSellConfirmListViewManager___c_TypeInfo, v1, v2, v3, v4);
  System_Object___ctor(v5, 0LL);
  static_fields = (BattleServantConfConponent_o *)ServantSellConfirmListViewManager___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v5;
  sub_B16F98(static_fields, (System_Int32_array **)v5, v7, v8, v9, v10, v11, v12);
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

  if ( (byte_40F7658 & 1) == 0 )
  {
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, a);
    byte_40F7658 = 1;
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


int32_t __fastcall ServantSellConfirmListViewManager___c___GetSvtSortEntList_b__16_0(
        ServantSellConfirmListViewManager___c_o *this,
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