void __fastcall WarehouseListViewManager___cctor(const MethodInfo *method)
{
  System_String_array **v1; // x2
  System_String_array **v2; // x3
  System_Boolean_array **v3; // x4
  System_Int32_array **v4; // x5
  System_Int32_array *v5; // x6
  System_Int32_array *v6; // x7
  BattleServantConfConponent_o *static_fields; // x0
  System_Int32_array **v8; // x1
  System_String_o *SORT_SAVE_KEY; // x19
  System_String_o *v10; // x0
  System_String_o *v11; // x19
  ListViewSort_o *v12; // x20
  struct WarehouseListViewManager_StaticFields *v13; // x0
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  System_String_o *v20; // x19
  System_String_o *v21; // x0
  System_String_o *v22; // x19
  ListViewSort_o *v23; // x20
  struct WarehouseListViewManager_StaticFields *v24; // x0
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  System_String_o *v31; // x19
  System_String_o *v32; // x0
  System_String_o *v33; // x19
  ListViewSort_o *v34; // x20
  struct WarehouseListViewManager_StaticFields *v35; // x0
  System_String_array **v36; // x2
  System_String_array **v37; // x3
  System_Boolean_array **v38; // x4
  System_Int32_array **v39; // x5
  System_Int32_array *v40; // x6
  System_Int32_array *v41; // x7
  System_String_o *v42; // x19
  System_String_o *v43; // x0
  System_String_o *v44; // x19
  ListViewSort_o *v45; // x20
  struct WarehouseListViewManager_StaticFields *v46; // x0
  System_String_array **v47; // x2
  System_String_array **v48; // x3
  System_Boolean_array **v49; // x4
  System_Int32_array **v50; // x5
  System_Int32_array *v51; // x6
  System_Int32_array *v52; // x7
  int v53; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_42B0CA9 & 1) == 0 )
  {
    sub_B52984(&ListViewSort_TypeInfo);
    sub_B52984(&WarehouseListViewManager_TypeInfo);
    sub_B52984(&StringLiteral_15531/*"Warehouse"*/);
    byte_42B0CA9 = 1;
  }
  static_fields = (BattleServantConfConponent_o *)WarehouseListViewManager_TypeInfo->static_fields;
  v8 = (System_Int32_array **)StringLiteral_15531/*"Warehouse"*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_15531/*"Warehouse"*/;
  sub_B52920(static_fields, v8, v1, v2, v3, v4, v5, v6);
  SORT_SAVE_KEY = WarehouseListViewManager_TypeInfo->static_fields->SORT_SAVE_KEY;
  v53 = 1;
  v10 = System_Int32__ToString((int32_t)&v53, 0LL);
  v11 = System_String__Concat_44568316(SORT_SAVE_KEY, v10, 0LL);
  v12 = (ListViewSort_o *)sub_B52A54(ListViewSort_TypeInfo);
  ListViewSort___ctor_33999208(v12, v11, 3, 0, 0LL);
  v13 = WarehouseListViewManager_TypeInfo->static_fields;
  v13->servantSortInfo = v12;
  sub_B52920(
    (BattleServantConfConponent_o *)&v13->servantSortInfo,
    (System_Int32_array **)v12,
    v14,
    v15,
    v16,
    v17,
    v18,
    v19);
  v20 = WarehouseListViewManager_TypeInfo->static_fields->SORT_SAVE_KEY;
  v53 = 2;
  v21 = System_Int32__ToString((int32_t)&v53, 0LL);
  v22 = System_String__Concat_44568316(v20, v21, 0LL);
  v23 = (ListViewSort_o *)sub_B52A54(ListViewSort_TypeInfo);
  ListViewSort___ctor_33999208(v23, v22, 3, 0, 0LL);
  v24 = WarehouseListViewManager_TypeInfo->static_fields;
  v24->servantEquipSortInfo = v23;
  sub_B52920(
    (BattleServantConfConponent_o *)&v24->servantEquipSortInfo,
    (System_Int32_array **)v23,
    v25,
    v26,
    v27,
    v28,
    v29,
    v30);
  v31 = WarehouseListViewManager_TypeInfo->static_fields->SORT_SAVE_KEY;
  v53 = 3;
  v32 = System_Int32__ToString((int32_t)&v53, 0LL);
  v33 = System_String__Concat_44568316(v31, v32, 0LL);
  v34 = (ListViewSort_o *)sub_B52A54(ListViewSort_TypeInfo);
  ListViewSort___ctor_33999208(v34, v33, 3, 0, 0LL);
  v35 = WarehouseListViewManager_TypeInfo->static_fields;
  v35->servantWarehouseSortInfo = v34;
  sub_B52920(
    (BattleServantConfConponent_o *)&v35->servantWarehouseSortInfo,
    (System_Int32_array **)v34,
    v36,
    v37,
    v38,
    v39,
    v40,
    v41);
  v42 = WarehouseListViewManager_TypeInfo->static_fields->SORT_SAVE_KEY;
  v53 = 4;
  v43 = System_Int32__ToString((int32_t)&v53, 0LL);
  v44 = System_String__Concat_44568316(v42, v43, 0LL);
  v45 = (ListViewSort_o *)sub_B52A54(ListViewSort_TypeInfo);
  ListViewSort___ctor_33999208(v45, v44, 3, 0, 0LL);
  v46 = WarehouseListViewManager_TypeInfo->static_fields;
  v46->servantEquipWarehouseSortInfo = v45;
  sub_B52920(
    (BattleServantConfConponent_o *)&v46->servantEquipWarehouseSortInfo,
    (System_Int32_array **)v45,
    v47,
    v48,
    v49,
    v50,
    v51,
    v52);
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
  *(_OWORD *)&this->fields.dragSelectSum = xmmword_327CE90;
  this->fields.isDragSelect = 1;
  this->fields.dragSelectFriendShipSum = 0;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarehouseListViewManager__CancelDragSelect(
        WarehouseListViewManager_o *this,
        int32_t index,
        const MethodInfo *method)
{
  WarehouseListViewManager_o *v4; // x20
  struct System_Collections_Generic_List_ListViewItem__o *itemSortList; // x20
  __int64 v6; // x9
  WarehouseListViewManager_o *v7; // x0
  const MethodInfo *v8; // x1

  v4 = this;
  if ( (byte_42B0CA5 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    this = (WarehouseListViewManager_o *)sub_B52984(&WarehouseListViewItem_TypeInfo);
    byte_42B0CA5 = 1;
  }
  itemSortList = v4->fields.itemSortList;
  if ( !itemSortList )
    goto LABEL_10;
  if ( itemSortList->fields._size <= (unsigned int)index )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
  this = (WarehouseListViewManager_o *)itemSortList->fields._items->m_Items[index];
  if ( !this )
LABEL_10:
    sub_B52A5C(this, *(_QWORD *)&index);
  v6 = *(&WarehouseListViewItem_TypeInfo->_2.bitflags2 + 1);
  if ( *(&this->klass->_2.bitflags2 + 1) >= (unsigned int)v6
    && (WarehouseListViewItem_c *)this->klass->_2.typeHierarchy[v6 - 1] == WarehouseListViewItem_TypeInfo )
  {
    HIDWORD(this->fields.bottomItem) = -1;
  }
  else
  {
    v7 = (WarehouseListViewManager_o *)sub_B52D50(this);
    WarehouseListViewManager__GetModeKind(v7, v8);
  }
}


void __fastcall WarehouseListViewManager__ChangeIconScale(WarehouseListViewManager_o *this, const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  WarehouseListViewManager_o *v8; // x19
  unsigned int scaleType; // w8
  System_Int32_array **smallSizeSeed; // x1
  int v11; // w8
  struct ListViewSort_o *sort; // x8
  __int64 v13; // x0
  __int64 v14; // x1
  ListViewItem_o *current; // x20
  __int64 v16; // x9
  UnityEngine_Object_o *monitor; // x21
  __int64 v18; // x1
  ListViewObject_o *viewObject; // x0
  const MethodInfo *v20; // x2
  System_Collections_Generic_List_Enumerator_T__o v21; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v22; // [xsp+20h] [xbp-50h] BYREF

  v8 = this;
  if ( (byte_42B0C9D & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__);
    sub_B52984(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    this = (WarehouseListViewManager_o *)sub_B52984(&WarehouseListViewItem_TypeInfo);
    byte_42B0C9D = 1;
  }
  memset(&v22, 0, sizeof(v22));
  scaleType = v8->fields.scaleType;
  if ( scaleType < 2 )
  {
    smallSizeSeed = (System_Int32_array **)v8->fields.smallSizeSeed;
    v11 = 2;
  }
  else if ( scaleType == 2 )
  {
    smallSizeSeed = (System_Int32_array **)v8->fields.extremelySmallSizeSeed;
    v11 = 3;
  }
  else
  {
    if ( scaleType != 3 )
      goto LABEL_10;
    smallSizeSeed = (System_Int32_array **)v8->fields.normalSizeSeed;
    v11 = 1;
  }
  v8->fields.scaleType = v11;
  v8->fields.seed = (struct ListViewItemSeed_o *)smallSizeSeed;
  sub_B52920((BattleServantConfConponent_o *)&v8->fields.seed, smallSizeSeed, v2, v3, v4, v5, v6, v7);
LABEL_10:
  sort = v8->fields.sort;
  if ( !sort )
    goto LABEL_30;
  sort->fields.iconScaleKind = v8->fields.scaleType;
  this = (WarehouseListViewManager_o *)v8->fields.sort;
  if ( !this )
    goto LABEL_30;
  ListViewSort__Save((ListViewSort_o *)this, 0LL);
  this = (WarehouseListViewManager_o *)v8->fields.itemList;
  if ( !this )
    goto LABEL_30;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v21,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this,
    (const MethodInfo_2FF2480 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  v22 = v21;
  while ( 1 )
  {
    v13 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v22,
            (const MethodInfo_201195C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    if ( (v13 & 1) == 0 )
      break;
    current = (ListViewItem_o *)v22.fields.current;
    if ( !v22.fields.current )
      goto LABEL_28;
    v16 = *(&WarehouseListViewItem_TypeInfo->_2.bitflags2 + 1);
    if ( *(&v22.fields.current->klass->_2.bitflags2 + 1) < (unsigned int)v16
      || (WarehouseListViewItem_c *)v22.fields.current->klass->_2.typeHierarchy[v16 - 1] != WarehouseListViewItem_TypeInfo )
    {
      v13 = sub_B52D50(v22.fields.current);
LABEL_28:
      sub_B52A5C(v13, v14);
    }
    monitor = (UnityEngine_Object_o *)v22.fields.current[6].monitor;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( !UnityEngine_Object__op_Equality(monitor, 0LL, 0LL) )
    {
      viewObject = current->fields.viewObject;
      if ( !viewObject )
        sub_B52A5C(0LL, v18);
      ListViewObject__SetItemSeed(viewObject, current, v8->fields.seed, 0LL);
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v22,
    (const MethodInfo_2011958 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
  WarehouseListViewManager__SetMode_26461152(v8, 2, v20);
  ListViewManager__SortItem((ListViewManager_o *)v8, -1, 0, -1, 0LL);
  this = (WarehouseListViewManager_o *)v8->fields.scrollBar;
  if ( !this
    || (this = (WarehouseListViewManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL)) == 0LL )
  {
LABEL_30:
    sub_B52A5C(this, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
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
      sub_B52A5C(this, isPlus);
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


void __fastcall WarehouseListViewManager__CreateList(
        WarehouseListViewManager_o *this,
        int32_t kind,
        EventUpValSetupInfo_o *setupInfo,
        const MethodInfo *method)
{
  int64_t Instance; // x0
  __int64 v8; // x1
  UserServantMaster_o *MasterData_WarQuestSelectionMaster; // x24
  UserServantStorageMaster_o *v10; // x25
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  int64_t v17; // x26
  System_String_o *v18; // x21
  WarehouseListViewManager_c *v19; // x0
  struct ListViewSort_o *servantSortInfo; // x1
  struct ListViewSort_o **p_sort; // x22
  __int64 *v22; // x8
  WarehouseListViewManager_c *v23; // x0
  struct ListViewSort_o *servantEquipSortInfo; // x1
  struct ListViewSort_o **v25; // x22
  WarehouseListViewManager_c *v26; // x0
  struct ListViewSort_o *servantWarehouseSortInfo; // x1
  struct ListViewSort_o **v28; // x22
  WarehouseListViewManager_c *v29; // x0
  struct ListViewSort_o *servantEquipWarehouseSortInfo; // x1
  struct ListViewSort_o **v31; // x22
  int64_t v32; // x23
  int v33; // w8
  struct ListViewSort_o *sort; // x8
  struct ListViewSort_o **v35; // x22
  struct System_Int32_array *servantFilterEventIdList; // x9
  struct System_Int32_array *servantFilterIdList; // x9
  struct ListViewSort_o *v38; // x8
  System_String_array **v39; // x2
  System_String_array **v40; // x3
  System_Boolean_array **v41; // x4
  System_Int32_array **v42; // x5
  System_Int32_array *v43; // x6
  System_Int32_array *v44; // x7
  struct System_Int32_array *servantEquipFilterEventIdList; // x1
  struct System_Int32_array **p_servantFilterIdList; // x0
  struct ListViewSort_o *v47; // x8
  struct System_Int32_array *v48; // x1
  System_Int32_array *bonusEventIdList; // x1
  System_Int32_array *v50; // x2
  System_String_array **v51; // x2
  System_String_array **v52; // x3
  System_Boolean_array **v53; // x4
  System_Int32_array **v54; // x5
  System_Int32_array *v55; // x6
  System_Int32_array *v56; // x7
  unsigned int iconScaleKind; // w8
  struct ListViewItemSeed_o *normalSizeSeed; // x1
  UserDeckMaster_o *v59; // x24
  int v60; // w8
  __int64 v61; // x25
  int64_t v62; // x20
  __int64 v63; // x8
  __int128 v64; // q0
  System_Int64_array *v65; // x22
  int64_t v66; // x24
  int64_t v67; // x28
  UserServantEntity_o *v68; // x20
  __int64 v69; // x23
  int64_t v70; // x27
  int64_t v71; // x21
  WarehouseListViewItem_o *v72; // x26
  const MethodInfo *v73; // x3
  UILabel_o *emptyMessageLabel; // x20
  const MethodInfo *v75; // x1
  __int64 v76; // x0
  const MethodInfo *v77; // [xsp+0h] [xbp-E0h]
  System_String_o *v78; // [xsp+10h] [xbp-D0h]
  EventUpValSetupInfo_o *v79; // [xsp+18h] [xbp-C8h]
  System_Int64_array *v80; // [xsp+20h] [xbp-C0h]
  System_Int64_array *partyUserEquipList; // [xsp+28h] [xbp-B8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v82; // [xsp+30h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v83; // [xsp+50h] [xbp-90h]
  int32_t eventId; // [xsp+7Ch] [xbp-64h] BYREF
  System_Int64_array *equipIdList; // [xsp+80h] [xbp-60h] BYREF
  System_Int64_array *svtIdList; // [xsp+88h] [xbp-58h] BYREF

  if ( (byte_42B0C80 & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_EventMaster___);
    sub_B52984(&Method_DataManager_GetMasterData_UserDeckMaster___);
    sub_B52984(&Method_DataManager_GetMasterData_UserEventServantFatigueMaster___);
    sub_B52984(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_B52984(&Method_DataManager_GetMasterData_UserServantStorageMaster___);
    sub_B52984(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    sub_B52984(&LocalizationManager_TypeInfo);
    sub_B52984(&NetworkManager_TypeInfo);
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B52984(&WarehouseListViewItem_TypeInfo);
    sub_B52984(&WarehouseListViewManager_TypeInfo);
    sub_B52984(&StringLiteral_11775/*"SERVANT_EQUIP_EMPTY"*/);
    sub_B52984(&StringLiteral_11770/*"SERVANT_EMPTY"*/);
    sub_B52984(&StringLiteral_11803/*"SERVANT_EQUIP_WAREHOUSE_EMPTY"*/);
    sub_B52984(&StringLiteral_11968/*"SERVANT_SORT_FILTER_RESULT_EMPTY"*/);
    sub_B52984(&StringLiteral_12145/*"SERVANT_WAREHOUSE_EMPTY"*/);
    sub_B52984(&StringLiteral_1/*""*/);
    byte_42B0C80 = 1;
  }
  equipIdList = 0LL;
  svtIdList = 0LL;
  eventId = 0;
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_95;
  MasterData_WarQuestSelectionMaster = (UserServantMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                (DataManager_o *)Instance,
                                                                (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_UserServantMaster___);
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_95;
  v10 = (UserServantStorageMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                        (DataManager_o *)Instance,
                                        (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_UserServantStorageMaster___);
  Instance = (int64_t)UserGameMaster__getSelfUserGame(0LL);
  v17 = Instance;
  v18 = (System_String_o *)StringLiteral_1/*""*/;
  this->fields.kind = kind;
  switch ( kind )
  {
    case 0:
      v19 = WarehouseListViewManager_TypeInfo;
      if ( (BYTE3(WarehouseListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !WarehouseListViewManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(WarehouseListViewManager_TypeInfo);
        v19 = WarehouseListViewManager_TypeInfo;
      }
      servantSortInfo = v19->static_fields->servantSortInfo;
      this->fields.sort = servantSortInfo;
      p_sort = &this->fields.sort;
      sub_B52920(
        (BattleServantConfConponent_o *)&this->fields.sort,
        (System_Int32_array **)servantSortInfo,
        v11,
        v12,
        v13,
        v14,
        v15,
        v16);
      if ( !this->fields.sort )
        goto LABEL_95;
      this->fields.sort->fields.listViewKind = 0;
      Instance = (int64_t)*p_sort;
      if ( !*p_sort )
        goto LABEL_95;
      ListViewSort__Load((ListViewSort_o *)Instance, 0LL);
      if ( !MasterData_WarQuestSelectionMaster )
        goto LABEL_95;
      Instance = (int64_t)UserServantMaster__getKeepServantList(MasterData_WarQuestSelectionMaster, 0LL);
      v22 = &StringLiteral_11770/*"SERVANT_EMPTY"*/;
      break;
    case 1:
      v23 = WarehouseListViewManager_TypeInfo;
      if ( (BYTE3(WarehouseListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !WarehouseListViewManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(WarehouseListViewManager_TypeInfo);
        v23 = WarehouseListViewManager_TypeInfo;
      }
      servantEquipSortInfo = v23->static_fields->servantEquipSortInfo;
      this->fields.sort = servantEquipSortInfo;
      v25 = &this->fields.sort;
      sub_B52920(
        (BattleServantConfConponent_o *)&this->fields.sort,
        (System_Int32_array **)servantEquipSortInfo,
        v11,
        v12,
        v13,
        v14,
        v15,
        v16);
      if ( !this->fields.sort )
        goto LABEL_95;
      this->fields.sort->fields.listViewKind = 1;
      Instance = (int64_t)*v25;
      if ( !*v25 )
        goto LABEL_95;
      ListViewSort__Load((ListViewSort_o *)Instance, 0LL);
      if ( !MasterData_WarQuestSelectionMaster )
        goto LABEL_95;
      Instance = (int64_t)UserServantMaster__getServantEquipList(MasterData_WarQuestSelectionMaster, 0LL);
      v22 = &StringLiteral_11775/*"SERVANT_EQUIP_EMPTY"*/;
      break;
    case 2:
      v26 = WarehouseListViewManager_TypeInfo;
      if ( (BYTE3(WarehouseListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !WarehouseListViewManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(WarehouseListViewManager_TypeInfo);
        v26 = WarehouseListViewManager_TypeInfo;
      }
      servantWarehouseSortInfo = v26->static_fields->servantWarehouseSortInfo;
      this->fields.sort = servantWarehouseSortInfo;
      v28 = &this->fields.sort;
      sub_B52920(
        (BattleServantConfConponent_o *)&this->fields.sort,
        (System_Int32_array **)servantWarehouseSortInfo,
        v11,
        v12,
        v13,
        v14,
        v15,
        v16);
      if ( !this->fields.sort )
        goto LABEL_95;
      this->fields.sort->fields.listViewKind = 0;
      Instance = (int64_t)*v28;
      if ( !*v28 )
        goto LABEL_95;
      ListViewSort__Load((ListViewSort_o *)Instance, 0LL);
      if ( !v10 )
        goto LABEL_95;
      Instance = (int64_t)UserServantStorageMaster__getKeepServantList(v10, 0LL);
      v22 = &StringLiteral_12145/*"SERVANT_WAREHOUSE_EMPTY"*/;
      break;
    case 3:
      v29 = WarehouseListViewManager_TypeInfo;
      if ( (BYTE3(WarehouseListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !WarehouseListViewManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(WarehouseListViewManager_TypeInfo);
        v29 = WarehouseListViewManager_TypeInfo;
      }
      servantEquipWarehouseSortInfo = v29->static_fields->servantEquipWarehouseSortInfo;
      this->fields.sort = servantEquipWarehouseSortInfo;
      v31 = &this->fields.sort;
      sub_B52920(
        (BattleServantConfConponent_o *)&this->fields.sort,
        (System_Int32_array **)servantEquipWarehouseSortInfo,
        v11,
        v12,
        v13,
        v14,
        v15,
        v16);
      if ( !this->fields.sort )
        goto LABEL_95;
      this->fields.sort->fields.listViewKind = 1;
      Instance = (int64_t)*v31;
      if ( !*v31 )
        goto LABEL_95;
      ListViewSort__Load((ListViewSort_o *)Instance, 0LL);
      if ( !v10 )
        goto LABEL_95;
      Instance = (int64_t)UserServantStorageMaster__getServantEquipList(v10, 0LL);
      v22 = &StringLiteral_11803/*"SERVANT_EQUIP_WAREHOUSE_EMPTY"*/;
      break;
    default:
      v32 = 0LL;
      if ( !setupInfo )
        goto LABEL_43;
      goto LABEL_35;
  }
  v18 = (System_String_o *)*v22;
  v32 = Instance;
  if ( setupInfo )
  {
LABEL_35:
    v33 = this->fields.kind | 2;
    this->fields.isQuestStart = setupInfo->fields.isQuestStart;
    if ( v33 == 2 )
    {
      v35 = &this->fields.sort;
      sort = this->fields.sort;
      servantFilterEventIdList = setupInfo->fields.servantFilterEventIdList;
      if ( !servantFilterEventIdList )
        goto LABEL_95;
      if ( *(_QWORD *)&servantFilterEventIdList->max_length )
      {
        LOBYTE(servantFilterIdList) = 1;
        if ( !sort )
          goto LABEL_95;
      }
      else
      {
        servantFilterIdList = setupInfo->fields.servantFilterIdList;
        if ( servantFilterIdList )
          LOBYTE(servantFilterIdList) = servantFilterIdList->max_length != 0;
        if ( !sort )
          goto LABEL_95;
      }
      sort->fields.isBonusKind = (char)servantFilterIdList;
      v48 = setupInfo->fields.servantFilterEventIdList;
      this->fields.bonusEventIdList = v48;
      sub_B52920(
        (BattleServantConfConponent_o *)&this->fields.bonusEventIdList,
        (System_Int32_array **)v48,
        v11,
        v12,
        v13,
        v14,
        v15,
        v16);
      servantEquipFilterEventIdList = setupInfo->fields.servantFilterIdList;
      p_servantFilterIdList = &this->fields.servantFilterIdList;
      this->fields.servantFilterIdList = servantEquipFilterEventIdList;
    }
    else
    {
      v35 = &this->fields.sort;
      v38 = this->fields.sort;
      if ( !v38 )
        goto LABEL_95;
      v38->fields.isBonusKind = 1;
      this->fields.servantFilterIdList = 0LL;
      sub_B52920((BattleServantConfConponent_o *)&this->fields.servantFilterIdList, 0LL, v11, v12, v13, v14, v15, v16);
      servantEquipFilterEventIdList = setupInfo->fields.servantEquipFilterEventIdList;
      p_servantFilterIdList = &this->fields.bonusEventIdList;
      this->fields.bonusEventIdList = servantEquipFilterEventIdList;
    }
  }
  else
  {
LABEL_43:
    v35 = &this->fields.sort;
    v47 = this->fields.sort;
    this->fields.isQuestStart = 1;
    if ( !v47 )
      goto LABEL_95;
    v47->fields.isBonusKind = 0;
    this->fields.bonusEventIdList = 0LL;
    sub_B52920((BattleServantConfConponent_o *)&this->fields.bonusEventIdList, 0LL, v11, v12, v13, v14, v15, v16);
    p_servantFilterIdList = &this->fields.servantFilterIdList;
    servantEquipFilterEventIdList = 0LL;
    this->fields.servantFilterIdList = 0LL;
  }
  sub_B52920(
    (BattleServantConfConponent_o *)p_servantFilterIdList,
    (System_Int32_array **)servantEquipFilterEventIdList,
    v39,
    v40,
    v41,
    v42,
    v43,
    v44);
  Instance = (int64_t)*v35;
  if ( !*v35 )
    goto LABEL_95;
  if ( *(_BYTE *)(Instance + 61) )
  {
    bonusEventIdList = this->fields.bonusEventIdList;
    v50 = this->fields.servantFilterIdList;
    if ( this->fields.isQuestStart )
      ListViewSort__AlignBonusKind((ListViewSort_o *)Instance, bonusEventIdList, v50, 0, 0LL, 0LL);
    else
      ListViewSort__AlignBonusKind2((ListViewSort_o *)Instance, bonusEventIdList, v50, 0LL, 0LL, 0LL, 0LL);
  }
  Instance = (int64_t)this->fields.bonusFilterKindButton;
  if ( !Instance )
    goto LABEL_95;
  Instance = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  if ( !*v35 )
    goto LABEL_95;
  if ( !Instance )
    goto LABEL_95;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, (*v35)->fields.isBonusKind, 0LL);
  if ( !*v35 )
    goto LABEL_95;
  iconScaleKind = (*v35)->fields.iconScaleKind;
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
      goto LABEL_65;
    normalSizeSeed = this->fields.extremelySmallSizeSeed;
  }
  this->fields.seed = normalSizeSeed;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.seed,
    (System_Int32_array **)normalSizeSeed,
    v51,
    v52,
    v53,
    v54,
    v55,
    v56);
LABEL_65:
  *(_QWORD *)&this->fields.sellEnableRestCnt = 0LL;
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
  *(_OWORD *)&this->fields.dragSelectSum = xmmword_327CE90;
  this->fields.isDragSelect = 1;
  this->fields.dragSelectFriendShipSum = 0;
  if ( !v32 )
    goto LABEL_90;
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_95;
  v59 = (UserDeckMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                              (DataManager_o *)Instance,
                              (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_UserDeckMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Instance = NetworkManager__get_UserId(0LL);
  if ( !v59
    || (UserDeckMaster__getPartyList(v59, &svtIdList, &equipIdList, Instance, 0LL),
        (Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0)
    || (Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                              (DataManager_o *)Instance,
                              (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_EventMaster___)) == 0 )
  {
LABEL_95:
    sub_B52A5C(Instance, v8);
  }
  Instance = EventMaster__IsEnableFatigueEvent((EventMaster_o *)Instance, &eventId, 0LL);
  v80 = 0LL;
  if ( (Instance & 1) != 0 )
  {
    Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_95;
    Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_UserEventServantFatigueMaster___);
    if ( !Instance )
      goto LABEL_95;
    Instance = (int64_t)UserEventServantFatigueMaster__GetRecoverySvtIdList(
                          (UserEventServantFatigueMaster_o *)Instance,
                          eventId,
                          0LL);
    v80 = (System_Int64_array *)Instance;
  }
  v60 = *(_DWORD *)(v32 + 24);
  if ( v60 >= 1 )
  {
    v61 = 0LL;
    v62 = v32 + 32;
    v78 = v18;
    v79 = setupInfo;
    do
    {
      if ( (unsigned int)v61 >= v60 )
        goto LABEL_96;
      v63 = *(_QWORD *)(v62 + 8 * v61);
      if ( !v63 )
        goto LABEL_95;
      v64 = *(_OWORD *)(v63 + 32);
      *(_OWORD *)&v83.fields.currentCryptoKey = *(_OWORD *)(v63 + 16);
      *(_OWORD *)&v83.fields.fakeValue = v64;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      }
      v82 = v83;
      Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44789576(&v82, 0LL);
      if ( (unsigned int)v61 >= *(_DWORD *)(v32 + 24) )
      {
LABEL_96:
        v76 = sub_B52A88(Instance);
        sub_B52A28(v76, 0LL);
      }
      if ( !v17 )
        goto LABEL_95;
      v65 = svtIdList;
      v66 = v32;
      v67 = v62;
      v68 = *(UserServantEntity_o **)(v62 + 8 * v61);
      partyUserEquipList = equipIdList;
      v69 = *(_QWORD *)(v17 + 112);
      v70 = Instance;
      v71 = v17;
      v72 = (WarehouseListViewItem_o *)sub_B52A54(WarehouseListViewItem_TypeInfo);
      WarehouseListViewItem___ctor(v72, v61, v68, v79, v65, partyUserEquipList, v80, v70 == v69, v77);
      Instance = (int64_t)this->fields.itemList;
      if ( !Instance )
        goto LABEL_95;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)Instance,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v72,
        (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
      WarehouseListViewManager__ChangeSellEnableRestCnt(this, 1, v72, v73);
      v60 = *(_DWORD *)(v66 + 24);
      ++v61;
      v32 = v66;
      v17 = v71;
      v62 = v67;
    }
    while ( (int)v61 < v60 );
    v18 = v78;
    if ( (int)v61 > 0 )
      v18 = (System_String_o *)StringLiteral_11968/*"SERVANT_SORT_FILTER_RESULT_EMPTY"*/;
  }
LABEL_90:
  emptyMessageLabel = this->fields.emptyMessageLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  Instance = (int64_t)LocalizationManager__Get(v18, 0LL);
  if ( !emptyMessageLabel )
    goto LABEL_95;
  UILabel__set_text(emptyMessageLabel, (System_String_o *)Instance, 0LL);
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
  WarehouseListViewManager__SetFilterButtonImage(this, v75);
  ListViewManager__CheckScroll((ListViewManager_o *)this, this->fields.scaleType, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarehouseListViewManager__DecideDragSelect(
        WarehouseListViewManager_o *this,
        int32_t index,
        const MethodInfo *method)
{
  WarehouseListViewManager_o *v4; // x19
  struct System_Collections_Generic_List_ListViewItem__o *itemSortList; // x21
  ListViewItem_o *v6; // x20
  __int64 v7; // x9
  _BOOL4 isDragSelect; // w21
  const MethodInfo *v9; // x2
  const MethodInfo *v10; // x3
  const MethodInfo *v11; // x3
  struct WarehouseListManager_o *parentManager; // x8
  struct WarehouseListManager_o *v13; // x8
  struct WarehouseListViewManager_o *baseListViewManager; // x9
  int32_t selectSum; // w9
  WarehouseListViewManager_o *v16; // x0
  bool v17; // w1
  struct WarehouseListManager_o *v18; // x8
  struct WarehouseListViewManager_o *v19; // x9
  WarehouseListViewManager_o *v20; // x0
  const MethodInfo *v21; // x1
  int32_t friendShipSum[2]; // [xsp+8h] [xbp-18h] BYREF

  v4 = this;
  if ( (byte_42B0CA4 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    this = (WarehouseListViewManager_o *)sub_B52984(&WarehouseListViewItem_TypeInfo);
    byte_42B0CA4 = 1;
  }
  *(_QWORD *)friendShipSum = 0LL;
  itemSortList = v4->fields.itemSortList;
  if ( !itemSortList )
    goto LABEL_27;
  if ( itemSortList->fields._size <= (unsigned int)index )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
  v6 = itemSortList->fields._items->m_Items[index];
  if ( !v6 )
    goto LABEL_27;
  v7 = *(&WarehouseListViewItem_TypeInfo->_2.bitflags2 + 1);
  if ( *(&v6->klass->_2.bitflags2 + 1) >= (unsigned int)v7
    && (WarehouseListViewItem_c *)v6->klass->_2.typeHierarchy[v7 - 1] == WarehouseListViewItem_TypeInfo )
  {
    if ( SHIDWORD(v6[2].monitor) >= 1 )
    {
      isDragSelect = v4->fields.isDragSelect;
      this = (WarehouseListViewManager_o *)ListViewItem__get_IsSelect(v6, 0LL);
      if ( isDragSelect )
      {
        if ( ((unsigned __int8)this & 1) == 0 )
        {
          this = (WarehouseListViewManager_o *)v4->fields.parentManager;
          if ( this )
          {
            WarehouseListManager__GetSelectItemNum(
              (WarehouseListManager_o *)this,
              &friendShipSum[1],
              friendShipSum,
              v10);
            parentManager = v4->fields.parentManager;
            if ( parentManager )
            {
              if ( friendShipSum[1] >= parentManager->fields.sendMax && !BYTE6(v6[1].fields.sortValue1) )
                goto LABEL_26;
              v6->fields.selectNum = parentManager->fields.totalSum;
              v13 = v4->fields.parentManager;
              ++v4->fields.selectSum;
              if ( v13 )
              {
                baseListViewManager = v13->fields.baseListViewManager;
                if ( baseListViewManager )
                {
                  selectSum = baseListViewManager->fields.selectSum;
                  v16 = v4;
                  v17 = 0;
LABEL_25:
                  v13->fields.totalSum = selectSum;
                  WarehouseListViewManager__ChangeSellEnableRestCnt(v16, v17, (WarehouseListViewItem_o *)v6, v11);
                  goto LABEL_26;
                }
              }
            }
          }
          goto LABEL_27;
        }
      }
      else if ( ((unsigned __int8)this & 1) != 0 )
      {
        v18 = v4->fields.parentManager;
        if ( v18 )
        {
          this = v18->fields.baseListViewManager;
          if ( this )
          {
            WarehouseListViewManager__DecrementNumber(this, v6->fields.selectNum, v9);
            ListViewItem__set_IsSelect(v6, 0, 0LL);
            v13 = v4->fields.parentManager;
            --v4->fields.selectSum;
            if ( v13 )
            {
              v19 = v13->fields.baseListViewManager;
              if ( v19 )
              {
                selectSum = v19->fields.selectSum;
                v17 = 1;
                v16 = v4;
                goto LABEL_25;
              }
            }
          }
        }
LABEL_27:
        sub_B52A5C(this, *(_QWORD *)&index);
      }
    }
LABEL_26:
    HIDWORD(v6[2].monitor) = -1;
    return;
  }
  v20 = (WarehouseListViewManager_o *)sub_B52D50(v6);
  WarehouseListViewManager__CancelDragEnd(v20, v21);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarehouseListViewManager__DecrementNumber(
        WarehouseListViewManager_o *this,
        int32_t selectNum,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x0
  int32_t klass; // w9
  _BOOL8 v7; // x0
  __int64 v8; // x1
  System_Collections_Generic_List_Enumerator_T__o v9; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_42B0C91 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__);
    sub_B52984(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    byte_42B0C91 = 1;
  }
  memset(&v9, 0, sizeof(v9));
  itemList = this->fields.itemList;
  if ( !itemList )
    sub_B52A5C(0LL, *(_QWORD *)&selectNum);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v9,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)itemList,
    (const MethodInfo_2FF2480 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  while ( 1 )
  {
    v7 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
           &v9,
           (const MethodInfo_201195C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    if ( !v7 )
      break;
    if ( !v9.fields.current )
      sub_B52A5C(v7, v8);
    klass = (int32_t)v9.fields.current[1].klass;
    if ( klass > selectNum )
      LODWORD(v9.fields.current[1].klass) = klass - 1;
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v9,
    (const MethodInfo_2011958 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
}


void __fastcall WarehouseListViewManager__DeleteContinueData(const MethodInfo *method)
{
  __int64 v1; // x1
  WarehouseListViewManager_c *v2; // x0
  ListViewSort_o *servantSortInfo; // x0

  if ( (byte_42B0C7C & 1) == 0 )
  {
    sub_B52984(&WarehouseListViewManager_TypeInfo);
    byte_42B0C7C = 1;
  }
  v2 = WarehouseListViewManager_TypeInfo;
  if ( (BYTE3(WarehouseListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarehouseListViewManager_TypeInfo->_2.cctor_finished )
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
    sub_B52A5C(servantSortInfo, v1);
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


void __fastcall WarehouseListViewManager__EndSelectFilterKind(
        WarehouseListViewManager_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x1
  CommonUI_o *Instance; // x20
  System_Action_o *v7; // x21
  __int64 v8; // x0
  __int64 v9; // x1

  if ( (byte_42B0C98 & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B52984(&Method_WarehouseListViewManager_EndCloseSelectFilterKind__);
    byte_42B0C98 = 1;
  }
  if ( isDecide )
  {
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
    WarehouseListViewManager__SetFilterButtonImage(this, v5);
    ListViewManager__CheckScroll((ListViewManager_o *)this, this->fields.scaleType, 0LL);
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v7 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
  System_Action___ctor(v7, (Il2CppObject *)this, Method_WarehouseListViewManager_EndCloseSelectFilterKind__, 0LL);
  if ( !Instance )
    sub_B52A5C(v8, v9);
  CommonUI__CloseServantFilterSelectMenu(Instance, v7, 0LL);
}


void __fastcall WarehouseListViewManager__EndSelectSortKind(
        WarehouseListViewManager_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  __int64 v6; // x1

  if ( (byte_42B0C96 & 1) == 0 )
  {
    sub_B52984(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_42B0C96 = 1;
  }
  if ( isDecide )
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B52A5C(0LL, v6);
  CommonUI__CloseServantSortSelectMenu(Instance, 0LL, 0LL);
}


// local variable allocation has failed, the output may be wrong!
int64_t __fastcall WarehouseListViewManager__GetAmountSortValue(
        WarehouseListViewManager_o *this,
        int32_t svtId,
        const MethodInfo *method)
{
  WarehouseListViewManager_o *v4; // x20
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x25
  signed __int64 size; // x22
  int64_t v7; // x21
  unsigned __int64 v8; // x23
  ListViewItem_o *v9; // x8
  __int64 v10; // x11

  v4 = this;
  if ( (byte_42B0C9B & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_B52984(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    this = (WarehouseListViewManager_o *)sub_B52984(&WarehouseListViewItem_TypeInfo);
    byte_42B0C9B = 1;
  }
  itemList = v4->fields.itemList;
  if ( !itemList )
    goto LABEL_17;
  size = itemList->fields._size;
  if ( (int)size >= 1 )
  {
    v7 = 0LL;
    v8 = 0LL;
    do
    {
      if ( v8 >= (unsigned int)itemList->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
      v9 = itemList->fields._items->m_Items[v8];
      if ( !v9 )
        break;
      v10 = *(&WarehouseListViewItem_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v9->klass->_2.bitflags2 + 1) < (unsigned int)v10
        || (WarehouseListViewItem_c *)v9->klass->_2.typeHierarchy[v10 - 1] != WarehouseListViewItem_TypeInfo )
      {
        break;
      }
      ++v8;
      if ( (WarehouseListViewItem_c *)v9->klass->_2.typeHierarchy[*(&WarehouseListViewItem_TypeInfo->_2.bitflags2 + 1)
                                                                - 1] != WarehouseListViewItem_TypeInfo )
        v9 = 0LL;
      if ( v9[1].fields.selectNum == svtId )
        ++v7;
      if ( (__int64)v8 >= size )
        return v7;
      itemList = v4->fields.itemList;
    }
    while ( itemList );
LABEL_17:
    sub_B52A5C(this, *(_QWORD *)&svtId);
  }
  return 0LL;
}


bool __fastcall WarehouseListViewManager__GetDragSelect(WarehouseListViewManager_o *this, const MethodInfo *method)
{
  return this->fields.isDragSelect;
}


WarehouseListViewItem_o *__fastcall WarehouseListViewManager__GetItem(
        WarehouseListViewManager_o *this,
        int32_t index,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x20
  ListViewItem_o *v6; // x8
  __int64 v7; // x11

  if ( (byte_42B0CA7 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_B52984(&WarehouseListViewItem_TypeInfo);
    byte_42B0CA7 = 1;
  }
  itemList = this->fields.itemList;
  if ( !itemList )
    return 0LL;
  if ( itemList->fields._size <= (unsigned int)index )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
  v6 = itemList->fields._items->m_Items[index];
  if ( !v6 )
    return 0LL;
  v7 = *(&WarehouseListViewItem_TypeInfo->_2.bitflags2 + 1);
  if ( *(&v6->klass->_2.bitflags2 + 1) < (unsigned int)v7 )
    return 0LL;
  if ( (WarehouseListViewItem_c *)v6->klass->_2.typeHierarchy[v7 - 1] == WarehouseListViewItem_TypeInfo )
    return (WarehouseListViewItem_o *)itemList->fields._items->m_Items[index];
  return 0LL;
}


int32_t __fastcall WarehouseListViewManager__GetModeKind(WarehouseListViewManager_o *this, const MethodInfo *method)
{
  struct WarehouseListMenu_o *warehouseListMenu; // x8

  warehouseListMenu = this->fields.warehouseListMenu;
  if ( !warehouseListMenu )
    sub_B52A5C(this, method);
  return warehouseListMenu->fields.modeKind;
}


System_String_o *__fastcall WarehouseListViewManager__GetScaleButtonSpriteName(
        WarehouseListViewManager_o *this,
        const MethodInfo *method)
{
  ListViewSort_o *sort; // x0

  sort = this->fields.sort;
  if ( !sort )
    sub_B52A5C(0LL, method);
  return ListViewSort__GetScaleKindSpriteName(sort, this->fields.scaleType, 0LL);
}


void __fastcall WarehouseListViewManager__GetSelectItemNum(
        WarehouseListViewManager_o *this,
        int32_t *normalSum,
        int32_t *friendShipSum,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x0
  Il2CppObject *current; // x21
  __int64 v9; // x9
  int32_t *v10; // x8
  __int64 v11; // x0
  __int64 v12; // x1
  System_Collections_Generic_List_Enumerator_T__o v13; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_42B0CA6 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__);
    sub_B52984(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    sub_B52984(&WarehouseListViewItem_TypeInfo);
    byte_42B0CA6 = 1;
  }
  memset(&v13, 0, sizeof(v13));
  *normalSum = 0;
  *friendShipSum = 0;
  itemList = this->fields.itemList;
  if ( !itemList )
    sub_B52A5C(0LL, normalSum);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v13,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)itemList,
    (const MethodInfo_2FF2480 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  while ( 1 )
  {
    v11 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v13,
            (const MethodInfo_201195C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    if ( (v11 & 1) == 0 )
      break;
    current = v13.fields.current;
    if ( !v13.fields.current )
      goto LABEL_16;
    v9 = *(&WarehouseListViewItem_TypeInfo->_2.bitflags2 + 1);
    if ( *(&v13.fields.current->klass->_2.bitflags2 + 1) < (unsigned int)v9
      || (WarehouseListViewItem_c *)v13.fields.current->klass->_2.typeHierarchy[v9 - 1] != WarehouseListViewItem_TypeInfo )
    {
      v11 = sub_B52D50(v13.fields.current);
LABEL_16:
      sub_B52A5C(v11, v12);
    }
    if ( ListViewItem__get_IsSelect((ListViewItem_o *)v13.fields.current, 0LL) )
    {
      if ( BYTE6(current[10].klass) )
        v10 = friendShipSum;
      else
        v10 = normalSum;
      ++*v10;
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v13,
    (const MethodInfo_2011958 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
}


void __fastcall WarehouseListViewManager__GetSelectList(
        WarehouseListViewManager_o *this,
        System_Collections_Generic_List_long__o *list,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x0
  __int64 v6; // x0
  __int64 v7; // x1
  Il2CppObject *current; // x20
  __int64 v9; // x9
  const MethodInfo *v10; // x1
  int64_t UserSvtId; // x0
  System_Collections_Generic_List_Enumerator_T__o v12; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v13; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_42B0C8C & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__);
    sub_B52984(&Method_System_Collections_Generic_List_long__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    sub_B52984(&WarehouseListViewItem_TypeInfo);
    byte_42B0C8C = 1;
  }
  memset(&v13, 0, sizeof(v13));
  itemList = this->fields.itemList;
  if ( !itemList )
    sub_B52A5C(0LL, list);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v12,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)itemList,
    (const MethodInfo_2FF2480 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  v13 = v12;
  while ( 1 )
  {
    v6 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
           &v13,
           (const MethodInfo_201195C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    if ( (v6 & 1) == 0 )
      break;
    current = v13.fields.current;
    if ( !v13.fields.current )
      goto LABEL_14;
    v9 = *(&WarehouseListViewItem_TypeInfo->_2.bitflags2 + 1);
    if ( *(&v13.fields.current->klass->_2.bitflags2 + 1) < (unsigned int)v9
      || (WarehouseListViewItem_c *)v13.fields.current->klass->_2.typeHierarchy[v9 - 1] != WarehouseListViewItem_TypeInfo )
    {
      v6 = sub_B52D50(v13.fields.current);
LABEL_14:
      sub_B52A5C(v6, v7);
    }
    if ( ListViewItem__get_IsSelect((ListViewItem_o *)v13.fields.current, 0LL) )
    {
      UserSvtId = WarehouseListViewItem__get_UserSvtId((WarehouseListViewItem_o *)current, v10);
      if ( !list )
        sub_B52A5C(UserSvtId, UserSvtId);
      System_Collections_Generic_List_long___Add(
        list,
        UserSvtId,
        (const MethodInfo_2FE1DCC *)Method_System_Collections_Generic_List_long__Add__);
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v13,
    (const MethodInfo_2011958 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
}


System_Collections_Generic_Dictionary_long__int__o *__fastcall WarehouseListViewManager__GetSelectServantIdDic(
        WarehouseListViewManager_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_long__int__o *v3; // x20
  int64_t IsSelect; // x0
  const MethodInfo *v5; // x1
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x21
  int size; // w22
  unsigned int v8; // w23
  ListViewItem_o *v9; // x21
  __int64 v10; // x9
  System_Collections_Generic_Dictionary_long__int__o *result; // x0
  WarehouseListViewManager_o *v12; // x0
  System_Collections_Generic_Dictionary_long__int__o *v13; // x1
  const MethodInfo *v14; // x2

  if ( (byte_42B0C9E & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_Dictionary_long__int__Add__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_long__int___ctor__);
    sub_B52984(&System_Collections_Generic_Dictionary_long__int__TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_B52984(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_B52984(&WarehouseListViewItem_TypeInfo);
    byte_42B0C9E = 1;
  }
  v3 = (System_Collections_Generic_Dictionary_long__int__o *)sub_B52A54(System_Collections_Generic_Dictionary_long__int__TypeInfo);
  System_Collections_Generic_Dictionary_long__int____ctor(
    v3,
    (const MethodInfo_2F49F90 *)Method_System_Collections_Generic_Dictionary_long__int___ctor__);
  itemList = this->fields.itemList;
  if ( !itemList )
LABEL_16:
    sub_B52A5C(IsSelect, v5);
  size = itemList->fields._size;
  if ( size < 1 )
    return v3;
  v8 = 0;
  while ( 1 )
  {
    if ( itemList->fields._size <= v8 )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
    v9 = itemList->fields._items->m_Items[v8];
    if ( !v9 )
      goto LABEL_16;
    v10 = *(&WarehouseListViewItem_TypeInfo->_2.bitflags2 + 1);
    if ( *(&v9->klass->_2.bitflags2 + 1) < (unsigned int)v10
      || (WarehouseListViewItem_c *)v9->klass->_2.typeHierarchy[v10 - 1] != WarehouseListViewItem_TypeInfo )
    {
      break;
    }
    IsSelect = ListViewItem__get_IsSelect(v9, 0LL);
    if ( (IsSelect & 1) != 0 )
    {
      IsSelect = WarehouseListViewItem__get_UserSvtId((WarehouseListViewItem_o *)v9, v5);
      if ( !v3 )
        goto LABEL_16;
      System_Collections_Generic_Dictionary_long__int___Add(
        v3,
        IsSelect,
        v9->fields.selectNum,
        (const MethodInfo_2F4AB44 *)Method_System_Collections_Generic_Dictionary_long__int__Add__);
    }
    if ( (int)++v8 >= size )
      return v3;
    itemList = this->fields.itemList;
    if ( !itemList )
      goto LABEL_16;
  }
  v12 = (WarehouseListViewManager_o *)sub_B52D50(v9);
  WarehouseListViewManager__ModifyScaleChangeList(v12, v13, v14);
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
  System_Collections_Generic_List_long__o *v6; // x23
  System_Collections_Generic_List_long__o *v7; // x22
  int64_t v8; // x0
  __int64 v9; // x1
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x19
  signed __int64 size; // x24
  unsigned __int64 v18; // x25
  ListViewItem_o *v19; // x8
  __int64 v20; // x11
  ListViewItem_c *klass; // x9
  Il2CppType byval_arg; // q0
  const MethodInfo_2FE1DCC *v23; // x2
  int64_t v24; // x1
  System_Collections_Generic_List_long__o *v25; // x0
  Il2CppType v26; // q0
  System_Int64_array *v27; // x0
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  System_Int64_array *v34; // x0
  System_String_array **v35; // x2
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7
  System_String_array **v42; // x2
  System_String_array **v43; // x3
  System_Boolean_array **v44; // x4
  System_Int32_array **v45; // x5
  System_Int32_array *v46; // x6
  System_Int32_array *v47; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v49; // [xsp+10h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v50; // [xsp+30h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v51; // [xsp+50h] [xbp-70h]

  if ( (byte_42B0C86 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_long__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_long__ToArray__);
    sub_B52984(&Method_System_Collections_Generic_List_long___ctor__);
    sub_B52984(&Method_System_Collections_Generic_List_long__get_Count__);
    sub_B52984(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_B52984(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_B52984(&System_Collections_Generic_List_long__TypeInfo);
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_B52984(&WarehouseListViewItem_TypeInfo);
    byte_42B0C86 = 1;
  }
  v6 = (System_Collections_Generic_List_long__o *)sub_B52A54(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v6,
    (const MethodInfo_2FE1070 *)Method_System_Collections_Generic_List_long___ctor__);
  v7 = (System_Collections_Generic_List_long__o *)sub_B52A54(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v7,
    (const MethodInfo_2FE1070 *)Method_System_Collections_Generic_List_long___ctor__);
  itemList = this->fields.itemList;
  if ( !itemList )
    goto LABEL_33;
  size = itemList->fields._size;
  if ( (int)size >= 1 )
  {
    v18 = 0LL;
    do
    {
      if ( v18 >= (unsigned int)itemList->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
      v19 = itemList->fields._items->m_Items[v18];
      if ( !v19 )
        break;
      v20 = *(&WarehouseListViewItem_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v19->klass->_2.bitflags2 + 1) < (unsigned int)v20
        || (WarehouseListViewItem_c *)v19->klass->_2.typeHierarchy[v20 - 1] != WarehouseListViewItem_TypeInfo )
      {
        break;
      }
      klass = v19[1].klass;
      if ( klass && BYTE1(v19[2].monitor) )
      {
        if ( BYTE1(v19[1].fields.sortValue1) )
        {
          byval_arg = klass->_1.byval_arg;
          *(_OWORD *)&v51.fields.currentCryptoKey = *(_OWORD *)&klass->_1.name;
          *(Il2CppType *)&v51.fields.fakeValue = byval_arg;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          }
          v50 = v51;
          v8 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44789576(&v50, 0LL);
          if ( !v7 )
            break;
          v23 = (const MethodInfo_2FE1DCC *)Method_System_Collections_Generic_List_long__Add__;
          v24 = v8;
          v25 = v7;
        }
        else
        {
          v26 = klass->_1.byval_arg;
          *(_OWORD *)&v51.fields.currentCryptoKey = *(_OWORD *)&klass->_1.name;
          *(Il2CppType *)&v51.fields.fakeValue = v26;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          }
          v49 = v51;
          v8 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44789576(&v49, 0LL);
          if ( !v6 )
            break;
          v23 = (const MethodInfo_2FE1DCC *)Method_System_Collections_Generic_List_long__Add__;
          v24 = v8;
          v25 = v6;
        }
        System_Collections_Generic_List_long___Add(v25, v24, v23);
      }
      if ( (__int64)++v18 >= size )
        goto LABEL_28;
      itemList = this->fields.itemList;
    }
    while ( itemList );
LABEL_33:
    sub_B52A5C(v8, v9);
  }
LABEL_28:
  if ( !v6 || !v7 )
    goto LABEL_33;
  if ( v7->fields._size + v6->fields._size < 1 )
  {
    *choiceList = 0LL;
    sub_B52920((BattleServantConfConponent_o *)choiceList, 0LL, v10, v11, v12, v13, v14, v15);
    *unchoiceList = 0LL;
    sub_B52920((BattleServantConfConponent_o *)unchoiceList, 0LL, v42, v43, v44, v45, v46, v47);
    return 0;
  }
  else
  {
    v27 = System_Collections_Generic_List_long___ToArray(
            v6,
            (const MethodInfo_2FE3ED8 *)Method_System_Collections_Generic_List_long__ToArray__);
    *choiceList = v27;
    sub_B52920((BattleServantConfConponent_o *)choiceList, (System_Int32_array **)v27, v28, v29, v30, v31, v32, v33);
    v34 = System_Collections_Generic_List_long___ToArray(
            v7,
            (const MethodInfo_2FE3ED8 *)Method_System_Collections_Generic_List_long__ToArray__);
    *unchoiceList = v34;
    sub_B52920((BattleServantConfConponent_o *)unchoiceList, (System_Int32_array **)v34, v35, v36, v37, v38, v39, v40);
    return 1;
  }
}


bool __fastcall WarehouseListViewManager__GetSwapLockList(
        WarehouseListViewManager_o *this,
        System_Int64_array **lockList,
        System_Int64_array **unlockList,
        const MethodInfo *method)
{
  System_Collections_Generic_List_long__o *v6; // x23
  System_Collections_Generic_List_long__o *v7; // x22
  int64_t v8; // x0
  __int64 v9; // x1
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x19
  signed __int64 size; // x24
  unsigned __int64 v18; // x25
  ListViewItem_o *v19; // x8
  __int64 v20; // x11
  ListViewItem_c *klass; // x9
  Il2CppType byval_arg; // q0
  const MethodInfo_2FE1DCC *v23; // x2
  int64_t v24; // x1
  System_Collections_Generic_List_long__o *v25; // x0
  Il2CppType v26; // q0
  System_Int64_array *v27; // x0
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  System_Int64_array *v34; // x0
  System_String_array **v35; // x2
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7
  System_String_array **v42; // x2
  System_String_array **v43; // x3
  System_Boolean_array **v44; // x4
  System_Int32_array **v45; // x5
  System_Int32_array *v46; // x6
  System_Int32_array *v47; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v49; // [xsp+10h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v50; // [xsp+30h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v51; // [xsp+50h] [xbp-70h]

  if ( (byte_42B0C85 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_long__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_long__ToArray__);
    sub_B52984(&Method_System_Collections_Generic_List_long___ctor__);
    sub_B52984(&Method_System_Collections_Generic_List_long__get_Count__);
    sub_B52984(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_B52984(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_B52984(&System_Collections_Generic_List_long__TypeInfo);
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_B52984(&WarehouseListViewItem_TypeInfo);
    byte_42B0C85 = 1;
  }
  v6 = (System_Collections_Generic_List_long__o *)sub_B52A54(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v6,
    (const MethodInfo_2FE1070 *)Method_System_Collections_Generic_List_long___ctor__);
  v7 = (System_Collections_Generic_List_long__o *)sub_B52A54(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v7,
    (const MethodInfo_2FE1070 *)Method_System_Collections_Generic_List_long___ctor__);
  itemList = this->fields.itemList;
  if ( !itemList )
    goto LABEL_33;
  size = itemList->fields._size;
  if ( (int)size >= 1 )
  {
    v18 = 0LL;
    do
    {
      if ( v18 >= (unsigned int)itemList->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
      v19 = itemList->fields._items->m_Items[v18];
      if ( !v19 )
        break;
      v20 = *(&WarehouseListViewItem_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v19->klass->_2.bitflags2 + 1) < (unsigned int)v20
        || (WarehouseListViewItem_c *)v19->klass->_2.typeHierarchy[v20 - 1] != WarehouseListViewItem_TypeInfo )
      {
        break;
      }
      klass = v19[1].klass;
      if ( klass && LOBYTE(v19[2].monitor) )
      {
        if ( LOBYTE(v19[1].fields.sortValue1) )
        {
          byval_arg = klass->_1.byval_arg;
          *(_OWORD *)&v51.fields.currentCryptoKey = *(_OWORD *)&klass->_1.name;
          *(Il2CppType *)&v51.fields.fakeValue = byval_arg;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          }
          v50 = v51;
          v8 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44789576(&v50, 0LL);
          if ( !v7 )
            break;
          v23 = (const MethodInfo_2FE1DCC *)Method_System_Collections_Generic_List_long__Add__;
          v24 = v8;
          v25 = v7;
        }
        else
        {
          v26 = klass->_1.byval_arg;
          *(_OWORD *)&v51.fields.currentCryptoKey = *(_OWORD *)&klass->_1.name;
          *(Il2CppType *)&v51.fields.fakeValue = v26;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          }
          v49 = v51;
          v8 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44789576(&v49, 0LL);
          if ( !v6 )
            break;
          v23 = (const MethodInfo_2FE1DCC *)Method_System_Collections_Generic_List_long__Add__;
          v24 = v8;
          v25 = v6;
        }
        System_Collections_Generic_List_long___Add(v25, v24, v23);
      }
      if ( (__int64)++v18 >= size )
        goto LABEL_28;
      itemList = this->fields.itemList;
    }
    while ( itemList );
LABEL_33:
    sub_B52A5C(v8, v9);
  }
LABEL_28:
  if ( !v6 || !v7 )
    goto LABEL_33;
  if ( v7->fields._size + v6->fields._size < 1 )
  {
    *lockList = 0LL;
    sub_B52920((BattleServantConfConponent_o *)lockList, 0LL, v10, v11, v12, v13, v14, v15);
    *unlockList = 0LL;
    sub_B52920((BattleServantConfConponent_o *)unlockList, 0LL, v42, v43, v44, v45, v46, v47);
    return 0;
  }
  else
  {
    v27 = System_Collections_Generic_List_long___ToArray(
            v6,
            (const MethodInfo_2FE3ED8 *)Method_System_Collections_Generic_List_long__ToArray__);
    *lockList = v27;
    sub_B52920((BattleServantConfConponent_o *)lockList, (System_Int32_array **)v27, v28, v29, v30, v31, v32, v33);
    v34 = System_Collections_Generic_List_long___ToArray(
            v7,
            (const MethodInfo_2FE3ED8 *)Method_System_Collections_Generic_List_long__ToArray__);
    *unlockList = v34;
    sub_B52920((BattleServantConfConponent_o *)unlockList, (System_Int32_array **)v34, v35, v36, v37, v38, v39, v40);
    return 1;
  }
}


void __fastcall WarehouseListViewManager__InitLoad(const MethodInfo *method)
{
  __int64 v1; // x1
  WarehouseListViewManager_c *v2; // x0
  ListViewSort_o *servantSortInfo; // x0

  if ( (byte_42B0C7D & 1) == 0 )
  {
    sub_B52984(&WarehouseListViewManager_TypeInfo);
    byte_42B0C7D = 1;
  }
  v2 = WarehouseListViewManager_TypeInfo;
  if ( (BYTE3(WarehouseListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarehouseListViewManager_TypeInfo->_2.cctor_finished )
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
    sub_B52A5C(servantSortInfo, v1);
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
    sub_B52A5C(this, item);
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
    goto LABEL_16;
  WarehouseListManager__GetSelectItemNum(
    parentManager,
    &friendShipSum[1],
    friendShipSum,
    *(const MethodInfo **)&addServantSum);
  v10 = this->fields.parentManager;
  if ( !v10 )
    goto LABEL_16;
  if ( friendShipSum[1] + addSum >= v10->fields.sendMax )
    return item && item->fields.isFriendShipSvtEq;
  if ( !item || this->fields.kind )
    return 1;
  parentManager = (WarehouseListManager_o *)item->fields.servantEntity;
  if ( !parentManager )
LABEL_16:
    sub_B52A5C(parentManager, item);
  return !ServantEntity__get_IsOrganization((ServantEntity_o *)parentManager, 0LL)
      || item->fields.attribute
      || this->fields.sellEnableRestCnt - addServantSum >= 2;
}


void __fastcall WarehouseListViewManager__Modify(WarehouseListViewManager_o *this, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v4; // x1
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *v5; // x20
  _BOOL8 v6; // x0
  const MethodInfo *v7; // x1
  WarehouseListViewItem_o *current; // x21
  __int64 v9; // x10
  const MethodInfo *v10; // x1
  int64_t UserSvtId; // x0
  UserServantEntity_o *Entity; // x1
  const MethodInfo *v13; // x2
  UnityEngine_Object_o *viewObject; // x22
  __int64 v15; // x1
  struct ListViewObject_o *v16; // x0
  UserGameEntity_o *SelfUserGame; // x20
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x9
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *v19; // x19
  _BOOL8 v20; // x0
  const MethodInfo *v21; // x1
  WarehouseListViewItem_o *v22; // x21
  __int64 v23; // x10
  const MethodInfo *v24; // x1
  int64_t v25; // x0
  UserServantEntity_o *v26; // x1
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
  int v37; // w19
  System_Collections_Generic_List_Enumerator_T__o v38; // [xsp+8h] [xbp-98h] BYREF
  int v39[2]; // [xsp+20h] [xbp-80h]
  int v40; // [xsp+28h] [xbp-78h]
  System_Collections_Generic_List_Enumerator_T__o v41; // [xsp+30h] [xbp-70h] BYREF

  if ( (byte_42B0C83 & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_B52984(&Method_DataManager_GetMasterData_UserServantStorageMaster___);
    sub_B52984(&Method_DataMasterBase_UserServantStorageMaster__UserServantEntity__long__GetEntity__);
    sub_B52984(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__);
    sub_B52984(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B52984(&WarehouseListViewItem_TypeInfo);
    byte_42B0C83 = 1;
  }
  memset(&v41, 0, sizeof(v41));
  v40 = 0;
  if ( this->fields.itemList )
  {
    if ( (this->fields.kind & 0xFFFFFFFE) == 2 )
    {
      Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( Instance )
      {
        Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_UserServantStorageMaster___);
        if ( this->fields.itemList )
        {
          v5 = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)Instance;
          System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
            &v38,
            (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this->fields.itemList,
            (const MethodInfo_2FF2480 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
          v41 = v38;
          while ( 1 )
          {
            v6 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                   &v41,
                   (const MethodInfo_201195C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
            if ( !v6 )
              break;
            current = (WarehouseListViewItem_o *)v41.fields.current;
            if ( !v41.fields.current
              || (v9 = *(&WarehouseListViewItem_TypeInfo->_2.bitflags2 + 1),
                  *(&v41.fields.current->klass->_2.bitflags2 + 1) < (unsigned int)v9)
              || (WarehouseListViewItem_c *)v41.fields.current->klass->_2.typeHierarchy[v9 - 1] != WarehouseListViewItem_TypeInfo )
            {
              sub_B52A5C(v6, v7);
            }
            if ( WarehouseListViewItem__get_UserSvtId((WarehouseListViewItem_o *)v41.fields.current, v7) >= 1 )
            {
              UserSvtId = WarehouseListViewItem__get_UserSvtId(current, v10);
              if ( !v5 )
                sub_B52A5C(UserSvtId, UserSvtId);
              Entity = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
                         v5,
                         UserSvtId,
                         (const MethodInfo_23E2500 *)Method_DataMasterBase_UserServantStorageMaster__UserServantEntity__long__GetEntity__);
              if ( Entity )
                WarehouseListViewItem__Modify(current, Entity, v13);
              viewObject = (UnityEngine_Object_o *)current->fields.viewObject;
              if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              }
              if ( UnityEngine_Object__op_Inequality(viewObject, 0LL, 0LL) )
              {
                v16 = current->fields.viewObject;
                if ( !v16 )
                  sub_B52A5C(0LL, v15);
                ((void (__fastcall *)(struct ListViewObject_o *, WarehouseListViewItem_o *, Il2CppMethodPointer))v16->klass->vtable._5_SetItem.method)(
                  v16,
                  current,
                  v16->klass->vtable._6_SetItem.methodPtr);
              }
            }
          }
          v39[0] = 335;
          v40 = 1;
          System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
            &v41,
            (const MethodInfo_2011958 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
          v40 = 0;
          return;
        }
      }
LABEL_52:
      sub_B52A5C(Instance, v4);
    }
    SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_52;
    Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                  Instance,
                                  (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_UserServantMaster___);
    itemList = this->fields.itemList;
    if ( !itemList )
      goto LABEL_52;
    v19 = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)Instance;
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v38,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)itemList,
      (const MethodInfo_2FF2480 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    v41 = v38;
    while ( 1 )
    {
      v20 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v41,
              (const MethodInfo_201195C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
      if ( !v20 )
        break;
      v22 = (WarehouseListViewItem_o *)v41.fields.current;
      if ( !v41.fields.current
        || (v23 = *(&WarehouseListViewItem_TypeInfo->_2.bitflags2 + 1),
            *(&v41.fields.current->klass->_2.bitflags2 + 1) < (unsigned int)v23)
        || (WarehouseListViewItem_c *)v41.fields.current->klass->_2.typeHierarchy[v23 - 1] != WarehouseListViewItem_TypeInfo )
      {
        sub_B52A5C(v20, v21);
      }
      if ( WarehouseListViewItem__get_UserSvtId((WarehouseListViewItem_o *)v41.fields.current, v21) >= 1 )
      {
        v25 = WarehouseListViewItem__get_UserSvtId(v22, v24);
        if ( !v19 )
          sub_B52A5C(v25, v25);
        v26 = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
                v19,
                v25,
                (const MethodInfo_23E2500 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
        if ( v26 )
          WarehouseListViewItem__Modify(v22, v26, v27);
        v28 = WarehouseListViewItem__get_UserSvtId(v22, (const MethodInfo *)v26);
        if ( !SelfUserGame )
          sub_B52A5C(v28, v29);
        favoriteUserSvtId = SelfUserGame->fields.favoriteUserSvtId;
        v31 = v28;
        v32 = WarehouseListViewItem__get_UserSvtId(v22, v29);
        WarehouseListViewItem__Modify_26449828(
          v22,
          v31 == favoriteUserSvtId,
          v32 == SelfUserGame->fields.pushUserSvtId,
          v33);
        v34 = (UnityEngine_Object_o *)v22->fields.viewObject;
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        if ( UnityEngine_Object__op_Inequality(v34, 0LL, 0LL) )
        {
          v36 = v22->fields.viewObject;
          if ( !v36 )
            sub_B52A5C(0LL, v35);
          ((void (__fastcall *)(struct ListViewObject_o *, WarehouseListViewItem_o *, Il2CppMethodPointer))v36->klass->vtable._5_SetItem.method)(
            v36,
            v22,
            v36->klass->vtable._6_SetItem.methodPtr);
        }
      }
    }
    v39[0] = 335;
    v37 = ++v40;
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v41,
      (const MethodInfo_2011958 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    if ( v37 && v39[v37 - 1] == 335 )
      v40 = v37 - 1;
  }
}


void __fastcall WarehouseListViewManager__ModifyItem(
        WarehouseListViewManager_o *this,
        int64_t userSvtId,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x9
  DataManager_o *Instance; // x0
  __int64 v7; // x1
  DataManager_o *v8; // x19
  UserServantEntity_o *Entity; // x19
  UserGameEntity_o *SelfUserGame; // x22
  _BOOL8 v11; // x0
  const MethodInfo *v12; // x1
  __int64 v13; // x11
  WarehouseListViewItem_o *v14; // x20
  int64_t v15; // x0
  __int128 v16; // q0
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
  int v28; // w19
  _BOOL8 v29; // x0
  const MethodInfo *v30; // x1
  __int64 v31; // x11
  WarehouseListViewItem_o *current; // x22
  int64_t v33; // x0
  __int128 v34; // q0
  int64_t v35; // x23
  const MethodInfo *v36; // x2
  UnityEngine_Object_o *viewObject; // x23
  __int64 v38; // x1
  struct ListViewObject_o *v39; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v40; // [xsp+0h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v41; // [xsp+20h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v42; // [xsp+40h] [xbp-A0h] BYREF
  int v43[2]; // [xsp+60h] [xbp-80h]
  int v44; // [xsp+68h] [xbp-78h]
  System_Collections_Generic_List_Enumerator_T__o v45; // [xsp+70h] [xbp-70h] BYREF

  if ( (byte_42B0C84 & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_B52984(&Method_DataManager_GetMasterData_UserServantStorageMaster___);
    sub_B52984(&Method_DataMasterBase_UserServantStorageMaster__UserServantEntity__long__GetEntity__);
    sub_B52984(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__);
    sub_B52984(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B52984(&WarehouseListViewItem_TypeInfo);
    byte_42B0C84 = 1;
  }
  memset(&v45, 0, sizeof(v45));
  v44 = 0;
  itemList = this->fields.itemList;
  if ( itemList )
  {
    if ( (this->fields.kind & 0xFFFFFFFE) == 2 )
    {
      if ( userSvtId < 1 )
      {
        v8 = 0LL;
        goto LABEL_42;
      }
      Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( Instance )
      {
        Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_UserServantStorageMaster___);
        if ( Instance )
        {
          Instance = (DataManager_o *)DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
                                        (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)Instance,
                                        userSvtId,
                                        (const MethodInfo_23E2500 *)Method_DataMasterBase_UserServantStorageMaster__UserServantEntity__long__GetEntity__);
          itemList = this->fields.itemList;
          if ( itemList )
          {
            v8 = Instance;
LABEL_42:
            System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
              (System_Collections_Generic_List_Enumerator_T__o *)&v42,
              (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)itemList,
              (const MethodInfo_2FF2480 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
            v45 = *(System_Collections_Generic_List_Enumerator_T__o *)&v42.fields.currentCryptoKey;
            while ( 1 )
            {
              v29 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                      &v45,
                      (const MethodInfo_201195C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
              if ( !v29 )
              {
                v43[0] = 342;
                v44 = 1;
                System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
                  &v45,
                  (const MethodInfo_2011958 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
                v44 = 0;
                return;
              }
              if ( v45.fields.current
                && (v31 = *(&WarehouseListViewItem_TypeInfo->_2.bitflags2 + 1),
                    *(&v45.fields.current->klass->_2.bitflags2 + 1) >= (unsigned int)v31) )
              {
                if ( (WarehouseListViewItem_c *)v45.fields.current->klass->_2.typeHierarchy[v31 - 1] == WarehouseListViewItem_TypeInfo )
                  current = (WarehouseListViewItem_o *)v45.fields.current;
                else
                  current = 0LL;
                if ( v8 )
                {
LABEL_47:
                  if ( !current )
                    sub_B52A5C(v29, v30);
                  v33 = WarehouseListViewItem__get_UserSvtId(current, v30);
                  v34 = *(_OWORD *)&v8->fields.lookup;
                  v35 = v33;
                  *(_OWORD *)&v42.fields.currentCryptoKey = *(_OWORD *)&v8->fields.m_CachedPtr;
                  *(_OWORD *)&v42.fields.fakeValue = v34;
                  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
                  }
                  v41 = v42;
                  if ( v35 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44789576(&v41, 0LL) )
                    WarehouseListViewItem__Modify(current, (UserServantEntity_o *)v8, v36);
                  goto LABEL_58;
                }
              }
              else
              {
                current = 0LL;
                if ( v8 )
                  goto LABEL_47;
              }
              if ( !current )
                sub_B52A5C(v29, v30);
LABEL_58:
              viewObject = (UnityEngine_Object_o *)current->fields.viewObject;
              if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              }
              if ( UnityEngine_Object__op_Inequality(viewObject, 0LL, 0LL) )
              {
                v39 = current->fields.viewObject;
                if ( !v39 )
                  sub_B52A5C(0LL, v38);
                ((void (__fastcall *)(struct ListViewObject_o *, WarehouseListViewItem_o *, Il2CppMethodPointer))v39->klass->vtable._5_SetItem.method)(
                  v39,
                  current,
                  v39->klass->vtable._6_SetItem.methodPtr);
              }
            }
          }
        }
      }
LABEL_73:
      sub_B52A5C(Instance, v7);
    }
    Entity = 0LL;
    SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
    if ( userSvtId >= 1 )
    {
      Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_73;
      Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                    Instance,
                                    (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_UserServantMaster___);
      if ( !Instance )
        goto LABEL_73;
      Entity = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
                 (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)Instance,
                 userSvtId,
                 (const MethodInfo_23E2500 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    }
    Instance = (DataManager_o *)this->fields.itemList;
    if ( !Instance )
      goto LABEL_73;
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v42,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)Instance,
      (const MethodInfo_2FF2480 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    v45.fields.current = (Il2CppObject *)v42.fields.fakeValue;
    *(_OWORD *)&v45.fields.list = *(_OWORD *)&v42.fields.currentCryptoKey;
    while ( 1 )
    {
      v11 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v45,
              (const MethodInfo_201195C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
      if ( !v11 )
      {
        v43[0] = 342;
        v28 = ++v44;
        System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
          &v45,
          (const MethodInfo_2011958 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
        if ( v28 && v43[v28 - 1] == 342 )
          v44 = v28 - 1;
        return;
      }
      if ( v45.fields.current
        && (v13 = *(&WarehouseListViewItem_TypeInfo->_2.bitflags2 + 1),
            *(&v45.fields.current->klass->_2.bitflags2 + 1) >= (unsigned int)v13) )
      {
        if ( (WarehouseListViewItem_c *)v45.fields.current->klass->_2.typeHierarchy[v13 - 1] == WarehouseListViewItem_TypeInfo )
          v14 = (WarehouseListViewItem_o *)v45.fields.current;
        else
          v14 = 0LL;
        if ( Entity )
        {
LABEL_20:
          if ( !v14 )
            sub_B52A5C(v11, v12);
          v15 = WarehouseListViewItem__get_UserSvtId(v14, v12);
          v16 = *(_OWORD *)&Entity->fields.id.fields.fakeValue;
          v17 = v15;
          *(_OWORD *)&v42.fields.currentCryptoKey = *(_OWORD *)&Entity->fields.id.fields.currentCryptoKey;
          *(_OWORD *)&v42.fields.fakeValue = v16;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          }
          v40 = v42;
          if ( v17 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44789576(&v40, 0LL) )
            WarehouseListViewItem__Modify(v14, Entity, v18);
          goto LABEL_31;
        }
      }
      else
      {
        v14 = 0LL;
        if ( Entity )
          goto LABEL_20;
      }
      if ( !v14 )
        sub_B52A5C(v11, v12);
LABEL_31:
      v19 = WarehouseListViewItem__get_UserSvtId(v14, v12);
      if ( !SelfUserGame )
        sub_B52A5C(v19, v20);
      favoriteUserSvtId = SelfUserGame->fields.favoriteUserSvtId;
      v22 = v19;
      v23 = WarehouseListViewItem__get_UserSvtId(v14, v20);
      WarehouseListViewItem__Modify_26449828(
        v14,
        v22 == favoriteUserSvtId,
        v23 == SelfUserGame->fields.pushUserSvtId,
        v24);
      v25 = (UnityEngine_Object_o *)v14->fields.viewObject;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Inequality(v25, 0LL, 0LL) )
      {
        v27 = v14->fields.viewObject;
        if ( !v27 )
          sub_B52A5C(0LL, v26);
        ((void (__fastcall *)(struct ListViewObject_o *, WarehouseListViewItem_o *, Il2CppMethodPointer))v27->klass->vtable._5_SetItem.method)(
          v27,
          v14,
          v27->klass->vtable._6_SetItem.methodPtr);
      }
    }
  }
}


void __fastcall WarehouseListViewManager__ModifyScaleChangeList(
        WarehouseListViewManager_o *this,
        System_Collections_Generic_Dictionary_long__int__o *selectServantIdDic,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x1
  __int64 Item; // x0
  const MethodInfo *v7; // x1
  struct WarehouseListManager_o *parentManager; // x8
  struct WarehouseListViewManager_o *baseListViewManager; // x9
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x21
  int size; // w22
  unsigned int v12; // w23
  WarehouseListViewItem_o *v13; // x21
  __int64 v14; // x9
  int64_t UserSvtId; // x0
  int64_t v16; // x0
  struct WarehouseListManager_o *v17; // x8
  struct WarehouseListViewManager_o *v18; // x9
  WarehouseListViewManager_o *v19; // x0
  const MethodInfo *v20; // x1

  if ( (byte_42B0C9F & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_Dictionary_long__int__ContainsKey__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_long__int__get_Count__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_long__int__get_Item__);
    sub_B52984(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_B52984(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_B52984(&WarehouseListViewItem_TypeInfo);
    byte_42B0C9F = 1;
  }
  if ( selectServantIdDic
    && System_Collections_Generic_Dictionary_long__int___get_Count(
         selectServantIdDic,
         (const MethodInfo_2F4A740 *)Method_System_Collections_Generic_Dictionary_long__int__get_Count__) )
  {
    WarehouseListViewManager__ReleaseAll(this, v5);
    parentManager = this->fields.parentManager;
    if ( !parentManager
      || (baseListViewManager = parentManager->fields.baseListViewManager) == 0LL
      || (parentManager->fields.totalSum = baseListViewManager->fields.selectSum,
          (itemList = this->fields.itemList) == 0LL) )
    {
LABEL_21:
      sub_B52A5C(Item, v7);
    }
    size = itemList->fields._size;
    if ( size >= 1 )
    {
      v12 = 0;
      while ( 1 )
      {
        if ( itemList->fields._size <= v12 )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
        v13 = (WarehouseListViewItem_o *)itemList->fields._items->m_Items[v12];
        if ( !v13 )
          goto LABEL_21;
        v14 = *(&WarehouseListViewItem_TypeInfo->_2.bitflags2 + 1);
        if ( *(&v13->klass->_2.bitflags2 + 1) < (unsigned int)v14
          || (WarehouseListViewItem_c *)v13->klass->_2.typeHierarchy[v14 - 1] != WarehouseListViewItem_TypeInfo )
        {
          break;
        }
        UserSvtId = WarehouseListViewItem__get_UserSvtId(v13, (const MethodInfo *)WarehouseListViewItem_TypeInfo);
        Item = System_Collections_Generic_Dictionary_long__int___ContainsKey(
                 selectServantIdDic,
                 UserSvtId,
                 (const MethodInfo_2F4ADB8 *)Method_System_Collections_Generic_Dictionary_long__int__ContainsKey__);
        if ( (Item & 1) != 0 )
        {
          v16 = WarehouseListViewItem__get_UserSvtId(v13, v7);
          Item = System_Collections_Generic_Dictionary_long__int___get_Item(
                   selectServantIdDic,
                   v16,
                   (const MethodInfo_2F4AA80 *)Method_System_Collections_Generic_Dictionary_long__int__get_Item__);
          v13->fields.selectNum = Item;
          v17 = this->fields.parentManager;
          ++this->fields.selectSum;
          if ( !v17 )
            goto LABEL_21;
          v18 = v17->fields.baseListViewManager;
          if ( !v18 )
            goto LABEL_21;
          v17->fields.totalSum = v18->fields.selectSum;
        }
        if ( (int)++v12 >= size )
          return;
        itemList = this->fields.itemList;
        if ( !itemList )
          goto LABEL_21;
      }
      v19 = (WarehouseListViewManager_o *)sub_B52D50(v13);
      WarehouseListViewManager__IsDragStart(v19, v20);
    }
  }
}


void __fastcall WarehouseListViewManager__OnClickBonusFilterKind(
        WarehouseListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  ListViewSort_o *sort; // x0
  System_Int32_array *bonusEventIdList; // x1
  System_Int32_array *servantFilterIdList; // x2

  if ( (byte_42B0C8F & 1) == 0 )
  {
    sub_B52984(&SoundManager_TypeInfo);
    byte_42B0C8F = 1;
  }
  if ( this->fields.isInput )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    sort = this->fields.sort;
    if ( !sort )
      sub_B52A5C(0LL, v3);
    bonusEventIdList = this->fields.bonusEventIdList;
    servantFilterIdList = this->fields.servantFilterIdList;
    if ( this->fields.isQuestStart )
      ListViewSort__IncBonusKind(sort, bonusEventIdList, servantFilterIdList, 0, 0LL, 0LL);
    else
      ListViewSort__IncBonusKind2(sort, bonusEventIdList, servantFilterIdList, 0LL, 0LL, 0LL, 0LL);
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
    ListViewManager__CheckScroll((ListViewManager_o *)this, this->fields.scaleType, 0LL);
  }
}


void __fastcall WarehouseListViewManager__OnClickFilterKind(WarehouseListViewManager_o *this, const MethodInfo *method)
{
  WebViewManager_o *Instance; // x0
  ListViewSort_o *sort; // x20
  CommonUI_o *v5; // x21
  ServantFilterSelectMenu_CallbackFunc_o *v6; // x22
  __int64 v7; // x0
  __int64 v8; // x1
  CommonUI_o *v9; // x0
  int32_t v10; // w1
  WebViewManager_o *v11; // x0
  ListViewSort_o *v12; // x20
  CommonUI_o *v13; // x21
  ServantFilterSelectMenu_CallbackFunc_o *v14; // x22
  WebViewManager_o *v15; // x0
  CommonUI_o *v16; // x21

  if ( (byte_42B0C97 & 1) == 0 )
  {
    sub_B52984(&ServantFilterSelectMenu_CallbackFunc_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B52984(&SoundManager_TypeInfo);
    sub_B52984(&Method_WarehouseListViewManager_EndSelectFilterKind__);
    byte_42B0C97 = 1;
  }
  if ( this->fields.isInput )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    switch ( this->fields.kind )
    {
      case 0:
      case 2:
        Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        sort = this->fields.sort;
        v5 = (CommonUI_o *)Instance;
        v6 = (ServantFilterSelectMenu_CallbackFunc_o *)sub_B52A54(ServantFilterSelectMenu_CallbackFunc_TypeInfo);
        ServantFilterSelectMenu_CallbackFunc___ctor(
          v6,
          (Il2CppObject *)this,
          Method_WarehouseListViewManager_EndSelectFilterKind__,
          0LL);
        if ( !v5 )
          goto LABEL_16;
        v9 = v5;
        v10 = 0;
        goto LABEL_15;
      case 1:
      case 3:
        v11 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        v12 = this->fields.sort;
        v13 = (CommonUI_o *)v11;
        v14 = (ServantFilterSelectMenu_CallbackFunc_o *)sub_B52A54(ServantFilterSelectMenu_CallbackFunc_TypeInfo);
        ServantFilterSelectMenu_CallbackFunc___ctor(
          v14,
          (Il2CppObject *)this,
          Method_WarehouseListViewManager_EndSelectFilterKind__,
          0LL);
        if ( !v13 )
          goto LABEL_16;
        CommonUI__OpenServantFilterSelectMenu_18165180(v13, 5, v12, (ListViewManager_o *)this, v14, -1, 0LL);
        break;
      default:
        v15 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        sort = this->fields.sort;
        v16 = (CommonUI_o *)v15;
        v6 = (ServantFilterSelectMenu_CallbackFunc_o *)sub_B52A54(ServantFilterSelectMenu_CallbackFunc_TypeInfo);
        ServantFilterSelectMenu_CallbackFunc___ctor(
          v6,
          (Il2CppObject *)this,
          Method_WarehouseListViewManager_EndSelectFilterKind__,
          0LL);
        if ( !v16 )
LABEL_16:
          sub_B52A5C(v7, v8);
        v10 = 6;
        v9 = v16;
LABEL_15:
        CommonUI__OpenServantFilterSelectMenu(v9, v10, sort, v6, -1, 0LL);
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
  __int64 v5; // x10
  ListViewItem_o *v6; // x2
  WarehouseListViewManager_CallbackFunc_o *callbackFunc; // x0

  if ( (byte_42B0C8E & 1) == 0 )
  {
    sub_B52984(&WarehouseListViewItem_TypeInfo);
    byte_42B0C8E = 1;
  }
  if ( item
    && (v5 = *(&WarehouseListViewItem_TypeInfo->_2.bitflags2 + 1), *(&item->klass->_2.bitflags2 + 1) >= (unsigned int)v5) )
  {
    if ( (WarehouseListViewItem_c *)item->klass->_2.typeHierarchy[v5 - 1] == WarehouseListViewItem_TypeInfo )
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
    WarehouseListViewManager_CallbackFunc__Invoke(callbackFunc, 1, (WarehouseListViewItem_o *)v6, 0LL);
}


void __fastcall WarehouseListViewManager__OnClickSortAscendingOrder(
        WarehouseListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x0
  __int64 v4; // x1
  struct ListViewSort_o *sort; // x8

  if ( (byte_42B0C9A & 1) == 0 )
  {
    sub_B52984(&SoundManager_TypeInfo);
    byte_42B0C9A = 1;
  }
  if ( this->fields.isInput )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    sort = this->fields.sort;
    if ( !sort )
      sub_B52A5C(v3, v4);
    sort->fields.isAscendingOrder ^= 1u;
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
  }
}


void __fastcall WarehouseListViewManager__OnClickSortKind(WarehouseListViewManager_o *this, const MethodInfo *method)
{
  unsigned int kind; // w23
  WebViewManager_o *Instance; // x0
  ListViewSort_o *sort; // x20
  CommonUI_o *v6; // x21
  ServantSortSelectMenu_CallbackFunc_o *v7; // x22
  __int64 v8; // x0
  __int64 v9; // x1
  int32_t v10; // w1

  if ( (byte_42B0C95 & 1) == 0 )
  {
    sub_B52984(&ServantSortSelectMenu_CallbackFunc_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B52984(&SoundManager_TypeInfo);
    sub_B52984(&Method_WarehouseListViewManager_EndSelectSortKind__);
    byte_42B0C95 = 1;
  }
  if ( this->fields.isInput )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    kind = this->fields.kind;
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sort = this->fields.sort;
    v6 = (CommonUI_o *)Instance;
    v7 = (ServantSortSelectMenu_CallbackFunc_o *)sub_B52A54(ServantSortSelectMenu_CallbackFunc_TypeInfo);
    ServantSortSelectMenu_CallbackFunc___ctor(
      v7,
      (Il2CppObject *)this,
      Method_WarehouseListViewManager_EndSelectSortKind__,
      0LL);
    if ( !v6 )
      sub_B52A5C(v8, v9);
    if ( kind < 4 )
      v10 = kind + 1;
    else
      v10 = 3;
    CommonUI__OpenServantSortSelectMenu(v6, v10, sort, 1, v7, 0LL);
  }
}


void __fastcall WarehouseListViewManager__OnLongPushListView(
        WarehouseListViewManager_o *this,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  __int64 v5; // x10
  ListViewItem_o *v6; // x2
  WarehouseListViewManager_CallbackFunc_o *callbackFunc; // x0

  if ( (byte_42B0C94 & 1) == 0 )
  {
    sub_B52984(&WarehouseListViewItem_TypeInfo);
    byte_42B0C94 = 1;
  }
  if ( item
    && (v5 = *(&WarehouseListViewItem_TypeInfo->_2.bitflags2 + 1), *(&item->klass->_2.bitflags2 + 1) >= (unsigned int)v5) )
  {
    if ( (WarehouseListViewItem_c *)item->klass->_2.typeHierarchy[v5 - 1] == WarehouseListViewItem_TypeInfo )
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
    WarehouseListViewManager_CallbackFunc__Invoke(callbackFunc, 2, (WarehouseListViewItem_o *)v6, 0LL);
}


void __fastcall WarehouseListViewManager__OnMoveEnd(WarehouseListViewManager_o *this, const MethodInfo *method)
{
  int32_t callbackCount; // w8
  bool v4; // vf
  int32_t v5; // w8
  UnityEngine_Object_o *scrollView; // x20
  __int64 v7; // x1
  UIScrollView_o *v8; // x0

  if ( (byte_42B0C8B & 1) == 0 )
  {
    sub_B52984(&UnityEngine_Object_TypeInfo);
    byte_42B0C8B = 1;
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
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Inequality(scrollView, 0LL, 0LL) )
      {
        v8 = this->fields.scrollView;
        if ( !v8
          || (((void (__fastcall *)(UIScrollView_o *, __int64, Il2CppMethodPointer))v8->klass->vtable._8_UpdateScrollbars.method)(
                v8,
                1LL,
                v8->klass->vtable._9_SetDragAmount.methodPtr),
              (v8 = this->fields.scrollView) == 0LL) )
        {
          sub_B52A5C(v8, v7);
        }
        UIScrollView__UpdatePosition(v8, 0LL);
      }
    }
  }
}


void __fastcall WarehouseListViewManager__RefrashListDisp(WarehouseListViewManager_o *this, const MethodInfo *method)
{
  void *parentManager; // x0
  const MethodInfo *v4; // x1
  int v5; // w21
  void *v6; // x20
  __int64 v7; // x22
  unsigned int v8; // w8

  if ( (byte_42B0C81 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_WarehouseListViewObject__get_Count__);
    sub_B52984(&Method_System_Collections_Generic_List_WarehouseListViewObject__get_Item__);
    byte_42B0C81 = 1;
  }
  parentManager = this->fields.parentManager;
  if ( !parentManager )
    goto LABEL_13;
  WarehouseListManager__RefrashListDisp((WarehouseListManager_o *)parentManager, method);
  parentManager = WarehouseListViewManager__get_ObjectList(this, v4);
  if ( !parentManager )
    goto LABEL_13;
  v5 = *((_DWORD *)parentManager + 6);
  v6 = parentManager;
  if ( v5 >= 1 )
  {
    v7 = 0LL;
    v8 = *((_DWORD *)parentManager + 6);
    while ( 1 )
    {
      if ( v8 <= (unsigned int)v7 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
      parentManager = *(void **)(*((_QWORD *)v6 + 2) + 8 * v7 + 32);
      if ( !parentManager )
        break;
      (*(void (__fastcall **)(void *, bool, _QWORD))(*(_QWORD *)parentManager + 456LL))(
        parentManager,
        this->fields.isInput,
        *(_QWORD *)(*(_QWORD *)parentManager + 464LL));
      if ( (int)v7 + 1 >= v5 )
        return;
      v8 = *((_DWORD *)v6 + 6);
      ++v7;
    }
LABEL_13:
    sub_B52A5C(parentManager, method);
  }
}


void __fastcall WarehouseListViewManager__ReleaseAll(WarehouseListViewManager_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x0
  __int64 v4; // x0
  __int64 v5; // x1
  Il2CppObject *current; // x20
  __int64 v7; // x9
  const MethodInfo *v8; // x3
  const MethodInfo *v9; // x1
  System_Collections_Generic_List_Enumerator_T__o v10; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_42B0C8D & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__);
    sub_B52984(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    sub_B52984(&WarehouseListViewItem_TypeInfo);
    byte_42B0C8D = 1;
  }
  memset(&v10, 0, sizeof(v10));
  itemList = this->fields.itemList;
  this->fields.sellEnableRestCnt = 0;
  if ( !itemList )
    sub_B52A5C(0LL, method);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v10,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)itemList,
    (const MethodInfo_2FF2480 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  while ( 1 )
  {
    v4 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
           &v10,
           (const MethodInfo_201195C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    if ( (v4 & 1) == 0 )
      break;
    current = v10.fields.current;
    if ( !v10.fields.current )
      goto LABEL_12;
    v7 = *(&WarehouseListViewItem_TypeInfo->_2.bitflags2 + 1);
    if ( *(&v10.fields.current->klass->_2.bitflags2 + 1) < (unsigned int)v7
      || (WarehouseListViewItem_c *)v10.fields.current->klass->_2.typeHierarchy[v7 - 1] != WarehouseListViewItem_TypeInfo )
    {
      v4 = sub_B52D50(v10.fields.current);
LABEL_12:
      sub_B52A5C(v4, v5);
    }
    ListViewItem__set_IsSelect((ListViewItem_o *)v10.fields.current, 0, 0LL);
    WarehouseListViewManager__ChangeSellEnableRestCnt(this, 1, (WarehouseListViewItem_o *)current, v8);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v10,
    (const MethodInfo_2011958 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
  this->fields.selectSum = 0;
  WarehouseListViewManager__RefrashListDisp(this, v9);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarehouseListViewManager__RequestListObject(
        WarehouseListViewManager_o *this,
        int32_t mode,
        float delay,
        const MethodInfo *method)
{
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *ObjectList; // x0
  __int64 v8; // x1
  int32_t size; // w8
  Il2CppObject *current; // x21
  System_Action_o *v11; // x22
  __int64 v12; // x0
  __int64 v13; // x1
  System_Collections_Generic_List_Enumerator_T__o v14; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_42B0C89 & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_WarehouseListViewObject__Dispose__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_WarehouseListViewObject__MoveNext__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_WarehouseListViewObject__get_Current__);
    sub_B52984(&Method_System_Collections_Generic_List_WarehouseListViewObject__GetEnumerator__);
    sub_B52984(&Method_System_Collections_Generic_List_WarehouseListViewObject__get_Count__);
    sub_B52984(&Method_WarehouseListViewManager_OnMoveEnd__);
    sub_B52984(&StringLiteral_10100/*"OnMoveEnd"*/);
    byte_42B0C89 = 1;
  }
  memset(&v14, 0, sizeof(v14));
  ObjectList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)WarehouseListViewManager__get_ObjectList(
                                                                                                this,
                                                                                                *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_B52A5C(0LL, v8);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10100/*"OnMoveEnd"*/,
      delay,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v14,
      ObjectList,
      (const MethodInfo_2FF2480 *)Method_System_Collections_Generic_List_WarehouseListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v14,
              (const MethodInfo_201195C *)Method_System_Collections_Generic_List_Enumerator_WarehouseListViewObject__MoveNext__) )
    {
      current = v14.fields.current;
      v11 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
      System_Action___ctor(v11, (Il2CppObject *)this, Method_WarehouseListViewManager_OnMoveEnd__, 0LL);
      if ( !current )
        sub_B52A5C(v12, v13);
      WarehouseListViewObject__Init_24368252((WarehouseListViewObject_o *)current, mode, v11, delay, 0LL);
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v14,
      (const MethodInfo_2011958 *)Method_System_Collections_Generic_List_Enumerator_WarehouseListViewObject__Dispose__);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarehouseListViewManager__RequestListObject_26462684(
        WarehouseListViewManager_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *ObjectList; // x0
  __int64 v6; // x1
  int32_t size; // w8
  Il2CppObject *current; // x21
  System_Action_o *v9; // x22
  __int64 v10; // x0
  __int64 v11; // x1
  System_Collections_Generic_List_Enumerator_T__o v12; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_42B0C8A & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_WarehouseListViewObject__Dispose__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_WarehouseListViewObject__MoveNext__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_WarehouseListViewObject__get_Current__);
    sub_B52984(&Method_System_Collections_Generic_List_WarehouseListViewObject__GetEnumerator__);
    sub_B52984(&Method_System_Collections_Generic_List_WarehouseListViewObject__get_Count__);
    sub_B52984(&Method_WarehouseListViewManager_OnMoveEnd__);
    sub_B52984(&StringLiteral_10100/*"OnMoveEnd"*/);
    byte_42B0C8A = 1;
  }
  memset(&v12, 0, sizeof(v12));
  ObjectList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)WarehouseListViewManager__get_ObjectList(
                                                                                                this,
                                                                                                *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_B52A5C(0LL, v6);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10100/*"OnMoveEnd"*/,
      0.0,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v12,
      ObjectList,
      (const MethodInfo_2FF2480 *)Method_System_Collections_Generic_List_WarehouseListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v12,
              (const MethodInfo_201195C *)Method_System_Collections_Generic_List_Enumerator_WarehouseListViewObject__MoveNext__) )
    {
      current = v12.fields.current;
      v9 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
      System_Action___ctor(v9, (Il2CppObject *)this, Method_WarehouseListViewManager_OnMoveEnd__, 0LL);
      if ( !current )
        sub_B52A5C(v10, v11);
      WarehouseListViewObject__Init_24368316((WarehouseListViewObject_o *)current, mode, v9, 0LL);
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v12,
      (const MethodInfo_2011958 *)Method_System_Collections_Generic_List_Enumerator_WarehouseListViewObject__Dispose__);
  }
}


void __fastcall WarehouseListViewManager__SaveSortInfo(WarehouseListViewManager_o *this, const MethodInfo *method)
{
  WarehouseListViewManager_c *v2; // x0
  ListViewSort_o *servantSortInfo; // x8
  __int64 v4; // x0
  __int64 v5; // x1
  ListViewSort_o *servantEquipSortInfo; // x8
  ListViewSort_o *servantWarehouseSortInfo; // x8
  ListViewSort_o *servantEquipWarehouseSortInfo; // x8

  if ( (byte_42B0C82 & 1) == 0 )
  {
    sub_B52984(&WarehouseListViewManager_TypeInfo);
    byte_42B0C82 = 1;
  }
  v2 = WarehouseListViewManager_TypeInfo;
  if ( (BYTE3(WarehouseListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarehouseListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarehouseListViewManager_TypeInfo);
    v2 = WarehouseListViewManager_TypeInfo;
  }
  servantSortInfo = v2->static_fields->servantSortInfo;
  if ( servantSortInfo )
  {
    if ( (BYTE3(v2->vtable._0_Equals.methodPtr) & 4) != 0 && !v2->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v2);
      servantSortInfo = WarehouseListViewManager_TypeInfo->static_fields->servantSortInfo;
      if ( !servantSortInfo )
        goto LABEL_36;
    }
    ListViewSort__Save(servantSortInfo, 0LL);
    v2 = WarehouseListViewManager_TypeInfo;
  }
  if ( (BYTE3(v2->vtable._0_Equals.methodPtr) & 4) != 0 && !v2->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v2);
    v2 = WarehouseListViewManager_TypeInfo;
  }
  servantEquipSortInfo = v2->static_fields->servantEquipSortInfo;
  if ( servantEquipSortInfo )
  {
    if ( (BYTE3(v2->vtable._0_Equals.methodPtr) & 4) != 0 && !v2->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v2);
      servantEquipSortInfo = WarehouseListViewManager_TypeInfo->static_fields->servantEquipSortInfo;
      if ( !servantEquipSortInfo )
        goto LABEL_36;
    }
    ListViewSort__Save(servantEquipSortInfo, 0LL);
    v2 = WarehouseListViewManager_TypeInfo;
  }
  if ( (BYTE3(v2->vtable._0_Equals.methodPtr) & 4) != 0 && !v2->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v2);
    v2 = WarehouseListViewManager_TypeInfo;
  }
  servantWarehouseSortInfo = v2->static_fields->servantWarehouseSortInfo;
  if ( servantWarehouseSortInfo )
  {
    if ( (BYTE3(v2->vtable._0_Equals.methodPtr) & 4) != 0 && !v2->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v2);
      servantWarehouseSortInfo = WarehouseListViewManager_TypeInfo->static_fields->servantWarehouseSortInfo;
      if ( !servantWarehouseSortInfo )
        goto LABEL_36;
    }
    ListViewSort__Save(servantWarehouseSortInfo, 0LL);
    v2 = WarehouseListViewManager_TypeInfo;
  }
  if ( (BYTE3(v2->vtable._0_Equals.methodPtr) & 4) != 0 && !v2->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v2);
    v2 = WarehouseListViewManager_TypeInfo;
  }
  servantEquipWarehouseSortInfo = v2->static_fields->servantEquipWarehouseSortInfo;
  if ( servantEquipWarehouseSortInfo )
  {
    if ( (BYTE3(v2->vtable._0_Equals.methodPtr) & 4) == 0
      || v2->_2.cctor_finished
      || (j_il2cpp_runtime_class_init_0(v2),
          (servantEquipWarehouseSortInfo = WarehouseListViewManager_TypeInfo->static_fields->servantEquipWarehouseSortInfo) != 0LL) )
    {
      ListViewSort__Save(servantEquipWarehouseSortInfo, 0LL);
      return;
    }
LABEL_36:
    sub_B52A5C(v4, v5);
  }
}


void __fastcall WarehouseListViewManager__SelectListView(
        WarehouseListViewManager_o *this,
        WarehouseListViewItem_o *selectItem,
        const MethodInfo *method)
{
  WarehouseListViewManager_o *v4; // x19
  SoundManager_c *v5; // x0
  const MethodInfo *v6; // x4
  struct WarehouseListManager_o *parentManager; // x8
  struct WarehouseListViewManager_o *baseListViewManager; // x9
  UILabel_o *selectDoneLabel; // x21
  struct WarehouseListManager_o *v10; // x8
  System_String_o *v11; // x22
  struct WarehouseListManager_o *v12; // x8
  Il2CppObject *v13; // x23
  Il2CppObject *v14; // x0
  const MethodInfo *v15; // x3
  const MethodInfo *v16; // x2
  struct WarehouseListManager_o *v17; // x8
  const MethodInfo *v18; // x1
  struct WarehouseListManager_o *v19; // x8
  struct WarehouseListManager_o *v20; // x8
  struct WarehouseListViewManager_o *v21; // x9
  UILabel_o *v22; // x21
  struct WarehouseListManager_o *v23; // x8
  System_String_o *v24; // x22
  struct WarehouseListManager_o *v25; // x8
  Il2CppObject *v26; // x23
  Il2CppObject *v27; // x0
  const MethodInfo *v28; // x3
  int32_t sendMax; // [xsp+8h] [xbp-38h] BYREF
  int32_t totalSum; // [xsp+Ch] [xbp-34h] BYREF

  v4 = this;
  if ( (byte_42B0C90 & 1) == 0 )
  {
    sub_B52984(&int_TypeInfo);
    sub_B52984(&LocalizationManager_TypeInfo);
    sub_B52984(&SoundManager_TypeInfo);
    this = (WarehouseListViewManager_o *)sub_B52984(&StringLiteral_12558/*"SUM_INFO"*/);
    byte_42B0C90 = 1;
  }
  if ( !selectItem )
    goto LABEL_42;
  if ( WarehouseListViewItem__get_IsCanNotSelect(selectItem, (const MethodInfo *)selectItem) )
  {
    v5 = SoundManager_TypeInfo;
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) == 0 || SoundManager_TypeInfo->_2.cctor_finished )
      goto LABEL_40;
    goto LABEL_7;
  }
  if ( ListViewItem__get_IsSelect((ListViewItem_o *)selectItem, 0LL) )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    parentManager = v4->fields.parentManager;
    --v4->fields.selectSum;
    if ( parentManager )
    {
      baseListViewManager = parentManager->fields.baseListViewManager;
      if ( baseListViewManager )
      {
        parentManager->fields.totalSum = baseListViewManager->fields.selectSum;
        selectDoneLabel = v4->fields.selectDoneLabel;
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        this = (WarehouseListViewManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12558/*"SUM_INFO"*/, 0LL);
        v10 = v4->fields.parentManager;
        if ( v10 )
        {
          v11 = (System_String_o *)this;
          totalSum = v10->fields.totalSum;
          this = (WarehouseListViewManager_o *)j_il2cpp_value_box_0(int_TypeInfo, &totalSum);
          v12 = v4->fields.parentManager;
          if ( v12 )
          {
            v13 = (Il2CppObject *)this;
            sendMax = v12->fields.sendMax;
            v14 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &sendMax);
            this = (WarehouseListViewManager_o *)System_String__Format_44563852(v11, v13, v14, 0LL);
            if ( selectDoneLabel )
            {
              UILabel__set_text(selectDoneLabel, (System_String_o *)this, 0LL);
              WarehouseListViewManager__ChangeSellEnableRestCnt(v4, 1, selectItem, v15);
              v17 = v4->fields.parentManager;
              if ( v17 )
              {
                this = v17->fields.baseListViewManager;
                if ( this )
                {
                  WarehouseListViewManager__DecrementNumber(this, selectItem->fields.selectNum, v16);
                  ListViewItem__set_IsSelect((ListViewItem_o *)selectItem, 0, 0LL);
LABEL_37:
                  WarehouseListViewManager__RefrashListDisp(v4, v18);
                  return;
                }
              }
            }
          }
        }
      }
    }
    goto LABEL_42;
  }
  if ( WarehouseListViewManager__IsSelectEnable(v4, selectItem, 0, 0, v6) )
  {
    if ( (WORD1(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    v19 = v4->fields.parentManager;
    if ( v19 )
    {
      selectItem->fields.selectNum = v19->fields.totalSum;
      v20 = v4->fields.parentManager;
      ++v4->fields.selectSum;
      if ( v20 )
      {
        v21 = v20->fields.baseListViewManager;
        if ( v21 )
        {
          v20->fields.totalSum = v21->fields.selectSum;
          v22 = v4->fields.selectDoneLabel;
          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          this = (WarehouseListViewManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12558/*"SUM_INFO"*/, 0LL);
          v23 = v4->fields.parentManager;
          if ( v23 )
          {
            v24 = (System_String_o *)this;
            totalSum = v23->fields.totalSum;
            this = (WarehouseListViewManager_o *)j_il2cpp_value_box_0(int_TypeInfo, &totalSum);
            v25 = v4->fields.parentManager;
            if ( v25 )
            {
              v26 = (Il2CppObject *)this;
              sendMax = v25->fields.sendMax;
              v27 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &sendMax);
              this = (WarehouseListViewManager_o *)System_String__Format_44563852(v24, v26, v27, 0LL);
              if ( v22 )
              {
                UILabel__set_text(v22, (System_String_o *)this, 0LL);
                WarehouseListViewManager__ChangeSellEnableRestCnt(v4, 0, selectItem, v28);
                goto LABEL_37;
              }
            }
          }
        }
      }
    }
LABEL_42:
    sub_B52A5C(this, selectItem);
  }
  if ( (WORD1(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) == 0
    || SoundManager_TypeInfo->_2.cctor_finished )
  {
    goto LABEL_40;
  }
  v5 = SoundManager_TypeInfo;
LABEL_7:
  j_il2cpp_runtime_class_init_0(v5);
LABEL_40:
  SoundManager__playSystemSe(2, 0LL);
}


void __fastcall WarehouseListViewManager__SelectListViewChoice(
        WarehouseListViewManager_o *this,
        WarehouseListViewItem_o *selectItem,
        const MethodInfo *method)
{
  __int64 v5; // x0
  const MethodInfo *v6; // x1

  if ( (byte_42B0C93 & 1) == 0 )
  {
    sub_B52984(&SoundManager_TypeInfo);
    byte_42B0C93 = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(0, 0LL);
  if ( !selectItem )
    sub_B52A5C(v5, v6);
  selectItem->fields.isSwapChoice ^= 1u;
  WarehouseListViewManager__RefrashListDisp(this, v6);
}


void __fastcall WarehouseListViewManager__SelectListViewLock(
        WarehouseListViewManager_o *this,
        WarehouseListViewItem_o *selectItem,
        const MethodInfo *method)
{
  __int64 v5; // x0
  const MethodInfo *v6; // x1

  if ( (byte_42B0C92 & 1) == 0 )
  {
    sub_B52984(&SoundManager_TypeInfo);
    byte_42B0C92 = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(11, 0LL);
  if ( !selectItem )
    sub_B52A5C(v5, v6);
  selectItem->fields.isSwapLock ^= 1u;
  WarehouseListViewManager__RefrashListDisp(this, v6);
}


void __fastcall WarehouseListViewManager__SetDragEnd(WarehouseListViewManager_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  const MethodInfo *v4; // x2
  int32_t dragStartIndex; // w20
  int32_t dragEndIndex; // w21

  if ( (byte_42B0CA3 & 1) == 0 )
  {
    sub_B52984(&SoundManager_TypeInfo);
    byte_42B0CA3 = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(0, 0LL);
  dragStartIndex = this->fields.dragStartIndex;
  if ( (dragStartIndex & 0x80000000) == 0 )
  {
    dragEndIndex = this->fields.dragEndIndex;
    if ( dragStartIndex <= dragEndIndex )
    {
      do
        WarehouseListViewManager__DecideDragSelect(this, dragStartIndex++, v4);
      while ( dragStartIndex <= this->fields.dragEndIndex );
    }
    else
    {
      do
        WarehouseListViewManager__DecideDragSelect(this, dragEndIndex++, v4);
      while ( dragEndIndex <= this->fields.dragStartIndex );
    }
  }
  WarehouseListViewManager__RefrashListDisp(this, v3);
  *(_OWORD *)&this->fields.dragSelectSum = xmmword_327CE90;
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
  WarehouseListViewManager_o *v6; // x20
  struct System_Collections_Generic_List_ListViewItem__o *itemSortList; // x22
  ListViewItem_o *v8; // x19
  WarehouseListViewItem_c *v9; // x1
  __int64 v10; // x9
  int monitor_high; // w8
  bool v12; // w21
  _BOOL4 v13; // w21
  bool IsSelect; // w0
  const MethodInfo *v15; // x4
  int v16; // w8
  UnityEngine_Object_o *viewObject; // x20
  __int64 v18; // x9
  bool result; // w0
  WarehouseListViewManager_o *v20; // x0
  int32_t v21; // w1
  bool v22; // w2
  const MethodInfo *v23; // x3

  v6 = this;
  if ( (byte_42B0CA1 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&WarehouseListViewItem_TypeInfo);
    this = (WarehouseListViewManager_o *)sub_B52984(&WarehouseListViewObject_TypeInfo);
    byte_42B0CA1 = 1;
  }
  itemSortList = v6->fields.itemSortList;
  if ( !itemSortList )
    goto LABEL_49;
  if ( itemSortList->fields._size <= (unsigned int)index )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
  v8 = itemSortList->fields._items->m_Items[index];
  if ( !v8 )
    goto LABEL_49;
  v9 = WarehouseListViewItem_TypeInfo;
  v10 = *(&WarehouseListViewItem_TypeInfo->_2.bitflags2 + 1);
  if ( *(&v8->klass->_2.bitflags2 + 1) < (unsigned int)v10
    || (WarehouseListViewItem_c *)v8->klass->_2.typeHierarchy[v10 - 1] != WarehouseListViewItem_TypeInfo )
  {
    this = (WarehouseListViewManager_o *)v8;
    goto LABEL_51;
  }
  monitor_high = HIDWORD(v8[2].monitor);
  if ( !isDragSelect )
  {
    if ( (monitor_high & 0x80000000) == 0 )
    {
      if ( !ListViewItem__get_IsSelect(v8, 0LL) && SHIDWORD(v8[2].monitor) >= 1 )
      {
        if ( BYTE6(v8[1].fields.sortValue1) )
          --v6->fields.dragSelectFriendShipSum;
        else
          --v6->fields.dragSelectSum;
        if ( !v6->fields.kind )
        {
          this = (WarehouseListViewManager_o *)v8[1].monitor;
          if ( !this )
            goto LABEL_49;
          if ( ServantEntity__get_IsOrganization((ServantEntity_o *)this, 0LL) && !HIDWORD(v8[1].fields.sortValue2B) )
            --v6->fields.dragServantSelectSum;
        }
      }
      v12 = 0;
      v16 = -1;
      goto LABEL_29;
    }
    goto LABEL_31;
  }
  if ( (monitor_high & 0x80000000) == 0 )
    goto LABEL_31;
  HIDWORD(v8[2].monitor) = 0;
  v12 = 0;
  if ( !WarehouseListViewItem__get_IsCanNotSelect((WarehouseListViewItem_o *)v8, (const MethodInfo *)v9) )
  {
    v13 = v6->fields.isDragSelect;
    IsSelect = ListViewItem__get_IsSelect(v8, 0LL);
    if ( v13 )
    {
      if ( !IsSelect )
      {
        if ( !WarehouseListViewManager__IsSelectEnable(
                v6,
                (WarehouseListViewItem_o *)v8,
                v6->fields.dragSelectSum,
                v6->fields.dragServantSelectSum,
                v15) )
        {
          v12 = 1;
          goto LABEL_32;
        }
        if ( BYTE6(v8[1].fields.sortValue1) )
          ++v6->fields.dragSelectFriendShipSum;
        else
          ++v6->fields.dragSelectSum;
        if ( !v6->fields.kind )
        {
          this = (WarehouseListViewManager_o *)v8[1].monitor;
          if ( !this )
            goto LABEL_49;
          if ( ServantEntity__get_IsOrganization((ServantEntity_o *)this, 0LL) && !HIDWORD(v8[1].fields.sortValue2B) )
            ++v6->fields.dragServantSelectSum;
        }
        goto LABEL_48;
      }
    }
    else if ( IsSelect )
    {
LABEL_48:
      v12 = 0;
      v16 = 1;
LABEL_29:
      HIDWORD(v8[2].monitor) = v16;
      goto LABEL_32;
    }
LABEL_31:
    v12 = 0;
  }
LABEL_32:
  viewObject = (UnityEngine_Object_o *)v8->fields.viewObject;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Inequality(viewObject, 0LL, 0LL) )
    return v12;
  this = (WarehouseListViewManager_o *)v8->fields.viewObject;
  if ( !this )
LABEL_49:
    sub_B52A5C(this, *(_QWORD *)&index);
  v18 = *(&WarehouseListViewObject_TypeInfo->_2.bitflags2 + 1);
  if ( *(&this->klass->_2.bitflags2 + 1) >= (unsigned int)v18
    && (WarehouseListViewObject_c *)this->klass->_2.typeHierarchy[v18 - 1] == WarehouseListViewObject_TypeInfo )
  {
    WarehouseListViewObject__SetupDisp((WarehouseListViewObject_o *)this, 0LL);
    return v12;
  }
LABEL_51:
  v20 = (WarehouseListViewManager_o *)sub_B52D50(this);
  WarehouseListViewManager__SetDragStart(v20, v21, v22, v23);
  return result;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarehouseListViewManager__SetDragSelectItem(
        WarehouseListViewManager_o *this,
        int32_t startIndex,
        int32_t endIndex,
        const MethodInfo *method)
{
  int32_t v5; // w21
  WarehouseListViewManager_o *v6; // x19
  int32_t dragStartIndex; // w8
  int32_t dragEndIndex; // w9
  int v9; // w25
  int v10; // w26
  int32_t v11; // w23
  int32_t v12; // w24
  int32_t v13; // w22
  struct WarehouseListManager_o *parentManager; // x8
  int v15; // w27
  struct System_Collections_Generic_List_ListViewItem__o *itemSortList; // x20
  WarehouseListViewManager_o *v17; // x20
  __int64 v18; // x9
  UnityEngine_Object_o *clipRange; // x21
  __int64 v20; // x9
  WarehouseListViewManager_o *v21; // x0
  int32_t v22; // w1
  bool v23; // w2
  const MethodInfo *v24; // x3

  v5 = startIndex;
  v6 = this;
  if ( (byte_42B0CA0 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&WarehouseListViewItem_TypeInfo);
    this = (WarehouseListViewManager_o *)sub_B52984(&WarehouseListViewObject_TypeInfo);
    byte_42B0CA0 = 1;
  }
  dragStartIndex = v6->fields.dragStartIndex;
  if ( (dragStartIndex & 0x80000000) != 0 )
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
  v6->fields.dragStartIndex = v5;
  v6->fields.dragEndIndex = endIndex;
  if ( (v5 & 0x80000000) != 0 )
  {
    v11 = -1;
    v12 = -1;
    if ( (v10 & 0x80000000) != 0 )
      goto LABEL_28;
  }
  else
  {
    if ( v5 <= endIndex )
      v11 = endIndex;
    else
      v11 = v5;
    if ( v5 <= endIndex )
      v12 = v5;
    else
      v12 = endIndex;
    if ( (v10 & 0x80000000) != 0 )
      goto LABEL_28;
  }
  if ( v10 <= v9 )
  {
    v13 = v10;
    do
    {
      if ( v13 > v11 || (v12 & 0x80000000) != 0 || v13 < v12 )
        this = (WarehouseListViewManager_o *)WarehouseListViewManager__SetDragSelect(v6, v13, 0, method);
      ++v13;
    }
    while ( v13 <= v9 );
  }
LABEL_28:
  if ( (v5 & 0x80000000) == 0 )
  {
    if ( v5 <= endIndex )
    {
      do
      {
        if ( v5 > v9 || (v10 & 0x80000000) != 0 || v5 < v10 )
          this = (WarehouseListViewManager_o *)WarehouseListViewManager__SetDragSelect(v6, v5, 1, method);
        ++v5;
      }
      while ( v5 <= endIndex );
    }
    else
    {
      do
      {
        if ( v5 > v9 || (v10 & 0x80000000) != 0 || v5 < v10 )
          this = (WarehouseListViewManager_o *)WarehouseListViewManager__SetDragSelect(v6, v5, 1, method);
        --v5;
      }
      while ( v5 >= endIndex );
    }
    if ( (v12 & 0x80000000) == 0 && v6->fields.isDragSelect )
    {
      parentManager = v6->fields.parentManager;
      if ( !parentManager )
LABEL_63:
        sub_B52A5C(this, *(_QWORD *)&startIndex);
      if ( v12 <= v11 )
      {
        v15 = parentManager->fields.totalSum + 1;
        while ( 1 )
        {
          itemSortList = v6->fields.itemSortList;
          if ( !itemSortList )
            goto LABEL_63;
          if ( itemSortList->fields._size <= (unsigned int)v12 )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
          v17 = (WarehouseListViewManager_o *)itemSortList->fields._items->m_Items[v12];
          if ( !v17 )
            goto LABEL_63;
          *(_QWORD *)&startIndex = WarehouseListViewItem_TypeInfo;
          v18 = *(&WarehouseListViewItem_TypeInfo->_2.bitflags2 + 1);
          if ( *(&v17->klass->_2.bitflags2 + 1) < (unsigned int)v18
            || (WarehouseListViewItem_c *)v17->klass->_2.typeHierarchy[v18 - 1] != WarehouseListViewItem_TypeInfo )
          {
            break;
          }
          if ( SHIDWORD(v17->fields.bottomItem) >= 1 )
          {
            HIDWORD(v17->fields.bottomItem) = v15;
            clipRange = (UnityEngine_Object_o *)v17->fields.clipRange;
            ++v15;
            if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            }
            this = (WarehouseListViewManager_o *)UnityEngine_Object__op_Inequality(clipRange, 0LL, 0LL);
            if ( ((unsigned __int8)this & 1) != 0 )
            {
              this = (WarehouseListViewManager_o *)v17->fields.clipRange;
              if ( !this )
                goto LABEL_63;
              v20 = *(&WarehouseListViewObject_TypeInfo->_2.bitflags2 + 1);
              if ( *(&this->klass->_2.bitflags2 + 1) < (unsigned int)v20
                || (WarehouseListViewObject_c *)this->klass->_2.typeHierarchy[v20 - 1] != WarehouseListViewObject_TypeInfo )
              {
                goto LABEL_65;
              }
              WarehouseListViewObject__SetupDisp((WarehouseListViewObject_o *)this, 0LL);
            }
          }
          if ( ++v12 > v11 )
            return;
        }
        this = v17;
LABEL_65:
        v21 = (WarehouseListViewManager_o *)sub_B52D50(this);
        WarehouseListViewManager__SetDragSelect(v21, v22, v23, v24);
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
  int32_t v5; // w20
  WarehouseListViewManager_o *v6; // x19
  struct System_Collections_Generic_List_ListViewItem__o *itemSortList; // x25
  int size; // w21
  int v9; // w22
  __int64 v10; // x9
  UnityEngine_Object_o *scrollView; // x20

  v5 = startIndex;
  v6 = this;
  if ( (byte_42B0CA2 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_B52984(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    this = (WarehouseListViewManager_o *)sub_B52984(&WarehouseListViewItem_TypeInfo);
    byte_42B0CA2 = 1;
  }
  *(_OWORD *)&v6->fields.dragSelectSum = xmmword_327CE90;
  itemSortList = v6->fields.itemSortList;
  v6->fields.isDragSelect = isDragSelect;
  v6->fields.dragSelectFriendShipSum = 0;
  if ( !itemSortList )
    goto LABEL_22;
  size = itemSortList->fields._size;
  if ( size >= 1 )
  {
    v9 = 0;
    while ( 1 )
    {
      if ( itemSortList->fields._size <= (unsigned int)v9 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
      this = (WarehouseListViewManager_o *)itemSortList->fields._items->m_Items[v9];
      if ( !this )
        goto LABEL_22;
      *(_QWORD *)&startIndex = WarehouseListViewItem_TypeInfo;
      v10 = *(&WarehouseListViewItem_TypeInfo->_2.bitflags2 + 1);
      if ( *(&this->klass->_2.bitflags2 + 1) < (unsigned int)v10
        || (WarehouseListViewItem_c *)this->klass->_2.typeHierarchy[v10 - 1] != WarehouseListViewItem_TypeInfo )
      {
        break;
      }
      ++v9;
      HIDWORD(this->fields.bottomItem) = -1;
      if ( v9 >= size )
        goto LABEL_14;
      itemSortList = v6->fields.itemSortList;
      if ( !itemSortList )
        goto LABEL_22;
    }
    this = (WarehouseListViewManager_o *)sub_B52D50(this);
LABEL_22:
    sub_B52A5C(this, *(_QWORD *)&startIndex);
  }
LABEL_14:
  WarehouseListViewManager__SetDragSelectItem(v6, v5, v5, method);
  scrollView = (UnityEngine_Object_o *)v6->fields.scrollView;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(scrollView, 0LL, 0LL) )
  {
    this = (WarehouseListViewManager_o *)v6->fields.scrollView;
    if ( !this )
      goto LABEL_22;
    UIScrollView__Press((UIScrollView_o *)this, 0, 0LL);
  }
}


void __fastcall WarehouseListViewManager__SetFilterButtonImage(
        WarehouseListViewManager_o *this,
        const MethodInfo *method)
{
  ListViewSort_o *sort; // x0
  UISprite_o *filterSprite; // x19
  System_String_o **v5; // x8

  if ( (byte_42B0C99 & 1) == 0 )
  {
    sub_B52984(&StringLiteral_17111/*"btn_filter_on"*/);
    sub_B52984(&StringLiteral_17110/*"btn_filter"*/);
    byte_42B0C99 = 1;
  }
  sort = this->fields.sort;
  if ( !sort
    || (filterSprite = this->fields.filterSprite,
        sort = (ListViewSort_o *)ListViewSort__CheckFilterDefaultAll(sort, -1, 0LL),
        !filterSprite) )
  {
    sub_B52A5C(sort, method);
  }
  v5 = (System_String_o **)&StringLiteral_17110/*"btn_filter"*/;
  if ( ((unsigned __int8)sort & 1) == 0 )
    v5 = (System_String_o **)&StringLiteral_17111/*"btn_filter_on"*/;
  UISprite__set_spriteName(filterSprite, *v5, 0LL);
}


void __fastcall WarehouseListViewManager__SetMode(
        WarehouseListViewManager_o *this,
        int32_t mode,
        WarehouseListViewManager_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  const MethodInfo *v10; // x2

  this->fields.callbackFunc = callback;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.callbackFunc,
    (System_Int32_array **)callback,
    (System_String_array **)callback,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  WarehouseListViewManager__SetMode_26461152(this, mode, v10);
}


void __fastcall WarehouseListViewManager__SetMode_26461152(
        WarehouseListViewManager_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  __int64 v5; // x1
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x0
  _BOOL8 v7; // x0
  __int64 v8; // x1
  WarehouseListViewItem_o *current; // x20
  __int64 v10; // x9
  const MethodInfo *v11; // x1
  _BOOL8 v12; // x0
  __int64 v13; // x1
  struct WarehouseListManager_o *v14; // x8
  struct WarehouseListViewManager_o *v15; // x9
  UILabel_o *v16; // x21
  System_String_o *v17; // x0
  __int64 v18; // x1
  struct WarehouseListManager_o *v19; // x8
  System_String_o *v20; // x22
  __int64 v21; // x0
  __int64 v22; // x1
  struct WarehouseListManager_o *v23; // x8
  Il2CppObject *v24; // x23
  Il2CppObject *v25; // x2
  System_String_o *v26; // x0
  __int64 v27; // x0
  __int64 v28; // x1
  const MethodInfo *v29; // x2
  struct WarehouseListManager_o *v30; // x8
  WarehouseListViewManager_o *v31; // x0
  LocalizationManager_c **v32; // x21
  char v33; // w24
  __int64 v34; // x9
  const MethodInfo *v35; // x1
  _BOOL8 CanNotSelect; // x0
  __int64 v37; // x1
  struct WarehouseListManager_o *parentManager; // x8
  struct WarehouseListViewManager_o *baseListViewManager; // x9
  LocalizationManager_c **v40; // x28
  LocalizationManager_c *v41; // x0
  UILabel_o *selectDoneLabel; // x21
  System_String_o *v43; // x0
  __int64 v44; // x1
  struct WarehouseListManager_o *v45; // x8
  System_String_o *v46; // x22
  __int64 v47; // x0
  __int64 v48; // x1
  struct WarehouseListManager_o *v49; // x8
  Il2CppObject *v50; // x23
  Il2CppObject *v51; // x2
  System_String_o *v52; // x0
  __int64 v53; // x0
  __int64 v54; // x1
  const MethodInfo *v55; // x2
  struct WarehouseListManager_o *v56; // x8
  WarehouseListViewManager_o *v57; // x0
  __int64 v58; // x0
  __int64 v59; // x1
  const MethodInfo *v60; // x1
  const MethodInfo *v61; // x2
  int32_t v62; // w1
  const MethodInfo *v63; // x1
  int32_t sendMax; // [xsp+4h] [xbp-8Ch] BYREF
  System_Collections_Generic_List_Enumerator_T__o v65; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v66; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_42B0C88 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__);
    sub_B52984(&int_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    sub_B52984(&LocalizationManager_TypeInfo);
    sub_B52984(&WarehouseListViewItem_TypeInfo);
    sub_B52984(&StringLiteral_12558/*"SUM_INFO"*/);
    byte_42B0C88 = 1;
  }
  memset(&v66, 0, sizeof(v66));
  this->fields.initMode = mode;
  this->fields.callbackCount = ListViewManager__get_ObjectSum((ListViewManager_o *)this, 0LL);
  ListViewManager__set_IsInput((ListViewManager_o *)this, mode == 2, 0LL);
  if ( (unsigned int)(mode - 1) < 2 )
  {
    itemList = this->fields.itemList;
    if ( itemList )
    {
      System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
        &v65,
        (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)itemList,
        (const MethodInfo_2FF2480 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
      v32 = &LocalizationManager_TypeInfo;
      v33 = 0;
      v66 = v65;
      while ( 1 )
      {
        v58 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                &v66,
                (const MethodInfo_201195C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
        if ( (v58 & 1) == 0 )
          break;
        current = (WarehouseListViewItem_o *)v66.fields.current;
        if ( !v66.fields.current )
          goto LABEL_53;
        v34 = *(&WarehouseListViewItem_TypeInfo->_2.bitflags2 + 1);
        if ( *(&v66.fields.current->klass->_2.bitflags2 + 1) < (unsigned int)v34
          || (WarehouseListViewItem_c *)v66.fields.current->klass->_2.typeHierarchy[v34 - 1] != WarehouseListViewItem_TypeInfo )
        {
          sub_B52D50(v66.fields.current);
LABEL_52:
          v58 = sub_B52D50(current);
LABEL_53:
          sub_B52A5C(v58, v59);
        }
        if ( ListViewItem__get_IsSelect((ListViewItem_o *)v66.fields.current, 0LL) )
        {
          CanNotSelect = WarehouseListViewItem__get_IsCanNotSelect(current, v35);
          if ( CanNotSelect )
          {
            parentManager = this->fields.parentManager;
            --this->fields.selectSum;
            if ( !parentManager )
              sub_B52A5C(CanNotSelect, v37);
            baseListViewManager = parentManager->fields.baseListViewManager;
            if ( !baseListViewManager )
              sub_B52A5C(CanNotSelect, v37);
            v40 = v32;
            parentManager->fields.totalSum = baseListViewManager->fields.selectSum;
            v41 = *v32;
            selectDoneLabel = this->fields.selectDoneLabel;
            if ( (BYTE3(v41->vtable._0_Equals.methodPtr) & 4) != 0 && !v41->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(v41);
            v43 = LocalizationManager__Get((System_String_o *)StringLiteral_12558/*"SUM_INFO"*/, 0LL);
            v45 = this->fields.parentManager;
            if ( !v45 )
              sub_B52A5C(v43, v44);
            v46 = v43;
            LODWORD(v65.fields.list) = v45->fields.totalSum;
            v47 = j_il2cpp_value_box_0(int_TypeInfo, &v65);
            v49 = this->fields.parentManager;
            if ( !v49 )
              sub_B52A5C(v47, v48);
            v50 = (Il2CppObject *)v47;
            sendMax = v49->fields.sendMax;
            v51 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &sendMax);
            v52 = System_String__Format_44563852(v46, v50, v51, 0LL);
            if ( !selectDoneLabel )
              sub_B52A5C(v52, v52);
            UILabel__set_text(selectDoneLabel, v52, 0LL);
            v56 = this->fields.parentManager;
            if ( !v56 )
              sub_B52A5C(v53, v54);
            v57 = v56->fields.baseListViewManager;
            if ( !v57 )
              sub_B52A5C(0LL, v54);
            v32 = v40;
            WarehouseListViewManager__DecrementNumber(v57, current->fields.selectNum, v55);
            ListViewItem__set_IsSelect((ListViewItem_o *)current, 0, 0LL);
            v33 = 1;
          }
        }
      }
      System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
        &v66,
        (const MethodInfo_2011958 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
      if ( (v33 & 1) != 0 )
        WarehouseListViewManager__RefrashListDisp(this, v60);
      if ( this->fields.isInput )
        v62 = 3;
      else
        v62 = 2;
      goto LABEL_49;
    }
LABEL_69:
    sub_B52A5C(itemList, v5);
  }
  if ( mode != 3 )
    return;
  itemList = this->fields.itemList;
  if ( !itemList )
    goto LABEL_69;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v65,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)itemList,
    (const MethodInfo_2FF2480 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  v66 = v65;
  while ( 1 )
  {
    v7 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
           &v66,
           (const MethodInfo_201195C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    if ( !v7 )
      break;
    current = (WarehouseListViewItem_o *)v66.fields.current;
    if ( !v66.fields.current )
      sub_B52A5C(v7, v8);
    v10 = *(&WarehouseListViewItem_TypeInfo->_2.bitflags2 + 1);
    if ( *(&v66.fields.current->klass->_2.bitflags2 + 1) < (unsigned int)v10
      || (WarehouseListViewItem_c *)v66.fields.current->klass->_2.typeHierarchy[v10 - 1] != WarehouseListViewItem_TypeInfo )
    {
      goto LABEL_52;
    }
    if ( ListViewItem__get_IsSelect((ListViewItem_o *)v66.fields.current, 0LL) )
    {
      v12 = WarehouseListViewItem__get_IsCanNotSelect(current, v11);
      if ( v12 )
      {
        v14 = this->fields.parentManager;
        --this->fields.selectSum;
        if ( !v14 )
          sub_B52A5C(v12, v13);
        v15 = v14->fields.baseListViewManager;
        if ( !v15 )
          sub_B52A5C(v12, v13);
        v14->fields.totalSum = v15->fields.selectSum;
        v16 = this->fields.selectDoneLabel;
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v17 = LocalizationManager__Get((System_String_o *)StringLiteral_12558/*"SUM_INFO"*/, 0LL);
        v19 = this->fields.parentManager;
        if ( !v19 )
          sub_B52A5C(v17, v18);
        v20 = v17;
        LODWORD(v65.fields.list) = v19->fields.totalSum;
        v21 = j_il2cpp_value_box_0(int_TypeInfo, &v65);
        v23 = this->fields.parentManager;
        if ( !v23 )
          sub_B52A5C(v21, v22);
        v24 = (Il2CppObject *)v21;
        sendMax = v23->fields.sendMax;
        v25 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &sendMax);
        v26 = System_String__Format_44563852(v20, v24, v25, 0LL);
        if ( !v16 )
          sub_B52A5C(v26, v26);
        UILabel__set_text(v16, v26, 0LL);
        v30 = this->fields.parentManager;
        if ( !v30 )
          sub_B52A5C(v27, v28);
        v31 = v30->fields.baseListViewManager;
        if ( !v31 )
          sub_B52A5C(0LL, v28);
        WarehouseListViewManager__DecrementNumber(v31, current->fields.selectNum, v29);
        ListViewItem__set_IsSelect((ListViewItem_o *)current, 0, 0LL);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v66,
    (const MethodInfo_2011958 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
  WarehouseListViewManager__RefrashListDisp(this, v63);
  v62 = 4;
LABEL_49:
  WarehouseListViewManager__RequestListObject_26462684(this, v62, v61);
}


void __fastcall WarehouseListViewManager__SetObjectItem(
        WarehouseListViewManager_o *this,
        ListViewObject_o *obj,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  WarehouseListViewManager_o *v5; // x20
  __int64 v6; // x10
  int32_t v7; // w1

  v5 = this;
  if ( (byte_42B0C87 & 1) == 0 )
  {
    this = (WarehouseListViewManager_o *)sub_B52984(&WarehouseListViewObject_TypeInfo);
    byte_42B0C87 = 1;
  }
  if ( !obj
    || (v6 = *(&WarehouseListViewObject_TypeInfo->_2.bitflags2 + 1), *(&obj->klass->_2.bitflags2 + 1) < (unsigned int)v6)
    || (WarehouseListViewObject_c *)obj->klass->_2.typeHierarchy[v6 - 1] != WarehouseListViewObject_TypeInfo )
  {
    sub_B52A5C(this, obj);
  }
  if ( v5->fields.initMode == 2 )
    v7 = 3;
  else
    v7 = 2;
  WarehouseListViewObject__Init_24367348((WarehouseListViewObject_o *)obj, v7, 0LL);
}


void __fastcall WarehouseListViewManager__SetSortButtonImage(
        WarehouseListViewManager_o *this,
        const MethodInfo *method)
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
  _BOOL4 isAscendingOrder; // w8
  System_String_o **v13; // x9
  System_String_o **v14; // x10
  System_String_o **v15; // x8
  struct ListViewSort_o *v16; // x8
  System_String_o **v17; // x8
  UnityEngine_Object_o *bonusFilterKindLabel; // x20
  UILabel_o *v19; // x20
  System_Int32_array *bonusEventIdList; // x1
  System_Int32_array *servantFilterIdList; // x2

  if ( (byte_42B0C9C & 1) == 0 )
  {
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&StringLiteral_17139/*"btn_sort_up"*/);
    sub_B52984(&StringLiteral_17223/*"btn_txt_up"*/);
    sub_B52984(&StringLiteral_17179/*"btn_txt_new"*/);
    sub_B52984(&StringLiteral_17169/*"btn_txt_down"*/);
    sub_B52984(&StringLiteral_17186/*"btn_txt_old"*/);
    sub_B52984(&StringLiteral_17136/*"btn_sort_down"*/);
    byte_42B0C9C = 1;
  }
  sortKindLabel = (UnityEngine_Object_o *)this->fields.sortKindLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(sortKindLabel, 0LL, 0LL) )
  {
    sort = this->fields.sort;
    if ( !sort )
      goto LABEL_46;
    v6 = this->fields.sortKindLabel;
    sort = (ListViewSort_o *)ListViewSort__GetSortKindButtonText(sort, 0LL);
    if ( !v6 )
      goto LABEL_46;
    UILabel__set_text(v6, (System_String_o *)sort, 0LL);
  }
  sortOrderSprite = (UnityEngine_Object_o *)this->fields.sortOrderSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  sort = (ListViewSort_o *)UnityEngine_Object__op_Inequality(sortOrderSprite, 0LL, 0LL);
  if ( ((unsigned __int8)sort & 1) != 0 )
  {
    v8 = this->fields.sort;
    if ( !v8 )
      goto LABEL_46;
    sortKind = v8->fields.sortKind;
    if ( sortKind == 11 || sortKind == 1 )
    {
      sort = (ListViewSort_o *)this->fields.sortExplanationSprite;
      if ( !sort )
        goto LABEL_46;
      v10 = (System_String_o **)(v8->fields.isAscendingOrder ? &StringLiteral_17186/*"btn_txt_old"*/ : &StringLiteral_17179/*"btn_txt_new"*/);
      UISprite__set_spriteName((UISprite_o *)sort, *v10, 0LL);
      v11 = this->fields.sort;
      if ( !v11 )
        goto LABEL_46;
      sort = (ListViewSort_o *)this->fields.sortOrderSprite;
      if ( !sort )
        goto LABEL_46;
      isAscendingOrder = v11->fields.isAscendingOrder;
      v13 = (System_String_o **)&StringLiteral_17136/*"btn_sort_down"*/;
      v14 = (System_String_o **)&StringLiteral_17139/*"btn_sort_up"*/;
    }
    else
    {
      sort = (ListViewSort_o *)this->fields.sortExplanationSprite;
      if ( !sort )
        goto LABEL_46;
      v15 = (System_String_o **)(v8->fields.isAscendingOrder ? &StringLiteral_17223/*"btn_txt_up"*/ : &StringLiteral_17169/*"btn_txt_down"*/);
      UISprite__set_spriteName((UISprite_o *)sort, *v15, 0LL);
      v16 = this->fields.sort;
      if ( !v16 )
        goto LABEL_46;
      sort = (ListViewSort_o *)this->fields.sortOrderSprite;
      if ( !sort )
        goto LABEL_46;
      isAscendingOrder = v16->fields.isAscendingOrder;
      v13 = (System_String_o **)&StringLiteral_17139/*"btn_sort_up"*/;
      v14 = (System_String_o **)&StringLiteral_17136/*"btn_sort_down"*/;
    }
    if ( isAscendingOrder )
      v17 = v13;
    else
      v17 = v14;
    UISprite__set_spriteName((UISprite_o *)sort, *v17, 0LL);
  }
  bonusFilterKindLabel = (UnityEngine_Object_o *)this->fields.bonusFilterKindLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(bonusFilterKindLabel, 0LL, 0LL) )
  {
    sort = this->fields.sort;
    if ( !sort )
      goto LABEL_46;
    if ( sort->fields.isBonusKind )
    {
      v19 = this->fields.bonusFilterKindLabel;
      bonusEventIdList = this->fields.bonusEventIdList;
      servantFilterIdList = this->fields.servantFilterIdList;
      if ( this->fields.isQuestStart )
      {
        sort = (ListViewSort_o *)ListViewSort__GetBonusKindText_34035124(
                                   sort,
                                   bonusEventIdList,
                                   servantFilterIdList,
                                   0,
                                   0LL,
                                   0LL);
        if ( v19 )
        {
LABEL_43:
          UILabel__set_text(v19, (System_String_o *)sort, 0LL);
          return;
        }
      }
      else
      {
        sort = (ListViewSort_o *)ListViewSort__GetBonusKind2Text_34037412(
                                   sort,
                                   bonusEventIdList,
                                   servantFilterIdList,
                                   0LL,
                                   0LL,
                                   0LL,
                                   0LL);
        if ( v19 )
          goto LABEL_43;
      }
LABEL_46:
      sub_B52A5C(sort, v4);
    }
  }
}


void __fastcall WarehouseListViewManager__UpdateItemState(
        WarehouseListViewManager_o *this,
        bool isPushMode,
        const MethodInfo *method)
{
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *SelfUserGame; // x0
  __int64 v6; // x1
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *v7; // x8
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__c *klass; // x21
  __int64 v9; // x0
  __int64 v10; // x1
  Il2CppObject *current; // x20
  WarehouseListViewItem_c *v12; // x1
  __int64 v13; // x9
  Il2CppClass *v14; // x8
  Il2CppType byval_arg; // q0
  __int64 v16; // x1
  UserServantEntity_o *v17; // x0
  __int64 v18; // x1
  UserServantEntity_o *v19; // x0
  __int64 v20; // x1
  UserServantEntity_o *v21; // x0
  __int64 v22; // x1
  UserServantEntity_o *v23; // x0
  __int64 v24; // x1
  bool v25; // w8
  UserServantEntity_o *v26; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v27; // [xsp+0h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v28; // [xsp+20h] [xbp-80h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v29; // [xsp+40h] [xbp-60h] BYREF

  if ( (byte_42B0CA8 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__);
    sub_B52984(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_B52984(&WarehouseListViewItem_TypeInfo);
    byte_42B0CA8 = 1;
  }
  memset(&v29, 0, sizeof(v29));
  SelfUserGame = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)UserGameMaster__getSelfUserGame(0LL);
  if ( !SelfUserGame
    || (v7 = SelfUserGame,
        (SelfUserGame = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this->fields.itemList) == 0LL) )
  {
    sub_B52A5C(SelfUserGame, v6);
  }
  klass = v7[3].klass;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v28,
    SelfUserGame,
    (const MethodInfo_2FF2480 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  v29.fields.current = (Il2CppObject *)v28.fields.fakeValue;
  *(_OWORD *)&v29.fields.list = *(_OWORD *)&v28.fields.currentCryptoKey;
  while ( 1 )
  {
    v9 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
           &v29,
           (const MethodInfo_201195C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    if ( (v9 & 1) == 0 )
      break;
    current = v29.fields.current;
    if ( !v29.fields.current )
      goto LABEL_30;
    v12 = WarehouseListViewItem_TypeInfo;
    v13 = *(&WarehouseListViewItem_TypeInfo->_2.bitflags2 + 1);
    if ( *(&v29.fields.current->klass->_2.bitflags2 + 1) < (unsigned int)v13
      || (WarehouseListViewItem_c *)v29.fields.current->klass->_2.typeHierarchy[v13 - 1] != WarehouseListViewItem_TypeInfo )
    {
      v9 = sub_B52D50(v29.fields.current);
LABEL_30:
      sub_B52A5C(v9, v10);
    }
    v14 = v29.fields.current[7].klass;
    BYTE3(v29.fields.current[10].klass) = isPushMode;
    if ( !v14 )
      sub_B52A5C(v9, v12);
    byval_arg = v14->_1.byval_arg;
    *(_OWORD *)&v28.fields.currentCryptoKey = *(_OWORD *)&v14->_1.name;
    *(Il2CppType *)&v28.fields.fakeValue = byval_arg;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    }
    v27 = v28;
    BYTE4(current[10].klass) = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44789576(&v27, 0LL) == (_QWORD)klass;
    if ( isPushMode )
    {
      v17 = (UserServantEntity_o *)current[7].klass;
      if ( !v17 )
        sub_B52A5C(0LL, v16);
      if ( UserServantEntity__IsLeave(v17, 0LL) )
        goto LABEL_23;
      v19 = (UserServantEntity_o *)current[7].klass;
      if ( !v19 )
        sub_B52A5C(0LL, v18);
      if ( UserServantEntity__IsEventJoin(v19, 0LL) )
        goto LABEL_23;
      v21 = (UserServantEntity_o *)current[7].klass;
      if ( !v21 )
        sub_B52A5C(0LL, v20);
      if ( UserServantEntity__IsCombineMaterial(v21, 0LL) )
        goto LABEL_23;
      v23 = (UserServantEntity_o *)current[7].klass;
      if ( !v23 )
        sub_B52A5C(0LL, v22);
      if ( UserServantEntity__IsStatusUp(v23, 0LL) )
      {
LABEL_23:
        v25 = 0;
      }
      else
      {
        v26 = (UserServantEntity_o *)current[7].klass;
        if ( !v26 )
          sub_B52A5C(0LL, v24);
        v25 = !UserServantEntity__IsMaterialTd(v26, 0LL);
      }
    }
    else
    {
      v25 = 1;
    }
    BYTE5(current[10].klass) = v25;
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v29,
    (const MethodInfo_2011958 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
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

  if ( (byte_42B0C7A & 1) == 0 )
  {
    sub_B52984(&WarehouseListViewManager_CallbackFunc_TypeInfo);
    byte_42B0C7A = 1;
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
    v8 = sub_B4739C(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (WarehouseListViewManager_o *)sub_B52D50(v7);
  WarehouseListViewManager__remove_callbackFunc(v10, v11, v12);
}


System_Collections_Generic_List_WarehouseListViewObject__o *__fastcall WarehouseListViewManager__get_ClippingObjectList(
        WarehouseListViewManager_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v3; // x19
  __int64 v4; // x1
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  Il2CppObject *current; // x21
  _BOOL8 v7; // x0
  __int64 v8; // x1
  srcLineSprite_o *Component_srcLineSprite; // x0
  __int64 v10; // x1
  EventMissionProgressRequest_Argument_ProgressData_o *v11; // x21
  ListViewItem_o *Item; // x0
  __int64 v13; // x1
  _BOOL8 v14; // x0
  __int64 v15; // x1
  System_Collections_Generic_List_Enumerator_T__o v17; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v18; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_42B0C7F & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_B52984(&Method_UnityEngine_GameObject_GetComponent_WarehouseListViewObject___);
    sub_B52984(&Method_System_Collections_Generic_List_WarehouseListViewObject__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_B52984(&Method_System_Collections_Generic_List_WarehouseListViewObject___ctor__);
    sub_B52984(&System_Collections_Generic_List_WarehouseListViewObject__TypeInfo);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    byte_42B0C7F = 1;
  }
  memset(&v18, 0, sizeof(v18));
  v3 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_WarehouseListViewObject__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v3,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_WarehouseListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_B52A5C(0LL, v4);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v17,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)objectList,
    (const MethodInfo_2FF2480 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v18 = v17;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v18,
            (const MethodInfo_201195C *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v18.fields.current;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v7 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v7 )
    {
      if ( !current )
        sub_B52A5C(v7, v8);
      Component_srcLineSprite = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                  (UnityEngine_GameObject_o *)current,
                                  (const MethodInfo_1B7B1B8 *)Method_UnityEngine_GameObject_GetComponent_WarehouseListViewObject___);
      v11 = (EventMissionProgressRequest_Argument_ProgressData_o *)Component_srcLineSprite;
      if ( !Component_srcLineSprite )
        sub_B52A5C(0LL, v10);
      Item = (ListViewItem_o *)WarehouseListViewObject__GetItem(
                                 (WarehouseListViewObject_o *)Component_srcLineSprite,
                                 0LL);
      if ( !Item )
        sub_B52A5C(0LL, v13);
      if ( Item->fields.isTermination )
      {
        v14 = ListViewManager__ClippingItem_23551160((ListViewManager_o *)this, Item, 0LL);
        if ( v14 )
        {
          if ( !v3 )
            sub_B52A5C(v14, v15);
          goto LABEL_16;
        }
      }
      else
      {
        if ( !v3 )
          sub_B52A5C(Item, v13);
LABEL_16:
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v3,
          v11,
          (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_WarehouseListViewObject__Add__);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v18,
    (const MethodInfo_2011958 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_WarehouseListViewObject__o *)v3;
}


System_Collections_Generic_List_WarehouseListViewObject__o *__fastcall WarehouseListViewManager__get_ObjectList(
        WarehouseListViewManager_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v3; // x19
  __int64 v4; // x1
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  Il2CppObject *current; // x20
  _BOOL8 v7; // x0
  __int64 v8; // x1
  EventMissionProgressRequest_Argument_ProgressData_o *Component_srcLineSprite; // x0
  System_Collections_Generic_List_Enumerator_T__o v11; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v12; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_42B0C7E & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_B52984(&Method_UnityEngine_GameObject_GetComponent_WarehouseListViewObject___);
    sub_B52984(&Method_System_Collections_Generic_List_WarehouseListViewObject__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_B52984(&Method_System_Collections_Generic_List_WarehouseListViewObject___ctor__);
    sub_B52984(&System_Collections_Generic_List_WarehouseListViewObject__TypeInfo);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    byte_42B0C7E = 1;
  }
  memset(&v12, 0, sizeof(v12));
  v3 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_WarehouseListViewObject__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v3,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_WarehouseListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_B52A5C(0LL, v4);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v11,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)objectList,
    (const MethodInfo_2FF2480 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v12 = v11;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v12,
            (const MethodInfo_201195C *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v12.fields.current;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v7 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v7 )
    {
      if ( !current )
        sub_B52A5C(v7, v8);
      Component_srcLineSprite = (EventMissionProgressRequest_Argument_ProgressData_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                                         (UnityEngine_GameObject_o *)current,
                                                                                         (const MethodInfo_1B7B1B8 *)Method_UnityEngine_GameObject_GetComponent_WarehouseListViewObject___);
      if ( !v3 )
        sub_B52A5C(Component_srcLineSprite, Component_srcLineSprite);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v3,
        Component_srcLineSprite,
        (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_WarehouseListViewObject__Add__);
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v12,
    (const MethodInfo_2011958 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_WarehouseListViewObject__o *)v3;
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

  if ( (byte_42B0C7B & 1) == 0 )
  {
    sub_B52984(&WarehouseListViewManager_CallbackFunc_TypeInfo);
    byte_42B0C7B = 1;
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
    v8 = sub_B4739C(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (const MethodInfo *)sub_B52D50(v7);
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
  intptr_t *p_method; // x0

  v4 = **(_QWORD **)&method;
  *(_QWORD *)&this->fields.method = object;
  p_method = &this->fields.method;
  *((_QWORD *)p_method + 1) = *(_QWORD *)&method;
  *((_QWORD *)p_method - 2) = v4;
  sub_B52920(p_method);
}


System_IAsyncResult_o *__fastcall WarehouseListViewManager_CallbackFunc__BeginInvoke(
        WarehouseListViewManager_CallbackFunc_o *this,
        int32_t resultKind,
        WarehouseListViewItem_o *item,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v11[3]; // [xsp+8h] [xbp-48h] BYREF
  int32_t v12; // [xsp+2Ch] [xbp-24h] BYREF

  v12 = resultKind;
  if ( (byte_42AD779 & 1) == 0 )
  {
    sub_B52984(&WarehouseListViewManager_ResultKind_TypeInfo);
    byte_42AD779 = 1;
  }
  v11[2] = 0LL;
  v11[0] = j_il2cpp_value_box_0(WarehouseListViewManager_ResultKind_TypeInfo, &v12);
  v11[1] = (__int64)item;
  return (System_IAsyncResult_o *)sub_B52928(this, v11, callback, object);
}


void __fastcall WarehouseListViewManager_CallbackFunc__EndInvoke(
        WarehouseListViewManager_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B5292C(result, 0LL, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarehouseListViewManager_CallbackFunc__Invoke(
        WarehouseListViewManager_CallbackFunc_o *this,
        int32_t resultKind,
        WarehouseListViewItem_o *item,
        const MethodInfo *method)
{
  __int64 v4; // x8
  __int64 v7; // x25
  WarehouseListViewManager_CallbackFunc_o **v8; // x26
  __int64 v9; // x27
  unsigned int v10; // w24
  __int64 class_0; // x0
  __int64 v12; // x3
  __int64 v13; // x8
  unsigned int v14; // w23
  unsigned __int64 v15; // x10
  _DWORD *v16; // x11
  __int64 v17; // x0
  __int64 v18; // x0
  __int64 v19; // x0
  void (__fastcall **v20)(__int64 *, _QWORD, WarehouseListViewItem_o *, _QWORD); // x0
  WarehouseListViewManager_CallbackFunc_o *v21; // x8
  __int64 *v22; // x22
  __int64 v23; // x23
  void (__fastcall *v24)(unsigned int *, WarehouseListViewItem_o *, __int64); // x24
  char v25; // w24
  char v26; // w0
  __int64 v27; // x3
  unsigned int v28; // w24
  __int64 v29; // x8
  __int64 v30; // x1
  __int64 v31; // x2
  unsigned __int64 v32; // x10
  _DWORD *v33; // x11
  unsigned int v34; // [xsp+Ch] [xbp-54h] BYREF
  WarehouseListViewManager_CallbackFunc_o *v35; // [xsp+18h] [xbp-48h] BYREF

  v35 = this;
  v34 = resultKind;
  v4 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v4 )
  {
    v8 = &v35;
    v7 = 1LL;
    goto LABEL_5;
  }
  v7 = *(_QWORD *)(v4 + 24);
  if ( v7 )
  {
    v8 = (WarehouseListViewManager_CallbackFunc_o **)(v4 + 32);
LABEL_5:
    v9 = 0LL;
    while ( 1 )
    {
      v21 = v8[v9];
      v22 = *(__int64 **)&v21->fields.method;
      v23 = *(_QWORD *)&v21->fields.extra_arg;
      v24 = *(void (__fastcall **)(unsigned int *, WarehouseListViewItem_o *, __int64))&v21->fields.method_ptr;
      if ( *(__int16 *)(v23 + 72) == -1 )
        sub_B52A40(*(_QWORD *)&v21->fields.extra_arg, *(_QWORD *)&resultKind, item, method);
      if ( (sub_B529B4(v23) & 1) == 0 )
        break;
      if ( *(_BYTE *)(v23 + 74) != 2 )
        goto LABEL_36;
      v24((unsigned int *)v34, item, v23);
LABEL_38:
      if ( ++v9 == v7 )
        return;
    }
    if ( !v22 )
    {
      v24(&v34 - 4, item, v23);
      goto LABEL_38;
    }
    if ( *(__int16 *)(v23 + 72) != -1 && (*(_BYTE *)(*v22 + 277) & 1) == 0 && this->fields.m_target )
    {
      v25 = sub_B529AC(v23);
      v26 = sub_B52DB0(v23);
      if ( (v25 & 1) != 0 )
      {
        v28 = v34;
        if ( (v26 & 1) != 0 )
        {
          v29 = *v22;
          v30 = *(_QWORD *)(v23 + 24);
          v31 = *(unsigned __int16 *)(v23 + 72);
          if ( *(_WORD *)(*v22 + 298) )
          {
            v32 = 0LL;
            v33 = (_DWORD *)(*(_QWORD *)(v29 + 176) + 8LL);
            while ( *((_QWORD *)v33 - 1) != v30 )
            {
              ++v32;
              v33 += 4;
              if ( v32 >= *(unsigned __int16 *)(*v22 + 298) )
                goto LABEL_35;
            }
            v19 = v29 + 16LL * (*v33 + (int)v31) + 312;
          }
          else
          {
LABEL_35:
            v19 = sub_AEB880(v22, v30, v31, v27);
          }
          v18 = *(_QWORD *)(v19 + 8);
        }
        else
        {
          v18 = *(_QWORD *)(*v22 + 16LL * *(unsigned __int16 *)(v23 + 72) + 320);
        }
        v20 = (void (__fastcall **)(__int64 *, _QWORD, WarehouseListViewItem_o *, _QWORD))sub_B52A34(v18, v23);
        (*v20)(v22, v28, item, v20);
      }
      else
      {
        v10 = *(unsigned __int16 *)(v23 + 72);
        if ( (v26 & 1) != 0 )
        {
          class_0 = j_il2cpp_method_get_class_0(v23);
          v13 = *v22;
          v14 = v34;
          if ( *(_WORD *)(*v22 + 298) )
          {
            v15 = 0LL;
            v16 = (_DWORD *)(*(_QWORD *)(v13 + 176) + 8LL);
            while ( *((_QWORD *)v16 - 1) != class_0 )
            {
              ++v15;
              v16 += 4;
              if ( v15 >= *(unsigned __int16 *)(*v22 + 298) )
                goto LABEL_11;
            }
            v17 = v13 + 16LL * (int)(*v16 + v10) + 312;
          }
          else
          {
LABEL_11:
            v17 = sub_AEB880(v22, class_0, v10, v12);
          }
          (*(void (__fastcall **)(__int64 *, _QWORD, WarehouseListViewItem_o *, _QWORD))v17)(
            v22,
            v14,
            item,
            *(_QWORD *)(v17 + 8));
        }
        else
        {
          (*(void (__fastcall **)(__int64 *, _QWORD, WarehouseListViewItem_o *, _QWORD))(*v22
                                                                                       + 16LL
                                                                                       * *(unsigned __int16 *)(v23 + 72)
                                                                                       + 312))(
            v22,
            v34,
            item,
            *(_QWORD *)(*v22 + 16LL * *(unsigned __int16 *)(v23 + 72) + 320));
        }
      }
      goto LABEL_38;
    }
LABEL_36:
    ((void (__fastcall *)(__int64 *, _QWORD, WarehouseListViewItem_o *, __int64))v24)(v22, v34, item, v23);
    goto LABEL_38;
  }
}