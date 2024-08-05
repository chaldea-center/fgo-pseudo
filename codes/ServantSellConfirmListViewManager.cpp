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
  struct System_Action_ServantSellConfirmListViewItem__o *onSelectItem; // x20
  ServantStatusBattleListViewItem_o *p_onSelectItem; // x0

  onSelectItem = this->fields.onSelectItem;
  if ( onSelectItem )
  {
    p_onSelectItem = (ServantStatusBattleListViewItem_o *)&this->fields.onSelectItem;
    p_onSelectItem->klass = 0LL;
    sub_1B64814(p_onSelectItem, 0, (int32_t)method, v3);
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
  int32_t v26; // w2
  int32_t v27; // w3
  struct System_Object_array *items; // x8
  _QWORD *v29; // x9
  __int64 size; // x10
  Il2CppClass **v31; // x0

  if ( (byte_49FAAD2 & 1) == 0 )
  {
    sub_1B64870(&Method_DataManager_GetMasterData_UserCommandCodeMaster___, commandCodeIds);
    sub_1B64870(&Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__GetEntity__, v9);
    sub_1B64870(&Method_System_Collections_Generic_List_ListViewItem__Add__, v10);
    sub_1B64870(&ServantSellConfirmListViewItem_TypeInfo, v11);
    sub_1B64870(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12);
    byte_49FAAD2 = 1;
  }
  if ( commandCodeIds && *(_QWORD *)&commandCodeIds->max_length && !isExceeded && !isSellLastServant )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE318 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_20;
    MasterData_object = DataManager__GetMasterData_object_(
                          Instance,
                          (const MethodInfo_2E3B6C8 *)Method_DataManager_GetMasterData_UserCommandCodeMaster___);
    v17 = *(_QWORD *)&commandCodeIds->max_length;
    if ( (int)v17 >= 1 )
    {
      v18 = (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object;
      v19 = 0LL;
      while ( 1 )
      {
        if ( v19 >= (unsigned int)v17 )
          sub_1B64AD4(MasterData_object, v14);
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
                   (const MethodInfo_30D632C *)Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__GetEntity__);
        v24 = (ServantSellConfirmListViewItem_o *)sub_1B64ABC(ServantSellConfirmListViewItem_TypeInfo);
        ServantSellConfirmListViewItem___ctor_32513696(v24, v22, (UserCommandCodeEntity_o *)Entity, 0, v25);
        if ( !itemList )
          break;
        items = itemList->fields._items;
        v29 = Method_System_Collections_Generic_List_ListViewItem__Add__;
        ++itemList->fields._version;
        if ( !items )
          break;
        size = itemList->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            itemList,
            (Il2CppObject *)v24,
            *(const MethodInfo_34AF9B0 **)(*(_QWORD *)(v29[4] + 192LL) + 112LL));
        }
        else
        {
          v31 = &items->obj.klass + size;
          itemList->fields._size = size + 1;
          v31[4] = (Il2CppClass *)v24;
          sub_1B64814((ServantStatusBattleListViewItem_o *)(v31 + 4), (int32_t)v24, v26, v27);
        }
        LODWORD(v17) = commandCodeIds->max_length;
        if ( (__int64)++v19 >= (int)v17 )
          return;
      }
LABEL_20:
      sub_1B64ACC(Instance, v14);
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
  int32_t v28; // w2
  int32_t v29; // w3
  struct System_Object_array *items; // x8
  _QWORD *v31; // x9
  __int64 size; // x10
  Il2CppClass **v33; // x0
  System_Collections_Generic_List_Enumerator_object__o v34; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v35; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_49FAAD3 & 1) == 0 )
  {
    sub_1B64870(&Method_System_Collections_Generic_List_Enumerator_UserCommandCodeEntity__Dispose__, commandCodeIds);
    sub_1B64870(&Method_System_Collections_Generic_List_Enumerator_UserCommandCodeEntity__MoveNext__, v9);
    sub_1B64870(&Method_System_Collections_Generic_List_Enumerator_UserCommandCodeEntity__get_Current__, v10);
    sub_1B64870(&Method_System_Collections_Generic_List_ListViewItem__Add__, v11);
    sub_1B64870(&Method_System_Collections_Generic_List_UserCommandCodeEntity__GetEnumerator__, v12);
    sub_1B64870(&Method_System_Collections_Generic_List_UserCommandCodeEntity__IndexOf__, v13);
    sub_1B64870(&Method_System_Collections_Generic_List_long__get_Count__, v14);
    sub_1B64870(&ServantSellConfirmListViewItem_TypeInfo, v15);
    byte_49FAAD3 = 1;
  }
  memset(&v35, 0, sizeof(v35));
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
  if ( commandCodeIds && commandCodeIds->fields._size >= 1 && !isExceeded && !isSellLastServant )
  {
    SortEntList = (System_Collections_Generic_List_object__o *)ServantSellConfirmListViewManager__GetSortEntList(
                                                                 v16,
                                                                 commandCodeIds,
                                                                 v17);
    if ( !SortEntList )
      sub_1B64ACC(0LL, v19);
    v20 = SortEntList;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v34,
      SortEntList,
      (const MethodInfo_34B0548 *)Method_System_Collections_Generic_List_UserCommandCodeEntity__GetEnumerator__);
    v35 = v34;
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v35,
              (const MethodInfo_322C38C *)Method_System_Collections_Generic_List_Enumerator_UserCommandCodeEntity__MoveNext__) )
    {
      current = v35.fields._current;
      itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
      v23 = System_Collections_Generic_List_object___IndexOf(
              v20,
              v35.fields._current,
              (const MethodInfo_34B06F0 *)Method_System_Collections_Generic_List_UserCommandCodeEntity__IndexOf__);
      v24 = (ServantSellConfirmListViewItem_o *)sub_1B64ABC(ServantSellConfirmListViewItem_TypeInfo);
      ServantSellConfirmListViewItem___ctor_32513696(v24, v23, (UserCommandCodeEntity_o *)current, 0, v25);
      if ( !itemList )
        sub_1B64ACC(v26, v27);
      items = itemList->fields._items;
      v31 = Method_System_Collections_Generic_List_ListViewItem__Add__;
      ++itemList->fields._version;
      if ( !items )
        sub_1B64ACC(v26, v27);
      size = itemList->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          itemList,
          (Il2CppObject *)v24,
          *(const MethodInfo_34AF9B0 **)(*(_QWORD *)(v31[4] + 192LL) + 112LL));
      }
      else
      {
        v33 = &items->obj.klass + size;
        itemList->fields._size = size + 1;
        v33[4] = (Il2CppClass *)v24;
        sub_1B64814((ServantStatusBattleListViewItem_o *)(v33 + 4), (int32_t)v24, v28, v29);
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v35,
      (const MethodInfo_322C388 *)Method_System_Collections_Generic_List_Enumerator_UserCommandCodeEntity__Dispose__);
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
  _BOOL4 v5; // w20
  System_Int64_array *v6; // x21
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  int64_t Instance; // x0
  const MethodInfo *v17; // x1
  Il2CppObject *MasterData_object; // x29
  UserGameEntity_o *SelfUserGame; // x24
  Il2CppObject *v20; // x25
  ServantOperationManager_o *SelectedEquipeCmdCardServantList; // x0
  const MethodInfo *v22; // x2
  __int64 v23; // x8
  unsigned __int64 v24; // x25
  int64_t v25; // x26
  const MethodInfo *v26; // x2
  int64_t v27; // x27
  __int64 v28; // x19
  __int64 v29; // x28
  System_Collections_Generic_List_object__o *itemList; // x28
  _BOOL4 v31; // w21
  System_Int64_array *v32; // x20
  System_Int64_array *v33; // x22
  UserGameEntity_o *v34; // x23
  int64_t favoriteUserSvtId; // x24
  int32_t v36; // w19
  ServantSellConfirmListViewItem_o *v37; // x29
  const MethodInfo *v38; // x6
  int32_t v39; // w2
  int32_t v40; // w3
  struct System_Object_array *items; // x8
  _QWORD *v42; // x9
  __int64 size; // x10
  Il2CppClass **v44; // x0
  System_Collections_Generic_List_int__o *v45; // [xsp+0h] [xbp-A0h]
  System_Int64_array *v46; // [xsp+8h] [xbp-98h]
  Il2CppObject *v47; // [xsp+10h] [xbp-90h]
  ServantSellConfirmListViewManager_o *v48; // [xsp+18h] [xbp-88h]
  int64_t *m_Items; // [xsp+28h] [xbp-78h]
  System_Int64_array *equipIdList; // [xsp+30h] [xbp-70h] BYREF
  System_Int64_array *svtIdList; // [xsp+38h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v53; // 0:x0.16

  v5 = isExceeded;
  v6 = servantIds;
  if ( (byte_49FAACF & 1) == 0 )
  {
    sub_1B64870(&Method_DataManager_GetMasterData_UserDeckMaster___, servantIds);
    sub_1B64870(&Method_DataManager_GetMasterData_UserServantMaster___, v8);
    sub_1B64870(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v9);
    sub_1B64870(&Method_System_Collections_Generic_List_ListViewItem__Add__, v10);
    sub_1B64870(&Method_System_Collections_Generic_List_int__Contains__, v11);
    sub_1B64870(&NetworkManager_TypeInfo, v12);
    sub_1B64870(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v13);
    sub_1B64870(&ServantSellConfirmListViewItem_TypeInfo, v14);
    sub_1B64870(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v15);
    byte_49FAACF = 1;
  }
  equipIdList = 0LL;
  svtIdList = 0LL;
  if ( v6 && *(_QWORD *)&v6->max_length )
  {
    Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE318 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_34;
    MasterData_object = DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_2E3B6C8 *)Method_DataManager_GetMasterData_UserServantMaster___);
    SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
    Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE318 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_34;
    v20 = DataManager__GetMasterData_object_(
            (DataManager_o *)Instance,
            (const MethodInfo_2E3B6C8 *)Method_DataManager_GetMasterData_UserDeckMaster___);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Instance = NetworkManager__get_UserId(0LL);
    if ( !v20 )
      goto LABEL_34;
    UserDeckMaster__getPartyList((UserDeckMaster_o *)v20, &svtIdList, &equipIdList, Instance, 0LL);
    Instance = (int64_t)this->fields.parentManager;
    if ( !Instance )
      goto LABEL_34;
    SelectedEquipeCmdCardServantList = (ServantOperationManager_o *)ServantOperationManager__GetSelectedEquipeCmdCardServantList(
                                                                      (ServantOperationManager_o *)Instance,
                                                                      v17);
    Instance = (int64_t)ServantOperationManager__GetEquipedCommandCodeSellLastSvtList(
                          SelectedEquipeCmdCardServantList,
                          (System_Collections_Generic_List_ServantOperationListViewItem__o *)SelectedEquipeCmdCardServantList,
                          v22);
    v23 = *(_QWORD *)&v6->max_length;
    v45 = (System_Collections_Generic_List_int__o *)Instance;
    if ( (int)v23 >= 1 )
    {
      v24 = 0LL;
      m_Items = v6->m_Items;
      v47 = MasterData_object;
      v48 = this;
      v46 = v6;
      while ( 1 )
      {
        if ( v24 >= (unsigned int)v23 )
          sub_1B64AD4(Instance, v17);
        if ( !MasterData_object )
          break;
        v25 = m_Items[v24];
        Instance = (int64_t)DataMasterBase_object__object__long___GetEntity(
                              (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                              v25,
                              (const MethodInfo_30D632C *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
        v27 = Instance;
        if ( !v5 )
          goto LABEL_38;
        if ( !Instance )
          break;
        Instance = UserServantEntity__isExceeded((UserServantEntity_o *)Instance, 0LL);
        if ( (Instance & 1) != 0 )
        {
LABEL_38:
          if ( !isSellLastServant )
            goto LABEL_24;
          if ( !v27 )
            break;
          v29 = *(_QWORD *)(v27 + 80);
          v28 = *(_QWORD *)(v27 + 88);
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v53.fields.currentCryptoKey = v29;
          *(_QWORD *)&v53.fields.fakeValue = v28;
          v17 = (const MethodInfo *)(unsigned int)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46180532(
                                                    v53,
                                                    0LL);
          Instance = (int64_t)v45;
          if ( !v45 )
            break;
          Instance = System_Collections_Generic_List_int___Contains(
                       v45,
                       (int32_t)v17,
                       (const MethodInfo_3492530 *)Method_System_Collections_Generic_List_int__Contains__);
          if ( (Instance & 1) != 0 )
          {
LABEL_24:
            Instance = (int64_t)this->fields.parentManager;
            if ( !Instance )
              break;
            itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
            v31 = v5;
            Instance = ServantOperationManager__GetSelectedOrderByServantId(
                         (ServantOperationManager_o *)Instance,
                         v25,
                         v26);
            if ( !SelfUserGame )
              break;
            v32 = equipIdList;
            v33 = svtIdList;
            v34 = SelfUserGame;
            favoriteUserSvtId = SelfUserGame->fields.favoriteUserSvtId;
            v36 = Instance;
            v37 = (ServantSellConfirmListViewItem_o *)sub_1B64ABC(ServantSellConfirmListViewItem_TypeInfo);
            ServantSellConfirmListViewItem___ctor(
              v37,
              v36,
              (UserServantEntity_o *)v27,
              v33,
              v32,
              v25 == favoriteUserSvtId,
              v38);
            if ( !itemList )
              break;
            items = itemList->fields._items;
            v42 = Method_System_Collections_Generic_List_ListViewItem__Add__;
            ++itemList->fields._version;
            if ( !items )
              break;
            size = itemList->fields._size;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                itemList,
                (Il2CppObject *)v37,
                *(const MethodInfo_34AF9B0 **)(*(_QWORD *)(v42[4] + 192LL) + 112LL));
            }
            else
            {
              v44 = &items->obj.klass + size;
              itemList->fields._size = size + 1;
              v44[4] = (Il2CppClass *)v37;
              sub_1B64814((ServantStatusBattleListViewItem_o *)(v44 + 4), (int32_t)v37, v39, v40);
            }
            v5 = v31;
            v6 = v46;
            MasterData_object = v47;
            this = v48;
            SelfUserGame = v34;
          }
        }
        LODWORD(v23) = v6->max_length;
        if ( (__int64)++v24 >= (int)v23 )
          return;
      }
LABEL_34:
      sub_1B64ACC(Instance, v17);
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
  int32_t v58; // w2
  int32_t v59; // w3
  struct System_Object_array *v60; // x8
  _QWORD *v61; // x9
  __int64 v62; // x10
  Il2CppClass **v63; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v67; // [xsp+10h] [xbp-D0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v68; // [xsp+30h] [xbp-B0h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v69; // [xsp+50h] [xbp-90h] BYREF
  System_Int64_array *equipIdList; // [xsp+70h] [xbp-70h] BYREF
  System_Int64_array *svtIdList; // [xsp+78h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v72; // 0:x0.16

  if ( (byte_49FAAD0 & 1) == 0 )
  {
    sub_1B64870(&Method_DataManager_GetMasterData_UserDeckMaster___, servantIds);
    sub_1B64870(&Method_DataManager_GetMasterData_UserServantMaster___, v6);
    sub_1B64870(&Method_System_Collections_Generic_List_Enumerator_UserServantEntity__Dispose__, v7);
    sub_1B64870(&Method_System_Collections_Generic_List_Enumerator_UserServantEntity__MoveNext__, v8);
    sub_1B64870(&Method_System_Collections_Generic_List_Enumerator_UserServantEntity__get_Current__, v9);
    sub_1B64870(&Method_System_Collections_Generic_List_long__Add__, v10);
    sub_1B64870(&Method_System_Collections_Generic_List_ListViewItem__Add__, v11);
    sub_1B64870(&Method_System_Collections_Generic_List_int__Contains__, v12);
    sub_1B64870(&Method_System_Collections_Generic_List_UserServantEntity__GetEnumerator__, v13);
    sub_1B64870(&Method_System_Collections_Generic_List_UserServantEntity__IndexOf__, v14);
    sub_1B64870(&Method_System_Collections_Generic_List_long___ctor__, v15);
    sub_1B64870(&System_Collections_Generic_List_long__TypeInfo, v16);
    sub_1B64870(&NetworkManager_TypeInfo, v17);
    sub_1B64870(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v18);
    sub_1B64870(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v19);
    sub_1B64870(&ServantSellConfirmListViewItem_TypeInfo, v20);
    sub_1B64870(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v21);
    byte_49FAAD0 = 1;
  }
  equipIdList = 0LL;
  svtIdList = 0LL;
  memset(&v69, 0, sizeof(v69));
  this->fields.kind = 3;
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
  if ( servantIds && *(_QWORD *)&servantIds->max_length )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE318 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_43;
    DataManager__GetMasterData_object_(
      Instance,
      (const MethodInfo_2E3B6C8 *)Method_DataManager_GetMasterData_UserServantMaster___);
    SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE318 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_43;
    MasterData_object = DataManager__GetMasterData_object_(
                          Instance,
                          (const MethodInfo_2E3B6C8 *)Method_DataManager_GetMasterData_UserDeckMaster___);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Instance = (DataManager_o *)NetworkManager__get_UserId(0LL);
    if ( !MasterData_object )
      goto LABEL_43;
    UserDeckMaster__getPartyList(
      (UserDeckMaster_o *)MasterData_object,
      &svtIdList,
      &equipIdList,
      (int64_t)Instance,
      0LL);
    Instance = (DataManager_o *)this->fields.parentManager;
    if ( !Instance )
      goto LABEL_43;
    SelectedEquipeCmdCardServantList = (ServantOperationManager_o *)ServantOperationManager__GetSelectedEquipeCmdCardServantList(
                                                                      (ServantOperationManager_o *)Instance,
                                                                      v23);
    EquipedCommandCodeSellLastSvtList = ServantOperationManager__GetEquipedCommandCodeSellLastSvtList(
                                          SelectedEquipeCmdCardServantList,
                                          (System_Collections_Generic_List_ServantOperationListViewItem__o *)SelectedEquipeCmdCardServantList,
                                          v27);
    v29 = (System_Collections_Generic_List_long__o *)sub_1B64ABC(System_Collections_Generic_List_long__TypeInfo);
    System_Collections_Generic_List_long____ctor(
      v29,
      (const MethodInfo_3496AFC *)Method_System_Collections_Generic_List_long___ctor__);
    v31 = *(_QWORD *)&servantIds->max_length;
    if ( (int)v31 >= 1 )
    {
      v32 = 0LL;
      while ( 1 )
      {
        if ( v32 >= (unsigned int)v31 )
          sub_1B64AD4(Instance, v23);
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
            *(const MethodInfo_3497350 **)(*(_QWORD *)(v34[4] + 192LL) + 112LL));
        }
        else
        {
          v29->fields._size = size + 1;
          items->m_Items[size] = (int64_t)v23;
        }
        LODWORD(v31) = servantIds->max_length;
        if ( (__int64)++v32 >= (int)v31 )
          goto LABEL_20;
      }
LABEL_43:
      sub_1B64ACC(Instance, v23);
    }
LABEL_20:
    Instance = (DataManager_o *)ServantSellConfirmListViewManager__GetSvtSortEntList(
                                  (ServantSellConfirmListViewManager_o *)Instance,
                                  v29,
                                  v30);
    if ( !Instance )
      goto LABEL_43;
    v36 = (System_Collections_Generic_List_object__o *)Instance;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v68,
      (System_Collections_Generic_List_object__o *)Instance,
      (const MethodInfo_34B0548 *)Method_System_Collections_Generic_List_UserServantEntity__GetEnumerator__);
    *(_OWORD *)&v69.fields._list = *(_OWORD *)&v68.fields.currentCryptoKey;
    v69.fields._current = (Il2CppObject *)v68.fields.fakeValue;
    while ( 1 )
    {
      v37 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v69,
              (const MethodInfo_322C38C *)Method_System_Collections_Generic_List_Enumerator_UserServantEntity__MoveNext__);
      if ( !v37 )
        break;
      current = v69.fields._current;
      if ( isExceeded )
      {
        if ( !v69.fields._current )
          sub_1B64ACC(v37, v38);
        v37 = UserServantEntity__isExceeded((UserServantEntity_o *)v69.fields._current, 0LL);
        if ( !v37 )
          continue;
      }
      if ( !isSellLastServant )
        goto LABEL_32;
      if ( !current )
        sub_1B64ACC(v37, v38);
      klass = current[5].klass;
      monitor = current[5].monitor;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v72.fields.currentCryptoKey = klass;
      *(_QWORD *)&v72.fields.fakeValue = monitor;
      v42 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46180532(v72, 0LL);
      if ( !EquipedCommandCodeSellLastSvtList )
        sub_1B64ACC(v42, (unsigned int)v42);
      if ( System_Collections_Generic_List_int___Contains(
             EquipedCommandCodeSellLastSvtList,
             v42,
             (const MethodInfo_3492530 *)Method_System_Collections_Generic_List_int__Contains__) )
      {
LABEL_32:
        itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
        v44 = System_Collections_Generic_List_object___IndexOf(
                v36,
                current,
                (const MethodInfo_34B06F0 *)Method_System_Collections_Generic_List_UserServantEntity__IndexOf__);
        if ( !current )
          sub_1B64ACC(v44, v45);
        v46 = current[2];
        v47 = v44;
        v48 = equipIdList;
        v49 = svtIdList;
        *(Il2CppObject *)&v68.fields.currentCryptoKey = current[1];
        *(Il2CppObject *)&v68.fields.fakeValue = v46;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        v67 = v68;
        v50 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46184056(&v67, 0LL);
        if ( !SelfUserGame )
          sub_1B64ACC(v50, v51);
        favoriteUserSvtId = SelfUserGame->fields.favoriteUserSvtId;
        v53 = v50;
        v54 = (ServantSellConfirmListViewItem_o *)sub_1B64ABC(ServantSellConfirmListViewItem_TypeInfo);
        ServantSellConfirmListViewItem___ctor(
          v54,
          v47,
          (UserServantEntity_o *)current,
          v49,
          v48,
          v53 == favoriteUserSvtId,
          v55);
        if ( !itemList )
          sub_1B64ACC(v56, v57);
        v60 = itemList->fields._items;
        v61 = Method_System_Collections_Generic_List_ListViewItem__Add__;
        ++itemList->fields._version;
        if ( !v60 )
          sub_1B64ACC(v56, v57);
        v62 = itemList->fields._size;
        if ( (unsigned int)v62 >= v60->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            itemList,
            (Il2CppObject *)v54,
            *(const MethodInfo_34AF9B0 **)(*(_QWORD *)(v61[4] + 192LL) + 112LL));
        }
        else
        {
          v63 = &v60->obj.klass + v62;
          itemList->fields._size = v62 + 1;
          v63[4] = (Il2CppClass *)v54;
          sub_1B64814((ServantStatusBattleListViewItem_o *)(v63 + 4), (int32_t)v54, v58, v59);
        }
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v69,
      (const MethodInfo_322C388 *)Method_System_Collections_Generic_List_Enumerator_UserServantEntity__Dispose__);
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

  if ( (byte_49FAAD9 & 1) == 0 )
  {
    sub_1B64870(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, *(_QWORD *)&svtId);
    sub_1B64870(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v5);
    sub_1B64870(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v6);
    sub_1B64870(&ServantSellConfirmListViewItem_TypeInfo, v7);
    byte_49FAAD9 = 1;
  }
  itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
  if ( !itemList )
LABEL_14:
    sub_1B64ACC(itemList, *(_QWORD *)&svtId);
  v9 = 0LL;
  v10 = 0;
  while ( v10 < itemList->fields._size )
  {
    itemList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                              itemList,
                                                              v10,
                                                              (const MethodInfo_34AF6E0 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
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
        v14 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46180532(v16, 0LL);
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

  if ( (byte_49FAADA & 1) == 0 )
  {
    sub_1B64870(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, *(_QWORD *)&commandCodeId);
    sub_1B64870(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v5);
    sub_1B64870(&ServantSellConfirmListViewItem_TypeInfo, v6);
    byte_49FAADA = 1;
  }
  itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
  if ( !itemList )
LABEL_15:
    sub_1B64ACC(itemList, *(_QWORD *)&commandCodeId);
  v8 = 0LL;
  v9 = 0;
  while ( v9 < itemList->fields._size )
  {
    itemList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                              itemList,
                                                              v9,
                                                              (const MethodInfo_34AF6E0 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
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
  int32_t v24; // w2
  int32_t v25; // w3
  Il2CppObject *v26; // x1
  struct System_Object_array *items; // x8
  _QWORD *v28; // x9
  __int64 size; // x10
  Il2CppClass **v30; // x0
  System_Comparison_T__o *v31; // x20
  Il2CppObject *v32; // x21
  struct ServantSellConfirmListViewManager___c_StaticFields *static_fields; // x0
  int32_t v34; // w2
  int32_t v35; // w3
  System_Collections_Generic_List_Enumerator_T__o v37; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v38; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_49FAAD4 & 1) == 0 )
  {
    sub_1B64870(&System_Comparison_UserCommandCodeEntity__TypeInfo, commandCodeIds);
    sub_1B64870(&Method_DataManager_GetMasterData_UserCommandCodeMaster___, v4);
    sub_1B64870(&Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__GetEntity__, v5);
    sub_1B64870(&Method_System_Collections_Generic_List_Enumerator_long__Dispose__, v6);
    sub_1B64870(&Method_System_Collections_Generic_List_Enumerator_long__MoveNext__, v7);
    sub_1B64870(&Method_System_Collections_Generic_List_Enumerator_long__get_Current__, v8);
    sub_1B64870(&Method_System_Collections_Generic_List_UserCommandCodeEntity__Add__, v9);
    sub_1B64870(&Method_System_Collections_Generic_List_long__GetEnumerator__, v10);
    sub_1B64870(&Method_System_Collections_Generic_List_UserCommandCodeEntity__Sort__, v11);
    sub_1B64870(&Method_System_Collections_Generic_List_UserCommandCodeEntity___ctor__, v12);
    sub_1B64870(&System_Collections_Generic_List_UserCommandCodeEntity__TypeInfo, v13);
    sub_1B64870(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v14);
    sub_1B64870(&Method_ServantSellConfirmListViewManager___c__GetSortEntList_b__19_0__, v15);
    sub_1B64870(&ServantSellConfirmListViewManager___c_TypeInfo, v16);
    byte_49FAAD4 = 1;
  }
  memset(&v38, 0, sizeof(v38));
  v17 = (System_Collections_Generic_List_object__o *)sub_1B64ABC(System_Collections_Generic_List_UserCommandCodeEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v17,
    (const MethodInfo_34AF17C *)Method_System_Collections_Generic_List_UserCommandCodeEntity___ctor__);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE318 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_24;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2E3B6C8 *)Method_DataManager_GetMasterData_UserCommandCodeMaster___);
  if ( !commandCodeIds )
    goto LABEL_24;
  v20 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  System_Collections_Generic_List_long___GetEnumerator(
    &v37,
    commandCodeIds,
    (const MethodInfo_3497EC4 *)Method_System_Collections_Generic_List_long__GetEnumerator__);
  v38 = v37;
  while ( 1 )
  {
    v21 = System_Collections_Generic_List_Enumerator_long___MoveNext(
            &v38,
            (const MethodInfo_3229598 *)Method_System_Collections_Generic_List_Enumerator_long__MoveNext__);
    if ( !v21 )
      break;
    if ( !v20 )
      sub_1B64ACC(v21, v22);
    Entity = DataMasterBase_object__object__long___GetEntity(
               v20,
               (int64_t)v38.fields._current,
               (const MethodInfo_30D632C *)Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__GetEntity__);
    v26 = Entity;
    if ( !v17 )
      sub_1B64ACC(Entity, Entity);
    items = v17->fields._items;
    v28 = Method_System_Collections_Generic_List_UserCommandCodeEntity__Add__;
    ++v17->fields._version;
    if ( !items )
      sub_1B64ACC(Entity, Entity);
    size = v17->fields._size;
    if ( (unsigned int)size >= items->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v17,
        Entity,
        *(const MethodInfo_34AF9B0 **)(*(_QWORD *)(v28[4] + 192LL) + 112LL));
    }
    else
    {
      v30 = &items->obj.klass + size;
      v17->fields._size = size + 1;
      v30[4] = (Il2CppClass *)v26;
      sub_1B64814((ServantStatusBattleListViewItem_o *)(v30 + 4), (int32_t)v26, v24, v25);
    }
  }
  System_Collections_Generic_List_Enumerator_long___Dispose(
    &v38,
    (const MethodInfo_3229594 *)Method_System_Collections_Generic_List_Enumerator_long__Dispose__);
  Instance = ServantSellConfirmListViewManager___c_TypeInfo;
  if ( !ServantSellConfirmListViewManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantSellConfirmListViewManager___c_TypeInfo);
    Instance = ServantSellConfirmListViewManager___c_TypeInfo;
  }
  v31 = *(System_Comparison_T__o **)(*((_QWORD *)Instance + 23) + 16LL);
  if ( !v31 )
  {
    if ( !*((_DWORD *)Instance + 56) )
    {
      j_il2cpp_runtime_class_init_0(Instance);
      Instance = ServantSellConfirmListViewManager___c_TypeInfo;
    }
    v32 = (Il2CppObject *)**((_QWORD **)Instance + 23);
    v31 = (System_Comparison_T__o *)sub_1B64ABC(System_Comparison_UserCommandCodeEntity__TypeInfo);
    System_Comparison_object____ctor(
      v31,
      v32,
      Method_ServantSellConfirmListViewManager___c__GetSortEntList_b__19_0__,
      0LL);
    static_fields = ServantSellConfirmListViewManager___c_TypeInfo->static_fields;
    static_fields->__9__19_0 = (struct System_Comparison_UserCommandCodeEntity__o *)v31;
    sub_1B64814((ServantStatusBattleListViewItem_o *)&static_fields->__9__19_0, (int32_t)v31, v34, v35);
  }
  if ( !v17 )
LABEL_24:
    sub_1B64ACC(Instance, v19);
  System_Collections_Generic_List_object___Sort_55252244(
    v17,
    v31,
    (const MethodInfo_34B1514 *)Method_System_Collections_Generic_List_UserCommandCodeEntity__Sort__);
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
  int32_t v24; // w2
  int32_t v25; // w3
  Il2CppObject *v26; // x1
  struct System_Object_array *items; // x8
  _QWORD *v28; // x9
  __int64 size; // x10
  Il2CppClass **v30; // x0
  System_Comparison_T__o *v31; // x20
  Il2CppObject *v32; // x21
  struct ServantSellConfirmListViewManager___c_StaticFields *static_fields; // x0
  int32_t v34; // w2
  int32_t v35; // w3
  System_Collections_Generic_List_Enumerator_T__o v37; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v38; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_49FAAD1 & 1) == 0 )
  {
    sub_1B64870(&System_Comparison_UserServantEntity__TypeInfo, servantIds);
    sub_1B64870(&Method_DataManager_GetMasterData_UserServantMaster___, v4);
    sub_1B64870(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v5);
    sub_1B64870(&Method_System_Collections_Generic_List_Enumerator_long__Dispose__, v6);
    sub_1B64870(&Method_System_Collections_Generic_List_Enumerator_long__MoveNext__, v7);
    sub_1B64870(&Method_System_Collections_Generic_List_Enumerator_long__get_Current__, v8);
    sub_1B64870(&Method_System_Collections_Generic_List_UserServantEntity__Add__, v9);
    sub_1B64870(&Method_System_Collections_Generic_List_long__GetEnumerator__, v10);
    sub_1B64870(&Method_System_Collections_Generic_List_UserServantEntity__Sort__, v11);
    sub_1B64870(&Method_System_Collections_Generic_List_UserServantEntity___ctor__, v12);
    sub_1B64870(&System_Collections_Generic_List_UserServantEntity__TypeInfo, v13);
    sub_1B64870(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v14);
    sub_1B64870(&Method_ServantSellConfirmListViewManager___c__GetSvtSortEntList_b__16_0__, v15);
    sub_1B64870(&ServantSellConfirmListViewManager___c_TypeInfo, v16);
    byte_49FAAD1 = 1;
  }
  memset(&v38, 0, sizeof(v38));
  v17 = (System_Collections_Generic_List_object__o *)sub_1B64ABC(System_Collections_Generic_List_UserServantEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v17,
    (const MethodInfo_34AF17C *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE318 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_24;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2E3B6C8 *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !servantIds )
    goto LABEL_24;
  v20 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  System_Collections_Generic_List_long___GetEnumerator(
    &v37,
    servantIds,
    (const MethodInfo_3497EC4 *)Method_System_Collections_Generic_List_long__GetEnumerator__);
  v38 = v37;
  while ( 1 )
  {
    v21 = System_Collections_Generic_List_Enumerator_long___MoveNext(
            &v38,
            (const MethodInfo_3229598 *)Method_System_Collections_Generic_List_Enumerator_long__MoveNext__);
    if ( !v21 )
      break;
    if ( !v20 )
      sub_1B64ACC(v21, v22);
    Entity = DataMasterBase_object__object__long___GetEntity(
               v20,
               (int64_t)v38.fields._current,
               (const MethodInfo_30D632C *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    v26 = Entity;
    if ( !v17 )
      sub_1B64ACC(Entity, Entity);
    items = v17->fields._items;
    v28 = Method_System_Collections_Generic_List_UserServantEntity__Add__;
    ++v17->fields._version;
    if ( !items )
      sub_1B64ACC(Entity, Entity);
    size = v17->fields._size;
    if ( (unsigned int)size >= items->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v17,
        Entity,
        *(const MethodInfo_34AF9B0 **)(*(_QWORD *)(v28[4] + 192LL) + 112LL));
    }
    else
    {
      v30 = &items->obj.klass + size;
      v17->fields._size = size + 1;
      v30[4] = (Il2CppClass *)v26;
      sub_1B64814((ServantStatusBattleListViewItem_o *)(v30 + 4), (int32_t)v26, v24, v25);
    }
  }
  System_Collections_Generic_List_Enumerator_long___Dispose(
    &v38,
    (const MethodInfo_3229594 *)Method_System_Collections_Generic_List_Enumerator_long__Dispose__);
  Instance = ServantSellConfirmListViewManager___c_TypeInfo;
  if ( !ServantSellConfirmListViewManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantSellConfirmListViewManager___c_TypeInfo);
    Instance = ServantSellConfirmListViewManager___c_TypeInfo;
  }
  v31 = *(System_Comparison_T__o **)(*((_QWORD *)Instance + 23) + 8LL);
  if ( !v31 )
  {
    if ( !*((_DWORD *)Instance + 56) )
    {
      j_il2cpp_runtime_class_init_0(Instance);
      Instance = ServantSellConfirmListViewManager___c_TypeInfo;
    }
    v32 = (Il2CppObject *)**((_QWORD **)Instance + 23);
    v31 = (System_Comparison_T__o *)sub_1B64ABC(System_Comparison_UserServantEntity__TypeInfo);
    System_Comparison_object____ctor(
      v31,
      v32,
      Method_ServantSellConfirmListViewManager___c__GetSvtSortEntList_b__16_0__,
      0LL);
    static_fields = ServantSellConfirmListViewManager___c_TypeInfo->static_fields;
    static_fields->__9__16_0 = (struct System_Comparison_UserServantEntity__o *)v31;
    sub_1B64814((ServantStatusBattleListViewItem_o *)&static_fields->__9__16_0, (int32_t)v31, v34, v35);
  }
  if ( !v17 )
LABEL_24:
    sub_1B64ACC(Instance, v19);
  System_Collections_Generic_List_object___Sort_55252244(
    v17,
    v31,
    (const MethodInfo_34B1514 *)Method_System_Collections_Generic_List_UserServantEntity__Sort__);
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
  int32_t v22; // w2
  int32_t v23; // w3
  int32_t v24; // w1
  UnityEngine_Object_o *v25; // x22
  System_Collections_Generic_List_object__o *itemList; // x8
  __int64 v27; // x20
  int32_t v28; // w21
  __int64 v29; // x22
  __int64 v30; // x10
  Il2CppObject v31; // q0
  __int64 v32; // x23
  const MethodInfo *v33; // x1
  int32_t v34; // w2
  int32_t v35; // w3
  int32_t v36; // w1
  __int64 v37; // x8
  UnityEngine_Object_o *v38; // x23
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v39; // [xsp+0h] [xbp-D0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v40; // [xsp+20h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v41; // [xsp+40h] [xbp-90h]
  Il2CppObject *v42; // [xsp+68h] [xbp-68h] BYREF
  Il2CppObject *entity; // [xsp+78h] [xbp-58h] BYREF

  if ( (byte_49FAAD5 & 1) == 0 )
  {
    sub_1B64870(&Method_DataManager_GetMasterData_UserCommandCodeMaster___, selectedId);
    sub_1B64870(&Method_DataManager_GetMasterData_UserServantMaster___, v5);
    sub_1B64870(&Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__TryGetEntity__, v6);
    sub_1B64870(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__, v7);
    sub_1B64870(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v8);
    sub_1B64870(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v9);
    sub_1B64870(&UnityEngine_Object_TypeInfo, v10);
    sub_1B64870(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v11);
    sub_1B64870(&ServantSellConfirmListViewItem_TypeInfo, v12);
    sub_1B64870(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v13);
    byte_49FAAD5 = 1;
  }
  entity = 0LL;
  v42 = 0LL;
  if ( !this->fields.itemList )
    return;
  kind = this->fields.kind;
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE318 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_46;
  if ( kind == 2 )
  {
    Instance = (__int64)DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_2E3B6C8 *)Method_DataManager_GetMasterData_UserCommandCodeMaster___);
    if ( Instance )
    {
      if ( !DataMasterBase_object__object__long___TryGetEntity(
              (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
              &entity,
              selectedId,
              (const MethodInfo_30D6380 *)Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__TryGetEntity__) )
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
                                (const MethodInfo_34AF6E0 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
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
                *(Il2CppObject *)&v41.fields.currentCryptoKey = entity[1];
                *(Il2CppObject *)&v41.fields.fakeValue = v20;
                if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
                v40 = v41;
                if ( v21 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46184056(&v40, 0LL) )
                {
                  v24 = (int)entity;
                  *(_QWORD *)(v18 + 144) = entity;
                  sub_1B64814((ServantStatusBattleListViewItem_o *)(v18 + 144), v24, v22, v23);
                }
                *(_BYTE *)(v18 + 188) = 0;
                *(_DWORD *)(v18 + 216) = -1;
                v25 = *(UnityEngine_Object_o **)(v18 + 104);
                if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                if ( UnityEngine_Object__op_Inequality(v25, 0LL, 0LL) )
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
    sub_1B64ACC(Instance, v16);
  }
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E3B6C8 *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !Instance )
    goto LABEL_46;
  if ( !DataMasterBase_object__object__long___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
          &v42,
          selectedId,
          (const MethodInfo_30D6380 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__) )
    return;
  Instance = (__int64)UserGameMaster__getSelfUserGame(0LL);
  itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
  if ( !itemList )
    goto LABEL_46;
  v27 = Instance;
  v28 = 0;
  while ( v28 < itemList->fields._size )
  {
    Instance = (__int64)System_Collections_Generic_List_object___get_Item(
                          itemList,
                          v28,
                          (const MethodInfo_34AF6E0 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    if ( Instance )
    {
      v29 = Instance;
      v30 = LOBYTE(ServantSellConfirmListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
      if ( *(unsigned __int8 *)(*(_QWORD *)Instance + 304LL) >= (unsigned int)v30
        && *(ServantSellConfirmListViewItem_c **)(*(_QWORD *)(*(_QWORD *)Instance + 200LL) + 8 * v30 - 8) == ServantSellConfirmListViewItem_TypeInfo )
      {
        Instance = ServantSellConfirmListViewItem__get_UserSvtId((ServantSellConfirmListViewItem_o *)Instance, v16);
        if ( v42 )
        {
          v31 = v42[2];
          v32 = Instance;
          *(Il2CppObject *)&v41.fields.currentCryptoKey = v42[1];
          *(Il2CppObject *)&v41.fields.fakeValue = v31;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v39 = v41;
          if ( v32 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46184056(&v39, 0LL) )
          {
            v36 = (int)v42;
            *(_QWORD *)(v29 + 112) = v42;
            sub_1B64814((ServantStatusBattleListViewItem_o *)(v29 + 112), v36, v34, v35);
          }
          Instance = ServantSellConfirmListViewItem__get_UserSvtId((ServantSellConfirmListViewItem_o *)v29, v33);
          if ( v27 )
          {
            v37 = *(_QWORD *)(v27 + 112);
            *(_DWORD *)(v29 + 216) = -1;
            v38 = *(UnityEngine_Object_o **)(v29 + 104);
            *(_BYTE *)(v29 + 188) = Instance == v37;
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            Instance = UnityEngine_Object__op_Inequality(v38, 0LL, 0LL);
            if ( (Instance & 1) != 0 )
            {
              Instance = *(_QWORD *)(v29 + 104);
              if ( !Instance )
                goto LABEL_46;
              Instance = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)Instance + 392LL))(
                           Instance,
                           v29,
                           *(_QWORD *)(*(_QWORD *)Instance + 400LL));
            }
            itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
            ++v28;
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

  if ( (byte_49FAAD8 & 1) == 0 )
  {
    sub_1B64870(&UnityEngine_Object_TypeInfo, method);
    byte_49FAAD8 = 1;
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

  if ( (byte_49FAAD7 & 1) == 0 )
  {
    sub_1B64870(&System_Action_TypeInfo, *(_QWORD *)&mode);
    sub_1B64870(&Method_System_Collections_Generic_List_ServantSellConfirmListViewObject__get_Count__, v5);
    sub_1B64870(&Method_System_Collections_Generic_List_ServantSellConfirmListViewObject__get_Item__, v6);
    sub_1B64870(&Method_ServantSellConfirmListViewManager_OnMoveEnd__, v7);
    sub_1B64870(&StringLiteral_9891/*"OnMoveEnd"*/, v8);
    byte_49FAAD7 = 1;
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
               (const MethodInfo_34AF6E0 *)Method_System_Collections_Generic_List_ServantSellConfirmListViewObject__get_Item__);
      v15 = (System_Action_o *)sub_1B64ABC(System_Action_TypeInfo);
      System_Action___ctor(v15, (Il2CppObject *)this, Method_ServantSellConfirmListViewManager_OnMoveEnd__, 0LL);
      if ( !Item )
        break;
      ServantSellConfirmListViewObject__Init((ServantSellConfirmListViewObject_o *)Item, mode, v15, v16);
      if ( ++v13 >= v12->fields._size )
        return;
    }
LABEL_10:
    sub_1B64ACC(ObjectList, v10);
  }
  this->fields.callbackCount = 1;
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_9891/*"OnMoveEnd"*/,
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
  const MethodInfo *v6; // x2

  this->fields.onSelectItem = onSelectItem;
  sub_1B64814(
    (ServantStatusBattleListViewItem_o *)&this->fields.onSelectItem,
    (int32_t)onSelectItem,
    (int32_t)onSelectItem,
    (int32_t)method);
  ServantSellConfirmListViewManager__SetMode_32525672(this, mode, v6);
}


void __fastcall ServantSellConfirmListViewManager__SetMode_32525672(
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
  if ( (byte_49FAAD6 & 1) == 0 )
  {
    this = (ServantSellConfirmListViewManager_o *)sub_1B64870(&ServantSellConfirmListViewObject_TypeInfo, obj);
    byte_49FAAD6 = 1;
  }
  if ( !obj
    || (methodPtr_low = LOBYTE(ServantSellConfirmListViewObject_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(obj->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low)
    || (ServantSellConfirmListViewObject_c *)obj->klass->_2.typeHierarchy[methodPtr_low - 1] != ServantSellConfirmListViewObject_TypeInfo )
  {
    sub_1B64ACC(this, obj);
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
  int32_t v15; // w2
  int32_t v16; // w3
  struct System_Object_array *items; // x8
  _QWORD *v18; // x9
  __int64 size; // x10
  Il2CppClass **v20; // x0

  if ( (byte_49FAACE & 1) == 0 )
  {
    sub_1B64870(&Method_UnityEngine_GameObject_GetComponent_ServantSellConfirmListViewObject___, method);
    sub_1B64870(&Method_System_Collections_Generic_List_ServantSellConfirmListViewObject__Add__, v3);
    sub_1B64870(&Method_System_Collections_Generic_List_ServantSellConfirmListViewObject___ctor__, v4);
    sub_1B64870(&Method_System_Collections_Generic_List_GameObject__get_Count__, v5);
    sub_1B64870(&Method_System_Collections_Generic_List_GameObject__get_Item__, v6);
    sub_1B64870(&System_Collections_Generic_List_ServantSellConfirmListViewObject__TypeInfo, v7);
    sub_1B64870(&UnityEngine_Object_TypeInfo, v8);
    byte_49FAACE = 1;
  }
  v9 = (System_Collections_Generic_List_object__o *)sub_1B64ABC(System_Collections_Generic_List_ServantSellConfirmListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v9,
    (const MethodInfo_34AF17C *)Method_System_Collections_Generic_List_ServantSellConfirmListViewObject___ctor__);
  objectList = (System_Collections_Generic_List_object__o *)this->fields.objectList;
  if ( !objectList )
LABEL_21:
    sub_1B64ACC(objectList, v10);
  v12 = 0;
  while ( v12 < objectList->fields._size )
  {
    Item = System_Collections_Generic_List_object___get_Item(
             objectList,
             v12,
             (const MethodInfo_34AF6E0 *)Method_System_Collections_Generic_List_GameObject__get_Item__);
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
                                                                  (const MethodInfo_34AF6E0 *)Method_System_Collections_Generic_List_GameObject__get_Item__);
      if ( !objectList )
        goto LABEL_21;
      objectList = (System_Collections_Generic_List_object__o *)UnityEngine_GameObject__GetComponent_object_(
                                                                  (UnityEngine_GameObject_o *)objectList,
                                                                  (const MethodInfo_2E8A1B4 *)Method_UnityEngine_GameObject_GetComponent_ServantSellConfirmListViewObject___);
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
          || (objectList = (System_Collections_Generic_List_object__o *)ListViewManager__ClippingItem_40394112(
                                                                          (ListViewManager_o *)this,
                                                                          (ListViewItem_o *)objectList,
                                                                          0LL),
              ((unsigned __int8)objectList & 1) != 0) )
        {
          if ( !v9 )
            goto LABEL_21;
          items = v9->fields._items;
          v18 = Method_System_Collections_Generic_List_ServantSellConfirmListViewObject__Add__;
          ++v9->fields._version;
          if ( !items )
            goto LABEL_21;
          size = v9->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v9,
              v14,
              *(const MethodInfo_34AF9B0 **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
          }
          else
          {
            v20 = &items->obj.klass + size;
            v9->fields._size = size + 1;
            v20[4] = (Il2CppClass *)v14;
            sub_1B64814((ServantStatusBattleListViewItem_o *)(v20 + 4), (int32_t)v14, v15, v16);
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
  int32_t v14; // w2
  int32_t v15; // w3
  struct System_Object_array *items; // x8
  _QWORD *v17; // x9
  __int64 size; // x10
  System_Collections_Generic_List_object__o *v19; // x1
  Il2CppClass **v20; // x0

  if ( (byte_49FAACD & 1) == 0 )
  {
    sub_1B64870(&Method_UnityEngine_GameObject_GetComponent_ServantSellConfirmListViewObject___, method);
    sub_1B64870(&Method_System_Collections_Generic_List_ServantSellConfirmListViewObject__Add__, v3);
    sub_1B64870(&Method_System_Collections_Generic_List_ServantSellConfirmListViewObject___ctor__, v4);
    sub_1B64870(&Method_System_Collections_Generic_List_GameObject__get_Count__, v5);
    sub_1B64870(&Method_System_Collections_Generic_List_GameObject__get_Item__, v6);
    sub_1B64870(&System_Collections_Generic_List_ServantSellConfirmListViewObject__TypeInfo, v7);
    sub_1B64870(&UnityEngine_Object_TypeInfo, v8);
    byte_49FAACD = 1;
  }
  v9 = (System_Collections_Generic_List_object__o *)sub_1B64ABC(System_Collections_Generic_List_ServantSellConfirmListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v9,
    (const MethodInfo_34AF17C *)Method_System_Collections_Generic_List_ServantSellConfirmListViewObject___ctor__);
  objectList = (System_Collections_Generic_List_object__o *)this->fields.objectList;
  if ( !objectList )
LABEL_17:
    sub_1B64ACC(objectList, v10);
  v12 = 0;
  while ( v12 < objectList->fields._size )
  {
    Item = System_Collections_Generic_List_object___get_Item(
             objectList,
             v12,
             (const MethodInfo_34AF6E0 *)Method_System_Collections_Generic_List_GameObject__get_Item__);
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
                                                                  (const MethodInfo_34AF6E0 *)Method_System_Collections_Generic_List_GameObject__get_Item__);
      if ( !objectList )
        goto LABEL_17;
      objectList = (System_Collections_Generic_List_object__o *)UnityEngine_GameObject__GetComponent_object_(
                                                                  (UnityEngine_GameObject_o *)objectList,
                                                                  (const MethodInfo_2E8A1B4 *)Method_UnityEngine_GameObject_GetComponent_ServantSellConfirmListViewObject___);
      if ( !v9 )
        goto LABEL_17;
      items = v9->fields._items;
      v17 = Method_System_Collections_Generic_List_ServantSellConfirmListViewObject__Add__;
      ++v9->fields._version;
      if ( !items )
        goto LABEL_17;
      size = v9->fields._size;
      v19 = objectList;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v9,
          (Il2CppObject *)objectList,
          *(const MethodInfo_34AF9B0 **)(*(_QWORD *)(v17[4] + 192LL) + 112LL));
      }
      else
      {
        v20 = &items->obj.klass + size;
        v9->fields._size = size + 1;
        v20[4] = (Il2CppClass *)v19;
        sub_1B64814((ServantStatusBattleListViewItem_o *)(v20 + 4), (int32_t)v19, v14, v15);
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
  int32_t v3; // w2
  int32_t v4; // w3

  if ( (byte_49FAADB & 1) == 0 )
  {
    sub_1B64870(&ServantSellConfirmListViewManager___c_TypeInfo, v1);
    byte_49FAADB = 1;
  }
  v2 = (Il2CppObject *)sub_1B64ABC(ServantSellConfirmListViewManager___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  ServantSellConfirmListViewManager___c_TypeInfo->static_fields->__9 = (struct ServantSellConfirmListViewManager___c_o *)v2;
  sub_1B64814(
    (ServantStatusBattleListViewItem_o *)ServantSellConfirmListViewManager___c_TypeInfo->static_fields,
    (int32_t)v2,
    v3,
    v4);
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

  if ( (byte_49FAADC & 1) == 0 )
  {
    this = (ServantSellConfirmListViewManager___c_o *)sub_1B64870(
                                                        &CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo,
                                                        a);
    byte_49FAADC = 1;
  }
  if ( !a || (this = (ServantSellConfirmListViewManager___c_o *)UserCommandCodeEntity__GetRarity(a, 0LL), !b) )
    sub_1B64ACC(this, a);
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
  v10 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46180532(v16, 0LL);
  if ( v10 < CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46180532(b->fields.commandCodeId, 0LL) )
    return 1;
  v12 = *(_QWORD *)&a->fields.commandCodeId.fields.currentCryptoKey;
  v11 = *(_QWORD *)&a->fields.commandCodeId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v17.fields.currentCryptoKey = v12;
  *(_QWORD *)&v17.fields.fakeValue = v11;
  v13 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46180532(v17, 0LL);
  v14 = *(_QWORD *)&b->fields.commandCodeId.fields.currentCryptoKey;
  *(_QWORD *)&v18.fields.fakeValue = *(_QWORD *)&b->fields.commandCodeId.fields.fakeValue;
  v15 = v13;
  *(_QWORD *)&v18.fields.currentCryptoKey = v14;
  if ( v15 <= CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46180532(v18, 0LL) )
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
    sub_1B64ACC(this, a);
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