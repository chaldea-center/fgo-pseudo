void ServantSellConfirmListViewManager___ctor(ServantSellConfirmListViewManager_o *this, const MethodInfo *method)
{
  ListViewManager___ctor((ListViewManager_o *)this, 0);
}


void ServantSellConfirmListViewManager__CallOnSelectitem(
        ServantSellConfirmListViewManager_o *this,
        ServantSellConfirmListViewItem_o *selectItem,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  struct System_Action_ServantSellConfirmListViewItem__o *onSelectItem; // x20

  onSelectItem = this->fields.onSelectItem;
  if ( onSelectItem )
  {
    this->fields.onSelectItem = 0;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.onSelectItem,
      0,
      (System_String_o *)method,
      v3,
      v4,
      v5,
      v6,
      v7);
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
  const MethodInfo *v12; // x2
  il2cpp_array_size_t max_length; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v14; // x21
  unsigned __int64 v15; // x26
  int64_t v16; // x23
  System_Collections_Generic_List_object__o *itemList; // x22
  int32_t v18; // w24
  Il2CppObject *Entity; // x25
  ServantSellConfirmListViewItem_o *v20; // x23
  const MethodInfo *v21; // x4
  System_String_o *v22; // x2
  System_String_o *v23; // x3
  int32_t v24; // w4
  int32_t v25; // w5
  bool v26; // w6
  bool v27; // w7
  struct System_Object_array *items; // x8
  _QWORD *v29; // x9
  __int64 size; // x10
  Il2CppClass **v31; // x0

  if ( (byte_596C72D & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_UserCommandCodeMaster___);
    sub_2213A60(&Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__GetEntity__);
    sub_2213A60(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    sub_2213A60(&ServantSellConfirmListViewItem_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_596C72D = 1;
  }
  if ( commandCodeIds && !isExceeded && !isSellLastServant && commandCodeIds->max_length )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_20;
    MasterData_object = DataManager__GetMasterData_object_(
                          Instance,
                          (const MethodInfo_385636C *)Method_DataManager_GetMasterData_UserCommandCodeMaster___);
    max_length = commandCodeIds->max_length;
    if ( (int)max_length >= 1 )
    {
      v14 = (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object;
      v15 = 0;
      while ( 1 )
      {
        if ( v15 >= (unsigned int)max_length )
          sub_2213CE4(MasterData_object);
        Instance = (DataManager_o *)this->fields.parentManager;
        if ( !Instance )
          break;
        v16 = commandCodeIds->m_Items[v15];
        itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
        Instance = (DataManager_o *)ServantOperationManager__GetSelectedOrderByCommandCodeId(
                                      (ServantOperationManager_o *)Instance,
                                      v16,
                                      v12);
        if ( !v14 )
          break;
        v18 = (int)Instance;
        Entity = DataMasterBase_object__object__long___GetEntity(
                   v14,
                   v16,
                   (const MethodInfo_3F13190 *)Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__GetEntity__);
        v20 = (ServantSellConfirmListViewItem_o *)sub_2213CCC(ServantSellConfirmListViewItem_TypeInfo);
        ServantSellConfirmListViewItem___ctor_41845512(v20, v18, (UserCommandCodeEntity_o *)Entity, 0, v21);
        if ( !itemList )
          break;
        items = itemList->fields._items;
        v29 = Method_System_Collections_Generic_List_ListViewItem__Add__;
        ++itemList->fields._version;
        if ( !items )
          break;
        size = itemList->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            itemList,
            (Il2CppObject *)v20,
            *(const MethodInfo_4483C64 **)(*(_QWORD *)(v29[4] + 192LL) + 112LL));
        }
        else
        {
          v31 = &items->obj.klass + size;
          itemList->fields._size = size + 1;
          v31[4] = (Il2CppClass *)v20;
          sub_2213A04((MissionNaviTransitionBoardItem_o *)(v31 + 4), (int32_t)v20, v22, v23, v24, v25, v26, v27);
        }
        LODWORD(max_length) = commandCodeIds->max_length;
        if ( (__int64)++v15 >= (int)max_length )
          return;
      }
LABEL_20:
      sub_2213CDC(Instance, v10);
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
  System_String_o *v21; // x2
  System_String_o *v22; // x3
  int32_t v23; // w4
  int32_t v24; // w5
  bool v25; // w6
  bool v26; // w7
  struct System_Object_array *items; // x8
  _QWORD *v28; // x9
  __int64 size; // x10
  Il2CppClass **v30; // x0
  __int64 v31; // [xsp+8h] [xbp-88h]
  System_Collections_Generic_List_Enumerator_object__o *v32; // [xsp+10h] [xbp-80h]
  System_Collections_Generic_List_Enumerator_object__o v33; // [xsp+18h] [xbp-78h] BYREF

  if ( (byte_596C72E & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_UserCommandCodeEntity__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_UserCommandCodeEntity__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_UserCommandCodeEntity__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_UserCommandCodeEntity__GetEnumerator__);
    sub_2213A60(&Method_System_Collections_Generic_List_UserCommandCodeEntity__IndexOf__);
    sub_2213A60(&Method_System_Collections_Generic_List_long__get_Count__);
    sub_2213A60(&ServantSellConfirmListViewItem_TypeInfo);
    byte_596C72E = 1;
  }
  memset(&v33, 0, sizeof(v33));
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0);
  if ( commandCodeIds && !isExceeded && !isSellLastServant && commandCodeIds->fields._size >= 1 )
  {
    SortEntList = (System_Collections_Generic_List_object__o *)ServantSellConfirmListViewManager__GetSortEntList(
                                                                 v9,
                                                                 commandCodeIds,
                                                                 v10);
    if ( !SortEntList )
      sub_2213CDC(0, v12);
    v13 = SortEntList;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v33,
      SortEntList,
      (const MethodInfo_448473C *)Method_System_Collections_Generic_List_UserCommandCodeEntity__GetEnumerator__);
    v31 = 0;
    v32 = &v33;
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v33,
              (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_UserCommandCodeEntity__MoveNext__) )
    {
      current = v33.fields._current;
      itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
      v16 = System_Collections_Generic_List_object___IndexOf(
              v13,
              v33.fields._current,
              (const MethodInfo_44848E8 *)Method_System_Collections_Generic_List_UserCommandCodeEntity__IndexOf__);
      v17 = (ServantSellConfirmListViewItem_o *)sub_2213CCC(ServantSellConfirmListViewItem_TypeInfo);
      ServantSellConfirmListViewItem___ctor_41845512(v17, v16, (UserCommandCodeEntity_o *)current, 0, v18);
      if ( !itemList
        || (items = itemList->fields._items,
            v28 = Method_System_Collections_Generic_List_ListViewItem__Add__,
            ++itemList->fields._version,
            !items) )
      {
        sub_2213CDC(v19, v20);
      }
      size = itemList->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          itemList,
          (Il2CppObject *)v17,
          *(const MethodInfo_4483C64 **)(*(_QWORD *)(v28[4] + 192LL) + 112LL));
      }
      else
      {
        v30 = &items->obj.klass + size;
        itemList->fields._size = size + 1;
        v30[4] = (Il2CppClass *)v17;
        sub_2213A04((MissionNaviTransitionBoardItem_o *)(v30 + 4), (int32_t)v17, v21, v22, v23, v24, v25, v26);
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v33,
      (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_UserCommandCodeEntity__Dispose__);
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
  const MethodInfo *v9; // x1
  Il2CppObject *MasterData_object; // x23
  __int64 v11; // x2
  Il2CppObject *v12; // x25
  ServantOperationManager_o *SelectedEquipeCmdCardServantList; // x0
  const MethodInfo *v14; // x2
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 v16; // x21
  int64_t v17; // x26
  const MethodInfo *v18; // x2
  UserServantEntity_o *v19; // x27
  __int64 v20; // x19
  __int64 v21; // x28
  System_Collections_Generic_List_object__o *itemList; // x28
  System_Int64_array *v23; // x23
  _BOOL4 v24; // w25
  int64_t favoriteUserSvtId; // x24
  int32_t v26; // w19
  System_Int64_array *v27; // x20
  System_Int64_array *v28; // x22
  ServantSellConfirmListViewItem_o *v29; // x29
  const MethodInfo *v30; // x6
  System_String_o *v31; // x2
  System_String_o *v32; // x3
  int32_t v33; // w4
  int32_t v34; // w5
  bool v35; // w6
  bool v36; // w7
  struct System_Object_array *items; // x8
  _QWORD *v38; // x9
  __int64 size; // x10
  Il2CppClass **v40; // x0
  System_Collections_Generic_List_int__o *v41; // [xsp+0h] [xbp-A0h]
  Il2CppObject *v42; // [xsp+8h] [xbp-98h]
  ServantSellConfirmListViewManager_o *v43; // [xsp+10h] [xbp-90h]
  UserGameEntity_o *SelfUserGame; // [xsp+18h] [xbp-88h]
  int64_t *m_Items; // [xsp+28h] [xbp-78h]
  System_Int64_array *equipIdList; // [xsp+30h] [xbp-70h] BYREF
  System_Int64_array *svtIdList; // [xsp+38h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v49; // 0:x0.16

  v5 = isExceeded;
  if ( (byte_596C72A & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_UserDeckMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_2213A60(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_2213A60(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_int__Contains__);
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_2213A60(&ServantSellConfirmListViewItem_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_596C72A = 1;
  }
  equipIdList = 0;
  svtIdList = 0;
  if ( servantIds && servantIds->max_length )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_38;
    MasterData_object = DataManager__GetMasterData_object_(
                          Instance,
                          (const MethodInfo_385636C *)Method_DataManager_GetMasterData_UserServantMaster___);
    SelfUserGame = UserGameMaster__getSelfUserGame(0);
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_38;
    v12 = DataManager__GetMasterData_object_(
            Instance,
            (const MethodInfo_385636C *)Method_DataManager_GetMasterData_UserDeckMaster___);
    if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v9, v11);
    if ( !byte_5969EF2 )
    {
      sub_2213A60(&NetworkManager_TypeInfo);
      byte_5969EF2 = 1;
    }
    Instance = (DataManager_o *)NetworkManager_TypeInfo;
    if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v9, v11);
      Instance = (DataManager_o *)NetworkManager_TypeInfo;
    }
    if ( !v12 )
      goto LABEL_38;
    UserDeckMaster__getPartyList(
      (UserDeckMaster_o *)v12,
      &svtIdList,
      &equipIdList,
      *(_QWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 64LL),
      0);
    Instance = (DataManager_o *)this->fields.parentManager;
    if ( !Instance )
      goto LABEL_38;
    SelectedEquipeCmdCardServantList = (ServantOperationManager_o *)ServantOperationManager__GetSelectedEquipeCmdCardServantList(
                                                                      (ServantOperationManager_o *)Instance,
                                                                      v9);
    Instance = (DataManager_o *)ServantOperationManager__GetEquipedCommandCodeSellLastSvtList(
                                  SelectedEquipeCmdCardServantList,
                                  (System_Collections_Generic_List_ServantOperationListViewItem__o *)SelectedEquipeCmdCardServantList,
                                  v14);
    max_length = servantIds->max_length;
    v41 = (System_Collections_Generic_List_int__o *)Instance;
    if ( (int)max_length >= 1 )
    {
      v16 = 0;
      m_Items = servantIds->m_Items;
      v42 = MasterData_object;
      v43 = this;
      while ( 1 )
      {
        if ( v16 >= (unsigned int)max_length )
          sub_2213CE4(Instance);
        if ( !MasterData_object )
          break;
        v17 = m_Items[v16];
        Instance = (DataManager_o *)DataMasterBase_object__object__long___GetEntity(
                                      (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                                      v17,
                                      (const MethodInfo_3F13190 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
        v19 = (UserServantEntity_o *)Instance;
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
          if ( !v19 )
            break;
          v20 = *(_QWORD *)&v19->fields.svtId.fields.currentCryptoKey;
          v21 = *(_QWORD *)&v19->fields.svtId.fields.fakeValue;
          if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v9, v18);
          *(_QWORD *)&v49.fields.currentCryptoKey = v20;
          *(_QWORD *)&v49.fields.fakeValue = v21;
          v9 = (const MethodInfo *)(unsigned int)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(
                                                   v49,
                                                   0);
          Instance = (DataManager_o *)v41;
          if ( !v41 )
            break;
          Instance = (DataManager_o *)System_Collections_Generic_List_int___Contains(
                                        v41,
                                        (int32_t)v9,
                                        (const MethodInfo_44675F0 *)Method_System_Collections_Generic_List_int__Contains__);
          if ( ((unsigned __int8)Instance & 1) != 0 )
          {
LABEL_28:
            Instance = (DataManager_o *)this->fields.parentManager;
            if ( !Instance )
              break;
            itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
            v23 = servantIds;
            v24 = v5;
            Instance = (DataManager_o *)ServantOperationManager__GetSelectedOrderByServantId(
                                          (ServantOperationManager_o *)Instance,
                                          v17,
                                          v18);
            if ( !SelfUserGame )
              break;
            favoriteUserSvtId = SelfUserGame->fields.favoriteUserSvtId;
            v26 = (int)Instance;
            v27 = equipIdList;
            v28 = svtIdList;
            v29 = (ServantSellConfirmListViewItem_o *)sub_2213CCC(ServantSellConfirmListViewItem_TypeInfo);
            ServantSellConfirmListViewItem___ctor(v29, v26, v19, v28, v27, v17 == favoriteUserSvtId, v30);
            if ( !itemList )
              break;
            items = itemList->fields._items;
            v38 = Method_System_Collections_Generic_List_ListViewItem__Add__;
            ++itemList->fields._version;
            if ( !items )
              break;
            size = itemList->fields._size;
            if ( (unsigned int)size >= LODWORD(items->max_length) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                itemList,
                (Il2CppObject *)v29,
                *(const MethodInfo_4483C64 **)(*(_QWORD *)(v38[4] + 192LL) + 112LL));
            }
            else
            {
              v40 = &items->obj.klass + size;
              itemList->fields._size = size + 1;
              v40[4] = (Il2CppClass *)v29;
              sub_2213A04((MissionNaviTransitionBoardItem_o *)(v40 + 4), (int32_t)v29, v31, v32, v33, v34, v35, v36);
            }
            servantIds = v23;
            MasterData_object = v42;
            this = v43;
            v5 = v24;
          }
        }
        LODWORD(max_length) = servantIds->max_length;
        if ( (__int64)++v16 >= (int)max_length )
          return;
      }
LABEL_38:
      sub_2213CDC(Instance, v9);
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
  const MethodInfo *v7; // x1
  UserGameEntity_o *SelfUserGame; // x22
  __int64 v9; // x2
  Il2CppObject *MasterData_object; // x19
  ServantOperationManager_o *SelectedEquipeCmdCardServantList; // x0
  const MethodInfo *v12; // x2
  System_Collections_Generic_List_int__o *EquipedCommandCodeSellLastSvtList; // x23
  System_Collections_Generic_List_long__o *v14; // x25
  const MethodInfo *v15; // x2
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 v17; // x19
  struct System_Int64_array *items; // x8
  _QWORD *v19; // x9
  __int64 size; // x10
  System_Collections_Generic_List_object__o *v21; // x24
  _BOOL8 v22; // x0
  __int64 v23; // x1
  __int64 v24; // x2
  Il2CppObject *current; // x25
  Il2CppClass *klass; // x19
  void *monitor; // x20
  __int64 v28; // x0
  System_Collections_Generic_List_object__o *itemList; // x26
  __int64 v30; // x0
  __int64 v31; // x1
  __int64 v32; // x2
  int32_t v33; // w27
  Il2CppObject v34; // q1
  System_Int64_array *v35; // x19
  System_Int64_array *v36; // x29
  int64_t v37; // x0
  __int64 v38; // x1
  int64_t favoriteUserSvtId; // x21
  int64_t v40; // x20
  ServantSellConfirmListViewItem_o *v41; // x28
  const MethodInfo *v42; // x6
  __int64 v43; // x0
  __int64 v44; // x1
  System_String_o *v45; // x2
  System_String_o *v46; // x3
  int32_t v47; // w4
  int32_t v48; // w5
  bool v49; // w6
  bool v50; // w7
  struct System_Object_array *v51; // x8
  _QWORD *v52; // x9
  __int64 v53; // x10
  Il2CppClass **v54; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v58; // [xsp+10h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v59; // [xsp+30h] [xbp-C0h] BYREF
  __int64 v60; // [xsp+50h] [xbp-A0h]
  System_Collections_Generic_List_Enumerator_object__o *v61; // [xsp+58h] [xbp-98h]
  System_Collections_Generic_List_Enumerator_object__o v62; // [xsp+60h] [xbp-90h] BYREF
  System_Int64_array *equipIdList; // [xsp+80h] [xbp-70h] BYREF
  System_Int64_array *svtIdList; // [xsp+88h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v65; // 0:x0.16

  if ( (byte_596C72B & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_UserDeckMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_UserServantEntity__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_UserServantEntity__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_UserServantEntity__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_List_long__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_int__Contains__);
    sub_2213A60(&Method_System_Collections_Generic_List_UserServantEntity__GetEnumerator__);
    sub_2213A60(&Method_System_Collections_Generic_List_UserServantEntity__IndexOf__);
    sub_2213A60(&Method_System_Collections_Generic_List_long___ctor__);
    sub_2213A60(&System_Collections_Generic_List_long__TypeInfo);
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_2213A60(&ServantSellConfirmListViewItem_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_596C72B = 1;
  }
  equipIdList = 0;
  svtIdList = 0;
  memset(&v62, 0, sizeof(v62));
  this->fields.kind = 3;
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0);
  if ( servantIds && servantIds->max_length )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_47;
    DataManager__GetMasterData_object_(
      Instance,
      (const MethodInfo_385636C *)Method_DataManager_GetMasterData_UserServantMaster___);
    SelfUserGame = UserGameMaster__getSelfUserGame(0);
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_47;
    MasterData_object = DataManager__GetMasterData_object_(
                          Instance,
                          (const MethodInfo_385636C *)Method_DataManager_GetMasterData_UserDeckMaster___);
    if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v7, v9);
    if ( !byte_5969EF2 )
    {
      sub_2213A60(&NetworkManager_TypeInfo);
      byte_5969EF2 = 1;
    }
    Instance = (DataManager_o *)NetworkManager_TypeInfo;
    if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v7, v9);
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
    Instance = (DataManager_o *)this->fields.parentManager;
    if ( !Instance )
      goto LABEL_47;
    SelectedEquipeCmdCardServantList = (ServantOperationManager_o *)ServantOperationManager__GetSelectedEquipeCmdCardServantList(
                                                                      (ServantOperationManager_o *)Instance,
                                                                      v7);
    EquipedCommandCodeSellLastSvtList = ServantOperationManager__GetEquipedCommandCodeSellLastSvtList(
                                          SelectedEquipeCmdCardServantList,
                                          (System_Collections_Generic_List_ServantOperationListViewItem__o *)SelectedEquipeCmdCardServantList,
                                          v12);
    v14 = (System_Collections_Generic_List_long__o *)sub_2213CCC(System_Collections_Generic_List_long__TypeInfo);
    System_Collections_Generic_List_long____ctor(
      v14,
      (const MethodInfo_446BA10 *)Method_System_Collections_Generic_List_long___ctor__);
    max_length = servantIds->max_length;
    if ( (int)max_length >= 1 )
    {
      v17 = 0;
      while ( 1 )
      {
        if ( v17 >= (unsigned int)max_length )
          sub_2213CE4(Instance);
        if ( !v14 )
          break;
        items = v14->fields._items;
        v7 = (const MethodInfo *)servantIds->m_Items[v17];
        v19 = Method_System_Collections_Generic_List_long__Add__;
        ++v14->fields._version;
        if ( !items )
          break;
        size = v14->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_long___AddWithResize(
            v14,
            (int64_t)v7,
            *(const MethodInfo_446C29C **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
        }
        else
        {
          v14->fields._size = size + 1;
          items->m_Items[size] = (int64_t)v7;
        }
        LODWORD(max_length) = servantIds->max_length;
        if ( (__int64)++v17 >= (int)max_length )
          goto LABEL_24;
      }
LABEL_47:
      sub_2213CDC(Instance, v7);
    }
LABEL_24:
    Instance = (DataManager_o *)ServantSellConfirmListViewManager__GetSvtSortEntList(
                                  (ServantSellConfirmListViewManager_o *)Instance,
                                  v14,
                                  v15);
    if ( !Instance )
      goto LABEL_47;
    v21 = (System_Collections_Generic_List_object__o *)Instance;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v59,
      (System_Collections_Generic_List_object__o *)Instance,
      (const MethodInfo_448473C *)Method_System_Collections_Generic_List_UserServantEntity__GetEnumerator__);
    v62.fields._current = (Il2CppObject *)v59.fields.fakeValue;
    *(_OWORD *)&v62.fields._list = *(_OWORD *)&v59.fields.currentCryptoKey;
    v60 = 0;
    v61 = &v62;
    while ( 1 )
    {
      v22 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v62,
              (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_UserServantEntity__MoveNext__);
      if ( !v22 )
        break;
      current = v62.fields._current;
      if ( isExceeded )
      {
        if ( !v62.fields._current )
          sub_2213CDC(v22, v23);
        v22 = UserServantEntity__isExceeded((UserServantEntity_o *)v62.fields._current, 0);
        if ( !v22 )
          continue;
      }
      if ( !isSellLastServant )
        goto LABEL_36;
      if ( !current )
        sub_2213CDC(v22, v23);
      klass = current[5].klass;
      monitor = current[5].monitor;
      if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v23, v24);
      *(_QWORD *)&v65.fields.currentCryptoKey = klass;
      *(_QWORD *)&v65.fields.fakeValue = monitor;
      v28 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v65, 0);
      if ( !EquipedCommandCodeSellLastSvtList )
        sub_2213CDC(v28, (unsigned int)v28);
      if ( System_Collections_Generic_List_int___Contains(
             EquipedCommandCodeSellLastSvtList,
             v28,
             (const MethodInfo_44675F0 *)Method_System_Collections_Generic_List_int__Contains__) )
      {
LABEL_36:
        itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
        v30 = System_Collections_Generic_List_object___IndexOf(
                v21,
                current,
                (const MethodInfo_44848E8 *)Method_System_Collections_Generic_List_UserServantEntity__IndexOf__);
        if ( !current )
          sub_2213CDC(v30, v31);
        v33 = v30;
        v34 = current[2];
        v35 = equipIdList;
        v36 = svtIdList;
        *(Il2CppObject *)&v59.fields.currentCryptoKey = current[1];
        *(Il2CppObject *)&v59.fields.fakeValue = v34;
        if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v31, v32);
        v58 = v59;
        v37 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_56000612(&v58, 0);
        if ( !SelfUserGame )
          sub_2213CDC(v37, v38);
        favoriteUserSvtId = SelfUserGame->fields.favoriteUserSvtId;
        v40 = v37;
        v41 = (ServantSellConfirmListViewItem_o *)sub_2213CCC(ServantSellConfirmListViewItem_TypeInfo);
        ServantSellConfirmListViewItem___ctor(
          v41,
          v33,
          (UserServantEntity_o *)current,
          v36,
          v35,
          v40 == favoriteUserSvtId,
          v42);
        if ( !itemList
          || (v51 = itemList->fields._items,
              v52 = Method_System_Collections_Generic_List_ListViewItem__Add__,
              ++itemList->fields._version,
              !v51) )
        {
          sub_2213CDC(v43, v44);
        }
        v53 = itemList->fields._size;
        if ( (unsigned int)v53 >= LODWORD(v51->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            itemList,
            (Il2CppObject *)v41,
            *(const MethodInfo_4483C64 **)(*(_QWORD *)(v52[4] + 192LL) + 112LL));
        }
        else
        {
          v54 = &v51->obj.klass + v53;
          itemList->fields._size = v53 + 1;
          v54[4] = (Il2CppClass *)v41;
          sub_2213A04((MissionNaviTransitionBoardItem_o *)(v54 + 4), (int32_t)v41, v45, v46, v47, v48, v49, v50);
        }
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v62,
      (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_UserServantEntity__Dispose__);
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
  __int64 v8; // x2
  __int64 naturalAligment; // x10
  struct System_Object_array *items; // x23
  __int64 v11; // x24
  int32_t v12; // w8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v14; // 0:x0.16

  if ( (byte_596C734 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_2213A60(&ServantSellConfirmListViewItem_TypeInfo);
    byte_596C734 = 1;
  }
  itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
  if ( !itemList )
LABEL_14:
    sub_2213CDC(itemList, *(_QWORD *)&svtId);
  v6 = 0;
  v7 = 0;
  while ( v7 < itemList->fields._size )
  {
    itemList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                              itemList,
                                                              v7,
                                                              (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    if ( itemList )
    {
      naturalAligment = ServantSellConfirmListViewItem_TypeInfo->_2.naturalAligment;
      if ( itemList->klass->_2.naturalAligment >= (unsigned int)naturalAligment
        && (ServantSellConfirmListViewItem_c *)itemList->klass->_2.typeHierarchy[naturalAligment - 1] == ServantSellConfirmListViewItem_TypeInfo )
      {
        items = itemList[3].fields._items;
        v11 = *(_QWORD *)&itemList[3].fields._size;
        if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, *(_QWORD *)&svtId, v8);
        *(_QWORD *)&v14.fields.currentCryptoKey = items;
        *(_QWORD *)&v14.fields.fakeValue = v11;
        v12 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v14, 0);
        itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
        ++v7;
        if ( v12 == svtId )
          ++v6;
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
  int monitor; // w8

  if ( (byte_596C735 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_2213A60(&ServantSellConfirmListViewItem_TypeInfo);
    byte_596C735 = 1;
  }
  itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
  if ( !itemList )
LABEL_12:
    sub_2213CDC(itemList, *(_QWORD *)&commandCodeId);
  v6 = 0;
  v7 = 0;
  while ( v7 < itemList->fields._size )
  {
    itemList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                              itemList,
                                                              v7,
                                                              (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    if ( itemList )
    {
      naturalAligment = ServantSellConfirmListViewItem_TypeInfo->_2.naturalAligment;
      if ( itemList->klass->_2.naturalAligment >= (unsigned int)naturalAligment
        && (ServantSellConfirmListViewItem_c *)itemList->klass->_2.typeHierarchy[naturalAligment - 1] == ServantSellConfirmListViewItem_TypeInfo )
      {
        monitor = (int)itemList[4].monitor;
        itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
        ++v7;
        if ( monitor != commandCodeId )
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
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  Il2CppObject *v17; // x1
  struct System_Object_array *items; // x8
  _QWORD *v19; // x9
  __int64 size; // x10
  Il2CppClass **v21; // x0
  __int64 v22; // x2
  struct ServantSellConfirmListViewManager___c_StaticFields *static_fields; // x8
  System_Comparison_T__o *_9__19_0; // x20
  Il2CppObject *v25; // x21
  struct ServantSellConfirmListViewManager___c_StaticFields *v26; // x0
  System_String_o *v27; // x2
  System_String_o *v28; // x3
  int32_t v29; // w4
  int32_t v30; // w5
  bool v31; // w6
  bool v32; // w7
  System_Collections_Generic_List_Enumerator_T__o v34; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v35; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_596C72F & 1) == 0 )
  {
    sub_2213A60(&System_Comparison_UserCommandCodeEntity__TypeInfo);
    sub_2213A60(&Method_DataManager_GetMasterData_UserCommandCodeMaster___);
    sub_2213A60(&Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__GetEntity__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_long__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_long__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_long__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_List_UserCommandCodeEntity__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_long__GetEnumerator__);
    sub_2213A60(&Method_System_Collections_Generic_List_UserCommandCodeEntity__Sort__);
    sub_2213A60(&Method_System_Collections_Generic_List_UserCommandCodeEntity___ctor__);
    sub_2213A60(&System_Collections_Generic_List_UserCommandCodeEntity__TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_2213A60(&Method_ServantSellConfirmListViewManager___c__GetSortEntList_b__19_0__);
    sub_2213A60(&ServantSellConfirmListViewManager___c_TypeInfo);
    byte_596C72F = 1;
  }
  memset(&v35, 0, sizeof(v35));
  v4 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_UserCommandCodeEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v4,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_UserCommandCodeEntity___ctor__);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_23;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_385636C *)Method_DataManager_GetMasterData_UserCommandCodeMaster___);
  if ( !commandCodeIds )
    goto LABEL_23;
  v7 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  System_Collections_Generic_List_long___GetEnumerator(
    &v34,
    commandCodeIds,
    (const MethodInfo_446CD4C *)Method_System_Collections_Generic_List_long__GetEnumerator__);
  v35 = v34;
  v34.fields._list = 0;
  *(_QWORD *)&v34.fields._index = &v35;
  while ( 1 )
  {
    v8 = System_Collections_Generic_List_Enumerator_long___MoveNext(
           &v35,
           (const MethodInfo_40F7FA8 *)Method_System_Collections_Generic_List_Enumerator_long__MoveNext__);
    if ( !v8 )
      break;
    if ( !v7 )
      sub_2213CDC(v8, v9);
    Entity = DataMasterBase_object__object__long___GetEntity(
               v7,
               (int64_t)v35.fields._current,
               (const MethodInfo_3F13190 *)Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__GetEntity__);
    v17 = Entity;
    if ( !v4
      || (items = v4->fields._items,
          v19 = Method_System_Collections_Generic_List_UserCommandCodeEntity__Add__,
          ++v4->fields._version,
          !items) )
    {
      sub_2213CDC(Entity, Entity);
    }
    size = v4->fields._size;
    if ( (unsigned int)size >= LODWORD(items->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v4,
        Entity,
        *(const MethodInfo_4483C64 **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
    }
    else
    {
      v21 = &items->obj.klass + size;
      v4->fields._size = size + 1;
      v21[4] = (Il2CppClass *)v17;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)(v21 + 4), (int32_t)v17, v11, v12, v13, v14, v15, v16);
    }
  }
  System_Collections_Generic_List_Enumerator_long___Dispose(
    &v35,
    (const MethodInfo_40F7FA4 *)Method_System_Collections_Generic_List_Enumerator_long__Dispose__);
  Instance = ServantSellConfirmListViewManager___c_TypeInfo;
  if ( !*(&ServantSellConfirmListViewManager___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(ServantSellConfirmListViewManager___c_TypeInfo, v6, v22);
    Instance = ServantSellConfirmListViewManager___c_TypeInfo;
  }
  static_fields = (struct ServantSellConfirmListViewManager___c_StaticFields *)*((_QWORD *)Instance + 23);
  _9__19_0 = (System_Comparison_T__o *)static_fields->__9__19_0;
  if ( !_9__19_0 )
  {
    if ( !*((_DWORD *)Instance + 57) )
    {
      j_il2cpp_runtime_class_init_0(Instance, v6, v22);
      static_fields = ServantSellConfirmListViewManager___c_TypeInfo->static_fields;
    }
    v25 = (Il2CppObject *)static_fields->__9;
    _9__19_0 = (System_Comparison_T__o *)sub_2213CCC(System_Comparison_UserCommandCodeEntity__TypeInfo);
    System_Comparison_object____ctor(
      _9__19_0,
      v25,
      Method_ServantSellConfirmListViewManager___c__GetSortEntList_b__19_0__,
      0);
    v26 = ServantSellConfirmListViewManager___c_TypeInfo->static_fields;
    v26->__9__19_0 = (struct System_Comparison_UserCommandCodeEntity__o *)_9__19_0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v26->__9__19_0, (int32_t)_9__19_0, v27, v28, v29, v30, v31, v32);
  }
  if ( !v4 )
LABEL_23:
    sub_2213CDC(Instance, v6);
  System_Collections_Generic_List_object___Sort_71849708(
    v4,
    _9__19_0,
    (const MethodInfo_44856EC *)Method_System_Collections_Generic_List_UserCommandCodeEntity__Sort__);
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
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  Il2CppObject *v17; // x1
  struct System_Object_array *items; // x8
  _QWORD *v19; // x9
  __int64 size; // x10
  Il2CppClass **v21; // x0
  __int64 v22; // x2
  struct ServantSellConfirmListViewManager___c_StaticFields *static_fields; // x8
  System_Comparison_T__o *_9__16_0; // x20
  Il2CppObject *v25; // x21
  struct ServantSellConfirmListViewManager___c_StaticFields *v26; // x0
  System_String_o *v27; // x2
  System_String_o *v28; // x3
  int32_t v29; // w4
  int32_t v30; // w5
  bool v31; // w6
  bool v32; // w7
  System_Collections_Generic_List_Enumerator_T__o v34; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v35; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_596C72C & 1) == 0 )
  {
    sub_2213A60(&System_Comparison_UserServantEntity__TypeInfo);
    sub_2213A60(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_2213A60(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_long__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_long__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_long__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_List_UserServantEntity__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_long__GetEnumerator__);
    sub_2213A60(&Method_System_Collections_Generic_List_UserServantEntity__Sort__);
    sub_2213A60(&Method_System_Collections_Generic_List_UserServantEntity___ctor__);
    sub_2213A60(&System_Collections_Generic_List_UserServantEntity__TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_2213A60(&Method_ServantSellConfirmListViewManager___c__GetSvtSortEntList_b__16_0__);
    sub_2213A60(&ServantSellConfirmListViewManager___c_TypeInfo);
    byte_596C72C = 1;
  }
  memset(&v35, 0, sizeof(v35));
  v4 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_UserServantEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v4,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_23;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_385636C *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !servantIds )
    goto LABEL_23;
  v7 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  System_Collections_Generic_List_long___GetEnumerator(
    &v34,
    servantIds,
    (const MethodInfo_446CD4C *)Method_System_Collections_Generic_List_long__GetEnumerator__);
  v35 = v34;
  v34.fields._list = 0;
  *(_QWORD *)&v34.fields._index = &v35;
  while ( 1 )
  {
    v8 = System_Collections_Generic_List_Enumerator_long___MoveNext(
           &v35,
           (const MethodInfo_40F7FA8 *)Method_System_Collections_Generic_List_Enumerator_long__MoveNext__);
    if ( !v8 )
      break;
    if ( !v7 )
      sub_2213CDC(v8, v9);
    Entity = DataMasterBase_object__object__long___GetEntity(
               v7,
               (int64_t)v35.fields._current,
               (const MethodInfo_3F13190 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    v17 = Entity;
    if ( !v4
      || (items = v4->fields._items,
          v19 = Method_System_Collections_Generic_List_UserServantEntity__Add__,
          ++v4->fields._version,
          !items) )
    {
      sub_2213CDC(Entity, Entity);
    }
    size = v4->fields._size;
    if ( (unsigned int)size >= LODWORD(items->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v4,
        Entity,
        *(const MethodInfo_4483C64 **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
    }
    else
    {
      v21 = &items->obj.klass + size;
      v4->fields._size = size + 1;
      v21[4] = (Il2CppClass *)v17;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)(v21 + 4), (int32_t)v17, v11, v12, v13, v14, v15, v16);
    }
  }
  System_Collections_Generic_List_Enumerator_long___Dispose(
    &v35,
    (const MethodInfo_40F7FA4 *)Method_System_Collections_Generic_List_Enumerator_long__Dispose__);
  Instance = ServantSellConfirmListViewManager___c_TypeInfo;
  if ( !*(&ServantSellConfirmListViewManager___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(ServantSellConfirmListViewManager___c_TypeInfo, v6, v22);
    Instance = ServantSellConfirmListViewManager___c_TypeInfo;
  }
  static_fields = (struct ServantSellConfirmListViewManager___c_StaticFields *)*((_QWORD *)Instance + 23);
  _9__16_0 = (System_Comparison_T__o *)static_fields->__9__16_0;
  if ( !_9__16_0 )
  {
    if ( !*((_DWORD *)Instance + 57) )
    {
      j_il2cpp_runtime_class_init_0(Instance, v6, v22);
      static_fields = ServantSellConfirmListViewManager___c_TypeInfo->static_fields;
    }
    v25 = (Il2CppObject *)static_fields->__9;
    _9__16_0 = (System_Comparison_T__o *)sub_2213CCC(System_Comparison_UserServantEntity__TypeInfo);
    System_Comparison_object____ctor(
      _9__16_0,
      v25,
      Method_ServantSellConfirmListViewManager___c__GetSvtSortEntList_b__16_0__,
      0);
    v26 = ServantSellConfirmListViewManager___c_TypeInfo->static_fields;
    v26->__9__16_0 = (struct System_Comparison_UserServantEntity__o *)_9__16_0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v26->__9__16_0, (int32_t)_9__16_0, v27, v28, v29, v30, v31, v32);
  }
  if ( !v4 )
LABEL_23:
    sub_2213CDC(Instance, v6);
  System_Collections_Generic_List_object___Sort_71849708(
    v4,
    _9__16_0,
    (const MethodInfo_44856EC *)Method_System_Collections_Generic_List_UserServantEntity__Sort__);
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
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x8
  int32_t kind; // w21
  __int64 Instance; // x0
  const MethodInfo *v8; // x1
  int32_t v9; // w20
  __int64 v10; // x21
  __int64 naturalAligment; // x10
  __int64 v12; // x2
  __int64 v13; // x22
  Il2CppObject v14; // q1
  int v15; // w8
  __int64 v16; // x1
  System_String_o *v17; // x2
  System_String_o *v18; // x3
  int32_t v19; // w4
  int32_t v20; // w5
  bool v21; // w6
  bool v22; // w7
  int32_t v23; // w1
  UnityEngine_Object_c *v24; // x0
  UnityEngine_Object_o *v25; // x22
  System_Collections_Generic_List_object__o *v26; // x8
  __int64 v27; // x20
  int32_t v28; // w21
  __int64 v29; // x22
  __int64 v30; // x10
  __int64 v31; // x2
  __int64 v32; // x23
  Il2CppObject v33; // q1
  int v34; // w8
  const MethodInfo *v35; // x1
  System_String_o *v36; // x2
  System_String_o *v37; // x3
  int32_t v38; // w4
  int32_t v39; // w5
  bool v40; // w6
  bool v41; // w7
  int32_t v42; // w1
  __int64 v43; // x2
  __int64 v44; // x8
  UnityEngine_Object_o *v45; // x23
  bool v46; // zf
  UnityEngine_Object_c *v47; // x0
  char v48; // w8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v49; // [xsp+0h] [xbp-D0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v50; // [xsp+20h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v51; // [xsp+40h] [xbp-90h]
  Il2CppObject *v52; // [xsp+68h] [xbp-68h] BYREF
  Il2CppObject *entity; // [xsp+78h] [xbp-58h] BYREF

  if ( (byte_596C730 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_UserCommandCodeMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_2213A60(&Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__TryGetEntity__);
    sub_2213A60(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
    sub_2213A60(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_2213A60(&ServantSellConfirmListViewItem_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_596C730 = 1;
  }
  itemList = this->fields.itemList;
  entity = 0;
  v52 = 0;
  if ( !itemList )
    return;
  kind = this->fields.kind;
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( kind == 2 )
  {
    if ( Instance )
    {
      Instance = (__int64)DataManager__GetMasterData_object_(
                            (DataManager_o *)Instance,
                            (const MethodInfo_385636C *)Method_DataManager_GetMasterData_UserCommandCodeMaster___);
      if ( Instance )
      {
        if ( !DataMasterBase_object__object__long___TryGetEntity(
                (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                &entity,
                selectedId,
                (const MethodInfo_3F131DC *)Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__TryGetEntity__) )
          return;
        Instance = (__int64)this->fields.itemList;
        if ( Instance )
        {
          v9 = 0;
          while ( v9 < *(_DWORD *)(Instance + 24) )
          {
            Instance = (__int64)System_Collections_Generic_List_object___get_Item(
                                  (System_Collections_Generic_List_object__o *)Instance,
                                  v9,
                                  (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
            if ( Instance )
            {
              v10 = Instance;
              naturalAligment = ServantSellConfirmListViewItem_TypeInfo->_2.naturalAligment;
              if ( *(unsigned __int8 *)(*(_QWORD *)Instance + 304LL) >= (unsigned int)naturalAligment
                && *(ServantSellConfirmListViewItem_c **)(*(_QWORD *)(*(_QWORD *)Instance + 200LL)
                                                        + 8 * naturalAligment
                                                        - 8) == ServantSellConfirmListViewItem_TypeInfo )
              {
                Instance = ServantSellConfirmListViewItem__get_UserCommandCodeId(
                             (ServantSellConfirmListViewItem_o *)Instance,
                             v8);
                if ( entity )
                {
                  v13 = Instance;
                  v14 = entity[2];
                  v15 = *(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1);
                  *(Il2CppObject *)&v51.fields.currentCryptoKey = entity[1];
                  *(Il2CppObject *)&v51.fields.fakeValue = v14;
                  if ( !v15 )
                    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v8, v12);
                  v50 = v51;
                  if ( v13 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_56000612(&v50, 0) )
                  {
                    v23 = (int)entity;
                    *(_QWORD *)(v10 + 152) = entity;
                    sub_2213A04((MissionNaviTransitionBoardItem_o *)(v10 + 152), v23, v17, v18, v19, v20, v21, v22);
                  }
                  v24 = UnityEngine_Object_TypeInfo;
                  *(_BYTE *)(v10 + 192) = 0;
                  v25 = *(UnityEngine_Object_o **)(v10 + 112);
                  *(_DWORD *)(v10 + 224) = -1;
                  if ( !*(&v24->_2.cctor_finished + 1) )
                    j_il2cpp_runtime_class_init_0(v24, v16, v17);
                  if ( UnityEngine_Object__op_Inequality(v25, 0, 0) )
                  {
                    Instance = *(_QWORD *)(v10 + 112);
                    if ( !Instance )
                      goto LABEL_50;
                    (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)Instance + 392LL))(
                      Instance,
                      v10,
                      *(_QWORD *)(*(_QWORD *)Instance + 400LL));
                  }
                  Instance = (__int64)this->fields.itemList;
                  ++v9;
                  if ( Instance )
                    continue;
                }
              }
            }
            goto LABEL_50;
          }
          return;
        }
      }
    }
LABEL_50:
    sub_2213CDC(Instance, v8);
  }
  if ( !Instance )
    goto LABEL_50;
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_385636C *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !Instance )
    goto LABEL_50;
  if ( !DataMasterBase_object__object__long___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
          &v52,
          selectedId,
          (const MethodInfo_3F131DC *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__) )
    return;
  Instance = (__int64)UserGameMaster__getSelfUserGame(0);
  v26 = (System_Collections_Generic_List_object__o *)this->fields.itemList;
  if ( !v26 )
    goto LABEL_50;
  v27 = Instance;
  v28 = 0;
  while ( v28 < v26->fields._size )
  {
    Instance = (__int64)System_Collections_Generic_List_object___get_Item(
                          v26,
                          v28,
                          (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    if ( Instance )
    {
      v29 = Instance;
      v30 = ServantSellConfirmListViewItem_TypeInfo->_2.naturalAligment;
      if ( *(unsigned __int8 *)(*(_QWORD *)Instance + 304LL) >= (unsigned int)v30
        && *(ServantSellConfirmListViewItem_c **)(*(_QWORD *)(*(_QWORD *)Instance + 200LL) + 8 * v30 - 8) == ServantSellConfirmListViewItem_TypeInfo )
      {
        Instance = ServantSellConfirmListViewItem__get_UserSvtId((ServantSellConfirmListViewItem_o *)Instance, v8);
        if ( v52 )
        {
          v32 = Instance;
          v33 = v52[2];
          v34 = *(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1);
          *(Il2CppObject *)&v51.fields.currentCryptoKey = v52[1];
          *(Il2CppObject *)&v51.fields.fakeValue = v33;
          if ( !v34 )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v8, v31);
          v49 = v51;
          if ( v32 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_56000612(&v49, 0) )
          {
            v42 = (int)v52;
            *(_QWORD *)(v29 + 120) = v52;
            sub_2213A04((MissionNaviTransitionBoardItem_o *)(v29 + 120), v42, v36, v37, v38, v39, v40, v41);
          }
          Instance = ServantSellConfirmListViewItem__get_UserSvtId((ServantSellConfirmListViewItem_o *)v29, v35);
          if ( v27 )
          {
            v44 = *(_QWORD *)(v27 + 120);
            *(_DWORD *)(v29 + 224) = -1;
            v45 = *(UnityEngine_Object_o **)(v29 + 112);
            v46 = Instance == v44;
            v47 = UnityEngine_Object_TypeInfo;
            v48 = v46;
            *(_BYTE *)(v29 + 192) = v48;
            if ( !*(&v47->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(v47, v8, v43);
            Instance = UnityEngine_Object__op_Inequality(v45, 0, 0);
            if ( (Instance & 1) != 0 )
            {
              Instance = *(_QWORD *)(v29 + 112);
              if ( !Instance )
                goto LABEL_50;
              Instance = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)Instance + 392LL))(
                           Instance,
                           v29,
                           *(_QWORD *)(*(_QWORD *)Instance + 400LL));
            }
            v26 = (System_Collections_Generic_List_object__o *)this->fields.itemList;
            ++v28;
            if ( v26 )
              continue;
          }
        }
      }
    }
    goto LABEL_50;
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

  if ( (byte_596C733 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596C733 = 1;
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
  System_String_o *v13; // x1

  if ( (byte_596C732 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_ServantSellConfirmListViewObject__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_ServantSellConfirmListViewObject__get_Item__);
    sub_2213A60(&Method_ServantSellConfirmListViewManager_OnMoveEnd__);
    sub_2213A60(&StringLiteral_10344/*"OnMoveEnd"*/);
    byte_596C732 = 1;
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
               (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_ServantSellConfirmListViewObject__get_Item__);
      v11 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
      System_Action___ctor(v11, (Il2CppObject *)this, Method_ServantSellConfirmListViewManager_OnMoveEnd__, 0);
      if ( !Item )
        break;
      ServantSellConfirmListViewObject__Init((ServantSellConfirmListViewObject_o *)Item, mode, v11, v12);
      if ( ++v9 >= v8->fields._size )
        return;
    }
LABEL_10:
    sub_2213CDC(ObjectList, v6);
  }
  v13 = (System_String_o *)StringLiteral_10344/*"OnMoveEnd"*/;
  this->fields.callbackCount = 1;
  UnityEngine_MonoBehaviour__Invoke((UnityEngine_MonoBehaviour_o *)this, v13, 0.0, 0);
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
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  const MethodInfo *v10; // x2

  this->fields.onSelectItem = onSelectItem;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.onSelectItem,
    (int32_t)onSelectItem,
    (System_String_o *)onSelectItem,
    (System_String_o *)method,
    v4,
    v5,
    v6,
    v7);
  ServantSellConfirmListViewManager__SetMode_41857580(this, mode, v10);
}


void ServantSellConfirmListViewManager__SetMode_41857580(
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
  __int64 v6; // x10
  int32_t v7; // w1
  __int64 naturalAligment; // x10

  v5 = this;
  if ( (byte_596C731 & 1) == 0 )
  {
    this = (ServantSellConfirmListViewManager_o *)sub_2213A60(&ServantSellConfirmListViewObject_TypeInfo);
    byte_596C731 = 1;
  }
  if ( v5->fields.initMode != 2 )
  {
    if ( obj )
    {
      naturalAligment = ServantSellConfirmListViewObject_TypeInfo->_2.naturalAligment;
      if ( obj->klass->_2.naturalAligment >= (unsigned int)naturalAligment
        && (ServantSellConfirmListViewObject_c *)obj->klass->_2.typeHierarchy[naturalAligment - 1] == ServantSellConfirmListViewObject_TypeInfo )
      {
        v7 = 2;
        goto LABEL_12;
      }
    }
LABEL_13:
    sub_2213CDC(this, obj);
  }
  if ( !obj )
    goto LABEL_13;
  v6 = ServantSellConfirmListViewObject_TypeInfo->_2.naturalAligment;
  if ( obj->klass->_2.naturalAligment < (unsigned int)v6
    || (ServantSellConfirmListViewObject_c *)obj->klass->_2.typeHierarchy[v6 - 1] != ServantSellConfirmListViewObject_TypeInfo )
  {
    goto LABEL_13;
  }
  v7 = 3;
LABEL_12:
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
  __int64 v7; // x1
  __int64 v8; // x2
  Il2CppObject *Item; // x22
  Il2CppObject *v10; // x22
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  struct System_Object_array *items; // x8
  _QWORD *v18; // x9
  __int64 size; // x10
  Il2CppClass **v20; // x0

  if ( (byte_596C729 & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_ServantSellConfirmListViewObject___);
    sub_2213A60(&Method_System_Collections_Generic_List_ServantSellConfirmListViewObject__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_ServantSellConfirmListViewObject___ctor__);
    sub_2213A60(&Method_System_Collections_Generic_List_GameObject__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_GameObject__get_Item__);
    sub_2213A60(&System_Collections_Generic_List_ServantSellConfirmListViewObject__TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596C729 = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_ServantSellConfirmListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_ServantSellConfirmListViewObject___ctor__);
  objectList = (System_Collections_Generic_List_object__o *)this->fields.objectList;
  if ( !objectList )
LABEL_21:
    sub_2213CDC(objectList, v4);
  v6 = 0;
  while ( v6 < objectList->fields._size )
  {
    Item = System_Collections_Generic_List_object___get_Item(
             objectList,
             v6,
             (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_GameObject__get_Item__);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7, v8);
    if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Item, 0, 0) )
    {
      objectList = (System_Collections_Generic_List_object__o *)this->fields.objectList;
      if ( !objectList )
        goto LABEL_21;
      objectList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                  objectList,
                                                                  v6,
                                                                  (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_GameObject__get_Item__);
      if ( !objectList )
        goto LABEL_21;
      objectList = (System_Collections_Generic_List_object__o *)UnityEngine_GameObject__GetComponent_object_(
                                                                  (UnityEngine_GameObject_o *)objectList,
                                                                  (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_ServantSellConfirmListViewObject___);
      if ( !objectList )
        goto LABEL_21;
      v10 = (Il2CppObject *)objectList;
      objectList = (System_Collections_Generic_List_object__o *)ServantSellConfirmListViewObject__GetItem(
                                                                  (ServantSellConfirmListViewObject_o *)objectList,
                                                                  v4);
      if ( objectList )
      {
        v4 = (const MethodInfo *)objectList;
        if ( !LOBYTE(objectList[2].fields._items)
          || (objectList = (System_Collections_Generic_List_object__o *)ListViewManager__ClippingItem_50835204(
                                                                          (ListViewManager_o *)this,
                                                                          (ListViewItem_o *)objectList,
                                                                          0),
              ((unsigned __int8)objectList & 1) != 0) )
        {
          if ( !v3 )
            goto LABEL_21;
          items = v3->fields._items;
          v18 = Method_System_Collections_Generic_List_ServantSellConfirmListViewObject__Add__;
          ++v3->fields._version;
          if ( !items )
            goto LABEL_21;
          size = v3->fields._size;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v3,
              v10,
              *(const MethodInfo_4483C64 **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
          }
          else
          {
            v20 = &items->obj.klass + size;
            v3->fields._size = size + 1;
            v20[4] = (Il2CppClass *)v10;
            sub_2213A04((MissionNaviTransitionBoardItem_o *)(v20 + 4), (int32_t)v10, v11, v12, v13, v14, v15, v16);
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
  __int64 v7; // x1
  __int64 v8; // x2
  Il2CppObject *Item; // x22
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  struct System_Object_array *items; // x8
  _QWORD *v17; // x9
  __int64 size; // x10
  System_Collections_Generic_List_object__o *v19; // x1
  Il2CppClass **v20; // x0

  if ( (byte_596C728 & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_ServantSellConfirmListViewObject___);
    sub_2213A60(&Method_System_Collections_Generic_List_ServantSellConfirmListViewObject__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_ServantSellConfirmListViewObject___ctor__);
    sub_2213A60(&Method_System_Collections_Generic_List_GameObject__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_GameObject__get_Item__);
    sub_2213A60(&System_Collections_Generic_List_ServantSellConfirmListViewObject__TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596C728 = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_ServantSellConfirmListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_ServantSellConfirmListViewObject___ctor__);
  objectList = (System_Collections_Generic_List_object__o *)this->fields.objectList;
  if ( !objectList )
LABEL_17:
    sub_2213CDC(objectList, v4);
  v6 = 0;
  while ( v6 < objectList->fields._size )
  {
    Item = System_Collections_Generic_List_object___get_Item(
             objectList,
             v6,
             (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_GameObject__get_Item__);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7, v8);
    if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Item, 0, 0) )
    {
      objectList = (System_Collections_Generic_List_object__o *)this->fields.objectList;
      if ( !objectList )
        goto LABEL_17;
      objectList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                  objectList,
                                                                  v6,
                                                                  (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_GameObject__get_Item__);
      if ( !objectList )
        goto LABEL_17;
      objectList = (System_Collections_Generic_List_object__o *)UnityEngine_GameObject__GetComponent_object_(
                                                                  (UnityEngine_GameObject_o *)objectList,
                                                                  (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_ServantSellConfirmListViewObject___);
      if ( !v3 )
        goto LABEL_17;
      items = v3->fields._items;
      v17 = Method_System_Collections_Generic_List_ServantSellConfirmListViewObject__Add__;
      ++v3->fields._version;
      if ( !items )
        goto LABEL_17;
      size = v3->fields._size;
      v19 = objectList;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v3,
          (Il2CppObject *)objectList,
          *(const MethodInfo_4483C64 **)(*(_QWORD *)(v17[4] + 192LL) + 112LL));
      }
      else
      {
        v20 = &items->obj.klass + size;
        v3->fields._size = size + 1;
        v20[4] = (Il2CppClass *)v19;
        sub_2213A04((MissionNaviTransitionBoardItem_o *)(v20 + 4), (int32_t)v19, v10, v11, v12, v13, v14, v15);
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
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_596C736 & 1) == 0 )
  {
    sub_2213A60(&ServantSellConfirmListViewManager___c_TypeInfo);
    byte_596C736 = 1;
  }
  v1 = (Il2CppObject *)sub_2213CCC(ServantSellConfirmListViewManager___c_TypeInfo);
  System_Object___ctor(v1, 0);
  ServantSellConfirmListViewManager___c_TypeInfo->static_fields->__9 = (struct ServantSellConfirmListViewManager___c_o *)v1;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)ServantSellConfirmListViewManager___c_TypeInfo->static_fields,
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
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x21
  __int64 v11; // x22
  int32_t v12; // w21
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x20
  __int64 v16; // x21
  int32_t v17; // w0
  __int64 v18; // x8
  int32_t v19; // w19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v20; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v21; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v22; // 0:x0.16

  if ( (byte_596C737 & 1) == 0 )
  {
    this = (ServantSellConfirmListViewManager___c_o *)sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_596C737 = 1;
  }
  if ( !a || (this = (ServantSellConfirmListViewManager___c_o *)UserCommandCodeEntity__GetRarity(a, 0), !b) )
    sub_2213CDC(this, a);
  if ( (int)this < UserCommandCodeEntity__GetRarity(b, 0) )
    return 1;
  Rarity = UserCommandCodeEntity__GetRarity(a, 0);
  if ( Rarity > UserCommandCodeEntity__GetRarity(b, 0) )
    return -1;
  v10 = *(_QWORD *)&a->fields.commandCodeId.fields.currentCryptoKey;
  v11 = *(_QWORD *)&a->fields.commandCodeId.fields.fakeValue;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v8, v9);
  *(_QWORD *)&v20.fields.currentCryptoKey = v10;
  *(_QWORD *)&v20.fields.fakeValue = v11;
  v12 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v20, 0);
  if ( v12 < CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(b->fields.commandCodeId, 0) )
    return 1;
  v16 = *(_QWORD *)&a->fields.commandCodeId.fields.currentCryptoKey;
  v15 = *(_QWORD *)&a->fields.commandCodeId.fields.fakeValue;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v13, v14);
  *(_QWORD *)&v21.fields.currentCryptoKey = v16;
  *(_QWORD *)&v21.fields.fakeValue = v15;
  v17 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v21, 0);
  v18 = *(_QWORD *)&b->fields.commandCodeId.fields.currentCryptoKey;
  *(_QWORD *)&v22.fields.fakeValue = *(_QWORD *)&b->fields.commandCodeId.fields.fakeValue;
  v19 = v17;
  *(_QWORD *)&v22.fields.currentCryptoKey = v18;
  if ( v19 <= CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v22, 0) )
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
    sub_2213CDC(this, a);
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