void ServantCheckEquipListViewManager___ctor(ServantCheckEquipListViewManager_o *this, const MethodInfo *method)
{
  ListViewManager___ctor((ListViewManager_o *)this, 0);
}


void ServantCheckEquipListViewManager__CreateCombineServantList(
        ServantCheckEquipListViewManager_o *this,
        System_Collections_Generic_List_UserServantEntity__o *userSvtEntityList,
        System_Action_long__o *onModifyServant,
        const MethodInfo *method)
{
  Il2CppObject *current; // x23
  int32_t v8; // w24
  ServantCheckEquipListViewItem_o *v9; // x22
  const MethodInfo *v10; // x4
  __int64 v11; // x1
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  System_Collections_Generic_List_object__o *itemList; // x0
  struct System_Object_array *items; // x8
  _QWORD *v20; // x9
  __int64 size; // x10
  Il2CppClass **v22; // x8
  __int64 v23; // x0
  __int64 v24; // x1
  const MethodInfo *v25; // x2
  struct System_Collections_Generic_List_ListViewItem__o *v26; // x8
  struct ListViewItemSeed_o *seed; // x9
  System_String_o *v28; // x2
  System_String_o *v29; // x3
  int32_t v30; // w4
  int32_t v31; // w5
  bool v32; // w6
  bool v33; // w7
  System_Collections_Generic_List_Enumerator_object__o v34; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v35; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_596C5BD & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_UserServantEntity__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_UserServantEntity__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_UserServantEntity__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_UserServantEntity__GetEnumerator__);
    sub_2213A60(&Method_System_Collections_Generic_List_UserServantEntity__IndexOf__);
    sub_2213A60(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_UserServantEntity__get_Count__);
    sub_2213A60(&ServantCheckEquipListViewItem_TypeInfo);
    byte_596C5BD = 1;
  }
  memset(&v35, 0, sizeof(v35));
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0);
  if ( userSvtEntityList && userSvtEntityList->fields._size >= 1 )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v34,
      (System_Collections_Generic_List_object__o *)userSvtEntityList,
      (const MethodInfo_448473C *)Method_System_Collections_Generic_List_UserServantEntity__GetEnumerator__);
    v35 = v34;
    v34.fields._list = 0;
    *(_QWORD *)&v34.fields._index = &v35;
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v35,
              (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_UserServantEntity__MoveNext__) )
    {
      current = v35.fields._current;
      if ( NpCombineControl__CheckConfirm_55889436((UserServantEntity_o *)v35.fields._current, 0) )
      {
        v8 = System_Collections_Generic_List_object___IndexOf(
               (System_Collections_Generic_List_object__o *)userSvtEntityList,
               current,
               (const MethodInfo_44848E8 *)Method_System_Collections_Generic_List_UserServantEntity__IndexOf__);
        v9 = (ServantCheckEquipListViewItem_o *)sub_2213CCC(ServantCheckEquipListViewItem_TypeInfo);
        ServantCheckEquipListViewItem___ctor(v9, (UserServantEntity_o *)current, v8, 1, v10);
        itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
        if ( !itemList
          || (items = itemList->fields._items,
              v20 = Method_System_Collections_Generic_List_ListViewItem__Add__,
              ++itemList->fields._version,
              !items) )
        {
          sub_2213CDC(itemList, v11);
        }
        size = itemList->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            itemList,
            (Il2CppObject *)v9,
            *(const MethodInfo_4483C64 **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
        }
        else
        {
          v22 = &items->obj.klass + size;
          itemList->fields._size = size + 1;
          v22[4] = (Il2CppClass *)v9;
          sub_2213A04((MissionNaviTransitionBoardItem_o *)(v22 + 4), (int32_t)v9, v12, v13, v14, v15, v16, v17);
        }
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v35,
      (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_UserServantEntity__Dispose__);
    v26 = this->fields.itemList;
    if ( !v26 || (seed = this->fields.seed) == 0 )
      sub_2213CDC(v23, v24);
    ServantCheckEquipListViewManager__SetScrollBarActive(
      this,
      seed->fields.arrangementVolume.fields.x < (float)v26->fields._size,
      v25);
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0);
    this->fields.onModifyServantAction = onModifyServant;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.onModifyServantAction,
      (int32_t)onModifyServant,
      v28,
      v29,
      v30,
      v31,
      v32,
      v33);
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
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
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

  if ( (byte_596C5C0 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_UserServantEntity__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_UserServantEntity__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_UserServantEntity__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_UserServantEntity__GetEnumerator__);
    sub_2213A60(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_2213A60(&ServantCheckEquipListViewItem_TypeInfo);
    byte_596C5C0 = 1;
  }
  memset(&v27, 0, sizeof(v27));
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0);
  IsNullOrEmpty = BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)userSvtEntityList, 0);
  if ( !IsNullOrEmpty )
  {
    if ( !userSvtEntityList )
      goto LABEL_18;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v26,
      (System_Collections_Generic_List_object__o *)userSvtEntityList,
      (const MethodInfo_448473C *)Method_System_Collections_Generic_List_UserServantEntity__GetEnumerator__);
    v27 = v26;
    v7 = 0;
    v26.fields._list = 0;
    *(_QWORD *)&v26.fields._index = &v27;
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v27,
              (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_UserServantEntity__MoveNext__) )
    {
      current = v27.fields._current;
      v9 = (ServantCheckEquipListViewItem_o *)sub_2213CCC(ServantCheckEquipListViewItem_TypeInfo);
      ServantCheckEquipListViewItem___ctor(v9, (UserServantEntity_o *)current, v7, 4, v10);
      itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
      if ( !itemList
        || (items = itemList->fields._items,
            v20 = Method_System_Collections_Generic_List_ListViewItem__Add__,
            ++itemList->fields._version,
            !items) )
      {
        sub_2213CDC(itemList, v11);
      }
      size = itemList->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          itemList,
          (Il2CppObject *)v9,
          *(const MethodInfo_4483C64 **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
      }
      else
      {
        v22 = &items->obj.klass + size;
        itemList->fields._size = size + 1;
        v22[4] = (Il2CppClass *)v9;
        sub_2213A04((MissionNaviTransitionBoardItem_o *)(v22 + 4), (int32_t)v9, v12, v13, v14, v15, v16, v17);
      }
      ++v7;
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v27,
      (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_UserServantEntity__Dispose__);
    v24 = this->fields.itemList;
    if ( !v24 || (seed = this->fields.seed) == 0 )
LABEL_18:
      sub_2213CDC(IsNullOrEmpty, v6);
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
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  __int64 v20; // x8
  _QWORD *v21; // x9
  __int64 v22; // x10
  __int64 v23; // x8
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x8
  struct ListViewItemSeed_o *seed; // x9

  if ( (byte_596C5BB & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_SvtEqCombineListViewItem__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_SvtEqCombineListViewItem__get_Item__);
    sub_2213A60(&ServantCheckEquipListViewItem_TypeInfo);
    byte_596C5BB = 1;
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
                      (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_SvtEqCombineListViewItem__get_Item__);
      if ( !Item )
        break;
      if ( *((_BYTE *)Item + 212) || *((_BYTE *)Item + 252) || *((_BYTE *)Item + 253) || *((_BYTE *)Item + 254) )
      {
        v10 = (UserServantEntity_o *)*((_QWORD *)Item + 16);
        v11 = Item[4];
        v12 = (ServantCheckEquipListViewItem_o *)sub_2213CCC(ServantCheckEquipListViewItem_TypeInfo);
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
            *(const MethodInfo_4483C64 **)(*(_QWORD *)(v21[4] + 192LL) + 112LL));
        }
        else
        {
          v23 = v20 + 8 * v22;
          Item[6] = v22 + 1;
          *(_QWORD *)(v23 + 32) = v12;
          sub_2213A04((MissionNaviTransitionBoardItem_o *)(v23 + 32), (int32_t)v12, v14, v15, v16, v17, v18, v19);
        }
      }
      if ( size == ++v9 )
        goto LABEL_17;
    }
LABEL_20:
    sub_2213CDC(Item, v6);
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


void ServantCheckEquipListViewManager__CreateList_41691752(
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
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7
  __int64 v21; // x8
  _QWORD *v22; // x9
  __int64 sortIndex; // x10
  __int64 v24; // x8
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x8
  struct ListViewItemSeed_o *seed; // x9

  if ( (byte_596C5BC & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_ServantOperationListViewItem__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_ServantOperationListViewItem__get_Item__);
    sub_2213A60(&ServantCheckEquipListViewItem_TypeInfo);
    byte_596C5BC = 1;
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
                                                 (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_ServantOperationListViewItem__get_Item__);
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
        v13 = (ServantCheckEquipListViewItem_o *)sub_2213CCC(ServantCheckEquipListViewItem_TypeInfo);
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
            *(const MethodInfo_4483C64 **)(*(_QWORD *)(v22[4] + 192LL) + 112LL));
        }
        else
        {
          v24 = v21 + 8 * sortIndex;
          Item->fields.sortIndex = sortIndex + 1;
          *(_QWORD *)(v24 + 32) = v13;
          sub_2213A04((MissionNaviTransitionBoardItem_o *)(v24 + 32), (int32_t)v13, v15, v16, v17, v18, v19, v20);
        }
      }
      if ( size == ++v9 )
        goto LABEL_18;
    }
LABEL_21:
    sub_2213CDC(Item, v6);
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
  __int64 v10; // x2
  DataMasterBase_TMaster__TEntity__PKType__o *v11; // x22
  Il2CppClass *klass; // x23
  void *monitor; // x24
  __int64 v14; // x0
  Il2CppObject *Entity; // x0
  __int64 v16; // x1
  int32_t v17; // w23
  ServantCheckEquipListViewItem_o *v18; // x22
  const MethodInfo *v19; // x4
  __int64 v20; // x1
  System_String_o *v21; // x2
  System_String_o *v22; // x3
  int32_t v23; // w4
  int32_t v24; // w5
  bool v25; // w6
  bool v26; // w7
  System_Collections_Generic_List_object__o *itemList; // x0
  struct System_Object_array *items; // x8
  _QWORD *v29; // x9
  __int64 size; // x10
  Il2CppClass **v31; // x8
  __int64 v32; // x0
  __int64 v33; // x1
  const MethodInfo *v34; // x2
  struct System_Collections_Generic_List_ListViewItem__o *v35; // x8
  struct ListViewItemSeed_o *seed; // x9
  System_Collections_Generic_List_Enumerator_object__o v37; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v38; // [xsp+20h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v39; // 0:x0.16

  if ( (byte_596C5BF & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_2213A60(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_UserServantEntity__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_UserServantEntity__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_UserServantEntity__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_UserServantEntity__GetEnumerator__);
    sub_2213A60(&Method_System_Collections_Generic_List_UserServantEntity__IndexOf__);
    sub_2213A60(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_UserServantEntity__get_Count__);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_2213A60(&ServantCheckEquipListViewItem_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_596C5BF = 1;
  }
  memset(&v38, 0, sizeof(v38));
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0);
  if ( userSvtEntityList && userSvtEntityList->fields._size >= 1 )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v37,
      (System_Collections_Generic_List_object__o *)userSvtEntityList,
      (const MethodInfo_448473C *)Method_System_Collections_Generic_List_UserServantEntity__GetEnumerator__);
    v38 = v37;
    v37.fields._list = 0;
    *(_QWORD *)&v37.fields._index = &v38;
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v38,
              (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_UserServantEntity__MoveNext__) )
    {
      current = v38.fields._current;
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        sub_2213CDC(0, v7);
      MasterData_object = DataManager__GetMasterData_object_(
                            (DataManager_o *)Instance,
                            (const MethodInfo_385636C *)Method_DataManager_GetMasterData_ServantMaster___);
      if ( !current )
        sub_2213CDC(MasterData_object, v9);
      v11 = (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object;
      klass = current[5].klass;
      monitor = current[5].monitor;
      if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v9, v10);
      *(_QWORD *)&v39.fields.currentCryptoKey = klass;
      *(_QWORD *)&v39.fields.fakeValue = monitor;
      v14 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v39, 0);
      if ( !v11 )
        sub_2213CDC(v14, (unsigned int)v14);
      Entity = DataMasterBase_object__object__int___GetEntity(
                 v11,
                 v14,
                 (const MethodInfo_3F10B30 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
      if ( !Entity )
        sub_2213CDC(0, v16);
      if ( ServantEntity__get_IsServantMaterialTd((ServantEntity_o *)Entity, 0) )
      {
        v17 = System_Collections_Generic_List_object___IndexOf(
                (System_Collections_Generic_List_object__o *)userSvtEntityList,
                current,
                (const MethodInfo_44848E8 *)Method_System_Collections_Generic_List_UserServantEntity__IndexOf__);
        v18 = (ServantCheckEquipListViewItem_o *)sub_2213CCC(ServantCheckEquipListViewItem_TypeInfo);
        ServantCheckEquipListViewItem___ctor(v18, (UserServantEntity_o *)current, v17, 3, v19);
        itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
        if ( !itemList
          || (items = itemList->fields._items,
              v29 = Method_System_Collections_Generic_List_ListViewItem__Add__,
              ++itemList->fields._version,
              !items) )
        {
          sub_2213CDC(itemList, v20);
        }
        size = itemList->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            itemList,
            (Il2CppObject *)v18,
            *(const MethodInfo_4483C64 **)(*(_QWORD *)(v29[4] + 192LL) + 112LL));
        }
        else
        {
          v31 = &items->obj.klass + size;
          itemList->fields._size = size + 1;
          v31[4] = (Il2CppClass *)v18;
          sub_2213A04((MissionNaviTransitionBoardItem_o *)(v31 + 4), (int32_t)v18, v21, v22, v23, v24, v25, v26);
        }
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v38,
      (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_UserServantEntity__Dispose__);
    v35 = this->fields.itemList;
    if ( !v35 || (seed = this->fields.seed) == 0 )
      sub_2213CDC(v32, v33);
    ServantCheckEquipListViewManager__SetScrollBarActive(
      this,
      seed->fields.arrangementVolume.fields.x < (float)v35->fields._size,
      v34);
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0);
  }
}


void ServantCheckEquipListViewManager__CreateSSRareServantList(
        ServantCheckEquipListViewManager_o *this,
        System_Collections_Generic_List_UserServantEntity__o *userSvtEntityList,
        System_Action_long__o *onModifyServant,
        const MethodInfo *method)
{
  Il2CppObject *current; // x22
  Il2CppObject *Instance; // x0
  __int64 v9; // x1
  Il2CppObject *MasterData_object; // x0
  __int64 v11; // x1
  __int64 v12; // x2
  DataMasterBase_TMaster__TEntity__PKType__o *v13; // x23
  Il2CppClass *klass; // x24
  void *monitor; // x25
  __int64 v16; // x0
  Il2CppObject *Entity; // x0
  __int64 v18; // x1
  int32_t v19; // w24
  ServantCheckEquipListViewItem_o *v20; // x23
  const MethodInfo *v21; // x4
  __int64 v22; // x1
  System_String_o *v23; // x2
  System_String_o *v24; // x3
  int32_t v25; // w4
  int32_t v26; // w5
  bool v27; // w6
  bool v28; // w7
  System_Collections_Generic_List_object__o *itemList; // x0
  struct System_Object_array *items; // x8
  _QWORD *v31; // x9
  __int64 size; // x10
  Il2CppClass **v33; // x8
  __int64 v34; // x0
  __int64 v35; // x1
  const MethodInfo *v36; // x2
  struct System_Collections_Generic_List_ListViewItem__o *v37; // x8
  struct ListViewItemSeed_o *seed; // x9
  System_String_o *v39; // x2
  System_String_o *v40; // x3
  int32_t v41; // w4
  int32_t v42; // w5
  bool v43; // w6
  bool v44; // w7
  struct System_Action_long__o *v45; // [xsp+0h] [xbp-A0h]
  System_Collections_Generic_List_Enumerator_object__o v46; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v47; // [xsp+20h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v48; // 0:x0.16

  if ( (byte_596C5BE & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_2213A60(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_UserServantEntity__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_UserServantEntity__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_UserServantEntity__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_UserServantEntity__GetEnumerator__);
    sub_2213A60(&Method_System_Collections_Generic_List_UserServantEntity__IndexOf__);
    sub_2213A60(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_UserServantEntity__get_Count__);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_2213A60(&ServantCheckEquipListViewItem_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_596C5BE = 1;
  }
  memset(&v47, 0, sizeof(v47));
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0);
  if ( userSvtEntityList && userSvtEntityList->fields._size >= 1 )
  {
    v45 = onModifyServant;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v46,
      (System_Collections_Generic_List_object__o *)userSvtEntityList,
      (const MethodInfo_448473C *)Method_System_Collections_Generic_List_UserServantEntity__GetEnumerator__);
    v47 = v46;
    v46.fields._list = 0;
    *(_QWORD *)&v46.fields._index = &v47;
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v47,
              (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_UserServantEntity__MoveNext__) )
    {
      current = v47.fields._current;
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        sub_2213CDC(0, v9);
      MasterData_object = DataManager__GetMasterData_object_(
                            (DataManager_o *)Instance,
                            (const MethodInfo_385636C *)Method_DataManager_GetMasterData_ServantMaster___);
      if ( !current )
        sub_2213CDC(MasterData_object, v11);
      v13 = (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object;
      klass = current[5].klass;
      monitor = current[5].monitor;
      if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v11, v12);
      *(_QWORD *)&v48.fields.currentCryptoKey = klass;
      *(_QWORD *)&v48.fields.fakeValue = monitor;
      v16 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v48, 0);
      if ( !v13 )
        sub_2213CDC(v16, (unsigned int)v16);
      Entity = DataMasterBase_object__object__int___GetEntity(
                 v13,
                 v16,
                 (const MethodInfo_3F10B30 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
      if ( !Entity )
        sub_2213CDC(0, v18);
      if ( ServantEntity__get_IsServant((ServantEntity_o *)Entity, 0)
        && UserServantEntity__getRarity((UserServantEntity_o *)current, 0) == 5 )
      {
        v19 = System_Collections_Generic_List_object___IndexOf(
                (System_Collections_Generic_List_object__o *)userSvtEntityList,
                current,
                (const MethodInfo_44848E8 *)Method_System_Collections_Generic_List_UserServantEntity__IndexOf__);
        v20 = (ServantCheckEquipListViewItem_o *)sub_2213CCC(ServantCheckEquipListViewItem_TypeInfo);
        ServantCheckEquipListViewItem___ctor(v20, (UserServantEntity_o *)current, v19, 2, v21);
        itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
        if ( !itemList
          || (items = itemList->fields._items,
              v31 = Method_System_Collections_Generic_List_ListViewItem__Add__,
              ++itemList->fields._version,
              !items) )
        {
          sub_2213CDC(itemList, v22);
        }
        size = itemList->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            itemList,
            (Il2CppObject *)v20,
            *(const MethodInfo_4483C64 **)(*(_QWORD *)(v31[4] + 192LL) + 112LL));
        }
        else
        {
          v33 = &items->obj.klass + size;
          itemList->fields._size = size + 1;
          v33[4] = (Il2CppClass *)v20;
          sub_2213A04((MissionNaviTransitionBoardItem_o *)(v33 + 4), (int32_t)v20, v23, v24, v25, v26, v27, v28);
        }
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v47,
      (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_UserServantEntity__Dispose__);
    v37 = this->fields.itemList;
    if ( !v37 || (seed = this->fields.seed) == 0 )
      sub_2213CDC(v34, v35);
    ServantCheckEquipListViewManager__SetScrollBarActive(
      this,
      seed->fields.arrangementVolume.fields.x < (float)v37->fields._size,
      v36);
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0);
    this->fields.onModifyServantAction = v45;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.onModifyServantAction,
      (int32_t)v45,
      v39,
      v40,
      v41,
      v42,
      v43,
      v44);
  }
}


ServantCheckEquipListViewItem_o *ServantCheckEquipListViewManager__GetItem(
        ServantCheckEquipListViewManager_o *this,
        int32_t index,
        const MethodInfo *method)
{
  ServantCheckEquipListViewItem_o *result; // x0
  __int64 naturalAligment; // x10

  if ( (byte_596C5C1 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_2213A60(&ServantCheckEquipListViewItem_TypeInfo);
    byte_596C5C1 = 1;
  }
  result = (ServantCheckEquipListViewItem_o *)this->fields.itemList;
  if ( result )
  {
    result = (ServantCheckEquipListViewItem_o *)System_Collections_Generic_List_object___get_Item(
                                                  (System_Collections_Generic_List_object__o *)result,
                                                  index,
                                                  (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
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


void ServantCheckEquipListViewManager__ModifyServants(
        ServantCheckEquipListViewManager_o *this,
        int64_t selectedId,
        const MethodInfo *method)
{
  int v5; // w8
  DataMasterBase_TMaster__TEntity__PKType__o *Master_object; // x0
  __int64 v7; // x1
  char v8; // w23
  _BOOL8 v9; // x0
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 naturalAligment; // x11
  ServantCheckEquipListViewItem_o *v13; // x21
  struct UserServantEntity_o *materialUserServantEntity; // x8
  __int128 v16; // q0
  __int128 v17; // q1
  int v18; // w8
  int64_t v19; // x0
  __int64 v20; // x1
  Il2CppObject v21; // q1
  const MethodInfo *v22; // x2
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v23; // [xsp+0h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v24; // [xsp+20h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v25; // [xsp+40h] [xbp-A0h] BYREF
  __int64 v26; // [xsp+60h] [xbp-80h]
  System_Collections_Generic_List_Enumerator_object__o *v27; // [xsp+68h] [xbp-78h]
  System_Collections_Generic_List_Enumerator_object__o v28; // [xsp+70h] [xbp-70h] BYREF
  Il2CppObject *entity; // [xsp+98h] [xbp-48h] BYREF

  if ( (byte_596C5C6 & 1) == 0 )
  {
    sub_2213A60(&Method_ActionExtensions_Call_long___);
    sub_2213A60(&Method_DataManager_GetMaster_UserServantMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_2213A60(&ServantCheckEquipListViewItem_TypeInfo);
    byte_596C5C6 = 1;
  }
  entity = 0;
  v5 = *(&DataManager_TypeInfo->_2.cctor_finished + 1);
  memset(&v28, 0, sizeof(v28));
  if ( !v5 )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, selectedId, method);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_UserServantMaster___);
  if ( !Master_object )
    goto LABEL_30;
  if ( !DataMasterBase_object__object__long___TryGetEntity(
          Master_object,
          &entity,
          selectedId,
          (const MethodInfo_3F131DC *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__) )
    return;
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)this->fields.itemList;
  if ( !Master_object )
LABEL_30:
    sub_2213CDC(Master_object, v7);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v25,
    (System_Collections_Generic_List_object__o *)Master_object,
    (const MethodInfo_448473C *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  v28 = *(System_Collections_Generic_List_Enumerator_object__o *)&v25.fields.currentCryptoKey;
  v8 = 0;
  v26 = 0;
  v27 = &v28;
  while ( 1 )
  {
    v9 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v28,
           (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    if ( !v9 )
      break;
    if ( v28.fields._current )
    {
      naturalAligment = ServantCheckEquipListViewItem_TypeInfo->_2.naturalAligment;
      if ( v28.fields._current->klass->_2.naturalAligment >= (unsigned int)naturalAligment )
      {
        v13 = (ServantCheckEquipListViewItem_c *)v28.fields._current->klass->_2.typeHierarchy[naturalAligment - 1] == ServantCheckEquipListViewItem_TypeInfo
            ? (ServantCheckEquipListViewItem_o *)v28.fields._current
            : 0LL;
        if ( v13 && entity != 0 )
        {
          materialUserServantEntity = v13->fields.materialUserServantEntity;
          if ( !materialUserServantEntity )
            sub_2213CDC(v9, v10);
          v16 = *(_OWORD *)&materialUserServantEntity->fields.id.fields.currentCryptoKey;
          v17 = *(_OWORD *)&materialUserServantEntity->fields.id.fields.fakeValue;
          v18 = *(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1);
          *(_OWORD *)&v25.fields.currentCryptoKey = v16;
          *(_OWORD *)&v25.fields.fakeValue = v17;
          if ( !v18 )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v10, v11);
          v24 = v25;
          v19 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_56000612(&v24, 0);
          if ( !entity )
            sub_2213CDC(v19, v20);
          v21 = entity[2];
          *(Il2CppObject *)&v23.fields.currentCryptoKey = entity[1];
          *(Il2CppObject *)&v23.fields.fakeValue = v21;
          if ( v19 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_56000612(&v23, 0) )
          {
            v8 = 1;
            ServantCheckEquipListViewItem__SetMaterialUserServantEntity(v13, (UserServantEntity_o *)entity, v22);
          }
        }
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v28,
    (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
  if ( (v8 & 1) != 0 )
  {
    ActionExtensions__Call_long_(
      (System_Action_T__o *)this->fields.onModifyServantAction,
      selectedId,
      (const MethodInfo_36FFE7C *)Method_ActionExtensions_Call_long___);
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0);
  }
}


void ServantCheckEquipListViewManager__OnClickListView(
        ServantCheckEquipListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  __int64 v5; // x19
  Il2CppObject *Instance; // x0
  __int64 v7; // x1
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  struct ListViewItem_o *linkItem; // x1
  ServantCheckEquipListViewItem_c *v21; // x8
  __int64 naturalAligment; // x9
  MissionNaviTransitionBoardItem_o *v23; // x20
  _QWORD *v24; // x0
  System_Reflection_MethodBase_o *v25; // x0
  MissionNaviTransitionBoardItem_c *klass; // x8
  CommonUI_o *v27; // x20
  UserServantEntity_o *events; // x21
  ServantStatusDialog_EndDelegate_o *v29; // x22

  if ( (byte_596C5C5 & 1) == 0 )
  {
    sub_2213A60(&ServantStatusDialog_EndDelegate_TypeInfo);
    sub_2213A60(&ServantCheckEquipListViewItem_TypeInfo);
    sub_2213A60(&Method_ServantCheckEquipListViewManager_OnClickListView__);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_2213A60(&Method_ServantCheckEquipListViewManager___c__DisplayClass23_0__OnClickListView_b__0__);
    sub_2213A60(&ServantCheckEquipListViewManager___c__DisplayClass23_0_TypeInfo);
    byte_596C5C5 = 1;
  }
  v5 = sub_2213CCC(ServantCheckEquipListViewManager___c__DisplayClass23_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_19;
  *(_QWORD *)(v5 + 16) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 16), (int32_t)this, v8, v9, v10, v11, v12, v13);
  if ( !obj )
    goto LABEL_19;
  linkItem = obj->fields.linkItem;
  if ( !linkItem )
    goto LABEL_11;
  v21 = ServantCheckEquipListViewItem_TypeInfo;
  naturalAligment = ServantCheckEquipListViewItem_TypeInfo->_2.naturalAligment;
  if ( linkItem->klass->_2.naturalAligment < (unsigned int)naturalAligment
    || (ServantCheckEquipListViewItem_c *)linkItem->klass->_2.typeHierarchy[naturalAligment - 1] != ServantCheckEquipListViewItem_TypeInfo
    || (*(_QWORD *)(v5 + 24) = linkItem,
        v23 = (MissionNaviTransitionBoardItem_o *)(v5 + 24),
        linkItem->klass->_2.naturalAligment < (unsigned int)naturalAligment)
    || (ServantCheckEquipListViewItem_c *)linkItem->klass->_2.typeHierarchy[naturalAligment - 1] != v21 )
  {
    sub_221405C(linkItem, v21, v14, v15);
LABEL_11:
    *(_QWORD *)(v5 + 24) = 0;
    v23 = (MissionNaviTransitionBoardItem_o *)(v5 + 24);
  }
  sub_2213A04(v23, (int32_t)linkItem, v14, v15, v16, v17, v18, v19);
  if ( v23->klass )
  {
    v24 = Method_ServantCheckEquipListViewManager_OnClickListView__;
    if ( (*((_BYTE *)Method_ServantCheckEquipListViewManager_OnClickListView__ + 83) & 2) != 0 )
      v24 = (_QWORD *)sub_2213A78(Method_ServantCheckEquipListViewManager_OnClickListView__);
    v25 = (System_Reflection_MethodBase_o *)sub_2213A44(v24, v24[4]);
    OverwriteAssetSoundName__PlaySystemSe(v25, 0, 0, 0);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    klass = v23->klass;
    if ( v23->klass )
    {
      v27 = (CommonUI_o *)Instance;
      events = (UserServantEntity_o *)klass->_1.events;
      v29 = (ServantStatusDialog_EndDelegate_o *)sub_2213CCC(ServantStatusDialog_EndDelegate_TypeInfo);
      ServantStatusDialog_EndDelegate___ctor(
        v29,
        (Il2CppObject *)v5,
        Method_ServantCheckEquipListViewManager___c__DisplayClass23_0__OnClickListView_b__0__,
        0);
      if ( v27 )
      {
        CommonUI__OpenServantStatusDialog_37383588(v27, 29, events, v29, 0);
        return;
      }
    }
LABEL_19:
    sub_2213CDC(Instance, v7);
  }
}


void ServantCheckEquipListViewManager__OnMoveEnd(ServantCheckEquipListViewManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  int32_t callbackCount; // w8
  bool v5; // vf
  int32_t v6; // w8
  UnityEngine_Object_o *scrollView; // x20
  __int64 v8; // x1
  struct UIScrollView_o *v9; // x0
  struct System_Action_o *callbackFunc2; // x20
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7

  if ( (byte_596C5C4 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596C5C4 = 1;
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
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
      if ( UnityEngine_Object__op_Inequality(scrollView, 0, 0) )
      {
        v9 = this->fields.scrollView;
        if ( !v9 )
          sub_2213CDC(0, v8);
        ((void (__fastcall *)(struct UIScrollView_o *, __int64, const MethodInfo *))v9->klass->vtable._8_UpdateScrollbars.methodPtr)(
          v9,
          1,
          v9->klass->vtable._8_UpdateScrollbars.method);
        callbackFunc2 = this->fields.callbackFunc2;
        this->fields.callbackFunc2 = 0;
        sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.callbackFunc2, 0, v11, v12, v13, v14, v15, v16);
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
  System_String_o *v15; // x1

  if ( (byte_596C5C3 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_ServantCheckEquipListViewObject__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_ServantCheckEquipListViewObject__get_Item__);
    sub_2213A60(&Method_ServantCheckEquipListViewManager_OnMoveEnd__);
    sub_2213A60(&StringLiteral_10344/*"OnMoveEnd"*/);
    byte_596C5C3 = 1;
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
               (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_ServantCheckEquipListViewObject__get_Item__);
      v13 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
      System_Action___ctor(v13, (Il2CppObject *)this, Method_ServantCheckEquipListViewManager_OnMoveEnd__, 0);
      if ( !Item )
        break;
      ServantCheckEquipListViewObject__Init_41702452((ServantCheckEquipListViewObject_o *)Item, mode, v13, v14);
      if ( size == ++v11 )
        return;
    }
LABEL_10:
    sub_2213CDC(v7, v8);
  }
  v15 = (System_String_o *)StringLiteral_10344/*"OnMoveEnd"*/;
  this->fields.callbackCount = 1;
  UnityEngine_MonoBehaviour__Invoke((UnityEngine_MonoBehaviour_o *)this, v15, delay, 0);
}


void ServantCheckEquipListViewManager__SetContentPivot(
        ServantCheckEquipListViewManager_o *this,
        const MethodInfo *method)
{
  ServantCheckEquipListViewManager_o *v2; // x19
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x8
  int32_t size; // w9
  struct UIScrollView_o *scrollView; // x8
  int v6; // w9

  v2 = this;
  if ( (byte_596C5C8 & 1) == 0 )
  {
    this = (ServantCheckEquipListViewManager_o *)sub_2213A60(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    byte_596C5C8 = 1;
  }
  itemList = v2->fields.itemList;
  if ( !itemList )
    goto LABEL_10;
  size = itemList->fields._size;
  scrollView = v2->fields.scrollView;
  if ( size != 1 )
  {
    if ( scrollView )
    {
      v6 = 0;
      goto LABEL_9;
    }
LABEL_10:
    sub_2213CDC(this, method);
  }
  if ( !scrollView )
    goto LABEL_10;
  v6 = 4;
LABEL_9:
  scrollView->fields.contentPivot = v6;
}


void ServantCheckEquipListViewManager__SetMode(
        ServantCheckEquipListViewManager_o *this,
        int32_t mode,
        System_Action_o *callback,
        const MethodInfo *method)
{
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  const MethodInfo *v10; // x2

  this->fields.callbackFunc2 = callback;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.callbackFunc2,
    (int32_t)callback,
    (System_String_o *)callback,
    (System_String_o *)method,
    v4,
    v5,
    v6,
    v7);
  ServantCheckEquipListViewManager__SetMode_41691076(this, mode, v10);
}


void ServantCheckEquipListViewManager__SetMode_41691076(
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
  __int64 naturalAligment; // x10
  ListViewObject_o *v7; // x0
  int32_t v8; // w1

  if ( (byte_596C5C2 & 1) == 0 )
  {
    sub_2213A60(&ServantCheckEquipListViewObject_TypeInfo);
    byte_596C5C2 = 1;
  }
  if ( obj
    && (naturalAligment = ServantCheckEquipListViewObject_TypeInfo->_2.naturalAligment,
        obj->klass->_2.naturalAligment >= (unsigned int)naturalAligment) )
  {
    if ( (ServantCheckEquipListViewObject_c *)obj->klass->_2.typeHierarchy[naturalAligment - 1] == ServantCheckEquipListViewObject_TypeInfo )
      v7 = obj;
    else
      v7 = 0;
  }
  else
  {
    v7 = 0;
  }
  if ( this->fields.initMode != 3 )
  {
    if ( v7 )
    {
      v8 = 2;
      goto LABEL_14;
    }
LABEL_15:
    sub_2213CDC(v7, obj);
  }
  if ( !v7 )
    goto LABEL_15;
  v8 = 3;
LABEL_14:
  ServantCheckEquipListViewObject__Init_41701964((ServantCheckEquipListViewObject_o *)v7, v8, (const MethodInfo *)item);
}


// local variable allocation has failed, the output may be wrong!
void ServantCheckEquipListViewManager__SetScrollBarActive(
        ServantCheckEquipListViewManager_o *this,
        bool isActive,
        const MethodInfo *method)
{
  UnityEngine_Object_o *scrollBar; // x21
  __int64 v6; // x1
  UnityEngine_Component_o *gameObject; // x0

  if ( (byte_596C5C7 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596C5C7 = 1;
  }
  scrollBar = (UnityEngine_Object_o *)this->fields.scrollBar;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, isActive, method);
  if ( !UnityEngine_Object__op_Equality(scrollBar, 0, 0) )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.scrollBar;
    if ( !gameObject
      || (gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0)) == 0 )
    {
      sub_2213CDC(gameObject, v6);
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
  System_Delegate_o *v6; // x0
  __int64 v7; // x2
  __int64 v8; // x3
  __int64 v9; // x0
  bool v10; // zf
  ServantCheckEquipListViewManager_o *v11; // x0
  System_Action_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_596C5B7 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    byte_596C5B7 = 1;
  }
  callbackFunc2 = (System_Delegate_o *)this->fields.callbackFunc2;
  while ( 1 )
  {
    v6 = System_Delegate__Combine(callbackFunc2, (System_Delegate_o *)value, 0);
    if ( v6 )
    {
      if ( (System_Action_c *)v6->klass != System_Action_TypeInfo )
        break;
    }
    v9 = sub_224B48C(&this->fields.callbackFunc2, v6, callbackFunc2);
    v10 = v9 == (_QWORD)callbackFunc2;
    callbackFunc2 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (ServantCheckEquipListViewManager_o *)sub_221405C(v6, System_Action_TypeInfo, v7, v8);
  ServantCheckEquipListViewManager__remove_callbackFunc2(v11, v12, v13);
}


System_Collections_Generic_List_ServantCheckEquipListViewObject__o *ServantCheckEquipListViewManager__get_ClippingObjectList(
        ServantCheckEquipListViewManager_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  System_Collections_Generic_List_object__o *Component_object; // x0
  const MethodInfo *v5; // x1
  struct System_Collections_Generic_List_GameObject__o *objectList; // x8
  int size; // w23
  int32_t v8; // w21
  __int64 v9; // x1
  __int64 v10; // x2
  Il2CppObject *Item; // x22
  Il2CppObject *v12; // x22
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7
  struct System_Object_array *items; // x8
  _QWORD *v20; // x9
  __int64 v21; // x10
  Il2CppClass **v22; // x0

  if ( (byte_596C5BA & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_ServantCheckEquipListViewObject___);
    sub_2213A60(&Method_System_Collections_Generic_List_ServantCheckEquipListViewObject__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_ServantCheckEquipListViewObject___ctor__);
    sub_2213A60(&Method_System_Collections_Generic_List_GameObject__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_GameObject__get_Item__);
    sub_2213A60(&System_Collections_Generic_List_ServantCheckEquipListViewObject__TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596C5BA = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_ServantCheckEquipListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_ServantCheckEquipListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    goto LABEL_22;
  size = objectList->fields._size;
  if ( size >= 1 )
  {
    v8 = 0;
    while ( 1 )
    {
      Component_object = (System_Collections_Generic_List_object__o *)this->fields.objectList;
      if ( !Component_object )
        break;
      Item = System_Collections_Generic_List_object___get_Item(
               Component_object,
               v8,
               (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_GameObject__get_Item__);
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v9, v10);
      Component_object = (System_Collections_Generic_List_object__o *)UnityEngine_Object__op_Equality(
                                                                        (UnityEngine_Object_o *)Item,
                                                                        0,
                                                                        0);
      if ( ((unsigned __int8)Component_object & 1) == 0 )
      {
        if ( !Item )
          break;
        Component_object = (System_Collections_Generic_List_object__o *)UnityEngine_GameObject__GetComponent_object_(
                                                                          (UnityEngine_GameObject_o *)Item,
                                                                          (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_ServantCheckEquipListViewObject___);
        if ( !Component_object )
          break;
        v12 = (Il2CppObject *)Component_object;
        Component_object = (System_Collections_Generic_List_object__o *)ServantCheckEquipListViewObject__GetItem(
                                                                          (ServantCheckEquipListViewObject_o *)Component_object,
                                                                          v5);
        if ( !Component_object )
          break;
        v5 = (const MethodInfo *)Component_object;
        if ( !LOBYTE(Component_object[2].fields._items)
          || (Component_object = (System_Collections_Generic_List_object__o *)ListViewManager__ClippingItem_50835204(
                                                                                (ListViewManager_o *)this,
                                                                                (ListViewItem_o *)Component_object,
                                                                                0),
              ((unsigned __int8)Component_object & 1) != 0) )
        {
          if ( !v3 )
            break;
          items = v3->fields._items;
          v20 = Method_System_Collections_Generic_List_ServantCheckEquipListViewObject__Add__;
          ++v3->fields._version;
          if ( !items )
            break;
          v21 = v3->fields._size;
          if ( (unsigned int)v21 >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v3,
              v12,
              *(const MethodInfo_4483C64 **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
          }
          else
          {
            v22 = &items->obj.klass + v21;
            v3->fields._size = v21 + 1;
            v22[4] = (Il2CppClass *)v12;
            sub_2213A04((MissionNaviTransitionBoardItem_o *)(v22 + 4), (int32_t)v12, v13, v14, v15, v16, v17, v18);
          }
        }
      }
      if ( size == ++v8 )
        return (System_Collections_Generic_List_ServantCheckEquipListViewObject__o *)v3;
    }
LABEL_22:
    sub_2213CDC(Component_object, v5);
  }
  return (System_Collections_Generic_List_ServantCheckEquipListViewObject__o *)v3;
}


System_Collections_Generic_List_ServantCheckEquipListViewObject__o *ServantCheckEquipListViewManager__get_ObjectList(
        ServantCheckEquipListViewManager_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  System_Collections_Generic_List_object__o *Component_object; // x0
  __int64 v5; // x1
  struct System_Collections_Generic_List_GameObject__o *objectList; // x8
  int size; // w23
  int32_t v8; // w21
  __int64 v9; // x1
  __int64 v10; // x2
  Il2CppObject *Item; // x22
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  struct System_Object_array *items; // x8
  _QWORD *v19; // x9
  __int64 v20; // x10
  System_Collections_Generic_List_object__o *v21; // x1
  Il2CppClass **v22; // x0

  if ( (byte_596C5B9 & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_ServantCheckEquipListViewObject___);
    sub_2213A60(&Method_System_Collections_Generic_List_ServantCheckEquipListViewObject__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_ServantCheckEquipListViewObject___ctor__);
    sub_2213A60(&Method_System_Collections_Generic_List_GameObject__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_GameObject__get_Item__);
    sub_2213A60(&System_Collections_Generic_List_ServantCheckEquipListViewObject__TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596C5B9 = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_ServantCheckEquipListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_ServantCheckEquipListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    goto LABEL_18;
  size = objectList->fields._size;
  if ( size >= 1 )
  {
    v8 = 0;
    while ( 1 )
    {
      Component_object = (System_Collections_Generic_List_object__o *)this->fields.objectList;
      if ( !Component_object )
        break;
      Item = System_Collections_Generic_List_object___get_Item(
               Component_object,
               v8,
               (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_GameObject__get_Item__);
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v9, v10);
      Component_object = (System_Collections_Generic_List_object__o *)UnityEngine_Object__op_Equality(
                                                                        (UnityEngine_Object_o *)Item,
                                                                        0,
                                                                        0);
      if ( ((unsigned __int8)Component_object & 1) == 0 )
      {
        if ( !Item )
          break;
        Component_object = (System_Collections_Generic_List_object__o *)UnityEngine_GameObject__GetComponent_object_(
                                                                          (UnityEngine_GameObject_o *)Item,
                                                                          (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_ServantCheckEquipListViewObject___);
        if ( !v3 )
          break;
        items = v3->fields._items;
        v19 = Method_System_Collections_Generic_List_ServantCheckEquipListViewObject__Add__;
        ++v3->fields._version;
        if ( !items )
          break;
        v20 = v3->fields._size;
        v21 = Component_object;
        if ( (unsigned int)v20 >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v3,
            (Il2CppObject *)Component_object,
            *(const MethodInfo_4483C64 **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
        }
        else
        {
          v22 = &items->obj.klass + v20;
          v3->fields._size = v20 + 1;
          v22[4] = (Il2CppClass *)v21;
          sub_2213A04((MissionNaviTransitionBoardItem_o *)(v22 + 4), (int32_t)v21, v12, v13, v14, v15, v16, v17);
        }
      }
      if ( size == ++v8 )
        return (System_Collections_Generic_List_ServantCheckEquipListViewObject__o *)v3;
    }
LABEL_18:
    sub_2213CDC(Component_object, v5);
  }
  return (System_Collections_Generic_List_ServantCheckEquipListViewObject__o *)v3;
}


void ServantCheckEquipListViewManager__remove_callbackFunc2(
        ServantCheckEquipListViewManager_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *callbackFunc2; // x21
  System_Delegate_o *v6; // x0
  __int64 v7; // x2
  __int64 v8; // x3
  __int64 v9; // x0
  bool v10; // zf
  ServantCheckEquipListViewManager_o *v11; // x0
  const MethodInfo *v12; // x1

  if ( (byte_596C5B8 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    byte_596C5B8 = 1;
  }
  callbackFunc2 = (System_Delegate_o *)this->fields.callbackFunc2;
  while ( 1 )
  {
    v6 = System_Delegate__Remove(callbackFunc2, (System_Delegate_o *)value, 0);
    if ( v6 )
    {
      if ( (System_Action_c *)v6->klass != System_Action_TypeInfo )
        break;
    }
    v9 = sub_224B48C(&this->fields.callbackFunc2, v6, callbackFunc2);
    v10 = v9 == (_QWORD)callbackFunc2;
    callbackFunc2 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (ServantCheckEquipListViewManager_o *)sub_221405C(v6, System_Action_TypeInfo, v7, v8);
  ServantCheckEquipListViewManager__get_ObjectList(v11, v12);
}


void ServantCheckEquipListViewManager___c__DisplayClass23_0___ctor(
        ServantCheckEquipListViewManager___c__DisplayClass23_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void ServantCheckEquipListViewManager___c__DisplayClass23_0___OnClickListView_b__0(
        ServantCheckEquipListViewManager___c__DisplayClass23_0_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v5; // x1
  CommonUI_o *v6; // x20
  System_Action_o *_9__1; // x22
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7

  if ( (byte_596C5C9 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_2213A60(&Method_ServantCheckEquipListViewManager___c__DisplayClass23_0__OnClickListView_b__1__);
    byte_596C5C9 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v6 = (CommonUI_o *)Instance;
  _9__1 = this->fields.__9__1;
  if ( !_9__1 )
  {
    _9__1 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
    System_Action___ctor(
      _9__1,
      (Il2CppObject *)this,
      Method_ServantCheckEquipListViewManager___c__DisplayClass23_0__OnClickListView_b__1__,
      0);
    this->fields.__9__1 = _9__1;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.__9__1, (int32_t)_9__1, v8, v9, v10, v11, v12, v13);
  }
  if ( !v6 )
    sub_2213CDC(Instance, v5);
  CommonUI__CloseServantStatusDialog(v6, _9__1, 0);
}


void ServantCheckEquipListViewManager___c__DisplayClass23_0___OnClickListView_b__1(
        ServantCheckEquipListViewManager___c__DisplayClass23_0_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  ServantCheckEquipListViewManager___c__DisplayClass23_0_o *v3; // x19
  struct ServantCheckEquipListViewItem_o *item; // x8
  struct UserServantEntity_o *materialUserServantEntity; // x8
  __int128 v6; // q1
  ServantCheckEquipListViewManager_o *_4__this; // x19
  const MethodInfo *v8; // x2
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v9; // [xsp+0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v10; // [xsp+20h] [xbp-40h]

  v3 = this;
  if ( (byte_596C5CA & 1) == 0 )
  {
    this = (ServantCheckEquipListViewManager___c__DisplayClass23_0_o *)sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_596C5CA = 1;
  }
  item = v3->fields.item;
  if ( !item )
    goto LABEL_9;
  materialUserServantEntity = item->fields.materialUserServantEntity;
  if ( !materialUserServantEntity )
    goto LABEL_9;
  v6 = *(_OWORD *)&materialUserServantEntity->fields.id.fields.fakeValue;
  _4__this = v3->fields.__4__this;
  *(_OWORD *)&v10.fields.currentCryptoKey = *(_OWORD *)&materialUserServantEntity->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v10.fields.fakeValue = v6;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, method, v2);
  v9 = v10;
  this = (ServantCheckEquipListViewManager___c__DisplayClass23_0_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_56000612(
                                                                       &v9,
                                                                       0);
  if ( !_4__this )
LABEL_9:
    sub_2213CDC(this, method);
  ServantCheckEquipListViewManager__ModifyServants(_4__this, (int64_t)this, v8);
}