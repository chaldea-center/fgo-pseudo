void __fastcall WarehouseListViewManager___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  int32_t v2; // w2
  int32_t v3; // w3
  __int64 v4; // x1
  __int64 v5; // x1
  System_String_o *SORT_SAVE_KEY; // x19
  System_String_o *v7; // x0
  System_String_o *v8; // x19
  __int64 v9; // x1
  __int64 v10; // x2
  ListViewSort_o *v11; // x20
  struct WarehouseListViewManager_StaticFields *static_fields; // x0
  int32_t v13; // w2
  int32_t v14; // w3
  System_String_o *v15; // x19
  System_String_o *v16; // x0
  System_String_o *v17; // x19
  __int64 v18; // x1
  __int64 v19; // x2
  ListViewSort_o *v20; // x20
  struct WarehouseListViewManager_StaticFields *v21; // x0
  int32_t v22; // w2
  int32_t v23; // w3
  System_String_o *v24; // x19
  System_String_o *v25; // x0
  System_String_o *v26; // x19
  __int64 v27; // x1
  __int64 v28; // x2
  ListViewSort_o *v29; // x20
  struct WarehouseListViewManager_StaticFields *v30; // x0
  int32_t v31; // w2
  int32_t v32; // w3
  System_String_o *v33; // x19
  System_String_o *v34; // x0
  System_String_o *v35; // x19
  __int64 v36; // x1
  __int64 v37; // x2
  ListViewSort_o *v38; // x20
  struct WarehouseListViewManager_StaticFields *v39; // x0
  int32_t v40; // w2
  int32_t v41; // w3
  int v42; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_49FA498 & 1) == 0 )
  {
    sub_1B640C8(&ListViewSort_TypeInfo, v1);
    sub_1B640C8(&WarehouseListViewManager_TypeInfo, v4);
    sub_1B640C8(&StringLiteral_15527/*"Warehouse"*/, v5);
    byte_49FA498 = 1;
  }
  WarehouseListViewManager_TypeInfo->static_fields->SORT_SAVE_KEY = (struct System_String_o *)StringLiteral_15527/*"Warehouse"*/;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)WarehouseListViewManager_TypeInfo->static_fields,
    StringLiteral_15527/*"Warehouse"*/,
    v2,
    v3);
  SORT_SAVE_KEY = WarehouseListViewManager_TypeInfo->static_fields->SORT_SAVE_KEY;
  v42 = 1;
  v7 = System_Int32__ToString((int32_t)&v42, 0LL);
  v8 = System_String__Concat_61375396(SORT_SAVE_KEY, v7, 0LL);
  v11 = (ListViewSort_o *)sub_1B64314(ListViewSort_TypeInfo, v9, v10);
  ListViewSort___ctor_40426136(v11, v8, 3, 0, 0LL);
  static_fields = WarehouseListViewManager_TypeInfo->static_fields;
  static_fields->servantSortInfo = v11;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->servantSortInfo, (int32_t)v11, v13, v14);
  v15 = WarehouseListViewManager_TypeInfo->static_fields->SORT_SAVE_KEY;
  v42 = 2;
  v16 = System_Int32__ToString((int32_t)&v42, 0LL);
  v17 = System_String__Concat_61375396(v15, v16, 0LL);
  v20 = (ListViewSort_o *)sub_1B64314(ListViewSort_TypeInfo, v18, v19);
  ListViewSort___ctor_40426136(v20, v17, 3, 0, 0LL);
  v21 = WarehouseListViewManager_TypeInfo->static_fields;
  v21->servantEquipSortInfo = v20;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v21->servantEquipSortInfo, (int32_t)v20, v22, v23);
  v24 = WarehouseListViewManager_TypeInfo->static_fields->SORT_SAVE_KEY;
  v42 = 3;
  v25 = System_Int32__ToString((int32_t)&v42, 0LL);
  v26 = System_String__Concat_61375396(v24, v25, 0LL);
  v29 = (ListViewSort_o *)sub_1B64314(ListViewSort_TypeInfo, v27, v28);
  ListViewSort___ctor_40426136(v29, v26, 3, 0, 0LL);
  v30 = WarehouseListViewManager_TypeInfo->static_fields;
  v30->servantWarehouseSortInfo = v29;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v30->servantWarehouseSortInfo, (int32_t)v29, v31, v32);
  v33 = WarehouseListViewManager_TypeInfo->static_fields->SORT_SAVE_KEY;
  v42 = 4;
  v34 = System_Int32__ToString((int32_t)&v42, 0LL);
  v35 = System_String__Concat_61375396(v33, v34, 0LL);
  v38 = (ListViewSort_o *)sub_1B64314(ListViewSort_TypeInfo, v36, v37);
  ListViewSort___ctor_40426136(v38, v35, 3, 0, 0LL);
  v39 = WarehouseListViewManager_TypeInfo->static_fields;
  v39->servantEquipWarehouseSortInfo = v38;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v39->servantEquipWarehouseSortInfo, (int32_t)v38, v40, v41);
}


void __fastcall WarehouseListViewManager___ctor(WarehouseListViewManager_o *this, const MethodInfo *method)
{
  ListViewManager___ctor((ListViewManager_o *)this, 0LL);
}


void __fastcall WarehouseListViewManager__CancelDragEnd(WarehouseListViewManager_o *this, const MethodInfo *method)
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
  *(_OWORD *)&this->fields.dragSelectSum = xmmword_BA3200;
  this->fields.isDragSelect = 1;
  this->fields.dragSelectFriendShipSum = 0;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarehouseListViewManager__CancelDragSelect(
        WarehouseListViewManager_o *this,
        int32_t index,
        const MethodInfo *method)
{
  __int64 v5; // x1
  System_Collections_Generic_List_object__o *itemSortList; // x0
  __int64 methodPtr_low; // x9
  WarehouseListViewManager_o *v8; // x0
  const MethodInfo *v9; // x1

  if ( (byte_49FA494 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, *(_QWORD *)&index);
    sub_1B640C8(&WarehouseListViewItem_TypeInfo, v5);
    byte_49FA494 = 1;
  }
  itemSortList = (System_Collections_Generic_List_object__o *)this->fields.itemSortList;
  if ( !itemSortList
    || (itemSortList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                      itemSortList,
                                                                      index,
                                                                      (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__)) == 0LL )
  {
    sub_1B64324(itemSortList);
  }
  methodPtr_low = LOBYTE(WarehouseListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(itemSortList->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
    && (WarehouseListViewItem_c *)itemSortList->klass->_2.typeHierarchy[methodPtr_low - 1] == WarehouseListViewItem_TypeInfo )
  {
    HIDWORD(itemSortList[5].fields._syncRoot) = -1;
  }
  else
  {
    sub_1B645E4(itemSortList);
    WarehouseListViewManager__GetModeKind(v8, v9);
  }
}


void __fastcall WarehouseListViewManager__ChangeIconScale(WarehouseListViewManager_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  unsigned int scaleType; // w8
  struct ListViewItemSeed_o *smallSizeSeed; // x1
  WarehouseListViewManager_o *v12; // x0
  int v13; // w8
  struct ListViewItemSeed_o **p_seed; // x0
  ListViewSort_o *sort; // x0
  _BOOL8 v16; // x0
  ListViewItem_o *current; // x20
  __int64 methodPtr_low; // x9
  UnityEngine_Object_o *monitor; // x21
  ListViewObject_o *viewObject; // x0
  const MethodInfo *v21; // x2
  System_Collections_Generic_List_Enumerator_object__o v22; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v23; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_49FA48C & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__, method);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v6);
    sub_1B640C8(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v7);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v8);
    sub_1B640C8(&WarehouseListViewItem_TypeInfo, v9);
    byte_49FA48C = 1;
  }
  memset(&v23, 0, sizeof(v23));
  scaleType = this->fields.scaleType;
  if ( scaleType < 2 )
  {
    smallSizeSeed = this->fields.smallSizeSeed;
    v12 = this;
    v13 = 2;
  }
  else if ( scaleType == 2 )
  {
    smallSizeSeed = this->fields.extremelySmallSizeSeed;
    v12 = this;
    v13 = 3;
  }
  else
  {
    if ( scaleType != 3 )
      goto LABEL_10;
    smallSizeSeed = this->fields.normalSizeSeed;
    v12 = this;
    v13 = 1;
  }
  v12->fields.seed = smallSizeSeed;
  p_seed = &v12->fields.seed;
  *((_DWORD *)p_seed + 84) = v13;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)p_seed, (int32_t)smallSizeSeed, v2, v3);
LABEL_10:
  sort = this->fields.sort;
  if ( !sort )
    goto LABEL_28;
  sort->fields.iconScaleKind = this->fields.scaleType;
  ListViewSort__Save(sort, 0LL);
  sort = (ListViewSort_o *)this->fields.itemList;
  if ( !sort )
    goto LABEL_28;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v22,
    (System_Collections_Generic_List_object__o *)sort,
    (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  v23 = v22;
  while ( 1 )
  {
    v16 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v23,
            (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    if ( !v16 )
      break;
    current = (ListViewItem_o *)v23.fields._current;
    if ( !v23.fields._current )
      goto LABEL_26;
    methodPtr_low = LOBYTE(WarehouseListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(v23.fields._current->klass->vtable[0].methodPtr) < (unsigned int)methodPtr_low
      || (WarehouseListViewItem_c *)v23.fields._current->klass->_2.typeHierarchy[methodPtr_low - 1] != WarehouseListViewItem_TypeInfo )
    {
      sub_1B645E4(v23.fields._current);
LABEL_26:
      sub_1B64324(v16);
    }
    monitor = (UnityEngine_Object_o *)v23.fields._current[6].monitor;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Equality(monitor, 0LL, 0LL) )
    {
      viewObject = current->fields.viewObject;
      if ( !viewObject )
        sub_1B64324(0LL);
      ListViewObject__SetItemSeed(viewObject, current, this->fields.seed, 0LL);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v23,
    (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
  WarehouseListViewManager__SetMode_35529392(this, 2, v21);
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
  sort = (ListViewSort_o *)this->fields.scrollBar;
  if ( !sort
    || (sort = (ListViewSort_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)sort, 0LL)) == 0LL )
  {
LABEL_28:
    sub_1B64324(sort);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)sort, 1, 0LL);
}


void __fastcall WarehouseListViewManager__ChangeSellEnableRestCnt(
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
    if ( !item || (v5 = this, (this = (WarehouseListViewManager_o *)item->fields.servantEntity) == 0LL) )
      sub_1B64324(this);
    if ( ServantEntity__get_IsOrganization((ServantEntity_o *)this, 0LL) && !item->fields.attribute )
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


void __fastcall WarehouseListViewManager__ChangeSortKindDisp(
        WarehouseListViewManager_o *this,
        const MethodInfo *method)
{
  ((void (__fastcall *)(WarehouseListViewManager_o *, Il2CppMethodPointer))this->klass->vtable._5_SetSortButtonImage.method)(
    this,
    this->klass->vtable._6_GetDragRoot.methodPtr);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarehouseListViewManager__CreateList(
        WarehouseListViewManager_o *this,
        int32_t kind,
        EventUpValSetupInfo_o *setupInfo,
        const MethodInfo *method)
{
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
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  int64_t Instance; // x0
  Il2CppObject *MasterData_object; // x24
  Il2CppObject *v26; // x25
  int32_t v27; // w2
  int32_t v28; // w3
  System_String_o *v29; // x22
  WarehouseListViewManager_c *v30; // x0
  struct ListViewSort_o *servantSortInfo; // x1
  __int64 *v32; // x8
  int64_t v33; // x23
  struct ListViewSort_o *v34; // x8
  WarehouseListViewManager_c *v35; // x0
  struct ListViewSort_o *servantEquipSortInfo; // x1
  WarehouseListViewManager_c *v37; // x0
  struct ListViewSort_o *servantWarehouseSortInfo; // x1
  WarehouseListViewManager_c *v39; // x0
  struct ListViewSort_o *servantEquipWarehouseSortInfo; // x1
  _BOOL4 isQuestStart; // w8
  int v42; // w9
  struct ListViewSort_BonusFilterInfo_array *AlignedBonusFilter; // x0
  int32_t v44; // w2
  int32_t v45; // w3
  struct ListViewSort_o *sort; // x20
  struct ListViewSort_BonusFilterInfo_array *v47; // x0
  int32_t v48; // w2
  int32_t v49; // w3
  struct ListViewSort_o *v50; // x8
  struct ListViewSort_o *v51; // x8
  int32_t v52; // w2
  int32_t v53; // w3
  struct ListViewSort_o *v54; // x8
  unsigned int iconScaleKind; // w8
  struct ListViewItemSeed_o *normalSizeSeed; // x1
  Il2CppObject *v57; // x24
  __int64 v58; // x1
  int v59; // w8
  __int64 v60; // x25
  int64_t v61; // x20
  __int64 v62; // x8
  __int128 v63; // q0
  __int64 v64; // x2
  int64_t v65; // x24
  __int64 v66; // x23
  System_Int64_array *v67; // x28
  System_Int64_array *v68; // x29
  UserServantEntity_o *v69; // x22
  int64_t v70; // x27
  WarehouseListViewItem_o *v71; // x26
  int32_t v72; // w2
  int32_t v73; // w3
  __int64 v74; // x8
  _QWORD *v75; // x9
  __int64 v76; // x10
  __int64 v77; // x8
  const MethodInfo *v78; // x3
  UILabel_o *emptyMessageLabel; // x20
  const MethodInfo *v80; // x1
  const MethodInfo *v81; // [xsp+0h] [xbp-E0h]
  System_String_o *v82; // [xsp+8h] [xbp-D8h]
  System_Int64_array *recoverySvtList; // [xsp+10h] [xbp-D0h]
  int64_t v84; // [xsp+18h] [xbp-C8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v85; // [xsp+20h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v86; // [xsp+40h] [xbp-A0h]
  int32_t eventId; // [xsp+6Ch] [xbp-74h] BYREF
  System_Int64_array *equipIdList; // [xsp+70h] [xbp-70h] BYREF
  System_Int64_array *svtIdList; // [xsp+78h] [xbp-68h] BYREF

  if ( (byte_49FA46F & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_EventMaster___, *(_QWORD *)&kind);
    sub_1B640C8(&Method_DataManager_GetMasterData_UserDeckMaster___, v7);
    sub_1B640C8(&Method_DataManager_GetMasterData_UserEventServantFatigueMaster___, v8);
    sub_1B640C8(&Method_DataManager_GetMasterData_UserServantMaster___, v9);
    sub_1B640C8(&Method_DataManager_GetMasterData_UserServantStorageMaster___, v10);
    sub_1B640C8(&Method_System_Collections_Generic_List_ListViewItem__Add__, v11);
    sub_1B640C8(&LocalizationManager_TypeInfo, v12);
    sub_1B640C8(&NetworkManager_TypeInfo, v13);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v14);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v15);
    sub_1B640C8(&WarehouseListViewItem_TypeInfo, v16);
    sub_1B640C8(&WarehouseListViewManager_TypeInfo, v17);
    sub_1B640C8(&StringLiteral_11520/*"SERVANT_EQUIP_EMPTY"*/, v18);
    sub_1B640C8(&StringLiteral_11515/*"SERVANT_EMPTY"*/, v19);
    sub_1B640C8(&StringLiteral_11548/*"SERVANT_EQUIP_WAREHOUSE_EMPTY"*/, v20);
    sub_1B640C8(&StringLiteral_11717/*"SERVANT_SORT_FILTER_RESULT_EMPTY"*/, v21);
    sub_1B640C8(&StringLiteral_11896/*"SERVANT_WAREHOUSE_EMPTY"*/, v22);
    sub_1B640C8(&StringLiteral_1/*""*/, v23);
    byte_49FA46F = 1;
  }
  equipIdList = 0LL;
  svtIdList = 0LL;
  eventId = 0;
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_79;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_UserServantMaster___);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_79;
  v26 = DataManager__GetMasterData_object_(
          (DataManager_o *)Instance,
          (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_UserServantStorageMaster___);
  Instance = (int64_t)UserGameMaster__getSelfUserGame(0LL);
  v29 = (System_String_o *)StringLiteral_1/*""*/;
  v84 = Instance;
  this->fields.kind = kind;
  switch ( kind )
  {
    case 0:
      v30 = WarehouseListViewManager_TypeInfo;
      if ( !WarehouseListViewManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(WarehouseListViewManager_TypeInfo);
        v30 = WarehouseListViewManager_TypeInfo;
      }
      servantSortInfo = v30->static_fields->servantSortInfo;
      this->fields.sort = servantSortInfo;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.sort, (int32_t)servantSortInfo, v27, v28);
      Instance = (int64_t)this->fields.sort;
      if ( !Instance )
        goto LABEL_79;
      *(_DWORD *)(Instance + 128) = 0;
      ListViewSort__Load((ListViewSort_o *)Instance, 0LL);
      if ( !MasterData_object )
        goto LABEL_79;
      Instance = (int64_t)UserServantMaster__getKeepServantList((UserServantMaster_o *)MasterData_object, 0LL);
      v32 = &StringLiteral_11515/*"SERVANT_EMPTY"*/;
      break;
    case 1:
      v35 = WarehouseListViewManager_TypeInfo;
      if ( !WarehouseListViewManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(WarehouseListViewManager_TypeInfo);
        v35 = WarehouseListViewManager_TypeInfo;
      }
      servantEquipSortInfo = v35->static_fields->servantEquipSortInfo;
      this->fields.sort = servantEquipSortInfo;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.sort, (int32_t)servantEquipSortInfo, v27, v28);
      Instance = (int64_t)this->fields.sort;
      if ( !Instance )
        goto LABEL_79;
      *(_DWORD *)(Instance + 128) = 1;
      ListViewSort__Load((ListViewSort_o *)Instance, 0LL);
      if ( !MasterData_object )
        goto LABEL_79;
      Instance = (int64_t)UserServantMaster__getServantEquipList((UserServantMaster_o *)MasterData_object, 0LL);
      v32 = &StringLiteral_11520/*"SERVANT_EQUIP_EMPTY"*/;
      break;
    case 2:
      v37 = WarehouseListViewManager_TypeInfo;
      if ( !WarehouseListViewManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(WarehouseListViewManager_TypeInfo);
        v37 = WarehouseListViewManager_TypeInfo;
      }
      servantWarehouseSortInfo = v37->static_fields->servantWarehouseSortInfo;
      this->fields.sort = servantWarehouseSortInfo;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.sort, (int32_t)servantWarehouseSortInfo, v27, v28);
      Instance = (int64_t)this->fields.sort;
      if ( !Instance )
        goto LABEL_79;
      *(_DWORD *)(Instance + 128) = 0;
      ListViewSort__Load((ListViewSort_o *)Instance, 0LL);
      if ( !v26 )
        goto LABEL_79;
      Instance = (int64_t)UserServantStorageMaster__getKeepServantList((UserServantStorageMaster_o *)v26, 0LL);
      v32 = &StringLiteral_11896/*"SERVANT_WAREHOUSE_EMPTY"*/;
      break;
    case 3:
      v39 = WarehouseListViewManager_TypeInfo;
      if ( !WarehouseListViewManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(WarehouseListViewManager_TypeInfo);
        v39 = WarehouseListViewManager_TypeInfo;
      }
      servantEquipWarehouseSortInfo = v39->static_fields->servantEquipWarehouseSortInfo;
      this->fields.sort = servantEquipWarehouseSortInfo;
      sub_1B6406C(
        (ServantStatusBattleListViewItem_o *)&this->fields.sort,
        (int32_t)servantEquipWarehouseSortInfo,
        v27,
        v28);
      Instance = (int64_t)this->fields.sort;
      if ( !Instance )
        goto LABEL_79;
      *(_DWORD *)(Instance + 128) = 1;
      ListViewSort__Load((ListViewSort_o *)Instance, 0LL);
      if ( !v26 )
        goto LABEL_79;
      Instance = (int64_t)UserServantStorageMaster__getServantEquipList((UserServantStorageMaster_o *)v26, 0LL);
      v32 = &StringLiteral_11548/*"SERVANT_EQUIP_WAREHOUSE_EMPTY"*/;
      break;
    default:
      v33 = 0LL;
      if ( !setupInfo )
        goto LABEL_12;
      goto LABEL_30;
  }
  v29 = (System_String_o *)*v32;
  v33 = Instance;
  if ( setupInfo )
  {
LABEL_30:
    isQuestStart = setupInfo->fields.isQuestStart;
    v42 = this->fields.kind | 2;
    this->fields.isQuestStart = isQuestStart;
    if ( v42 == 2 )
    {
      Instance = (int64_t)this->fields.sort;
      if ( !Instance )
        goto LABEL_79;
      AlignedBonusFilter = ListViewSort__GetAlignedBonusFilter(
                             (ListViewSort_o *)Instance,
                             0LL,
                             setupInfo->fields.servantFilterEventCampaignIds,
                             setupInfo->fields.servantFilterEventIds,
                             0LL,
                             setupInfo->fields.servantFilterIds,
                             isQuestStart,
                             0LL);
      this->fields.alignedBonusFilterInfos = AlignedBonusFilter;
      sub_1B6406C(
        (ServantStatusBattleListViewItem_o *)&this->fields.alignedBonusFilterInfos,
        (int32_t)AlignedBonusFilter,
        v44,
        v45);
      sort = this->fields.sort;
      Instance = BasicHelper__IsNullOrEmpty(
                   (System_Collections_ICollection_o *)this->fields.alignedBonusFilterInfos,
                   0LL);
      if ( !sort )
        goto LABEL_79;
      sort->fields.isBonusKind = (Instance & 1) == 0;
    }
    else
    {
      Instance = (int64_t)this->fields.sort;
      if ( !Instance )
        goto LABEL_79;
      v47 = ListViewSort__GetAlignedBonusFilter(
              (ListViewSort_o *)Instance,
              0LL,
              setupInfo->fields.servantEquipFilterEventCampaignIds,
              setupInfo->fields.servantEquipFilterEventIds,
              0LL,
              0LL,
              isQuestStart,
              0LL);
      this->fields.alignedBonusFilterInfos = v47;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.alignedBonusFilterInfos, (int32_t)v47, v48, v49);
      v50 = this->fields.sort;
      if ( !v50 )
        goto LABEL_79;
      v50->fields.isBonusKind = 1;
    }
  }
  else
  {
LABEL_12:
    v34 = this->fields.sort;
    this->fields.isQuestStart = 1;
    if ( !v34 )
      goto LABEL_79;
    v34->fields.isBonusKind = 0;
    this->fields.alignedBonusFilterInfos = 0LL;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.alignedBonusFilterInfos, 0, v27, v28);
  }
  Instance = (int64_t)this->fields.bonusFilterKindButton;
  if ( !Instance )
    goto LABEL_79;
  Instance = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  v51 = this->fields.sort;
  if ( !v51 )
    goto LABEL_79;
  if ( !Instance )
    goto LABEL_79;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, v51->fields.isBonusKind, 0LL);
  v54 = this->fields.sort;
  if ( !v54 )
    goto LABEL_79;
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
      goto LABEL_48;
    normalSizeSeed = this->fields.extremelySmallSizeSeed;
  }
  this->fields.seed = normalSizeSeed;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.seed, (int32_t)normalSizeSeed, v52, v53);
LABEL_48:
  *(_QWORD *)&this->fields.sellEnableRestCnt = 0LL;
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
  *(_OWORD *)&this->fields.dragSelectSum = xmmword_BA3200;
  this->fields.isDragSelect = 1;
  this->fields.dragSelectFriendShipSum = 0;
  if ( !v33 )
    goto LABEL_75;
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_79;
  v57 = DataManager__GetMasterData_object_(
          (DataManager_o *)Instance,
          (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_UserDeckMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Instance = NetworkManager__get_UserId(0LL);
  if ( !v57
    || (UserDeckMaster__getPartyList((UserDeckMaster_o *)v57, &svtIdList, &equipIdList, Instance, 0LL),
        (Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0)
    || (Instance = (int64_t)DataManager__GetMasterData_object_(
                              (DataManager_o *)Instance,
                              (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_EventMaster___)) == 0 )
  {
LABEL_79:
    sub_1B64324(Instance);
  }
  Instance = EventMaster__IsEnableFatigueEvent((EventMaster_o *)Instance, &eventId, 0LL);
  recoverySvtList = 0LL;
  if ( (Instance & 1) != 0 )
  {
    Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_79;
    Instance = (int64_t)DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_UserEventServantFatigueMaster___);
    if ( !Instance )
      goto LABEL_79;
    Instance = (int64_t)UserEventServantFatigueMaster__GetRecoverySvtIdList(
                          (UserEventServantFatigueMaster_o *)Instance,
                          eventId,
                          0LL);
    recoverySvtList = (System_Int64_array *)Instance;
  }
  v59 = *(_DWORD *)(v33 + 24);
  if ( v59 >= 1 )
  {
    v60 = 0LL;
    v61 = v33 + 32;
    v82 = v29;
    do
    {
      if ( (unsigned int)v60 >= v59 )
        goto LABEL_80;
      v62 = *(_QWORD *)(v61 + 8 * v60);
      if ( !v62 )
        goto LABEL_79;
      v63 = *(_OWORD *)(v62 + 32);
      *(_OWORD *)&v86.fields.currentCryptoKey = *(_OWORD *)(v62 + 16);
      *(_OWORD *)&v86.fields.fakeValue = v63;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v85 = v86;
      Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46175132(&v85, 0LL);
      if ( (unsigned int)v60 >= *(_DWORD *)(v33 + 24) )
LABEL_80:
        sub_1B6432C(Instance, v58);
      if ( !v84 )
        goto LABEL_79;
      v65 = v33;
      v66 = *(_QWORD *)(v84 + 112);
      v67 = equipIdList;
      v68 = svtIdList;
      v69 = *(UserServantEntity_o **)(v61 + 8 * v60);
      v70 = Instance;
      v71 = (WarehouseListViewItem_o *)sub_1B64314(WarehouseListViewItem_TypeInfo, v58, v64);
      WarehouseListViewItem___ctor(v71, v60, v69, setupInfo, v68, v67, recoverySvtList, v70 == v66, v81);
      Instance = (int64_t)this->fields.itemList;
      if ( !Instance )
        goto LABEL_79;
      v74 = *(_QWORD *)(Instance + 16);
      v75 = Method_System_Collections_Generic_List_ListViewItem__Add__;
      ++*(_DWORD *)(Instance + 28);
      if ( !v74 )
        goto LABEL_79;
      v76 = *(int *)(Instance + 24);
      v33 = v65;
      if ( (unsigned int)v76 >= *(_DWORD *)(v74 + 24) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)Instance,
          (Il2CppObject *)v71,
          *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v75[4] + 192LL) + 112LL));
      }
      else
      {
        v77 = v74 + 8 * v76;
        *(_DWORD *)(Instance + 24) = v76 + 1;
        *(_QWORD *)(v77 + 32) = v71;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)(v77 + 32), (int32_t)v71, v72, v73);
      }
      WarehouseListViewManager__ChangeSellEnableRestCnt(this, 1, v71, v78);
      v59 = *(_DWORD *)(v65 + 24);
      ++v60;
    }
    while ( (int)v60 < v59 );
    v29 = v82;
    if ( (int)v60 > 0 )
      v29 = (System_String_o *)StringLiteral_11717/*"SERVANT_SORT_FILTER_RESULT_EMPTY"*/;
  }
LABEL_75:
  emptyMessageLabel = this->fields.emptyMessageLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  Instance = (int64_t)LocalizationManager__Get(v29, 0LL);
  if ( !emptyMessageLabel )
    goto LABEL_79;
  UILabel__set_text(emptyMessageLabel, (System_String_o *)Instance, 0LL);
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
  WarehouseListViewManager__SetFilterButtonImage(this, v80);
  ListViewManager__CheckScroll((ListViewManager_o *)this, this->fields.scaleType, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarehouseListViewManager__DecideDragSelect(
        WarehouseListViewManager_o *this,
        int32_t index,
        const MethodInfo *method)
{
  __int64 v5; // x1
  System_Collections_Generic_List_object__o *itemSortList; // x0
  WarehouseListViewItem_o *v7; // x20
  __int64 methodPtr_low; // x9
  _BOOL4 isDragSelect; // w21
  const MethodInfo *v10; // x2
  const MethodInfo *v11; // x3
  const MethodInfo *v12; // x3
  struct WarehouseListManager_o *parentManager; // x8
  struct WarehouseListViewManager_o *baseListViewManager; // x9
  int32_t selectSum; // w9
  WarehouseListViewManager_o *v16; // x0
  bool v17; // w1
  struct WarehouseListManager_o *v18; // x8
  struct WarehouseListViewManager_o *v19; // x9
  WarehouseListViewManager_o *v20; // x0
  const MethodInfo *v21; // x1
  int32_t friendShipSum[2]; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_49FA493 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, *(_QWORD *)&index);
    sub_1B640C8(&WarehouseListViewItem_TypeInfo, v5);
    byte_49FA493 = 1;
  }
  *(_QWORD *)friendShipSum = 0LL;
  itemSortList = (System_Collections_Generic_List_object__o *)this->fields.itemSortList;
  if ( !itemSortList )
    goto LABEL_24;
  itemSortList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                itemSortList,
                                                                index,
                                                                (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
  if ( !itemSortList )
    goto LABEL_24;
  v7 = (WarehouseListViewItem_o *)itemSortList;
  methodPtr_low = LOBYTE(WarehouseListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(itemSortList->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
    && (WarehouseListViewItem_c *)itemSortList->klass->_2.typeHierarchy[methodPtr_low - 1] == WarehouseListViewItem_TypeInfo )
  {
    if ( SHIDWORD(itemSortList[5].fields._syncRoot) >= 1 )
    {
      isDragSelect = this->fields.isDragSelect;
      itemSortList = (System_Collections_Generic_List_object__o *)ListViewItem__get_IsSelect(
                                                                    (ListViewItem_o *)itemSortList,
                                                                    0LL);
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
              v11);
            parentManager = this->fields.parentManager;
            if ( parentManager )
            {
              if ( friendShipSum[1] >= parentManager->fields.sendMax && !v7->fields.isFriendShipSvtEq )
                goto LABEL_23;
              v7->fields.selectNum = parentManager->fields.totalSum;
              ++this->fields.selectSum;
              baseListViewManager = parentManager->fields.baseListViewManager;
              if ( baseListViewManager )
              {
                selectSum = baseListViewManager->fields.selectSum;
                v16 = this;
                v17 = 0;
LABEL_22:
                parentManager->fields.totalSum = selectSum;
                WarehouseListViewManager__ChangeSellEnableRestCnt(v16, v17, v7, v12);
                goto LABEL_23;
              }
            }
          }
          goto LABEL_24;
        }
      }
      else if ( ((unsigned __int8)itemSortList & 1) != 0 )
      {
        v18 = this->fields.parentManager;
        if ( v18 )
        {
          itemSortList = (System_Collections_Generic_List_object__o *)v18->fields.baseListViewManager;
          if ( itemSortList )
          {
            WarehouseListViewManager__DecrementNumber(
              (WarehouseListViewManager_o *)itemSortList,
              v7->fields.selectNum,
              v10);
            ListViewItem__set_IsSelect((ListViewItem_o *)v7, 0, 0LL);
            parentManager = this->fields.parentManager;
            --this->fields.selectSum;
            if ( parentManager )
            {
              v19 = parentManager->fields.baseListViewManager;
              if ( v19 )
              {
                selectSum = v19->fields.selectSum;
                v17 = 1;
                v16 = this;
                goto LABEL_22;
              }
            }
          }
        }
LABEL_24:
        sub_1B64324(itemSortList);
      }
    }
LABEL_23:
    v7->fields.dragSelectNum = -1;
    return;
  }
  sub_1B645E4(itemSortList);
  WarehouseListViewManager__CancelDragEnd(v20, v21);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarehouseListViewManager__DecrementNumber(
        WarehouseListViewManager_o *this,
        int32_t selectNum,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x0
  _BOOL8 v9; // x0
  int32_t klass; // w9
  System_Collections_Generic_List_Enumerator_object__o v11; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_49FA480 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__, *(_QWORD *)&selectNum);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v6);
    sub_1B640C8(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v7);
    byte_49FA480 = 1;
  }
  memset(&v11, 0, sizeof(v11));
  itemList = this->fields.itemList;
  if ( !itemList )
    sub_1B64324(0LL);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v11,
    (System_Collections_Generic_List_object__o *)itemList,
    (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  while ( 1 )
  {
    v9 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v11,
           (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    if ( !v9 )
      break;
    if ( !v11.fields._current )
      sub_1B64324(v9);
    klass = (int32_t)v11.fields._current[1].klass;
    if ( klass > selectNum )
      LODWORD(v11.fields._current[1].klass) = klass - 1;
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v11,
    (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
}


void __fastcall WarehouseListViewManager__DeleteContinueData(const MethodInfo *method)
{
  __int64 v1; // x1
  WarehouseListViewManager_c *v2; // x0
  ListViewSort_o *servantSortInfo; // x0

  if ( (byte_49FA46B & 1) == 0 )
  {
    sub_1B640C8(&WarehouseListViewManager_TypeInfo, v1);
    byte_49FA46B = 1;
  }
  v2 = WarehouseListViewManager_TypeInfo;
  if ( !WarehouseListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarehouseListViewManager_TypeInfo);
    v2 = WarehouseListViewManager_TypeInfo;
  }
  servantSortInfo = v2->static_fields->servantSortInfo;
  if ( !servantSortInfo
    || (ListViewSort__DeleteContinueData(servantSortInfo, 0LL),
        (servantSortInfo = WarehouseListViewManager_TypeInfo->static_fields->servantEquipSortInfo) == 0LL)
    || (ListViewSort__DeleteContinueData(servantSortInfo, 0LL),
        (servantSortInfo = WarehouseListViewManager_TypeInfo->static_fields->servantWarehouseSortInfo) == 0LL)
    || (ListViewSort__DeleteContinueData(servantSortInfo, 0LL),
        (servantSortInfo = WarehouseListViewManager_TypeInfo->static_fields->servantEquipWarehouseSortInfo) == 0LL) )
  {
    sub_1B64324(servantSortInfo);
  }
  ListViewSort__DeleteContinueData(servantSortInfo, 0LL);
}


void __fastcall WarehouseListViewManager__DestroyList(WarehouseListViewManager_o *this, const MethodInfo *method)
{
  WarehouseListViewManager_o *v2; // x0
  const MethodInfo *v3; // x1

  ListViewManager__DestroyList((ListViewManager_o *)this, 0LL);
  WarehouseListViewManager__SaveSortInfo(v2, v3);
}


void __fastcall WarehouseListViewManager__EndCloseSelectFilterKind(
        WarehouseListViewManager_o *this,
        const MethodInfo *method)
{
  ;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarehouseListViewManager__EndSelectFilterKind(
        WarehouseListViewManager_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  const MethodInfo *v7; // x1
  Il2CppObject *Instance; // x20
  __int64 v9; // x1
  __int64 v10; // x2
  System_Action_o *v11; // x21
  __int64 v12; // x0

  if ( (byte_49FA487 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, isDecide);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    sub_1B640C8(&Method_WarehouseListViewManager_EndCloseSelectFilterKind__, v6);
    byte_49FA487 = 1;
  }
  if ( isDecide )
  {
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
    WarehouseListViewManager__SetFilterButtonImage(this, v7);
    ListViewManager__CheckScroll((ListViewManager_o *)this, this->fields.scaleType, 0LL);
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v11 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v9, v10);
  System_Action___ctor(v11, (Il2CppObject *)this, Method_WarehouseListViewManager_EndCloseSelectFilterKind__, 0LL);
  if ( !Instance )
    sub_1B64324(v12);
  CommonUI__CloseServantFilterSelectMenu((CommonUI_o *)Instance, v11, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarehouseListViewManager__EndSelectSortKind(
        WarehouseListViewManager_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0

  if ( (byte_49FA485 & 1) == 0 )
  {
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, isDecide);
    byte_49FA485 = 1;
  }
  if ( isDecide )
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1B64324(0LL);
  CommonUI__CloseServantSortSelectMenu((CommonUI_o *)Instance, 0LL, 0LL);
}


// local variable allocation has failed, the output may be wrong!
int64_t __fastcall WarehouseListViewManager__GetAmountSortValue(
        WarehouseListViewManager_o *this,
        int32_t svtId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  System_Collections_Generic_List_object__o *itemList; // x0
  int size; // w23
  int32_t v9; // w22
  int64_t v10; // x21
  System_Collections_Generic_List_object__c *klass; // x9
  __int64 methodPtr_low; // x10
  System_Collections_Generic_List_object__o *v13; // x8

  if ( (byte_49FA48A & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, *(_QWORD *)&svtId);
    sub_1B640C8(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v5);
    sub_1B640C8(&WarehouseListViewItem_TypeInfo, v6);
    byte_49FA48A = 1;
  }
  itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
  if ( !itemList )
    goto LABEL_16;
  size = itemList->fields._size;
  if ( size >= 1 )
  {
    v9 = 0;
    v10 = 0LL;
    do
    {
      itemList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                itemList,
                                                                v9,
                                                                (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
      if ( !itemList )
        break;
      klass = itemList->klass;
      methodPtr_low = LOBYTE(WarehouseListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(itemList->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
        || (WarehouseListViewItem_c *)klass->_2.typeHierarchy[methodPtr_low - 1] != WarehouseListViewItem_TypeInfo )
      {
        break;
      }
      ++v9;
      if ( (WarehouseListViewItem_c *)klass->_2.typeHierarchy[methodPtr_low - 1] == WarehouseListViewItem_TypeInfo )
        v13 = itemList;
      else
        v13 = 0LL;
      if ( LODWORD(v13[3].monitor) == svtId )
        ++v10;
      if ( size == v9 )
        return v10;
      itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
    }
    while ( itemList );
LABEL_16:
    sub_1B64324(itemList);
  }
  return 0LL;
}


bool __fastcall WarehouseListViewManager__GetDragSelect(WarehouseListViewManager_o *this, const MethodInfo *method)
{
  return this->fields.isDragSelect;
}


// local variable allocation has failed, the output may be wrong!
WarehouseListViewItem_o *__fastcall WarehouseListViewManager__GetItem(
        WarehouseListViewManager_o *this,
        int32_t index,
        const MethodInfo *method)
{
  __int64 v5; // x1
  WarehouseListViewItem_o *result; // x0
  __int64 methodPtr_low; // x10

  if ( (byte_49FA496 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, *(_QWORD *)&index);
    sub_1B640C8(&WarehouseListViewItem_TypeInfo, v5);
    byte_49FA496 = 1;
  }
  result = (WarehouseListViewItem_o *)this->fields.itemList;
  if ( result )
  {
    result = (WarehouseListViewItem_o *)System_Collections_Generic_List_object___get_Item(
                                          (System_Collections_Generic_List_object__o *)result,
                                          index,
                                          (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    if ( result )
    {
      methodPtr_low = LOBYTE(WarehouseListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(result->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low )
      {
        if ( (WarehouseListViewItem_c *)result->klass->_2.typeHierarchy[methodPtr_low - 1] != WarehouseListViewItem_TypeInfo )
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


int32_t __fastcall WarehouseListViewManager__GetModeKind(WarehouseListViewManager_o *this, const MethodInfo *method)
{
  struct WarehouseListMenu_o *warehouseListMenu; // x8

  warehouseListMenu = this->fields.warehouseListMenu;
  if ( !warehouseListMenu )
    sub_1B64324(this);
  return warehouseListMenu->fields.modeKind;
}


System_String_o *__fastcall WarehouseListViewManager__GetScaleButtonSpriteName(
        WarehouseListViewManager_o *this,
        const MethodInfo *method)
{
  ListViewSort_o *sort; // x0

  sort = this->fields.sort;
  if ( !sort )
    sub_1B64324(0LL);
  return ListViewSort__GetScaleKindSpriteName(sort, this->fields.scaleType, 0LL);
}


void __fastcall WarehouseListViewManager__GetSelectItemNum(
        WarehouseListViewManager_o *this,
        int32_t *normalSum,
        int32_t *friendShipSum,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x0
  _BOOL8 v12; // x0
  Il2CppObject *current; // x21
  __int64 methodPtr_low; // x9
  int32_t *v15; // x8
  System_Collections_Generic_List_Enumerator_object__o v16; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v17; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_49FA495 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__, normalSum);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v8);
    sub_1B640C8(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v9);
    sub_1B640C8(&WarehouseListViewItem_TypeInfo, v10);
    byte_49FA495 = 1;
  }
  memset(&v17, 0, sizeof(v17));
  *normalSum = 0;
  *friendShipSum = 0;
  itemList = this->fields.itemList;
  if ( !itemList )
    sub_1B64324(0LL);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v16,
    (System_Collections_Generic_List_object__o *)itemList,
    (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  v17 = v16;
  while ( 1 )
  {
    v12 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v17,
            (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    if ( !v12 )
      break;
    current = v17.fields._current;
    if ( !v17.fields._current )
      goto LABEL_16;
    methodPtr_low = LOBYTE(WarehouseListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(v17.fields._current->klass->vtable[0].methodPtr) < (unsigned int)methodPtr_low
      || (WarehouseListViewItem_c *)v17.fields._current->klass->_2.typeHierarchy[methodPtr_low - 1] != WarehouseListViewItem_TypeInfo )
    {
      sub_1B645E4(v17.fields._current);
LABEL_16:
      sub_1B64324(v12);
    }
    if ( ListViewItem__get_IsSelect((ListViewItem_o *)v17.fields._current, 0LL) )
    {
      if ( BYTE6(current[10].klass) )
        v15 = friendShipSum;
      else
        v15 = normalSum;
      ++*v15;
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v17,
    (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
}


void __fastcall WarehouseListViewManager__GetSelectList(
        WarehouseListViewManager_o *this,
        System_Collections_Generic_List_long__o *list,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x0
  _BOOL8 v11; // x0
  Il2CppObject *current; // x20
  __int64 methodPtr_low; // x9
  const MethodInfo *v14; // x1
  int64_t UserSvtId; // x0
  struct System_Int64_array *items; // x8
  _QWORD *v17; // x9
  __int64 size; // x10
  System_Collections_Generic_List_Enumerator_object__o v19; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v20; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_49FA47B & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__, list);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v6);
    sub_1B640C8(&Method_System_Collections_Generic_List_long__Add__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v8);
    sub_1B640C8(&WarehouseListViewItem_TypeInfo, v9);
    byte_49FA47B = 1;
  }
  memset(&v20, 0, sizeof(v20));
  itemList = this->fields.itemList;
  if ( !itemList )
    sub_1B64324(0LL);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v19,
    (System_Collections_Generic_List_object__o *)itemList,
    (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  v20 = v19;
  while ( 1 )
  {
    v11 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v20,
            (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    if ( !v11 )
      break;
    current = v20.fields._current;
    if ( !v20.fields._current )
      goto LABEL_17;
    methodPtr_low = LOBYTE(WarehouseListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(v20.fields._current->klass->vtable[0].methodPtr) < (unsigned int)methodPtr_low
      || (WarehouseListViewItem_c *)v20.fields._current->klass->_2.typeHierarchy[methodPtr_low - 1] != WarehouseListViewItem_TypeInfo )
    {
      sub_1B645E4(v20.fields._current);
LABEL_17:
      sub_1B64324(v11);
    }
    if ( ListViewItem__get_IsSelect((ListViewItem_o *)v20.fields._current, 0LL) )
    {
      UserSvtId = WarehouseListViewItem__get_UserSvtId((WarehouseListViewItem_o *)current, v14);
      if ( !list )
        sub_1B64324(UserSvtId);
      items = list->fields._items;
      v17 = Method_System_Collections_Generic_List_long__Add__;
      ++list->fields._version;
      if ( !items )
        sub_1B64324(UserSvtId);
      size = list->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_long___AddWithResize(
          list,
          UserSvtId,
          *(const MethodInfo_3495074 **)(*(_QWORD *)(v17[4] + 192LL) + 112LL));
      }
      else
      {
        list->fields._size = size + 1;
        items->m_Items[size] = UserSvtId;
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v20,
    (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
}


System_Collections_Generic_Dictionary_long__int__o *__fastcall WarehouseListViewManager__GetSelectServantIdDic(
        WarehouseListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  System_Collections_Generic_Dictionary_long__int__o *v9; // x20
  System_Collections_Generic_List_object__o *itemList; // x0
  int size; // w23
  int32_t v12; // w21
  WarehouseListViewItem_o *v13; // x22
  __int64 methodPtr_low; // x9
  const MethodInfo *v15; // x1
  System_Collections_Generic_Dictionary_long__int__o *result; // x0
  WarehouseListViewManager_o *v17; // x0
  System_Collections_Generic_Dictionary_long__int__o *v18; // x1
  const MethodInfo *v19; // x2

  if ( (byte_49FA48D & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_long__int__Add__, method);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_long__int___ctor__, v4);
    sub_1B640C8(&System_Collections_Generic_Dictionary_long__int__TypeInfo, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v6);
    sub_1B640C8(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v7);
    sub_1B640C8(&WarehouseListViewItem_TypeInfo, v8);
    byte_49FA48D = 1;
  }
  v9 = (System_Collections_Generic_Dictionary_long__int__o *)sub_1B64314(
                                                               System_Collections_Generic_Dictionary_long__int__TypeInfo,
                                                               method,
                                                               v2);
  System_Collections_Generic_Dictionary_long__int____ctor(
    v9,
    (const MethodInfo_315B084 *)Method_System_Collections_Generic_Dictionary_long__int___ctor__);
  itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
  if ( !itemList )
LABEL_14:
    sub_1B64324(itemList);
  size = itemList->fields._size;
  if ( size < 1 )
    return v9;
  v12 = 0;
  while ( 1 )
  {
    itemList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                              itemList,
                                                              v12,
                                                              (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    if ( !itemList )
      goto LABEL_14;
    v13 = (WarehouseListViewItem_o *)itemList;
    methodPtr_low = LOBYTE(WarehouseListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(itemList->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
      || (WarehouseListViewItem_c *)itemList->klass->_2.typeHierarchy[methodPtr_low - 1] != WarehouseListViewItem_TypeInfo )
    {
      break;
    }
    if ( ListViewItem__get_IsSelect((ListViewItem_o *)itemList, 0LL) )
    {
      itemList = (System_Collections_Generic_List_object__o *)WarehouseListViewItem__get_UserSvtId(v13, v15);
      if ( !v9 )
        goto LABEL_14;
      System_Collections_Generic_Dictionary_long__int___Add(
        v9,
        (int64_t)itemList,
        v13->fields.selectNum,
        (const MethodInfo_315BA58 *)Method_System_Collections_Generic_Dictionary_long__int__Add__);
    }
    if ( size == ++v12 )
      return v9;
    itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
    if ( !itemList )
      goto LABEL_14;
  }
  sub_1B645E4(itemList);
  WarehouseListViewManager__ModifyScaleChangeList(v17, v18, v19);
  return result;
}


int32_t __fastcall WarehouseListViewManager__GetSelectSum(WarehouseListViewManager_o *this, const MethodInfo *method)
{
  return this->fields.selectSum;
}


bool __fastcall WarehouseListViewManager__GetSwapChoiceList(
        WarehouseListViewManager_o *this,
        System_Int64_array **choiceList,
        System_Int64_array **unchoiceList,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  System_Collections_Generic_List_long__o *v15; // x23
  __int64 v16; // x1
  __int64 v17; // x2
  System_Collections_Generic_List_long__o *v18; // x22
  int32_t v19; // w2
  int32_t v20; // w3
  int64_t itemList; // x0
  int v22; // w25
  int32_t v23; // w24
  __int64 methodPtr_low; // x10
  __int64 v25; // x8
  __int128 v26; // q0
  struct System_Int64_array *items; // x8
  _QWORD *v28; // x9
  __int64 size; // x10
  int64_t v30; // x1
  Il2CppClass **v31; // x8
  __int128 v32; // q0
  struct System_Int64_array *v33; // x8
  _QWORD *v34; // x9
  __int64 v35; // x10
  __int64 v36; // x8
  System_Collections_Generic_List_long__o *v37; // x0
  int v38; // w21
  System_Int64_array *v39; // x0
  int32_t v40; // w2
  int32_t v41; // w3
  System_Int64_array *v42; // x0
  int32_t v43; // w2
  int32_t v44; // w3
  int32_t v45; // w1
  System_Int64_array **v46; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v48; // [xsp+0h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v49; // [xsp+20h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v50; // [xsp+40h] [xbp-80h]

  if ( (byte_49FA475 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_long__Add__, choiceList);
    sub_1B640C8(&Method_System_Collections_Generic_List_long__ToArray__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_long___ctor__, v8);
    sub_1B640C8(&Method_System_Collections_Generic_List_long__get_Count__, v9);
    sub_1B640C8(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v10);
    sub_1B640C8(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v11);
    sub_1B640C8(&System_Collections_Generic_List_long__TypeInfo, v12);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v13);
    sub_1B640C8(&WarehouseListViewItem_TypeInfo, v14);
    byte_49FA475 = 1;
  }
  v15 = (System_Collections_Generic_List_long__o *)sub_1B64314(
                                                     System_Collections_Generic_List_long__TypeInfo,
                                                     choiceList,
                                                     unchoiceList);
  System_Collections_Generic_List_long____ctor(
    v15,
    (const MethodInfo_3494820 *)Method_System_Collections_Generic_List_long___ctor__);
  v18 = (System_Collections_Generic_List_long__o *)sub_1B64314(System_Collections_Generic_List_long__TypeInfo, v16, v17);
  System_Collections_Generic_List_long____ctor(
    v18,
    (const MethodInfo_3494820 *)Method_System_Collections_Generic_List_long___ctor__);
  itemList = (int64_t)this->fields.itemList;
  if ( !itemList )
    goto LABEL_37;
  v22 = *(_DWORD *)(itemList + 24);
  if ( v22 >= 1 )
  {
    v23 = 0;
    while ( 1 )
    {
      itemList = (int64_t)System_Collections_Generic_List_object___get_Item(
                            (System_Collections_Generic_List_object__o *)itemList,
                            v23,
                            (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
      if ( !itemList )
        goto LABEL_37;
      methodPtr_low = LOBYTE(WarehouseListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
      if ( *(unsigned __int8 *)(*(_QWORD *)itemList + 304LL) < (unsigned int)methodPtr_low
        || *(WarehouseListViewItem_c **)(*(_QWORD *)(*(_QWORD *)itemList + 200LL) + 8 * methodPtr_low - 8) != WarehouseListViewItem_TypeInfo )
      {
        goto LABEL_37;
      }
      v25 = *(_QWORD *)(itemList + 112);
      if ( v25 && *(_BYTE *)(itemList + 233) )
      {
        if ( *(_BYTE *)(itemList + 161) )
        {
          v26 = *(_OWORD *)(v25 + 32);
          *(_OWORD *)&v50.fields.currentCryptoKey = *(_OWORD *)(v25 + 16);
          *(_OWORD *)&v50.fields.fakeValue = v26;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v49 = v50;
          itemList = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46175132(&v49, 0LL);
          if ( !v18 )
            goto LABEL_37;
          items = v18->fields._items;
          v28 = Method_System_Collections_Generic_List_long__Add__;
          ++v18->fields._version;
          if ( !items )
            goto LABEL_37;
          size = v18->fields._size;
          v30 = itemList;
          if ( (unsigned int)size >= items->max_length )
          {
            v36 = v28[4];
            v37 = v18;
LABEL_27:
            System_Collections_Generic_List_long___AddWithResize(
              v37,
              v30,
              *(const MethodInfo_3495074 **)(*(_QWORD *)(v36 + 192) + 112LL));
            goto LABEL_28;
          }
          v31 = &items->obj.klass + size;
          v18->fields._size = size + 1;
        }
        else
        {
          v32 = *(_OWORD *)(v25 + 32);
          *(_OWORD *)&v50.fields.currentCryptoKey = *(_OWORD *)(v25 + 16);
          *(_OWORD *)&v50.fields.fakeValue = v32;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v48 = v50;
          itemList = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46175132(&v48, 0LL);
          if ( !v15 )
            goto LABEL_37;
          v33 = v15->fields._items;
          v34 = Method_System_Collections_Generic_List_long__Add__;
          ++v15->fields._version;
          if ( !v33 )
            goto LABEL_37;
          v35 = v15->fields._size;
          v30 = itemList;
          if ( (unsigned int)v35 >= v33->max_length )
          {
            v36 = v34[4];
            v37 = v15;
            goto LABEL_27;
          }
          v31 = &v33->obj.klass + v35;
          v15->fields._size = v35 + 1;
        }
        v31[4] = (Il2CppClass *)v30;
      }
LABEL_28:
      if ( v22 == ++v23 )
        break;
      itemList = (int64_t)this->fields.itemList;
      if ( !itemList )
        goto LABEL_37;
    }
  }
  if ( !v15 || !v18 )
LABEL_37:
    sub_1B64324(itemList);
  v38 = v18->fields._size + v15->fields._size;
  if ( v38 < 1 )
  {
    *choiceList = 0LL;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)choiceList, 0, v19, v20);
    v46 = unchoiceList;
    v45 = 0;
    *unchoiceList = 0LL;
  }
  else
  {
    v39 = System_Collections_Generic_List_long___ToArray(
            v15,
            (const MethodInfo_3496BCC *)Method_System_Collections_Generic_List_long__ToArray__);
    *choiceList = v39;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)choiceList, (int32_t)v39, v40, v41);
    v42 = System_Collections_Generic_List_long___ToArray(
            v18,
            (const MethodInfo_3496BCC *)Method_System_Collections_Generic_List_long__ToArray__);
    v45 = (int)v42;
    *unchoiceList = v42;
    v46 = unchoiceList;
  }
  sub_1B6406C((ServantStatusBattleListViewItem_o *)v46, v45, v43, v44);
  return v38 > 0;
}


bool __fastcall WarehouseListViewManager__GetSwapLockList(
        WarehouseListViewManager_o *this,
        System_Int64_array **lockList,
        System_Int64_array **unlockList,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  System_Collections_Generic_List_long__o *v15; // x23
  __int64 v16; // x1
  __int64 v17; // x2
  System_Collections_Generic_List_long__o *v18; // x22
  int32_t v19; // w2
  int32_t v20; // w3
  int64_t itemList; // x0
  int v22; // w25
  int32_t v23; // w24
  __int64 methodPtr_low; // x10
  __int64 v25; // x8
  __int128 v26; // q0
  struct System_Int64_array *items; // x8
  _QWORD *v28; // x9
  __int64 size; // x10
  int64_t v30; // x1
  Il2CppClass **v31; // x8
  __int128 v32; // q0
  struct System_Int64_array *v33; // x8
  _QWORD *v34; // x9
  __int64 v35; // x10
  __int64 v36; // x8
  System_Collections_Generic_List_long__o *v37; // x0
  int v38; // w21
  System_Int64_array *v39; // x0
  int32_t v40; // w2
  int32_t v41; // w3
  System_Int64_array *v42; // x0
  int32_t v43; // w2
  int32_t v44; // w3
  int32_t v45; // w1
  System_Int64_array **v46; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v48; // [xsp+0h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v49; // [xsp+20h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v50; // [xsp+40h] [xbp-80h]

  if ( (byte_49FA474 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_long__Add__, lockList);
    sub_1B640C8(&Method_System_Collections_Generic_List_long__ToArray__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_long___ctor__, v8);
    sub_1B640C8(&Method_System_Collections_Generic_List_long__get_Count__, v9);
    sub_1B640C8(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v10);
    sub_1B640C8(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v11);
    sub_1B640C8(&System_Collections_Generic_List_long__TypeInfo, v12);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v13);
    sub_1B640C8(&WarehouseListViewItem_TypeInfo, v14);
    byte_49FA474 = 1;
  }
  v15 = (System_Collections_Generic_List_long__o *)sub_1B64314(
                                                     System_Collections_Generic_List_long__TypeInfo,
                                                     lockList,
                                                     unlockList);
  System_Collections_Generic_List_long____ctor(
    v15,
    (const MethodInfo_3494820 *)Method_System_Collections_Generic_List_long___ctor__);
  v18 = (System_Collections_Generic_List_long__o *)sub_1B64314(System_Collections_Generic_List_long__TypeInfo, v16, v17);
  System_Collections_Generic_List_long____ctor(
    v18,
    (const MethodInfo_3494820 *)Method_System_Collections_Generic_List_long___ctor__);
  itemList = (int64_t)this->fields.itemList;
  if ( !itemList )
    goto LABEL_37;
  v22 = *(_DWORD *)(itemList + 24);
  if ( v22 >= 1 )
  {
    v23 = 0;
    while ( 1 )
    {
      itemList = (int64_t)System_Collections_Generic_List_object___get_Item(
                            (System_Collections_Generic_List_object__o *)itemList,
                            v23,
                            (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
      if ( !itemList )
        goto LABEL_37;
      methodPtr_low = LOBYTE(WarehouseListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
      if ( *(unsigned __int8 *)(*(_QWORD *)itemList + 304LL) < (unsigned int)methodPtr_low
        || *(WarehouseListViewItem_c **)(*(_QWORD *)(*(_QWORD *)itemList + 200LL) + 8 * methodPtr_low - 8) != WarehouseListViewItem_TypeInfo )
      {
        goto LABEL_37;
      }
      v25 = *(_QWORD *)(itemList + 112);
      if ( v25 && *(_BYTE *)(itemList + 232) )
      {
        if ( *(_BYTE *)(itemList + 160) )
        {
          v26 = *(_OWORD *)(v25 + 32);
          *(_OWORD *)&v50.fields.currentCryptoKey = *(_OWORD *)(v25 + 16);
          *(_OWORD *)&v50.fields.fakeValue = v26;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v49 = v50;
          itemList = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46175132(&v49, 0LL);
          if ( !v18 )
            goto LABEL_37;
          items = v18->fields._items;
          v28 = Method_System_Collections_Generic_List_long__Add__;
          ++v18->fields._version;
          if ( !items )
            goto LABEL_37;
          size = v18->fields._size;
          v30 = itemList;
          if ( (unsigned int)size >= items->max_length )
          {
            v36 = v28[4];
            v37 = v18;
LABEL_27:
            System_Collections_Generic_List_long___AddWithResize(
              v37,
              v30,
              *(const MethodInfo_3495074 **)(*(_QWORD *)(v36 + 192) + 112LL));
            goto LABEL_28;
          }
          v31 = &items->obj.klass + size;
          v18->fields._size = size + 1;
        }
        else
        {
          v32 = *(_OWORD *)(v25 + 32);
          *(_OWORD *)&v50.fields.currentCryptoKey = *(_OWORD *)(v25 + 16);
          *(_OWORD *)&v50.fields.fakeValue = v32;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v48 = v50;
          itemList = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46175132(&v48, 0LL);
          if ( !v15 )
            goto LABEL_37;
          v33 = v15->fields._items;
          v34 = Method_System_Collections_Generic_List_long__Add__;
          ++v15->fields._version;
          if ( !v33 )
            goto LABEL_37;
          v35 = v15->fields._size;
          v30 = itemList;
          if ( (unsigned int)v35 >= v33->max_length )
          {
            v36 = v34[4];
            v37 = v15;
            goto LABEL_27;
          }
          v31 = &v33->obj.klass + v35;
          v15->fields._size = v35 + 1;
        }
        v31[4] = (Il2CppClass *)v30;
      }
LABEL_28:
      if ( v22 == ++v23 )
        break;
      itemList = (int64_t)this->fields.itemList;
      if ( !itemList )
        goto LABEL_37;
    }
  }
  if ( !v15 || !v18 )
LABEL_37:
    sub_1B64324(itemList);
  v38 = v18->fields._size + v15->fields._size;
  if ( v38 < 1 )
  {
    *lockList = 0LL;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)lockList, 0, v19, v20);
    v46 = unlockList;
    v45 = 0;
    *unlockList = 0LL;
  }
  else
  {
    v39 = System_Collections_Generic_List_long___ToArray(
            v15,
            (const MethodInfo_3496BCC *)Method_System_Collections_Generic_List_long__ToArray__);
    *lockList = v39;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)lockList, (int32_t)v39, v40, v41);
    v42 = System_Collections_Generic_List_long___ToArray(
            v18,
            (const MethodInfo_3496BCC *)Method_System_Collections_Generic_List_long__ToArray__);
    v45 = (int)v42;
    *unlockList = v42;
    v46 = unlockList;
  }
  sub_1B6406C((ServantStatusBattleListViewItem_o *)v46, v45, v43, v44);
  return v38 > 0;
}


void __fastcall WarehouseListViewManager__InitLoad(const MethodInfo *method)
{
  __int64 v1; // x1
  WarehouseListViewManager_c *v2; // x0
  ListViewSort_o *servantSortInfo; // x0

  if ( (byte_49FA46C & 1) == 0 )
  {
    sub_1B640C8(&WarehouseListViewManager_TypeInfo, v1);
    byte_49FA46C = 1;
  }
  v2 = WarehouseListViewManager_TypeInfo;
  if ( !WarehouseListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarehouseListViewManager_TypeInfo);
    v2 = WarehouseListViewManager_TypeInfo;
  }
  servantSortInfo = v2->static_fields->servantSortInfo;
  if ( !servantSortInfo
    || (ListViewSort__InitLoad(servantSortInfo, 0LL),
        (servantSortInfo = WarehouseListViewManager_TypeInfo->static_fields->servantEquipSortInfo) == 0LL)
    || (ListViewSort__InitLoad(servantSortInfo, 0LL),
        (servantSortInfo = WarehouseListViewManager_TypeInfo->static_fields->servantWarehouseSortInfo) == 0LL)
    || (ListViewSort__InitLoad(servantSortInfo, 0LL),
        (servantSortInfo = WarehouseListViewManager_TypeInfo->static_fields->servantEquipWarehouseSortInfo) == 0LL) )
  {
    sub_1B64324(servantSortInfo);
  }
  ListViewSort__InitLoad(servantSortInfo, 0LL);
}


bool __fastcall WarehouseListViewManager__IsDragEnable(
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
    sub_1B64324(this);
  result = 0;
  if ( item && !warehouseListMenu->fields.modeKind )
  {
    if ( WarehouseListViewItem__get_IsCanNotSelect(item, (const MethodInfo *)item) )
    {
      return 0;
    }
    else
    {
      if ( ListViewItem__get_IsSelect((ListViewItem_o *)item, 0LL) )
        return 1;
      IsSelectEnable = WarehouseListViewManager__IsSelectEnable(this, item, 0, 0, v7);
      result = 0;
      if ( IsSelectEnable )
        return 1;
    }
  }
  return result;
}


bool __fastcall WarehouseListViewManager__IsDragStart(WarehouseListViewManager_o *this, const MethodInfo *method)
{
  return this->fields.dragStartIndex >= 0;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall WarehouseListViewManager__IsSelectEnable(
        WarehouseListViewManager_o *this,
        WarehouseListViewItem_o *item,
        int32_t addSum,
        int32_t addServantSum,
        const MethodInfo *method)
{
  WarehouseListManager_o *parentManager; // x0
  struct WarehouseListManager_o *v10; // x8
  int32_t friendShipSum[2]; // [xsp+8h] [xbp-28h] BYREF

  *(_QWORD *)friendShipSum = 0LL;
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
    sub_1B64324(parentManager);
  return !ServantEntity__get_IsOrganization((ServantEntity_o *)parentManager, 0LL)
      || item->fields.attribute
      || this->fields.sellEnableRestCnt - addServantSum >= 2;
}


void __fastcall WarehouseListViewManager__Modify(WarehouseListViewManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  Il2CppObject *Instance; // x0
  DataMasterBase_TMaster__TEntity__PKType__o *v14; // x20
  _BOOL8 v15; // x0
  const MethodInfo *v16; // x1
  WarehouseListViewItem_o *current; // x21
  __int64 methodPtr_low; // x10
  const MethodInfo *v19; // x1
  int64_t UserSvtId; // x0
  Il2CppObject *Entity; // x1
  const MethodInfo *v22; // x2
  UnityEngine_Object_o *viewObject; // x22
  struct ListViewObject_o *v24; // x0
  UserGameEntity_o *SelfUserGame; // x20
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x9
  DataMasterBase_TMaster__TEntity__PKType__o *v27; // x19
  _BOOL8 v28; // x0
  const MethodInfo *v29; // x1
  WarehouseListViewItem_o *v30; // x21
  __int64 v31; // x10
  const MethodInfo *v32; // x1
  int64_t v33; // x0
  Il2CppObject *v34; // x1
  const MethodInfo *v35; // x2
  int64_t v36; // x0
  const MethodInfo *v37; // x1
  int64_t favoriteUserSvtId; // x27
  int64_t v39; // x22
  int64_t v40; // x0
  const MethodInfo *v41; // x3
  UnityEngine_Object_o *v42; // x22
  struct ListViewObject_o *v43; // x0
  System_Collections_Generic_List_Enumerator_object__o v44; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v45; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_49FA472 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_UserServantMaster___, method);
    sub_1B640C8(&Method_DataManager_GetMasterData_UserServantStorageMaster___, v3);
    sub_1B640C8(&Method_DataMasterBase_UserServantStorageMaster__UserServantEntity__long__GetEntity__, v4);
    sub_1B640C8(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__, v6);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v8);
    sub_1B640C8(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v9);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v10);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11);
    sub_1B640C8(&WarehouseListViewItem_TypeInfo, v12);
    byte_49FA472 = 1;
  }
  memset(&v45, 0, sizeof(v45));
  if ( this->fields.itemList )
  {
    if ( (this->fields.kind & 0xFFFFFFFE) == 2 )
    {
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( Instance )
      {
        Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_UserServantStorageMaster___);
        if ( this->fields.itemList )
        {
          v14 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
          System_Collections_Generic_List_object___GetEnumerator(
            (System_Collections_Generic_List_Enumerator_T__o *)&v44,
            (System_Collections_Generic_List_object__o *)this->fields.itemList,
            (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
          v45 = v44;
          while ( 1 )
          {
            v15 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                    &v45,
                    (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
            if ( !v15 )
              break;
            current = (WarehouseListViewItem_o *)v45.fields._current;
            if ( !v45.fields._current
              || (methodPtr_low = LOBYTE(WarehouseListViewItem_TypeInfo->vtable._0_Equals.methodPtr),
                  LOBYTE(v45.fields._current->klass->vtable[0].methodPtr) < (unsigned int)methodPtr_low)
              || (WarehouseListViewItem_c *)v45.fields._current->klass->_2.typeHierarchy[methodPtr_low - 1] != WarehouseListViewItem_TypeInfo )
            {
              sub_1B64324(v15);
            }
            if ( WarehouseListViewItem__get_UserSvtId((WarehouseListViewItem_o *)v45.fields._current, v16) >= 1 )
            {
              UserSvtId = WarehouseListViewItem__get_UserSvtId(current, v19);
              if ( !v14 )
                sub_1B64324(UserSvtId);
              Entity = DataMasterBase_object__object__long___GetEntity(
                         v14,
                         UserSvtId,
                         (const MethodInfo_30D4050 *)Method_DataMasterBase_UserServantStorageMaster__UserServantEntity__long__GetEntity__);
              if ( Entity )
                WarehouseListViewItem__Modify(current, (UserServantEntity_o *)Entity, v22);
              viewObject = (UnityEngine_Object_o *)current->fields.viewObject;
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              if ( UnityEngine_Object__op_Inequality(viewObject, 0LL, 0LL) )
              {
                v24 = current->fields.viewObject;
                if ( !v24 )
                  sub_1B64324(0LL);
                ((void (__fastcall *)(struct ListViewObject_o *, WarehouseListViewItem_o *, Il2CppMethodPointer))v24->klass->vtable._5_SetItem.method)(
                  v24,
                  current,
                  v24->klass->vtable._6_SetItem.methodPtr);
              }
            }
          }
LABEL_41:
          System_Collections_Generic_List_Enumerator_object___Dispose(
            &v45,
            (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
          return;
        }
      }
    }
    else
    {
      SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( Instance )
      {
        Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_UserServantMaster___);
        itemList = this->fields.itemList;
        if ( itemList )
        {
          v27 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
          System_Collections_Generic_List_object___GetEnumerator(
            (System_Collections_Generic_List_Enumerator_T__o *)&v44,
            (System_Collections_Generic_List_object__o *)itemList,
            (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
          v45 = v44;
          while ( 1 )
          {
            v28 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                    &v45,
                    (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
            if ( !v28 )
              break;
            v30 = (WarehouseListViewItem_o *)v45.fields._current;
            if ( !v45.fields._current
              || (v31 = LOBYTE(WarehouseListViewItem_TypeInfo->vtable._0_Equals.methodPtr),
                  LOBYTE(v45.fields._current->klass->vtable[0].methodPtr) < (unsigned int)v31)
              || (WarehouseListViewItem_c *)v45.fields._current->klass->_2.typeHierarchy[v31 - 1] != WarehouseListViewItem_TypeInfo )
            {
              sub_1B64324(v28);
            }
            if ( WarehouseListViewItem__get_UserSvtId((WarehouseListViewItem_o *)v45.fields._current, v29) >= 1 )
            {
              v33 = WarehouseListViewItem__get_UserSvtId(v30, v32);
              if ( !v27 )
                sub_1B64324(v33);
              v34 = DataMasterBase_object__object__long___GetEntity(
                      v27,
                      v33,
                      (const MethodInfo_30D4050 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
              if ( v34 )
                WarehouseListViewItem__Modify(v30, (UserServantEntity_o *)v34, v35);
              v36 = WarehouseListViewItem__get_UserSvtId(v30, (const MethodInfo *)v34);
              if ( !SelfUserGame )
                sub_1B64324(v36);
              favoriteUserSvtId = SelfUserGame->fields.favoriteUserSvtId;
              v39 = v36;
              v40 = WarehouseListViewItem__get_UserSvtId(v30, v37);
              WarehouseListViewItem__Modify_35516764(
                v30,
                v39 == favoriteUserSvtId,
                v40 == SelfUserGame->fields.pushUserSvtId,
                v41);
              v42 = (UnityEngine_Object_o *)v30->fields.viewObject;
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              if ( UnityEngine_Object__op_Inequality(v42, 0LL, 0LL) )
              {
                v43 = v30->fields.viewObject;
                if ( !v43 )
                  sub_1B64324(0LL);
                ((void (__fastcall *)(struct ListViewObject_o *, WarehouseListViewItem_o *, Il2CppMethodPointer))v43->klass->vtable._5_SetItem.method)(
                  v43,
                  v30,
                  v43->klass->vtable._6_SetItem.methodPtr);
              }
            }
          }
          goto LABEL_41;
        }
      }
    }
    sub_1B64324(Instance);
  }
}


void __fastcall WarehouseListViewManager__ModifyItem(
        WarehouseListViewManager_o *this,
        int64_t userSvtId,
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
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x9
  DataManager_o *Instance; // x0
  DataManager_o *v18; // x19
  Il2CppObject *Entity; // x19
  UserGameEntity_o *SelfUserGame; // x22
  _BOOL8 v21; // x0
  const MethodInfo *v22; // x1
  __int64 v23; // x11
  WarehouseListViewItem_o *v24; // x20
  int64_t v25; // x0
  Il2CppObject v26; // q0
  int64_t v27; // x21
  const MethodInfo *v28; // x2
  int64_t v29; // x0
  const MethodInfo *v30; // x1
  int64_t favoriteUserSvtId; // x28
  int64_t v32; // x21
  int64_t v33; // x0
  const MethodInfo *v34; // x3
  UnityEngine_Object_o *v35; // x21
  struct ListViewObject_o *v36; // x0
  _BOOL8 v37; // x0
  const MethodInfo *v38; // x1
  __int64 methodPtr_low; // x11
  WarehouseListViewItem_o *current; // x22
  int64_t v41; // x0
  __int128 v42; // q0
  int64_t v43; // x23
  const MethodInfo *v44; // x2
  UnityEngine_Object_o *viewObject; // x23
  struct ListViewObject_o *v46; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v47; // [xsp+0h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v48; // [xsp+20h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v49; // [xsp+40h] [xbp-A0h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v50; // [xsp+60h] [xbp-80h] BYREF

  if ( (byte_49FA473 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_UserServantMaster___, userSvtId);
    sub_1B640C8(&Method_DataManager_GetMasterData_UserServantStorageMaster___, v5);
    sub_1B640C8(&Method_DataMasterBase_UserServantStorageMaster__UserServantEntity__long__GetEntity__, v6);
    sub_1B640C8(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__, v8);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v9);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v10);
    sub_1B640C8(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v11);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v12);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v13);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v14);
    sub_1B640C8(&WarehouseListViewItem_TypeInfo, v15);
    byte_49FA473 = 1;
  }
  memset(&v50, 0, sizeof(v50));
  itemList = this->fields.itemList;
  if ( itemList )
  {
    if ( (this->fields.kind & 0xFFFFFFFE) == 2 )
    {
      if ( userSvtId < 1 )
      {
        v18 = 0LL;
        goto LABEL_37;
      }
      Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( Instance )
      {
        Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                      Instance,
                                      (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_UserServantStorageMaster___);
        if ( Instance )
        {
          Instance = (DataManager_o *)DataMasterBase_object__object__long___GetEntity(
                                        (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                                        userSvtId,
                                        (const MethodInfo_30D4050 *)Method_DataMasterBase_UserServantStorageMaster__UserServantEntity__long__GetEntity__);
          itemList = this->fields.itemList;
          if ( itemList )
          {
            v18 = Instance;
LABEL_37:
            System_Collections_Generic_List_object___GetEnumerator(
              (System_Collections_Generic_List_Enumerator_T__o *)&v49,
              (System_Collections_Generic_List_object__o *)itemList,
              (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
            v50 = *(System_Collections_Generic_List_Enumerator_object__o *)&v49.fields.currentCryptoKey;
            while ( 1 )
            {
              v37 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                      &v50,
                      (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
              if ( !v37 )
                goto LABEL_57;
              if ( v50.fields._current
                && (methodPtr_low = LOBYTE(WarehouseListViewItem_TypeInfo->vtable._0_Equals.methodPtr),
                    LOBYTE(v50.fields._current->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low) )
              {
                if ( (WarehouseListViewItem_c *)v50.fields._current->klass->_2.typeHierarchy[methodPtr_low - 1] == WarehouseListViewItem_TypeInfo )
                  current = (WarehouseListViewItem_o *)v50.fields._current;
                else
                  current = 0LL;
                if ( v18 )
                {
LABEL_42:
                  if ( !current )
                    sub_1B64324(v37);
                  v41 = WarehouseListViewItem__get_UserSvtId(current, v38);
                  v42 = *(_OWORD *)&v18->fields._DispLog;
                  v43 = v41;
                  *(SingletonMonoBehaviour_DataManager__Fields *)&v49.fields.currentCryptoKey = v18->fields.SingletonMonoBehaviour_DataManager__Fields;
                  *(_OWORD *)&v49.fields.fakeValue = v42;
                  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
                  v48 = v49;
                  if ( v43 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46175132(&v48, 0LL) )
                    WarehouseListViewItem__Modify(current, (UserServantEntity_o *)v18, v44);
                  goto LABEL_52;
                }
              }
              else
              {
                current = 0LL;
                if ( v18 )
                  goto LABEL_42;
              }
              if ( !current )
                sub_1B64324(v37);
LABEL_52:
              viewObject = (UnityEngine_Object_o *)current->fields.viewObject;
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              if ( UnityEngine_Object__op_Inequality(viewObject, 0LL, 0LL) )
              {
                v46 = current->fields.viewObject;
                if ( !v46 )
                  sub_1B64324(0LL);
                ((void (__fastcall *)(struct ListViewObject_o *, WarehouseListViewItem_o *, Il2CppMethodPointer))v46->klass->vtable._5_SetItem.method)(
                  v46,
                  current,
                  v46->klass->vtable._6_SetItem.methodPtr);
              }
            }
          }
        }
      }
LABEL_66:
      sub_1B64324(Instance);
    }
    Entity = 0LL;
    SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
    if ( userSvtId >= 1 )
    {
      Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_66;
      Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                    Instance,
                                    (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_UserServantMaster___);
      if ( !Instance )
        goto LABEL_66;
      Entity = DataMasterBase_object__object__long___GetEntity(
                 (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                 userSvtId,
                 (const MethodInfo_30D4050 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    }
    Instance = (DataManager_o *)this->fields.itemList;
    if ( !Instance )
      goto LABEL_66;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v49,
      (System_Collections_Generic_List_object__o *)Instance,
      (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    *(_OWORD *)&v50.fields._list = *(_OWORD *)&v49.fields.currentCryptoKey;
    v50.fields._current = (Il2CppObject *)v49.fields.fakeValue;
    while ( 1 )
    {
      v21 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v50,
              (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
      if ( !v21 )
      {
LABEL_57:
        System_Collections_Generic_List_Enumerator_object___Dispose(
          &v50,
          (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
        return;
      }
      if ( v50.fields._current
        && (v23 = LOBYTE(WarehouseListViewItem_TypeInfo->vtable._0_Equals.methodPtr),
            LOBYTE(v50.fields._current->klass->vtable[0].methodPtr) >= (unsigned int)v23) )
      {
        if ( (WarehouseListViewItem_c *)v50.fields._current->klass->_2.typeHierarchy[v23 - 1] == WarehouseListViewItem_TypeInfo )
          v24 = (WarehouseListViewItem_o *)v50.fields._current;
        else
          v24 = 0LL;
        if ( Entity )
        {
LABEL_20:
          if ( !v24 )
            sub_1B64324(v21);
          v25 = WarehouseListViewItem__get_UserSvtId(v24, v22);
          v26 = Entity[2];
          v27 = v25;
          *(Il2CppObject *)&v49.fields.currentCryptoKey = Entity[1];
          *(Il2CppObject *)&v49.fields.fakeValue = v26;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v47 = v49;
          if ( v27 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46175132(&v47, 0LL) )
            WarehouseListViewItem__Modify(v24, (UserServantEntity_o *)Entity, v28);
          goto LABEL_30;
        }
      }
      else
      {
        v24 = 0LL;
        if ( Entity )
          goto LABEL_20;
      }
      if ( !v24 )
        sub_1B64324(v21);
LABEL_30:
      v29 = WarehouseListViewItem__get_UserSvtId(v24, v22);
      if ( !SelfUserGame )
        sub_1B64324(v29);
      favoriteUserSvtId = SelfUserGame->fields.favoriteUserSvtId;
      v32 = v29;
      v33 = WarehouseListViewItem__get_UserSvtId(v24, v30);
      WarehouseListViewItem__Modify_35516764(
        v24,
        v32 == favoriteUserSvtId,
        v33 == SelfUserGame->fields.pushUserSvtId,
        v34);
      v35 = (UnityEngine_Object_o *)v24->fields.viewObject;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(v35, 0LL, 0LL) )
      {
        v36 = v24->fields.viewObject;
        if ( !v36 )
          sub_1B64324(0LL);
        ((void (__fastcall *)(struct ListViewObject_o *, WarehouseListViewItem_o *, Il2CppMethodPointer))v36->klass->vtable._5_SetItem.method)(
          v36,
          v24,
          v36->klass->vtable._6_SetItem.methodPtr);
      }
    }
  }
}


void __fastcall WarehouseListViewManager__ModifyScaleChangeList(
        WarehouseListViewManager_o *this,
        System_Collections_Generic_Dictionary_long__int__o *selectServantIdDic,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  const MethodInfo *v10; // x1
  System_Collections_Generic_List_object__o *itemList; // x0
  struct WarehouseListManager_o *parentManager; // x8
  struct WarehouseListViewManager_o *baseListViewManager; // x9
  int size; // w23
  int32_t v15; // w21
  WarehouseListViewItem_o *v16; // x22
  __int64 methodPtr_low; // x9
  int64_t UserSvtId; // x0
  const MethodInfo *v19; // x1
  int64_t v20; // x0
  struct WarehouseListManager_o *v21; // x8
  struct WarehouseListViewManager_o *v22; // x9
  WarehouseListViewManager_o *v23; // x0
  const MethodInfo *v24; // x1

  if ( (byte_49FA48E & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_long__int__ContainsKey__, selectServantIdDic);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_long__int__get_Count__, v5);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_long__int__get_Item__, v6);
    sub_1B640C8(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v8);
    sub_1B640C8(&WarehouseListViewItem_TypeInfo, v9);
    byte_49FA48E = 1;
  }
  if ( selectServantIdDic
    && System_Collections_Generic_Dictionary_long__int___get_Count(
         selectServantIdDic,
         (const MethodInfo_315B708 *)Method_System_Collections_Generic_Dictionary_long__int__get_Count__) )
  {
    WarehouseListViewManager__ReleaseAll(this, v10);
    parentManager = this->fields.parentManager;
    if ( !parentManager
      || (baseListViewManager = parentManager->fields.baseListViewManager) == 0LL
      || (parentManager->fields.totalSum = baseListViewManager->fields.selectSum,
          (itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList) == 0LL) )
    {
LABEL_19:
      sub_1B64324(itemList);
    }
    size = itemList->fields._size;
    if ( size >= 1 )
    {
      v15 = 0;
      while ( 1 )
      {
        itemList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                  itemList,
                                                                  v15,
                                                                  (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
        if ( !itemList )
          goto LABEL_19;
        v16 = (WarehouseListViewItem_o *)itemList;
        methodPtr_low = LOBYTE(WarehouseListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(itemList->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
          || (WarehouseListViewItem_c *)itemList->klass->_2.typeHierarchy[methodPtr_low - 1] != WarehouseListViewItem_TypeInfo )
        {
          break;
        }
        UserSvtId = WarehouseListViewItem__get_UserSvtId(
                      (WarehouseListViewItem_o *)itemList,
                      (const MethodInfo *)WarehouseListViewItem_TypeInfo);
        if ( System_Collections_Generic_Dictionary_long__int___ContainsKey(
               selectServantIdDic,
               UserSvtId,
               (const MethodInfo_315BC4C *)Method_System_Collections_Generic_Dictionary_long__int__ContainsKey__) )
        {
          v20 = WarehouseListViewItem__get_UserSvtId(v16, v19);
          itemList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_Dictionary_long__int___get_Item(
                                                                    selectServantIdDic,
                                                                    v20,
                                                                    (const MethodInfo_315B9B8 *)Method_System_Collections_Generic_Dictionary_long__int__get_Item__);
          v16->fields.selectNum = (int)itemList;
          v21 = this->fields.parentManager;
          ++this->fields.selectSum;
          if ( !v21 )
            goto LABEL_19;
          v22 = v21->fields.baseListViewManager;
          if ( !v22 )
            goto LABEL_19;
          v21->fields.totalSum = v22->fields.selectSum;
        }
        if ( size == ++v15 )
          return;
        itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
        if ( !itemList )
          goto LABEL_19;
      }
      sub_1B645E4(itemList);
      WarehouseListViewManager__IsDragStart(v23, v24);
    }
  }
}


void __fastcall WarehouseListViewManager__OnClickBonusFilterKind(
        WarehouseListViewManager_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  ListViewSort_o *sort; // x0

  if ( (byte_49FA47E & 1) == 0 )
  {
    sub_1B640C8(&Method_WarehouseListViewManager_OnClickBonusFilterKind__, method);
    byte_49FA47E = 1;
  }
  if ( this->fields.isInput )
  {
    v3 = Method_WarehouseListViewManager_OnClickBonusFilterKind__;
    if ( (*((_BYTE *)Method_WarehouseListViewManager_OnClickBonusFilterKind__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B640E0(Method_WarehouseListViewManager_OnClickBonusFilterKind__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B640AC(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
    sort = this->fields.sort;
    if ( !sort )
      sub_1B64324(0LL);
    ListViewSort__IncrementBonusFilter(sort, this->fields.alignedBonusFilterInfos, this->fields.isQuestStart, 0LL, 0LL);
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
    ListViewManager__CheckScroll((ListViewManager_o *)this, this->fields.scaleType, 0LL);
  }
}


void __fastcall WarehouseListViewManager__OnClickFilterKind(WarehouseListViewManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  _QWORD *v6; // x0
  System_Reflection_MethodBase_o *v7; // x0
  Il2CppObject *Instance; // x0
  ListViewSort_o *sort; // x20
  Il2CppObject *v10; // x21
  __int64 v11; // x1
  __int64 v12; // x2
  ServantFilterSelectMenu_CallbackFunc_o *v13; // x22
  __int64 v14; // x0
  CommonUI_o *v15; // x0
  int32_t v16; // w1
  Il2CppObject *v17; // x0
  ListViewSort_o *v18; // x20
  CommonUI_o *v19; // x21
  __int64 v20; // x1
  __int64 v21; // x2
  ServantFilterSelectMenu_CallbackFunc_o *v22; // x22
  Il2CppObject *v23; // x0
  Il2CppObject *v24; // x21
  __int64 v25; // x1
  __int64 v26; // x2

  if ( (byte_49FA486 & 1) == 0 )
  {
    sub_1B640C8(&ServantFilterSelectMenu_CallbackFunc_TypeInfo, method);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v3);
    sub_1B640C8(&Method_WarehouseListViewManager_EndSelectFilterKind__, v4);
    sub_1B640C8(&Method_WarehouseListViewManager_OnClickFilterKind__, v5);
    byte_49FA486 = 1;
  }
  if ( this->fields.isInput )
  {
    v6 = Method_WarehouseListViewManager_OnClickFilterKind__;
    if ( (*((_BYTE *)Method_WarehouseListViewManager_OnClickFilterKind__ + 83) & 2) != 0 )
      v6 = (_QWORD *)sub_1B640E0(Method_WarehouseListViewManager_OnClickFilterKind__);
    v7 = (System_Reflection_MethodBase_o *)sub_1B640AC(v6, v6[4]);
    OverwriteAssetSoundName__PlaySystemSe(v7, 0, 0LL);
    switch ( this->fields.kind )
    {
      case 0:
      case 2:
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        sort = this->fields.sort;
        v10 = Instance;
        v13 = (ServantFilterSelectMenu_CallbackFunc_o *)sub_1B64314(
                                                          ServantFilterSelectMenu_CallbackFunc_TypeInfo,
                                                          v11,
                                                          v12);
        ServantFilterSelectMenu_CallbackFunc___ctor(
          v13,
          (Il2CppObject *)this,
          Method_WarehouseListViewManager_EndSelectFilterKind__,
          0LL);
        if ( !v10 )
          goto LABEL_15;
        v15 = (CommonUI_o *)v10;
        v16 = 0;
        goto LABEL_14;
      case 1:
      case 3:
        v17 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        v18 = this->fields.sort;
        v19 = (CommonUI_o *)v17;
        v22 = (ServantFilterSelectMenu_CallbackFunc_o *)sub_1B64314(
                                                          ServantFilterSelectMenu_CallbackFunc_TypeInfo,
                                                          v20,
                                                          v21);
        ServantFilterSelectMenu_CallbackFunc___ctor(
          v22,
          (Il2CppObject *)this,
          Method_WarehouseListViewManager_EndSelectFilterKind__,
          0LL);
        if ( !v19 )
          goto LABEL_15;
        CommonUI__OpenServantFilterSelectMenu_30352028(v19, 5, v18, (ListViewManager_o *)this, v22, -1, 0LL);
        break;
      default:
        v23 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        sort = this->fields.sort;
        v24 = v23;
        v13 = (ServantFilterSelectMenu_CallbackFunc_o *)sub_1B64314(
                                                          ServantFilterSelectMenu_CallbackFunc_TypeInfo,
                                                          v25,
                                                          v26);
        ServantFilterSelectMenu_CallbackFunc___ctor(
          v13,
          (Il2CppObject *)this,
          Method_WarehouseListViewManager_EndSelectFilterKind__,
          0LL);
        if ( !v24 )
LABEL_15:
          sub_1B64324(v14);
        v16 = 6;
        v15 = (CommonUI_o *)v24;
LABEL_14:
        CommonUI__OpenServantFilterSelectMenu(v15, v16, sort, v13, -1, 0LL);
        break;
    }
  }
}


void __fastcall WarehouseListViewManager__OnClickListView(
        WarehouseListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  ;
}


void __fastcall WarehouseListViewManager__OnClickSelectListView(
        WarehouseListViewManager_o *this,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  __int64 methodPtr_low; // x10
  ListViewItem_o *v6; // x2
  struct WarehouseListViewManager_CallbackFunc_o *callbackFunc; // x8

  if ( (byte_49FA47D & 1) == 0 )
  {
    sub_1B640C8(&WarehouseListViewItem_TypeInfo, item);
    byte_49FA47D = 1;
  }
  if ( item
    && (methodPtr_low = LOBYTE(WarehouseListViewItem_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(item->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low) )
  {
    if ( (WarehouseListViewItem_c *)item->klass->_2.typeHierarchy[methodPtr_low - 1] == WarehouseListViewItem_TypeInfo )
      v6 = item;
    else
      v6 = 0LL;
  }
  else
  {
    v6 = 0LL;
  }
  callbackFunc = this->fields.callbackFunc;
  if ( callbackFunc )
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, ListViewItem_o *, _QWORD))callbackFunc->fields.m_target)(
      callbackFunc->fields.original_method_info,
      1LL,
      v6,
      *(_QWORD *)&callbackFunc->fields.extra_arg);
}


void __fastcall WarehouseListViewManager__OnClickSortAscendingOrder(
        WarehouseListViewManager_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x0
  struct ListViewSort_o *sort; // x8

  if ( (byte_49FA489 & 1) == 0 )
  {
    sub_1B640C8(&Method_WarehouseListViewManager_OnClickSortAscendingOrder__, method);
    byte_49FA489 = 1;
  }
  if ( this->fields.isInput )
  {
    v3 = Method_WarehouseListViewManager_OnClickSortAscendingOrder__;
    if ( (*((_BYTE *)Method_WarehouseListViewManager_OnClickSortAscendingOrder__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B640E0(Method_WarehouseListViewManager_OnClickSortAscendingOrder__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B640AC(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
    sort = this->fields.sort;
    if ( !sort )
      sub_1B64324(v5);
    sort->fields.isAscendingOrder ^= 1u;
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
  }
}


void __fastcall WarehouseListViewManager__OnClickSortKind(WarehouseListViewManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  _QWORD *v6; // x0
  System_Reflection_MethodBase_o *v7; // x0
  unsigned int kind; // w23
  Il2CppObject *Instance; // x0
  ListViewSort_o *sort; // x20
  CommonUI_o *v11; // x21
  __int64 v12; // x1
  __int64 v13; // x2
  ServantSortSelectMenu_CallbackFunc_o *v14; // x22
  __int64 v15; // x0
  int32_t v16; // w1

  if ( (byte_49FA484 & 1) == 0 )
  {
    sub_1B640C8(&ServantSortSelectMenu_CallbackFunc_TypeInfo, method);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v3);
    sub_1B640C8(&Method_WarehouseListViewManager_EndSelectSortKind__, v4);
    sub_1B640C8(&Method_WarehouseListViewManager_OnClickSortKind__, v5);
    byte_49FA484 = 1;
  }
  if ( this->fields.isInput )
  {
    v6 = Method_WarehouseListViewManager_OnClickSortKind__;
    if ( (*((_BYTE *)Method_WarehouseListViewManager_OnClickSortKind__ + 83) & 2) != 0 )
      v6 = (_QWORD *)sub_1B640E0(Method_WarehouseListViewManager_OnClickSortKind__);
    v7 = (System_Reflection_MethodBase_o *)sub_1B640AC(v6, v6[4]);
    OverwriteAssetSoundName__PlaySystemSe(v7, 0, 0LL);
    kind = this->fields.kind;
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sort = this->fields.sort;
    v11 = (CommonUI_o *)Instance;
    v14 = (ServantSortSelectMenu_CallbackFunc_o *)sub_1B64314(ServantSortSelectMenu_CallbackFunc_TypeInfo, v12, v13);
    ServantSortSelectMenu_CallbackFunc___ctor(
      v14,
      (Il2CppObject *)this,
      Method_WarehouseListViewManager_EndSelectSortKind__,
      0LL);
    if ( !v11 )
      sub_1B64324(v15);
    if ( kind <= 3 )
      v16 = kind + 1;
    else
      v16 = 3;
    CommonUI__OpenServantSortSelectMenu(v11, v16, sort, 1, v14, 0LL);
  }
}


void __fastcall WarehouseListViewManager__OnLongPushListView(
        WarehouseListViewManager_o *this,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  __int64 methodPtr_low; // x10
  ListViewItem_o *v6; // x2
  struct WarehouseListViewManager_CallbackFunc_o *callbackFunc; // x8

  if ( (byte_49FA483 & 1) == 0 )
  {
    sub_1B640C8(&WarehouseListViewItem_TypeInfo, item);
    byte_49FA483 = 1;
  }
  if ( item
    && (methodPtr_low = LOBYTE(WarehouseListViewItem_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(item->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low) )
  {
    if ( (WarehouseListViewItem_c *)item->klass->_2.typeHierarchy[methodPtr_low - 1] == WarehouseListViewItem_TypeInfo )
      v6 = item;
    else
      v6 = 0LL;
  }
  else
  {
    v6 = 0LL;
  }
  callbackFunc = this->fields.callbackFunc;
  if ( callbackFunc )
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, ListViewItem_o *, _QWORD))callbackFunc->fields.m_target)(
      callbackFunc->fields.original_method_info,
      2LL,
      v6,
      *(_QWORD *)&callbackFunc->fields.extra_arg);
}


void __fastcall WarehouseListViewManager__OnMoveEnd(WarehouseListViewManager_o *this, const MethodInfo *method)
{
  int32_t callbackCount; // w8
  bool v4; // vf
  int32_t v5; // w8
  UnityEngine_Object_o *scrollView; // x20
  UIScrollView_o *v7; // x0

  if ( (byte_49FA47A & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, method);
    byte_49FA47A = 1;
  }
  callbackCount = this->fields.callbackCount;
  v4 = __OFSUB__(callbackCount, 1);
  v5 = callbackCount - 1;
  if ( v5 < 0 == v4 )
  {
    this->fields.callbackCount = v5;
    if ( !v5 )
    {
      ListViewManager__DragMaskEnd((ListViewManager_o *)this, 0LL);
      scrollView = (UnityEngine_Object_o *)this->fields.scrollView;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(scrollView, 0LL, 0LL) )
      {
        v7 = this->fields.scrollView;
        if ( !v7
          || (((void (__fastcall *)(UIScrollView_o *, __int64, Il2CppMethodPointer))v7->klass->vtable._8_UpdateScrollbars.method)(
                v7,
                1LL,
                v7->klass->vtable._9_SetDragAmount.methodPtr),
              (v7 = this->fields.scrollView) == 0LL) )
        {
          sub_1B64324(v7);
        }
        UIScrollView__UpdatePosition(v7, 0LL);
      }
    }
  }
}


void __fastcall WarehouseListViewManager__RefrashListDisp(WarehouseListViewManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  void *parentManager; // x0
  const MethodInfo *v5; // x1
  int v6; // w22
  System_Collections_Generic_List_object__o *v7; // x20
  int32_t v8; // w21

  if ( (byte_49FA470 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_WarehouseListViewObject__get_Count__, method);
    sub_1B640C8(&Method_System_Collections_Generic_List_WarehouseListViewObject__get_Item__, v3);
    byte_49FA470 = 1;
  }
  parentManager = this->fields.parentManager;
  if ( !parentManager )
    goto LABEL_10;
  WarehouseListManager__RefrashListDisp((WarehouseListManager_o *)parentManager, method);
  parentManager = WarehouseListViewManager__get_ObjectList(this, v5);
  if ( !parentManager )
    goto LABEL_10;
  v6 = *((_DWORD *)parentManager + 6);
  v7 = (System_Collections_Generic_List_object__o *)parentManager;
  if ( v6 >= 1 )
  {
    v8 = 0;
    while ( 1 )
    {
      parentManager = System_Collections_Generic_List_object___get_Item(
                        v7,
                        v8,
                        (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_WarehouseListViewObject__get_Item__);
      if ( !parentManager )
        break;
      (*(void (__fastcall **)(void *, bool, _QWORD))(*(_QWORD *)parentManager + 456LL))(
        parentManager,
        this->fields.isInput,
        *(_QWORD *)(*(_QWORD *)parentManager + 464LL));
      if ( v6 == ++v8 )
        return;
    }
LABEL_10:
    sub_1B64324(parentManager);
  }
}


void __fastcall WarehouseListViewManager__ReleaseAll(WarehouseListViewManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x0
  _BOOL8 v8; // x0
  Il2CppObject *current; // x20
  __int64 methodPtr_low; // x9
  const MethodInfo *v11; // x3
  const MethodInfo *v12; // x1
  System_Collections_Generic_List_Enumerator_object__o v13; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_49FA47C & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__, method);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v3);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v4);
    sub_1B640C8(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v5);
    sub_1B640C8(&WarehouseListViewItem_TypeInfo, v6);
    byte_49FA47C = 1;
  }
  memset(&v13, 0, sizeof(v13));
  itemList = this->fields.itemList;
  this->fields.sellEnableRestCnt = 0;
  if ( !itemList )
    sub_1B64324(0LL);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v13,
    (System_Collections_Generic_List_object__o *)itemList,
    (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  while ( 1 )
  {
    v8 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v13,
           (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    if ( !v8 )
      break;
    current = v13.fields._current;
    if ( !v13.fields._current )
      goto LABEL_12;
    methodPtr_low = LOBYTE(WarehouseListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(v13.fields._current->klass->vtable[0].methodPtr) < (unsigned int)methodPtr_low
      || (WarehouseListViewItem_c *)v13.fields._current->klass->_2.typeHierarchy[methodPtr_low - 1] != WarehouseListViewItem_TypeInfo )
    {
      sub_1B645E4(v13.fields._current);
LABEL_12:
      sub_1B64324(v8);
    }
    ListViewItem__set_IsSelect((ListViewItem_o *)v13.fields._current, 0, 0LL);
    WarehouseListViewManager__ChangeSellEnableRestCnt(this, 1, (WarehouseListViewItem_o *)current, v11);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v13,
    (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
  this->fields.selectSum = 0;
  WarehouseListViewManager__RefrashListDisp(this, v12);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarehouseListViewManager__RequestListObject(
        WarehouseListViewManager_o *this,
        int32_t mode,
        float delay,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  System_Collections_Generic_List_object__o *ObjectList; // x0
  int32_t size; // w8
  __int64 v16; // x1
  __int64 v17; // x2
  Il2CppObject *current; // x21
  System_Action_o *v19; // x22
  __int64 v20; // x0
  System_Collections_Generic_List_Enumerator_object__o v21; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_49FA478 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, *(_QWORD *)&mode);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_WarehouseListViewObject__Dispose__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_WarehouseListViewObject__MoveNext__, v8);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_WarehouseListViewObject__get_Current__, v9);
    sub_1B640C8(&Method_System_Collections_Generic_List_WarehouseListViewObject__GetEnumerator__, v10);
    sub_1B640C8(&Method_System_Collections_Generic_List_WarehouseListViewObject__get_Count__, v11);
    sub_1B640C8(&Method_WarehouseListViewManager_OnMoveEnd__, v12);
    sub_1B640C8(&StringLiteral_9890/*"OnMoveEnd"*/, v13);
    byte_49FA478 = 1;
  }
  memset(&v21, 0, sizeof(v21));
  ObjectList = (System_Collections_Generic_List_object__o *)WarehouseListViewManager__get_ObjectList(
                                                              this,
                                                              *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_1B64324(0LL);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_9890/*"OnMoveEnd"*/,
      delay,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v21,
      ObjectList,
      (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_WarehouseListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v21,
              (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_WarehouseListViewObject__MoveNext__) )
    {
      current = v21.fields._current;
      v19 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v16, v17);
      System_Action___ctor(v19, (Il2CppObject *)this, Method_WarehouseListViewManager_OnMoveEnd__, 0LL);
      if ( !current )
        sub_1B64324(v20);
      WarehouseListViewObject__Init_35622440((WarehouseListViewObject_o *)current, mode, v19, delay, 0LL);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v21,
      (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_WarehouseListViewObject__Dispose__);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarehouseListViewManager__RequestListObject_35530968(
        WarehouseListViewManager_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  System_Collections_Generic_List_object__o *ObjectList; // x0
  int32_t size; // w8
  __int64 v14; // x1
  __int64 v15; // x2
  Il2CppObject *current; // x21
  System_Action_o *v17; // x22
  __int64 v18; // x0
  System_Collections_Generic_List_Enumerator_object__o v19; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_49FA479 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, *(_QWORD *)&mode);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_WarehouseListViewObject__Dispose__, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_WarehouseListViewObject__MoveNext__, v6);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_WarehouseListViewObject__get_Current__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_WarehouseListViewObject__GetEnumerator__, v8);
    sub_1B640C8(&Method_System_Collections_Generic_List_WarehouseListViewObject__get_Count__, v9);
    sub_1B640C8(&Method_WarehouseListViewManager_OnMoveEnd__, v10);
    sub_1B640C8(&StringLiteral_9890/*"OnMoveEnd"*/, v11);
    byte_49FA479 = 1;
  }
  memset(&v19, 0, sizeof(v19));
  ObjectList = (System_Collections_Generic_List_object__o *)WarehouseListViewManager__get_ObjectList(
                                                              this,
                                                              *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_1B64324(0LL);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_9890/*"OnMoveEnd"*/,
      0.0,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v19,
      ObjectList,
      (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_WarehouseListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v19,
              (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_WarehouseListViewObject__MoveNext__) )
    {
      current = v19.fields._current;
      v17 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v14, v15);
      System_Action___ctor(v17, (Il2CppObject *)this, Method_WarehouseListViewManager_OnMoveEnd__, 0LL);
      if ( !current )
        sub_1B64324(v18);
      WarehouseListViewObject__Init_35622524((WarehouseListViewObject_o *)current, mode, v17, 0LL);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v19,
      (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_WarehouseListViewObject__Dispose__);
  }
}


void __fastcall WarehouseListViewManager__SaveSortInfo(WarehouseListViewManager_o *this, const MethodInfo *method)
{
  WarehouseListViewManager_c *v2; // x0
  ListViewSort_o *servantSortInfo; // x8
  __int64 v4; // x0
  ListViewSort_o *servantEquipSortInfo; // x8
  ListViewSort_o *servantWarehouseSortInfo; // x8
  ListViewSort_o *servantEquipWarehouseSortInfo; // x8

  if ( (byte_49FA471 & 1) == 0 )
  {
    sub_1B640C8(&WarehouseListViewManager_TypeInfo, method);
    byte_49FA471 = 1;
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
    ListViewSort__Save(servantSortInfo, 0LL);
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
    ListViewSort__Save(servantEquipSortInfo, 0LL);
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
    ListViewSort__Save(servantWarehouseSortInfo, 0LL);
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
          (servantEquipWarehouseSortInfo = WarehouseListViewManager_TypeInfo->static_fields->servantEquipWarehouseSortInfo) != 0LL) )
    {
      ListViewSort__Save(servantEquipWarehouseSortInfo, 0LL);
      return;
    }
LABEL_28:
    sub_1B64324(v4);
  }
}


void __fastcall WarehouseListViewManager__SelectListView(
        WarehouseListViewManager_o *this,
        WarehouseListViewItem_o *selectItem,
        const MethodInfo *method)
{
  WarehouseListViewManager_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  _QWORD *v8; // x0
  System_Reflection_MethodBase_o *v9; // x0
  const MethodInfo *v10; // x4
  _QWORD *v11; // x0
  System_Reflection_MethodBase_o *v12; // x0
  struct WarehouseListManager_o *parentManager; // x8
  struct WarehouseListViewManager_o *baseListViewManager; // x9
  UILabel_o *selectDoneLabel; // x21
  struct WarehouseListManager_o *v16; // x8
  WarehouseListViewManager_o *v17; // x22
  struct WarehouseListManager_o *v18; // x8
  Il2CppObject *v19; // x23
  Il2CppObject *v20; // x0
  const MethodInfo *v21; // x3
  const MethodInfo *v22; // x2
  struct WarehouseListManager_o *v23; // x8
  const MethodInfo *v24; // x1
  bool IsSelectEnable; // w21
  _QWORD *v26; // x8
  struct WarehouseListManager_o *v27; // x8
  struct WarehouseListViewManager_o *v28; // x9
  UILabel_o *v29; // x21
  struct WarehouseListManager_o *v30; // x8
  WarehouseListViewManager_o *v31; // x22
  struct WarehouseListManager_o *v32; // x8
  Il2CppObject *v33; // x23
  Il2CppObject *v34; // x0
  const MethodInfo *v35; // x3
  int32_t sendMax; // [xsp+8h] [xbp-38h] BYREF
  int32_t totalSum; // [xsp+Ch] [xbp-34h] BYREF

  v4 = this;
  if ( (byte_49FA47F & 1) == 0 )
  {
    sub_1B640C8(&int_TypeInfo, selectItem);
    sub_1B640C8(&LocalizationManager_TypeInfo, v5);
    sub_1B640C8(&Method_WarehouseListViewManager_SelectListView__, v6);
    this = (WarehouseListViewManager_o *)sub_1B640C8(&StringLiteral_12321/*"SUM_INFO"*/, v7);
    byte_49FA47F = 1;
  }
  if ( !selectItem )
    goto LABEL_34;
  if ( !WarehouseListViewItem__get_IsCanNotSelect(selectItem, (const MethodInfo *)selectItem) )
  {
    if ( ListViewItem__get_IsSelect((ListViewItem_o *)selectItem, 0LL) )
    {
      v11 = Method_WarehouseListViewManager_SelectListView__;
      if ( (*((_BYTE *)Method_WarehouseListViewManager_SelectListView__ + 83) & 2) != 0 )
        v11 = (_QWORD *)sub_1B640E0(Method_WarehouseListViewManager_SelectListView__);
      v12 = (System_Reflection_MethodBase_o *)sub_1B640AC(v11, v11[4]);
      OverwriteAssetSoundName__PlaySystemSe(v12, 0, 0LL);
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
          this = (WarehouseListViewManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12321/*"SUM_INFO"*/, 0LL);
          v16 = v4->fields.parentManager;
          if ( v16 )
          {
            v17 = this;
            totalSum = v16->fields.totalSum;
            this = (WarehouseListViewManager_o *)j_il2cpp_value_box_0(int_TypeInfo, &totalSum);
            v18 = v4->fields.parentManager;
            if ( v18 )
            {
              v19 = (Il2CppObject *)this;
              sendMax = v18->fields.sendMax;
              v20 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &sendMax);
              this = (WarehouseListViewManager_o *)System_String__Format_61389768((System_String_o *)v17, v19, v20, 0LL);
              if ( selectDoneLabel )
              {
                UILabel__set_text(selectDoneLabel, (System_String_o *)this, 0LL);
                WarehouseListViewManager__ChangeSellEnableRestCnt(v4, 1, selectItem, v21);
                v23 = v4->fields.parentManager;
                if ( v23 )
                {
                  this = v23->fields.baseListViewManager;
                  if ( this )
                  {
                    WarehouseListViewManager__DecrementNumber(this, selectItem->fields.selectNum, v22);
                    ListViewItem__set_IsSelect((ListViewItem_o *)selectItem, 0, 0LL);
LABEL_32:
                    WarehouseListViewManager__RefrashListDisp(v4, v24);
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
      IsSelectEnable = WarehouseListViewManager__IsSelectEnable(v4, selectItem, 0, 0, v10);
      v26 = Method_WarehouseListViewManager_SelectListView__;
      if ( (*((_BYTE *)Method_WarehouseListViewManager_SelectListView__ + 83) & 2) != 0 )
        v26 = (_QWORD *)sub_1B640E0(Method_WarehouseListViewManager_SelectListView__);
      v9 = (System_Reflection_MethodBase_o *)sub_1B640AC(v26, v26[4]);
      if ( !IsSelectEnable )
        goto LABEL_33;
      OverwriteAssetSoundName__PlaySystemSe(v9, 0, 0LL);
      v27 = v4->fields.parentManager;
      if ( v27 )
      {
        selectItem->fields.selectNum = v27->fields.totalSum;
        ++v4->fields.selectSum;
        v28 = v27->fields.baseListViewManager;
        if ( v28 )
        {
          v27->fields.totalSum = v28->fields.selectSum;
          v29 = v4->fields.selectDoneLabel;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          this = (WarehouseListViewManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12321/*"SUM_INFO"*/, 0LL);
          v30 = v4->fields.parentManager;
          if ( v30 )
          {
            v31 = this;
            totalSum = v30->fields.totalSum;
            this = (WarehouseListViewManager_o *)j_il2cpp_value_box_0(int_TypeInfo, &totalSum);
            v32 = v4->fields.parentManager;
            if ( v32 )
            {
              v33 = (Il2CppObject *)this;
              sendMax = v32->fields.sendMax;
              v34 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &sendMax);
              this = (WarehouseListViewManager_o *)System_String__Format_61389768((System_String_o *)v31, v33, v34, 0LL);
              if ( v29 )
              {
                UILabel__set_text(v29, (System_String_o *)this, 0LL);
                WarehouseListViewManager__ChangeSellEnableRestCnt(v4, 0, selectItem, v35);
                goto LABEL_32;
              }
            }
          }
        }
      }
    }
LABEL_34:
    sub_1B64324(this);
  }
  v8 = Method_WarehouseListViewManager_SelectListView__;
  if ( (*((_BYTE *)Method_WarehouseListViewManager_SelectListView__ + 83) & 2) != 0 )
    v8 = (_QWORD *)sub_1B640E0(Method_WarehouseListViewManager_SelectListView__);
  v9 = (System_Reflection_MethodBase_o *)sub_1B640AC(v8, v8[4]);
LABEL_33:
  OverwriteAssetSoundName__PlaySystemSe(v9, 2, 0LL);
}


void __fastcall WarehouseListViewManager__SelectListViewChoice(
        WarehouseListViewManager_o *this,
        WarehouseListViewItem_o *selectItem,
        const MethodInfo *method)
{
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  __int64 v7; // x0
  const MethodInfo *v8; // x1

  if ( (byte_49FA482 & 1) == 0 )
  {
    sub_1B640C8(&Method_WarehouseListViewManager_SelectListViewChoice__, selectItem);
    byte_49FA482 = 1;
  }
  v5 = Method_WarehouseListViewManager_SelectListViewChoice__;
  if ( (*((_BYTE *)Method_WarehouseListViewManager_SelectListViewChoice__ + 83) & 2) != 0 )
    v5 = (_QWORD *)sub_1B640E0(Method_WarehouseListViewManager_SelectListViewChoice__);
  v6 = (System_Reflection_MethodBase_o *)sub_1B640AC(v5, v5[4]);
  OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0LL);
  if ( !selectItem )
    sub_1B64324(v7);
  selectItem->fields.isSwapChoice ^= 1u;
  WarehouseListViewManager__RefrashListDisp(this, v8);
}


void __fastcall WarehouseListViewManager__SelectListViewLock(
        WarehouseListViewManager_o *this,
        WarehouseListViewItem_o *selectItem,
        const MethodInfo *method)
{
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  __int64 v7; // x0
  const MethodInfo *v8; // x1

  if ( (byte_49FA481 & 1) == 0 )
  {
    sub_1B640C8(&Method_WarehouseListViewManager_SelectListViewLock__, selectItem);
    byte_49FA481 = 1;
  }
  v5 = Method_WarehouseListViewManager_SelectListViewLock__;
  if ( (*((_BYTE *)Method_WarehouseListViewManager_SelectListViewLock__ + 83) & 2) != 0 )
    v5 = (_QWORD *)sub_1B640E0(Method_WarehouseListViewManager_SelectListViewLock__);
  v6 = (System_Reflection_MethodBase_o *)sub_1B640AC(v5, v5[4]);
  OverwriteAssetSoundName__PlaySystemSe(v6, 11, 0LL);
  if ( !selectItem )
    sub_1B64324(v7);
  selectItem->fields.isSwapLock ^= 1u;
  WarehouseListViewManager__RefrashListDisp(this, v8);
}


void __fastcall WarehouseListViewManager__SetDragEnd(WarehouseListViewManager_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x1
  const MethodInfo *v6; // x2
  int32_t dragStartIndex; // w20
  int32_t dragEndIndex; // w21

  if ( (byte_49FA492 & 1) == 0 )
  {
    sub_1B640C8(&Method_WarehouseListViewManager_SetDragEnd__, method);
    byte_49FA492 = 1;
  }
  v3 = Method_WarehouseListViewManager_SetDragEnd__;
  if ( (*((_BYTE *)Method_WarehouseListViewManager_SetDragEnd__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1B640E0(Method_WarehouseListViewManager_SetDragEnd__);
  v4 = (System_Reflection_MethodBase_o *)sub_1B640AC(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
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
  *(_OWORD *)&this->fields.dragSelectSum = xmmword_BA3200;
  this->fields.isDragSelect = 1;
  this->fields.dragSelectFriendShipSum = 0;
}


void __fastcall WarehouseListViewManager__SetDragMove(
        WarehouseListViewManager_o *this,
        int32_t moveIndex,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( this->fields.dragEndIndex != moveIndex )
    WarehouseListViewManager__SetDragSelectItem(this, this->fields.dragStartIndex, moveIndex, v3);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall WarehouseListViewManager__SetDragSelect(
        WarehouseListViewManager_o *this,
        int32_t index,
        bool isDragSelect,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  System_Collections_Generic_List_object__o *itemSortList; // x0
  System_Collections_Generic_List_object__o *v11; // x19
  WarehouseListViewItem_c *v12; // x1
  __int64 methodPtr_low; // x9
  int syncRoot_high; // w8
  bool v15; // w21
  _BOOL4 v16; // w21
  bool IsSelect; // w0
  const MethodInfo *v18; // x4
  int v19; // w8
  UnityEngine_Object_o *v20; // x20
  __int64 v21; // x9
  bool result; // w0
  WarehouseListViewManager_o *v23; // x0
  int32_t v24; // w1
  bool v25; // w2
  const MethodInfo *v26; // x3

  if ( (byte_49FA490 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, *(_QWORD *)&index);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v7);
    sub_1B640C8(&WarehouseListViewItem_TypeInfo, v8);
    sub_1B640C8(&WarehouseListViewObject_TypeInfo, v9);
    byte_49FA490 = 1;
  }
  itemSortList = (System_Collections_Generic_List_object__o *)this->fields.itemSortList;
  if ( !itemSortList )
    goto LABEL_46;
  itemSortList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                itemSortList,
                                                                index,
                                                                (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
  if ( !itemSortList )
    goto LABEL_46;
  v11 = itemSortList;
  v12 = WarehouseListViewItem_TypeInfo;
  methodPtr_low = LOBYTE(WarehouseListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(itemSortList->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
    || (WarehouseListViewItem_c *)itemSortList->klass->_2.typeHierarchy[methodPtr_low - 1] != WarehouseListViewItem_TypeInfo )
  {
    goto LABEL_47;
  }
  syncRoot_high = HIDWORD(itemSortList[5].fields._syncRoot);
  if ( !isDragSelect )
  {
    if ( (syncRoot_high & 0x80000000) == 0 )
    {
      if ( !ListViewItem__get_IsSelect((ListViewItem_o *)itemSortList, 0LL) && SHIDWORD(v11[5].fields._syncRoot) >= 1 )
      {
        if ( BYTE6(v11[4].klass) )
          --this->fields.dragSelectFriendShipSum;
        else
          --this->fields.dragSelectSum;
        if ( !this->fields.kind )
        {
          itemSortList = (System_Collections_Generic_List_object__o *)v11[3].klass;
          if ( !itemSortList )
            goto LABEL_46;
          if ( ServantEntity__get_IsOrganization((ServantEntity_o *)itemSortList, 0LL)
            && !HIDWORD(v11[4].fields._syncRoot) )
          {
            --this->fields.dragServantSelectSum;
          }
        }
      }
      v15 = 0;
      v19 = -1;
      goto LABEL_27;
    }
    goto LABEL_29;
  }
  if ( (syncRoot_high & 0x80000000) == 0 )
    goto LABEL_29;
  HIDWORD(itemSortList[5].fields._syncRoot) = 0;
  v15 = 0;
  if ( WarehouseListViewItem__get_IsCanNotSelect((WarehouseListViewItem_o *)itemSortList, (const MethodInfo *)v12) )
    goto LABEL_30;
  v16 = this->fields.isDragSelect;
  IsSelect = ListViewItem__get_IsSelect((ListViewItem_o *)v11, 0LL);
  if ( !v16 )
  {
    if ( IsSelect )
    {
LABEL_45:
      v15 = 0;
      v19 = 1;
LABEL_27:
      HIDWORD(v11[5].fields._syncRoot) = v19;
      goto LABEL_30;
    }
    goto LABEL_29;
  }
  if ( IsSelect )
  {
LABEL_29:
    v15 = 0;
    goto LABEL_30;
  }
  if ( WarehouseListViewManager__IsSelectEnable(
         this,
         (WarehouseListViewItem_o *)v11,
         this->fields.dragSelectSum,
         this->fields.dragServantSelectSum,
         v18) )
  {
    if ( BYTE6(v11[4].klass) )
      ++this->fields.dragSelectFriendShipSum;
    else
      ++this->fields.dragSelectSum;
    if ( !this->fields.kind )
    {
      itemSortList = (System_Collections_Generic_List_object__o *)v11[3].klass;
      if ( !itemSortList )
        goto LABEL_46;
      if ( ServantEntity__get_IsOrganization((ServantEntity_o *)itemSortList, 0LL) && !HIDWORD(v11[4].fields._syncRoot) )
        ++this->fields.dragServantSelectSum;
    }
    goto LABEL_45;
  }
  v15 = 1;
LABEL_30:
  v20 = *(UnityEngine_Object_o **)&v11[2].fields._size;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality(v20, 0LL, 0LL) )
    return v15;
  itemSortList = *(System_Collections_Generic_List_object__o **)&v11[2].fields._size;
  if ( !itemSortList )
LABEL_46:
    sub_1B64324(itemSortList);
  v21 = LOBYTE(WarehouseListViewObject_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(itemSortList->klass->vtable._0_Equals.methodPtr) >= (unsigned int)v21
    && (WarehouseListViewObject_c *)itemSortList->klass->_2.typeHierarchy[v21 - 1] == WarehouseListViewObject_TypeInfo )
  {
    WarehouseListViewObject__SetupDisp((WarehouseListViewObject_o *)itemSortList, 0LL);
    return v15;
  }
LABEL_47:
  sub_1B645E4(itemSortList);
  WarehouseListViewManager__SetDragStart(v23, v24, v25, v26);
  return result;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarehouseListViewManager__SetDragSelectItem(
        WarehouseListViewManager_o *this,
        int32_t startIndex,
        int32_t endIndex,
        const MethodInfo *method)
{
  int v5; // w22
  WarehouseListViewManager_o *v6; // x19
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  int32_t dragStartIndex; // w8
  int32_t dragEndIndex; // w9
  int v12; // w25
  int v13; // w26
  int32_t v14; // w8
  int32_t v15; // w9
  int v16; // w24
  int32_t v17; // w20
  int32_t v18; // w23
  struct WarehouseListManager_o *parentManager; // x8
  int v20; // w27
  WarehouseListViewManager_o *v21; // x21
  __int64 methodPtr_low; // x9
  UnityEngine_Object_o *dropDragPrefab; // x22
  __int64 v24; // x9
  WarehouseListViewManager_o *v25; // x0
  int32_t v26; // w1
  bool v27; // w2
  const MethodInfo *v28; // x3

  v5 = startIndex;
  v6 = this;
  if ( (byte_49FA48F & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, *(_QWORD *)&startIndex);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v7);
    sub_1B640C8(&WarehouseListViewItem_TypeInfo, v8);
    this = (WarehouseListViewManager_o *)sub_1B640C8(&WarehouseListViewObject_TypeInfo, v9);
    byte_49FA48F = 1;
  }
  dragStartIndex = v6->fields.dragStartIndex;
  if ( (dragStartIndex & 0x80000000) != 0 )
  {
    v12 = -1;
    v13 = -1;
  }
  else
  {
    dragEndIndex = v6->fields.dragEndIndex;
    if ( dragStartIndex <= dragEndIndex )
      v12 = v6->fields.dragEndIndex;
    else
      v12 = v6->fields.dragStartIndex;
    if ( dragStartIndex <= dragEndIndex )
      v13 = v6->fields.dragStartIndex;
    else
      v13 = v6->fields.dragEndIndex;
  }
  if ( v5 <= endIndex )
    v14 = endIndex;
  else
    v14 = v5;
  if ( v5 <= endIndex )
    v15 = v5;
  else
    v15 = endIndex;
  if ( v5 < 0 )
    v16 = -1;
  else
    v16 = v14;
  if ( v5 < 0 )
    v17 = -1;
  else
    v17 = v15;
  v6->fields.dragStartIndex = v5;
  v6->fields.dragEndIndex = endIndex;
  if ( (v13 & 0x80000000) == 0 && v13 <= v12 )
  {
    v18 = v13;
    do
    {
      if ( v18 > v16 || (v17 & 0x80000000) != 0 || v18 < v17 )
        this = (WarehouseListViewManager_o *)WarehouseListViewManager__SetDragSelect(v6, v18, 0, method);
      ++v18;
    }
    while ( v18 <= v12 );
  }
  if ( (v5 & 0x80000000) == 0 )
  {
    if ( v5 <= endIndex )
    {
      do
      {
        if ( v5 > v12 || (v13 & 0x80000000) != 0 || v5 < v13 )
          this = (WarehouseListViewManager_o *)WarehouseListViewManager__SetDragSelect(v6, v5, 1, method);
        ++v5;
      }
      while ( v5 <= endIndex );
    }
    else
    {
      do
      {
        if ( v5 > v12 || (v13 & 0x80000000) != 0 || v5 < v13 )
          this = (WarehouseListViewManager_o *)WarehouseListViewManager__SetDragSelect(v6, v5, 1, method);
        --v5;
      }
      while ( v5 >= endIndex );
    }
    if ( (v17 & 0x80000000) == 0 && v6->fields.isDragSelect )
    {
      parentManager = v6->fields.parentManager;
      if ( !parentManager )
LABEL_63:
        sub_1B64324(this);
      if ( v17 <= v16 )
      {
        v20 = parentManager->fields.totalSum + 1;
        do
        {
          this = (WarehouseListViewManager_o *)v6->fields.itemSortList;
          if ( !this )
            goto LABEL_63;
          this = (WarehouseListViewManager_o *)System_Collections_Generic_List_object___get_Item(
                                                 (System_Collections_Generic_List_object__o *)this,
                                                 v17,
                                                 (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
          if ( !this )
            goto LABEL_63;
          v21 = this;
          methodPtr_low = LOBYTE(WarehouseListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
          if ( LOBYTE(this->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
            || (WarehouseListViewItem_c *)this->klass->_2.typeHierarchy[methodPtr_low - 1] != WarehouseListViewItem_TypeInfo )
          {
            goto LABEL_64;
          }
          if ( SHIDWORD(this->fields.topItem) >= 1 )
          {
            HIDWORD(this->fields.topItem) = v20;
            dropDragPrefab = (UnityEngine_Object_o *)this->fields.dropDragPrefab;
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            ++v20;
            if ( UnityEngine_Object__op_Inequality(dropDragPrefab, 0LL, 0LL) )
            {
              this = (WarehouseListViewManager_o *)v21->fields.dropDragPrefab;
              if ( !this )
                goto LABEL_63;
              v24 = LOBYTE(WarehouseListViewObject_TypeInfo->vtable._0_Equals.methodPtr);
              if ( LOBYTE(this->klass->vtable._0_Equals.methodPtr) < (unsigned int)v24
                || (WarehouseListViewObject_c *)this->klass->_2.typeHierarchy[v24 - 1] != WarehouseListViewObject_TypeInfo )
              {
LABEL_64:
                sub_1B645E4(this);
                WarehouseListViewManager__SetDragSelect(v25, v26, v27, v28);
                return;
              }
              WarehouseListViewObject__SetupDisp((WarehouseListViewObject_o *)this, 0LL);
            }
          }
          ++v17;
        }
        while ( v17 <= v16 );
      }
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarehouseListViewManager__SetDragStart(
        WarehouseListViewManager_o *this,
        int32_t startIndex,
        bool isDragSelect,
        const MethodInfo *method)
{
  bool v6; // w21
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  System_Collections_Generic_List_object__o *itemSortList; // x0
  int size; // w22
  int32_t v12; // w21
  __int64 methodPtr_low; // x9
  UnityEngine_Object_o *scrollView; // x20

  v6 = isDragSelect;
  if ( (byte_49FA491 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, *(_QWORD *)&startIndex);
    sub_1B640C8(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v7);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v8);
    sub_1B640C8(&WarehouseListViewItem_TypeInfo, v9);
    byte_49FA491 = 1;
  }
  *(_OWORD *)&this->fields.dragSelectSum = xmmword_BA3200;
  itemSortList = (System_Collections_Generic_List_object__o *)this->fields.itemSortList;
  this->fields.isDragSelect = v6;
  this->fields.dragSelectFriendShipSum = 0;
  if ( !itemSortList )
    goto LABEL_19;
  size = itemSortList->fields._size;
  if ( size >= 1 )
  {
    v12 = 0;
    while ( 1 )
    {
      itemSortList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                    itemSortList,
                                                                    v12,
                                                                    (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
      if ( !itemSortList )
        goto LABEL_19;
      methodPtr_low = LOBYTE(WarehouseListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(itemSortList->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
        || (WarehouseListViewItem_c *)itemSortList->klass->_2.typeHierarchy[methodPtr_low - 1] != WarehouseListViewItem_TypeInfo )
      {
        break;
      }
      ++v12;
      HIDWORD(itemSortList[5].fields._syncRoot) = -1;
      if ( size == v12 )
        goto LABEL_12;
      itemSortList = (System_Collections_Generic_List_object__o *)this->fields.itemSortList;
      if ( !itemSortList )
        goto LABEL_19;
    }
    sub_1B645E4(itemSortList);
LABEL_19:
    sub_1B64324(itemSortList);
  }
LABEL_12:
  WarehouseListViewManager__SetDragSelectItem(this, startIndex, startIndex, method);
  scrollView = (UnityEngine_Object_o *)this->fields.scrollView;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(scrollView, 0LL, 0LL) )
  {
    itemSortList = (System_Collections_Generic_List_object__o *)this->fields.scrollView;
    if ( !itemSortList )
      goto LABEL_19;
    UIScrollView__Press((UIScrollView_o *)itemSortList, 0, 0LL);
  }
}


void __fastcall WarehouseListViewManager__SetFilterButtonImage(
        WarehouseListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  ListViewSort_o *sort; // x0
  UISprite_o *filterSprite; // x19
  System_String_o **v6; // x8

  if ( (byte_49FA488 & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_17441/*"btn_filter_on"*/, method);
    sub_1B640C8(&StringLiteral_17440/*"btn_filter"*/, v3);
    byte_49FA488 = 1;
  }
  sort = this->fields.sort;
  if ( !sort
    || (filterSprite = this->fields.filterSprite,
        sort = (ListViewSort_o *)ListViewSort__CheckFilterDefaultAll(sort, -1, 0LL),
        !filterSprite) )
  {
    sub_1B64324(sort);
  }
  v6 = (System_String_o **)&StringLiteral_17440/*"btn_filter"*/;
  if ( ((unsigned __int8)sort & 1) == 0 )
    v6 = (System_String_o **)&StringLiteral_17441/*"btn_filter_on"*/;
  UISprite__set_spriteName(filterSprite, *v6, 0LL);
}


void __fastcall WarehouseListViewManager__SetMode(
        WarehouseListViewManager_o *this,
        int32_t mode,
        WarehouseListViewManager_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v6; // x2

  this->fields.callbackFunc = callback;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc,
    (int32_t)callback,
    (int32_t)callback,
    (int32_t)method);
  WarehouseListViewManager__SetMode_35529392(this, mode, v6);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarehouseListViewManager__SetMode_35529392(
        WarehouseListViewManager_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x0
  _BOOL8 v13; // x0
  WarehouseListViewItem_o *v14; // x20
  __int64 v15; // x9
  const MethodInfo *v16; // x1
  _BOOL8 v17; // x0
  struct WarehouseListManager_o *v18; // x8
  struct WarehouseListViewManager_o *v19; // x9
  UILabel_o *v20; // x21
  System_String_o *v21; // x0
  struct WarehouseListManager_o *v22; // x8
  System_String_o *v23; // x22
  __int64 v24; // x0
  struct WarehouseListManager_o *v25; // x8
  Il2CppObject *v26; // x23
  Il2CppObject *v27; // x2
  System_String_o *v28; // x0
  __int64 v29; // x0
  const MethodInfo *v30; // x2
  struct WarehouseListManager_o *v31; // x8
  WarehouseListViewManager_o *v32; // x0
  char v33; // w24
  _BOOL8 v34; // x0
  WarehouseListViewItem_o *current; // x20
  __int64 methodPtr_low; // x9
  const MethodInfo *v37; // x1
  _BOOL8 CanNotSelect; // x0
  struct WarehouseListManager_o *parentManager; // x8
  struct WarehouseListViewManager_o *baseListViewManager; // x9
  UILabel_o *selectDoneLabel; // x21
  System_String_o *v42; // x0
  struct WarehouseListManager_o *v43; // x8
  System_String_o *v44; // x22
  __int64 v45; // x0
  struct WarehouseListManager_o *v46; // x8
  Il2CppObject *v47; // x23
  Il2CppObject *v48; // x2
  System_String_o *v49; // x0
  __int64 v50; // x0
  const MethodInfo *v51; // x2
  struct WarehouseListManager_o *v52; // x8
  WarehouseListViewManager_o *v53; // x0
  const MethodInfo *v54; // x1
  const MethodInfo *v55; // x2
  int32_t v56; // w1
  const MethodInfo *v57; // x1
  int32_t sendMax; // [xsp+4h] [xbp-9Ch] BYREF
  System_Collections_Generic_List_Enumerator_object__o v59; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v60; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_49FA477 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__, *(_QWORD *)&mode);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v6);
    sub_1B640C8(&int_TypeInfo, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v8);
    sub_1B640C8(&LocalizationManager_TypeInfo, v9);
    sub_1B640C8(&WarehouseListViewItem_TypeInfo, v10);
    sub_1B640C8(&StringLiteral_12321/*"SUM_INFO"*/, v11);
    byte_49FA477 = 1;
  }
  memset(&v60, 0, sizeof(v60));
  this->fields.initMode = mode;
  this->fields.callbackCount = ListViewManager__get_ObjectSum((ListViewManager_o *)this, 0LL);
  ListViewManager__set_IsInput((ListViewManager_o *)this, mode == 2, 0LL);
  if ( (unsigned int)(mode - 1) < 2 )
  {
    itemList = this->fields.itemList;
    if ( itemList )
    {
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v59,
        (System_Collections_Generic_List_object__o *)itemList,
        (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
      v60 = v59;
      v33 = 0;
      while ( 1 )
      {
        v34 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v60,
                (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
        if ( !v34 )
          break;
        current = (WarehouseListViewItem_o *)v60.fields._current;
        if ( !v60.fields._current )
          goto LABEL_50;
        methodPtr_low = LOBYTE(WarehouseListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(v60.fields._current->klass->vtable[0].methodPtr) < (unsigned int)methodPtr_low
          || (WarehouseListViewItem_c *)v60.fields._current->klass->_2.typeHierarchy[methodPtr_low - 1] != WarehouseListViewItem_TypeInfo )
        {
          sub_1B645E4(v60.fields._current);
LABEL_50:
          sub_1B64324(v34);
        }
        if ( ListViewItem__get_IsSelect((ListViewItem_o *)v60.fields._current, 0LL) )
        {
          CanNotSelect = WarehouseListViewItem__get_IsCanNotSelect(current, v37);
          if ( CanNotSelect )
          {
            parentManager = this->fields.parentManager;
            --this->fields.selectSum;
            if ( !parentManager )
              sub_1B64324(CanNotSelect);
            baseListViewManager = parentManager->fields.baseListViewManager;
            if ( !baseListViewManager )
              sub_1B64324(CanNotSelect);
            parentManager->fields.totalSum = baseListViewManager->fields.selectSum;
            selectDoneLabel = this->fields.selectDoneLabel;
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            v42 = LocalizationManager__Get((System_String_o *)StringLiteral_12321/*"SUM_INFO"*/, 0LL);
            v43 = this->fields.parentManager;
            if ( !v43 )
              sub_1B64324(v42);
            v44 = v42;
            LODWORD(v59.fields._list) = v43->fields.totalSum;
            v45 = j_il2cpp_value_box_0(int_TypeInfo, &v59);
            v46 = this->fields.parentManager;
            if ( !v46 )
              sub_1B64324(v45);
            v47 = (Il2CppObject *)v45;
            sendMax = v46->fields.sendMax;
            v48 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &sendMax);
            v49 = System_String__Format_61389768(v44, v47, v48, 0LL);
            if ( !selectDoneLabel )
              sub_1B64324(v49);
            UILabel__set_text(selectDoneLabel, v49, 0LL);
            v52 = this->fields.parentManager;
            if ( !v52 )
              sub_1B64324(v50);
            v53 = v52->fields.baseListViewManager;
            if ( !v53 )
              sub_1B64324(0LL);
            WarehouseListViewManager__DecrementNumber(v53, current->fields.selectNum, v51);
            ListViewItem__set_IsSelect((ListViewItem_o *)current, 0, 0LL);
            v33 = 1;
          }
        }
      }
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v60,
        (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
      if ( (v33 & 1) != 0 )
        WarehouseListViewManager__RefrashListDisp(this, v54);
      if ( this->fields.isInput )
        v56 = 3;
      else
        v56 = 2;
      goto LABEL_47;
    }
LABEL_60:
    sub_1B64324(itemList);
  }
  if ( mode != 3 )
    return;
  itemList = this->fields.itemList;
  if ( !itemList )
    goto LABEL_60;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v59,
    (System_Collections_Generic_List_object__o *)itemList,
    (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  v60 = v59;
  while ( 1 )
  {
    v13 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v60,
            (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    if ( !v13 )
      break;
    v14 = (WarehouseListViewItem_o *)v60.fields._current;
    if ( !v60.fields._current )
      goto LABEL_52;
    v15 = LOBYTE(WarehouseListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(v60.fields._current->klass->vtable[0].methodPtr) < (unsigned int)v15
      || (WarehouseListViewItem_c *)v60.fields._current->klass->_2.typeHierarchy[v15 - 1] != WarehouseListViewItem_TypeInfo )
    {
      sub_1B645E4(v60.fields._current);
LABEL_52:
      sub_1B64324(v13);
    }
    if ( ListViewItem__get_IsSelect((ListViewItem_o *)v60.fields._current, 0LL) )
    {
      v17 = WarehouseListViewItem__get_IsCanNotSelect(v14, v16);
      if ( v17 )
      {
        v18 = this->fields.parentManager;
        --this->fields.selectSum;
        if ( !v18 )
          sub_1B64324(v17);
        v19 = v18->fields.baseListViewManager;
        if ( !v19 )
          sub_1B64324(v17);
        v18->fields.totalSum = v19->fields.selectSum;
        v20 = this->fields.selectDoneLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v21 = LocalizationManager__Get((System_String_o *)StringLiteral_12321/*"SUM_INFO"*/, 0LL);
        v22 = this->fields.parentManager;
        if ( !v22 )
          sub_1B64324(v21);
        v23 = v21;
        LODWORD(v59.fields._list) = v22->fields.totalSum;
        v24 = j_il2cpp_value_box_0(int_TypeInfo, &v59);
        v25 = this->fields.parentManager;
        if ( !v25 )
          sub_1B64324(v24);
        v26 = (Il2CppObject *)v24;
        sendMax = v25->fields.sendMax;
        v27 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &sendMax);
        v28 = System_String__Format_61389768(v23, v26, v27, 0LL);
        if ( !v20 )
          sub_1B64324(v28);
        UILabel__set_text(v20, v28, 0LL);
        v31 = this->fields.parentManager;
        if ( !v31 )
          sub_1B64324(v29);
        v32 = v31->fields.baseListViewManager;
        if ( !v32 )
          sub_1B64324(0LL);
        WarehouseListViewManager__DecrementNumber(v32, v14->fields.selectNum, v30);
        ListViewItem__set_IsSelect((ListViewItem_o *)v14, 0, 0LL);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v60,
    (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
  WarehouseListViewManager__RefrashListDisp(this, v57);
  v56 = 4;
LABEL_47:
  WarehouseListViewManager__RequestListObject_35530968(this, v56, v55);
}


void __fastcall WarehouseListViewManager__SetObjectItem(
        WarehouseListViewManager_o *this,
        ListViewObject_o *obj,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  WarehouseListViewManager_o *v5; // x20
  __int64 methodPtr_low; // x10
  int32_t v7; // w1

  v5 = this;
  if ( (byte_49FA476 & 1) == 0 )
  {
    this = (WarehouseListViewManager_o *)sub_1B640C8(&WarehouseListViewObject_TypeInfo, obj);
    byte_49FA476 = 1;
  }
  if ( !obj
    || (methodPtr_low = LOBYTE(WarehouseListViewObject_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(obj->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low)
    || (WarehouseListViewObject_c *)obj->klass->_2.typeHierarchy[methodPtr_low - 1] != WarehouseListViewObject_TypeInfo )
  {
    sub_1B64324(this);
  }
  if ( v5->fields.initMode == 2 )
    v7 = 3;
  else
    v7 = 2;
  WarehouseListViewObject__Init_35621528((WarehouseListViewObject_o *)obj, v7, 0LL);
}


void __fastcall WarehouseListViewManager__SetSortButtonImage(
        WarehouseListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  UnityEngine_Object_o *sortKindLabel; // x20
  ListViewSort_o *sort; // x0
  UILabel_o *v11; // x20
  UnityEngine_Object_o *sortOrderSprite; // x20
  struct ListViewSort_o *v13; // x8
  int32_t sortKind; // w9
  System_String_o **v15; // x8
  struct ListViewSort_o *v16; // x8
  System_String_o **v17; // x9
  System_String_o **v18; // x10
  System_String_o **v19; // x8
  System_String_o **v20; // x8
  UnityEngine_Object_o *bonusFilterKindLabel; // x20
  UILabel_o *v22; // x20

  if ( (byte_49FA48B & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, method);
    sub_1B640C8(&StringLiteral_17471/*"btn_sort_up"*/, v3);
    sub_1B640C8(&StringLiteral_17558/*"btn_txt_up"*/, v4);
    sub_1B640C8(&StringLiteral_17514/*"btn_txt_new"*/, v5);
    sub_1B640C8(&StringLiteral_17504/*"btn_txt_down"*/, v6);
    sub_1B640C8(&StringLiteral_17521/*"btn_txt_old"*/, v7);
    sub_1B640C8(&StringLiteral_17468/*"btn_sort_down"*/, v8);
    byte_49FA48B = 1;
  }
  sortKindLabel = (UnityEngine_Object_o *)this->fields.sortKindLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(sortKindLabel, 0LL, 0LL) )
  {
    sort = this->fields.sort;
    if ( !sort )
      goto LABEL_41;
    v11 = this->fields.sortKindLabel;
    sort = (ListViewSort_o *)ListViewSort__GetSortKindButtonText(sort, 0, 0LL);
    if ( !v11 )
      goto LABEL_41;
    UILabel__set_text(v11, (System_String_o *)sort, 0LL);
  }
  sortOrderSprite = (UnityEngine_Object_o *)this->fields.sortOrderSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  sort = (ListViewSort_o *)UnityEngine_Object__op_Inequality(sortOrderSprite, 0LL, 0LL);
  if ( ((unsigned __int8)sort & 1) != 0 )
  {
    v13 = this->fields.sort;
    if ( !v13 )
      goto LABEL_41;
    sortKind = v13->fields.sortKind;
    if ( sortKind == 11 || sortKind == 1 )
    {
      sort = (ListViewSort_o *)this->fields.sortExplanationSprite;
      if ( !sort )
        goto LABEL_41;
      v15 = (System_String_o **)(v13->fields.isAscendingOrder ? &StringLiteral_17521/*"btn_txt_old"*/ : &StringLiteral_17514/*"btn_txt_new"*/);
      UISprite__set_spriteName((UISprite_o *)sort, *v15, 0LL);
      v16 = this->fields.sort;
      if ( !v16 )
        goto LABEL_41;
      sort = (ListViewSort_o *)this->fields.sortOrderSprite;
      if ( !sort )
        goto LABEL_41;
      v17 = (System_String_o **)&StringLiteral_17468/*"btn_sort_down"*/;
      v18 = (System_String_o **)&StringLiteral_17471/*"btn_sort_up"*/;
    }
    else
    {
      sort = (ListViewSort_o *)this->fields.sortExplanationSprite;
      if ( !sort )
        goto LABEL_41;
      v19 = (System_String_o **)(v13->fields.isAscendingOrder ? &StringLiteral_17558/*"btn_txt_up"*/ : &StringLiteral_17504/*"btn_txt_down"*/);
      UISprite__set_spriteName((UISprite_o *)sort, *v19, 0LL);
      v16 = this->fields.sort;
      if ( !v16 )
        goto LABEL_41;
      sort = (ListViewSort_o *)this->fields.sortOrderSprite;
      if ( !sort )
        goto LABEL_41;
      v17 = (System_String_o **)&StringLiteral_17471/*"btn_sort_up"*/;
      v18 = (System_String_o **)&StringLiteral_17468/*"btn_sort_down"*/;
    }
    if ( v16->fields.isAscendingOrder )
      v20 = v17;
    else
      v20 = v18;
    UISprite__set_spriteName((UISprite_o *)sort, *v20, 0LL);
  }
  bonusFilterKindLabel = (UnityEngine_Object_o *)this->fields.bonusFilterKindLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(bonusFilterKindLabel, 0LL, 0LL) )
  {
    sort = this->fields.sort;
    if ( !sort )
      goto LABEL_41;
    if ( sort->fields.isBonusKind )
    {
      v22 = this->fields.bonusFilterKindLabel;
      sort = (ListViewSort_o *)ListViewSort__GetBonusFilterButtonText(
                                 sort,
                                 this->fields.alignedBonusFilterInfos,
                                 this->fields.isQuestStart,
                                 0LL);
      if ( v22 )
      {
        UILabel__set_text(v22, (System_String_o *)sort, 0LL);
        return;
      }
LABEL_41:
      sub_1B64324(sort);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarehouseListViewManager__UpdateItemState(
        WarehouseListViewManager_o *this,
        bool isPushMode,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  System_Collections_Generic_List_object__o *SelfUserGame; // x0
  System_Collections_Generic_List_object__o *v11; // x8
  System_Collections_Generic_List_object__c *klass; // x23
  Il2CppObject *v13; // x21
  _BOOL8 v14; // x0
  Il2CppObject *current; // x20
  __int64 methodPtr_low; // x9
  Il2CppClass *v17; // x8
  Il2CppType byval_arg; // q0
  UserServantEntity_o *v19; // x0
  _BOOL4 IsLeave; // w8
  bool v21; // w8
  Il2CppObject *v22; // x26
  UserServantEntity_o *v23; // x0
  _BOOL8 IsEventJoin; // x0
  UserServantEntity_o *v25; // x0
  UserServantEntity_o *v26; // x0
  UserServantEntity_o *v27; // x0
  Il2CppObject *v28; // [xsp+8h] [xbp-C8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v29; // [xsp+10h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v30; // [xsp+30h] [xbp-A0h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v31; // [xsp+50h] [xbp-80h] BYREF

  if ( (byte_49FA497 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__, isPushMode);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v6);
    sub_1B640C8(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v7);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v8);
    sub_1B640C8(&WarehouseListViewItem_TypeInfo, v9);
    byte_49FA497 = 1;
  }
  memset(&v31, 0, sizeof(v31));
  SelfUserGame = (System_Collections_Generic_List_object__o *)UserGameMaster__getSelfUserGame(0LL);
  if ( !SelfUserGame
    || (v11 = SelfUserGame, (SelfUserGame = (System_Collections_Generic_List_object__o *)this->fields.itemList) == 0LL) )
  {
    sub_1B64324(SelfUserGame);
  }
  klass = v11[3].klass;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v30,
    SelfUserGame,
    (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  v13 = 0LL;
  v28 = 0LL;
  *(_OWORD *)&v31.fields._list = *(_OWORD *)&v30.fields.currentCryptoKey;
  v31.fields._current = (Il2CppObject *)v30.fields.fakeValue;
  while ( 1 )
  {
    v14 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v31,
            (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    if ( !v14 )
      break;
    current = v31.fields._current;
    if ( !v31.fields._current )
      goto LABEL_39;
    methodPtr_low = LOBYTE(WarehouseListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(v31.fields._current->klass->vtable[0].methodPtr) < (unsigned int)methodPtr_low
      || (WarehouseListViewItem_c *)v31.fields._current->klass->_2.typeHierarchy[methodPtr_low - 1] != WarehouseListViewItem_TypeInfo )
    {
      sub_1B645E4(v31.fields._current);
LABEL_39:
      sub_1B64324(v14);
    }
    v17 = v31.fields._current[7].klass;
    BYTE3(v31.fields._current[10].klass) = isPushMode;
    if ( !v17 )
      sub_1B64324(v14);
    byval_arg = v17->_1.byval_arg;
    *(_OWORD *)&v30.fields.currentCryptoKey = *(_OWORD *)&v17->_1.name;
    *(Il2CppType *)&v30.fields.fakeValue = byval_arg;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    v29 = v30;
    BYTE4(current[10].klass) = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46175132(&v29, 0LL) == (_QWORD)klass;
    if ( isPushMode )
    {
      v19 = (UserServantEntity_o *)current[7].klass;
      if ( !v19 )
        sub_1B64324(0LL);
      IsLeave = UserServantEntity__IsLeave(v19, 0LL);
      if ( !IsLeave )
        v13 = current;
      if ( IsLeave )
      {
        v21 = 0;
        v22 = current;
      }
      else
      {
        v23 = (UserServantEntity_o *)current[7].klass;
        if ( !v23 )
          sub_1B64324(0LL);
        IsEventJoin = UserServantEntity__IsEventJoin(v23, 0LL);
        if ( IsEventJoin )
          v22 = v28;
        else
          v22 = v13;
        if ( IsEventJoin )
        {
          v21 = 0;
          v22 = current;
        }
        else
        {
          v25 = (UserServantEntity_o *)current[7].klass;
          if ( !v25 )
            sub_1B64324(0LL);
          IsEventJoin = UserServantEntity__IsCombineMaterial(v25, 0LL);
          if ( IsEventJoin )
          {
            v21 = 0;
            v22 = v13;
          }
          else
          {
            v26 = (UserServantEntity_o *)current[7].klass;
            if ( !v26 )
              sub_1B64324(0LL);
            IsEventJoin = UserServantEntity__IsStatusUp(v26, 0LL);
            if ( IsEventJoin )
            {
              v21 = 0;
            }
            else
            {
              v27 = (UserServantEntity_o *)current[7].klass;
              if ( !v27 )
                sub_1B64324(0LL);
              IsEventJoin = UserServantEntity__IsMaterialTd(v27, 0LL);
              v21 = !IsEventJoin;
            }
          }
          v28 = current;
        }
        if ( !v22 )
          sub_1B64324(IsEventJoin);
      }
      BYTE5(v22[10].klass) = v21;
    }
    else
    {
      BYTE5(current[10].klass) = 1;
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v31,
    (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
}


void __fastcall WarehouseListViewManager__add_callbackFunc(
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

  if ( (byte_49FA469 & 1) == 0 )
  {
    sub_1B640C8(&WarehouseListViewManager_CallbackFunc_TypeInfo, value);
    byte_49FA469 = 1;
  }
  callbackFunc = (System_Delegate_o *)this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  while ( 1 )
  {
    v7 = System_Delegate__Combine(callbackFunc, (System_Delegate_o *)value, 0LL);
    if ( v7 )
    {
      if ( (WarehouseListViewManager_CallbackFunc_c *)v7->klass != WarehouseListViewManager_CallbackFunc_TypeInfo )
        break;
    }
    v8 = sub_1B9F5B8(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1B645E4(v7);
  WarehouseListViewManager__remove_callbackFunc(v10, v11, v12);
}


System_Collections_Generic_List_WarehouseListViewObject__o *__fastcall WarehouseListViewManager__get_ClippingObjectList(
        WarehouseListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  System_Collections_Generic_List_object__o *v12; // x19
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  Il2CppObject *current; // x21
  _BOOL8 v15; // x0
  Il2CppObject *Component_object; // x0
  Il2CppObject *v17; // x21
  ListViewItem_o *Item; // x0
  int32_t v19; // w2
  int32_t v20; // w3
  _BOOL8 v21; // x0
  struct System_Object_array *items; // x8
  _QWORD *v23; // x9
  __int64 size; // x10
  Il2CppClass **v25; // x0
  System_Collections_Generic_List_Enumerator_object__o v27; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v28; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_49FA46E & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, method);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v4);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v5);
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_WarehouseListViewObject___, v6);
    sub_1B640C8(&Method_System_Collections_Generic_List_WarehouseListViewObject__Add__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v8);
    sub_1B640C8(&Method_System_Collections_Generic_List_WarehouseListViewObject___ctor__, v9);
    sub_1B640C8(&System_Collections_Generic_List_WarehouseListViewObject__TypeInfo, v10);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v11);
    byte_49FA46E = 1;
  }
  memset(&v28, 0, sizeof(v28));
  v12 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_WarehouseListViewObject__TypeInfo,
                                                       method,
                                                       v2);
  System_Collections_Generic_List_object____ctor(
    v12,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_WarehouseListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_1B64324(0LL);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v27,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v28 = v27;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v28,
            (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v28.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v15 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v15 )
    {
      if ( !current )
        sub_1B64324(v15);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_WarehouseListViewObject___);
      v17 = Component_object;
      if ( !Component_object )
        sub_1B64324(0LL);
      Item = (ListViewItem_o *)WarehouseListViewObject__GetItem((WarehouseListViewObject_o *)Component_object, 0LL);
      if ( !Item )
        sub_1B64324(0LL);
      if ( Item->fields.isTermination )
      {
        v21 = ListViewManager__ClippingItem_40389508((ListViewManager_o *)this, Item, 0LL);
        if ( v21 )
        {
          if ( !v12 )
            sub_1B64324(v21);
          items = v12->fields._items;
          v23 = Method_System_Collections_Generic_List_WarehouseListViewObject__Add__;
          ++v12->fields._version;
          if ( !items )
            sub_1B64324(v21);
          size = v12->fields._size;
          if ( (unsigned int)size < items->max_length )
            goto LABEL_17;
LABEL_21:
          System_Collections_Generic_List_object___AddWithResize(
            v12,
            v17,
            *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v23[4] + 192LL) + 112LL));
        }
      }
      else
      {
        if ( !v12 )
          sub_1B64324(Item);
        items = v12->fields._items;
        v23 = Method_System_Collections_Generic_List_WarehouseListViewObject__Add__;
        ++v12->fields._version;
        if ( !items )
          sub_1B64324(Item);
        size = v12->fields._size;
        if ( (unsigned int)size >= items->max_length )
          goto LABEL_21;
LABEL_17:
        v25 = &items->obj.klass + size;
        v12->fields._size = size + 1;
        v25[4] = (Il2CppClass *)v17;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)(v25 + 4), (int32_t)v17, v19, v20);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v28,
    (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_WarehouseListViewObject__o *)v12;
}


System_Collections_Generic_List_WarehouseListViewObject__o *__fastcall WarehouseListViewManager__get_ObjectList(
        WarehouseListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  System_Collections_Generic_List_object__o *v12; // x19
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  Il2CppObject *current; // x20
  _BOOL8 v15; // x0
  Il2CppObject *Component_object; // x0
  int32_t v17; // w2
  int32_t v18; // w3
  Il2CppObject *v19; // x1
  struct System_Object_array *items; // x8
  _QWORD *v21; // x9
  __int64 size; // x10
  Il2CppClass **v23; // x0
  System_Collections_Generic_List_Enumerator_object__o v25; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v26; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_49FA46D & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, method);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v4);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v5);
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_WarehouseListViewObject___, v6);
    sub_1B640C8(&Method_System_Collections_Generic_List_WarehouseListViewObject__Add__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v8);
    sub_1B640C8(&Method_System_Collections_Generic_List_WarehouseListViewObject___ctor__, v9);
    sub_1B640C8(&System_Collections_Generic_List_WarehouseListViewObject__TypeInfo, v10);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v11);
    byte_49FA46D = 1;
  }
  memset(&v26, 0, sizeof(v26));
  v12 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_WarehouseListViewObject__TypeInfo,
                                                       method,
                                                       v2);
  System_Collections_Generic_List_object____ctor(
    v12,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_WarehouseListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_1B64324(0LL);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v25,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v26 = v25;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v26,
            (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v26.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v15 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v15 )
    {
      if ( !current )
        sub_1B64324(v15);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_WarehouseListViewObject___);
      v19 = Component_object;
      if ( !v12 )
        sub_1B64324(Component_object);
      items = v12->fields._items;
      v21 = Method_System_Collections_Generic_List_WarehouseListViewObject__Add__;
      ++v12->fields._version;
      if ( !items )
        sub_1B64324(Component_object);
      size = v12->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v12,
          Component_object,
          *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v21[4] + 192LL) + 112LL));
      }
      else
      {
        v23 = &items->obj.klass + size;
        v12->fields._size = size + 1;
        v23[4] = (Il2CppClass *)v19;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)(v23 + 4), (int32_t)v19, v17, v18);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v26,
    (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_WarehouseListViewObject__o *)v12;
}


void __fastcall WarehouseListViewManager__remove_callbackFunc(
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

  if ( (byte_49FA46A & 1) == 0 )
  {
    sub_1B640C8(&WarehouseListViewManager_CallbackFunc_TypeInfo, value);
    byte_49FA46A = 1;
  }
  callbackFunc = (System_Delegate_o *)this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  while ( 1 )
  {
    v7 = System_Delegate__Remove(callbackFunc, (System_Delegate_o *)value, 0LL);
    if ( v7 )
    {
      if ( (WarehouseListViewManager_CallbackFunc_c *)v7->klass != WarehouseListViewManager_CallbackFunc_TypeInfo )
        break;
    }
    v8 = sub_1B9F5B8(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1B645E4(v7);
  WarehouseListViewManager__DeleteContinueData(v10);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarehouseListViewManager_CallbackFunc___ctor(
        WarehouseListViewManager_CallbackFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  __int64 v4; // x8
  __int64 v6; // x21
  int v8; // w22
  struct System_Reflection_MethodInfo_o *v9; // x9
  __int64 v10; // x0

  v4 = *(_QWORD *)(*(_QWORD *)&method + 8LL);
  *(_QWORD *)&this->fields.extra_arg = *(_QWORD *)&method;
  v6 = *(_QWORD *)&method;
  *(_QWORD *)&this->fields.method_ptr = v4;
  *(_QWORD *)&this->fields.method = object;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.method, (int32_t)object, method, (int32_t)a4);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1B64188(v6) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1B64340(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1B641F0(v10, 0LL);
    }
    goto LABEL_5;
  }
  if ( v8 != 2 )
  {
LABEL_5:
    v9 = *(struct System_Reflection_MethodInfo_o **)&this->fields.method;
    this->fields.m_target = *(Il2CppObject **)&this->fields.method_ptr;
    this->fields.original_method_info = v9;
    goto LABEL_6;
  }
  this->fields.m_target = (Il2CppObject *)sub_19AA858;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_19AA800;
}


// local variable allocation has failed, the output may be wrong!
System_IAsyncResult_o *__fastcall WarehouseListViewManager_CallbackFunc__BeginInvoke(
        WarehouseListViewManager_CallbackFunc_o *this,
        int32_t resultKind,
        WarehouseListViewItem_o *item,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v11[3]; // [xsp+8h] [xbp-58h] BYREF
  int32_t v12; // [xsp+2Ch] [xbp-34h] BYREF

  v12 = resultKind;
  if ( (byte_49FA53F & 1) == 0 )
  {
    sub_1B640C8(&WarehouseListViewManager_ResultKind_TypeInfo, *(_QWORD *)&resultKind);
    byte_49FA53F = 1;
  }
  v11[2] = 0LL;
  v11[0] = j_il2cpp_value_box_0(WarehouseListViewManager_ResultKind_TypeInfo, &v12);
  v11[1] = (__int64)item;
  return (System_IAsyncResult_o *)sub_1B6407C(this, v11, callback, object);
}


void __fastcall WarehouseListViewManager_CallbackFunc__EndInvoke(
        WarehouseListViewManager_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1B64080(result, 0LL, method);
}


void __fastcall WarehouseListViewManager_CallbackFunc__Invoke(
        WarehouseListViewManager_CallbackFunc_o *this,
        int32_t resultKind,
        WarehouseListViewItem_o *item,
        const MethodInfo *method)
{
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, int32_t, WarehouseListViewItem_o *, _QWORD))this->fields.m_target)(
    this->fields.original_method_info,
    resultKind,
    item,
    *(_QWORD *)&this->fields.extra_arg);
}