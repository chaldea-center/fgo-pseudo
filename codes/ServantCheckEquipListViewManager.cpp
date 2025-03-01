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
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  System_Collections_Generic_List_object__o *itemList; // x0
  struct System_Object_array *items; // x8
  _QWORD *v26; // x9
  __int64 size; // x10
  Il2CppClass **v28; // x8
  __int64 v29; // x0
  __int64 v30; // x1
  const MethodInfo *v31; // x2
  struct System_Collections_Generic_List_ListViewItem__o *v32; // x8
  struct ListViewItemSeed_o *seed; // x9
  System_Collections_Generic_List_Enumerator_object__o v34; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v35; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_4BF994D & 1) == 0 )
  {
    sub_1C2E12C(&Method_System_Collections_Generic_List_Enumerator_UserServantEntity__Dispose__, userSvtEntityList);
    sub_1C2E12C(&Method_System_Collections_Generic_List_Enumerator_UserServantEntity__MoveNext__, v5);
    sub_1C2E12C(&Method_System_Collections_Generic_List_Enumerator_UserServantEntity__get_Current__, v6);
    sub_1C2E12C(&Method_System_Collections_Generic_List_ListViewItem__Add__, v7);
    sub_1C2E12C(&Method_System_Collections_Generic_List_UserServantEntity__GetEnumerator__, v8);
    sub_1C2E12C(&Method_System_Collections_Generic_List_UserServantEntity__IndexOf__, v9);
    sub_1C2E12C(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v10);
    sub_1C2E12C(&Method_System_Collections_Generic_List_UserServantEntity__get_Count__, v11);
    sub_1C2E12C(&ServantCheckEquipListViewItem_TypeInfo, v12);
    byte_4BF994D = 1;
  }
  memset(&v35, 0, sizeof(v35));
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
  if ( userSvtEntityList && userSvtEntityList->fields._size >= 1 )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v34,
      (System_Collections_Generic_List_object__o *)userSvtEntityList,
      (const MethodInfo_366C3A4 *)Method_System_Collections_Generic_List_UserServantEntity__GetEnumerator__);
    v35 = v34;
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v35,
              (const MethodInfo_34001C4 *)Method_System_Collections_Generic_List_Enumerator_UserServantEntity__MoveNext__) )
    {
      current = v35.fields._current;
      if ( NpCombineControl__CheckConfirm_46476860((UserServantEntity_o *)v35.fields._current, 0LL) )
      {
        v14 = System_Collections_Generic_List_object___IndexOf(
                (System_Collections_Generic_List_object__o *)userSvtEntityList,
                current,
                (const MethodInfo_366C54C *)Method_System_Collections_Generic_List_UserServantEntity__IndexOf__);
        v15 = (ServantCheckEquipListViewItem_o *)sub_1C2E378(ServantCheckEquipListViewItem_TypeInfo);
        ServantCheckEquipListViewItem___ctor(v15, (UserServantEntity_o *)current, v14, 1, v16);
        itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
        if ( !itemList )
          sub_1C2E388(0LL, v17);
        items = itemList->fields._items;
        v26 = Method_System_Collections_Generic_List_ListViewItem__Add__;
        ++itemList->fields._version;
        if ( !items )
          sub_1C2E388(itemList, v17);
        size = itemList->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            itemList,
            (Il2CppObject *)v15,
            *(const MethodInfo_366B8AC **)(*(_QWORD *)(v26[4] + 192LL) + 112LL));
        }
        else
        {
          v28 = &items->obj.klass + size;
          itemList->fields._size = size + 1;
          v28[4] = (Il2CppClass *)v15;
          sub_1C2E0D0((PartyOrganizationUtility_o *)(v28 + 4), (int64_t)v15, v18, v19, v20, v21, v22, v23);
        }
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v35,
      (const MethodInfo_34001C0 *)Method_System_Collections_Generic_List_Enumerator_UserServantEntity__Dispose__);
    v32 = this->fields.itemList;
    if ( !v32 || (seed = this->fields.seed) == 0LL )
      sub_1C2E388(v29, v30);
    ServantCheckEquipListViewManager__SetScrollBarActive(
      this,
      seed->fields.arrangementVolume.fields.x < (float)v32->fields._size,
      v31);
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
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  System_Collections_Generic_List_object__o *itemList; // x0
  struct System_Object_array *items; // x8
  _QWORD *v26; // x9
  __int64 size; // x10
  Il2CppClass **v28; // x8
  const MethodInfo *v29; // x2
  struct System_Collections_Generic_List_ListViewItem__o *v30; // x8
  struct ListViewItemSeed_o *seed; // x9
  System_Collections_Generic_List_Enumerator_object__o v32; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v33; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4BF9950 & 1) == 0 )
  {
    sub_1C2E12C(&Method_System_Collections_Generic_List_Enumerator_UserServantEntity__Dispose__, userSvtEntityList);
    sub_1C2E12C(&Method_System_Collections_Generic_List_Enumerator_UserServantEntity__MoveNext__, v5);
    sub_1C2E12C(&Method_System_Collections_Generic_List_Enumerator_UserServantEntity__get_Current__, v6);
    sub_1C2E12C(&Method_System_Collections_Generic_List_ListViewItem__Add__, v7);
    sub_1C2E12C(&Method_System_Collections_Generic_List_UserServantEntity__GetEnumerator__, v8);
    sub_1C2E12C(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v9);
    sub_1C2E12C(&ServantCheckEquipListViewItem_TypeInfo, v10);
    byte_4BF9950 = 1;
  }
  memset(&v33, 0, sizeof(v33));
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
  IsNullOrEmpty = BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)userSvtEntityList, 0LL);
  if ( !IsNullOrEmpty )
  {
    if ( !userSvtEntityList )
      goto LABEL_19;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v32,
      (System_Collections_Generic_List_object__o *)userSvtEntityList,
      (const MethodInfo_366C3A4 *)Method_System_Collections_Generic_List_UserServantEntity__GetEnumerator__);
    v33 = v32;
    v13 = 0;
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v33,
              (const MethodInfo_34001C4 *)Method_System_Collections_Generic_List_Enumerator_UserServantEntity__MoveNext__) )
    {
      current = v33.fields._current;
      v15 = (ServantCheckEquipListViewItem_o *)sub_1C2E378(ServantCheckEquipListViewItem_TypeInfo);
      ServantCheckEquipListViewItem___ctor(v15, (UserServantEntity_o *)current, v13, 4, v16);
      itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
      if ( !itemList )
        sub_1C2E388(0LL, v17);
      items = itemList->fields._items;
      v26 = Method_System_Collections_Generic_List_ListViewItem__Add__;
      ++itemList->fields._version;
      if ( !items )
        sub_1C2E388(itemList, v17);
      size = itemList->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          itemList,
          (Il2CppObject *)v15,
          *(const MethodInfo_366B8AC **)(*(_QWORD *)(v26[4] + 192LL) + 112LL));
      }
      else
      {
        v28 = &items->obj.klass + size;
        itemList->fields._size = size + 1;
        v28[4] = (Il2CppClass *)v15;
        sub_1C2E0D0((PartyOrganizationUtility_o *)(v28 + 4), (int64_t)v15, v18, v19, v20, v21, v22, v23);
      }
      ++v13;
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v33,
      (const MethodInfo_34001C0 *)Method_System_Collections_Generic_List_Enumerator_UserServantEntity__Dispose__);
    v30 = this->fields.itemList;
    if ( !v30 || (seed = this->fields.seed) == 0LL )
LABEL_19:
      sub_1C2E388(IsNullOrEmpty, v12);
    ServantCheckEquipListViewManager__SetScrollBarActive(
      this,
      seed->fields.arrangementVolume.fields.x < (float)v30->fields._size,
      v29);
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
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  __int64 v24; // x8
  _QWORD *v25; // x9
  __int64 v26; // x10
  __int64 v27; // x8
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x8
  struct ListViewItemSeed_o *seed; // x9

  if ( (byte_4BF994B & 1) == 0 )
  {
    sub_1C2E12C(&Method_System_Collections_Generic_List_ListViewItem__Add__, materialList);
    sub_1C2E12C(&Method_System_Collections_Generic_List_SvtEqCombineListViewItem__get_Count__, v5);
    sub_1C2E12C(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v6);
    sub_1C2E12C(&Method_System_Collections_Generic_List_SvtEqCombineListViewItem__get_Item__, v7);
    sub_1C2E12C(&ServantCheckEquipListViewItem_TypeInfo, v8);
    byte_4BF994B = 1;
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
                      (const MethodInfo_366B5DC *)Method_System_Collections_Generic_List_SvtEqCombineListViewItem__get_Item__);
      if ( !Item )
        break;
      if ( *((_BYTE *)Item + 204) || *((_BYTE *)Item + 244) || *((_BYTE *)Item + 245) )
      {
        v14 = (UserServantEntity_o *)*((_QWORD *)Item + 15);
        v15 = Item[4];
        v16 = (ServantCheckEquipListViewItem_o *)sub_1C2E378(ServantCheckEquipListViewItem_TypeInfo);
        ServantCheckEquipListViewItem___ctor(v16, v14, v15, 0, v17);
        Item = (int *)this->fields.itemList;
        if ( !Item )
          break;
        v24 = *((_QWORD *)Item + 2);
        v25 = Method_System_Collections_Generic_List_ListViewItem__Add__;
        ++Item[7];
        if ( !v24 )
          break;
        v26 = Item[6];
        if ( (unsigned int)v26 >= *(_DWORD *)(v24 + 24) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)Item,
            (Il2CppObject *)v16,
            *(const MethodInfo_366B8AC **)(*(_QWORD *)(v25[4] + 192LL) + 112LL));
        }
        else
        {
          v27 = v24 + 8 * v26;
          Item[6] = v26 + 1;
          *(_QWORD *)(v27 + 32) = v16;
          sub_1C2E0D0((PartyOrganizationUtility_o *)(v27 + 32), (int64_t)v16, v18, v19, v20, v21, v22, v23);
        }
      }
      if ( size == ++v13 )
        goto LABEL_16;
    }
LABEL_19:
    sub_1C2E388(Item, v10);
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


void __fastcall ServantCheckEquipListViewManager__CreateList_33724056(
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
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7
  __int64 v25; // x8
  _QWORD *v26; // x9
  __int64 sortIndex; // x10
  __int64 v28; // x8
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x8
  struct ListViewItemSeed_o *seed; // x9

  if ( (byte_4BF994C & 1) == 0 )
  {
    sub_1C2E12C(&Method_System_Collections_Generic_List_ListViewItem__Add__, materialList);
    sub_1C2E12C(&Method_System_Collections_Generic_List_ServantOperationListViewItem__get_Count__, v5);
    sub_1C2E12C(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v6);
    sub_1C2E12C(&Method_System_Collections_Generic_List_ServantOperationListViewItem__get_Item__, v7);
    sub_1C2E12C(&ServantCheckEquipListViewItem_TypeInfo, v8);
    byte_4BF994C = 1;
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
                                                 (const MethodInfo_366B5DC *)Method_System_Collections_Generic_List_ServantOperationListViewItem__get_Item__);
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
        v17 = (ServantCheckEquipListViewItem_o *)sub_1C2E378(ServantCheckEquipListViewItem_TypeInfo);
        ServantCheckEquipListViewItem___ctor(v17, UserServantEntity_k__BackingField, selectNum, 0, v18);
        Item = (ServantOperationListViewItem_o *)this->fields.itemList;
        if ( !Item )
          break;
        v25 = *(_QWORD *)&Item->fields.selectNum;
        v26 = Method_System_Collections_Generic_List_ListViewItem__Add__;
        ++Item->fields.loopIndex;
        if ( !v25 )
          break;
        sortIndex = Item->fields.sortIndex;
        if ( (unsigned int)sortIndex >= *(_DWORD *)(v25 + 24) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)Item,
            (Il2CppObject *)v17,
            *(const MethodInfo_366B8AC **)(*(_QWORD *)(v26[4] + 192LL) + 112LL));
        }
        else
        {
          v28 = v25 + 8 * sortIndex;
          Item->fields.sortIndex = sortIndex + 1;
          *(_QWORD *)(v28 + 32) = v17;
          sub_1C2E0D0((PartyOrganizationUtility_o *)(v28 + 32), (int64_t)v17, v19, v20, v21, v22, v23, v24);
        }
      }
      if ( size == ++v13 )
        goto LABEL_17;
    }
LABEL_20:
    sub_1C2E388(Item, v10);
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
  int64_t v32; // x2
  int32_t v33; // w3
  System_String_o *v34; // x4
  BattleSetupInfo_o *v35; // x5
  FollowerInfo_o *v36; // x6
  PartyListViewItem_o *v37; // x7
  System_Collections_Generic_List_object__o *itemList; // x0
  struct System_Object_array *items; // x8
  _QWORD *v40; // x9
  __int64 size; // x10
  Il2CppClass **v42; // x8
  __int64 v43; // x0
  __int64 v44; // x1
  const MethodInfo *v45; // x2
  struct System_Collections_Generic_List_ListViewItem__o *v46; // x8
  struct ListViewItemSeed_o *seed; // x9
  System_Collections_Generic_List_Enumerator_object__o v48; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v49; // [xsp+20h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v50; // 0:x0.16

  if ( (byte_4BF994F & 1) == 0 )
  {
    sub_1C2E12C(&Method_DataManager_GetMasterData_ServantMaster___, userSvtEntityList);
    sub_1C2E12C(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v5);
    sub_1C2E12C(&Method_System_Collections_Generic_List_Enumerator_UserServantEntity__Dispose__, v6);
    sub_1C2E12C(&Method_System_Collections_Generic_List_Enumerator_UserServantEntity__MoveNext__, v7);
    sub_1C2E12C(&Method_System_Collections_Generic_List_Enumerator_UserServantEntity__get_Current__, v8);
    sub_1C2E12C(&Method_System_Collections_Generic_List_ListViewItem__Add__, v9);
    sub_1C2E12C(&Method_System_Collections_Generic_List_UserServantEntity__GetEnumerator__, v10);
    sub_1C2E12C(&Method_System_Collections_Generic_List_UserServantEntity__IndexOf__, v11);
    sub_1C2E12C(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v12);
    sub_1C2E12C(&Method_System_Collections_Generic_List_UserServantEntity__get_Count__, v13);
    sub_1C2E12C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v14);
    sub_1C2E12C(&ServantCheckEquipListViewItem_TypeInfo, v15);
    sub_1C2E12C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v16);
    byte_4BF994F = 1;
  }
  memset(&v49, 0, sizeof(v49));
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
  if ( userSvtEntityList && userSvtEntityList->fields._size >= 1 )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v48,
      (System_Collections_Generic_List_object__o *)userSvtEntityList,
      (const MethodInfo_366C3A4 *)Method_System_Collections_Generic_List_UserServantEntity__GetEnumerator__);
    v49 = v48;
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v49,
              (const MethodInfo_34001C4 *)Method_System_Collections_Generic_List_Enumerator_UserServantEntity__MoveNext__) )
    {
      current = v49.fields._current;
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38A7F90 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        sub_1C2E388(0LL, v19);
      MasterData_object = DataManager__GetMasterData_object_(
                            (DataManager_o *)Instance,
                            (const MethodInfo_2FD1830 *)Method_DataManager_GetMasterData_ServantMaster___);
      if ( !current )
        sub_1C2E388(MasterData_object, v21);
      v22 = (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object;
      klass = current[5].klass;
      monitor = current[5].monitor;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v50.fields.currentCryptoKey = klass;
      *(_QWORD *)&v50.fields.fakeValue = monitor;
      v25 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47758816(v50, 0LL);
      if ( !v22 )
        sub_1C2E388(v25, (unsigned int)v25);
      Entity = DataMasterBase_object__object__int___GetEntity(
                 v22,
                 v25,
                 (const MethodInfo_327B180 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
      if ( !Entity )
        sub_1C2E388(0LL, v27);
      if ( ServantEntity__get_IsServantMaterialTd((ServantEntity_o *)Entity, 0LL) )
      {
        v28 = System_Collections_Generic_List_object___IndexOf(
                (System_Collections_Generic_List_object__o *)userSvtEntityList,
                current,
                (const MethodInfo_366C54C *)Method_System_Collections_Generic_List_UserServantEntity__IndexOf__);
        v29 = (ServantCheckEquipListViewItem_o *)sub_1C2E378(ServantCheckEquipListViewItem_TypeInfo);
        ServantCheckEquipListViewItem___ctor(v29, (UserServantEntity_o *)current, v28, 3, v30);
        itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
        if ( !itemList )
          sub_1C2E388(0LL, v31);
        items = itemList->fields._items;
        v40 = Method_System_Collections_Generic_List_ListViewItem__Add__;
        ++itemList->fields._version;
        if ( !items )
          sub_1C2E388(itemList, v31);
        size = itemList->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            itemList,
            (Il2CppObject *)v29,
            *(const MethodInfo_366B8AC **)(*(_QWORD *)(v40[4] + 192LL) + 112LL));
        }
        else
        {
          v42 = &items->obj.klass + size;
          itemList->fields._size = size + 1;
          v42[4] = (Il2CppClass *)v29;
          sub_1C2E0D0((PartyOrganizationUtility_o *)(v42 + 4), (int64_t)v29, v32, v33, v34, v35, v36, v37);
        }
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v49,
      (const MethodInfo_34001C0 *)Method_System_Collections_Generic_List_Enumerator_UserServantEntity__Dispose__);
    v46 = this->fields.itemList;
    if ( !v46 || (seed = this->fields.seed) == 0LL )
      sub_1C2E388(v43, v44);
    ServantCheckEquipListViewManager__SetScrollBarActive(
      this,
      seed->fields.arrangementVolume.fields.x < (float)v46->fields._size,
      v45);
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
  int64_t v32; // x2
  int32_t v33; // w3
  System_String_o *v34; // x4
  BattleSetupInfo_o *v35; // x5
  FollowerInfo_o *v36; // x6
  PartyListViewItem_o *v37; // x7
  System_Collections_Generic_List_object__o *itemList; // x0
  struct System_Object_array *items; // x8
  _QWORD *v40; // x9
  __int64 size; // x10
  Il2CppClass **v42; // x8
  __int64 v43; // x0
  __int64 v44; // x1
  const MethodInfo *v45; // x2
  struct System_Collections_Generic_List_ListViewItem__o *v46; // x8
  struct ListViewItemSeed_o *seed; // x9
  System_Collections_Generic_List_Enumerator_object__o v48; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v49; // [xsp+20h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v50; // 0:x0.16

  if ( (byte_4BF994E & 1) == 0 )
  {
    sub_1C2E12C(&Method_DataManager_GetMasterData_ServantMaster___, userSvtEntityList);
    sub_1C2E12C(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v5);
    sub_1C2E12C(&Method_System_Collections_Generic_List_Enumerator_UserServantEntity__Dispose__, v6);
    sub_1C2E12C(&Method_System_Collections_Generic_List_Enumerator_UserServantEntity__MoveNext__, v7);
    sub_1C2E12C(&Method_System_Collections_Generic_List_Enumerator_UserServantEntity__get_Current__, v8);
    sub_1C2E12C(&Method_System_Collections_Generic_List_ListViewItem__Add__, v9);
    sub_1C2E12C(&Method_System_Collections_Generic_List_UserServantEntity__GetEnumerator__, v10);
    sub_1C2E12C(&Method_System_Collections_Generic_List_UserServantEntity__IndexOf__, v11);
    sub_1C2E12C(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v12);
    sub_1C2E12C(&Method_System_Collections_Generic_List_UserServantEntity__get_Count__, v13);
    sub_1C2E12C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v14);
    sub_1C2E12C(&ServantCheckEquipListViewItem_TypeInfo, v15);
    sub_1C2E12C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v16);
    byte_4BF994E = 1;
  }
  memset(&v49, 0, sizeof(v49));
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
  if ( userSvtEntityList && userSvtEntityList->fields._size >= 1 )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v48,
      (System_Collections_Generic_List_object__o *)userSvtEntityList,
      (const MethodInfo_366C3A4 *)Method_System_Collections_Generic_List_UserServantEntity__GetEnumerator__);
    v49 = v48;
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v49,
              (const MethodInfo_34001C4 *)Method_System_Collections_Generic_List_Enumerator_UserServantEntity__MoveNext__) )
    {
      current = v49.fields._current;
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38A7F90 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        sub_1C2E388(0LL, v19);
      MasterData_object = DataManager__GetMasterData_object_(
                            (DataManager_o *)Instance,
                            (const MethodInfo_2FD1830 *)Method_DataManager_GetMasterData_ServantMaster___);
      if ( !current )
        sub_1C2E388(MasterData_object, v21);
      v22 = (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object;
      klass = current[5].klass;
      monitor = current[5].monitor;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v50.fields.currentCryptoKey = klass;
      *(_QWORD *)&v50.fields.fakeValue = monitor;
      v25 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47758816(v50, 0LL);
      if ( !v22 )
        sub_1C2E388(v25, (unsigned int)v25);
      Entity = DataMasterBase_object__object__int___GetEntity(
                 v22,
                 v25,
                 (const MethodInfo_327B180 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
      if ( !Entity )
        sub_1C2E388(0LL, v27);
      if ( ServantEntity__get_IsServant((ServantEntity_o *)Entity, 0LL)
        && UserServantEntity__getRarity((UserServantEntity_o *)current, 0LL) == 5 )
      {
        v28 = System_Collections_Generic_List_object___IndexOf(
                (System_Collections_Generic_List_object__o *)userSvtEntityList,
                current,
                (const MethodInfo_366C54C *)Method_System_Collections_Generic_List_UserServantEntity__IndexOf__);
        v29 = (ServantCheckEquipListViewItem_o *)sub_1C2E378(ServantCheckEquipListViewItem_TypeInfo);
        ServantCheckEquipListViewItem___ctor(v29, (UserServantEntity_o *)current, v28, 2, v30);
        itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
        if ( !itemList )
          sub_1C2E388(0LL, v31);
        items = itemList->fields._items;
        v40 = Method_System_Collections_Generic_List_ListViewItem__Add__;
        ++itemList->fields._version;
        if ( !items )
          sub_1C2E388(itemList, v31);
        size = itemList->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            itemList,
            (Il2CppObject *)v29,
            *(const MethodInfo_366B8AC **)(*(_QWORD *)(v40[4] + 192LL) + 112LL));
        }
        else
        {
          v42 = &items->obj.klass + size;
          itemList->fields._size = size + 1;
          v42[4] = (Il2CppClass *)v29;
          sub_1C2E0D0((PartyOrganizationUtility_o *)(v42 + 4), (int64_t)v29, v32, v33, v34, v35, v36, v37);
        }
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v49,
      (const MethodInfo_34001C0 *)Method_System_Collections_Generic_List_Enumerator_UserServantEntity__Dispose__);
    v46 = this->fields.itemList;
    if ( !v46 || (seed = this->fields.seed) == 0LL )
      sub_1C2E388(v43, v44);
    ServantCheckEquipListViewManager__SetScrollBarActive(
      this,
      seed->fields.arrangementVolume.fields.x < (float)v46->fields._size,
      v45);
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

  if ( (byte_4BF9951 & 1) == 0 )
  {
    sub_1C2E12C(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, *(_QWORD *)&index);
    sub_1C2E12C(&ServantCheckEquipListViewItem_TypeInfo, v5);
    byte_4BF9951 = 1;
  }
  result = (ServantCheckEquipListViewItem_o *)this->fields.itemList;
  if ( result )
  {
    result = (ServantCheckEquipListViewItem_o *)System_Collections_Generic_List_object___get_Item(
                                                  (System_Collections_Generic_List_object__o *)result,
                                                  index,
                                                  (const MethodInfo_366B5DC *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
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
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7
  ServantCheckEquipListViewManager_o *v25; // x0
  const MethodInfo *v26; // x1

  if ( (byte_4BF9955 & 1) == 0 )
  {
    sub_1C2E12C(&ServantStatusDialog_EndDelegate_TypeInfo, obj);
    sub_1C2E12C(&ServantCheckEquipListViewItem_TypeInfo, v4);
    sub_1C2E12C(&Method_ServantCheckEquipListViewManager_OnClickListView__, v5);
    sub_1C2E12C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    sub_1C2E12C(&Method_ServantCheckEquipListViewManager___c__OnClickListView_b__22_0__, v7);
    this = (ServantCheckEquipListViewManager_o *)sub_1C2E12C(&ServantCheckEquipListViewManager___c_TypeInfo, v8);
    byte_4BF9955 = 1;
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
        v11 = (_QWORD *)sub_1C2E144(Method_ServantCheckEquipListViewManager_OnClickListView__);
      v12 = (System_Reflection_MethodBase_o *)sub_1C2E110(v11, v11[4]);
      OverwriteAssetSoundName__PlaySystemSe(v12, 0, 0, 0LL);
      this = (ServantCheckEquipListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38A7F90 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
        _9__22_0 = (ServantStatusDialog_EndDelegate_o *)sub_1C2E378(ServantStatusDialog_EndDelegate_TypeInfo);
        ServantStatusDialog_EndDelegate___ctor(
          _9__22_0,
          v17,
          Method_ServantCheckEquipListViewManager___c__OnClickListView_b__22_0__,
          0LL);
        static_fields = ServantCheckEquipListViewManager___c_TypeInfo->static_fields;
        static_fields->__9__22_0 = _9__22_0;
        sub_1C2E0D0(
          (PartyOrganizationUtility_o *)&static_fields->__9__22_0,
          (int64_t)_9__22_0,
          v19,
          v20,
          v21,
          v22,
          v23,
          v24);
      }
      if ( v15 )
      {
        CommonUI__OpenServantStatusDialog_31187420(v15, 29, v14, _9__22_0, 0LL);
        return;
      }
LABEL_18:
      sub_1C2E388(this, obj);
    }
    v25 = (ServantCheckEquipListViewManager_o *)sub_1C2E648(linkItem);
    ServantCheckEquipListViewManager__SetContentPivot(v25, v26);
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
  int64_t v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7

  if ( (byte_4BF9954 & 1) == 0 )
  {
    sub_1C2E12C(&UnityEngine_Object_TypeInfo, method);
    byte_4BF9954 = 1;
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
          sub_1C2E388(0LL, v7);
        ((void (__fastcall *)(struct UIScrollView_o *, __int64, Il2CppMethodPointer))v8->klass->vtable._8_UpdateScrollbars.method)(
          v8,
          1LL,
          v8->klass->vtable._9_SetDragAmount.methodPtr);
        callbackFunc2 = this->fields.callbackFunc2;
        this->fields.callbackFunc2 = 0LL;
        sub_1C2E0D0((PartyOrganizationUtility_o *)&this->fields.callbackFunc2, 0LL, v10, v11, v12, v13, v14, v15);
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

  if ( (byte_4BF9953 & 1) == 0 )
  {
    sub_1C2E12C(&System_Action_TypeInfo, *(_QWORD *)&mode);
    sub_1C2E12C(&Method_System_Collections_Generic_List_ServantCheckEquipListViewObject__get_Count__, v7);
    sub_1C2E12C(&Method_System_Collections_Generic_List_ServantCheckEquipListViewObject__get_Item__, v8);
    sub_1C2E12C(&Method_ServantCheckEquipListViewManager_OnMoveEnd__, v9);
    sub_1C2E12C(&StringLiteral_10127/*"OnMoveEnd"*/, v10);
    byte_4BF9953 = 1;
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
               (const MethodInfo_366B5DC *)Method_System_Collections_Generic_List_ServantCheckEquipListViewObject__get_Item__);
      v17 = (System_Action_o *)sub_1C2E378(System_Action_TypeInfo);
      System_Action___ctor(v17, (Il2CppObject *)this, Method_ServantCheckEquipListViewManager_OnMoveEnd__, 0LL);
      if ( !Item )
        break;
      ServantCheckEquipListViewObject__Init_33737392((ServantCheckEquipListViewObject_o *)Item, mode, v17, 0LL);
      if ( size == ++v15 )
        return;
    }
LABEL_10:
    sub_1C2E388(v11, v12);
  }
  this->fields.callbackCount = 1;
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_10127/*"OnMoveEnd"*/,
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
  if ( (byte_4BF9957 & 1) == 0 )
  {
    this = (ServantCheckEquipListViewManager_o *)sub_1C2E12C(
                                                   &Method_System_Collections_Generic_List_ListViewItem__get_Count__,
                                                   method);
    byte_4BF9957 = 1;
  }
  itemList = v2->fields.itemList;
  if ( !itemList || (scrollView = v2->fields.scrollView) == 0LL )
    sub_1C2E388(this, method);
  scrollView->fields.contentPivot = 4 * (itemList->fields._size == 1);
}


void __fastcall ServantCheckEquipListViewManager__SetMode(
        ServantCheckEquipListViewManager_o *this,
        int32_t mode,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  const MethodInfo *v10; // x2

  this->fields.callbackFunc2 = callback;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&this->fields.callbackFunc2,
    (int64_t)callback,
    (int64_t)callback,
    (int32_t)method,
    v4,
    v5,
    v6,
    v7);
  ServantCheckEquipListViewManager__SetMode_33723384(this, mode, v10);
}


void __fastcall ServantCheckEquipListViewManager__SetMode_33723384(
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
  if ( (byte_4BF9952 & 1) == 0 )
  {
    this = (ServantCheckEquipListViewManager_o *)sub_1C2E12C(&ServantCheckEquipListViewObject_TypeInfo, obj);
    byte_4BF9952 = 1;
  }
  if ( !obj
    || (methodPtr_low = LOBYTE(ServantCheckEquipListViewObject_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(obj->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low)
    || (ServantCheckEquipListViewObject_c *)obj->klass->_2.typeHierarchy[methodPtr_low - 1] != ServantCheckEquipListViewObject_TypeInfo )
  {
    sub_1C2E388(this, obj);
  }
  if ( v5->fields.initMode == 3 )
    v7 = 3;
  else
    v7 = 2;
  ServantCheckEquipListViewObject__Init_33737476((ServantCheckEquipListViewObject_o *)obj, v7, 0LL);
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

  if ( (byte_4BF9956 & 1) == 0 )
  {
    sub_1C2E12C(&UnityEngine_Object_TypeInfo, isActive);
    byte_4BF9956 = 1;
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
      sub_1C2E388(gameObject, v6);
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

  if ( (byte_4BF9947 & 1) == 0 )
  {
    sub_1C2E12C(&System_Action_TypeInfo, value);
    byte_4BF9947 = 1;
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
    v8 = sub_1C6961C(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (ServantCheckEquipListViewManager_o *)sub_1C2E648(v7);
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
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7
  struct System_Object_array *items; // x8
  _QWORD *v23; // x9
  __int64 v24; // x10
  Il2CppClass **v25; // x0

  if ( (byte_4BF994A & 1) == 0 )
  {
    sub_1C2E12C(&Method_UnityEngine_GameObject_GetComponent_ServantCheckEquipListViewObject___, method);
    sub_1C2E12C(&Method_System_Collections_Generic_List_ServantCheckEquipListViewObject__Add__, v3);
    sub_1C2E12C(&Method_System_Collections_Generic_List_ServantCheckEquipListViewObject___ctor__, v4);
    sub_1C2E12C(&Method_System_Collections_Generic_List_GameObject__get_Count__, v5);
    sub_1C2E12C(&Method_System_Collections_Generic_List_GameObject__get_Item__, v6);
    sub_1C2E12C(&System_Collections_Generic_List_ServantCheckEquipListViewObject__TypeInfo, v7);
    sub_1C2E12C(&UnityEngine_Object_TypeInfo, v8);
    byte_4BF994A = 1;
  }
  v9 = (System_Collections_Generic_List_object__o *)sub_1C2E378(System_Collections_Generic_List_ServantCheckEquipListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v9,
    (const MethodInfo_366B078 *)Method_System_Collections_Generic_List_ServantCheckEquipListViewObject___ctor__);
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
               (const MethodInfo_366B5DC *)Method_System_Collections_Generic_List_GameObject__get_Item__);
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
                                                                    (const MethodInfo_3022B0C *)Method_UnityEngine_GameObject_GetComponent_ServantCheckEquipListViewObject___);
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
          || (objectList = (System_Collections_Generic_List_object__o *)ListViewManager__ClippingItem_42097292(
                                                                          (ListViewManager_o *)this,
                                                                          (ListViewItem_o *)objectList,
                                                                          0LL),
              ((unsigned __int8)objectList & 1) != 0) )
        {
          if ( !v9 )
            break;
          items = v9->fields._items;
          v23 = Method_System_Collections_Generic_List_ServantCheckEquipListViewObject__Add__;
          ++v9->fields._version;
          if ( !items )
            break;
          v24 = v9->fields._size;
          if ( (unsigned int)v24 >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v9,
              v15,
              *(const MethodInfo_366B8AC **)(*(_QWORD *)(v23[4] + 192LL) + 112LL));
          }
          else
          {
            v25 = &items->obj.klass + v24;
            v9->fields._size = v24 + 1;
            v25[4] = (Il2CppClass *)v15;
            sub_1C2E0D0((PartyOrganizationUtility_o *)(v25 + 4), (int64_t)v15, v16, v17, v18, v19, v20, v21);
          }
        }
      }
      if ( size == ++v13 )
        return (System_Collections_Generic_List_ServantCheckEquipListViewObject__o *)v9;
      objectList = (System_Collections_Generic_List_object__o *)this->fields.objectList;
    }
    while ( objectList );
LABEL_21:
    sub_1C2E388(objectList, v10);
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
  int64_t objectList; // x0
  int v12; // w23
  int32_t v13; // w21
  Il2CppObject *Item; // x22
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7
  struct System_Object_array *items; // x8
  _QWORD *v22; // x9
  __int64 size; // x10
  int64_t v24; // x1
  Il2CppClass **v25; // x0

  if ( (byte_4BF9949 & 1) == 0 )
  {
    sub_1C2E12C(&Method_UnityEngine_GameObject_GetComponent_ServantCheckEquipListViewObject___, method);
    sub_1C2E12C(&Method_System_Collections_Generic_List_ServantCheckEquipListViewObject__Add__, v3);
    sub_1C2E12C(&Method_System_Collections_Generic_List_ServantCheckEquipListViewObject___ctor__, v4);
    sub_1C2E12C(&Method_System_Collections_Generic_List_GameObject__get_Count__, v5);
    sub_1C2E12C(&Method_System_Collections_Generic_List_GameObject__get_Item__, v6);
    sub_1C2E12C(&System_Collections_Generic_List_ServantCheckEquipListViewObject__TypeInfo, v7);
    sub_1C2E12C(&UnityEngine_Object_TypeInfo, v8);
    byte_4BF9949 = 1;
  }
  v9 = (System_Collections_Generic_List_object__o *)sub_1C2E378(System_Collections_Generic_List_ServantCheckEquipListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v9,
    (const MethodInfo_366B078 *)Method_System_Collections_Generic_List_ServantCheckEquipListViewObject___ctor__);
  objectList = (int64_t)this->fields.objectList;
  if ( !objectList )
    goto LABEL_17;
  v12 = *(_DWORD *)(objectList + 24);
  if ( v12 >= 1 )
  {
    v13 = 0;
    do
    {
      Item = System_Collections_Generic_List_object___get_Item(
               (System_Collections_Generic_List_object__o *)objectList,
               v13,
               (const MethodInfo_366B5DC *)Method_System_Collections_Generic_List_GameObject__get_Item__);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      objectList = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Item, 0LL, 0LL);
      if ( (objectList & 1) == 0 )
      {
        if ( !Item )
          break;
        objectList = (int64_t)UnityEngine_GameObject__GetComponent_object_(
                                (UnityEngine_GameObject_o *)Item,
                                (const MethodInfo_3022B0C *)Method_UnityEngine_GameObject_GetComponent_ServantCheckEquipListViewObject___);
        if ( !v9 )
          break;
        items = v9->fields._items;
        v22 = Method_System_Collections_Generic_List_ServantCheckEquipListViewObject__Add__;
        ++v9->fields._version;
        if ( !items )
          break;
        size = v9->fields._size;
        v24 = objectList;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v9,
            (Il2CppObject *)objectList,
            *(const MethodInfo_366B8AC **)(*(_QWORD *)(v22[4] + 192LL) + 112LL));
        }
        else
        {
          v25 = &items->obj.klass + size;
          v9->fields._size = size + 1;
          v25[4] = (Il2CppClass *)v24;
          sub_1C2E0D0((PartyOrganizationUtility_o *)(v25 + 4), v24, v15, v16, v17, v18, v19, v20);
        }
      }
      if ( v12 == ++v13 )
        return (System_Collections_Generic_List_ServantCheckEquipListViewObject__o *)v9;
      objectList = (int64_t)this->fields.objectList;
    }
    while ( objectList );
LABEL_17:
    sub_1C2E388(objectList, v10);
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

  if ( (byte_4BF9948 & 1) == 0 )
  {
    sub_1C2E12C(&System_Action_TypeInfo, value);
    byte_4BF9948 = 1;
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
    v8 = sub_1C6961C(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (ServantCheckEquipListViewManager_o *)sub_1C2E648(v7);
  ServantCheckEquipListViewManager__get_ObjectList(v10, v11);
}


void __fastcall ServantCheckEquipListViewManager___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int64_t v3; // x2
  int32_t v4; // w3
  System_String_o *v5; // x4
  BattleSetupInfo_o *v6; // x5
  FollowerInfo_o *v7; // x6
  PartyListViewItem_o *v8; // x7

  if ( (byte_4BF9958 & 1) == 0 )
  {
    sub_1C2E12C(&ServantCheckEquipListViewManager___c_TypeInfo, v1);
    byte_4BF9958 = 1;
  }
  v2 = (Il2CppObject *)sub_1C2E378(ServantCheckEquipListViewManager___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  ServantCheckEquipListViewManager___c_TypeInfo->static_fields->__9 = (struct ServantCheckEquipListViewManager___c_o *)v2;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)ServantCheckEquipListViewManager___c_TypeInfo->static_fields,
    (int64_t)v2,
    v3,
    v4,
    v5,
    v6,
    v7,
    v8);
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

  if ( (byte_4BF9959 & 1) == 0 )
  {
    sub_1C2E12C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, isDecide);
    byte_4BF9959 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38A7F90 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1C2E388(0LL, v4);
  CommonUI__CloseServantStatusDialog((CommonUI_o *)Instance, 0LL, 0LL);
}