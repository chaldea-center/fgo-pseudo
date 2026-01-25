void ServantCheckEquipListViewManager___ctor(ServantCheckEquipListViewManager_o *this, const MethodInfo *method)
{
  ListViewManager___ctor((ListViewManager_o *)this, 0);
}


void ServantCheckEquipListViewManager__CreateCombineServantList(
        ServantCheckEquipListViewManager_o *this,
        System_Collections_Generic_List_UserServantEntity__o *userSvtEntityList,
        const MethodInfo *method)
{
  Il2CppObject *current; // x22
  int32_t v6; // w23
  ServantCheckEquipListViewItem_o *v7; // x21
  const MethodInfo *v8; // x4
  __int64 v9; // x1
  int32_t v10; // w2
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7
  System_Collections_Generic_List_object__o *itemList; // x0
  struct System_Object_array *items; // x8
  _QWORD *v18; // x9
  __int64 size; // x10
  Il2CppClass **v20; // x8
  __int64 v21; // x0
  __int64 v22; // x1
  const MethodInfo *v23; // x2
  struct System_Collections_Generic_List_ListViewItem__o *v24; // x8
  struct ListViewItemSeed_o *seed; // x9
  System_Collections_Generic_List_Enumerator_object__o v26; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v27; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_4CEA502 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_UserServantEntity__Dispose__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_UserServantEntity__MoveNext__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_UserServantEntity__get_Current__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_UserServantEntity__GetEnumerator__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_UserServantEntity__IndexOf__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_UserServantEntity__get_Count__);
    sub_1C7BAE8(&ServantCheckEquipListViewItem_TypeInfo);
    byte_4CEA502 = 1;
  }
  memset(&v27, 0, sizeof(v27));
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0);
  if ( userSvtEntityList && userSvtEntityList->fields._size >= 1 )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v26,
      (System_Collections_Generic_List_object__o *)userSvtEntityList,
      (const MethodInfo_383F8F4 *)Method_System_Collections_Generic_List_UserServantEntity__GetEnumerator__);
    v27 = v26;
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v27,
              (const MethodInfo_35BDF98 *)Method_System_Collections_Generic_List_Enumerator_UserServantEntity__MoveNext__) )
    {
      current = v27.fields._current;
      if ( NpCombineControl__CheckConfirm_49198656((UserServantEntity_o *)v27.fields._current, 0) )
      {
        v6 = System_Collections_Generic_List_object___IndexOf(
               (System_Collections_Generic_List_object__o *)userSvtEntityList,
               current,
               (const MethodInfo_383FA9C *)Method_System_Collections_Generic_List_UserServantEntity__IndexOf__);
        v7 = (ServantCheckEquipListViewItem_o *)sub_1C7BD34(ServantCheckEquipListViewItem_TypeInfo);
        ServantCheckEquipListViewItem___ctor(v7, (UserServantEntity_o *)current, v6, 1, v8);
        itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
        if ( !itemList )
          sub_1C7BD40(0, v9);
        items = itemList->fields._items;
        v18 = Method_System_Collections_Generic_List_ListViewItem__Add__;
        ++itemList->fields._version;
        if ( !items )
          sub_1C7BD40(itemList, v9);
        size = itemList->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            itemList,
            (Il2CppObject *)v7,
            *(const MethodInfo_383EDFC **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
        }
        else
        {
          v20 = &items->obj.klass + size;
          itemList->fields._size = size + 1;
          v20[4] = (Il2CppClass *)v7;
          sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v20 + 4), (int32_t)v7, v10, v11, v12, v13, v14, v15);
        }
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v27,
      (const MethodInfo_35BDF94 *)Method_System_Collections_Generic_List_Enumerator_UserServantEntity__Dispose__);
    v24 = this->fields.itemList;
    if ( !v24 || (seed = this->fields.seed) == 0 )
      sub_1C7BD40(v21, v22);
    ServantCheckEquipListViewManager__SetScrollBarActive(
      this,
      seed->fields.arrangementVolume.fields.x < (float)v24->fields._size,
      v23);
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0);
  }
}


void ServantCheckEquipListViewManager__CreateCombinedAppendSkillServantList(
        ServantCheckEquipListViewManager_o *this,
        System_Collections_Generic_List_UserServantEntity__o *userSvtEntityList,
        const MethodInfo *method)
{
  _BOOL8 IsNullOrEmpty; // x0
  __int64 v6; // x1
  int32_t v7; // w20
  Il2CppObject *current; // x22
  ServantCheckEquipListViewItem_o *v9; // x21
  const MethodInfo *v10; // x4
  __int64 v11; // x1
  int32_t v12; // w2
  int32_t v13; // w3
  System_String_o *v14; // x4
  int32_t v15; // w5
  int64_t v16; // x6
  System_String_o *v17; // x7
  System_Collections_Generic_List_object__o *itemList; // x0
  struct System_Object_array *items; // x8
  _QWORD *v20; // x9
  __int64 size; // x10
  Il2CppClass **v22; // x8
  const MethodInfo *v23; // x2
  struct System_Collections_Generic_List_ListViewItem__o *v24; // x8
  struct ListViewItemSeed_o *seed; // x9
  System_Collections_Generic_List_Enumerator_object__o v26; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v27; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4CEA505 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_UserServantEntity__Dispose__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_UserServantEntity__MoveNext__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_UserServantEntity__get_Current__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_UserServantEntity__GetEnumerator__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_1C7BAE8(&ServantCheckEquipListViewItem_TypeInfo);
    byte_4CEA505 = 1;
  }
  memset(&v27, 0, sizeof(v27));
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0);
  IsNullOrEmpty = BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)userSvtEntityList, 0);
  if ( !IsNullOrEmpty )
  {
    if ( !userSvtEntityList )
      goto LABEL_19;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v26,
      (System_Collections_Generic_List_object__o *)userSvtEntityList,
      (const MethodInfo_383F8F4 *)Method_System_Collections_Generic_List_UserServantEntity__GetEnumerator__);
    v27 = v26;
    v7 = 0;
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v27,
              (const MethodInfo_35BDF98 *)Method_System_Collections_Generic_List_Enumerator_UserServantEntity__MoveNext__) )
    {
      current = v27.fields._current;
      v9 = (ServantCheckEquipListViewItem_o *)sub_1C7BD34(ServantCheckEquipListViewItem_TypeInfo);
      ServantCheckEquipListViewItem___ctor(v9, (UserServantEntity_o *)current, v7, 4, v10);
      itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
      if ( !itemList )
        sub_1C7BD40(0, v11);
      items = itemList->fields._items;
      v20 = Method_System_Collections_Generic_List_ListViewItem__Add__;
      ++itemList->fields._version;
      if ( !items )
        sub_1C7BD40(itemList, v11);
      size = itemList->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          itemList,
          (Il2CppObject *)v9,
          *(const MethodInfo_383EDFC **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
      }
      else
      {
        v22 = &items->obj.klass + size;
        itemList->fields._size = size + 1;
        v22[4] = (Il2CppClass *)v9;
        sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v22 + 4), (int32_t)v9, v12, v13, v14, v15, v16, v17);
      }
      ++v7;
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v27,
      (const MethodInfo_35BDF94 *)Method_System_Collections_Generic_List_Enumerator_UserServantEntity__Dispose__);
    v24 = this->fields.itemList;
    if ( !v24 || (seed = this->fields.seed) == 0 )
LABEL_19:
      sub_1C7BD40(IsNullOrEmpty, v6);
    ServantCheckEquipListViewManager__SetScrollBarActive(
      this,
      seed->fields.arrangementVolume.fields.x < (float)v24->fields._size,
      v23);
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0);
  }
}


void ServantCheckEquipListViewManager__CreateList(
        ServantCheckEquipListViewManager_o *this,
        System_Collections_Generic_List_SvtEqCombineListViewItem__o *materialList,
        const MethodInfo *method)
{
  int *Item; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x2
  int32_t size; // w25
  int32_t v9; // w21
  UserServantEntity_o *v10; // x23
  int32_t v11; // w24
  ServantCheckEquipListViewItem_o *v12; // x22
  const MethodInfo *v13; // x4
  int32_t v14; // w2
  int32_t v15; // w3
  System_String_o *v16; // x4
  int32_t v17; // w5
  int64_t v18; // x6
  System_String_o *v19; // x7
  __int64 v20; // x8
  _QWORD *v21; // x9
  __int64 v22; // x10
  __int64 v23; // x8
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x8
  struct ListViewItemSeed_o *seed; // x9

  if ( (byte_4CEA500 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_SvtEqCombineListViewItem__get_Count__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_SvtEqCombineListViewItem__get_Item__);
    sub_1C7BAE8(&ServantCheckEquipListViewItem_TypeInfo);
    byte_4CEA500 = 1;
  }
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0);
  if ( !materialList )
    goto LABEL_20;
  size = materialList->fields._size;
  if ( size >= 1 )
  {
    v9 = 0;
    while ( 1 )
    {
      Item = (int *)System_Collections_Generic_List_object___get_Item(
                      (System_Collections_Generic_List_object__o *)materialList,
                      v9,
                      (const MethodInfo_383EB2C *)Method_System_Collections_Generic_List_SvtEqCombineListViewItem__get_Item__);
      if ( !Item )
        break;
      if ( *((_BYTE *)Item + 212) || *((_BYTE *)Item + 252) || *((_BYTE *)Item + 253) || *((_BYTE *)Item + 254) )
      {
        v10 = (UserServantEntity_o *)*((_QWORD *)Item + 16);
        v11 = Item[4];
        v12 = (ServantCheckEquipListViewItem_o *)sub_1C7BD34(ServantCheckEquipListViewItem_TypeInfo);
        ServantCheckEquipListViewItem___ctor(v12, v10, v11, 0, v13);
        Item = (int *)this->fields.itemList;
        if ( !Item )
          break;
        v20 = *((_QWORD *)Item + 2);
        v21 = Method_System_Collections_Generic_List_ListViewItem__Add__;
        ++Item[7];
        if ( !v20 )
          break;
        v22 = Item[6];
        if ( (unsigned int)v22 >= *(_DWORD *)(v20 + 24) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)Item,
            (Il2CppObject *)v12,
            *(const MethodInfo_383EDFC **)(*(_QWORD *)(v21[4] + 192LL) + 112LL));
        }
        else
        {
          v23 = v20 + 8 * v22;
          Item[6] = v22 + 1;
          *(_QWORD *)(v23 + 32) = v12;
          sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v23 + 32), (int32_t)v12, v14, v15, v16, v17, v18, v19);
        }
      }
      if ( size == ++v9 )
        goto LABEL_17;
    }
LABEL_20:
    sub_1C7BD40(Item, v6);
  }
LABEL_17:
  itemList = this->fields.itemList;
  if ( !itemList )
    goto LABEL_20;
  seed = this->fields.seed;
  if ( !seed )
    goto LABEL_20;
  ServantCheckEquipListViewManager__SetScrollBarActive(
    this,
    seed->fields.arrangementVolume.fields.x < (float)itemList->fields._size,
    v7);
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0);
}


void ServantCheckEquipListViewManager__CreateList_35333800(
        ServantCheckEquipListViewManager_o *this,
        System_Collections_Generic_List_ServantOperationListViewItem__o *materialList,
        const MethodInfo *method)
{
  ServantOperationListViewItem_o *Item; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x2
  int32_t size; // w25
  int32_t v9; // w21
  ServantOperationListViewItem_o *v10; // x22
  UserServantEntity_o *UserServantEntity_k__BackingField; // x23
  int32_t selectNum; // w24
  ServantCheckEquipListViewItem_o *v13; // x22
  const MethodInfo *v14; // x4
  int32_t v15; // w2
  int32_t v16; // w3
  System_String_o *v17; // x4
  int32_t v18; // w5
  int64_t v19; // x6
  System_String_o *v20; // x7
  __int64 v21; // x8
  _QWORD *v22; // x9
  __int64 sortIndex; // x10
  __int64 v24; // x8
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x8
  struct ListViewItemSeed_o *seed; // x9

  if ( (byte_4CEA501 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_ServantOperationListViewItem__get_Count__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_ServantOperationListViewItem__get_Item__);
    sub_1C7BAE8(&ServantCheckEquipListViewItem_TypeInfo);
    byte_4CEA501 = 1;
  }
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0);
  if ( !materialList )
    goto LABEL_21;
  size = materialList->fields._size;
  if ( size >= 1 )
  {
    v9 = 0;
    while ( 1 )
    {
      Item = (ServantOperationListViewItem_o *)System_Collections_Generic_List_object___get_Item(
                                                 (System_Collections_Generic_List_object__o *)materialList,
                                                 v9,
                                                 (const MethodInfo_383EB2C *)Method_System_Collections_Generic_List_ServantOperationListViewItem__get_Item__);
      if ( !Item )
        break;
      v10 = Item;
      Item = (ServantOperationListViewItem_o *)ServantOperationListViewItem__get_IsServantEquip(Item, 0);
      if ( ((unsigned __int8)Item & 1) != 0
        && (v10->fields._IsPartyEquip_k__BackingField
         || v10->fields._IsUseSupportEquip_k__BackingField
         || v10->fields._IsUseRecommendSupportEquip_k__BackingField
         || v10->fields._IsUseGrandEquip_k__BackingField) )
      {
        UserServantEntity_k__BackingField = v10->fields._UserServantEntity_k__BackingField;
        selectNum = v10->fields.selectNum;
        v13 = (ServantCheckEquipListViewItem_o *)sub_1C7BD34(ServantCheckEquipListViewItem_TypeInfo);
        ServantCheckEquipListViewItem___ctor(v13, UserServantEntity_k__BackingField, selectNum, 0, v14);
        Item = (ServantOperationListViewItem_o *)this->fields.itemList;
        if ( !Item )
          break;
        v21 = *(_QWORD *)&Item->fields.selectNum;
        v22 = Method_System_Collections_Generic_List_ListViewItem__Add__;
        ++Item->fields.loopIndex;
        if ( !v21 )
          break;
        sortIndex = Item->fields.sortIndex;
        if ( (unsigned int)sortIndex >= *(_DWORD *)(v21 + 24) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)Item,
            (Il2CppObject *)v13,
            *(const MethodInfo_383EDFC **)(*(_QWORD *)(v22[4] + 192LL) + 112LL));
        }
        else
        {
          v24 = v21 + 8 * sortIndex;
          Item->fields.sortIndex = sortIndex + 1;
          *(_QWORD *)(v24 + 32) = v13;
          sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v24 + 32), (int32_t)v13, v15, v16, v17, v18, v19, v20);
        }
      }
      if ( size == ++v9 )
        goto LABEL_18;
    }
LABEL_21:
    sub_1C7BD40(Item, v6);
  }
LABEL_18:
  itemList = this->fields.itemList;
  if ( !itemList )
    goto LABEL_21;
  seed = this->fields.seed;
  if ( !seed )
    goto LABEL_21;
  ServantCheckEquipListViewManager__SetScrollBarActive(
    this,
    seed->fields.arrangementVolume.fields.x < (float)itemList->fields._size,
    v7);
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0);
}


void ServantCheckEquipListViewManager__CreateMaterialTdServantList(
        ServantCheckEquipListViewManager_o *this,
        System_Collections_Generic_List_UserServantEntity__o *userSvtEntityList,
        const MethodInfo *method)
{
  Il2CppObject *current; // x21
  Il2CppObject *Instance; // x0
  __int64 v7; // x1
  Il2CppObject *MasterData_object; // x0
  __int64 v9; // x1
  DataMasterBase_TMaster__TEntity__PKType__o *v10; // x22
  void *monitor; // x23
  Il2CppClass *klass; // x24
  __int64 v13; // x0
  Il2CppObject *Entity; // x0
  __int64 v15; // x1
  int32_t v16; // w23
  ServantCheckEquipListViewItem_o *v17; // x22
  const MethodInfo *v18; // x4
  __int64 v19; // x1
  int32_t v20; // w2
  int32_t v21; // w3
  System_String_o *v22; // x4
  int32_t v23; // w5
  int64_t v24; // x6
  System_String_o *v25; // x7
  System_Collections_Generic_List_object__o *itemList; // x0
  struct System_Object_array *items; // x8
  _QWORD *v28; // x9
  __int64 size; // x10
  Il2CppClass **v30; // x8
  __int64 v31; // x0
  __int64 v32; // x1
  const MethodInfo *v33; // x2
  struct System_Collections_Generic_List_ListViewItem__o *v34; // x8
  struct ListViewItemSeed_o *seed; // x9
  System_Collections_Generic_List_Enumerator_object__o v36; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v37; // [xsp+20h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v38; // 0:x0.16

  if ( (byte_4CEA504 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C7BAE8(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_UserServantEntity__Dispose__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_UserServantEntity__MoveNext__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_UserServantEntity__get_Current__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_UserServantEntity__GetEnumerator__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_UserServantEntity__IndexOf__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_UserServantEntity__get_Count__);
    sub_1C7BAE8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C7BAE8(&ServantCheckEquipListViewItem_TypeInfo);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4CEA504 = 1;
  }
  memset(&v37, 0, sizeof(v37));
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0);
  if ( userSvtEntityList && userSvtEntityList->fields._size >= 1 )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v36,
      (System_Collections_Generic_List_object__o *)userSvtEntityList,
      (const MethodInfo_383F8F4 *)Method_System_Collections_Generic_List_UserServantEntity__GetEnumerator__);
    v37 = v36;
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v37,
              (const MethodInfo_35BDF98 *)Method_System_Collections_Generic_List_Enumerator_UserServantEntity__MoveNext__) )
    {
      current = v37.fields._current;
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        sub_1C7BD40(0, v7);
      MasterData_object = DataManager__GetMasterData_object_(
                            (DataManager_o *)Instance,
                            (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_ServantMaster___);
      if ( !current )
        sub_1C7BD40(MasterData_object, v9);
      v10 = (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object;
      klass = current[5].klass;
      monitor = current[5].monitor;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v38.fields.currentCryptoKey = klass;
      *(_QWORD *)&v38.fields.fakeValue = monitor;
      v13 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49449776(v38, 0);
      if ( !v10 )
        sub_1C7BD40(v13, (unsigned int)v13);
      Entity = DataMasterBase_object__object__int___GetEntity(
                 v10,
                 v13,
                 (const MethodInfo_342E2FC *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
      if ( !Entity )
        sub_1C7BD40(0, v15);
      if ( ServantEntity__get_IsServantMaterialTd((ServantEntity_o *)Entity, 0) )
      {
        v16 = System_Collections_Generic_List_object___IndexOf(
                (System_Collections_Generic_List_object__o *)userSvtEntityList,
                current,
                (const MethodInfo_383FA9C *)Method_System_Collections_Generic_List_UserServantEntity__IndexOf__);
        v17 = (ServantCheckEquipListViewItem_o *)sub_1C7BD34(ServantCheckEquipListViewItem_TypeInfo);
        ServantCheckEquipListViewItem___ctor(v17, (UserServantEntity_o *)current, v16, 3, v18);
        itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
        if ( !itemList )
          sub_1C7BD40(0, v19);
        items = itemList->fields._items;
        v28 = Method_System_Collections_Generic_List_ListViewItem__Add__;
        ++itemList->fields._version;
        if ( !items )
          sub_1C7BD40(itemList, v19);
        size = itemList->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            itemList,
            (Il2CppObject *)v17,
            *(const MethodInfo_383EDFC **)(*(_QWORD *)(v28[4] + 192LL) + 112LL));
        }
        else
        {
          v30 = &items->obj.klass + size;
          itemList->fields._size = size + 1;
          v30[4] = (Il2CppClass *)v17;
          sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v30 + 4), (int32_t)v17, v20, v21, v22, v23, v24, v25);
        }
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v37,
      (const MethodInfo_35BDF94 *)Method_System_Collections_Generic_List_Enumerator_UserServantEntity__Dispose__);
    v34 = this->fields.itemList;
    if ( !v34 || (seed = this->fields.seed) == 0 )
      sub_1C7BD40(v31, v32);
    ServantCheckEquipListViewManager__SetScrollBarActive(
      this,
      seed->fields.arrangementVolume.fields.x < (float)v34->fields._size,
      v33);
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0);
  }
}


void ServantCheckEquipListViewManager__CreateSSRareServantList(
        ServantCheckEquipListViewManager_o *this,
        System_Collections_Generic_List_UserServantEntity__o *userSvtEntityList,
        const MethodInfo *method)
{
  Il2CppObject *current; // x21
  Il2CppObject *Instance; // x0
  __int64 v7; // x1
  Il2CppObject *MasterData_object; // x0
  __int64 v9; // x1
  DataMasterBase_TMaster__TEntity__PKType__o *v10; // x22
  void *monitor; // x23
  Il2CppClass *klass; // x24
  __int64 v13; // x0
  Il2CppObject *Entity; // x0
  __int64 v15; // x1
  int32_t v16; // w23
  ServantCheckEquipListViewItem_o *v17; // x22
  const MethodInfo *v18; // x4
  __int64 v19; // x1
  int32_t v20; // w2
  int32_t v21; // w3
  System_String_o *v22; // x4
  int32_t v23; // w5
  int64_t v24; // x6
  System_String_o *v25; // x7
  System_Collections_Generic_List_object__o *itemList; // x0
  struct System_Object_array *items; // x8
  _QWORD *v28; // x9
  __int64 size; // x10
  Il2CppClass **v30; // x8
  __int64 v31; // x0
  __int64 v32; // x1
  const MethodInfo *v33; // x2
  struct System_Collections_Generic_List_ListViewItem__o *v34; // x8
  struct ListViewItemSeed_o *seed; // x9
  System_Collections_Generic_List_Enumerator_object__o v36; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v37; // [xsp+20h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v38; // 0:x0.16

  if ( (byte_4CEA503 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C7BAE8(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_UserServantEntity__Dispose__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_UserServantEntity__MoveNext__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_UserServantEntity__get_Current__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_UserServantEntity__GetEnumerator__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_UserServantEntity__IndexOf__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_UserServantEntity__get_Count__);
    sub_1C7BAE8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C7BAE8(&ServantCheckEquipListViewItem_TypeInfo);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4CEA503 = 1;
  }
  memset(&v37, 0, sizeof(v37));
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0);
  if ( userSvtEntityList && userSvtEntityList->fields._size >= 1 )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v36,
      (System_Collections_Generic_List_object__o *)userSvtEntityList,
      (const MethodInfo_383F8F4 *)Method_System_Collections_Generic_List_UserServantEntity__GetEnumerator__);
    v37 = v36;
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v37,
              (const MethodInfo_35BDF98 *)Method_System_Collections_Generic_List_Enumerator_UserServantEntity__MoveNext__) )
    {
      current = v37.fields._current;
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        sub_1C7BD40(0, v7);
      MasterData_object = DataManager__GetMasterData_object_(
                            (DataManager_o *)Instance,
                            (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_ServantMaster___);
      if ( !current )
        sub_1C7BD40(MasterData_object, v9);
      v10 = (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object;
      klass = current[5].klass;
      monitor = current[5].monitor;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v38.fields.currentCryptoKey = klass;
      *(_QWORD *)&v38.fields.fakeValue = monitor;
      v13 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49449776(v38, 0);
      if ( !v10 )
        sub_1C7BD40(v13, (unsigned int)v13);
      Entity = DataMasterBase_object__object__int___GetEntity(
                 v10,
                 v13,
                 (const MethodInfo_342E2FC *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
      if ( !Entity )
        sub_1C7BD40(0, v15);
      if ( ServantEntity__get_IsServant((ServantEntity_o *)Entity, 0)
        && UserServantEntity__getRarity((UserServantEntity_o *)current, 0) == 5 )
      {
        v16 = System_Collections_Generic_List_object___IndexOf(
                (System_Collections_Generic_List_object__o *)userSvtEntityList,
                current,
                (const MethodInfo_383FA9C *)Method_System_Collections_Generic_List_UserServantEntity__IndexOf__);
        v17 = (ServantCheckEquipListViewItem_o *)sub_1C7BD34(ServantCheckEquipListViewItem_TypeInfo);
        ServantCheckEquipListViewItem___ctor(v17, (UserServantEntity_o *)current, v16, 2, v18);
        itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
        if ( !itemList )
          sub_1C7BD40(0, v19);
        items = itemList->fields._items;
        v28 = Method_System_Collections_Generic_List_ListViewItem__Add__;
        ++itemList->fields._version;
        if ( !items )
          sub_1C7BD40(itemList, v19);
        size = itemList->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            itemList,
            (Il2CppObject *)v17,
            *(const MethodInfo_383EDFC **)(*(_QWORD *)(v28[4] + 192LL) + 112LL));
        }
        else
        {
          v30 = &items->obj.klass + size;
          itemList->fields._size = size + 1;
          v30[4] = (Il2CppClass *)v17;
          sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v30 + 4), (int32_t)v17, v20, v21, v22, v23, v24, v25);
        }
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v37,
      (const MethodInfo_35BDF94 *)Method_System_Collections_Generic_List_Enumerator_UserServantEntity__Dispose__);
    v34 = this->fields.itemList;
    if ( !v34 || (seed = this->fields.seed) == 0 )
      sub_1C7BD40(v31, v32);
    ServantCheckEquipListViewManager__SetScrollBarActive(
      this,
      seed->fields.arrangementVolume.fields.x < (float)v34->fields._size,
      v33);
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0);
  }
}


ServantCheckEquipListViewItem_o *ServantCheckEquipListViewManager__GetItem(
        ServantCheckEquipListViewManager_o *this,
        int32_t index,
        const MethodInfo *method)
{
  ServantCheckEquipListViewItem_o *result; // x0
  __int64 naturalAligment; // x10

  if ( (byte_4CEA506 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_1C7BAE8(&ServantCheckEquipListViewItem_TypeInfo);
    byte_4CEA506 = 1;
  }
  result = (ServantCheckEquipListViewItem_o *)this->fields.itemList;
  if ( result )
  {
    result = (ServantCheckEquipListViewItem_o *)System_Collections_Generic_List_object___get_Item(
                                                  (System_Collections_Generic_List_object__o *)result,
                                                  index,
                                                  (const MethodInfo_383EB2C *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    if ( result )
    {
      naturalAligment = ServantCheckEquipListViewItem_TypeInfo->_2.naturalAligment;
      if ( result->klass->_2.naturalAligment >= (unsigned int)naturalAligment )
      {
        if ( (ServantCheckEquipListViewItem_c *)result->klass->_2.typeHierarchy[naturalAligment - 1] != ServantCheckEquipListViewItem_TypeInfo )
          return 0;
      }
      else
      {
        return 0;
      }
    }
  }
  return result;
}


void ServantCheckEquipListViewManager__OnClickListView(
        ServantCheckEquipListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  struct ListViewItem_o *linkItem; // x19
  __int64 naturalAligment; // x9
  _QWORD *v6; // x0
  System_Reflection_MethodBase_o *v7; // x0
  ServantCheckEquipListViewManager___c_c *v8; // x8
  UserServantEntity_o *v9; // x19
  CommonUI_o *v10; // x20
  ServantStatusDialog_EndDelegate_o *_9__22_0; // x21
  Il2CppObject *v12; // x22
  struct ServantCheckEquipListViewManager___c_StaticFields *static_fields; // x0
  int32_t v14; // w2
  int32_t v15; // w3
  System_String_o *v16; // x4
  int32_t v17; // w5
  int64_t v18; // x6
  System_String_o *v19; // x7
  ServantCheckEquipListViewManager_o *v20; // x0
  const MethodInfo *v21; // x1

  if ( (byte_4CEA50A & 1) == 0 )
  {
    sub_1C7BAE8(&ServantStatusDialog_EndDelegate_TypeInfo);
    sub_1C7BAE8(&ServantCheckEquipListViewItem_TypeInfo);
    sub_1C7BAE8(&Method_ServantCheckEquipListViewManager_OnClickListView__);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C7BAE8(&Method_ServantCheckEquipListViewManager___c__OnClickListView_b__22_0__);
    this = (ServantCheckEquipListViewManager_o *)sub_1C7BAE8(&ServantCheckEquipListViewManager___c_TypeInfo);
    byte_4CEA50A = 1;
  }
  if ( !obj )
    goto LABEL_18;
  linkItem = obj->fields.linkItem;
  if ( linkItem )
  {
    naturalAligment = ServantCheckEquipListViewItem_TypeInfo->_2.naturalAligment;
    if ( linkItem->klass->_2.naturalAligment >= (unsigned int)naturalAligment
      && (ServantCheckEquipListViewItem_c *)linkItem->klass->_2.typeHierarchy[naturalAligment - 1] == ServantCheckEquipListViewItem_TypeInfo )
    {
      v6 = Method_ServantCheckEquipListViewManager_OnClickListView__;
      if ( (*((_BYTE *)Method_ServantCheckEquipListViewManager_OnClickListView__ + 83) & 2) != 0 )
        v6 = (_QWORD *)sub_1C7BB00(Method_ServantCheckEquipListViewManager_OnClickListView__);
      v7 = (System_Reflection_MethodBase_o *)sub_1C7BACC(v6, v6[4]);
      OverwriteAssetSoundName__PlaySystemSe(v7, 0, 0, 0);
      this = (ServantCheckEquipListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v8 = ServantCheckEquipListViewManager___c_TypeInfo;
      v9 = *(UserServantEntity_o **)&linkItem[1].fields.selectNum;
      v10 = (CommonUI_o *)this;
      if ( !ServantCheckEquipListViewManager___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantCheckEquipListViewManager___c_TypeInfo);
        v8 = ServantCheckEquipListViewManager___c_TypeInfo;
      }
      _9__22_0 = v8->static_fields->__9__22_0;
      if ( !_9__22_0 )
      {
        if ( !v8->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v8);
          v8 = ServantCheckEquipListViewManager___c_TypeInfo;
        }
        v12 = (Il2CppObject *)v8->static_fields->__9;
        _9__22_0 = (ServantStatusDialog_EndDelegate_o *)sub_1C7BD34(ServantStatusDialog_EndDelegate_TypeInfo);
        ServantStatusDialog_EndDelegate___ctor(
          _9__22_0,
          v12,
          Method_ServantCheckEquipListViewManager___c__OnClickListView_b__22_0__,
          0);
        static_fields = ServantCheckEquipListViewManager___c_TypeInfo->static_fields;
        static_fields->__9__22_0 = _9__22_0;
        sub_1C7BA8C(
          (GrandQuestFolderBoardItem_o *)&static_fields->__9__22_0,
          (int32_t)_9__22_0,
          v14,
          v15,
          v16,
          v17,
          v18,
          v19);
      }
      if ( v10 )
      {
        CommonUI__OpenServantStatusDialog_31492792(v10, 29, v9, _9__22_0, 0);
        return;
      }
LABEL_18:
      sub_1C7BD40(this, obj);
    }
    v20 = (ServantCheckEquipListViewManager_o *)sub_1C7C0DC(linkItem);
    ServantCheckEquipListViewManager__SetContentPivot(v20, v21);
  }
}


void ServantCheckEquipListViewManager__OnMoveEnd(ServantCheckEquipListViewManager_o *this, const MethodInfo *method)
{
  int32_t callbackCount; // w8
  bool v4; // vf
  int32_t v5; // w8
  UnityEngine_Object_o *scrollView; // x20
  __int64 v7; // x1
  struct UIScrollView_o *v8; // x0
  struct System_Action_o *callbackFunc2; // x20
  int32_t v10; // w2
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7

  if ( (byte_4CEA509 & 1) == 0 )
  {
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    byte_4CEA509 = 1;
  }
  callbackCount = this->fields.callbackCount;
  v4 = __OFSUB__(callbackCount, 1);
  v5 = callbackCount - 1;
  if ( v5 < 0 == v4 )
  {
    this->fields.callbackCount = v5;
    if ( !v5 )
    {
      scrollView = (UnityEngine_Object_o *)this->fields.scrollView;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(scrollView, 0, 0) )
      {
        v8 = this->fields.scrollView;
        if ( !v8 )
          sub_1C7BD40(0, v7);
        ((void (__fastcall *)(struct UIScrollView_o *, __int64, const MethodInfo *))v8->klass->vtable._8_UpdateScrollbars.methodPtr)(
          v8,
          1,
          v8->klass->vtable._8_UpdateScrollbars.method);
        callbackFunc2 = this->fields.callbackFunc2;
        this->fields.callbackFunc2 = 0;
        sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.callbackFunc2, 0, v10, v11, v12, v13, v14, v15);
        if ( callbackFunc2 )
          ((void (__fastcall *)(intptr_t, intptr_t))callbackFunc2->fields.invoke_impl)(
            callbackFunc2->fields.method_code,
            callbackFunc2->fields.method);
      }
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void ServantCheckEquipListViewManager__RequestListObject(
        ServantCheckEquipListViewManager_o *this,
        int32_t mode,
        float delay,
        const MethodInfo *method)
{
  System_Collections_Generic_List_ServantCheckEquipListViewObject__o *v7; // x0
  __int64 v8; // x1
  int32_t size; // w25
  System_Collections_Generic_List_object__o *v10; // x21
  int32_t v11; // w22
  Il2CppObject *Item; // x23
  System_Action_o *v13; // x24
  const MethodInfo *v14; // x3

  if ( (byte_4CEA508 & 1) == 0 )
  {
    sub_1C7BAE8(&System_Action_TypeInfo);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_ServantCheckEquipListViewObject__get_Count__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_ServantCheckEquipListViewObject__get_Item__);
    sub_1C7BAE8(&Method_ServantCheckEquipListViewManager_OnMoveEnd__);
    sub_1C7BAE8(&StringLiteral_9968/*"OnMoveEnd"*/);
    byte_4CEA508 = 1;
  }
  v7 = ServantCheckEquipListViewManager__get_ObjectList(this, *(const MethodInfo **)&mode);
  if ( !v7 )
    goto LABEL_10;
  size = v7->fields._size;
  v10 = (System_Collections_Generic_List_object__o *)v7;
  if ( size >= 1 )
  {
    v11 = 0;
    this->fields.callbackCount = size;
    while ( 1 )
    {
      Item = System_Collections_Generic_List_object___get_Item(
               v10,
               v11,
               (const MethodInfo_383EB2C *)Method_System_Collections_Generic_List_ServantCheckEquipListViewObject__get_Item__);
      v13 = (System_Action_o *)sub_1C7BD34(System_Action_TypeInfo);
      System_Action___ctor(v13, (Il2CppObject *)this, Method_ServantCheckEquipListViewManager_OnMoveEnd__, 0);
      if ( !Item )
        break;
      ServantCheckEquipListViewObject__Init_35344196((ServantCheckEquipListViewObject_o *)Item, mode, v13, v14);
      if ( size == ++v11 )
        return;
    }
LABEL_10:
    sub_1C7BD40(v7, v8);
  }
  this->fields.callbackCount = 1;
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_9968/*"OnMoveEnd"*/,
    delay,
    0);
}


void ServantCheckEquipListViewManager__SetContentPivot(
        ServantCheckEquipListViewManager_o *this,
        const MethodInfo *method)
{
  ServantCheckEquipListViewManager_o *v2; // x19
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x8
  struct UIScrollView_o *scrollView; // x9

  v2 = this;
  if ( (byte_4CEA50C & 1) == 0 )
  {
    this = (ServantCheckEquipListViewManager_o *)sub_1C7BAE8(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    byte_4CEA50C = 1;
  }
  itemList = v2->fields.itemList;
  if ( !itemList || (scrollView = v2->fields.scrollView) == 0 )
    sub_1C7BD40(this, method);
  scrollView->fields.contentPivot = 4 * (itemList->fields._size == 1);
}


void ServantCheckEquipListViewManager__SetMode(
        ServantCheckEquipListViewManager_o *this,
        int32_t mode,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  const MethodInfo *v10; // x2

  this->fields.callbackFunc2 = callback;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields.callbackFunc2,
    (int32_t)callback,
    (int32_t)callback,
    (int32_t)method,
    v4,
    v5,
    v6,
    v7);
  ServantCheckEquipListViewManager__SetMode_35333124(this, mode, v10);
}


void ServantCheckEquipListViewManager__SetMode_35333124(
        ServantCheckEquipListViewManager_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x2
  int32_t v6; // w1

  this->fields.initMode = mode;
  this->fields.callbackCount = ListViewManager__get_ObjectSum((ListViewManager_o *)this, 0);
  ListViewManager__set_IsInput((ListViewManager_o *)this, mode == 3, 0);
  if ( (mode & 0xFFFFFFFE) == 2 )
  {
    if ( mode == 2 )
      v6 = 2;
    else
      v6 = 3;
    ServantCheckEquipListViewManager__RequestListObject(this, v6, 0.0, v5);
  }
}


void ServantCheckEquipListViewManager__SetObjectItem(
        ServantCheckEquipListViewManager_o *this,
        ListViewObject_o *obj,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  ServantCheckEquipListViewManager_o *v5; // x20
  __int64 naturalAligment; // x10
  int32_t v7; // w1

  v5 = this;
  if ( (byte_4CEA507 & 1) == 0 )
  {
    this = (ServantCheckEquipListViewManager_o *)sub_1C7BAE8(&ServantCheckEquipListViewObject_TypeInfo);
    byte_4CEA507 = 1;
  }
  if ( !obj
    || (naturalAligment = ServantCheckEquipListViewObject_TypeInfo->_2.naturalAligment,
        obj->klass->_2.naturalAligment < (unsigned int)naturalAligment)
    || (ServantCheckEquipListViewObject_c *)obj->klass->_2.typeHierarchy[naturalAligment - 1] != ServantCheckEquipListViewObject_TypeInfo )
  {
    sub_1C7BD40(this, obj);
  }
  if ( v5->fields.initMode == 3 )
    v7 = 3;
  else
    v7 = 2;
  ServantCheckEquipListViewObject__Init_35343708((ServantCheckEquipListViewObject_o *)obj, v7, (const MethodInfo *)item);
}


void ServantCheckEquipListViewManager__SetScrollBarActive(
        ServantCheckEquipListViewManager_o *this,
        bool isActive,
        const MethodInfo *method)
{
  UnityEngine_Object_o *scrollBar; // x21
  __int64 v6; // x1
  UnityEngine_Component_o *gameObject; // x0

  if ( (byte_4CEA50B & 1) == 0 )
  {
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    byte_4CEA50B = 1;
  }
  scrollBar = (UnityEngine_Object_o *)this->fields.scrollBar;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(scrollBar, 0, 0) )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.scrollBar;
    if ( !gameObject
      || (gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0)) == 0 )
    {
      sub_1C7BD40(gameObject, v6);
    }
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, isActive, 0);
  }
}


void ServantCheckEquipListViewManager__add_callbackFunc2(
        ServantCheckEquipListViewManager_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *callbackFunc2; // x21
  struct System_Action_o **p_callbackFunc2; // x20
  System_Delegate_o *v7; // x0
  __int64 v8; // x0
  bool v9; // zf
  ServantCheckEquipListViewManager_o *v10; // x0
  System_Action_o *v11; // x1
  const MethodInfo *v12; // x2

  if ( (byte_4CEA4FC & 1) == 0 )
  {
    sub_1C7BAE8(&System_Action_TypeInfo);
    byte_4CEA4FC = 1;
  }
  callbackFunc2 = (System_Delegate_o *)this->fields.callbackFunc2;
  p_callbackFunc2 = &this->fields.callbackFunc2;
  while ( 1 )
  {
    v7 = System_Delegate__Combine(callbackFunc2, (System_Delegate_o *)value, 0);
    if ( v7 )
    {
      if ( (System_Action_c *)v7->klass != System_Action_TypeInfo )
        break;
    }
    v8 = sub_1CD78BC(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (ServantCheckEquipListViewManager_o *)sub_1C7C0DC(v7);
  ServantCheckEquipListViewManager__remove_callbackFunc2(v10, v11, v12);
}


System_Collections_Generic_List_ServantCheckEquipListViewObject__o *ServantCheckEquipListViewManager__get_ClippingObjectList(
        ServantCheckEquipListViewManager_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  const MethodInfo *v4; // x1
  System_Collections_Generic_List_object__o *objectList; // x0
  int size; // w23
  int32_t v7; // w21
  Il2CppObject *Item; // x22
  Il2CppObject *v9; // x22
  int32_t v10; // w2
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7
  struct System_Object_array *items; // x8
  _QWORD *v17; // x9
  __int64 v18; // x10
  Il2CppClass **v19; // x0

  if ( (byte_4CEA4FF & 1) == 0 )
  {
    sub_1C7BAE8(&Method_UnityEngine_GameObject_GetComponent_ServantCheckEquipListViewObject___);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_ServantCheckEquipListViewObject__Add__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_ServantCheckEquipListViewObject___ctor__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_GameObject__get_Count__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_GameObject__get_Item__);
    sub_1C7BAE8(&System_Collections_Generic_List_ServantCheckEquipListViewObject__TypeInfo);
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    byte_4CEA4FF = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1C7BD34(System_Collections_Generic_List_ServantCheckEquipListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_383E5C8 *)Method_System_Collections_Generic_List_ServantCheckEquipListViewObject___ctor__);
  objectList = (System_Collections_Generic_List_object__o *)this->fields.objectList;
  if ( !objectList )
    goto LABEL_21;
  size = objectList->fields._size;
  if ( size >= 1 )
  {
    v7 = 0;
    do
    {
      Item = System_Collections_Generic_List_object___get_Item(
               objectList,
               v7,
               (const MethodInfo_383EB2C *)Method_System_Collections_Generic_List_GameObject__get_Item__);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      objectList = (System_Collections_Generic_List_object__o *)UnityEngine_Object__op_Equality(
                                                                  (UnityEngine_Object_o *)Item,
                                                                  0,
                                                                  0);
      if ( ((unsigned __int8)objectList & 1) == 0 )
      {
        if ( !Item )
          break;
        objectList = (System_Collections_Generic_List_object__o *)UnityEngine_GameObject__GetComponent_object_(
                                                                    (UnityEngine_GameObject_o *)Item,
                                                                    (const MethodInfo_31C70C8 *)Method_UnityEngine_GameObject_GetComponent_ServantCheckEquipListViewObject___);
        if ( !objectList )
          break;
        v9 = (Il2CppObject *)objectList;
        objectList = (System_Collections_Generic_List_object__o *)ServantCheckEquipListViewObject__GetItem(
                                                                    (ServantCheckEquipListViewObject_o *)objectList,
                                                                    v4);
        if ( !objectList )
          break;
        v4 = (const MethodInfo *)objectList;
        if ( !LOBYTE(objectList[2].fields._items)
          || (objectList = (System_Collections_Generic_List_object__o *)ListViewManager__ClippingItem_44341312(
                                                                          (ListViewManager_o *)this,
                                                                          (ListViewItem_o *)objectList,
                                                                          0),
              ((unsigned __int8)objectList & 1) != 0) )
        {
          if ( !v3 )
            break;
          items = v3->fields._items;
          v17 = Method_System_Collections_Generic_List_ServantCheckEquipListViewObject__Add__;
          ++v3->fields._version;
          if ( !items )
            break;
          v18 = v3->fields._size;
          if ( (unsigned int)v18 >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v3,
              v9,
              *(const MethodInfo_383EDFC **)(*(_QWORD *)(v17[4] + 192LL) + 112LL));
          }
          else
          {
            v19 = &items->obj.klass + v18;
            v3->fields._size = v18 + 1;
            v19[4] = (Il2CppClass *)v9;
            sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v19 + 4), (int32_t)v9, v10, v11, v12, v13, v14, v15);
          }
        }
      }
      if ( size == ++v7 )
        return (System_Collections_Generic_List_ServantCheckEquipListViewObject__o *)v3;
      objectList = (System_Collections_Generic_List_object__o *)this->fields.objectList;
    }
    while ( objectList );
LABEL_21:
    sub_1C7BD40(objectList, v4);
  }
  return (System_Collections_Generic_List_ServantCheckEquipListViewObject__o *)v3;
}


System_Collections_Generic_List_ServantCheckEquipListViewObject__o *ServantCheckEquipListViewManager__get_ObjectList(
        ServantCheckEquipListViewManager_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  __int64 v4; // x1
  System_Collections_Generic_List_object__o *objectList; // x0
  int size; // w23
  int32_t v7; // w21
  Il2CppObject *Item; // x22
  int32_t v9; // w2
  int32_t v10; // w3
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7
  struct System_Object_array *items; // x8
  _QWORD *v16; // x9
  __int64 v17; // x10
  System_Collections_Generic_List_object__o *v18; // x1
  Il2CppClass **v19; // x0

  if ( (byte_4CEA4FE & 1) == 0 )
  {
    sub_1C7BAE8(&Method_UnityEngine_GameObject_GetComponent_ServantCheckEquipListViewObject___);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_ServantCheckEquipListViewObject__Add__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_ServantCheckEquipListViewObject___ctor__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_GameObject__get_Count__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_GameObject__get_Item__);
    sub_1C7BAE8(&System_Collections_Generic_List_ServantCheckEquipListViewObject__TypeInfo);
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    byte_4CEA4FE = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1C7BD34(System_Collections_Generic_List_ServantCheckEquipListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_383E5C8 *)Method_System_Collections_Generic_List_ServantCheckEquipListViewObject___ctor__);
  objectList = (System_Collections_Generic_List_object__o *)this->fields.objectList;
  if ( !objectList )
    goto LABEL_17;
  size = objectList->fields._size;
  if ( size >= 1 )
  {
    v7 = 0;
    do
    {
      Item = System_Collections_Generic_List_object___get_Item(
               objectList,
               v7,
               (const MethodInfo_383EB2C *)Method_System_Collections_Generic_List_GameObject__get_Item__);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      objectList = (System_Collections_Generic_List_object__o *)UnityEngine_Object__op_Equality(
                                                                  (UnityEngine_Object_o *)Item,
                                                                  0,
                                                                  0);
      if ( ((unsigned __int8)objectList & 1) == 0 )
      {
        if ( !Item )
          break;
        objectList = (System_Collections_Generic_List_object__o *)UnityEngine_GameObject__GetComponent_object_(
                                                                    (UnityEngine_GameObject_o *)Item,
                                                                    (const MethodInfo_31C70C8 *)Method_UnityEngine_GameObject_GetComponent_ServantCheckEquipListViewObject___);
        if ( !v3 )
          break;
        items = v3->fields._items;
        v16 = Method_System_Collections_Generic_List_ServantCheckEquipListViewObject__Add__;
        ++v3->fields._version;
        if ( !items )
          break;
        v17 = v3->fields._size;
        v18 = objectList;
        if ( (unsigned int)v17 >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v3,
            (Il2CppObject *)objectList,
            *(const MethodInfo_383EDFC **)(*(_QWORD *)(v16[4] + 192LL) + 112LL));
        }
        else
        {
          v19 = &items->obj.klass + v17;
          v3->fields._size = v17 + 1;
          v19[4] = (Il2CppClass *)v18;
          sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v19 + 4), (int32_t)v18, v9, v10, v11, v12, v13, v14);
        }
      }
      if ( size == ++v7 )
        return (System_Collections_Generic_List_ServantCheckEquipListViewObject__o *)v3;
      objectList = (System_Collections_Generic_List_object__o *)this->fields.objectList;
    }
    while ( objectList );
LABEL_17:
    sub_1C7BD40(objectList, v4);
  }
  return (System_Collections_Generic_List_ServantCheckEquipListViewObject__o *)v3;
}


void ServantCheckEquipListViewManager__remove_callbackFunc2(
        ServantCheckEquipListViewManager_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *callbackFunc2; // x21
  struct System_Action_o **p_callbackFunc2; // x20
  System_Delegate_o *v7; // x0
  __int64 v8; // x0
  bool v9; // zf
  ServantCheckEquipListViewManager_o *v10; // x0
  const MethodInfo *v11; // x1

  if ( (byte_4CEA4FD & 1) == 0 )
  {
    sub_1C7BAE8(&System_Action_TypeInfo);
    byte_4CEA4FD = 1;
  }
  callbackFunc2 = (System_Delegate_o *)this->fields.callbackFunc2;
  p_callbackFunc2 = &this->fields.callbackFunc2;
  while ( 1 )
  {
    v7 = System_Delegate__Remove(callbackFunc2, (System_Delegate_o *)value, 0);
    if ( v7 )
    {
      if ( (System_Action_c *)v7->klass != System_Action_TypeInfo )
        break;
    }
    v8 = sub_1CD78BC(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (ServantCheckEquipListViewManager_o *)sub_1C7C0DC(v7);
  ServantCheckEquipListViewManager__get_ObjectList(v10, v11);
}


void ServantCheckEquipListViewManager___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  if ( (byte_4CEA50D & 1) == 0 )
  {
    sub_1C7BAE8(&ServantCheckEquipListViewManager___c_TypeInfo);
    byte_4CEA50D = 1;
  }
  v1 = (Il2CppObject *)sub_1C7BD34(ServantCheckEquipListViewManager___c_TypeInfo);
  System_Object___ctor(v1, 0);
  ServantCheckEquipListViewManager___c_TypeInfo->static_fields->__9 = (struct ServantCheckEquipListViewManager___c_o *)v1;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)ServantCheckEquipListViewManager___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void ServantCheckEquipListViewManager___c___ctor(
        ServantCheckEquipListViewManager___c_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void ServantCheckEquipListViewManager___c___OnClickListView_b__22_0(
        ServantCheckEquipListViewManager___c_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4CEA50E & 1) == 0 )
  {
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4CEA50E = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1C7BD40(0, v4);
  CommonUI__CloseServantStatusDialog((CommonUI_o *)Instance, 0, 0);
}