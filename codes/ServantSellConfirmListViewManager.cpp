void ServantSellConfirmListViewManager___ctor(ServantSellConfirmListViewManager_o *this, const MethodInfo *method)
{
  ListViewManager___ctor((ListViewManager_o *)this, 0);
}


void ServantSellConfirmListViewManager__CallOnSelectitem(
        ServantSellConfirmListViewManager_o *this,
        ServantSellConfirmListViewItem_o *selectItem,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  struct System_Action_ServantSellConfirmListViewItem__o *onSelectItem; // x20
  GrandQuestFolderBoardItem_o *p_onSelectItem; // x0

  onSelectItem = this->fields.onSelectItem;
  if ( onSelectItem )
  {
    p_onSelectItem = (GrandQuestFolderBoardItem_o *)&this->fields.onSelectItem;
    p_onSelectItem->klass = 0;
    sub_1C71354(p_onSelectItem, 0, (int32_t)method, v3, v4, v5, v6, v7);
    ((void (__fastcall *)(intptr_t, ServantSellConfirmListViewItem_o *, intptr_t))onSelectItem->fields.invoke_impl)(
      onSelectItem->fields.method_code,
      selectItem,
      onSelectItem->fields.method);
  }
}


void ServantSellConfirmListViewManager__CancelDragEnd(
        ServantSellConfirmListViewManager_o *this,
        const MethodInfo *method)
{
  ;
}


void ServantSellConfirmListViewManager__CreateCommandCodeList(
        ServantSellConfirmListViewManager_o *this,
        System_Int64_array *commandCodeIds,
        bool isExceeded,
        bool isSellLastServant,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v10; // x1
  Il2CppObject *MasterData_object; // x0
  il2cpp_array_size_t max_length; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v13; // x21
  unsigned __int64 v14; // x26
  int64_t v15; // x23
  System_Collections_Generic_List_object__o *itemList; // x22
  int32_t v17; // w24
  Il2CppObject *Entity; // x25
  ServantSellConfirmListViewItem_o *v19; // x23
  const MethodInfo *v20; // x4
  int32_t v21; // w2
  int32_t v22; // w3
  System_String_o *v23; // x4
  int32_t v24; // w5
  int64_t v25; // x6
  System_String_o *v26; // x7
  struct System_Object_array *items; // x8
  _QWORD *v28; // x9
  __int64 size; // x10
  Il2CppClass **v30; // x0

  if ( (byte_4CC34FF & 1) == 0 )
  {
    sub_1C713B0(&Method_DataManager_GetMasterData_UserCommandCodeMaster___);
    sub_1C713B0(&Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__GetEntity__);
    sub_1C713B0(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    sub_1C713B0(&ServantSellConfirmListViewItem_TypeInfo);
    sub_1C713B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4CC34FF = 1;
  }
  if ( commandCodeIds && commandCodeIds->max_length && !isExceeded && !isSellLastServant )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_20;
    MasterData_object = DataManager__GetMasterData_object_(
                          Instance,
                          (const MethodInfo_314B10C *)Method_DataManager_GetMasterData_UserCommandCodeMaster___);
    max_length = commandCodeIds->max_length;
    if ( (int)max_length >= 1 )
    {
      v13 = (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object;
      v14 = 0;
      while ( 1 )
      {
        if ( v14 >= (unsigned int)max_length )
          sub_1C71610(MasterData_object);
        Instance = (DataManager_o *)this->fields.parentManager;
        if ( !Instance )
          break;
        v15 = commandCodeIds->m_Items[v14];
        itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
        Instance = (DataManager_o *)ServantOperationManager__GetSelectedOrderByCommandCodeId(
                                      (ServantOperationManager_o *)Instance,
                                      v15,
                                      0);
        if ( !v13 )
          break;
        v17 = (int)Instance;
        Entity = DataMasterBase_object__object__long___GetEntity(
                   v13,
                   v15,
                   (const MethodInfo_340B3DC *)Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__GetEntity__);
        v19 = (ServantSellConfirmListViewItem_o *)sub_1C715FC(ServantSellConfirmListViewItem_TypeInfo);
        ServantSellConfirmListViewItem___ctor_35345152(v19, v17, (UserCommandCodeEntity_o *)Entity, 0, v20);
        if ( !itemList )
          break;
        items = itemList->fields._items;
        v28 = Method_System_Collections_Generic_List_ListViewItem__Add__;
        ++itemList->fields._version;
        if ( !items )
          break;
        size = itemList->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            itemList,
            (Il2CppObject *)v19,
            *(const MethodInfo_3810718 **)(*(_QWORD *)(v28[4] + 192LL) + 112LL));
        }
        else
        {
          v30 = &items->obj.klass + size;
          itemList->fields._size = size + 1;
          v30[4] = (Il2CppClass *)v19;
          sub_1C71354((GrandQuestFolderBoardItem_o *)(v30 + 4), (int32_t)v19, v21, v22, v23, v24, v25, v26);
        }
        LODWORD(max_length) = commandCodeIds->max_length;
        if ( (__int64)++v14 >= (int)max_length )
          return;
      }
LABEL_20:
      sub_1C71608(Instance, v10);
    }
  }
}


void ServantSellConfirmListViewManager__CreateCommandCodeResultList(
        ServantSellConfirmListViewManager_o *this,
        System_Collections_Generic_List_long__o *commandCodeIds,
        bool isExceeded,
        bool isSellLastServant,
        const MethodInfo *method)
{
  ServantSellConfirmListViewManager_o *v9; // x0
  const MethodInfo *v10; // x2
  System_Collections_Generic_List_object__o *SortEntList; // x0
  __int64 v12; // x1
  System_Collections_Generic_List_object__o *v13; // x20
  Il2CppObject *current; // x23
  System_Collections_Generic_List_object__o *itemList; // x21
  int32_t v16; // w24
  ServantSellConfirmListViewItem_o *v17; // x22
  const MethodInfo *v18; // x4
  __int64 v19; // x0
  __int64 v20; // x1
  int32_t v21; // w2
  int32_t v22; // w3
  System_String_o *v23; // x4
  int32_t v24; // w5
  int64_t v25; // x6
  System_String_o *v26; // x7
  struct System_Object_array *items; // x8
  _QWORD *v28; // x9
  __int64 size; // x10
  Il2CppClass **v30; // x0
  System_Collections_Generic_List_Enumerator_object__o v31; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v32; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_4CC3500 & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_UserCommandCodeEntity__Dispose__);
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_UserCommandCodeEntity__MoveNext__);
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_UserCommandCodeEntity__get_Current__);
    sub_1C713B0(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    sub_1C713B0(&Method_System_Collections_Generic_List_UserCommandCodeEntity__GetEnumerator__);
    sub_1C713B0(&Method_System_Collections_Generic_List_UserCommandCodeEntity__IndexOf__);
    sub_1C713B0(&Method_System_Collections_Generic_List_long__get_Count__);
    sub_1C713B0(&ServantSellConfirmListViewItem_TypeInfo);
    byte_4CC3500 = 1;
  }
  memset(&v32, 0, sizeof(v32));
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0);
  if ( commandCodeIds && commandCodeIds->fields._size >= 1 && !isExceeded && !isSellLastServant )
  {
    SortEntList = (System_Collections_Generic_List_object__o *)ServantSellConfirmListViewManager__GetSortEntList(
                                                                 v9,
                                                                 commandCodeIds,
                                                                 v10);
    if ( !SortEntList )
      sub_1C71608(0, v12);
    v13 = SortEntList;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v31,
      SortEntList,
      (const MethodInfo_3811210 *)Method_System_Collections_Generic_List_UserCommandCodeEntity__GetEnumerator__);
    v32 = v31;
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v32,
              (const MethodInfo_35962C8 *)Method_System_Collections_Generic_List_Enumerator_UserCommandCodeEntity__MoveNext__) )
    {
      current = v32.fields._current;
      itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
      v16 = System_Collections_Generic_List_object___IndexOf(
              v13,
              v32.fields._current,
              (const MethodInfo_38113B8 *)Method_System_Collections_Generic_List_UserCommandCodeEntity__IndexOf__);
      v17 = (ServantSellConfirmListViewItem_o *)sub_1C715FC(ServantSellConfirmListViewItem_TypeInfo);
      ServantSellConfirmListViewItem___ctor_35345152(v17, v16, (UserCommandCodeEntity_o *)current, 0, v18);
      if ( !itemList )
        sub_1C71608(v19, v20);
      items = itemList->fields._items;
      v28 = Method_System_Collections_Generic_List_ListViewItem__Add__;
      ++itemList->fields._version;
      if ( !items )
        sub_1C71608(v19, v20);
      size = itemList->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          itemList,
          (Il2CppObject *)v17,
          *(const MethodInfo_3810718 **)(*(_QWORD *)(v28[4] + 192LL) + 112LL));
      }
      else
      {
        v30 = &items->obj.klass + size;
        itemList->fields._size = size + 1;
        v30[4] = (Il2CppClass *)v17;
        sub_1C71354((GrandQuestFolderBoardItem_o *)(v30 + 4), (int32_t)v17, v21, v22, v23, v24, v25, v26);
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v32,
      (const MethodInfo_35962C4 *)Method_System_Collections_Generic_List_Enumerator_UserCommandCodeEntity__Dispose__);
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0);
  }
}


void ServantSellConfirmListViewManager__CreateList(
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
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0);
  isExceeded = isExceeded;
  isSellLastServant = isSellLastServant;
  ServantSellConfirmListViewManager__CreateServantList(this, servantIds, isExceeded, isSellLastServant, v12);
  ServantSellConfirmListViewManager__CreateCommandCodeList(this, commandCodeids, isExceeded, isSellLastServant, v13);
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0);
}


void ServantSellConfirmListViewManager__CreateServantList(
        ServantSellConfirmListViewManager_o *this,
        System_Int64_array *servantIds,
        bool isExceeded,
        bool isSellLastServant,
        const MethodInfo *method)
{
  _BOOL4 v5; // w22
  DataManager_o *Instance; // x0
  __int64 v9; // x1
  Il2CppObject *MasterData_object; // x23
  Il2CppObject *v11; // x25
  ServantOperationManager_o *parentManager; // x19
  System_Collections_Generic_List_ServantOperationListViewItem__o *SelectedEquipeCmdCardServantList; // x0
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 v15; // x21
  int64_t v16; // x26
  UserServantEntity_o *v17; // x27
  __int64 v18; // x19
  __int64 v19; // x28
  System_Collections_Generic_List_object__o *itemList; // x28
  System_Int64_array *v21; // x23
  _BOOL4 v22; // w25
  int64_t favoriteUserSvtId; // x24
  System_Int64_array *v24; // x20
  System_Int64_array *v25; // x22
  int32_t v26; // w19
  ServantSellConfirmListViewItem_o *v27; // x29
  const MethodInfo *v28; // x6
  int32_t v29; // w2
  int32_t v30; // w3
  System_String_o *v31; // x4
  int32_t v32; // w5
  int64_t v33; // x6
  System_String_o *v34; // x7
  struct System_Object_array *items; // x8
  _QWORD *v36; // x9
  __int64 size; // x10
  Il2CppClass **v38; // x0
  System_Collections_Generic_List_int__o *v39; // [xsp+0h] [xbp-A0h]
  Il2CppObject *v40; // [xsp+8h] [xbp-98h]
  ServantSellConfirmListViewManager_o *v41; // [xsp+10h] [xbp-90h]
  UserGameEntity_o *SelfUserGame; // [xsp+18h] [xbp-88h]
  int64_t *m_Items; // [xsp+28h] [xbp-78h]
  System_Int64_array *equipIdList; // [xsp+30h] [xbp-70h] BYREF
  System_Int64_array *svtIdList; // [xsp+38h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v47; // 0:x0.16

  v5 = isExceeded;
  if ( (byte_4CC34FC & 1) == 0 )
  {
    sub_1C713B0(&Method_DataManager_GetMasterData_UserDeckMaster___);
    sub_1C713B0(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1C713B0(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_1C713B0(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    sub_1C713B0(&Method_System_Collections_Generic_List_int__Contains__);
    sub_1C713B0(&NetworkManager_TypeInfo);
    sub_1C713B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C713B0(&ServantSellConfirmListViewItem_TypeInfo);
    sub_1C713B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4CC34FC = 1;
  }
  equipIdList = 0;
  svtIdList = 0;
  if ( servantIds && servantIds->max_length )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_38;
    MasterData_object = DataManager__GetMasterData_object_(
                          Instance,
                          (const MethodInfo_314B10C *)Method_DataManager_GetMasterData_UserServantMaster___);
    SelfUserGame = UserGameMaster__getSelfUserGame(0);
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_38;
    v11 = DataManager__GetMasterData_object_(
            Instance,
            (const MethodInfo_314B10C *)Method_DataManager_GetMasterData_UserDeckMaster___);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    if ( !byte_4CC112A )
    {
      sub_1C713B0(&NetworkManager_TypeInfo);
      byte_4CC112A = 1;
    }
    Instance = (DataManager_o *)NetworkManager_TypeInfo;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      Instance = (DataManager_o *)NetworkManager_TypeInfo;
    }
    if ( !v11 )
      goto LABEL_38;
    UserDeckMaster__getPartyList(
      (UserDeckMaster_o *)v11,
      &svtIdList,
      &equipIdList,
      *(_QWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 64LL),
      0);
    parentManager = this->fields.parentManager;
    if ( !parentManager )
      goto LABEL_38;
    SelectedEquipeCmdCardServantList = ServantOperationManager__GetSelectedEquipeCmdCardServantList(
                                         this->fields.parentManager,
                                         0);
    Instance = (DataManager_o *)ServantOperationManager__GetEquipedCommandCodeSellLastSvtList(
                                  parentManager,
                                  SelectedEquipeCmdCardServantList,
                                  0);
    max_length = servantIds->max_length;
    v39 = (System_Collections_Generic_List_int__o *)Instance;
    if ( (int)max_length >= 1 )
    {
      v15 = 0;
      m_Items = servantIds->m_Items;
      v40 = MasterData_object;
      v41 = this;
      while ( 1 )
      {
        if ( v15 >= (unsigned int)max_length )
          sub_1C71610(Instance);
        if ( !MasterData_object )
          break;
        v16 = m_Items[v15];
        Instance = (DataManager_o *)DataMasterBase_object__object__long___GetEntity(
                                      (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                                      v16,
                                      (const MethodInfo_340B3DC *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
        v17 = (UserServantEntity_o *)Instance;
        if ( !v5 )
          goto LABEL_42;
        if ( !Instance )
          break;
        Instance = (DataManager_o *)UserServantEntity__isExceeded((UserServantEntity_o *)Instance, 0);
        if ( ((unsigned __int8)Instance & 1) != 0 )
        {
LABEL_42:
          if ( !isSellLastServant )
            goto LABEL_28;
          if ( !v17 )
            break;
          v19 = *(_QWORD *)&v17->fields.svtId.fields.currentCryptoKey;
          v18 = *(_QWORD *)&v17->fields.svtId.fields.fakeValue;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v47.fields.currentCryptoKey = v19;
          *(_QWORD *)&v47.fields.fakeValue = v18;
          v9 = (unsigned int)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49297952(v47, 0);
          Instance = (DataManager_o *)v39;
          if ( !v39 )
            break;
          Instance = (DataManager_o *)System_Collections_Generic_List_int___Contains(
                                        v39,
                                        v9,
                                        (const MethodInfo_37F3A6C *)Method_System_Collections_Generic_List_int__Contains__);
          if ( ((unsigned __int8)Instance & 1) != 0 )
          {
LABEL_28:
            Instance = (DataManager_o *)this->fields.parentManager;
            if ( !Instance )
              break;
            itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
            v21 = servantIds;
            v22 = v5;
            Instance = (DataManager_o *)ServantOperationManager__GetSelectedOrderByServantId(
                                          (ServantOperationManager_o *)Instance,
                                          v16,
                                          0);
            if ( !SelfUserGame )
              break;
            favoriteUserSvtId = SelfUserGame->fields.favoriteUserSvtId;
            v24 = equipIdList;
            v25 = svtIdList;
            v26 = (int)Instance;
            v27 = (ServantSellConfirmListViewItem_o *)sub_1C715FC(ServantSellConfirmListViewItem_TypeInfo);
            ServantSellConfirmListViewItem___ctor(v27, v26, v17, v25, v24, v16 == favoriteUserSvtId, v28);
            if ( !itemList )
              break;
            items = itemList->fields._items;
            v36 = Method_System_Collections_Generic_List_ListViewItem__Add__;
            ++itemList->fields._version;
            if ( !items )
              break;
            size = itemList->fields._size;
            if ( (unsigned int)size >= LODWORD(items->max_length) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                itemList,
                (Il2CppObject *)v27,
                *(const MethodInfo_3810718 **)(*(_QWORD *)(v36[4] + 192LL) + 112LL));
            }
            else
            {
              v38 = &items->obj.klass + size;
              itemList->fields._size = size + 1;
              v38[4] = (Il2CppClass *)v27;
              sub_1C71354((GrandQuestFolderBoardItem_o *)(v38 + 4), (int32_t)v27, v29, v30, v31, v32, v33, v34);
            }
            servantIds = v21;
            MasterData_object = v40;
            this = v41;
            v5 = v22;
          }
        }
        LODWORD(max_length) = servantIds->max_length;
        if ( (__int64)++v15 >= (int)max_length )
          return;
      }
LABEL_38:
      sub_1C71608(Instance, v9);
    }
  }
}


void ServantSellConfirmListViewManager__CreateSortServantList(
        ServantSellConfirmListViewManager_o *this,
        System_Int64_array *servantIds,
        bool isExceeded,
        bool isSellLastServant,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  int64_t v7; // x1
  UserGameEntity_o *SelfUserGame; // x22
  Il2CppObject *MasterData_object; // x19
  ServantOperationManager_o *parentManager; // x19
  System_Collections_Generic_List_ServantOperationListViewItem__o *SelectedEquipeCmdCardServantList; // x0
  System_Collections_Generic_List_int__o *EquipedCommandCodeSellLastSvtList; // x23
  System_Collections_Generic_List_long__o *v13; // x25
  const MethodInfo *v14; // x2
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 v16; // x19
  struct System_Int64_array *items; // x8
  _QWORD *v18; // x9
  __int64 size; // x10
  System_Collections_Generic_List_object__o *v20; // x24
  _BOOL8 v21; // x0
  __int64 v22; // x1
  Il2CppObject *current; // x25
  void *monitor; // x19
  Il2CppClass *klass; // x20
  __int64 v26; // x0
  System_Collections_Generic_List_object__o *itemList; // x26
  __int64 v28; // x0
  __int64 v29; // x1
  Il2CppObject v30; // q0
  int32_t v31; // w27
  System_Int64_array *v32; // x19
  System_Int64_array *v33; // x29
  int64_t v34; // x0
  __int64 v35; // x1
  int64_t favoriteUserSvtId; // x21
  int64_t v37; // x20
  ServantSellConfirmListViewItem_o *v38; // x28
  const MethodInfo *v39; // x6
  __int64 v40; // x0
  __int64 v41; // x1
  int32_t v42; // w2
  int32_t v43; // w3
  System_String_o *v44; // x4
  int32_t v45; // w5
  int64_t v46; // x6
  System_String_o *v47; // x7
  struct System_Object_array *v48; // x8
  _QWORD *v49; // x9
  __int64 v50; // x10
  Il2CppClass **v51; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v55; // [xsp+10h] [xbp-D0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v56; // [xsp+30h] [xbp-B0h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v57; // [xsp+50h] [xbp-90h] BYREF
  System_Int64_array *equipIdList; // [xsp+70h] [xbp-70h] BYREF
  System_Int64_array *svtIdList; // [xsp+78h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v60; // 0:x0.16

  if ( (byte_4CC34FD & 1) == 0 )
  {
    sub_1C713B0(&Method_DataManager_GetMasterData_UserDeckMaster___);
    sub_1C713B0(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_UserServantEntity__Dispose__);
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_UserServantEntity__MoveNext__);
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_UserServantEntity__get_Current__);
    sub_1C713B0(&Method_System_Collections_Generic_List_long__Add__);
    sub_1C713B0(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    sub_1C713B0(&Method_System_Collections_Generic_List_int__Contains__);
    sub_1C713B0(&Method_System_Collections_Generic_List_UserServantEntity__GetEnumerator__);
    sub_1C713B0(&Method_System_Collections_Generic_List_UserServantEntity__IndexOf__);
    sub_1C713B0(&Method_System_Collections_Generic_List_long___ctor__);
    sub_1C713B0(&System_Collections_Generic_List_long__TypeInfo);
    sub_1C713B0(&NetworkManager_TypeInfo);
    sub_1C713B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C713B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C713B0(&ServantSellConfirmListViewItem_TypeInfo);
    sub_1C713B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4CC34FD = 1;
  }
  equipIdList = 0;
  svtIdList = 0;
  memset(&v57, 0, sizeof(v57));
  this->fields.kind = 3;
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0);
  if ( servantIds && servantIds->max_length )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_47;
    DataManager__GetMasterData_object_(
      Instance,
      (const MethodInfo_314B10C *)Method_DataManager_GetMasterData_UserServantMaster___);
    SelfUserGame = UserGameMaster__getSelfUserGame(0);
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_47;
    MasterData_object = DataManager__GetMasterData_object_(
                          Instance,
                          (const MethodInfo_314B10C *)Method_DataManager_GetMasterData_UserDeckMaster___);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    if ( !byte_4CC112A )
    {
      sub_1C713B0(&NetworkManager_TypeInfo);
      byte_4CC112A = 1;
    }
    Instance = (DataManager_o *)NetworkManager_TypeInfo;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      Instance = (DataManager_o *)NetworkManager_TypeInfo;
    }
    if ( !MasterData_object )
      goto LABEL_47;
    UserDeckMaster__getPartyList(
      (UserDeckMaster_o *)MasterData_object,
      &svtIdList,
      &equipIdList,
      *(_QWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 64LL),
      0);
    parentManager = this->fields.parentManager;
    if ( !parentManager )
      goto LABEL_47;
    SelectedEquipeCmdCardServantList = ServantOperationManager__GetSelectedEquipeCmdCardServantList(
                                         this->fields.parentManager,
                                         0);
    EquipedCommandCodeSellLastSvtList = ServantOperationManager__GetEquipedCommandCodeSellLastSvtList(
                                          parentManager,
                                          SelectedEquipeCmdCardServantList,
                                          0);
    v13 = (System_Collections_Generic_List_long__o *)sub_1C715FC(System_Collections_Generic_List_long__TypeInfo);
    System_Collections_Generic_List_long____ctor(
      v13,
      (const MethodInfo_37F7EF8 *)Method_System_Collections_Generic_List_long___ctor__);
    max_length = servantIds->max_length;
    if ( (int)max_length >= 1 )
    {
      v16 = 0;
      while ( 1 )
      {
        if ( v16 >= (unsigned int)max_length )
          sub_1C71610(Instance);
        if ( !v13 )
          break;
        v7 = servantIds->m_Items[v16];
        items = v13->fields._items;
        v18 = Method_System_Collections_Generic_List_long__Add__;
        ++v13->fields._version;
        if ( !items )
          break;
        size = v13->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_long___AddWithResize(
            v13,
            v7,
            *(const MethodInfo_37F874C **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
        }
        else
        {
          v13->fields._size = size + 1;
          items->m_Items[size] = v7;
        }
        LODWORD(max_length) = servantIds->max_length;
        if ( (__int64)++v16 >= (int)max_length )
          goto LABEL_24;
      }
LABEL_47:
      sub_1C71608(Instance, v7);
    }
LABEL_24:
    Instance = (DataManager_o *)ServantSellConfirmListViewManager__GetSvtSortEntList(
                                  (ServantSellConfirmListViewManager_o *)Instance,
                                  v13,
                                  v14);
    if ( !Instance )
      goto LABEL_47;
    v20 = (System_Collections_Generic_List_object__o *)Instance;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v56,
      (System_Collections_Generic_List_object__o *)Instance,
      (const MethodInfo_3811210 *)Method_System_Collections_Generic_List_UserServantEntity__GetEnumerator__);
    *(_OWORD *)&v57.fields._list = *(_OWORD *)&v56.fields.currentCryptoKey;
    v57.fields._current = (Il2CppObject *)v56.fields.fakeValue;
    while ( 1 )
    {
      v21 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v57,
              (const MethodInfo_35962C8 *)Method_System_Collections_Generic_List_Enumerator_UserServantEntity__MoveNext__);
      if ( !v21 )
        break;
      current = v57.fields._current;
      if ( isExceeded )
      {
        if ( !v57.fields._current )
          sub_1C71608(v21, v22);
        v21 = UserServantEntity__isExceeded((UserServantEntity_o *)v57.fields._current, 0);
        if ( !v21 )
          continue;
      }
      if ( !isSellLastServant )
        goto LABEL_36;
      if ( !current )
        sub_1C71608(v21, v22);
      klass = current[5].klass;
      monitor = current[5].monitor;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v60.fields.currentCryptoKey = klass;
      *(_QWORD *)&v60.fields.fakeValue = monitor;
      v26 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49297952(v60, 0);
      if ( !EquipedCommandCodeSellLastSvtList )
        sub_1C71608(v26, (unsigned int)v26);
      if ( System_Collections_Generic_List_int___Contains(
             EquipedCommandCodeSellLastSvtList,
             v26,
             (const MethodInfo_37F3A6C *)Method_System_Collections_Generic_List_int__Contains__) )
      {
LABEL_36:
        itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
        v28 = System_Collections_Generic_List_object___IndexOf(
                v20,
                current,
                (const MethodInfo_38113B8 *)Method_System_Collections_Generic_List_UserServantEntity__IndexOf__);
        if ( !current )
          sub_1C71608(v28, v29);
        v30 = current[2];
        v31 = v28;
        v32 = equipIdList;
        v33 = svtIdList;
        *(Il2CppObject *)&v56.fields.currentCryptoKey = current[1];
        *(Il2CppObject *)&v56.fields.fakeValue = v30;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        v55 = v56;
        v34 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49301476(&v55, 0);
        if ( !SelfUserGame )
          sub_1C71608(v34, v35);
        favoriteUserSvtId = SelfUserGame->fields.favoriteUserSvtId;
        v37 = v34;
        v38 = (ServantSellConfirmListViewItem_o *)sub_1C715FC(ServantSellConfirmListViewItem_TypeInfo);
        ServantSellConfirmListViewItem___ctor(
          v38,
          v31,
          (UserServantEntity_o *)current,
          v33,
          v32,
          v37 == favoriteUserSvtId,
          v39);
        if ( !itemList )
          sub_1C71608(v40, v41);
        v48 = itemList->fields._items;
        v49 = Method_System_Collections_Generic_List_ListViewItem__Add__;
        ++itemList->fields._version;
        if ( !v48 )
          sub_1C71608(v40, v41);
        v50 = itemList->fields._size;
        if ( (unsigned int)v50 >= LODWORD(v48->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            itemList,
            (Il2CppObject *)v38,
            *(const MethodInfo_3810718 **)(*(_QWORD *)(v49[4] + 192LL) + 112LL));
        }
        else
        {
          v51 = &v48->obj.klass + v50;
          itemList->fields._size = v50 + 1;
          v51[4] = (Il2CppClass *)v38;
          sub_1C71354((GrandQuestFolderBoardItem_o *)(v51 + 4), (int32_t)v38, v42, v43, v44, v45, v46, v47);
        }
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v57,
      (const MethodInfo_35962C4 *)Method_System_Collections_Generic_List_Enumerator_UserServantEntity__Dispose__);
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0);
  }
}


void ServantSellConfirmListViewManager__DestroyList(
        ServantSellConfirmListViewManager_o *this,
        const MethodInfo *method)
{
  ListViewManager__DestroyList((ListViewManager_o *)this, 0);
}


// local variable allocation has failed, the output may be wrong!
int64_t ServantSellConfirmListViewManager__GetAmountSortValue(
        ServantSellConfirmListViewManager_o *this,
        int32_t svtId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *itemList; // x0
  int64_t v6; // x21
  int32_t v7; // w22
  __int64 naturalAligment; // x10
  __int64 v9; // x23
  struct System_Object_array *items; // x24
  int32_t v11; // w8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v13; // 0:x0.16

  if ( (byte_4CC3506 & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_1C713B0(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_1C713B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C713B0(&ServantSellConfirmListViewItem_TypeInfo);
    byte_4CC3506 = 1;
  }
  itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
  if ( !itemList )
LABEL_14:
    sub_1C71608(itemList, *(_QWORD *)&svtId);
  v6 = 0;
  v7 = 0;
  while ( v7 < itemList->fields._size )
  {
    itemList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                              itemList,
                                                              v7,
                                                              (const MethodInfo_3810448 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    if ( itemList )
    {
      naturalAligment = ServantSellConfirmListViewItem_TypeInfo->_2.naturalAligment;
      if ( itemList->klass->_2.naturalAligment >= (unsigned int)naturalAligment
        && (ServantSellConfirmListViewItem_c *)itemList->klass->_2.typeHierarchy[naturalAligment - 1] == ServantSellConfirmListViewItem_TypeInfo )
      {
        items = itemList[3].fields._items;
        v9 = *(_QWORD *)&itemList[3].fields._size;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v13.fields.currentCryptoKey = items;
        *(_QWORD *)&v13.fields.fakeValue = v9;
        v11 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49297952(v13, 0);
        itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
        if ( v11 == svtId )
          ++v6;
        ++v7;
        if ( itemList )
          continue;
      }
    }
    goto LABEL_14;
  }
  return v6;
}


// local variable allocation has failed, the output may be wrong!
int64_t ServantSellConfirmListViewManager__GetCommandCodeAmountSortValue(
        ServantSellConfirmListViewManager_o *this,
        int32_t commandCodeId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *itemList; // x0
  int64_t v6; // x21
  int32_t v7; // w22
  __int64 naturalAligment; // x10
  System_Collections_Generic_List_object__o *v9; // x8

  if ( (byte_4CC3507 & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_1C713B0(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_1C713B0(&ServantSellConfirmListViewItem_TypeInfo);
    byte_4CC3507 = 1;
  }
  itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
  if ( !itemList )
LABEL_12:
    sub_1C71608(itemList, *(_QWORD *)&commandCodeId);
  v6 = 0;
  v7 = 0;
  while ( v7 < itemList->fields._size )
  {
    itemList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                              itemList,
                                                              v7,
                                                              (const MethodInfo_3810448 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    if ( itemList )
    {
      naturalAligment = ServantSellConfirmListViewItem_TypeInfo->_2.naturalAligment;
      if ( itemList->klass->_2.naturalAligment >= (unsigned int)naturalAligment
        && (ServantSellConfirmListViewItem_c *)itemList->klass->_2.typeHierarchy[naturalAligment - 1] == ServantSellConfirmListViewItem_TypeInfo )
      {
        ++v7;
        v9 = itemList;
        itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
        if ( LODWORD(v9[4].monitor) != commandCodeId )
          ++v6;
        if ( itemList )
          continue;
      }
    }
    goto LABEL_12;
  }
  return v6;
}


bool ServantSellConfirmListViewManager__GetDragSelect(
        ServantSellConfirmListViewManager_o *this,
        const MethodInfo *method)
{
  return 0;
}


int32_t ServantSellConfirmListViewManager__GetModeKind(
        ServantSellConfirmListViewManager_o *this,
        const MethodInfo *method)
{
  return this->fields.modeKind;
}


System_Collections_Generic_List_UserCommandCodeEntity__o *ServantSellConfirmListViewManager__GetSortEntList(
        ServantSellConfirmListViewManager_o *this,
        System_Collections_Generic_List_long__o *commandCodeIds,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v4; // x19
  void *Instance; // x0
  __int64 v6; // x1
  DataMasterBase_TMaster__TEntity__PKType__o *v7; // x21
  _BOOL8 v8; // x0
  __int64 v9; // x1
  Il2CppObject *Entity; // x0
  int32_t v11; // w2
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7
  Il2CppObject *v17; // x1
  struct System_Object_array *items; // x8
  _QWORD *v19; // x9
  __int64 size; // x10
  Il2CppClass **v21; // x0
  System_Comparison_T__o *v22; // x20
  Il2CppObject *v23; // x21
  struct ServantSellConfirmListViewManager___c_StaticFields *static_fields; // x0
  int32_t v25; // w2
  int32_t v26; // w3
  System_String_o *v27; // x4
  int32_t v28; // w5
  int64_t v29; // x6
  System_String_o *v30; // x7
  System_Collections_Generic_List_Enumerator_T__o v32; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v33; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_4CC3501 & 1) == 0 )
  {
    sub_1C713B0(&System_Comparison_UserCommandCodeEntity__TypeInfo);
    sub_1C713B0(&Method_DataManager_GetMasterData_UserCommandCodeMaster___);
    sub_1C713B0(&Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__GetEntity__);
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_long__Dispose__);
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_long__MoveNext__);
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_long__get_Current__);
    sub_1C713B0(&Method_System_Collections_Generic_List_UserCommandCodeEntity__Add__);
    sub_1C713B0(&Method_System_Collections_Generic_List_long__GetEnumerator__);
    sub_1C713B0(&Method_System_Collections_Generic_List_UserCommandCodeEntity__Sort__);
    sub_1C713B0(&Method_System_Collections_Generic_List_UserCommandCodeEntity___ctor__);
    sub_1C713B0(&System_Collections_Generic_List_UserCommandCodeEntity__TypeInfo);
    sub_1C713B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C713B0(&Method_ServantSellConfirmListViewManager___c__GetSortEntList_b__19_0__);
    sub_1C713B0(&ServantSellConfirmListViewManager___c_TypeInfo);
    byte_4CC3501 = 1;
  }
  memset(&v33, 0, sizeof(v33));
  v4 = (System_Collections_Generic_List_object__o *)sub_1C715FC(System_Collections_Generic_List_UserCommandCodeEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v4,
    (const MethodInfo_380FEE4 *)Method_System_Collections_Generic_List_UserCommandCodeEntity___ctor__);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_24;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_314B10C *)Method_DataManager_GetMasterData_UserCommandCodeMaster___);
  if ( !commandCodeIds )
    goto LABEL_24;
  v7 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  System_Collections_Generic_List_long___GetEnumerator(
    &v32,
    commandCodeIds,
    (const MethodInfo_37F9220 *)Method_System_Collections_Generic_List_long__GetEnumerator__);
  v33 = v32;
  while ( 1 )
  {
    v8 = System_Collections_Generic_List_Enumerator_long___MoveNext(
           &v33,
           (const MethodInfo_3593788 *)Method_System_Collections_Generic_List_Enumerator_long__MoveNext__);
    if ( !v8 )
      break;
    if ( !v7 )
      sub_1C71608(v8, v9);
    Entity = DataMasterBase_object__object__long___GetEntity(
               v7,
               (int64_t)v33.fields._current,
               (const MethodInfo_340B3DC *)Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__GetEntity__);
    v17 = Entity;
    if ( !v4 )
      sub_1C71608(Entity, Entity);
    items = v4->fields._items;
    v19 = Method_System_Collections_Generic_List_UserCommandCodeEntity__Add__;
    ++v4->fields._version;
    if ( !items )
      sub_1C71608(Entity, Entity);
    size = v4->fields._size;
    if ( (unsigned int)size >= LODWORD(items->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v4,
        Entity,
        *(const MethodInfo_3810718 **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
    }
    else
    {
      v21 = &items->obj.klass + size;
      v4->fields._size = size + 1;
      v21[4] = (Il2CppClass *)v17;
      sub_1C71354((GrandQuestFolderBoardItem_o *)(v21 + 4), (int32_t)v17, v11, v12, v13, v14, v15, v16);
    }
  }
  System_Collections_Generic_List_Enumerator_long___Dispose(
    &v33,
    (const MethodInfo_3593784 *)Method_System_Collections_Generic_List_Enumerator_long__Dispose__);
  Instance = ServantSellConfirmListViewManager___c_TypeInfo;
  if ( !ServantSellConfirmListViewManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantSellConfirmListViewManager___c_TypeInfo);
    Instance = ServantSellConfirmListViewManager___c_TypeInfo;
  }
  v22 = *(System_Comparison_T__o **)(*((_QWORD *)Instance + 23) + 16LL);
  if ( !v22 )
  {
    if ( !*((_DWORD *)Instance + 56) )
    {
      j_il2cpp_runtime_class_init_0(Instance);
      Instance = ServantSellConfirmListViewManager___c_TypeInfo;
    }
    v23 = (Il2CppObject *)**((_QWORD **)Instance + 23);
    v22 = (System_Comparison_T__o *)sub_1C715FC(System_Comparison_UserCommandCodeEntity__TypeInfo);
    System_Comparison_object____ctor(
      v22,
      v23,
      Method_ServantSellConfirmListViewManager___c__GetSortEntList_b__19_0__,
      0);
    static_fields = ServantSellConfirmListViewManager___c_TypeInfo->static_fields;
    static_fields->__9__19_0 = (struct System_Comparison_UserCommandCodeEntity__o *)v22;
    sub_1C71354((GrandQuestFolderBoardItem_o *)&static_fields->__9__19_0, (int32_t)v22, v25, v26, v27, v28, v29, v30);
  }
  if ( !v4 )
LABEL_24:
    sub_1C71608(Instance, v6);
  System_Collections_Generic_List_object___Sort_58794460(
    v4,
    v22,
    (const MethodInfo_38121DC *)Method_System_Collections_Generic_List_UserCommandCodeEntity__Sort__);
  return (System_Collections_Generic_List_UserCommandCodeEntity__o *)v4;
}


System_Collections_Generic_List_UserServantEntity__o *ServantSellConfirmListViewManager__GetSvtSortEntList(
        ServantSellConfirmListViewManager_o *this,
        System_Collections_Generic_List_long__o *servantIds,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v4; // x19
  void *Instance; // x0
  __int64 v6; // x1
  DataMasterBase_TMaster__TEntity__PKType__o *v7; // x21
  _BOOL8 v8; // x0
  __int64 v9; // x1
  Il2CppObject *Entity; // x0
  int32_t v11; // w2
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7
  Il2CppObject *v17; // x1
  struct System_Object_array *items; // x8
  _QWORD *v19; // x9
  __int64 size; // x10
  Il2CppClass **v21; // x0
  System_Comparison_T__o *v22; // x20
  Il2CppObject *v23; // x21
  struct ServantSellConfirmListViewManager___c_StaticFields *static_fields; // x0
  int32_t v25; // w2
  int32_t v26; // w3
  System_String_o *v27; // x4
  int32_t v28; // w5
  int64_t v29; // x6
  System_String_o *v30; // x7
  System_Collections_Generic_List_Enumerator_T__o v32; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v33; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_4CC34FE & 1) == 0 )
  {
    sub_1C713B0(&System_Comparison_UserServantEntity__TypeInfo);
    sub_1C713B0(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1C713B0(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_long__Dispose__);
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_long__MoveNext__);
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_long__get_Current__);
    sub_1C713B0(&Method_System_Collections_Generic_List_UserServantEntity__Add__);
    sub_1C713B0(&Method_System_Collections_Generic_List_long__GetEnumerator__);
    sub_1C713B0(&Method_System_Collections_Generic_List_UserServantEntity__Sort__);
    sub_1C713B0(&Method_System_Collections_Generic_List_UserServantEntity___ctor__);
    sub_1C713B0(&System_Collections_Generic_List_UserServantEntity__TypeInfo);
    sub_1C713B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C713B0(&Method_ServantSellConfirmListViewManager___c__GetSvtSortEntList_b__16_0__);
    sub_1C713B0(&ServantSellConfirmListViewManager___c_TypeInfo);
    byte_4CC34FE = 1;
  }
  memset(&v33, 0, sizeof(v33));
  v4 = (System_Collections_Generic_List_object__o *)sub_1C715FC(System_Collections_Generic_List_UserServantEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v4,
    (const MethodInfo_380FEE4 *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_24;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_314B10C *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !servantIds )
    goto LABEL_24;
  v7 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  System_Collections_Generic_List_long___GetEnumerator(
    &v32,
    servantIds,
    (const MethodInfo_37F9220 *)Method_System_Collections_Generic_List_long__GetEnumerator__);
  v33 = v32;
  while ( 1 )
  {
    v8 = System_Collections_Generic_List_Enumerator_long___MoveNext(
           &v33,
           (const MethodInfo_3593788 *)Method_System_Collections_Generic_List_Enumerator_long__MoveNext__);
    if ( !v8 )
      break;
    if ( !v7 )
      sub_1C71608(v8, v9);
    Entity = DataMasterBase_object__object__long___GetEntity(
               v7,
               (int64_t)v33.fields._current,
               (const MethodInfo_340B3DC *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    v17 = Entity;
    if ( !v4 )
      sub_1C71608(Entity, Entity);
    items = v4->fields._items;
    v19 = Method_System_Collections_Generic_List_UserServantEntity__Add__;
    ++v4->fields._version;
    if ( !items )
      sub_1C71608(Entity, Entity);
    size = v4->fields._size;
    if ( (unsigned int)size >= LODWORD(items->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v4,
        Entity,
        *(const MethodInfo_3810718 **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
    }
    else
    {
      v21 = &items->obj.klass + size;
      v4->fields._size = size + 1;
      v21[4] = (Il2CppClass *)v17;
      sub_1C71354((GrandQuestFolderBoardItem_o *)(v21 + 4), (int32_t)v17, v11, v12, v13, v14, v15, v16);
    }
  }
  System_Collections_Generic_List_Enumerator_long___Dispose(
    &v33,
    (const MethodInfo_3593784 *)Method_System_Collections_Generic_List_Enumerator_long__Dispose__);
  Instance = ServantSellConfirmListViewManager___c_TypeInfo;
  if ( !ServantSellConfirmListViewManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantSellConfirmListViewManager___c_TypeInfo);
    Instance = ServantSellConfirmListViewManager___c_TypeInfo;
  }
  v22 = *(System_Comparison_T__o **)(*((_QWORD *)Instance + 23) + 8LL);
  if ( !v22 )
  {
    if ( !*((_DWORD *)Instance + 56) )
    {
      j_il2cpp_runtime_class_init_0(Instance);
      Instance = ServantSellConfirmListViewManager___c_TypeInfo;
    }
    v23 = (Il2CppObject *)**((_QWORD **)Instance + 23);
    v22 = (System_Comparison_T__o *)sub_1C715FC(System_Comparison_UserServantEntity__TypeInfo);
    System_Comparison_object____ctor(
      v22,
      v23,
      Method_ServantSellConfirmListViewManager___c__GetSvtSortEntList_b__16_0__,
      0);
    static_fields = ServantSellConfirmListViewManager___c_TypeInfo->static_fields;
    static_fields->__9__16_0 = (struct System_Comparison_UserServantEntity__o *)v22;
    sub_1C71354((GrandQuestFolderBoardItem_o *)&static_fields->__9__16_0, (int32_t)v22, v25, v26, v27, v28, v29, v30);
  }
  if ( !v4 )
LABEL_24:
    sub_1C71608(Instance, v6);
  System_Collections_Generic_List_object___Sort_58794460(
    v4,
    v22,
    (const MethodInfo_38121DC *)Method_System_Collections_Generic_List_UserServantEntity__Sort__);
  return (System_Collections_Generic_List_UserServantEntity__o *)v4;
}


bool ServantSellConfirmListViewManager__IsDragEnable(
        ServantSellConfirmListViewManager_o *this,
        ServantSellConfirmListViewItem_o *item,
        const MethodInfo *method)
{
  return 0;
}


bool ServantSellConfirmListViewManager__IsDragStart(
        ServantSellConfirmListViewManager_o *this,
        const MethodInfo *method)
{
  return 0;
}


bool ServantSellConfirmListViewManager__IsSelectEnable(
        ServantSellConfirmListViewManager_o *this,
        ServantSellConfirmListViewItem_o *item,
        int32_t addSum,
        int32_t addServantSum,
        const MethodInfo *method)
{
  return 1;
}


void ServantSellConfirmListViewManager__ModifyItem(
        ServantSellConfirmListViewManager_o *this,
        int64_t selectedId,
        const MethodInfo *method)
{
  int32_t kind; // w21
  __int64 Instance; // x0
  const MethodInfo *v7; // x1
  int32_t v8; // w20
  __int64 v9; // x21
  __int64 naturalAligment; // x10
  Il2CppObject v11; // q0
  __int64 v12; // x22
  int32_t v13; // w2
  int32_t v14; // w3
  System_String_o *v15; // x4
  int32_t v16; // w5
  int64_t v17; // x6
  System_String_o *v18; // x7
  int32_t v19; // w1
  UnityEngine_Object_o *v20; // x22
  System_Collections_Generic_List_object__o *itemList; // x8
  __int64 v22; // x20
  int32_t v23; // w21
  __int64 v24; // x22
  __int64 v25; // x10
  Il2CppObject v26; // q0
  __int64 v27; // x23
  const MethodInfo *v28; // x1
  int32_t v29; // w2
  int32_t v30; // w3
  System_String_o *v31; // x4
  int32_t v32; // w5
  int64_t v33; // x6
  System_String_o *v34; // x7
  int32_t v35; // w1
  __int64 v36; // x8
  UnityEngine_Object_o *v37; // x23
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v38; // [xsp+0h] [xbp-D0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v39; // [xsp+20h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v40; // [xsp+40h] [xbp-90h]
  Il2CppObject *v41; // [xsp+68h] [xbp-68h] BYREF
  Il2CppObject *entity; // [xsp+78h] [xbp-58h] BYREF

  if ( (byte_4CC3502 & 1) == 0 )
  {
    sub_1C713B0(&Method_DataManager_GetMasterData_UserCommandCodeMaster___);
    sub_1C713B0(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1C713B0(&Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__TryGetEntity__);
    sub_1C713B0(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
    sub_1C713B0(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_1C713B0(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    sub_1C713B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C713B0(&ServantSellConfirmListViewItem_TypeInfo);
    sub_1C713B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4CC3502 = 1;
  }
  entity = 0;
  v41 = 0;
  if ( !this->fields.itemList )
    return;
  kind = this->fields.kind;
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_46;
  if ( kind == 2 )
  {
    Instance = (__int64)DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_314B10C *)Method_DataManager_GetMasterData_UserCommandCodeMaster___);
    if ( Instance )
    {
      if ( !DataMasterBase_object__object__long___TryGetEntity(
              (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
              &entity,
              selectedId,
              (const MethodInfo_340B428 *)Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__TryGetEntity__) )
        return;
      Instance = (__int64)this->fields.itemList;
      if ( Instance )
      {
        v8 = 0;
        while ( v8 < *(_DWORD *)(Instance + 24) )
        {
          Instance = (__int64)System_Collections_Generic_List_object___get_Item(
                                (System_Collections_Generic_List_object__o *)Instance,
                                v8,
                                (const MethodInfo_3810448 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
          if ( Instance )
          {
            v9 = Instance;
            naturalAligment = ServantSellConfirmListViewItem_TypeInfo->_2.naturalAligment;
            if ( *(unsigned __int8 *)(*(_QWORD *)Instance + 304LL) >= (unsigned int)naturalAligment
              && *(ServantSellConfirmListViewItem_c **)(*(_QWORD *)(*(_QWORD *)Instance + 200LL)
                                                      + 8 * naturalAligment
                                                      - 8) == ServantSellConfirmListViewItem_TypeInfo )
            {
              Instance = ServantSellConfirmListViewItem__get_UserCommandCodeId(
                           (ServantSellConfirmListViewItem_o *)Instance,
                           v7);
              if ( entity )
              {
                v11 = entity[2];
                v12 = Instance;
                *(Il2CppObject *)&v40.fields.currentCryptoKey = entity[1];
                *(Il2CppObject *)&v40.fields.fakeValue = v11;
                if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
                v39 = v40;
                if ( v12 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49301476(&v39, 0) )
                {
                  v19 = (int)entity;
                  *(_QWORD *)(v9 + 152) = entity;
                  sub_1C71354((GrandQuestFolderBoardItem_o *)(v9 + 152), v19, v13, v14, v15, v16, v17, v18);
                }
                *(_BYTE *)(v9 + 196) = 0;
                *(_DWORD *)(v9 + 224) = -1;
                v20 = *(UnityEngine_Object_o **)(v9 + 112);
                if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                if ( UnityEngine_Object__op_Inequality(v20, 0, 0) )
                {
                  Instance = *(_QWORD *)(v9 + 112);
                  if ( !Instance )
                    goto LABEL_46;
                  (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)Instance + 392LL))(
                    Instance,
                    v9,
                    *(_QWORD *)(*(_QWORD *)Instance + 400LL));
                }
                Instance = (__int64)this->fields.itemList;
                ++v8;
                if ( Instance )
                  continue;
              }
            }
          }
          goto LABEL_46;
        }
        return;
      }
    }
LABEL_46:
    sub_1C71608(Instance, v7);
  }
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_314B10C *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !Instance )
    goto LABEL_46;
  if ( !DataMasterBase_object__object__long___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
          &v41,
          selectedId,
          (const MethodInfo_340B428 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__) )
    return;
  Instance = (__int64)UserGameMaster__getSelfUserGame(0);
  itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
  if ( !itemList )
    goto LABEL_46;
  v22 = Instance;
  v23 = 0;
  while ( v23 < itemList->fields._size )
  {
    Instance = (__int64)System_Collections_Generic_List_object___get_Item(
                          itemList,
                          v23,
                          (const MethodInfo_3810448 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    if ( Instance )
    {
      v24 = Instance;
      v25 = ServantSellConfirmListViewItem_TypeInfo->_2.naturalAligment;
      if ( *(unsigned __int8 *)(*(_QWORD *)Instance + 304LL) >= (unsigned int)v25
        && *(ServantSellConfirmListViewItem_c **)(*(_QWORD *)(*(_QWORD *)Instance + 200LL) + 8 * v25 - 8) == ServantSellConfirmListViewItem_TypeInfo )
      {
        Instance = ServantSellConfirmListViewItem__get_UserSvtId((ServantSellConfirmListViewItem_o *)Instance, v7);
        if ( v41 )
        {
          v26 = v41[2];
          v27 = Instance;
          *(Il2CppObject *)&v40.fields.currentCryptoKey = v41[1];
          *(Il2CppObject *)&v40.fields.fakeValue = v26;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v38 = v40;
          if ( v27 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49301476(&v38, 0) )
          {
            v35 = (int)v41;
            *(_QWORD *)(v24 + 120) = v41;
            sub_1C71354((GrandQuestFolderBoardItem_o *)(v24 + 120), v35, v29, v30, v31, v32, v33, v34);
          }
          Instance = ServantSellConfirmListViewItem__get_UserSvtId((ServantSellConfirmListViewItem_o *)v24, v28);
          if ( v22 )
          {
            v36 = *(_QWORD *)(v22 + 120);
            *(_DWORD *)(v24 + 224) = -1;
            v37 = *(UnityEngine_Object_o **)(v24 + 112);
            *(_BYTE *)(v24 + 196) = Instance == v36;
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            Instance = UnityEngine_Object__op_Inequality(v37, 0, 0);
            if ( (Instance & 1) != 0 )
            {
              Instance = *(_QWORD *)(v24 + 112);
              if ( !Instance )
                goto LABEL_46;
              Instance = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)Instance + 392LL))(
                           Instance,
                           v24,
                           *(_QWORD *)(*(_QWORD *)Instance + 400LL));
            }
            itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
            ++v23;
            if ( itemList )
              continue;
          }
        }
      }
    }
    goto LABEL_46;
  }
}


void ServantSellConfirmListViewManager__OnClickListView(
        ServantSellConfirmListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  ;
}


// attributes: thunk
void ServantSellConfirmListViewManager__OnLongPushListView(
        ServantSellConfirmListViewManager_o *this,
        ServantSellConfirmListViewItem_o *selectItem,
        const MethodInfo *method)
{
  ServantSellConfirmListViewManager__CallOnSelectitem(this, selectItem, method);
}


void ServantSellConfirmListViewManager__OnMoveEnd(ServantSellConfirmListViewManager_o *this, const MethodInfo *method)
{
  int32_t callbackCount; // w8
  bool v4; // vf
  int32_t v5; // w8

  if ( (byte_4CC3505 & 1) == 0 )
  {
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    byte_4CC3505 = 1;
  }
  callbackCount = this->fields.callbackCount;
  v4 = __OFSUB__(callbackCount, 1);
  v5 = callbackCount - 1;
  if ( v5 < 0 == v4 )
    this->fields.callbackCount = v5;
}


// local variable allocation has failed, the output may be wrong!
void ServantSellConfirmListViewManager__RequestListObject(
        ServantSellConfirmListViewManager_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  System_Collections_Generic_List_ServantSellConfirmListViewObject__o *ObjectList; // x0
  __int64 v6; // x1
  int32_t size; // w8
  System_Collections_Generic_List_object__o *v8; // x21
  int32_t v9; // w22
  Il2CppObject *Item; // x23
  System_Action_o *v11; // x24
  const MethodInfo *v12; // x3

  if ( (byte_4CC3504 & 1) == 0 )
  {
    sub_1C713B0(&System_Action_TypeInfo);
    sub_1C713B0(&Method_System_Collections_Generic_List_ServantSellConfirmListViewObject__get_Count__);
    sub_1C713B0(&Method_System_Collections_Generic_List_ServantSellConfirmListViewObject__get_Item__);
    sub_1C713B0(&Method_ServantSellConfirmListViewManager_OnMoveEnd__);
    sub_1C713B0(&StringLiteral_9943/*"OnMoveEnd"*/);
    byte_4CC3504 = 1;
  }
  ObjectList = ServantSellConfirmListViewManager__get_ObjectList(this, *(const MethodInfo **)&mode);
  if ( !ObjectList )
    goto LABEL_10;
  size = ObjectList->fields._size;
  v8 = (System_Collections_Generic_List_object__o *)ObjectList;
  if ( size >= 1 )
  {
    v9 = 0;
    this->fields.callbackCount = size;
    while ( 1 )
    {
      Item = System_Collections_Generic_List_object___get_Item(
               v8,
               v9,
               (const MethodInfo_3810448 *)Method_System_Collections_Generic_List_ServantSellConfirmListViewObject__get_Item__);
      v11 = (System_Action_o *)sub_1C715FC(System_Action_TypeInfo);
      System_Action___ctor(v11, (Il2CppObject *)this, Method_ServantSellConfirmListViewManager_OnMoveEnd__, 0);
      if ( !Item )
        break;
      ServantSellConfirmListViewObject__Init((ServantSellConfirmListViewObject_o *)Item, mode, v11, v12);
      if ( ++v9 >= v8->fields._size )
        return;
    }
LABEL_10:
    sub_1C71608(ObjectList, v6);
  }
  this->fields.callbackCount = 1;
  UnityEngine_MonoBehaviour__Invoke((UnityEngine_MonoBehaviour_o *)this, (System_String_o *)StringLiteral_9943/*"OnMoveEnd"*/, 0.0, 0);
}


void ServantSellConfirmListViewManager__SetDragEnd(ServantSellConfirmListViewManager_o *this, const MethodInfo *method)
{
  ;
}


void ServantSellConfirmListViewManager__SetDragMove(
        ServantSellConfirmListViewManager_o *this,
        int32_t moveIndex,
        const MethodInfo *method)
{
  ;
}


void ServantSellConfirmListViewManager__SetDragStart(
        ServantSellConfirmListViewManager_o *this,
        int32_t startIndex,
        bool isDragSelect,
        const MethodInfo *method)
{
  ;
}


void ServantSellConfirmListViewManager__SetMode(
        ServantSellConfirmListViewManager_o *this,
        int32_t mode,
        System_Action_ServantSellConfirmListViewItem__o *onSelectItem,
        const MethodInfo *method)
{
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  const MethodInfo *v10; // x2

  this->fields.onSelectItem = onSelectItem;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&this->fields.onSelectItem,
    (int32_t)onSelectItem,
    (int32_t)onSelectItem,
    (int32_t)method,
    v4,
    v5,
    v6,
    v7);
  ServantSellConfirmListViewManager__SetMode_35357420(this, mode, v10);
}


void ServantSellConfirmListViewManager__SetMode_35357420(
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
  ObjectSum = ListViewManager__get_ObjectSum((ListViewManager_o *)this, 0);
  v5 = this->fields.initMode;
  this->fields.callbackCount = ObjectSum;
  ListViewManager__set_IsInput((ListViewManager_o *)this, v5 == 2, 0);
  v7 = this->fields.initMode;
  if ( v7 == 1 )
  {
    v8 = 2;
  }
  else
  {
    if ( v7 != 2 )
      return;
    v8 = 3;
  }
  ServantSellConfirmListViewManager__RequestListObject(this, v8, v6);
}


void ServantSellConfirmListViewManager__SetObjectItem(
        ServantSellConfirmListViewManager_o *this,
        ListViewObject_o *obj,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  ServantSellConfirmListViewManager_o *v5; // x20
  __int64 naturalAligment; // x10
  int32_t v7; // w1

  v5 = this;
  if ( (byte_4CC3503 & 1) == 0 )
  {
    this = (ServantSellConfirmListViewManager_o *)sub_1C713B0(&ServantSellConfirmListViewObject_TypeInfo);
    byte_4CC3503 = 1;
  }
  if ( !obj
    || (naturalAligment = ServantSellConfirmListViewObject_TypeInfo->_2.naturalAligment,
        obj->klass->_2.naturalAligment < (unsigned int)naturalAligment)
    || (ServantSellConfirmListViewObject_c *)obj->klass->_2.typeHierarchy[naturalAligment - 1] != ServantSellConfirmListViewObject_TypeInfo )
  {
    sub_1C71608(this, obj);
  }
  if ( v5->fields.initMode == 2 )
    v7 = 3;
  else
    v7 = 2;
  ServantSellConfirmListViewObject__Init((ServantSellConfirmListViewObject_o *)obj, v7, 0, method);
}


System_Collections_Generic_List_ServantSellConfirmListViewObject__o *ServantSellConfirmListViewManager__get_ClippingObjectList(
        ServantSellConfirmListViewManager_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  const MethodInfo *v4; // x1
  System_Collections_Generic_List_object__o *objectList; // x0
  int32_t v6; // w21
  Il2CppObject *Item; // x22
  Il2CppObject *v8; // x22
  int32_t v9; // w2
  int32_t v10; // w3
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7
  struct System_Object_array *items; // x8
  _QWORD *v16; // x9
  __int64 size; // x10
  Il2CppClass **v18; // x0

  if ( (byte_4CC34FB & 1) == 0 )
  {
    sub_1C713B0(&Method_UnityEngine_GameObject_GetComponent_ServantSellConfirmListViewObject___);
    sub_1C713B0(&Method_System_Collections_Generic_List_ServantSellConfirmListViewObject__Add__);
    sub_1C713B0(&Method_System_Collections_Generic_List_ServantSellConfirmListViewObject___ctor__);
    sub_1C713B0(&Method_System_Collections_Generic_List_GameObject__get_Count__);
    sub_1C713B0(&Method_System_Collections_Generic_List_GameObject__get_Item__);
    sub_1C713B0(&System_Collections_Generic_List_ServantSellConfirmListViewObject__TypeInfo);
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    byte_4CC34FB = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1C715FC(System_Collections_Generic_List_ServantSellConfirmListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_380FEE4 *)Method_System_Collections_Generic_List_ServantSellConfirmListViewObject___ctor__);
  objectList = (System_Collections_Generic_List_object__o *)this->fields.objectList;
  if ( !objectList )
LABEL_21:
    sub_1C71608(objectList, v4);
  v6 = 0;
  while ( v6 < objectList->fields._size )
  {
    Item = System_Collections_Generic_List_object___get_Item(
             objectList,
             v6,
             (const MethodInfo_3810448 *)Method_System_Collections_Generic_List_GameObject__get_Item__);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Item, 0, 0) )
    {
      objectList = (System_Collections_Generic_List_object__o *)this->fields.objectList;
      if ( !objectList )
        goto LABEL_21;
      objectList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                  objectList,
                                                                  v6,
                                                                  (const MethodInfo_3810448 *)Method_System_Collections_Generic_List_GameObject__get_Item__);
      if ( !objectList )
        goto LABEL_21;
      objectList = (System_Collections_Generic_List_object__o *)UnityEngine_GameObject__GetComponent_object_(
                                                                  (UnityEngine_GameObject_o *)objectList,
                                                                  (const MethodInfo_31A2ED0 *)Method_UnityEngine_GameObject_GetComponent_ServantSellConfirmListViewObject___);
      if ( !objectList )
        goto LABEL_21;
      v8 = (Il2CppObject *)objectList;
      objectList = (System_Collections_Generic_List_object__o *)ServantSellConfirmListViewObject__GetItem(
                                                                  (ServantSellConfirmListViewObject_o *)objectList,
                                                                  v4);
      if ( objectList )
      {
        v4 = (const MethodInfo *)objectList;
        if ( !LOBYTE(objectList[2].fields._items)
          || (objectList = (System_Collections_Generic_List_object__o *)ListViewManager__ClippingItem_44112976(
                                                                          (ListViewManager_o *)this,
                                                                          (ListViewItem_o *)objectList,
                                                                          0),
              ((unsigned __int8)objectList & 1) != 0) )
        {
          if ( !v3 )
            goto LABEL_21;
          items = v3->fields._items;
          v16 = Method_System_Collections_Generic_List_ServantSellConfirmListViewObject__Add__;
          ++v3->fields._version;
          if ( !items )
            goto LABEL_21;
          size = v3->fields._size;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v3,
              v8,
              *(const MethodInfo_3810718 **)(*(_QWORD *)(v16[4] + 192LL) + 112LL));
          }
          else
          {
            v18 = &items->obj.klass + size;
            v3->fields._size = size + 1;
            v18[4] = (Il2CppClass *)v8;
            sub_1C71354((GrandQuestFolderBoardItem_o *)(v18 + 4), (int32_t)v8, v9, v10, v11, v12, v13, v14);
          }
        }
      }
    }
    objectList = (System_Collections_Generic_List_object__o *)this->fields.objectList;
    ++v6;
    if ( !objectList )
      goto LABEL_21;
  }
  return (System_Collections_Generic_List_ServantSellConfirmListViewObject__o *)v3;
}


System_Collections_Generic_List_ServantSellConfirmListViewObject__o *ServantSellConfirmListViewManager__get_ObjectList(
        ServantSellConfirmListViewManager_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  __int64 v4; // x1
  System_Collections_Generic_List_object__o *objectList; // x0
  int32_t v6; // w21
  Il2CppObject *Item; // x22
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  struct System_Object_array *items; // x8
  _QWORD *v15; // x9
  __int64 size; // x10
  System_Collections_Generic_List_object__o *v17; // x1
  Il2CppClass **v18; // x0

  if ( (byte_4CC34FA & 1) == 0 )
  {
    sub_1C713B0(&Method_UnityEngine_GameObject_GetComponent_ServantSellConfirmListViewObject___);
    sub_1C713B0(&Method_System_Collections_Generic_List_ServantSellConfirmListViewObject__Add__);
    sub_1C713B0(&Method_System_Collections_Generic_List_ServantSellConfirmListViewObject___ctor__);
    sub_1C713B0(&Method_System_Collections_Generic_List_GameObject__get_Count__);
    sub_1C713B0(&Method_System_Collections_Generic_List_GameObject__get_Item__);
    sub_1C713B0(&System_Collections_Generic_List_ServantSellConfirmListViewObject__TypeInfo);
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    byte_4CC34FA = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1C715FC(System_Collections_Generic_List_ServantSellConfirmListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_380FEE4 *)Method_System_Collections_Generic_List_ServantSellConfirmListViewObject___ctor__);
  objectList = (System_Collections_Generic_List_object__o *)this->fields.objectList;
  if ( !objectList )
LABEL_17:
    sub_1C71608(objectList, v4);
  v6 = 0;
  while ( v6 < objectList->fields._size )
  {
    Item = System_Collections_Generic_List_object___get_Item(
             objectList,
             v6,
             (const MethodInfo_3810448 *)Method_System_Collections_Generic_List_GameObject__get_Item__);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Item, 0, 0) )
    {
      objectList = (System_Collections_Generic_List_object__o *)this->fields.objectList;
      if ( !objectList )
        goto LABEL_17;
      objectList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                  objectList,
                                                                  v6,
                                                                  (const MethodInfo_3810448 *)Method_System_Collections_Generic_List_GameObject__get_Item__);
      if ( !objectList )
        goto LABEL_17;
      objectList = (System_Collections_Generic_List_object__o *)UnityEngine_GameObject__GetComponent_object_(
                                                                  (UnityEngine_GameObject_o *)objectList,
                                                                  (const MethodInfo_31A2ED0 *)Method_UnityEngine_GameObject_GetComponent_ServantSellConfirmListViewObject___);
      if ( !v3 )
        goto LABEL_17;
      items = v3->fields._items;
      v15 = Method_System_Collections_Generic_List_ServantSellConfirmListViewObject__Add__;
      ++v3->fields._version;
      if ( !items )
        goto LABEL_17;
      size = v3->fields._size;
      v17 = objectList;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v3,
          (Il2CppObject *)objectList,
          *(const MethodInfo_3810718 **)(*(_QWORD *)(v15[4] + 192LL) + 112LL));
      }
      else
      {
        v18 = &items->obj.klass + size;
        v3->fields._size = size + 1;
        v18[4] = (Il2CppClass *)v17;
        sub_1C71354((GrandQuestFolderBoardItem_o *)(v18 + 4), (int32_t)v17, v8, v9, v10, v11, v12, v13);
      }
    }
    objectList = (System_Collections_Generic_List_object__o *)this->fields.objectList;
    ++v6;
    if ( !objectList )
      goto LABEL_17;
  }
  return (System_Collections_Generic_List_ServantSellConfirmListViewObject__o *)v3;
}


void ServantSellConfirmListViewManager___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  if ( (byte_4CC3508 & 1) == 0 )
  {
    sub_1C713B0(&ServantSellConfirmListViewManager___c_TypeInfo);
    byte_4CC3508 = 1;
  }
  v1 = (Il2CppObject *)sub_1C715FC(ServantSellConfirmListViewManager___c_TypeInfo);
  System_Object___ctor(v1, 0);
  ServantSellConfirmListViewManager___c_TypeInfo->static_fields->__9 = (struct ServantSellConfirmListViewManager___c_o *)v1;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)ServantSellConfirmListViewManager___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void ServantSellConfirmListViewManager___c___ctor(
        ServantSellConfirmListViewManager___c_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


int32_t ServantSellConfirmListViewManager___c___GetSortEntList_b__19_0(
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

  if ( (byte_4CC3509 & 1) == 0 )
  {
    this = (ServantSellConfirmListViewManager___c_o *)sub_1C713B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4CC3509 = 1;
  }
  if ( !a || (this = (ServantSellConfirmListViewManager___c_o *)UserCommandCodeEntity__GetRarity(a, 0), !b) )
    sub_1C71608(this, a);
  if ( (int)this < UserCommandCodeEntity__GetRarity(b, 0) )
    return 1;
  Rarity = UserCommandCodeEntity__GetRarity(a, 0);
  if ( Rarity > UserCommandCodeEntity__GetRarity(b, 0) )
    return -1;
  v9 = *(_QWORD *)&a->fields.commandCodeId.fields.currentCryptoKey;
  v8 = *(_QWORD *)&a->fields.commandCodeId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v16.fields.currentCryptoKey = v9;
  *(_QWORD *)&v16.fields.fakeValue = v8;
  v10 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49297952(v16, 0);
  if ( v10 < CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49297952(b->fields.commandCodeId, 0) )
    return 1;
  v12 = *(_QWORD *)&a->fields.commandCodeId.fields.currentCryptoKey;
  v11 = *(_QWORD *)&a->fields.commandCodeId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v17.fields.currentCryptoKey = v12;
  *(_QWORD *)&v17.fields.fakeValue = v11;
  v13 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49297952(v17, 0);
  v14 = *(_QWORD *)&b->fields.commandCodeId.fields.currentCryptoKey;
  *(_QWORD *)&v18.fields.fakeValue = *(_QWORD *)&b->fields.commandCodeId.fields.fakeValue;
  v15 = v13;
  *(_QWORD *)&v18.fields.currentCryptoKey = v14;
  if ( v15 <= CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49297952(v18, 0) )
    return 0;
  else
    return -1;
}


int32_t ServantSellConfirmListViewManager___c___GetSvtSortEntList_b__16_0(
        ServantSellConfirmListViewManager___c_o *this,
        UserServantEntity_o *a,
        UserServantEntity_o *b,
        const MethodInfo *method)
{
  int32_t Rarity; // w21
  int32_t CollectionNo; // w21
  int32_t v9; // w20

  if ( !a || (this = (ServantSellConfirmListViewManager___c_o *)UserServantEntity__getRarity(a, 0), !b) )
    sub_1C71608(this, a);
  if ( (int)this < UserServantEntity__getRarity(b, 0) )
    return 1;
  Rarity = UserServantEntity__getRarity(a, 0);
  if ( Rarity > UserServantEntity__getRarity(b, 0) )
    return -1;
  CollectionNo = UserServantEntity__getCollectionNo(a, 0);
  if ( CollectionNo < UserServantEntity__getCollectionNo(b, 0) )
    return 1;
  v9 = UserServantEntity__getCollectionNo(a, 0);
  if ( v9 <= UserServantEntity__getCollectionNo(b, 0) )
    return 0;
  else
    return -1;
}