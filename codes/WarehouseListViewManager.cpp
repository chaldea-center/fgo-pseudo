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

  if ( (byte_4C54B42 & 1) == 0 )
  {
    sub_1C3E564(&ListViewSort_TypeInfo);
    sub_1C3E564(&WarehouseListViewManager_TypeInfo);
    sub_1C3E564(&StringLiteral_15606/*"Warehouse"*/);
    byte_4C54B42 = 1;
  }
  WarehouseListViewManager_TypeInfo->static_fields->SORT_SAVE_KEY = (struct System_String_o *)StringLiteral_15606/*"Warehouse"*/;
  sub_1C3E508((CGThumbnailListItem_o *)WarehouseListViewManager_TypeInfo->static_fields, StringLiteral_15606/*"Warehouse"*/, v1, v2);
  SORT_SAVE_KEY = WarehouseListViewManager_TypeInfo->static_fields->SORT_SAVE_KEY;
  v31 = 1;
  v4 = System_Int32__ToString((int32_t)&v31, 0);
  v5 = System_String__Concat_63636468(SORT_SAVE_KEY, v4, 0);
  v6 = (ListViewSort_o *)sub_1C3E7B0(ListViewSort_TypeInfo);
  ListViewSort___ctor_43894048(v6, v5, 3, 0, 0);
  static_fields = WarehouseListViewManager_TypeInfo->static_fields;
  static_fields->servantSortInfo = v6;
  sub_1C3E508((CGThumbnailListItem_o *)&static_fields->servantSortInfo, (int32_t)v6, v8, v9);
  v10 = WarehouseListViewManager_TypeInfo->static_fields->SORT_SAVE_KEY;
  v31 = 2;
  v11 = System_Int32__ToString((int32_t)&v31, 0);
  v12 = System_String__Concat_63636468(v10, v11, 0);
  v13 = (ListViewSort_o *)sub_1C3E7B0(ListViewSort_TypeInfo);
  ListViewSort___ctor_43894048(v13, v12, 3, 0, 0);
  v14 = WarehouseListViewManager_TypeInfo->static_fields;
  v14->servantEquipSortInfo = v13;
  sub_1C3E508((CGThumbnailListItem_o *)&v14->servantEquipSortInfo, (int32_t)v13, v15, v16);
  v17 = WarehouseListViewManager_TypeInfo->static_fields->SORT_SAVE_KEY;
  v31 = 3;
  v18 = System_Int32__ToString((int32_t)&v31, 0);
  v19 = System_String__Concat_63636468(v17, v18, 0);
  v20 = (ListViewSort_o *)sub_1C3E7B0(ListViewSort_TypeInfo);
  ListViewSort___ctor_43894048(v20, v19, 3, 0, 0);
  v21 = WarehouseListViewManager_TypeInfo->static_fields;
  v21->servantWarehouseSortInfo = v20;
  sub_1C3E508((CGThumbnailListItem_o *)&v21->servantWarehouseSortInfo, (int32_t)v20, v22, v23);
  v24 = WarehouseListViewManager_TypeInfo->static_fields->SORT_SAVE_KEY;
  v31 = 4;
  v25 = System_Int32__ToString((int32_t)&v31, 0);
  v26 = System_String__Concat_63636468(v24, v25, 0);
  v27 = (ListViewSort_o *)sub_1C3E7B0(ListViewSort_TypeInfo);
  ListViewSort___ctor_43894048(v27, v26, 3, 0, 0);
  v28 = WarehouseListViewManager_TypeInfo->static_fields;
  v28->servantEquipWarehouseSortInfo = v27;
  sub_1C3E508((CGThumbnailListItem_o *)&v28->servantEquipWarehouseSortInfo, (int32_t)v27, v29, v30);
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
  *(_OWORD *)&this->fields.dragSelectSum = xmmword_C12420;
  this->fields.isDragSelect = 1;
  this->fields.dragSelectFriendShipSum = 0;
}


// local variable allocation has failed, the output may be wrong!
void WarehouseListViewManager__CancelDragSelect(
        WarehouseListViewManager_o *this,
        int32_t index,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *itemSortList; // x0
  __int64 naturalAligment; // x9
  WarehouseListViewManager_o *v7; // x0
  const MethodInfo *v8; // x1

  if ( (byte_4C54B3E & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_1C3E564(&WarehouseListViewItem_TypeInfo);
    byte_4C54B3E = 1;
  }
  itemSortList = (System_Collections_Generic_List_object__o *)this->fields.itemSortList;
  if ( !itemSortList
    || (itemSortList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                      itemSortList,
                                                                      index,
                                                                      (const MethodInfo_37B5190 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__)) == 0 )
  {
    sub_1C3E7C0(itemSortList, *(_QWORD *)&index);
  }
  naturalAligment = WarehouseListViewItem_TypeInfo->_2.naturalAligment;
  if ( itemSortList->klass->_2.naturalAligment >= (unsigned int)naturalAligment
    && (WarehouseListViewItem_c *)itemSortList->klass->_2.typeHierarchy[naturalAligment - 1] == WarehouseListViewItem_TypeInfo )
  {
    HIDWORD(itemSortList[6].fields._items) = -1;
  }
  else
  {
    sub_1C3EA80(itemSortList);
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
  __int64 v12; // x1
  ListViewItem_o *current; // x20
  __int64 naturalAligment; // x9
  Il2CppClass *klass; // x21
  __int64 v16; // x1
  ListViewObject_o *viewObject; // x0
  const MethodInfo *v18; // x2
  System_Collections_Generic_List_Enumerator_object__o v19; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v20; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4C54B36 & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__);
    sub_1C3E564(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    sub_1C3E564(&WarehouseListViewItem_TypeInfo);
    byte_4C54B36 = 1;
  }
  memset(&v20, 0, sizeof(v20));
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
  sub_1C3E508((CGThumbnailListItem_o *)p_seed, (int32_t)smallSizeSeed, v2, v3);
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
    (System_Collections_Generic_List_Enumerator_T__o *)&v19,
    (System_Collections_Generic_List_object__o *)sort,
    (const MethodInfo_37B5F58 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  v20 = v19;
  while ( 1 )
  {
    v11 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v20,
            (const MethodInfo_353FC4C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    if ( !v11 )
      break;
    current = (ListViewItem_o *)v20.fields._current;
    if ( !v20.fields._current )
      goto LABEL_26;
    naturalAligment = WarehouseListViewItem_TypeInfo->_2.naturalAligment;
    if ( v20.fields._current->klass->_2.naturalAligment < (unsigned int)naturalAligment
      || (WarehouseListViewItem_c *)v20.fields._current->klass->_2.typeHierarchy[naturalAligment - 1] != WarehouseListViewItem_TypeInfo )
    {
      sub_1C3EA80(v20.fields._current);
LABEL_26:
      sub_1C3E7C0(v11, v12);
    }
    klass = v20.fields._current[7].klass;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)klass, 0, 0) )
    {
      viewObject = current->fields.viewObject;
      if ( !viewObject )
        sub_1C3E7C0(0, v16);
      ListViewObject__SetItemSeed(viewObject, current, this->fields.seed, 0);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v20,
    (const MethodInfo_353FC48 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
  WarehouseListViewManager__SetMode_38458928(this, 2, v18);
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0);
  sort = (ListViewSort_o *)this->fields.scrollBar;
  if ( !sort
    || (sort = (ListViewSort_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)sort, 0)) == 0 )
  {
LABEL_28:
    sub_1C3E7C0(sort, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)sort, 1, 0);
}


// local variable allocation has failed, the output may be wrong!
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
      sub_1C3E7C0(this, isPlus);
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
  __int64 v8; // x1
  Il2CppObject *MasterData_object; // x24
  Il2CppObject *v10; // x25
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  System_String_o *v13; // x19
  WarehouseListViewManager_c *v14; // x0
  struct ListViewSort_o *servantSortInfo; // x1
  __int64 *v16; // x8
  int64_t v17; // x22
  struct ListViewSort_o *v18; // x8
  WarehouseListViewManager_c *v19; // x0
  struct ListViewSort_o *servantEquipSortInfo; // x1
  WarehouseListViewManager_c *v21; // x0
  struct ListViewSort_o *servantWarehouseSortInfo; // x1
  WarehouseListViewManager_c *v23; // x0
  struct ListViewSort_o *servantEquipWarehouseSortInfo; // x1
  _BOOL4 isQuestStart; // w8
  int v26; // w9
  struct ListViewSort_BonusFilterInfo_array *AlignedBonusFilter; // x0
  int32_t v28; // w2
  const MethodInfo *v29; // x3
  struct ListViewSort_o *sort; // x20
  struct ListViewSort_BonusFilterInfo_array *v31; // x0
  int32_t v32; // w2
  const MethodInfo *v33; // x3
  struct ListViewSort_o *v34; // x8
  struct ListViewSort_o *v35; // x8
  int32_t v36; // w2
  const MethodInfo *v37; // x3
  struct ListViewSort_o *v38; // x8
  unsigned int iconScaleKind; // w8
  struct ListViewItemSeed_o *normalSizeSeed; // x1
  Il2CppObject *v41; // x24
  int v42; // w8
  __int64 v43; // x25
  int64_t v44; // x20
  __int64 v45; // x8
  __int128 v46; // q0
  EventUpValSetupInfo_o *v47; // x19
  __int64 v48; // x21
  System_Int64_array *v49; // x23
  System_Int64_array *v50; // x29
  UserServantEntity_o *v51; // x24
  int64_t v52; // x27
  WarehouseListViewItem_o *v53; // x0
  bool v54; // w7
  Il2CppObject *v55; // x26
  int32_t v56; // w2
  const MethodInfo *v57; // x3
  __int64 v58; // x8
  _QWORD *v59; // x9
  __int64 v60; // x10
  __int64 v61; // x8
  const MethodInfo *v62; // x3
  UILabel_o *emptyMessageLabel; // x20
  const MethodInfo *v64; // x1
  const MethodInfo *v65; // [xsp+0h] [xbp-E0h]
  System_String_o *v66; // [xsp+8h] [xbp-D8h]
  System_Int64_array *recoverySvtList; // [xsp+10h] [xbp-D0h]
  int64_t v68; // [xsp+18h] [xbp-C8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v69; // [xsp+20h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v70; // [xsp+40h] [xbp-A0h]
  int32_t eventId; // [xsp+6Ch] [xbp-74h] BYREF
  System_Int64_array *equipIdList; // [xsp+70h] [xbp-70h] BYREF
  System_Int64_array *svtIdList; // [xsp+78h] [xbp-68h] BYREF

  if ( (byte_4C54B19 & 1) == 0 )
  {
    sub_1C3E564(&Method_DataManager_GetMasterData_EventMaster___);
    sub_1C3E564(&Method_DataManager_GetMasterData_UserDeckMaster___);
    sub_1C3E564(&Method_DataManager_GetMasterData_UserEventServantFatigueMaster___);
    sub_1C3E564(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1C3E564(&Method_DataManager_GetMasterData_UserServantStorageMaster___);
    sub_1C3E564(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    sub_1C3E564(&LocalizationManager_TypeInfo);
    sub_1C3E564(&NetworkManager_TypeInfo);
    sub_1C3E564(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C3E564(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C3E564(&WarehouseListViewItem_TypeInfo);
    sub_1C3E564(&WarehouseListViewManager_TypeInfo);
    sub_1C3E564(&StringLiteral_11610/*"SERVANT_EQUIP_EMPTY"*/);
    sub_1C3E564(&StringLiteral_11605/*"SERVANT_EMPTY"*/);
    sub_1C3E564(&StringLiteral_11638/*"SERVANT_EQUIP_WAREHOUSE_EMPTY"*/);
    sub_1C3E564(&StringLiteral_11810/*"SERVANT_SORT_FILTER_RESULT_EMPTY"*/);
    sub_1C3E564(&StringLiteral_12011/*"SERVANT_WAREHOUSE_EMPTY"*/);
    sub_1C3E564(&StringLiteral_1/*""*/);
    byte_4C54B19 = 1;
  }
  equipIdList = 0;
  svtIdList = 0;
  eventId = 0;
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_83;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_UserServantMaster___);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_83;
  v10 = DataManager__GetMasterData_object_(
          (DataManager_o *)Instance,
          (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_UserServantStorageMaster___);
  Instance = (int64_t)UserGameMaster__getSelfUserGame(0);
  v13 = (System_String_o *)StringLiteral_1/*""*/;
  v68 = Instance;
  this->fields.kind = kind;
  switch ( kind )
  {
    case 0:
      v14 = WarehouseListViewManager_TypeInfo;
      if ( !WarehouseListViewManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(WarehouseListViewManager_TypeInfo);
        v14 = WarehouseListViewManager_TypeInfo;
      }
      servantSortInfo = v14->static_fields->servantSortInfo;
      this->fields.sort = servantSortInfo;
      sub_1C3E508((CGThumbnailListItem_o *)&this->fields.sort, (int32_t)servantSortInfo, v11, v12);
      Instance = (int64_t)this->fields.sort;
      if ( !Instance )
        goto LABEL_83;
      *(_DWORD *)(Instance + 128) = 0;
      ListViewSort__Load((ListViewSort_o *)Instance, 0);
      if ( !MasterData_object )
        goto LABEL_83;
      Instance = (int64_t)UserServantMaster__getKeepServantList((UserServantMaster_o *)MasterData_object, 0);
      v16 = &StringLiteral_11605/*"SERVANT_EMPTY"*/;
      break;
    case 1:
      v19 = WarehouseListViewManager_TypeInfo;
      if ( !WarehouseListViewManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(WarehouseListViewManager_TypeInfo);
        v19 = WarehouseListViewManager_TypeInfo;
      }
      servantEquipSortInfo = v19->static_fields->servantEquipSortInfo;
      this->fields.sort = servantEquipSortInfo;
      sub_1C3E508((CGThumbnailListItem_o *)&this->fields.sort, (int32_t)servantEquipSortInfo, v11, v12);
      Instance = (int64_t)this->fields.sort;
      if ( !Instance )
        goto LABEL_83;
      *(_DWORD *)(Instance + 128) = 1;
      ListViewSort__Load((ListViewSort_o *)Instance, 0);
      if ( !MasterData_object )
        goto LABEL_83;
      Instance = (int64_t)UserServantMaster__getServantEquipList((UserServantMaster_o *)MasterData_object, 0);
      v16 = &StringLiteral_11610/*"SERVANT_EQUIP_EMPTY"*/;
      break;
    case 2:
      v21 = WarehouseListViewManager_TypeInfo;
      if ( !WarehouseListViewManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(WarehouseListViewManager_TypeInfo);
        v21 = WarehouseListViewManager_TypeInfo;
      }
      servantWarehouseSortInfo = v21->static_fields->servantWarehouseSortInfo;
      this->fields.sort = servantWarehouseSortInfo;
      sub_1C3E508((CGThumbnailListItem_o *)&this->fields.sort, (int32_t)servantWarehouseSortInfo, v11, v12);
      Instance = (int64_t)this->fields.sort;
      if ( !Instance )
        goto LABEL_83;
      *(_DWORD *)(Instance + 128) = 0;
      ListViewSort__Load((ListViewSort_o *)Instance, 0);
      if ( !v10 )
        goto LABEL_83;
      Instance = (int64_t)UserServantStorageMaster__getKeepServantList((UserServantStorageMaster_o *)v10, 0);
      v16 = &StringLiteral_12011/*"SERVANT_WAREHOUSE_EMPTY"*/;
      break;
    case 3:
      v23 = WarehouseListViewManager_TypeInfo;
      if ( !WarehouseListViewManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(WarehouseListViewManager_TypeInfo);
        v23 = WarehouseListViewManager_TypeInfo;
      }
      servantEquipWarehouseSortInfo = v23->static_fields->servantEquipWarehouseSortInfo;
      this->fields.sort = servantEquipWarehouseSortInfo;
      sub_1C3E508((CGThumbnailListItem_o *)&this->fields.sort, (int32_t)servantEquipWarehouseSortInfo, v11, v12);
      Instance = (int64_t)this->fields.sort;
      if ( !Instance )
        goto LABEL_83;
      *(_DWORD *)(Instance + 128) = 1;
      ListViewSort__Load((ListViewSort_o *)Instance, 0);
      if ( !v10 )
        goto LABEL_83;
      Instance = (int64_t)UserServantStorageMaster__getServantEquipList((UserServantStorageMaster_o *)v10, 0);
      v16 = &StringLiteral_11638/*"SERVANT_EQUIP_WAREHOUSE_EMPTY"*/;
      break;
    default:
      v17 = 0;
      if ( !setupInfo )
        goto LABEL_12;
      goto LABEL_30;
  }
  v13 = (System_String_o *)*v16;
  v17 = Instance;
  if ( setupInfo )
  {
LABEL_30:
    isQuestStart = setupInfo->fields.isQuestStart;
    v26 = this->fields.kind | 2;
    this->fields.isQuestStart = isQuestStart;
    if ( v26 == 2 )
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
      sub_1C3E508((CGThumbnailListItem_o *)&this->fields.alignedBonusFilterInfos, (int32_t)AlignedBonusFilter, v28, v29);
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
      v31 = ListViewSort__GetAlignedBonusFilter(
              (ListViewSort_o *)Instance,
              0,
              setupInfo->fields.servantEquipFilterEventCampaignIds,
              setupInfo->fields.servantEquipFilterEventIds,
              0,
              0,
              isQuestStart,
              0);
      this->fields.alignedBonusFilterInfos = v31;
      sub_1C3E508((CGThumbnailListItem_o *)&this->fields.alignedBonusFilterInfos, (int32_t)v31, v32, v33);
      v34 = this->fields.sort;
      if ( !v34 )
        goto LABEL_83;
      v34->fields.isBonusKind = 1;
    }
  }
  else
  {
LABEL_12:
    v18 = this->fields.sort;
    this->fields.isQuestStart = 1;
    if ( !v18 )
      goto LABEL_83;
    v18->fields.isBonusKind = 0;
    this->fields.alignedBonusFilterInfos = 0;
    sub_1C3E508((CGThumbnailListItem_o *)&this->fields.alignedBonusFilterInfos, 0, v11, v12);
  }
  Instance = (int64_t)this->fields.bonusFilterKindButton;
  if ( !Instance )
    goto LABEL_83;
  Instance = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
  v35 = this->fields.sort;
  if ( !v35 )
    goto LABEL_83;
  if ( !Instance )
    goto LABEL_83;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, v35->fields.isBonusKind, 0);
  v38 = this->fields.sort;
  if ( !v38 )
    goto LABEL_83;
  iconScaleKind = v38->fields.iconScaleKind;
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
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.seed, (int32_t)normalSizeSeed, v36, v37);
LABEL_48:
  *(_QWORD *)&this->fields.sellEnableRestCnt = 0;
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0);
  *(_OWORD *)&this->fields.dragSelectSum = xmmword_C12420;
  this->fields.isDragSelect = 1;
  this->fields.dragSelectFriendShipSum = 0;
  if ( !v17 )
    goto LABEL_79;
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_83;
  v41 = DataManager__GetMasterData_object_(
          (DataManager_o *)Instance,
          (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_UserDeckMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4C50AE2 )
  {
    sub_1C3E564(&NetworkManager_TypeInfo);
    byte_4C50AE2 = 1;
  }
  Instance = (int64_t)NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Instance = (int64_t)NetworkManager_TypeInfo;
  }
  if ( !v41
    || (UserDeckMaster__getPartyList(
          (UserDeckMaster_o *)v41,
          &svtIdList,
          &equipIdList,
          *(_QWORD *)(*(_QWORD *)(Instance + 184) + 64LL),
          0),
        (Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0)
    || (Instance = (int64_t)DataManager__GetMasterData_object_(
                              (DataManager_o *)Instance,
                              (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_EventMaster___)) == 0 )
  {
LABEL_83:
    sub_1C3E7C0(Instance, v8);
  }
  Instance = EventMaster__IsEnableFatigueEvent((EventMaster_o *)Instance, &eventId, 0);
  recoverySvtList = 0;
  if ( (Instance & 1) != 0 )
  {
    Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_83;
    Instance = (int64_t)DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_UserEventServantFatigueMaster___);
    if ( !Instance )
      goto LABEL_83;
    Instance = (int64_t)UserEventServantFatigueMaster__GetRecoverySvtIdList(
                          (UserEventServantFatigueMaster_o *)Instance,
                          eventId,
                          0);
    recoverySvtList = (System_Int64_array *)Instance;
  }
  v42 = *(_DWORD *)(v17 + 24);
  if ( v42 >= 1 )
  {
    v43 = 0;
    v44 = v17 + 32;
    v66 = v13;
    do
    {
      if ( (unsigned int)v43 >= v42 )
        goto LABEL_84;
      v45 = *(_QWORD *)(v44 + 8 * v43);
      if ( !v45 )
        goto LABEL_83;
      v46 = *(_OWORD *)(v45 + 32);
      v47 = setupInfo;
      *(_OWORD *)&v70.fields.currentCryptoKey = *(_OWORD *)(v45 + 16);
      *(_OWORD *)&v70.fields.fakeValue = v46;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v69 = v70;
      Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49007660(&v69, 0);
      if ( (unsigned int)v43 >= *(_DWORD *)(v17 + 24) )
LABEL_84:
        sub_1C3E7C8(Instance, v8);
      if ( !v68 )
        goto LABEL_83;
      v48 = *(_QWORD *)(v68 + 120);
      v49 = equipIdList;
      v50 = svtIdList;
      v51 = *(UserServantEntity_o **)(v44 + 8 * v43);
      v52 = Instance;
      v53 = (WarehouseListViewItem_o *)sub_1C3E7B0(WarehouseListViewItem_TypeInfo);
      v54 = v52 == v48;
      v55 = (Il2CppObject *)v53;
      setupInfo = v47;
      WarehouseListViewItem___ctor(v53, v43, v51, v47, v50, v49, recoverySvtList, v54, v65);
      Instance = (int64_t)this->fields.itemList;
      if ( !Instance )
        goto LABEL_83;
      v58 = *(_QWORD *)(Instance + 16);
      v59 = Method_System_Collections_Generic_List_ListViewItem__Add__;
      ++*(_DWORD *)(Instance + 28);
      if ( !v58 )
        goto LABEL_83;
      v60 = *(int *)(Instance + 24);
      if ( (unsigned int)v60 >= *(_DWORD *)(v58 + 24) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)Instance,
          v55,
          *(const MethodInfo_37B5460 **)(*(_QWORD *)(v59[4] + 192LL) + 112LL));
      }
      else
      {
        v61 = v58 + 8 * v60;
        *(_DWORD *)(Instance + 24) = v60 + 1;
        *(_QWORD *)(v61 + 32) = v55;
        sub_1C3E508((CGThumbnailListItem_o *)(v61 + 32), (int32_t)v55, v56, v57);
      }
      WarehouseListViewManager__ChangeSellEnableRestCnt(this, 1, (WarehouseListViewItem_o *)v55, v62);
      v42 = *(_DWORD *)(v17 + 24);
      ++v43;
    }
    while ( (int)v43 < v42 );
    v13 = v66;
    if ( (int)v43 > 0 )
      v13 = (System_String_o *)StringLiteral_11810/*"SERVANT_SORT_FILTER_RESULT_EMPTY"*/;
  }
LABEL_79:
  emptyMessageLabel = this->fields.emptyMessageLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  Instance = (int64_t)LocalizationManager__Get(v13, 0);
  if ( !emptyMessageLabel )
    goto LABEL_83;
  UILabel__set_text(emptyMessageLabel, (System_String_o *)Instance, 0);
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0);
  WarehouseListViewManager__SetFilterButtonImage(this, v64);
  ListViewManager__CheckScroll((ListViewManager_o *)this, this->fields.scaleType, 0);
}


// local variable allocation has failed, the output may be wrong!
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

  if ( (byte_4C54B3D & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_1C3E564(&WarehouseListViewItem_TypeInfo);
    byte_4C54B3D = 1;
  }
  *(_QWORD *)friendShipSum = 0;
  itemSortList = (System_Collections_Generic_List_object__o *)this->fields.itemSortList;
  if ( !itemSortList )
    goto LABEL_24;
  itemSortList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                itemSortList,
                                                                index,
                                                                (const MethodInfo_37B5190 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
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
        sub_1C3E7C0(itemSortList, *(_QWORD *)&index);
      }
    }
LABEL_23:
    v6->fields.dragSelectNum = -1;
    return;
  }
  sub_1C3EA80(itemSortList);
  WarehouseListViewManager__CancelDragEnd(v19, v20);
}


// local variable allocation has failed, the output may be wrong!
void WarehouseListViewManager__DecrementNumber(
        WarehouseListViewManager_o *this,
        int32_t selectNum,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x0
  _BOOL8 v6; // x0
  __int64 v7; // x1
  int32_t v8; // w9
  System_Collections_Generic_List_Enumerator_object__o v9; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4C54B2A & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__);
    sub_1C3E564(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    byte_4C54B2A = 1;
  }
  memset(&v9, 0, sizeof(v9));
  itemList = this->fields.itemList;
  if ( !itemList )
    sub_1C3E7C0(0, *(_QWORD *)&selectNum);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v9,
    (System_Collections_Generic_List_object__o *)itemList,
    (const MethodInfo_37B5F58 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  while ( 1 )
  {
    v6 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v9,
           (const MethodInfo_353FC4C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    if ( !v6 )
      break;
    if ( !v9.fields._current )
      sub_1C3E7C0(v6, v7);
    v8 = *(_DWORD *)((char *)&v9.fields._current->klass + (unsigned __int64)&word_10);
    if ( v8 > selectNum )
      *(_DWORD *)((char *)&v9.fields._current->klass + (unsigned __int64)&word_10) = v8 - 1;
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v9,
    (const MethodInfo_353FC48 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
}


void WarehouseListViewManager__DeleteContinueData(const MethodInfo *method)
{
  __int64 v1; // x1
  WarehouseListViewManager_c *v2; // x0
  ListViewSort_o *servantSortInfo; // x0

  if ( (byte_4C54B15 & 1) == 0 )
  {
    sub_1C3E564(&WarehouseListViewManager_TypeInfo);
    byte_4C54B15 = 1;
  }
  v2 = WarehouseListViewManager_TypeInfo;
  if ( !WarehouseListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarehouseListViewManager_TypeInfo);
    v2 = WarehouseListViewManager_TypeInfo;
  }
  servantSortInfo = v2->static_fields->servantSortInfo;
  if ( !servantSortInfo
    || (ListViewSort__DeleteContinueData(servantSortInfo, 0),
        (servantSortInfo = WarehouseListViewManager_TypeInfo->static_fields->servantEquipSortInfo) == 0)
    || (ListViewSort__DeleteContinueData(servantSortInfo, 0),
        (servantSortInfo = WarehouseListViewManager_TypeInfo->static_fields->servantWarehouseSortInfo) == 0)
    || (ListViewSort__DeleteContinueData(servantSortInfo, 0),
        (servantSortInfo = WarehouseListViewManager_TypeInfo->static_fields->servantEquipWarehouseSortInfo) == 0) )
  {
    sub_1C3E7C0(servantSortInfo, v1);
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
  __int64 v9; // x1

  if ( (byte_4C54B31 & 1) == 0 )
  {
    sub_1C3E564(&System_Action_TypeInfo);
    sub_1C3E564(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C3E564(&Method_WarehouseListViewManager_EndCloseSelectFilterKind__);
    byte_4C54B31 = 1;
  }
  if ( isDecide )
  {
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0);
    WarehouseListViewManager__SetFilterButtonImage(this, v5);
    ListViewManager__CheckScroll((ListViewManager_o *)this, this->fields.scaleType, 0);
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v7 = (System_Action_o *)sub_1C3E7B0(System_Action_TypeInfo);
  System_Action___ctor(v7, (Il2CppObject *)this, Method_WarehouseListViewManager_EndCloseSelectFilterKind__, 0);
  if ( !Instance )
    sub_1C3E7C0(v8, v9);
  CommonUI__CloseServantFilterSelectMenu((CommonUI_o *)Instance, v7, 0);
}


void WarehouseListViewManager__EndSelectSortKind(
        WarehouseListViewManager_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v6; // x1

  if ( (byte_4C54B2F & 1) == 0 )
  {
    sub_1C3E564(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4C54B2F = 1;
  }
  if ( isDecide )
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1C3E7C0(0, v6);
  CommonUI__CloseServantSortSelectMenu((CommonUI_o *)Instance, 0, 0);
}


// local variable allocation has failed, the output may be wrong!
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

  if ( (byte_4C54B34 & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_1C3E564(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_1C3E564(&WarehouseListViewItem_TypeInfo);
    byte_4C54B34 = 1;
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
                                                                (const MethodInfo_37B5190 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
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
    sub_1C3E7C0(itemList, *(_QWORD *)&svtId);
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

  if ( (byte_4C54B40 & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_1C3E564(&WarehouseListViewItem_TypeInfo);
    byte_4C54B40 = 1;
  }
  result = (WarehouseListViewItem_o *)this->fields.itemList;
  if ( result )
  {
    result = (WarehouseListViewItem_o *)System_Collections_Generic_List_object___get_Item(
                                          (System_Collections_Generic_List_object__o *)result,
                                          index,
                                          (const MethodInfo_37B5190 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
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
    sub_1C3E7C0(this, method);
  return warehouseListMenu->fields.modeKind;
}


System_String_o *WarehouseListViewManager__GetScaleButtonSpriteName(
        WarehouseListViewManager_o *this,
        const MethodInfo *method)
{
  ListViewSort_o *sort; // x0

  sort = this->fields.sort;
  if ( !sort )
    sub_1C3E7C0(0, method);
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
  __int64 v9; // x1
  Il2CppObject *current; // x21
  __int64 naturalAligment; // x9
  int32_t *v12; // x8
  System_Collections_Generic_List_Enumerator_object__o v13; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v14; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4C54B3F & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__);
    sub_1C3E564(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    sub_1C3E564(&WarehouseListViewItem_TypeInfo);
    byte_4C54B3F = 1;
  }
  memset(&v14, 0, sizeof(v14));
  *normalSum = 0;
  *friendShipSum = 0;
  itemList = this->fields.itemList;
  if ( !itemList )
    sub_1C3E7C0(0, normalSum);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v13,
    (System_Collections_Generic_List_object__o *)itemList,
    (const MethodInfo_37B5F58 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  v14 = v13;
  while ( 1 )
  {
    v8 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v14,
           (const MethodInfo_353FC4C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    if ( !v8 )
      break;
    current = v14.fields._current;
    if ( !v14.fields._current )
      goto LABEL_16;
    naturalAligment = WarehouseListViewItem_TypeInfo->_2.naturalAligment;
    if ( v14.fields._current->klass->_2.naturalAligment < (unsigned int)naturalAligment
      || (WarehouseListViewItem_c *)v14.fields._current->klass->_2.typeHierarchy[naturalAligment - 1] != WarehouseListViewItem_TypeInfo )
    {
      sub_1C3EA80(v14.fields._current);
LABEL_16:
      sub_1C3E7C0(v8, v9);
    }
    if ( ListViewItem__get_IsSelect((ListViewItem_o *)v14.fields._current, 0) )
    {
      if ( BYTE2(current[11].monitor) )
        v12 = friendShipSum;
      else
        v12 = normalSum;
      ++*v12;
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v14,
    (const MethodInfo_353FC48 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
}


void WarehouseListViewManager__GetSelectList(
        WarehouseListViewManager_o *this,
        System_Collections_Generic_List_long__o *list,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x0
  _BOOL8 v6; // x0
  __int64 v7; // x1
  Il2CppObject *current; // x20
  __int64 naturalAligment; // x9
  const MethodInfo *v10; // x1
  int64_t UserSvtId; // x0
  struct System_Int64_array *items; // x8
  _QWORD *v13; // x9
  __int64 size; // x10
  System_Collections_Generic_List_Enumerator_object__o v15; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v16; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4C54B25 & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__);
    sub_1C3E564(&Method_System_Collections_Generic_List_long__Add__);
    sub_1C3E564(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    sub_1C3E564(&WarehouseListViewItem_TypeInfo);
    byte_4C54B25 = 1;
  }
  memset(&v16, 0, sizeof(v16));
  itemList = this->fields.itemList;
  if ( !itemList )
    sub_1C3E7C0(0, list);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v15,
    (System_Collections_Generic_List_object__o *)itemList,
    (const MethodInfo_37B5F58 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  v16 = v15;
  while ( 1 )
  {
    v6 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v16,
           (const MethodInfo_353FC4C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    if ( !v6 )
      break;
    current = v16.fields._current;
    if ( !v16.fields._current )
      goto LABEL_17;
    naturalAligment = WarehouseListViewItem_TypeInfo->_2.naturalAligment;
    if ( v16.fields._current->klass->_2.naturalAligment < (unsigned int)naturalAligment
      || (WarehouseListViewItem_c *)v16.fields._current->klass->_2.typeHierarchy[naturalAligment - 1] != WarehouseListViewItem_TypeInfo )
    {
      sub_1C3EA80(v16.fields._current);
LABEL_17:
      sub_1C3E7C0(v6, v7);
    }
    if ( ListViewItem__get_IsSelect((ListViewItem_o *)v16.fields._current, 0) )
    {
      UserSvtId = WarehouseListViewItem__get_UserSvtId((WarehouseListViewItem_o *)current, v10);
      if ( !list )
        sub_1C3E7C0(UserSvtId, UserSvtId);
      items = list->fields._items;
      v13 = Method_System_Collections_Generic_List_long__Add__;
      ++list->fields._version;
      if ( !items )
        sub_1C3E7C0(UserSvtId, UserSvtId);
      size = list->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_long___AddWithResize(
          list,
          UserSvtId,
          *(const MethodInfo_379D494 **)(*(_QWORD *)(v13[4] + 192LL) + 112LL));
      }
      else
      {
        list->fields._size = size + 1;
        items->m_Items[size] = UserSvtId;
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v16,
    (const MethodInfo_353FC48 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
}


System_Collections_Generic_Dictionary_long__int__o *WarehouseListViewManager__GetSelectServantIdDic(
        WarehouseListViewManager_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_long__int__o *v3; // x20
  const MethodInfo *v4; // x1
  System_Collections_Generic_List_object__o *itemList; // x0
  int size; // w23
  int32_t v7; // w21
  WarehouseListViewItem_o *v8; // x22
  __int64 naturalAligment; // x9
  System_Collections_Generic_Dictionary_long__int__o *result; // x0
  WarehouseListViewManager_o *v11; // x0
  System_Collections_Generic_Dictionary_long__int__o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_4C54B37 & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_long__int__Add__);
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_long__int___ctor__);
    sub_1C3E564(&System_Collections_Generic_Dictionary_long__int__TypeInfo);
    sub_1C3E564(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_1C3E564(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_1C3E564(&WarehouseListViewItem_TypeInfo);
    byte_4C54B37 = 1;
  }
  v3 = (System_Collections_Generic_Dictionary_long__int__o *)sub_1C3E7B0(System_Collections_Generic_Dictionary_long__int__TypeInfo);
  System_Collections_Generic_Dictionary_long__int____ctor(
    v3,
    (const MethodInfo_344AE94 *)Method_System_Collections_Generic_Dictionary_long__int___ctor__);
  itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
  if ( !itemList )
LABEL_14:
    sub_1C3E7C0(itemList, v4);
  size = itemList->fields._size;
  if ( size < 1 )
    return v3;
  v7 = 0;
  while ( 1 )
  {
    itemList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                              itemList,
                                                              v7,
                                                              (const MethodInfo_37B5190 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    if ( !itemList )
      goto LABEL_14;
    v8 = (WarehouseListViewItem_o *)itemList;
    naturalAligment = WarehouseListViewItem_TypeInfo->_2.naturalAligment;
    if ( itemList->klass->_2.naturalAligment < (unsigned int)naturalAligment
      || (WarehouseListViewItem_c *)itemList->klass->_2.typeHierarchy[naturalAligment - 1] != WarehouseListViewItem_TypeInfo )
    {
      break;
    }
    if ( ListViewItem__get_IsSelect((ListViewItem_o *)itemList, 0) )
    {
      itemList = (System_Collections_Generic_List_object__o *)WarehouseListViewItem__get_UserSvtId(v8, v4);
      if ( !v3 )
        goto LABEL_14;
      System_Collections_Generic_Dictionary_long__int___Add(
        v3,
        (int64_t)itemList,
        v8->fields.selectNum,
        (const MethodInfo_344B868 *)Method_System_Collections_Generic_Dictionary_long__int__Add__);
    }
    if ( size == ++v7 )
      return v3;
    itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
    if ( !itemList )
      goto LABEL_14;
  }
  sub_1C3EA80(itemList);
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
  int64_t v9; // x1
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  int64_t itemList; // x0
  int v13; // w25
  int32_t v14; // w24
  __int64 naturalAligment; // x10
  __int64 v16; // x8
  __int128 v17; // q0
  struct System_Int64_array *items; // x8
  _QWORD *v19; // x9
  __int64 size; // x10
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

  if ( (byte_4C54B1F & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Collections_Generic_List_long__Add__);
    sub_1C3E564(&Method_System_Collections_Generic_List_long__ToArray__);
    sub_1C3E564(&Method_System_Collections_Generic_List_long___ctor__);
    sub_1C3E564(&Method_System_Collections_Generic_List_long__get_Count__);
    sub_1C3E564(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_1C3E564(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_1C3E564(&System_Collections_Generic_List_long__TypeInfo);
    sub_1C3E564(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C3E564(&WarehouseListViewItem_TypeInfo);
    byte_4C54B1F = 1;
  }
  v7 = (System_Collections_Generic_List_long__o *)sub_1C3E7B0(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v7,
    (const MethodInfo_379CC40 *)Method_System_Collections_Generic_List_long___ctor__);
  v8 = (System_Collections_Generic_List_long__o *)sub_1C3E7B0(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v8,
    (const MethodInfo_379CC40 *)Method_System_Collections_Generic_List_long___ctor__);
  itemList = (int64_t)this->fields.itemList;
  if ( !itemList )
    goto LABEL_37;
  v13 = *(_DWORD *)(itemList + 24);
  if ( v13 >= 1 )
  {
    v14 = 0;
    while ( 1 )
    {
      itemList = (int64_t)System_Collections_Generic_List_object___get_Item(
                            (System_Collections_Generic_List_object__o *)itemList,
                            v14,
                            (const MethodInfo_37B5190 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
      if ( !itemList )
        goto LABEL_37;
      naturalAligment = WarehouseListViewItem_TypeInfo->_2.naturalAligment;
      if ( *(unsigned __int8 *)(*(_QWORD *)itemList + 304LL) < (unsigned int)naturalAligment
        || *(WarehouseListViewItem_c **)(*(_QWORD *)(*(_QWORD *)itemList + 200LL) + 8 * naturalAligment - 8) != WarehouseListViewItem_TypeInfo )
      {
        goto LABEL_37;
      }
      v16 = *(_QWORD *)(itemList + 120);
      if ( v16 && *(_BYTE *)(itemList + 257) )
      {
        if ( *(_BYTE *)(itemList + 181) )
        {
          v17 = *(_OWORD *)(v16 + 32);
          *(_OWORD *)&v40.fields.currentCryptoKey = *(_OWORD *)(v16 + 16);
          *(_OWORD *)&v40.fields.fakeValue = v17;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v39 = v40;
          itemList = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49007660(&v39, 0);
          if ( !v8 )
            goto LABEL_37;
          items = v8->fields._items;
          v19 = Method_System_Collections_Generic_List_long__Add__;
          ++v8->fields._version;
          if ( !items )
            goto LABEL_37;
          size = v8->fields._size;
          v9 = itemList;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            v26 = v19[4];
            v27 = v8;
LABEL_27:
            System_Collections_Generic_List_long___AddWithResize(
              v27,
              v9,
              *(const MethodInfo_379D494 **)(*(_QWORD *)(v26 + 192) + 112LL));
            goto LABEL_28;
          }
          v21 = &items->obj.klass + size;
          v8->fields._size = size + 1;
        }
        else
        {
          v22 = *(_OWORD *)(v16 + 32);
          *(_OWORD *)&v40.fields.currentCryptoKey = *(_OWORD *)(v16 + 16);
          *(_OWORD *)&v40.fields.fakeValue = v22;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v38 = v40;
          itemList = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49007660(&v38, 0);
          if ( !v7 )
            goto LABEL_37;
          v23 = v7->fields._items;
          v24 = Method_System_Collections_Generic_List_long__Add__;
          ++v7->fields._version;
          if ( !v23 )
            goto LABEL_37;
          v25 = v7->fields._size;
          v9 = itemList;
          if ( (unsigned int)v25 >= LODWORD(v23->max_length) )
          {
            v26 = v24[4];
            v27 = v7;
            goto LABEL_27;
          }
          v21 = &v23->obj.klass + v25;
          v7->fields._size = v25 + 1;
        }
        v21[4] = (Il2CppClass *)v9;
      }
LABEL_28:
      if ( v13 == ++v14 )
        break;
      itemList = (int64_t)this->fields.itemList;
      if ( !itemList )
        goto LABEL_37;
    }
  }
  if ( !v7 || !v8 )
LABEL_37:
    sub_1C3E7C0(itemList, v9);
  v28 = v8->fields._size + v7->fields._size;
  if ( v28 < 1 )
  {
    *choiceList = 0;
    sub_1C3E508((CGThumbnailListItem_o *)choiceList, 0, v10, v11);
    v36 = unchoiceList;
    v35 = 0;
    *unchoiceList = 0;
  }
  else
  {
    v29 = System_Collections_Generic_List_long___ToArray(
            v7,
            (const MethodInfo_379EF4C *)Method_System_Collections_Generic_List_long__ToArray__);
    *choiceList = v29;
    sub_1C3E508((CGThumbnailListItem_o *)choiceList, (int32_t)v29, v30, v31);
    v32 = System_Collections_Generic_List_long___ToArray(
            v8,
            (const MethodInfo_379EF4C *)Method_System_Collections_Generic_List_long__ToArray__);
    v35 = (int)v32;
    *unchoiceList = v32;
    v36 = unchoiceList;
  }
  sub_1C3E508((CGThumbnailListItem_o *)v36, v35, v33, v34);
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
  int64_t v9; // x1
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  int64_t itemList; // x0
  int v13; // w25
  int32_t v14; // w24
  __int64 naturalAligment; // x10
  __int64 v16; // x8
  __int128 v17; // q0
  struct System_Int64_array *items; // x8
  _QWORD *v19; // x9
  __int64 size; // x10
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

  if ( (byte_4C54B1E & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Collections_Generic_List_long__Add__);
    sub_1C3E564(&Method_System_Collections_Generic_List_long__ToArray__);
    sub_1C3E564(&Method_System_Collections_Generic_List_long___ctor__);
    sub_1C3E564(&Method_System_Collections_Generic_List_long__get_Count__);
    sub_1C3E564(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_1C3E564(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_1C3E564(&System_Collections_Generic_List_long__TypeInfo);
    sub_1C3E564(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C3E564(&WarehouseListViewItem_TypeInfo);
    byte_4C54B1E = 1;
  }
  v7 = (System_Collections_Generic_List_long__o *)sub_1C3E7B0(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v7,
    (const MethodInfo_379CC40 *)Method_System_Collections_Generic_List_long___ctor__);
  v8 = (System_Collections_Generic_List_long__o *)sub_1C3E7B0(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v8,
    (const MethodInfo_379CC40 *)Method_System_Collections_Generic_List_long___ctor__);
  itemList = (int64_t)this->fields.itemList;
  if ( !itemList )
    goto LABEL_37;
  v13 = *(_DWORD *)(itemList + 24);
  if ( v13 >= 1 )
  {
    v14 = 0;
    while ( 1 )
    {
      itemList = (int64_t)System_Collections_Generic_List_object___get_Item(
                            (System_Collections_Generic_List_object__o *)itemList,
                            v14,
                            (const MethodInfo_37B5190 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
      if ( !itemList )
        goto LABEL_37;
      naturalAligment = WarehouseListViewItem_TypeInfo->_2.naturalAligment;
      if ( *(unsigned __int8 *)(*(_QWORD *)itemList + 304LL) < (unsigned int)naturalAligment
        || *(WarehouseListViewItem_c **)(*(_QWORD *)(*(_QWORD *)itemList + 200LL) + 8 * naturalAligment - 8) != WarehouseListViewItem_TypeInfo )
      {
        goto LABEL_37;
      }
      v16 = *(_QWORD *)(itemList + 120);
      if ( v16 && *(_BYTE *)(itemList + 256) )
      {
        if ( *(_BYTE *)(itemList + 180) )
        {
          v17 = *(_OWORD *)(v16 + 32);
          *(_OWORD *)&v40.fields.currentCryptoKey = *(_OWORD *)(v16 + 16);
          *(_OWORD *)&v40.fields.fakeValue = v17;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v39 = v40;
          itemList = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49007660(&v39, 0);
          if ( !v8 )
            goto LABEL_37;
          items = v8->fields._items;
          v19 = Method_System_Collections_Generic_List_long__Add__;
          ++v8->fields._version;
          if ( !items )
            goto LABEL_37;
          size = v8->fields._size;
          v9 = itemList;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            v26 = v19[4];
            v27 = v8;
LABEL_27:
            System_Collections_Generic_List_long___AddWithResize(
              v27,
              v9,
              *(const MethodInfo_379D494 **)(*(_QWORD *)(v26 + 192) + 112LL));
            goto LABEL_28;
          }
          v21 = &items->obj.klass + size;
          v8->fields._size = size + 1;
        }
        else
        {
          v22 = *(_OWORD *)(v16 + 32);
          *(_OWORD *)&v40.fields.currentCryptoKey = *(_OWORD *)(v16 + 16);
          *(_OWORD *)&v40.fields.fakeValue = v22;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v38 = v40;
          itemList = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49007660(&v38, 0);
          if ( !v7 )
            goto LABEL_37;
          v23 = v7->fields._items;
          v24 = Method_System_Collections_Generic_List_long__Add__;
          ++v7->fields._version;
          if ( !v23 )
            goto LABEL_37;
          v25 = v7->fields._size;
          v9 = itemList;
          if ( (unsigned int)v25 >= LODWORD(v23->max_length) )
          {
            v26 = v24[4];
            v27 = v7;
            goto LABEL_27;
          }
          v21 = &v23->obj.klass + v25;
          v7->fields._size = v25 + 1;
        }
        v21[4] = (Il2CppClass *)v9;
      }
LABEL_28:
      if ( v13 == ++v14 )
        break;
      itemList = (int64_t)this->fields.itemList;
      if ( !itemList )
        goto LABEL_37;
    }
  }
  if ( !v7 || !v8 )
LABEL_37:
    sub_1C3E7C0(itemList, v9);
  v28 = v8->fields._size + v7->fields._size;
  if ( v28 < 1 )
  {
    *lockList = 0;
    sub_1C3E508((CGThumbnailListItem_o *)lockList, 0, v10, v11);
    v36 = unlockList;
    v35 = 0;
    *unlockList = 0;
  }
  else
  {
    v29 = System_Collections_Generic_List_long___ToArray(
            v7,
            (const MethodInfo_379EF4C *)Method_System_Collections_Generic_List_long__ToArray__);
    *lockList = v29;
    sub_1C3E508((CGThumbnailListItem_o *)lockList, (int32_t)v29, v30, v31);
    v32 = System_Collections_Generic_List_long___ToArray(
            v8,
            (const MethodInfo_379EF4C *)Method_System_Collections_Generic_List_long__ToArray__);
    v35 = (int)v32;
    *unlockList = v32;
    v36 = unlockList;
  }
  sub_1C3E508((CGThumbnailListItem_o *)v36, v35, v33, v34);
  return v28 > 0;
}


void WarehouseListViewManager__InitLoad(const MethodInfo *method)
{
  __int64 v1; // x1
  WarehouseListViewManager_c *v2; // x0
  ListViewSort_o *servantSortInfo; // x0

  if ( (byte_4C54B16 & 1) == 0 )
  {
    sub_1C3E564(&WarehouseListViewManager_TypeInfo);
    byte_4C54B16 = 1;
  }
  v2 = WarehouseListViewManager_TypeInfo;
  if ( !WarehouseListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarehouseListViewManager_TypeInfo);
    v2 = WarehouseListViewManager_TypeInfo;
  }
  servantSortInfo = v2->static_fields->servantSortInfo;
  if ( !servantSortInfo
    || (ListViewSort__InitLoad(servantSortInfo, 0),
        (servantSortInfo = WarehouseListViewManager_TypeInfo->static_fields->servantEquipSortInfo) == 0)
    || (ListViewSort__InitLoad(servantSortInfo, 0),
        (servantSortInfo = WarehouseListViewManager_TypeInfo->static_fields->servantWarehouseSortInfo) == 0)
    || (ListViewSort__InitLoad(servantSortInfo, 0),
        (servantSortInfo = WarehouseListViewManager_TypeInfo->static_fields->servantEquipWarehouseSortInfo) == 0) )
  {
    sub_1C3E7C0(servantSortInfo, v1);
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
    sub_1C3E7C0(this, item);
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
    sub_1C3E7C0(parentManager, item);
  return !ServantEntity__get_IsOrganization((ServantEntity_o *)parentManager, 0)
      || item->fields.attribute
      || this->fields.sellEnableRestCnt - addServantSum >= 2;
}


void WarehouseListViewManager__Modify(WarehouseListViewManager_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  DataMasterBase_TMaster__TEntity__PKType__o *v5; // x20
  _BOOL8 v6; // x0
  const MethodInfo *v7; // x1
  WarehouseListViewItem_o *current; // x21
  __int64 naturalAligment; // x10
  const MethodInfo *v10; // x1
  int64_t UserSvtId; // x0
  Il2CppObject *Entity; // x1
  const MethodInfo *v13; // x2
  UnityEngine_Object_o *viewObject; // x22
  __int64 v15; // x1
  struct ListViewObject_o *v16; // x0
  UserGameEntity_o *SelfUserGame; // x20
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x9
  DataMasterBase_TMaster__TEntity__PKType__o *v19; // x19
  _BOOL8 v20; // x0
  const MethodInfo *v21; // x1
  WarehouseListViewItem_o *v22; // x21
  __int64 v23; // x10
  const MethodInfo *v24; // x1
  int64_t v25; // x0
  Il2CppObject *v26; // x1
  const MethodInfo *v27; // x2
  int64_t v28; // x0
  const MethodInfo *v29; // x1
  int64_t favoriteUserSvtId; // x27
  int64_t v31; // x22
  int64_t v32; // x0
  const MethodInfo *v33; // x3
  UnityEngine_Object_o *v34; // x22
  __int64 v35; // x1
  struct ListViewObject_o *v36; // x0
  System_Collections_Generic_List_Enumerator_object__o v37; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v38; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_4C54B1C & 1) == 0 )
  {
    sub_1C3E564(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1C3E564(&Method_DataManager_GetMasterData_UserServantStorageMaster___);
    sub_1C3E564(&Method_DataMasterBase_UserServantStorageMaster__UserServantEntity__long__GetEntity__);
    sub_1C3E564(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__);
    sub_1C3E564(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    sub_1C3E564(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C3E564(&WarehouseListViewItem_TypeInfo);
    byte_4C54B1C = 1;
  }
  memset(&v38, 0, sizeof(v38));
  if ( this->fields.itemList )
  {
    if ( (this->fields.kind & 0xFFFFFFFE) == 2 )
    {
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( Instance )
      {
        Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_UserServantStorageMaster___);
        if ( this->fields.itemList )
        {
          v5 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
          System_Collections_Generic_List_object___GetEnumerator(
            (System_Collections_Generic_List_Enumerator_T__o *)&v37,
            (System_Collections_Generic_List_object__o *)this->fields.itemList,
            (const MethodInfo_37B5F58 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
          v38 = v37;
          while ( 1 )
          {
            v6 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                   &v38,
                   (const MethodInfo_353FC4C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
            if ( !v6 )
              break;
            current = (WarehouseListViewItem_o *)v38.fields._current;
            if ( !v38.fields._current
              || (naturalAligment = WarehouseListViewItem_TypeInfo->_2.naturalAligment,
                  v38.fields._current->klass->_2.naturalAligment < (unsigned int)naturalAligment)
              || (WarehouseListViewItem_c *)v38.fields._current->klass->_2.typeHierarchy[naturalAligment - 1] != WarehouseListViewItem_TypeInfo )
            {
              sub_1C3E7C0(v6, v7);
            }
            if ( WarehouseListViewItem__get_UserSvtId((WarehouseListViewItem_o *)v38.fields._current, v7) >= 1 )
            {
              UserSvtId = WarehouseListViewItem__get_UserSvtId(current, v10);
              if ( !v5 )
                sub_1C3E7C0(UserSvtId, UserSvtId);
              Entity = DataMasterBase_object__object__long___GetEntity(
                         v5,
                         UserSvtId,
                         (const MethodInfo_33B54B4 *)Method_DataMasterBase_UserServantStorageMaster__UserServantEntity__long__GetEntity__);
              if ( Entity )
                WarehouseListViewItem__Modify(current, (UserServantEntity_o *)Entity, v13);
              viewObject = (UnityEngine_Object_o *)current->fields.viewObject;
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              if ( UnityEngine_Object__op_Inequality(viewObject, 0, 0) )
              {
                v16 = current->fields.viewObject;
                if ( !v16 )
                  sub_1C3E7C0(0, v15);
                ((void (__fastcall *)(struct ListViewObject_o *, WarehouseListViewItem_o *, const MethodInfo *))v16->klass->vtable._5_SetItem.methodPtr)(
                  v16,
                  current,
                  v16->klass->vtable._5_SetItem.method);
              }
            }
          }
LABEL_41:
          System_Collections_Generic_List_Enumerator_object___Dispose(
            &v38,
            (const MethodInfo_353FC48 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
          return;
        }
      }
    }
    else
    {
      SelfUserGame = UserGameMaster__getSelfUserGame(0);
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( Instance )
      {
        Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_UserServantMaster___);
        itemList = this->fields.itemList;
        if ( itemList )
        {
          v19 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
          System_Collections_Generic_List_object___GetEnumerator(
            (System_Collections_Generic_List_Enumerator_T__o *)&v37,
            (System_Collections_Generic_List_object__o *)itemList,
            (const MethodInfo_37B5F58 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
          v38 = v37;
          while ( 1 )
          {
            v20 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                    &v38,
                    (const MethodInfo_353FC4C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
            if ( !v20 )
              break;
            v22 = (WarehouseListViewItem_o *)v38.fields._current;
            if ( !v38.fields._current
              || (v23 = WarehouseListViewItem_TypeInfo->_2.naturalAligment,
                  v38.fields._current->klass->_2.naturalAligment < (unsigned int)v23)
              || (WarehouseListViewItem_c *)v38.fields._current->klass->_2.typeHierarchy[v23 - 1] != WarehouseListViewItem_TypeInfo )
            {
              sub_1C3E7C0(v20, v21);
            }
            if ( WarehouseListViewItem__get_UserSvtId((WarehouseListViewItem_o *)v38.fields._current, v21) >= 1 )
            {
              v25 = WarehouseListViewItem__get_UserSvtId(v22, v24);
              if ( !v19 )
                sub_1C3E7C0(v25, v25);
              v26 = DataMasterBase_object__object__long___GetEntity(
                      v19,
                      v25,
                      (const MethodInfo_33B54B4 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
              if ( v26 )
                WarehouseListViewItem__Modify(v22, (UserServantEntity_o *)v26, v27);
              v28 = WarehouseListViewItem__get_UserSvtId(v22, (const MethodInfo *)v26);
              if ( !SelfUserGame )
                sub_1C3E7C0(v28, v29);
              favoriteUserSvtId = SelfUserGame->fields.favoriteUserSvtId;
              v31 = v28;
              v32 = WarehouseListViewItem__get_UserSvtId(v22, v29);
              WarehouseListViewItem__Modify_38445636(
                v22,
                v31 == favoriteUserSvtId,
                v32 == SelfUserGame->fields.pushUserSvtId,
                v33);
              v34 = (UnityEngine_Object_o *)v22->fields.viewObject;
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              if ( UnityEngine_Object__op_Inequality(v34, 0, 0) )
              {
                v36 = v22->fields.viewObject;
                if ( !v36 )
                  sub_1C3E7C0(0, v35);
                ((void (__fastcall *)(struct ListViewObject_o *, WarehouseListViewItem_o *, const MethodInfo *))v36->klass->vtable._5_SetItem.methodPtr)(
                  v36,
                  v22,
                  v36->klass->vtable._5_SetItem.method);
              }
            }
          }
          goto LABEL_41;
        }
      }
    }
    sub_1C3E7C0(Instance, v4);
  }
}


void WarehouseListViewManager__ModifyItem(
        WarehouseListViewManager_o *this,
        int64_t userSvtId,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x9
  DataManager_o *Instance; // x0
  __int64 v7; // x1
  DataManager_o *v8; // x19
  Il2CppObject *Entity; // x19
  UserGameEntity_o *SelfUserGame; // x22
  _BOOL8 v11; // x0
  const MethodInfo *v12; // x1
  __int64 v13; // x11
  WarehouseListViewItem_o *v14; // x20
  int64_t v15; // x0
  Il2CppObject v16; // q0
  int64_t v17; // x21
  const MethodInfo *v18; // x2
  int64_t v19; // x0
  const MethodInfo *v20; // x1
  int64_t favoriteUserSvtId; // x28
  int64_t v22; // x21
  int64_t v23; // x0
  const MethodInfo *v24; // x3
  UnityEngine_Object_o *v25; // x21
  __int64 v26; // x1
  struct ListViewObject_o *v27; // x0
  _BOOL8 v28; // x0
  const MethodInfo *v29; // x1
  __int64 naturalAligment; // x11
  WarehouseListViewItem_o *current; // x22
  int64_t v32; // x0
  __int128 v33; // q0
  int64_t v34; // x23
  const MethodInfo *v35; // x2
  UnityEngine_Object_o *viewObject; // x23
  __int64 v37; // x1
  struct ListViewObject_o *v38; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v39; // [xsp+0h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v40; // [xsp+20h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v41; // [xsp+40h] [xbp-A0h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v42; // [xsp+60h] [xbp-80h] BYREF

  if ( (byte_4C54B1D & 1) == 0 )
  {
    sub_1C3E564(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1C3E564(&Method_DataManager_GetMasterData_UserServantStorageMaster___);
    sub_1C3E564(&Method_DataMasterBase_UserServantStorageMaster__UserServantEntity__long__GetEntity__);
    sub_1C3E564(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__);
    sub_1C3E564(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    sub_1C3E564(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C3E564(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C3E564(&WarehouseListViewItem_TypeInfo);
    byte_4C54B1D = 1;
  }
  memset(&v42, 0, sizeof(v42));
  itemList = this->fields.itemList;
  if ( itemList )
  {
    if ( (this->fields.kind & 0xFFFFFFFE) == 2 )
    {
      if ( userSvtId < 1 )
      {
        v8 = 0;
        goto LABEL_37;
      }
      Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( Instance )
      {
        Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                      Instance,
                                      (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_UserServantStorageMaster___);
        if ( Instance )
        {
          Instance = (DataManager_o *)DataMasterBase_object__object__long___GetEntity(
                                        (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                                        userSvtId,
                                        (const MethodInfo_33B54B4 *)Method_DataMasterBase_UserServantStorageMaster__UserServantEntity__long__GetEntity__);
          itemList = this->fields.itemList;
          if ( itemList )
          {
            v8 = Instance;
LABEL_37:
            System_Collections_Generic_List_object___GetEnumerator(
              (System_Collections_Generic_List_Enumerator_T__o *)&v41,
              (System_Collections_Generic_List_object__o *)itemList,
              (const MethodInfo_37B5F58 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
            v42 = *(System_Collections_Generic_List_Enumerator_object__o *)&v41.fields.currentCryptoKey;
            while ( 1 )
            {
              v28 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                      &v42,
                      (const MethodInfo_353FC4C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
              if ( !v28 )
                goto LABEL_57;
              if ( v42.fields._current
                && (naturalAligment = WarehouseListViewItem_TypeInfo->_2.naturalAligment,
                    v42.fields._current->klass->_2.naturalAligment >= (unsigned int)naturalAligment) )
              {
                if ( (WarehouseListViewItem_c *)v42.fields._current->klass->_2.typeHierarchy[naturalAligment - 1] == WarehouseListViewItem_TypeInfo )
                  current = (WarehouseListViewItem_o *)v42.fields._current;
                else
                  current = 0;
                if ( v8 )
                {
LABEL_42:
                  if ( !current )
                    sub_1C3E7C0(v28, v29);
                  v32 = WarehouseListViewItem__get_UserSvtId(current, v29);
                  v33 = *(_OWORD *)&v8->fields._DispLog;
                  v34 = v32;
                  *(SingletonMonoBehaviour_DataManager__Fields *)&v41.fields.currentCryptoKey = v8->fields.SingletonMonoBehaviour_DataManager__Fields;
                  *(_OWORD *)&v41.fields.fakeValue = v33;
                  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
                  v40 = v41;
                  if ( v34 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49007660(&v40, 0) )
                    WarehouseListViewItem__Modify(current, (UserServantEntity_o *)v8, v35);
                  goto LABEL_52;
                }
              }
              else
              {
                current = 0;
                if ( v8 )
                  goto LABEL_42;
              }
              if ( !current )
                sub_1C3E7C0(v28, v29);
LABEL_52:
              viewObject = (UnityEngine_Object_o *)current->fields.viewObject;
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              if ( UnityEngine_Object__op_Inequality(viewObject, 0, 0) )
              {
                v38 = current->fields.viewObject;
                if ( !v38 )
                  sub_1C3E7C0(0, v37);
                ((void (__fastcall *)(struct ListViewObject_o *, WarehouseListViewItem_o *, const MethodInfo *))v38->klass->vtable._5_SetItem.methodPtr)(
                  v38,
                  current,
                  v38->klass->vtable._5_SetItem.method);
              }
            }
          }
        }
      }
LABEL_66:
      sub_1C3E7C0(Instance, v7);
    }
    Entity = 0;
    SelfUserGame = UserGameMaster__getSelfUserGame(0);
    if ( userSvtId >= 1 )
    {
      Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_66;
      Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                    Instance,
                                    (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_UserServantMaster___);
      if ( !Instance )
        goto LABEL_66;
      Entity = DataMasterBase_object__object__long___GetEntity(
                 (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                 userSvtId,
                 (const MethodInfo_33B54B4 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    }
    Instance = (DataManager_o *)this->fields.itemList;
    if ( !Instance )
      goto LABEL_66;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v41,
      (System_Collections_Generic_List_object__o *)Instance,
      (const MethodInfo_37B5F58 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    *(_OWORD *)&v42.fields._list = *(_OWORD *)&v41.fields.currentCryptoKey;
    v42.fields._current = (Il2CppObject *)v41.fields.fakeValue;
    while ( 1 )
    {
      v11 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v42,
              (const MethodInfo_353FC4C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
      if ( !v11 )
      {
LABEL_57:
        System_Collections_Generic_List_Enumerator_object___Dispose(
          &v42,
          (const MethodInfo_353FC48 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
        return;
      }
      if ( v42.fields._current
        && (v13 = WarehouseListViewItem_TypeInfo->_2.naturalAligment,
            v42.fields._current->klass->_2.naturalAligment >= (unsigned int)v13) )
      {
        if ( (WarehouseListViewItem_c *)v42.fields._current->klass->_2.typeHierarchy[v13 - 1] == WarehouseListViewItem_TypeInfo )
          v14 = (WarehouseListViewItem_o *)v42.fields._current;
        else
          v14 = 0;
        if ( Entity )
        {
LABEL_20:
          if ( !v14 )
            sub_1C3E7C0(v11, v12);
          v15 = WarehouseListViewItem__get_UserSvtId(v14, v12);
          v16 = Entity[2];
          v17 = v15;
          *(Il2CppObject *)&v41.fields.currentCryptoKey = Entity[1];
          *(Il2CppObject *)&v41.fields.fakeValue = v16;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v39 = v41;
          if ( v17 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49007660(&v39, 0) )
            WarehouseListViewItem__Modify(v14, (UserServantEntity_o *)Entity, v18);
          goto LABEL_30;
        }
      }
      else
      {
        v14 = 0;
        if ( Entity )
          goto LABEL_20;
      }
      if ( !v14 )
        sub_1C3E7C0(v11, v12);
LABEL_30:
      v19 = WarehouseListViewItem__get_UserSvtId(v14, v12);
      if ( !SelfUserGame )
        sub_1C3E7C0(v19, v20);
      favoriteUserSvtId = SelfUserGame->fields.favoriteUserSvtId;
      v22 = v19;
      v23 = WarehouseListViewItem__get_UserSvtId(v14, v20);
      WarehouseListViewItem__Modify_38445636(
        v14,
        v22 == favoriteUserSvtId,
        v23 == SelfUserGame->fields.pushUserSvtId,
        v24);
      v25 = (UnityEngine_Object_o *)v14->fields.viewObject;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(v25, 0, 0) )
      {
        v27 = v14->fields.viewObject;
        if ( !v27 )
          sub_1C3E7C0(0, v26);
        ((void (__fastcall *)(struct ListViewObject_o *, WarehouseListViewItem_o *, const MethodInfo *))v27->klass->vtable._5_SetItem.methodPtr)(
          v27,
          v14,
          v27->klass->vtable._5_SetItem.method);
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
  const MethodInfo *v7; // x1
  struct WarehouseListManager_o *parentManager; // x8
  struct WarehouseListViewManager_o *baseListViewManager; // x9
  int size; // w23
  int32_t v11; // w21
  WarehouseListViewItem_o *v12; // x22
  __int64 naturalAligment; // x9
  int64_t UserSvtId; // x0
  int64_t v15; // x0
  struct WarehouseListManager_o *v16; // x8
  struct WarehouseListViewManager_o *v17; // x9
  WarehouseListViewManager_o *v18; // x0
  const MethodInfo *v19; // x1

  if ( (byte_4C54B38 & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_long__int__ContainsKey__);
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_long__int__get_Count__);
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_long__int__get_Item__);
    sub_1C3E564(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_1C3E564(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_1C3E564(&WarehouseListViewItem_TypeInfo);
    byte_4C54B38 = 1;
  }
  if ( selectServantIdDic
    && System_Collections_Generic_Dictionary_long__int___get_Count(
         selectServantIdDic,
         (const MethodInfo_344B518 *)Method_System_Collections_Generic_Dictionary_long__int__get_Count__) )
  {
    WarehouseListViewManager__ReleaseAll(this, v5);
    parentManager = this->fields.parentManager;
    if ( !parentManager
      || (baseListViewManager = parentManager->fields.baseListViewManager) == 0
      || (parentManager->fields.totalSum = baseListViewManager->fields.selectSum,
          (itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList) == 0) )
    {
LABEL_19:
      sub_1C3E7C0(itemList, v7);
    }
    size = itemList->fields._size;
    if ( size >= 1 )
    {
      v11 = 0;
      while ( 1 )
      {
        itemList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                  itemList,
                                                                  v11,
                                                                  (const MethodInfo_37B5190 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
        if ( !itemList )
          goto LABEL_19;
        v12 = (WarehouseListViewItem_o *)itemList;
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
               (const MethodInfo_344BA5C *)Method_System_Collections_Generic_Dictionary_long__int__ContainsKey__) )
        {
          v15 = WarehouseListViewItem__get_UserSvtId(v12, v7);
          itemList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_Dictionary_long__int___get_Item(
                                                                    selectServantIdDic,
                                                                    v15,
                                                                    (const MethodInfo_344B7C8 *)Method_System_Collections_Generic_Dictionary_long__int__get_Item__);
          v12->fields.selectNum = (int)itemList;
          v16 = this->fields.parentManager;
          ++this->fields.selectSum;
          if ( !v16 )
            goto LABEL_19;
          v17 = v16->fields.baseListViewManager;
          if ( !v17 )
            goto LABEL_19;
          v16->fields.totalSum = v17->fields.selectSum;
        }
        if ( size == ++v11 )
          return;
        itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
        if ( !itemList )
          goto LABEL_19;
      }
      sub_1C3EA80(itemList);
      WarehouseListViewManager__IsDragStart(v18, v19);
    }
  }
}


void WarehouseListViewManager__OnClickBonusFilterKind(WarehouseListViewManager_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x1
  ListViewSort_o *sort; // x0

  if ( (byte_4C54B28 & 1) == 0 )
  {
    sub_1C3E564(&Method_WarehouseListViewManager_OnClickBonusFilterKind__);
    byte_4C54B28 = 1;
  }
  if ( this->fields.isInput )
  {
    v3 = Method_WarehouseListViewManager_OnClickBonusFilterKind__;
    if ( (*((_BYTE *)Method_WarehouseListViewManager_OnClickBonusFilterKind__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C3E57C(Method_WarehouseListViewManager_OnClickBonusFilterKind__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C3E548(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    sort = this->fields.sort;
    if ( !sort )
      sub_1C3E7C0(0, v5);
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
  __int64 v10; // x1
  CommonUI_o *v11; // x0
  int32_t v12; // w1
  Il2CppObject *v13; // x0
  ListViewSort_o *v14; // x20
  CommonUI_o *v15; // x21
  ServantFilterSelectMenu_CallbackFunc_o *v16; // x22
  Il2CppObject *v17; // x0
  Il2CppObject *v18; // x21

  if ( (byte_4C54B30 & 1) == 0 )
  {
    sub_1C3E564(&ServantFilterSelectMenu_CallbackFunc_TypeInfo);
    sub_1C3E564(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C3E564(&Method_WarehouseListViewManager_EndSelectFilterKind__);
    sub_1C3E564(&Method_WarehouseListViewManager_OnClickFilterKind__);
    byte_4C54B30 = 1;
  }
  if ( this->fields.isInput )
  {
    v3 = Method_WarehouseListViewManager_OnClickFilterKind__;
    if ( (*((_BYTE *)Method_WarehouseListViewManager_OnClickFilterKind__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C3E57C(Method_WarehouseListViewManager_OnClickFilterKind__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C3E548(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    switch ( this->fields.kind )
    {
      case 0:
      case 2:
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        sort = this->fields.sort;
        v7 = Instance;
        v8 = (ServantFilterSelectMenu_CallbackFunc_o *)sub_1C3E7B0(ServantFilterSelectMenu_CallbackFunc_TypeInfo);
        ServantFilterSelectMenu_CallbackFunc___ctor(
          v8,
          (Il2CppObject *)this,
          Method_WarehouseListViewManager_EndSelectFilterKind__,
          0);
        if ( !v7 )
          goto LABEL_15;
        v11 = (CommonUI_o *)v7;
        v12 = 0;
        goto LABEL_14;
      case 1:
      case 3:
        v13 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        v14 = this->fields.sort;
        v15 = (CommonUI_o *)v13;
        v16 = (ServantFilterSelectMenu_CallbackFunc_o *)sub_1C3E7B0(ServantFilterSelectMenu_CallbackFunc_TypeInfo);
        ServantFilterSelectMenu_CallbackFunc___ctor(
          v16,
          (Il2CppObject *)this,
          Method_WarehouseListViewManager_EndSelectFilterKind__,
          0);
        if ( !v15 )
          goto LABEL_15;
        CommonUI__OpenServantFilterSelectMenu_31245072(v15, 5, v14, (ListViewManager_o *)this, v16, -1, 0);
        break;
      default:
        v17 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        sort = this->fields.sort;
        v18 = v17;
        v8 = (ServantFilterSelectMenu_CallbackFunc_o *)sub_1C3E7B0(ServantFilterSelectMenu_CallbackFunc_TypeInfo);
        ServantFilterSelectMenu_CallbackFunc___ctor(
          v8,
          (Il2CppObject *)this,
          Method_WarehouseListViewManager_EndSelectFilterKind__,
          0);
        if ( !v18 )
LABEL_15:
          sub_1C3E7C0(v9, v10);
        v12 = 6;
        v11 = (CommonUI_o *)v18;
LABEL_14:
        CommonUI__OpenServantFilterSelectMenu(v11, v12, sort, v8, -1, 0);
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

  if ( (byte_4C54B27 & 1) == 0 )
  {
    sub_1C3E564(&WarehouseListViewItem_TypeInfo);
    byte_4C54B27 = 1;
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
  __int64 v6; // x1
  struct ListViewSort_o *sort; // x8

  if ( (byte_4C54B33 & 1) == 0 )
  {
    sub_1C3E564(&Method_WarehouseListViewManager_OnClickSortAscendingOrder__);
    byte_4C54B33 = 1;
  }
  if ( this->fields.isInput )
  {
    v3 = Method_WarehouseListViewManager_OnClickSortAscendingOrder__;
    if ( (*((_BYTE *)Method_WarehouseListViewManager_OnClickSortAscendingOrder__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C3E57C(Method_WarehouseListViewManager_OnClickSortAscendingOrder__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C3E548(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    sort = this->fields.sort;
    if ( !sort )
      sub_1C3E7C0(v5, v6);
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
  __int64 v11; // x1
  int32_t v12; // w1

  if ( (byte_4C54B2E & 1) == 0 )
  {
    sub_1C3E564(&ServantSortSelectMenu_CallbackFunc_TypeInfo);
    sub_1C3E564(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C3E564(&Method_WarehouseListViewManager_EndSelectSortKind__);
    sub_1C3E564(&Method_WarehouseListViewManager_OnClickSortKind__);
    byte_4C54B2E = 1;
  }
  if ( this->fields.isInput )
  {
    v3 = Method_WarehouseListViewManager_OnClickSortKind__;
    if ( (*((_BYTE *)Method_WarehouseListViewManager_OnClickSortKind__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C3E57C(Method_WarehouseListViewManager_OnClickSortKind__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C3E548(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    kind = this->fields.kind;
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sort = this->fields.sort;
    v8 = (CommonUI_o *)Instance;
    v9 = (ServantSortSelectMenu_CallbackFunc_o *)sub_1C3E7B0(ServantSortSelectMenu_CallbackFunc_TypeInfo);
    ServantSortSelectMenu_CallbackFunc___ctor(
      v9,
      (Il2CppObject *)this,
      Method_WarehouseListViewManager_EndSelectSortKind__,
      0);
    if ( !v8 )
      sub_1C3E7C0(v10, v11);
    if ( kind <= 3 )
      v12 = kind + 1;
    else
      v12 = 3;
    CommonUI__OpenServantSortSelectMenu(v8, v12, sort, 1, v9, 0);
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

  if ( (byte_4C54B2D & 1) == 0 )
  {
    sub_1C3E564(&WarehouseListViewItem_TypeInfo);
    byte_4C54B2D = 1;
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
  __int64 v7; // x1
  UIScrollView_o *v8; // x0

  if ( (byte_4C54B24 & 1) == 0 )
  {
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    byte_4C54B24 = 1;
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
        v8 = this->fields.scrollView;
        if ( !v8
          || (((void (__fastcall *)(UIScrollView_o *, __int64, const MethodInfo *))v8->klass->vtable._8_UpdateScrollbars.methodPtr)(
                v8,
                1,
                v8->klass->vtable._8_UpdateScrollbars.method),
              (v8 = this->fields.scrollView) == 0) )
        {
          sub_1C3E7C0(v8, v7);
        }
        UIScrollView__UpdatePosition(v8, 0);
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

  if ( (byte_4C54B1A & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Collections_Generic_List_WarehouseListViewObject__get_Count__);
    sub_1C3E564(&Method_System_Collections_Generic_List_WarehouseListViewObject__get_Item__);
    byte_4C54B1A = 1;
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
                        (const MethodInfo_37B5190 *)Method_System_Collections_Generic_List_WarehouseListViewObject__get_Item__);
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
    sub_1C3E7C0(parentManager, method);
  }
}


void WarehouseListViewManager__ReleaseAll(WarehouseListViewManager_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x0
  _BOOL8 v4; // x0
  __int64 v5; // x1
  Il2CppObject *current; // x20
  __int64 naturalAligment; // x9
  const MethodInfo *v8; // x3
  const MethodInfo *v9; // x1
  System_Collections_Generic_List_Enumerator_object__o v10; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4C54B26 & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__);
    sub_1C3E564(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    sub_1C3E564(&WarehouseListViewItem_TypeInfo);
    byte_4C54B26 = 1;
  }
  memset(&v10, 0, sizeof(v10));
  itemList = this->fields.itemList;
  this->fields.sellEnableRestCnt = 0;
  if ( !itemList )
    sub_1C3E7C0(0, method);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v10,
    (System_Collections_Generic_List_object__o *)itemList,
    (const MethodInfo_37B5F58 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  while ( 1 )
  {
    v4 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v10,
           (const MethodInfo_353FC4C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    if ( !v4 )
      break;
    current = v10.fields._current;
    if ( !v10.fields._current )
      goto LABEL_12;
    naturalAligment = WarehouseListViewItem_TypeInfo->_2.naturalAligment;
    if ( v10.fields._current->klass->_2.naturalAligment < (unsigned int)naturalAligment
      || (WarehouseListViewItem_c *)v10.fields._current->klass->_2.typeHierarchy[naturalAligment - 1] != WarehouseListViewItem_TypeInfo )
    {
      sub_1C3EA80(v10.fields._current);
LABEL_12:
      sub_1C3E7C0(v4, v5);
    }
    ListViewItem__set_IsSelect((ListViewItem_o *)v10.fields._current, 0, 0);
    WarehouseListViewManager__ChangeSellEnableRestCnt(this, 1, (WarehouseListViewItem_o *)current, v8);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v10,
    (const MethodInfo_353FC48 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
  this->fields.selectSum = 0;
  WarehouseListViewManager__RefrashListDisp(this, v9);
}


// local variable allocation has failed, the output may be wrong!
void WarehouseListViewManager__RequestListObject(
        WarehouseListViewManager_o *this,
        int32_t mode,
        float delay,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *ObjectList; // x0
  __int64 v8; // x1
  int32_t size; // w8
  Il2CppObject *current; // x21
  System_Action_o *v11; // x22
  __int64 v12; // x0
  __int64 v13; // x1
  System_Collections_Generic_List_Enumerator_object__o v14; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4C54B22 & 1) == 0 )
  {
    sub_1C3E564(&System_Action_TypeInfo);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_WarehouseListViewObject__Dispose__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_WarehouseListViewObject__MoveNext__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_WarehouseListViewObject__get_Current__);
    sub_1C3E564(&Method_System_Collections_Generic_List_WarehouseListViewObject__GetEnumerator__);
    sub_1C3E564(&Method_System_Collections_Generic_List_WarehouseListViewObject__get_Count__);
    sub_1C3E564(&Method_WarehouseListViewManager_OnMoveEnd__);
    sub_1C3E564(&StringLiteral_9942/*"OnMoveEnd"*/);
    byte_4C54B22 = 1;
  }
  memset(&v14, 0, sizeof(v14));
  ObjectList = (System_Collections_Generic_List_object__o *)WarehouseListViewManager__get_ObjectList(
                                                              this,
                                                              *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_1C3E7C0(0, v8);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_9942/*"OnMoveEnd"*/,
      delay,
      0);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v14,
      ObjectList,
      (const MethodInfo_37B5F58 *)Method_System_Collections_Generic_List_WarehouseListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v14,
              (const MethodInfo_353FC4C *)Method_System_Collections_Generic_List_Enumerator_WarehouseListViewObject__MoveNext__) )
    {
      current = v14.fields._current;
      v11 = (System_Action_o *)sub_1C3E7B0(System_Action_TypeInfo);
      System_Action___ctor(v11, (Il2CppObject *)this, Method_WarehouseListViewManager_OnMoveEnd__, 0);
      if ( !current )
        sub_1C3E7C0(v12, v13);
      WarehouseListViewObject__Init_38470400((WarehouseListViewObject_o *)current, mode, v11, delay, 0);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v14,
      (const MethodInfo_353FC48 *)Method_System_Collections_Generic_List_Enumerator_WarehouseListViewObject__Dispose__);
  }
}


// local variable allocation has failed, the output may be wrong!
void WarehouseListViewManager__RequestListObject_38460504(
        WarehouseListViewManager_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *ObjectList; // x0
  __int64 v6; // x1
  int32_t size; // w8
  Il2CppObject *current; // x21
  System_Action_o *v9; // x22
  __int64 v10; // x0
  __int64 v11; // x1
  System_Collections_Generic_List_Enumerator_object__o v12; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4C54B23 & 1) == 0 )
  {
    sub_1C3E564(&System_Action_TypeInfo);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_WarehouseListViewObject__Dispose__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_WarehouseListViewObject__MoveNext__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_WarehouseListViewObject__get_Current__);
    sub_1C3E564(&Method_System_Collections_Generic_List_WarehouseListViewObject__GetEnumerator__);
    sub_1C3E564(&Method_System_Collections_Generic_List_WarehouseListViewObject__get_Count__);
    sub_1C3E564(&Method_WarehouseListViewManager_OnMoveEnd__);
    sub_1C3E564(&StringLiteral_9942/*"OnMoveEnd"*/);
    byte_4C54B23 = 1;
  }
  memset(&v12, 0, sizeof(v12));
  ObjectList = (System_Collections_Generic_List_object__o *)WarehouseListViewManager__get_ObjectList(
                                                              this,
                                                              *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_1C3E7C0(0, v6);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_9942/*"OnMoveEnd"*/,
      0.0,
      0);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v12,
      ObjectList,
      (const MethodInfo_37B5F58 *)Method_System_Collections_Generic_List_WarehouseListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v12,
              (const MethodInfo_353FC4C *)Method_System_Collections_Generic_List_Enumerator_WarehouseListViewObject__MoveNext__) )
    {
      current = v12.fields._current;
      v9 = (System_Action_o *)sub_1C3E7B0(System_Action_TypeInfo);
      System_Action___ctor(v9, (Il2CppObject *)this, Method_WarehouseListViewManager_OnMoveEnd__, 0);
      if ( !current )
        sub_1C3E7C0(v10, v11);
      WarehouseListViewObject__Init_38470484((WarehouseListViewObject_o *)current, mode, v9, 0);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v12,
      (const MethodInfo_353FC48 *)Method_System_Collections_Generic_List_Enumerator_WarehouseListViewObject__Dispose__);
  }
}


void WarehouseListViewManager__SaveSortInfo(WarehouseListViewManager_o *this, const MethodInfo *method)
{
  WarehouseListViewManager_c *v2; // x0
  ListViewSort_o *servantSortInfo; // x8
  __int64 v4; // x0
  __int64 v5; // x1
  ListViewSort_o *servantEquipSortInfo; // x8
  ListViewSort_o *servantWarehouseSortInfo; // x8
  ListViewSort_o *servantEquipWarehouseSortInfo; // x8

  if ( (byte_4C54B1B & 1) == 0 )
  {
    sub_1C3E564(&WarehouseListViewManager_TypeInfo);
    byte_4C54B1B = 1;
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
    sub_1C3E7C0(v4, v5);
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
  if ( (byte_4C54B29 & 1) == 0 )
  {
    sub_1C3E564(&int_TypeInfo);
    sub_1C3E564(&LocalizationManager_TypeInfo);
    sub_1C3E564(&Method_WarehouseListViewManager_SelectListView__);
    this = (WarehouseListViewManager_o *)sub_1C3E564(&StringLiteral_12486/*"SUM_INFO"*/);
    byte_4C54B29 = 1;
  }
  if ( !selectItem )
    goto LABEL_34;
  if ( !WarehouseListViewItem__get_IsCanNotSelect(selectItem, (const MethodInfo *)selectItem) )
  {
    if ( ListViewItem__get_IsSelect((ListViewItem_o *)selectItem, 0) )
    {
      v8 = Method_WarehouseListViewManager_SelectListView__;
      if ( (*((_BYTE *)Method_WarehouseListViewManager_SelectListView__ + 83) & 2) != 0 )
        v8 = (_QWORD *)sub_1C3E57C(Method_WarehouseListViewManager_SelectListView__);
      v9 = (System_Reflection_MethodBase_o *)sub_1C3E548(v8, v8[4]);
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
          this = (WarehouseListViewManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12486/*"SUM_INFO"*/, 0);
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
              this = (WarehouseListViewManager_o *)System_String__Format_63677760((System_String_o *)v20, v28, v29, 0);
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
        v35 = (_QWORD *)sub_1C3E57C(Method_WarehouseListViewManager_SelectListView__);
      v6 = (System_Reflection_MethodBase_o *)sub_1C3E548(v35, v35[4]);
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
          this = (WarehouseListViewManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12486/*"SUM_INFO"*/, 0);
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
              this = (WarehouseListViewManager_o *)System_String__Format_63677760((System_String_o *)v46, v54, v55, 0);
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
    sub_1C3E7C0(this, selectItem);
  }
  v5 = Method_WarehouseListViewManager_SelectListView__;
  if ( (*((_BYTE *)Method_WarehouseListViewManager_SelectListView__ + 83) & 2) != 0 )
    v5 = (_QWORD *)sub_1C3E57C(Method_WarehouseListViewManager_SelectListView__);
  v6 = (System_Reflection_MethodBase_o *)sub_1C3E548(v5, v5[4]);
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

  if ( (byte_4C54B2C & 1) == 0 )
  {
    sub_1C3E564(&Method_WarehouseListViewManager_SelectListViewChoice__);
    byte_4C54B2C = 1;
  }
  v5 = Method_WarehouseListViewManager_SelectListViewChoice__;
  if ( (*((_BYTE *)Method_WarehouseListViewManager_SelectListViewChoice__ + 83) & 2) != 0 )
    v5 = (_QWORD *)sub_1C3E57C(Method_WarehouseListViewManager_SelectListViewChoice__);
  v6 = (System_Reflection_MethodBase_o *)sub_1C3E548(v5, v5[4]);
  OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0, 0);
  if ( !selectItem )
    sub_1C3E7C0(v7, v8);
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

  if ( (byte_4C54B2B & 1) == 0 )
  {
    sub_1C3E564(&Method_WarehouseListViewManager_SelectListViewLock__);
    byte_4C54B2B = 1;
  }
  v5 = Method_WarehouseListViewManager_SelectListViewLock__;
  if ( (*((_BYTE *)Method_WarehouseListViewManager_SelectListViewLock__ + 83) & 2) != 0 )
    v5 = (_QWORD *)sub_1C3E57C(Method_WarehouseListViewManager_SelectListViewLock__);
  v6 = (System_Reflection_MethodBase_o *)sub_1C3E548(v5, v5[4]);
  OverwriteAssetSoundName__PlaySystemSe(v6, 11, 0, 0);
  if ( !selectItem )
    sub_1C3E7C0(v7, v8);
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

  if ( (byte_4C54B3C & 1) == 0 )
  {
    sub_1C3E564(&Method_WarehouseListViewManager_SetDragEnd__);
    byte_4C54B3C = 1;
  }
  v3 = Method_WarehouseListViewManager_SetDragEnd__;
  if ( (*((_BYTE *)Method_WarehouseListViewManager_SetDragEnd__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C3E57C(Method_WarehouseListViewManager_SetDragEnd__);
  v4 = (System_Reflection_MethodBase_o *)sub_1C3E548(v3, v3[4]);
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
  *(_OWORD *)&this->fields.dragSelectSum = xmmword_C12420;
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


// local variable allocation has failed, the output may be wrong!
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

  if ( (byte_4C54B3A & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    sub_1C3E564(&WarehouseListViewItem_TypeInfo);
    sub_1C3E564(&WarehouseListViewObject_TypeInfo);
    byte_4C54B3A = 1;
  }
  itemSortList = (System_Collections_Generic_List_object__o *)this->fields.itemSortList;
  if ( !itemSortList )
    goto LABEL_46;
  itemSortList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                itemSortList,
                                                                index,
                                                                (const MethodInfo_37B5190 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
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
    sub_1C3E7C0(itemSortList, *(_QWORD *)&index);
  v18 = WarehouseListViewObject_TypeInfo->_2.naturalAligment;
  if ( itemSortList->klass->_2.naturalAligment >= (unsigned int)v18
    && (WarehouseListViewObject_c *)itemSortList->klass->_2.typeHierarchy[v18 - 1] == WarehouseListViewObject_TypeInfo )
  {
    WarehouseListViewObject__SetupDisp((WarehouseListViewObject_o *)itemSortList, 0);
    return v12;
  }
LABEL_47:
  sub_1C3EA80(itemSortList);
  WarehouseListViewManager__SetDragStart(v20, v21, v22, v23);
  return result;
}


// local variable allocation has failed, the output may be wrong!
void WarehouseListViewManager__SetDragSelectItem(
        WarehouseListViewManager_o *this,
        int32_t startIndex,
        int32_t endIndex,
        const MethodInfo *method)
{
  int v5; // w22
  WarehouseListViewManager_o *v6; // x19
  int32_t dragStartIndex; // w8
  int32_t dragEndIndex; // w9
  int v9; // w25
  int v10; // w26
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

  v5 = startIndex;
  v6 = this;
  if ( (byte_4C54B39 & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    sub_1C3E564(&WarehouseListViewItem_TypeInfo);
    this = (WarehouseListViewManager_o *)sub_1C3E564(&WarehouseListViewObject_TypeInfo);
    byte_4C54B39 = 1;
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
  if ( v5 <= endIndex )
    v11 = endIndex;
  else
    v11 = v5;
  if ( v5 <= endIndex )
    v12 = v5;
  else
    v12 = endIndex;
  if ( v5 < 0 )
    v13 = -1;
  else
    v13 = v11;
  if ( v5 < 0 )
    v14 = -1;
  else
    v14 = v12;
  v6->fields.dragStartIndex = v5;
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
  if ( (v5 & 0x80000000) == 0 )
  {
    if ( v5 <= endIndex )
    {
      do
      {
        if ( v5 > v9 || v10 < 0 || v5 < v10 )
          this = (WarehouseListViewManager_o *)WarehouseListViewManager__SetDragSelect(v6, v5, 1, method);
        ++v5;
      }
      while ( v5 <= endIndex );
    }
    else
    {
      do
      {
        if ( v5 > v9 || v10 < 0 || v5 < v10 )
          this = (WarehouseListViewManager_o *)WarehouseListViewManager__SetDragSelect(v6, v5, 1, method);
        --v5;
      }
      while ( v5 >= endIndex );
    }
    if ( (v14 & 0x80000000) == 0 && v6->fields.isDragSelect )
    {
      parentManager = v6->fields.parentManager;
      if ( !parentManager )
LABEL_63:
        sub_1C3E7C0(this, *(_QWORD *)&startIndex);
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
                                                 (const MethodInfo_37B5190 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
          if ( !this )
            goto LABEL_63;
          *(_QWORD *)&startIndex = WarehouseListViewItem_TypeInfo;
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
                sub_1C3EA80(this);
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


// local variable allocation has failed, the output may be wrong!
void WarehouseListViewManager__SetDragStart(
        WarehouseListViewManager_o *this,
        int32_t startIndex,
        bool isDragSelect,
        const MethodInfo *method)
{
  int32_t v4; // w20
  bool v6; // w21
  System_Collections_Generic_List_object__o *itemSortList; // x0
  int size; // w22
  int32_t v9; // w21
  __int64 naturalAligment; // x9
  UnityEngine_Object_o *scrollView; // x20

  v4 = startIndex;
  v6 = isDragSelect;
  if ( (byte_4C54B3B & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_1C3E564(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    sub_1C3E564(&WarehouseListViewItem_TypeInfo);
    byte_4C54B3B = 1;
  }
  *(_OWORD *)&this->fields.dragSelectSum = xmmword_C12420;
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
                                                                    (const MethodInfo_37B5190 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
      if ( !itemSortList )
        goto LABEL_19;
      *(_QWORD *)&startIndex = WarehouseListViewItem_TypeInfo;
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
    sub_1C3EA80(itemSortList);
LABEL_19:
    sub_1C3E7C0(itemSortList, *(_QWORD *)&startIndex);
  }
LABEL_12:
  WarehouseListViewManager__SetDragSelectItem(this, v4, v4, method);
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

  if ( (byte_4C54B32 & 1) == 0 )
  {
    sub_1C3E564(&StringLiteral_17504/*"btn_filter_on"*/);
    sub_1C3E564(&StringLiteral_17503/*"btn_filter"*/);
    byte_4C54B32 = 1;
  }
  sort = this->fields.sort;
  if ( !sort
    || (filterSprite = this->fields.filterSprite,
        sort = (ListViewSort_o *)ListViewSort__CheckFilterDefaultAll(sort, -1, 0),
        !filterSprite) )
  {
    sub_1C3E7C0(sort, method);
  }
  v5 = (System_String_o **)&StringLiteral_17503/*"btn_filter"*/;
  if ( ((unsigned __int8)sort & 1) == 0 )
    v5 = (System_String_o **)&StringLiteral_17504/*"btn_filter_on"*/;
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
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.callbackFunc, (int32_t)callback, (int32_t)callback, method);
  WarehouseListViewManager__SetMode_38458928(this, mode, v6);
}


void WarehouseListViewManager__SetMode_38458928(
        WarehouseListViewManager_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  __int64 v5; // x1
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x0
  _BOOL8 v7; // x0
  __int64 v8; // x1
  WarehouseListViewItem_o *v9; // x20
  __int64 v10; // x9
  const MethodInfo *v11; // x1
  _BOOL8 v12; // x0
  __int64 v13; // x1
  struct WarehouseListManager_o *v14; // x8
  struct WarehouseListViewManager_o *v15; // x9
  UILabel_o *v16; // x21
  System_String_o *v17; // x0
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x3
  __int64 v21; // x4
  __int64 v22; // x5
  __int64 v23; // x6
  __int64 v24; // x7
  struct WarehouseListManager_o *v25; // x8
  System_String_o *v26; // x22
  __int64 v27; // x0
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x3
  __int64 v31; // x4
  __int64 v32; // x5
  __int64 v33; // x6
  __int64 v34; // x7
  struct WarehouseListManager_o *v35; // x8
  Il2CppObject *v36; // x23
  Il2CppObject *v37; // x2
  System_String_o *v38; // x0
  __int64 v39; // x0
  __int64 v40; // x1
  const MethodInfo *v41; // x2
  struct WarehouseListManager_o *v42; // x8
  WarehouseListViewManager_o *v43; // x0
  char v44; // w24
  _BOOL8 v45; // x0
  __int64 v46; // x1
  WarehouseListViewItem_o *current; // x20
  __int64 naturalAligment; // x9
  const MethodInfo *v49; // x1
  _BOOL8 CanNotSelect; // x0
  __int64 v51; // x1
  struct WarehouseListManager_o *parentManager; // x8
  struct WarehouseListViewManager_o *baseListViewManager; // x9
  UILabel_o *selectDoneLabel; // x21
  System_String_o *v55; // x0
  __int64 v56; // x1
  __int64 v57; // x2
  __int64 v58; // x3
  __int64 v59; // x4
  __int64 v60; // x5
  __int64 v61; // x6
  __int64 v62; // x7
  struct WarehouseListManager_o *v63; // x8
  System_String_o *v64; // x22
  __int64 v65; // x0
  __int64 v66; // x1
  __int64 v67; // x2
  __int64 v68; // x3
  __int64 v69; // x4
  __int64 v70; // x5
  __int64 v71; // x6
  __int64 v72; // x7
  struct WarehouseListManager_o *v73; // x8
  Il2CppObject *v74; // x23
  Il2CppObject *v75; // x2
  System_String_o *v76; // x0
  __int64 v77; // x0
  __int64 v78; // x1
  const MethodInfo *v79; // x2
  struct WarehouseListManager_o *v80; // x8
  WarehouseListViewManager_o *v81; // x0
  const MethodInfo *v82; // x1
  const MethodInfo *v83; // x2
  int32_t v84; // w1
  const MethodInfo *v85; // x1
  int32_t sendMax; // [xsp+4h] [xbp-9Ch] BYREF
  System_Collections_Generic_List_Enumerator_object__o v87; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v88; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_4C54B21 & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__);
    sub_1C3E564(&int_TypeInfo);
    sub_1C3E564(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    sub_1C3E564(&LocalizationManager_TypeInfo);
    sub_1C3E564(&WarehouseListViewItem_TypeInfo);
    sub_1C3E564(&StringLiteral_12486/*"SUM_INFO"*/);
    byte_4C54B21 = 1;
  }
  memset(&v88, 0, sizeof(v88));
  this->fields.initMode = mode;
  this->fields.callbackCount = ListViewManager__get_ObjectSum((ListViewManager_o *)this, 0);
  ListViewManager__set_IsInput((ListViewManager_o *)this, mode == 2, 0);
  if ( (unsigned int)(mode - 1) < 2 )
  {
    itemList = this->fields.itemList;
    if ( itemList )
    {
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v87,
        (System_Collections_Generic_List_object__o *)itemList,
        (const MethodInfo_37B5F58 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
      v88 = v87;
      v44 = 0;
      while ( 1 )
      {
        v45 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v88,
                (const MethodInfo_353FC4C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
        if ( !v45 )
          break;
        current = (WarehouseListViewItem_o *)v88.fields._current;
        if ( !v88.fields._current )
          goto LABEL_50;
        naturalAligment = WarehouseListViewItem_TypeInfo->_2.naturalAligment;
        if ( v88.fields._current->klass->_2.naturalAligment < (unsigned int)naturalAligment
          || (WarehouseListViewItem_c *)v88.fields._current->klass->_2.typeHierarchy[naturalAligment - 1] != WarehouseListViewItem_TypeInfo )
        {
          sub_1C3EA80(v88.fields._current);
LABEL_50:
          sub_1C3E7C0(v45, v46);
        }
        if ( ListViewItem__get_IsSelect((ListViewItem_o *)v88.fields._current, 0) )
        {
          CanNotSelect = WarehouseListViewItem__get_IsCanNotSelect(current, v49);
          if ( CanNotSelect )
          {
            parentManager = this->fields.parentManager;
            --this->fields.selectSum;
            if ( !parentManager )
              sub_1C3E7C0(CanNotSelect, v51);
            baseListViewManager = parentManager->fields.baseListViewManager;
            if ( !baseListViewManager )
              sub_1C3E7C0(CanNotSelect, v51);
            parentManager->fields.totalSum = baseListViewManager->fields.selectSum;
            selectDoneLabel = this->fields.selectDoneLabel;
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            v55 = LocalizationManager__Get((System_String_o *)StringLiteral_12486/*"SUM_INFO"*/, 0);
            v63 = this->fields.parentManager;
            if ( !v63 )
              sub_1C3E7C0(v55, v56);
            v64 = v55;
            LODWORD(v87.fields._list) = v63->fields.totalSum;
            v65 = j_il2cpp_value_box_0(int_TypeInfo, &v87, v57, v58, v59, v60, v61, v62);
            v73 = this->fields.parentManager;
            if ( !v73 )
              sub_1C3E7C0(v65, v66);
            v74 = (Il2CppObject *)v65;
            sendMax = v73->fields.sendMax;
            v75 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &sendMax, v67, v68, v69, v70, v71, v72);
            v76 = System_String__Format_63677760(v64, v74, v75, 0);
            if ( !selectDoneLabel )
              sub_1C3E7C0(v76, v76);
            UILabel__set_text(selectDoneLabel, v76, 0);
            v80 = this->fields.parentManager;
            if ( !v80 )
              sub_1C3E7C0(v77, v78);
            v81 = v80->fields.baseListViewManager;
            if ( !v81 )
              sub_1C3E7C0(0, v78);
            WarehouseListViewManager__DecrementNumber(v81, current->fields.selectNum, v79);
            ListViewItem__set_IsSelect((ListViewItem_o *)current, 0, 0);
            v44 = 1;
          }
        }
      }
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v88,
        (const MethodInfo_353FC48 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
      if ( (v44 & 1) != 0 )
        WarehouseListViewManager__RefrashListDisp(this, v82);
      if ( this->fields.isInput )
        v84 = 3;
      else
        v84 = 2;
      goto LABEL_47;
    }
LABEL_60:
    sub_1C3E7C0(itemList, v5);
  }
  if ( mode != 3 )
    return;
  itemList = this->fields.itemList;
  if ( !itemList )
    goto LABEL_60;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v87,
    (System_Collections_Generic_List_object__o *)itemList,
    (const MethodInfo_37B5F58 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  v88 = v87;
  while ( 1 )
  {
    v7 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v88,
           (const MethodInfo_353FC4C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    if ( !v7 )
      break;
    v9 = (WarehouseListViewItem_o *)v88.fields._current;
    if ( !v88.fields._current )
      goto LABEL_52;
    v10 = WarehouseListViewItem_TypeInfo->_2.naturalAligment;
    if ( v88.fields._current->klass->_2.naturalAligment < (unsigned int)v10
      || (WarehouseListViewItem_c *)v88.fields._current->klass->_2.typeHierarchy[v10 - 1] != WarehouseListViewItem_TypeInfo )
    {
      sub_1C3EA80(v88.fields._current);
LABEL_52:
      sub_1C3E7C0(v7, v8);
    }
    if ( ListViewItem__get_IsSelect((ListViewItem_o *)v88.fields._current, 0) )
    {
      v12 = WarehouseListViewItem__get_IsCanNotSelect(v9, v11);
      if ( v12 )
      {
        v14 = this->fields.parentManager;
        --this->fields.selectSum;
        if ( !v14 )
          sub_1C3E7C0(v12, v13);
        v15 = v14->fields.baseListViewManager;
        if ( !v15 )
          sub_1C3E7C0(v12, v13);
        v14->fields.totalSum = v15->fields.selectSum;
        v16 = this->fields.selectDoneLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v17 = LocalizationManager__Get((System_String_o *)StringLiteral_12486/*"SUM_INFO"*/, 0);
        v25 = this->fields.parentManager;
        if ( !v25 )
          sub_1C3E7C0(v17, v18);
        v26 = v17;
        LODWORD(v87.fields._list) = v25->fields.totalSum;
        v27 = j_il2cpp_value_box_0(int_TypeInfo, &v87, v19, v20, v21, v22, v23, v24);
        v35 = this->fields.parentManager;
        if ( !v35 )
          sub_1C3E7C0(v27, v28);
        v36 = (Il2CppObject *)v27;
        sendMax = v35->fields.sendMax;
        v37 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &sendMax, v29, v30, v31, v32, v33, v34);
        v38 = System_String__Format_63677760(v26, v36, v37, 0);
        if ( !v16 )
          sub_1C3E7C0(v38, v38);
        UILabel__set_text(v16, v38, 0);
        v42 = this->fields.parentManager;
        if ( !v42 )
          sub_1C3E7C0(v39, v40);
        v43 = v42->fields.baseListViewManager;
        if ( !v43 )
          sub_1C3E7C0(0, v40);
        WarehouseListViewManager__DecrementNumber(v43, v9->fields.selectNum, v41);
        ListViewItem__set_IsSelect((ListViewItem_o *)v9, 0, 0);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v88,
    (const MethodInfo_353FC48 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
  WarehouseListViewManager__RefrashListDisp(this, v85);
  v84 = 4;
LABEL_47:
  WarehouseListViewManager__RequestListObject_38460504(this, v84, v83);
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
  if ( (byte_4C54B20 & 1) == 0 )
  {
    this = (WarehouseListViewManager_o *)sub_1C3E564(&WarehouseListViewObject_TypeInfo);
    byte_4C54B20 = 1;
  }
  if ( !obj
    || (naturalAligment = WarehouseListViewObject_TypeInfo->_2.naturalAligment,
        obj->klass->_2.naturalAligment < (unsigned int)naturalAligment)
    || (WarehouseListViewObject_c *)obj->klass->_2.typeHierarchy[naturalAligment - 1] != WarehouseListViewObject_TypeInfo )
  {
    sub_1C3E7C0(this, obj);
  }
  if ( v5->fields.initMode == 2 )
    v7 = 3;
  else
    v7 = 2;
  WarehouseListViewObject__Init_38469488((WarehouseListViewObject_o *)obj, v7, 0);
}


void WarehouseListViewManager__SetSortButtonImage(WarehouseListViewManager_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *sortKindLabel; // x20
  __int64 v4; // x1
  ListViewSort_o *sort; // x0
  UILabel_o *v6; // x20
  UnityEngine_Object_o *sortOrderSprite; // x20
  struct ListViewSort_o *v8; // x8
  int32_t sortKind; // w9
  System_String_o **v10; // x8
  struct ListViewSort_o *v11; // x8
  System_String_o **v12; // x9
  System_String_o **v13; // x10
  System_String_o **v14; // x8
  System_String_o **v15; // x8
  UnityEngine_Object_o *bonusFilterKindLabel; // x20
  UILabel_o *v17; // x20

  if ( (byte_4C54B35 & 1) == 0 )
  {
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    sub_1C3E564(&StringLiteral_17540/*"btn_sort_up"*/);
    sub_1C3E564(&StringLiteral_17638/*"btn_txt_up"*/);
    sub_1C3E564(&StringLiteral_17589/*"btn_txt_new"*/);
    sub_1C3E564(&StringLiteral_17579/*"btn_txt_down"*/);
    sub_1C3E564(&StringLiteral_17596/*"btn_txt_old"*/);
    sub_1C3E564(&StringLiteral_17537/*"btn_sort_down"*/);
    byte_4C54B35 = 1;
  }
  sortKindLabel = (UnityEngine_Object_o *)this->fields.sortKindLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(sortKindLabel, 0, 0) )
  {
    sort = this->fields.sort;
    if ( !sort )
      goto LABEL_41;
    v6 = this->fields.sortKindLabel;
    sort = (ListViewSort_o *)ListViewSort__GetSortKindButtonText(sort, 0, 0);
    if ( !v6 )
      goto LABEL_41;
    UILabel__set_text(v6, (System_String_o *)sort, 0);
  }
  sortOrderSprite = (UnityEngine_Object_o *)this->fields.sortOrderSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  sort = (ListViewSort_o *)UnityEngine_Object__op_Inequality(sortOrderSprite, 0, 0);
  if ( ((unsigned __int8)sort & 1) != 0 )
  {
    v8 = this->fields.sort;
    if ( !v8 )
      goto LABEL_41;
    sortKind = v8->fields.sortKind;
    if ( sortKind == 11 || sortKind == 1 )
    {
      sort = (ListViewSort_o *)this->fields.sortExplanationSprite;
      if ( !sort )
        goto LABEL_41;
      v10 = (System_String_o **)(v8->fields.isAscendingOrder ? &StringLiteral_17596/*"btn_txt_old"*/ : &StringLiteral_17589/*"btn_txt_new"*/);
      UISprite__set_spriteName((UISprite_o *)sort, *v10, 0);
      v11 = this->fields.sort;
      if ( !v11 )
        goto LABEL_41;
      sort = (ListViewSort_o *)this->fields.sortOrderSprite;
      if ( !sort )
        goto LABEL_41;
      v12 = (System_String_o **)&StringLiteral_17537/*"btn_sort_down"*/;
      v13 = (System_String_o **)&StringLiteral_17540/*"btn_sort_up"*/;
    }
    else
    {
      sort = (ListViewSort_o *)this->fields.sortExplanationSprite;
      if ( !sort )
        goto LABEL_41;
      v14 = (System_String_o **)(v8->fields.isAscendingOrder ? &StringLiteral_17638/*"btn_txt_up"*/ : &StringLiteral_17579/*"btn_txt_down"*/);
      UISprite__set_spriteName((UISprite_o *)sort, *v14, 0);
      v11 = this->fields.sort;
      if ( !v11 )
        goto LABEL_41;
      sort = (ListViewSort_o *)this->fields.sortOrderSprite;
      if ( !sort )
        goto LABEL_41;
      v12 = (System_String_o **)&StringLiteral_17540/*"btn_sort_up"*/;
      v13 = (System_String_o **)&StringLiteral_17537/*"btn_sort_down"*/;
    }
    if ( v11->fields.isAscendingOrder )
      v15 = v12;
    else
      v15 = v13;
    UISprite__set_spriteName((UISprite_o *)sort, *v15, 0);
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
      v17 = this->fields.bonusFilterKindLabel;
      sort = (ListViewSort_o *)ListViewSort__GetBonusFilterButtonText(
                                 sort,
                                 this->fields.alignedBonusFilterInfos,
                                 this->fields.isQuestStart,
                                 0);
      if ( v17 )
      {
        UILabel__set_text(v17, (System_String_o *)sort, 0);
        return;
      }
LABEL_41:
      sub_1C3E7C0(sort, v4);
    }
  }
}


void WarehouseListViewManager__UpdateItemState(
        WarehouseListViewManager_o *this,
        bool isPushMode,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *SelfUserGame; // x0
  __int64 v6; // x1
  System_Collections_Generic_List_object__o *v7; // x8
  void *monitor; // x23
  _BOOL8 v9; // x0
  __int64 v10; // x1
  Il2CppObject *current; // x20
  WarehouseListViewItem_c *v12; // x1
  __int64 naturalAligment; // x9
  _OWORD *v14; // x8
  __int128 v15; // q0
  __int64 v16; // x1
  UserServantEntity_o *v17; // x0
  __int64 v18; // x1
  bool v19; // w8
  Il2CppObject *v20; // x26
  UserServantEntity_o *v21; // x0
  _BOOL8 IsEventJoin; // x0
  __int64 v23; // x1
  UserServantEntity_o *v24; // x0
  UserServantEntity_o *v25; // x0
  UserServantEntity_o *v26; // x0
  Il2CppObject *v27; // [xsp+8h] [xbp-C8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v28; // [xsp+10h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v29; // [xsp+30h] [xbp-A0h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v30; // [xsp+50h] [xbp-80h] BYREF

  if ( (byte_4C54B41 & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__);
    sub_1C3E564(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    sub_1C3E564(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C3E564(&WarehouseListViewItem_TypeInfo);
    byte_4C54B41 = 1;
  }
  memset(&v30, 0, sizeof(v30));
  SelfUserGame = (System_Collections_Generic_List_object__o *)UserGameMaster__getSelfUserGame(0);
  if ( !SelfUserGame
    || (v7 = SelfUserGame, (SelfUserGame = (System_Collections_Generic_List_object__o *)this->fields.itemList) == 0) )
  {
    sub_1C3E7C0(SelfUserGame, v6);
  }
  monitor = v7[3].monitor;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v29,
    SelfUserGame,
    (const MethodInfo_37B5F58 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  v27 = 0;
  *(_OWORD *)&v30.fields._list = *(_OWORD *)&v29.fields.currentCryptoKey;
  v30.fields._current = (Il2CppObject *)v29.fields.fakeValue;
  while ( 1 )
  {
    v9 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v30,
           (const MethodInfo_353FC4C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    if ( !v9 )
      break;
    current = v30.fields._current;
    if ( !v30.fields._current )
      goto LABEL_37;
    v12 = WarehouseListViewItem_TypeInfo;
    naturalAligment = WarehouseListViewItem_TypeInfo->_2.naturalAligment;
    if ( v30.fields._current->klass->_2.naturalAligment < (unsigned int)naturalAligment
      || (WarehouseListViewItem_c *)v30.fields._current->klass->_2.typeHierarchy[naturalAligment - 1] != WarehouseListViewItem_TypeInfo )
    {
      sub_1C3EA80(v30.fields._current);
LABEL_37:
      sub_1C3E7C0(v9, v10);
    }
    v14 = v30.fields._current[7].monitor;
    HIBYTE(v30.fields._current[11].klass) = isPushMode;
    if ( !v14 )
      sub_1C3E7C0(v9, v12);
    v15 = v14[2];
    *(_OWORD *)&v29.fields.currentCryptoKey = v14[1];
    *(_OWORD *)&v29.fields.fakeValue = v15;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    v28 = v29;
    LOBYTE(current[11].monitor) = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49007660(&v28, 0) == (_QWORD)monitor;
    if ( isPushMode )
    {
      v17 = (UserServantEntity_o *)current[7].monitor;
      if ( !v17 )
        sub_1C3E7C0(0, v16);
      if ( UserServantEntity__IsLeave(v17, 0) )
      {
        v19 = 0;
        v20 = current;
      }
      else
      {
        v21 = (UserServantEntity_o *)current[7].monitor;
        if ( !v21 )
          sub_1C3E7C0(0, v18);
        IsEventJoin = UserServantEntity__IsEventJoin(v21, 0);
        if ( IsEventJoin )
          v20 = v27;
        else
          v20 = current;
        if ( IsEventJoin )
        {
          v19 = 0;
          v20 = current;
        }
        else
        {
          v24 = (UserServantEntity_o *)current[7].monitor;
          if ( !v24 )
            sub_1C3E7C0(0, v23);
          IsEventJoin = UserServantEntity__IsCombineMaterial(v24, 0);
          if ( IsEventJoin )
          {
            v19 = 0;
            v20 = current;
          }
          else
          {
            v25 = (UserServantEntity_o *)current[7].monitor;
            if ( !v25 )
              sub_1C3E7C0(0, v23);
            IsEventJoin = UserServantEntity__IsStatusUp(v25, 0);
            if ( IsEventJoin )
            {
              v19 = 0;
            }
            else
            {
              v26 = (UserServantEntity_o *)current[7].monitor;
              if ( !v26 )
                sub_1C3E7C0(0, v23);
              IsEventJoin = UserServantEntity__IsMaterialTd(v26, 0);
              v19 = !IsEventJoin;
            }
          }
          v27 = current;
        }
        if ( !v20 )
          sub_1C3E7C0(IsEventJoin, v23);
      }
      BYTE1(v20[11].monitor) = v19;
    }
    else
    {
      BYTE1(current[11].monitor) = 1;
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v30,
    (const MethodInfo_353FC48 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
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

  if ( (byte_4C54B13 & 1) == 0 )
  {
    sub_1C3E564(&WarehouseListViewManager_CallbackFunc_TypeInfo);
    byte_4C54B13 = 1;
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
    v8 = sub_1C787BC(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1C3EA80(v7);
  WarehouseListViewManager__remove_callbackFunc(v10, v11, v12);
}


System_Collections_Generic_List_WarehouseListViewObject__o *WarehouseListViewManager__get_ClippingObjectList(
        WarehouseListViewManager_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x19
  __int64 v4; // x1
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  Il2CppObject *current; // x21
  _BOOL8 v7; // x0
  __int64 v8; // x1
  Il2CppObject *Component_object; // x0
  __int64 v10; // x1
  Il2CppObject *v11; // x21
  ListViewItem_o *Item; // x0
  __int64 v13; // x1
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  _BOOL8 v16; // x0
  __int64 v17; // x1
  struct System_Object_array *items; // x8
  _QWORD *v19; // x9
  __int64 size; // x10
  Il2CppClass **v21; // x0
  System_Collections_Generic_List_Enumerator_object__o v23; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v24; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_4C54B18 & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_1C3E564(&Method_UnityEngine_GameObject_GetComponent_WarehouseListViewObject___);
    sub_1C3E564(&Method_System_Collections_Generic_List_WarehouseListViewObject__Add__);
    sub_1C3E564(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_1C3E564(&Method_System_Collections_Generic_List_WarehouseListViewObject___ctor__);
    sub_1C3E564(&System_Collections_Generic_List_WarehouseListViewObject__TypeInfo);
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    byte_4C54B18 = 1;
  }
  memset(&v24, 0, sizeof(v24));
  v3 = (System_Collections_Generic_List_object__o *)sub_1C3E7B0(System_Collections_Generic_List_WarehouseListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_37B4C2C *)Method_System_Collections_Generic_List_WarehouseListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_1C3E7C0(0, v4);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v23,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_37B5F58 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v24 = v23;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v24,
            (const MethodInfo_353FC4C *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v24.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v7 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0, 0);
    if ( v7 )
    {
      if ( !current )
        sub_1C3E7C0(v7, v8);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_31510CC *)Method_UnityEngine_GameObject_GetComponent_WarehouseListViewObject___);
      v11 = Component_object;
      if ( !Component_object )
        sub_1C3E7C0(0, v10);
      Item = (ListViewItem_o *)WarehouseListViewObject__GetItem((WarehouseListViewObject_o *)Component_object, 0);
      if ( !Item )
        sub_1C3E7C0(0, v13);
      if ( Item->fields.isTermination )
      {
        v16 = ListViewManager__ClippingItem_43876032((ListViewManager_o *)this, Item, 0);
        if ( v16 )
        {
          if ( !v3 )
            sub_1C3E7C0(v16, v17);
          items = v3->fields._items;
          v19 = Method_System_Collections_Generic_List_WarehouseListViewObject__Add__;
          ++v3->fields._version;
          if ( !items )
            sub_1C3E7C0(v16, v17);
          size = v3->fields._size;
          if ( (unsigned int)size < LODWORD(items->max_length) )
            goto LABEL_17;
LABEL_21:
          System_Collections_Generic_List_object___AddWithResize(
            v3,
            v11,
            *(const MethodInfo_37B5460 **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
        }
      }
      else
      {
        if ( !v3 )
          sub_1C3E7C0(Item, v13);
        items = v3->fields._items;
        v19 = Method_System_Collections_Generic_List_WarehouseListViewObject__Add__;
        ++v3->fields._version;
        if ( !items )
          sub_1C3E7C0(Item, v13);
        size = v3->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
          goto LABEL_21;
LABEL_17:
        v21 = &items->obj.klass + size;
        v3->fields._size = size + 1;
        v21[4] = (Il2CppClass *)v11;
        sub_1C3E508((CGThumbnailListItem_o *)(v21 + 4), (int32_t)v11, v14, v15);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v24,
    (const MethodInfo_353FC48 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_WarehouseListViewObject__o *)v3;
}


System_Collections_Generic_List_WarehouseListViewObject__o *WarehouseListViewManager__get_ObjectList(
        WarehouseListViewManager_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x19
  __int64 v4; // x1
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  Il2CppObject *current; // x20
  _BOOL8 v7; // x0
  __int64 v8; // x1
  Il2CppObject *Component_object; // x0
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  Il2CppObject *v12; // x1
  struct System_Object_array *items; // x8
  _QWORD *v14; // x9
  __int64 size; // x10
  Il2CppClass **v16; // x0
  System_Collections_Generic_List_Enumerator_object__o v18; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v19; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4C54B17 & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_1C3E564(&Method_UnityEngine_GameObject_GetComponent_WarehouseListViewObject___);
    sub_1C3E564(&Method_System_Collections_Generic_List_WarehouseListViewObject__Add__);
    sub_1C3E564(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_1C3E564(&Method_System_Collections_Generic_List_WarehouseListViewObject___ctor__);
    sub_1C3E564(&System_Collections_Generic_List_WarehouseListViewObject__TypeInfo);
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    byte_4C54B17 = 1;
  }
  memset(&v19, 0, sizeof(v19));
  v3 = (System_Collections_Generic_List_object__o *)sub_1C3E7B0(System_Collections_Generic_List_WarehouseListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_37B4C2C *)Method_System_Collections_Generic_List_WarehouseListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_1C3E7C0(0, v4);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v18,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_37B5F58 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v19 = v18;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v19,
            (const MethodInfo_353FC4C *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v19.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v7 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0, 0);
    if ( v7 )
    {
      if ( !current )
        sub_1C3E7C0(v7, v8);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_31510CC *)Method_UnityEngine_GameObject_GetComponent_WarehouseListViewObject___);
      v12 = Component_object;
      if ( !v3 )
        sub_1C3E7C0(Component_object, Component_object);
      items = v3->fields._items;
      v14 = Method_System_Collections_Generic_List_WarehouseListViewObject__Add__;
      ++v3->fields._version;
      if ( !items )
        sub_1C3E7C0(Component_object, Component_object);
      size = v3->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v3,
          Component_object,
          *(const MethodInfo_37B5460 **)(*(_QWORD *)(v14[4] + 192LL) + 112LL));
      }
      else
      {
        v16 = &items->obj.klass + size;
        v3->fields._size = size + 1;
        v16[4] = (Il2CppClass *)v12;
        sub_1C3E508((CGThumbnailListItem_o *)(v16 + 4), (int32_t)v12, v10, v11);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v19,
    (const MethodInfo_353FC48 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
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

  if ( (byte_4C54B14 & 1) == 0 )
  {
    sub_1C3E564(&WarehouseListViewManager_CallbackFunc_TypeInfo);
    byte_4C54B14 = 1;
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
    v8 = sub_1C787BC(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1C3EA80(v7);
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
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.m_target, (int32_t)object, method, a4);
  v8 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1C3E624(method) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1C3E7DC(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C3E68C(v10, 0);
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
  this->fields.invoke_impl = (intptr_t)sub_1A812C4;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1A8126C;
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
  if ( (byte_4C54B44 & 1) == 0 )
  {
    sub_1C3E564(&WarehouseListViewManager_ResultKind_TypeInfo);
    byte_4C54B44 = 1;
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
  return (System_IAsyncResult_o *)sub_1C3E518(this, v13, callback, object);
}


void WarehouseListViewManager_CallbackFunc__EndInvoke(
        WarehouseListViewManager_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C3E51C(result, 0, method);
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