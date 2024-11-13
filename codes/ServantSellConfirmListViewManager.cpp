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
    sub_1BCA784(p_onSelectItem, 0LL, (int64_t)method, v3, v4, v5, v6, v7);
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


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantSellConfirmListViewManager__CreateCommandCodeList(
        ServantSellConfirmListViewManager_o *this,
        System_Int64_array *commandCodeIds,
        bool isExceeded,
        bool isSellLastServant,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  DataManager_o *Instance; // x0
  __int64 v18; // x1
  Il2CppObject *MasterData_object; // x0
  const MethodInfo *v20; // x2
  __int64 v21; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v22; // x21
  unsigned __int64 v23; // x26
  int64_t v24; // x23
  System_Collections_Generic_List_object__o *itemList; // x22
  int32_t v26; // w24
  Il2CppObject *Entity; // x25
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x3
  ServantSellConfirmListViewItem_o *v31; // x23
  const MethodInfo *v32; // x4
  int64_t v33; // x2
  int32_t v34; // w3
  System_String_o *v35; // x4
  BattleSetupInfo_o *v36; // x5
  FollowerInfo_o *v37; // x6
  PartyListViewItem_o *v38; // x7
  struct System_Object_array *items; // x8
  _QWORD *v40; // x9
  __int64 size; // x10
  Il2CppClass **v42; // x0

  if ( (byte_4B1261B & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserCommandCodeMaster___, commandCodeIds, isExceeded);
    sub_1BCA7E0(&Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__GetEntity__, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewItem__Add__, v11, v12);
    sub_1BCA7E0(&ServantSellConfirmListViewItem_TypeInfo, v13, v14);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v15, v16);
    byte_4B1261B = 1;
  }
  if ( commandCodeIds && *(_QWORD *)&commandCodeIds->max_length && !isExceeded && !isSellLastServant )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_20;
    MasterData_object = DataManager__GetMasterData_object_(
                          Instance,
                          (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserCommandCodeMaster___);
    v21 = *(_QWORD *)&commandCodeIds->max_length;
    if ( (int)v21 >= 1 )
    {
      v22 = (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object;
      v23 = 0LL;
      while ( 1 )
      {
        if ( v23 >= (unsigned int)v21 )
          sub_1BCAA44(MasterData_object, v18);
        Instance = (DataManager_o *)this->fields.parentManager;
        if ( !Instance )
          break;
        v24 = commandCodeIds->m_Items[v23];
        itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
        Instance = (DataManager_o *)ServantOperationManager__GetSelectedOrderByCommandCodeId(
                                      (ServantOperationManager_o *)Instance,
                                      v24,
                                      v20);
        if ( !v22 )
          break;
        v26 = (int)Instance;
        Entity = DataMasterBase_object__object__long___GetEntity(
                   v22,
                   v24,
                   (const MethodInfo_31B2FEC *)Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__GetEntity__);
        v31 = (ServantSellConfirmListViewItem_o *)sub_1BCAA2C(ServantSellConfirmListViewItem_TypeInfo, v28, v29, v30);
        ServantSellConfirmListViewItem___ctor_33370232(v31, v26, (UserCommandCodeEntity_o *)Entity, 0, v32);
        if ( !itemList )
          break;
        items = itemList->fields._items;
        v40 = Method_System_Collections_Generic_List_ListViewItem__Add__;
        ++itemList->fields._version;
        if ( !items )
          break;
        size = itemList->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            itemList,
            (Il2CppObject *)v31,
            *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v40[4] + 192LL) + 112LL));
        }
        else
        {
          v42 = &items->obj.klass + size;
          itemList->fields._size = size + 1;
          v42[4] = (Il2CppClass *)v31;
          sub_1BCA784((PartyOrganizationUtility_o *)(v42 + 4), (int64_t)v31, v33, v34, v35, v36, v37, v38);
        }
        LODWORD(v21) = commandCodeIds->max_length;
        if ( (__int64)++v23 >= (int)v21 )
          return;
      }
LABEL_20:
      sub_1BCAA3C(Instance, v18);
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
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  ServantSellConfirmListViewManager_o *v23; // x0
  const MethodInfo *v24; // x2
  System_Collections_Generic_List_object__o *SortEntList; // x0
  __int64 v26; // x1
  System_Collections_Generic_List_object__o *v27; // x20
  Il2CppObject *current; // x23
  System_Collections_Generic_List_object__o *itemList; // x21
  int32_t v30; // w24
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x3
  ServantSellConfirmListViewItem_o *v34; // x22
  const MethodInfo *v35; // x4
  __int64 v36; // x0
  __int64 v37; // x1
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
  System_Collections_Generic_List_Enumerator_object__o v48; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v49; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_4B1261C & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_Enumerator_UserCommandCodeEntity__Dispose__,
      commandCodeIds,
      isExceeded);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_UserCommandCodeEntity__MoveNext__, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_UserCommandCodeEntity__get_Current__, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewItem__Add__, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_UserCommandCodeEntity__GetEnumerator__, v15, v16);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_UserCommandCodeEntity__IndexOf__, v17, v18);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_long__get_Count__, v19, v20);
    sub_1BCA7E0(&ServantSellConfirmListViewItem_TypeInfo, v21, v22);
    byte_4B1261C = 1;
  }
  memset(&v49, 0, sizeof(v49));
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
  if ( commandCodeIds && commandCodeIds->fields._size >= 1 && !isExceeded && !isSellLastServant )
  {
    SortEntList = (System_Collections_Generic_List_object__o *)ServantSellConfirmListViewManager__GetSortEntList(
                                                                 v23,
                                                                 commandCodeIds,
                                                                 v24);
    if ( !SortEntList )
      sub_1BCAA3C(0LL, v26);
    v27 = SortEntList;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v48,
      SortEntList,
      (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_UserCommandCodeEntity__GetEnumerator__);
    v49 = v48;
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v49,
              (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_UserCommandCodeEntity__MoveNext__) )
    {
      current = v49.fields._current;
      itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
      v30 = System_Collections_Generic_List_object___IndexOf(
              v27,
              v49.fields._current,
              (const MethodInfo_35A28FC *)Method_System_Collections_Generic_List_UserCommandCodeEntity__IndexOf__);
      v34 = (ServantSellConfirmListViewItem_o *)sub_1BCAA2C(ServantSellConfirmListViewItem_TypeInfo, v31, v32, v33);
      ServantSellConfirmListViewItem___ctor_33370232(v34, v30, (UserCommandCodeEntity_o *)current, 0, v35);
      if ( !itemList )
        sub_1BCAA3C(v36, v37);
      items = itemList->fields._items;
      v45 = Method_System_Collections_Generic_List_ListViewItem__Add__;
      ++itemList->fields._version;
      if ( !items )
        sub_1BCAA3C(v36, v37);
      size = itemList->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          itemList,
          (Il2CppObject *)v34,
          *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v45[4] + 192LL) + 112LL));
      }
      else
      {
        v47 = &items->obj.klass + size;
        itemList->fields._size = size + 1;
        v47[4] = (Il2CppClass *)v34;
        sub_1BCA784((PartyOrganizationUtility_o *)(v47 + 4), (int64_t)v34, v38, v39, v40, v41, v42, v43);
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v49,
      (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_UserCommandCodeEntity__Dispose__);
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
  _BOOL4 v5; // w20
  System_Int64_array *v6; // x21
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  int64_t Instance; // x0
  const MethodInfo *v25; // x1
  Il2CppObject *MasterData_object; // x29
  UserGameEntity_o *SelfUserGame; // x24
  __int64 v28; // x1
  Il2CppObject *v29; // x25
  ServantOperationManager_o *SelectedEquipeCmdCardServantList; // x0
  const MethodInfo *v31; // x2
  __int64 v32; // x8
  unsigned __int64 v33; // x25
  int64_t v34; // x26
  const MethodInfo *v35; // x2
  int64_t v36; // x27
  __int64 v37; // x19
  __int64 v38; // x28
  System_Collections_Generic_List_object__o *itemList; // x28
  _BOOL4 v40; // w21
  __int64 v41; // x2
  __int64 v42; // x3
  System_Int64_array *v43; // x20
  System_Int64_array *v44; // x22
  UserGameEntity_o *v45; // x23
  int64_t favoriteUserSvtId; // x24
  int32_t v47; // w19
  ServantSellConfirmListViewItem_o *v48; // x29
  const MethodInfo *v49; // x6
  int64_t v50; // x2
  int32_t v51; // w3
  System_String_o *v52; // x4
  BattleSetupInfo_o *v53; // x5
  FollowerInfo_o *v54; // x6
  PartyListViewItem_o *v55; // x7
  struct System_Object_array *items; // x8
  _QWORD *v57; // x9
  __int64 size; // x10
  Il2CppClass **v59; // x0
  System_Collections_Generic_List_int__o *v60; // [xsp+0h] [xbp-A0h]
  System_Int64_array *v61; // [xsp+8h] [xbp-98h]
  Il2CppObject *v62; // [xsp+10h] [xbp-90h]
  ServantSellConfirmListViewManager_o *v63; // [xsp+18h] [xbp-88h]
  int64_t *m_Items; // [xsp+28h] [xbp-78h]
  System_Int64_array *equipIdList; // [xsp+30h] [xbp-70h] BYREF
  System_Int64_array *svtIdList; // [xsp+38h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v68; // 0:x0.16

  v5 = isExceeded;
  v6 = servantIds;
  if ( (byte_4B12618 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserDeckMaster___, servantIds, isExceeded);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserServantMaster___, v8, v9);
    sub_1BCA7E0(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v10, v11);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewItem__Add__, v12, v13);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__Contains__, v14, v15);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v16, v17);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v18, v19);
    sub_1BCA7E0(&ServantSellConfirmListViewItem_TypeInfo, v20, v21);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v22, v23);
    byte_4B12618 = 1;
  }
  equipIdList = 0LL;
  svtIdList = 0LL;
  if ( v6 && *(_QWORD *)&v6->max_length )
  {
    Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_34;
    MasterData_object = DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserServantMaster___);
    SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
    Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_34;
    v29 = DataManager__GetMasterData_object_(
            (DataManager_o *)Instance,
            (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserDeckMaster___);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v28);
    Instance = NetworkManager__get_UserId(0LL);
    if ( !v29 )
      goto LABEL_34;
    UserDeckMaster__getPartyList((UserDeckMaster_o *)v29, &svtIdList, &equipIdList, Instance, 0LL);
    Instance = (int64_t)this->fields.parentManager;
    if ( !Instance )
      goto LABEL_34;
    SelectedEquipeCmdCardServantList = (ServantOperationManager_o *)ServantOperationManager__GetSelectedEquipeCmdCardServantList(
                                                                      (ServantOperationManager_o *)Instance,
                                                                      v25);
    Instance = (int64_t)ServantOperationManager__GetEquipedCommandCodeSellLastSvtList(
                          SelectedEquipeCmdCardServantList,
                          (System_Collections_Generic_List_ServantOperationListViewItem__o *)SelectedEquipeCmdCardServantList,
                          v31);
    v32 = *(_QWORD *)&v6->max_length;
    v60 = (System_Collections_Generic_List_int__o *)Instance;
    if ( (int)v32 >= 1 )
    {
      v33 = 0LL;
      m_Items = v6->m_Items;
      v62 = MasterData_object;
      v63 = this;
      v61 = v6;
      while ( 1 )
      {
        if ( v33 >= (unsigned int)v32 )
          sub_1BCAA44(Instance, v25);
        if ( !MasterData_object )
          break;
        v34 = m_Items[v33];
        Instance = (int64_t)DataMasterBase_object__object__long___GetEntity(
                              (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                              v34,
                              (const MethodInfo_31B2FEC *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
        v36 = Instance;
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
          if ( !v36 )
            break;
          v38 = *(_QWORD *)(v36 + 80);
          v37 = *(_QWORD *)(v36 + 88);
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v25);
          *(_QWORD *)&v68.fields.currentCryptoKey = v38;
          *(_QWORD *)&v68.fields.fakeValue = v37;
          v25 = (const MethodInfo *)(unsigned int)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(
                                                    v68,
                                                    0LL);
          Instance = (int64_t)v60;
          if ( !v60 )
            break;
          Instance = System_Collections_Generic_List_int___Contains(
                       v60,
                       (int32_t)v25,
                       (const MethodInfo_3584FB0 *)Method_System_Collections_Generic_List_int__Contains__);
          if ( (Instance & 1) != 0 )
          {
LABEL_24:
            Instance = (int64_t)this->fields.parentManager;
            if ( !Instance )
              break;
            itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
            v40 = v5;
            Instance = ServantOperationManager__GetSelectedOrderByServantId(
                         (ServantOperationManager_o *)Instance,
                         v34,
                         v35);
            if ( !SelfUserGame )
              break;
            v43 = equipIdList;
            v44 = svtIdList;
            v45 = SelfUserGame;
            favoriteUserSvtId = SelfUserGame->fields.favoriteUserSvtId;
            v47 = Instance;
            v48 = (ServantSellConfirmListViewItem_o *)sub_1BCAA2C(
                                                        ServantSellConfirmListViewItem_TypeInfo,
                                                        v25,
                                                        v41,
                                                        v42);
            ServantSellConfirmListViewItem___ctor(
              v48,
              v47,
              (UserServantEntity_o *)v36,
              v44,
              v43,
              v34 == favoriteUserSvtId,
              v49);
            if ( !itemList )
              break;
            items = itemList->fields._items;
            v57 = Method_System_Collections_Generic_List_ListViewItem__Add__;
            ++itemList->fields._version;
            if ( !items )
              break;
            size = itemList->fields._size;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                itemList,
                (Il2CppObject *)v48,
                *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v57[4] + 192LL) + 112LL));
            }
            else
            {
              v59 = &items->obj.klass + size;
              itemList->fields._size = size + 1;
              v59[4] = (Il2CppClass *)v48;
              sub_1BCA784((PartyOrganizationUtility_o *)(v59 + 4), (int64_t)v48, v50, v51, v52, v53, v54, v55);
            }
            v5 = v40;
            v6 = v61;
            MasterData_object = v62;
            this = v63;
            SelfUserGame = v45;
          }
        }
        LODWORD(v32) = v6->max_length;
        if ( (__int64)++v33 >= (int)v32 )
          return;
      }
LABEL_34:
      sub_1BCAA3C(Instance, v25);
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
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x1
  __int64 v31; // x2
  __int64 v32; // x1
  __int64 v33; // x2
  __int64 v34; // x1
  __int64 v35; // x2
  __int64 v36; // x1
  __int64 v37; // x2
  DataManager_o *Instance; // x0
  const MethodInfo *v39; // x1
  UserGameEntity_o *SelfUserGame; // x22
  __int64 v41; // x1
  Il2CppObject *MasterData_object; // x19
  ServantOperationManager_o *SelectedEquipeCmdCardServantList; // x0
  const MethodInfo *v44; // x2
  System_Collections_Generic_List_int__o *EquipedCommandCodeSellLastSvtList; // x23
  __int64 v46; // x1
  __int64 v47; // x2
  __int64 v48; // x3
  System_Collections_Generic_List_long__o *v49; // x25
  const MethodInfo *v50; // x2
  __int64 v51; // x8
  unsigned __int64 v52; // x19
  struct System_Int64_array *items; // x8
  _QWORD *v54; // x9
  __int64 size; // x10
  System_Collections_Generic_List_object__o *v56; // x24
  _BOOL8 v57; // x0
  __int64 v58; // x1
  Il2CppObject *current; // x25
  void *monitor; // x19
  Il2CppClass *klass; // x20
  __int64 v62; // x0
  System_Collections_Generic_List_object__o *itemList; // x26
  __int64 v64; // x0
  __int64 v65; // x1
  Il2CppObject v66; // q0
  int32_t v67; // w27
  System_Int64_array *v68; // x19
  System_Int64_array *v69; // x29
  int64_t v70; // x0
  __int64 v71; // x1
  __int64 v72; // x2
  __int64 v73; // x3
  int64_t favoriteUserSvtId; // x21
  int64_t v75; // x20
  ServantSellConfirmListViewItem_o *v76; // x28
  const MethodInfo *v77; // x6
  __int64 v78; // x0
  __int64 v79; // x1
  int64_t v80; // x2
  int32_t v81; // w3
  System_String_o *v82; // x4
  BattleSetupInfo_o *v83; // x5
  FollowerInfo_o *v84; // x6
  PartyListViewItem_o *v85; // x7
  struct System_Object_array *v86; // x8
  _QWORD *v87; // x9
  __int64 v88; // x10
  Il2CppClass **v89; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v93; // [xsp+10h] [xbp-D0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v94; // [xsp+30h] [xbp-B0h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v95; // [xsp+50h] [xbp-90h] BYREF
  System_Int64_array *equipIdList; // [xsp+70h] [xbp-70h] BYREF
  System_Int64_array *svtIdList; // [xsp+78h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v98; // 0:x0.16

  if ( (byte_4B12619 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserDeckMaster___, servantIds, isExceeded);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserServantMaster___, v6, v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_UserServantEntity__Dispose__, v8, v9);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_UserServantEntity__MoveNext__, v10, v11);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_UserServantEntity__get_Current__, v12, v13);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_long__Add__, v14, v15);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewItem__Add__, v16, v17);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__Contains__, v18, v19);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_UserServantEntity__GetEnumerator__, v20, v21);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_UserServantEntity__IndexOf__, v22, v23);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_long___ctor__, v24, v25);
    sub_1BCA7E0(&System_Collections_Generic_List_long__TypeInfo, v26, v27);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v28, v29);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v30, v31);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v32, v33);
    sub_1BCA7E0(&ServantSellConfirmListViewItem_TypeInfo, v34, v35);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v36, v37);
    byte_4B12619 = 1;
  }
  equipIdList = 0LL;
  svtIdList = 0LL;
  memset(&v95, 0, sizeof(v95));
  this->fields.kind = 3;
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
  if ( servantIds && *(_QWORD *)&servantIds->max_length )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_43;
    DataManager__GetMasterData_object_(
      Instance,
      (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserServantMaster___);
    SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_43;
    MasterData_object = DataManager__GetMasterData_object_(
                          Instance,
                          (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserDeckMaster___);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v41);
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
                                                                      v39);
    EquipedCommandCodeSellLastSvtList = ServantOperationManager__GetEquipedCommandCodeSellLastSvtList(
                                          SelectedEquipeCmdCardServantList,
                                          (System_Collections_Generic_List_ServantOperationListViewItem__o *)SelectedEquipeCmdCardServantList,
                                          v44);
    v49 = (System_Collections_Generic_List_long__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_long__TypeInfo,
                                                       v46,
                                                       v47,
                                                       v48);
    System_Collections_Generic_List_long____ctor(
      v49,
      (const MethodInfo_358943C *)Method_System_Collections_Generic_List_long___ctor__);
    v51 = *(_QWORD *)&servantIds->max_length;
    if ( (int)v51 >= 1 )
    {
      v52 = 0LL;
      while ( 1 )
      {
        if ( v52 >= (unsigned int)v51 )
          sub_1BCAA44(Instance, v39);
        if ( !v49 )
          break;
        v39 = (const MethodInfo *)servantIds->m_Items[v52];
        items = v49->fields._items;
        v54 = Method_System_Collections_Generic_List_long__Add__;
        ++v49->fields._version;
        if ( !items )
          break;
        size = v49->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_long___AddWithResize(
            v49,
            (int64_t)v39,
            *(const MethodInfo_3589C90 **)(*(_QWORD *)(v54[4] + 192LL) + 112LL));
        }
        else
        {
          v49->fields._size = size + 1;
          items->m_Items[size] = (int64_t)v39;
        }
        LODWORD(v51) = servantIds->max_length;
        if ( (__int64)++v52 >= (int)v51 )
          goto LABEL_20;
      }
LABEL_43:
      sub_1BCAA3C(Instance, v39);
    }
LABEL_20:
    Instance = (DataManager_o *)ServantSellConfirmListViewManager__GetSvtSortEntList(
                                  (ServantSellConfirmListViewManager_o *)Instance,
                                  v49,
                                  v50);
    if ( !Instance )
      goto LABEL_43;
    v56 = (System_Collections_Generic_List_object__o *)Instance;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v94,
      (System_Collections_Generic_List_object__o *)Instance,
      (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_UserServantEntity__GetEnumerator__);
    *(_OWORD *)&v95.fields._list = *(_OWORD *)&v94.fields.currentCryptoKey;
    v95.fields._current = (Il2CppObject *)v94.fields.fakeValue;
    while ( 1 )
    {
      v57 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v95,
              (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_UserServantEntity__MoveNext__);
      if ( !v57 )
        break;
      current = v95.fields._current;
      if ( isExceeded )
      {
        if ( !v95.fields._current )
          sub_1BCAA3C(v57, v58);
        v57 = UserServantEntity__isExceeded((UserServantEntity_o *)v95.fields._current, 0LL);
        if ( !v57 )
          continue;
      }
      if ( !isSellLastServant )
        goto LABEL_32;
      if ( !current )
        sub_1BCAA3C(v57, v58);
      klass = current[5].klass;
      monitor = current[5].monitor;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v58);
      *(_QWORD *)&v98.fields.currentCryptoKey = klass;
      *(_QWORD *)&v98.fields.fakeValue = monitor;
      v62 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v98, 0LL);
      if ( !EquipedCommandCodeSellLastSvtList )
        sub_1BCAA3C(v62, (unsigned int)v62);
      if ( System_Collections_Generic_List_int___Contains(
             EquipedCommandCodeSellLastSvtList,
             v62,
             (const MethodInfo_3584FB0 *)Method_System_Collections_Generic_List_int__Contains__) )
      {
LABEL_32:
        itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
        v64 = System_Collections_Generic_List_object___IndexOf(
                v56,
                current,
                (const MethodInfo_35A28FC *)Method_System_Collections_Generic_List_UserServantEntity__IndexOf__);
        if ( !current )
          sub_1BCAA3C(v64, v65);
        v66 = current[2];
        v67 = v64;
        v68 = equipIdList;
        v69 = svtIdList;
        *(Il2CppObject *)&v94.fields.currentCryptoKey = current[1];
        *(Il2CppObject *)&v94.fields.fakeValue = v66;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v65);
        v93 = v94;
        v70 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v93, 0LL);
        if ( !SelfUserGame )
          sub_1BCAA3C(v70, v71);
        favoriteUserSvtId = SelfUserGame->fields.favoriteUserSvtId;
        v75 = v70;
        v76 = (ServantSellConfirmListViewItem_o *)sub_1BCAA2C(ServantSellConfirmListViewItem_TypeInfo, v71, v72, v73);
        ServantSellConfirmListViewItem___ctor(
          v76,
          v67,
          (UserServantEntity_o *)current,
          v69,
          v68,
          v75 == favoriteUserSvtId,
          v77);
        if ( !itemList )
          sub_1BCAA3C(v78, v79);
        v86 = itemList->fields._items;
        v87 = Method_System_Collections_Generic_List_ListViewItem__Add__;
        ++itemList->fields._version;
        if ( !v86 )
          sub_1BCAA3C(v78, v79);
        v88 = itemList->fields._size;
        if ( (unsigned int)v88 >= v86->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            itemList,
            (Il2CppObject *)v76,
            *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v87[4] + 192LL) + 112LL));
        }
        else
        {
          v89 = &v86->obj.klass + v88;
          itemList->fields._size = v88 + 1;
          v89[4] = (Il2CppClass *)v76;
          sub_1BCA784((PartyOrganizationUtility_o *)(v89 + 4), (int64_t)v76, v80, v81, v82, v83, v84, v85);
        }
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v95,
      (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_UserServantEntity__Dispose__);
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
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  System_Collections_Generic_List_object__o *itemList; // x0
  int64_t v12; // x21
  int32_t v13; // w22
  __int64 methodPtr_low; // x10
  struct System_Object_array *items; // x23
  void *monitor; // x24
  int32_t v17; // w8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v19; // 0:x0.16

  if ( (byte_4B12622 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, *(_QWORD *)&svtId, method);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v5, v6);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v7, v8);
    sub_1BCA7E0(&ServantSellConfirmListViewItem_TypeInfo, v9, v10);
    byte_4B12622 = 1;
  }
  itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
  if ( !itemList )
LABEL_14:
    sub_1BCAA3C(itemList, *(_QWORD *)&svtId);
  v12 = 0LL;
  v13 = 0;
  while ( v13 < itemList->fields._size )
  {
    itemList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                              itemList,
                                                              v13,
                                                              (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    if ( itemList )
    {
      methodPtr_low = LOBYTE(ServantSellConfirmListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(itemList->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
        && (ServantSellConfirmListViewItem_c *)itemList->klass->_2.typeHierarchy[methodPtr_low - 1] == ServantSellConfirmListViewItem_TypeInfo )
      {
        monitor = itemList[3].monitor;
        items = itemList[3].fields._items;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, *(_QWORD *)&svtId);
        *(_QWORD *)&v19.fields.currentCryptoKey = monitor;
        *(_QWORD *)&v19.fields.fakeValue = items;
        v17 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v19, 0LL);
        itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
        if ( v17 == svtId )
          ++v12;
        ++v13;
        if ( itemList )
          continue;
      }
    }
    goto LABEL_14;
  }
  return v12;
}


// local variable allocation has failed, the output may be wrong!
int64_t __fastcall ServantSellConfirmListViewManager__GetCommandCodeAmountSortValue(
        ServantSellConfirmListViewManager_o *this,
        int32_t commandCodeId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  System_Collections_Generic_List_object__o *itemList; // x0
  int64_t v10; // x21
  int32_t v11; // w22
  System_Collections_Generic_List_object__c *klass; // x9
  __int64 methodPtr_low; // x10
  System_Collections_Generic_List_object__o *v14; // x8

  if ( (byte_4B12623 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, *(_QWORD *)&commandCodeId, method);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v5, v6);
    sub_1BCA7E0(&ServantSellConfirmListViewItem_TypeInfo, v7, v8);
    byte_4B12623 = 1;
  }
  itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
  if ( !itemList )
LABEL_15:
    sub_1BCAA3C(itemList, *(_QWORD *)&commandCodeId);
  v10 = 0LL;
  v11 = 0;
  while ( v11 < itemList->fields._size )
  {
    itemList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                              itemList,
                                                              v11,
                                                              (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    if ( itemList )
    {
      klass = itemList->klass;
      methodPtr_low = LOBYTE(ServantSellConfirmListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(itemList->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
        && (ServantSellConfirmListViewItem_c *)klass->_2.typeHierarchy[methodPtr_low - 1] == ServantSellConfirmListViewItem_TypeInfo )
      {
        ++v11;
        v14 = (ServantSellConfirmListViewItem_c *)klass->_2.typeHierarchy[methodPtr_low - 1] == ServantSellConfirmListViewItem_TypeInfo
            ? itemList
            : 0LL;
        itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
        if ( LODWORD(v14[4].klass) != commandCodeId )
          ++v10;
        if ( itemList )
          continue;
      }
    }
    goto LABEL_15;
  }
  return v10;
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
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  System_Collections_Generic_List_object__o *v31; // x19
  void *Instance; // x0
  __int64 v33; // x1
  DataMasterBase_TMaster__TEntity__PKType__o *v34; // x21
  _BOOL8 v35; // x0
  __int64 v36; // x1
  Il2CppObject *Entity; // x0
  int64_t v38; // x2
  int32_t v39; // w3
  System_String_o *v40; // x4
  BattleSetupInfo_o *v41; // x5
  FollowerInfo_o *v42; // x6
  PartyListViewItem_o *v43; // x7
  int64_t v44; // x1
  struct System_Object_array *items; // x8
  _QWORD *v46; // x9
  __int64 size; // x10
  Il2CppClass **v48; // x0
  __int64 v49; // x2
  __int64 v50; // x3
  System_Comparison_T__o *v51; // x20
  Il2CppObject *v52; // x21
  struct ServantSellConfirmListViewManager___c_StaticFields *static_fields; // x0
  int64_t v54; // x2
  int32_t v55; // w3
  System_String_o *v56; // x4
  BattleSetupInfo_o *v57; // x5
  FollowerInfo_o *v58; // x6
  PartyListViewItem_o *v59; // x7
  System_Collections_Generic_List_Enumerator_T__o v61; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v62; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_4B1261D & 1) == 0 )
  {
    sub_1BCA7E0(&System_Comparison_UserCommandCodeEntity__TypeInfo, commandCodeIds, method);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserCommandCodeMaster___, v5, v6);
    sub_1BCA7E0(&Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__GetEntity__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_long__Dispose__, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_long__MoveNext__, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_long__get_Current__, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_UserCommandCodeEntity__Add__, v15, v16);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_long__GetEnumerator__, v17, v18);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_UserCommandCodeEntity__Sort__, v19, v20);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_UserCommandCodeEntity___ctor__, v21, v22);
    sub_1BCA7E0(&System_Collections_Generic_List_UserCommandCodeEntity__TypeInfo, v23, v24);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v25, v26);
    sub_1BCA7E0(&Method_ServantSellConfirmListViewManager___c__GetSortEntList_b__19_0__, v27, v28);
    sub_1BCA7E0(&ServantSellConfirmListViewManager___c_TypeInfo, v29, v30);
    byte_4B1261D = 1;
  }
  memset(&v62, 0, sizeof(v62));
  v31 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_UserCommandCodeEntity__TypeInfo,
                                                       commandCodeIds,
                                                       method,
                                                       v3);
  System_Collections_Generic_List_object____ctor(
    v31,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_UserCommandCodeEntity___ctor__);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_24;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserCommandCodeMaster___);
  if ( !commandCodeIds )
    goto LABEL_24;
  v34 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  System_Collections_Generic_List_long___GetEnumerator(
    &v61,
    commandCodeIds,
    (const MethodInfo_358A764 *)Method_System_Collections_Generic_List_long__GetEnumerator__);
  v62 = v61;
  while ( 1 )
  {
    v35 = System_Collections_Generic_List_Enumerator_long___MoveNext(
            &v62,
            (const MethodInfo_3313F28 *)Method_System_Collections_Generic_List_Enumerator_long__MoveNext__);
    if ( !v35 )
      break;
    if ( !v34 )
      sub_1BCAA3C(v35, v36);
    Entity = DataMasterBase_object__object__long___GetEntity(
               v34,
               (int64_t)v62.fields._current,
               (const MethodInfo_31B2FEC *)Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__GetEntity__);
    v44 = (int64_t)Entity;
    if ( !v31 )
      sub_1BCAA3C(Entity, Entity);
    items = v31->fields._items;
    v46 = Method_System_Collections_Generic_List_UserCommandCodeEntity__Add__;
    ++v31->fields._version;
    if ( !items )
      sub_1BCAA3C(Entity, Entity);
    size = v31->fields._size;
    if ( (unsigned int)size >= items->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v31,
        Entity,
        *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v46[4] + 192LL) + 112LL));
    }
    else
    {
      v48 = &items->obj.klass + size;
      v31->fields._size = size + 1;
      v48[4] = (Il2CppClass *)v44;
      sub_1BCA784((PartyOrganizationUtility_o *)(v48 + 4), v44, v38, v39, v40, v41, v42, v43);
    }
  }
  System_Collections_Generic_List_Enumerator_long___Dispose(
    &v62,
    (const MethodInfo_3313F24 *)Method_System_Collections_Generic_List_Enumerator_long__Dispose__);
  Instance = ServantSellConfirmListViewManager___c_TypeInfo;
  if ( !ServantSellConfirmListViewManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantSellConfirmListViewManager___c_TypeInfo, v33);
    Instance = ServantSellConfirmListViewManager___c_TypeInfo;
  }
  v51 = *(System_Comparison_T__o **)(*((_QWORD *)Instance + 23) + 16LL);
  if ( !v51 )
  {
    if ( !*((_DWORD *)Instance + 56) )
    {
      j_il2cpp_runtime_class_init_0(Instance, v33);
      Instance = ServantSellConfirmListViewManager___c_TypeInfo;
    }
    v52 = (Il2CppObject *)**((_QWORD **)Instance + 23);
    v51 = (System_Comparison_T__o *)sub_1BCAA2C(System_Comparison_UserCommandCodeEntity__TypeInfo, v33, v49, v50);
    System_Comparison_object____ctor(
      v51,
      v52,
      Method_ServantSellConfirmListViewManager___c__GetSortEntList_b__19_0__,
      0LL);
    static_fields = ServantSellConfirmListViewManager___c_TypeInfo->static_fields;
    static_fields->__9__19_0 = (struct System_Comparison_UserCommandCodeEntity__o *)v51;
    sub_1BCA784((PartyOrganizationUtility_o *)&static_fields->__9__19_0, (int64_t)v51, v54, v55, v56, v57, v58, v59);
  }
  if ( !v31 )
LABEL_24:
    sub_1BCAA3C(Instance, v33);
  System_Collections_Generic_List_object___Sort_56244000(
    v31,
    v51,
    (const MethodInfo_35A3720 *)Method_System_Collections_Generic_List_UserCommandCodeEntity__Sort__);
  return (System_Collections_Generic_List_UserCommandCodeEntity__o *)v31;
}


System_Collections_Generic_List_UserServantEntity__o *__fastcall ServantSellConfirmListViewManager__GetSvtSortEntList(
        ServantSellConfirmListViewManager_o *this,
        System_Collections_Generic_List_long__o *servantIds,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  System_Collections_Generic_List_object__o *v31; // x19
  void *Instance; // x0
  __int64 v33; // x1
  DataMasterBase_TMaster__TEntity__PKType__o *v34; // x21
  _BOOL8 v35; // x0
  __int64 v36; // x1
  Il2CppObject *Entity; // x0
  int64_t v38; // x2
  int32_t v39; // w3
  System_String_o *v40; // x4
  BattleSetupInfo_o *v41; // x5
  FollowerInfo_o *v42; // x6
  PartyListViewItem_o *v43; // x7
  int64_t v44; // x1
  struct System_Object_array *items; // x8
  _QWORD *v46; // x9
  __int64 size; // x10
  Il2CppClass **v48; // x0
  __int64 v49; // x2
  __int64 v50; // x3
  System_Comparison_T__o *v51; // x20
  Il2CppObject *v52; // x21
  struct ServantSellConfirmListViewManager___c_StaticFields *static_fields; // x0
  int64_t v54; // x2
  int32_t v55; // w3
  System_String_o *v56; // x4
  BattleSetupInfo_o *v57; // x5
  FollowerInfo_o *v58; // x6
  PartyListViewItem_o *v59; // x7
  System_Collections_Generic_List_Enumerator_T__o v61; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v62; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_4B1261A & 1) == 0 )
  {
    sub_1BCA7E0(&System_Comparison_UserServantEntity__TypeInfo, servantIds, method);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserServantMaster___, v5, v6);
    sub_1BCA7E0(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_long__Dispose__, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_long__MoveNext__, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_long__get_Current__, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_UserServantEntity__Add__, v15, v16);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_long__GetEnumerator__, v17, v18);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_UserServantEntity__Sort__, v19, v20);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_UserServantEntity___ctor__, v21, v22);
    sub_1BCA7E0(&System_Collections_Generic_List_UserServantEntity__TypeInfo, v23, v24);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v25, v26);
    sub_1BCA7E0(&Method_ServantSellConfirmListViewManager___c__GetSvtSortEntList_b__16_0__, v27, v28);
    sub_1BCA7E0(&ServantSellConfirmListViewManager___c_TypeInfo, v29, v30);
    byte_4B1261A = 1;
  }
  memset(&v62, 0, sizeof(v62));
  v31 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_UserServantEntity__TypeInfo,
                                                       servantIds,
                                                       method,
                                                       v3);
  System_Collections_Generic_List_object____ctor(
    v31,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_24;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !servantIds )
    goto LABEL_24;
  v34 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  System_Collections_Generic_List_long___GetEnumerator(
    &v61,
    servantIds,
    (const MethodInfo_358A764 *)Method_System_Collections_Generic_List_long__GetEnumerator__);
  v62 = v61;
  while ( 1 )
  {
    v35 = System_Collections_Generic_List_Enumerator_long___MoveNext(
            &v62,
            (const MethodInfo_3313F28 *)Method_System_Collections_Generic_List_Enumerator_long__MoveNext__);
    if ( !v35 )
      break;
    if ( !v34 )
      sub_1BCAA3C(v35, v36);
    Entity = DataMasterBase_object__object__long___GetEntity(
               v34,
               (int64_t)v62.fields._current,
               (const MethodInfo_31B2FEC *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    v44 = (int64_t)Entity;
    if ( !v31 )
      sub_1BCAA3C(Entity, Entity);
    items = v31->fields._items;
    v46 = Method_System_Collections_Generic_List_UserServantEntity__Add__;
    ++v31->fields._version;
    if ( !items )
      sub_1BCAA3C(Entity, Entity);
    size = v31->fields._size;
    if ( (unsigned int)size >= items->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v31,
        Entity,
        *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v46[4] + 192LL) + 112LL));
    }
    else
    {
      v48 = &items->obj.klass + size;
      v31->fields._size = size + 1;
      v48[4] = (Il2CppClass *)v44;
      sub_1BCA784((PartyOrganizationUtility_o *)(v48 + 4), v44, v38, v39, v40, v41, v42, v43);
    }
  }
  System_Collections_Generic_List_Enumerator_long___Dispose(
    &v62,
    (const MethodInfo_3313F24 *)Method_System_Collections_Generic_List_Enumerator_long__Dispose__);
  Instance = ServantSellConfirmListViewManager___c_TypeInfo;
  if ( !ServantSellConfirmListViewManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantSellConfirmListViewManager___c_TypeInfo, v33);
    Instance = ServantSellConfirmListViewManager___c_TypeInfo;
  }
  v51 = *(System_Comparison_T__o **)(*((_QWORD *)Instance + 23) + 8LL);
  if ( !v51 )
  {
    if ( !*((_DWORD *)Instance + 56) )
    {
      j_il2cpp_runtime_class_init_0(Instance, v33);
      Instance = ServantSellConfirmListViewManager___c_TypeInfo;
    }
    v52 = (Il2CppObject *)**((_QWORD **)Instance + 23);
    v51 = (System_Comparison_T__o *)sub_1BCAA2C(System_Comparison_UserServantEntity__TypeInfo, v33, v49, v50);
    System_Comparison_object____ctor(
      v51,
      v52,
      Method_ServantSellConfirmListViewManager___c__GetSvtSortEntList_b__16_0__,
      0LL);
    static_fields = ServantSellConfirmListViewManager___c_TypeInfo->static_fields;
    static_fields->__9__16_0 = (struct System_Comparison_UserServantEntity__o *)v51;
    sub_1BCA784((PartyOrganizationUtility_o *)&static_fields->__9__16_0, (int64_t)v51, v54, v55, v56, v57, v58, v59);
  }
  if ( !v31 )
LABEL_24:
    sub_1BCAA3C(Instance, v33);
  System_Collections_Generic_List_object___Sort_56244000(
    v31,
    v51,
    (const MethodInfo_35A3720 *)Method_System_Collections_Generic_List_UserServantEntity__Sort__);
  return (System_Collections_Generic_List_UserServantEntity__o *)v31;
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
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  int32_t kind; // w21
  __int64 Instance; // x0
  const MethodInfo *v25; // x1
  int32_t v26; // w20
  __int64 v27; // x21
  __int64 methodPtr_low; // x10
  Il2CppObject v29; // q0
  __int64 v30; // x22
  __int64 v31; // x1
  int64_t v32; // x2
  int32_t v33; // w3
  System_String_o *v34; // x4
  BattleSetupInfo_o *v35; // x5
  FollowerInfo_o *v36; // x6
  PartyListViewItem_o *v37; // x7
  Il2CppObject *v38; // x1
  UnityEngine_Object_o *v39; // x22
  System_Collections_Generic_List_object__o *itemList; // x8
  __int64 v41; // x20
  int32_t v42; // w21
  __int64 v43; // x22
  __int64 v44; // x10
  Il2CppObject v45; // q0
  __int64 v46; // x23
  const MethodInfo *v47; // x1
  int64_t v48; // x2
  int32_t v49; // w3
  System_String_o *v50; // x4
  BattleSetupInfo_o *v51; // x5
  FollowerInfo_o *v52; // x6
  PartyListViewItem_o *v53; // x7
  Il2CppObject *v54; // x1
  __int64 v55; // x8
  UnityEngine_Object_o *v56; // x23
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v57; // [xsp+0h] [xbp-D0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v58; // [xsp+20h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v59; // [xsp+40h] [xbp-90h]
  Il2CppObject *v60; // [xsp+68h] [xbp-68h] BYREF
  Il2CppObject *entity; // [xsp+78h] [xbp-58h] BYREF

  if ( (byte_4B1261E & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserCommandCodeMaster___, selectedId, method);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserServantMaster___, v5, v6);
    sub_1BCA7E0(&Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__TryGetEntity__, v7, v8);
    sub_1BCA7E0(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v13, v14);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v15, v16);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v17, v18);
    sub_1BCA7E0(&ServantSellConfirmListViewItem_TypeInfo, v19, v20);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v21, v22);
    byte_4B1261E = 1;
  }
  entity = 0LL;
  v60 = 0LL;
  if ( !this->fields.itemList )
    return;
  kind = this->fields.kind;
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_46;
  if ( kind == 2 )
  {
    Instance = (__int64)DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserCommandCodeMaster___);
    if ( Instance )
    {
      if ( !DataMasterBase_object__object__long___TryGetEntity(
              (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
              &entity,
              selectedId,
              (const MethodInfo_31B3040 *)Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__TryGetEntity__) )
        return;
      Instance = (__int64)this->fields.itemList;
      if ( Instance )
      {
        v26 = 0;
        while ( v26 < *(_DWORD *)(Instance + 24) )
        {
          Instance = (__int64)System_Collections_Generic_List_object___get_Item(
                                (System_Collections_Generic_List_object__o *)Instance,
                                v26,
                                (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
          if ( Instance )
          {
            v27 = Instance;
            methodPtr_low = LOBYTE(ServantSellConfirmListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
            if ( *(unsigned __int8 *)(*(_QWORD *)Instance + 304LL) >= (unsigned int)methodPtr_low
              && *(ServantSellConfirmListViewItem_c **)(*(_QWORD *)(*(_QWORD *)Instance + 200LL) + 8 * methodPtr_low - 8) == ServantSellConfirmListViewItem_TypeInfo )
            {
              Instance = ServantSellConfirmListViewItem__get_UserCommandCodeId(
                           (ServantSellConfirmListViewItem_o *)Instance,
                           v25);
              if ( entity )
              {
                v29 = entity[2];
                v30 = Instance;
                *(Il2CppObject *)&v59.fields.currentCryptoKey = entity[1];
                *(Il2CppObject *)&v59.fields.fakeValue = v29;
                if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v25);
                v58 = v59;
                if ( v30 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v58, 0LL) )
                {
                  v38 = entity;
                  *(_QWORD *)(v27 + 144) = entity;
                  sub_1BCA784((PartyOrganizationUtility_o *)(v27 + 144), (int64_t)v38, v32, v33, v34, v35, v36, v37);
                }
                *(_BYTE *)(v27 + 188) = 0;
                *(_DWORD *)(v27 + 216) = -1;
                v39 = *(UnityEngine_Object_o **)(v27 + 104);
                if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v31);
                if ( UnityEngine_Object__op_Inequality(v39, 0LL, 0LL) )
                {
                  Instance = *(_QWORD *)(v27 + 104);
                  if ( !Instance )
                    goto LABEL_46;
                  (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)Instance + 392LL))(
                    Instance,
                    v27,
                    *(_QWORD *)(*(_QWORD *)Instance + 400LL));
                }
                Instance = (__int64)this->fields.itemList;
                ++v26;
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
    sub_1BCAA3C(Instance, v25);
  }
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !Instance )
    goto LABEL_46;
  if ( !DataMasterBase_object__object__long___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
          &v60,
          selectedId,
          (const MethodInfo_31B3040 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__) )
    return;
  Instance = (__int64)UserGameMaster__getSelfUserGame(0LL);
  itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
  if ( !itemList )
    goto LABEL_46;
  v41 = Instance;
  v42 = 0;
  while ( v42 < itemList->fields._size )
  {
    Instance = (__int64)System_Collections_Generic_List_object___get_Item(
                          itemList,
                          v42,
                          (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    if ( Instance )
    {
      v43 = Instance;
      v44 = LOBYTE(ServantSellConfirmListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
      if ( *(unsigned __int8 *)(*(_QWORD *)Instance + 304LL) >= (unsigned int)v44
        && *(ServantSellConfirmListViewItem_c **)(*(_QWORD *)(*(_QWORD *)Instance + 200LL) + 8 * v44 - 8) == ServantSellConfirmListViewItem_TypeInfo )
      {
        Instance = ServantSellConfirmListViewItem__get_UserSvtId((ServantSellConfirmListViewItem_o *)Instance, v25);
        if ( v60 )
        {
          v45 = v60[2];
          v46 = Instance;
          *(Il2CppObject *)&v59.fields.currentCryptoKey = v60[1];
          *(Il2CppObject *)&v59.fields.fakeValue = v45;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v25);
          v57 = v59;
          if ( v46 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v57, 0LL) )
          {
            v54 = v60;
            *(_QWORD *)(v43 + 112) = v60;
            sub_1BCA784((PartyOrganizationUtility_o *)(v43 + 112), (int64_t)v54, v48, v49, v50, v51, v52, v53);
          }
          Instance = ServantSellConfirmListViewItem__get_UserSvtId((ServantSellConfirmListViewItem_o *)v43, v47);
          if ( v41 )
          {
            v55 = *(_QWORD *)(v41 + 112);
            *(_DWORD *)(v43 + 216) = -1;
            v56 = *(UnityEngine_Object_o **)(v43 + 104);
            *(_BYTE *)(v43 + 188) = Instance == v55;
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v25);
            Instance = UnityEngine_Object__op_Inequality(v56, 0LL, 0LL);
            if ( (Instance & 1) != 0 )
            {
              Instance = *(_QWORD *)(v43 + 104);
              if ( !Instance )
                goto LABEL_46;
              Instance = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)Instance + 392LL))(
                           Instance,
                           v43,
                           *(_QWORD *)(*(_QWORD *)Instance + 400LL));
            }
            itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
            ++v42;
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
  __int64 v2; // x2
  int32_t callbackCount; // w8
  bool v5; // vf
  int32_t v6; // w8

  if ( (byte_4B12621 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    byte_4B12621 = 1;
  }
  callbackCount = this->fields.callbackCount;
  v5 = __OFSUB__(callbackCount, 1);
  v6 = callbackCount - 1;
  if ( v6 < 0 == v5 )
    this->fields.callbackCount = v6;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantSellConfirmListViewManager__RequestListObject(
        ServantSellConfirmListViewManager_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  System_Collections_Generic_List_ServantSellConfirmListViewObject__o *ObjectList; // x0
  __int64 v14; // x1
  int32_t size; // w8
  System_Collections_Generic_List_object__o *v16; // x21
  int32_t v17; // w22
  Il2CppObject *Item; // x23
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x3
  System_Action_o *v22; // x24
  const MethodInfo *v23; // x3

  if ( (byte_4B12620 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, *(_QWORD *)&mode, method);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ServantSellConfirmListViewObject__get_Count__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ServantSellConfirmListViewObject__get_Item__, v7, v8);
    sub_1BCA7E0(&Method_ServantSellConfirmListViewManager_OnMoveEnd__, v9, v10);
    sub_1BCA7E0(&StringLiteral_10069/*"OnMoveEnd"*/, v11, v12);
    byte_4B12620 = 1;
  }
  ObjectList = ServantSellConfirmListViewManager__get_ObjectList(this, *(const MethodInfo **)&mode);
  if ( !ObjectList )
    goto LABEL_10;
  size = ObjectList->fields._size;
  v16 = (System_Collections_Generic_List_object__o *)ObjectList;
  if ( size >= 1 )
  {
    v17 = 0;
    this->fields.callbackCount = size;
    while ( 1 )
    {
      Item = System_Collections_Generic_List_object___get_Item(
               v16,
               v17,
               (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_ServantSellConfirmListViewObject__get_Item__);
      v22 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v19, v20, v21);
      System_Action___ctor(v22, (Il2CppObject *)this, Method_ServantSellConfirmListViewManager_OnMoveEnd__, 0LL);
      if ( !Item )
        break;
      ServantSellConfirmListViewObject__Init((ServantSellConfirmListViewObject_o *)Item, mode, v22, v23);
      if ( ++v17 >= v16->fields._size )
        return;
    }
LABEL_10:
    sub_1BCAA3C(ObjectList, v14);
  }
  this->fields.callbackCount = 1;
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_10069/*"OnMoveEnd"*/,
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
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.onSelectItem,
    (int64_t)onSelectItem,
    (int64_t)onSelectItem,
    (int32_t)method,
    v4,
    v5,
    v6,
    v7);
  ServantSellConfirmListViewManager__SetMode_33382208(this, mode, v10);
}


void __fastcall ServantSellConfirmListViewManager__SetMode_33382208(
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
  if ( (byte_4B1261F & 1) == 0 )
  {
    this = (ServantSellConfirmListViewManager_o *)sub_1BCA7E0(&ServantSellConfirmListViewObject_TypeInfo, obj, item);
    byte_4B1261F = 1;
  }
  if ( !obj
    || (methodPtr_low = LOBYTE(ServantSellConfirmListViewObject_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(obj->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low)
    || (ServantSellConfirmListViewObject_c *)obj->klass->_2.typeHierarchy[methodPtr_low - 1] != ServantSellConfirmListViewObject_TypeInfo )
  {
    sub_1BCAA3C(this, obj);
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
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  System_Collections_Generic_List_object__o *v17; // x20
  const MethodInfo *v18; // x1
  System_Collections_Generic_List_object__o *objectList; // x0
  int32_t v20; // w21
  __int64 v21; // x1
  Il2CppObject *Item; // x22
  Il2CppObject *v23; // x22
  int64_t v24; // x2
  int32_t v25; // w3
  System_String_o *v26; // x4
  BattleSetupInfo_o *v27; // x5
  FollowerInfo_o *v28; // x6
  PartyListViewItem_o *v29; // x7
  struct System_Object_array *items; // x8
  _QWORD *v31; // x9
  __int64 size; // x10
  Il2CppClass **v33; // x0

  if ( (byte_4B12617 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_ServantSellConfirmListViewObject___, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ServantSellConfirmListViewObject__Add__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ServantSellConfirmListViewObject___ctor__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GameObject__get_Count__, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GameObject__get_Item__, v11, v12);
    sub_1BCA7E0(&System_Collections_Generic_List_ServantSellConfirmListViewObject__TypeInfo, v13, v14);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v15, v16);
    byte_4B12617 = 1;
  }
  v17 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_ServantSellConfirmListViewObject__TypeInfo,
                                                       method,
                                                       v2,
                                                       v3);
  System_Collections_Generic_List_object____ctor(
    v17,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_ServantSellConfirmListViewObject___ctor__);
  objectList = (System_Collections_Generic_List_object__o *)this->fields.objectList;
  if ( !objectList )
LABEL_21:
    sub_1BCAA3C(objectList, v18);
  v20 = 0;
  while ( v20 < objectList->fields._size )
  {
    Item = System_Collections_Generic_List_object___get_Item(
             objectList,
             v20,
             (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_GameObject__get_Item__);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v21);
    if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Item, 0LL, 0LL) )
    {
      objectList = (System_Collections_Generic_List_object__o *)this->fields.objectList;
      if ( !objectList )
        goto LABEL_21;
      objectList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                  objectList,
                                                                  v20,
                                                                  (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_GameObject__get_Item__);
      if ( !objectList )
        goto LABEL_21;
      objectList = (System_Collections_Generic_List_object__o *)UnityEngine_GameObject__GetComponent_object_(
                                                                  (UnityEngine_GameObject_o *)objectList,
                                                                  (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_ServantSellConfirmListViewObject___);
      if ( !objectList )
        goto LABEL_21;
      v23 = (Il2CppObject *)objectList;
      objectList = (System_Collections_Generic_List_object__o *)ServantSellConfirmListViewObject__GetItem(
                                                                  (ServantSellConfirmListViewObject_o *)objectList,
                                                                  v18);
      if ( objectList )
      {
        v18 = (const MethodInfo *)objectList;
        if ( !LOBYTE(objectList[2].monitor)
          || (objectList = (System_Collections_Generic_List_object__o *)ListViewManager__ClippingItem_41463120(
                                                                          (ListViewManager_o *)this,
                                                                          (ListViewItem_o *)objectList,
                                                                          0LL),
              ((unsigned __int8)objectList & 1) != 0) )
        {
          if ( !v17 )
            goto LABEL_21;
          items = v17->fields._items;
          v31 = Method_System_Collections_Generic_List_ServantSellConfirmListViewObject__Add__;
          ++v17->fields._version;
          if ( !items )
            goto LABEL_21;
          size = v17->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v17,
              v23,
              *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v31[4] + 192LL) + 112LL));
          }
          else
          {
            v33 = &items->obj.klass + size;
            v17->fields._size = size + 1;
            v33[4] = (Il2CppClass *)v23;
            sub_1BCA784((PartyOrganizationUtility_o *)(v33 + 4), (int64_t)v23, v24, v25, v26, v27, v28, v29);
          }
        }
      }
    }
    objectList = (System_Collections_Generic_List_object__o *)this->fields.objectList;
    ++v20;
    if ( !objectList )
      goto LABEL_21;
  }
  return (System_Collections_Generic_List_ServantSellConfirmListViewObject__o *)v17;
}


System_Collections_Generic_List_ServantSellConfirmListViewObject__o *__fastcall ServantSellConfirmListViewManager__get_ObjectList(
        ServantSellConfirmListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  System_Collections_Generic_List_object__o *v17; // x20
  __int64 v18; // x1
  System_Collections_Generic_List_object__o *objectList; // x0
  int32_t v20; // w21
  __int64 v21; // x1
  Il2CppObject *Item; // x22
  int64_t v23; // x2
  int32_t v24; // w3
  System_String_o *v25; // x4
  BattleSetupInfo_o *v26; // x5
  FollowerInfo_o *v27; // x6
  PartyListViewItem_o *v28; // x7
  struct System_Object_array *items; // x8
  _QWORD *v30; // x9
  __int64 size; // x10
  int64_t v32; // x1
  Il2CppClass **v33; // x0

  if ( (byte_4B12616 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_ServantSellConfirmListViewObject___, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ServantSellConfirmListViewObject__Add__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ServantSellConfirmListViewObject___ctor__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GameObject__get_Count__, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GameObject__get_Item__, v11, v12);
    sub_1BCA7E0(&System_Collections_Generic_List_ServantSellConfirmListViewObject__TypeInfo, v13, v14);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v15, v16);
    byte_4B12616 = 1;
  }
  v17 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_ServantSellConfirmListViewObject__TypeInfo,
                                                       method,
                                                       v2,
                                                       v3);
  System_Collections_Generic_List_object____ctor(
    v17,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_ServantSellConfirmListViewObject___ctor__);
  objectList = (System_Collections_Generic_List_object__o *)this->fields.objectList;
  if ( !objectList )
LABEL_17:
    sub_1BCAA3C(objectList, v18);
  v20 = 0;
  while ( v20 < objectList->fields._size )
  {
    Item = System_Collections_Generic_List_object___get_Item(
             objectList,
             v20,
             (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_GameObject__get_Item__);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v21);
    if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Item, 0LL, 0LL) )
    {
      objectList = (System_Collections_Generic_List_object__o *)this->fields.objectList;
      if ( !objectList )
        goto LABEL_17;
      objectList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                  objectList,
                                                                  v20,
                                                                  (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_GameObject__get_Item__);
      if ( !objectList )
        goto LABEL_17;
      objectList = (System_Collections_Generic_List_object__o *)UnityEngine_GameObject__GetComponent_object_(
                                                                  (UnityEngine_GameObject_o *)objectList,
                                                                  (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_ServantSellConfirmListViewObject___);
      if ( !v17 )
        goto LABEL_17;
      items = v17->fields._items;
      v30 = Method_System_Collections_Generic_List_ServantSellConfirmListViewObject__Add__;
      ++v17->fields._version;
      if ( !items )
        goto LABEL_17;
      size = v17->fields._size;
      v32 = (int64_t)objectList;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v17,
          (Il2CppObject *)objectList,
          *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v30[4] + 192LL) + 112LL));
      }
      else
      {
        v33 = &items->obj.klass + size;
        v17->fields._size = size + 1;
        v33[4] = (Il2CppClass *)v32;
        sub_1BCA784((PartyOrganizationUtility_o *)(v33 + 4), v32, v23, v24, v25, v26, v27, v28);
      }
    }
    objectList = (System_Collections_Generic_List_object__o *)this->fields.objectList;
    ++v20;
    if ( !objectList )
      goto LABEL_17;
  }
  return (System_Collections_Generic_List_ServantSellConfirmListViewObject__o *)v17;
}


void __fastcall ServantSellConfirmListViewManager___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7

  if ( (byte_4B12624 & 1) == 0 )
  {
    sub_1BCA7E0(&ServantSellConfirmListViewManager___c_TypeInfo, v1, v2);
    byte_4B12624 = 1;
  }
  v4 = (Il2CppObject *)sub_1BCAA2C(ServantSellConfirmListViewManager___c_TypeInfo, v1, v2, v3);
  System_Object___ctor(v4, 0LL);
  ServantSellConfirmListViewManager___c_TypeInfo->static_fields->__9 = (struct ServantSellConfirmListViewManager___c_o *)v4;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)ServantSellConfirmListViewManager___c_TypeInfo->static_fields,
    (int64_t)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
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
  __int64 v7; // x1
  __int64 v9; // x21
  __int64 v10; // x22
  int32_t v11; // w21
  __int64 v12; // x1
  __int64 v13; // x20
  __int64 v14; // x21
  int32_t v15; // w0
  __int64 v16; // x8
  int32_t v17; // w19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v18; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v19; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v20; // 0:x0.16

  if ( (byte_4B12625 & 1) == 0 )
  {
    this = (ServantSellConfirmListViewManager___c_o *)sub_1BCA7E0(
                                                        &CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo,
                                                        a,
                                                        b);
    byte_4B12625 = 1;
  }
  if ( !a || (this = (ServantSellConfirmListViewManager___c_o *)UserCommandCodeEntity__GetRarity(a, 0LL), !b) )
    sub_1BCAA3C(this, a);
  if ( (int)this < UserCommandCodeEntity__GetRarity(b, 0LL) )
    return 1;
  Rarity = UserCommandCodeEntity__GetRarity(a, 0LL);
  if ( Rarity > UserCommandCodeEntity__GetRarity(b, 0LL) )
    return -1;
  v10 = *(_QWORD *)&a->fields.commandCodeId.fields.currentCryptoKey;
  v9 = *(_QWORD *)&a->fields.commandCodeId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v7);
  *(_QWORD *)&v18.fields.currentCryptoKey = v10;
  *(_QWORD *)&v18.fields.fakeValue = v9;
  v11 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v18, 0LL);
  if ( v11 < CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(b->fields.commandCodeId, 0LL) )
    return 1;
  v14 = *(_QWORD *)&a->fields.commandCodeId.fields.currentCryptoKey;
  v13 = *(_QWORD *)&a->fields.commandCodeId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v12);
  *(_QWORD *)&v19.fields.currentCryptoKey = v14;
  *(_QWORD *)&v19.fields.fakeValue = v13;
  v15 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v19, 0LL);
  v16 = *(_QWORD *)&b->fields.commandCodeId.fields.currentCryptoKey;
  *(_QWORD *)&v20.fields.fakeValue = *(_QWORD *)&b->fields.commandCodeId.fields.fakeValue;
  v17 = v15;
  *(_QWORD *)&v20.fields.currentCryptoKey = v16;
  if ( v17 <= CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v20, 0LL) )
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
    sub_1BCAA3C(this, a);
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