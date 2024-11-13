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
  Il2CppObject *current; // x22
  int32_t v22; // w23
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x3
  ServantCheckEquipListViewItem_o *v26; // x21
  const MethodInfo *v27; // x4
  __int64 v28; // x1
  int64_t v29; // x2
  int32_t v30; // w3
  System_String_o *v31; // x4
  BattleSetupInfo_o *v32; // x5
  FollowerInfo_o *v33; // x6
  PartyListViewItem_o *v34; // x7
  System_Collections_Generic_List_object__o *itemList; // x0
  struct System_Object_array *items; // x8
  _QWORD *v37; // x9
  __int64 size; // x10
  Il2CppClass **v39; // x8
  __int64 v40; // x0
  __int64 v41; // x1
  const MethodInfo *v42; // x2
  struct System_Collections_Generic_List_ListViewItem__o *v43; // x8
  struct ListViewItemSeed_o *seed; // x9
  System_Collections_Generic_List_Enumerator_object__o v45; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v46; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_4B124B8 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_Enumerator_UserServantEntity__Dispose__,
      userSvtEntityList,
      method);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_UserServantEntity__MoveNext__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_UserServantEntity__get_Current__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewItem__Add__, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_UserServantEntity__GetEnumerator__, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_UserServantEntity__IndexOf__, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v15, v16);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_UserServantEntity__get_Count__, v17, v18);
    sub_1BCA7E0(&ServantCheckEquipListViewItem_TypeInfo, v19, v20);
    byte_4B124B8 = 1;
  }
  memset(&v46, 0, sizeof(v46));
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
  if ( userSvtEntityList && userSvtEntityList->fields._size >= 1 )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v45,
      (System_Collections_Generic_List_object__o *)userSvtEntityList,
      (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_UserServantEntity__GetEnumerator__);
    v46 = v45;
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v46,
              (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_UserServantEntity__MoveNext__) )
    {
      current = v46.fields._current;
      if ( NpCombineControl__CheckConfirm_45739916((UserServantEntity_o *)v46.fields._current, 0LL) )
      {
        v22 = System_Collections_Generic_List_object___IndexOf(
                (System_Collections_Generic_List_object__o *)userSvtEntityList,
                current,
                (const MethodInfo_35A28FC *)Method_System_Collections_Generic_List_UserServantEntity__IndexOf__);
        v26 = (ServantCheckEquipListViewItem_o *)sub_1BCAA2C(ServantCheckEquipListViewItem_TypeInfo, v23, v24, v25);
        ServantCheckEquipListViewItem___ctor(v26, (UserServantEntity_o *)current, v22, 1, v27);
        itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
        if ( !itemList )
          sub_1BCAA3C(0LL, v28);
        items = itemList->fields._items;
        v37 = Method_System_Collections_Generic_List_ListViewItem__Add__;
        ++itemList->fields._version;
        if ( !items )
          sub_1BCAA3C(itemList, v28);
        size = itemList->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            itemList,
            (Il2CppObject *)v26,
            *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v37[4] + 192LL) + 112LL));
        }
        else
        {
          v39 = &items->obj.klass + size;
          itemList->fields._size = size + 1;
          v39[4] = (Il2CppClass *)v26;
          sub_1BCA784((PartyOrganizationUtility_o *)(v39 + 4), (int64_t)v26, v29, v30, v31, v32, v33, v34);
        }
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v46,
      (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_UserServantEntity__Dispose__);
    v43 = this->fields.itemList;
    if ( !v43 || (seed = this->fields.seed) == 0LL )
      sub_1BCAA3C(v40, v41);
    ServantCheckEquipListViewManager__SetScrollBarActive(
      this,
      seed->fields.arrangementVolume.fields.x < (float)v43->fields._size,
      v42);
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
  }
}


void __fastcall ServantCheckEquipListViewManager__CreateList(
        ServantCheckEquipListViewManager_o *this,
        System_Collections_Generic_List_SvtEqCombineListViewItem__o *materialList,
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
  int *Item; // x0
  __int64 v14; // x1
  const MethodInfo *v15; // x2
  int32_t size; // w25
  int32_t v17; // w21
  __int64 v18; // x3
  UserServantEntity_o *v19; // x23
  int32_t v20; // w24
  ServantCheckEquipListViewItem_o *v21; // x22
  const MethodInfo *v22; // x4
  int64_t v23; // x2
  int32_t v24; // w3
  System_String_o *v25; // x4
  BattleSetupInfo_o *v26; // x5
  FollowerInfo_o *v27; // x6
  PartyListViewItem_o *v28; // x7
  __int64 v29; // x8
  _QWORD *v30; // x9
  __int64 v31; // x10
  __int64 v32; // x8
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x8
  struct ListViewItemSeed_o *seed; // x9

  if ( (byte_4B124B6 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewItem__Add__, materialList, method);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_SvtEqCombineListViewItem__get_Count__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_SvtEqCombineListViewItem__get_Item__, v9, v10);
    sub_1BCA7E0(&ServantCheckEquipListViewItem_TypeInfo, v11, v12);
    byte_4B124B6 = 1;
  }
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
  if ( !materialList )
    goto LABEL_19;
  size = materialList->fields._size;
  if ( size >= 1 )
  {
    v17 = 0;
    while ( 1 )
    {
      Item = (int *)System_Collections_Generic_List_object___get_Item(
                      (System_Collections_Generic_List_object__o *)materialList,
                      v17,
                      (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_SvtEqCombineListViewItem__get_Item__);
      if ( !Item )
        break;
      if ( *((_BYTE *)Item + 204) || *((_BYTE *)Item + 244) || *((_BYTE *)Item + 245) )
      {
        v19 = (UserServantEntity_o *)*((_QWORD *)Item + 15);
        v20 = Item[4];
        v21 = (ServantCheckEquipListViewItem_o *)sub_1BCAA2C(ServantCheckEquipListViewItem_TypeInfo, v14, v15, v18);
        ServantCheckEquipListViewItem___ctor(v21, v19, v20, 0, v22);
        Item = (int *)this->fields.itemList;
        if ( !Item )
          break;
        v29 = *((_QWORD *)Item + 2);
        v30 = Method_System_Collections_Generic_List_ListViewItem__Add__;
        ++Item[7];
        if ( !v29 )
          break;
        v31 = Item[6];
        if ( (unsigned int)v31 >= *(_DWORD *)(v29 + 24) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)Item,
            (Il2CppObject *)v21,
            *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v30[4] + 192LL) + 112LL));
        }
        else
        {
          v32 = v29 + 8 * v31;
          Item[6] = v31 + 1;
          *(_QWORD *)(v32 + 32) = v21;
          sub_1BCA784((PartyOrganizationUtility_o *)(v32 + 32), (int64_t)v21, v23, v24, v25, v26, v27, v28);
        }
      }
      if ( size == ++v17 )
        goto LABEL_16;
    }
LABEL_19:
    sub_1BCAA3C(Item, v14);
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
    v15);
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
}


void __fastcall ServantCheckEquipListViewManager__CreateList_33225820(
        ServantCheckEquipListViewManager_o *this,
        System_Collections_Generic_List_ServantOperationListViewItem__o *materialList,
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
  ServantOperationListViewItem_o *Item; // x0
  __int64 v14; // x1
  const MethodInfo *v15; // x2
  int32_t size; // w25
  int32_t v17; // w21
  ServantOperationListViewItem_o *v18; // x22
  __int64 v19; // x3
  UserServantEntity_o *UserServantEntity_k__BackingField; // x23
  int32_t selectNum; // w24
  ServantCheckEquipListViewItem_o *v22; // x22
  const MethodInfo *v23; // x4
  int64_t v24; // x2
  int32_t v25; // w3
  System_String_o *v26; // x4
  BattleSetupInfo_o *v27; // x5
  FollowerInfo_o *v28; // x6
  PartyListViewItem_o *v29; // x7
  __int64 v30; // x8
  _QWORD *v31; // x9
  __int64 sortIndex; // x10
  __int64 v33; // x8
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x8
  struct ListViewItemSeed_o *seed; // x9

  if ( (byte_4B124B7 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewItem__Add__, materialList, method);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ServantOperationListViewItem__get_Count__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ServantOperationListViewItem__get_Item__, v9, v10);
    sub_1BCA7E0(&ServantCheckEquipListViewItem_TypeInfo, v11, v12);
    byte_4B124B7 = 1;
  }
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
  if ( !materialList )
    goto LABEL_20;
  size = materialList->fields._size;
  if ( size >= 1 )
  {
    v17 = 0;
    while ( 1 )
    {
      Item = (ServantOperationListViewItem_o *)System_Collections_Generic_List_object___get_Item(
                                                 (System_Collections_Generic_List_object__o *)materialList,
                                                 v17,
                                                 (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_ServantOperationListViewItem__get_Item__);
      if ( !Item )
        break;
      v18 = Item;
      Item = (ServantOperationListViewItem_o *)ServantOperationListViewItem__get_IsServantEquip(Item, 0LL);
      if ( ((unsigned __int8)Item & 1) != 0
        && (v18->fields._IsPartyEquip_k__BackingField
         || v18->fields._IsUseSupportEquip_k__BackingField
         || v18->fields._IsUseRecommendSupportEquip_k__BackingField) )
      {
        UserServantEntity_k__BackingField = v18->fields._UserServantEntity_k__BackingField;
        selectNum = v18->fields.selectNum;
        v22 = (ServantCheckEquipListViewItem_o *)sub_1BCAA2C(ServantCheckEquipListViewItem_TypeInfo, v14, v15, v19);
        ServantCheckEquipListViewItem___ctor(v22, UserServantEntity_k__BackingField, selectNum, 0, v23);
        Item = (ServantOperationListViewItem_o *)this->fields.itemList;
        if ( !Item )
          break;
        v30 = *(_QWORD *)&Item->fields.selectNum;
        v31 = Method_System_Collections_Generic_List_ListViewItem__Add__;
        ++Item->fields.loopIndex;
        if ( !v30 )
          break;
        sortIndex = Item->fields.sortIndex;
        if ( (unsigned int)sortIndex >= *(_DWORD *)(v30 + 24) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)Item,
            (Il2CppObject *)v22,
            *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v31[4] + 192LL) + 112LL));
        }
        else
        {
          v33 = v30 + 8 * sortIndex;
          Item->fields.sortIndex = sortIndex + 1;
          *(_QWORD *)(v33 + 32) = v22;
          sub_1BCA784((PartyOrganizationUtility_o *)(v33 + 32), (int64_t)v22, v24, v25, v26, v27, v28, v29);
        }
      }
      if ( size == ++v17 )
        goto LABEL_17;
    }
LABEL_20:
    sub_1BCAA3C(Item, v14);
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
    v15);
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
}


void __fastcall ServantCheckEquipListViewManager__CreateMaterialTdServantList(
        ServantCheckEquipListViewManager_o *this,
        System_Collections_Generic_List_UserServantEntity__o *userSvtEntityList,
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
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  Il2CppObject *current; // x21
  Il2CppObject *Instance; // x0
  __int64 v31; // x1
  Il2CppObject *MasterData_object; // x0
  __int64 v33; // x1
  DataMasterBase_TMaster__TEntity__PKType__o *v34; // x22
  void *monitor; // x23
  Il2CppClass *klass; // x24
  __int64 v37; // x0
  Il2CppObject *Entity; // x0
  __int64 v39; // x1
  int32_t v40; // w23
  __int64 v41; // x1
  __int64 v42; // x2
  __int64 v43; // x3
  ServantCheckEquipListViewItem_o *v44; // x22
  const MethodInfo *v45; // x4
  __int64 v46; // x1
  int64_t v47; // x2
  int32_t v48; // w3
  System_String_o *v49; // x4
  BattleSetupInfo_o *v50; // x5
  FollowerInfo_o *v51; // x6
  PartyListViewItem_o *v52; // x7
  System_Collections_Generic_List_object__o *itemList; // x0
  struct System_Object_array *items; // x8
  _QWORD *v55; // x9
  __int64 size; // x10
  Il2CppClass **v57; // x8
  __int64 v58; // x0
  __int64 v59; // x1
  const MethodInfo *v60; // x2
  struct System_Collections_Generic_List_ListViewItem__o *v61; // x8
  struct ListViewItemSeed_o *seed; // x9
  System_Collections_Generic_List_Enumerator_object__o v63; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v64; // [xsp+20h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v65; // 0:x0.16

  if ( (byte_4B124BA & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantMaster___, userSvtEntityList, method);
    sub_1BCA7E0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_UserServantEntity__Dispose__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_UserServantEntity__MoveNext__, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_UserServantEntity__get_Current__, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewItem__Add__, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_UserServantEntity__GetEnumerator__, v15, v16);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_UserServantEntity__IndexOf__, v17, v18);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v19, v20);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_UserServantEntity__get_Count__, v21, v22);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v23, v24);
    sub_1BCA7E0(&ServantCheckEquipListViewItem_TypeInfo, v25, v26);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v27, v28);
    byte_4B124BA = 1;
  }
  memset(&v64, 0, sizeof(v64));
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
  if ( userSvtEntityList && userSvtEntityList->fields._size >= 1 )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v63,
      (System_Collections_Generic_List_object__o *)userSvtEntityList,
      (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_UserServantEntity__GetEnumerator__);
    v64 = v63;
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v64,
              (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_UserServantEntity__MoveNext__) )
    {
      current = v64.fields._current;
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        sub_1BCAA3C(0LL, v31);
      MasterData_object = DataManager__GetMasterData_object_(
                            (DataManager_o *)Instance,
                            (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantMaster___);
      if ( !current )
        sub_1BCAA3C(MasterData_object, v33);
      v34 = (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object;
      klass = current[5].klass;
      monitor = current[5].monitor;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v33);
      *(_QWORD *)&v65.fields.currentCryptoKey = klass;
      *(_QWORD *)&v65.fields.fakeValue = monitor;
      v37 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v65, 0LL);
      if ( !v34 )
        sub_1BCAA3C(v37, (unsigned int)v37);
      Entity = DataMasterBase_object__object__int___GetEntity(
                 v34,
                 v37,
                 (const MethodInfo_31B2E40 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
      if ( !Entity )
        sub_1BCAA3C(0LL, v39);
      if ( ServantEntity__get_IsServantMaterialTd((ServantEntity_o *)Entity, 0LL) )
      {
        v40 = System_Collections_Generic_List_object___IndexOf(
                (System_Collections_Generic_List_object__o *)userSvtEntityList,
                current,
                (const MethodInfo_35A28FC *)Method_System_Collections_Generic_List_UserServantEntity__IndexOf__);
        v44 = (ServantCheckEquipListViewItem_o *)sub_1BCAA2C(ServantCheckEquipListViewItem_TypeInfo, v41, v42, v43);
        ServantCheckEquipListViewItem___ctor(v44, (UserServantEntity_o *)current, v40, 3, v45);
        itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
        if ( !itemList )
          sub_1BCAA3C(0LL, v46);
        items = itemList->fields._items;
        v55 = Method_System_Collections_Generic_List_ListViewItem__Add__;
        ++itemList->fields._version;
        if ( !items )
          sub_1BCAA3C(itemList, v46);
        size = itemList->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            itemList,
            (Il2CppObject *)v44,
            *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v55[4] + 192LL) + 112LL));
        }
        else
        {
          v57 = &items->obj.klass + size;
          itemList->fields._size = size + 1;
          v57[4] = (Il2CppClass *)v44;
          sub_1BCA784((PartyOrganizationUtility_o *)(v57 + 4), (int64_t)v44, v47, v48, v49, v50, v51, v52);
        }
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v64,
      (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_UserServantEntity__Dispose__);
    v61 = this->fields.itemList;
    if ( !v61 || (seed = this->fields.seed) == 0LL )
      sub_1BCAA3C(v58, v59);
    ServantCheckEquipListViewManager__SetScrollBarActive(
      this,
      seed->fields.arrangementVolume.fields.x < (float)v61->fields._size,
      v60);
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
  }
}


void __fastcall ServantCheckEquipListViewManager__CreateSSRareServantList(
        ServantCheckEquipListViewManager_o *this,
        System_Collections_Generic_List_UserServantEntity__o *userSvtEntityList,
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
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  Il2CppObject *current; // x21
  Il2CppObject *Instance; // x0
  __int64 v31; // x1
  Il2CppObject *MasterData_object; // x0
  __int64 v33; // x1
  DataMasterBase_TMaster__TEntity__PKType__o *v34; // x22
  void *monitor; // x23
  Il2CppClass *klass; // x24
  __int64 v37; // x0
  Il2CppObject *Entity; // x0
  __int64 v39; // x1
  int32_t v40; // w23
  __int64 v41; // x1
  __int64 v42; // x2
  __int64 v43; // x3
  ServantCheckEquipListViewItem_o *v44; // x22
  const MethodInfo *v45; // x4
  __int64 v46; // x1
  int64_t v47; // x2
  int32_t v48; // w3
  System_String_o *v49; // x4
  BattleSetupInfo_o *v50; // x5
  FollowerInfo_o *v51; // x6
  PartyListViewItem_o *v52; // x7
  System_Collections_Generic_List_object__o *itemList; // x0
  struct System_Object_array *items; // x8
  _QWORD *v55; // x9
  __int64 size; // x10
  Il2CppClass **v57; // x8
  __int64 v58; // x0
  __int64 v59; // x1
  const MethodInfo *v60; // x2
  struct System_Collections_Generic_List_ListViewItem__o *v61; // x8
  struct ListViewItemSeed_o *seed; // x9
  System_Collections_Generic_List_Enumerator_object__o v63; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v64; // [xsp+20h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v65; // 0:x0.16

  if ( (byte_4B124B9 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantMaster___, userSvtEntityList, method);
    sub_1BCA7E0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_UserServantEntity__Dispose__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_UserServantEntity__MoveNext__, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_UserServantEntity__get_Current__, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewItem__Add__, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_UserServantEntity__GetEnumerator__, v15, v16);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_UserServantEntity__IndexOf__, v17, v18);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v19, v20);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_UserServantEntity__get_Count__, v21, v22);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v23, v24);
    sub_1BCA7E0(&ServantCheckEquipListViewItem_TypeInfo, v25, v26);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v27, v28);
    byte_4B124B9 = 1;
  }
  memset(&v64, 0, sizeof(v64));
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
  if ( userSvtEntityList && userSvtEntityList->fields._size >= 1 )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v63,
      (System_Collections_Generic_List_object__o *)userSvtEntityList,
      (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_UserServantEntity__GetEnumerator__);
    v64 = v63;
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v64,
              (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_UserServantEntity__MoveNext__) )
    {
      current = v64.fields._current;
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        sub_1BCAA3C(0LL, v31);
      MasterData_object = DataManager__GetMasterData_object_(
                            (DataManager_o *)Instance,
                            (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantMaster___);
      if ( !current )
        sub_1BCAA3C(MasterData_object, v33);
      v34 = (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object;
      klass = current[5].klass;
      monitor = current[5].monitor;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v33);
      *(_QWORD *)&v65.fields.currentCryptoKey = klass;
      *(_QWORD *)&v65.fields.fakeValue = monitor;
      v37 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v65, 0LL);
      if ( !v34 )
        sub_1BCAA3C(v37, (unsigned int)v37);
      Entity = DataMasterBase_object__object__int___GetEntity(
                 v34,
                 v37,
                 (const MethodInfo_31B2E40 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
      if ( !Entity )
        sub_1BCAA3C(0LL, v39);
      if ( ServantEntity__get_IsServant((ServantEntity_o *)Entity, 0LL)
        && UserServantEntity__getRarity((UserServantEntity_o *)current, 0LL) == 5 )
      {
        v40 = System_Collections_Generic_List_object___IndexOf(
                (System_Collections_Generic_List_object__o *)userSvtEntityList,
                current,
                (const MethodInfo_35A28FC *)Method_System_Collections_Generic_List_UserServantEntity__IndexOf__);
        v44 = (ServantCheckEquipListViewItem_o *)sub_1BCAA2C(ServantCheckEquipListViewItem_TypeInfo, v41, v42, v43);
        ServantCheckEquipListViewItem___ctor(v44, (UserServantEntity_o *)current, v40, 2, v45);
        itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
        if ( !itemList )
          sub_1BCAA3C(0LL, v46);
        items = itemList->fields._items;
        v55 = Method_System_Collections_Generic_List_ListViewItem__Add__;
        ++itemList->fields._version;
        if ( !items )
          sub_1BCAA3C(itemList, v46);
        size = itemList->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            itemList,
            (Il2CppObject *)v44,
            *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v55[4] + 192LL) + 112LL));
        }
        else
        {
          v57 = &items->obj.klass + size;
          itemList->fields._size = size + 1;
          v57[4] = (Il2CppClass *)v44;
          sub_1BCA784((PartyOrganizationUtility_o *)(v57 + 4), (int64_t)v44, v47, v48, v49, v50, v51, v52);
        }
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v64,
      (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_UserServantEntity__Dispose__);
    v61 = this->fields.itemList;
    if ( !v61 || (seed = this->fields.seed) == 0LL )
      sub_1BCAA3C(v58, v59);
    ServantCheckEquipListViewManager__SetScrollBarActive(
      this,
      seed->fields.arrangementVolume.fields.x < (float)v61->fields._size,
      v60);
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
  __int64 v6; // x2
  ServantCheckEquipListViewItem_o *result; // x0
  __int64 methodPtr_low; // x10

  if ( (byte_4B124BB & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, *(_QWORD *)&index, method);
    sub_1BCA7E0(&ServantCheckEquipListViewItem_TypeInfo, v5, v6);
    byte_4B124BB = 1;
  }
  result = (ServantCheckEquipListViewItem_o *)this->fields.itemList;
  if ( result )
  {
    result = (ServantCheckEquipListViewItem_o *)System_Collections_Generic_List_object___get_Item(
                                                  (System_Collections_Generic_List_object__o *)result,
                                                  index,
                                                  (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
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
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  struct ListViewItem_o *linkItem; // x19
  __int64 methodPtr_low; // x9
  _QWORD *v16; // x0
  System_Reflection_MethodBase_o *v17; // x0
  __int64 v18; // x2
  __int64 v19; // x3
  ServantCheckEquipListViewManager___c_c *v20; // x8
  UserServantEntity_o *v21; // x19
  CommonUI_o *v22; // x20
  ServantStatusDialog_EndDelegate_o *_9__21_0; // x21
  Il2CppObject *v24; // x22
  struct ServantCheckEquipListViewManager___c_StaticFields *static_fields; // x0
  int64_t v26; // x2
  int32_t v27; // w3
  System_String_o *v28; // x4
  BattleSetupInfo_o *v29; // x5
  FollowerInfo_o *v30; // x6
  PartyListViewItem_o *v31; // x7
  ServantCheckEquipListViewManager_o *v32; // x0
  const MethodInfo *v33; // x1

  if ( (byte_4B124BF & 1) == 0 )
  {
    sub_1BCA7E0(&ServantStatusDialog_EndDelegate_TypeInfo, obj, method);
    sub_1BCA7E0(&ServantCheckEquipListViewItem_TypeInfo, v4, v5);
    sub_1BCA7E0(&Method_ServantCheckEquipListViewManager_OnClickListView__, v6, v7);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v8, v9);
    sub_1BCA7E0(&Method_ServantCheckEquipListViewManager___c__OnClickListView_b__21_0__, v10, v11);
    this = (ServantCheckEquipListViewManager_o *)sub_1BCA7E0(&ServantCheckEquipListViewManager___c_TypeInfo, v12, v13);
    byte_4B124BF = 1;
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
      v16 = Method_ServantCheckEquipListViewManager_OnClickListView__;
      if ( (*((_BYTE *)Method_ServantCheckEquipListViewManager_OnClickListView__ + 83) & 2) != 0 )
        v16 = (_QWORD *)sub_1BCA7F8(Method_ServantCheckEquipListViewManager_OnClickListView__);
      v17 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v16, v16[4]);
      OverwriteAssetSoundName__PlaySystemSe(v17, 0, 0LL);
      this = (ServantCheckEquipListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v20 = ServantCheckEquipListViewManager___c_TypeInfo;
      v21 = *(UserServantEntity_o **)&linkItem[1].fields.selectNum;
      v22 = (CommonUI_o *)this;
      if ( !ServantCheckEquipListViewManager___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantCheckEquipListViewManager___c_TypeInfo, obj);
        v20 = ServantCheckEquipListViewManager___c_TypeInfo;
      }
      _9__21_0 = v20->static_fields->__9__21_0;
      if ( !_9__21_0 )
      {
        if ( !v20->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v20, obj);
          v20 = ServantCheckEquipListViewManager___c_TypeInfo;
        }
        v24 = (Il2CppObject *)v20->static_fields->__9;
        _9__21_0 = (ServantStatusDialog_EndDelegate_o *)sub_1BCAA2C(
                                                          ServantStatusDialog_EndDelegate_TypeInfo,
                                                          obj,
                                                          v18,
                                                          v19);
        ServantStatusDialog_EndDelegate___ctor(
          _9__21_0,
          v24,
          Method_ServantCheckEquipListViewManager___c__OnClickListView_b__21_0__,
          0LL);
        static_fields = ServantCheckEquipListViewManager___c_TypeInfo->static_fields;
        static_fields->__9__21_0 = _9__21_0;
        sub_1BCA784(
          (PartyOrganizationUtility_o *)&static_fields->__9__21_0,
          (int64_t)_9__21_0,
          v26,
          v27,
          v28,
          v29,
          v30,
          v31);
      }
      if ( v22 )
      {
        CommonUI__OpenServantStatusDialog_30776796(v22, 29, v21, _9__21_0, 0LL);
        return;
      }
LABEL_18:
      sub_1BCAA3C(this, obj);
    }
    v32 = (ServantCheckEquipListViewManager_o *)sub_1BCACFC(linkItem);
    ServantCheckEquipListViewManager__SetContentPivot(v32, v33);
  }
}


void __fastcall ServantCheckEquipListViewManager__OnMoveEnd(
        ServantCheckEquipListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  int32_t callbackCount; // w8
  bool v5; // vf
  int32_t v6; // w8
  UnityEngine_Object_o *scrollView; // x20
  __int64 v8; // x1
  struct UIScrollView_o *v9; // x0
  struct System_Action_o *callbackFunc2; // x20
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7

  if ( (byte_4B124BE & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    byte_4B124BE = 1;
  }
  callbackCount = this->fields.callbackCount;
  v5 = __OFSUB__(callbackCount, 1);
  v6 = callbackCount - 1;
  if ( v6 < 0 == v5 )
  {
    this->fields.callbackCount = v6;
    if ( !v6 )
    {
      scrollView = (UnityEngine_Object_o *)this->fields.scrollView;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
      if ( UnityEngine_Object__op_Inequality(scrollView, 0LL, 0LL) )
      {
        v9 = this->fields.scrollView;
        if ( !v9 )
          sub_1BCAA3C(0LL, v8);
        ((void (__fastcall *)(struct UIScrollView_o *, __int64, Il2CppMethodPointer))v9->klass->vtable._8_UpdateScrollbars.method)(
          v9,
          1LL,
          v9->klass->vtable._9_SetDragAmount.methodPtr);
        callbackFunc2 = this->fields.callbackFunc2;
        this->fields.callbackFunc2 = 0LL;
        sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.callbackFunc2, 0LL, v11, v12, v13, v14, v15, v16);
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
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  System_Collections_Generic_List_ServantCheckEquipListViewObject__o *v15; // x0
  __int64 v16; // x1
  int32_t size; // w25
  System_Collections_Generic_List_object__o *v18; // x21
  int32_t v19; // w22
  Il2CppObject *Item; // x23
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x3
  System_Action_o *v24; // x24
  const MethodInfo *v25; // x3

  if ( (byte_4B124BD & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, *(_QWORD *)&mode, method);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ServantCheckEquipListViewObject__get_Count__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ServantCheckEquipListViewObject__get_Item__, v9, v10);
    sub_1BCA7E0(&Method_ServantCheckEquipListViewManager_OnMoveEnd__, v11, v12);
    sub_1BCA7E0(&StringLiteral_10069/*"OnMoveEnd"*/, v13, v14);
    byte_4B124BD = 1;
  }
  v15 = ServantCheckEquipListViewManager__get_ObjectList(this, *(const MethodInfo **)&mode);
  if ( !v15 )
    goto LABEL_10;
  size = v15->fields._size;
  v18 = (System_Collections_Generic_List_object__o *)v15;
  if ( size >= 1 )
  {
    v19 = 0;
    this->fields.callbackCount = size;
    while ( 1 )
    {
      Item = System_Collections_Generic_List_object___get_Item(
               v18,
               v19,
               (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_ServantCheckEquipListViewObject__get_Item__);
      v24 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v21, v22, v23);
      System_Action___ctor(v24, (Il2CppObject *)this, Method_ServantCheckEquipListViewManager_OnMoveEnd__, 0LL);
      if ( !Item )
        break;
      ServantCheckEquipListViewObject__Init_33234648((ServantCheckEquipListViewObject_o *)Item, mode, v24, v25);
      if ( size == ++v19 )
        return;
    }
LABEL_10:
    sub_1BCAA3C(v15, v16);
  }
  this->fields.callbackCount = 1;
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_10069/*"OnMoveEnd"*/,
    delay,
    0LL);
}


void __fastcall ServantCheckEquipListViewManager__SetContentPivot(
        ServantCheckEquipListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  ServantCheckEquipListViewManager_o *v3; // x19
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x8
  struct UIScrollView_o *scrollView; // x9

  v3 = this;
  if ( (byte_4B124C1 & 1) == 0 )
  {
    this = (ServantCheckEquipListViewManager_o *)sub_1BCA7E0(
                                                   &Method_System_Collections_Generic_List_ListViewItem__get_Count__,
                                                   method,
                                                   v2);
    byte_4B124C1 = 1;
  }
  itemList = v3->fields.itemList;
  if ( !itemList || (scrollView = v3->fields.scrollView) == 0LL )
    sub_1BCAA3C(this, method);
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
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.callbackFunc2,
    (int64_t)callback,
    (int64_t)callback,
    (int32_t)method,
    v4,
    v5,
    v6,
    v7);
  ServantCheckEquipListViewManager__SetMode_33225148(this, mode, v10);
}


void __fastcall ServantCheckEquipListViewManager__SetMode_33225148(
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
  if ( (byte_4B124BC & 1) == 0 )
  {
    this = (ServantCheckEquipListViewManager_o *)sub_1BCA7E0(&ServantCheckEquipListViewObject_TypeInfo, obj, item);
    byte_4B124BC = 1;
  }
  if ( !obj
    || (methodPtr_low = LOBYTE(ServantCheckEquipListViewObject_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(obj->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low)
    || (ServantCheckEquipListViewObject_c *)obj->klass->_2.typeHierarchy[methodPtr_low - 1] != ServantCheckEquipListViewObject_TypeInfo )
  {
    sub_1BCAA3C(this, obj);
  }
  if ( v5->fields.initMode == 3 )
    v7 = 3;
  else
    v7 = 2;
  ServantCheckEquipListViewObject__Init_33234160((ServantCheckEquipListViewObject_o *)obj, v7, (const MethodInfo *)item);
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

  if ( (byte_4B124C0 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, isActive, method);
    byte_4B124C0 = 1;
  }
  scrollBar = (UnityEngine_Object_o *)this->fields.scrollBar;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, isActive);
  if ( !UnityEngine_Object__op_Equality(scrollBar, 0LL, 0LL) )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.scrollBar;
    if ( !gameObject
      || (gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0LL)) == 0LL )
    {
      sub_1BCAA3C(gameObject, v6);
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

  if ( (byte_4B124B2 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, value, method);
    byte_4B124B2 = 1;
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
    v8 = sub_1C05CD0(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (ServantCheckEquipListViewManager_o *)sub_1BCACFC(v7);
  ServantCheckEquipListViewManager__remove_callbackFunc2(v10, v11, v12);
}


System_Collections_Generic_List_ServantCheckEquipListViewObject__o *__fastcall ServantCheckEquipListViewManager__get_ClippingObjectList(
        ServantCheckEquipListViewManager_o *this,
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
  int size; // w23
  int32_t v21; // w21
  __int64 v22; // x1
  Il2CppObject *Item; // x22
  Il2CppObject *v24; // x22
  int64_t v25; // x2
  int32_t v26; // w3
  System_String_o *v27; // x4
  BattleSetupInfo_o *v28; // x5
  FollowerInfo_o *v29; // x6
  PartyListViewItem_o *v30; // x7
  struct System_Object_array *items; // x8
  _QWORD *v32; // x9
  __int64 v33; // x10
  Il2CppClass **v34; // x0

  if ( (byte_4B124B5 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_ServantCheckEquipListViewObject___, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ServantCheckEquipListViewObject__Add__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ServantCheckEquipListViewObject___ctor__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GameObject__get_Count__, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GameObject__get_Item__, v11, v12);
    sub_1BCA7E0(&System_Collections_Generic_List_ServantCheckEquipListViewObject__TypeInfo, v13, v14);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v15, v16);
    byte_4B124B5 = 1;
  }
  v17 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_ServantCheckEquipListViewObject__TypeInfo,
                                                       method,
                                                       v2,
                                                       v3);
  System_Collections_Generic_List_object____ctor(
    v17,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_ServantCheckEquipListViewObject___ctor__);
  objectList = (System_Collections_Generic_List_object__o *)this->fields.objectList;
  if ( !objectList )
    goto LABEL_21;
  size = objectList->fields._size;
  if ( size >= 1 )
  {
    v21 = 0;
    do
    {
      Item = System_Collections_Generic_List_object___get_Item(
               objectList,
               v21,
               (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_GameObject__get_Item__);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v22);
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
                                                                    (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_ServantCheckEquipListViewObject___);
        if ( !objectList )
          break;
        v24 = (Il2CppObject *)objectList;
        objectList = (System_Collections_Generic_List_object__o *)ServantCheckEquipListViewObject__GetItem(
                                                                    (ServantCheckEquipListViewObject_o *)objectList,
                                                                    v18);
        if ( !objectList )
          break;
        v18 = (const MethodInfo *)objectList;
        if ( !LOBYTE(objectList[2].monitor)
          || (objectList = (System_Collections_Generic_List_object__o *)ListViewManager__ClippingItem_41463120(
                                                                          (ListViewManager_o *)this,
                                                                          (ListViewItem_o *)objectList,
                                                                          0LL),
              ((unsigned __int8)objectList & 1) != 0) )
        {
          if ( !v17 )
            break;
          items = v17->fields._items;
          v32 = Method_System_Collections_Generic_List_ServantCheckEquipListViewObject__Add__;
          ++v17->fields._version;
          if ( !items )
            break;
          v33 = v17->fields._size;
          if ( (unsigned int)v33 >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v17,
              v24,
              *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v32[4] + 192LL) + 112LL));
          }
          else
          {
            v34 = &items->obj.klass + v33;
            v17->fields._size = v33 + 1;
            v34[4] = (Il2CppClass *)v24;
            sub_1BCA784((PartyOrganizationUtility_o *)(v34 + 4), (int64_t)v24, v25, v26, v27, v28, v29, v30);
          }
        }
      }
      if ( size == ++v21 )
        return (System_Collections_Generic_List_ServantCheckEquipListViewObject__o *)v17;
      objectList = (System_Collections_Generic_List_object__o *)this->fields.objectList;
    }
    while ( objectList );
LABEL_21:
    sub_1BCAA3C(objectList, v18);
  }
  return (System_Collections_Generic_List_ServantCheckEquipListViewObject__o *)v17;
}


System_Collections_Generic_List_ServantCheckEquipListViewObject__o *__fastcall ServantCheckEquipListViewManager__get_ObjectList(
        ServantCheckEquipListViewManager_o *this,
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
  int64_t objectList; // x0
  int v20; // w23
  int32_t v21; // w21
  __int64 v22; // x1
  Il2CppObject *Item; // x22
  int64_t v24; // x2
  int32_t v25; // w3
  System_String_o *v26; // x4
  BattleSetupInfo_o *v27; // x5
  FollowerInfo_o *v28; // x6
  PartyListViewItem_o *v29; // x7
  struct System_Object_array *items; // x8
  _QWORD *v31; // x9
  __int64 size; // x10
  int64_t v33; // x1
  Il2CppClass **v34; // x0

  if ( (byte_4B124B4 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_ServantCheckEquipListViewObject___, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ServantCheckEquipListViewObject__Add__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ServantCheckEquipListViewObject___ctor__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GameObject__get_Count__, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GameObject__get_Item__, v11, v12);
    sub_1BCA7E0(&System_Collections_Generic_List_ServantCheckEquipListViewObject__TypeInfo, v13, v14);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v15, v16);
    byte_4B124B4 = 1;
  }
  v17 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_ServantCheckEquipListViewObject__TypeInfo,
                                                       method,
                                                       v2,
                                                       v3);
  System_Collections_Generic_List_object____ctor(
    v17,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_ServantCheckEquipListViewObject___ctor__);
  objectList = (int64_t)this->fields.objectList;
  if ( !objectList )
    goto LABEL_17;
  v20 = *(_DWORD *)(objectList + 24);
  if ( v20 >= 1 )
  {
    v21 = 0;
    do
    {
      Item = System_Collections_Generic_List_object___get_Item(
               (System_Collections_Generic_List_object__o *)objectList,
               v21,
               (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_GameObject__get_Item__);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v22);
      objectList = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Item, 0LL, 0LL);
      if ( (objectList & 1) == 0 )
      {
        if ( !Item )
          break;
        objectList = (int64_t)UnityEngine_GameObject__GetComponent_object_(
                                (UnityEngine_GameObject_o *)Item,
                                (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_ServantCheckEquipListViewObject___);
        if ( !v17 )
          break;
        items = v17->fields._items;
        v31 = Method_System_Collections_Generic_List_ServantCheckEquipListViewObject__Add__;
        ++v17->fields._version;
        if ( !items )
          break;
        size = v17->fields._size;
        v33 = objectList;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v17,
            (Il2CppObject *)objectList,
            *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v31[4] + 192LL) + 112LL));
        }
        else
        {
          v34 = &items->obj.klass + size;
          v17->fields._size = size + 1;
          v34[4] = (Il2CppClass *)v33;
          sub_1BCA784((PartyOrganizationUtility_o *)(v34 + 4), v33, v24, v25, v26, v27, v28, v29);
        }
      }
      if ( v20 == ++v21 )
        return (System_Collections_Generic_List_ServantCheckEquipListViewObject__o *)v17;
      objectList = (int64_t)this->fields.objectList;
    }
    while ( objectList );
LABEL_17:
    sub_1BCAA3C(objectList, v18);
  }
  return (System_Collections_Generic_List_ServantCheckEquipListViewObject__o *)v17;
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

  if ( (byte_4B124B3 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, value, method);
    byte_4B124B3 = 1;
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
    v8 = sub_1C05CD0(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (ServantCheckEquipListViewManager_o *)sub_1BCACFC(v7);
  ServantCheckEquipListViewManager__get_ObjectList(v10, v11);
}


void __fastcall ServantCheckEquipListViewManager___c___cctor(const MethodInfo *method)
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

  if ( (byte_4B124C2 & 1) == 0 )
  {
    sub_1BCA7E0(&ServantCheckEquipListViewManager___c_TypeInfo, v1, v2);
    byte_4B124C2 = 1;
  }
  v4 = (Il2CppObject *)sub_1BCAA2C(ServantCheckEquipListViewManager___c_TypeInfo, v1, v2, v3);
  System_Object___ctor(v4, 0LL);
  ServantCheckEquipListViewManager___c_TypeInfo->static_fields->__9 = (struct ServantCheckEquipListViewManager___c_o *)v4;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)ServantCheckEquipListViewManager___c_TypeInfo->static_fields,
    (int64_t)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
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
  __int64 v4; // x1

  if ( (byte_4B124C3 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, isDecide, method);
    byte_4B124C3 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1BCAA3C(0LL, v4);
  CommonUI__CloseServantStatusDialog((CommonUI_o *)Instance, 0LL, 0LL);
}