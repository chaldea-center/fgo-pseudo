void __fastcall ServantCheckEquipListViewManager___ctor(
        ServantCheckEquipListViewManager_o *this,
        const MethodInfo *method)
{
  ListViewManager___ctor((ListViewManager_o *)this, 0LL);
}


void __fastcall ServantCheckEquipListViewManager__CreateCombineServantList(
        ServantCheckEquipListViewManager_o *this,
        System_Collections_Generic_List_UserServantEntity__o *userSvtEntityList,
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
  Il2CppObject *current; // x22
  int32_t v14; // w23
  __int64 v15; // x1
  __int64 v16; // x2
  ServantCheckEquipListViewItem_o *v17; // x21
  const MethodInfo *v18; // x4
  int32_t v19; // w2
  int32_t v20; // w3
  System_Collections_Generic_List_object__o *itemList; // x0
  struct System_Object_array *items; // x8
  _QWORD *v23; // x9
  __int64 size; // x10
  Il2CppClass **v25; // x8
  __int64 v26; // x0
  const MethodInfo *v27; // x2
  struct System_Collections_Generic_List_ListViewItem__o *v28; // x8
  struct ListViewItemSeed_o *seed; // x9
  System_Collections_Generic_List_Enumerator_object__o v30; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v31; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_49F880D & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_UserServantEntity__Dispose__, userSvtEntityList);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_UserServantEntity__MoveNext__, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_UserServantEntity__get_Current__, v6);
    sub_1B640C8(&Method_System_Collections_Generic_List_ListViewItem__Add__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_UserServantEntity__GetEnumerator__, v8);
    sub_1B640C8(&Method_System_Collections_Generic_List_UserServantEntity__IndexOf__, v9);
    sub_1B640C8(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v10);
    sub_1B640C8(&Method_System_Collections_Generic_List_UserServantEntity__get_Count__, v11);
    sub_1B640C8(&ServantCheckEquipListViewItem_TypeInfo, v12);
    byte_49F880D = 1;
  }
  memset(&v31, 0, sizeof(v31));
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
  if ( userSvtEntityList && userSvtEntityList->fields._size >= 1 )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v30,
      (System_Collections_Generic_List_object__o *)userSvtEntityList,
      (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_UserServantEntity__GetEnumerator__);
    v31 = v30;
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v31,
              (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_UserServantEntity__MoveNext__) )
    {
      current = v31.fields._current;
      if ( NpCombineControl__CheckConfirm_44556320((UserServantEntity_o *)v31.fields._current, 0LL) )
      {
        v14 = System_Collections_Generic_List_object___IndexOf(
                (System_Collections_Generic_List_object__o *)userSvtEntityList,
                current,
                (const MethodInfo_34AE414 *)Method_System_Collections_Generic_List_UserServantEntity__IndexOf__);
        v17 = (ServantCheckEquipListViewItem_o *)sub_1B64314(ServantCheckEquipListViewItem_TypeInfo, v15, v16);
        ServantCheckEquipListViewItem___ctor(v17, (UserServantEntity_o *)current, v14, 1, v18);
        itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
        if ( !itemList )
          sub_1B64324(0LL);
        items = itemList->fields._items;
        v23 = Method_System_Collections_Generic_List_ListViewItem__Add__;
        ++itemList->fields._version;
        if ( !items )
          sub_1B64324(itemList);
        size = itemList->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            itemList,
            (Il2CppObject *)v17,
            *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v23[4] + 192LL) + 112LL));
        }
        else
        {
          v25 = &items->obj.klass + size;
          itemList->fields._size = size + 1;
          v25[4] = (Il2CppClass *)v17;
          sub_1B6406C((ServantStatusBattleListViewItem_o *)(v25 + 4), (int32_t)v17, v19, v20);
        }
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v31,
      (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_UserServantEntity__Dispose__);
    v28 = this->fields.itemList;
    if ( !v28 || (seed = this->fields.seed) == 0LL )
      sub_1B64324(v26);
    ServantCheckEquipListViewManager__SetScrollBarActive(
      this,
      seed->fields.arrangementVolume.fields.x < (float)v28->fields._size,
      v27);
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
  }
}


void __fastcall ServantCheckEquipListViewManager__CreateList(
        ServantCheckEquipListViewManager_o *this,
        System_Collections_Generic_List_SvtEqCombineListViewItem__o *materialList,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  int *Item; // x0
  const MethodInfo *v10; // x2
  int32_t size; // w25
  int32_t v12; // w21
  __int64 v13; // x1
  UserServantEntity_o *v14; // x23
  int32_t v15; // w24
  ServantCheckEquipListViewItem_o *v16; // x22
  const MethodInfo *v17; // x4
  int32_t v18; // w2
  int32_t v19; // w3
  __int64 v20; // x8
  _QWORD *v21; // x9
  __int64 v22; // x10
  __int64 v23; // x8
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x8
  struct ListViewItemSeed_o *seed; // x9

  if ( (byte_49F880B & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_ListViewItem__Add__, materialList);
    sub_1B640C8(&Method_System_Collections_Generic_List_SvtEqCombineListViewItem__get_Count__, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v6);
    sub_1B640C8(&Method_System_Collections_Generic_List_SvtEqCombineListViewItem__get_Item__, v7);
    sub_1B640C8(&ServantCheckEquipListViewItem_TypeInfo, v8);
    byte_49F880B = 1;
  }
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
  if ( !materialList )
    goto LABEL_19;
  size = materialList->fields._size;
  if ( size >= 1 )
  {
    v12 = 0;
    while ( 1 )
    {
      Item = (int *)System_Collections_Generic_List_object___get_Item(
                      (System_Collections_Generic_List_object__o *)materialList,
                      v12,
                      (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_SvtEqCombineListViewItem__get_Item__);
      if ( !Item )
        break;
      if ( *((_BYTE *)Item + 204) || *((_BYTE *)Item + 244) || *((_BYTE *)Item + 245) )
      {
        v14 = (UserServantEntity_o *)*((_QWORD *)Item + 15);
        v15 = Item[4];
        v16 = (ServantCheckEquipListViewItem_o *)sub_1B64314(ServantCheckEquipListViewItem_TypeInfo, v13, v10);
        ServantCheckEquipListViewItem___ctor(v16, v14, v15, 0, v17);
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
            (Il2CppObject *)v16,
            *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v21[4] + 192LL) + 112LL));
        }
        else
        {
          v23 = v20 + 8 * v22;
          Item[6] = v22 + 1;
          *(_QWORD *)(v23 + 32) = v16;
          sub_1B6406C((ServantStatusBattleListViewItem_o *)(v23 + 32), (int32_t)v16, v18, v19);
        }
      }
      if ( size == ++v12 )
        goto LABEL_16;
    }
LABEL_19:
    sub_1B64324(Item);
  }
LABEL_16:
  itemList = this->fields.itemList;
  if ( !itemList )
    goto LABEL_19;
  seed = this->fields.seed;
  if ( !seed )
    goto LABEL_19;
  ServantCheckEquipListViewManager__SetScrollBarActive(
    this,
    seed->fields.arrangementVolume.fields.x < (float)itemList->fields._size,
    v10);
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
}


void __fastcall ServantCheckEquipListViewManager__CreateList_32302532(
        ServantCheckEquipListViewManager_o *this,
        System_Collections_Generic_List_ServantOperationListViewItem__o *materialList,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  ServantOperationListViewItem_o *Item; // x0
  const MethodInfo *v10; // x2
  int32_t size; // w25
  int32_t v12; // w21
  ServantOperationListViewItem_o *v13; // x22
  __int64 v14; // x1
  UserServantEntity_o *UserServantEntity_k__BackingField; // x23
  int32_t selectNum; // w24
  ServantCheckEquipListViewItem_o *v17; // x22
  const MethodInfo *v18; // x4
  int32_t v19; // w2
  int32_t v20; // w3
  __int64 v21; // x8
  _QWORD *v22; // x9
  __int64 sortIndex; // x10
  __int64 v24; // x8
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x8
  struct ListViewItemSeed_o *seed; // x9

  if ( (byte_49F880C & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_ListViewItem__Add__, materialList);
    sub_1B640C8(&Method_System_Collections_Generic_List_ServantOperationListViewItem__get_Count__, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v6);
    sub_1B640C8(&Method_System_Collections_Generic_List_ServantOperationListViewItem__get_Item__, v7);
    sub_1B640C8(&ServantCheckEquipListViewItem_TypeInfo, v8);
    byte_49F880C = 1;
  }
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
  if ( !materialList )
    goto LABEL_20;
  size = materialList->fields._size;
  if ( size >= 1 )
  {
    v12 = 0;
    while ( 1 )
    {
      Item = (ServantOperationListViewItem_o *)System_Collections_Generic_List_object___get_Item(
                                                 (System_Collections_Generic_List_object__o *)materialList,
                                                 v12,
                                                 (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_ServantOperationListViewItem__get_Item__);
      if ( !Item )
        break;
      v13 = Item;
      Item = (ServantOperationListViewItem_o *)ServantOperationListViewItem__get_IsServantEquip(Item, 0LL);
      if ( ((unsigned __int8)Item & 1) != 0
        && (v13->fields._IsPartyEquip_k__BackingField
         || v13->fields._IsUseSupportEquip_k__BackingField
         || v13->fields._IsUseRecommendSupportEquip_k__BackingField) )
      {
        UserServantEntity_k__BackingField = v13->fields._UserServantEntity_k__BackingField;
        selectNum = v13->fields.selectNum;
        v17 = (ServantCheckEquipListViewItem_o *)sub_1B64314(ServantCheckEquipListViewItem_TypeInfo, v14, v10);
        ServantCheckEquipListViewItem___ctor(v17, UserServantEntity_k__BackingField, selectNum, 0, v18);
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
            (Il2CppObject *)v17,
            *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v22[4] + 192LL) + 112LL));
        }
        else
        {
          v24 = v21 + 8 * sortIndex;
          Item->fields.sortIndex = sortIndex + 1;
          *(_QWORD *)(v24 + 32) = v17;
          sub_1B6406C((ServantStatusBattleListViewItem_o *)(v24 + 32), (int32_t)v17, v19, v20);
        }
      }
      if ( size == ++v12 )
        goto LABEL_17;
    }
LABEL_20:
    sub_1B64324(Item);
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
    v10);
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
}


void __fastcall ServantCheckEquipListViewManager__CreateMaterialTdServantList(
        ServantCheckEquipListViewManager_o *this,
        System_Collections_Generic_List_UserServantEntity__o *userSvtEntityList,
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
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  Il2CppObject *current; // x21
  Il2CppObject *Instance; // x0
  Il2CppObject *MasterData_object; // x0
  DataMasterBase_TMaster__TEntity__PKType__o *v20; // x22
  void *monitor; // x23
  Il2CppClass *klass; // x24
  __int64 v23; // x0
  Il2CppObject *Entity; // x0
  int32_t v25; // w23
  __int64 v26; // x1
  __int64 v27; // x2
  ServantCheckEquipListViewItem_o *v28; // x22
  const MethodInfo *v29; // x4
  int32_t v30; // w2
  int32_t v31; // w3
  System_Collections_Generic_List_object__o *itemList; // x0
  struct System_Object_array *items; // x8
  _QWORD *v34; // x9
  __int64 size; // x10
  Il2CppClass **v36; // x8
  __int64 v37; // x0
  const MethodInfo *v38; // x2
  struct System_Collections_Generic_List_ListViewItem__o *v39; // x8
  struct ListViewItemSeed_o *seed; // x9
  System_Collections_Generic_List_Enumerator_object__o v41; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v42; // [xsp+20h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v43; // 0:x0.16

  if ( (byte_49F880F & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_ServantMaster___, userSvtEntityList);
    sub_1B640C8(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_UserServantEntity__Dispose__, v6);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_UserServantEntity__MoveNext__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_UserServantEntity__get_Current__, v8);
    sub_1B640C8(&Method_System_Collections_Generic_List_ListViewItem__Add__, v9);
    sub_1B640C8(&Method_System_Collections_Generic_List_UserServantEntity__GetEnumerator__, v10);
    sub_1B640C8(&Method_System_Collections_Generic_List_UserServantEntity__IndexOf__, v11);
    sub_1B640C8(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v12);
    sub_1B640C8(&Method_System_Collections_Generic_List_UserServantEntity__get_Count__, v13);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v14);
    sub_1B640C8(&ServantCheckEquipListViewItem_TypeInfo, v15);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v16);
    byte_49F880F = 1;
  }
  memset(&v42, 0, sizeof(v42));
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
  if ( userSvtEntityList && userSvtEntityList->fields._size >= 1 )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v41,
      (System_Collections_Generic_List_object__o *)userSvtEntityList,
      (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_UserServantEntity__GetEnumerator__);
    v42 = v41;
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v42,
              (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_UserServantEntity__MoveNext__) )
    {
      current = v42.fields._current;
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        sub_1B64324(0LL);
      MasterData_object = DataManager__GetMasterData_object_(
                            (DataManager_o *)Instance,
                            (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ServantMaster___);
      if ( !current )
        sub_1B64324(MasterData_object);
      v20 = (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object;
      klass = current[5].klass;
      monitor = current[5].monitor;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v43.fields.currentCryptoKey = klass;
      *(_QWORD *)&v43.fields.fakeValue = monitor;
      v23 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v43, 0LL);
      if ( !v20 )
        sub_1B64324(v23);
      Entity = DataMasterBase_object__object__int___GetEntity(
                 v20,
                 v23,
                 (const MethodInfo_30D3EA4 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
      if ( !Entity )
        sub_1B64324(0LL);
      if ( ServantEntity__get_IsServantMaterialTd((ServantEntity_o *)Entity, 0LL) )
      {
        v25 = System_Collections_Generic_List_object___IndexOf(
                (System_Collections_Generic_List_object__o *)userSvtEntityList,
                current,
                (const MethodInfo_34AE414 *)Method_System_Collections_Generic_List_UserServantEntity__IndexOf__);
        v28 = (ServantCheckEquipListViewItem_o *)sub_1B64314(ServantCheckEquipListViewItem_TypeInfo, v26, v27);
        ServantCheckEquipListViewItem___ctor(v28, (UserServantEntity_o *)current, v25, 3, v29);
        itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
        if ( !itemList )
          sub_1B64324(0LL);
        items = itemList->fields._items;
        v34 = Method_System_Collections_Generic_List_ListViewItem__Add__;
        ++itemList->fields._version;
        if ( !items )
          sub_1B64324(itemList);
        size = itemList->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            itemList,
            (Il2CppObject *)v28,
            *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v34[4] + 192LL) + 112LL));
        }
        else
        {
          v36 = &items->obj.klass + size;
          itemList->fields._size = size + 1;
          v36[4] = (Il2CppClass *)v28;
          sub_1B6406C((ServantStatusBattleListViewItem_o *)(v36 + 4), (int32_t)v28, v30, v31);
        }
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v42,
      (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_UserServantEntity__Dispose__);
    v39 = this->fields.itemList;
    if ( !v39 || (seed = this->fields.seed) == 0LL )
      sub_1B64324(v37);
    ServantCheckEquipListViewManager__SetScrollBarActive(
      this,
      seed->fields.arrangementVolume.fields.x < (float)v39->fields._size,
      v38);
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
  }
}


void __fastcall ServantCheckEquipListViewManager__CreateSSRareServantList(
        ServantCheckEquipListViewManager_o *this,
        System_Collections_Generic_List_UserServantEntity__o *userSvtEntityList,
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
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  Il2CppObject *current; // x21
  Il2CppObject *Instance; // x0
  Il2CppObject *MasterData_object; // x0
  DataMasterBase_TMaster__TEntity__PKType__o *v20; // x22
  void *monitor; // x23
  Il2CppClass *klass; // x24
  __int64 v23; // x0
  Il2CppObject *Entity; // x0
  int32_t v25; // w23
  __int64 v26; // x1
  __int64 v27; // x2
  ServantCheckEquipListViewItem_o *v28; // x22
  const MethodInfo *v29; // x4
  int32_t v30; // w2
  int32_t v31; // w3
  System_Collections_Generic_List_object__o *itemList; // x0
  struct System_Object_array *items; // x8
  _QWORD *v34; // x9
  __int64 size; // x10
  Il2CppClass **v36; // x8
  __int64 v37; // x0
  const MethodInfo *v38; // x2
  struct System_Collections_Generic_List_ListViewItem__o *v39; // x8
  struct ListViewItemSeed_o *seed; // x9
  System_Collections_Generic_List_Enumerator_object__o v41; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v42; // [xsp+20h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v43; // 0:x0.16

  if ( (byte_49F880E & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_ServantMaster___, userSvtEntityList);
    sub_1B640C8(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_UserServantEntity__Dispose__, v6);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_UserServantEntity__MoveNext__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_UserServantEntity__get_Current__, v8);
    sub_1B640C8(&Method_System_Collections_Generic_List_ListViewItem__Add__, v9);
    sub_1B640C8(&Method_System_Collections_Generic_List_UserServantEntity__GetEnumerator__, v10);
    sub_1B640C8(&Method_System_Collections_Generic_List_UserServantEntity__IndexOf__, v11);
    sub_1B640C8(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v12);
    sub_1B640C8(&Method_System_Collections_Generic_List_UserServantEntity__get_Count__, v13);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v14);
    sub_1B640C8(&ServantCheckEquipListViewItem_TypeInfo, v15);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v16);
    byte_49F880E = 1;
  }
  memset(&v42, 0, sizeof(v42));
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
  if ( userSvtEntityList && userSvtEntityList->fields._size >= 1 )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v41,
      (System_Collections_Generic_List_object__o *)userSvtEntityList,
      (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_UserServantEntity__GetEnumerator__);
    v42 = v41;
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v42,
              (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_UserServantEntity__MoveNext__) )
    {
      current = v42.fields._current;
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        sub_1B64324(0LL);
      MasterData_object = DataManager__GetMasterData_object_(
                            (DataManager_o *)Instance,
                            (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ServantMaster___);
      if ( !current )
        sub_1B64324(MasterData_object);
      v20 = (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object;
      klass = current[5].klass;
      monitor = current[5].monitor;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v43.fields.currentCryptoKey = klass;
      *(_QWORD *)&v43.fields.fakeValue = monitor;
      v23 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v43, 0LL);
      if ( !v20 )
        sub_1B64324(v23);
      Entity = DataMasterBase_object__object__int___GetEntity(
                 v20,
                 v23,
                 (const MethodInfo_30D3EA4 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
      if ( !Entity )
        sub_1B64324(0LL);
      if ( ServantEntity__get_IsServant((ServantEntity_o *)Entity, 0LL)
        && UserServantEntity__getRarity((UserServantEntity_o *)current, 0LL) == 5 )
      {
        v25 = System_Collections_Generic_List_object___IndexOf(
                (System_Collections_Generic_List_object__o *)userSvtEntityList,
                current,
                (const MethodInfo_34AE414 *)Method_System_Collections_Generic_List_UserServantEntity__IndexOf__);
        v28 = (ServantCheckEquipListViewItem_o *)sub_1B64314(ServantCheckEquipListViewItem_TypeInfo, v26, v27);
        ServantCheckEquipListViewItem___ctor(v28, (UserServantEntity_o *)current, v25, 2, v29);
        itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
        if ( !itemList )
          sub_1B64324(0LL);
        items = itemList->fields._items;
        v34 = Method_System_Collections_Generic_List_ListViewItem__Add__;
        ++itemList->fields._version;
        if ( !items )
          sub_1B64324(itemList);
        size = itemList->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            itemList,
            (Il2CppObject *)v28,
            *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v34[4] + 192LL) + 112LL));
        }
        else
        {
          v36 = &items->obj.klass + size;
          itemList->fields._size = size + 1;
          v36[4] = (Il2CppClass *)v28;
          sub_1B6406C((ServantStatusBattleListViewItem_o *)(v36 + 4), (int32_t)v28, v30, v31);
        }
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v42,
      (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_UserServantEntity__Dispose__);
    v39 = this->fields.itemList;
    if ( !v39 || (seed = this->fields.seed) == 0LL )
      sub_1B64324(v37);
    ServantCheckEquipListViewManager__SetScrollBarActive(
      this,
      seed->fields.arrangementVolume.fields.x < (float)v39->fields._size,
      v38);
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
ServantCheckEquipListViewItem_o *__fastcall ServantCheckEquipListViewManager__GetItem(
        ServantCheckEquipListViewManager_o *this,
        int32_t index,
        const MethodInfo *method)
{
  __int64 v5; // x1
  ServantCheckEquipListViewItem_o *result; // x0
  __int64 methodPtr_low; // x10

  if ( (byte_49F8810 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, *(_QWORD *)&index);
    sub_1B640C8(&ServantCheckEquipListViewItem_TypeInfo, v5);
    byte_49F8810 = 1;
  }
  result = (ServantCheckEquipListViewItem_o *)this->fields.itemList;
  if ( result )
  {
    result = (ServantCheckEquipListViewItem_o *)System_Collections_Generic_List_object___get_Item(
                                                  (System_Collections_Generic_List_object__o *)result,
                                                  index,
                                                  (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    if ( result )
    {
      methodPtr_low = LOBYTE(ServantCheckEquipListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(result->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low )
      {
        if ( (ServantCheckEquipListViewItem_c *)result->klass->_2.typeHierarchy[methodPtr_low - 1] != ServantCheckEquipListViewItem_TypeInfo )
          return 0LL;
      }
      else
      {
        return 0LL;
      }
    }
  }
  return result;
}


void __fastcall ServantCheckEquipListViewManager__OnClickListView(
        ServantCheckEquipListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  struct ListViewItem_o *linkItem; // x19
  __int64 methodPtr_low; // x9
  _QWORD *v11; // x0
  System_Reflection_MethodBase_o *v12; // x0
  __int64 v13; // x1
  __int64 v14; // x2
  ServantCheckEquipListViewManager___c_c *v15; // x8
  UserServantEntity_o *v16; // x19
  CommonUI_o *v17; // x20
  ServantStatusDialog_EndDelegate_o *_9__21_0; // x21
  Il2CppObject *v19; // x22
  struct ServantCheckEquipListViewManager___c_StaticFields *static_fields; // x0
  int32_t v21; // w2
  int32_t v22; // w3
  ServantCheckEquipListViewManager_o *v23; // x0
  const MethodInfo *v24; // x1

  if ( (byte_49F8814 & 1) == 0 )
  {
    sub_1B640C8(&ServantStatusDialog_EndDelegate_TypeInfo, obj);
    sub_1B640C8(&ServantCheckEquipListViewItem_TypeInfo, v4);
    sub_1B640C8(&Method_ServantCheckEquipListViewManager_OnClickListView__, v5);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    sub_1B640C8(&Method_ServantCheckEquipListViewManager___c__OnClickListView_b__21_0__, v7);
    this = (ServantCheckEquipListViewManager_o *)sub_1B640C8(&ServantCheckEquipListViewManager___c_TypeInfo, v8);
    byte_49F8814 = 1;
  }
  if ( !obj )
    goto LABEL_18;
  linkItem = obj->fields.linkItem;
  if ( linkItem )
  {
    methodPtr_low = LOBYTE(ServantCheckEquipListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(linkItem->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
      && (ServantCheckEquipListViewItem_c *)linkItem->klass->_2.typeHierarchy[methodPtr_low - 1] == ServantCheckEquipListViewItem_TypeInfo )
    {
      v11 = Method_ServantCheckEquipListViewManager_OnClickListView__;
      if ( (*((_BYTE *)Method_ServantCheckEquipListViewManager_OnClickListView__ + 83) & 2) != 0 )
        v11 = (_QWORD *)sub_1B640E0(Method_ServantCheckEquipListViewManager_OnClickListView__);
      v12 = (System_Reflection_MethodBase_o *)sub_1B640AC(v11, v11[4]);
      OverwriteAssetSoundName__PlaySystemSe(v12, 0, 0LL);
      this = (ServantCheckEquipListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v15 = ServantCheckEquipListViewManager___c_TypeInfo;
      v16 = *(UserServantEntity_o **)&linkItem[1].fields.selectNum;
      v17 = (CommonUI_o *)this;
      if ( !ServantCheckEquipListViewManager___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantCheckEquipListViewManager___c_TypeInfo);
        v15 = ServantCheckEquipListViewManager___c_TypeInfo;
      }
      _9__21_0 = v15->static_fields->__9__21_0;
      if ( !_9__21_0 )
      {
        if ( !v15->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v15);
          v15 = ServantCheckEquipListViewManager___c_TypeInfo;
        }
        v19 = (Il2CppObject *)v15->static_fields->__9;
        _9__21_0 = (ServantStatusDialog_EndDelegate_o *)sub_1B64314(ServantStatusDialog_EndDelegate_TypeInfo, v13, v14);
        ServantStatusDialog_EndDelegate___ctor(
          _9__21_0,
          v19,
          Method_ServantCheckEquipListViewManager___c__OnClickListView_b__21_0__,
          0LL);
        static_fields = ServantCheckEquipListViewManager___c_TypeInfo->static_fields;
        static_fields->__9__21_0 = _9__21_0;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->__9__21_0, (int32_t)_9__21_0, v21, v22);
      }
      if ( v17 )
      {
        CommonUI__OpenServantStatusDialog_30355532(v17, 29, v16, _9__21_0, 0LL);
        return;
      }
LABEL_18:
      sub_1B64324(this);
    }
    v23 = (ServantCheckEquipListViewManager_o *)sub_1B645E4(linkItem);
    ServantCheckEquipListViewManager__SetContentPivot(v23, v24);
  }
}


void __fastcall ServantCheckEquipListViewManager__OnMoveEnd(
        ServantCheckEquipListViewManager_o *this,
        const MethodInfo *method)
{
  int32_t callbackCount; // w8
  bool v4; // vf
  int32_t v5; // w8
  UnityEngine_Object_o *scrollView; // x20
  struct UIScrollView_o *v7; // x0
  struct System_Action_o *callbackFunc2; // x20
  int32_t v9; // w2
  int32_t v10; // w3

  if ( (byte_49F8813 & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, method);
    byte_49F8813 = 1;
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
      if ( UnityEngine_Object__op_Inequality(scrollView, 0LL, 0LL) )
      {
        v7 = this->fields.scrollView;
        if ( !v7 )
          sub_1B64324(0LL);
        ((void (__fastcall *)(struct UIScrollView_o *, __int64, Il2CppMethodPointer))v7->klass->vtable._8_UpdateScrollbars.method)(
          v7,
          1LL,
          v7->klass->vtable._9_SetDragAmount.methodPtr);
        callbackFunc2 = this->fields.callbackFunc2;
        this->fields.callbackFunc2 = 0LL;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc2, 0, v9, v10);
        if ( callbackFunc2 )
          ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))callbackFunc2->fields.m_target)(
            callbackFunc2->fields.original_method_info,
            *(_QWORD *)&callbackFunc2->fields.extra_arg);
      }
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantCheckEquipListViewManager__RequestListObject(
        ServantCheckEquipListViewManager_o *this,
        int32_t mode,
        float delay,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  System_Collections_Generic_List_ServantCheckEquipListViewObject__o *v11; // x0
  int32_t size; // w25
  System_Collections_Generic_List_object__o *v13; // x21
  int32_t v14; // w22
  Il2CppObject *Item; // x23
  __int64 v16; // x1
  __int64 v17; // x2
  System_Action_o *v18; // x24
  const MethodInfo *v19; // x3

  if ( (byte_49F8812 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, *(_QWORD *)&mode);
    sub_1B640C8(&Method_System_Collections_Generic_List_ServantCheckEquipListViewObject__get_Count__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_ServantCheckEquipListViewObject__get_Item__, v8);
    sub_1B640C8(&Method_ServantCheckEquipListViewManager_OnMoveEnd__, v9);
    sub_1B640C8(&StringLiteral_9890/*"OnMoveEnd"*/, v10);
    byte_49F8812 = 1;
  }
  v11 = ServantCheckEquipListViewManager__get_ObjectList(this, *(const MethodInfo **)&mode);
  if ( !v11 )
    goto LABEL_10;
  size = v11->fields._size;
  v13 = (System_Collections_Generic_List_object__o *)v11;
  if ( size >= 1 )
  {
    v14 = 0;
    this->fields.callbackCount = size;
    while ( 1 )
    {
      Item = System_Collections_Generic_List_object___get_Item(
               v13,
               v14,
               (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_ServantCheckEquipListViewObject__get_Item__);
      v18 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v16, v17);
      System_Action___ctor(v18, (Il2CppObject *)this, Method_ServantCheckEquipListViewManager_OnMoveEnd__, 0LL);
      if ( !Item )
        break;
      ServantCheckEquipListViewObject__Init_32311360((ServantCheckEquipListViewObject_o *)Item, mode, v18, v19);
      if ( size == ++v14 )
        return;
    }
LABEL_10:
    sub_1B64324(v11);
  }
  this->fields.callbackCount = 1;
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_9890/*"OnMoveEnd"*/,
    delay,
    0LL);
}


void __fastcall ServantCheckEquipListViewManager__SetContentPivot(
        ServantCheckEquipListViewManager_o *this,
        const MethodInfo *method)
{
  ServantCheckEquipListViewManager_o *v2; // x19
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x8
  struct UIScrollView_o *scrollView; // x9

  v2 = this;
  if ( (byte_49F8816 & 1) == 0 )
  {
    this = (ServantCheckEquipListViewManager_o *)sub_1B640C8(
                                                   &Method_System_Collections_Generic_List_ListViewItem__get_Count__,
                                                   method);
    byte_49F8816 = 1;
  }
  itemList = v2->fields.itemList;
  if ( !itemList || (scrollView = v2->fields.scrollView) == 0LL )
    sub_1B64324(this);
  scrollView->fields.contentPivot = 4 * (itemList->fields._size == 1);
}


void __fastcall ServantCheckEquipListViewManager__SetMode(
        ServantCheckEquipListViewManager_o *this,
        int32_t mode,
        System_Action_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v6; // x2

  this->fields.callbackFunc2 = callback;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc2,
    (int32_t)callback,
    (int32_t)callback,
    (int32_t)method);
  ServantCheckEquipListViewManager__SetMode_32301860(this, mode, v6);
}


void __fastcall ServantCheckEquipListViewManager__SetMode_32301860(
        ServantCheckEquipListViewManager_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x2
  int32_t v6; // w1

  this->fields.initMode = mode;
  this->fields.callbackCount = ListViewManager__get_ObjectSum((ListViewManager_o *)this, 0LL);
  ListViewManager__set_IsInput((ListViewManager_o *)this, mode == 3, 0LL);
  if ( (mode & 0xFFFFFFFE) == 2 )
  {
    if ( mode == 2 )
      v6 = 2;
    else
      v6 = 3;
    ServantCheckEquipListViewManager__RequestListObject(this, v6, 0.0, v5);
  }
}


void __fastcall ServantCheckEquipListViewManager__SetObjectItem(
        ServantCheckEquipListViewManager_o *this,
        ListViewObject_o *obj,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  ServantCheckEquipListViewManager_o *v5; // x20
  __int64 methodPtr_low; // x10
  int32_t v7; // w1

  v5 = this;
  if ( (byte_49F8811 & 1) == 0 )
  {
    this = (ServantCheckEquipListViewManager_o *)sub_1B640C8(&ServantCheckEquipListViewObject_TypeInfo, obj);
    byte_49F8811 = 1;
  }
  if ( !obj
    || (methodPtr_low = LOBYTE(ServantCheckEquipListViewObject_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(obj->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low)
    || (ServantCheckEquipListViewObject_c *)obj->klass->_2.typeHierarchy[methodPtr_low - 1] != ServantCheckEquipListViewObject_TypeInfo )
  {
    sub_1B64324(this);
  }
  if ( v5->fields.initMode == 3 )
    v7 = 3;
  else
    v7 = 2;
  ServantCheckEquipListViewObject__Init_32310872((ServantCheckEquipListViewObject_o *)obj, v7, (const MethodInfo *)item);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantCheckEquipListViewManager__SetScrollBarActive(
        ServantCheckEquipListViewManager_o *this,
        bool isActive,
        const MethodInfo *method)
{
  UnityEngine_Object_o *scrollBar; // x21
  UnityEngine_Component_o *gameObject; // x0

  if ( (byte_49F8815 & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, isActive);
    byte_49F8815 = 1;
  }
  scrollBar = (UnityEngine_Object_o *)this->fields.scrollBar;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(scrollBar, 0LL, 0LL) )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.scrollBar;
    if ( !gameObject
      || (gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0LL)) == 0LL )
    {
      sub_1B64324(gameObject);
    }
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, isActive, 0LL);
  }
}


void __fastcall ServantCheckEquipListViewManager__add_callbackFunc2(
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

  if ( (byte_49F8807 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, value);
    byte_49F8807 = 1;
  }
  callbackFunc2 = (System_Delegate_o *)this->fields.callbackFunc2;
  p_callbackFunc2 = &this->fields.callbackFunc2;
  while ( 1 )
  {
    v7 = System_Delegate__Combine(callbackFunc2, (System_Delegate_o *)value, 0LL);
    if ( v7 )
    {
      if ( (System_Action_c *)v7->klass != System_Action_TypeInfo )
        break;
    }
    v8 = sub_1B9F5B8(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (ServantCheckEquipListViewManager_o *)sub_1B645E4(v7);
  ServantCheckEquipListViewManager__remove_callbackFunc2(v10, v11, v12);
}


System_Collections_Generic_List_ServantCheckEquipListViewObject__o *__fastcall ServantCheckEquipListViewManager__get_ClippingObjectList(
        ServantCheckEquipListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  System_Collections_Generic_List_object__o *v10; // x20
  System_Collections_Generic_List_object__o *objectList; // x0
  int size; // w23
  int32_t v13; // w21
  Il2CppObject *Item; // x22
  const MethodInfo *v15; // x1
  Il2CppObject *v16; // x22
  int32_t v17; // w2
  int32_t v18; // w3
  struct System_Object_array *items; // x8
  _QWORD *v20; // x9
  __int64 v21; // x10
  Il2CppClass **v22; // x0

  if ( (byte_49F880A & 1) == 0 )
  {
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_ServantCheckEquipListViewObject___, method);
    sub_1B640C8(&Method_System_Collections_Generic_List_ServantCheckEquipListViewObject__Add__, v4);
    sub_1B640C8(&Method_System_Collections_Generic_List_ServantCheckEquipListViewObject___ctor__, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_GameObject__get_Count__, v6);
    sub_1B640C8(&Method_System_Collections_Generic_List_GameObject__get_Item__, v7);
    sub_1B640C8(&System_Collections_Generic_List_ServantCheckEquipListViewObject__TypeInfo, v8);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v9);
    byte_49F880A = 1;
  }
  v10 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_ServantCheckEquipListViewObject__TypeInfo,
                                                       method,
                                                       v2);
  System_Collections_Generic_List_object____ctor(
    v10,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_ServantCheckEquipListViewObject___ctor__);
  objectList = (System_Collections_Generic_List_object__o *)this->fields.objectList;
  if ( !objectList )
    goto LABEL_21;
  size = objectList->fields._size;
  if ( size >= 1 )
  {
    v13 = 0;
    do
    {
      Item = System_Collections_Generic_List_object___get_Item(
               objectList,
               v13,
               (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_GameObject__get_Item__);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      objectList = (System_Collections_Generic_List_object__o *)UnityEngine_Object__op_Equality(
                                                                  (UnityEngine_Object_o *)Item,
                                                                  0LL,
                                                                  0LL);
      if ( ((unsigned __int8)objectList & 1) == 0 )
      {
        if ( !Item )
          break;
        objectList = (System_Collections_Generic_List_object__o *)UnityEngine_GameObject__GetComponent_object_(
                                                                    (UnityEngine_GameObject_o *)Item,
                                                                    (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_ServantCheckEquipListViewObject___);
        if ( !objectList )
          break;
        v16 = (Il2CppObject *)objectList;
        objectList = (System_Collections_Generic_List_object__o *)ServantCheckEquipListViewObject__GetItem(
                                                                    (ServantCheckEquipListViewObject_o *)objectList,
                                                                    v15);
        if ( !objectList )
          break;
        if ( !LOBYTE(objectList[2].monitor)
          || (objectList = (System_Collections_Generic_List_object__o *)ListViewManager__ClippingItem_40389508(
                                                                          (ListViewManager_o *)this,
                                                                          (ListViewItem_o *)objectList,
                                                                          0LL),
              ((unsigned __int8)objectList & 1) != 0) )
        {
          if ( !v10 )
            break;
          items = v10->fields._items;
          v20 = Method_System_Collections_Generic_List_ServantCheckEquipListViewObject__Add__;
          ++v10->fields._version;
          if ( !items )
            break;
          v21 = v10->fields._size;
          if ( (unsigned int)v21 >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v10,
              v16,
              *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
          }
          else
          {
            v22 = &items->obj.klass + v21;
            v10->fields._size = v21 + 1;
            v22[4] = (Il2CppClass *)v16;
            sub_1B6406C((ServantStatusBattleListViewItem_o *)(v22 + 4), (int32_t)v16, v17, v18);
          }
        }
      }
      if ( size == ++v13 )
        return (System_Collections_Generic_List_ServantCheckEquipListViewObject__o *)v10;
      objectList = (System_Collections_Generic_List_object__o *)this->fields.objectList;
    }
    while ( objectList );
LABEL_21:
    sub_1B64324(objectList);
  }
  return (System_Collections_Generic_List_ServantCheckEquipListViewObject__o *)v10;
}


System_Collections_Generic_List_ServantCheckEquipListViewObject__o *__fastcall ServantCheckEquipListViewManager__get_ObjectList(
        ServantCheckEquipListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  System_Collections_Generic_List_object__o *v10; // x20
  System_Collections_Generic_List_object__o *objectList; // x0
  int size; // w23
  int32_t v13; // w21
  Il2CppObject *Item; // x22
  int32_t v15; // w2
  int32_t v16; // w3
  struct System_Object_array *items; // x8
  _QWORD *v18; // x9
  __int64 v19; // x10
  System_Collections_Generic_List_object__o *v20; // x1
  Il2CppClass **v21; // x0

  if ( (byte_49F8809 & 1) == 0 )
  {
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_ServantCheckEquipListViewObject___, method);
    sub_1B640C8(&Method_System_Collections_Generic_List_ServantCheckEquipListViewObject__Add__, v4);
    sub_1B640C8(&Method_System_Collections_Generic_List_ServantCheckEquipListViewObject___ctor__, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_GameObject__get_Count__, v6);
    sub_1B640C8(&Method_System_Collections_Generic_List_GameObject__get_Item__, v7);
    sub_1B640C8(&System_Collections_Generic_List_ServantCheckEquipListViewObject__TypeInfo, v8);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v9);
    byte_49F8809 = 1;
  }
  v10 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_ServantCheckEquipListViewObject__TypeInfo,
                                                       method,
                                                       v2);
  System_Collections_Generic_List_object____ctor(
    v10,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_ServantCheckEquipListViewObject___ctor__);
  objectList = (System_Collections_Generic_List_object__o *)this->fields.objectList;
  if ( !objectList )
    goto LABEL_17;
  size = objectList->fields._size;
  if ( size >= 1 )
  {
    v13 = 0;
    do
    {
      Item = System_Collections_Generic_List_object___get_Item(
               objectList,
               v13,
               (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_GameObject__get_Item__);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      objectList = (System_Collections_Generic_List_object__o *)UnityEngine_Object__op_Equality(
                                                                  (UnityEngine_Object_o *)Item,
                                                                  0LL,
                                                                  0LL);
      if ( ((unsigned __int8)objectList & 1) == 0 )
      {
        if ( !Item )
          break;
        objectList = (System_Collections_Generic_List_object__o *)UnityEngine_GameObject__GetComponent_object_(
                                                                    (UnityEngine_GameObject_o *)Item,
                                                                    (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_ServantCheckEquipListViewObject___);
        if ( !v10 )
          break;
        items = v10->fields._items;
        v18 = Method_System_Collections_Generic_List_ServantCheckEquipListViewObject__Add__;
        ++v10->fields._version;
        if ( !items )
          break;
        v19 = v10->fields._size;
        v20 = objectList;
        if ( (unsigned int)v19 >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v10,
            (Il2CppObject *)objectList,
            *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
        }
        else
        {
          v21 = &items->obj.klass + v19;
          v10->fields._size = v19 + 1;
          v21[4] = (Il2CppClass *)v20;
          sub_1B6406C((ServantStatusBattleListViewItem_o *)(v21 + 4), (int32_t)v20, v15, v16);
        }
      }
      if ( size == ++v13 )
        return (System_Collections_Generic_List_ServantCheckEquipListViewObject__o *)v10;
      objectList = (System_Collections_Generic_List_object__o *)this->fields.objectList;
    }
    while ( objectList );
LABEL_17:
    sub_1B64324(objectList);
  }
  return (System_Collections_Generic_List_ServantCheckEquipListViewObject__o *)v10;
}


void __fastcall ServantCheckEquipListViewManager__remove_callbackFunc2(
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

  if ( (byte_49F8808 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, value);
    byte_49F8808 = 1;
  }
  callbackFunc2 = (System_Delegate_o *)this->fields.callbackFunc2;
  p_callbackFunc2 = &this->fields.callbackFunc2;
  while ( 1 )
  {
    v7 = System_Delegate__Remove(callbackFunc2, (System_Delegate_o *)value, 0LL);
    if ( v7 )
    {
      if ( (System_Action_c *)v7->klass != System_Action_TypeInfo )
        break;
    }
    v8 = sub_1B9F5B8(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (ServantCheckEquipListViewManager_o *)sub_1B645E4(v7);
  ServantCheckEquipListViewManager__get_ObjectList(v10, v11);
}


void __fastcall ServantCheckEquipListViewManager___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  Il2CppObject *v3; // x19
  int32_t v4; // w2
  int32_t v5; // w3

  if ( (byte_49F8817 & 1) == 0 )
  {
    sub_1B640C8(&ServantCheckEquipListViewManager___c_TypeInfo, v1);
    byte_49F8817 = 1;
  }
  v3 = (Il2CppObject *)sub_1B64314(ServantCheckEquipListViewManager___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  ServantCheckEquipListViewManager___c_TypeInfo->static_fields->__9 = (struct ServantCheckEquipListViewManager___c_o *)v3;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)ServantCheckEquipListViewManager___c_TypeInfo->static_fields,
    (int32_t)v3,
    v4,
    v5);
}


void __fastcall ServantCheckEquipListViewManager___c___ctor(
        ServantCheckEquipListViewManager___c_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantCheckEquipListViewManager___c___OnClickListView_b__21_0(
        ServantCheckEquipListViewManager___c_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0

  if ( (byte_49F8818 & 1) == 0 )
  {
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, isDecide);
    byte_49F8818 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1B64324(0LL);
  CommonUI__CloseServantStatusDialog((CommonUI_o *)Instance, 0LL, 0LL);
}