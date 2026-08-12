void WarehouseListViewManager___cctor(const MethodInfo *method)
{
  System_String_o *v1; // x2
  System_String_o *v2; // x3
  int32_t v3; // w4
  int32_t v4; // w5
  bool v5; // w6
  bool v6; // w7
  int32_t v7; // w1
  System_String_o *SORT_SAVE_KEY; // x19
  System_String_o *v9; // x0
  System_String_o *v10; // x19
  ListViewSort_o *v11; // x20
  struct WarehouseListViewManager_StaticFields *static_fields; // x0
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7
  System_String_o *v19; // x19
  System_String_o *v20; // x0
  System_String_o *v21; // x19
  ListViewSort_o *v22; // x20
  struct WarehouseListViewManager_StaticFields *v23; // x0
  System_String_o *v24; // x2
  System_String_o *v25; // x3
  int32_t v26; // w4
  int32_t v27; // w5
  bool v28; // w6
  bool v29; // w7
  System_String_o *v30; // x19
  System_String_o *v31; // x0
  System_String_o *v32; // x19
  ListViewSort_o *v33; // x20
  struct WarehouseListViewManager_StaticFields *v34; // x0
  System_String_o *v35; // x2
  System_String_o *v36; // x3
  int32_t v37; // w4
  int32_t v38; // w5
  bool v39; // w6
  bool v40; // w7
  System_String_o *v41; // x19
  System_String_o *v42; // x0
  System_String_o *v43; // x19
  ListViewSort_o *v44; // x20
  struct WarehouseListViewManager_StaticFields *v45; // x0
  System_String_o *v46; // x2
  System_String_o *v47; // x3
  int32_t v48; // w4
  int32_t v49; // w5
  bool v50; // w6
  bool v51; // w7
  int v52; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_596E509 & 1) == 0 )
  {
    sub_2213A60(&ListViewSort_TypeInfo);
    sub_2213A60(&WarehouseListViewManager_TypeInfo);
    sub_2213A60(&StringLiteral_16208/*"Warehouse"*/);
    byte_596E509 = 1;
  }
  v7 = StringLiteral_16208/*"Warehouse"*/;
  v52 = 0;
  WarehouseListViewManager_TypeInfo->static_fields->SORT_SAVE_KEY = (struct System_String_o *)StringLiteral_16208/*"Warehouse"*/;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)WarehouseListViewManager_TypeInfo->static_fields,
    v7,
    v1,
    v2,
    v3,
    v4,
    v5,
    v6);
  SORT_SAVE_KEY = WarehouseListViewManager_TypeInfo->static_fields->SORT_SAVE_KEY;
  v52 = 1;
  v9 = System_Int32__ToString((int32_t)&v52, 0);
  v10 = System_String__Concat_75651716(SORT_SAVE_KEY, v9, 0);
  v11 = (ListViewSort_o *)sub_2213CCC(ListViewSort_TypeInfo);
  ListViewSort___ctor_50854784(v11, v10, 3, 0, 0);
  static_fields = WarehouseListViewManager_TypeInfo->static_fields;
  static_fields->servantSortInfo = v11;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&static_fields->servantSortInfo,
    (int32_t)v11,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
  v19 = WarehouseListViewManager_TypeInfo->static_fields->SORT_SAVE_KEY;
  v52 = 2;
  v20 = System_Int32__ToString((int32_t)&v52, 0);
  v21 = System_String__Concat_75651716(v19, v20, 0);
  v22 = (ListViewSort_o *)sub_2213CCC(ListViewSort_TypeInfo);
  ListViewSort___ctor_50854784(v22, v21, 3, 0, 0);
  v23 = WarehouseListViewManager_TypeInfo->static_fields;
  v23->servantEquipSortInfo = v22;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&v23->servantEquipSortInfo,
    (int32_t)v22,
    v24,
    v25,
    v26,
    v27,
    v28,
    v29);
  v52 = 3;
  v30 = WarehouseListViewManager_TypeInfo->static_fields->SORT_SAVE_KEY;
  v31 = System_Int32__ToString((int32_t)&v52, 0);
  v32 = System_String__Concat_75651716(v30, v31, 0);
  v33 = (ListViewSort_o *)sub_2213CCC(ListViewSort_TypeInfo);
  ListViewSort___ctor_50854784(v33, v32, 3, 0, 0);
  v34 = WarehouseListViewManager_TypeInfo->static_fields;
  v34->servantWarehouseSortInfo = v33;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&v34->servantWarehouseSortInfo,
    (int32_t)v33,
    v35,
    v36,
    v37,
    v38,
    v39,
    v40);
  v41 = WarehouseListViewManager_TypeInfo->static_fields->SORT_SAVE_KEY;
  v52 = 4;
  v42 = System_Int32__ToString((int32_t)&v52, 0);
  v43 = System_String__Concat_75651716(v41, v42, 0);
  v44 = (ListViewSort_o *)sub_2213CCC(ListViewSort_TypeInfo);
  ListViewSort___ctor_50854784(v44, v43, 3, 0, 0);
  v45 = WarehouseListViewManager_TypeInfo->static_fields;
  v45->servantEquipWarehouseSortInfo = v44;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&v45->servantEquipWarehouseSortInfo,
    (int32_t)v44,
    v46,
    v47,
    v48,
    v49,
    v50,
    v51);
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
  this->fields.dragSelectFriendShipSum = 0;
  this->fields.isDragSelect = 1;
  *(_OWORD *)&this->fields.dragSelectSum = xmmword_E9BCF0;
}


// local variable allocation has failed, the output may be wrong!
void WarehouseListViewManager__CancelDragSelect(
        WarehouseListViewManager_o *this,
        int32_t index,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *itemSortList; // x0
  __int64 v6; // x2
  __int64 v7; // x3
  __int64 naturalAligment; // x9
  WarehouseListViewManager_o *v9; // x0
  const MethodInfo *v10; // x1

  if ( (byte_596E505 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_2213A60(&WarehouseListViewItem_TypeInfo);
    byte_596E505 = 1;
  }
  itemSortList = (System_Collections_Generic_List_object__o *)this->fields.itemSortList;
  if ( !itemSortList
    || (itemSortList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                      itemSortList,
                                                                      index,
                                                                      (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__)) == 0 )
  {
    sub_2213CDC(itemSortList, *(_QWORD *)&index);
  }
  naturalAligment = WarehouseListViewItem_TypeInfo->_2.naturalAligment;
  if ( itemSortList->klass->_2.naturalAligment >= (unsigned int)naturalAligment
    && (WarehouseListViewItem_c *)itemSortList->klass->_2.typeHierarchy[naturalAligment - 1] == WarehouseListViewItem_TypeInfo )
  {
    HIDWORD(itemSortList[6].fields._items) = -1;
  }
  else
  {
    sub_221405C(itemSortList, WarehouseListViewItem_TypeInfo, v6, v7);
    WarehouseListViewManager__GetModeKind(v9, v10);
  }
}


void WarehouseListViewManager__ChangeIconScale(WarehouseListViewManager_o *this, const MethodInfo *method)
{
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  unsigned int scaleType; // w8
  struct ListViewItemSeed_o *smallSizeSeed; // x1
  WarehouseListViewManager_o *v11; // x0
  int v12; // w8
  struct ListViewItemSeed_o **p_seed; // x0
  ListViewSort_o *sort; // x0
  _BOOL8 v15; // x0
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x3
  ListViewItem_o *current; // x20
  __int64 naturalAligment; // x9
  Il2CppClass *klass; // x21
  __int64 v22; // x1
  ListViewObject_o *viewObject; // x0
  const MethodInfo *v24; // x2
  System_Collections_Generic_List_Enumerator_object__o v25; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v26; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_596E4FD & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&WarehouseListViewItem_TypeInfo);
    byte_596E4FD = 1;
  }
  scaleType = this->fields.scaleType;
  memset(&v26, 0, sizeof(v26));
  if ( scaleType < 2 )
  {
    smallSizeSeed = this->fields.smallSizeSeed;
    v11 = this;
    v12 = 2;
  }
  else if ( scaleType == 2 )
  {
    smallSizeSeed = this->fields.extremelySmallSizeSeed;
    v11 = this;
    v12 = 3;
  }
  else
  {
    if ( scaleType != 3 )
      goto LABEL_10;
    smallSizeSeed = this->fields.normalSizeSeed;
    v11 = this;
    v12 = 1;
  }
  v11->fields.seed = smallSizeSeed;
  p_seed = &v11->fields.seed;
  *((_DWORD *)p_seed + 84) = v12;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)p_seed, (int32_t)smallSizeSeed, v2, v3, v4, v5, v6, v7);
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
    (System_Collections_Generic_List_Enumerator_T__o *)&v25,
    (System_Collections_Generic_List_object__o *)sort,
    (const MethodInfo_448473C *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  v26 = v25;
  v25.fields._list = 0;
  *(_QWORD *)&v25.fields._index = &v26;
  while ( 1 )
  {
    v15 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v26,
            (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    if ( !v15 )
      break;
    current = (ListViewItem_o *)v26.fields._current;
    if ( !v26.fields._current )
      goto LABEL_26;
    naturalAligment = WarehouseListViewItem_TypeInfo->_2.naturalAligment;
    if ( v26.fields._current->klass->_2.naturalAligment < (unsigned int)naturalAligment
      || (WarehouseListViewItem_c *)v26.fields._current->klass->_2.typeHierarchy[naturalAligment - 1] != WarehouseListViewItem_TypeInfo )
    {
      sub_221405C(v26.fields._current, WarehouseListViewItem_TypeInfo, v17, v18);
LABEL_26:
      sub_2213CDC(v15, v16);
    }
    klass = v26.fields._current[7].klass;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, WarehouseListViewItem_TypeInfo, v17);
    if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)klass, 0, 0) )
    {
      viewObject = current->fields.viewObject;
      if ( !viewObject )
        sub_2213CDC(0, v22);
      ListViewObject__SetItemSeed(viewObject, current, this->fields.seed, 0);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v26,
    (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
  WarehouseListViewManager__SetMode_45313256(this, 2, v24);
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0);
  sort = (ListViewSort_o *)this->fields.scrollBar;
  if ( !sort
    || (sort = (ListViewSort_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)sort, 0)) == 0 )
  {
LABEL_28:
    sub_2213CDC(sort, method);
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
      sub_2213CDC(this, isPlus);
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
  Il2CppObject *MasterData_object; // x25
  Il2CppObject *v10; // x26
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  System_String_o *v17; // x8
  int64_t v18; // x22
  WarehouseListViewManager_c *v19; // x0
  struct ListViewSort_o *servantEquipSortInfo; // x1
  __int64 *v21; // x8
  WarehouseListViewManager_c *v22; // x0
  struct ListViewSort_o *servantEquipWarehouseSortInfo; // x1
  WarehouseListViewManager_c *v24; // x0
  struct ListViewSort_o *servantSortInfo; // x1
  WarehouseListViewManager_c *v26; // x0
  struct ListViewSort_o *servantWarehouseSortInfo; // x1
  _BOOL4 isQuestStart; // w8
  int v29; // w9
  struct ListViewSort_BonusFilterInfo_array *AlignedBonusFilter; // x0
  System_String_o *v31; // x2
  System_String_o *v32; // x3
  int32_t v33; // w4
  int32_t v34; // w5
  bool v35; // w6
  bool v36; // w7
  struct ListViewSort_o *sort; // x20
  struct ListViewSort_o *v38; // x8
  struct ListViewSort_BonusFilterInfo_array *v39; // x0
  System_String_o *v40; // x2
  System_String_o *v41; // x3
  int32_t v42; // w4
  int32_t v43; // w5
  bool v44; // w6
  bool v45; // w7
  struct ListViewSort_o *v46; // x8
  struct ListViewSort_o *v47; // x8
  System_String_o *v48; // x2
  System_String_o *v49; // x3
  int32_t v50; // w4
  int32_t v51; // w5
  bool v52; // w6
  bool v53; // w7
  struct ListViewSort_o *v54; // x8
  unsigned int iconScaleKind; // w8
  struct ListViewItemSeed_o *normalSizeSeed; // x1
  __int64 v57; // x2
  __int64 v58; // x2
  Il2CppObject *v59; // x24
  System_Int64_array *v60; // x24
  int v61; // w8
  __int64 v62; // x25
  int64_t v63; // x21
  __int64 v64; // x8
  __int128 v65; // q1
  __int64 v66; // x20
  UserServantEntity_o *v67; // x23
  System_Int64_array *v68; // x28
  System_Int64_array *v69; // x29
  int64_t v70; // x27
  WarehouseListViewItem_o *v71; // x26
  System_String_o *v72; // x2
  System_String_o *v73; // x3
  int32_t v74; // w4
  int32_t v75; // w5
  bool v76; // w6
  bool v77; // w7
  __int64 v78; // x8
  _QWORD *v79; // x9
  __int64 v80; // x10
  __int64 v81; // x8
  const MethodInfo *v82; // x3
  System_String_o *v83; // x21
  UILabel_o *emptyMessageLabel; // x20
  const MethodInfo *v85; // x1
  const MethodInfo *v86; // [xsp+0h] [xbp-F0h]
  System_String_o *v87; // [xsp+18h] [xbp-D8h]
  int64_t v88; // [xsp+20h] [xbp-D0h]
  EventUpValSetupInfo_o *setupinfo; // [xsp+28h] [xbp-C8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v90; // [xsp+30h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v91; // [xsp+50h] [xbp-A0h]
  int32_t eventId; // [xsp+7Ch] [xbp-74h] BYREF
  System_Int64_array *equipIdList; // [xsp+80h] [xbp-70h] BYREF
  System_Int64_array *svtIdList; // [xsp+88h] [xbp-68h] BYREF

  if ( (byte_596E4E0 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_EventMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_UserDeckMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_UserEventServantFatigueMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_UserServantStorageMaster___);
    sub_2213A60(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_2213A60(&WarehouseListViewItem_TypeInfo);
    sub_2213A60(&WarehouseListViewManager_TypeInfo);
    sub_2213A60(&StringLiteral_12116/*"SERVANT_EQUIP_EMPTY"*/);
    sub_2213A60(&StringLiteral_12111/*"SERVANT_EMPTY"*/);
    sub_2213A60(&StringLiteral_12144/*"SERVANT_EQUIP_WAREHOUSE_EMPTY"*/);
    sub_2213A60(&StringLiteral_12319/*"SERVANT_SORT_FILTER_RESULT_EMPTY"*/);
    sub_2213A60(&StringLiteral_12524/*"SERVANT_WAREHOUSE_EMPTY"*/);
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_596E4E0 = 1;
  }
  equipIdList = 0;
  svtIdList = 0;
  eventId = 0;
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_87;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_385636C *)Method_DataManager_GetMasterData_UserServantMaster___);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_87;
  v10 = DataManager__GetMasterData_object_(
          (DataManager_o *)Instance,
          (const MethodInfo_385636C *)Method_DataManager_GetMasterData_UserServantStorageMaster___);
  Instance = (int64_t)UserGameMaster__getSelfUserGame(0);
  v17 = (System_String_o *)StringLiteral_1/*""*/;
  v18 = 0;
  this->fields.kind = kind;
  v88 = Instance;
  setupinfo = setupInfo;
  if ( kind > 1 )
  {
    if ( kind == 2 )
    {
      v26 = WarehouseListViewManager_TypeInfo;
      if ( !*(&WarehouseListViewManager_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(WarehouseListViewManager_TypeInfo, v8, v11);
        v26 = WarehouseListViewManager_TypeInfo;
      }
      servantWarehouseSortInfo = v26->static_fields->servantWarehouseSortInfo;
      this->fields.sort = servantWarehouseSortInfo;
      sub_2213A04(
        (MissionNaviTransitionBoardItem_o *)&this->fields.sort,
        (int32_t)servantWarehouseSortInfo,
        v11,
        v12,
        v13,
        v14,
        v15,
        v16);
      Instance = (int64_t)this->fields.sort;
      if ( !Instance )
        goto LABEL_87;
      *(_DWORD *)(Instance + 128) = 0;
      ListViewSort__Load((ListViewSort_o *)Instance, 0);
      if ( !v10 )
        goto LABEL_87;
      Instance = (int64_t)UserServantStorageMaster__getKeepServantList((UserServantStorageMaster_o *)v10, 0);
      v21 = &StringLiteral_12524/*"SERVANT_WAREHOUSE_EMPTY"*/;
    }
    else
    {
      v87 = v17;
      if ( kind != 3 )
        goto LABEL_31;
      v22 = WarehouseListViewManager_TypeInfo;
      if ( !*(&WarehouseListViewManager_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(WarehouseListViewManager_TypeInfo, v8, v11);
        v22 = WarehouseListViewManager_TypeInfo;
      }
      servantEquipWarehouseSortInfo = v22->static_fields->servantEquipWarehouseSortInfo;
      this->fields.sort = servantEquipWarehouseSortInfo;
      sub_2213A04(
        (MissionNaviTransitionBoardItem_o *)&this->fields.sort,
        (int32_t)servantEquipWarehouseSortInfo,
        v11,
        v12,
        v13,
        v14,
        v15,
        v16);
      Instance = (int64_t)this->fields.sort;
      if ( !Instance )
        goto LABEL_87;
      *(_DWORD *)(Instance + 128) = 1;
      ListViewSort__Load((ListViewSort_o *)Instance, 0);
      if ( !v10 )
        goto LABEL_87;
      Instance = (int64_t)UserServantStorageMaster__getServantEquipList((UserServantStorageMaster_o *)v10, 0);
      v21 = &StringLiteral_12144/*"SERVANT_EQUIP_WAREHOUSE_EMPTY"*/;
    }
  }
  else if ( kind )
  {
    v87 = v17;
    if ( kind != 1 )
      goto LABEL_31;
    v19 = WarehouseListViewManager_TypeInfo;
    if ( !*(&WarehouseListViewManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(WarehouseListViewManager_TypeInfo, v8, v11);
      v19 = WarehouseListViewManager_TypeInfo;
    }
    servantEquipSortInfo = v19->static_fields->servantEquipSortInfo;
    this->fields.sort = servantEquipSortInfo;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.sort,
      (int32_t)servantEquipSortInfo,
      v11,
      v12,
      v13,
      v14,
      v15,
      v16);
    Instance = (int64_t)this->fields.sort;
    if ( !Instance )
      goto LABEL_87;
    *(_DWORD *)(Instance + 128) = 1;
    ListViewSort__Load((ListViewSort_o *)Instance, 0);
    if ( !MasterData_object )
      goto LABEL_87;
    Instance = (int64_t)UserServantMaster__getServantEquipList((UserServantMaster_o *)MasterData_object, 0);
    v21 = &StringLiteral_12116/*"SERVANT_EQUIP_EMPTY"*/;
  }
  else
  {
    v24 = WarehouseListViewManager_TypeInfo;
    if ( !*(&WarehouseListViewManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(WarehouseListViewManager_TypeInfo, v8, v11);
      v24 = WarehouseListViewManager_TypeInfo;
    }
    servantSortInfo = v24->static_fields->servantSortInfo;
    this->fields.sort = servantSortInfo;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.sort,
      (int32_t)servantSortInfo,
      v11,
      v12,
      v13,
      v14,
      v15,
      v16);
    Instance = (int64_t)this->fields.sort;
    if ( !Instance )
      goto LABEL_87;
    *(_DWORD *)(Instance + 128) = 0;
    ListViewSort__Load((ListViewSort_o *)Instance, 0);
    if ( !MasterData_object )
      goto LABEL_87;
    Instance = (int64_t)UserServantMaster__getKeepServantList((UserServantMaster_o *)MasterData_object, 0);
    v21 = &StringLiteral_12111/*"SERVANT_EMPTY"*/;
  }
  v18 = Instance;
  v87 = (System_String_o *)*v21;
LABEL_31:
  if ( setupInfo )
  {
    isQuestStart = setupInfo->fields.isQuestStart;
    v29 = this->fields.kind | 2;
    this->fields.isQuestStart = isQuestStart;
    if ( v29 == 2 )
    {
      Instance = (int64_t)this->fields.sort;
      if ( !Instance )
        goto LABEL_87;
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
      sub_2213A04(
        (MissionNaviTransitionBoardItem_o *)&this->fields.alignedBonusFilterInfos,
        (int32_t)AlignedBonusFilter,
        v31,
        v32,
        v33,
        v34,
        v35,
        v36);
      sort = this->fields.sort;
      Instance = BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)this->fields.alignedBonusFilterInfos, 0);
      if ( !sort )
        goto LABEL_87;
      sort->fields.isBonusKind = (Instance & 1) == 0;
    }
    else
    {
      Instance = (int64_t)this->fields.sort;
      if ( !Instance )
        goto LABEL_87;
      v39 = ListViewSort__GetAlignedBonusFilter(
              (ListViewSort_o *)Instance,
              0,
              setupInfo->fields.servantEquipFilterEventCampaignIds,
              setupInfo->fields.servantEquipFilterEventIds,
              0,
              0,
              isQuestStart,
              0);
      this->fields.alignedBonusFilterInfos = v39;
      sub_2213A04(
        (MissionNaviTransitionBoardItem_o *)&this->fields.alignedBonusFilterInfos,
        (int32_t)v39,
        v40,
        v41,
        v42,
        v43,
        v44,
        v45);
      v46 = this->fields.sort;
      if ( !v46 )
        goto LABEL_87;
      v46->fields.isBonusKind = 1;
    }
  }
  else
  {
    v38 = this->fields.sort;
    this->fields.isQuestStart = 1;
    if ( !v38 )
      goto LABEL_87;
    v38->fields.isBonusKind = 0;
    this->fields.alignedBonusFilterInfos = 0;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.alignedBonusFilterInfos,
      0,
      v11,
      v12,
      v13,
      v14,
      v15,
      v16);
  }
  Instance = (int64_t)this->fields.bonusFilterKindButton;
  if ( !Instance )
    goto LABEL_87;
  Instance = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
  v47 = this->fields.sort;
  if ( !v47 )
    goto LABEL_87;
  if ( !Instance )
    goto LABEL_87;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, v47->fields.isBonusKind, 0);
  v54 = this->fields.sort;
  if ( !v54 )
    goto LABEL_87;
  iconScaleKind = v54->fields.iconScaleKind;
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
      goto LABEL_52;
    normalSizeSeed = this->fields.extremelySmallSizeSeed;
  }
  this->fields.seed = normalSizeSeed;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.seed,
    (int32_t)normalSizeSeed,
    v48,
    v49,
    v50,
    v51,
    v52,
    v53);
LABEL_52:
  *(_QWORD *)&this->fields.sellEnableRestCnt = 0;
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0);
  this->fields.dragSelectFriendShipSum = 0;
  this->fields.isDragSelect = 1;
  *(_OWORD *)&this->fields.dragSelectSum = xmmword_E9BCF0;
  if ( !v18 )
  {
LABEL_82:
    v83 = v87;
    goto LABEL_83;
  }
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_87;
  v59 = DataManager__GetMasterData_object_(
          (DataManager_o *)Instance,
          (const MethodInfo_385636C *)Method_DataManager_GetMasterData_UserDeckMaster___);
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v8, v58);
  if ( !byte_5969EF2 )
  {
    sub_2213A60(&NetworkManager_TypeInfo);
    byte_5969EF2 = 1;
  }
  Instance = (int64_t)NetworkManager_TypeInfo;
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v8, v58);
    Instance = (int64_t)NetworkManager_TypeInfo;
  }
  if ( !v59
    || (UserDeckMaster__getPartyList(
          (UserDeckMaster_o *)v59,
          &svtIdList,
          &equipIdList,
          *(_QWORD *)(*(_QWORD *)(Instance + 184) + 64LL),
          0),
        (Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0)
    || (Instance = (int64_t)DataManager__GetMasterData_object_(
                              (DataManager_o *)Instance,
                              (const MethodInfo_385636C *)Method_DataManager_GetMasterData_EventMaster___)) == 0 )
  {
LABEL_87:
    sub_2213CDC(Instance, v8);
  }
  Instance = EventMaster__IsEnableFatigueEvent((EventMaster_o *)Instance, &eventId, 0);
  v60 = 0;
  if ( (Instance & 1) != 0 )
  {
    Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_87;
    Instance = (int64_t)DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_385636C *)Method_DataManager_GetMasterData_UserEventServantFatigueMaster___);
    if ( !Instance )
      goto LABEL_87;
    Instance = (int64_t)UserEventServantFatigueMaster__GetRecoverySvtIdList(
                          (UserEventServantFatigueMaster_o *)Instance,
                          eventId,
                          0);
    v60 = (System_Int64_array *)Instance;
  }
  v61 = *(_DWORD *)(v18 + 24);
  if ( v61 < 1 )
    goto LABEL_82;
  v62 = 0;
  v63 = v18 + 32;
  do
  {
    if ( (unsigned int)v62 >= v61 )
      goto LABEL_88;
    v64 = *(_QWORD *)(v63 + 8 * v62);
    if ( !v64 )
      goto LABEL_87;
    v65 = *(_OWORD *)(v64 + 32);
    *(_OWORD *)&v91.fields.currentCryptoKey = *(_OWORD *)(v64 + 16);
    *(_OWORD *)&v91.fields.fakeValue = v65;
    if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v8, v57);
    v90 = v91;
    Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_56000612(&v90, 0);
    if ( (unsigned int)v62 >= *(_DWORD *)(v18 + 24) )
LABEL_88:
      sub_2213CE4(Instance);
    if ( !v88 )
      goto LABEL_87;
    v66 = *(_QWORD *)(v88 + 120);
    v67 = *(UserServantEntity_o **)(v63 + 8 * v62);
    v68 = equipIdList;
    v69 = svtIdList;
    v70 = Instance;
    v71 = (WarehouseListViewItem_o *)sub_2213CCC(WarehouseListViewItem_TypeInfo);
    WarehouseListViewItem___ctor(v71, v62, v67, setupinfo, v69, v68, v60, v70 == v66, v86);
    Instance = (int64_t)this->fields.itemList;
    if ( !Instance )
      goto LABEL_87;
    v78 = *(_QWORD *)(Instance + 16);
    v79 = Method_System_Collections_Generic_List_ListViewItem__Add__;
    ++*(_DWORD *)(Instance + 28);
    if ( !v78 )
      goto LABEL_87;
    v80 = *(int *)(Instance + 24);
    if ( (unsigned int)v80 >= *(_DWORD *)(v78 + 24) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        (System_Collections_Generic_List_object__o *)Instance,
        (Il2CppObject *)v71,
        *(const MethodInfo_4483C64 **)(*(_QWORD *)(v79[4] + 192LL) + 112LL));
    }
    else
    {
      v81 = v78 + 8 * v80;
      *(_DWORD *)(Instance + 24) = v80 + 1;
      *(_QWORD *)(v81 + 32) = v71;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)(v81 + 32), (int32_t)v71, v72, v73, v74, v75, v76, v77);
    }
    WarehouseListViewManager__ChangeSellEnableRestCnt(this, 1, v71, v82);
    v61 = *(_DWORD *)(v18 + 24);
    ++v62;
  }
  while ( (int)v62 < v61 );
  v83 = (System_String_o *)StringLiteral_12319/*"SERVANT_SORT_FILTER_RESULT_EMPTY"*/;
LABEL_83:
  emptyMessageLabel = this->fields.emptyMessageLabel;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v8, v57);
  Instance = (int64_t)LocalizationManager__Get(v83, 0);
  if ( !emptyMessageLabel )
    goto LABEL_87;
  UILabel__set_text(emptyMessageLabel, (System_String_o *)Instance, 0);
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0);
  WarehouseListViewManager__SetFilterButtonImage(this, v85);
  ListViewManager__CheckScroll((ListViewManager_o *)this, this->fields.scaleType, 0);
}


// local variable allocation has failed, the output may be wrong!
void WarehouseListViewManager__DecideDragSelect(
        WarehouseListViewManager_o *this,
        int32_t index,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *itemSortList; // x0
  __int64 v6; // x2
  __int64 v7; // x3
  ListViewItem_o *v8; // x20
  __int64 naturalAligment; // x9
  _BOOL4 isDragSelect; // w21
  const MethodInfo *v11; // x2
  const MethodInfo *v12; // x3
  const MethodInfo *v13; // x3
  struct WarehouseListManager_o *parentManager; // x8
  int32_t selectSum; // w11
  struct WarehouseListViewManager_o *baseListViewManager; // x9
  struct WarehouseListManager_o *v17; // x8
  WarehouseListViewManager_o *v18; // x0
  const MethodInfo *v19; // x1
  int32_t friendShipSum[2]; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_596E504 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_2213A60(&WarehouseListViewItem_TypeInfo);
    byte_596E504 = 1;
  }
  itemSortList = (System_Collections_Generic_List_object__o *)this->fields.itemSortList;
  *(_QWORD *)friendShipSum = 0;
  if ( !itemSortList )
    goto LABEL_23;
  itemSortList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                itemSortList,
                                                                index,
                                                                (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
  if ( !itemSortList )
    goto LABEL_23;
  v8 = (ListViewItem_o *)itemSortList;
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
              v12);
            parentManager = this->fields.parentManager;
            if ( parentManager )
            {
              if ( friendShipSum[1] >= parentManager->fields.sendMax && !BYTE2(v8[1].fields.sortValue1B) )
                goto LABEL_22;
              selectSum = this->fields.selectSum;
              baseListViewManager = parentManager->fields.baseListViewManager;
              v8->fields.selectNum = parentManager->fields.totalSum;
              this->fields.selectSum = selectSum + 1;
              if ( !baseListViewManager )
                goto LABEL_23;
              goto LABEL_21;
            }
          }
          goto LABEL_23;
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
              v8->fields.selectNum,
              v11);
            ListViewItem__set_IsSelect(v8, 0, 0);
            parentManager = this->fields.parentManager;
            --this->fields.selectSum;
            if ( parentManager )
            {
              baseListViewManager = parentManager->fields.baseListViewManager;
              if ( baseListViewManager )
              {
LABEL_21:
                parentManager->fields.totalSum = baseListViewManager->fields.selectSum;
                WarehouseListViewManager__ChangeSellEnableRestCnt(
                  this,
                  !isDragSelect,
                  (WarehouseListViewItem_o *)v8,
                  v13);
                goto LABEL_22;
              }
            }
          }
        }
LABEL_23:
        sub_2213CDC(itemSortList, *(_QWORD *)&index);
      }
    }
LABEL_22:
    v8[2].fields.index = -1;
    return;
  }
  sub_221405C(itemSortList, WarehouseListViewItem_TypeInfo, v6, v7);
  WarehouseListViewManager__CancelDragEnd(v18, v19);
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
  __int64 v9; // [xsp+8h] [xbp-58h]
  System_Collections_Generic_List_Enumerator_object__o *v10; // [xsp+10h] [xbp-50h]
  System_Collections_Generic_List_Enumerator_object__o v11; // [xsp+18h] [xbp-48h] BYREF

  if ( (byte_596E4F1 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    byte_596E4F1 = 1;
  }
  itemList = this->fields.itemList;
  memset(&v11, 0, sizeof(v11));
  if ( !itemList )
    sub_2213CDC(0, *(_QWORD *)&selectNum);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v11,
    (System_Collections_Generic_List_object__o *)itemList,
    (const MethodInfo_448473C *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  v9 = 0;
  v10 = &v11;
  while ( 1 )
  {
    v6 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v11,
           (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    if ( !v6 )
      break;
    if ( !v11.fields._current )
      sub_2213CDC(v6, v7);
    v8 = *(_DWORD *)((char *)&v11.fields._current->klass + (unsigned __int64)&word_10);
    if ( v8 > selectNum )
      *(_DWORD *)((char *)&v11.fields._current->klass + (unsigned __int64)&word_10) = v8 - 1;
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v11,
    (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
}


void WarehouseListViewManager__DeleteContinueData(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  WarehouseListViewManager_c *v3; // x0
  ListViewSort_o *servantSortInfo; // x0

  if ( (byte_596E4DC & 1) == 0 )
  {
    sub_2213A60(&WarehouseListViewManager_TypeInfo);
    byte_596E4DC = 1;
  }
  v3 = WarehouseListViewManager_TypeInfo;
  if ( !*(&WarehouseListViewManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(WarehouseListViewManager_TypeInfo, v1, v2);
    v3 = WarehouseListViewManager_TypeInfo;
  }
  servantSortInfo = v3->static_fields->servantSortInfo;
  if ( !servantSortInfo
    || (ListViewSort__DeleteContinueData(servantSortInfo, 0),
        (servantSortInfo = WarehouseListViewManager_TypeInfo->static_fields->servantEquipSortInfo) == 0)
    || (ListViewSort__DeleteContinueData(servantSortInfo, 0),
        (servantSortInfo = WarehouseListViewManager_TypeInfo->static_fields->servantWarehouseSortInfo) == 0)
    || (ListViewSort__DeleteContinueData(servantSortInfo, 0),
        (servantSortInfo = WarehouseListViewManager_TypeInfo->static_fields->servantEquipWarehouseSortInfo) == 0) )
  {
    sub_2213CDC(servantSortInfo, v1);
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

  if ( (byte_596E4F8 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_2213A60(&Method_WarehouseListViewManager_EndCloseSelectFilterKind__);
    byte_596E4F8 = 1;
  }
  if ( isDecide )
  {
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0);
    WarehouseListViewManager__SetFilterButtonImage(this, v5);
    ListViewManager__CheckScroll((ListViewManager_o *)this, this->fields.scaleType, 0);
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v7 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(v7, (Il2CppObject *)this, Method_WarehouseListViewManager_EndCloseSelectFilterKind__, 0);
  if ( !Instance )
    sub_2213CDC(v8, v9);
  CommonUI__CloseServantFilterSelectMenu((CommonUI_o *)Instance, v7, 0);
}


void WarehouseListViewManager__EndSelectSortKind(
        WarehouseListViewManager_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v6; // x1

  if ( (byte_596E4F6 & 1) == 0 )
  {
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_596E4F6 = 1;
  }
  if ( isDecide )
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_2213CDC(0, v6);
  CommonUI__CloseServantSortSelectMenu((CommonUI_o *)Instance, 0, 0);
}


// local variable allocation has failed, the output may be wrong!
int64_t WarehouseListViewManager__GetAmountSortValue(
        WarehouseListViewManager_o *this,
        int32_t svtId,
        const MethodInfo *method)
{
  WarehouseListViewManager_o *v4; // x20
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x8
  int size; // w25
  int64_t v7; // x21
  int32_t v8; // w22
  __int64 v9; // x2
  __int64 naturalAligment; // x10
  struct UnityEngine_GameObject_o *dragParentObject; // x8
  void *monitor; // x23
  intptr_t m_CachedPtr; // x24
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v15; // 0:x0.16

  v4 = this;
  if ( (byte_596E4FB & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    this = (WarehouseListViewManager_o *)sub_2213A60(&WarehouseListViewItem_TypeInfo);
    byte_596E4FB = 1;
  }
  itemList = v4->fields.itemList;
  if ( !itemList )
    goto LABEL_19;
  size = itemList->fields._size;
  if ( size >= 1 )
  {
    v7 = 0;
    v8 = 0;
    while ( 1 )
    {
      this = (WarehouseListViewManager_o *)v4->fields.itemList;
      if ( !this )
        break;
      this = (WarehouseListViewManager_o *)System_Collections_Generic_List_object___get_Item(
                                             (System_Collections_Generic_List_object__o *)this,
                                             v8,
                                             (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
      if ( !this )
        break;
      naturalAligment = WarehouseListViewItem_TypeInfo->_2.naturalAligment;
      if ( this->klass->_2.naturalAligment < (unsigned int)naturalAligment )
        break;
      if ( (WarehouseListViewItem_c *)this->klass->_2.typeHierarchy[naturalAligment - 1] != WarehouseListViewItem_TypeInfo )
        break;
      dragParentObject = this->fields.dragParentObject;
      if ( !dragParentObject )
        break;
      monitor = dragParentObject[3].monitor;
      m_CachedPtr = dragParentObject[3].fields.m_CachedPtr;
      if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, *(_QWORD *)&svtId, v9);
      *(_QWORD *)&v15.fields.currentCryptoKey = monitor;
      *(_QWORD *)&v15.fields.fakeValue = m_CachedPtr;
      ++v8;
      if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v15, 0) == svtId )
        ++v7;
      if ( size == v8 )
        return v7;
    }
LABEL_19:
    sub_2213CDC(this, *(_QWORD *)&svtId);
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

  if ( (byte_596E507 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_2213A60(&WarehouseListViewItem_TypeInfo);
    byte_596E507 = 1;
  }
  result = (WarehouseListViewItem_o *)this->fields.itemList;
  if ( result )
  {
    result = (WarehouseListViewItem_o *)System_Collections_Generic_List_object___get_Item(
                                          (System_Collections_Generic_List_object__o *)result,
                                          index,
                                          (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
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
    sub_2213CDC(this, method);
  return warehouseListMenu->fields.modeKind;
}


System_String_o *WarehouseListViewManager__GetScaleButtonSpriteName(
        WarehouseListViewManager_o *this,
        const MethodInfo *method)
{
  ListViewSort_o *sort; // x0

  sort = this->fields.sort;
  if ( !sort )
    sub_2213CDC(0, method);
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
  __int64 v10; // x2
  __int64 v11; // x3
  Il2CppObject *current; // x21
  __int64 naturalAligment; // x9
  int32_t *v14; // x8
  System_Collections_Generic_List_Enumerator_object__o v15; // [xsp+18h] [xbp-58h] BYREF

  if ( (byte_596E506 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    sub_2213A60(&WarehouseListViewItem_TypeInfo);
    byte_596E506 = 1;
  }
  itemList = this->fields.itemList;
  memset(&v15, 0, sizeof(v15));
  *normalSum = 0;
  *friendShipSum = 0;
  if ( !itemList )
    sub_2213CDC(0, normalSum);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v15,
    (System_Collections_Generic_List_object__o *)itemList,
    (const MethodInfo_448473C *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  while ( 1 )
  {
    v8 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v15,
           (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    if ( !v8 )
      break;
    current = v15.fields._current;
    if ( !v15.fields._current )
      goto LABEL_16;
    naturalAligment = WarehouseListViewItem_TypeInfo->_2.naturalAligment;
    if ( v15.fields._current->klass->_2.naturalAligment < (unsigned int)naturalAligment
      || (WarehouseListViewItem_c *)v15.fields._current->klass->_2.typeHierarchy[naturalAligment - 1] != WarehouseListViewItem_TypeInfo )
    {
      sub_221405C(v15.fields._current, WarehouseListViewItem_TypeInfo, v10, v11);
LABEL_16:
      sub_2213CDC(v8, v9);
    }
    if ( ListViewItem__get_IsSelect((ListViewItem_o *)v15.fields._current, 0) )
    {
      if ( *((_BYTE *)&qword_B8 + (_QWORD)current + 2) )
        v14 = friendShipSum;
      else
        v14 = normalSum;
      ++*v14;
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v15,
    (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
}


void WarehouseListViewManager__GetSelectList(
        WarehouseListViewManager_o *this,
        System_Collections_Generic_List_long__o *list,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x0
  _BOOL8 v6; // x0
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x3
  Il2CppObject *current; // x20
  __int64 naturalAligment; // x9
  const MethodInfo *v12; // x1
  int64_t UserSvtId; // x0
  struct System_Int64_array *items; // x8
  _QWORD *v15; // x9
  __int64 size; // x10
  System_Collections_Generic_List_Enumerator_object__o v17; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v18; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_596E4EC & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_List_long__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    sub_2213A60(&WarehouseListViewItem_TypeInfo);
    byte_596E4EC = 1;
  }
  itemList = this->fields.itemList;
  memset(&v18, 0, sizeof(v18));
  if ( !itemList )
    sub_2213CDC(0, list);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v17,
    (System_Collections_Generic_List_object__o *)itemList,
    (const MethodInfo_448473C *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  v18 = v17;
  v17.fields._list = 0;
  *(_QWORD *)&v17.fields._index = &v18;
  while ( 1 )
  {
    v6 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v18,
           (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    if ( !v6 )
      break;
    current = v18.fields._current;
    if ( !v18.fields._current )
      goto LABEL_17;
    naturalAligment = WarehouseListViewItem_TypeInfo->_2.naturalAligment;
    if ( v18.fields._current->klass->_2.naturalAligment < (unsigned int)naturalAligment
      || (WarehouseListViewItem_c *)v18.fields._current->klass->_2.typeHierarchy[naturalAligment - 1] != WarehouseListViewItem_TypeInfo )
    {
      sub_221405C(v18.fields._current, WarehouseListViewItem_TypeInfo, v8, v9);
LABEL_17:
      sub_2213CDC(v6, v7);
    }
    if ( ListViewItem__get_IsSelect((ListViewItem_o *)v18.fields._current, 0) )
    {
      UserSvtId = WarehouseListViewItem__get_UserSvtId((WarehouseListViewItem_o *)current, v12);
      if ( !list
        || (items = list->fields._items,
            v15 = Method_System_Collections_Generic_List_long__Add__,
            ++list->fields._version,
            !items) )
      {
        sub_2213CDC(UserSvtId, UserSvtId);
      }
      size = list->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_long___AddWithResize(
          list,
          UserSvtId,
          *(const MethodInfo_446C29C **)(*(_QWORD *)(v15[4] + 192LL) + 112LL));
      }
      else
      {
        list->fields._size = size + 1;
        items->m_Items[size] = UserSvtId;
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v18,
    (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
}


System_Collections_Generic_Dictionary_long__int__o *WarehouseListViewManager__GetSelectServantIdDic(
        WarehouseListViewManager_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_long__int__o *v3; // x20
  System_Collections_Generic_List_object__o *Item; // x0
  const MethodInfo *v5; // x1
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x8
  int size; // w23
  int32_t v8; // w21
  __int64 v9; // x2
  __int64 v10; // x3
  WarehouseListViewItem_o *v11; // x22
  __int64 naturalAligment; // x9
  System_Collections_Generic_Dictionary_long__int__o *result; // x0
  WarehouseListViewManager_o *v14; // x0
  System_Collections_Generic_Dictionary_long__int__o *v15; // x1
  const MethodInfo *v16; // x2

  if ( (byte_596E4FE & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_long__int__Add__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_long__int___ctor__);
    sub_2213A60(&System_Collections_Generic_Dictionary_long__int__TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_2213A60(&WarehouseListViewItem_TypeInfo);
    byte_596E4FE = 1;
  }
  v3 = (System_Collections_Generic_Dictionary_long__int__o *)sub_2213CCC(System_Collections_Generic_Dictionary_long__int__TypeInfo);
  System_Collections_Generic_Dictionary_long__int____ctor(
    v3,
    (const MethodInfo_3FC8A70 *)Method_System_Collections_Generic_Dictionary_long__int___ctor__);
  itemList = this->fields.itemList;
  if ( !itemList )
LABEL_15:
    sub_2213CDC(Item, v5);
  size = itemList->fields._size;
  if ( size < 1 )
    return v3;
  v8 = 0;
  while ( 1 )
  {
    Item = (System_Collections_Generic_List_object__o *)this->fields.itemList;
    if ( !Item )
      goto LABEL_15;
    Item = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                          Item,
                                                          v8,
                                                          (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    if ( !Item )
      goto LABEL_15;
    v11 = (WarehouseListViewItem_o *)Item;
    naturalAligment = WarehouseListViewItem_TypeInfo->_2.naturalAligment;
    if ( Item->klass->_2.naturalAligment < (unsigned int)naturalAligment
      || (WarehouseListViewItem_c *)Item->klass->_2.typeHierarchy[naturalAligment - 1] != WarehouseListViewItem_TypeInfo )
    {
      break;
    }
    if ( ListViewItem__get_IsSelect((ListViewItem_o *)Item, 0) )
    {
      Item = (System_Collections_Generic_List_object__o *)WarehouseListViewItem__get_UserSvtId(v11, v5);
      if ( !v3 )
        goto LABEL_15;
      System_Collections_Generic_Dictionary_long__int___Add(
        v3,
        (int64_t)Item,
        v11->fields.selectNum,
        (const MethodInfo_3FC9424 *)Method_System_Collections_Generic_Dictionary_long__int__Add__);
    }
    if ( size == ++v8 )
      return v3;
  }
  sub_221405C(Item, WarehouseListViewItem_TypeInfo, v9, v10);
  WarehouseListViewManager__ModifyScaleChangeList(v14, v15, v16);
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
  System_Collections_Generic_List_long__o *v7; // x22
  System_Collections_Generic_List_long__o *v8; // x23
  int64_t Item; // x0
  int64_t v10; // x1
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x8
  int size; // w25
  int32_t v19; // w24
  __int64 naturalAligment; // x10
  __int64 v21; // x8
  __int128 v22; // q0
  __int128 v23; // q1
  int v24; // w8
  struct System_Int64_array *items; // x8
  _QWORD *v26; // x9
  __int64 v27; // x10
  Il2CppClass **v28; // x8
  __int128 v29; // q0
  __int128 v30; // q1
  int v31; // w8
  struct System_Int64_array *v32; // x8
  _QWORD *v33; // x9
  __int64 v34; // x10
  __int64 v35; // x8
  System_Collections_Generic_List_long__o *v36; // x0
  int v37; // w21
  System_Int64_array *v38; // x0
  System_String_o *v39; // x2
  System_String_o *v40; // x3
  int32_t v41; // w4
  int32_t v42; // w5
  bool v43; // w6
  bool v44; // w7
  System_Int64_array *v45; // x1
  System_String_o *v46; // x2
  System_String_o *v47; // x3
  int32_t v48; // w4
  int32_t v49; // w5
  bool v50; // w6
  bool v51; // w7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v53; // [xsp+0h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v54; // [xsp+20h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v55; // [xsp+40h] [xbp-80h]

  if ( (byte_596E4E6 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_long__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_long__ToArray__);
    sub_2213A60(&Method_System_Collections_Generic_List_long___ctor__);
    sub_2213A60(&Method_System_Collections_Generic_List_long__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_2213A60(&System_Collections_Generic_List_long__TypeInfo);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_2213A60(&WarehouseListViewItem_TypeInfo);
    byte_596E4E6 = 1;
  }
  v7 = (System_Collections_Generic_List_long__o *)sub_2213CCC(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v7,
    (const MethodInfo_446BA10 *)Method_System_Collections_Generic_List_long___ctor__);
  v8 = (System_Collections_Generic_List_long__o *)sub_2213CCC(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v8,
    (const MethodInfo_446BA10 *)Method_System_Collections_Generic_List_long___ctor__);
  itemList = this->fields.itemList;
  if ( !itemList )
    goto LABEL_36;
  size = itemList->fields._size;
  if ( size >= 1 )
  {
    v19 = 0;
    do
    {
      Item = (int64_t)this->fields.itemList;
      if ( !Item )
        goto LABEL_36;
      Item = (int64_t)System_Collections_Generic_List_object___get_Item(
                        (System_Collections_Generic_List_object__o *)Item,
                        v19,
                        (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
      if ( !Item )
        goto LABEL_36;
      naturalAligment = WarehouseListViewItem_TypeInfo->_2.naturalAligment;
      if ( *(unsigned __int8 *)(*(_QWORD *)Item + 304LL) < (unsigned int)naturalAligment
        || *(WarehouseListViewItem_c **)(*(_QWORD *)(*(_QWORD *)Item + 200LL) + 8 * naturalAligment - 8) != WarehouseListViewItem_TypeInfo )
      {
        goto LABEL_36;
      }
      v21 = *(_QWORD *)(Item + 120);
      if ( v21 && *(_BYTE *)(Item + 257) )
      {
        if ( *(_BYTE *)(Item + 181) )
        {
          v22 = *(_OWORD *)(v21 + 16);
          v23 = *(_OWORD *)(v21 + 32);
          v24 = *(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1);
          *(_OWORD *)&v55.fields.currentCryptoKey = v22;
          *(_OWORD *)&v55.fields.fakeValue = v23;
          if ( !v24 )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v10, v11);
          v54 = v55;
          Item = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_56000612(&v54, 0);
          if ( !v8 )
            goto LABEL_36;
          items = v8->fields._items;
          v26 = Method_System_Collections_Generic_List_long__Add__;
          ++v8->fields._version;
          if ( !items )
            goto LABEL_36;
          v27 = v8->fields._size;
          v10 = Item;
          if ( (unsigned int)v27 >= LODWORD(items->max_length) )
          {
            v35 = v26[4];
            v36 = v8;
LABEL_28:
            System_Collections_Generic_List_long___AddWithResize(
              v36,
              v10,
              *(const MethodInfo_446C29C **)(*(_QWORD *)(v35 + 192) + 112LL));
            continue;
          }
          v28 = &items->obj.klass + v27;
          v8->fields._size = v27 + 1;
        }
        else
        {
          v29 = *(_OWORD *)(v21 + 16);
          v30 = *(_OWORD *)(v21 + 32);
          v31 = *(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1);
          *(_OWORD *)&v55.fields.currentCryptoKey = v29;
          *(_OWORD *)&v55.fields.fakeValue = v30;
          if ( !v31 )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v10, v11);
          v53 = v55;
          Item = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_56000612(&v53, 0);
          if ( !v7 )
            goto LABEL_36;
          v32 = v7->fields._items;
          v33 = Method_System_Collections_Generic_List_long__Add__;
          ++v7->fields._version;
          if ( !v32 )
            goto LABEL_36;
          v34 = v7->fields._size;
          v10 = Item;
          if ( (unsigned int)v34 >= LODWORD(v32->max_length) )
          {
            v35 = v33[4];
            v36 = v7;
            goto LABEL_28;
          }
          v28 = &v32->obj.klass + v34;
          v7->fields._size = v34 + 1;
        }
        v28[4] = (Il2CppClass *)v10;
      }
    }
    while ( size != ++v19 );
  }
  if ( !v7 || !v8 )
LABEL_36:
    sub_2213CDC(Item, v10);
  v37 = v8->fields._size + v7->fields._size;
  if ( v37 < 1 )
  {
    *choiceList = 0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)choiceList, 0, v11, v12, v13, v14, v15, v16);
    v45 = 0;
  }
  else
  {
    v38 = System_Collections_Generic_List_long___ToArray(
            v7,
            (const MethodInfo_446DD1C *)Method_System_Collections_Generic_List_long__ToArray__);
    *choiceList = v38;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)choiceList, (int32_t)v38, v39, v40, v41, v42, v43, v44);
    v45 = System_Collections_Generic_List_long___ToArray(
            v8,
            (const MethodInfo_446DD1C *)Method_System_Collections_Generic_List_long__ToArray__);
  }
  *unchoiceList = v45;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)unchoiceList, (int32_t)v45, v46, v47, v48, v49, v50, v51);
  return v37 > 0;
}


bool WarehouseListViewManager__GetSwapLockList(
        WarehouseListViewManager_o *this,
        System_Int64_array **lockList,
        System_Int64_array **unlockList,
        const MethodInfo *method)
{
  System_Collections_Generic_List_long__o *v7; // x22
  System_Collections_Generic_List_long__o *v8; // x23
  int64_t Item; // x0
  int64_t v10; // x1
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x8
  int size; // w25
  int32_t v19; // w24
  __int64 naturalAligment; // x10
  __int64 v21; // x8
  __int128 v22; // q0
  __int128 v23; // q1
  int v24; // w8
  struct System_Int64_array *items; // x8
  _QWORD *v26; // x9
  __int64 v27; // x10
  Il2CppClass **v28; // x8
  __int128 v29; // q0
  __int128 v30; // q1
  int v31; // w8
  struct System_Int64_array *v32; // x8
  _QWORD *v33; // x9
  __int64 v34; // x10
  __int64 v35; // x8
  System_Collections_Generic_List_long__o *v36; // x0
  int v37; // w21
  System_Int64_array *v38; // x0
  System_String_o *v39; // x2
  System_String_o *v40; // x3
  int32_t v41; // w4
  int32_t v42; // w5
  bool v43; // w6
  bool v44; // w7
  System_Int64_array *v45; // x1
  System_String_o *v46; // x2
  System_String_o *v47; // x3
  int32_t v48; // w4
  int32_t v49; // w5
  bool v50; // w6
  bool v51; // w7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v53; // [xsp+0h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v54; // [xsp+20h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v55; // [xsp+40h] [xbp-80h]

  if ( (byte_596E4E5 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_long__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_long__ToArray__);
    sub_2213A60(&Method_System_Collections_Generic_List_long___ctor__);
    sub_2213A60(&Method_System_Collections_Generic_List_long__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_2213A60(&System_Collections_Generic_List_long__TypeInfo);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_2213A60(&WarehouseListViewItem_TypeInfo);
    byte_596E4E5 = 1;
  }
  v7 = (System_Collections_Generic_List_long__o *)sub_2213CCC(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v7,
    (const MethodInfo_446BA10 *)Method_System_Collections_Generic_List_long___ctor__);
  v8 = (System_Collections_Generic_List_long__o *)sub_2213CCC(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v8,
    (const MethodInfo_446BA10 *)Method_System_Collections_Generic_List_long___ctor__);
  itemList = this->fields.itemList;
  if ( !itemList )
    goto LABEL_36;
  size = itemList->fields._size;
  if ( size >= 1 )
  {
    v19 = 0;
    do
    {
      Item = (int64_t)this->fields.itemList;
      if ( !Item )
        goto LABEL_36;
      Item = (int64_t)System_Collections_Generic_List_object___get_Item(
                        (System_Collections_Generic_List_object__o *)Item,
                        v19,
                        (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
      if ( !Item )
        goto LABEL_36;
      naturalAligment = WarehouseListViewItem_TypeInfo->_2.naturalAligment;
      if ( *(unsigned __int8 *)(*(_QWORD *)Item + 304LL) < (unsigned int)naturalAligment
        || *(WarehouseListViewItem_c **)(*(_QWORD *)(*(_QWORD *)Item + 200LL) + 8 * naturalAligment - 8) != WarehouseListViewItem_TypeInfo )
      {
        goto LABEL_36;
      }
      v21 = *(_QWORD *)(Item + 120);
      if ( v21 && *(_BYTE *)(Item + 256) )
      {
        if ( *(_BYTE *)(Item + 180) )
        {
          v22 = *(_OWORD *)(v21 + 16);
          v23 = *(_OWORD *)(v21 + 32);
          v24 = *(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1);
          *(_OWORD *)&v55.fields.currentCryptoKey = v22;
          *(_OWORD *)&v55.fields.fakeValue = v23;
          if ( !v24 )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v10, v11);
          v54 = v55;
          Item = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_56000612(&v54, 0);
          if ( !v8 )
            goto LABEL_36;
          items = v8->fields._items;
          v26 = Method_System_Collections_Generic_List_long__Add__;
          ++v8->fields._version;
          if ( !items )
            goto LABEL_36;
          v27 = v8->fields._size;
          v10 = Item;
          if ( (unsigned int)v27 >= LODWORD(items->max_length) )
          {
            v35 = v26[4];
            v36 = v8;
LABEL_28:
            System_Collections_Generic_List_long___AddWithResize(
              v36,
              v10,
              *(const MethodInfo_446C29C **)(*(_QWORD *)(v35 + 192) + 112LL));
            continue;
          }
          v28 = &items->obj.klass + v27;
          v8->fields._size = v27 + 1;
        }
        else
        {
          v29 = *(_OWORD *)(v21 + 16);
          v30 = *(_OWORD *)(v21 + 32);
          v31 = *(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1);
          *(_OWORD *)&v55.fields.currentCryptoKey = v29;
          *(_OWORD *)&v55.fields.fakeValue = v30;
          if ( !v31 )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v10, v11);
          v53 = v55;
          Item = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_56000612(&v53, 0);
          if ( !v7 )
            goto LABEL_36;
          v32 = v7->fields._items;
          v33 = Method_System_Collections_Generic_List_long__Add__;
          ++v7->fields._version;
          if ( !v32 )
            goto LABEL_36;
          v34 = v7->fields._size;
          v10 = Item;
          if ( (unsigned int)v34 >= LODWORD(v32->max_length) )
          {
            v35 = v33[4];
            v36 = v7;
            goto LABEL_28;
          }
          v28 = &v32->obj.klass + v34;
          v7->fields._size = v34 + 1;
        }
        v28[4] = (Il2CppClass *)v10;
      }
    }
    while ( size != ++v19 );
  }
  if ( !v7 || !v8 )
LABEL_36:
    sub_2213CDC(Item, v10);
  v37 = v8->fields._size + v7->fields._size;
  if ( v37 < 1 )
  {
    *lockList = 0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)lockList, 0, v11, v12, v13, v14, v15, v16);
    v45 = 0;
  }
  else
  {
    v38 = System_Collections_Generic_List_long___ToArray(
            v7,
            (const MethodInfo_446DD1C *)Method_System_Collections_Generic_List_long__ToArray__);
    *lockList = v38;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)lockList, (int32_t)v38, v39, v40, v41, v42, v43, v44);
    v45 = System_Collections_Generic_List_long___ToArray(
            v8,
            (const MethodInfo_446DD1C *)Method_System_Collections_Generic_List_long__ToArray__);
  }
  *unlockList = v45;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)unlockList, (int32_t)v45, v46, v47, v48, v49, v50, v51);
  return v37 > 0;
}


void WarehouseListViewManager__InitLoad(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  WarehouseListViewManager_c *v3; // x0
  ListViewSort_o *servantSortInfo; // x0

  if ( (byte_596E4DD & 1) == 0 )
  {
    sub_2213A60(&WarehouseListViewManager_TypeInfo);
    byte_596E4DD = 1;
  }
  v3 = WarehouseListViewManager_TypeInfo;
  if ( !*(&WarehouseListViewManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(WarehouseListViewManager_TypeInfo, v1, v2);
    v3 = WarehouseListViewManager_TypeInfo;
  }
  servantSortInfo = v3->static_fields->servantSortInfo;
  if ( !servantSortInfo
    || (ListViewSort__InitLoad(servantSortInfo, 0),
        (servantSortInfo = WarehouseListViewManager_TypeInfo->static_fields->servantEquipSortInfo) == 0)
    || (ListViewSort__InitLoad(servantSortInfo, 0),
        (servantSortInfo = WarehouseListViewManager_TypeInfo->static_fields->servantWarehouseSortInfo) == 0)
    || (ListViewSort__InitLoad(servantSortInfo, 0),
        (servantSortInfo = WarehouseListViewManager_TypeInfo->static_fields->servantEquipWarehouseSortInfo) == 0) )
  {
    sub_2213CDC(servantSortInfo, v1);
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
    sub_2213CDC(this, item);
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

  parentManager = this->fields.parentManager;
  *(_QWORD *)friendShipSum = 0;
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
    sub_2213CDC(parentManager, item);
  return !ServantEntity__get_IsOrganization((ServantEntity_o *)parentManager, 0)
      || item->fields.attribute
      || this->fields.sellEnableRestCnt - addServantSum >= 2;
}


void WarehouseListViewManager__Modify(WarehouseListViewManager_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x8
  Il2CppObject *Instance; // x0
  __int64 v5; // x1
  DataMasterBase_TMaster__TEntity__PKType__o *v6; // x20
  _BOOL8 v7; // x0
  const MethodInfo *v8; // x1
  WarehouseListViewItem_o *current; // x21
  __int64 naturalAligment; // x10
  const MethodInfo *v11; // x1
  int64_t UserSvtId; // x0
  Il2CppObject *Entity; // x1
  const MethodInfo *v14; // x2
  UnityEngine_Object_o *viewObject; // x22
  __int64 v16; // x1
  struct ListViewObject_o *v17; // x0
  UserGameEntity_o *SelfUserGame; // x20
  struct System_Collections_Generic_List_ListViewItem__o *v19; // x9
  DataMasterBase_TMaster__TEntity__PKType__o *v20; // x19
  _BOOL8 v21; // x0
  const MethodInfo *v22; // x1
  WarehouseListViewItem_o *v23; // x21
  __int64 v24; // x10
  const MethodInfo *v25; // x1
  int64_t v26; // x0
  Il2CppObject *v27; // x1
  const MethodInfo *v28; // x2
  int64_t v29; // x0
  const MethodInfo *v30; // x1
  int64_t favoriteUserSvtId; // x27
  int64_t v32; // x22
  int64_t v33; // x0
  const MethodInfo *v34; // x3
  __int64 v35; // x1
  __int64 v36; // x2
  UnityEngine_Object_o *v37; // x22
  __int64 v38; // x1
  struct ListViewObject_o *v39; // x0
  System_Collections_Generic_List_Enumerator_object__o v40; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v41; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_596E4E3 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_UserServantStorageMaster___);
    sub_2213A60(&Method_DataMasterBase_UserServantStorageMaster__UserServantEntity__long__GetEntity__);
    sub_2213A60(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_2213A60(&WarehouseListViewItem_TypeInfo);
    byte_596E4E3 = 1;
  }
  itemList = this->fields.itemList;
  memset(&v41, 0, sizeof(v41));
  if ( itemList )
  {
    if ( (this->fields.kind & 0xFFFFFFFE) == 2 )
    {
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( Instance )
      {
        Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_385636C *)Method_DataManager_GetMasterData_UserServantStorageMaster___);
        if ( this->fields.itemList )
        {
          v6 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
          System_Collections_Generic_List_object___GetEnumerator(
            (System_Collections_Generic_List_Enumerator_T__o *)&v40,
            (System_Collections_Generic_List_object__o *)this->fields.itemList,
            (const MethodInfo_448473C *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
          v41 = v40;
          v40.fields._list = 0;
          *(_QWORD *)&v40.fields._index = &v41;
          while ( 1 )
          {
            v7 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                   &v41,
                   (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
            if ( !v7 )
              break;
            current = (WarehouseListViewItem_o *)v41.fields._current;
            if ( !v41.fields._current
              || (naturalAligment = WarehouseListViewItem_TypeInfo->_2.naturalAligment,
                  v41.fields._current->klass->_2.naturalAligment < (unsigned int)naturalAligment)
              || (WarehouseListViewItem_c *)v41.fields._current->klass->_2.typeHierarchy[naturalAligment - 1] != WarehouseListViewItem_TypeInfo )
            {
              sub_2213CDC(v7, v8);
            }
            if ( WarehouseListViewItem__get_UserSvtId((WarehouseListViewItem_o *)v41.fields._current, v8) >= 1 )
            {
              UserSvtId = WarehouseListViewItem__get_UserSvtId(current, v11);
              if ( !v6 )
                sub_2213CDC(UserSvtId, UserSvtId);
              Entity = DataMasterBase_object__object__long___GetEntity(
                         v6,
                         UserSvtId,
                         (const MethodInfo_3F13190 *)Method_DataMasterBase_UserServantStorageMaster__UserServantEntity__long__GetEntity__);
              if ( Entity )
                WarehouseListViewItem__Modify(current, (UserServantEntity_o *)Entity, v14);
              viewObject = (UnityEngine_Object_o *)current->fields.viewObject;
              if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, Entity, v14);
              if ( UnityEngine_Object__op_Inequality(viewObject, 0, 0) )
              {
                v17 = current->fields.viewObject;
                if ( !v17 )
                  sub_2213CDC(0, v16);
                ((void (__fastcall *)(struct ListViewObject_o *, WarehouseListViewItem_o *, const MethodInfo *))v17->klass->vtable._5_SetItem.methodPtr)(
                  v17,
                  current,
                  v17->klass->vtable._5_SetItem.method);
              }
            }
          }
LABEL_41:
          System_Collections_Generic_List_Enumerator_object___Dispose(
            &v41,
            (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
          return;
        }
      }
    }
    else
    {
      SelfUserGame = UserGameMaster__getSelfUserGame(0);
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( Instance )
      {
        Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_385636C *)Method_DataManager_GetMasterData_UserServantMaster___);
        v19 = this->fields.itemList;
        if ( v19 )
        {
          v20 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
          System_Collections_Generic_List_object___GetEnumerator(
            (System_Collections_Generic_List_Enumerator_T__o *)&v40,
            (System_Collections_Generic_List_object__o *)v19,
            (const MethodInfo_448473C *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
          v41 = v40;
          v40.fields._list = 0;
          *(_QWORD *)&v40.fields._index = &v41;
          while ( 1 )
          {
            v21 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                    &v41,
                    (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
            if ( !v21 )
              break;
            v23 = (WarehouseListViewItem_o *)v41.fields._current;
            if ( !v41.fields._current
              || (v24 = WarehouseListViewItem_TypeInfo->_2.naturalAligment,
                  v41.fields._current->klass->_2.naturalAligment < (unsigned int)v24)
              || (WarehouseListViewItem_c *)v41.fields._current->klass->_2.typeHierarchy[v24 - 1] != WarehouseListViewItem_TypeInfo )
            {
              sub_2213CDC(v21, v22);
            }
            if ( WarehouseListViewItem__get_UserSvtId((WarehouseListViewItem_o *)v41.fields._current, v22) >= 1 )
            {
              v26 = WarehouseListViewItem__get_UserSvtId(v23, v25);
              if ( !v20 )
                sub_2213CDC(v26, v26);
              v27 = DataMasterBase_object__object__long___GetEntity(
                      v20,
                      v26,
                      (const MethodInfo_3F13190 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
              if ( v27 )
                WarehouseListViewItem__Modify(v23, (UserServantEntity_o *)v27, v28);
              v29 = WarehouseListViewItem__get_UserSvtId(v23, (const MethodInfo *)v27);
              if ( !SelfUserGame )
                sub_2213CDC(v29, v30);
              favoriteUserSvtId = SelfUserGame->fields.favoriteUserSvtId;
              v32 = v29;
              v33 = WarehouseListViewItem__get_UserSvtId(v23, v30);
              WarehouseListViewItem__Modify_45300132(
                v23,
                v32 == favoriteUserSvtId,
                v33 == SelfUserGame->fields.pushUserSvtId,
                v34);
              v37 = (UnityEngine_Object_o *)v23->fields.viewObject;
              if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v35, v36);
              if ( UnityEngine_Object__op_Inequality(v37, 0, 0) )
              {
                v39 = v23->fields.viewObject;
                if ( !v39 )
                  sub_2213CDC(0, v38);
                ((void (__fastcall *)(struct ListViewObject_o *, WarehouseListViewItem_o *, const MethodInfo *))v39->klass->vtable._5_SetItem.methodPtr)(
                  v39,
                  v23,
                  v39->klass->vtable._5_SetItem.method);
              }
            }
          }
          goto LABEL_41;
        }
      }
    }
    sub_2213CDC(Instance, v5);
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
  __int64 v15; // x1
  __int64 v16; // x2
  int64_t v17; // x21
  Il2CppObject v18; // q1
  int v19; // w8
  const MethodInfo *v20; // x2
  int64_t v21; // x0
  const MethodInfo *v22; // x1
  int64_t favoriteUserSvtId; // x27
  int64_t v24; // x21
  int64_t v25; // x0
  const MethodInfo *v26; // x3
  __int64 v27; // x1
  __int64 v28; // x2
  UnityEngine_Object_o *v29; // x21
  __int64 v30; // x1
  struct ListViewObject_o *v31; // x0
  __int64 v32; // x19
  _BOOL8 v33; // x0
  const MethodInfo *v34; // x1
  const MethodInfo *v35; // x2
  __int64 naturalAligment; // x11
  WarehouseListViewItem_o *current; // x22
  __int64 v38; // x1
  __int64 v39; // x2
  int64_t v40; // x23
  __int128 v41; // q1
  int v42; // w8
  UnityEngine_Object_o *viewObject; // x23
  __int64 v44; // x1
  struct ListViewObject_o *v45; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v46; // [xsp+0h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v47; // [xsp+20h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v48; // [xsp+40h] [xbp-A0h] BYREF
  __int64 v49; // [xsp+60h] [xbp-80h]
  System_Collections_Generic_List_Enumerator_object__o *v50; // [xsp+68h] [xbp-78h]
  System_Collections_Generic_List_Enumerator_object__o v51; // [xsp+70h] [xbp-70h] BYREF

  if ( (byte_596E4E4 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_UserServantStorageMaster___);
    sub_2213A60(&Method_DataMasterBase_UserServantStorageMaster__UserServantEntity__long__GetEntity__);
    sub_2213A60(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_2213A60(&WarehouseListViewItem_TypeInfo);
    byte_596E4E4 = 1;
  }
  itemList = this->fields.itemList;
  memset(&v51, 0, sizeof(v51));
  if ( itemList )
  {
    if ( (this->fields.kind & 0xFFFFFFFE) == 2 )
    {
      if ( userSvtId < 1 )
      {
        v8 = 0;
        goto LABEL_39;
      }
      Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( Instance )
      {
        Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                      Instance,
                                      (const MethodInfo_385636C *)Method_DataManager_GetMasterData_UserServantStorageMaster___);
        if ( Instance )
        {
          Instance = (DataManager_o *)DataMasterBase_object__object__long___GetEntity(
                                        (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                                        userSvtId,
                                        (const MethodInfo_3F13190 *)Method_DataMasterBase_UserServantStorageMaster__UserServantEntity__long__GetEntity__);
          itemList = this->fields.itemList;
          if ( itemList )
          {
            v8 = Instance;
LABEL_39:
            System_Collections_Generic_List_object___GetEnumerator(
              (System_Collections_Generic_List_Enumerator_T__o *)&v48,
              (System_Collections_Generic_List_object__o *)itemList,
              (const MethodInfo_448473C *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
            v51 = *(System_Collections_Generic_List_Enumerator_object__o *)&v48.fields.currentCryptoKey;
            v49 = 0;
            v50 = &v51;
            while ( 1 )
            {
              v33 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                      &v51,
                      (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
              if ( !v33 )
              {
                System_Collections_Generic_List_Enumerator_object___Dispose(
                  &v51,
                  (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
                return;
              }
              if ( v51.fields._current
                && (naturalAligment = WarehouseListViewItem_TypeInfo->_2.naturalAligment,
                    v51.fields._current->klass->_2.naturalAligment >= (unsigned int)naturalAligment) )
              {
                if ( (WarehouseListViewItem_c *)v51.fields._current->klass->_2.typeHierarchy[naturalAligment - 1] == WarehouseListViewItem_TypeInfo )
                  current = (WarehouseListViewItem_o *)v51.fields._current;
                else
                  current = 0;
                if ( v8 )
                {
LABEL_44:
                  if ( !current )
                    sub_2213CDC(v33, v34);
                  v40 = WarehouseListViewItem__get_UserSvtId(current, v34);
                  v41 = *(_OWORD *)&v8->fields._DispLog;
                  v42 = *(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1);
                  *(SingletonMonoBehaviour_DataManager__Fields *)&v48.fields.currentCryptoKey = v8->fields.SingletonMonoBehaviour_DataManager__Fields;
                  *(_OWORD *)&v48.fields.fakeValue = v41;
                  if ( !v42 )
                    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v38, v39);
                  v47 = v48;
                  if ( v40 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_56000612(&v47, 0) )
                    WarehouseListViewItem__Modify(current, (UserServantEntity_o *)v8, v35);
                  goto LABEL_54;
                }
              }
              else
              {
                current = 0;
                if ( v8 )
                  goto LABEL_44;
              }
              if ( !current )
                sub_2213CDC(v33, v34);
LABEL_54:
              viewObject = (UnityEngine_Object_o *)current->fields.viewObject;
              if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v34, v35);
              if ( UnityEngine_Object__op_Inequality(viewObject, 0, 0) )
              {
                v45 = current->fields.viewObject;
                if ( !v45 )
                  sub_2213CDC(0, v44);
                ((void (__fastcall *)(struct ListViewObject_o *, WarehouseListViewItem_o *, const MethodInfo *))v45->klass->vtable._5_SetItem.methodPtr)(
                  v45,
                  current,
                  v45->klass->vtable._5_SetItem.method);
              }
            }
          }
        }
      }
LABEL_68:
      sub_2213CDC(Instance, v7);
    }
    Entity = 0;
    SelfUserGame = UserGameMaster__getSelfUserGame(0);
    if ( userSvtId >= 1 )
    {
      Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_68;
      Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                    Instance,
                                    (const MethodInfo_385636C *)Method_DataManager_GetMasterData_UserServantMaster___);
      if ( !Instance )
        goto LABEL_68;
      Entity = DataMasterBase_object__object__long___GetEntity(
                 (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                 userSvtId,
                 (const MethodInfo_3F13190 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    }
    Instance = (DataManager_o *)this->fields.itemList;
    if ( !Instance )
      goto LABEL_68;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v48,
      (System_Collections_Generic_List_object__o *)Instance,
      (const MethodInfo_448473C *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    v51 = *(System_Collections_Generic_List_Enumerator_object__o *)&v48.fields.currentCryptoKey;
    v49 = 0;
    v50 = &v51;
    while ( 1 )
    {
      v11 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v51,
              (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
      if ( !v11 )
      {
        v32 = v49;
        System_Collections_Generic_List_Enumerator_object___Dispose(
          v50,
          (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
        if ( v32 )
          sub_2213CD4(v32);
        return;
      }
      if ( v51.fields._current
        && (v13 = WarehouseListViewItem_TypeInfo->_2.naturalAligment,
            v51.fields._current->klass->_2.naturalAligment >= (unsigned int)v13) )
      {
        if ( (WarehouseListViewItem_c *)v51.fields._current->klass->_2.typeHierarchy[v13 - 1] == WarehouseListViewItem_TypeInfo )
          v14 = (WarehouseListViewItem_o *)v51.fields._current;
        else
          v14 = 0;
        if ( Entity )
        {
LABEL_20:
          if ( !v14 )
            sub_2213CDC(v11, v12);
          v17 = WarehouseListViewItem__get_UserSvtId(v14, v12);
          v18 = Entity[2];
          v19 = *(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1);
          *(Il2CppObject *)&v48.fields.currentCryptoKey = Entity[1];
          *(Il2CppObject *)&v48.fields.fakeValue = v18;
          if ( !v19 )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v15, v16);
          v46 = v48;
          if ( v17 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_56000612(&v46, 0) )
            WarehouseListViewItem__Modify(v14, (UserServantEntity_o *)Entity, v20);
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
        sub_2213CDC(v11, v12);
LABEL_30:
      v21 = WarehouseListViewItem__get_UserSvtId(v14, v12);
      if ( !SelfUserGame )
        sub_2213CDC(v21, v22);
      favoriteUserSvtId = SelfUserGame->fields.favoriteUserSvtId;
      v24 = v21;
      v25 = WarehouseListViewItem__get_UserSvtId(v14, v22);
      WarehouseListViewItem__Modify_45300132(
        v14,
        v24 == favoriteUserSvtId,
        v25 == SelfUserGame->fields.pushUserSvtId,
        v26);
      v29 = (UnityEngine_Object_o *)v14->fields.viewObject;
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v27, v28);
      if ( UnityEngine_Object__op_Inequality(v29, 0, 0) )
      {
        v31 = v14->fields.viewObject;
        if ( !v31 )
          sub_2213CDC(0, v30);
        ((void (__fastcall *)(struct ListViewObject_o *, WarehouseListViewItem_o *, const MethodInfo *))v31->klass->vtable._5_SetItem.methodPtr)(
          v31,
          v14,
          v31->klass->vtable._5_SetItem.method);
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
  System_Collections_Generic_List_object__o *Item; // x0
  const MethodInfo *v7; // x1
  struct WarehouseListManager_o *parentManager; // x8
  struct WarehouseListViewManager_o *baseListViewManager; // x9
  int32_t selectSum; // w10
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x9
  int size; // w23
  int32_t v13; // w21
  __int64 v14; // x2
  __int64 v15; // x3
  WarehouseListViewItem_o *v16; // x22
  __int64 naturalAligment; // x9
  int64_t UserSvtId; // x0
  int64_t v19; // x0
  int32_t v20; // w9
  struct WarehouseListManager_o *v21; // x8
  struct WarehouseListViewManager_o *v22; // x9
  WarehouseListViewManager_o *v23; // x0
  const MethodInfo *v24; // x1

  if ( (byte_596E4FF & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_long__int__ContainsKey__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_long__int__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_long__int__get_Item__);
    sub_2213A60(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_2213A60(&WarehouseListViewItem_TypeInfo);
    byte_596E4FF = 1;
  }
  if ( selectServantIdDic
    && System_Collections_Generic_Dictionary_long__int___get_Count(
         selectServantIdDic,
         (const MethodInfo_3FC90BC *)Method_System_Collections_Generic_Dictionary_long__int__get_Count__) )
  {
    WarehouseListViewManager__ReleaseAll(this, v5);
    parentManager = this->fields.parentManager;
    if ( !parentManager
      || (baseListViewManager = parentManager->fields.baseListViewManager) == 0
      || (selectSum = baseListViewManager->fields.selectSum,
          itemList = this->fields.itemList,
          parentManager->fields.totalSum = selectSum,
          !itemList) )
    {
LABEL_20:
      sub_2213CDC(Item, v7);
    }
    size = itemList->fields._size;
    if ( size >= 1 )
    {
      v13 = 0;
      while ( 1 )
      {
        Item = (System_Collections_Generic_List_object__o *)this->fields.itemList;
        if ( !Item )
          goto LABEL_20;
        Item = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                              Item,
                                                              v13,
                                                              (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
        if ( !Item )
          goto LABEL_20;
        v16 = (WarehouseListViewItem_o *)Item;
        naturalAligment = WarehouseListViewItem_TypeInfo->_2.naturalAligment;
        if ( Item->klass->_2.naturalAligment < (unsigned int)naturalAligment
          || (WarehouseListViewItem_c *)Item->klass->_2.typeHierarchy[naturalAligment - 1] != WarehouseListViewItem_TypeInfo )
        {
          break;
        }
        UserSvtId = WarehouseListViewItem__get_UserSvtId(
                      (WarehouseListViewItem_o *)Item,
                      (const MethodInfo *)WarehouseListViewItem_TypeInfo);
        if ( System_Collections_Generic_Dictionary_long__int___ContainsKey(
               selectServantIdDic,
               UserSvtId,
               (const MethodInfo_3FC9618 *)Method_System_Collections_Generic_Dictionary_long__int__ContainsKey__) )
        {
          v19 = WarehouseListViewItem__get_UserSvtId(v16, v7);
          Item = (System_Collections_Generic_List_object__o *)System_Collections_Generic_Dictionary_long__int___get_Item(
                                                                selectServantIdDic,
                                                                v19,
                                                                (const MethodInfo_3FC9384 *)Method_System_Collections_Generic_Dictionary_long__int__get_Item__);
          v20 = this->fields.selectSum;
          v21 = this->fields.parentManager;
          v16->fields.selectNum = (int)Item;
          this->fields.selectSum = v20 + 1;
          if ( !v21 )
            goto LABEL_20;
          v22 = v21->fields.baseListViewManager;
          if ( !v22 )
            goto LABEL_20;
          v21->fields.totalSum = v22->fields.selectSum;
        }
        if ( size == ++v13 )
          return;
      }
      sub_221405C(Item, WarehouseListViewItem_TypeInfo, v14, v15);
      WarehouseListViewManager__IsDragStart(v23, v24);
    }
  }
}


void WarehouseListViewManager__OnClickBonusFilterKind(WarehouseListViewManager_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x1
  ListViewSort_o *sort; // x0

  if ( (byte_596E4EF & 1) == 0 )
  {
    sub_2213A60(&Method_WarehouseListViewManager_OnClickBonusFilterKind__);
    byte_596E4EF = 1;
  }
  if ( this->fields.isInput )
  {
    v3 = Method_WarehouseListViewManager_OnClickBonusFilterKind__;
    if ( (*((_BYTE *)Method_WarehouseListViewManager_OnClickBonusFilterKind__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_2213A78(Method_WarehouseListViewManager_OnClickBonusFilterKind__);
    v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    sort = this->fields.sort;
    if ( !sort )
      sub_2213CDC(0, v5);
    ListViewSort__IncrementBonusFilter(sort, this->fields.alignedBonusFilterInfos, this->fields.isQuestStart, 0, 0);
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0);
    ListViewManager__CheckScroll((ListViewManager_o *)this, this->fields.scaleType, 0);
  }
}


void WarehouseListViewManager__OnClickFilterKind(WarehouseListViewManager_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  int32_t kind; // w8
  Il2CppObject *v6; // x21
  ListViewSort_o *sort; // x20
  ServantFilterSelectMenu_CallbackFunc_o *v8; // x22
  __int64 v9; // x0
  __int64 v10; // x1
  CommonUI_o *v11; // x0
  int32_t v12; // w1
  Il2CppObject *v13; // x21
  ListViewSort_o *v14; // x20
  ServantFilterSelectMenu_CallbackFunc_o *v15; // x22
  Il2CppObject *Instance; // x21

  if ( (byte_596E4F7 & 1) == 0 )
  {
    sub_2213A60(&ServantFilterSelectMenu_CallbackFunc_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_2213A60(&Method_WarehouseListViewManager_EndSelectFilterKind__);
    sub_2213A60(&Method_WarehouseListViewManager_OnClickFilterKind__);
    byte_596E4F7 = 1;
  }
  if ( this->fields.isInput )
  {
    v3 = Method_WarehouseListViewManager_OnClickFilterKind__;
    if ( (*((_BYTE *)Method_WarehouseListViewManager_OnClickFilterKind__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_2213A78(Method_WarehouseListViewManager_OnClickFilterKind__);
    v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    kind = this->fields.kind;
    if ( kind > 1 )
    {
      if ( kind == 3 )
        goto LABEL_15;
      if ( kind != 2 )
        goto LABEL_17;
    }
    else if ( kind )
    {
      if ( kind != 1 )
      {
LABEL_17:
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        sort = this->fields.sort;
        v8 = (ServantFilterSelectMenu_CallbackFunc_o *)sub_2213CCC(ServantFilterSelectMenu_CallbackFunc_TypeInfo);
        ServantFilterSelectMenu_CallbackFunc___ctor(
          v8,
          (Il2CppObject *)this,
          Method_WarehouseListViewManager_EndSelectFilterKind__,
          0);
        if ( Instance )
        {
          v11 = (CommonUI_o *)Instance;
          v12 = 6;
          goto LABEL_19;
        }
        goto LABEL_20;
      }
LABEL_15:
      v13 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v14 = this->fields.sort;
      v15 = (ServantFilterSelectMenu_CallbackFunc_o *)sub_2213CCC(ServantFilterSelectMenu_CallbackFunc_TypeInfo);
      ServantFilterSelectMenu_CallbackFunc___ctor(
        v15,
        (Il2CppObject *)this,
        Method_WarehouseListViewManager_EndSelectFilterKind__,
        0);
      if ( v13 )
      {
        CommonUI__OpenServantFilterSelectMenu_37380372((CommonUI_o *)v13, 5, v14, (ListViewManager_o *)this, v15, -1, 0);
        return;
      }
      goto LABEL_20;
    }
    v6 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sort = this->fields.sort;
    v8 = (ServantFilterSelectMenu_CallbackFunc_o *)sub_2213CCC(ServantFilterSelectMenu_CallbackFunc_TypeInfo);
    ServantFilterSelectMenu_CallbackFunc___ctor(
      v8,
      (Il2CppObject *)this,
      Method_WarehouseListViewManager_EndSelectFilterKind__,
      0);
    if ( v6 )
    {
      v11 = (CommonUI_o *)v6;
      v12 = 0;
LABEL_19:
      CommonUI__OpenServantFilterSelectMenu(v11, v12, sort, v8, -1, 0);
      return;
    }
LABEL_20:
    sub_2213CDC(v9, v10);
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

  if ( (byte_596E4EE & 1) == 0 )
  {
    sub_2213A60(&WarehouseListViewItem_TypeInfo);
    byte_596E4EE = 1;
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

  if ( (byte_596E4FA & 1) == 0 )
  {
    sub_2213A60(&Method_WarehouseListViewManager_OnClickSortAscendingOrder__);
    byte_596E4FA = 1;
  }
  if ( this->fields.isInput )
  {
    v3 = Method_WarehouseListViewManager_OnClickSortAscendingOrder__;
    if ( (*((_BYTE *)Method_WarehouseListViewManager_OnClickSortAscendingOrder__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_2213A78(Method_WarehouseListViewManager_OnClickSortAscendingOrder__);
    v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    sort = this->fields.sort;
    if ( !sort )
      sub_2213CDC(v5, v6);
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

  if ( (byte_596E4F5 & 1) == 0 )
  {
    sub_2213A60(&ServantSortSelectMenu_CallbackFunc_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_2213A60(&Method_WarehouseListViewManager_EndSelectSortKind__);
    sub_2213A60(&Method_WarehouseListViewManager_OnClickSortKind__);
    byte_596E4F5 = 1;
  }
  if ( this->fields.isInput )
  {
    v3 = Method_WarehouseListViewManager_OnClickSortKind__;
    if ( (*((_BYTE *)Method_WarehouseListViewManager_OnClickSortKind__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_2213A78(Method_WarehouseListViewManager_OnClickSortKind__);
    v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    kind = this->fields.kind;
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sort = this->fields.sort;
    v8 = (CommonUI_o *)Instance;
    v9 = (ServantSortSelectMenu_CallbackFunc_o *)sub_2213CCC(ServantSortSelectMenu_CallbackFunc_TypeInfo);
    ServantSortSelectMenu_CallbackFunc___ctor(
      v9,
      (Il2CppObject *)this,
      Method_WarehouseListViewManager_EndSelectSortKind__,
      0);
    if ( !v8 )
      sub_2213CDC(v10, v11);
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

  if ( (byte_596E4F4 & 1) == 0 )
  {
    sub_2213A60(&WarehouseListViewItem_TypeInfo);
    byte_596E4F4 = 1;
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
  __int64 v6; // x1
  __int64 v7; // x2
  UnityEngine_Object_o *scrollView; // x20
  __int64 v9; // x1
  UIScrollView_o *v10; // x0

  if ( (byte_596E4EB & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596E4EB = 1;
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
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6, v7);
      if ( UnityEngine_Object__op_Inequality(scrollView, 0, 0) )
      {
        v10 = this->fields.scrollView;
        if ( !v10 )
          goto LABEL_14;
        ((void (__fastcall *)(UIScrollView_o *, __int64, const MethodInfo *))v10->klass->vtable._8_UpdateScrollbars.methodPtr)(
          v10,
          1,
          v10->klass->vtable._8_UpdateScrollbars.method);
        v10 = this->fields.scrollView;
        if ( !v10 )
          goto LABEL_14;
        if ( (((__int64 (__fastcall *)(UIScrollView_o *, const MethodInfo *))v10->klass->vtable._6_get_shouldMoveVertically.methodPtr)(
                v10,
                v10->klass->vtable._6_get_shouldMoveVertically.method)
            & 1) != 0 )
        {
          v10 = this->fields.scrollView;
          if ( v10 )
          {
            UIScrollView__UpdatePosition(v10, 0);
            return;
          }
LABEL_14:
          sub_2213CDC(v10, v9);
        }
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

  if ( (byte_596E4E1 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_WarehouseListViewObject__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_WarehouseListViewObject__get_Item__);
    byte_596E4E1 = 1;
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
                        (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_WarehouseListViewObject__get_Item__);
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
    sub_2213CDC(parentManager, method);
  }
}


void WarehouseListViewManager__ReleaseAll(WarehouseListViewManager_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x0
  _BOOL8 v4; // x0
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x3
  Il2CppObject *current; // x20
  __int64 naturalAligment; // x9
  const MethodInfo *v10; // x3
  const MethodInfo *v11; // x1
  System_Collections_Generic_List_Enumerator_object__o v12; // [xsp+18h] [xbp-48h] BYREF

  if ( (byte_596E4ED & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    sub_2213A60(&WarehouseListViewItem_TypeInfo);
    byte_596E4ED = 1;
  }
  itemList = this->fields.itemList;
  memset(&v12, 0, sizeof(v12));
  this->fields.sellEnableRestCnt = 0;
  if ( !itemList )
    sub_2213CDC(0, method);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v12,
    (System_Collections_Generic_List_object__o *)itemList,
    (const MethodInfo_448473C *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  while ( 1 )
  {
    v4 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v12,
           (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    if ( !v4 )
      break;
    current = v12.fields._current;
    if ( !v12.fields._current )
      goto LABEL_12;
    naturalAligment = WarehouseListViewItem_TypeInfo->_2.naturalAligment;
    if ( v12.fields._current->klass->_2.naturalAligment < (unsigned int)naturalAligment
      || (WarehouseListViewItem_c *)v12.fields._current->klass->_2.typeHierarchy[naturalAligment - 1] != WarehouseListViewItem_TypeInfo )
    {
      sub_221405C(v12.fields._current, WarehouseListViewItem_TypeInfo, v6, v7);
LABEL_12:
      sub_2213CDC(v4, v5);
    }
    ListViewItem__set_IsSelect((ListViewItem_o *)v12.fields._current, 0, 0);
    WarehouseListViewManager__ChangeSellEnableRestCnt(this, 1, (WarehouseListViewItem_o *)current, v10);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v12,
    (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
  this->fields.selectSum = 0;
  WarehouseListViewManager__RefrashListDisp(this, v11);
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
  const MethodInfo_448473C *v10; // x1
  Il2CppObject *current; // x21
  System_Action_o *v12; // x22
  __int64 v13; // x0
  __int64 v14; // x1
  System_Collections_Generic_List_Enumerator_object__o v15; // [xsp+18h] [xbp-68h] BYREF

  if ( (byte_596E4E9 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_WarehouseListViewObject__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_WarehouseListViewObject__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_WarehouseListViewObject__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_List_WarehouseListViewObject__GetEnumerator__);
    sub_2213A60(&Method_System_Collections_Generic_List_WarehouseListViewObject__get_Count__);
    sub_2213A60(&Method_WarehouseListViewManager_OnMoveEnd__);
    sub_2213A60(&StringLiteral_10344/*"OnMoveEnd"*/);
    byte_596E4E9 = 1;
  }
  memset(&v15, 0, sizeof(v15));
  ObjectList = (System_Collections_Generic_List_object__o *)WarehouseListViewManager__get_ObjectList(
                                                              this,
                                                              *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_2213CDC(0, v8);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10344/*"OnMoveEnd"*/,
      delay,
      0);
  }
  else
  {
    v10 = (const MethodInfo_448473C *)Method_System_Collections_Generic_List_WarehouseListViewObject__GetEnumerator__;
    this->fields.callbackCount = size;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v15,
      ObjectList,
      v10);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v15,
              (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_WarehouseListViewObject__MoveNext__) )
    {
      current = v15.fields._current;
      v12 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
      System_Action___ctor(v12, (Il2CppObject *)this, Method_WarehouseListViewManager_OnMoveEnd__, 0);
      if ( !current )
        sub_2213CDC(v13, v14);
      WarehouseListViewObject__Init_45324668((WarehouseListViewObject_o *)current, mode, v12, delay, 0);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v15,
      (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_WarehouseListViewObject__Dispose__);
  }
}


// local variable allocation has failed, the output may be wrong!
void WarehouseListViewManager__RequestListObject_45314776(
        WarehouseListViewManager_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *ObjectList; // x0
  __int64 v6; // x1
  int32_t size; // w8
  const MethodInfo_448473C *v8; // x1
  Il2CppObject *current; // x21
  System_Action_o *v10; // x22
  __int64 v11; // x0
  __int64 v12; // x1
  __int64 v13; // [xsp+8h] [xbp-78h]
  System_Collections_Generic_List_Enumerator_object__o *v14; // [xsp+10h] [xbp-70h]
  System_Collections_Generic_List_Enumerator_object__o v15; // [xsp+18h] [xbp-68h] BYREF

  if ( (byte_596E4EA & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_WarehouseListViewObject__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_WarehouseListViewObject__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_WarehouseListViewObject__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_List_WarehouseListViewObject__GetEnumerator__);
    sub_2213A60(&Method_System_Collections_Generic_List_WarehouseListViewObject__get_Count__);
    sub_2213A60(&Method_WarehouseListViewManager_OnMoveEnd__);
    sub_2213A60(&StringLiteral_10344/*"OnMoveEnd"*/);
    byte_596E4EA = 1;
  }
  memset(&v15, 0, sizeof(v15));
  ObjectList = (System_Collections_Generic_List_object__o *)WarehouseListViewManager__get_ObjectList(
                                                              this,
                                                              *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_2213CDC(0, v6);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10344/*"OnMoveEnd"*/,
      0.0,
      0);
  }
  else
  {
    v8 = (const MethodInfo_448473C *)Method_System_Collections_Generic_List_WarehouseListViewObject__GetEnumerator__;
    this->fields.callbackCount = size;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v15,
      ObjectList,
      v8);
    v13 = 0;
    v14 = &v15;
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v15,
              (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_WarehouseListViewObject__MoveNext__) )
    {
      current = v15.fields._current;
      v10 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
      System_Action___ctor(v10, (Il2CppObject *)this, Method_WarehouseListViewManager_OnMoveEnd__, 0);
      if ( !current )
        sub_2213CDC(v11, v12);
      WarehouseListViewObject__Init_45324752((WarehouseListViewObject_o *)current, mode, v10, 0);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v15,
      (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_WarehouseListViewObject__Dispose__);
  }
}


void WarehouseListViewManager__SaveSortInfo(WarehouseListViewManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  WarehouseListViewManager_c *v3; // x0
  ListViewSort_o *servantSortInfo; // x8
  __int64 v5; // x0
  __int64 v6; // x1
  ListViewSort_o *servantEquipSortInfo; // x8
  ListViewSort_o *servantWarehouseSortInfo; // x8
  ListViewSort_o *servantEquipWarehouseSortInfo; // x8

  if ( (byte_596E4E2 & 1) == 0 )
  {
    sub_2213A60(&WarehouseListViewManager_TypeInfo);
    byte_596E4E2 = 1;
  }
  v3 = WarehouseListViewManager_TypeInfo;
  if ( !*(&WarehouseListViewManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(WarehouseListViewManager_TypeInfo, method, v2);
    v3 = WarehouseListViewManager_TypeInfo;
  }
  servantSortInfo = v3->static_fields->servantSortInfo;
  if ( servantSortInfo )
  {
    if ( !*(&v3->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v3, method, v2);
      servantSortInfo = WarehouseListViewManager_TypeInfo->static_fields->servantSortInfo;
      if ( !servantSortInfo )
        goto LABEL_28;
    }
    ListViewSort__Save(servantSortInfo, 0);
    v3 = WarehouseListViewManager_TypeInfo;
  }
  if ( !*(&v3->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(v3, method, v2);
    v3 = WarehouseListViewManager_TypeInfo;
  }
  servantEquipSortInfo = v3->static_fields->servantEquipSortInfo;
  if ( servantEquipSortInfo )
  {
    if ( !*(&v3->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v3, method, v2);
      servantEquipSortInfo = WarehouseListViewManager_TypeInfo->static_fields->servantEquipSortInfo;
      if ( !servantEquipSortInfo )
        goto LABEL_28;
    }
    ListViewSort__Save(servantEquipSortInfo, 0);
    v3 = WarehouseListViewManager_TypeInfo;
  }
  if ( !*(&v3->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(v3, method, v2);
    v3 = WarehouseListViewManager_TypeInfo;
  }
  servantWarehouseSortInfo = v3->static_fields->servantWarehouseSortInfo;
  if ( servantWarehouseSortInfo )
  {
    if ( !*(&v3->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v3, method, v2);
      servantWarehouseSortInfo = WarehouseListViewManager_TypeInfo->static_fields->servantWarehouseSortInfo;
      if ( !servantWarehouseSortInfo )
        goto LABEL_28;
    }
    ListViewSort__Save(servantWarehouseSortInfo, 0);
    v3 = WarehouseListViewManager_TypeInfo;
  }
  if ( !*(&v3->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(v3, method, v2);
    v3 = WarehouseListViewManager_TypeInfo;
  }
  servantEquipWarehouseSortInfo = v3->static_fields->servantEquipWarehouseSortInfo;
  if ( servantEquipWarehouseSortInfo )
  {
    if ( *(&v3->_2.cctor_finished + 1)
      || (j_il2cpp_runtime_class_init_0(v3, method, v2),
          (servantEquipWarehouseSortInfo = WarehouseListViewManager_TypeInfo->static_fields->servantEquipWarehouseSortInfo) != 0) )
    {
      ListViewSort__Save(servantEquipWarehouseSortInfo, 0);
      return;
    }
LABEL_28:
    sub_2213CDC(v5, v6);
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
  __int64 v10; // x2
  struct WarehouseListManager_o *v11; // x8
  struct WarehouseListViewManager_o *v12; // x9
  LocalizationManager_c *v13; // x0
  UILabel_o *v14; // x21
  struct WarehouseListManager_o *v15; // x8
  WarehouseListViewManager_o *v16; // x22
  struct WarehouseListManager_o *v17; // x8
  Il2CppObject *v18; // x23
  Il2CppObject *v19; // x0
  const MethodInfo *v20; // x3
  const MethodInfo *v21; // x2
  struct WarehouseListManager_o *v22; // x8
  const MethodInfo *v23; // x1
  bool IsSelectEnable; // w8
  System_Reflection_MethodBase_o *v25; // x0
  __int64 v26; // x2
  struct WarehouseListManager_o *parentManager; // x8
  struct WarehouseListViewManager_o *baseListViewManager; // x9
  LocalizationManager_c *v29; // x0
  UILabel_o *selectDoneLabel; // x21
  struct WarehouseListManager_o *v31; // x8
  WarehouseListViewManager_o *v32; // x22
  struct WarehouseListManager_o *v33; // x8
  Il2CppObject *v34; // x23
  Il2CppObject *v35; // x0
  const MethodInfo *v36; // x3
  int32_t sendMax; // [xsp+8h] [xbp-38h] BYREF
  int32_t totalSum; // [xsp+Ch] [xbp-34h] BYREF

  v4 = this;
  if ( (byte_596E4F0 & 1) == 0 )
  {
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&Method_WarehouseListViewManager_SelectListView__);
    this = (WarehouseListViewManager_o *)sub_2213A60(&StringLiteral_13005/*"SUM_INFO"*/);
    byte_596E4F0 = 1;
  }
  if ( !selectItem )
    goto LABEL_35;
  if ( WarehouseListViewItem__get_IsCanNotSelect(selectItem, (const MethodInfo *)selectItem) )
  {
    v5 = Method_WarehouseListViewManager_SelectListView__;
    if ( (*((_BYTE *)Method_WarehouseListViewManager_SelectListView__ + 83) & 2) == 0 )
    {
LABEL_7:
      v6 = (System_Reflection_MethodBase_o *)sub_2213A44(v5, v5[4]);
      OverwriteAssetSoundName__PlaySystemSe(v6, 2, 0, 0);
      return;
    }
LABEL_6:
    v5 = (_QWORD *)sub_2213A78(v5);
    goto LABEL_7;
  }
  if ( !ListViewItem__get_IsSelect((ListViewItem_o *)selectItem, 0) )
  {
    IsSelectEnable = WarehouseListViewManager__IsSelectEnable(v4, selectItem, 0, 0, v7);
    v5 = Method_WarehouseListViewManager_SelectListView__;
    if ( !IsSelectEnable )
    {
      if ( (*((_BYTE *)Method_WarehouseListViewManager_SelectListView__ + 83) & 2) == 0 )
        goto LABEL_7;
      goto LABEL_6;
    }
    if ( (*((_BYTE *)Method_WarehouseListViewManager_SelectListView__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_2213A78(Method_WarehouseListViewManager_SelectListView__);
    v25 = (System_Reflection_MethodBase_o *)sub_2213A44(v5, v5[4]);
    OverwriteAssetSoundName__PlaySystemSe(v25, 0, 0, 0);
    parentManager = v4->fields.parentManager;
    if ( parentManager )
    {
      selectItem->fields.selectNum = parentManager->fields.totalSum;
      ++v4->fields.selectSum;
      baseListViewManager = parentManager->fields.baseListViewManager;
      if ( baseListViewManager )
      {
        v29 = LocalizationManager_TypeInfo;
        parentManager->fields.totalSum = baseListViewManager->fields.selectSum;
        selectDoneLabel = v4->fields.selectDoneLabel;
        if ( !*(&v29->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(v29, selectItem, v26);
        this = (WarehouseListViewManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_13005/*"SUM_INFO"*/, 0);
        v31 = v4->fields.parentManager;
        if ( v31 )
        {
          v32 = this;
          totalSum = v31->fields.totalSum;
          this = (WarehouseListViewManager_o *)j_il2cpp_value_box_0(qword_5984348, &totalSum);
          v33 = v4->fields.parentManager;
          if ( v33 )
          {
            v34 = (Il2CppObject *)this;
            sendMax = v33->fields.sendMax;
            v35 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &sendMax);
            this = (WarehouseListViewManager_o *)System_String__Format_75697880((System_String_o *)v32, v34, v35, 0);
            if ( selectDoneLabel )
            {
              UILabel__set_text(selectDoneLabel, (System_String_o *)this, 0);
              WarehouseListViewManager__ChangeSellEnableRestCnt(v4, 0, selectItem, v36);
              goto LABEL_32;
            }
          }
        }
      }
    }
LABEL_35:
    sub_2213CDC(this, selectItem);
  }
  v8 = Method_WarehouseListViewManager_SelectListView__;
  if ( (*((_BYTE *)Method_WarehouseListViewManager_SelectListView__ + 83) & 2) != 0 )
    v8 = (_QWORD *)sub_2213A78(Method_WarehouseListViewManager_SelectListView__);
  v9 = (System_Reflection_MethodBase_o *)sub_2213A44(v8, v8[4]);
  OverwriteAssetSoundName__PlaySystemSe(v9, 0, 0, 0);
  v11 = v4->fields.parentManager;
  --v4->fields.selectSum;
  if ( !v11 )
    goto LABEL_35;
  v12 = v11->fields.baseListViewManager;
  if ( !v12 )
    goto LABEL_35;
  v13 = LocalizationManager_TypeInfo;
  v11->fields.totalSum = v12->fields.selectSum;
  v14 = v4->fields.selectDoneLabel;
  if ( !*(&v13->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(v13, selectItem, v10);
  this = (WarehouseListViewManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_13005/*"SUM_INFO"*/, 0);
  v15 = v4->fields.parentManager;
  if ( !v15 )
    goto LABEL_35;
  v16 = this;
  totalSum = v15->fields.totalSum;
  this = (WarehouseListViewManager_o *)j_il2cpp_value_box_0(qword_5984348, &totalSum);
  v17 = v4->fields.parentManager;
  if ( !v17 )
    goto LABEL_35;
  v18 = (Il2CppObject *)this;
  sendMax = v17->fields.sendMax;
  v19 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &sendMax);
  this = (WarehouseListViewManager_o *)System_String__Format_75697880((System_String_o *)v16, v18, v19, 0);
  if ( !v14 )
    goto LABEL_35;
  UILabel__set_text(v14, (System_String_o *)this, 0);
  WarehouseListViewManager__ChangeSellEnableRestCnt(v4, 1, selectItem, v20);
  v22 = v4->fields.parentManager;
  if ( !v22 )
    goto LABEL_35;
  this = v22->fields.baseListViewManager;
  if ( !this )
    goto LABEL_35;
  WarehouseListViewManager__DecrementNumber(this, selectItem->fields.selectNum, v21);
  ListViewItem__set_IsSelect((ListViewItem_o *)selectItem, 0, 0);
LABEL_32:
  WarehouseListViewManager__RefrashListDisp(v4, v23);
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

  if ( (byte_596E4F3 & 1) == 0 )
  {
    sub_2213A60(&Method_WarehouseListViewManager_SelectListViewChoice__);
    byte_596E4F3 = 1;
  }
  v5 = Method_WarehouseListViewManager_SelectListViewChoice__;
  if ( (*((_BYTE *)Method_WarehouseListViewManager_SelectListViewChoice__ + 83) & 2) != 0 )
    v5 = (_QWORD *)sub_2213A78(Method_WarehouseListViewManager_SelectListViewChoice__);
  v6 = (System_Reflection_MethodBase_o *)sub_2213A44(v5, v5[4]);
  OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0, 0);
  if ( !selectItem )
    sub_2213CDC(v7, v8);
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

  if ( (byte_596E4F2 & 1) == 0 )
  {
    sub_2213A60(&Method_WarehouseListViewManager_SelectListViewLock__);
    byte_596E4F2 = 1;
  }
  v5 = Method_WarehouseListViewManager_SelectListViewLock__;
  if ( (*((_BYTE *)Method_WarehouseListViewManager_SelectListViewLock__ + 83) & 2) != 0 )
    v5 = (_QWORD *)sub_2213A78(Method_WarehouseListViewManager_SelectListViewLock__);
  v6 = (System_Reflection_MethodBase_o *)sub_2213A44(v5, v5[4]);
  OverwriteAssetSoundName__PlaySystemSe(v6, 11, 0, 0);
  if ( !selectItem )
    sub_2213CDC(v7, v8);
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

  if ( (byte_596E503 & 1) == 0 )
  {
    sub_2213A60(&Method_WarehouseListViewManager_SetDragEnd__);
    byte_596E503 = 1;
  }
  v3 = Method_WarehouseListViewManager_SetDragEnd__;
  if ( (*((_BYTE *)Method_WarehouseListViewManager_SetDragEnd__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_2213A78(Method_WarehouseListViewManager_SetDragEnd__);
  v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
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
  this->fields.dragSelectFriendShipSum = 0;
  this->fields.isDragSelect = 1;
  *(_OWORD *)&this->fields.dragSelectSum = xmmword_E9BCF0;
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
  int32_t v5; // w19
  System_Collections_Generic_List_object__o *itemSortList; // x0
  __int64 v8; // x2
  __int64 v9; // x3
  System_Collections_Generic_List_object__o *v10; // x19
  __int64 naturalAligment; // x9
  int items_high; // w8
  bool v13; // w21
  _BOOL4 v14; // w21
  bool IsSelect; // w0
  const MethodInfo *v16; // x4
  int v17; // w8
  UnityEngine_Object_o *syncRoot; // x20
  __int64 v19; // x9
  bool result; // w0
  int32_t *p_dragServantSelectSum; // x9
  WarehouseListViewManager_o *v22; // x0
  int32_t v23; // w1
  bool v24; // w2
  const MethodInfo *v25; // x3

  v5 = index;
  if ( (byte_596E501 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&WarehouseListViewItem_TypeInfo);
    sub_2213A60(&WarehouseListViewObject_TypeInfo);
    byte_596E501 = 1;
  }
  itemSortList = (System_Collections_Generic_List_object__o *)this->fields.itemSortList;
  if ( !itemSortList )
    goto LABEL_46;
  itemSortList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                itemSortList,
                                                                v5,
                                                                (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
  if ( !itemSortList )
    goto LABEL_46;
  v10 = itemSortList;
  *(_QWORD *)&index = WarehouseListViewItem_TypeInfo;
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
      if ( ListViewItem__get_IsSelect((ListViewItem_o *)itemSortList, 0) || SHIDWORD(v10[6].fields._items) < 1 )
        goto LABEL_25;
      if ( BYTE2(v10[4].fields._size) )
        --this->fields.dragSelectFriendShipSum;
      else
        --this->fields.dragSelectSum;
      if ( this->fields.kind )
        goto LABEL_25;
      itemSortList = (System_Collections_Generic_List_object__o *)v10[3].monitor;
      if ( !itemSortList )
        goto LABEL_46;
      if ( !ServantEntity__get_IsOrganization((ServantEntity_o *)itemSortList, 0) || HIDWORD(v10[5].fields._items) )
      {
LABEL_25:
        v17 = -1;
LABEL_26:
        v13 = 0;
        HIDWORD(v10[6].fields._items) = v17;
        goto LABEL_29;
      }
      p_dragServantSelectSum = &this->fields.dragServantSelectSum;
      v17 = -1;
LABEL_39:
      *p_dragServantSelectSum += v17;
      goto LABEL_26;
    }
    goto LABEL_28;
  }
  if ( (items_high & 0x80000000) == 0 )
    goto LABEL_28;
  HIDWORD(itemSortList[6].fields._items) = 0;
  v13 = 0;
  if ( WarehouseListViewItem__get_IsCanNotSelect((WarehouseListViewItem_o *)itemSortList, *(const MethodInfo **)&index) )
    goto LABEL_29;
  v14 = this->fields.isDragSelect;
  IsSelect = ListViewItem__get_IsSelect((ListViewItem_o *)v10, 0);
  if ( !v14 )
  {
    if ( IsSelect )
      goto LABEL_45;
    goto LABEL_28;
  }
  if ( IsSelect )
  {
LABEL_28:
    v13 = 0;
    goto LABEL_29;
  }
  if ( WarehouseListViewManager__IsSelectEnable(
         this,
         (WarehouseListViewItem_o *)v10,
         this->fields.dragSelectSum,
         this->fields.dragServantSelectSum,
         v16) )
  {
    if ( BYTE2(v10[4].fields._size) )
      ++this->fields.dragSelectFriendShipSum;
    else
      ++this->fields.dragSelectSum;
    if ( !this->fields.kind
      && WarehouseListViewItem__get_IsOrganization((WarehouseListViewItem_o *)v10, *(const MethodInfo **)&index) )
    {
      v17 = 1;
      if ( HIDWORD(v10[5].fields._items) )
        goto LABEL_26;
      p_dragServantSelectSum = &this->fields.dragServantSelectSum;
      goto LABEL_39;
    }
LABEL_45:
    v17 = 1;
    goto LABEL_26;
  }
  v13 = 1;
LABEL_29:
  syncRoot = (UnityEngine_Object_o *)v10[2].fields._syncRoot;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, *(_QWORD *)&index, v8);
  if ( !UnityEngine_Object__op_Inequality(syncRoot, 0, 0) )
    return v13;
  itemSortList = (System_Collections_Generic_List_object__o *)v10[2].fields._syncRoot;
  if ( !itemSortList )
LABEL_46:
    sub_2213CDC(itemSortList, *(_QWORD *)&index);
  *(_QWORD *)&index = WarehouseListViewObject_TypeInfo;
  v19 = WarehouseListViewObject_TypeInfo->_2.naturalAligment;
  if ( itemSortList->klass->_2.naturalAligment >= (unsigned int)v19
    && (WarehouseListViewObject_c *)itemSortList->klass->_2.typeHierarchy[v19 - 1] == WarehouseListViewObject_TypeInfo )
  {
    WarehouseListViewObject__SetupDisp((WarehouseListViewObject_o *)itemSortList, 0);
    return v13;
  }
LABEL_47:
  sub_221405C(itemSortList, *(_QWORD *)&index, v8, v9);
  WarehouseListViewManager__SetDragStart(v22, v23, v24, v25);
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
  int32_t v12; // w20
  int v13; // w24
  int v14; // w27
  int32_t v15; // w23
  struct WarehouseListManager_o *parentManager; // x8
  int v17; // w28
  __int64 v18; // x2
  __int64 v19; // x3
  WarehouseListViewManager_o *v20; // x21
  __int64 naturalAligment; // x9
  UnityEngine_Object_c *v22; // x0
  UnityEngine_Object_o *clipRange; // x22
  __int64 v24; // x9
  WarehouseListViewManager_o *v25; // x0
  int32_t v26; // w1
  bool v27; // w2
  const MethodInfo *v28; // x3

  v5 = startIndex;
  v6 = this;
  if ( (byte_596E500 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&WarehouseListViewItem_TypeInfo);
    this = (WarehouseListViewManager_o *)sub_2213A60(&WarehouseListViewObject_TypeInfo);
    byte_596E500 = 1;
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
    if ( dragStartIndex >= dragEndIndex )
      v10 = v6->fields.dragEndIndex;
    else
      v10 = v6->fields.dragStartIndex;
  }
  v6->fields.dragStartIndex = v5;
  if ( v5 <= endIndex )
    v11 = endIndex;
  else
    v11 = v5;
  if ( v5 >= endIndex )
    v12 = endIndex;
  else
    v12 = v5;
  if ( v5 < 0 )
    v13 = -1;
  else
    v13 = v11;
  if ( v5 < 0 )
    v14 = -1;
  else
    v14 = v12;
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
        if ( v10 < 0 || v5 < v10 || v5 > v9 )
          this = (WarehouseListViewManager_o *)WarehouseListViewManager__SetDragSelect(v6, v5, 1, method);
        ++v5;
      }
      while ( v5 <= endIndex );
    }
    else
    {
      do
      {
        if ( v10 < 0 || v5 < v10 || v5 > v9 )
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
        sub_2213CDC(this, *(_QWORD *)&startIndex);
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
                                                 v12,
                                                 (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
          if ( !this )
            goto LABEL_63;
          *(_QWORD *)&startIndex = WarehouseListViewItem_TypeInfo;
          v20 = this;
          naturalAligment = WarehouseListViewItem_TypeInfo->_2.naturalAligment;
          if ( this->klass->_2.naturalAligment < (unsigned int)naturalAligment
            || (WarehouseListViewItem_c *)this->klass->_2.typeHierarchy[naturalAligment - 1] != WarehouseListViewItem_TypeInfo )
          {
            goto LABEL_64;
          }
          if ( SHIDWORD(this->fields.rightItem) >= 1 )
          {
            v22 = UnityEngine_Object_TypeInfo;
            clipRange = (UnityEngine_Object_o *)v20->fields.clipRange;
            HIDWORD(v20->fields.rightItem) = v17;
            if ( !*(&v22->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(v22, *(_QWORD *)&startIndex, v18);
            ++v17;
            if ( UnityEngine_Object__op_Inequality(clipRange, 0, 0) )
            {
              this = (WarehouseListViewManager_o *)v20->fields.clipRange;
              if ( !this )
                goto LABEL_63;
              *(_QWORD *)&startIndex = WarehouseListViewObject_TypeInfo;
              v24 = WarehouseListViewObject_TypeInfo->_2.naturalAligment;
              if ( this->klass->_2.naturalAligment < (unsigned int)v24
                || (WarehouseListViewObject_c *)this->klass->_2.typeHierarchy[v24 - 1] != WarehouseListViewObject_TypeInfo )
              {
LABEL_64:
                sub_221405C(this, *(_QWORD *)&startIndex, v18, v19);
                WarehouseListViewManager__SetDragSelect(v25, v26, v27, v28);
                return;
              }
              WarehouseListViewObject__SetupDisp((WarehouseListViewObject_o *)this, 0);
            }
          }
          ++v12;
        }
        while ( v12 <= v13 );
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
  WarehouseListViewManager_o *v5; // x19
  bool v6; // w21
  struct System_Collections_Generic_List_ListViewItem__o *itemSortList; // x8
  int size; // w22
  int32_t v9; // w21
  __int64 v10; // x2
  __int64 naturalAligment; // x9
  __int64 v12; // x1
  __int64 v13; // x2
  UnityEngine_Object_o *scrollView; // x20
  WarehouseListViewManager_o *v15; // x0
  int32_t v16; // w1
  const MethodInfo *v17; // x2

  v4 = startIndex;
  v5 = this;
  v6 = isDragSelect;
  if ( (byte_596E502 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    this = (WarehouseListViewManager_o *)sub_2213A60(&WarehouseListViewItem_TypeInfo);
    byte_596E502 = 1;
  }
  v5->fields.isDragSelect = v6;
  itemSortList = v5->fields.itemSortList;
  v5->fields.dragSelectFriendShipSum = 0;
  *(_OWORD *)&v5->fields.dragSelectSum = xmmword_E9BCF0;
  if ( !itemSortList )
    goto LABEL_17;
  size = itemSortList->fields._size;
  if ( size < 1 )
  {
LABEL_11:
    WarehouseListViewManager__SetDragSelectItem(v5, v4, v4, method);
    scrollView = (UnityEngine_Object_o *)v5->fields.scrollView;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v12, v13);
    if ( !UnityEngine_Object__op_Inequality(scrollView, 0, 0) )
      return;
    this = (WarehouseListViewManager_o *)v5->fields.scrollView;
    if ( this )
    {
      UIScrollView__Press((UIScrollView_o *)this, 0, 0);
      return;
    }
LABEL_17:
    sub_2213CDC(this, *(_QWORD *)&startIndex);
  }
  v9 = 0;
  while ( 1 )
  {
    this = (WarehouseListViewManager_o *)v5->fields.itemSortList;
    if ( !this )
      goto LABEL_17;
    this = (WarehouseListViewManager_o *)System_Collections_Generic_List_object___get_Item(
                                           (System_Collections_Generic_List_object__o *)this,
                                           v9,
                                           (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    if ( !this )
      goto LABEL_17;
    *(_QWORD *)&startIndex = WarehouseListViewItem_TypeInfo;
    naturalAligment = WarehouseListViewItem_TypeInfo->_2.naturalAligment;
    if ( this->klass->_2.naturalAligment < (unsigned int)naturalAligment
      || (WarehouseListViewItem_c *)this->klass->_2.typeHierarchy[naturalAligment - 1] != WarehouseListViewItem_TypeInfo )
    {
      break;
    }
    ++v9;
    HIDWORD(this->fields.rightItem) = -1;
    if ( size == v9 )
      goto LABEL_11;
  }
  sub_221405C(this, WarehouseListViewItem_TypeInfo, v10, method);
  WarehouseListViewManager__SetDragMove(v15, v16, v17);
}


void WarehouseListViewManager__SetFilterButtonImage(WarehouseListViewManager_o *this, const MethodInfo *method)
{
  ListViewSort_o *sort; // x0
  UISprite_o *filterSprite; // x19
  System_String_o **v5; // x8

  if ( (byte_596E4F9 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_18255/*"btn_filter_on"*/);
    sub_2213A60(&StringLiteral_18254/*"btn_filter"*/);
    byte_596E4F9 = 1;
  }
  sort = this->fields.sort;
  if ( !sort
    || (filterSprite = this->fields.filterSprite,
        sort = (ListViewSort_o *)ListViewSort__CheckFilterDefaultAll(sort, -1, 0),
        !filterSprite) )
  {
    sub_2213CDC(sort, method);
  }
  v5 = (System_String_o **)&StringLiteral_18254/*"btn_filter"*/;
  if ( ((unsigned __int8)sort & 1) == 0 )
    v5 = (System_String_o **)&StringLiteral_18255/*"btn_filter_on"*/;
  UISprite__set_spriteName(filterSprite, *v5, 0);
}


void WarehouseListViewManager__SetMode(
        WarehouseListViewManager_o *this,
        int32_t mode,
        WarehouseListViewManager_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  const MethodInfo *v10; // x2

  this->fields.callbackFunc = callback;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.callbackFunc,
    (int32_t)callback,
    (System_String_o *)callback,
    (System_String_o *)method,
    v4,
    v5,
    v6,
    v7);
  WarehouseListViewManager__SetMode_45313256(this, mode, v10);
}


void WarehouseListViewManager__SetMode_45313256(
        WarehouseListViewManager_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  __int64 v5; // x1
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x0
  _BOOL8 v7; // x0
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x3
  WarehouseListViewItem_o *v11; // x20
  __int64 v12; // x9
  const MethodInfo *v13; // x1
  _BOOL8 v14; // x0
  __int64 v15; // x1
  __int64 v16; // x2
  struct WarehouseListManager_o *v17; // x8
  struct WarehouseListViewManager_o *v18; // x9
  LocalizationManager_c *v19; // x0
  UILabel_o *v20; // x21
  System_String_o *v21; // x0
  __int64 v22; // x1
  struct WarehouseListManager_o *v23; // x8
  System_String_o *v24; // x22
  __int64 v25; // x0
  __int64 v26; // x1
  struct WarehouseListManager_o *v27; // x8
  Il2CppObject *v28; // x23
  Il2CppObject *v29; // x0
  System_String_o *v30; // x0
  WarehouseListViewManager_o *v31; // x0
  __int64 v32; // x1
  const MethodInfo *v33; // x2
  struct WarehouseListManager_o *v34; // x8
  char v35; // w24
  _BOOL8 v36; // x0
  __int64 v37; // x1
  __int64 v38; // x2
  __int64 v39; // x3
  WarehouseListViewItem_o *current; // x20
  __int64 naturalAligment; // x9
  const MethodInfo *v42; // x1
  _BOOL8 CanNotSelect; // x0
  __int64 v44; // x1
  __int64 v45; // x2
  struct WarehouseListManager_o *parentManager; // x8
  struct WarehouseListViewManager_o *baseListViewManager; // x9
  LocalizationManager_c *v48; // x0
  UILabel_o *selectDoneLabel; // x21
  System_String_o *v50; // x0
  __int64 v51; // x1
  struct WarehouseListManager_o *v52; // x8
  System_String_o *v53; // x22
  __int64 v54; // x0
  __int64 v55; // x1
  struct WarehouseListManager_o *v56; // x8
  Il2CppObject *v57; // x23
  Il2CppObject *v58; // x0
  System_String_o *v59; // x0
  WarehouseListViewManager_o *v60; // x0
  __int64 v61; // x1
  const MethodInfo *v62; // x2
  struct WarehouseListManager_o *v63; // x8
  const MethodInfo *v64; // x1
  const MethodInfo *v65; // x2
  WarehouseListViewManager_o *v66; // x0
  int32_t v67; // w1
  const MethodInfo *v68; // x1
  int32_t sendMax; // [xsp+0h] [xbp-A0h] BYREF
  int32_t totalSum; // [xsp+4h] [xbp-9Ch] BYREF
  System_Collections_Generic_List_Enumerator_object__o v71; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v72; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_596E4E8 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&WarehouseListViewItem_TypeInfo);
    sub_2213A60(&StringLiteral_13005/*"SUM_INFO"*/);
    byte_596E4E8 = 1;
  }
  memset(&v72, 0, sizeof(v72));
  this->fields.initMode = mode;
  this->fields.callbackCount = ListViewManager__get_ObjectSum((ListViewManager_o *)this, 0);
  ListViewManager__set_IsInput((ListViewManager_o *)this, mode == 2, 0);
  if ( (unsigned int)(mode - 3) > 0xFFFFFFFD )
  {
    itemList = this->fields.itemList;
    if ( itemList )
    {
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v71,
        (System_Collections_Generic_List_object__o *)itemList,
        (const MethodInfo_448473C *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
      v72 = v71;
      v35 = 0;
      v71.fields._list = 0;
      *(_QWORD *)&v71.fields._index = &v72;
      while ( 1 )
      {
        v36 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v72,
                (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
        if ( !v36 )
          break;
        current = (WarehouseListViewItem_o *)v72.fields._current;
        if ( !v72.fields._current )
          goto LABEL_50;
        naturalAligment = WarehouseListViewItem_TypeInfo->_2.naturalAligment;
        if ( v72.fields._current->klass->_2.naturalAligment < (unsigned int)naturalAligment
          || (WarehouseListViewItem_c *)v72.fields._current->klass->_2.typeHierarchy[naturalAligment - 1] != WarehouseListViewItem_TypeInfo )
        {
          sub_221405C(v72.fields._current, WarehouseListViewItem_TypeInfo, v38, v39);
LABEL_50:
          sub_2213CDC(v36, v37);
        }
        if ( ListViewItem__get_IsSelect((ListViewItem_o *)v72.fields._current, 0) )
        {
          CanNotSelect = WarehouseListViewItem__get_IsCanNotSelect(current, v42);
          if ( CanNotSelect )
          {
            parentManager = this->fields.parentManager;
            --this->fields.selectSum;
            if ( !parentManager || (baseListViewManager = parentManager->fields.baseListViewManager) == 0 )
              sub_2213CDC(CanNotSelect, v44);
            v48 = LocalizationManager_TypeInfo;
            parentManager->fields.totalSum = baseListViewManager->fields.selectSum;
            selectDoneLabel = this->fields.selectDoneLabel;
            if ( !*(&v48->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(v48, v44, v45);
            v50 = LocalizationManager__Get((System_String_o *)StringLiteral_13005/*"SUM_INFO"*/, 0);
            v52 = this->fields.parentManager;
            if ( !v52 )
              sub_2213CDC(v50, v51);
            v53 = v50;
            totalSum = v52->fields.totalSum;
            v54 = j_il2cpp_value_box_0(qword_5984348, &totalSum);
            v56 = this->fields.parentManager;
            if ( !v56 )
              sub_2213CDC(v54, v55);
            v57 = (Il2CppObject *)v54;
            sendMax = v56->fields.sendMax;
            v58 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &sendMax);
            v59 = System_String__Format_75697880(v53, v57, v58, 0);
            if ( !selectDoneLabel )
              sub_2213CDC(v59, v59);
            UILabel__set_text(selectDoneLabel, v59, 0);
            v63 = this->fields.parentManager;
            if ( !v63 || (v60 = v63->fields.baseListViewManager) == 0 )
              sub_2213CDC(v60, v61);
            WarehouseListViewManager__DecrementNumber(v60, current->fields.selectNum, v62);
            ListViewItem__set_IsSelect((ListViewItem_o *)current, 0, 0);
            v35 = 1;
          }
        }
      }
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v72,
        (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
      if ( (v35 & 1) != 0 )
        WarehouseListViewManager__RefrashListDisp(this, v64);
      v66 = this;
      if ( this->fields.isInput )
        v67 = 3;
      else
        v67 = 2;
      goto LABEL_47;
    }
LABEL_58:
    sub_2213CDC(itemList, v5);
  }
  if ( mode != 3 )
    return;
  itemList = this->fields.itemList;
  if ( !itemList )
    goto LABEL_58;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v71,
    (System_Collections_Generic_List_object__o *)itemList,
    (const MethodInfo_448473C *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  v72 = v71;
  v71.fields._list = 0;
  *(_QWORD *)&v71.fields._index = &v72;
  while ( 1 )
  {
    v7 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v72,
           (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    if ( !v7 )
      break;
    v11 = (WarehouseListViewItem_o *)v72.fields._current;
    if ( !v72.fields._current )
      goto LABEL_52;
    v12 = WarehouseListViewItem_TypeInfo->_2.naturalAligment;
    if ( v72.fields._current->klass->_2.naturalAligment < (unsigned int)v12
      || (WarehouseListViewItem_c *)v72.fields._current->klass->_2.typeHierarchy[v12 - 1] != WarehouseListViewItem_TypeInfo )
    {
      sub_221405C(v72.fields._current, WarehouseListViewItem_TypeInfo, v9, v10);
LABEL_52:
      sub_2213CDC(v7, v8);
    }
    if ( ListViewItem__get_IsSelect((ListViewItem_o *)v72.fields._current, 0) )
    {
      v14 = WarehouseListViewItem__get_IsCanNotSelect(v11, v13);
      if ( v14 )
      {
        v17 = this->fields.parentManager;
        --this->fields.selectSum;
        if ( !v17 || (v18 = v17->fields.baseListViewManager) == 0 )
          sub_2213CDC(v14, v15);
        v19 = LocalizationManager_TypeInfo;
        v17->fields.totalSum = v18->fields.selectSum;
        v20 = this->fields.selectDoneLabel;
        if ( !*(&v19->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(v19, v15, v16);
        v21 = LocalizationManager__Get((System_String_o *)StringLiteral_13005/*"SUM_INFO"*/, 0);
        v23 = this->fields.parentManager;
        if ( !v23 )
          sub_2213CDC(v21, v22);
        v24 = v21;
        totalSum = v23->fields.totalSum;
        v25 = j_il2cpp_value_box_0(qword_5984348, &totalSum);
        v27 = this->fields.parentManager;
        if ( !v27 )
          sub_2213CDC(v25, v26);
        v28 = (Il2CppObject *)v25;
        sendMax = v27->fields.sendMax;
        v29 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &sendMax);
        v30 = System_String__Format_75697880(v24, v28, v29, 0);
        if ( !v20 )
          sub_2213CDC(v30, v30);
        UILabel__set_text(v20, v30, 0);
        v34 = this->fields.parentManager;
        if ( !v34 || (v31 = v34->fields.baseListViewManager) == 0 )
          sub_2213CDC(v31, v32);
        WarehouseListViewManager__DecrementNumber(v31, v11->fields.selectNum, v33);
        ListViewItem__set_IsSelect((ListViewItem_o *)v11, 0, 0);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v72,
    (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
  WarehouseListViewManager__RefrashListDisp(this, v68);
  v66 = this;
  v67 = 4;
LABEL_47:
  WarehouseListViewManager__RequestListObject_45314776(v66, v67, v65);
}


void WarehouseListViewManager__SetObjectItem(
        WarehouseListViewManager_o *this,
        ListViewObject_o *obj,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  __int64 naturalAligment; // x10
  ListViewObject_o *v7; // x0
  int32_t v8; // w1

  if ( (byte_596E4E7 & 1) == 0 )
  {
    sub_2213A60(&WarehouseListViewObject_TypeInfo);
    byte_596E4E7 = 1;
  }
  if ( obj
    && (naturalAligment = WarehouseListViewObject_TypeInfo->_2.naturalAligment,
        obj->klass->_2.naturalAligment >= (unsigned int)naturalAligment) )
  {
    if ( (WarehouseListViewObject_c *)obj->klass->_2.typeHierarchy[naturalAligment - 1] == WarehouseListViewObject_TypeInfo )
      v7 = obj;
    else
      v7 = 0;
  }
  else
  {
    v7 = 0;
  }
  if ( this->fields.initMode != 2 )
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
  WarehouseListViewObject__Init_45323744((WarehouseListViewObject_o *)v7, v8, 0);
}


void WarehouseListViewManager__SetSortButtonImage(WarehouseListViewManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *sortKindLabel; // x20
  __int64 v5; // x1
  __int64 v6; // x2
  ListViewSort_o *sort; // x0
  UILabel_o *v8; // x20
  UnityEngine_Object_o *sortOrderSprite; // x20
  __int64 v10; // x2
  struct ListViewSort_o *v11; // x8
  int32_t sortKind; // w9
  System_String_o **v13; // x8
  struct ListViewSort_o *v14; // x8
  System_String_o **v15; // x9
  System_String_o **v16; // x10
  System_String_o **v17; // x8
  System_String_o **v18; // x8
  UnityEngine_Object_o *bonusFilterKindLabel; // x20
  UILabel_o *v20; // x20

  if ( (byte_596E4FC & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&StringLiteral_18291/*"btn_sort_up"*/);
    sub_2213A60(&StringLiteral_18395/*"btn_txt_up"*/);
    sub_2213A60(&StringLiteral_18344/*"btn_txt_new"*/);
    sub_2213A60(&StringLiteral_18334/*"btn_txt_down"*/);
    sub_2213A60(&StringLiteral_18352/*"btn_txt_old"*/);
    sub_2213A60(&StringLiteral_18288/*"btn_sort_down"*/);
    byte_596E4FC = 1;
  }
  sortKindLabel = (UnityEngine_Object_o *)this->fields.sortKindLabel;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  if ( UnityEngine_Object__op_Inequality(sortKindLabel, 0, 0) )
  {
    sort = this->fields.sort;
    if ( !sort )
      goto LABEL_41;
    v8 = this->fields.sortKindLabel;
    sort = (ListViewSort_o *)ListViewSort__GetSortKindButtonText(sort, 0, 0);
    if ( !v8 )
      goto LABEL_41;
    UILabel__set_text(v8, (System_String_o *)sort, 0);
  }
  sortOrderSprite = (UnityEngine_Object_o *)this->fields.sortOrderSprite;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5, v6);
  sort = (ListViewSort_o *)UnityEngine_Object__op_Inequality(sortOrderSprite, 0, 0);
  if ( ((unsigned __int8)sort & 1) != 0 )
  {
    v11 = this->fields.sort;
    if ( !v11 )
      goto LABEL_41;
    sortKind = v11->fields.sortKind;
    if ( sortKind == 11 || sortKind == 1 )
    {
      sort = (ListViewSort_o *)this->fields.sortExplanationSprite;
      if ( !sort )
        goto LABEL_41;
      v13 = (System_String_o **)(v11->fields.isAscendingOrder ? &StringLiteral_18352/*"btn_txt_old"*/ : &StringLiteral_18344/*"btn_txt_new"*/);
      UISprite__set_spriteName((UISprite_o *)sort, *v13, 0);
      v14 = this->fields.sort;
      if ( !v14 )
        goto LABEL_41;
      sort = (ListViewSort_o *)this->fields.sortOrderSprite;
      if ( !sort )
        goto LABEL_41;
      v15 = (System_String_o **)&StringLiteral_18288/*"btn_sort_down"*/;
      v16 = (System_String_o **)&StringLiteral_18291/*"btn_sort_up"*/;
    }
    else
    {
      sort = (ListViewSort_o *)this->fields.sortExplanationSprite;
      if ( !sort )
        goto LABEL_41;
      v17 = (System_String_o **)(v11->fields.isAscendingOrder ? &StringLiteral_18395/*"btn_txt_up"*/ : &StringLiteral_18334/*"btn_txt_down"*/);
      UISprite__set_spriteName((UISprite_o *)sort, *v17, 0);
      v14 = this->fields.sort;
      if ( !v14 )
        goto LABEL_41;
      sort = (ListViewSort_o *)this->fields.sortOrderSprite;
      if ( !sort )
        goto LABEL_41;
      v15 = (System_String_o **)&StringLiteral_18291/*"btn_sort_up"*/;
      v16 = (System_String_o **)&StringLiteral_18288/*"btn_sort_down"*/;
    }
    if ( v14->fields.isAscendingOrder )
      v18 = v15;
    else
      v18 = v16;
    UISprite__set_spriteName((UISprite_o *)sort, *v18, 0);
  }
  bonusFilterKindLabel = (UnityEngine_Object_o *)this->fields.bonusFilterKindLabel;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5, v10);
  if ( UnityEngine_Object__op_Inequality(bonusFilterKindLabel, 0, 0) )
  {
    sort = this->fields.sort;
    if ( !sort )
      goto LABEL_41;
    if ( sort->fields.isBonusKind )
    {
      v20 = this->fields.bonusFilterKindLabel;
      sort = (ListViewSort_o *)ListViewSort__GetBonusFilterButtonText(
                                 sort,
                                 this->fields.alignedBonusFilterInfos,
                                 this->fields.isQuestStart,
                                 0);
      if ( v20 )
      {
        UILabel__set_text(v20, (System_String_o *)sort, 0);
        return;
      }
LABEL_41:
      sub_2213CDC(sort, v5);
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
  void *monitor; // x25
  _BOOL8 v9; // x0
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x3
  Il2CppObject *current; // x20
  WarehouseListViewItem_c *v14; // x1
  __int64 naturalAligment; // x9
  _OWORD *v16; // x8
  __int128 v17; // q0
  __int128 v18; // q1
  int v19; // w8
  __int64 v20; // x1
  UserServantEntity_o *v21; // x0
  __int64 v22; // x1
  UserServantEntity_o *v23; // x0
  __int64 v24; // x1
  UserServantEntity_o *v25; // x0
  __int64 v26; // x1
  UserServantEntity_o *v27; // x0
  __int64 v28; // x1
  bool v29; // w8
  char v30; // w8
  UserServantEntity_o *v31; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v32; // [xsp+0h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v33; // [xsp+20h] [xbp-A0h] BYREF
  __int64 v34; // [xsp+40h] [xbp-80h]
  System_Collections_Generic_List_Enumerator_object__o *v35; // [xsp+48h] [xbp-78h]
  System_Collections_Generic_List_Enumerator_object__o v36; // [xsp+50h] [xbp-70h] BYREF

  if ( (byte_596E508 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_2213A60(&WarehouseListViewItem_TypeInfo);
    byte_596E508 = 1;
  }
  memset(&v36, 0, sizeof(v36));
  SelfUserGame = (System_Collections_Generic_List_object__o *)UserGameMaster__getSelfUserGame(0);
  if ( !SelfUserGame
    || (v7 = SelfUserGame, (SelfUserGame = (System_Collections_Generic_List_object__o *)this->fields.itemList) == 0) )
  {
    sub_2213CDC(SelfUserGame, v6);
  }
  monitor = v7[3].monitor;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v33,
    SelfUserGame,
    (const MethodInfo_448473C *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  v36 = *(System_Collections_Generic_List_Enumerator_object__o *)&v33.fields.currentCryptoKey;
  v34 = 0;
  v35 = &v36;
  while ( 1 )
  {
    v9 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v36,
           (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    if ( !v9 )
      break;
    current = v36.fields._current;
    if ( !v36.fields._current )
      goto LABEL_30;
    v14 = WarehouseListViewItem_TypeInfo;
    naturalAligment = WarehouseListViewItem_TypeInfo->_2.naturalAligment;
    if ( v36.fields._current->klass->_2.naturalAligment < (unsigned int)naturalAligment
      || (WarehouseListViewItem_c *)v36.fields._current->klass->_2.typeHierarchy[naturalAligment - 1] != WarehouseListViewItem_TypeInfo )
    {
      sub_221405C(v36.fields._current, WarehouseListViewItem_TypeInfo, v11, v12);
LABEL_30:
      sub_2213CDC(v9, v10);
    }
    v16 = v36.fields._current[7].monitor;
    HIBYTE(v36.fields._current[11].klass) = isPushMode;
    if ( !v16 )
      sub_2213CDC(v9, v14);
    v17 = v16[1];
    v18 = v16[2];
    v19 = *(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1);
    *(_OWORD *)&v33.fields.currentCryptoKey = v17;
    *(_OWORD *)&v33.fields.fakeValue = v18;
    if ( !v19 )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v14, v11);
    v32 = v33;
    LOBYTE(current[11].monitor) = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_56000612(&v32, 0) == (_QWORD)monitor;
    if ( isPushMode )
    {
      v21 = (UserServantEntity_o *)current[7].monitor;
      if ( !v21 )
        sub_2213CDC(0, v20);
      if ( UserServantEntity__IsLeave(v21, 0) )
        goto LABEL_22;
      v23 = (UserServantEntity_o *)current[7].monitor;
      if ( !v23 )
        sub_2213CDC(0, v22);
      if ( UserServantEntity__IsEventJoin(v23, 0) )
        goto LABEL_22;
      v25 = (UserServantEntity_o *)current[7].monitor;
      if ( !v25 )
        sub_2213CDC(0, v24);
      if ( UserServantEntity__IsCombineMaterial(v25, 0) )
        goto LABEL_22;
      v27 = (UserServantEntity_o *)current[7].monitor;
      if ( !v27 )
        sub_2213CDC(0, v26);
      if ( UserServantEntity__IsStatusUp(v27, 0) )
      {
LABEL_22:
        v29 = 0;
      }
      else
      {
        v31 = (UserServantEntity_o *)current[7].monitor;
        if ( !v31 )
          sub_2213CDC(0, v28);
        v29 = !UserServantEntity__IsMaterialTd(v31, 0);
      }
      v30 = v29;
    }
    else
    {
      v30 = 1;
    }
    BYTE1(current[11].monitor) = v30;
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v36,
    (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
}


void WarehouseListViewManager__add_callbackFunc(
        WarehouseListViewManager_o *this,
        WarehouseListViewManager_CallbackFunc_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *callbackFunc; // x21
  System_Delegate_o *v6; // x0
  __int64 v7; // x2
  __int64 v8; // x3
  __int64 v9; // x0
  bool v10; // zf
  WarehouseListViewManager_o *v11; // x0
  WarehouseListViewManager_CallbackFunc_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_596E4DA & 1) == 0 )
  {
    sub_2213A60(&WarehouseListViewManager_CallbackFunc_TypeInfo);
    byte_596E4DA = 1;
  }
  callbackFunc = (System_Delegate_o *)this->fields.callbackFunc;
  while ( 1 )
  {
    v6 = System_Delegate__Combine(callbackFunc, (System_Delegate_o *)value, 0);
    if ( v6 )
    {
      if ( (WarehouseListViewManager_CallbackFunc_c *)v6->klass != WarehouseListViewManager_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_224B48C(&this->fields.callbackFunc, v6, callbackFunc);
    v10 = v9 == (_QWORD)callbackFunc;
    callbackFunc = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_221405C(v6, WarehouseListViewManager_CallbackFunc_TypeInfo, v7, v8);
  WarehouseListViewManager__remove_callbackFunc(v11, v12, v13);
}


System_Collections_Generic_List_WarehouseListViewObject__o *WarehouseListViewManager__get_ClippingObjectList(
        WarehouseListViewManager_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x19
  __int64 v4; // x1
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  __int64 v6; // x1
  __int64 v7; // x2
  Il2CppObject *current; // x21
  _BOOL8 v9; // x0
  __int64 v10; // x1
  Il2CppObject *Component_object; // x0
  __int64 v12; // x1
  Il2CppObject *v13; // x21
  ListViewItem_o *Item; // x0
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7
  _BOOL8 v21; // x0
  __int64 v22; // x1
  struct System_Object_array *items; // x8
  _QWORD *v24; // x9
  __int64 size; // x10
  Il2CppClass **v26; // x0
  System_Collections_Generic_List_Enumerator_object__o v28; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v29; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_596E4DF & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_WarehouseListViewObject___);
    sub_2213A60(&Method_System_Collections_Generic_List_WarehouseListViewObject__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_2213A60(&Method_System_Collections_Generic_List_WarehouseListViewObject___ctor__);
    sub_2213A60(&System_Collections_Generic_List_WarehouseListViewObject__TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596E4DF = 1;
  }
  memset(&v29, 0, sizeof(v29));
  v3 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_WarehouseListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_WarehouseListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_2213CDC(0, v4);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v28,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_448473C *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v29 = v28;
  v28.fields._list = 0;
  *(_QWORD *)&v28.fields._index = &v29;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v29,
            (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v29.fields._current;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6, v7);
    v9 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0, 0);
    if ( v9 )
    {
      if ( !current )
        sub_2213CDC(v9, v10);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_WarehouseListViewObject___);
      v13 = Component_object;
      if ( !Component_object )
        sub_2213CDC(0, v12);
      Item = (ListViewItem_o *)WarehouseListViewObject__GetItem((WarehouseListViewObject_o *)Component_object, 0);
      if ( !Item )
        sub_2213CDC(0, 0);
      if ( Item->fields.isTermination )
      {
        v21 = ListViewManager__ClippingItem_50835204((ListViewManager_o *)this, Item, 0);
        if ( v21 )
        {
          if ( !v3
            || (items = v3->fields._items,
                v24 = Method_System_Collections_Generic_List_WarehouseListViewObject__Add__,
                ++v3->fields._version,
                !items) )
          {
            sub_2213CDC(v21, v22);
          }
          size = v3->fields._size;
          if ( (unsigned int)size < LODWORD(items->max_length) )
            goto LABEL_17;
LABEL_21:
          System_Collections_Generic_List_object___AddWithResize(
            v3,
            v13,
            *(const MethodInfo_4483C64 **)(*(_QWORD *)(v24[4] + 192LL) + 112LL));
        }
      }
      else
      {
        if ( !v3
          || (items = v3->fields._items,
              v24 = Method_System_Collections_Generic_List_WarehouseListViewObject__Add__,
              ++v3->fields._version,
              !items) )
        {
          sub_2213CDC(Item, Item);
        }
        size = v3->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
          goto LABEL_21;
LABEL_17:
        v26 = &items->obj.klass + size;
        v3->fields._size = size + 1;
        v26[4] = (Il2CppClass *)v13;
        sub_2213A04((MissionNaviTransitionBoardItem_o *)(v26 + 4), (int32_t)v13, v15, v16, v17, v18, v19, v20);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v29,
    (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_WarehouseListViewObject__o *)v3;
}


System_Collections_Generic_List_WarehouseListViewObject__o *WarehouseListViewManager__get_ObjectList(
        WarehouseListViewManager_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x19
  __int64 v4; // x1
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  __int64 v6; // x1
  __int64 v7; // x2
  Il2CppObject *current; // x20
  _BOOL8 v9; // x0
  __int64 v10; // x1
  Il2CppObject *Component_object; // x0
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  Il2CppObject *v18; // x1
  struct System_Object_array *items; // x8
  _QWORD *v20; // x9
  __int64 size; // x10
  Il2CppClass **v22; // x0
  System_Collections_Generic_List_Enumerator_object__o v24; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v25; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_596E4DE & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_WarehouseListViewObject___);
    sub_2213A60(&Method_System_Collections_Generic_List_WarehouseListViewObject__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_2213A60(&Method_System_Collections_Generic_List_WarehouseListViewObject___ctor__);
    sub_2213A60(&System_Collections_Generic_List_WarehouseListViewObject__TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596E4DE = 1;
  }
  memset(&v25, 0, sizeof(v25));
  v3 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_WarehouseListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_WarehouseListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_2213CDC(0, v4);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v24,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_448473C *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v25 = v24;
  v24.fields._list = 0;
  *(_QWORD *)&v24.fields._index = &v25;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v25,
            (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v25.fields._current;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6, v7);
    v9 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0, 0);
    if ( v9 )
    {
      if ( !current )
        sub_2213CDC(v9, v10);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_WarehouseListViewObject___);
      v18 = Component_object;
      if ( !v3
        || (items = v3->fields._items,
            v20 = Method_System_Collections_Generic_List_WarehouseListViewObject__Add__,
            ++v3->fields._version,
            !items) )
      {
        sub_2213CDC(Component_object, Component_object);
      }
      size = v3->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v3,
          Component_object,
          *(const MethodInfo_4483C64 **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
      }
      else
      {
        v22 = &items->obj.klass + size;
        v3->fields._size = size + 1;
        v22[4] = (Il2CppClass *)v18;
        sub_2213A04((MissionNaviTransitionBoardItem_o *)(v22 + 4), (int32_t)v18, v12, v13, v14, v15, v16, v17);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v25,
    (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_WarehouseListViewObject__o *)v3;
}


void WarehouseListViewManager__remove_callbackFunc(
        WarehouseListViewManager_o *this,
        WarehouseListViewManager_CallbackFunc_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *callbackFunc; // x21
  System_Delegate_o *v6; // x0
  __int64 v7; // x2
  __int64 v8; // x3
  __int64 v9; // x0
  bool v10; // zf
  const MethodInfo *v11; // x0

  if ( (byte_596E4DB & 1) == 0 )
  {
    sub_2213A60(&WarehouseListViewManager_CallbackFunc_TypeInfo);
    byte_596E4DB = 1;
  }
  callbackFunc = (System_Delegate_o *)this->fields.callbackFunc;
  while ( 1 )
  {
    v6 = System_Delegate__Remove(callbackFunc, (System_Delegate_o *)value, 0);
    if ( v6 )
    {
      if ( (WarehouseListViewManager_CallbackFunc_c *)v6->klass != WarehouseListViewManager_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_224B48C(&this->fields.callbackFunc, v6, callbackFunc);
    v10 = v9 == (_QWORD)callbackFunc;
    callbackFunc = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_221405C(v6, WarehouseListViewManager_CallbackFunc_TypeInfo, v7, v8);
  WarehouseListViewManager__DeleteContinueData(v11);
}


void WarehouseListViewManager_CallbackFunc___ctor(
        WarehouseListViewManager_CallbackFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  intptr_t v8; // x8
  int v12; // w22
  Il2CppObject *m_target; // x9
  __int64 v14; // x0

  v8 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v8;
  this->fields.m_target = object;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.m_target,
    (int32_t)object,
    (System_String_o *)method,
    (System_String_o *)a4,
    v4,
    v5,
    v6,
    v7);
  v12 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_2213B38(method) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_2213CF8(0, "Delegate to an instance method cannot have null 'this'.");
      sub_2213BA0(v14, 0);
    }
    goto LABEL_5;
  }
  if ( v12 != 2 )
  {
LABEL_5:
    m_target = this->fields.m_target;
    this->fields.invoke_impl = this->fields.method_ptr;
    this->fields.method_code = (intptr_t)m_target;
    goto LABEL_6;
  }
  this->fields.invoke_impl = (intptr_t)sub_200A5BC;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_200A564;
}


System_IAsyncResult_o *WarehouseListViewManager_CallbackFunc__BeginInvoke(
        WarehouseListViewManager_CallbackFunc_o *this,
        int32_t resultKind,
        WarehouseListViewItem_o *item,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  _QWORD v11[3]; // [xsp+8h] [xbp-58h] BYREF
  int32_t v12; // [xsp+2Ch] [xbp-34h] BYREF

  v12 = resultKind;
  if ( (byte_596E50B & 1) == 0 )
  {
    sub_2213A60(&WarehouseListViewManager_ResultKind_TypeInfo);
    byte_596E50B = 1;
  }
  v11[2] = 0;
  v11[0] = j_il2cpp_value_box_0(WarehouseListViewManager_ResultKind_TypeInfo, &v12);
  v11[1] = item;
  return sub_2213A14(this, v11, callback, object);
}


void WarehouseListViewManager_CallbackFunc__EndInvoke(
        WarehouseListViewManager_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_2213A18(result, 0, method);
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