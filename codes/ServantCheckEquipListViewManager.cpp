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
  ServantCheckEquipListViewItem_o *v15; // x21
  const MethodInfo *v16; // x4
  __int64 v17; // x1
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  System_Collections_Generic_List_object__o *itemList; // x0
  struct System_Object_array *items; // x8
  _QWORD *v22; // x9
  __int64 size; // x10
  Il2CppClass **v24; // x8
  __int64 v25; // x0
  __int64 v26; // x1
  const MethodInfo *v27; // x2
  struct System_Collections_Generic_List_ListViewItem__o *v28; // x8
  struct ListViewItemSeed_o *seed; // x9
  System_Collections_Generic_List_Enumerator_object__o v30; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v31; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_4A4A575 & 1) == 0 )
  {
    sub_1B863B8(&Method_System_Collections_Generic_List_Enumerator_UserServantEntity__Dispose__, userSvtEntityList);
    sub_1B863B8(&Method_System_Collections_Generic_List_Enumerator_UserServantEntity__MoveNext__, v5);
    sub_1B863B8(&Method_System_Collections_Generic_List_Enumerator_UserServantEntity__get_Current__, v6);
    sub_1B863B8(&Method_System_Collections_Generic_List_ListViewItem__Add__, v7);
    sub_1B863B8(&Method_System_Collections_Generic_List_UserServantEntity__GetEnumerator__, v8);
    sub_1B863B8(&Method_System_Collections_Generic_List_UserServantEntity__IndexOf__, v9);
    sub_1B863B8(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v10);
    sub_1B863B8(&Method_System_Collections_Generic_List_UserServantEntity__get_Count__, v11);
    sub_1B863B8(&ServantCheckEquipListViewItem_TypeInfo, v12);
    byte_4A4A575 = 1;
  }
  memset(&v31, 0, sizeof(v31));
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
  if ( userSvtEntityList && userSvtEntityList->fields._size >= 1 )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v30,
      (System_Collections_Generic_List_object__o *)userSvtEntityList,
      (const MethodInfo_35FD450 *)Method_System_Collections_Generic_List_UserServantEntity__GetEnumerator__);
    v31 = v30;
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v31,
              (const MethodInfo_3398634 *)Method_System_Collections_Generic_List_Enumerator_UserServantEntity__MoveNext__) )
    {
      current = v31.fields._current;
      if ( NpCombineControl__CheckConfirm_46233112((UserServantEntity_o *)v31.fields._current, 0LL) )
      {
        v14 = System_Collections_Generic_List_object___IndexOf(
                (System_Collections_Generic_List_object__o *)userSvtEntityList,
                current,
                (const MethodInfo_35FD5F8 *)Method_System_Collections_Generic_List_UserServantEntity__IndexOf__);
        v15 = (ServantCheckEquipListViewItem_o *)sub_1B86604(ServantCheckEquipListViewItem_TypeInfo);
        ServantCheckEquipListViewItem___ctor(v15, (UserServantEntity_o *)current, v14, 1, v16);
        itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
        if ( !itemList )
          sub_1B86614(0LL, v17);
        items = itemList->fields._items;
        v22 = Method_System_Collections_Generic_List_ListViewItem__Add__;
        ++itemList->fields._version;
        if ( !items )
          sub_1B86614(itemList, v17);
        size = itemList->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            itemList,
            (Il2CppObject *)v15,
            *(const MethodInfo_35FC958 **)(*(_QWORD *)(v22[4] + 192LL) + 112LL));
        }
        else
        {
          v24 = &items->obj.klass + size;
          itemList->fields._size = size + 1;
          v24[4] = (Il2CppClass *)v15;
          sub_1B8635C((CGThumbnailListItem_o *)(v24 + 4), (int32_t)v15, v18, v19);
        }
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v31,
      (const MethodInfo_3398630 *)Method_System_Collections_Generic_List_Enumerator_UserServantEntity__Dispose__);
    v28 = this->fields.itemList;
    if ( !v28 || (seed = this->fields.seed) == 0LL )
      sub_1B86614(v25, v26);
    ServantCheckEquipListViewManager__SetScrollBarActive(
      this,
      seed->fields.arrangementVolume.fields.x < (float)v28->fields._size,
      v27);
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
  }
}


void __fastcall ServantCheckEquipListViewManager__CreateCombinedAppendSkillServantList(
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
  _BOOL8 IsNullOrEmpty; // x0
  __int64 v12; // x1
  int32_t v13; // w20
  Il2CppObject *current; // x22
  ServantCheckEquipListViewItem_o *v15; // x21
  const MethodInfo *v16; // x4
  __int64 v17; // x1
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  System_Collections_Generic_List_object__o *itemList; // x0
  struct System_Object_array *items; // x8
  _QWORD *v22; // x9
  __int64 size; // x10
  Il2CppClass **v24; // x8
  const MethodInfo *v25; // x2
  struct System_Collections_Generic_List_ListViewItem__o *v26; // x8
  struct ListViewItemSeed_o *seed; // x9
  System_Collections_Generic_List_Enumerator_object__o v28; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v29; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4A4A578 & 1) == 0 )
  {
    sub_1B863B8(&Method_System_Collections_Generic_List_Enumerator_UserServantEntity__Dispose__, userSvtEntityList);
    sub_1B863B8(&Method_System_Collections_Generic_List_Enumerator_UserServantEntity__MoveNext__, v5);
    sub_1B863B8(&Method_System_Collections_Generic_List_Enumerator_UserServantEntity__get_Current__, v6);
    sub_1B863B8(&Method_System_Collections_Generic_List_ListViewItem__Add__, v7);
    sub_1B863B8(&Method_System_Collections_Generic_List_UserServantEntity__GetEnumerator__, v8);
    sub_1B863B8(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v9);
    sub_1B863B8(&ServantCheckEquipListViewItem_TypeInfo, v10);
    byte_4A4A578 = 1;
  }
  memset(&v29, 0, sizeof(v29));
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
  IsNullOrEmpty = BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)userSvtEntityList, 0LL);
  if ( !IsNullOrEmpty )
  {
    if ( !userSvtEntityList )
      goto LABEL_19;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v28,
      (System_Collections_Generic_List_object__o *)userSvtEntityList,
      (const MethodInfo_35FD450 *)Method_System_Collections_Generic_List_UserServantEntity__GetEnumerator__);
    v29 = v28;
    v13 = 0;
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v29,
              (const MethodInfo_3398634 *)Method_System_Collections_Generic_List_Enumerator_UserServantEntity__MoveNext__) )
    {
      current = v29.fields._current;
      v15 = (ServantCheckEquipListViewItem_o *)sub_1B86604(ServantCheckEquipListViewItem_TypeInfo);
      ServantCheckEquipListViewItem___ctor(v15, (UserServantEntity_o *)current, v13, 4, v16);
      itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
      if ( !itemList )
        sub_1B86614(0LL, v17);
      items = itemList->fields._items;
      v22 = Method_System_Collections_Generic_List_ListViewItem__Add__;
      ++itemList->fields._version;
      if ( !items )
        sub_1B86614(itemList, v17);
      size = itemList->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          itemList,
          (Il2CppObject *)v15,
          *(const MethodInfo_35FC958 **)(*(_QWORD *)(v22[4] + 192LL) + 112LL));
      }
      else
      {
        v24 = &items->obj.klass + size;
        itemList->fields._size = size + 1;
        v24[4] = (Il2CppClass *)v15;
        sub_1B8635C((CGThumbnailListItem_o *)(v24 + 4), (int32_t)v15, v18, v19);
      }
      ++v13;
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v29,
      (const MethodInfo_3398630 *)Method_System_Collections_Generic_List_Enumerator_UserServantEntity__Dispose__);
    v26 = this->fields.itemList;
    if ( !v26 || (seed = this->fields.seed) == 0LL )
LABEL_19:
      sub_1B86614(IsNullOrEmpty, v12);
    ServantCheckEquipListViewManager__SetScrollBarActive(
      this,
      seed->fields.arrangementVolume.fields.x < (float)v26->fields._size,
      v25);
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
  __int64 v10; // x1
  const MethodInfo *v11; // x2
  int32_t size; // w25
  int32_t v13; // w21
  UserServantEntity_o *v14; // x23
  int32_t v15; // w24
  ServantCheckEquipListViewItem_o *v16; // x22
  const MethodInfo *v17; // x4
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  __int64 v20; // x8
  _QWORD *v21; // x9
  __int64 v22; // x10
  __int64 v23; // x8
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x8
  struct ListViewItemSeed_o *seed; // x9

  if ( (byte_4A4A573 & 1) == 0 )
  {
    sub_1B863B8(&Method_System_Collections_Generic_List_ListViewItem__Add__, materialList);
    sub_1B863B8(&Method_System_Collections_Generic_List_SvtEqCombineListViewItem__get_Count__, v5);
    sub_1B863B8(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v6);
    sub_1B863B8(&Method_System_Collections_Generic_List_SvtEqCombineListViewItem__get_Item__, v7);
    sub_1B863B8(&ServantCheckEquipListViewItem_TypeInfo, v8);
    byte_4A4A573 = 1;
  }
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
  if ( !materialList )
    goto LABEL_19;
  size = materialList->fields._size;
  if ( size >= 1 )
  {
    v13 = 0;
    while ( 1 )
    {
      Item = (int *)System_Collections_Generic_List_object___get_Item(
                      (System_Collections_Generic_List_object__o *)materialList,
                      v13,
                      (const MethodInfo_35FC688 *)Method_System_Collections_Generic_List_SvtEqCombineListViewItem__get_Item__);
      if ( !Item )
        break;
      if ( *((_BYTE *)Item + 204) || *((_BYTE *)Item + 244) || *((_BYTE *)Item + 245) )
      {
        v14 = (UserServantEntity_o *)*((_QWORD *)Item + 15);
        v15 = Item[4];
        v16 = (ServantCheckEquipListViewItem_o *)sub_1B86604(ServantCheckEquipListViewItem_TypeInfo);
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
            *(const MethodInfo_35FC958 **)(*(_QWORD *)(v21[4] + 192LL) + 112LL));
        }
        else
        {
          v23 = v20 + 8 * v22;
          Item[6] = v22 + 1;
          *(_QWORD *)(v23 + 32) = v16;
          sub_1B8635C((CGThumbnailListItem_o *)(v23 + 32), (int32_t)v16, v18, v19);
        }
      }
      if ( size == ++v13 )
        goto LABEL_16;
    }
LABEL_19:
    sub_1B86614(Item, v10);
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
    v11);
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
}


void __fastcall ServantCheckEquipListViewManager__CreateList_33227100(
        ServantCheckEquipListViewManager_o *this,
        System_Collections_Generic_List_ServantOperationListViewItem__o *materialList,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  ServantOperationListViewItem_o *Item; // x0
  __int64 v10; // x1
  const MethodInfo *v11; // x2
  int32_t size; // w25
  int32_t v13; // w21
  ServantOperationListViewItem_o *v14; // x22
  UserServantEntity_o *UserServantEntity_k__BackingField; // x23
  int32_t selectNum; // w24
  ServantCheckEquipListViewItem_o *v17; // x22
  const MethodInfo *v18; // x4
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  __int64 v21; // x8
  _QWORD *v22; // x9
  __int64 sortIndex; // x10
  __int64 v24; // x8
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x8
  struct ListViewItemSeed_o *seed; // x9

  if ( (byte_4A4A574 & 1) == 0 )
  {
    sub_1B863B8(&Method_System_Collections_Generic_List_ListViewItem__Add__, materialList);
    sub_1B863B8(&Method_System_Collections_Generic_List_ServantOperationListViewItem__get_Count__, v5);
    sub_1B863B8(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v6);
    sub_1B863B8(&Method_System_Collections_Generic_List_ServantOperationListViewItem__get_Item__, v7);
    sub_1B863B8(&ServantCheckEquipListViewItem_TypeInfo, v8);
    byte_4A4A574 = 1;
  }
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
  if ( !materialList )
    goto LABEL_20;
  size = materialList->fields._size;
  if ( size >= 1 )
  {
    v13 = 0;
    while ( 1 )
    {
      Item = (ServantOperationListViewItem_o *)System_Collections_Generic_List_object___get_Item(
                                                 (System_Collections_Generic_List_object__o *)materialList,
                                                 v13,
                                                 (const MethodInfo_35FC688 *)Method_System_Collections_Generic_List_ServantOperationListViewItem__get_Item__);
      if ( !Item )
        break;
      v14 = Item;
      Item = (ServantOperationListViewItem_o *)ServantOperationListViewItem__get_IsServantEquip(Item, 0LL);
      if ( ((unsigned __int8)Item & 1) != 0
        && (v14->fields._IsPartyEquip_k__BackingField
         || v14->fields._IsUseSupportEquip_k__BackingField
         || v14->fields._IsUseRecommendSupportEquip_k__BackingField) )
      {
        UserServantEntity_k__BackingField = v14->fields._UserServantEntity_k__BackingField;
        selectNum = v14->fields.selectNum;
        v17 = (ServantCheckEquipListViewItem_o *)sub_1B86604(ServantCheckEquipListViewItem_TypeInfo);
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
            *(const MethodInfo_35FC958 **)(*(_QWORD *)(v22[4] + 192LL) + 112LL));
        }
        else
        {
          v24 = v21 + 8 * sortIndex;
          Item->fields.sortIndex = sortIndex + 1;
          *(_QWORD *)(v24 + 32) = v17;
          sub_1B8635C((CGThumbnailListItem_o *)(v24 + 32), (int32_t)v17, v19, v20);
        }
      }
      if ( size == ++v13 )
        goto LABEL_17;
    }
LABEL_20:
    sub_1B86614(Item, v10);
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
    v11);
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
  __int64 v19; // x1
  Il2CppObject *MasterData_object; // x0
  __int64 v21; // x1
  DataMasterBase_TMaster__TEntity__PKType__o *v22; // x22
  void *monitor; // x23
  Il2CppClass *klass; // x24
  __int64 v25; // x0
  Il2CppObject *Entity; // x0
  __int64 v27; // x1
  int32_t v28; // w23
  ServantCheckEquipListViewItem_o *v29; // x22
  const MethodInfo *v30; // x4
  __int64 v31; // x1
  int32_t v32; // w2
  const MethodInfo *v33; // x3
  System_Collections_Generic_List_object__o *itemList; // x0
  struct System_Object_array *items; // x8
  _QWORD *v36; // x9
  __int64 size; // x10
  Il2CppClass **v38; // x8
  __int64 v39; // x0
  __int64 v40; // x1
  const MethodInfo *v41; // x2
  struct System_Collections_Generic_List_ListViewItem__o *v42; // x8
  struct ListViewItemSeed_o *seed; // x9
  System_Collections_Generic_List_Enumerator_object__o v44; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v45; // [xsp+20h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v46; // 0:x0.16

  if ( (byte_4A4A577 & 1) == 0 )
  {
    sub_1B863B8(&Method_DataManager_GetMasterData_ServantMaster___, userSvtEntityList);
    sub_1B863B8(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v5);
    sub_1B863B8(&Method_System_Collections_Generic_List_Enumerator_UserServantEntity__Dispose__, v6);
    sub_1B863B8(&Method_System_Collections_Generic_List_Enumerator_UserServantEntity__MoveNext__, v7);
    sub_1B863B8(&Method_System_Collections_Generic_List_Enumerator_UserServantEntity__get_Current__, v8);
    sub_1B863B8(&Method_System_Collections_Generic_List_ListViewItem__Add__, v9);
    sub_1B863B8(&Method_System_Collections_Generic_List_UserServantEntity__GetEnumerator__, v10);
    sub_1B863B8(&Method_System_Collections_Generic_List_UserServantEntity__IndexOf__, v11);
    sub_1B863B8(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v12);
    sub_1B863B8(&Method_System_Collections_Generic_List_UserServantEntity__get_Count__, v13);
    sub_1B863B8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v14);
    sub_1B863B8(&ServantCheckEquipListViewItem_TypeInfo, v15);
    sub_1B863B8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v16);
    byte_4A4A577 = 1;
  }
  memset(&v45, 0, sizeof(v45));
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
  if ( userSvtEntityList && userSvtEntityList->fields._size >= 1 )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v44,
      (System_Collections_Generic_List_object__o *)userSvtEntityList,
      (const MethodInfo_35FD450 *)Method_System_Collections_Generic_List_UserServantEntity__GetEnumerator__);
    v45 = v44;
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v45,
              (const MethodInfo_3398634 *)Method_System_Collections_Generic_List_Enumerator_UserServantEntity__MoveNext__) )
    {
      current = v45.fields._current;
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        sub_1B86614(0LL, v19);
      MasterData_object = DataManager__GetMasterData_object_(
                            (DataManager_o *)Instance,
                            (const MethodInfo_2F6DCB8 *)Method_DataManager_GetMasterData_ServantMaster___);
      if ( !current )
        sub_1B86614(MasterData_object, v21);
      v22 = (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object;
      klass = current[5].klass;
      monitor = current[5].monitor;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v46.fields.currentCryptoKey = klass;
      *(_QWORD *)&v46.fields.fakeValue = monitor;
      v25 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47434244(v46, 0LL);
      if ( !v22 )
        sub_1B86614(v25, (unsigned int)v25);
      Entity = DataMasterBase_object__object__int___GetEntity(
                 v22,
                 v25,
                 (const MethodInfo_3214280 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
      if ( !Entity )
        sub_1B86614(0LL, v27);
      if ( ServantEntity__get_IsServantMaterialTd((ServantEntity_o *)Entity, 0LL) )
      {
        v28 = System_Collections_Generic_List_object___IndexOf(
                (System_Collections_Generic_List_object__o *)userSvtEntityList,
                current,
                (const MethodInfo_35FD5F8 *)Method_System_Collections_Generic_List_UserServantEntity__IndexOf__);
        v29 = (ServantCheckEquipListViewItem_o *)sub_1B86604(ServantCheckEquipListViewItem_TypeInfo);
        ServantCheckEquipListViewItem___ctor(v29, (UserServantEntity_o *)current, v28, 3, v30);
        itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
        if ( !itemList )
          sub_1B86614(0LL, v31);
        items = itemList->fields._items;
        v36 = Method_System_Collections_Generic_List_ListViewItem__Add__;
        ++itemList->fields._version;
        if ( !items )
          sub_1B86614(itemList, v31);
        size = itemList->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            itemList,
            (Il2CppObject *)v29,
            *(const MethodInfo_35FC958 **)(*(_QWORD *)(v36[4] + 192LL) + 112LL));
        }
        else
        {
          v38 = &items->obj.klass + size;
          itemList->fields._size = size + 1;
          v38[4] = (Il2CppClass *)v29;
          sub_1B8635C((CGThumbnailListItem_o *)(v38 + 4), (int32_t)v29, v32, v33);
        }
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v45,
      (const MethodInfo_3398630 *)Method_System_Collections_Generic_List_Enumerator_UserServantEntity__Dispose__);
    v42 = this->fields.itemList;
    if ( !v42 || (seed = this->fields.seed) == 0LL )
      sub_1B86614(v39, v40);
    ServantCheckEquipListViewManager__SetScrollBarActive(
      this,
      seed->fields.arrangementVolume.fields.x < (float)v42->fields._size,
      v41);
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
  __int64 v19; // x1
  Il2CppObject *MasterData_object; // x0
  __int64 v21; // x1
  DataMasterBase_TMaster__TEntity__PKType__o *v22; // x22
  void *monitor; // x23
  Il2CppClass *klass; // x24
  __int64 v25; // x0
  Il2CppObject *Entity; // x0
  __int64 v27; // x1
  int32_t v28; // w23
  ServantCheckEquipListViewItem_o *v29; // x22
  const MethodInfo *v30; // x4
  __int64 v31; // x1
  int32_t v32; // w2
  const MethodInfo *v33; // x3
  System_Collections_Generic_List_object__o *itemList; // x0
  struct System_Object_array *items; // x8
  _QWORD *v36; // x9
  __int64 size; // x10
  Il2CppClass **v38; // x8
  __int64 v39; // x0
  __int64 v40; // x1
  const MethodInfo *v41; // x2
  struct System_Collections_Generic_List_ListViewItem__o *v42; // x8
  struct ListViewItemSeed_o *seed; // x9
  System_Collections_Generic_List_Enumerator_object__o v44; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v45; // [xsp+20h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v46; // 0:x0.16

  if ( (byte_4A4A576 & 1) == 0 )
  {
    sub_1B863B8(&Method_DataManager_GetMasterData_ServantMaster___, userSvtEntityList);
    sub_1B863B8(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v5);
    sub_1B863B8(&Method_System_Collections_Generic_List_Enumerator_UserServantEntity__Dispose__, v6);
    sub_1B863B8(&Method_System_Collections_Generic_List_Enumerator_UserServantEntity__MoveNext__, v7);
    sub_1B863B8(&Method_System_Collections_Generic_List_Enumerator_UserServantEntity__get_Current__, v8);
    sub_1B863B8(&Method_System_Collections_Generic_List_ListViewItem__Add__, v9);
    sub_1B863B8(&Method_System_Collections_Generic_List_UserServantEntity__GetEnumerator__, v10);
    sub_1B863B8(&Method_System_Collections_Generic_List_UserServantEntity__IndexOf__, v11);
    sub_1B863B8(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v12);
    sub_1B863B8(&Method_System_Collections_Generic_List_UserServantEntity__get_Count__, v13);
    sub_1B863B8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v14);
    sub_1B863B8(&ServantCheckEquipListViewItem_TypeInfo, v15);
    sub_1B863B8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v16);
    byte_4A4A576 = 1;
  }
  memset(&v45, 0, sizeof(v45));
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
  if ( userSvtEntityList && userSvtEntityList->fields._size >= 1 )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v44,
      (System_Collections_Generic_List_object__o *)userSvtEntityList,
      (const MethodInfo_35FD450 *)Method_System_Collections_Generic_List_UserServantEntity__GetEnumerator__);
    v45 = v44;
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v45,
              (const MethodInfo_3398634 *)Method_System_Collections_Generic_List_Enumerator_UserServantEntity__MoveNext__) )
    {
      current = v45.fields._current;
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        sub_1B86614(0LL, v19);
      MasterData_object = DataManager__GetMasterData_object_(
                            (DataManager_o *)Instance,
                            (const MethodInfo_2F6DCB8 *)Method_DataManager_GetMasterData_ServantMaster___);
      if ( !current )
        sub_1B86614(MasterData_object, v21);
      v22 = (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object;
      klass = current[5].klass;
      monitor = current[5].monitor;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v46.fields.currentCryptoKey = klass;
      *(_QWORD *)&v46.fields.fakeValue = monitor;
      v25 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47434244(v46, 0LL);
      if ( !v22 )
        sub_1B86614(v25, (unsigned int)v25);
      Entity = DataMasterBase_object__object__int___GetEntity(
                 v22,
                 v25,
                 (const MethodInfo_3214280 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
      if ( !Entity )
        sub_1B86614(0LL, v27);
      if ( ServantEntity__get_IsServant((ServantEntity_o *)Entity, 0LL)
        && UserServantEntity__getRarity((UserServantEntity_o *)current, 0LL) == 5 )
      {
        v28 = System_Collections_Generic_List_object___IndexOf(
                (System_Collections_Generic_List_object__o *)userSvtEntityList,
                current,
                (const MethodInfo_35FD5F8 *)Method_System_Collections_Generic_List_UserServantEntity__IndexOf__);
        v29 = (ServantCheckEquipListViewItem_o *)sub_1B86604(ServantCheckEquipListViewItem_TypeInfo);
        ServantCheckEquipListViewItem___ctor(v29, (UserServantEntity_o *)current, v28, 2, v30);
        itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
        if ( !itemList )
          sub_1B86614(0LL, v31);
        items = itemList->fields._items;
        v36 = Method_System_Collections_Generic_List_ListViewItem__Add__;
        ++itemList->fields._version;
        if ( !items )
          sub_1B86614(itemList, v31);
        size = itemList->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            itemList,
            (Il2CppObject *)v29,
            *(const MethodInfo_35FC958 **)(*(_QWORD *)(v36[4] + 192LL) + 112LL));
        }
        else
        {
          v38 = &items->obj.klass + size;
          itemList->fields._size = size + 1;
          v38[4] = (Il2CppClass *)v29;
          sub_1B8635C((CGThumbnailListItem_o *)(v38 + 4), (int32_t)v29, v32, v33);
        }
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v45,
      (const MethodInfo_3398630 *)Method_System_Collections_Generic_List_Enumerator_UserServantEntity__Dispose__);
    v42 = this->fields.itemList;
    if ( !v42 || (seed = this->fields.seed) == 0LL )
      sub_1B86614(v39, v40);
    ServantCheckEquipListViewManager__SetScrollBarActive(
      this,
      seed->fields.arrangementVolume.fields.x < (float)v42->fields._size,
      v41);
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

  if ( (byte_4A4A579 & 1) == 0 )
  {
    sub_1B863B8(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, *(_QWORD *)&index);
    sub_1B863B8(&ServantCheckEquipListViewItem_TypeInfo, v5);
    byte_4A4A579 = 1;
  }
  result = (ServantCheckEquipListViewItem_o *)this->fields.itemList;
  if ( result )
  {
    result = (ServantCheckEquipListViewItem_o *)System_Collections_Generic_List_object___get_Item(
                                                  (System_Collections_Generic_List_object__o *)result,
                                                  index,
                                                  (const MethodInfo_35FC688 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
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
  ServantCheckEquipListViewManager___c_c *v13; // x8
  UserServantEntity_o *v14; // x19
  CommonUI_o *v15; // x20
  ServantStatusDialog_EndDelegate_o *_9__22_0; // x21
  Il2CppObject *v17; // x22
  struct ServantCheckEquipListViewManager___c_StaticFields *static_fields; // x0
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  ServantCheckEquipListViewManager_o *v21; // x0
  const MethodInfo *v22; // x1

  if ( (byte_4A4A57D & 1) == 0 )
  {
    sub_1B863B8(&ServantStatusDialog_EndDelegate_TypeInfo, obj);
    sub_1B863B8(&ServantCheckEquipListViewItem_TypeInfo, v4);
    sub_1B863B8(&Method_ServantCheckEquipListViewManager_OnClickListView__, v5);
    sub_1B863B8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    sub_1B863B8(&Method_ServantCheckEquipListViewManager___c__OnClickListView_b__22_0__, v7);
    this = (ServantCheckEquipListViewManager_o *)sub_1B863B8(&ServantCheckEquipListViewManager___c_TypeInfo, v8);
    byte_4A4A57D = 1;
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
        v11 = (_QWORD *)sub_1B863D0(Method_ServantCheckEquipListViewManager_OnClickListView__);
      v12 = (System_Reflection_MethodBase_o *)sub_1B8639C(v11, v11[4]);
      OverwriteAssetSoundName__PlaySystemSe(v12, 0, 0, 0LL);
      this = (ServantCheckEquipListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v13 = ServantCheckEquipListViewManager___c_TypeInfo;
      v14 = *(UserServantEntity_o **)&linkItem[1].fields.selectNum;
      v15 = (CommonUI_o *)this;
      if ( !ServantCheckEquipListViewManager___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantCheckEquipListViewManager___c_TypeInfo);
        v13 = ServantCheckEquipListViewManager___c_TypeInfo;
      }
      _9__22_0 = v13->static_fields->__9__22_0;
      if ( !_9__22_0 )
      {
        if ( !v13->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v13);
          v13 = ServantCheckEquipListViewManager___c_TypeInfo;
        }
        v17 = (Il2CppObject *)v13->static_fields->__9;
        _9__22_0 = (ServantStatusDialog_EndDelegate_o *)sub_1B86604(ServantStatusDialog_EndDelegate_TypeInfo);
        ServantStatusDialog_EndDelegate___ctor(
          _9__22_0,
          v17,
          Method_ServantCheckEquipListViewManager___c__OnClickListView_b__22_0__,
          0LL);
        static_fields = ServantCheckEquipListViewManager___c_TypeInfo->static_fields;
        static_fields->__9__22_0 = _9__22_0;
        sub_1B8635C((CGThumbnailListItem_o *)&static_fields->__9__22_0, (int32_t)_9__22_0, v19, v20);
      }
      if ( v15 )
      {
        CommonUI__OpenServantStatusDialog_30493568(v15, 29, v14, _9__22_0, 0LL);
        return;
      }
LABEL_18:
      sub_1B86614(this, obj);
    }
    v21 = (ServantCheckEquipListViewManager_o *)sub_1B868D4(linkItem);
    ServantCheckEquipListViewManager__SetContentPivot(v21, v22);
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
  const MethodInfo *v11; // x3

  if ( (byte_4A4A57C & 1) == 0 )
  {
    sub_1B863B8(&UnityEngine_Object_TypeInfo, method);
    byte_4A4A57C = 1;
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
          sub_1B86614(0LL, v7);
        ((void (__fastcall *)(struct UIScrollView_o *, __int64, Il2CppMethodPointer))v8->klass->vtable._8_UpdateScrollbars.method)(
          v8,
          1LL,
          v8->klass->vtable._9_SetDragAmount.methodPtr);
        callbackFunc2 = this->fields.callbackFunc2;
        this->fields.callbackFunc2 = 0LL;
        sub_1B8635C((CGThumbnailListItem_o *)&this->fields.callbackFunc2, 0, v10, v11);
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
  __int64 v12; // x1
  int32_t size; // w25
  System_Collections_Generic_List_object__o *v14; // x21
  int32_t v15; // w22
  Il2CppObject *Item; // x23
  System_Action_o *v17; // x24

  if ( (byte_4A4A57B & 1) == 0 )
  {
    sub_1B863B8(&System_Action_TypeInfo, *(_QWORD *)&mode);
    sub_1B863B8(&Method_System_Collections_Generic_List_ServantCheckEquipListViewObject__get_Count__, v7);
    sub_1B863B8(&Method_System_Collections_Generic_List_ServantCheckEquipListViewObject__get_Item__, v8);
    sub_1B863B8(&Method_ServantCheckEquipListViewManager_OnMoveEnd__, v9);
    sub_1B863B8(&StringLiteral_9791/*"OnMoveEnd"*/, v10);
    byte_4A4A57B = 1;
  }
  v11 = ServantCheckEquipListViewManager__get_ObjectList(this, *(const MethodInfo **)&mode);
  if ( !v11 )
    goto LABEL_10;
  size = v11->fields._size;
  v14 = (System_Collections_Generic_List_object__o *)v11;
  if ( size >= 1 )
  {
    v15 = 0;
    this->fields.callbackCount = size;
    while ( 1 )
    {
      Item = System_Collections_Generic_List_object___get_Item(
               v14,
               v15,
               (const MethodInfo_35FC688 *)Method_System_Collections_Generic_List_ServantCheckEquipListViewObject__get_Item__);
      v17 = (System_Action_o *)sub_1B86604(System_Action_TypeInfo);
      System_Action___ctor(v17, (Il2CppObject *)this, Method_ServantCheckEquipListViewManager_OnMoveEnd__, 0LL);
      if ( !Item )
        break;
      ServantCheckEquipListViewObject__Init_33240452((ServantCheckEquipListViewObject_o *)Item, mode, v17, 0LL);
      if ( size == ++v15 )
        return;
    }
LABEL_10:
    sub_1B86614(v11, v12);
  }
  this->fields.callbackCount = 1;
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_9791/*"OnMoveEnd"*/,
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
  if ( (byte_4A4A57F & 1) == 0 )
  {
    this = (ServantCheckEquipListViewManager_o *)sub_1B863B8(
                                                   &Method_System_Collections_Generic_List_ListViewItem__get_Count__,
                                                   method);
    byte_4A4A57F = 1;
  }
  itemList = v2->fields.itemList;
  if ( !itemList || (scrollView = v2->fields.scrollView) == 0LL )
    sub_1B86614(this, method);
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
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.callbackFunc2, (int32_t)callback, (int32_t)callback, method);
  ServantCheckEquipListViewManager__SetMode_33226428(this, mode, v6);
}


void __fastcall ServantCheckEquipListViewManager__SetMode_33226428(
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
  if ( (byte_4A4A57A & 1) == 0 )
  {
    this = (ServantCheckEquipListViewManager_o *)sub_1B863B8(&ServantCheckEquipListViewObject_TypeInfo, obj);
    byte_4A4A57A = 1;
  }
  if ( !obj
    || (methodPtr_low = LOBYTE(ServantCheckEquipListViewObject_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(obj->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low)
    || (ServantCheckEquipListViewObject_c *)obj->klass->_2.typeHierarchy[methodPtr_low - 1] != ServantCheckEquipListViewObject_TypeInfo )
  {
    sub_1B86614(this, obj);
  }
  if ( v5->fields.initMode == 3 )
    v7 = 3;
  else
    v7 = 2;
  ServantCheckEquipListViewObject__Init_33240536((ServantCheckEquipListViewObject_o *)obj, v7, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantCheckEquipListViewManager__SetScrollBarActive(
        ServantCheckEquipListViewManager_o *this,
        bool isActive,
        const MethodInfo *method)
{
  UnityEngine_Object_o *scrollBar; // x21
  __int64 v6; // x1
  UnityEngine_Component_o *gameObject; // x0

  if ( (byte_4A4A57E & 1) == 0 )
  {
    sub_1B863B8(&UnityEngine_Object_TypeInfo, isActive);
    byte_4A4A57E = 1;
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
      sub_1B86614(gameObject, v6);
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

  if ( (byte_4A4A56F & 1) == 0 )
  {
    sub_1B863B8(&System_Action_TypeInfo, value);
    byte_4A4A56F = 1;
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
    v8 = sub_1BC0674(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (ServantCheckEquipListViewManager_o *)sub_1B868D4(v7);
  ServantCheckEquipListViewManager__remove_callbackFunc2(v10, v11, v12);
}


System_Collections_Generic_List_ServantCheckEquipListViewObject__o *__fastcall ServantCheckEquipListViewManager__get_ClippingObjectList(
        ServantCheckEquipListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  System_Collections_Generic_List_object__o *v9; // x20
  System_Collections_Generic_List_object__o *v10; // x1
  System_Collections_Generic_List_object__o *objectList; // x0
  int size; // w23
  int32_t v13; // w21
  Il2CppObject *Item; // x22
  Il2CppObject *v15; // x22
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  struct System_Object_array *items; // x8
  _QWORD *v19; // x9
  __int64 v20; // x10
  Il2CppClass **v21; // x0

  if ( (byte_4A4A572 & 1) == 0 )
  {
    sub_1B863B8(&Method_UnityEngine_GameObject_GetComponent_ServantCheckEquipListViewObject___, method);
    sub_1B863B8(&Method_System_Collections_Generic_List_ServantCheckEquipListViewObject__Add__, v3);
    sub_1B863B8(&Method_System_Collections_Generic_List_ServantCheckEquipListViewObject___ctor__, v4);
    sub_1B863B8(&Method_System_Collections_Generic_List_GameObject__get_Count__, v5);
    sub_1B863B8(&Method_System_Collections_Generic_List_GameObject__get_Item__, v6);
    sub_1B863B8(&System_Collections_Generic_List_ServantCheckEquipListViewObject__TypeInfo, v7);
    sub_1B863B8(&UnityEngine_Object_TypeInfo, v8);
    byte_4A4A572 = 1;
  }
  v9 = (System_Collections_Generic_List_object__o *)sub_1B86604(System_Collections_Generic_List_ServantCheckEquipListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v9,
    (const MethodInfo_35FC124 *)Method_System_Collections_Generic_List_ServantCheckEquipListViewObject___ctor__);
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
               (const MethodInfo_35FC688 *)Method_System_Collections_Generic_List_GameObject__get_Item__);
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
                                                                    (const MethodInfo_2FC0DF0 *)Method_UnityEngine_GameObject_GetComponent_ServantCheckEquipListViewObject___);
        if ( !objectList )
          break;
        v15 = (Il2CppObject *)objectList;
        objectList = (System_Collections_Generic_List_object__o *)ServantCheckEquipListViewObject__GetItem(
                                                                    (ServantCheckEquipListViewObject_o *)objectList,
                                                                    0LL);
        if ( !objectList )
          break;
        v10 = objectList;
        if ( !LOBYTE(objectList[2].monitor)
          || (objectList = (System_Collections_Generic_List_object__o *)ListViewManager__ClippingItem_41791656(
                                                                          (ListViewManager_o *)this,
                                                                          (ListViewItem_o *)objectList,
                                                                          0LL),
              ((unsigned __int8)objectList & 1) != 0) )
        {
          if ( !v9 )
            break;
          items = v9->fields._items;
          v19 = Method_System_Collections_Generic_List_ServantCheckEquipListViewObject__Add__;
          ++v9->fields._version;
          if ( !items )
            break;
          v20 = v9->fields._size;
          if ( (unsigned int)v20 >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v9,
              v15,
              *(const MethodInfo_35FC958 **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
          }
          else
          {
            v21 = &items->obj.klass + v20;
            v9->fields._size = v20 + 1;
            v21[4] = (Il2CppClass *)v15;
            sub_1B8635C((CGThumbnailListItem_o *)(v21 + 4), (int32_t)v15, v16, v17);
          }
        }
      }
      if ( size == ++v13 )
        return (System_Collections_Generic_List_ServantCheckEquipListViewObject__o *)v9;
      objectList = (System_Collections_Generic_List_object__o *)this->fields.objectList;
    }
    while ( objectList );
LABEL_21:
    sub_1B86614(objectList, v10);
  }
  return (System_Collections_Generic_List_ServantCheckEquipListViewObject__o *)v9;
}


System_Collections_Generic_List_ServantCheckEquipListViewObject__o *__fastcall ServantCheckEquipListViewManager__get_ObjectList(
        ServantCheckEquipListViewManager_o *this,
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
  int size; // w23
  int32_t v13; // w21
  Il2CppObject *Item; // x22
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  struct System_Object_array *items; // x8
  _QWORD *v18; // x9
  __int64 v19; // x10
  System_Collections_Generic_List_object__o *v20; // x1
  Il2CppClass **v21; // x0

  if ( (byte_4A4A571 & 1) == 0 )
  {
    sub_1B863B8(&Method_UnityEngine_GameObject_GetComponent_ServantCheckEquipListViewObject___, method);
    sub_1B863B8(&Method_System_Collections_Generic_List_ServantCheckEquipListViewObject__Add__, v3);
    sub_1B863B8(&Method_System_Collections_Generic_List_ServantCheckEquipListViewObject___ctor__, v4);
    sub_1B863B8(&Method_System_Collections_Generic_List_GameObject__get_Count__, v5);
    sub_1B863B8(&Method_System_Collections_Generic_List_GameObject__get_Item__, v6);
    sub_1B863B8(&System_Collections_Generic_List_ServantCheckEquipListViewObject__TypeInfo, v7);
    sub_1B863B8(&UnityEngine_Object_TypeInfo, v8);
    byte_4A4A571 = 1;
  }
  v9 = (System_Collections_Generic_List_object__o *)sub_1B86604(System_Collections_Generic_List_ServantCheckEquipListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v9,
    (const MethodInfo_35FC124 *)Method_System_Collections_Generic_List_ServantCheckEquipListViewObject___ctor__);
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
               (const MethodInfo_35FC688 *)Method_System_Collections_Generic_List_GameObject__get_Item__);
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
                                                                    (const MethodInfo_2FC0DF0 *)Method_UnityEngine_GameObject_GetComponent_ServantCheckEquipListViewObject___);
        if ( !v9 )
          break;
        items = v9->fields._items;
        v18 = Method_System_Collections_Generic_List_ServantCheckEquipListViewObject__Add__;
        ++v9->fields._version;
        if ( !items )
          break;
        v19 = v9->fields._size;
        v20 = objectList;
        if ( (unsigned int)v19 >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v9,
            (Il2CppObject *)objectList,
            *(const MethodInfo_35FC958 **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
        }
        else
        {
          v21 = &items->obj.klass + v19;
          v9->fields._size = v19 + 1;
          v21[4] = (Il2CppClass *)v20;
          sub_1B8635C((CGThumbnailListItem_o *)(v21 + 4), (int32_t)v20, v15, v16);
        }
      }
      if ( size == ++v13 )
        return (System_Collections_Generic_List_ServantCheckEquipListViewObject__o *)v9;
      objectList = (System_Collections_Generic_List_object__o *)this->fields.objectList;
    }
    while ( objectList );
LABEL_17:
    sub_1B86614(objectList, v10);
  }
  return (System_Collections_Generic_List_ServantCheckEquipListViewObject__o *)v9;
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

  if ( (byte_4A4A570 & 1) == 0 )
  {
    sub_1B863B8(&System_Action_TypeInfo, value);
    byte_4A4A570 = 1;
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
    v8 = sub_1BC0674(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (ServantCheckEquipListViewManager_o *)sub_1B868D4(v7);
  ServantCheckEquipListViewManager__get_ObjectList(v10, v11);
}


void __fastcall ServantCheckEquipListViewManager___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int32_t v3; // w2
  const MethodInfo *v4; // x3

  if ( (byte_4A4A580 & 1) == 0 )
  {
    sub_1B863B8(&ServantCheckEquipListViewManager___c_TypeInfo, v1);
    byte_4A4A580 = 1;
  }
  v2 = (Il2CppObject *)sub_1B86604(ServantCheckEquipListViewManager___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  ServantCheckEquipListViewManager___c_TypeInfo->static_fields->__9 = (struct ServantCheckEquipListViewManager___c_o *)v2;
  sub_1B8635C(
    (CGThumbnailListItem_o *)ServantCheckEquipListViewManager___c_TypeInfo->static_fields,
    (int32_t)v2,
    v3,
    v4);
}


void __fastcall ServantCheckEquipListViewManager___c___ctor(
        ServantCheckEquipListViewManager___c_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantCheckEquipListViewManager___c___OnClickListView_b__22_0(
        ServantCheckEquipListViewManager___c_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4A4A581 & 1) == 0 )
  {
    sub_1B863B8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, isDecide);
    byte_4A4A581 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1B86614(0LL, v4);
  CommonUI__CloseServantStatusDialog((CommonUI_o *)Instance, 0LL, 0LL);
}