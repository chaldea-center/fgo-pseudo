void WarehouseListViewManager___cctor(const MethodInfo *method)
{
  int32_t v1; // w2
  const MethodInfo *v2; // x3
  System_String_o *SORT_SAVE_KEY; // x19
  System_String_o *v4; // x0
  System_String_o *v5; // x19
  ListViewSort_o *v6; // x20
  struct WarehouseListViewManager_StaticFields *static_fields; // x0
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  System_String_o *v10; // x19
  System_String_o *v11; // x0
  System_String_o *v12; // x19
  ListViewSort_o *v13; // x20
  struct WarehouseListViewManager_StaticFields *v14; // x0
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  System_String_o *v17; // x19
  System_String_o *v18; // x0
  System_String_o *v19; // x19
  ListViewSort_o *v20; // x20
  struct WarehouseListViewManager_StaticFields *v21; // x0
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  System_String_o *v24; // x19
  System_String_o *v25; // x0
  System_String_o *v26; // x19
  ListViewSort_o *v27; // x20
  struct WarehouseListViewManager_StaticFields *v28; // x0
  int32_t v29; // w2
  const MethodInfo *v30; // x3
  int v31; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4C357BA & 1) == 0 )
  {
    sub_1C32C20(&ListViewSort_TypeInfo);
    sub_1C32C20(&WarehouseListViewManager_TypeInfo);
    sub_1C32C20(&StringLiteral_15594/*"Warehouse"*/);
    byte_4C357BA = 1;
  }
  WarehouseListViewManager_TypeInfo->static_fields->SORT_SAVE_KEY = (struct System_String_o *)StringLiteral_15594/*"Warehouse"*/;
  sub_1C32BC4((CGThumbnailListItem_o *)WarehouseListViewManager_TypeInfo->static_fields, StringLiteral_15594/*"Warehouse"*/, v1, v2);
  SORT_SAVE_KEY = WarehouseListViewManager_TypeInfo->static_fields->SORT_SAVE_KEY;
  v31 = 1;
  v4 = System_Int32__ToString((int32_t)&v31, 0);
  v5 = System_String__Concat_63518544(SORT_SAVE_KEY, v4, 0);
  v6 = (ListViewSort_o *)sub_1C32E6C(ListViewSort_TypeInfo);
  ListViewSort___ctor_43736460(v6, v5, 3, 0, 0);
  static_fields = WarehouseListViewManager_TypeInfo->static_fields;
  static_fields->servantSortInfo = v6;
  sub_1C32BC4((CGThumbnailListItem_o *)&static_fields->servantSortInfo, (int32_t)v6, v8, v9);
  v10 = WarehouseListViewManager_TypeInfo->static_fields->SORT_SAVE_KEY;
  v31 = 2;
  v11 = System_Int32__ToString((int32_t)&v31, 0);
  v12 = System_String__Concat_63518544(v10, v11, 0);
  v13 = (ListViewSort_o *)sub_1C32E6C(ListViewSort_TypeInfo);
  ListViewSort___ctor_43736460(v13, v12, 3, 0, 0);
  v14 = WarehouseListViewManager_TypeInfo->static_fields;
  v14->servantEquipSortInfo = v13;
  sub_1C32BC4((CGThumbnailListItem_o *)&v14->servantEquipSortInfo, (int32_t)v13, v15, v16);
  v17 = WarehouseListViewManager_TypeInfo->static_fields->SORT_SAVE_KEY;
  v31 = 3;
  v18 = System_Int32__ToString((int32_t)&v31, 0);
  v19 = System_String__Concat_63518544(v17, v18, 0);
  v20 = (ListViewSort_o *)sub_1C32E6C(ListViewSort_TypeInfo);
  ListViewSort___ctor_43736460(v20, v19, 3, 0, 0);
  v21 = WarehouseListViewManager_TypeInfo->static_fields;
  v21->servantWarehouseSortInfo = v20;
  sub_1C32BC4((CGThumbnailListItem_o *)&v21->servantWarehouseSortInfo, (int32_t)v20, v22, v23);
  v24 = WarehouseListViewManager_TypeInfo->static_fields->SORT_SAVE_KEY;
  v31 = 4;
  v25 = System_Int32__ToString((int32_t)&v31, 0);
  v26 = System_String__Concat_63518544(v24, v25, 0);
  v27 = (ListViewSort_o *)sub_1C32E6C(ListViewSort_TypeInfo);
  ListViewSort___ctor_43736460(v27, v26, 3, 0, 0);
  v28 = WarehouseListViewManager_TypeInfo->static_fields;
  v28->servantEquipWarehouseSortInfo = v27;
  sub_1C32BC4((CGThumbnailListItem_o *)&v28->servantEquipWarehouseSortInfo, (int32_t)v27, v29, v30);
}


void WarehouseListViewManager___ctor(WarehouseListViewManager_o *this, const MethodInfo *method)
{
  ListViewManager___ctor((ListViewManager_o *)this, 0);
}


void WarehouseListViewManager__CancelDragEnd(WarehouseListViewManager_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  int32_t dragStartIndex; // w20
  int32_t dragEndIndex; // w21

  dragStartIndex = this->fields.dragStartIndex;
  if ( (dragStartIndex & 0x80000000) == 0 )
  {
    dragEndIndex = this->fields.dragEndIndex;
    if ( dragStartIndex <= dragEndIndex )
    {
      do
        WarehouseListViewManager__CancelDragSelect(this, dragStartIndex++, v2);
      while ( dragStartIndex <= this->fields.dragEndIndex );
    }
    else
    {
      do
        WarehouseListViewManager__CancelDragSelect(this, dragEndIndex++, v2);
      while ( dragEndIndex <= this->fields.dragStartIndex );
    }
  }
  WarehouseListViewManager__RefrashListDisp(this, method);
  *(_OWORD *)&this->fields.dragSelectSum = xmmword_C0CE30;
  this->fields.isDragSelect = 1;
  this->fields.dragSelectFriendShipSum = 0;
}


void WarehouseListViewManager__CancelDragSelect(
        WarehouseListViewManager_o *this,
        int32_t index,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *itemSortList; // x0
  __int64 naturalAligment; // x9
  WarehouseListViewManager_o *v7; // x0
  const MethodInfo *v8; // x1

  if ( (byte_4C357B6 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_1C32C20(&WarehouseListViewItem_TypeInfo);
    byte_4C357B6 = 1;
  }
  itemSortList = (System_Collections_Generic_List_object__o *)this->fields.itemSortList;
  if ( !itemSortList
    || (itemSortList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                      itemSortList,
                                                                      index,
                                                                      (const MethodInfo_37984EC *)Method_System_Collections_Generic_List_ListViewItem__get_Item__)) == 0 )
  {
    sub_1C32E7C(itemSortList);
  }
  naturalAligment = WarehouseListViewItem_TypeInfo->_2.naturalAligment;
  if ( itemSortList->klass->_2.naturalAligment >= (unsigned int)naturalAligment
    && (WarehouseListViewItem_c *)itemSortList->klass->_2.typeHierarchy[naturalAligment - 1] == WarehouseListViewItem_TypeInfo )
  {
    HIDWORD(itemSortList[6].fields._items) = -1;
  }
  else
  {
    sub_1C3313C(itemSortList);
    WarehouseListViewManager__GetModeKind(v7, v8);
  }
}


void WarehouseListViewManager__ChangeIconScale(WarehouseListViewManager_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  unsigned int scaleType; // w8
  struct ListViewItemSeed_o *smallSizeSeed; // x1
  WarehouseListViewManager_o *v7; // x0
  int v8; // w8
  struct ListViewItemSeed_o **p_seed; // x0
  ListViewSort_o *sort; // x0
  _BOOL8 v11; // x0
  ListViewItem_o *current; // x20
  __int64 naturalAligment; // x9
  Il2CppClass *klass; // x21
  ListViewObject_o *viewObject; // x0
  const MethodInfo *v16; // x2
  System_Collections_Generic_List_Enumerator_object__o v17; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v18; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4C357AE & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__);
    sub_1C32C20(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&WarehouseListViewItem_TypeInfo);
    byte_4C357AE = 1;
  }
  memset(&v18, 0, sizeof(v18));
  scaleType = this->fields.scaleType;
  if ( scaleType < 2 )
  {
    smallSizeSeed = this->fields.smallSizeSeed;
    v7 = this;
    v8 = 2;
  }
  else if ( scaleType == 2 )
  {
    smallSizeSeed = this->fields.extremelySmallSizeSeed;
    v7 = this;
    v8 = 3;
  }
  else
  {
    if ( scaleType != 3 )
      goto LABEL_10;
    smallSizeSeed = this->fields.normalSizeSeed;
    v7 = this;
    v8 = 1;
  }
  v7->fields.seed = smallSizeSeed;
  p_seed = &v7->fields.seed;
  *((_DWORD *)p_seed + 84) = v8;
  sub_1C32BC4((CGThumbnailListItem_o *)p_seed, (int32_t)smallSizeSeed, v2, v3);
LABEL_10:
  sort = this->fields.sort;
  if ( !sort )
    goto LABEL_28;
  sort->fields.iconScaleKind = this->fields.scaleType;
  ListViewSort__Save(sort, 0);
  sort = (ListViewSort_o *)this->fields.itemList;
  if ( !sort )
    goto LABEL_28;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v17,
    (System_Collections_Generic_List_object__o *)sort,
    (const MethodInfo_37992B4 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  v18 = v17;
  while ( 1 )
  {
    v11 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v18,
            (const MethodInfo_3522FA8 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    if ( !v11 )
      break;
    current = (ListViewItem_o *)v18.fields._current;
    if ( !v18.fields._current )
      goto LABEL_26;
    naturalAligment = WarehouseListViewItem_TypeInfo->_2.naturalAligment;
    if ( v18.fields._current->klass->_2.naturalAligment < (unsigned int)naturalAligment
      || (WarehouseListViewItem_c *)v18.fields._current->klass->_2.typeHierarchy[naturalAligment - 1] != WarehouseListViewItem_TypeInfo )
    {
      sub_1C3313C(v18.fields._current);
LABEL_26:
      sub_1C32E7C(v11);
    }
    klass = v18.fields._current[7].klass;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)klass, 0, 0) )
    {
      viewObject = current->fields.viewObject;
      if ( !viewObject )
        sub_1C32E7C(0);
      ListViewObject__SetItemSeed(viewObject, current, this->fields.seed, 0);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v18,
    (const MethodInfo_3522FA4 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
  WarehouseListViewManager__SetMode_38318368(this, 2, v16);
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0);
  sort = (ListViewSort_o *)this->fields.scrollBar;
  if ( !sort
    || (sort = (ListViewSort_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)sort, 0)) == 0 )
  {
LABEL_28:
    sub_1C32E7C(sort);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)sort, 1, 0);
}


void WarehouseListViewManager__ChangeSellEnableRestCnt(
        WarehouseListViewManager_o *this,
        bool isPlus,
        WarehouseListViewItem_o *item,
        const MethodInfo *method)
{
  WarehouseListViewManager_o *v5; // x19
  int32_t sellEnableRestCnt; // w8
  int32_t v8; // w8

  if ( !this->fields.kind )
  {
    if ( !item || (v5 = this, (this = (WarehouseListViewManager_o *)item->fields.servantEntity) == 0) )
      sub_1C32E7C(this);
    if ( ServantEntity__get_IsOrganization((ServantEntity_o *)this, 0) && !item->fields.attribute )
    {
      sellEnableRestCnt = v5->fields.sellEnableRestCnt;
      if ( isPlus )
        v8 = sellEnableRestCnt + 1;
      else
        v8 = sellEnableRestCnt - 1;
      v5->fields.sellEnableRestCnt = v8;
    }
  }
}


void WarehouseListViewManager__ChangeSortKindDisp(WarehouseListViewManager_o *this, const MethodInfo *method)
{
  ((void (__fastcall *)(WarehouseListViewManager_o *, const MethodInfo *))this->klass->vtable._5_SetSortButtonImage.methodPtr)(
    this,
    this->klass->vtable._5_SetSortButtonImage.method);
}


void WarehouseListViewManager__CreateList(
        WarehouseListViewManager_o *this,
        int32_t kind,
        EventUpValSetupInfo_o *setupInfo,
        const MethodInfo *method)
{
  int64_t Instance; // x0
  Il2CppObject *MasterData_object; // x24
  Il2CppObject *v9; // x25
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  System_String_o *v12; // x19
  WarehouseListViewManager_c *v13; // x0
  struct ListViewSort_o *servantSortInfo; // x1
  __int64 *v15; // x8
  int64_t v16; // x22
  struct ListViewSort_o *v17; // x8
  WarehouseListViewManager_c *v18; // x0
  struct ListViewSort_o *servantEquipSortInfo; // x1
  WarehouseListViewManager_c *v20; // x0
  struct ListViewSort_o *servantWarehouseSortInfo; // x1
  WarehouseListViewManager_c *v22; // x0
  struct ListViewSort_o *servantEquipWarehouseSortInfo; // x1
  _BOOL4 isQuestStart; // w8
  int v25; // w9
  struct ListViewSort_BonusFilterInfo_array *AlignedBonusFilter; // x0
  int32_t v27; // w2
  const MethodInfo *v28; // x3
  struct ListViewSort_o *sort; // x20
  struct ListViewSort_BonusFilterInfo_array *v30; // x0
  int32_t v31; // w2
  const MethodInfo *v32; // x3
  struct ListViewSort_o *v33; // x8
  struct ListViewSort_o *v34; // x8
  int32_t v35; // w2
  const MethodInfo *v36; // x3
  struct ListViewSort_o *v37; // x8
  unsigned int iconScaleKind; // w8
  struct ListViewItemSeed_o *normalSizeSeed; // x1
  Il2CppObject *v40; // x24
  int v41; // w8
  __int64 v42; // x25
  int64_t v43; // x20
  __int64 v44; // x8
  __int128 v45; // q0
  EventUpValSetupInfo_o *v46; // x19
  __int64 v47; // x21
  System_Int64_array *v48; // x23
  System_Int64_array *v49; // x29
  UserServantEntity_o *v50; // x24
  int64_t v51; // x27
  WarehouseListViewItem_o *v52; // x0
  bool v53; // w7
  Il2CppObject *v54; // x26
  int32_t v55; // w2
  const MethodInfo *v56; // x3
  __int64 v57; // x8
  _QWORD *v58; // x9
  __int64 v59; // x10
  __int64 v60; // x8
  const MethodInfo *v61; // x3
  UILabel_o *emptyMessageLabel; // x20
  const MethodInfo *v63; // x1
  const MethodInfo *v64; // [xsp+0h] [xbp-E0h]
  System_String_o *v65; // [xsp+8h] [xbp-D8h]
  System_Int64_array *recoverySvtList; // [xsp+10h] [xbp-D0h]
  int64_t v67; // [xsp+18h] [xbp-C8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v68; // [xsp+20h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v69; // [xsp+40h] [xbp-A0h]
  int32_t eventId; // [xsp+6Ch] [xbp-74h] BYREF
  System_Int64_array *equipIdList; // [xsp+70h] [xbp-70h] BYREF
  System_Int64_array *svtIdList; // [xsp+78h] [xbp-68h] BYREF

  if ( (byte_4C35791 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMasterData_EventMaster___);
    sub_1C32C20(&Method_DataManager_GetMasterData_UserDeckMaster___);
    sub_1C32C20(&Method_DataManager_GetMasterData_UserEventServantFatigueMaster___);
    sub_1C32C20(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1C32C20(&Method_DataManager_GetMasterData_UserServantStorageMaster___);
    sub_1C32C20(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    sub_1C32C20(&LocalizationManager_TypeInfo);
    sub_1C32C20(&NetworkManager_TypeInfo);
    sub_1C32C20(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C32C20(&WarehouseListViewItem_TypeInfo);
    sub_1C32C20(&WarehouseListViewManager_TypeInfo);
    sub_1C32C20(&StringLiteral_11607/*"SERVANT_EQUIP_EMPTY"*/);
    sub_1C32C20(&StringLiteral_11602/*"SERVANT_EMPTY"*/);
    sub_1C32C20(&StringLiteral_11635/*"SERVANT_EQUIP_WAREHOUSE_EMPTY"*/);
    sub_1C32C20(&StringLiteral_11807/*"SERVANT_SORT_FILTER_RESULT_EMPTY"*/);
    sub_1C32C20(&StringLiteral_12008/*"SERVANT_WAREHOUSE_EMPTY"*/);
    sub_1C32C20(&StringLiteral_1/*""*/);
    byte_4C35791 = 1;
  }
  equipIdList = 0;
  svtIdList = 0;
  eventId = 0;
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_83;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_UserServantMaster___);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_83;
  v9 = DataManager__GetMasterData_object_(
         (DataManager_o *)Instance,
         (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_UserServantStorageMaster___);
  Instance = (int64_t)UserGameMaster__getSelfUserGame(0);
  v12 = (System_String_o *)StringLiteral_1/*""*/;
  v67 = Instance;
  this->fields.kind = kind;
  switch ( kind )
  {
    case 0:
      v13 = WarehouseListViewManager_TypeInfo;
      if ( !WarehouseListViewManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(WarehouseListViewManager_TypeInfo);
        v13 = WarehouseListViewManager_TypeInfo;
      }
      servantSortInfo = v13->static_fields->servantSortInfo;
      this->fields.sort = servantSortInfo;
      sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.sort, (int32_t)servantSortInfo, v10, v11);
      Instance = (int64_t)this->fields.sort;
      if ( !Instance )
        goto LABEL_83;
      *(_DWORD *)(Instance + 128) = 0;
      ListViewSort__Load((ListViewSort_o *)Instance, 0);
      if ( !MasterData_object )
        goto LABEL_83;
      Instance = (int64_t)UserServantMaster__getKeepServantList((UserServantMaster_o *)MasterData_object, 0);
      v15 = &StringLiteral_11602/*"SERVANT_EMPTY"*/;
      break;
    case 1:
      v18 = WarehouseListViewManager_TypeInfo;
      if ( !WarehouseListViewManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(WarehouseListViewManager_TypeInfo);
        v18 = WarehouseListViewManager_TypeInfo;
      }
      servantEquipSortInfo = v18->static_fields->servantEquipSortInfo;
      this->fields.sort = servantEquipSortInfo;
      sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.sort, (int32_t)servantEquipSortInfo, v10, v11);
      Instance = (int64_t)this->fields.sort;
      if ( !Instance )
        goto LABEL_83;
      *(_DWORD *)(Instance + 128) = 1;
      ListViewSort__Load((ListViewSort_o *)Instance, 0);
      if ( !MasterData_object )
        goto LABEL_83;
      Instance = (int64_t)UserServantMaster__getServantEquipList((UserServantMaster_o *)MasterData_object, 0);
      v15 = &StringLiteral_11607/*"SERVANT_EQUIP_EMPTY"*/;
      break;
    case 2:
      v20 = WarehouseListViewManager_TypeInfo;
      if ( !WarehouseListViewManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(WarehouseListViewManager_TypeInfo);
        v20 = WarehouseListViewManager_TypeInfo;
      }
      servantWarehouseSortInfo = v20->static_fields->servantWarehouseSortInfo;
      this->fields.sort = servantWarehouseSortInfo;
      sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.sort, (int32_t)servantWarehouseSortInfo, v10, v11);
      Instance = (int64_t)this->fields.sort;
      if ( !Instance )
        goto LABEL_83;
      *(_DWORD *)(Instance + 128) = 0;
      ListViewSort__Load((ListViewSort_o *)Instance, 0);
      if ( !v9 )
        goto LABEL_83;
      Instance = (int64_t)UserServantStorageMaster__getKeepServantList((UserServantStorageMaster_o *)v9, 0);
      v15 = &StringLiteral_12008/*"SERVANT_WAREHOUSE_EMPTY"*/;
      break;
    case 3:
      v22 = WarehouseListViewManager_TypeInfo;
      if ( !WarehouseListViewManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(WarehouseListViewManager_TypeInfo);
        v22 = WarehouseListViewManager_TypeInfo;
      }
      servantEquipWarehouseSortInfo = v22->static_fields->servantEquipWarehouseSortInfo;
      this->fields.sort = servantEquipWarehouseSortInfo;
      sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.sort, (int32_t)servantEquipWarehouseSortInfo, v10, v11);
      Instance = (int64_t)this->fields.sort;
      if ( !Instance )
        goto LABEL_83;
      *(_DWORD *)(Instance + 128) = 1;
      ListViewSort__Load((ListViewSort_o *)Instance, 0);
      if ( !v9 )
        goto LABEL_83;
      Instance = (int64_t)UserServantStorageMaster__getServantEquipList((UserServantStorageMaster_o *)v9, 0);
      v15 = &StringLiteral_11635/*"SERVANT_EQUIP_WAREHOUSE_EMPTY"*/;
      break;
    default:
      v16 = 0;
      if ( !setupInfo )
        goto LABEL_12;
      goto LABEL_30;
  }
  v12 = (System_String_o *)*v15;
  v16 = Instance;
  if ( setupInfo )
  {
LABEL_30:
    isQuestStart = setupInfo->fields.isQuestStart;
    v25 = this->fields.kind | 2;
    this->fields.isQuestStart = isQuestStart;
    if ( v25 == 2 )
    {
      Instance = (int64_t)this->fields.sort;
      if ( !Instance )
        goto LABEL_83;
      AlignedBonusFilter = ListViewSort__GetAlignedBonusFilter(
                             (ListViewSort_o *)Instance,
                             0,
                             setupInfo->fields.servantFilterEventCampaignIds,
                             setupInfo->fields.servantFilterEventIds,
                             0,
                             setupInfo->fields.servantFilterIds,
                             isQuestStart,
                             0);
      this->fields.alignedBonusFilterInfos = AlignedBonusFilter;
      sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.alignedBonusFilterInfos, (int32_t)AlignedBonusFilter, v27, v28);
      sort = this->fields.sort;
      Instance = BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)this->fields.alignedBonusFilterInfos, 0);
      if ( !sort )
        goto LABEL_83;
      sort->fields.isBonusKind = (Instance & 1) == 0;
    }
    else
    {
      Instance = (int64_t)this->fields.sort;
      if ( !Instance )
        goto LABEL_83;
      v30 = ListViewSort__GetAlignedBonusFilter(
              (ListViewSort_o *)Instance,
              0,
              setupInfo->fields.servantEquipFilterEventCampaignIds,
              setupInfo->fields.servantEquipFilterEventIds,
              0,
              0,
              isQuestStart,
              0);
      this->fields.alignedBonusFilterInfos = v30;
      sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.alignedBonusFilterInfos, (int32_t)v30, v31, v32);
      v33 = this->fields.sort;
      if ( !v33 )
        goto LABEL_83;
      v33->fields.isBonusKind = 1;
    }
  }
  else
  {
LABEL_12:
    v17 = this->fields.sort;
    this->fields.isQuestStart = 1;
    if ( !v17 )
      goto LABEL_83;
    v17->fields.isBonusKind = 0;
    this->fields.alignedBonusFilterInfos = 0;
    sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.alignedBonusFilterInfos, 0, v10, v11);
  }
  Instance = (int64_t)this->fields.bonusFilterKindButton;
  if ( !Instance )
    goto LABEL_83;
  Instance = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
  v34 = this->fields.sort;
  if ( !v34 )
    goto LABEL_83;
  if ( !Instance )
    goto LABEL_83;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, v34->fields.isBonusKind, 0);
  v37 = this->fields.sort;
  if ( !v37 )
    goto LABEL_83;
  iconScaleKind = v37->fields.iconScaleKind;
  this->fields.scaleType = iconScaleKind;
  if ( iconScaleKind < 2 )
  {
    normalSizeSeed = this->fields.normalSizeSeed;
  }
  else if ( iconScaleKind == 2 )
  {
    normalSizeSeed = this->fields.smallSizeSeed;
  }
  else
  {
    if ( iconScaleKind != 3 )
      goto LABEL_48;
    normalSizeSeed = this->fields.extremelySmallSizeSeed;
  }
  this->fields.seed = normalSizeSeed;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.seed, (int32_t)normalSizeSeed, v35, v36);
LABEL_48:
  *(_QWORD *)&this->fields.sellEnableRestCnt = 0;
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0);
  *(_OWORD *)&this->fields.dragSelectSum = xmmword_C0CE30;
  this->fields.isDragSelect = 1;
  this->fields.dragSelectFriendShipSum = 0;
  if ( !v16 )
    goto LABEL_79;
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_83;
  v40 = DataManager__GetMasterData_object_(
          (DataManager_o *)Instance,
          (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_UserDeckMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4C31812 )
  {
    sub_1C32C20(&NetworkManager_TypeInfo);
    byte_4C31812 = 1;
  }
  Instance = (int64_t)NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Instance = (int64_t)NetworkManager_TypeInfo;
  }
  if ( !v40
    || (UserDeckMaster__getPartyList(
          (UserDeckMaster_o *)v40,
          &svtIdList,
          &equipIdList,
          *(_QWORD *)(*(_QWORD *)(Instance + 184) + 64LL),
          0),
        (Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0)
    || (Instance = (int64_t)DataManager__GetMasterData_object_(
                              (DataManager_o *)Instance,
                              (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_EventMaster___)) == 0 )
  {
LABEL_83:
    sub_1C32E7C(Instance);
  }
  Instance = EventMaster__IsEnableFatigueEvent((EventMaster_o *)Instance, &eventId, 0);
  recoverySvtList = 0;
  if ( (Instance & 1) != 0 )
  {
    Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_83;
    Instance = (int64_t)DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_UserEventServantFatigueMaster___);
    if ( !Instance )
      goto LABEL_83;
    Instance = (int64_t)UserEventServantFatigueMaster__GetRecoverySvtIdList(
                          (UserEventServantFatigueMaster_o *)Instance,
                          eventId,
                          0);
    recoverySvtList = (System_Int64_array *)Instance;
  }
  v41 = *(_DWORD *)(v16 + 24);
  if ( v41 >= 1 )
  {
    v42 = 0;
    v43 = v16 + 32;
    v65 = v12;
    do
    {
      if ( (unsigned int)v42 >= v41 )
        goto LABEL_84;
      v44 = *(_QWORD *)(v43 + 8 * v42);
      if ( !v44 )
        goto LABEL_83;
      v45 = *(_OWORD *)(v44 + 32);
      v46 = setupInfo;
      *(_OWORD *)&v69.fields.currentCryptoKey = *(_OWORD *)(v44 + 16);
      *(_OWORD *)&v69.fields.fakeValue = v45;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v68 = v69;
      Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48891308(&v68, 0);
      if ( (unsigned int)v42 >= *(_DWORD *)(v16 + 24) )
LABEL_84:
        sub_1C32E84(Instance);
      if ( !v67 )
        goto LABEL_83;
      v47 = *(_QWORD *)(v67 + 120);
      v48 = equipIdList;
      v49 = svtIdList;
      v50 = *(UserServantEntity_o **)(v43 + 8 * v42);
      v51 = Instance;
      v52 = (WarehouseListViewItem_o *)sub_1C32E6C(WarehouseListViewItem_TypeInfo);
      v53 = v51 == v47;
      v54 = (Il2CppObject *)v52;
      setupInfo = v46;
      WarehouseListViewItem___ctor(v52, v42, v50, v46, v49, v48, recoverySvtList, v53, v64);
      Instance = (int64_t)this->fields.itemList;
      if ( !Instance )
        goto LABEL_83;
      v57 = *(_QWORD *)(Instance + 16);
      v58 = Method_System_Collections_Generic_List_ListViewItem__Add__;
      ++*(_DWORD *)(Instance + 28);
      if ( !v57 )
        goto LABEL_83;
      v59 = *(int *)(Instance + 24);
      if ( (unsigned int)v59 >= *(_DWORD *)(v57 + 24) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)Instance,
          v54,
          *(const MethodInfo_37987BC **)(*(_QWORD *)(v58[4] + 192LL) + 112LL));
      }
      else
      {
        v60 = v57 + 8 * v59;
        *(_DWORD *)(Instance + 24) = v59 + 1;
        *(_QWORD *)(v60 + 32) = v54;
        sub_1C32BC4((CGThumbnailListItem_o *)(v60 + 32), (int32_t)v54, v55, v56);
      }
      WarehouseListViewManager__ChangeSellEnableRestCnt(this, 1, (WarehouseListViewItem_o *)v54, v61);
      v41 = *(_DWORD *)(v16 + 24);
      ++v42;
    }
    while ( (int)v42 < v41 );
    v12 = v65;
    if ( (int)v42 > 0 )
      v12 = (System_String_o *)StringLiteral_11807/*"SERVANT_SORT_FILTER_RESULT_EMPTY"*/;
  }
LABEL_79:
  emptyMessageLabel = this->fields.emptyMessageLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  Instance = (int64_t)LocalizationManager__Get(v12, 0);
  if ( !emptyMessageLabel )
    goto LABEL_83;
  UILabel__set_text(emptyMessageLabel, (System_String_o *)Instance, 0);
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0);
  WarehouseListViewManager__SetFilterButtonImage(this, v63);
  ListViewManager__CheckScroll((ListViewManager_o *)this, this->fields.scaleType, 0);
}


void WarehouseListViewManager__DecideDragSelect(
        WarehouseListViewManager_o *this,
        int32_t index,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *itemSortList; // x0
  WarehouseListViewItem_o *v6; // x20
  __int64 naturalAligment; // x9
  _BOOL4 isDragSelect; // w21
  const MethodInfo *v9; // x2
  const MethodInfo *v10; // x3
  const MethodInfo *v11; // x3
  struct WarehouseListManager_o *parentManager; // x8
  struct WarehouseListViewManager_o *baseListViewManager; // x9
  int32_t selectSum; // w9
  WarehouseListViewManager_o *v15; // x0
  bool v16; // w1
  struct WarehouseListManager_o *v17; // x8
  struct WarehouseListViewManager_o *v18; // x9
  WarehouseListViewManager_o *v19; // x0
  const MethodInfo *v20; // x1
  int32_t friendShipSum[2]; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4C357B5 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_1C32C20(&WarehouseListViewItem_TypeInfo);
    byte_4C357B5 = 1;
  }
  *(_QWORD *)friendShipSum = 0;
  itemSortList = (System_Collections_Generic_List_object__o *)this->fields.itemSortList;
  if ( !itemSortList )
    goto LABEL_24;
  itemSortList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                itemSortList,
                                                                index,
                                                                (const MethodInfo_37984EC *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
  if ( !itemSortList )
    goto LABEL_24;
  v6 = (WarehouseListViewItem_o *)itemSortList;
  naturalAligment = WarehouseListViewItem_TypeInfo->_2.naturalAligment;
  if ( itemSortList->klass->_2.naturalAligment >= (unsigned int)naturalAligment
    && (WarehouseListViewItem_c *)itemSortList->klass->_2.typeHierarchy[naturalAligment - 1] == WarehouseListViewItem_TypeInfo )
  {
    if ( SHIDWORD(itemSortList[6].fields._items) >= 1 )
    {
      isDragSelect = this->fields.isDragSelect;
      itemSortList = (System_Collections_Generic_List_object__o *)ListViewItem__get_IsSelect(
                                                                    (ListViewItem_o *)itemSortList,
                                                                    0);
      if ( isDragSelect )
      {
        if ( ((unsigned __int8)itemSortList & 1) == 0 )
        {
          itemSortList = (System_Collections_Generic_List_object__o *)this->fields.parentManager;
          if ( itemSortList )
          {
            WarehouseListManager__GetSelectItemNum(
              (WarehouseListManager_o *)itemSortList,
              &friendShipSum[1],
              friendShipSum,
              v10);
            parentManager = this->fields.parentManager;
            if ( parentManager )
            {
              if ( friendShipSum[1] >= parentManager->fields.sendMax && !v6->fields.isFriendShipSvtEq )
                goto LABEL_23;
              v6->fields.selectNum = parentManager->fields.totalSum;
              ++this->fields.selectSum;
              baseListViewManager = parentManager->fields.baseListViewManager;
              if ( baseListViewManager )
              {
                selectSum = baseListViewManager->fields.selectSum;
                v15 = this;
                v16 = 0;
LABEL_22:
                parentManager->fields.totalSum = selectSum;
                WarehouseListViewManager__ChangeSellEnableRestCnt(v15, v16, v6, v11);
                goto LABEL_23;
              }
            }
          }
          goto LABEL_24;
        }
      }
      else if ( ((unsigned __int8)itemSortList & 1) != 0 )
      {
        v17 = this->fields.parentManager;
        if ( v17 )
        {
          itemSortList = (System_Collections_Generic_List_object__o *)v17->fields.baseListViewManager;
          if ( itemSortList )
          {
            WarehouseListViewManager__DecrementNumber(
              (WarehouseListViewManager_o *)itemSortList,
              v6->fields.selectNum,
              v9);
            ListViewItem__set_IsSelect((ListViewItem_o *)v6, 0, 0);
            parentManager = this->fields.parentManager;
            --this->fields.selectSum;
            if ( parentManager )
            {
              v18 = parentManager->fields.baseListViewManager;
              if ( v18 )
              {
                selectSum = v18->fields.selectSum;
                v16 = 1;
                v15 = this;
                goto LABEL_22;
              }
            }
          }
        }
LABEL_24:
        sub_1C32E7C(itemSortList);
      }
    }
LABEL_23:
    v6->fields.dragSelectNum = -1;
    return;
  }
  sub_1C3313C(itemSortList);
  WarehouseListViewManager__CancelDragEnd(v19, v20);
}


void WarehouseListViewManager__DecrementNumber(
        WarehouseListViewManager_o *this,
        int32_t selectNum,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x0
  _BOOL8 v6; // x0
  int32_t v7; // w9
  System_Collections_Generic_List_Enumerator_object__o v8; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4C357A2 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__);
    sub_1C32C20(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    byte_4C357A2 = 1;
  }
  memset(&v8, 0, sizeof(v8));
  itemList = this->fields.itemList;
  if ( !itemList )
    sub_1C32E7C(0);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v8,
    (System_Collections_Generic_List_object__o *)itemList,
    (const MethodInfo_37992B4 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  while ( 1 )
  {
    v6 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v8,
           (const MethodInfo_3522FA8 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    if ( !v6 )
      break;
    if ( !v8.fields._current )
      sub_1C32E7C(v6);
    v7 = *(_DWORD *)((char *)&v8.fields._current->klass + (unsigned __int64)&word_10);
    if ( v7 > selectNum )
      *(_DWORD *)((char *)&v8.fields._current->klass + (unsigned __int64)&word_10) = v7 - 1;
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v8,
    (const MethodInfo_3522FA4 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
}


void WarehouseListViewManager__DeleteContinueData(const MethodInfo *method)
{
  WarehouseListViewManager_c *v1; // x0
  ListViewSort_o *servantSortInfo; // x0

  if ( (byte_4C3578D & 1) == 0 )
  {
    sub_1C32C20(&WarehouseListViewManager_TypeInfo);
    byte_4C3578D = 1;
  }
  v1 = WarehouseListViewManager_TypeInfo;
  if ( !WarehouseListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarehouseListViewManager_TypeInfo);
    v1 = WarehouseListViewManager_TypeInfo;
  }
  servantSortInfo = v1->static_fields->servantSortInfo;
  if ( !servantSortInfo
    || (ListViewSort__DeleteContinueData(servantSortInfo, 0),
        (servantSortInfo = WarehouseListViewManager_TypeInfo->static_fields->servantEquipSortInfo) == 0)
    || (ListViewSort__DeleteContinueData(servantSortInfo, 0),
        (servantSortInfo = WarehouseListViewManager_TypeInfo->static_fields->servantWarehouseSortInfo) == 0)
    || (ListViewSort__DeleteContinueData(servantSortInfo, 0),
        (servantSortInfo = WarehouseListViewManager_TypeInfo->static_fields->servantEquipWarehouseSortInfo) == 0) )
  {
    sub_1C32E7C(servantSortInfo);
  }
  ListViewSort__DeleteContinueData(servantSortInfo, 0);
}


void WarehouseListViewManager__DestroyList(WarehouseListViewManager_o *this, const MethodInfo *method)
{
  WarehouseListViewManager_o *v2; // x0
  const MethodInfo *v3; // x1

  ListViewManager__DestroyList((ListViewManager_o *)this, 0);
  WarehouseListViewManager__SaveSortInfo(v2, v3);
}


void WarehouseListViewManager__EndCloseSelectFilterKind(WarehouseListViewManager_o *this, const MethodInfo *method)
{
  ;
}


void WarehouseListViewManager__EndSelectFilterKind(
        WarehouseListViewManager_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x1
  Il2CppObject *Instance; // x20
  System_Action_o *v7; // x21
  __int64 v8; // x0

  if ( (byte_4C357A9 & 1) == 0 )
  {
    sub_1C32C20(&System_Action_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C32C20(&Method_WarehouseListViewManager_EndCloseSelectFilterKind__);
    byte_4C357A9 = 1;
  }
  if ( isDecide )
  {
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0);
    WarehouseListViewManager__SetFilterButtonImage(this, v5);
    ListViewManager__CheckScroll((ListViewManager_o *)this, this->fields.scaleType, 0);
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v7 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
  System_Action___ctor(v7, (Il2CppObject *)this, Method_WarehouseListViewManager_EndCloseSelectFilterKind__, 0);
  if ( !Instance )
    sub_1C32E7C(v8);
  CommonUI__CloseServantFilterSelectMenu((CommonUI_o *)Instance, v7, 0);
}


void WarehouseListViewManager__EndSelectSortKind(
        WarehouseListViewManager_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0

  if ( (byte_4C357A7 & 1) == 0 )
  {
    sub_1C32C20(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4C357A7 = 1;
  }
  if ( isDecide )
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1C32E7C(0);
  CommonUI__CloseServantSortSelectMenu((CommonUI_o *)Instance, 0, 0);
}


int64_t WarehouseListViewManager__GetAmountSortValue(
        WarehouseListViewManager_o *this,
        int32_t svtId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *itemList; // x0
  int size; // w23
  int32_t v7; // w22
  int64_t v8; // x21
  __int64 naturalAligment; // x10

  if ( (byte_4C357AC & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_1C32C20(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_1C32C20(&WarehouseListViewItem_TypeInfo);
    byte_4C357AC = 1;
  }
  itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
  if ( !itemList )
    goto LABEL_13;
  size = itemList->fields._size;
  if ( size >= 1 )
  {
    v7 = 0;
    v8 = 0;
    do
    {
      itemList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                itemList,
                                                                v7,
                                                                (const MethodInfo_37984EC *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
      if ( !itemList )
        break;
      naturalAligment = WarehouseListViewItem_TypeInfo->_2.naturalAligment;
      if ( itemList->klass->_2.naturalAligment < (unsigned int)naturalAligment
        || (WarehouseListViewItem_c *)itemList->klass->_2.typeHierarchy[naturalAligment - 1] != WarehouseListViewItem_TypeInfo )
      {
        break;
      }
      ++v7;
      if ( LODWORD(itemList[3].fields._items) == svtId )
        ++v8;
      if ( size == v7 )
        return v8;
      itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
    }
    while ( itemList );
LABEL_13:
    sub_1C32E7C(itemList);
  }
  return 0;
}


bool WarehouseListViewManager__GetDragSelect(WarehouseListViewManager_o *this, const MethodInfo *method)
{
  return this->fields.isDragSelect;
}


WarehouseListViewItem_o *WarehouseListViewManager__GetItem(
        WarehouseListViewManager_o *this,
        int32_t index,
        const MethodInfo *method)
{
  WarehouseListViewItem_o *result; // x0
  __int64 naturalAligment; // x10

  if ( (byte_4C357B8 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_1C32C20(&WarehouseListViewItem_TypeInfo);
    byte_4C357B8 = 1;
  }
  result = (WarehouseListViewItem_o *)this->fields.itemList;
  if ( result )
  {
    result = (WarehouseListViewItem_o *)System_Collections_Generic_List_object___get_Item(
                                          (System_Collections_Generic_List_object__o *)result,
                                          index,
                                          (const MethodInfo_37984EC *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    if ( result )
    {
      naturalAligment = WarehouseListViewItem_TypeInfo->_2.naturalAligment;
      if ( result->klass->_2.naturalAligment >= (unsigned int)naturalAligment )
      {
        if ( (WarehouseListViewItem_c *)result->klass->_2.typeHierarchy[naturalAligment - 1] != WarehouseListViewItem_TypeInfo )
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


int32_t WarehouseListViewManager__GetModeKind(WarehouseListViewManager_o *this, const MethodInfo *method)
{
  struct WarehouseListMenu_o *warehouseListMenu; // x8

  warehouseListMenu = this->fields.warehouseListMenu;
  if ( !warehouseListMenu )
    sub_1C32E7C(this);
  return warehouseListMenu->fields.modeKind;
}


System_String_o *WarehouseListViewManager__GetScaleButtonSpriteName(
        WarehouseListViewManager_o *this,
        const MethodInfo *method)
{
  ListViewSort_o *sort; // x0

  sort = this->fields.sort;
  if ( !sort )
    sub_1C32E7C(0);
  return ListViewSort__GetScaleKindSpriteName(sort, this->fields.scaleType, 0);
}


void WarehouseListViewManager__GetSelectItemNum(
        WarehouseListViewManager_o *this,
        int32_t *normalSum,
        int32_t *friendShipSum,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x0
  _BOOL8 v8; // x0
  Il2CppObject *current; // x21
  __int64 naturalAligment; // x9
  int32_t *v11; // x8
  System_Collections_Generic_List_Enumerator_object__o v12; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v13; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4C357B7 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__);
    sub_1C32C20(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    sub_1C32C20(&WarehouseListViewItem_TypeInfo);
    byte_4C357B7 = 1;
  }
  memset(&v13, 0, sizeof(v13));
  *normalSum = 0;
  *friendShipSum = 0;
  itemList = this->fields.itemList;
  if ( !itemList )
    sub_1C32E7C(0);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v12,
    (System_Collections_Generic_List_object__o *)itemList,
    (const MethodInfo_37992B4 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  v13 = v12;
  while ( 1 )
  {
    v8 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v13,
           (const MethodInfo_3522FA8 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    if ( !v8 )
      break;
    current = v13.fields._current;
    if ( !v13.fields._current )
      goto LABEL_16;
    naturalAligment = WarehouseListViewItem_TypeInfo->_2.naturalAligment;
    if ( v13.fields._current->klass->_2.naturalAligment < (unsigned int)naturalAligment
      || (WarehouseListViewItem_c *)v13.fields._current->klass->_2.typeHierarchy[naturalAligment - 1] != WarehouseListViewItem_TypeInfo )
    {
      sub_1C3313C(v13.fields._current);
LABEL_16:
      sub_1C32E7C(v8);
    }
    if ( ListViewItem__get_IsSelect((ListViewItem_o *)v13.fields._current, 0) )
    {
      if ( BYTE2(current[11].monitor) )
        v11 = friendShipSum;
      else
        v11 = normalSum;
      ++*v11;
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v13,
    (const MethodInfo_3522FA4 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
}


void WarehouseListViewManager__GetSelectList(
        WarehouseListViewManager_o *this,
        System_Collections_Generic_List_long__o *list,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x0
  _BOOL8 v6; // x0
  Il2CppObject *current; // x20
  __int64 naturalAligment; // x9
  const MethodInfo *v9; // x1
  int64_t UserSvtId; // x0
  struct System_Int64_array *items; // x8
  _QWORD *v12; // x9
  __int64 size; // x10
  System_Collections_Generic_List_Enumerator_object__o v14; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v15; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4C3579D & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__);
    sub_1C32C20(&Method_System_Collections_Generic_List_long__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    sub_1C32C20(&WarehouseListViewItem_TypeInfo);
    byte_4C3579D = 1;
  }
  memset(&v15, 0, sizeof(v15));
  itemList = this->fields.itemList;
  if ( !itemList )
    sub_1C32E7C(0);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v14,
    (System_Collections_Generic_List_object__o *)itemList,
    (const MethodInfo_37992B4 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  v15 = v14;
  while ( 1 )
  {
    v6 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v15,
           (const MethodInfo_3522FA8 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    if ( !v6 )
      break;
    current = v15.fields._current;
    if ( !v15.fields._current )
      goto LABEL_17;
    naturalAligment = WarehouseListViewItem_TypeInfo->_2.naturalAligment;
    if ( v15.fields._current->klass->_2.naturalAligment < (unsigned int)naturalAligment
      || (WarehouseListViewItem_c *)v15.fields._current->klass->_2.typeHierarchy[naturalAligment - 1] != WarehouseListViewItem_TypeInfo )
    {
      sub_1C3313C(v15.fields._current);
LABEL_17:
      sub_1C32E7C(v6);
    }
    if ( ListViewItem__get_IsSelect((ListViewItem_o *)v15.fields._current, 0) )
    {
      UserSvtId = WarehouseListViewItem__get_UserSvtId((WarehouseListViewItem_o *)current, v9);
      if ( !list )
        sub_1C32E7C(UserSvtId);
      items = list->fields._items;
      v12 = Method_System_Collections_Generic_List_long__Add__;
      ++list->fields._version;
      if ( !items )
        sub_1C32E7C(UserSvtId);
      size = list->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_long___AddWithResize(
          list,
          UserSvtId,
          *(const MethodInfo_37807F0 **)(*(_QWORD *)(v12[4] + 192LL) + 112LL));
      }
      else
      {
        list->fields._size = size + 1;
        items->m_Items[size] = UserSvtId;
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v15,
    (const MethodInfo_3522FA4 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
}


System_Collections_Generic_Dictionary_long__int__o *WarehouseListViewManager__GetSelectServantIdDic(
        WarehouseListViewManager_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_long__int__o *v3; // x20
  System_Collections_Generic_List_object__o *itemList; // x0
  int size; // w23
  int32_t v6; // w21
  WarehouseListViewItem_o *v7; // x22
  __int64 naturalAligment; // x9
  const MethodInfo *v9; // x1
  System_Collections_Generic_Dictionary_long__int__o *result; // x0
  WarehouseListViewManager_o *v11; // x0
  System_Collections_Generic_Dictionary_long__int__o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_4C357AF & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_long__int__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_long__int___ctor__);
    sub_1C32C20(&System_Collections_Generic_Dictionary_long__int__TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_1C32C20(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_1C32C20(&WarehouseListViewItem_TypeInfo);
    byte_4C357AF = 1;
  }
  v3 = (System_Collections_Generic_Dictionary_long__int__o *)sub_1C32E6C(System_Collections_Generic_Dictionary_long__int__TypeInfo);
  System_Collections_Generic_Dictionary_long__int____ctor(
    v3,
    (const MethodInfo_342E47C *)Method_System_Collections_Generic_Dictionary_long__int___ctor__);
  itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
  if ( !itemList )
LABEL_14:
    sub_1C32E7C(itemList);
  size = itemList->fields._size;
  if ( size < 1 )
    return v3;
  v6 = 0;
  while ( 1 )
  {
    itemList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                              itemList,
                                                              v6,
                                                              (const MethodInfo_37984EC *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    if ( !itemList )
      goto LABEL_14;
    v7 = (WarehouseListViewItem_o *)itemList;
    naturalAligment = WarehouseListViewItem_TypeInfo->_2.naturalAligment;
    if ( itemList->klass->_2.naturalAligment < (unsigned int)naturalAligment
      || (WarehouseListViewItem_c *)itemList->klass->_2.typeHierarchy[naturalAligment - 1] != WarehouseListViewItem_TypeInfo )
    {
      break;
    }
    if ( ListViewItem__get_IsSelect((ListViewItem_o *)itemList, 0) )
    {
      itemList = (System_Collections_Generic_List_object__o *)WarehouseListViewItem__get_UserSvtId(v7, v9);
      if ( !v3 )
        goto LABEL_14;
      System_Collections_Generic_Dictionary_long__int___Add(
        v3,
        (int64_t)itemList,
        v7->fields.selectNum,
        (const MethodInfo_342EE50 *)Method_System_Collections_Generic_Dictionary_long__int__Add__);
    }
    if ( size == ++v6 )
      return v3;
    itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
    if ( !itemList )
      goto LABEL_14;
  }
  sub_1C3313C(itemList);
  WarehouseListViewManager__ModifyScaleChangeList(v11, v12, v13);
  return result;
}


int32_t WarehouseListViewManager__GetSelectSum(WarehouseListViewManager_o *this, const MethodInfo *method)
{
  return this->fields.selectSum;
}


bool WarehouseListViewManager__GetSwapChoiceList(
        WarehouseListViewManager_o *this,
        System_Int64_array **choiceList,
        System_Int64_array **unchoiceList,
        const MethodInfo *method)
{
  System_Collections_Generic_List_long__o *v7; // x23
  System_Collections_Generic_List_long__o *v8; // x22
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  int64_t itemList; // x0
  int v12; // w25
  int32_t v13; // w24
  __int64 naturalAligment; // x10
  __int64 v15; // x8
  __int128 v16; // q0
  struct System_Int64_array *items; // x8
  _QWORD *v18; // x9
  __int64 size; // x10
  int64_t v20; // x1
  Il2CppClass **v21; // x8
  __int128 v22; // q0
  struct System_Int64_array *v23; // x8
  _QWORD *v24; // x9
  __int64 v25; // x10
  __int64 v26; // x8
  System_Collections_Generic_List_long__o *v27; // x0
  int v28; // w21
  System_Int64_array *v29; // x0
  int32_t v30; // w2
  const MethodInfo *v31; // x3
  System_Int64_array *v32; // x0
  int32_t v33; // w2
  const MethodInfo *v34; // x3
  int32_t v35; // w1
  System_Int64_array **v36; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v38; // [xsp+0h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v39; // [xsp+20h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v40; // [xsp+40h] [xbp-80h]

  if ( (byte_4C35797 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_List_long__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_long__ToArray__);
    sub_1C32C20(&Method_System_Collections_Generic_List_long___ctor__);
    sub_1C32C20(&Method_System_Collections_Generic_List_long__get_Count__);
    sub_1C32C20(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_1C32C20(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_1C32C20(&System_Collections_Generic_List_long__TypeInfo);
    sub_1C32C20(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C32C20(&WarehouseListViewItem_TypeInfo);
    byte_4C35797 = 1;
  }
  v7 = (System_Collections_Generic_List_long__o *)sub_1C32E6C(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v7,
    (const MethodInfo_377FF9C *)Method_System_Collections_Generic_List_long___ctor__);
  v8 = (System_Collections_Generic_List_long__o *)sub_1C32E6C(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v8,
    (const MethodInfo_377FF9C *)Method_System_Collections_Generic_List_long___ctor__);
  itemList = (int64_t)this->fields.itemList;
  if ( !itemList )
    goto LABEL_37;
  v12 = *(_DWORD *)(itemList + 24);
  if ( v12 >= 1 )
  {
    v13 = 0;
    while ( 1 )
    {
      itemList = (int64_t)System_Collections_Generic_List_object___get_Item(
                            (System_Collections_Generic_List_object__o *)itemList,
                            v13,
                            (const MethodInfo_37984EC *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
      if ( !itemList )
        goto LABEL_37;
      naturalAligment = WarehouseListViewItem_TypeInfo->_2.naturalAligment;
      if ( *(unsigned __int8 *)(*(_QWORD *)itemList + 304LL) < (unsigned int)naturalAligment
        || *(WarehouseListViewItem_c **)(*(_QWORD *)(*(_QWORD *)itemList + 200LL) + 8 * naturalAligment - 8) != WarehouseListViewItem_TypeInfo )
      {
        goto LABEL_37;
      }
      v15 = *(_QWORD *)(itemList + 120);
      if ( v15 && *(_BYTE *)(itemList + 257) )
      {
        if ( *(_BYTE *)(itemList + 181) )
        {
          v16 = *(_OWORD *)(v15 + 32);
          *(_OWORD *)&v40.fields.currentCryptoKey = *(_OWORD *)(v15 + 16);
          *(_OWORD *)&v40.fields.fakeValue = v16;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v39 = v40;
          itemList = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48891308(&v39, 0);
          if ( !v8 )
            goto LABEL_37;
          items = v8->fields._items;
          v18 = Method_System_Collections_Generic_List_long__Add__;
          ++v8->fields._version;
          if ( !items )
            goto LABEL_37;
          size = v8->fields._size;
          v20 = itemList;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            v26 = v18[4];
            v27 = v8;
LABEL_27:
            System_Collections_Generic_List_long___AddWithResize(
              v27,
              v20,
              *(const MethodInfo_37807F0 **)(*(_QWORD *)(v26 + 192) + 112LL));
            goto LABEL_28;
          }
          v21 = &items->obj.klass + size;
          v8->fields._size = size + 1;
        }
        else
        {
          v22 = *(_OWORD *)(v15 + 32);
          *(_OWORD *)&v40.fields.currentCryptoKey = *(_OWORD *)(v15 + 16);
          *(_OWORD *)&v40.fields.fakeValue = v22;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v38 = v40;
          itemList = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48891308(&v38, 0);
          if ( !v7 )
            goto LABEL_37;
          v23 = v7->fields._items;
          v24 = Method_System_Collections_Generic_List_long__Add__;
          ++v7->fields._version;
          if ( !v23 )
            goto LABEL_37;
          v25 = v7->fields._size;
          v20 = itemList;
          if ( (unsigned int)v25 >= LODWORD(v23->max_length) )
          {
            v26 = v24[4];
            v27 = v7;
            goto LABEL_27;
          }
          v21 = &v23->obj.klass + v25;
          v7->fields._size = v25 + 1;
        }
        v21[4] = (Il2CppClass *)v20;
      }
LABEL_28:
      if ( v12 == ++v13 )
        break;
      itemList = (int64_t)this->fields.itemList;
      if ( !itemList )
        goto LABEL_37;
    }
  }
  if ( !v7 || !v8 )
LABEL_37:
    sub_1C32E7C(itemList);
  v28 = v8->fields._size + v7->fields._size;
  if ( v28 < 1 )
  {
    *choiceList = 0;
    sub_1C32BC4((CGThumbnailListItem_o *)choiceList, 0, v9, v10);
    v36 = unchoiceList;
    v35 = 0;
    *unchoiceList = 0;
  }
  else
  {
    v29 = System_Collections_Generic_List_long___ToArray(
            v7,
            (const MethodInfo_37822A8 *)Method_System_Collections_Generic_List_long__ToArray__);
    *choiceList = v29;
    sub_1C32BC4((CGThumbnailListItem_o *)choiceList, (int32_t)v29, v30, v31);
    v32 = System_Collections_Generic_List_long___ToArray(
            v8,
            (const MethodInfo_37822A8 *)Method_System_Collections_Generic_List_long__ToArray__);
    v35 = (int)v32;
    *unchoiceList = v32;
    v36 = unchoiceList;
  }
  sub_1C32BC4((CGThumbnailListItem_o *)v36, v35, v33, v34);
  return v28 > 0;
}


bool WarehouseListViewManager__GetSwapLockList(
        WarehouseListViewManager_o *this,
        System_Int64_array **lockList,
        System_Int64_array **unlockList,
        const MethodInfo *method)
{
  System_Collections_Generic_List_long__o *v7; // x23
  System_Collections_Generic_List_long__o *v8; // x22
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  int64_t itemList; // x0
  int v12; // w25
  int32_t v13; // w24
  __int64 naturalAligment; // x10
  __int64 v15; // x8
  __int128 v16; // q0
  struct System_Int64_array *items; // x8
  _QWORD *v18; // x9
  __int64 size; // x10
  int64_t v20; // x1
  Il2CppClass **v21; // x8
  __int128 v22; // q0
  struct System_Int64_array *v23; // x8
  _QWORD *v24; // x9
  __int64 v25; // x10
  __int64 v26; // x8
  System_Collections_Generic_List_long__o *v27; // x0
  int v28; // w21
  System_Int64_array *v29; // x0
  int32_t v30; // w2
  const MethodInfo *v31; // x3
  System_Int64_array *v32; // x0
  int32_t v33; // w2
  const MethodInfo *v34; // x3
  int32_t v35; // w1
  System_Int64_array **v36; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v38; // [xsp+0h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v39; // [xsp+20h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v40; // [xsp+40h] [xbp-80h]

  if ( (byte_4C35796 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_List_long__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_long__ToArray__);
    sub_1C32C20(&Method_System_Collections_Generic_List_long___ctor__);
    sub_1C32C20(&Method_System_Collections_Generic_List_long__get_Count__);
    sub_1C32C20(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_1C32C20(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_1C32C20(&System_Collections_Generic_List_long__TypeInfo);
    sub_1C32C20(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C32C20(&WarehouseListViewItem_TypeInfo);
    byte_4C35796 = 1;
  }
  v7 = (System_Collections_Generic_List_long__o *)sub_1C32E6C(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v7,
    (const MethodInfo_377FF9C *)Method_System_Collections_Generic_List_long___ctor__);
  v8 = (System_Collections_Generic_List_long__o *)sub_1C32E6C(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v8,
    (const MethodInfo_377FF9C *)Method_System_Collections_Generic_List_long___ctor__);
  itemList = (int64_t)this->fields.itemList;
  if ( !itemList )
    goto LABEL_37;
  v12 = *(_DWORD *)(itemList + 24);
  if ( v12 >= 1 )
  {
    v13 = 0;
    while ( 1 )
    {
      itemList = (int64_t)System_Collections_Generic_List_object___get_Item(
                            (System_Collections_Generic_List_object__o *)itemList,
                            v13,
                            (const MethodInfo_37984EC *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
      if ( !itemList )
        goto LABEL_37;
      naturalAligment = WarehouseListViewItem_TypeInfo->_2.naturalAligment;
      if ( *(unsigned __int8 *)(*(_QWORD *)itemList + 304LL) < (unsigned int)naturalAligment
        || *(WarehouseListViewItem_c **)(*(_QWORD *)(*(_QWORD *)itemList + 200LL) + 8 * naturalAligment - 8) != WarehouseListViewItem_TypeInfo )
      {
        goto LABEL_37;
      }
      v15 = *(_QWORD *)(itemList + 120);
      if ( v15 && *(_BYTE *)(itemList + 256) )
      {
        if ( *(_BYTE *)(itemList + 180) )
        {
          v16 = *(_OWORD *)(v15 + 32);
          *(_OWORD *)&v40.fields.currentCryptoKey = *(_OWORD *)(v15 + 16);
          *(_OWORD *)&v40.fields.fakeValue = v16;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v39 = v40;
          itemList = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48891308(&v39, 0);
          if ( !v8 )
            goto LABEL_37;
          items = v8->fields._items;
          v18 = Method_System_Collections_Generic_List_long__Add__;
          ++v8->fields._version;
          if ( !items )
            goto LABEL_37;
          size = v8->fields._size;
          v20 = itemList;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            v26 = v18[4];
            v27 = v8;
LABEL_27:
            System_Collections_Generic_List_long___AddWithResize(
              v27,
              v20,
              *(const MethodInfo_37807F0 **)(*(_QWORD *)(v26 + 192) + 112LL));
            goto LABEL_28;
          }
          v21 = &items->obj.klass + size;
          v8->fields._size = size + 1;
        }
        else
        {
          v22 = *(_OWORD *)(v15 + 32);
          *(_OWORD *)&v40.fields.currentCryptoKey = *(_OWORD *)(v15 + 16);
          *(_OWORD *)&v40.fields.fakeValue = v22;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v38 = v40;
          itemList = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48891308(&v38, 0);
          if ( !v7 )
            goto LABEL_37;
          v23 = v7->fields._items;
          v24 = Method_System_Collections_Generic_List_long__Add__;
          ++v7->fields._version;
          if ( !v23 )
            goto LABEL_37;
          v25 = v7->fields._size;
          v20 = itemList;
          if ( (unsigned int)v25 >= LODWORD(v23->max_length) )
          {
            v26 = v24[4];
            v27 = v7;
            goto LABEL_27;
          }
          v21 = &v23->obj.klass + v25;
          v7->fields._size = v25 + 1;
        }
        v21[4] = (Il2CppClass *)v20;
      }
LABEL_28:
      if ( v12 == ++v13 )
        break;
      itemList = (int64_t)this->fields.itemList;
      if ( !itemList )
        goto LABEL_37;
    }
  }
  if ( !v7 || !v8 )
LABEL_37:
    sub_1C32E7C(itemList);
  v28 = v8->fields._size + v7->fields._size;
  if ( v28 < 1 )
  {
    *lockList = 0;
    sub_1C32BC4((CGThumbnailListItem_o *)lockList, 0, v9, v10);
    v36 = unlockList;
    v35 = 0;
    *unlockList = 0;
  }
  else
  {
    v29 = System_Collections_Generic_List_long___ToArray(
            v7,
            (const MethodInfo_37822A8 *)Method_System_Collections_Generic_List_long__ToArray__);
    *lockList = v29;
    sub_1C32BC4((CGThumbnailListItem_o *)lockList, (int32_t)v29, v30, v31);
    v32 = System_Collections_Generic_List_long___ToArray(
            v8,
            (const MethodInfo_37822A8 *)Method_System_Collections_Generic_List_long__ToArray__);
    v35 = (int)v32;
    *unlockList = v32;
    v36 = unlockList;
  }
  sub_1C32BC4((CGThumbnailListItem_o *)v36, v35, v33, v34);
  return v28 > 0;
}


void WarehouseListViewManager__InitLoad(const MethodInfo *method)
{
  WarehouseListViewManager_c *v1; // x0
  ListViewSort_o *servantSortInfo; // x0

  if ( (byte_4C3578E & 1) == 0 )
  {
    sub_1C32C20(&WarehouseListViewManager_TypeInfo);
    byte_4C3578E = 1;
  }
  v1 = WarehouseListViewManager_TypeInfo;
  if ( !WarehouseListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarehouseListViewManager_TypeInfo);
    v1 = WarehouseListViewManager_TypeInfo;
  }
  servantSortInfo = v1->static_fields->servantSortInfo;
  if ( !servantSortInfo
    || (ListViewSort__InitLoad(servantSortInfo, 0),
        (servantSortInfo = WarehouseListViewManager_TypeInfo->static_fields->servantEquipSortInfo) == 0)
    || (ListViewSort__InitLoad(servantSortInfo, 0),
        (servantSortInfo = WarehouseListViewManager_TypeInfo->static_fields->servantWarehouseSortInfo) == 0)
    || (ListViewSort__InitLoad(servantSortInfo, 0),
        (servantSortInfo = WarehouseListViewManager_TypeInfo->static_fields->servantEquipWarehouseSortInfo) == 0) )
  {
    sub_1C32E7C(servantSortInfo);
  }
  ListViewSort__InitLoad(servantSortInfo, 0);
}


bool WarehouseListViewManager__IsDragEnable(
        WarehouseListViewManager_o *this,
        WarehouseListViewItem_o *item,
        const MethodInfo *method)
{
  struct WarehouseListMenu_o *warehouseListMenu; // x8
  bool result; // w0
  const MethodInfo *v7; // x4
  bool IsSelectEnable; // w8

  warehouseListMenu = this->fields.warehouseListMenu;
  if ( !warehouseListMenu )
    sub_1C32E7C(this);
  result = 0;
  if ( item && !warehouseListMenu->fields.modeKind )
  {
    if ( WarehouseListViewItem__get_IsCanNotSelect(item, (const MethodInfo *)item) )
    {
      return 0;
    }
    else
    {
      if ( ListViewItem__get_IsSelect((ListViewItem_o *)item, 0) )
        return 1;
      IsSelectEnable = WarehouseListViewManager__IsSelectEnable(this, item, 0, 0, v7);
      result = 0;
      if ( IsSelectEnable )
        return 1;
    }
  }
  return result;
}


bool WarehouseListViewManager__IsDragStart(WarehouseListViewManager_o *this, const MethodInfo *method)
{
  return this->fields.dragStartIndex >= 0;
}


// local variable allocation has failed, the output may be wrong!
bool WarehouseListViewManager__IsSelectEnable(
        WarehouseListViewManager_o *this,
        WarehouseListViewItem_o *item,
        int32_t addSum,
        int32_t addServantSum,
        const MethodInfo *method)
{
  WarehouseListManager_o *parentManager; // x0
  struct WarehouseListManager_o *v10; // x8
  int32_t friendShipSum[2]; // [xsp+8h] [xbp-28h] BYREF

  *(_QWORD *)friendShipSum = 0;
  parentManager = this->fields.parentManager;
  if ( !parentManager )
    goto LABEL_15;
  WarehouseListManager__GetSelectItemNum(
    parentManager,
    &friendShipSum[1],
    friendShipSum,
    *(const MethodInfo **)&addServantSum);
  v10 = this->fields.parentManager;
  if ( !v10 )
    goto LABEL_15;
  if ( friendShipSum[1] + addSum >= v10->fields.sendMax )
    return item && item->fields.isFriendShipSvtEq;
  if ( !item || this->fields.kind )
    return 1;
  parentManager = (WarehouseListManager_o *)item->fields.servantEntity;
  if ( !parentManager )
LABEL_15:
    sub_1C32E7C(parentManager);
  return !ServantEntity__get_IsOrganization((ServantEntity_o *)parentManager, 0)
      || item->fields.attribute
      || this->fields.sellEnableRestCnt - addServantSum >= 2;
}


void WarehouseListViewManager__Modify(WarehouseListViewManager_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  DataMasterBase_TMaster__TEntity__PKType__o *v4; // x20
  _BOOL8 v5; // x0
  const MethodInfo *v6; // x1
  WarehouseListViewItem_o *current; // x21
  __int64 naturalAligment; // x10
  const MethodInfo *v9; // x1
  int64_t UserSvtId; // x0
  Il2CppObject *Entity; // x1
  const MethodInfo *v12; // x2
  UnityEngine_Object_o *viewObject; // x22
  struct ListViewObject_o *v14; // x0
  UserGameEntity_o *SelfUserGame; // x20
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x9
  DataMasterBase_TMaster__TEntity__PKType__o *v17; // x19
  _BOOL8 v18; // x0
  const MethodInfo *v19; // x1
  WarehouseListViewItem_o *v20; // x21
  __int64 v21; // x10
  const MethodInfo *v22; // x1
  int64_t v23; // x0
  Il2CppObject *v24; // x1
  const MethodInfo *v25; // x2
  int64_t v26; // x0
  const MethodInfo *v27; // x1
  int64_t favoriteUserSvtId; // x27
  int64_t v29; // x22
  int64_t v30; // x0
  const MethodInfo *v31; // x3
  UnityEngine_Object_o *v32; // x22
  struct ListViewObject_o *v33; // x0
  System_Collections_Generic_List_Enumerator_object__o v34; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v35; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_4C35794 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1C32C20(&Method_DataManager_GetMasterData_UserServantStorageMaster___);
    sub_1C32C20(&Method_DataMasterBase_UserServantStorageMaster__UserServantEntity__long__GetEntity__);
    sub_1C32C20(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__);
    sub_1C32C20(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C32C20(&WarehouseListViewItem_TypeInfo);
    byte_4C35794 = 1;
  }
  memset(&v35, 0, sizeof(v35));
  if ( this->fields.itemList )
  {
    if ( (this->fields.kind & 0xFFFFFFFE) == 2 )
    {
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( Instance )
      {
        Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_UserServantStorageMaster___);
        if ( this->fields.itemList )
        {
          v4 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
          System_Collections_Generic_List_object___GetEnumerator(
            (System_Collections_Generic_List_Enumerator_T__o *)&v34,
            (System_Collections_Generic_List_object__o *)this->fields.itemList,
            (const MethodInfo_37992B4 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
          v35 = v34;
          while ( 1 )
          {
            v5 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                   &v35,
                   (const MethodInfo_3522FA8 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
            if ( !v5 )
              break;
            current = (WarehouseListViewItem_o *)v35.fields._current;
            if ( !v35.fields._current
              || (naturalAligment = WarehouseListViewItem_TypeInfo->_2.naturalAligment,
                  v35.fields._current->klass->_2.naturalAligment < (unsigned int)naturalAligment)
              || (WarehouseListViewItem_c *)v35.fields._current->klass->_2.typeHierarchy[naturalAligment - 1] != WarehouseListViewItem_TypeInfo )
            {
              sub_1C32E7C(v5);
            }
            if ( WarehouseListViewItem__get_UserSvtId((WarehouseListViewItem_o *)v35.fields._current, v6) >= 1 )
            {
              UserSvtId = WarehouseListViewItem__get_UserSvtId(current, v9);
              if ( !v4 )
                sub_1C32E7C(UserSvtId);
              Entity = DataMasterBase_object__object__long___GetEntity(
                         v4,
                         UserSvtId,
                         (const MethodInfo_3398D94 *)Method_DataMasterBase_UserServantStorageMaster__UserServantEntity__long__GetEntity__);
              if ( Entity )
                WarehouseListViewItem__Modify(current, (UserServantEntity_o *)Entity, v12);
              viewObject = (UnityEngine_Object_o *)current->fields.viewObject;
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              if ( UnityEngine_Object__op_Inequality(viewObject, 0, 0) )
              {
                v14 = current->fields.viewObject;
                if ( !v14 )
                  sub_1C32E7C(0);
                ((void (__fastcall *)(struct ListViewObject_o *, WarehouseListViewItem_o *, const MethodInfo *))v14->klass->vtable._5_SetItem.methodPtr)(
                  v14,
                  current,
                  v14->klass->vtable._5_SetItem.method);
              }
            }
          }
LABEL_41:
          System_Collections_Generic_List_Enumerator_object___Dispose(
            &v35,
            (const MethodInfo_3522FA4 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
          return;
        }
      }
    }
    else
    {
      SelfUserGame = UserGameMaster__getSelfUserGame(0);
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( Instance )
      {
        Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_UserServantMaster___);
        itemList = this->fields.itemList;
        if ( itemList )
        {
          v17 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
          System_Collections_Generic_List_object___GetEnumerator(
            (System_Collections_Generic_List_Enumerator_T__o *)&v34,
            (System_Collections_Generic_List_object__o *)itemList,
            (const MethodInfo_37992B4 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
          v35 = v34;
          while ( 1 )
          {
            v18 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                    &v35,
                    (const MethodInfo_3522FA8 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
            if ( !v18 )
              break;
            v20 = (WarehouseListViewItem_o *)v35.fields._current;
            if ( !v35.fields._current
              || (v21 = WarehouseListViewItem_TypeInfo->_2.naturalAligment,
                  v35.fields._current->klass->_2.naturalAligment < (unsigned int)v21)
              || (WarehouseListViewItem_c *)v35.fields._current->klass->_2.typeHierarchy[v21 - 1] != WarehouseListViewItem_TypeInfo )
            {
              sub_1C32E7C(v18);
            }
            if ( WarehouseListViewItem__get_UserSvtId((WarehouseListViewItem_o *)v35.fields._current, v19) >= 1 )
            {
              v23 = WarehouseListViewItem__get_UserSvtId(v20, v22);
              if ( !v17 )
                sub_1C32E7C(v23);
              v24 = DataMasterBase_object__object__long___GetEntity(
                      v17,
                      v23,
                      (const MethodInfo_3398D94 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
              if ( v24 )
                WarehouseListViewItem__Modify(v20, (UserServantEntity_o *)v24, v25);
              v26 = WarehouseListViewItem__get_UserSvtId(v20, (const MethodInfo *)v24);
              if ( !SelfUserGame )
                sub_1C32E7C(v26);
              favoriteUserSvtId = SelfUserGame->fields.favoriteUserSvtId;
              v29 = v26;
              v30 = WarehouseListViewItem__get_UserSvtId(v20, v27);
              WarehouseListViewItem__Modify_38305076(
                v20,
                v29 == favoriteUserSvtId,
                v30 == SelfUserGame->fields.pushUserSvtId,
                v31);
              v32 = (UnityEngine_Object_o *)v20->fields.viewObject;
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              if ( UnityEngine_Object__op_Inequality(v32, 0, 0) )
              {
                v33 = v20->fields.viewObject;
                if ( !v33 )
                  sub_1C32E7C(0);
                ((void (__fastcall *)(struct ListViewObject_o *, WarehouseListViewItem_o *, const MethodInfo *))v33->klass->vtable._5_SetItem.methodPtr)(
                  v33,
                  v20,
                  v33->klass->vtable._5_SetItem.method);
              }
            }
          }
          goto LABEL_41;
        }
      }
    }
    sub_1C32E7C(Instance);
  }
}


void WarehouseListViewManager__ModifyItem(
        WarehouseListViewManager_o *this,
        int64_t userSvtId,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x9
  DataManager_o *Instance; // x0
  DataManager_o *v7; // x19
  Il2CppObject *Entity; // x19
  UserGameEntity_o *SelfUserGame; // x22
  _BOOL8 v10; // x0
  const MethodInfo *v11; // x1
  __int64 v12; // x11
  WarehouseListViewItem_o *v13; // x20
  int64_t v14; // x0
  Il2CppObject v15; // q0
  int64_t v16; // x21
  const MethodInfo *v17; // x2
  int64_t v18; // x0
  const MethodInfo *v19; // x1
  int64_t favoriteUserSvtId; // x28
  int64_t v21; // x21
  int64_t v22; // x0
  const MethodInfo *v23; // x3
  UnityEngine_Object_o *v24; // x21
  struct ListViewObject_o *v25; // x0
  _BOOL8 v26; // x0
  const MethodInfo *v27; // x1
  __int64 naturalAligment; // x11
  WarehouseListViewItem_o *current; // x22
  int64_t v30; // x0
  __int128 v31; // q0
  int64_t v32; // x23
  const MethodInfo *v33; // x2
  UnityEngine_Object_o *viewObject; // x23
  struct ListViewObject_o *v35; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v36; // [xsp+0h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v37; // [xsp+20h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v38; // [xsp+40h] [xbp-A0h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v39; // [xsp+60h] [xbp-80h] BYREF

  if ( (byte_4C35795 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1C32C20(&Method_DataManager_GetMasterData_UserServantStorageMaster___);
    sub_1C32C20(&Method_DataMasterBase_UserServantStorageMaster__UserServantEntity__long__GetEntity__);
    sub_1C32C20(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__);
    sub_1C32C20(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C32C20(&WarehouseListViewItem_TypeInfo);
    byte_4C35795 = 1;
  }
  memset(&v39, 0, sizeof(v39));
  itemList = this->fields.itemList;
  if ( itemList )
  {
    if ( (this->fields.kind & 0xFFFFFFFE) == 2 )
    {
      if ( userSvtId < 1 )
      {
        v7 = 0;
        goto LABEL_37;
      }
      Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( Instance )
      {
        Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                      Instance,
                                      (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_UserServantStorageMaster___);
        if ( Instance )
        {
          Instance = (DataManager_o *)DataMasterBase_object__object__long___GetEntity(
                                        (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                                        userSvtId,
                                        (const MethodInfo_3398D94 *)Method_DataMasterBase_UserServantStorageMaster__UserServantEntity__long__GetEntity__);
          itemList = this->fields.itemList;
          if ( itemList )
          {
            v7 = Instance;
LABEL_37:
            System_Collections_Generic_List_object___GetEnumerator(
              (System_Collections_Generic_List_Enumerator_T__o *)&v38,
              (System_Collections_Generic_List_object__o *)itemList,
              (const MethodInfo_37992B4 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
            v39 = *(System_Collections_Generic_List_Enumerator_object__o *)&v38.fields.currentCryptoKey;
            while ( 1 )
            {
              v26 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                      &v39,
                      (const MethodInfo_3522FA8 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
              if ( !v26 )
                goto LABEL_57;
              if ( v39.fields._current
                && (naturalAligment = WarehouseListViewItem_TypeInfo->_2.naturalAligment,
                    v39.fields._current->klass->_2.naturalAligment >= (unsigned int)naturalAligment) )
              {
                if ( (WarehouseListViewItem_c *)v39.fields._current->klass->_2.typeHierarchy[naturalAligment - 1] == WarehouseListViewItem_TypeInfo )
                  current = (WarehouseListViewItem_o *)v39.fields._current;
                else
                  current = 0;
                if ( v7 )
                {
LABEL_42:
                  if ( !current )
                    sub_1C32E7C(v26);
                  v30 = WarehouseListViewItem__get_UserSvtId(current, v27);
                  v31 = *(_OWORD *)&v7->fields._DispLog;
                  v32 = v30;
                  *(SingletonMonoBehaviour_DataManager__Fields *)&v38.fields.currentCryptoKey = v7->fields.SingletonMonoBehaviour_DataManager__Fields;
                  *(_OWORD *)&v38.fields.fakeValue = v31;
                  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
                  v37 = v38;
                  if ( v32 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48891308(&v37, 0) )
                    WarehouseListViewItem__Modify(current, (UserServantEntity_o *)v7, v33);
                  goto LABEL_52;
                }
              }
              else
              {
                current = 0;
                if ( v7 )
                  goto LABEL_42;
              }
              if ( !current )
                sub_1C32E7C(v26);
LABEL_52:
              viewObject = (UnityEngine_Object_o *)current->fields.viewObject;
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              if ( UnityEngine_Object__op_Inequality(viewObject, 0, 0) )
              {
                v35 = current->fields.viewObject;
                if ( !v35 )
                  sub_1C32E7C(0);
                ((void (__fastcall *)(struct ListViewObject_o *, WarehouseListViewItem_o *, const MethodInfo *))v35->klass->vtable._5_SetItem.methodPtr)(
                  v35,
                  current,
                  v35->klass->vtable._5_SetItem.method);
              }
            }
          }
        }
      }
LABEL_66:
      sub_1C32E7C(Instance);
    }
    Entity = 0;
    SelfUserGame = UserGameMaster__getSelfUserGame(0);
    if ( userSvtId >= 1 )
    {
      Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_66;
      Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                    Instance,
                                    (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_UserServantMaster___);
      if ( !Instance )
        goto LABEL_66;
      Entity = DataMasterBase_object__object__long___GetEntity(
                 (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                 userSvtId,
                 (const MethodInfo_3398D94 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    }
    Instance = (DataManager_o *)this->fields.itemList;
    if ( !Instance )
      goto LABEL_66;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v38,
      (System_Collections_Generic_List_object__o *)Instance,
      (const MethodInfo_37992B4 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    *(_OWORD *)&v39.fields._list = *(_OWORD *)&v38.fields.currentCryptoKey;
    v39.fields._current = (Il2CppObject *)v38.fields.fakeValue;
    while ( 1 )
    {
      v10 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v39,
              (const MethodInfo_3522FA8 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
      if ( !v10 )
      {
LABEL_57:
        System_Collections_Generic_List_Enumerator_object___Dispose(
          &v39,
          (const MethodInfo_3522FA4 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
        return;
      }
      if ( v39.fields._current
        && (v12 = WarehouseListViewItem_TypeInfo->_2.naturalAligment,
            v39.fields._current->klass->_2.naturalAligment >= (unsigned int)v12) )
      {
        if ( (WarehouseListViewItem_c *)v39.fields._current->klass->_2.typeHierarchy[v12 - 1] == WarehouseListViewItem_TypeInfo )
          v13 = (WarehouseListViewItem_o *)v39.fields._current;
        else
          v13 = 0;
        if ( Entity )
        {
LABEL_20:
          if ( !v13 )
            sub_1C32E7C(v10);
          v14 = WarehouseListViewItem__get_UserSvtId(v13, v11);
          v15 = Entity[2];
          v16 = v14;
          *(Il2CppObject *)&v38.fields.currentCryptoKey = Entity[1];
          *(Il2CppObject *)&v38.fields.fakeValue = v15;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v36 = v38;
          if ( v16 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48891308(&v36, 0) )
            WarehouseListViewItem__Modify(v13, (UserServantEntity_o *)Entity, v17);
          goto LABEL_30;
        }
      }
      else
      {
        v13 = 0;
        if ( Entity )
          goto LABEL_20;
      }
      if ( !v13 )
        sub_1C32E7C(v10);
LABEL_30:
      v18 = WarehouseListViewItem__get_UserSvtId(v13, v11);
      if ( !SelfUserGame )
        sub_1C32E7C(v18);
      favoriteUserSvtId = SelfUserGame->fields.favoriteUserSvtId;
      v21 = v18;
      v22 = WarehouseListViewItem__get_UserSvtId(v13, v19);
      WarehouseListViewItem__Modify_38305076(
        v13,
        v21 == favoriteUserSvtId,
        v22 == SelfUserGame->fields.pushUserSvtId,
        v23);
      v24 = (UnityEngine_Object_o *)v13->fields.viewObject;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(v24, 0, 0) )
      {
        v25 = v13->fields.viewObject;
        if ( !v25 )
          sub_1C32E7C(0);
        ((void (__fastcall *)(struct ListViewObject_o *, WarehouseListViewItem_o *, const MethodInfo *))v25->klass->vtable._5_SetItem.methodPtr)(
          v25,
          v13,
          v25->klass->vtable._5_SetItem.method);
      }
    }
  }
}


void WarehouseListViewManager__ModifyScaleChangeList(
        WarehouseListViewManager_o *this,
        System_Collections_Generic_Dictionary_long__int__o *selectServantIdDic,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x1
  System_Collections_Generic_List_object__o *itemList; // x0
  struct WarehouseListManager_o *parentManager; // x8
  struct WarehouseListViewManager_o *baseListViewManager; // x9
  int size; // w23
  int32_t v10; // w21
  WarehouseListViewItem_o *v11; // x22
  __int64 naturalAligment; // x9
  int64_t UserSvtId; // x0
  const MethodInfo *v14; // x1
  int64_t v15; // x0
  struct WarehouseListManager_o *v16; // x8
  struct WarehouseListViewManager_o *v17; // x9
  WarehouseListViewManager_o *v18; // x0
  const MethodInfo *v19; // x1

  if ( (byte_4C357B0 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_long__int__ContainsKey__);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_long__int__get_Count__);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_long__int__get_Item__);
    sub_1C32C20(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_1C32C20(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_1C32C20(&WarehouseListViewItem_TypeInfo);
    byte_4C357B0 = 1;
  }
  if ( selectServantIdDic
    && System_Collections_Generic_Dictionary_long__int___get_Count(
         selectServantIdDic,
         (const MethodInfo_342EB00 *)Method_System_Collections_Generic_Dictionary_long__int__get_Count__) )
  {
    WarehouseListViewManager__ReleaseAll(this, v5);
    parentManager = this->fields.parentManager;
    if ( !parentManager
      || (baseListViewManager = parentManager->fields.baseListViewManager) == 0
      || (parentManager->fields.totalSum = baseListViewManager->fields.selectSum,
          (itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList) == 0) )
    {
LABEL_19:
      sub_1C32E7C(itemList);
    }
    size = itemList->fields._size;
    if ( size >= 1 )
    {
      v10 = 0;
      while ( 1 )
      {
        itemList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                  itemList,
                                                                  v10,
                                                                  (const MethodInfo_37984EC *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
        if ( !itemList )
          goto LABEL_19;
        v11 = (WarehouseListViewItem_o *)itemList;
        naturalAligment = WarehouseListViewItem_TypeInfo->_2.naturalAligment;
        if ( itemList->klass->_2.naturalAligment < (unsigned int)naturalAligment
          || (WarehouseListViewItem_c *)itemList->klass->_2.typeHierarchy[naturalAligment - 1] != WarehouseListViewItem_TypeInfo )
        {
          break;
        }
        UserSvtId = WarehouseListViewItem__get_UserSvtId(
                      (WarehouseListViewItem_o *)itemList,
                      (const MethodInfo *)WarehouseListViewItem_TypeInfo);
        if ( System_Collections_Generic_Dictionary_long__int___ContainsKey(
               selectServantIdDic,
               UserSvtId,
               (const MethodInfo_342F044 *)Method_System_Collections_Generic_Dictionary_long__int__ContainsKey__) )
        {
          v15 = WarehouseListViewItem__get_UserSvtId(v11, v14);
          itemList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_Dictionary_long__int___get_Item(
                                                                    selectServantIdDic,
                                                                    v15,
                                                                    (const MethodInfo_342EDB0 *)Method_System_Collections_Generic_Dictionary_long__int__get_Item__);
          v11->fields.selectNum = (int)itemList;
          v16 = this->fields.parentManager;
          ++this->fields.selectSum;
          if ( !v16 )
            goto LABEL_19;
          v17 = v16->fields.baseListViewManager;
          if ( !v17 )
            goto LABEL_19;
          v16->fields.totalSum = v17->fields.selectSum;
        }
        if ( size == ++v10 )
          return;
        itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
        if ( !itemList )
          goto LABEL_19;
      }
      sub_1C3313C(itemList);
      WarehouseListViewManager__IsDragStart(v18, v19);
    }
  }
}


void WarehouseListViewManager__OnClickBonusFilterKind(WarehouseListViewManager_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  ListViewSort_o *sort; // x0

  if ( (byte_4C357A0 & 1) == 0 )
  {
    sub_1C32C20(&Method_WarehouseListViewManager_OnClickBonusFilterKind__);
    byte_4C357A0 = 1;
  }
  if ( this->fields.isInput )
  {
    v3 = Method_WarehouseListViewManager_OnClickBonusFilterKind__;
    if ( (*((_BYTE *)Method_WarehouseListViewManager_OnClickBonusFilterKind__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C32C38(Method_WarehouseListViewManager_OnClickBonusFilterKind__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C32C04(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    sort = this->fields.sort;
    if ( !sort )
      sub_1C32E7C(0);
    ListViewSort__IncrementBonusFilter(sort, this->fields.alignedBonusFilterInfos, this->fields.isQuestStart, 0, 0);
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0);
    ListViewManager__CheckScroll((ListViewManager_o *)this, this->fields.scaleType, 0);
  }
}


void WarehouseListViewManager__OnClickFilterKind(WarehouseListViewManager_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  Il2CppObject *Instance; // x0
  ListViewSort_o *sort; // x20
  Il2CppObject *v7; // x21
  ServantFilterSelectMenu_CallbackFunc_o *v8; // x22
  __int64 v9; // x0
  CommonUI_o *v10; // x0
  int32_t v11; // w1
  Il2CppObject *v12; // x0
  ListViewSort_o *v13; // x20
  CommonUI_o *v14; // x21
  ServantFilterSelectMenu_CallbackFunc_o *v15; // x22
  Il2CppObject *v16; // x0
  Il2CppObject *v17; // x21

  if ( (byte_4C357A8 & 1) == 0 )
  {
    sub_1C32C20(&ServantFilterSelectMenu_CallbackFunc_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C32C20(&Method_WarehouseListViewManager_EndSelectFilterKind__);
    sub_1C32C20(&Method_WarehouseListViewManager_OnClickFilterKind__);
    byte_4C357A8 = 1;
  }
  if ( this->fields.isInput )
  {
    v3 = Method_WarehouseListViewManager_OnClickFilterKind__;
    if ( (*((_BYTE *)Method_WarehouseListViewManager_OnClickFilterKind__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C32C38(Method_WarehouseListViewManager_OnClickFilterKind__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C32C04(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    switch ( this->fields.kind )
    {
      case 0:
      case 2:
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        sort = this->fields.sort;
        v7 = Instance;
        v8 = (ServantFilterSelectMenu_CallbackFunc_o *)sub_1C32E6C(ServantFilterSelectMenu_CallbackFunc_TypeInfo);
        ServantFilterSelectMenu_CallbackFunc___ctor(
          v8,
          (Il2CppObject *)this,
          Method_WarehouseListViewManager_EndSelectFilterKind__,
          0);
        if ( !v7 )
          goto LABEL_15;
        v10 = (CommonUI_o *)v7;
        v11 = 0;
        goto LABEL_14;
      case 1:
      case 3:
        v12 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        v13 = this->fields.sort;
        v14 = (CommonUI_o *)v12;
        v15 = (ServantFilterSelectMenu_CallbackFunc_o *)sub_1C32E6C(ServantFilterSelectMenu_CallbackFunc_TypeInfo);
        ServantFilterSelectMenu_CallbackFunc___ctor(
          v15,
          (Il2CppObject *)this,
          Method_WarehouseListViewManager_EndSelectFilterKind__,
          0);
        if ( !v14 )
          goto LABEL_15;
        CommonUI__OpenServantFilterSelectMenu_31197636(v14, 5, v13, (ListViewManager_o *)this, v15, -1, 0);
        break;
      default:
        v16 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        sort = this->fields.sort;
        v17 = v16;
        v8 = (ServantFilterSelectMenu_CallbackFunc_o *)sub_1C32E6C(ServantFilterSelectMenu_CallbackFunc_TypeInfo);
        ServantFilterSelectMenu_CallbackFunc___ctor(
          v8,
          (Il2CppObject *)this,
          Method_WarehouseListViewManager_EndSelectFilterKind__,
          0);
        if ( !v17 )
LABEL_15:
          sub_1C32E7C(v9);
        v11 = 6;
        v10 = (CommonUI_o *)v17;
LABEL_14:
        CommonUI__OpenServantFilterSelectMenu(v10, v11, sort, v8, -1, 0);
        break;
    }
  }
}


void WarehouseListViewManager__OnClickListView(
        WarehouseListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  ;
}


void WarehouseListViewManager__OnClickSelectListView(
        WarehouseListViewManager_o *this,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  __int64 naturalAligment; // x10
  ListViewItem_o *v6; // x2
  struct WarehouseListViewManager_CallbackFunc_o *callbackFunc; // x8

  if ( (byte_4C3579F & 1) == 0 )
  {
    sub_1C32C20(&WarehouseListViewItem_TypeInfo);
    byte_4C3579F = 1;
  }
  if ( item
    && (naturalAligment = WarehouseListViewItem_TypeInfo->_2.naturalAligment,
        item->klass->_2.naturalAligment >= (unsigned int)naturalAligment) )
  {
    if ( (WarehouseListViewItem_c *)item->klass->_2.typeHierarchy[naturalAligment - 1] == WarehouseListViewItem_TypeInfo )
      v6 = item;
    else
      v6 = 0;
  }
  else
  {
    v6 = 0;
  }
  callbackFunc = this->fields.callbackFunc;
  if ( callbackFunc )
    ((void (__fastcall *)(intptr_t, __int64, ListViewItem_o *, intptr_t))callbackFunc->fields.invoke_impl)(
      callbackFunc->fields.method_code,
      1,
      v6,
      callbackFunc->fields.method);
}


void WarehouseListViewManager__OnClickSortAscendingOrder(WarehouseListViewManager_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x0
  struct ListViewSort_o *sort; // x8

  if ( (byte_4C357AB & 1) == 0 )
  {
    sub_1C32C20(&Method_WarehouseListViewManager_OnClickSortAscendingOrder__);
    byte_4C357AB = 1;
  }
  if ( this->fields.isInput )
  {
    v3 = Method_WarehouseListViewManager_OnClickSortAscendingOrder__;
    if ( (*((_BYTE *)Method_WarehouseListViewManager_OnClickSortAscendingOrder__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C32C38(Method_WarehouseListViewManager_OnClickSortAscendingOrder__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C32C04(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    sort = this->fields.sort;
    if ( !sort )
      sub_1C32E7C(v5);
    sort->fields.isAscendingOrder ^= 1u;
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0);
  }
}


void WarehouseListViewManager__OnClickSortKind(WarehouseListViewManager_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  unsigned int kind; // w23
  Il2CppObject *Instance; // x0
  ListViewSort_o *sort; // x20
  CommonUI_o *v8; // x21
  ServantSortSelectMenu_CallbackFunc_o *v9; // x22
  __int64 v10; // x0
  int32_t v11; // w1

  if ( (byte_4C357A6 & 1) == 0 )
  {
    sub_1C32C20(&ServantSortSelectMenu_CallbackFunc_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C32C20(&Method_WarehouseListViewManager_EndSelectSortKind__);
    sub_1C32C20(&Method_WarehouseListViewManager_OnClickSortKind__);
    byte_4C357A6 = 1;
  }
  if ( this->fields.isInput )
  {
    v3 = Method_WarehouseListViewManager_OnClickSortKind__;
    if ( (*((_BYTE *)Method_WarehouseListViewManager_OnClickSortKind__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C32C38(Method_WarehouseListViewManager_OnClickSortKind__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C32C04(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    kind = this->fields.kind;
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sort = this->fields.sort;
    v8 = (CommonUI_o *)Instance;
    v9 = (ServantSortSelectMenu_CallbackFunc_o *)sub_1C32E6C(ServantSortSelectMenu_CallbackFunc_TypeInfo);
    ServantSortSelectMenu_CallbackFunc___ctor(
      v9,
      (Il2CppObject *)this,
      Method_WarehouseListViewManager_EndSelectSortKind__,
      0);
    if ( !v8 )
      sub_1C32E7C(v10);
    if ( kind <= 3 )
      v11 = kind + 1;
    else
      v11 = 3;
    CommonUI__OpenServantSortSelectMenu(v8, v11, sort, 1, v9, 0);
  }
}


void WarehouseListViewManager__OnLongPushListView(
        WarehouseListViewManager_o *this,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  __int64 naturalAligment; // x10
  ListViewItem_o *v6; // x2
  struct WarehouseListViewManager_CallbackFunc_o *callbackFunc; // x8

  if ( (byte_4C357A5 & 1) == 0 )
  {
    sub_1C32C20(&WarehouseListViewItem_TypeInfo);
    byte_4C357A5 = 1;
  }
  if ( item
    && (naturalAligment = WarehouseListViewItem_TypeInfo->_2.naturalAligment,
        item->klass->_2.naturalAligment >= (unsigned int)naturalAligment) )
  {
    if ( (WarehouseListViewItem_c *)item->klass->_2.typeHierarchy[naturalAligment - 1] == WarehouseListViewItem_TypeInfo )
      v6 = item;
    else
      v6 = 0;
  }
  else
  {
    v6 = 0;
  }
  callbackFunc = this->fields.callbackFunc;
  if ( callbackFunc )
    ((void (__fastcall *)(intptr_t, __int64, ListViewItem_o *, intptr_t))callbackFunc->fields.invoke_impl)(
      callbackFunc->fields.method_code,
      2,
      v6,
      callbackFunc->fields.method);
}


void WarehouseListViewManager__OnMoveEnd(WarehouseListViewManager_o *this, const MethodInfo *method)
{
  int32_t callbackCount; // w8
  bool v4; // vf
  int32_t v5; // w8
  UnityEngine_Object_o *scrollView; // x20
  UIScrollView_o *v7; // x0

  if ( (byte_4C3579C & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C3579C = 1;
  }
  callbackCount = this->fields.callbackCount;
  v4 = __OFSUB__(callbackCount, 1);
  v5 = callbackCount - 1;
  if ( v5 < 0 == v4 )
  {
    this->fields.callbackCount = v5;
    if ( !v5 )
    {
      ListViewManager__DragMaskEnd((ListViewManager_o *)this, 0);
      scrollView = (UnityEngine_Object_o *)this->fields.scrollView;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(scrollView, 0, 0) )
      {
        v7 = this->fields.scrollView;
        if ( !v7
          || (((void (__fastcall *)(UIScrollView_o *, __int64, const MethodInfo *))v7->klass->vtable._8_UpdateScrollbars.methodPtr)(
                v7,
                1,
                v7->klass->vtable._8_UpdateScrollbars.method),
              (v7 = this->fields.scrollView) == 0) )
        {
          sub_1C32E7C(v7);
        }
        UIScrollView__UpdatePosition(v7, 0);
      }
    }
  }
}


void WarehouseListViewManager__RefrashListDisp(WarehouseListViewManager_o *this, const MethodInfo *method)
{
  void *parentManager; // x0
  const MethodInfo *v4; // x1
  int v5; // w22
  System_Collections_Generic_List_object__o *v6; // x20
  int32_t v7; // w21

  if ( (byte_4C35792 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_List_WarehouseListViewObject__get_Count__);
    sub_1C32C20(&Method_System_Collections_Generic_List_WarehouseListViewObject__get_Item__);
    byte_4C35792 = 1;
  }
  parentManager = this->fields.parentManager;
  if ( !parentManager )
    goto LABEL_10;
  WarehouseListManager__RefrashListDisp((WarehouseListManager_o *)parentManager, method);
  parentManager = WarehouseListViewManager__get_ObjectList(this, v4);
  if ( !parentManager )
    goto LABEL_10;
  v5 = *((_DWORD *)parentManager + 6);
  v6 = (System_Collections_Generic_List_object__o *)parentManager;
  if ( v5 >= 1 )
  {
    v7 = 0;
    while ( 1 )
    {
      parentManager = System_Collections_Generic_List_object___get_Item(
                        v6,
                        v7,
                        (const MethodInfo_37984EC *)Method_System_Collections_Generic_List_WarehouseListViewObject__get_Item__);
      if ( !parentManager )
        break;
      (*(void (__fastcall **)(void *, bool, _QWORD))(*(_QWORD *)parentManager + 456LL))(
        parentManager,
        this->fields.isInput,
        *(_QWORD *)(*(_QWORD *)parentManager + 464LL));
      if ( v5 == ++v7 )
        return;
    }
LABEL_10:
    sub_1C32E7C(parentManager);
  }
}


void WarehouseListViewManager__ReleaseAll(WarehouseListViewManager_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x0
  _BOOL8 v4; // x0
  Il2CppObject *current; // x20
  __int64 naturalAligment; // x9
  const MethodInfo *v7; // x3
  const MethodInfo *v8; // x1
  System_Collections_Generic_List_Enumerator_object__o v9; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4C3579E & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__);
    sub_1C32C20(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    sub_1C32C20(&WarehouseListViewItem_TypeInfo);
    byte_4C3579E = 1;
  }
  memset(&v9, 0, sizeof(v9));
  itemList = this->fields.itemList;
  this->fields.sellEnableRestCnt = 0;
  if ( !itemList )
    sub_1C32E7C(0);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v9,
    (System_Collections_Generic_List_object__o *)itemList,
    (const MethodInfo_37992B4 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  while ( 1 )
  {
    v4 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v9,
           (const MethodInfo_3522FA8 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    if ( !v4 )
      break;
    current = v9.fields._current;
    if ( !v9.fields._current )
      goto LABEL_12;
    naturalAligment = WarehouseListViewItem_TypeInfo->_2.naturalAligment;
    if ( v9.fields._current->klass->_2.naturalAligment < (unsigned int)naturalAligment
      || (WarehouseListViewItem_c *)v9.fields._current->klass->_2.typeHierarchy[naturalAligment - 1] != WarehouseListViewItem_TypeInfo )
    {
      sub_1C3313C(v9.fields._current);
LABEL_12:
      sub_1C32E7C(v4);
    }
    ListViewItem__set_IsSelect((ListViewItem_o *)v9.fields._current, 0, 0);
    WarehouseListViewManager__ChangeSellEnableRestCnt(this, 1, (WarehouseListViewItem_o *)current, v7);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v9,
    (const MethodInfo_3522FA4 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
  this->fields.selectSum = 0;
  WarehouseListViewManager__RefrashListDisp(this, v8);
}


// local variable allocation has failed, the output may be wrong!
void WarehouseListViewManager__RequestListObject(
        WarehouseListViewManager_o *this,
        int32_t mode,
        float delay,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *ObjectList; // x0
  int32_t size; // w8
  Il2CppObject *current; // x21
  System_Action_o *v10; // x22
  __int64 v11; // x0
  System_Collections_Generic_List_Enumerator_object__o v12; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4C3579A & 1) == 0 )
  {
    sub_1C32C20(&System_Action_TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_WarehouseListViewObject__Dispose__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_WarehouseListViewObject__MoveNext__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_WarehouseListViewObject__get_Current__);
    sub_1C32C20(&Method_System_Collections_Generic_List_WarehouseListViewObject__GetEnumerator__);
    sub_1C32C20(&Method_System_Collections_Generic_List_WarehouseListViewObject__get_Count__);
    sub_1C32C20(&Method_WarehouseListViewManager_OnMoveEnd__);
    sub_1C32C20(&StringLiteral_9941/*"OnMoveEnd"*/);
    byte_4C3579A = 1;
  }
  memset(&v12, 0, sizeof(v12));
  ObjectList = (System_Collections_Generic_List_object__o *)WarehouseListViewManager__get_ObjectList(
                                                              this,
                                                              *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_1C32E7C(0);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_9941/*"OnMoveEnd"*/,
      delay,
      0);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v12,
      ObjectList,
      (const MethodInfo_37992B4 *)Method_System_Collections_Generic_List_WarehouseListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v12,
              (const MethodInfo_3522FA8 *)Method_System_Collections_Generic_List_Enumerator_WarehouseListViewObject__MoveNext__) )
    {
      current = v12.fields._current;
      v10 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
      System_Action___ctor(v10, (Il2CppObject *)this, Method_WarehouseListViewManager_OnMoveEnd__, 0);
      if ( !current )
        sub_1C32E7C(v11);
      WarehouseListViewObject__Init_38329840((WarehouseListViewObject_o *)current, mode, v10, delay, 0);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v12,
      (const MethodInfo_3522FA4 *)Method_System_Collections_Generic_List_Enumerator_WarehouseListViewObject__Dispose__);
  }
}


// local variable allocation has failed, the output may be wrong!
void WarehouseListViewManager__RequestListObject_38319944(
        WarehouseListViewManager_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *ObjectList; // x0
  int32_t size; // w8
  Il2CppObject *current; // x21
  System_Action_o *v8; // x22
  __int64 v9; // x0
  System_Collections_Generic_List_Enumerator_object__o v10; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4C3579B & 1) == 0 )
  {
    sub_1C32C20(&System_Action_TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_WarehouseListViewObject__Dispose__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_WarehouseListViewObject__MoveNext__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_WarehouseListViewObject__get_Current__);
    sub_1C32C20(&Method_System_Collections_Generic_List_WarehouseListViewObject__GetEnumerator__);
    sub_1C32C20(&Method_System_Collections_Generic_List_WarehouseListViewObject__get_Count__);
    sub_1C32C20(&Method_WarehouseListViewManager_OnMoveEnd__);
    sub_1C32C20(&StringLiteral_9941/*"OnMoveEnd"*/);
    byte_4C3579B = 1;
  }
  memset(&v10, 0, sizeof(v10));
  ObjectList = (System_Collections_Generic_List_object__o *)WarehouseListViewManager__get_ObjectList(
                                                              this,
                                                              *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_1C32E7C(0);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_9941/*"OnMoveEnd"*/,
      0.0,
      0);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v10,
      ObjectList,
      (const MethodInfo_37992B4 *)Method_System_Collections_Generic_List_WarehouseListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v10,
              (const MethodInfo_3522FA8 *)Method_System_Collections_Generic_List_Enumerator_WarehouseListViewObject__MoveNext__) )
    {
      current = v10.fields._current;
      v8 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
      System_Action___ctor(v8, (Il2CppObject *)this, Method_WarehouseListViewManager_OnMoveEnd__, 0);
      if ( !current )
        sub_1C32E7C(v9);
      WarehouseListViewObject__Init_38329924((WarehouseListViewObject_o *)current, mode, v8, 0);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v10,
      (const MethodInfo_3522FA4 *)Method_System_Collections_Generic_List_Enumerator_WarehouseListViewObject__Dispose__);
  }
}


void WarehouseListViewManager__SaveSortInfo(WarehouseListViewManager_o *this, const MethodInfo *method)
{
  WarehouseListViewManager_c *v2; // x0
  ListViewSort_o *servantSortInfo; // x8
  __int64 v4; // x0
  ListViewSort_o *servantEquipSortInfo; // x8
  ListViewSort_o *servantWarehouseSortInfo; // x8
  ListViewSort_o *servantEquipWarehouseSortInfo; // x8

  if ( (byte_4C35793 & 1) == 0 )
  {
    sub_1C32C20(&WarehouseListViewManager_TypeInfo);
    byte_4C35793 = 1;
  }
  v2 = WarehouseListViewManager_TypeInfo;
  if ( !WarehouseListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarehouseListViewManager_TypeInfo);
    v2 = WarehouseListViewManager_TypeInfo;
  }
  servantSortInfo = v2->static_fields->servantSortInfo;
  if ( servantSortInfo )
  {
    if ( !v2->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v2);
      servantSortInfo = WarehouseListViewManager_TypeInfo->static_fields->servantSortInfo;
      if ( !servantSortInfo )
        goto LABEL_28;
    }
    ListViewSort__Save(servantSortInfo, 0);
    v2 = WarehouseListViewManager_TypeInfo;
  }
  if ( !v2->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v2);
    v2 = WarehouseListViewManager_TypeInfo;
  }
  servantEquipSortInfo = v2->static_fields->servantEquipSortInfo;
  if ( servantEquipSortInfo )
  {
    if ( !v2->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v2);
      servantEquipSortInfo = WarehouseListViewManager_TypeInfo->static_fields->servantEquipSortInfo;
      if ( !servantEquipSortInfo )
        goto LABEL_28;
    }
    ListViewSort__Save(servantEquipSortInfo, 0);
    v2 = WarehouseListViewManager_TypeInfo;
  }
  if ( !v2->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v2);
    v2 = WarehouseListViewManager_TypeInfo;
  }
  servantWarehouseSortInfo = v2->static_fields->servantWarehouseSortInfo;
  if ( servantWarehouseSortInfo )
  {
    if ( !v2->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v2);
      servantWarehouseSortInfo = WarehouseListViewManager_TypeInfo->static_fields->servantWarehouseSortInfo;
      if ( !servantWarehouseSortInfo )
        goto LABEL_28;
    }
    ListViewSort__Save(servantWarehouseSortInfo, 0);
    v2 = WarehouseListViewManager_TypeInfo;
  }
  if ( !v2->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v2);
    v2 = WarehouseListViewManager_TypeInfo;
  }
  servantEquipWarehouseSortInfo = v2->static_fields->servantEquipWarehouseSortInfo;
  if ( servantEquipWarehouseSortInfo )
  {
    if ( v2->_2.cctor_finished
      || (j_il2cpp_runtime_class_init_0(v2),
          (servantEquipWarehouseSortInfo = WarehouseListViewManager_TypeInfo->static_fields->servantEquipWarehouseSortInfo) != 0) )
    {
      ListViewSort__Save(servantEquipWarehouseSortInfo, 0);
      return;
    }
LABEL_28:
    sub_1C32E7C(v4);
  }
}


void WarehouseListViewManager__SelectListView(
        WarehouseListViewManager_o *this,
        WarehouseListViewItem_o *selectItem,
        const MethodInfo *method)
{
  WarehouseListViewManager_o *v4; // x19
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  const MethodInfo *v7; // x4
  _QWORD *v8; // x0
  System_Reflection_MethodBase_o *v9; // x0
  struct WarehouseListManager_o *parentManager; // x8
  struct WarehouseListViewManager_o *baseListViewManager; // x9
  UILabel_o *selectDoneLabel; // x21
  __int64 v13; // x2
  __int64 v14; // x3
  __int64 v15; // x4
  __int64 v16; // x5
  __int64 v17; // x6
  __int64 v18; // x7
  struct WarehouseListManager_o *v19; // x8
  WarehouseListViewManager_o *v20; // x22
  __int64 v21; // x2
  __int64 v22; // x3
  __int64 v23; // x4
  __int64 v24; // x5
  __int64 v25; // x6
  __int64 v26; // x7
  struct WarehouseListManager_o *v27; // x8
  Il2CppObject *v28; // x23
  Il2CppObject *v29; // x0
  const MethodInfo *v30; // x3
  const MethodInfo *v31; // x2
  struct WarehouseListManager_o *v32; // x8
  const MethodInfo *v33; // x1
  bool IsSelectEnable; // w21
  _QWORD *v35; // x8
  struct WarehouseListManager_o *v36; // x8
  struct WarehouseListViewManager_o *v37; // x9
  UILabel_o *v38; // x21
  __int64 v39; // x2
  __int64 v40; // x3
  __int64 v41; // x4
  __int64 v42; // x5
  __int64 v43; // x6
  __int64 v44; // x7
  struct WarehouseListManager_o *v45; // x8
  WarehouseListViewManager_o *v46; // x22
  __int64 v47; // x2
  __int64 v48; // x3
  __int64 v49; // x4
  __int64 v50; // x5
  __int64 v51; // x6
  __int64 v52; // x7
  struct WarehouseListManager_o *v53; // x8
  Il2CppObject *v54; // x23
  Il2CppObject *v55; // x0
  const MethodInfo *v56; // x3
  int32_t sendMax; // [xsp+8h] [xbp-38h] BYREF
  int32_t totalSum; // [xsp+Ch] [xbp-34h] BYREF

  v4 = this;
  if ( (byte_4C357A1 & 1) == 0 )
  {
    sub_1C32C20(&int_TypeInfo);
    sub_1C32C20(&LocalizationManager_TypeInfo);
    sub_1C32C20(&Method_WarehouseListViewManager_SelectListView__);
    this = (WarehouseListViewManager_o *)sub_1C32C20(&StringLiteral_12477/*"SUM_INFO"*/);
    byte_4C357A1 = 1;
  }
  if ( !selectItem )
    goto LABEL_34;
  if ( !WarehouseListViewItem__get_IsCanNotSelect(selectItem, (const MethodInfo *)selectItem) )
  {
    if ( ListViewItem__get_IsSelect((ListViewItem_o *)selectItem, 0) )
    {
      v8 = Method_WarehouseListViewManager_SelectListView__;
      if ( (*((_BYTE *)Method_WarehouseListViewManager_SelectListView__ + 83) & 2) != 0 )
        v8 = (_QWORD *)sub_1C32C38(Method_WarehouseListViewManager_SelectListView__);
      v9 = (System_Reflection_MethodBase_o *)sub_1C32C04(v8, v8[4]);
      OverwriteAssetSoundName__PlaySystemSe(v9, 0, 0, 0);
      parentManager = v4->fields.parentManager;
      --v4->fields.selectSum;
      if ( parentManager )
      {
        baseListViewManager = parentManager->fields.baseListViewManager;
        if ( baseListViewManager )
        {
          parentManager->fields.totalSum = baseListViewManager->fields.selectSum;
          selectDoneLabel = v4->fields.selectDoneLabel;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          this = (WarehouseListViewManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12477/*"SUM_INFO"*/, 0);
          v19 = v4->fields.parentManager;
          if ( v19 )
          {
            v20 = this;
            totalSum = v19->fields.totalSum;
            this = (WarehouseListViewManager_o *)j_il2cpp_value_box_0(
                                                   int_TypeInfo,
                                                   &totalSum,
                                                   v13,
                                                   v14,
                                                   v15,
                                                   v16,
                                                   v17,
                                                   v18);
            v27 = v4->fields.parentManager;
            if ( v27 )
            {
              v28 = (Il2CppObject *)this;
              sendMax = v27->fields.sendMax;
              v29 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &sendMax, v21, v22, v23, v24, v25, v26);
              this = (WarehouseListViewManager_o *)System_String__Format_63559836((System_String_o *)v20, v28, v29, 0);
              if ( selectDoneLabel )
              {
                UILabel__set_text(selectDoneLabel, (System_String_o *)this, 0);
                WarehouseListViewManager__ChangeSellEnableRestCnt(v4, 1, selectItem, v30);
                v32 = v4->fields.parentManager;
                if ( v32 )
                {
                  this = v32->fields.baseListViewManager;
                  if ( this )
                  {
                    WarehouseListViewManager__DecrementNumber(this, selectItem->fields.selectNum, v31);
                    ListViewItem__set_IsSelect((ListViewItem_o *)selectItem, 0, 0);
LABEL_32:
                    WarehouseListViewManager__RefrashListDisp(v4, v33);
                    return;
                  }
                }
              }
            }
          }
        }
      }
    }
    else
    {
      IsSelectEnable = WarehouseListViewManager__IsSelectEnable(v4, selectItem, 0, 0, v7);
      v35 = Method_WarehouseListViewManager_SelectListView__;
      if ( (*((_BYTE *)Method_WarehouseListViewManager_SelectListView__ + 83) & 2) != 0 )
        v35 = (_QWORD *)sub_1C32C38(Method_WarehouseListViewManager_SelectListView__);
      v6 = (System_Reflection_MethodBase_o *)sub_1C32C04(v35, v35[4]);
      if ( !IsSelectEnable )
        goto LABEL_33;
      OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0, 0);
      v36 = v4->fields.parentManager;
      if ( v36 )
      {
        selectItem->fields.selectNum = v36->fields.totalSum;
        ++v4->fields.selectSum;
        v37 = v36->fields.baseListViewManager;
        if ( v37 )
        {
          v36->fields.totalSum = v37->fields.selectSum;
          v38 = v4->fields.selectDoneLabel;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          this = (WarehouseListViewManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12477/*"SUM_INFO"*/, 0);
          v45 = v4->fields.parentManager;
          if ( v45 )
          {
            v46 = this;
            totalSum = v45->fields.totalSum;
            this = (WarehouseListViewManager_o *)j_il2cpp_value_box_0(
                                                   int_TypeInfo,
                                                   &totalSum,
                                                   v39,
                                                   v40,
                                                   v41,
                                                   v42,
                                                   v43,
                                                   v44);
            v53 = v4->fields.parentManager;
            if ( v53 )
            {
              v54 = (Il2CppObject *)this;
              sendMax = v53->fields.sendMax;
              v55 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &sendMax, v47, v48, v49, v50, v51, v52);
              this = (WarehouseListViewManager_o *)System_String__Format_63559836((System_String_o *)v46, v54, v55, 0);
              if ( v38 )
              {
                UILabel__set_text(v38, (System_String_o *)this, 0);
                WarehouseListViewManager__ChangeSellEnableRestCnt(v4, 0, selectItem, v56);
                goto LABEL_32;
              }
            }
          }
        }
      }
    }
LABEL_34:
    sub_1C32E7C(this);
  }
  v5 = Method_WarehouseListViewManager_SelectListView__;
  if ( (*((_BYTE *)Method_WarehouseListViewManager_SelectListView__ + 83) & 2) != 0 )
    v5 = (_QWORD *)sub_1C32C38(Method_WarehouseListViewManager_SelectListView__);
  v6 = (System_Reflection_MethodBase_o *)sub_1C32C04(v5, v5[4]);
LABEL_33:
  OverwriteAssetSoundName__PlaySystemSe(v6, 2, 0, 0);
}


void WarehouseListViewManager__SelectListViewChoice(
        WarehouseListViewManager_o *this,
        WarehouseListViewItem_o *selectItem,
        const MethodInfo *method)
{
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  __int64 v7; // x0
  const MethodInfo *v8; // x1

  if ( (byte_4C357A4 & 1) == 0 )
  {
    sub_1C32C20(&Method_WarehouseListViewManager_SelectListViewChoice__);
    byte_4C357A4 = 1;
  }
  v5 = Method_WarehouseListViewManager_SelectListViewChoice__;
  if ( (*((_BYTE *)Method_WarehouseListViewManager_SelectListViewChoice__ + 83) & 2) != 0 )
    v5 = (_QWORD *)sub_1C32C38(Method_WarehouseListViewManager_SelectListViewChoice__);
  v6 = (System_Reflection_MethodBase_o *)sub_1C32C04(v5, v5[4]);
  OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0, 0);
  if ( !selectItem )
    sub_1C32E7C(v7);
  selectItem->fields.isSwapChoice ^= 1u;
  WarehouseListViewManager__RefrashListDisp(this, v8);
}


void WarehouseListViewManager__SelectListViewLock(
        WarehouseListViewManager_o *this,
        WarehouseListViewItem_o *selectItem,
        const MethodInfo *method)
{
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  __int64 v7; // x0
  const MethodInfo *v8; // x1

  if ( (byte_4C357A3 & 1) == 0 )
  {
    sub_1C32C20(&Method_WarehouseListViewManager_SelectListViewLock__);
    byte_4C357A3 = 1;
  }
  v5 = Method_WarehouseListViewManager_SelectListViewLock__;
  if ( (*((_BYTE *)Method_WarehouseListViewManager_SelectListViewLock__ + 83) & 2) != 0 )
    v5 = (_QWORD *)sub_1C32C38(Method_WarehouseListViewManager_SelectListViewLock__);
  v6 = (System_Reflection_MethodBase_o *)sub_1C32C04(v5, v5[4]);
  OverwriteAssetSoundName__PlaySystemSe(v6, 11, 0, 0);
  if ( !selectItem )
    sub_1C32E7C(v7);
  selectItem->fields.isSwapLock ^= 1u;
  WarehouseListViewManager__RefrashListDisp(this, v8);
}


void WarehouseListViewManager__SetDragEnd(WarehouseListViewManager_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x1
  const MethodInfo *v6; // x2
  int32_t dragStartIndex; // w20
  int32_t dragEndIndex; // w21

  if ( (byte_4C357B4 & 1) == 0 )
  {
    sub_1C32C20(&Method_WarehouseListViewManager_SetDragEnd__);
    byte_4C357B4 = 1;
  }
  v3 = Method_WarehouseListViewManager_SetDragEnd__;
  if ( (*((_BYTE *)Method_WarehouseListViewManager_SetDragEnd__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C32C38(Method_WarehouseListViewManager_SetDragEnd__);
  v4 = (System_Reflection_MethodBase_o *)sub_1C32C04(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
  dragStartIndex = this->fields.dragStartIndex;
  if ( (dragStartIndex & 0x80000000) == 0 )
  {
    dragEndIndex = this->fields.dragEndIndex;
    if ( dragStartIndex <= dragEndIndex )
    {
      do
        WarehouseListViewManager__DecideDragSelect(this, dragStartIndex++, v6);
      while ( dragStartIndex <= this->fields.dragEndIndex );
    }
    else
    {
      do
        WarehouseListViewManager__DecideDragSelect(this, dragEndIndex++, v6);
      while ( dragEndIndex <= this->fields.dragStartIndex );
    }
  }
  WarehouseListViewManager__RefrashListDisp(this, v5);
  *(_OWORD *)&this->fields.dragSelectSum = xmmword_C0CE30;
  this->fields.isDragSelect = 1;
  this->fields.dragSelectFriendShipSum = 0;
}


void WarehouseListViewManager__SetDragMove(
        WarehouseListViewManager_o *this,
        int32_t moveIndex,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( this->fields.dragEndIndex != moveIndex )
    WarehouseListViewManager__SetDragSelectItem(this, this->fields.dragStartIndex, moveIndex, v3);
}


bool WarehouseListViewManager__SetDragSelect(
        WarehouseListViewManager_o *this,
        int32_t index,
        bool isDragSelect,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *itemSortList; // x0
  System_Collections_Generic_List_object__o *v8; // x19
  WarehouseListViewItem_c *v9; // x1
  __int64 naturalAligment; // x9
  int items_high; // w8
  bool v12; // w21
  _BOOL4 v13; // w21
  bool IsSelect; // w0
  const MethodInfo *v15; // x4
  int v16; // w8
  UnityEngine_Object_o *syncRoot; // x20
  __int64 v18; // x9
  bool result; // w0
  WarehouseListViewManager_o *v20; // x0
  int32_t v21; // w1
  bool v22; // w2
  const MethodInfo *v23; // x3

  if ( (byte_4C357B2 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&WarehouseListViewItem_TypeInfo);
    sub_1C32C20(&WarehouseListViewObject_TypeInfo);
    byte_4C357B2 = 1;
  }
  itemSortList = (System_Collections_Generic_List_object__o *)this->fields.itemSortList;
  if ( !itemSortList )
    goto LABEL_46;
  itemSortList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                itemSortList,
                                                                index,
                                                                (const MethodInfo_37984EC *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
  if ( !itemSortList )
    goto LABEL_46;
  v8 = itemSortList;
  v9 = WarehouseListViewItem_TypeInfo;
  naturalAligment = WarehouseListViewItem_TypeInfo->_2.naturalAligment;
  if ( itemSortList->klass->_2.naturalAligment < (unsigned int)naturalAligment
    || (WarehouseListViewItem_c *)itemSortList->klass->_2.typeHierarchy[naturalAligment - 1] != WarehouseListViewItem_TypeInfo )
  {
    goto LABEL_47;
  }
  items_high = HIDWORD(itemSortList[6].fields._items);
  if ( !isDragSelect )
  {
    if ( (items_high & 0x80000000) == 0 )
    {
      if ( !ListViewItem__get_IsSelect((ListViewItem_o *)itemSortList, 0) && SHIDWORD(v8[6].fields._items) >= 1 )
      {
        if ( BYTE2(v8[4].fields._size) )
          --this->fields.dragSelectFriendShipSum;
        else
          --this->fields.dragSelectSum;
        if ( !this->fields.kind )
        {
          itemSortList = (System_Collections_Generic_List_object__o *)v8[3].monitor;
          if ( !itemSortList )
            goto LABEL_46;
          if ( ServantEntity__get_IsOrganization((ServantEntity_o *)itemSortList, 0) && !HIDWORD(v8[5].fields._items) )
            --this->fields.dragServantSelectSum;
        }
      }
      v12 = 0;
      v16 = -1;
      goto LABEL_27;
    }
    goto LABEL_29;
  }
  if ( (items_high & 0x80000000) == 0 )
    goto LABEL_29;
  HIDWORD(itemSortList[6].fields._items) = 0;
  v12 = 0;
  if ( WarehouseListViewItem__get_IsCanNotSelect((WarehouseListViewItem_o *)itemSortList, (const MethodInfo *)v9) )
    goto LABEL_30;
  v13 = this->fields.isDragSelect;
  IsSelect = ListViewItem__get_IsSelect((ListViewItem_o *)v8, 0);
  if ( !v13 )
  {
    if ( IsSelect )
    {
LABEL_45:
      v12 = 0;
      v16 = 1;
LABEL_27:
      HIDWORD(v8[6].fields._items) = v16;
      goto LABEL_30;
    }
    goto LABEL_29;
  }
  if ( IsSelect )
  {
LABEL_29:
    v12 = 0;
    goto LABEL_30;
  }
  if ( WarehouseListViewManager__IsSelectEnable(
         this,
         (WarehouseListViewItem_o *)v8,
         this->fields.dragSelectSum,
         this->fields.dragServantSelectSum,
         v15) )
  {
    if ( BYTE2(v8[4].fields._size) )
      ++this->fields.dragSelectFriendShipSum;
    else
      ++this->fields.dragSelectSum;
    if ( !this->fields.kind )
    {
      itemSortList = (System_Collections_Generic_List_object__o *)v8[3].monitor;
      if ( !itemSortList )
        goto LABEL_46;
      if ( ServantEntity__get_IsOrganization((ServantEntity_o *)itemSortList, 0) && !HIDWORD(v8[5].fields._items) )
        ++this->fields.dragServantSelectSum;
    }
    goto LABEL_45;
  }
  v12 = 1;
LABEL_30:
  syncRoot = (UnityEngine_Object_o *)v8[2].fields._syncRoot;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality(syncRoot, 0, 0) )
    return v12;
  itemSortList = (System_Collections_Generic_List_object__o *)v8[2].fields._syncRoot;
  if ( !itemSortList )
LABEL_46:
    sub_1C32E7C(itemSortList);
  v18 = WarehouseListViewObject_TypeInfo->_2.naturalAligment;
  if ( itemSortList->klass->_2.naturalAligment >= (unsigned int)v18
    && (WarehouseListViewObject_c *)itemSortList->klass->_2.typeHierarchy[v18 - 1] == WarehouseListViewObject_TypeInfo )
  {
    WarehouseListViewObject__SetupDisp((WarehouseListViewObject_o *)itemSortList, 0);
    return v12;
  }
LABEL_47:
  sub_1C3313C(itemSortList);
  WarehouseListViewManager__SetDragStart(v20, v21, v22, v23);
  return result;
}


void WarehouseListViewManager__SetDragSelectItem(
        WarehouseListViewManager_o *this,
        int32_t startIndex,
        int32_t endIndex,
        const MethodInfo *method)
{
  WarehouseListViewManager_o *v6; // x19
  int32_t dragStartIndex; // w8
  int32_t dragEndIndex; // w9
  int32_t v9; // w25
  int32_t v10; // w26
  int32_t v11; // w8
  int32_t v12; // w9
  int v13; // w24
  int32_t v14; // w20
  int32_t v15; // w23
  struct WarehouseListManager_o *parentManager; // x8
  int v17; // w27
  WarehouseListViewManager_o *v18; // x21
  __int64 naturalAligment; // x9
  UnityEngine_Object_o *clipRange; // x22
  __int64 v21; // x9
  WarehouseListViewManager_o *v22; // x0
  int32_t v23; // w1
  bool v24; // w2
  const MethodInfo *v25; // x3

  v6 = this;
  if ( (byte_4C357B1 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&WarehouseListViewItem_TypeInfo);
    this = (WarehouseListViewManager_o *)sub_1C32C20(&WarehouseListViewObject_TypeInfo);
    byte_4C357B1 = 1;
  }
  dragStartIndex = v6->fields.dragStartIndex;
  if ( dragStartIndex < 0 )
  {
    v9 = -1;
    v10 = -1;
  }
  else
  {
    dragEndIndex = v6->fields.dragEndIndex;
    if ( dragStartIndex <= dragEndIndex )
      v9 = v6->fields.dragEndIndex;
    else
      v9 = v6->fields.dragStartIndex;
    if ( dragStartIndex <= dragEndIndex )
      v10 = v6->fields.dragStartIndex;
    else
      v10 = v6->fields.dragEndIndex;
  }
  if ( startIndex <= endIndex )
    v11 = endIndex;
  else
    v11 = startIndex;
  if ( startIndex <= endIndex )
    v12 = startIndex;
  else
    v12 = endIndex;
  if ( startIndex < 0 )
    v13 = -1;
  else
    v13 = v11;
  if ( startIndex < 0 )
    v14 = -1;
  else
    v14 = v12;
  v6->fields.dragStartIndex = startIndex;
  v6->fields.dragEndIndex = endIndex;
  if ( (v10 & 0x80000000) == 0 && v10 <= v9 )
  {
    v15 = v10;
    do
    {
      if ( v15 > v13 || v14 < 0 || v15 < v14 )
        this = (WarehouseListViewManager_o *)WarehouseListViewManager__SetDragSelect(v6, v15, 0, method);
      ++v15;
    }
    while ( v15 <= v9 );
  }
  if ( (startIndex & 0x80000000) == 0 )
  {
    if ( startIndex <= endIndex )
    {
      do
      {
        if ( startIndex > v9 || v10 < 0 || startIndex < v10 )
          this = (WarehouseListViewManager_o *)WarehouseListViewManager__SetDragSelect(v6, startIndex, 1, method);
        ++startIndex;
      }
      while ( startIndex <= endIndex );
    }
    else
    {
      do
      {
        if ( startIndex > v9 || v10 < 0 || startIndex < v10 )
          this = (WarehouseListViewManager_o *)WarehouseListViewManager__SetDragSelect(v6, startIndex, 1, method);
        --startIndex;
      }
      while ( startIndex >= endIndex );
    }
    if ( (v14 & 0x80000000) == 0 && v6->fields.isDragSelect )
    {
      parentManager = v6->fields.parentManager;
      if ( !parentManager )
LABEL_63:
        sub_1C32E7C(this);
      if ( v14 <= v13 )
      {
        v17 = parentManager->fields.totalSum + 1;
        do
        {
          this = (WarehouseListViewManager_o *)v6->fields.itemSortList;
          if ( !this )
            goto LABEL_63;
          this = (WarehouseListViewManager_o *)System_Collections_Generic_List_object___get_Item(
                                                 (System_Collections_Generic_List_object__o *)this,
                                                 v14,
                                                 (const MethodInfo_37984EC *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
          if ( !this )
            goto LABEL_63;
          v18 = this;
          naturalAligment = WarehouseListViewItem_TypeInfo->_2.naturalAligment;
          if ( this->klass->_2.naturalAligment < (unsigned int)naturalAligment
            || (WarehouseListViewItem_c *)this->klass->_2.typeHierarchy[naturalAligment - 1] != WarehouseListViewItem_TypeInfo )
          {
            goto LABEL_64;
          }
          if ( SHIDWORD(this->fields.rightItem) >= 1 )
          {
            HIDWORD(this->fields.rightItem) = v17;
            clipRange = (UnityEngine_Object_o *)this->fields.clipRange;
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            ++v17;
            if ( UnityEngine_Object__op_Inequality(clipRange, 0, 0) )
            {
              this = (WarehouseListViewManager_o *)v18->fields.clipRange;
              if ( !this )
                goto LABEL_63;
              v21 = WarehouseListViewObject_TypeInfo->_2.naturalAligment;
              if ( this->klass->_2.naturalAligment < (unsigned int)v21
                || (WarehouseListViewObject_c *)this->klass->_2.typeHierarchy[v21 - 1] != WarehouseListViewObject_TypeInfo )
              {
LABEL_64:
                sub_1C3313C(this);
                WarehouseListViewManager__SetDragSelect(v22, v23, v24, v25);
                return;
              }
              WarehouseListViewObject__SetupDisp((WarehouseListViewObject_o *)this, 0);
            }
          }
          ++v14;
        }
        while ( v14 <= v13 );
      }
    }
  }
}


void WarehouseListViewManager__SetDragStart(
        WarehouseListViewManager_o *this,
        int32_t startIndex,
        bool isDragSelect,
        const MethodInfo *method)
{
  bool v6; // w21
  System_Collections_Generic_List_object__o *itemSortList; // x0
  int size; // w22
  int32_t v9; // w21
  __int64 naturalAligment; // x9
  UnityEngine_Object_o *scrollView; // x20

  v6 = isDragSelect;
  if ( (byte_4C357B3 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_1C32C20(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&WarehouseListViewItem_TypeInfo);
    byte_4C357B3 = 1;
  }
  *(_OWORD *)&this->fields.dragSelectSum = xmmword_C0CE30;
  itemSortList = (System_Collections_Generic_List_object__o *)this->fields.itemSortList;
  this->fields.isDragSelect = v6;
  this->fields.dragSelectFriendShipSum = 0;
  if ( !itemSortList )
    goto LABEL_19;
  size = itemSortList->fields._size;
  if ( size >= 1 )
  {
    v9 = 0;
    while ( 1 )
    {
      itemSortList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                    itemSortList,
                                                                    v9,
                                                                    (const MethodInfo_37984EC *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
      if ( !itemSortList )
        goto LABEL_19;
      naturalAligment = WarehouseListViewItem_TypeInfo->_2.naturalAligment;
      if ( itemSortList->klass->_2.naturalAligment < (unsigned int)naturalAligment
        || (WarehouseListViewItem_c *)itemSortList->klass->_2.typeHierarchy[naturalAligment - 1] != WarehouseListViewItem_TypeInfo )
      {
        break;
      }
      ++v9;
      HIDWORD(itemSortList[6].fields._items) = -1;
      if ( size == v9 )
        goto LABEL_12;
      itemSortList = (System_Collections_Generic_List_object__o *)this->fields.itemSortList;
      if ( !itemSortList )
        goto LABEL_19;
    }
    sub_1C3313C(itemSortList);
LABEL_19:
    sub_1C32E7C(itemSortList);
  }
LABEL_12:
  WarehouseListViewManager__SetDragSelectItem(this, startIndex, startIndex, method);
  scrollView = (UnityEngine_Object_o *)this->fields.scrollView;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(scrollView, 0, 0) )
  {
    itemSortList = (System_Collections_Generic_List_object__o *)this->fields.scrollView;
    if ( !itemSortList )
      goto LABEL_19;
    UIScrollView__Press((UIScrollView_o *)itemSortList, 0, 0);
  }
}


void WarehouseListViewManager__SetFilterButtonImage(WarehouseListViewManager_o *this, const MethodInfo *method)
{
  ListViewSort_o *sort; // x0
  UISprite_o *filterSprite; // x19
  System_String_o **v5; // x8

  if ( (byte_4C357AA & 1) == 0 )
  {
    sub_1C32C20(&StringLiteral_17485/*"btn_filter_on"*/);
    sub_1C32C20(&StringLiteral_17484/*"btn_filter"*/);
    byte_4C357AA = 1;
  }
  sort = this->fields.sort;
  if ( !sort
    || (filterSprite = this->fields.filterSprite,
        sort = (ListViewSort_o *)ListViewSort__CheckFilterDefaultAll(sort, -1, 0),
        !filterSprite) )
  {
    sub_1C32E7C(sort);
  }
  v5 = (System_String_o **)&StringLiteral_17484/*"btn_filter"*/;
  if ( ((unsigned __int8)sort & 1) == 0 )
    v5 = (System_String_o **)&StringLiteral_17485/*"btn_filter_on"*/;
  UISprite__set_spriteName(filterSprite, *v5, 0);
}


void WarehouseListViewManager__SetMode(
        WarehouseListViewManager_o *this,
        int32_t mode,
        WarehouseListViewManager_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v6; // x2

  this->fields.callbackFunc = callback;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.callbackFunc, (int32_t)callback, (int32_t)callback, method);
  WarehouseListViewManager__SetMode_38318368(this, mode, v6);
}


void WarehouseListViewManager__SetMode_38318368(
        WarehouseListViewManager_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x0
  _BOOL8 v6; // x0
  WarehouseListViewItem_o *v7; // x20
  __int64 v8; // x9
  const MethodInfo *v9; // x1
  _BOOL8 v10; // x0
  struct WarehouseListManager_o *v11; // x8
  struct WarehouseListViewManager_o *v12; // x9
  UILabel_o *v13; // x21
  System_String_o *v14; // x0
  __int64 v15; // x2
  __int64 v16; // x3
  __int64 v17; // x4
  __int64 v18; // x5
  __int64 v19; // x6
  __int64 v20; // x7
  struct WarehouseListManager_o *v21; // x8
  System_String_o *v22; // x22
  __int64 v23; // x0
  __int64 v24; // x2
  __int64 v25; // x3
  __int64 v26; // x4
  __int64 v27; // x5
  __int64 v28; // x6
  __int64 v29; // x7
  struct WarehouseListManager_o *v30; // x8
  Il2CppObject *v31; // x23
  Il2CppObject *v32; // x2
  System_String_o *v33; // x0
  __int64 v34; // x0
  const MethodInfo *v35; // x2
  struct WarehouseListManager_o *v36; // x8
  WarehouseListViewManager_o *v37; // x0
  char v38; // w24
  _BOOL8 v39; // x0
  WarehouseListViewItem_o *current; // x20
  __int64 naturalAligment; // x9
  const MethodInfo *v42; // x1
  _BOOL8 CanNotSelect; // x0
  struct WarehouseListManager_o *parentManager; // x8
  struct WarehouseListViewManager_o *baseListViewManager; // x9
  UILabel_o *selectDoneLabel; // x21
  System_String_o *v47; // x0
  __int64 v48; // x2
  __int64 v49; // x3
  __int64 v50; // x4
  __int64 v51; // x5
  __int64 v52; // x6
  __int64 v53; // x7
  struct WarehouseListManager_o *v54; // x8
  System_String_o *v55; // x22
  __int64 v56; // x0
  __int64 v57; // x2
  __int64 v58; // x3
  __int64 v59; // x4
  __int64 v60; // x5
  __int64 v61; // x6
  __int64 v62; // x7
  struct WarehouseListManager_o *v63; // x8
  Il2CppObject *v64; // x23
  Il2CppObject *v65; // x2
  System_String_o *v66; // x0
  __int64 v67; // x0
  const MethodInfo *v68; // x2
  struct WarehouseListManager_o *v69; // x8
  WarehouseListViewManager_o *v70; // x0
  const MethodInfo *v71; // x1
  const MethodInfo *v72; // x2
  int32_t v73; // w1
  const MethodInfo *v74; // x1
  int32_t sendMax; // [xsp+4h] [xbp-9Ch] BYREF
  System_Collections_Generic_List_Enumerator_object__o v76; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v77; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_4C35799 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__);
    sub_1C32C20(&int_TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    sub_1C32C20(&LocalizationManager_TypeInfo);
    sub_1C32C20(&WarehouseListViewItem_TypeInfo);
    sub_1C32C20(&StringLiteral_12477/*"SUM_INFO"*/);
    byte_4C35799 = 1;
  }
  memset(&v77, 0, sizeof(v77));
  this->fields.initMode = mode;
  this->fields.callbackCount = ListViewManager__get_ObjectSum((ListViewManager_o *)this, 0);
  ListViewManager__set_IsInput((ListViewManager_o *)this, mode == 2, 0);
  if ( (unsigned int)(mode - 1) < 2 )
  {
    itemList = this->fields.itemList;
    if ( itemList )
    {
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v76,
        (System_Collections_Generic_List_object__o *)itemList,
        (const MethodInfo_37992B4 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
      v77 = v76;
      v38 = 0;
      while ( 1 )
      {
        v39 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v77,
                (const MethodInfo_3522FA8 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
        if ( !v39 )
          break;
        current = (WarehouseListViewItem_o *)v77.fields._current;
        if ( !v77.fields._current )
          goto LABEL_50;
        naturalAligment = WarehouseListViewItem_TypeInfo->_2.naturalAligment;
        if ( v77.fields._current->klass->_2.naturalAligment < (unsigned int)naturalAligment
          || (WarehouseListViewItem_c *)v77.fields._current->klass->_2.typeHierarchy[naturalAligment - 1] != WarehouseListViewItem_TypeInfo )
        {
          sub_1C3313C(v77.fields._current);
LABEL_50:
          sub_1C32E7C(v39);
        }
        if ( ListViewItem__get_IsSelect((ListViewItem_o *)v77.fields._current, 0) )
        {
          CanNotSelect = WarehouseListViewItem__get_IsCanNotSelect(current, v42);
          if ( CanNotSelect )
          {
            parentManager = this->fields.parentManager;
            --this->fields.selectSum;
            if ( !parentManager )
              sub_1C32E7C(CanNotSelect);
            baseListViewManager = parentManager->fields.baseListViewManager;
            if ( !baseListViewManager )
              sub_1C32E7C(CanNotSelect);
            parentManager->fields.totalSum = baseListViewManager->fields.selectSum;
            selectDoneLabel = this->fields.selectDoneLabel;
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            v47 = LocalizationManager__Get((System_String_o *)StringLiteral_12477/*"SUM_INFO"*/, 0);
            v54 = this->fields.parentManager;
            if ( !v54 )
              sub_1C32E7C(v47);
            v55 = v47;
            LODWORD(v76.fields._list) = v54->fields.totalSum;
            v56 = j_il2cpp_value_box_0(int_TypeInfo, &v76, v48, v49, v50, v51, v52, v53);
            v63 = this->fields.parentManager;
            if ( !v63 )
              sub_1C32E7C(v56);
            v64 = (Il2CppObject *)v56;
            sendMax = v63->fields.sendMax;
            v65 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &sendMax, v57, v58, v59, v60, v61, v62);
            v66 = System_String__Format_63559836(v55, v64, v65, 0);
            if ( !selectDoneLabel )
              sub_1C32E7C(v66);
            UILabel__set_text(selectDoneLabel, v66, 0);
            v69 = this->fields.parentManager;
            if ( !v69 )
              sub_1C32E7C(v67);
            v70 = v69->fields.baseListViewManager;
            if ( !v70 )
              sub_1C32E7C(0);
            WarehouseListViewManager__DecrementNumber(v70, current->fields.selectNum, v68);
            ListViewItem__set_IsSelect((ListViewItem_o *)current, 0, 0);
            v38 = 1;
          }
        }
      }
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v77,
        (const MethodInfo_3522FA4 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
      if ( (v38 & 1) != 0 )
        WarehouseListViewManager__RefrashListDisp(this, v71);
      if ( this->fields.isInput )
        v73 = 3;
      else
        v73 = 2;
      goto LABEL_47;
    }
LABEL_60:
    sub_1C32E7C(itemList);
  }
  if ( mode != 3 )
    return;
  itemList = this->fields.itemList;
  if ( !itemList )
    goto LABEL_60;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v76,
    (System_Collections_Generic_List_object__o *)itemList,
    (const MethodInfo_37992B4 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  v77 = v76;
  while ( 1 )
  {
    v6 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v77,
           (const MethodInfo_3522FA8 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    if ( !v6 )
      break;
    v7 = (WarehouseListViewItem_o *)v77.fields._current;
    if ( !v77.fields._current )
      goto LABEL_52;
    v8 = WarehouseListViewItem_TypeInfo->_2.naturalAligment;
    if ( v77.fields._current->klass->_2.naturalAligment < (unsigned int)v8
      || (WarehouseListViewItem_c *)v77.fields._current->klass->_2.typeHierarchy[v8 - 1] != WarehouseListViewItem_TypeInfo )
    {
      sub_1C3313C(v77.fields._current);
LABEL_52:
      sub_1C32E7C(v6);
    }
    if ( ListViewItem__get_IsSelect((ListViewItem_o *)v77.fields._current, 0) )
    {
      v10 = WarehouseListViewItem__get_IsCanNotSelect(v7, v9);
      if ( v10 )
      {
        v11 = this->fields.parentManager;
        --this->fields.selectSum;
        if ( !v11 )
          sub_1C32E7C(v10);
        v12 = v11->fields.baseListViewManager;
        if ( !v12 )
          sub_1C32E7C(v10);
        v11->fields.totalSum = v12->fields.selectSum;
        v13 = this->fields.selectDoneLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v14 = LocalizationManager__Get((System_String_o *)StringLiteral_12477/*"SUM_INFO"*/, 0);
        v21 = this->fields.parentManager;
        if ( !v21 )
          sub_1C32E7C(v14);
        v22 = v14;
        LODWORD(v76.fields._list) = v21->fields.totalSum;
        v23 = j_il2cpp_value_box_0(int_TypeInfo, &v76, v15, v16, v17, v18, v19, v20);
        v30 = this->fields.parentManager;
        if ( !v30 )
          sub_1C32E7C(v23);
        v31 = (Il2CppObject *)v23;
        sendMax = v30->fields.sendMax;
        v32 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &sendMax, v24, v25, v26, v27, v28, v29);
        v33 = System_String__Format_63559836(v22, v31, v32, 0);
        if ( !v13 )
          sub_1C32E7C(v33);
        UILabel__set_text(v13, v33, 0);
        v36 = this->fields.parentManager;
        if ( !v36 )
          sub_1C32E7C(v34);
        v37 = v36->fields.baseListViewManager;
        if ( !v37 )
          sub_1C32E7C(0);
        WarehouseListViewManager__DecrementNumber(v37, v7->fields.selectNum, v35);
        ListViewItem__set_IsSelect((ListViewItem_o *)v7, 0, 0);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v77,
    (const MethodInfo_3522FA4 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
  WarehouseListViewManager__RefrashListDisp(this, v74);
  v73 = 4;
LABEL_47:
  WarehouseListViewManager__RequestListObject_38319944(this, v73, v72);
}


void WarehouseListViewManager__SetObjectItem(
        WarehouseListViewManager_o *this,
        ListViewObject_o *obj,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  WarehouseListViewManager_o *v5; // x20
  __int64 naturalAligment; // x10
  int32_t v7; // w1

  v5 = this;
  if ( (byte_4C35798 & 1) == 0 )
  {
    this = (WarehouseListViewManager_o *)sub_1C32C20(&WarehouseListViewObject_TypeInfo);
    byte_4C35798 = 1;
  }
  if ( !obj
    || (naturalAligment = WarehouseListViewObject_TypeInfo->_2.naturalAligment,
        obj->klass->_2.naturalAligment < (unsigned int)naturalAligment)
    || (WarehouseListViewObject_c *)obj->klass->_2.typeHierarchy[naturalAligment - 1] != WarehouseListViewObject_TypeInfo )
  {
    sub_1C32E7C(this);
  }
  if ( v5->fields.initMode == 2 )
    v7 = 3;
  else
    v7 = 2;
  WarehouseListViewObject__Init_38328928((WarehouseListViewObject_o *)obj, v7, 0);
}


void WarehouseListViewManager__SetSortButtonImage(WarehouseListViewManager_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *sortKindLabel; // x20
  ListViewSort_o *sort; // x0
  UILabel_o *v5; // x20
  UnityEngine_Object_o *sortOrderSprite; // x20
  struct ListViewSort_o *v7; // x8
  int32_t sortKind; // w9
  System_String_o **v9; // x8
  struct ListViewSort_o *v10; // x8
  System_String_o **v11; // x9
  System_String_o **v12; // x10
  System_String_o **v13; // x8
  System_String_o **v14; // x8
  UnityEngine_Object_o *bonusFilterKindLabel; // x20
  UILabel_o *v16; // x20

  if ( (byte_4C357AD & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&StringLiteral_17521/*"btn_sort_up"*/);
    sub_1C32C20(&StringLiteral_17619/*"btn_txt_up"*/);
    sub_1C32C20(&StringLiteral_17570/*"btn_txt_new"*/);
    sub_1C32C20(&StringLiteral_17560/*"btn_txt_down"*/);
    sub_1C32C20(&StringLiteral_17577/*"btn_txt_old"*/);
    sub_1C32C20(&StringLiteral_17518/*"btn_sort_down"*/);
    byte_4C357AD = 1;
  }
  sortKindLabel = (UnityEngine_Object_o *)this->fields.sortKindLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(sortKindLabel, 0, 0) )
  {
    sort = this->fields.sort;
    if ( !sort )
      goto LABEL_41;
    v5 = this->fields.sortKindLabel;
    sort = (ListViewSort_o *)ListViewSort__GetSortKindButtonText(sort, 0, 0);
    if ( !v5 )
      goto LABEL_41;
    UILabel__set_text(v5, (System_String_o *)sort, 0);
  }
  sortOrderSprite = (UnityEngine_Object_o *)this->fields.sortOrderSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  sort = (ListViewSort_o *)UnityEngine_Object__op_Inequality(sortOrderSprite, 0, 0);
  if ( ((unsigned __int8)sort & 1) != 0 )
  {
    v7 = this->fields.sort;
    if ( !v7 )
      goto LABEL_41;
    sortKind = v7->fields.sortKind;
    if ( sortKind == 11 || sortKind == 1 )
    {
      sort = (ListViewSort_o *)this->fields.sortExplanationSprite;
      if ( !sort )
        goto LABEL_41;
      v9 = (System_String_o **)(v7->fields.isAscendingOrder ? &StringLiteral_17577/*"btn_txt_old"*/ : &StringLiteral_17570/*"btn_txt_new"*/);
      UISprite__set_spriteName((UISprite_o *)sort, *v9, 0);
      v10 = this->fields.sort;
      if ( !v10 )
        goto LABEL_41;
      sort = (ListViewSort_o *)this->fields.sortOrderSprite;
      if ( !sort )
        goto LABEL_41;
      v11 = (System_String_o **)&StringLiteral_17518/*"btn_sort_down"*/;
      v12 = (System_String_o **)&StringLiteral_17521/*"btn_sort_up"*/;
    }
    else
    {
      sort = (ListViewSort_o *)this->fields.sortExplanationSprite;
      if ( !sort )
        goto LABEL_41;
      v13 = (System_String_o **)(v7->fields.isAscendingOrder ? &StringLiteral_17619/*"btn_txt_up"*/ : &StringLiteral_17560/*"btn_txt_down"*/);
      UISprite__set_spriteName((UISprite_o *)sort, *v13, 0);
      v10 = this->fields.sort;
      if ( !v10 )
        goto LABEL_41;
      sort = (ListViewSort_o *)this->fields.sortOrderSprite;
      if ( !sort )
        goto LABEL_41;
      v11 = (System_String_o **)&StringLiteral_17521/*"btn_sort_up"*/;
      v12 = (System_String_o **)&StringLiteral_17518/*"btn_sort_down"*/;
    }
    if ( v10->fields.isAscendingOrder )
      v14 = v11;
    else
      v14 = v12;
    UISprite__set_spriteName((UISprite_o *)sort, *v14, 0);
  }
  bonusFilterKindLabel = (UnityEngine_Object_o *)this->fields.bonusFilterKindLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(bonusFilterKindLabel, 0, 0) )
  {
    sort = this->fields.sort;
    if ( !sort )
      goto LABEL_41;
    if ( sort->fields.isBonusKind )
    {
      v16 = this->fields.bonusFilterKindLabel;
      sort = (ListViewSort_o *)ListViewSort__GetBonusFilterButtonText(
                                 sort,
                                 this->fields.alignedBonusFilterInfos,
                                 this->fields.isQuestStart,
                                 0);
      if ( v16 )
      {
        UILabel__set_text(v16, (System_String_o *)sort, 0);
        return;
      }
LABEL_41:
      sub_1C32E7C(sort);
    }
  }
}


void WarehouseListViewManager__UpdateItemState(
        WarehouseListViewManager_o *this,
        bool isPushMode,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *SelfUserGame; // x0
  System_Collections_Generic_List_object__o *v6; // x8
  void *monitor; // x23
  _BOOL8 v8; // x0
  Il2CppObject *current; // x20
  __int64 naturalAligment; // x9
  _OWORD *v11; // x8
  __int128 v12; // q0
  UserServantEntity_o *v13; // x0
  bool v14; // w8
  Il2CppObject *v15; // x26
  UserServantEntity_o *v16; // x0
  _BOOL8 IsEventJoin; // x0
  UserServantEntity_o *v18; // x0
  UserServantEntity_o *v19; // x0
  UserServantEntity_o *v20; // x0
  Il2CppObject *v21; // [xsp+8h] [xbp-C8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v22; // [xsp+10h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v23; // [xsp+30h] [xbp-A0h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v24; // [xsp+50h] [xbp-80h] BYREF

  if ( (byte_4C357B9 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__);
    sub_1C32C20(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    sub_1C32C20(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C32C20(&WarehouseListViewItem_TypeInfo);
    byte_4C357B9 = 1;
  }
  memset(&v24, 0, sizeof(v24));
  SelfUserGame = (System_Collections_Generic_List_object__o *)UserGameMaster__getSelfUserGame(0);
  if ( !SelfUserGame
    || (v6 = SelfUserGame, (SelfUserGame = (System_Collections_Generic_List_object__o *)this->fields.itemList) == 0) )
  {
    sub_1C32E7C(SelfUserGame);
  }
  monitor = v6[3].monitor;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v23,
    SelfUserGame,
    (const MethodInfo_37992B4 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  v21 = 0;
  *(_OWORD *)&v24.fields._list = *(_OWORD *)&v23.fields.currentCryptoKey;
  v24.fields._current = (Il2CppObject *)v23.fields.fakeValue;
  while ( 1 )
  {
    v8 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v24,
           (const MethodInfo_3522FA8 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    if ( !v8 )
      break;
    current = v24.fields._current;
    if ( !v24.fields._current )
      goto LABEL_37;
    naturalAligment = WarehouseListViewItem_TypeInfo->_2.naturalAligment;
    if ( v24.fields._current->klass->_2.naturalAligment < (unsigned int)naturalAligment
      || (WarehouseListViewItem_c *)v24.fields._current->klass->_2.typeHierarchy[naturalAligment - 1] != WarehouseListViewItem_TypeInfo )
    {
      sub_1C3313C(v24.fields._current);
LABEL_37:
      sub_1C32E7C(v8);
    }
    v11 = v24.fields._current[7].monitor;
    HIBYTE(v24.fields._current[11].klass) = isPushMode;
    if ( !v11 )
      sub_1C32E7C(v8);
    v12 = v11[2];
    *(_OWORD *)&v23.fields.currentCryptoKey = v11[1];
    *(_OWORD *)&v23.fields.fakeValue = v12;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    v22 = v23;
    LOBYTE(current[11].monitor) = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48891308(&v22, 0) == (_QWORD)monitor;
    if ( isPushMode )
    {
      v13 = (UserServantEntity_o *)current[7].monitor;
      if ( !v13 )
        sub_1C32E7C(0);
      if ( UserServantEntity__IsLeave(v13, 0) )
      {
        v14 = 0;
        v15 = current;
      }
      else
      {
        v16 = (UserServantEntity_o *)current[7].monitor;
        if ( !v16 )
          sub_1C32E7C(0);
        IsEventJoin = UserServantEntity__IsEventJoin(v16, 0);
        if ( IsEventJoin )
          v15 = v21;
        else
          v15 = current;
        if ( IsEventJoin )
        {
          v14 = 0;
          v15 = current;
        }
        else
        {
          v18 = (UserServantEntity_o *)current[7].monitor;
          if ( !v18 )
            sub_1C32E7C(0);
          IsEventJoin = UserServantEntity__IsCombineMaterial(v18, 0);
          if ( IsEventJoin )
          {
            v14 = 0;
            v15 = current;
          }
          else
          {
            v19 = (UserServantEntity_o *)current[7].monitor;
            if ( !v19 )
              sub_1C32E7C(0);
            IsEventJoin = UserServantEntity__IsStatusUp(v19, 0);
            if ( IsEventJoin )
            {
              v14 = 0;
            }
            else
            {
              v20 = (UserServantEntity_o *)current[7].monitor;
              if ( !v20 )
                sub_1C32E7C(0);
              IsEventJoin = UserServantEntity__IsMaterialTd(v20, 0);
              v14 = !IsEventJoin;
            }
          }
          v21 = current;
        }
        if ( !v15 )
          sub_1C32E7C(IsEventJoin);
      }
      BYTE1(v15[11].monitor) = v14;
    }
    else
    {
      BYTE1(current[11].monitor) = 1;
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v24,
    (const MethodInfo_3522FA4 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
}


void WarehouseListViewManager__add_callbackFunc(
        WarehouseListViewManager_o *this,
        WarehouseListViewManager_CallbackFunc_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *callbackFunc; // x21
  struct WarehouseListViewManager_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v7; // x0
  __int64 v8; // x0
  bool v9; // zf
  WarehouseListViewManager_o *v10; // x0
  WarehouseListViewManager_CallbackFunc_o *v11; // x1
  const MethodInfo *v12; // x2

  if ( (byte_4C3578B & 1) == 0 )
  {
    sub_1C32C20(&WarehouseListViewManager_CallbackFunc_TypeInfo);
    byte_4C3578B = 1;
  }
  callbackFunc = (System_Delegate_o *)this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  while ( 1 )
  {
    v7 = System_Delegate__Combine(callbackFunc, (System_Delegate_o *)value, 0);
    if ( v7 )
    {
      if ( (WarehouseListViewManager_CallbackFunc_c *)v7->klass != WarehouseListViewManager_CallbackFunc_TypeInfo )
        break;
    }
    v8 = sub_1C6CE78(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1C3313C(v7);
  WarehouseListViewManager__remove_callbackFunc(v10, v11, v12);
}


System_Collections_Generic_List_WarehouseListViewObject__o *WarehouseListViewManager__get_ClippingObjectList(
        WarehouseListViewManager_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x19
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  Il2CppObject *current; // x21
  _BOOL8 v6; // x0
  Il2CppObject *Component_object; // x0
  Il2CppObject *v8; // x21
  ListViewItem_o *Item; // x0
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  _BOOL8 v12; // x0
  struct System_Object_array *items; // x8
  _QWORD *v14; // x9
  __int64 size; // x10
  Il2CppClass **v16; // x0
  System_Collections_Generic_List_Enumerator_object__o v18; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v19; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_4C35790 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_1C32C20(&Method_UnityEngine_GameObject_GetComponent_WarehouseListViewObject___);
    sub_1C32C20(&Method_System_Collections_Generic_List_WarehouseListViewObject__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_1C32C20(&Method_System_Collections_Generic_List_WarehouseListViewObject___ctor__);
    sub_1C32C20(&System_Collections_Generic_List_WarehouseListViewObject__TypeInfo);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C35790 = 1;
  }
  memset(&v19, 0, sizeof(v19));
  v3 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_WarehouseListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_WarehouseListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_1C32E7C(0);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v18,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_37992B4 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v19 = v18;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v19,
            (const MethodInfo_3522FA8 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v19.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v6 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0, 0);
    if ( v6 )
    {
      if ( !current )
        sub_1C32E7C(v6);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_3134970 *)Method_UnityEngine_GameObject_GetComponent_WarehouseListViewObject___);
      v8 = Component_object;
      if ( !Component_object )
        sub_1C32E7C(0);
      Item = (ListViewItem_o *)WarehouseListViewObject__GetItem((WarehouseListViewObject_o *)Component_object, 0);
      if ( !Item )
        sub_1C32E7C(0);
      if ( Item->fields.isTermination )
      {
        v12 = ListViewManager__ClippingItem_43718444((ListViewManager_o *)this, Item, 0);
        if ( v12 )
        {
          if ( !v3 )
            sub_1C32E7C(v12);
          items = v3->fields._items;
          v14 = Method_System_Collections_Generic_List_WarehouseListViewObject__Add__;
          ++v3->fields._version;
          if ( !items )
            sub_1C32E7C(v12);
          size = v3->fields._size;
          if ( (unsigned int)size < LODWORD(items->max_length) )
            goto LABEL_17;
LABEL_21:
          System_Collections_Generic_List_object___AddWithResize(
            v3,
            v8,
            *(const MethodInfo_37987BC **)(*(_QWORD *)(v14[4] + 192LL) + 112LL));
        }
      }
      else
      {
        if ( !v3 )
          sub_1C32E7C(Item);
        items = v3->fields._items;
        v14 = Method_System_Collections_Generic_List_WarehouseListViewObject__Add__;
        ++v3->fields._version;
        if ( !items )
          sub_1C32E7C(Item);
        size = v3->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
          goto LABEL_21;
LABEL_17:
        v16 = &items->obj.klass + size;
        v3->fields._size = size + 1;
        v16[4] = (Il2CppClass *)v8;
        sub_1C32BC4((CGThumbnailListItem_o *)(v16 + 4), (int32_t)v8, v10, v11);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v19,
    (const MethodInfo_3522FA4 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_WarehouseListViewObject__o *)v3;
}


System_Collections_Generic_List_WarehouseListViewObject__o *WarehouseListViewManager__get_ObjectList(
        WarehouseListViewManager_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x19
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  Il2CppObject *current; // x20
  _BOOL8 v6; // x0
  Il2CppObject *Component_object; // x0
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  Il2CppObject *v10; // x1
  struct System_Object_array *items; // x8
  _QWORD *v12; // x9
  __int64 size; // x10
  Il2CppClass **v14; // x0
  System_Collections_Generic_List_Enumerator_object__o v16; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v17; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4C3578F & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_1C32C20(&Method_UnityEngine_GameObject_GetComponent_WarehouseListViewObject___);
    sub_1C32C20(&Method_System_Collections_Generic_List_WarehouseListViewObject__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_1C32C20(&Method_System_Collections_Generic_List_WarehouseListViewObject___ctor__);
    sub_1C32C20(&System_Collections_Generic_List_WarehouseListViewObject__TypeInfo);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C3578F = 1;
  }
  memset(&v17, 0, sizeof(v17));
  v3 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_WarehouseListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_WarehouseListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_1C32E7C(0);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v16,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_37992B4 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v17 = v16;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v17,
            (const MethodInfo_3522FA8 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v17.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v6 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0, 0);
    if ( v6 )
    {
      if ( !current )
        sub_1C32E7C(v6);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_3134970 *)Method_UnityEngine_GameObject_GetComponent_WarehouseListViewObject___);
      v10 = Component_object;
      if ( !v3 )
        sub_1C32E7C(Component_object);
      items = v3->fields._items;
      v12 = Method_System_Collections_Generic_List_WarehouseListViewObject__Add__;
      ++v3->fields._version;
      if ( !items )
        sub_1C32E7C(Component_object);
      size = v3->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v3,
          Component_object,
          *(const MethodInfo_37987BC **)(*(_QWORD *)(v12[4] + 192LL) + 112LL));
      }
      else
      {
        v14 = &items->obj.klass + size;
        v3->fields._size = size + 1;
        v14[4] = (Il2CppClass *)v10;
        sub_1C32BC4((CGThumbnailListItem_o *)(v14 + 4), (int32_t)v10, v8, v9);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v17,
    (const MethodInfo_3522FA4 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_WarehouseListViewObject__o *)v3;
}


void WarehouseListViewManager__remove_callbackFunc(
        WarehouseListViewManager_o *this,
        WarehouseListViewManager_CallbackFunc_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *callbackFunc; // x21
  struct WarehouseListViewManager_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v7; // x0
  __int64 v8; // x0
  bool v9; // zf
  const MethodInfo *v10; // x0

  if ( (byte_4C3578C & 1) == 0 )
  {
    sub_1C32C20(&WarehouseListViewManager_CallbackFunc_TypeInfo);
    byte_4C3578C = 1;
  }
  callbackFunc = (System_Delegate_o *)this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  while ( 1 )
  {
    v7 = System_Delegate__Remove(callbackFunc, (System_Delegate_o *)value, 0);
    if ( v7 )
    {
      if ( (WarehouseListViewManager_CallbackFunc_c *)v7->klass != WarehouseListViewManager_CallbackFunc_TypeInfo )
        break;
    }
    v8 = sub_1C6CE78(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1C3313C(v7);
  WarehouseListViewManager__DeleteContinueData(v10);
}


void WarehouseListViewManager_CallbackFunc___ctor(
        WarehouseListViewManager_CallbackFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  intptr_t v4; // x8
  int v8; // w22
  Il2CppObject *m_target; // x9
  __int64 v10; // x0

  v4 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v4;
  this->fields.m_target = object;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.m_target, (int32_t)object, method, a4);
  v8 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1C32CE0(method) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1C32E98(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C32D48(v10, 0);
    }
    goto LABEL_5;
  }
  if ( v8 != 2 )
  {
LABEL_5:
    m_target = this->fields.m_target;
    this->fields.invoke_impl = this->fields.method_ptr;
    this->fields.method_code = (intptr_t)m_target;
    goto LABEL_6;
  }
  this->fields.invoke_impl = (intptr_t)sub_1A75BEC;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1A75B94;
}


System_IAsyncResult_o *WarehouseListViewManager_CallbackFunc__BeginInvoke(
        WarehouseListViewManager_CallbackFunc_o *this,
        int32_t resultKind,
        WarehouseListViewItem_o *item,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v6; // x6
  __int64 v7; // x7
  _QWORD v13[3]; // [xsp+8h] [xbp-58h] BYREF
  int32_t v14; // [xsp+2Ch] [xbp-34h] BYREF

  v14 = resultKind;
  if ( (byte_4C357BC & 1) == 0 )
  {
    sub_1C32C20(&WarehouseListViewManager_ResultKind_TypeInfo);
    byte_4C357BC = 1;
  }
  v13[2] = 0;
  v13[0] = j_il2cpp_value_box_0(
             WarehouseListViewManager_ResultKind_TypeInfo,
             &v14,
             item,
             callback,
             object,
             method,
             v6,
             v7);
  v13[1] = item;
  return (System_IAsyncResult_o *)sub_1C32BD4(this, v13, callback, object);
}


void WarehouseListViewManager_CallbackFunc__EndInvoke(
        WarehouseListViewManager_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C32BD8(result, 0, method);
}


void WarehouseListViewManager_CallbackFunc__Invoke(
        WarehouseListViewManager_CallbackFunc_o *this,
        int32_t resultKind,
        WarehouseListViewItem_o *item,
        const MethodInfo *method)
{
  ((void (__fastcall *)(intptr_t, int32_t, WarehouseListViewItem_o *, intptr_t))this->fields.invoke_impl)(
    this->fields.method_code,
    resultKind,
    item,
    this->fields.method);
}