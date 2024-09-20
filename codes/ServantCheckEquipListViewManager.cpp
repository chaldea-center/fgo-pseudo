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
  Il2CppObject *current; // x22
  int32_t v6; // w23
  ServantCheckEquipListViewItem_o *v7; // x21
  const MethodInfo *v8; // x4
  __int64 v9; // x1
  int32_t v10; // w2
  int32_t v11; // w3
  System_Collections_Generic_List_object__o *itemList; // x0
  struct System_Object_array *items; // x8
  _QWORD *v14; // x9
  __int64 size; // x10
  Il2CppClass **v16; // x8
  __int64 v17; // x0
  __int64 v18; // x1
  const MethodInfo *v19; // x2
  struct System_Collections_Generic_List_ListViewItem__o *v20; // x8
  struct ListViewItemSeed_o *seed; // x9
  System_Collections_Generic_List_Enumerator_object__o v22; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v23; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_4A574DA & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_UserServantEntity__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_UserServantEntity__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_UserServantEntity__get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_UserServantEntity__GetEnumerator__);
    sub_1B885B0(&Method_System_Collections_Generic_List_UserServantEntity__IndexOf__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_UserServantEntity__get_Count__);
    sub_1B885B0(&ServantCheckEquipListViewItem_TypeInfo);
    byte_4A574DA = 1;
  }
  memset(&v23, 0, sizeof(v23));
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
  if ( userSvtEntityList && userSvtEntityList->fields._size >= 1 )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v22,
      (System_Collections_Generic_List_object__o *)userSvtEntityList,
      (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_UserServantEntity__GetEnumerator__);
    v23 = v22;
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v23,
              (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_UserServantEntity__MoveNext__) )
    {
      current = v23.fields._current;
      if ( NpCombineControl__CheckConfirm_44932636((UserServantEntity_o *)v23.fields._current, 0LL) )
      {
        v6 = System_Collections_Generic_List_object___IndexOf(
               (System_Collections_Generic_List_object__o *)userSvtEntityList,
               current,
               (const MethodInfo_34FE4D4 *)Method_System_Collections_Generic_List_UserServantEntity__IndexOf__);
        v7 = (ServantCheckEquipListViewItem_o *)sub_1B887FC(ServantCheckEquipListViewItem_TypeInfo);
        ServantCheckEquipListViewItem___ctor(v7, (UserServantEntity_o *)current, v6, 1, v8);
        itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
        if ( !itemList )
          sub_1B8880C(0LL, v9);
        items = itemList->fields._items;
        v14 = Method_System_Collections_Generic_List_ListViewItem__Add__;
        ++itemList->fields._version;
        if ( !items )
          sub_1B8880C(itemList, v9);
        size = itemList->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            itemList,
            (Il2CppObject *)v7,
            *(const MethodInfo_34FD834 **)(*(_QWORD *)(v14[4] + 192LL) + 112LL));
        }
        else
        {
          v16 = &items->obj.klass + size;
          itemList->fields._size = size + 1;
          v16[4] = (Il2CppClass *)v7;
          sub_1B88554((ServantStatusBattleListViewItem_o *)(v16 + 4), (int32_t)v7, v10, v11);
        }
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v23,
      (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_UserServantEntity__Dispose__);
    v20 = this->fields.itemList;
    if ( !v20 || (seed = this->fields.seed) == 0LL )
      sub_1B8880C(v17, v18);
    ServantCheckEquipListViewManager__SetScrollBarActive(
      this,
      seed->fields.arrangementVolume.fields.x < (float)v20->fields._size,
      v19);
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
  }
}


void __fastcall ServantCheckEquipListViewManager__CreateList(
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
  __int64 v16; // x8
  _QWORD *v17; // x9
  __int64 v18; // x10
  __int64 v19; // x8
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x8
  struct ListViewItemSeed_o *seed; // x9

  if ( (byte_4A574D8 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_SvtEqCombineListViewItem__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_SvtEqCombineListViewItem__get_Item__);
    sub_1B885B0(&ServantCheckEquipListViewItem_TypeInfo);
    byte_4A574D8 = 1;
  }
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
  if ( !materialList )
    goto LABEL_19;
  size = materialList->fields._size;
  if ( size >= 1 )
  {
    v9 = 0;
    while ( 1 )
    {
      Item = (int *)System_Collections_Generic_List_object___get_Item(
                      (System_Collections_Generic_List_object__o *)materialList,
                      v9,
                      (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_SvtEqCombineListViewItem__get_Item__);
      if ( !Item )
        break;
      if ( *((_BYTE *)Item + 204) || *((_BYTE *)Item + 244) || *((_BYTE *)Item + 245) )
      {
        v10 = (UserServantEntity_o *)*((_QWORD *)Item + 15);
        v11 = Item[4];
        v12 = (ServantCheckEquipListViewItem_o *)sub_1B887FC(ServantCheckEquipListViewItem_TypeInfo);
        ServantCheckEquipListViewItem___ctor(v12, v10, v11, 0, v13);
        Item = (int *)this->fields.itemList;
        if ( !Item )
          break;
        v16 = *((_QWORD *)Item + 2);
        v17 = Method_System_Collections_Generic_List_ListViewItem__Add__;
        ++Item[7];
        if ( !v16 )
          break;
        v18 = Item[6];
        if ( (unsigned int)v18 >= *(_DWORD *)(v16 + 24) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)Item,
            (Il2CppObject *)v12,
            *(const MethodInfo_34FD834 **)(*(_QWORD *)(v17[4] + 192LL) + 112LL));
        }
        else
        {
          v19 = v16 + 8 * v18;
          Item[6] = v18 + 1;
          *(_QWORD *)(v19 + 32) = v12;
          sub_1B88554((ServantStatusBattleListViewItem_o *)(v19 + 32), (int32_t)v12, v14, v15);
        }
      }
      if ( size == ++v9 )
        goto LABEL_16;
    }
LABEL_19:
    sub_1B8880C(Item, v6);
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
    v7);
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
}


void __fastcall ServantCheckEquipListViewManager__CreateList_32567304(
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
  __int64 v17; // x8
  _QWORD *v18; // x9
  __int64 sortIndex; // x10
  __int64 v20; // x8
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x8
  struct ListViewItemSeed_o *seed; // x9

  if ( (byte_4A574D9 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ServantOperationListViewItem__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ServantOperationListViewItem__get_Item__);
    sub_1B885B0(&ServantCheckEquipListViewItem_TypeInfo);
    byte_4A574D9 = 1;
  }
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
  if ( !materialList )
    goto LABEL_20;
  size = materialList->fields._size;
  if ( size >= 1 )
  {
    v9 = 0;
    while ( 1 )
    {
      Item = (ServantOperationListViewItem_o *)System_Collections_Generic_List_object___get_Item(
                                                 (System_Collections_Generic_List_object__o *)materialList,
                                                 v9,
                                                 (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_ServantOperationListViewItem__get_Item__);
      if ( !Item )
        break;
      v10 = Item;
      Item = (ServantOperationListViewItem_o *)ServantOperationListViewItem__get_IsServantEquip(Item, 0LL);
      if ( ((unsigned __int8)Item & 1) != 0
        && (v10->fields._IsPartyEquip_k__BackingField
         || v10->fields._IsUseSupportEquip_k__BackingField
         || v10->fields._IsUseRecommendSupportEquip_k__BackingField) )
      {
        UserServantEntity_k__BackingField = v10->fields._UserServantEntity_k__BackingField;
        selectNum = v10->fields.selectNum;
        v13 = (ServantCheckEquipListViewItem_o *)sub_1B887FC(ServantCheckEquipListViewItem_TypeInfo);
        ServantCheckEquipListViewItem___ctor(v13, UserServantEntity_k__BackingField, selectNum, 0, v14);
        Item = (ServantOperationListViewItem_o *)this->fields.itemList;
        if ( !Item )
          break;
        v17 = *(_QWORD *)&Item->fields.selectNum;
        v18 = Method_System_Collections_Generic_List_ListViewItem__Add__;
        ++Item->fields.loopIndex;
        if ( !v17 )
          break;
        sortIndex = Item->fields.sortIndex;
        if ( (unsigned int)sortIndex >= *(_DWORD *)(v17 + 24) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)Item,
            (Il2CppObject *)v13,
            *(const MethodInfo_34FD834 **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
        }
        else
        {
          v20 = v17 + 8 * sortIndex;
          Item->fields.sortIndex = sortIndex + 1;
          *(_QWORD *)(v20 + 32) = v13;
          sub_1B88554((ServantStatusBattleListViewItem_o *)(v20 + 32), (int32_t)v13, v15, v16);
        }
      }
      if ( size == ++v9 )
        goto LABEL_17;
    }
LABEL_20:
    sub_1B8880C(Item, v6);
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
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
}


void __fastcall ServantCheckEquipListViewManager__CreateMaterialTdServantList(
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
  System_Collections_Generic_List_object__o *itemList; // x0
  struct System_Object_array *items; // x8
  _QWORD *v24; // x9
  __int64 size; // x10
  Il2CppClass **v26; // x8
  __int64 v27; // x0
  __int64 v28; // x1
  const MethodInfo *v29; // x2
  struct System_Collections_Generic_List_ListViewItem__o *v30; // x8
  struct ListViewItemSeed_o *seed; // x9
  System_Collections_Generic_List_Enumerator_object__o v32; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v33; // [xsp+20h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v34; // 0:x0.16

  if ( (byte_4A574DC & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1B885B0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_UserServantEntity__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_UserServantEntity__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_UserServantEntity__get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_UserServantEntity__GetEnumerator__);
    sub_1B885B0(&Method_System_Collections_Generic_List_UserServantEntity__IndexOf__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_UserServantEntity__get_Count__);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1B885B0(&ServantCheckEquipListViewItem_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A574DC = 1;
  }
  memset(&v33, 0, sizeof(v33));
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
  if ( userSvtEntityList && userSvtEntityList->fields._size >= 1 )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v32,
      (System_Collections_Generic_List_object__o *)userSvtEntityList,
      (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_UserServantEntity__GetEnumerator__);
    v33 = v32;
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v33,
              (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_UserServantEntity__MoveNext__) )
    {
      current = v33.fields._current;
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        sub_1B8880C(0LL, v7);
      MasterData_object = DataManager__GetMasterData_object_(
                            (DataManager_o *)Instance,
                            (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantMaster___);
      if ( !current )
        sub_1B8880C(MasterData_object, v9);
      v10 = (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object;
      klass = current[5].klass;
      monitor = current[5].monitor;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v34.fields.currentCryptoKey = klass;
      *(_QWORD *)&v34.fields.fakeValue = monitor;
      v13 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v34, 0LL);
      if ( !v10 )
        sub_1B8880C(v13, (unsigned int)v13);
      Entity = DataMasterBase_object__object__int___GetEntity(
                 v10,
                 v13,
                 (const MethodInfo_311D934 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
      if ( !Entity )
        sub_1B8880C(0LL, v15);
      if ( ServantEntity__get_IsServantMaterialTd((ServantEntity_o *)Entity, 0LL) )
      {
        v16 = System_Collections_Generic_List_object___IndexOf(
                (System_Collections_Generic_List_object__o *)userSvtEntityList,
                current,
                (const MethodInfo_34FE4D4 *)Method_System_Collections_Generic_List_UserServantEntity__IndexOf__);
        v17 = (ServantCheckEquipListViewItem_o *)sub_1B887FC(ServantCheckEquipListViewItem_TypeInfo);
        ServantCheckEquipListViewItem___ctor(v17, (UserServantEntity_o *)current, v16, 3, v18);
        itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
        if ( !itemList )
          sub_1B8880C(0LL, v19);
        items = itemList->fields._items;
        v24 = Method_System_Collections_Generic_List_ListViewItem__Add__;
        ++itemList->fields._version;
        if ( !items )
          sub_1B8880C(itemList, v19);
        size = itemList->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            itemList,
            (Il2CppObject *)v17,
            *(const MethodInfo_34FD834 **)(*(_QWORD *)(v24[4] + 192LL) + 112LL));
        }
        else
        {
          v26 = &items->obj.klass + size;
          itemList->fields._size = size + 1;
          v26[4] = (Il2CppClass *)v17;
          sub_1B88554((ServantStatusBattleListViewItem_o *)(v26 + 4), (int32_t)v17, v20, v21);
        }
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v33,
      (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_UserServantEntity__Dispose__);
    v30 = this->fields.itemList;
    if ( !v30 || (seed = this->fields.seed) == 0LL )
      sub_1B8880C(v27, v28);
    ServantCheckEquipListViewManager__SetScrollBarActive(
      this,
      seed->fields.arrangementVolume.fields.x < (float)v30->fields._size,
      v29);
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
  }
}


void __fastcall ServantCheckEquipListViewManager__CreateSSRareServantList(
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
  System_Collections_Generic_List_object__o *itemList; // x0
  struct System_Object_array *items; // x8
  _QWORD *v24; // x9
  __int64 size; // x10
  Il2CppClass **v26; // x8
  __int64 v27; // x0
  __int64 v28; // x1
  const MethodInfo *v29; // x2
  struct System_Collections_Generic_List_ListViewItem__o *v30; // x8
  struct ListViewItemSeed_o *seed; // x9
  System_Collections_Generic_List_Enumerator_object__o v32; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v33; // [xsp+20h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v34; // 0:x0.16

  if ( (byte_4A574DB & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1B885B0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_UserServantEntity__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_UserServantEntity__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_UserServantEntity__get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_UserServantEntity__GetEnumerator__);
    sub_1B885B0(&Method_System_Collections_Generic_List_UserServantEntity__IndexOf__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_UserServantEntity__get_Count__);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1B885B0(&ServantCheckEquipListViewItem_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A574DB = 1;
  }
  memset(&v33, 0, sizeof(v33));
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
  if ( userSvtEntityList && userSvtEntityList->fields._size >= 1 )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v32,
      (System_Collections_Generic_List_object__o *)userSvtEntityList,
      (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_UserServantEntity__GetEnumerator__);
    v33 = v32;
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v33,
              (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_UserServantEntity__MoveNext__) )
    {
      current = v33.fields._current;
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        sub_1B8880C(0LL, v7);
      MasterData_object = DataManager__GetMasterData_object_(
                            (DataManager_o *)Instance,
                            (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantMaster___);
      if ( !current )
        sub_1B8880C(MasterData_object, v9);
      v10 = (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object;
      klass = current[5].klass;
      monitor = current[5].monitor;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v34.fields.currentCryptoKey = klass;
      *(_QWORD *)&v34.fields.fakeValue = monitor;
      v13 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v34, 0LL);
      if ( !v10 )
        sub_1B8880C(v13, (unsigned int)v13);
      Entity = DataMasterBase_object__object__int___GetEntity(
                 v10,
                 v13,
                 (const MethodInfo_311D934 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
      if ( !Entity )
        sub_1B8880C(0LL, v15);
      if ( ServantEntity__get_IsServant((ServantEntity_o *)Entity, 0LL)
        && UserServantEntity__getRarity((UserServantEntity_o *)current, 0LL) == 5 )
      {
        v16 = System_Collections_Generic_List_object___IndexOf(
                (System_Collections_Generic_List_object__o *)userSvtEntityList,
                current,
                (const MethodInfo_34FE4D4 *)Method_System_Collections_Generic_List_UserServantEntity__IndexOf__);
        v17 = (ServantCheckEquipListViewItem_o *)sub_1B887FC(ServantCheckEquipListViewItem_TypeInfo);
        ServantCheckEquipListViewItem___ctor(v17, (UserServantEntity_o *)current, v16, 2, v18);
        itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
        if ( !itemList )
          sub_1B8880C(0LL, v19);
        items = itemList->fields._items;
        v24 = Method_System_Collections_Generic_List_ListViewItem__Add__;
        ++itemList->fields._version;
        if ( !items )
          sub_1B8880C(itemList, v19);
        size = itemList->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            itemList,
            (Il2CppObject *)v17,
            *(const MethodInfo_34FD834 **)(*(_QWORD *)(v24[4] + 192LL) + 112LL));
        }
        else
        {
          v26 = &items->obj.klass + size;
          itemList->fields._size = size + 1;
          v26[4] = (Il2CppClass *)v17;
          sub_1B88554((ServantStatusBattleListViewItem_o *)(v26 + 4), (int32_t)v17, v20, v21);
        }
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v33,
      (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_UserServantEntity__Dispose__);
    v30 = this->fields.itemList;
    if ( !v30 || (seed = this->fields.seed) == 0LL )
      sub_1B8880C(v27, v28);
    ServantCheckEquipListViewManager__SetScrollBarActive(
      this,
      seed->fields.arrangementVolume.fields.x < (float)v30->fields._size,
      v29);
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
  }
}


ServantCheckEquipListViewItem_o *__fastcall ServantCheckEquipListViewManager__GetItem(
        ServantCheckEquipListViewManager_o *this,
        int32_t index,
        const MethodInfo *method)
{
  ServantCheckEquipListViewItem_o *result; // x0
  __int64 methodPtr_low; // x10

  if ( (byte_4A574DD & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_1B885B0(&ServantCheckEquipListViewItem_TypeInfo);
    byte_4A574DD = 1;
  }
  result = (ServantCheckEquipListViewItem_o *)this->fields.itemList;
  if ( result )
  {
    result = (ServantCheckEquipListViewItem_o *)System_Collections_Generic_List_object___get_Item(
                                                  (System_Collections_Generic_List_object__o *)result,
                                                  index,
                                                  (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
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
  struct ListViewItem_o *linkItem; // x19
  __int64 methodPtr_low; // x9
  _QWORD *v6; // x0
  System_Reflection_MethodBase_o *v7; // x0
  ServantCheckEquipListViewManager___c_c *v8; // x8
  UserServantEntity_o *v9; // x19
  CommonUI_o *v10; // x20
  ServantStatusDialog_EndDelegate_o *_9__21_0; // x21
  Il2CppObject *v12; // x22
  struct ServantCheckEquipListViewManager___c_StaticFields *static_fields; // x0
  int32_t v14; // w2
  int32_t v15; // w3
  ServantCheckEquipListViewManager_o *v16; // x0
  const MethodInfo *v17; // x1

  if ( (byte_4A574E1 & 1) == 0 )
  {
    sub_1B885B0(&ServantStatusDialog_EndDelegate_TypeInfo);
    sub_1B885B0(&ServantCheckEquipListViewItem_TypeInfo);
    sub_1B885B0(&Method_ServantCheckEquipListViewManager_OnClickListView__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1B885B0(&Method_ServantCheckEquipListViewManager___c__OnClickListView_b__21_0__);
    this = (ServantCheckEquipListViewManager_o *)sub_1B885B0(&ServantCheckEquipListViewManager___c_TypeInfo);
    byte_4A574E1 = 1;
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
      v6 = Method_ServantCheckEquipListViewManager_OnClickListView__;
      if ( (*((_BYTE *)Method_ServantCheckEquipListViewManager_OnClickListView__ + 83) & 2) != 0 )
        v6 = (_QWORD *)sub_1B885C8(Method_ServantCheckEquipListViewManager_OnClickListView__);
      v7 = (System_Reflection_MethodBase_o *)sub_1B88594(v6, v6[4]);
      OverwriteAssetSoundName__PlaySystemSe(v7, 0, 0LL);
      this = (ServantCheckEquipListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v8 = ServantCheckEquipListViewManager___c_TypeInfo;
      v9 = *(UserServantEntity_o **)&linkItem[1].fields.selectNum;
      v10 = (CommonUI_o *)this;
      if ( !ServantCheckEquipListViewManager___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantCheckEquipListViewManager___c_TypeInfo);
        v8 = ServantCheckEquipListViewManager___c_TypeInfo;
      }
      _9__21_0 = v8->static_fields->__9__21_0;
      if ( !_9__21_0 )
      {
        if ( !v8->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v8);
          v8 = ServantCheckEquipListViewManager___c_TypeInfo;
        }
        v12 = (Il2CppObject *)v8->static_fields->__9;
        _9__21_0 = (ServantStatusDialog_EndDelegate_o *)sub_1B887FC(ServantStatusDialog_EndDelegate_TypeInfo);
        ServantStatusDialog_EndDelegate___ctor(
          _9__21_0,
          v12,
          Method_ServantCheckEquipListViewManager___c__OnClickListView_b__21_0__,
          0LL);
        static_fields = ServantCheckEquipListViewManager___c_TypeInfo->static_fields;
        static_fields->__9__21_0 = _9__21_0;
        sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__21_0, (int32_t)_9__21_0, v14, v15);
      }
      if ( v10 )
      {
        CommonUI__OpenServantStatusDialog_30504496(v10, 29, v9, _9__21_0, 0LL);
        return;
      }
LABEL_18:
      sub_1B8880C(this, obj);
    }
    v16 = (ServantCheckEquipListViewManager_o *)sub_1B88ACC(linkItem);
    ServantCheckEquipListViewManager__SetContentPivot(v16, v17);
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
  __int64 v7; // x1
  struct UIScrollView_o *v8; // x0
  struct System_Action_o *callbackFunc2; // x20
  int32_t v10; // w2
  int32_t v11; // w3

  if ( (byte_4A574E0 & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A574E0 = 1;
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
        v8 = this->fields.scrollView;
        if ( !v8 )
          sub_1B8880C(0LL, v7);
        ((void (__fastcall *)(struct UIScrollView_o *, __int64, Il2CppMethodPointer))v8->klass->vtable._8_UpdateScrollbars.method)(
          v8,
          1LL,
          v8->klass->vtable._9_SetDragAmount.methodPtr);
        callbackFunc2 = this->fields.callbackFunc2;
        this->fields.callbackFunc2 = 0LL;
        sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc2, 0, v10, v11);
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
  System_Collections_Generic_List_ServantCheckEquipListViewObject__o *v7; // x0
  __int64 v8; // x1
  int32_t size; // w25
  System_Collections_Generic_List_object__o *v10; // x21
  int32_t v11; // w22
  Il2CppObject *Item; // x23
  System_Action_o *v13; // x24
  const MethodInfo *v14; // x3

  if ( (byte_4A574DF & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_ServantCheckEquipListViewObject__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ServantCheckEquipListViewObject__get_Item__);
    sub_1B885B0(&Method_ServantCheckEquipListViewManager_OnMoveEnd__);
    sub_1B885B0(&StringLiteral_9935/*"OnMoveEnd"*/);
    byte_4A574DF = 1;
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
               (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_ServantCheckEquipListViewObject__get_Item__);
      v13 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
      System_Action___ctor(v13, (Il2CppObject *)this, Method_ServantCheckEquipListViewManager_OnMoveEnd__, 0LL);
      if ( !Item )
        break;
      ServantCheckEquipListViewObject__Init_32576132((ServantCheckEquipListViewObject_o *)Item, mode, v13, v14);
      if ( size == ++v11 )
        return;
    }
LABEL_10:
    sub_1B8880C(v7, v8);
  }
  this->fields.callbackCount = 1;
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_9935/*"OnMoveEnd"*/,
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
  if ( (byte_4A574E3 & 1) == 0 )
  {
    this = (ServantCheckEquipListViewManager_o *)sub_1B885B0(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    byte_4A574E3 = 1;
  }
  itemList = v2->fields.itemList;
  if ( !itemList || (scrollView = v2->fields.scrollView) == 0LL )
    sub_1B8880C(this, method);
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
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc2,
    (int32_t)callback,
    (int32_t)callback,
    (int32_t)method);
  ServantCheckEquipListViewManager__SetMode_32566632(this, mode, v6);
}


void __fastcall ServantCheckEquipListViewManager__SetMode_32566632(
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
  if ( (byte_4A574DE & 1) == 0 )
  {
    this = (ServantCheckEquipListViewManager_o *)sub_1B885B0(&ServantCheckEquipListViewObject_TypeInfo);
    byte_4A574DE = 1;
  }
  if ( !obj
    || (methodPtr_low = LOBYTE(ServantCheckEquipListViewObject_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(obj->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low)
    || (ServantCheckEquipListViewObject_c *)obj->klass->_2.typeHierarchy[methodPtr_low - 1] != ServantCheckEquipListViewObject_TypeInfo )
  {
    sub_1B8880C(this, obj);
  }
  if ( v5->fields.initMode == 3 )
    v7 = 3;
  else
    v7 = 2;
  ServantCheckEquipListViewObject__Init_32575644((ServantCheckEquipListViewObject_o *)obj, v7, (const MethodInfo *)item);
}


void __fastcall ServantCheckEquipListViewManager__SetScrollBarActive(
        ServantCheckEquipListViewManager_o *this,
        bool isActive,
        const MethodInfo *method)
{
  UnityEngine_Object_o *scrollBar; // x21
  __int64 v6; // x1
  UnityEngine_Component_o *gameObject; // x0

  if ( (byte_4A574E2 & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A574E2 = 1;
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
      sub_1B8880C(gameObject, v6);
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

  if ( (byte_4A574D4 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    byte_4A574D4 = 1;
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
    v8 = sub_1BC3AA0(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (ServantCheckEquipListViewManager_o *)sub_1B88ACC(v7);
  ServantCheckEquipListViewManager__remove_callbackFunc2(v10, v11, v12);
}


System_Collections_Generic_List_ServantCheckEquipListViewObject__o *__fastcall ServantCheckEquipListViewManager__get_ClippingObjectList(
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
  struct System_Object_array *items; // x8
  _QWORD *v13; // x9
  __int64 v14; // x10
  Il2CppClass **v15; // x0

  if ( (byte_4A574D7 & 1) == 0 )
  {
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_ServantCheckEquipListViewObject___);
    sub_1B885B0(&Method_System_Collections_Generic_List_ServantCheckEquipListViewObject__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ServantCheckEquipListViewObject___ctor__);
    sub_1B885B0(&Method_System_Collections_Generic_List_GameObject__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_GameObject__get_Item__);
    sub_1B885B0(&System_Collections_Generic_List_ServantCheckEquipListViewObject__TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A574D7 = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_ServantCheckEquipListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_ServantCheckEquipListViewObject___ctor__);
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
               (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_GameObject__get_Item__);
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
                                                                    (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_ServantCheckEquipListViewObject___);
        if ( !objectList )
          break;
        v9 = (Il2CppObject *)objectList;
        objectList = (System_Collections_Generic_List_object__o *)ServantCheckEquipListViewObject__GetItem(
                                                                    (ServantCheckEquipListViewObject_o *)objectList,
                                                                    v4);
        if ( !objectList )
          break;
        v4 = (const MethodInfo *)objectList;
        if ( !LOBYTE(objectList[2].monitor)
          || (objectList = (System_Collections_Generic_List_object__o *)ListViewManager__ClippingItem_40722428(
                                                                          (ListViewManager_o *)this,
                                                                          (ListViewItem_o *)objectList,
                                                                          0LL),
              ((unsigned __int8)objectList & 1) != 0) )
        {
          if ( !v3 )
            break;
          items = v3->fields._items;
          v13 = Method_System_Collections_Generic_List_ServantCheckEquipListViewObject__Add__;
          ++v3->fields._version;
          if ( !items )
            break;
          v14 = v3->fields._size;
          if ( (unsigned int)v14 >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v3,
              v9,
              *(const MethodInfo_34FD834 **)(*(_QWORD *)(v13[4] + 192LL) + 112LL));
          }
          else
          {
            v15 = &items->obj.klass + v14;
            v3->fields._size = v14 + 1;
            v15[4] = (Il2CppClass *)v9;
            sub_1B88554((ServantStatusBattleListViewItem_o *)(v15 + 4), (int32_t)v9, v10, v11);
          }
        }
      }
      if ( size == ++v7 )
        return (System_Collections_Generic_List_ServantCheckEquipListViewObject__o *)v3;
      objectList = (System_Collections_Generic_List_object__o *)this->fields.objectList;
    }
    while ( objectList );
LABEL_21:
    sub_1B8880C(objectList, v4);
  }
  return (System_Collections_Generic_List_ServantCheckEquipListViewObject__o *)v3;
}


System_Collections_Generic_List_ServantCheckEquipListViewObject__o *__fastcall ServantCheckEquipListViewManager__get_ObjectList(
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
  struct System_Object_array *items; // x8
  _QWORD *v12; // x9
  __int64 v13; // x10
  System_Collections_Generic_List_object__o *v14; // x1
  Il2CppClass **v15; // x0

  if ( (byte_4A574D6 & 1) == 0 )
  {
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_ServantCheckEquipListViewObject___);
    sub_1B885B0(&Method_System_Collections_Generic_List_ServantCheckEquipListViewObject__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ServantCheckEquipListViewObject___ctor__);
    sub_1B885B0(&Method_System_Collections_Generic_List_GameObject__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_GameObject__get_Item__);
    sub_1B885B0(&System_Collections_Generic_List_ServantCheckEquipListViewObject__TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A574D6 = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_ServantCheckEquipListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_ServantCheckEquipListViewObject___ctor__);
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
               (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_GameObject__get_Item__);
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
                                                                    (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_ServantCheckEquipListViewObject___);
        if ( !v3 )
          break;
        items = v3->fields._items;
        v12 = Method_System_Collections_Generic_List_ServantCheckEquipListViewObject__Add__;
        ++v3->fields._version;
        if ( !items )
          break;
        v13 = v3->fields._size;
        v14 = objectList;
        if ( (unsigned int)v13 >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v3,
            (Il2CppObject *)objectList,
            *(const MethodInfo_34FD834 **)(*(_QWORD *)(v12[4] + 192LL) + 112LL));
        }
        else
        {
          v15 = &items->obj.klass + v13;
          v3->fields._size = v13 + 1;
          v15[4] = (Il2CppClass *)v14;
          sub_1B88554((ServantStatusBattleListViewItem_o *)(v15 + 4), (int32_t)v14, v9, v10);
        }
      }
      if ( size == ++v7 )
        return (System_Collections_Generic_List_ServantCheckEquipListViewObject__o *)v3;
      objectList = (System_Collections_Generic_List_object__o *)this->fields.objectList;
    }
    while ( objectList );
LABEL_17:
    sub_1B8880C(objectList, v4);
  }
  return (System_Collections_Generic_List_ServantCheckEquipListViewObject__o *)v3;
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

  if ( (byte_4A574D5 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    byte_4A574D5 = 1;
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
    v8 = sub_1BC3AA0(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (ServantCheckEquipListViewManager_o *)sub_1B88ACC(v7);
  ServantCheckEquipListViewManager__get_ObjectList(v10, v11);
}


void __fastcall ServantCheckEquipListViewManager___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3

  if ( (byte_4A574E4 & 1) == 0 )
  {
    sub_1B885B0(&ServantCheckEquipListViewManager___c_TypeInfo);
    byte_4A574E4 = 1;
  }
  v1 = (Il2CppObject *)sub_1B887FC(ServantCheckEquipListViewManager___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  ServantCheckEquipListViewManager___c_TypeInfo->static_fields->__9 = (struct ServantCheckEquipListViewManager___c_o *)v1;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)ServantCheckEquipListViewManager___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3);
}


void __fastcall ServantCheckEquipListViewManager___c___ctor(
        ServantCheckEquipListViewManager___c_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall ServantCheckEquipListViewManager___c___OnClickListView_b__21_0(
        ServantCheckEquipListViewManager___c_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4A574E5 & 1) == 0 )
  {
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4A574E5 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1B8880C(0LL, v4);
  CommonUI__CloseServantStatusDialog((CommonUI_o *)Instance, 0LL, 0LL);
}