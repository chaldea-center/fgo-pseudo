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
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  struct System_Action_ServantSellConfirmListViewItem__o *onSelectItem; // x20
  PartyOrganizationUtility_o *p_onSelectItem; // x0

  onSelectItem = this->fields.onSelectItem;
  if ( onSelectItem )
  {
    p_onSelectItem = (PartyOrganizationUtility_o *)&this->fields.onSelectItem;
    p_onSelectItem->klass = 0LL;
    sub_1BE4A70(p_onSelectItem, 0LL, (int64_t)method, v3, v4, v5, v6, v7);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, ServantSellConfirmListViewItem_o *, _QWORD))onSelectItem->fields.m_target)(
      onSelectItem->fields.original_method_info,
      selectItem,
      *(_QWORD *)&onSelectItem->fields.extra_arg);
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
  Il2CppObject *MasterData_object; // x0
  const MethodInfo *v16; // x2
  __int64 v17; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v18; // x21
  unsigned __int64 v19; // x26
  int64_t v20; // x23
  System_Collections_Generic_List_object__o *itemList; // x22
  int32_t v22; // w24
  Il2CppObject *Entity; // x25
  ServantSellConfirmListViewItem_o *v24; // x23
  const MethodInfo *v25; // x4
  int64_t v26; // x2
  int32_t v27; // w3
  System_String_o *v28; // x4
  BattleSetupInfo_o *v29; // x5
  FollowerInfo_o *v30; // x6
  PartyListViewItem_o *v31; // x7
  struct System_Object_array *items; // x8
  _QWORD *v33; // x9
  __int64 size; // x10
  Il2CppClass **v35; // x0

  if ( (byte_4B62F78 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataManager_GetMasterData_UserCommandCodeMaster___, commandCodeIds);
    sub_1BE4ACC(&Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__GetEntity__, v9);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_ListViewItem__Add__, v10);
    sub_1BE4ACC(&ServantSellConfirmListViewItem_TypeInfo, v11);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12);
    byte_4B62F78 = 1;
  }
  if ( commandCodeIds && *(_QWORD *)&commandCodeIds->max_length && !isExceeded && !isSellLastServant )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_20;
    MasterData_object = DataManager__GetMasterData_object_(
                          Instance,
                          (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_UserCommandCodeMaster___);
    v17 = *(_QWORD *)&commandCodeIds->max_length;
    if ( (int)v17 >= 1 )
    {
      v18 = (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object;
      v19 = 0LL;
      while ( 1 )
      {
        if ( v19 >= (unsigned int)v17 )
          sub_1BE4D30(MasterData_object, v14);
        Instance = (DataManager_o *)this->fields.parentManager;
        if ( !Instance )
          break;
        v20 = commandCodeIds->m_Items[v19];
        itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
        Instance = (DataManager_o *)ServantOperationManager__GetSelectedOrderByCommandCodeId(
                                      (ServantOperationManager_o *)Instance,
                                      v20,
                                      v16);
        if ( !v18 )
          break;
        v22 = (int)Instance;
        Entity = DataMasterBase_object__object__long___GetEntity(
                   v18,
                   v20,
                   (const MethodInfo_31FD970 *)Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__GetEntity__);
        v24 = (ServantSellConfirmListViewItem_o *)sub_1BE4D18(ServantSellConfirmListViewItem_TypeInfo);
        ServantSellConfirmListViewItem___ctor_33506292(v24, v22, (UserCommandCodeEntity_o *)Entity, 0, v25);
        if ( !itemList )
          break;
        items = itemList->fields._items;
        v33 = Method_System_Collections_Generic_List_ListViewItem__Add__;
        ++itemList->fields._version;
        if ( !items )
          break;
        size = itemList->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            itemList,
            (Il2CppObject *)v24,
            *(const MethodInfo_35EC224 **)(*(_QWORD *)(v33[4] + 192LL) + 112LL));
        }
        else
        {
          v35 = &items->obj.klass + size;
          itemList->fields._size = size + 1;
          v35[4] = (Il2CppClass *)v24;
          sub_1BE4A70((PartyOrganizationUtility_o *)(v35 + 4), (int64_t)v24, v26, v27, v28, v29, v30, v31);
        }
        LODWORD(v17) = commandCodeIds->max_length;
        if ( (__int64)++v19 >= (int)v17 )
          return;
      }
LABEL_20:
      sub_1BE4D28(Instance, v14);
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
  System_Collections_Generic_List_object__o *SortEntList; // x0
  __int64 v19; // x1
  System_Collections_Generic_List_object__o *v20; // x20
  Il2CppObject *current; // x23
  System_Collections_Generic_List_object__o *itemList; // x21
  int32_t v23; // w24
  ServantSellConfirmListViewItem_o *v24; // x22
  const MethodInfo *v25; // x4
  __int64 v26; // x0
  __int64 v27; // x1
  int64_t v28; // x2
  int32_t v29; // w3
  System_String_o *v30; // x4
  BattleSetupInfo_o *v31; // x5
  FollowerInfo_o *v32; // x6
  PartyListViewItem_o *v33; // x7
  struct System_Object_array *items; // x8
  _QWORD *v35; // x9
  __int64 size; // x10
  Il2CppClass **v37; // x0
  System_Collections_Generic_List_Enumerator_object__o v38; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v39; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_4B62F79 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Collections_Generic_List_Enumerator_UserCommandCodeEntity__Dispose__, commandCodeIds);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_Enumerator_UserCommandCodeEntity__MoveNext__, v9);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_Enumerator_UserCommandCodeEntity__get_Current__, v10);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_ListViewItem__Add__, v11);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_UserCommandCodeEntity__GetEnumerator__, v12);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_UserCommandCodeEntity__IndexOf__, v13);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_long__get_Count__, v14);
    sub_1BE4ACC(&ServantSellConfirmListViewItem_TypeInfo, v15);
    byte_4B62F79 = 1;
  }
  memset(&v39, 0, sizeof(v39));
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
  if ( commandCodeIds && commandCodeIds->fields._size >= 1 && !isExceeded && !isSellLastServant )
  {
    SortEntList = (System_Collections_Generic_List_object__o *)ServantSellConfirmListViewManager__GetSortEntList(
                                                                 v16,
                                                                 commandCodeIds,
                                                                 v17);
    if ( !SortEntList )
      sub_1BE4D28(0LL, v19);
    v20 = SortEntList;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v38,
      SortEntList,
      (const MethodInfo_35ECD1C *)Method_System_Collections_Generic_List_UserCommandCodeEntity__GetEnumerator__);
    v39 = v38;
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v39,
              (const MethodInfo_3361CE0 *)Method_System_Collections_Generic_List_Enumerator_UserCommandCodeEntity__MoveNext__) )
    {
      current = v39.fields._current;
      itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
      v23 = System_Collections_Generic_List_object___IndexOf(
              v20,
              v39.fields._current,
              (const MethodInfo_35ECEC4 *)Method_System_Collections_Generic_List_UserCommandCodeEntity__IndexOf__);
      v24 = (ServantSellConfirmListViewItem_o *)sub_1BE4D18(ServantSellConfirmListViewItem_TypeInfo);
      ServantSellConfirmListViewItem___ctor_33506292(v24, v23, (UserCommandCodeEntity_o *)current, 0, v25);
      if ( !itemList )
        sub_1BE4D28(v26, v27);
      items = itemList->fields._items;
      v35 = Method_System_Collections_Generic_List_ListViewItem__Add__;
      ++itemList->fields._version;
      if ( !items )
        sub_1BE4D28(v26, v27);
      size = itemList->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          itemList,
          (Il2CppObject *)v24,
          *(const MethodInfo_35EC224 **)(*(_QWORD *)(v35[4] + 192LL) + 112LL));
      }
      else
      {
        v37 = &items->obj.klass + size;
        itemList->fields._size = size + 1;
        v37[4] = (Il2CppClass *)v24;
        sub_1BE4A70((PartyOrganizationUtility_o *)(v37 + 4), (int64_t)v24, v28, v29, v30, v31, v32, v33);
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v39,
      (const MethodInfo_3361CDC *)Method_System_Collections_Generic_List_Enumerator_UserCommandCodeEntity__Dispose__);
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
  _BOOL4 v5; // w22
  System_Int64_array *v6; // x24
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  DataManager_o *Instance; // x0
  const MethodInfo *v17; // x1
  Il2CppObject *MasterData_object; // x23
  Il2CppObject *v19; // x25
  ServantOperationManager_o *SelectedEquipeCmdCardServantList; // x0
  const MethodInfo *v21; // x2
  __int64 v22; // x8
  unsigned __int64 v23; // x21
  int64_t v24; // x26
  const MethodInfo *v25; // x2
  UserServantEntity_o *v26; // x27
  __int64 v27; // x19
  __int64 v28; // x28
  System_Collections_Generic_List_object__o *itemList; // x28
  System_Int64_array *v30; // x23
  _BOOL4 v31; // w25
  int64_t favoriteUserSvtId; // x24
  System_Int64_array *v33; // x20
  System_Int64_array *v34; // x22
  int32_t v35; // w19
  ServantSellConfirmListViewItem_o *v36; // x29
  const MethodInfo *v37; // x6
  int64_t v38; // x2
  int32_t v39; // w3
  System_String_o *v40; // x4
  BattleSetupInfo_o *v41; // x5
  FollowerInfo_o *v42; // x6
  PartyListViewItem_o *v43; // x7
  struct System_Object_array *items; // x8
  _QWORD *v45; // x9
  __int64 size; // x10
  Il2CppClass **v47; // x0
  System_Collections_Generic_List_int__o *v48; // [xsp+0h] [xbp-A0h]
  Il2CppObject *v49; // [xsp+8h] [xbp-98h]
  ServantSellConfirmListViewManager_o *v50; // [xsp+10h] [xbp-90h]
  UserGameEntity_o *SelfUserGame; // [xsp+18h] [xbp-88h]
  int64_t *m_Items; // [xsp+28h] [xbp-78h]
  System_Int64_array *equipIdList; // [xsp+30h] [xbp-70h] BYREF
  System_Int64_array *svtIdList; // [xsp+38h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v56; // 0:x0.16

  v5 = isExceeded;
  v6 = servantIds;
  if ( (byte_4B62F75 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataManager_GetMasterData_UserDeckMaster___, servantIds);
    sub_1BE4ACC(&Method_DataManager_GetMasterData_UserServantMaster___, v8);
    sub_1BE4ACC(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v9);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_ListViewItem__Add__, v10);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_int__Contains__, v11);
    sub_1BE4ACC(&NetworkManager_TypeInfo, v12);
    sub_1BE4ACC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v13);
    sub_1BE4ACC(&ServantSellConfirmListViewItem_TypeInfo, v14);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v15);
    byte_4B62F75 = 1;
  }
  equipIdList = 0LL;
  svtIdList = 0LL;
  if ( v6 && *(_QWORD *)&v6->max_length )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_38;
    MasterData_object = DataManager__GetMasterData_object_(
                          Instance,
                          (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_UserServantMaster___);
    SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_38;
    v19 = DataManager__GetMasterData_object_(
            Instance,
            (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_UserDeckMaster___);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    if ( !byte_4B61717 )
    {
      sub_1BE4ACC(&NetworkManager_TypeInfo, v17);
      byte_4B61717 = 1;
    }
    Instance = (DataManager_o *)NetworkManager_TypeInfo;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      Instance = (DataManager_o *)NetworkManager_TypeInfo;
    }
    if ( !v19 )
      goto LABEL_38;
    UserDeckMaster__getPartyList(
      (UserDeckMaster_o *)v19,
      &svtIdList,
      &equipIdList,
      *(_QWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 64LL),
      0LL);
    Instance = (DataManager_o *)this->fields.parentManager;
    if ( !Instance )
      goto LABEL_38;
    SelectedEquipeCmdCardServantList = (ServantOperationManager_o *)ServantOperationManager__GetSelectedEquipeCmdCardServantList(
                                                                      (ServantOperationManager_o *)Instance,
                                                                      v17);
    Instance = (DataManager_o *)ServantOperationManager__GetEquipedCommandCodeSellLastSvtList(
                                  SelectedEquipeCmdCardServantList,
                                  (System_Collections_Generic_List_ServantOperationListViewItem__o *)SelectedEquipeCmdCardServantList,
                                  v21);
    v22 = *(_QWORD *)&v6->max_length;
    v48 = (System_Collections_Generic_List_int__o *)Instance;
    if ( (int)v22 >= 1 )
    {
      v23 = 0LL;
      m_Items = v6->m_Items;
      v49 = MasterData_object;
      v50 = this;
      while ( 1 )
      {
        if ( v23 >= (unsigned int)v22 )
          sub_1BE4D30(Instance, v17);
        if ( !MasterData_object )
          break;
        v24 = m_Items[v23];
        Instance = (DataManager_o *)DataMasterBase_object__object__long___GetEntity(
                                      (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                                      v24,
                                      (const MethodInfo_31FD970 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
        v26 = (UserServantEntity_o *)Instance;
        if ( !v5 )
          goto LABEL_42;
        if ( !Instance )
          break;
        Instance = (DataManager_o *)UserServantEntity__isExceeded((UserServantEntity_o *)Instance, 0LL);
        if ( ((unsigned __int8)Instance & 1) != 0 )
        {
LABEL_42:
          if ( !isSellLastServant )
            goto LABEL_28;
          if ( !v26 )
            break;
          v28 = *(_QWORD *)&v26->fields.svtId.fields.currentCryptoKey;
          v27 = *(_QWORD *)&v26->fields.svtId.fields.fakeValue;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v56.fields.currentCryptoKey = v28;
          *(_QWORD *)&v56.fields.fakeValue = v27;
          v17 = (const MethodInfo *)(unsigned int)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47299060(
                                                    v56,
                                                    0LL);
          Instance = (DataManager_o *)v48;
          if ( !v48 )
            break;
          Instance = (DataManager_o *)System_Collections_Generic_List_int___Contains(
                                        v48,
                                        (int32_t)v17,
                                        (const MethodInfo_35CF578 *)Method_System_Collections_Generic_List_int__Contains__);
          if ( ((unsigned __int8)Instance & 1) != 0 )
          {
LABEL_28:
            Instance = (DataManager_o *)this->fields.parentManager;
            if ( !Instance )
              break;
            itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
            v30 = v6;
            v31 = v5;
            Instance = (DataManager_o *)ServantOperationManager__GetSelectedOrderByServantId(
                                          (ServantOperationManager_o *)Instance,
                                          v24,
                                          v25);
            if ( !SelfUserGame )
              break;
            favoriteUserSvtId = SelfUserGame->fields.favoriteUserSvtId;
            v33 = equipIdList;
            v34 = svtIdList;
            v35 = (int)Instance;
            v36 = (ServantSellConfirmListViewItem_o *)sub_1BE4D18(ServantSellConfirmListViewItem_TypeInfo);
            ServantSellConfirmListViewItem___ctor(v36, v35, v26, v34, v33, v24 == favoriteUserSvtId, v37);
            if ( !itemList )
              break;
            items = itemList->fields._items;
            v45 = Method_System_Collections_Generic_List_ListViewItem__Add__;
            ++itemList->fields._version;
            if ( !items )
              break;
            size = itemList->fields._size;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                itemList,
                (Il2CppObject *)v36,
                *(const MethodInfo_35EC224 **)(*(_QWORD *)(v45[4] + 192LL) + 112LL));
            }
            else
            {
              v47 = &items->obj.klass + size;
              itemList->fields._size = size + 1;
              v47[4] = (Il2CppClass *)v36;
              sub_1BE4A70((PartyOrganizationUtility_o *)(v47 + 4), (int64_t)v36, v38, v39, v40, v41, v42, v43);
            }
            v6 = v30;
            MasterData_object = v49;
            this = v50;
            v5 = v31;
          }
        }
        LODWORD(v22) = v6->max_length;
        if ( (__int64)++v23 >= (int)v22 )
          return;
      }
LABEL_38:
      sub_1BE4D28(Instance, v17);
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
  const MethodInfo *v23; // x1
  UserGameEntity_o *SelfUserGame; // x22
  Il2CppObject *MasterData_object; // x19
  ServantOperationManager_o *SelectedEquipeCmdCardServantList; // x0
  const MethodInfo *v27; // x2
  System_Collections_Generic_List_int__o *EquipedCommandCodeSellLastSvtList; // x23
  System_Collections_Generic_List_long__o *v29; // x25
  const MethodInfo *v30; // x2
  __int64 v31; // x8
  unsigned __int64 v32; // x19
  struct System_Int64_array *items; // x8
  _QWORD *v34; // x9
  __int64 size; // x10
  System_Collections_Generic_List_object__o *v36; // x24
  _BOOL8 v37; // x0
  __int64 v38; // x1
  Il2CppObject *current; // x25
  void *monitor; // x19
  Il2CppClass *klass; // x20
  __int64 v42; // x0
  System_Collections_Generic_List_object__o *itemList; // x26
  __int64 v44; // x0
  __int64 v45; // x1
  Il2CppObject v46; // q0
  int32_t v47; // w27
  System_Int64_array *v48; // x19
  System_Int64_array *v49; // x29
  int64_t v50; // x0
  __int64 v51; // x1
  int64_t favoriteUserSvtId; // x21
  int64_t v53; // x20
  ServantSellConfirmListViewItem_o *v54; // x28
  const MethodInfo *v55; // x6
  __int64 v56; // x0
  __int64 v57; // x1
  int64_t v58; // x2
  int32_t v59; // w3
  System_String_o *v60; // x4
  BattleSetupInfo_o *v61; // x5
  FollowerInfo_o *v62; // x6
  PartyListViewItem_o *v63; // x7
  struct System_Object_array *v64; // x8
  _QWORD *v65; // x9
  __int64 v66; // x10
  Il2CppClass **v67; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v71; // [xsp+10h] [xbp-D0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v72; // [xsp+30h] [xbp-B0h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v73; // [xsp+50h] [xbp-90h] BYREF
  System_Int64_array *equipIdList; // [xsp+70h] [xbp-70h] BYREF
  System_Int64_array *svtIdList; // [xsp+78h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v76; // 0:x0.16

  if ( (byte_4B62F76 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataManager_GetMasterData_UserDeckMaster___, servantIds);
    sub_1BE4ACC(&Method_DataManager_GetMasterData_UserServantMaster___, v6);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_Enumerator_UserServantEntity__Dispose__, v7);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_Enumerator_UserServantEntity__MoveNext__, v8);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_Enumerator_UserServantEntity__get_Current__, v9);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_long__Add__, v10);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_ListViewItem__Add__, v11);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_int__Contains__, v12);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_UserServantEntity__GetEnumerator__, v13);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_UserServantEntity__IndexOf__, v14);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_long___ctor__, v15);
    sub_1BE4ACC(&System_Collections_Generic_List_long__TypeInfo, v16);
    sub_1BE4ACC(&NetworkManager_TypeInfo, v17);
    sub_1BE4ACC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v18);
    sub_1BE4ACC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v19);
    sub_1BE4ACC(&ServantSellConfirmListViewItem_TypeInfo, v20);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v21);
    byte_4B62F76 = 1;
  }
  equipIdList = 0LL;
  svtIdList = 0LL;
  memset(&v73, 0, sizeof(v73));
  this->fields.kind = 3;
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
  if ( servantIds && *(_QWORD *)&servantIds->max_length )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_47;
    DataManager__GetMasterData_object_(
      Instance,
      (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_UserServantMaster___);
    SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_47;
    MasterData_object = DataManager__GetMasterData_object_(
                          Instance,
                          (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_UserDeckMaster___);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    if ( !byte_4B61717 )
    {
      sub_1BE4ACC(&NetworkManager_TypeInfo, v23);
      byte_4B61717 = 1;
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
      0LL);
    Instance = (DataManager_o *)this->fields.parentManager;
    if ( !Instance )
      goto LABEL_47;
    SelectedEquipeCmdCardServantList = (ServantOperationManager_o *)ServantOperationManager__GetSelectedEquipeCmdCardServantList(
                                                                      (ServantOperationManager_o *)Instance,
                                                                      v23);
    EquipedCommandCodeSellLastSvtList = ServantOperationManager__GetEquipedCommandCodeSellLastSvtList(
                                          SelectedEquipeCmdCardServantList,
                                          (System_Collections_Generic_List_ServantOperationListViewItem__o *)SelectedEquipeCmdCardServantList,
                                          v27);
    v29 = (System_Collections_Generic_List_long__o *)sub_1BE4D18(System_Collections_Generic_List_long__TypeInfo);
    System_Collections_Generic_List_long____ctor(
      v29,
      (const MethodInfo_35D3A04 *)Method_System_Collections_Generic_List_long___ctor__);
    v31 = *(_QWORD *)&servantIds->max_length;
    if ( (int)v31 >= 1 )
    {
      v32 = 0LL;
      while ( 1 )
      {
        if ( v32 >= (unsigned int)v31 )
          sub_1BE4D30(Instance, v23);
        if ( !v29 )
          break;
        v23 = (const MethodInfo *)servantIds->m_Items[v32];
        items = v29->fields._items;
        v34 = Method_System_Collections_Generic_List_long__Add__;
        ++v29->fields._version;
        if ( !items )
          break;
        size = v29->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_long___AddWithResize(
            v29,
            (int64_t)v23,
            *(const MethodInfo_35D4258 **)(*(_QWORD *)(v34[4] + 192LL) + 112LL));
        }
        else
        {
          v29->fields._size = size + 1;
          items->m_Items[size] = (int64_t)v23;
        }
        LODWORD(v31) = servantIds->max_length;
        if ( (__int64)++v32 >= (int)v31 )
          goto LABEL_24;
      }
LABEL_47:
      sub_1BE4D28(Instance, v23);
    }
LABEL_24:
    Instance = (DataManager_o *)ServantSellConfirmListViewManager__GetSvtSortEntList(
                                  (ServantSellConfirmListViewManager_o *)Instance,
                                  v29,
                                  v30);
    if ( !Instance )
      goto LABEL_47;
    v36 = (System_Collections_Generic_List_object__o *)Instance;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v72,
      (System_Collections_Generic_List_object__o *)Instance,
      (const MethodInfo_35ECD1C *)Method_System_Collections_Generic_List_UserServantEntity__GetEnumerator__);
    *(_OWORD *)&v73.fields._list = *(_OWORD *)&v72.fields.currentCryptoKey;
    v73.fields._current = (Il2CppObject *)v72.fields.fakeValue;
    while ( 1 )
    {
      v37 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v73,
              (const MethodInfo_3361CE0 *)Method_System_Collections_Generic_List_Enumerator_UserServantEntity__MoveNext__);
      if ( !v37 )
        break;
      current = v73.fields._current;
      if ( isExceeded )
      {
        if ( !v73.fields._current )
          sub_1BE4D28(v37, v38);
        v37 = UserServantEntity__isExceeded((UserServantEntity_o *)v73.fields._current, 0LL);
        if ( !v37 )
          continue;
      }
      if ( !isSellLastServant )
        goto LABEL_36;
      if ( !current )
        sub_1BE4D28(v37, v38);
      klass = current[5].klass;
      monitor = current[5].monitor;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v76.fields.currentCryptoKey = klass;
      *(_QWORD *)&v76.fields.fakeValue = monitor;
      v42 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47299060(v76, 0LL);
      if ( !EquipedCommandCodeSellLastSvtList )
        sub_1BE4D28(v42, (unsigned int)v42);
      if ( System_Collections_Generic_List_int___Contains(
             EquipedCommandCodeSellLastSvtList,
             v42,
             (const MethodInfo_35CF578 *)Method_System_Collections_Generic_List_int__Contains__) )
      {
LABEL_36:
        itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
        v44 = System_Collections_Generic_List_object___IndexOf(
                v36,
                current,
                (const MethodInfo_35ECEC4 *)Method_System_Collections_Generic_List_UserServantEntity__IndexOf__);
        if ( !current )
          sub_1BE4D28(v44, v45);
        v46 = current[2];
        v47 = v44;
        v48 = equipIdList;
        v49 = svtIdList;
        *(Il2CppObject *)&v72.fields.currentCryptoKey = current[1];
        *(Il2CppObject *)&v72.fields.fakeValue = v46;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        v71 = v72;
        v50 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47302584(&v71, 0LL);
        if ( !SelfUserGame )
          sub_1BE4D28(v50, v51);
        favoriteUserSvtId = SelfUserGame->fields.favoriteUserSvtId;
        v53 = v50;
        v54 = (ServantSellConfirmListViewItem_o *)sub_1BE4D18(ServantSellConfirmListViewItem_TypeInfo);
        ServantSellConfirmListViewItem___ctor(
          v54,
          v47,
          (UserServantEntity_o *)current,
          v49,
          v48,
          v53 == favoriteUserSvtId,
          v55);
        if ( !itemList )
          sub_1BE4D28(v56, v57);
        v64 = itemList->fields._items;
        v65 = Method_System_Collections_Generic_List_ListViewItem__Add__;
        ++itemList->fields._version;
        if ( !v64 )
          sub_1BE4D28(v56, v57);
        v66 = itemList->fields._size;
        if ( (unsigned int)v66 >= v64->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            itemList,
            (Il2CppObject *)v54,
            *(const MethodInfo_35EC224 **)(*(_QWORD *)(v65[4] + 192LL) + 112LL));
        }
        else
        {
          v67 = &v64->obj.klass + v66;
          itemList->fields._size = v66 + 1;
          v67[4] = (Il2CppClass *)v54;
          sub_1BE4A70((PartyOrganizationUtility_o *)(v67 + 4), (int64_t)v54, v58, v59, v60, v61, v62, v63);
        }
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v73,
      (const MethodInfo_3361CDC *)Method_System_Collections_Generic_List_Enumerator_UserServantEntity__Dispose__);
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
  System_Collections_Generic_List_object__o *itemList; // x0
  int64_t v9; // x21
  int32_t v10; // w22
  __int64 methodPtr_low; // x10
  struct System_Object_array *items; // x23
  void *monitor; // x24
  int32_t v14; // w8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v16; // 0:x0.16

  if ( (byte_4B62F7F & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, *(_QWORD *)&svtId);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v5);
    sub_1BE4ACC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v6);
    sub_1BE4ACC(&ServantSellConfirmListViewItem_TypeInfo, v7);
    byte_4B62F7F = 1;
  }
  itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
  if ( !itemList )
LABEL_14:
    sub_1BE4D28(itemList, *(_QWORD *)&svtId);
  v9 = 0LL;
  v10 = 0;
  while ( v10 < itemList->fields._size )
  {
    itemList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                              itemList,
                                                              v10,
                                                              (const MethodInfo_35EBF54 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    if ( itemList )
    {
      methodPtr_low = LOBYTE(ServantSellConfirmListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(itemList->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
        && (ServantSellConfirmListViewItem_c *)itemList->klass->_2.typeHierarchy[methodPtr_low - 1] == ServantSellConfirmListViewItem_TypeInfo )
      {
        monitor = itemList[3].monitor;
        items = itemList[3].fields._items;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v16.fields.currentCryptoKey = monitor;
        *(_QWORD *)&v16.fields.fakeValue = items;
        v14 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47299060(v16, 0LL);
        itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
        if ( v14 == svtId )
          ++v9;
        ++v10;
        if ( itemList )
          continue;
      }
    }
    goto LABEL_14;
  }
  return v9;
}


// local variable allocation has failed, the output may be wrong!
int64_t __fastcall ServantSellConfirmListViewManager__GetCommandCodeAmountSortValue(
        ServantSellConfirmListViewManager_o *this,
        int32_t commandCodeId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  System_Collections_Generic_List_object__o *itemList; // x0
  int64_t v8; // x21
  int32_t v9; // w22
  System_Collections_Generic_List_object__c *klass; // x9
  __int64 methodPtr_low; // x10
  System_Collections_Generic_List_object__o *v12; // x8

  if ( (byte_4B62F80 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, *(_QWORD *)&commandCodeId);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v5);
    sub_1BE4ACC(&ServantSellConfirmListViewItem_TypeInfo, v6);
    byte_4B62F80 = 1;
  }
  itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
  if ( !itemList )
LABEL_15:
    sub_1BE4D28(itemList, *(_QWORD *)&commandCodeId);
  v8 = 0LL;
  v9 = 0;
  while ( v9 < itemList->fields._size )
  {
    itemList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                              itemList,
                                                              v9,
                                                              (const MethodInfo_35EBF54 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    if ( itemList )
    {
      klass = itemList->klass;
      methodPtr_low = LOBYTE(ServantSellConfirmListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(itemList->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
        && (ServantSellConfirmListViewItem_c *)klass->_2.typeHierarchy[methodPtr_low - 1] == ServantSellConfirmListViewItem_TypeInfo )
      {
        ++v9;
        v12 = (ServantSellConfirmListViewItem_c *)klass->_2.typeHierarchy[methodPtr_low - 1] == ServantSellConfirmListViewItem_TypeInfo
            ? itemList
            : 0LL;
        itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
        if ( LODWORD(v12[4].klass) != commandCodeId )
          ++v8;
        if ( itemList )
          continue;
      }
    }
    goto LABEL_15;
  }
  return v8;
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
  System_Collections_Generic_List_object__o *v17; // x19
  void *Instance; // x0
  __int64 v19; // x1
  DataMasterBase_TMaster__TEntity__PKType__o *v20; // x21
  _BOOL8 v21; // x0
  __int64 v22; // x1
  Il2CppObject *Entity; // x0
  int64_t v24; // x2
  int32_t v25; // w3
  System_String_o *v26; // x4
  BattleSetupInfo_o *v27; // x5
  FollowerInfo_o *v28; // x6
  PartyListViewItem_o *v29; // x7
  int64_t v30; // x1
  struct System_Object_array *items; // x8
  _QWORD *v32; // x9
  __int64 size; // x10
  Il2CppClass **v34; // x0
  System_Comparison_T__o *v35; // x20
  Il2CppObject *v36; // x21
  struct ServantSellConfirmListViewManager___c_StaticFields *static_fields; // x0
  int64_t v38; // x2
  int32_t v39; // w3
  System_String_o *v40; // x4
  BattleSetupInfo_o *v41; // x5
  FollowerInfo_o *v42; // x6
  PartyListViewItem_o *v43; // x7
  System_Collections_Generic_List_Enumerator_T__o v45; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v46; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_4B62F7A & 1) == 0 )
  {
    sub_1BE4ACC(&System_Comparison_UserCommandCodeEntity__TypeInfo, commandCodeIds);
    sub_1BE4ACC(&Method_DataManager_GetMasterData_UserCommandCodeMaster___, v4);
    sub_1BE4ACC(&Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__GetEntity__, v5);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_Enumerator_long__Dispose__, v6);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_Enumerator_long__MoveNext__, v7);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_Enumerator_long__get_Current__, v8);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_UserCommandCodeEntity__Add__, v9);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_long__GetEnumerator__, v10);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_UserCommandCodeEntity__Sort__, v11);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_UserCommandCodeEntity___ctor__, v12);
    sub_1BE4ACC(&System_Collections_Generic_List_UserCommandCodeEntity__TypeInfo, v13);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v14);
    sub_1BE4ACC(&Method_ServantSellConfirmListViewManager___c__GetSortEntList_b__19_0__, v15);
    sub_1BE4ACC(&ServantSellConfirmListViewManager___c_TypeInfo, v16);
    byte_4B62F7A = 1;
  }
  memset(&v46, 0, sizeof(v46));
  v17 = (System_Collections_Generic_List_object__o *)sub_1BE4D18(System_Collections_Generic_List_UserCommandCodeEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v17,
    (const MethodInfo_35EB9F0 *)Method_System_Collections_Generic_List_UserCommandCodeEntity___ctor__);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_24;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_UserCommandCodeMaster___);
  if ( !commandCodeIds )
    goto LABEL_24;
  v20 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  System_Collections_Generic_List_long___GetEnumerator(
    &v45,
    commandCodeIds,
    (const MethodInfo_35D4D2C *)Method_System_Collections_Generic_List_long__GetEnumerator__);
  v46 = v45;
  while ( 1 )
  {
    v21 = System_Collections_Generic_List_Enumerator_long___MoveNext(
            &v46,
            (const MethodInfo_335EEEC *)Method_System_Collections_Generic_List_Enumerator_long__MoveNext__);
    if ( !v21 )
      break;
    if ( !v20 )
      sub_1BE4D28(v21, v22);
    Entity = DataMasterBase_object__object__long___GetEntity(
               v20,
               (int64_t)v46.fields._current,
               (const MethodInfo_31FD970 *)Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__GetEntity__);
    v30 = (int64_t)Entity;
    if ( !v17 )
      sub_1BE4D28(Entity, Entity);
    items = v17->fields._items;
    v32 = Method_System_Collections_Generic_List_UserCommandCodeEntity__Add__;
    ++v17->fields._version;
    if ( !items )
      sub_1BE4D28(Entity, Entity);
    size = v17->fields._size;
    if ( (unsigned int)size >= items->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v17,
        Entity,
        *(const MethodInfo_35EC224 **)(*(_QWORD *)(v32[4] + 192LL) + 112LL));
    }
    else
    {
      v34 = &items->obj.klass + size;
      v17->fields._size = size + 1;
      v34[4] = (Il2CppClass *)v30;
      sub_1BE4A70((PartyOrganizationUtility_o *)(v34 + 4), v30, v24, v25, v26, v27, v28, v29);
    }
  }
  System_Collections_Generic_List_Enumerator_long___Dispose(
    &v46,
    (const MethodInfo_335EEE8 *)Method_System_Collections_Generic_List_Enumerator_long__Dispose__);
  Instance = ServantSellConfirmListViewManager___c_TypeInfo;
  if ( !ServantSellConfirmListViewManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantSellConfirmListViewManager___c_TypeInfo);
    Instance = ServantSellConfirmListViewManager___c_TypeInfo;
  }
  v35 = *(System_Comparison_T__o **)(*((_QWORD *)Instance + 23) + 16LL);
  if ( !v35 )
  {
    if ( !*((_DWORD *)Instance + 56) )
    {
      j_il2cpp_runtime_class_init_0(Instance);
      Instance = ServantSellConfirmListViewManager___c_TypeInfo;
    }
    v36 = (Il2CppObject *)**((_QWORD **)Instance + 23);
    v35 = (System_Comparison_T__o *)sub_1BE4D18(System_Comparison_UserCommandCodeEntity__TypeInfo);
    System_Comparison_object____ctor(
      v35,
      v36,
      Method_ServantSellConfirmListViewManager___c__GetSortEntList_b__19_0__,
      0LL);
    static_fields = ServantSellConfirmListViewManager___c_TypeInfo->static_fields;
    static_fields->__9__19_0 = (struct System_Comparison_UserCommandCodeEntity__o *)v35;
    sub_1BE4A70((PartyOrganizationUtility_o *)&static_fields->__9__19_0, (int64_t)v35, v38, v39, v40, v41, v42, v43);
  }
  if ( !v17 )
LABEL_24:
    sub_1BE4D28(Instance, v19);
  System_Collections_Generic_List_object___Sort_56548584(
    v17,
    v35,
    (const MethodInfo_35EDCE8 *)Method_System_Collections_Generic_List_UserCommandCodeEntity__Sort__);
  return (System_Collections_Generic_List_UserCommandCodeEntity__o *)v17;
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
  System_Collections_Generic_List_object__o *v17; // x19
  void *Instance; // x0
  __int64 v19; // x1
  DataMasterBase_TMaster__TEntity__PKType__o *v20; // x21
  _BOOL8 v21; // x0
  __int64 v22; // x1
  Il2CppObject *Entity; // x0
  int64_t v24; // x2
  int32_t v25; // w3
  System_String_o *v26; // x4
  BattleSetupInfo_o *v27; // x5
  FollowerInfo_o *v28; // x6
  PartyListViewItem_o *v29; // x7
  int64_t v30; // x1
  struct System_Object_array *items; // x8
  _QWORD *v32; // x9
  __int64 size; // x10
  Il2CppClass **v34; // x0
  System_Comparison_T__o *v35; // x20
  Il2CppObject *v36; // x21
  struct ServantSellConfirmListViewManager___c_StaticFields *static_fields; // x0
  int64_t v38; // x2
  int32_t v39; // w3
  System_String_o *v40; // x4
  BattleSetupInfo_o *v41; // x5
  FollowerInfo_o *v42; // x6
  PartyListViewItem_o *v43; // x7
  System_Collections_Generic_List_Enumerator_T__o v45; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v46; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_4B62F77 & 1) == 0 )
  {
    sub_1BE4ACC(&System_Comparison_UserServantEntity__TypeInfo, servantIds);
    sub_1BE4ACC(&Method_DataManager_GetMasterData_UserServantMaster___, v4);
    sub_1BE4ACC(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v5);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_Enumerator_long__Dispose__, v6);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_Enumerator_long__MoveNext__, v7);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_Enumerator_long__get_Current__, v8);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_UserServantEntity__Add__, v9);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_long__GetEnumerator__, v10);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_UserServantEntity__Sort__, v11);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_UserServantEntity___ctor__, v12);
    sub_1BE4ACC(&System_Collections_Generic_List_UserServantEntity__TypeInfo, v13);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v14);
    sub_1BE4ACC(&Method_ServantSellConfirmListViewManager___c__GetSvtSortEntList_b__16_0__, v15);
    sub_1BE4ACC(&ServantSellConfirmListViewManager___c_TypeInfo, v16);
    byte_4B62F77 = 1;
  }
  memset(&v46, 0, sizeof(v46));
  v17 = (System_Collections_Generic_List_object__o *)sub_1BE4D18(System_Collections_Generic_List_UserServantEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v17,
    (const MethodInfo_35EB9F0 *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_24;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !servantIds )
    goto LABEL_24;
  v20 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  System_Collections_Generic_List_long___GetEnumerator(
    &v45,
    servantIds,
    (const MethodInfo_35D4D2C *)Method_System_Collections_Generic_List_long__GetEnumerator__);
  v46 = v45;
  while ( 1 )
  {
    v21 = System_Collections_Generic_List_Enumerator_long___MoveNext(
            &v46,
            (const MethodInfo_335EEEC *)Method_System_Collections_Generic_List_Enumerator_long__MoveNext__);
    if ( !v21 )
      break;
    if ( !v20 )
      sub_1BE4D28(v21, v22);
    Entity = DataMasterBase_object__object__long___GetEntity(
               v20,
               (int64_t)v46.fields._current,
               (const MethodInfo_31FD970 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    v30 = (int64_t)Entity;
    if ( !v17 )
      sub_1BE4D28(Entity, Entity);
    items = v17->fields._items;
    v32 = Method_System_Collections_Generic_List_UserServantEntity__Add__;
    ++v17->fields._version;
    if ( !items )
      sub_1BE4D28(Entity, Entity);
    size = v17->fields._size;
    if ( (unsigned int)size >= items->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v17,
        Entity,
        *(const MethodInfo_35EC224 **)(*(_QWORD *)(v32[4] + 192LL) + 112LL));
    }
    else
    {
      v34 = &items->obj.klass + size;
      v17->fields._size = size + 1;
      v34[4] = (Il2CppClass *)v30;
      sub_1BE4A70((PartyOrganizationUtility_o *)(v34 + 4), v30, v24, v25, v26, v27, v28, v29);
    }
  }
  System_Collections_Generic_List_Enumerator_long___Dispose(
    &v46,
    (const MethodInfo_335EEE8 *)Method_System_Collections_Generic_List_Enumerator_long__Dispose__);
  Instance = ServantSellConfirmListViewManager___c_TypeInfo;
  if ( !ServantSellConfirmListViewManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantSellConfirmListViewManager___c_TypeInfo);
    Instance = ServantSellConfirmListViewManager___c_TypeInfo;
  }
  v35 = *(System_Comparison_T__o **)(*((_QWORD *)Instance + 23) + 8LL);
  if ( !v35 )
  {
    if ( !*((_DWORD *)Instance + 56) )
    {
      j_il2cpp_runtime_class_init_0(Instance);
      Instance = ServantSellConfirmListViewManager___c_TypeInfo;
    }
    v36 = (Il2CppObject *)**((_QWORD **)Instance + 23);
    v35 = (System_Comparison_T__o *)sub_1BE4D18(System_Comparison_UserServantEntity__TypeInfo);
    System_Comparison_object____ctor(
      v35,
      v36,
      Method_ServantSellConfirmListViewManager___c__GetSvtSortEntList_b__16_0__,
      0LL);
    static_fields = ServantSellConfirmListViewManager___c_TypeInfo->static_fields;
    static_fields->__9__16_0 = (struct System_Comparison_UserServantEntity__o *)v35;
    sub_1BE4A70((PartyOrganizationUtility_o *)&static_fields->__9__16_0, (int64_t)v35, v38, v39, v40, v41, v42, v43);
  }
  if ( !v17 )
LABEL_24:
    sub_1BE4D28(Instance, v19);
  System_Collections_Generic_List_object___Sort_56548584(
    v17,
    v35,
    (const MethodInfo_35EDCE8 *)Method_System_Collections_Generic_List_UserServantEntity__Sort__);
  return (System_Collections_Generic_List_UserServantEntity__o *)v17;
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
  int32_t v17; // w20
  __int64 v18; // x21
  __int64 methodPtr_low; // x10
  Il2CppObject v20; // q0
  __int64 v21; // x22
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7
  Il2CppObject *v28; // x1
  UnityEngine_Object_o *v29; // x22
  System_Collections_Generic_List_object__o *itemList; // x8
  __int64 v31; // x20
  int32_t v32; // w21
  __int64 v33; // x22
  __int64 v34; // x10
  Il2CppObject v35; // q0
  __int64 v36; // x23
  const MethodInfo *v37; // x1
  int64_t v38; // x2
  int32_t v39; // w3
  System_String_o *v40; // x4
  BattleSetupInfo_o *v41; // x5
  FollowerInfo_o *v42; // x6
  PartyListViewItem_o *v43; // x7
  Il2CppObject *v44; // x1
  __int64 v45; // x8
  UnityEngine_Object_o *v46; // x23
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v47; // [xsp+0h] [xbp-D0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v48; // [xsp+20h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v49; // [xsp+40h] [xbp-90h]
  Il2CppObject *v50; // [xsp+68h] [xbp-68h] BYREF
  Il2CppObject *entity; // [xsp+78h] [xbp-58h] BYREF

  if ( (byte_4B62F7B & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataManager_GetMasterData_UserCommandCodeMaster___, selectedId);
    sub_1BE4ACC(&Method_DataManager_GetMasterData_UserServantMaster___, v5);
    sub_1BE4ACC(&Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__TryGetEntity__, v6);
    sub_1BE4ACC(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__, v7);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v8);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v9);
    sub_1BE4ACC(&UnityEngine_Object_TypeInfo, v10);
    sub_1BE4ACC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v11);
    sub_1BE4ACC(&ServantSellConfirmListViewItem_TypeInfo, v12);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v13);
    byte_4B62F7B = 1;
  }
  entity = 0LL;
  v50 = 0LL;
  if ( !this->fields.itemList )
    return;
  kind = this->fields.kind;
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_46;
  if ( kind == 2 )
  {
    Instance = (__int64)DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_UserCommandCodeMaster___);
    if ( Instance )
    {
      if ( !DataMasterBase_object__object__long___TryGetEntity(
              (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
              &entity,
              selectedId,
              (const MethodInfo_31FD9C4 *)Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__TryGetEntity__) )
        return;
      Instance = (__int64)this->fields.itemList;
      if ( Instance )
      {
        v17 = 0;
        while ( v17 < *(_DWORD *)(Instance + 24) )
        {
          Instance = (__int64)System_Collections_Generic_List_object___get_Item(
                                (System_Collections_Generic_List_object__o *)Instance,
                                v17,
                                (const MethodInfo_35EBF54 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
          if ( Instance )
          {
            v18 = Instance;
            methodPtr_low = LOBYTE(ServantSellConfirmListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
            if ( *(unsigned __int8 *)(*(_QWORD *)Instance + 304LL) >= (unsigned int)methodPtr_low
              && *(ServantSellConfirmListViewItem_c **)(*(_QWORD *)(*(_QWORD *)Instance + 200LL) + 8 * methodPtr_low - 8) == ServantSellConfirmListViewItem_TypeInfo )
            {
              Instance = ServantSellConfirmListViewItem__get_UserCommandCodeId(
                           (ServantSellConfirmListViewItem_o *)Instance,
                           v16);
              if ( entity )
              {
                v20 = entity[2];
                v21 = Instance;
                *(Il2CppObject *)&v49.fields.currentCryptoKey = entity[1];
                *(Il2CppObject *)&v49.fields.fakeValue = v20;
                if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
                v48 = v49;
                if ( v21 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47302584(&v48, 0LL) )
                {
                  v28 = entity;
                  *(_QWORD *)(v18 + 144) = entity;
                  sub_1BE4A70((PartyOrganizationUtility_o *)(v18 + 144), (int64_t)v28, v22, v23, v24, v25, v26, v27);
                }
                *(_BYTE *)(v18 + 188) = 0;
                *(_DWORD *)(v18 + 216) = -1;
                v29 = *(UnityEngine_Object_o **)(v18 + 104);
                if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                if ( UnityEngine_Object__op_Inequality(v29, 0LL, 0LL) )
                {
                  Instance = *(_QWORD *)(v18 + 104);
                  if ( !Instance )
                    goto LABEL_46;
                  (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)Instance + 392LL))(
                    Instance,
                    v18,
                    *(_QWORD *)(*(_QWORD *)Instance + 400LL));
                }
                Instance = (__int64)this->fields.itemList;
                ++v17;
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
    sub_1BE4D28(Instance, v16);
  }
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !Instance )
    goto LABEL_46;
  if ( !DataMasterBase_object__object__long___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
          &v50,
          selectedId,
          (const MethodInfo_31FD9C4 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__) )
    return;
  Instance = (__int64)UserGameMaster__getSelfUserGame(0LL);
  itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
  if ( !itemList )
    goto LABEL_46;
  v31 = Instance;
  v32 = 0;
  while ( v32 < itemList->fields._size )
  {
    Instance = (__int64)System_Collections_Generic_List_object___get_Item(
                          itemList,
                          v32,
                          (const MethodInfo_35EBF54 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    if ( Instance )
    {
      v33 = Instance;
      v34 = LOBYTE(ServantSellConfirmListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
      if ( *(unsigned __int8 *)(*(_QWORD *)Instance + 304LL) >= (unsigned int)v34
        && *(ServantSellConfirmListViewItem_c **)(*(_QWORD *)(*(_QWORD *)Instance + 200LL) + 8 * v34 - 8) == ServantSellConfirmListViewItem_TypeInfo )
      {
        Instance = ServantSellConfirmListViewItem__get_UserSvtId((ServantSellConfirmListViewItem_o *)Instance, v16);
        if ( v50 )
        {
          v35 = v50[2];
          v36 = Instance;
          *(Il2CppObject *)&v49.fields.currentCryptoKey = v50[1];
          *(Il2CppObject *)&v49.fields.fakeValue = v35;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v47 = v49;
          if ( v36 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47302584(&v47, 0LL) )
          {
            v44 = v50;
            *(_QWORD *)(v33 + 112) = v50;
            sub_1BE4A70((PartyOrganizationUtility_o *)(v33 + 112), (int64_t)v44, v38, v39, v40, v41, v42, v43);
          }
          Instance = ServantSellConfirmListViewItem__get_UserSvtId((ServantSellConfirmListViewItem_o *)v33, v37);
          if ( v31 )
          {
            v45 = *(_QWORD *)(v31 + 112);
            *(_DWORD *)(v33 + 216) = -1;
            v46 = *(UnityEngine_Object_o **)(v33 + 104);
            *(_BYTE *)(v33 + 188) = Instance == v45;
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            Instance = UnityEngine_Object__op_Inequality(v46, 0LL, 0LL);
            if ( (Instance & 1) != 0 )
            {
              Instance = *(_QWORD *)(v33 + 104);
              if ( !Instance )
                goto LABEL_46;
              Instance = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)Instance + 392LL))(
                           Instance,
                           v33,
                           *(_QWORD *)(*(_QWORD *)Instance + 400LL));
            }
            itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
            ++v32;
            if ( itemList )
              continue;
          }
        }
      }
    }
    goto LABEL_46;
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

  if ( (byte_4B62F7E & 1) == 0 )
  {
    sub_1BE4ACC(&UnityEngine_Object_TypeInfo, method);
    byte_4B62F7E = 1;
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
  System_Collections_Generic_List_object__o *v12; // x21
  int32_t v13; // w22
  Il2CppObject *Item; // x23
  System_Action_o *v15; // x24
  const MethodInfo *v16; // x3

  if ( (byte_4B62F7D & 1) == 0 )
  {
    sub_1BE4ACC(&System_Action_TypeInfo, *(_QWORD *)&mode);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_ServantSellConfirmListViewObject__get_Count__, v5);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_ServantSellConfirmListViewObject__get_Item__, v6);
    sub_1BE4ACC(&Method_ServantSellConfirmListViewManager_OnMoveEnd__, v7);
    sub_1BE4ACC(&StringLiteral_10092/*"OnMoveEnd"*/, v8);
    byte_4B62F7D = 1;
  }
  ObjectList = ServantSellConfirmListViewManager__get_ObjectList(this, *(const MethodInfo **)&mode);
  if ( !ObjectList )
    goto LABEL_10;
  size = ObjectList->fields._size;
  v12 = (System_Collections_Generic_List_object__o *)ObjectList;
  if ( size >= 1 )
  {
    v13 = 0;
    this->fields.callbackCount = size;
    while ( 1 )
    {
      Item = System_Collections_Generic_List_object___get_Item(
               v12,
               v13,
               (const MethodInfo_35EBF54 *)Method_System_Collections_Generic_List_ServantSellConfirmListViewObject__get_Item__);
      v15 = (System_Action_o *)sub_1BE4D18(System_Action_TypeInfo);
      System_Action___ctor(v15, (Il2CppObject *)this, Method_ServantSellConfirmListViewManager_OnMoveEnd__, 0LL);
      if ( !Item )
        break;
      ServantSellConfirmListViewObject__Init((ServantSellConfirmListViewObject_o *)Item, mode, v15, v16);
      if ( ++v13 >= v12->fields._size )
        return;
    }
LABEL_10:
    sub_1BE4D28(ObjectList, v10);
  }
  this->fields.callbackCount = 1;
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_10092/*"OnMoveEnd"*/,
    0.0,
    0LL);
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
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  const MethodInfo *v10; // x2

  this->fields.onSelectItem = onSelectItem;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&this->fields.onSelectItem,
    (int64_t)onSelectItem,
    (int64_t)onSelectItem,
    (int32_t)method,
    v4,
    v5,
    v6,
    v7);
  ServantSellConfirmListViewManager__SetMode_33518408(this, mode, v10);
}


void __fastcall ServantSellConfirmListViewManager__SetMode_33518408(
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


void __fastcall ServantSellConfirmListViewManager__SetObjectItem(
        ServantSellConfirmListViewManager_o *this,
        ListViewObject_o *obj,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  ServantSellConfirmListViewManager_o *v5; // x20
  __int64 methodPtr_low; // x10
  int32_t v7; // w1

  v5 = this;
  if ( (byte_4B62F7C & 1) == 0 )
  {
    this = (ServantSellConfirmListViewManager_o *)sub_1BE4ACC(&ServantSellConfirmListViewObject_TypeInfo, obj);
    byte_4B62F7C = 1;
  }
  if ( !obj
    || (methodPtr_low = LOBYTE(ServantSellConfirmListViewObject_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(obj->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low)
    || (ServantSellConfirmListViewObject_c *)obj->klass->_2.typeHierarchy[methodPtr_low - 1] != ServantSellConfirmListViewObject_TypeInfo )
  {
    sub_1BE4D28(this, obj);
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
  System_Collections_Generic_List_object__o *v9; // x20
  const MethodInfo *v10; // x1
  System_Collections_Generic_List_object__o *objectList; // x0
  int32_t v12; // w21
  Il2CppObject *Item; // x22
  Il2CppObject *v14; // x22
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7
  struct System_Object_array *items; // x8
  _QWORD *v22; // x9
  __int64 size; // x10
  Il2CppClass **v24; // x0

  if ( (byte_4B62F74 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_UnityEngine_GameObject_GetComponent_ServantSellConfirmListViewObject___, method);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_ServantSellConfirmListViewObject__Add__, v3);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_ServantSellConfirmListViewObject___ctor__, v4);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_GameObject__get_Count__, v5);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_GameObject__get_Item__, v6);
    sub_1BE4ACC(&System_Collections_Generic_List_ServantSellConfirmListViewObject__TypeInfo, v7);
    sub_1BE4ACC(&UnityEngine_Object_TypeInfo, v8);
    byte_4B62F74 = 1;
  }
  v9 = (System_Collections_Generic_List_object__o *)sub_1BE4D18(System_Collections_Generic_List_ServantSellConfirmListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v9,
    (const MethodInfo_35EB9F0 *)Method_System_Collections_Generic_List_ServantSellConfirmListViewObject___ctor__);
  objectList = (System_Collections_Generic_List_object__o *)this->fields.objectList;
  if ( !objectList )
LABEL_21:
    sub_1BE4D28(objectList, v10);
  v12 = 0;
  while ( v12 < objectList->fields._size )
  {
    Item = System_Collections_Generic_List_object___get_Item(
             objectList,
             v12,
             (const MethodInfo_35EBF54 *)Method_System_Collections_Generic_List_GameObject__get_Item__);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Item, 0LL, 0LL) )
    {
      objectList = (System_Collections_Generic_List_object__o *)this->fields.objectList;
      if ( !objectList )
        goto LABEL_21;
      objectList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                  objectList,
                                                                  v12,
                                                                  (const MethodInfo_35EBF54 *)Method_System_Collections_Generic_List_GameObject__get_Item__);
      if ( !objectList )
        goto LABEL_21;
      objectList = (System_Collections_Generic_List_object__o *)UnityEngine_GameObject__GetComponent_object_(
                                                                  (UnityEngine_GameObject_o *)objectList,
                                                                  (const MethodInfo_2FA979C *)Method_UnityEngine_GameObject_GetComponent_ServantSellConfirmListViewObject___);
      if ( !objectList )
        goto LABEL_21;
      v14 = (Il2CppObject *)objectList;
      objectList = (System_Collections_Generic_List_object__o *)ServantSellConfirmListViewObject__GetItem(
                                                                  (ServantSellConfirmListViewObject_o *)objectList,
                                                                  v10);
      if ( objectList )
      {
        v10 = (const MethodInfo *)objectList;
        if ( !LOBYTE(objectList[2].monitor)
          || (objectList = (System_Collections_Generic_List_object__o *)ListViewManager__ClippingItem_41702652(
                                                                          (ListViewManager_o *)this,
                                                                          (ListViewItem_o *)objectList,
                                                                          0LL),
              ((unsigned __int8)objectList & 1) != 0) )
        {
          if ( !v9 )
            goto LABEL_21;
          items = v9->fields._items;
          v22 = Method_System_Collections_Generic_List_ServantSellConfirmListViewObject__Add__;
          ++v9->fields._version;
          if ( !items )
            goto LABEL_21;
          size = v9->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v9,
              v14,
              *(const MethodInfo_35EC224 **)(*(_QWORD *)(v22[4] + 192LL) + 112LL));
          }
          else
          {
            v24 = &items->obj.klass + size;
            v9->fields._size = size + 1;
            v24[4] = (Il2CppClass *)v14;
            sub_1BE4A70((PartyOrganizationUtility_o *)(v24 + 4), (int64_t)v14, v15, v16, v17, v18, v19, v20);
          }
        }
      }
    }
    objectList = (System_Collections_Generic_List_object__o *)this->fields.objectList;
    ++v12;
    if ( !objectList )
      goto LABEL_21;
  }
  return (System_Collections_Generic_List_ServantSellConfirmListViewObject__o *)v9;
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
  System_Collections_Generic_List_object__o *v9; // x20
  __int64 v10; // x1
  System_Collections_Generic_List_object__o *objectList; // x0
  int32_t v12; // w21
  Il2CppObject *Item; // x22
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7
  struct System_Object_array *items; // x8
  _QWORD *v21; // x9
  __int64 size; // x10
  int64_t v23; // x1
  Il2CppClass **v24; // x0

  if ( (byte_4B62F73 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_UnityEngine_GameObject_GetComponent_ServantSellConfirmListViewObject___, method);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_ServantSellConfirmListViewObject__Add__, v3);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_ServantSellConfirmListViewObject___ctor__, v4);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_GameObject__get_Count__, v5);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_GameObject__get_Item__, v6);
    sub_1BE4ACC(&System_Collections_Generic_List_ServantSellConfirmListViewObject__TypeInfo, v7);
    sub_1BE4ACC(&UnityEngine_Object_TypeInfo, v8);
    byte_4B62F73 = 1;
  }
  v9 = (System_Collections_Generic_List_object__o *)sub_1BE4D18(System_Collections_Generic_List_ServantSellConfirmListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v9,
    (const MethodInfo_35EB9F0 *)Method_System_Collections_Generic_List_ServantSellConfirmListViewObject___ctor__);
  objectList = (System_Collections_Generic_List_object__o *)this->fields.objectList;
  if ( !objectList )
LABEL_17:
    sub_1BE4D28(objectList, v10);
  v12 = 0;
  while ( v12 < objectList->fields._size )
  {
    Item = System_Collections_Generic_List_object___get_Item(
             objectList,
             v12,
             (const MethodInfo_35EBF54 *)Method_System_Collections_Generic_List_GameObject__get_Item__);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Item, 0LL, 0LL) )
    {
      objectList = (System_Collections_Generic_List_object__o *)this->fields.objectList;
      if ( !objectList )
        goto LABEL_17;
      objectList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                  objectList,
                                                                  v12,
                                                                  (const MethodInfo_35EBF54 *)Method_System_Collections_Generic_List_GameObject__get_Item__);
      if ( !objectList )
        goto LABEL_17;
      objectList = (System_Collections_Generic_List_object__o *)UnityEngine_GameObject__GetComponent_object_(
                                                                  (UnityEngine_GameObject_o *)objectList,
                                                                  (const MethodInfo_2FA979C *)Method_UnityEngine_GameObject_GetComponent_ServantSellConfirmListViewObject___);
      if ( !v9 )
        goto LABEL_17;
      items = v9->fields._items;
      v21 = Method_System_Collections_Generic_List_ServantSellConfirmListViewObject__Add__;
      ++v9->fields._version;
      if ( !items )
        goto LABEL_17;
      size = v9->fields._size;
      v23 = (int64_t)objectList;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v9,
          (Il2CppObject *)objectList,
          *(const MethodInfo_35EC224 **)(*(_QWORD *)(v21[4] + 192LL) + 112LL));
      }
      else
      {
        v24 = &items->obj.klass + size;
        v9->fields._size = size + 1;
        v24[4] = (Il2CppClass *)v23;
        sub_1BE4A70((PartyOrganizationUtility_o *)(v24 + 4), v23, v14, v15, v16, v17, v18, v19);
      }
    }
    objectList = (System_Collections_Generic_List_object__o *)this->fields.objectList;
    ++v12;
    if ( !objectList )
      goto LABEL_17;
  }
  return (System_Collections_Generic_List_ServantSellConfirmListViewObject__o *)v9;
}


void __fastcall ServantSellConfirmListViewManager___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int64_t v3; // x2
  int32_t v4; // w3
  System_String_o *v5; // x4
  BattleSetupInfo_o *v6; // x5
  FollowerInfo_o *v7; // x6
  PartyListViewItem_o *v8; // x7

  if ( (byte_4B62F81 & 1) == 0 )
  {
    sub_1BE4ACC(&ServantSellConfirmListViewManager___c_TypeInfo, v1);
    byte_4B62F81 = 1;
  }
  v2 = (Il2CppObject *)sub_1BE4D18(ServantSellConfirmListViewManager___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  ServantSellConfirmListViewManager___c_TypeInfo->static_fields->__9 = (struct ServantSellConfirmListViewManager___c_o *)v2;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)ServantSellConfirmListViewManager___c_TypeInfo->static_fields,
    (int64_t)v2,
    v3,
    v4,
    v5,
    v6,
    v7,
    v8);
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

  if ( (byte_4B62F82 & 1) == 0 )
  {
    this = (ServantSellConfirmListViewManager___c_o *)sub_1BE4ACC(
                                                        &CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo,
                                                        a);
    byte_4B62F82 = 1;
  }
  if ( !a || (this = (ServantSellConfirmListViewManager___c_o *)UserCommandCodeEntity__GetRarity(a, 0LL), !b) )
    sub_1BE4D28(this, a);
  if ( (int)this < UserCommandCodeEntity__GetRarity(b, 0LL) )
    return 1;
  Rarity = UserCommandCodeEntity__GetRarity(a, 0LL);
  if ( Rarity > UserCommandCodeEntity__GetRarity(b, 0LL) )
    return -1;
  v9 = *(_QWORD *)&a->fields.commandCodeId.fields.currentCryptoKey;
  v8 = *(_QWORD *)&a->fields.commandCodeId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v16.fields.currentCryptoKey = v9;
  *(_QWORD *)&v16.fields.fakeValue = v8;
  v10 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47299060(v16, 0LL);
  if ( v10 < CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47299060(b->fields.commandCodeId, 0LL) )
    return 1;
  v12 = *(_QWORD *)&a->fields.commandCodeId.fields.currentCryptoKey;
  v11 = *(_QWORD *)&a->fields.commandCodeId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v17.fields.currentCryptoKey = v12;
  *(_QWORD *)&v17.fields.fakeValue = v11;
  v13 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47299060(v17, 0LL);
  v14 = *(_QWORD *)&b->fields.commandCodeId.fields.currentCryptoKey;
  *(_QWORD *)&v18.fields.fakeValue = *(_QWORD *)&b->fields.commandCodeId.fields.fakeValue;
  v15 = v13;
  *(_QWORD *)&v18.fields.currentCryptoKey = v14;
  if ( v15 <= CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47299060(v18, 0LL) )
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
    sub_1BE4D28(this, a);
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