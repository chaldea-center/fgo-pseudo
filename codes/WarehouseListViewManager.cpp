void __fastcall WarehouseListViewManager___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v8; // x1
  __int64 v9; // x1
  BattleServantConfConponent_o *static_fields; // x0
  System_Int32_array **v11; // x1
  System_String_o *SORT_SAVE_KEY; // x19
  System_String_o *v13; // x0
  System_String_o *v14; // x19
  ListViewSort_o *v15; // x20
  struct WarehouseListViewManager_StaticFields *v16; // x0
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  System_String_o *v23; // x19
  System_String_o *v24; // x0
  System_String_o *v25; // x19
  ListViewSort_o *v26; // x20
  struct WarehouseListViewManager_StaticFields *v27; // x0
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  System_String_o *v34; // x19
  System_String_o *v35; // x0
  System_String_o *v36; // x19
  ListViewSort_o *v37; // x20
  struct WarehouseListViewManager_StaticFields *v38; // x0
  System_String_array **v39; // x2
  System_String_array **v40; // x3
  System_Boolean_array **v41; // x4
  System_Int32_array **v42; // x5
  System_Int32_array *v43; // x6
  System_Int32_array *v44; // x7
  System_String_o *v45; // x19
  System_String_o *v46; // x0
  System_String_o *v47; // x19
  ListViewSort_o *v48; // x20
  struct WarehouseListViewManager_StaticFields *v49; // x0
  System_String_array **v50; // x2
  System_String_array **v51; // x3
  System_Boolean_array **v52; // x4
  System_Int32_array **v53; // x5
  System_Int32_array *v54; // x6
  System_Int32_array *v55; // x7
  int v56; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_41889AC & 1) == 0 )
  {
    sub_B2C35C(&ListViewSort_TypeInfo, v1);
    sub_B2C35C(&WarehouseListViewManager_TypeInfo, v8);
    sub_B2C35C(&StringLiteral_15426/*"Warehouse"*/, v9);
    byte_41889AC = 1;
  }
  static_fields = (BattleServantConfConponent_o *)WarehouseListViewManager_TypeInfo->static_fields;
  v11 = (System_Int32_array **)StringLiteral_15426/*"Warehouse"*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_15426/*"Warehouse"*/;
  sub_B2C2F8(static_fields, v11, v2, v3, v4, v5, v6, v7);
  SORT_SAVE_KEY = WarehouseListViewManager_TypeInfo->static_fields->SORT_SAVE_KEY;
  v56 = 1;
  v13 = System_Int32__ToString((int32_t)&v56, 0LL);
  v14 = System_String__Concat_44305532(SORT_SAVE_KEY, v13, 0LL);
  v15 = (ListViewSort_o *)sub_B2C42C(ListViewSort_TypeInfo);
  ListViewSort___ctor_33914184(v15, v14, 3, 0, 0LL);
  v16 = WarehouseListViewManager_TypeInfo->static_fields;
  v16->servantSortInfo = v15;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&v16->servantSortInfo,
    (System_Int32_array **)v15,
    v17,
    v18,
    v19,
    v20,
    v21,
    v22);
  v23 = WarehouseListViewManager_TypeInfo->static_fields->SORT_SAVE_KEY;
  v56 = 2;
  v24 = System_Int32__ToString((int32_t)&v56, 0LL);
  v25 = System_String__Concat_44305532(v23, v24, 0LL);
  v26 = (ListViewSort_o *)sub_B2C42C(ListViewSort_TypeInfo);
  ListViewSort___ctor_33914184(v26, v25, 3, 0, 0LL);
  v27 = WarehouseListViewManager_TypeInfo->static_fields;
  v27->servantEquipSortInfo = v26;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&v27->servantEquipSortInfo,
    (System_Int32_array **)v26,
    v28,
    v29,
    v30,
    v31,
    v32,
    v33);
  v34 = WarehouseListViewManager_TypeInfo->static_fields->SORT_SAVE_KEY;
  v56 = 3;
  v35 = System_Int32__ToString((int32_t)&v56, 0LL);
  v36 = System_String__Concat_44305532(v34, v35, 0LL);
  v37 = (ListViewSort_o *)sub_B2C42C(ListViewSort_TypeInfo);
  ListViewSort___ctor_33914184(v37, v36, 3, 0, 0LL);
  v38 = WarehouseListViewManager_TypeInfo->static_fields;
  v38->servantWarehouseSortInfo = v37;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&v38->servantWarehouseSortInfo,
    (System_Int32_array **)v37,
    v39,
    v40,
    v41,
    v42,
    v43,
    v44);
  v45 = WarehouseListViewManager_TypeInfo->static_fields->SORT_SAVE_KEY;
  v56 = 4;
  v46 = System_Int32__ToString((int32_t)&v56, 0LL);
  v47 = System_String__Concat_44305532(v45, v46, 0LL);
  v48 = (ListViewSort_o *)sub_B2C42C(ListViewSort_TypeInfo);
  ListViewSort___ctor_33914184(v48, v47, 3, 0, 0LL);
  v49 = WarehouseListViewManager_TypeInfo->static_fields;
  v49->servantEquipWarehouseSortInfo = v48;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&v49->servantEquipWarehouseSortInfo,
    (System_Int32_array **)v48,
    v50,
    v51,
    v52,
    v53,
    v54,
    v55);
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
  *(_OWORD *)&this->fields.dragSelectSum = xmmword_31A31B0;
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
  __int64 v5; // x1
  struct System_Collections_Generic_List_ListViewItem__o *itemSortList; // x20
  __int64 v7; // x9
  WarehouseListViewManager_o *v8; // x0
  const MethodInfo *v9; // x1

  v4 = this;
  if ( (byte_41889A8 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, *(_QWORD *)&index);
    this = (WarehouseListViewManager_o *)sub_B2C35C(&WarehouseListViewItem_TypeInfo, v5);
    byte_41889A8 = 1;
  }
  itemSortList = v4->fields.itemSortList;
  if ( !itemSortList )
    goto LABEL_10;
  if ( itemSortList->fields._size <= (unsigned int)index )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
  this = (WarehouseListViewManager_o *)itemSortList->fields._items->m_Items[index];
  if ( !this )
LABEL_10:
    sub_B2C434(this, *(_QWORD *)&index);
  v7 = *(&WarehouseListViewItem_TypeInfo->_2.bitflags2 + 1);
  if ( *(&this->klass->_2.bitflags2 + 1) >= (unsigned int)v7
    && (WarehouseListViewItem_c *)this->klass->_2.typeHierarchy[v7 - 1] == WarehouseListViewItem_TypeInfo )
  {
    HIDWORD(this->fields.bottomItem) = -1;
  }
  else
  {
    v8 = (WarehouseListViewManager_o *)sub_B2C728(this);
    WarehouseListViewManager__GetModeKind(v8, v9);
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
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  unsigned int scaleType; // w8
  System_Int32_array **smallSizeSeed; // x1
  int v16; // w8
  struct ListViewSort_o *sort; // x8
  __int64 v18; // x0
  __int64 v19; // x1
  ListViewItem_o *current; // x20
  __int64 v21; // x9
  UnityEngine_Object_o *monitor; // x21
  __int64 v23; // x1
  ListViewObject_o *viewObject; // x0
  const MethodInfo *v25; // x2
  System_Collections_Generic_List_Enumerator_T__o v26; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v27; // [xsp+20h] [xbp-50h] BYREF

  v8 = this;
  if ( (byte_41889A0 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v9);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v10);
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v11);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v12);
    this = (WarehouseListViewManager_o *)sub_B2C35C(&WarehouseListViewItem_TypeInfo, v13);
    byte_41889A0 = 1;
  }
  memset(&v27, 0, sizeof(v27));
  scaleType = v8->fields.scaleType;
  if ( scaleType < 2 )
  {
    smallSizeSeed = (System_Int32_array **)v8->fields.smallSizeSeed;
    v16 = 2;
  }
  else if ( scaleType == 2 )
  {
    smallSizeSeed = (System_Int32_array **)v8->fields.extremelySmallSizeSeed;
    v16 = 3;
  }
  else
  {
    if ( scaleType != 3 )
      goto LABEL_10;
    smallSizeSeed = (System_Int32_array **)v8->fields.normalSizeSeed;
    v16 = 1;
  }
  v8->fields.scaleType = v16;
  v8->fields.seed = (struct ListViewItemSeed_o *)smallSizeSeed;
  sub_B2C2F8((BattleServantConfConponent_o *)&v8->fields.seed, smallSizeSeed, v2, v3, v4, v5, v6, v7);
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
    &v26,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this,
    (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  v27 = v26;
  while ( 1 )
  {
    v18 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v27,
            (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    if ( (v18 & 1) == 0 )
      break;
    current = (ListViewItem_o *)v27.fields.current;
    if ( !v27.fields.current )
      goto LABEL_28;
    v21 = *(&WarehouseListViewItem_TypeInfo->_2.bitflags2 + 1);
    if ( *(&v27.fields.current->klass->_2.bitflags2 + 1) < (unsigned int)v21
      || (WarehouseListViewItem_c *)v27.fields.current->klass->_2.typeHierarchy[v21 - 1] != WarehouseListViewItem_TypeInfo )
    {
      v18 = sub_B2C728(v27.fields.current);
LABEL_28:
      sub_B2C434(v18, v19);
    }
    monitor = (UnityEngine_Object_o *)v27.fields.current[6].monitor;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( !UnityEngine_Object__op_Equality(monitor, 0LL, 0LL) )
    {
      viewObject = current->fields.viewObject;
      if ( !viewObject )
        sub_B2C434(0LL, v23);
      ListViewObject__SetItemSeed(viewObject, current, v8->fields.seed, 0LL);
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v27,
    (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
  WarehouseListViewManager__SetMode_26891744(v8, 2, v25);
  ListViewManager__SortItem((ListViewManager_o *)v8, -1, 0, -1, 0LL);
  this = (WarehouseListViewManager_o *)v8->fields.scrollBar;
  if ( !this
    || (this = (WarehouseListViewManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL)) == 0LL )
  {
LABEL_30:
    sub_B2C434(this, method);
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
      sub_B2C434(this, isPlus);
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
  __int64 v25; // x1
  UserServantMaster_o *MasterData_WarQuestSelectionMaster; // x24
  UserServantStorageMaster_o *v27; // x25
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  int64_t v34; // x26
  System_String_o *v35; // x21
  WarehouseListViewManager_c *v36; // x0
  struct ListViewSort_o *servantSortInfo; // x1
  struct ListViewSort_o **p_sort; // x22
  __int64 *v39; // x8
  WarehouseListViewManager_c *v40; // x0
  struct ListViewSort_o *servantEquipSortInfo; // x1
  struct ListViewSort_o **v42; // x22
  WarehouseListViewManager_c *v43; // x0
  struct ListViewSort_o *servantWarehouseSortInfo; // x1
  struct ListViewSort_o **v45; // x22
  WarehouseListViewManager_c *v46; // x0
  struct ListViewSort_o *servantEquipWarehouseSortInfo; // x1
  struct ListViewSort_o **v48; // x22
  int64_t v49; // x23
  int v50; // w8
  struct ListViewSort_o *sort; // x8
  struct ListViewSort_o **v52; // x22
  struct System_Int32_array *servantFilterEventIdList; // x9
  struct System_Int32_array *servantFilterIdList; // x9
  struct ListViewSort_o *v55; // x8
  System_String_array **v56; // x2
  System_String_array **v57; // x3
  System_Boolean_array **v58; // x4
  System_Int32_array **v59; // x5
  System_Int32_array *v60; // x6
  System_Int32_array *v61; // x7
  struct System_Int32_array *servantEquipFilterEventIdList; // x1
  struct System_Int32_array **p_servantFilterIdList; // x0
  struct ListViewSort_o *v64; // x8
  struct System_Int32_array *v65; // x1
  System_Int32_array *bonusEventIdList; // x1
  System_Int32_array *v67; // x2
  System_String_array **v68; // x2
  System_String_array **v69; // x3
  System_Boolean_array **v70; // x4
  System_Int32_array **v71; // x5
  System_Int32_array *v72; // x6
  System_Int32_array *v73; // x7
  unsigned int iconScaleKind; // w8
  struct ListViewItemSeed_o *normalSizeSeed; // x1
  UserDeckMaster_o *v76; // x24
  int v77; // w8
  __int64 v78; // x25
  int64_t v79; // x20
  __int64 v80; // x8
  __int128 v81; // q0
  System_Int64_array *v82; // x22
  int64_t v83; // x24
  int64_t v84; // x28
  UserServantEntity_o *v85; // x20
  __int64 v86; // x23
  int64_t v87; // x27
  int64_t v88; // x21
  WarehouseListViewItem_o *v89; // x26
  const MethodInfo *v90; // x3
  UILabel_o *emptyMessageLabel; // x20
  const MethodInfo *v92; // x1
  __int64 v93; // x0
  const MethodInfo *v94; // [xsp+0h] [xbp-E0h]
  System_String_o *v95; // [xsp+10h] [xbp-D0h]
  EventUpValSetupInfo_o *v96; // [xsp+18h] [xbp-C8h]
  System_Int64_array *v97; // [xsp+20h] [xbp-C0h]
  System_Int64_array *partyUserEquipList; // [xsp+28h] [xbp-B8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v99; // [xsp+30h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v100; // [xsp+50h] [xbp-90h]
  int32_t eventId; // [xsp+7Ch] [xbp-64h] BYREF
  System_Int64_array *equipIdList; // [xsp+80h] [xbp-60h] BYREF
  System_Int64_array *svtIdList; // [xsp+88h] [xbp-58h] BYREF

  if ( (byte_4188983 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_EventMaster___, *(_QWORD *)&kind);
    sub_B2C35C(&Method_DataManager_GetMasterData_UserDeckMaster___, v7);
    sub_B2C35C(&Method_DataManager_GetMasterData_UserEventServantFatigueMaster___, v8);
    sub_B2C35C(&Method_DataManager_GetMasterData_UserServantMaster___, v9);
    sub_B2C35C(&Method_DataManager_GetMasterData_UserServantStorageMaster___, v10);
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewItem__Add__, v11);
    sub_B2C35C(&LocalizationManager_TypeInfo, v12);
    sub_B2C35C(&NetworkManager_TypeInfo, v13);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v14);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v15);
    sub_B2C35C(&WarehouseListViewItem_TypeInfo, v16);
    sub_B2C35C(&WarehouseListViewManager_TypeInfo, v17);
    sub_B2C35C(&StringLiteral_11690/*"SERVANT_EQUIP_EMPTY"*/, v18);
    sub_B2C35C(&StringLiteral_11685/*"SERVANT_EMPTY"*/, v19);
    sub_B2C35C(&StringLiteral_11718/*"SERVANT_EQUIP_WAREHOUSE_EMPTY"*/, v20);
    sub_B2C35C(&StringLiteral_11892/*"SERVANT_SORT_FILTER_RESULT_EMPTY"*/, v21);
    sub_B2C35C(&StringLiteral_12056/*"SERVANT_WAREHOUSE_EMPTY"*/, v22);
    sub_B2C35C(&StringLiteral_1/*""*/, v23);
    byte_4188983 = 1;
  }
  equipIdList = 0LL;
  svtIdList = 0LL;
  eventId = 0;
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_95;
  MasterData_WarQuestSelectionMaster = (UserServantMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                (DataManager_o *)Instance,
                                                                (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserServantMaster___);
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_95;
  v27 = (UserServantStorageMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                        (DataManager_o *)Instance,
                                        (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserServantStorageMaster___);
  Instance = (int64_t)UserGameMaster__getSelfUserGame(0LL);
  v34 = Instance;
  v35 = (System_String_o *)StringLiteral_1/*""*/;
  this->fields.kind = kind;
  switch ( kind )
  {
    case 0:
      v36 = WarehouseListViewManager_TypeInfo;
      if ( (BYTE3(WarehouseListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !WarehouseListViewManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(WarehouseListViewManager_TypeInfo);
        v36 = WarehouseListViewManager_TypeInfo;
      }
      servantSortInfo = v36->static_fields->servantSortInfo;
      this->fields.sort = servantSortInfo;
      p_sort = &this->fields.sort;
      sub_B2C2F8(
        (BattleServantConfConponent_o *)&this->fields.sort,
        (System_Int32_array **)servantSortInfo,
        v28,
        v29,
        v30,
        v31,
        v32,
        v33);
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
      v39 = &StringLiteral_11685/*"SERVANT_EMPTY"*/;
      break;
    case 1:
      v40 = WarehouseListViewManager_TypeInfo;
      if ( (BYTE3(WarehouseListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !WarehouseListViewManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(WarehouseListViewManager_TypeInfo);
        v40 = WarehouseListViewManager_TypeInfo;
      }
      servantEquipSortInfo = v40->static_fields->servantEquipSortInfo;
      this->fields.sort = servantEquipSortInfo;
      v42 = &this->fields.sort;
      sub_B2C2F8(
        (BattleServantConfConponent_o *)&this->fields.sort,
        (System_Int32_array **)servantEquipSortInfo,
        v28,
        v29,
        v30,
        v31,
        v32,
        v33);
      if ( !this->fields.sort )
        goto LABEL_95;
      this->fields.sort->fields.listViewKind = 1;
      Instance = (int64_t)*v42;
      if ( !*v42 )
        goto LABEL_95;
      ListViewSort__Load((ListViewSort_o *)Instance, 0LL);
      if ( !MasterData_WarQuestSelectionMaster )
        goto LABEL_95;
      Instance = (int64_t)UserServantMaster__getServantEquipList(MasterData_WarQuestSelectionMaster, 0LL);
      v39 = &StringLiteral_11690/*"SERVANT_EQUIP_EMPTY"*/;
      break;
    case 2:
      v43 = WarehouseListViewManager_TypeInfo;
      if ( (BYTE3(WarehouseListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !WarehouseListViewManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(WarehouseListViewManager_TypeInfo);
        v43 = WarehouseListViewManager_TypeInfo;
      }
      servantWarehouseSortInfo = v43->static_fields->servantWarehouseSortInfo;
      this->fields.sort = servantWarehouseSortInfo;
      v45 = &this->fields.sort;
      sub_B2C2F8(
        (BattleServantConfConponent_o *)&this->fields.sort,
        (System_Int32_array **)servantWarehouseSortInfo,
        v28,
        v29,
        v30,
        v31,
        v32,
        v33);
      if ( !this->fields.sort )
        goto LABEL_95;
      this->fields.sort->fields.listViewKind = 0;
      Instance = (int64_t)*v45;
      if ( !*v45 )
        goto LABEL_95;
      ListViewSort__Load((ListViewSort_o *)Instance, 0LL);
      if ( !v27 )
        goto LABEL_95;
      Instance = (int64_t)UserServantStorageMaster__getKeepServantList(v27, 0LL);
      v39 = &StringLiteral_12056/*"SERVANT_WAREHOUSE_EMPTY"*/;
      break;
    case 3:
      v46 = WarehouseListViewManager_TypeInfo;
      if ( (BYTE3(WarehouseListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !WarehouseListViewManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(WarehouseListViewManager_TypeInfo);
        v46 = WarehouseListViewManager_TypeInfo;
      }
      servantEquipWarehouseSortInfo = v46->static_fields->servantEquipWarehouseSortInfo;
      this->fields.sort = servantEquipWarehouseSortInfo;
      v48 = &this->fields.sort;
      sub_B2C2F8(
        (BattleServantConfConponent_o *)&this->fields.sort,
        (System_Int32_array **)servantEquipWarehouseSortInfo,
        v28,
        v29,
        v30,
        v31,
        v32,
        v33);
      if ( !this->fields.sort )
        goto LABEL_95;
      this->fields.sort->fields.listViewKind = 1;
      Instance = (int64_t)*v48;
      if ( !*v48 )
        goto LABEL_95;
      ListViewSort__Load((ListViewSort_o *)Instance, 0LL);
      if ( !v27 )
        goto LABEL_95;
      Instance = (int64_t)UserServantStorageMaster__getServantEquipList(v27, 0LL);
      v39 = &StringLiteral_11718/*"SERVANT_EQUIP_WAREHOUSE_EMPTY"*/;
      break;
    default:
      v49 = 0LL;
      if ( !setupInfo )
        goto LABEL_43;
      goto LABEL_35;
  }
  v35 = (System_String_o *)*v39;
  v49 = Instance;
  if ( setupInfo )
  {
LABEL_35:
    v50 = this->fields.kind | 2;
    this->fields.isQuestStart = setupInfo->fields.isQuestStart;
    if ( v50 == 2 )
    {
      v52 = &this->fields.sort;
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
      v65 = setupInfo->fields.servantFilterEventIdList;
      this->fields.bonusEventIdList = v65;
      sub_B2C2F8(
        (BattleServantConfConponent_o *)&this->fields.bonusEventIdList,
        (System_Int32_array **)v65,
        v28,
        v29,
        v30,
        v31,
        v32,
        v33);
      servantEquipFilterEventIdList = setupInfo->fields.servantFilterIdList;
      p_servantFilterIdList = &this->fields.servantFilterIdList;
      this->fields.servantFilterIdList = servantEquipFilterEventIdList;
    }
    else
    {
      v52 = &this->fields.sort;
      v55 = this->fields.sort;
      if ( !v55 )
        goto LABEL_95;
      v55->fields.isBonusKind = 1;
      this->fields.servantFilterIdList = 0LL;
      sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.servantFilterIdList, 0LL, v28, v29, v30, v31, v32, v33);
      servantEquipFilterEventIdList = setupInfo->fields.servantEquipFilterEventIdList;
      p_servantFilterIdList = &this->fields.bonusEventIdList;
      this->fields.bonusEventIdList = servantEquipFilterEventIdList;
    }
  }
  else
  {
LABEL_43:
    v52 = &this->fields.sort;
    v64 = this->fields.sort;
    this->fields.isQuestStart = 1;
    if ( !v64 )
      goto LABEL_95;
    v64->fields.isBonusKind = 0;
    this->fields.bonusEventIdList = 0LL;
    sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.bonusEventIdList, 0LL, v28, v29, v30, v31, v32, v33);
    p_servantFilterIdList = &this->fields.servantFilterIdList;
    servantEquipFilterEventIdList = 0LL;
    this->fields.servantFilterIdList = 0LL;
  }
  sub_B2C2F8(
    (BattleServantConfConponent_o *)p_servantFilterIdList,
    (System_Int32_array **)servantEquipFilterEventIdList,
    v56,
    v57,
    v58,
    v59,
    v60,
    v61);
  Instance = (int64_t)*v52;
  if ( !*v52 )
    goto LABEL_95;
  if ( *(_BYTE *)(Instance + 61) )
  {
    bonusEventIdList = this->fields.bonusEventIdList;
    v67 = this->fields.servantFilterIdList;
    if ( this->fields.isQuestStart )
      ListViewSort__AlignBonusKind((ListViewSort_o *)Instance, bonusEventIdList, v67, 0, 0LL, 0LL);
    else
      ListViewSort__AlignBonusKind2((ListViewSort_o *)Instance, bonusEventIdList, v67, 0LL, 0LL, 0LL, 0LL);
  }
  Instance = (int64_t)this->fields.bonusFilterKindButton;
  if ( !Instance )
    goto LABEL_95;
  Instance = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  if ( !*v52 )
    goto LABEL_95;
  if ( !Instance )
    goto LABEL_95;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, (*v52)->fields.isBonusKind, 0LL);
  if ( !*v52 )
    goto LABEL_95;
  iconScaleKind = (*v52)->fields.iconScaleKind;
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
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.seed,
    (System_Int32_array **)normalSizeSeed,
    v68,
    v69,
    v70,
    v71,
    v72,
    v73);
LABEL_65:
  *(_QWORD *)&this->fields.sellEnableRestCnt = 0LL;
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
  *(_OWORD *)&this->fields.dragSelectSum = xmmword_31A31B0;
  this->fields.isDragSelect = 1;
  this->fields.dragSelectFriendShipSum = 0;
  if ( !v49 )
    goto LABEL_90;
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_95;
  v76 = (UserDeckMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                              (DataManager_o *)Instance,
                              (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserDeckMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Instance = NetworkManager__get_UserId(0LL);
  if ( !v76
    || (UserDeckMaster__getPartyList(v76, &svtIdList, &equipIdList, Instance, 0LL),
        (Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0)
    || (Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                              (DataManager_o *)Instance,
                              (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_EventMaster___)) == 0 )
  {
LABEL_95:
    sub_B2C434(Instance, v25);
  }
  Instance = EventMaster__IsEnableFatigueEvent((EventMaster_o *)Instance, &eventId, 0LL);
  v97 = 0LL;
  if ( (Instance & 1) != 0 )
  {
    Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_95;
    Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserEventServantFatigueMaster___);
    if ( !Instance )
      goto LABEL_95;
    Instance = (int64_t)UserEventServantFatigueMaster__GetRecoverySvtIdList(
                          (UserEventServantFatigueMaster_o *)Instance,
                          eventId,
                          0LL);
    v97 = (System_Int64_array *)Instance;
  }
  v77 = *(_DWORD *)(v49 + 24);
  if ( v77 >= 1 )
  {
    v78 = 0LL;
    v79 = v49 + 32;
    v95 = v35;
    v96 = setupInfo;
    do
    {
      if ( (unsigned int)v78 >= v77 )
        goto LABEL_96;
      v80 = *(_QWORD *)(v79 + 8 * v78);
      if ( !v80 )
        goto LABEL_95;
      v81 = *(_OWORD *)(v80 + 32);
      *(_OWORD *)&v100.fields.currentCryptoKey = *(_OWORD *)(v80 + 16);
      *(_OWORD *)&v100.fields.fakeValue = v81;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      }
      v99 = v100;
      Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v99, 0LL);
      if ( (unsigned int)v78 >= *(_DWORD *)(v49 + 24) )
      {
LABEL_96:
        v93 = sub_B2C460(Instance);
        sub_B2C400(v93, 0LL);
      }
      if ( !v34 )
        goto LABEL_95;
      v82 = svtIdList;
      v83 = v49;
      v84 = v79;
      v85 = *(UserServantEntity_o **)(v79 + 8 * v78);
      partyUserEquipList = equipIdList;
      v86 = *(_QWORD *)(v34 + 112);
      v87 = Instance;
      v88 = v34;
      v89 = (WarehouseListViewItem_o *)sub_B2C42C(WarehouseListViewItem_TypeInfo);
      WarehouseListViewItem___ctor(v89, v78, v85, v96, v82, partyUserEquipList, v97, v87 == v86, v94);
      Instance = (int64_t)this->fields.itemList;
      if ( !Instance )
        goto LABEL_95;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)Instance,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v89,
        (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
      WarehouseListViewManager__ChangeSellEnableRestCnt(this, 1, v89, v90);
      v77 = *(_DWORD *)(v83 + 24);
      ++v78;
      v49 = v83;
      v34 = v88;
      v79 = v84;
    }
    while ( (int)v78 < v77 );
    v35 = v95;
    if ( (int)v78 > 0 )
      v35 = (System_String_o *)StringLiteral_11892/*"SERVANT_SORT_FILTER_RESULT_EMPTY"*/;
  }
LABEL_90:
  emptyMessageLabel = this->fields.emptyMessageLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  Instance = (int64_t)LocalizationManager__Get(v35, 0LL);
  if ( !emptyMessageLabel )
    goto LABEL_95;
  UILabel__set_text(emptyMessageLabel, (System_String_o *)Instance, 0LL);
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
  WarehouseListViewManager__SetFilterButtonImage(this, v92);
  ListViewManager__CheckScroll((ListViewManager_o *)this, this->fields.scaleType, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarehouseListViewManager__DecideDragSelect(
        WarehouseListViewManager_o *this,
        int32_t index,
        const MethodInfo *method)
{
  WarehouseListViewManager_o *v4; // x19
  __int64 v5; // x1
  struct System_Collections_Generic_List_ListViewItem__o *itemSortList; // x21
  ListViewItem_o *v7; // x20
  __int64 v8; // x9
  _BOOL4 isDragSelect; // w21
  const MethodInfo *v10; // x2
  const MethodInfo *v11; // x3
  const MethodInfo *v12; // x3
  struct WarehouseListManager_o *parentManager; // x8
  struct WarehouseListManager_o *v14; // x8
  struct WarehouseListViewManager_o *baseListViewManager; // x9
  int32_t selectSum; // w9
  WarehouseListViewManager_o *v17; // x0
  bool v18; // w1
  struct WarehouseListManager_o *v19; // x8
  struct WarehouseListViewManager_o *v20; // x9
  WarehouseListViewManager_o *v21; // x0
  const MethodInfo *v22; // x1
  int32_t friendShipSum[2]; // [xsp+8h] [xbp-18h] BYREF

  v4 = this;
  if ( (byte_41889A7 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, *(_QWORD *)&index);
    this = (WarehouseListViewManager_o *)sub_B2C35C(&WarehouseListViewItem_TypeInfo, v5);
    byte_41889A7 = 1;
  }
  *(_QWORD *)friendShipSum = 0LL;
  itemSortList = v4->fields.itemSortList;
  if ( !itemSortList )
    goto LABEL_27;
  if ( itemSortList->fields._size <= (unsigned int)index )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
  v7 = itemSortList->fields._items->m_Items[index];
  if ( !v7 )
    goto LABEL_27;
  v8 = *(&WarehouseListViewItem_TypeInfo->_2.bitflags2 + 1);
  if ( *(&v7->klass->_2.bitflags2 + 1) >= (unsigned int)v8
    && (WarehouseListViewItem_c *)v7->klass->_2.typeHierarchy[v8 - 1] == WarehouseListViewItem_TypeInfo )
  {
    if ( SHIDWORD(v7[2].monitor) >= 1 )
    {
      isDragSelect = v4->fields.isDragSelect;
      this = (WarehouseListViewManager_o *)ListViewItem__get_IsSelect(v7, 0LL);
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
              v11);
            parentManager = v4->fields.parentManager;
            if ( parentManager )
            {
              if ( friendShipSum[1] >= parentManager->fields.sendMax && !BYTE6(v7[1].fields.sortValue1) )
                goto LABEL_26;
              v7->fields.selectNum = parentManager->fields.totalSum;
              v14 = v4->fields.parentManager;
              ++v4->fields.selectSum;
              if ( v14 )
              {
                baseListViewManager = v14->fields.baseListViewManager;
                if ( baseListViewManager )
                {
                  selectSum = baseListViewManager->fields.selectSum;
                  v17 = v4;
                  v18 = 0;
LABEL_25:
                  v14->fields.totalSum = selectSum;
                  WarehouseListViewManager__ChangeSellEnableRestCnt(v17, v18, (WarehouseListViewItem_o *)v7, v12);
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
        v19 = v4->fields.parentManager;
        if ( v19 )
        {
          this = v19->fields.baseListViewManager;
          if ( this )
          {
            WarehouseListViewManager__DecrementNumber(this, v7->fields.selectNum, v10);
            ListViewItem__set_IsSelect(v7, 0, 0LL);
            v14 = v4->fields.parentManager;
            --v4->fields.selectSum;
            if ( v14 )
            {
              v20 = v14->fields.baseListViewManager;
              if ( v20 )
              {
                selectSum = v20->fields.selectSum;
                v18 = 1;
                v17 = v4;
                goto LABEL_25;
              }
            }
          }
        }
LABEL_27:
        sub_B2C434(this, *(_QWORD *)&index);
      }
    }
LABEL_26:
    HIDWORD(v7[2].monitor) = -1;
    return;
  }
  v21 = (WarehouseListViewManager_o *)sub_B2C728(v7);
  WarehouseListViewManager__CancelDragEnd(v21, v22);
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
  int32_t klass; // w9
  _BOOL8 v10; // x0
  __int64 v11; // x1
  System_Collections_Generic_List_Enumerator_T__o v12; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4188994 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__, *(_QWORD *)&selectNum);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v7);
    byte_4188994 = 1;
  }
  memset(&v12, 0, sizeof(v12));
  itemList = this->fields.itemList;
  if ( !itemList )
    sub_B2C434(0LL, *(_QWORD *)&selectNum);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v12,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)itemList,
    (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  while ( 1 )
  {
    v10 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v12,
            (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    if ( !v10 )
      break;
    if ( !v12.fields.current )
      sub_B2C434(v10, v11);
    klass = (int32_t)v12.fields.current[1].klass;
    if ( klass > selectNum )
      LODWORD(v12.fields.current[1].klass) = klass - 1;
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v12,
    (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
}


void __fastcall WarehouseListViewManager__DeleteContinueData(const MethodInfo *method)
{
  __int64 v1; // x1
  WarehouseListViewManager_c *v2; // x0
  ListViewSort_o *servantSortInfo; // x0

  if ( (byte_418897F & 1) == 0 )
  {
    sub_B2C35C(&WarehouseListViewManager_TypeInfo, v1);
    byte_418897F = 1;
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
    sub_B2C434(servantSortInfo, v1);
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
  CommonUI_o *Instance; // x20
  System_Action_o *v9; // x21
  __int64 v10; // x0
  __int64 v11; // x1

  if ( (byte_418899B & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, isDecide);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    sub_B2C35C(&Method_WarehouseListViewManager_EndCloseSelectFilterKind__, v6);
    byte_418899B = 1;
  }
  if ( isDecide )
  {
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
    WarehouseListViewManager__SetFilterButtonImage(this, v7);
    ListViewManager__CheckScroll((ListViewManager_o *)this, this->fields.scaleType, 0LL);
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v9 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(v9, (Il2CppObject *)this, Method_WarehouseListViewManager_EndCloseSelectFilterKind__, 0LL);
  if ( !Instance )
    sub_B2C434(v10, v11);
  CommonUI__CloseServantFilterSelectMenu(Instance, v9, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarehouseListViewManager__EndSelectSortKind(
        WarehouseListViewManager_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  __int64 v6; // x1

  if ( (byte_4188999 & 1) == 0 )
  {
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, isDecide);
    byte_4188999 = 1;
  }
  if ( isDecide )
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B2C434(0LL, v6);
  CommonUI__CloseServantSortSelectMenu(Instance, 0LL, 0LL);
}


// local variable allocation has failed, the output may be wrong!
int64_t __fastcall WarehouseListViewManager__GetAmountSortValue(
        WarehouseListViewManager_o *this,
        int32_t svtId,
        const MethodInfo *method)
{
  WarehouseListViewManager_o *v4; // x20
  __int64 v5; // x1
  __int64 v6; // x1
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x25
  signed __int64 size; // x22
  int64_t v9; // x21
  unsigned __int64 v10; // x23
  ListViewItem_o *v11; // x8
  __int64 v12; // x11

  v4 = this;
  if ( (byte_418899E & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, *(_QWORD *)&svtId);
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v5);
    this = (WarehouseListViewManager_o *)sub_B2C35C(&WarehouseListViewItem_TypeInfo, v6);
    byte_418899E = 1;
  }
  itemList = v4->fields.itemList;
  if ( !itemList )
    goto LABEL_17;
  size = itemList->fields._size;
  if ( (int)size >= 1 )
  {
    v9 = 0LL;
    v10 = 0LL;
    do
    {
      if ( v10 >= (unsigned int)itemList->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
      v11 = itemList->fields._items->m_Items[v10];
      if ( !v11 )
        break;
      v12 = *(&WarehouseListViewItem_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v11->klass->_2.bitflags2 + 1) < (unsigned int)v12
        || (WarehouseListViewItem_c *)v11->klass->_2.typeHierarchy[v12 - 1] != WarehouseListViewItem_TypeInfo )
      {
        break;
      }
      ++v10;
      if ( (WarehouseListViewItem_c *)v11->klass->_2.typeHierarchy[*(&WarehouseListViewItem_TypeInfo->_2.bitflags2 + 1)
                                                                 - 1] != WarehouseListViewItem_TypeInfo )
        v11 = 0LL;
      if ( v11[1].fields.selectNum == svtId )
        ++v9;
      if ( (__int64)v10 >= size )
        return v9;
      itemList = v4->fields.itemList;
    }
    while ( itemList );
LABEL_17:
    sub_B2C434(this, *(_QWORD *)&svtId);
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
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x20
  ListViewItem_o *v7; // x8
  __int64 v8; // x11

  if ( (byte_41889AA & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, *(_QWORD *)&index);
    sub_B2C35C(&WarehouseListViewItem_TypeInfo, v5);
    byte_41889AA = 1;
  }
  itemList = this->fields.itemList;
  if ( !itemList )
    return 0LL;
  if ( itemList->fields._size <= (unsigned int)index )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
  v7 = itemList->fields._items->m_Items[index];
  if ( !v7 )
    return 0LL;
  v8 = *(&WarehouseListViewItem_TypeInfo->_2.bitflags2 + 1);
  if ( *(&v7->klass->_2.bitflags2 + 1) < (unsigned int)v8 )
    return 0LL;
  if ( (WarehouseListViewItem_c *)v7->klass->_2.typeHierarchy[v8 - 1] == WarehouseListViewItem_TypeInfo )
    return (WarehouseListViewItem_o *)itemList->fields._items->m_Items[index];
  return 0LL;
}


int32_t __fastcall WarehouseListViewManager__GetModeKind(WarehouseListViewManager_o *this, const MethodInfo *method)
{
  struct WarehouseListMenu_o *warehouseListMenu; // x8

  warehouseListMenu = this->fields.warehouseListMenu;
  if ( !warehouseListMenu )
    sub_B2C434(this, method);
  return warehouseListMenu->fields.modeKind;
}


System_String_o *__fastcall WarehouseListViewManager__GetScaleButtonSpriteName(
        WarehouseListViewManager_o *this,
        const MethodInfo *method)
{
  ListViewSort_o *sort; // x0

  sort = this->fields.sort;
  if ( !sort )
    sub_B2C434(0LL, method);
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
  Il2CppObject *current; // x21
  __int64 v13; // x9
  int32_t *v14; // x8
  __int64 v15; // x0
  __int64 v16; // x1
  System_Collections_Generic_List_Enumerator_T__o v17; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_41889A9 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__, normalSum);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v9);
    sub_B2C35C(&WarehouseListViewItem_TypeInfo, v10);
    byte_41889A9 = 1;
  }
  memset(&v17, 0, sizeof(v17));
  *normalSum = 0;
  *friendShipSum = 0;
  itemList = this->fields.itemList;
  if ( !itemList )
    sub_B2C434(0LL, normalSum);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v17,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)itemList,
    (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  while ( 1 )
  {
    v15 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v17,
            (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    if ( (v15 & 1) == 0 )
      break;
    current = v17.fields.current;
    if ( !v17.fields.current )
      goto LABEL_16;
    v13 = *(&WarehouseListViewItem_TypeInfo->_2.bitflags2 + 1);
    if ( *(&v17.fields.current->klass->_2.bitflags2 + 1) < (unsigned int)v13
      || (WarehouseListViewItem_c *)v17.fields.current->klass->_2.typeHierarchy[v13 - 1] != WarehouseListViewItem_TypeInfo )
    {
      v15 = sub_B2C728(v17.fields.current);
LABEL_16:
      sub_B2C434(v15, v16);
    }
    if ( ListViewItem__get_IsSelect((ListViewItem_o *)v17.fields.current, 0LL) )
    {
      if ( BYTE6(current[10].klass) )
        v14 = friendShipSum;
      else
        v14 = normalSum;
      ++*v14;
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v17,
    (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
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
  __int64 v11; // x0
  __int64 v12; // x1
  Il2CppObject *current; // x20
  __int64 v14; // x9
  const MethodInfo *v15; // x1
  int64_t UserSvtId; // x0
  System_Collections_Generic_List_Enumerator_T__o v17; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v18; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_418898F & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__, list);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_long__Add__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v8);
    sub_B2C35C(&WarehouseListViewItem_TypeInfo, v9);
    byte_418898F = 1;
  }
  memset(&v18, 0, sizeof(v18));
  itemList = this->fields.itemList;
  if ( !itemList )
    sub_B2C434(0LL, list);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v17,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)itemList,
    (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  v18 = v17;
  while ( 1 )
  {
    v11 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v18,
            (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    if ( (v11 & 1) == 0 )
      break;
    current = v18.fields.current;
    if ( !v18.fields.current )
      goto LABEL_14;
    v14 = *(&WarehouseListViewItem_TypeInfo->_2.bitflags2 + 1);
    if ( *(&v18.fields.current->klass->_2.bitflags2 + 1) < (unsigned int)v14
      || (WarehouseListViewItem_c *)v18.fields.current->klass->_2.typeHierarchy[v14 - 1] != WarehouseListViewItem_TypeInfo )
    {
      v11 = sub_B2C728(v18.fields.current);
LABEL_14:
      sub_B2C434(v11, v12);
    }
    if ( ListViewItem__get_IsSelect((ListViewItem_o *)v18.fields.current, 0LL) )
    {
      UserSvtId = WarehouseListViewItem__get_UserSvtId((WarehouseListViewItem_o *)current, v15);
      if ( !list )
        sub_B2C434(UserSvtId, UserSvtId);
      System_Collections_Generic_List_long___Add(
        list,
        UserSvtId,
        (const MethodInfo_2F6CFA8 *)Method_System_Collections_Generic_List_long__Add__);
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v18,
    (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
}


System_Collections_Generic_Dictionary_long__int__o *__fastcall WarehouseListViewManager__GetSelectServantIdDic(
        WarehouseListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  System_Collections_Generic_Dictionary_long__int__o *v8; // x20
  int64_t IsSelect; // x0
  const MethodInfo *v10; // x1
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x21
  int size; // w22
  unsigned int v13; // w23
  ListViewItem_o *v14; // x21
  __int64 v15; // x9
  System_Collections_Generic_Dictionary_long__int__o *result; // x0
  WarehouseListViewManager_o *v17; // x0
  System_Collections_Generic_Dictionary_long__int__o *v18; // x1
  const MethodInfo *v19; // x2

  if ( (byte_41889A1 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_long__int__Add__, method);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_long__int___ctor__, v3);
    sub_B2C35C(&System_Collections_Generic_Dictionary_long__int__TypeInfo, v4);
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v6);
    sub_B2C35C(&WarehouseListViewItem_TypeInfo, v7);
    byte_41889A1 = 1;
  }
  v8 = (System_Collections_Generic_Dictionary_long__int__o *)sub_B2C42C(System_Collections_Generic_Dictionary_long__int__TypeInfo);
  System_Collections_Generic_Dictionary_long__int____ctor(
    v8,
    (const MethodInfo_2E50D74 *)Method_System_Collections_Generic_Dictionary_long__int___ctor__);
  itemList = this->fields.itemList;
  if ( !itemList )
LABEL_16:
    sub_B2C434(IsSelect, v10);
  size = itemList->fields._size;
  if ( size < 1 )
    return v8;
  v13 = 0;
  while ( 1 )
  {
    if ( itemList->fields._size <= v13 )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
    v14 = itemList->fields._items->m_Items[v13];
    if ( !v14 )
      goto LABEL_16;
    v15 = *(&WarehouseListViewItem_TypeInfo->_2.bitflags2 + 1);
    if ( *(&v14->klass->_2.bitflags2 + 1) < (unsigned int)v15
      || (WarehouseListViewItem_c *)v14->klass->_2.typeHierarchy[v15 - 1] != WarehouseListViewItem_TypeInfo )
    {
      break;
    }
    IsSelect = ListViewItem__get_IsSelect(v14, 0LL);
    if ( (IsSelect & 1) != 0 )
    {
      IsSelect = WarehouseListViewItem__get_UserSvtId((WarehouseListViewItem_o *)v14, v10);
      if ( !v8 )
        goto LABEL_16;
      System_Collections_Generic_Dictionary_long__int___Add(
        v8,
        IsSelect,
        v14->fields.selectNum,
        (const MethodInfo_2E51928 *)Method_System_Collections_Generic_Dictionary_long__int__Add__);
    }
    if ( (int)++v13 >= size )
      return v8;
    itemList = this->fields.itemList;
    if ( !itemList )
      goto LABEL_16;
  }
  v17 = (WarehouseListViewManager_o *)sub_B2C728(v14);
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
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  System_Collections_Generic_List_long__o *v14; // x23
  System_Collections_Generic_List_long__o *v15; // x22
  int64_t v16; // x0
  __int64 v17; // x1
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x19
  signed __int64 size; // x24
  unsigned __int64 v26; // x25
  ListViewItem_o *v27; // x8
  __int64 v28; // x11
  ListViewItem_c *klass; // x9
  Il2CppType byval_arg; // q0
  const MethodInfo_2F6CFA8 *v31; // x2
  int64_t v32; // x1
  System_Collections_Generic_List_long__o *v33; // x0
  Il2CppType v34; // q0
  System_Int64_array *v35; // x0
  System_String_array **v36; // x2
  System_String_array **v37; // x3
  System_Boolean_array **v38; // x4
  System_Int32_array **v39; // x5
  System_Int32_array *v40; // x6
  System_Int32_array *v41; // x7
  System_Int64_array *v42; // x0
  System_String_array **v43; // x2
  System_String_array **v44; // x3
  System_Boolean_array **v45; // x4
  System_Int32_array **v46; // x5
  System_Int32_array *v47; // x6
  System_Int32_array *v48; // x7
  System_String_array **v50; // x2
  System_String_array **v51; // x3
  System_Boolean_array **v52; // x4
  System_Int32_array **v53; // x5
  System_Int32_array *v54; // x6
  System_Int32_array *v55; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v57; // [xsp+10h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v58; // [xsp+30h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v59; // [xsp+50h] [xbp-70h]

  if ( (byte_4188989 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_long__Add__, choiceList);
    sub_B2C35C(&Method_System_Collections_Generic_List_long__ToArray__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_long___ctor__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_long__get_Count__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v9);
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v10);
    sub_B2C35C(&System_Collections_Generic_List_long__TypeInfo, v11);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v12);
    sub_B2C35C(&WarehouseListViewItem_TypeInfo, v13);
    byte_4188989 = 1;
  }
  v14 = (System_Collections_Generic_List_long__o *)sub_B2C42C(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v14,
    (const MethodInfo_2F6C24C *)Method_System_Collections_Generic_List_long___ctor__);
  v15 = (System_Collections_Generic_List_long__o *)sub_B2C42C(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v15,
    (const MethodInfo_2F6C24C *)Method_System_Collections_Generic_List_long___ctor__);
  itemList = this->fields.itemList;
  if ( !itemList )
    goto LABEL_33;
  size = itemList->fields._size;
  if ( (int)size >= 1 )
  {
    v26 = 0LL;
    do
    {
      if ( v26 >= (unsigned int)itemList->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
      v27 = itemList->fields._items->m_Items[v26];
      if ( !v27 )
        break;
      v28 = *(&WarehouseListViewItem_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v27->klass->_2.bitflags2 + 1) < (unsigned int)v28
        || (WarehouseListViewItem_c *)v27->klass->_2.typeHierarchy[v28 - 1] != WarehouseListViewItem_TypeInfo )
      {
        break;
      }
      klass = v27[1].klass;
      if ( klass && BYTE1(v27[2].monitor) )
      {
        if ( BYTE1(v27[1].fields.sortValue1) )
        {
          byval_arg = klass->_1.byval_arg;
          *(_OWORD *)&v59.fields.currentCryptoKey = *(_OWORD *)&klass->_1.name;
          *(Il2CppType *)&v59.fields.fakeValue = byval_arg;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          }
          v58 = v59;
          v16 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v58, 0LL);
          if ( !v15 )
            break;
          v31 = (const MethodInfo_2F6CFA8 *)Method_System_Collections_Generic_List_long__Add__;
          v32 = v16;
          v33 = v15;
        }
        else
        {
          v34 = klass->_1.byval_arg;
          *(_OWORD *)&v59.fields.currentCryptoKey = *(_OWORD *)&klass->_1.name;
          *(Il2CppType *)&v59.fields.fakeValue = v34;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          }
          v57 = v59;
          v16 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v57, 0LL);
          if ( !v14 )
            break;
          v31 = (const MethodInfo_2F6CFA8 *)Method_System_Collections_Generic_List_long__Add__;
          v32 = v16;
          v33 = v14;
        }
        System_Collections_Generic_List_long___Add(v33, v32, v31);
      }
      if ( (__int64)++v26 >= size )
        goto LABEL_28;
      itemList = this->fields.itemList;
    }
    while ( itemList );
LABEL_33:
    sub_B2C434(v16, v17);
  }
LABEL_28:
  if ( !v14 || !v15 )
    goto LABEL_33;
  if ( v15->fields._size + v14->fields._size < 1 )
  {
    *choiceList = 0LL;
    sub_B2C2F8((BattleServantConfConponent_o *)choiceList, 0LL, v18, v19, v20, v21, v22, v23);
    *unchoiceList = 0LL;
    sub_B2C2F8((BattleServantConfConponent_o *)unchoiceList, 0LL, v50, v51, v52, v53, v54, v55);
    return 0;
  }
  else
  {
    v35 = System_Collections_Generic_List_long___ToArray(
            v14,
            (const MethodInfo_2F6F0B4 *)Method_System_Collections_Generic_List_long__ToArray__);
    *choiceList = v35;
    sub_B2C2F8((BattleServantConfConponent_o *)choiceList, (System_Int32_array **)v35, v36, v37, v38, v39, v40, v41);
    v42 = System_Collections_Generic_List_long___ToArray(
            v15,
            (const MethodInfo_2F6F0B4 *)Method_System_Collections_Generic_List_long__ToArray__);
    *unchoiceList = v42;
    sub_B2C2F8((BattleServantConfConponent_o *)unchoiceList, (System_Int32_array **)v42, v43, v44, v45, v46, v47, v48);
    return 1;
  }
}


bool __fastcall WarehouseListViewManager__GetSwapLockList(
        WarehouseListViewManager_o *this,
        System_Int64_array **lockList,
        System_Int64_array **unlockList,
        const MethodInfo *method)
{
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  System_Collections_Generic_List_long__o *v14; // x23
  System_Collections_Generic_List_long__o *v15; // x22
  int64_t v16; // x0
  __int64 v17; // x1
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x19
  signed __int64 size; // x24
  unsigned __int64 v26; // x25
  ListViewItem_o *v27; // x8
  __int64 v28; // x11
  ListViewItem_c *klass; // x9
  Il2CppType byval_arg; // q0
  const MethodInfo_2F6CFA8 *v31; // x2
  int64_t v32; // x1
  System_Collections_Generic_List_long__o *v33; // x0
  Il2CppType v34; // q0
  System_Int64_array *v35; // x0
  System_String_array **v36; // x2
  System_String_array **v37; // x3
  System_Boolean_array **v38; // x4
  System_Int32_array **v39; // x5
  System_Int32_array *v40; // x6
  System_Int32_array *v41; // x7
  System_Int64_array *v42; // x0
  System_String_array **v43; // x2
  System_String_array **v44; // x3
  System_Boolean_array **v45; // x4
  System_Int32_array **v46; // x5
  System_Int32_array *v47; // x6
  System_Int32_array *v48; // x7
  System_String_array **v50; // x2
  System_String_array **v51; // x3
  System_Boolean_array **v52; // x4
  System_Int32_array **v53; // x5
  System_Int32_array *v54; // x6
  System_Int32_array *v55; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v57; // [xsp+10h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v58; // [xsp+30h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v59; // [xsp+50h] [xbp-70h]

  if ( (byte_4188988 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_long__Add__, lockList);
    sub_B2C35C(&Method_System_Collections_Generic_List_long__ToArray__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_long___ctor__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_long__get_Count__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v9);
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v10);
    sub_B2C35C(&System_Collections_Generic_List_long__TypeInfo, v11);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v12);
    sub_B2C35C(&WarehouseListViewItem_TypeInfo, v13);
    byte_4188988 = 1;
  }
  v14 = (System_Collections_Generic_List_long__o *)sub_B2C42C(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v14,
    (const MethodInfo_2F6C24C *)Method_System_Collections_Generic_List_long___ctor__);
  v15 = (System_Collections_Generic_List_long__o *)sub_B2C42C(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v15,
    (const MethodInfo_2F6C24C *)Method_System_Collections_Generic_List_long___ctor__);
  itemList = this->fields.itemList;
  if ( !itemList )
    goto LABEL_33;
  size = itemList->fields._size;
  if ( (int)size >= 1 )
  {
    v26 = 0LL;
    do
    {
      if ( v26 >= (unsigned int)itemList->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
      v27 = itemList->fields._items->m_Items[v26];
      if ( !v27 )
        break;
      v28 = *(&WarehouseListViewItem_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v27->klass->_2.bitflags2 + 1) < (unsigned int)v28
        || (WarehouseListViewItem_c *)v27->klass->_2.typeHierarchy[v28 - 1] != WarehouseListViewItem_TypeInfo )
      {
        break;
      }
      klass = v27[1].klass;
      if ( klass && LOBYTE(v27[2].monitor) )
      {
        if ( LOBYTE(v27[1].fields.sortValue1) )
        {
          byval_arg = klass->_1.byval_arg;
          *(_OWORD *)&v59.fields.currentCryptoKey = *(_OWORD *)&klass->_1.name;
          *(Il2CppType *)&v59.fields.fakeValue = byval_arg;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          }
          v58 = v59;
          v16 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v58, 0LL);
          if ( !v15 )
            break;
          v31 = (const MethodInfo_2F6CFA8 *)Method_System_Collections_Generic_List_long__Add__;
          v32 = v16;
          v33 = v15;
        }
        else
        {
          v34 = klass->_1.byval_arg;
          *(_OWORD *)&v59.fields.currentCryptoKey = *(_OWORD *)&klass->_1.name;
          *(Il2CppType *)&v59.fields.fakeValue = v34;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          }
          v57 = v59;
          v16 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v57, 0LL);
          if ( !v14 )
            break;
          v31 = (const MethodInfo_2F6CFA8 *)Method_System_Collections_Generic_List_long__Add__;
          v32 = v16;
          v33 = v14;
        }
        System_Collections_Generic_List_long___Add(v33, v32, v31);
      }
      if ( (__int64)++v26 >= size )
        goto LABEL_28;
      itemList = this->fields.itemList;
    }
    while ( itemList );
LABEL_33:
    sub_B2C434(v16, v17);
  }
LABEL_28:
  if ( !v14 || !v15 )
    goto LABEL_33;
  if ( v15->fields._size + v14->fields._size < 1 )
  {
    *lockList = 0LL;
    sub_B2C2F8((BattleServantConfConponent_o *)lockList, 0LL, v18, v19, v20, v21, v22, v23);
    *unlockList = 0LL;
    sub_B2C2F8((BattleServantConfConponent_o *)unlockList, 0LL, v50, v51, v52, v53, v54, v55);
    return 0;
  }
  else
  {
    v35 = System_Collections_Generic_List_long___ToArray(
            v14,
            (const MethodInfo_2F6F0B4 *)Method_System_Collections_Generic_List_long__ToArray__);
    *lockList = v35;
    sub_B2C2F8((BattleServantConfConponent_o *)lockList, (System_Int32_array **)v35, v36, v37, v38, v39, v40, v41);
    v42 = System_Collections_Generic_List_long___ToArray(
            v15,
            (const MethodInfo_2F6F0B4 *)Method_System_Collections_Generic_List_long__ToArray__);
    *unlockList = v42;
    sub_B2C2F8((BattleServantConfConponent_o *)unlockList, (System_Int32_array **)v42, v43, v44, v45, v46, v47, v48);
    return 1;
  }
}


void __fastcall WarehouseListViewManager__InitLoad(const MethodInfo *method)
{
  __int64 v1; // x1
  WarehouseListViewManager_c *v2; // x0
  ListViewSort_o *servantSortInfo; // x0

  if ( (byte_4188980 & 1) == 0 )
  {
    sub_B2C35C(&WarehouseListViewManager_TypeInfo, v1);
    byte_4188980 = 1;
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
    sub_B2C434(servantSortInfo, v1);
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
    sub_B2C434(this, item);
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
    sub_B2C434(parentManager, item);
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
  DataManager_o *Instance; // x0
  __int64 v14; // x1
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *v15; // x20
  _BOOL8 v16; // x0
  const MethodInfo *v17; // x1
  WarehouseListViewItem_o *current; // x21
  __int64 v19; // x10
  const MethodInfo *v20; // x1
  int64_t UserSvtId; // x0
  UserServantEntity_o *Entity; // x1
  const MethodInfo *v23; // x2
  UnityEngine_Object_o *viewObject; // x22
  __int64 v25; // x1
  struct ListViewObject_o *v26; // x0
  UserGameEntity_o *SelfUserGame; // x20
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x9
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *v29; // x19
  _BOOL8 v30; // x0
  const MethodInfo *v31; // x1
  WarehouseListViewItem_o *v32; // x21
  __int64 v33; // x10
  const MethodInfo *v34; // x1
  int64_t v35; // x0
  UserServantEntity_o *v36; // x1
  const MethodInfo *v37; // x2
  int64_t v38; // x0
  const MethodInfo *v39; // x1
  int64_t favoriteUserSvtId; // x27
  int64_t v41; // x22
  int64_t v42; // x0
  const MethodInfo *v43; // x3
  UnityEngine_Object_o *v44; // x22
  __int64 v45; // x1
  struct ListViewObject_o *v46; // x0
  int v47; // w19
  System_Collections_Generic_List_Enumerator_T__o v48; // [xsp+8h] [xbp-98h] BYREF
  int v49[2]; // [xsp+20h] [xbp-80h]
  int v50; // [xsp+28h] [xbp-78h]
  System_Collections_Generic_List_Enumerator_T__o v51; // [xsp+30h] [xbp-70h] BYREF

  if ( (byte_4188986 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_UserServantMaster___, method);
    sub_B2C35C(&Method_DataManager_GetMasterData_UserServantStorageMaster___, v3);
    sub_B2C35C(&Method_DataMasterBase_UserServantStorageMaster__UserServantEntity__long__GetEntity__, v4);
    sub_B2C35C(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v9);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v10);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11);
    sub_B2C35C(&WarehouseListViewItem_TypeInfo, v12);
    byte_4188986 = 1;
  }
  memset(&v51, 0, sizeof(v51));
  v50 = 0;
  if ( this->fields.itemList )
  {
    if ( (this->fields.kind & 0xFFFFFFFE) == 2 )
    {
      Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( Instance )
      {
        Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserServantStorageMaster___);
        if ( this->fields.itemList )
        {
          v15 = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)Instance;
          System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
            &v48,
            (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this->fields.itemList,
            (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
          v51 = v48;
          while ( 1 )
          {
            v16 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                    &v51,
                    (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
            if ( !v16 )
              break;
            current = (WarehouseListViewItem_o *)v51.fields.current;
            if ( !v51.fields.current
              || (v19 = *(&WarehouseListViewItem_TypeInfo->_2.bitflags2 + 1),
                  *(&v51.fields.current->klass->_2.bitflags2 + 1) < (unsigned int)v19)
              || (WarehouseListViewItem_c *)v51.fields.current->klass->_2.typeHierarchy[v19 - 1] != WarehouseListViewItem_TypeInfo )
            {
              sub_B2C434(v16, v17);
            }
            if ( WarehouseListViewItem__get_UserSvtId((WarehouseListViewItem_o *)v51.fields.current, v17) >= 1 )
            {
              UserSvtId = WarehouseListViewItem__get_UserSvtId(current, v20);
              if ( !v15 )
                sub_B2C434(UserSvtId, UserSvtId);
              Entity = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
                         v15,
                         UserSvtId,
                         (const MethodInfo_24E42F8 *)Method_DataMasterBase_UserServantStorageMaster__UserServantEntity__long__GetEntity__);
              if ( Entity )
                WarehouseListViewItem__Modify(current, Entity, v23);
              viewObject = (UnityEngine_Object_o *)current->fields.viewObject;
              if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              }
              if ( UnityEngine_Object__op_Inequality(viewObject, 0LL, 0LL) )
              {
                v26 = current->fields.viewObject;
                if ( !v26 )
                  sub_B2C434(0LL, v25);
                ((void (__fastcall *)(struct ListViewObject_o *, WarehouseListViewItem_o *, Il2CppMethodPointer))v26->klass->vtable._5_SetItem.method)(
                  v26,
                  current,
                  v26->klass->vtable._6_SetItem.methodPtr);
              }
            }
          }
          v49[0] = 335;
          v50 = 1;
          System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
            &v51,
            (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
          v50 = 0;
          return;
        }
      }
LABEL_52:
      sub_B2C434(Instance, v14);
    }
    SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_52;
    Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                  Instance,
                                  (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserServantMaster___);
    itemList = this->fields.itemList;
    if ( !itemList )
      goto LABEL_52;
    v29 = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)Instance;
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v48,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)itemList,
      (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    v51 = v48;
    while ( 1 )
    {
      v30 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v51,
              (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
      if ( !v30 )
        break;
      v32 = (WarehouseListViewItem_o *)v51.fields.current;
      if ( !v51.fields.current
        || (v33 = *(&WarehouseListViewItem_TypeInfo->_2.bitflags2 + 1),
            *(&v51.fields.current->klass->_2.bitflags2 + 1) < (unsigned int)v33)
        || (WarehouseListViewItem_c *)v51.fields.current->klass->_2.typeHierarchy[v33 - 1] != WarehouseListViewItem_TypeInfo )
      {
        sub_B2C434(v30, v31);
      }
      if ( WarehouseListViewItem__get_UserSvtId((WarehouseListViewItem_o *)v51.fields.current, v31) >= 1 )
      {
        v35 = WarehouseListViewItem__get_UserSvtId(v32, v34);
        if ( !v29 )
          sub_B2C434(v35, v35);
        v36 = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
                v29,
                v35,
                (const MethodInfo_24E42F8 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
        if ( v36 )
          WarehouseListViewItem__Modify(v32, v36, v37);
        v38 = WarehouseListViewItem__get_UserSvtId(v32, (const MethodInfo *)v36);
        if ( !SelfUserGame )
          sub_B2C434(v38, v39);
        favoriteUserSvtId = SelfUserGame->fields.favoriteUserSvtId;
        v41 = v38;
        v42 = WarehouseListViewItem__get_UserSvtId(v32, v39);
        WarehouseListViewItem__Modify_26880604(
          v32,
          v41 == favoriteUserSvtId,
          v42 == SelfUserGame->fields.pushUserSvtId,
          v43);
        v44 = (UnityEngine_Object_o *)v32->fields.viewObject;
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        if ( UnityEngine_Object__op_Inequality(v44, 0LL, 0LL) )
        {
          v46 = v32->fields.viewObject;
          if ( !v46 )
            sub_B2C434(0LL, v45);
          ((void (__fastcall *)(struct ListViewObject_o *, WarehouseListViewItem_o *, Il2CppMethodPointer))v46->klass->vtable._5_SetItem.method)(
            v46,
            v32,
            v46->klass->vtable._6_SetItem.methodPtr);
        }
      }
    }
    v49[0] = 335;
    v47 = ++v50;
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v51,
      (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    if ( v47 && v49[v47 - 1] == 335 )
      v50 = v47 - 1;
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
  __int64 v18; // x1
  DataManager_o *v19; // x19
  UserServantEntity_o *Entity; // x19
  UserGameEntity_o *SelfUserGame; // x22
  _BOOL8 v22; // x0
  const MethodInfo *v23; // x1
  __int64 v24; // x11
  WarehouseListViewItem_o *v25; // x20
  int64_t v26; // x0
  __int128 v27; // q0
  int64_t v28; // x21
  const MethodInfo *v29; // x2
  int64_t v30; // x0
  const MethodInfo *v31; // x1
  int64_t favoriteUserSvtId; // x28
  int64_t v33; // x21
  int64_t v34; // x0
  const MethodInfo *v35; // x3
  UnityEngine_Object_o *v36; // x21
  __int64 v37; // x1
  struct ListViewObject_o *v38; // x0
  int v39; // w19
  _BOOL8 v40; // x0
  const MethodInfo *v41; // x1
  __int64 v42; // x11
  WarehouseListViewItem_o *current; // x22
  int64_t v44; // x0
  __int128 v45; // q0
  int64_t v46; // x23
  const MethodInfo *v47; // x2
  UnityEngine_Object_o *viewObject; // x23
  __int64 v49; // x1
  struct ListViewObject_o *v50; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v51; // [xsp+0h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v52; // [xsp+20h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v53; // [xsp+40h] [xbp-A0h] BYREF
  int v54[2]; // [xsp+60h] [xbp-80h]
  int v55; // [xsp+68h] [xbp-78h]
  System_Collections_Generic_List_Enumerator_T__o v56; // [xsp+70h] [xbp-70h] BYREF

  if ( (byte_4188987 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_UserServantMaster___, userSvtId);
    sub_B2C35C(&Method_DataManager_GetMasterData_UserServantStorageMaster___, v5);
    sub_B2C35C(&Method_DataMasterBase_UserServantStorageMaster__UserServantEntity__long__GetEntity__, v6);
    sub_B2C35C(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v9);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v10);
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v11);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v12);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v13);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v14);
    sub_B2C35C(&WarehouseListViewItem_TypeInfo, v15);
    byte_4188987 = 1;
  }
  memset(&v56, 0, sizeof(v56));
  v55 = 0;
  itemList = this->fields.itemList;
  if ( itemList )
  {
    if ( (this->fields.kind & 0xFFFFFFFE) == 2 )
    {
      if ( userSvtId < 1 )
      {
        v19 = 0LL;
        goto LABEL_42;
      }
      Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( Instance )
      {
        Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserServantStorageMaster___);
        if ( Instance )
        {
          Instance = (DataManager_o *)DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
                                        (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)Instance,
                                        userSvtId,
                                        (const MethodInfo_24E42F8 *)Method_DataMasterBase_UserServantStorageMaster__UserServantEntity__long__GetEntity__);
          itemList = this->fields.itemList;
          if ( itemList )
          {
            v19 = Instance;
LABEL_42:
            System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
              (System_Collections_Generic_List_Enumerator_T__o *)&v53,
              (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)itemList,
              (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
            v56 = *(System_Collections_Generic_List_Enumerator_T__o *)&v53.fields.currentCryptoKey;
            while ( 1 )
            {
              v40 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                      &v56,
                      (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
              if ( !v40 )
              {
                v54[0] = 342;
                v55 = 1;
                System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
                  &v56,
                  (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
                v55 = 0;
                return;
              }
              if ( v56.fields.current
                && (v42 = *(&WarehouseListViewItem_TypeInfo->_2.bitflags2 + 1),
                    *(&v56.fields.current->klass->_2.bitflags2 + 1) >= (unsigned int)v42) )
              {
                if ( (WarehouseListViewItem_c *)v56.fields.current->klass->_2.typeHierarchy[v42 - 1] == WarehouseListViewItem_TypeInfo )
                  current = (WarehouseListViewItem_o *)v56.fields.current;
                else
                  current = 0LL;
                if ( v19 )
                {
LABEL_47:
                  if ( !current )
                    sub_B2C434(v40, v41);
                  v44 = WarehouseListViewItem__get_UserSvtId(current, v41);
                  v45 = *(_OWORD *)&v19->fields.lookup;
                  v46 = v44;
                  *(_OWORD *)&v53.fields.currentCryptoKey = *(_OWORD *)&v19->fields.m_CachedPtr;
                  *(_OWORD *)&v53.fields.fakeValue = v45;
                  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
                  }
                  v52 = v53;
                  if ( v46 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v52, 0LL) )
                    WarehouseListViewItem__Modify(current, (UserServantEntity_o *)v19, v47);
                  goto LABEL_58;
                }
              }
              else
              {
                current = 0LL;
                if ( v19 )
                  goto LABEL_47;
              }
              if ( !current )
                sub_B2C434(v40, v41);
LABEL_58:
              viewObject = (UnityEngine_Object_o *)current->fields.viewObject;
              if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              }
              if ( UnityEngine_Object__op_Inequality(viewObject, 0LL, 0LL) )
              {
                v50 = current->fields.viewObject;
                if ( !v50 )
                  sub_B2C434(0LL, v49);
                ((void (__fastcall *)(struct ListViewObject_o *, WarehouseListViewItem_o *, Il2CppMethodPointer))v50->klass->vtable._5_SetItem.method)(
                  v50,
                  current,
                  v50->klass->vtable._6_SetItem.methodPtr);
              }
            }
          }
        }
      }
LABEL_73:
      sub_B2C434(Instance, v18);
    }
    Entity = 0LL;
    SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
    if ( userSvtId >= 1 )
    {
      Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_73;
      Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                    Instance,
                                    (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserServantMaster___);
      if ( !Instance )
        goto LABEL_73;
      Entity = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
                 (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)Instance,
                 userSvtId,
                 (const MethodInfo_24E42F8 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    }
    Instance = (DataManager_o *)this->fields.itemList;
    if ( !Instance )
      goto LABEL_73;
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v53,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)Instance,
      (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    v56.fields.current = (Il2CppObject *)v53.fields.fakeValue;
    *(_OWORD *)&v56.fields.list = *(_OWORD *)&v53.fields.currentCryptoKey;
    while ( 1 )
    {
      v22 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v56,
              (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
      if ( !v22 )
      {
        v54[0] = 342;
        v39 = ++v55;
        System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
          &v56,
          (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
        if ( v39 && v54[v39 - 1] == 342 )
          v55 = v39 - 1;
        return;
      }
      if ( v56.fields.current
        && (v24 = *(&WarehouseListViewItem_TypeInfo->_2.bitflags2 + 1),
            *(&v56.fields.current->klass->_2.bitflags2 + 1) >= (unsigned int)v24) )
      {
        if ( (WarehouseListViewItem_c *)v56.fields.current->klass->_2.typeHierarchy[v24 - 1] == WarehouseListViewItem_TypeInfo )
          v25 = (WarehouseListViewItem_o *)v56.fields.current;
        else
          v25 = 0LL;
        if ( Entity )
        {
LABEL_20:
          if ( !v25 )
            sub_B2C434(v22, v23);
          v26 = WarehouseListViewItem__get_UserSvtId(v25, v23);
          v27 = *(_OWORD *)&Entity->fields.id.fields.fakeValue;
          v28 = v26;
          *(_OWORD *)&v53.fields.currentCryptoKey = *(_OWORD *)&Entity->fields.id.fields.currentCryptoKey;
          *(_OWORD *)&v53.fields.fakeValue = v27;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          }
          v51 = v53;
          if ( v28 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v51, 0LL) )
            WarehouseListViewItem__Modify(v25, Entity, v29);
          goto LABEL_31;
        }
      }
      else
      {
        v25 = 0LL;
        if ( Entity )
          goto LABEL_20;
      }
      if ( !v25 )
        sub_B2C434(v22, v23);
LABEL_31:
      v30 = WarehouseListViewItem__get_UserSvtId(v25, v23);
      if ( !SelfUserGame )
        sub_B2C434(v30, v31);
      favoriteUserSvtId = SelfUserGame->fields.favoriteUserSvtId;
      v33 = v30;
      v34 = WarehouseListViewItem__get_UserSvtId(v25, v31);
      WarehouseListViewItem__Modify_26880604(
        v25,
        v33 == favoriteUserSvtId,
        v34 == SelfUserGame->fields.pushUserSvtId,
        v35);
      v36 = (UnityEngine_Object_o *)v25->fields.viewObject;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Inequality(v36, 0LL, 0LL) )
      {
        v38 = v25->fields.viewObject;
        if ( !v38 )
          sub_B2C434(0LL, v37);
        ((void (__fastcall *)(struct ListViewObject_o *, WarehouseListViewItem_o *, Il2CppMethodPointer))v38->klass->vtable._5_SetItem.method)(
          v38,
          v25,
          v38->klass->vtable._6_SetItem.methodPtr);
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
  __int64 Item; // x0
  const MethodInfo *v12; // x1
  struct WarehouseListManager_o *parentManager; // x8
  struct WarehouseListViewManager_o *baseListViewManager; // x9
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x21
  int size; // w22
  unsigned int v17; // w23
  WarehouseListViewItem_o *v18; // x21
  __int64 v19; // x9
  int64_t UserSvtId; // x0
  int64_t v21; // x0
  struct WarehouseListManager_o *v22; // x8
  struct WarehouseListViewManager_o *v23; // x9
  WarehouseListViewManager_o *v24; // x0
  const MethodInfo *v25; // x1

  if ( (byte_41889A2 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_long__int__ContainsKey__, selectServantIdDic);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_long__int__get_Count__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_long__int__get_Item__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v8);
    sub_B2C35C(&WarehouseListViewItem_TypeInfo, v9);
    byte_41889A2 = 1;
  }
  if ( selectServantIdDic
    && System_Collections_Generic_Dictionary_long__int___get_Count(
         selectServantIdDic,
         (const MethodInfo_2E51524 *)Method_System_Collections_Generic_Dictionary_long__int__get_Count__) )
  {
    WarehouseListViewManager__ReleaseAll(this, v10);
    parentManager = this->fields.parentManager;
    if ( !parentManager
      || (baseListViewManager = parentManager->fields.baseListViewManager) == 0LL
      || (parentManager->fields.totalSum = baseListViewManager->fields.selectSum,
          (itemList = this->fields.itemList) == 0LL) )
    {
LABEL_21:
      sub_B2C434(Item, v12);
    }
    size = itemList->fields._size;
    if ( size >= 1 )
    {
      v17 = 0;
      while ( 1 )
      {
        if ( itemList->fields._size <= v17 )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
        v18 = (WarehouseListViewItem_o *)itemList->fields._items->m_Items[v17];
        if ( !v18 )
          goto LABEL_21;
        v19 = *(&WarehouseListViewItem_TypeInfo->_2.bitflags2 + 1);
        if ( *(&v18->klass->_2.bitflags2 + 1) < (unsigned int)v19
          || (WarehouseListViewItem_c *)v18->klass->_2.typeHierarchy[v19 - 1] != WarehouseListViewItem_TypeInfo )
        {
          break;
        }
        UserSvtId = WarehouseListViewItem__get_UserSvtId(v18, (const MethodInfo *)WarehouseListViewItem_TypeInfo);
        Item = System_Collections_Generic_Dictionary_long__int___ContainsKey(
                 selectServantIdDic,
                 UserSvtId,
                 (const MethodInfo_2E51B9C *)Method_System_Collections_Generic_Dictionary_long__int__ContainsKey__);
        if ( (Item & 1) != 0 )
        {
          v21 = WarehouseListViewItem__get_UserSvtId(v18, v12);
          Item = System_Collections_Generic_Dictionary_long__int___get_Item(
                   selectServantIdDic,
                   v21,
                   (const MethodInfo_2E51864 *)Method_System_Collections_Generic_Dictionary_long__int__get_Item__);
          v18->fields.selectNum = Item;
          v22 = this->fields.parentManager;
          ++this->fields.selectSum;
          if ( !v22 )
            goto LABEL_21;
          v23 = v22->fields.baseListViewManager;
          if ( !v23 )
            goto LABEL_21;
          v22->fields.totalSum = v23->fields.selectSum;
        }
        if ( (int)++v17 >= size )
          return;
        itemList = this->fields.itemList;
        if ( !itemList )
          goto LABEL_21;
      }
      v24 = (WarehouseListViewManager_o *)sub_B2C728(v18);
      WarehouseListViewManager__IsDragStart(v24, v25);
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

  if ( (byte_4188992 & 1) == 0 )
  {
    sub_B2C35C(&SoundManager_TypeInfo, method);
    byte_4188992 = 1;
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
      sub_B2C434(0LL, v3);
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  WebViewManager_o *Instance; // x0
  ListViewSort_o *sort; // x20
  CommonUI_o *v8; // x21
  ServantFilterSelectMenu_CallbackFunc_o *v9; // x22
  __int64 v10; // x0
  __int64 v11; // x1
  CommonUI_o *v12; // x0
  int32_t v13; // w1
  WebViewManager_o *v14; // x0
  ListViewSort_o *v15; // x20
  CommonUI_o *v16; // x21
  ServantFilterSelectMenu_CallbackFunc_o *v17; // x22
  WebViewManager_o *v18; // x0
  CommonUI_o *v19; // x21

  if ( (byte_418899A & 1) == 0 )
  {
    sub_B2C35C(&ServantFilterSelectMenu_CallbackFunc_TypeInfo, method);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v3);
    sub_B2C35C(&SoundManager_TypeInfo, v4);
    sub_B2C35C(&Method_WarehouseListViewManager_EndSelectFilterKind__, v5);
    byte_418899A = 1;
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
        Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        sort = this->fields.sort;
        v8 = (CommonUI_o *)Instance;
        v9 = (ServantFilterSelectMenu_CallbackFunc_o *)sub_B2C42C(ServantFilterSelectMenu_CallbackFunc_TypeInfo);
        ServantFilterSelectMenu_CallbackFunc___ctor(
          v9,
          (Il2CppObject *)this,
          Method_WarehouseListViewManager_EndSelectFilterKind__,
          0LL);
        if ( !v8 )
          goto LABEL_16;
        v12 = v8;
        v13 = 0;
        goto LABEL_15;
      case 1:
      case 3:
        v14 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        v15 = this->fields.sort;
        v16 = (CommonUI_o *)v14;
        v17 = (ServantFilterSelectMenu_CallbackFunc_o *)sub_B2C42C(ServantFilterSelectMenu_CallbackFunc_TypeInfo);
        ServantFilterSelectMenu_CallbackFunc___ctor(
          v17,
          (Il2CppObject *)this,
          Method_WarehouseListViewManager_EndSelectFilterKind__,
          0LL);
        if ( !v16 )
          goto LABEL_16;
        CommonUI__OpenServantFilterSelectMenu_17978356(v16, 5, v15, (ListViewManager_o *)this, v17, -1, 0LL);
        break;
      default:
        v18 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        sort = this->fields.sort;
        v19 = (CommonUI_o *)v18;
        v9 = (ServantFilterSelectMenu_CallbackFunc_o *)sub_B2C42C(ServantFilterSelectMenu_CallbackFunc_TypeInfo);
        ServantFilterSelectMenu_CallbackFunc___ctor(
          v9,
          (Il2CppObject *)this,
          Method_WarehouseListViewManager_EndSelectFilterKind__,
          0LL);
        if ( !v19 )
LABEL_16:
          sub_B2C434(v10, v11);
        v13 = 6;
        v12 = v19;
LABEL_15:
        CommonUI__OpenServantFilterSelectMenu(v12, v13, sort, v9, -1, 0LL);
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

  if ( (byte_4188991 & 1) == 0 )
  {
    sub_B2C35C(&WarehouseListViewItem_TypeInfo, item);
    byte_4188991 = 1;
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

  if ( (byte_418899D & 1) == 0 )
  {
    sub_B2C35C(&SoundManager_TypeInfo, method);
    byte_418899D = 1;
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
      sub_B2C434(v3, v4);
    sort->fields.isAscendingOrder ^= 1u;
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
  }
}


void __fastcall WarehouseListViewManager__OnClickSortKind(WarehouseListViewManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  unsigned int kind; // w23
  WebViewManager_o *Instance; // x0
  ListViewSort_o *sort; // x20
  CommonUI_o *v9; // x21
  ServantSortSelectMenu_CallbackFunc_o *v10; // x22
  __int64 v11; // x0
  __int64 v12; // x1
  int32_t v13; // w1

  if ( (byte_4188998 & 1) == 0 )
  {
    sub_B2C35C(&ServantSortSelectMenu_CallbackFunc_TypeInfo, method);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v3);
    sub_B2C35C(&SoundManager_TypeInfo, v4);
    sub_B2C35C(&Method_WarehouseListViewManager_EndSelectSortKind__, v5);
    byte_4188998 = 1;
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
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sort = this->fields.sort;
    v9 = (CommonUI_o *)Instance;
    v10 = (ServantSortSelectMenu_CallbackFunc_o *)sub_B2C42C(ServantSortSelectMenu_CallbackFunc_TypeInfo);
    ServantSortSelectMenu_CallbackFunc___ctor(
      v10,
      (Il2CppObject *)this,
      Method_WarehouseListViewManager_EndSelectSortKind__,
      0LL);
    if ( !v9 )
      sub_B2C434(v11, v12);
    if ( kind < 4 )
      v13 = kind + 1;
    else
      v13 = 3;
    CommonUI__OpenServantSortSelectMenu(v9, v13, sort, 1, v10, 0LL);
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

  if ( (byte_4188997 & 1) == 0 )
  {
    sub_B2C35C(&WarehouseListViewItem_TypeInfo, item);
    byte_4188997 = 1;
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

  if ( (byte_418898E & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, method);
    byte_418898E = 1;
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
          sub_B2C434(v8, v7);
        }
        UIScrollView__UpdatePosition(v8, 0LL);
      }
    }
  }
}


void __fastcall WarehouseListViewManager__RefrashListDisp(WarehouseListViewManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  void *parentManager; // x0
  const MethodInfo *v5; // x1
  int v6; // w21
  void *v7; // x20
  __int64 v8; // x22
  unsigned int v9; // w8

  if ( (byte_4188984 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_WarehouseListViewObject__get_Count__, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_WarehouseListViewObject__get_Item__, v3);
    byte_4188984 = 1;
  }
  parentManager = this->fields.parentManager;
  if ( !parentManager )
    goto LABEL_13;
  WarehouseListManager__RefrashListDisp((WarehouseListManager_o *)parentManager, method);
  parentManager = WarehouseListViewManager__get_ObjectList(this, v5);
  if ( !parentManager )
    goto LABEL_13;
  v6 = *((_DWORD *)parentManager + 6);
  v7 = parentManager;
  if ( v6 >= 1 )
  {
    v8 = 0LL;
    v9 = *((_DWORD *)parentManager + 6);
    while ( 1 )
    {
      if ( v9 <= (unsigned int)v8 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
      parentManager = *(void **)(*((_QWORD *)v7 + 2) + 8 * v8 + 32);
      if ( !parentManager )
        break;
      (*(void (__fastcall **)(void *, bool, _QWORD))(*(_QWORD *)parentManager + 456LL))(
        parentManager,
        this->fields.isInput,
        *(_QWORD *)(*(_QWORD *)parentManager + 464LL));
      if ( (int)v8 + 1 >= v6 )
        return;
      v9 = *((_DWORD *)v7 + 6);
      ++v8;
    }
LABEL_13:
    sub_B2C434(parentManager, method);
  }
}


void __fastcall WarehouseListViewManager__ReleaseAll(WarehouseListViewManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x0
  __int64 v8; // x0
  __int64 v9; // x1
  Il2CppObject *current; // x20
  __int64 v11; // x9
  const MethodInfo *v12; // x3
  const MethodInfo *v13; // x1
  System_Collections_Generic_List_Enumerator_T__o v14; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4188990 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v3);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v4);
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v5);
    sub_B2C35C(&WarehouseListViewItem_TypeInfo, v6);
    byte_4188990 = 1;
  }
  memset(&v14, 0, sizeof(v14));
  itemList = this->fields.itemList;
  this->fields.sellEnableRestCnt = 0;
  if ( !itemList )
    sub_B2C434(0LL, method);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v14,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)itemList,
    (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  while ( 1 )
  {
    v8 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
           &v14,
           (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    if ( (v8 & 1) == 0 )
      break;
    current = v14.fields.current;
    if ( !v14.fields.current )
      goto LABEL_12;
    v11 = *(&WarehouseListViewItem_TypeInfo->_2.bitflags2 + 1);
    if ( *(&v14.fields.current->klass->_2.bitflags2 + 1) < (unsigned int)v11
      || (WarehouseListViewItem_c *)v14.fields.current->klass->_2.typeHierarchy[v11 - 1] != WarehouseListViewItem_TypeInfo )
    {
      v8 = sub_B2C728(v14.fields.current);
LABEL_12:
      sub_B2C434(v8, v9);
    }
    ListViewItem__set_IsSelect((ListViewItem_o *)v14.fields.current, 0, 0LL);
    WarehouseListViewManager__ChangeSellEnableRestCnt(this, 1, (WarehouseListViewItem_o *)current, v12);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v14,
    (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
  this->fields.selectSum = 0;
  WarehouseListViewManager__RefrashListDisp(this, v13);
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
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *ObjectList; // x0
  __int64 v15; // x1
  int32_t size; // w8
  Il2CppObject *current; // x21
  System_Action_o *v18; // x22
  __int64 v19; // x0
  __int64 v20; // x1
  System_Collections_Generic_List_Enumerator_T__o v21; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_418898C & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, *(_QWORD *)&mode);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_WarehouseListViewObject__Dispose__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_WarehouseListViewObject__MoveNext__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_WarehouseListViewObject__get_Current__, v9);
    sub_B2C35C(&Method_System_Collections_Generic_List_WarehouseListViewObject__GetEnumerator__, v10);
    sub_B2C35C(&Method_System_Collections_Generic_List_WarehouseListViewObject__get_Count__, v11);
    sub_B2C35C(&Method_WarehouseListViewManager_OnMoveEnd__, v12);
    sub_B2C35C(&StringLiteral_10036/*"OnMoveEnd"*/, v13);
    byte_418898C = 1;
  }
  memset(&v21, 0, sizeof(v21));
  ObjectList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)WarehouseListViewManager__get_ObjectList(
                                                                                                this,
                                                                                                *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_B2C434(0LL, v15);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10036/*"OnMoveEnd"*/,
      delay,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v21,
      ObjectList,
      (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_WarehouseListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v21,
              (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_WarehouseListViewObject__MoveNext__) )
    {
      current = v21.fields.current;
      v18 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
      System_Action___ctor(v18, (Il2CppObject *)this, Method_WarehouseListViewManager_OnMoveEnd__, 0LL);
      if ( !current )
        sub_B2C434(v19, v20);
      WarehouseListViewObject__Init_24486252((WarehouseListViewObject_o *)current, mode, v18, delay, 0LL);
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v21,
      (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_WarehouseListViewObject__Dispose__);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarehouseListViewManager__RequestListObject_26893276(
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
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *ObjectList; // x0
  __int64 v13; // x1
  int32_t size; // w8
  Il2CppObject *current; // x21
  System_Action_o *v16; // x22
  __int64 v17; // x0
  __int64 v18; // x1
  System_Collections_Generic_List_Enumerator_T__o v19; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_418898D & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, *(_QWORD *)&mode);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_WarehouseListViewObject__Dispose__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_WarehouseListViewObject__MoveNext__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_WarehouseListViewObject__get_Current__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_WarehouseListViewObject__GetEnumerator__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_WarehouseListViewObject__get_Count__, v9);
    sub_B2C35C(&Method_WarehouseListViewManager_OnMoveEnd__, v10);
    sub_B2C35C(&StringLiteral_10036/*"OnMoveEnd"*/, v11);
    byte_418898D = 1;
  }
  memset(&v19, 0, sizeof(v19));
  ObjectList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)WarehouseListViewManager__get_ObjectList(
                                                                                                this,
                                                                                                *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_B2C434(0LL, v13);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10036/*"OnMoveEnd"*/,
      0.0,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v19,
      ObjectList,
      (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_WarehouseListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v19,
              (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_WarehouseListViewObject__MoveNext__) )
    {
      current = v19.fields.current;
      v16 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
      System_Action___ctor(v16, (Il2CppObject *)this, Method_WarehouseListViewManager_OnMoveEnd__, 0LL);
      if ( !current )
        sub_B2C434(v17, v18);
      WarehouseListViewObject__Init_24486316((WarehouseListViewObject_o *)current, mode, v16, 0LL);
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v19,
      (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_WarehouseListViewObject__Dispose__);
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

  if ( (byte_4188985 & 1) == 0 )
  {
    sub_B2C35C(&WarehouseListViewManager_TypeInfo, method);
    byte_4188985 = 1;
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
    sub_B2C434(v4, v5);
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
  SoundManager_c *v8; // x0
  const MethodInfo *v9; // x4
  struct WarehouseListManager_o *parentManager; // x8
  struct WarehouseListViewManager_o *baseListViewManager; // x9
  UILabel_o *selectDoneLabel; // x21
  struct WarehouseListManager_o *v13; // x8
  System_String_o *v14; // x22
  struct WarehouseListManager_o *v15; // x8
  Il2CppObject *v16; // x23
  Il2CppObject *v17; // x0
  const MethodInfo *v18; // x3
  const MethodInfo *v19; // x2
  struct WarehouseListManager_o *v20; // x8
  const MethodInfo *v21; // x1
  struct WarehouseListManager_o *v22; // x8
  struct WarehouseListManager_o *v23; // x8
  struct WarehouseListViewManager_o *v24; // x9
  UILabel_o *v25; // x21
  struct WarehouseListManager_o *v26; // x8
  System_String_o *v27; // x22
  struct WarehouseListManager_o *v28; // x8
  Il2CppObject *v29; // x23
  Il2CppObject *v30; // x0
  const MethodInfo *v31; // x3
  int32_t sendMax; // [xsp+8h] [xbp-38h] BYREF
  int32_t totalSum; // [xsp+Ch] [xbp-34h] BYREF

  v4 = this;
  if ( (byte_4188993 & 1) == 0 )
  {
    sub_B2C35C(&int_TypeInfo, selectItem);
    sub_B2C35C(&LocalizationManager_TypeInfo, v5);
    sub_B2C35C(&SoundManager_TypeInfo, v6);
    this = (WarehouseListViewManager_o *)sub_B2C35C(&StringLiteral_12469/*"SUM_INFO"*/, v7);
    byte_4188993 = 1;
  }
  if ( !selectItem )
    goto LABEL_42;
  if ( WarehouseListViewItem__get_IsCanNotSelect(selectItem, (const MethodInfo *)selectItem) )
  {
    v8 = SoundManager_TypeInfo;
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
        this = (WarehouseListViewManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12469/*"SUM_INFO"*/, 0LL);
        v13 = v4->fields.parentManager;
        if ( v13 )
        {
          v14 = (System_String_o *)this;
          totalSum = v13->fields.totalSum;
          this = (WarehouseListViewManager_o *)j_il2cpp_value_box_0(int_TypeInfo, &totalSum);
          v15 = v4->fields.parentManager;
          if ( v15 )
          {
            v16 = (Il2CppObject *)this;
            sendMax = v15->fields.sendMax;
            v17 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &sendMax);
            this = (WarehouseListViewManager_o *)System_String__Format_44301068(v14, v16, v17, 0LL);
            if ( selectDoneLabel )
            {
              UILabel__set_text(selectDoneLabel, (System_String_o *)this, 0LL);
              WarehouseListViewManager__ChangeSellEnableRestCnt(v4, 1, selectItem, v18);
              v20 = v4->fields.parentManager;
              if ( v20 )
              {
                this = v20->fields.baseListViewManager;
                if ( this )
                {
                  WarehouseListViewManager__DecrementNumber(this, selectItem->fields.selectNum, v19);
                  ListViewItem__set_IsSelect((ListViewItem_o *)selectItem, 0, 0LL);
LABEL_37:
                  WarehouseListViewManager__RefrashListDisp(v4, v21);
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
  if ( WarehouseListViewManager__IsSelectEnable(v4, selectItem, 0, 0, v9) )
  {
    if ( (WORD1(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    v22 = v4->fields.parentManager;
    if ( v22 )
    {
      selectItem->fields.selectNum = v22->fields.totalSum;
      v23 = v4->fields.parentManager;
      ++v4->fields.selectSum;
      if ( v23 )
      {
        v24 = v23->fields.baseListViewManager;
        if ( v24 )
        {
          v23->fields.totalSum = v24->fields.selectSum;
          v25 = v4->fields.selectDoneLabel;
          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          this = (WarehouseListViewManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12469/*"SUM_INFO"*/, 0LL);
          v26 = v4->fields.parentManager;
          if ( v26 )
          {
            v27 = (System_String_o *)this;
            totalSum = v26->fields.totalSum;
            this = (WarehouseListViewManager_o *)j_il2cpp_value_box_0(int_TypeInfo, &totalSum);
            v28 = v4->fields.parentManager;
            if ( v28 )
            {
              v29 = (Il2CppObject *)this;
              sendMax = v28->fields.sendMax;
              v30 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &sendMax);
              this = (WarehouseListViewManager_o *)System_String__Format_44301068(v27, v29, v30, 0LL);
              if ( v25 )
              {
                UILabel__set_text(v25, (System_String_o *)this, 0LL);
                WarehouseListViewManager__ChangeSellEnableRestCnt(v4, 0, selectItem, v31);
                goto LABEL_37;
              }
            }
          }
        }
      }
    }
LABEL_42:
    sub_B2C434(this, selectItem);
  }
  if ( (WORD1(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) == 0
    || SoundManager_TypeInfo->_2.cctor_finished )
  {
    goto LABEL_40;
  }
  v8 = SoundManager_TypeInfo;
LABEL_7:
  j_il2cpp_runtime_class_init_0(v8);
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

  if ( (byte_4188996 & 1) == 0 )
  {
    sub_B2C35C(&SoundManager_TypeInfo, selectItem);
    byte_4188996 = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(0, 0LL);
  if ( !selectItem )
    sub_B2C434(v5, v6);
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

  if ( (byte_4188995 & 1) == 0 )
  {
    sub_B2C35C(&SoundManager_TypeInfo, selectItem);
    byte_4188995 = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(11, 0LL);
  if ( !selectItem )
    sub_B2C434(v5, v6);
  selectItem->fields.isSwapLock ^= 1u;
  WarehouseListViewManager__RefrashListDisp(this, v6);
}


void __fastcall WarehouseListViewManager__SetDragEnd(WarehouseListViewManager_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  const MethodInfo *v4; // x2
  int32_t dragStartIndex; // w20
  int32_t dragEndIndex; // w21

  if ( (byte_41889A6 & 1) == 0 )
  {
    sub_B2C35C(&SoundManager_TypeInfo, method);
    byte_41889A6 = 1;
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
  *(_OWORD *)&this->fields.dragSelectSum = xmmword_31A31B0;
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
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  struct System_Collections_Generic_List_ListViewItem__o *itemSortList; // x22
  ListViewItem_o *v11; // x19
  WarehouseListViewItem_c *v12; // x1
  __int64 v13; // x9
  int monitor_high; // w8
  bool v15; // w21
  _BOOL4 v16; // w21
  bool IsSelect; // w0
  const MethodInfo *v18; // x4
  int v19; // w8
  UnityEngine_Object_o *viewObject; // x20
  __int64 v21; // x9
  bool result; // w0
  WarehouseListViewManager_o *v23; // x0
  int32_t v24; // w1
  bool v25; // w2
  const MethodInfo *v26; // x3

  v6 = this;
  if ( (byte_41889A4 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, *(_QWORD *)&index);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v7);
    sub_B2C35C(&WarehouseListViewItem_TypeInfo, v8);
    this = (WarehouseListViewManager_o *)sub_B2C35C(&WarehouseListViewObject_TypeInfo, v9);
    byte_41889A4 = 1;
  }
  itemSortList = v6->fields.itemSortList;
  if ( !itemSortList )
    goto LABEL_49;
  if ( itemSortList->fields._size <= (unsigned int)index )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
  v11 = itemSortList->fields._items->m_Items[index];
  if ( !v11 )
    goto LABEL_49;
  v12 = WarehouseListViewItem_TypeInfo;
  v13 = *(&WarehouseListViewItem_TypeInfo->_2.bitflags2 + 1);
  if ( *(&v11->klass->_2.bitflags2 + 1) < (unsigned int)v13
    || (WarehouseListViewItem_c *)v11->klass->_2.typeHierarchy[v13 - 1] != WarehouseListViewItem_TypeInfo )
  {
    this = (WarehouseListViewManager_o *)v11;
    goto LABEL_51;
  }
  monitor_high = HIDWORD(v11[2].monitor);
  if ( !isDragSelect )
  {
    if ( (monitor_high & 0x80000000) == 0 )
    {
      if ( !ListViewItem__get_IsSelect(v11, 0LL) && SHIDWORD(v11[2].monitor) >= 1 )
      {
        if ( BYTE6(v11[1].fields.sortValue1) )
          --v6->fields.dragSelectFriendShipSum;
        else
          --v6->fields.dragSelectSum;
        if ( !v6->fields.kind )
        {
          this = (WarehouseListViewManager_o *)v11[1].monitor;
          if ( !this )
            goto LABEL_49;
          if ( ServantEntity__get_IsOrganization((ServantEntity_o *)this, 0LL) && !HIDWORD(v11[1].fields.sortValue2B) )
            --v6->fields.dragServantSelectSum;
        }
      }
      v15 = 0;
      v19 = -1;
      goto LABEL_29;
    }
    goto LABEL_31;
  }
  if ( (monitor_high & 0x80000000) == 0 )
    goto LABEL_31;
  HIDWORD(v11[2].monitor) = 0;
  v15 = 0;
  if ( !WarehouseListViewItem__get_IsCanNotSelect((WarehouseListViewItem_o *)v11, (const MethodInfo *)v12) )
  {
    v16 = v6->fields.isDragSelect;
    IsSelect = ListViewItem__get_IsSelect(v11, 0LL);
    if ( v16 )
    {
      if ( !IsSelect )
      {
        if ( !WarehouseListViewManager__IsSelectEnable(
                v6,
                (WarehouseListViewItem_o *)v11,
                v6->fields.dragSelectSum,
                v6->fields.dragServantSelectSum,
                v18) )
        {
          v15 = 1;
          goto LABEL_32;
        }
        if ( BYTE6(v11[1].fields.sortValue1) )
          ++v6->fields.dragSelectFriendShipSum;
        else
          ++v6->fields.dragSelectSum;
        if ( !v6->fields.kind )
        {
          this = (WarehouseListViewManager_o *)v11[1].monitor;
          if ( !this )
            goto LABEL_49;
          if ( ServantEntity__get_IsOrganization((ServantEntity_o *)this, 0LL) && !HIDWORD(v11[1].fields.sortValue2B) )
            ++v6->fields.dragServantSelectSum;
        }
        goto LABEL_48;
      }
    }
    else if ( IsSelect )
    {
LABEL_48:
      v15 = 0;
      v19 = 1;
LABEL_29:
      HIDWORD(v11[2].monitor) = v19;
      goto LABEL_32;
    }
LABEL_31:
    v15 = 0;
  }
LABEL_32:
  viewObject = (UnityEngine_Object_o *)v11->fields.viewObject;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Inequality(viewObject, 0LL, 0LL) )
    return v15;
  this = (WarehouseListViewManager_o *)v11->fields.viewObject;
  if ( !this )
LABEL_49:
    sub_B2C434(this, *(_QWORD *)&index);
  v21 = *(&WarehouseListViewObject_TypeInfo->_2.bitflags2 + 1);
  if ( *(&this->klass->_2.bitflags2 + 1) >= (unsigned int)v21
    && (WarehouseListViewObject_c *)this->klass->_2.typeHierarchy[v21 - 1] == WarehouseListViewObject_TypeInfo )
  {
    WarehouseListViewObject__SetupDisp((WarehouseListViewObject_o *)this, 0LL);
    return v15;
  }
LABEL_51:
  v23 = (WarehouseListViewManager_o *)sub_B2C728(this);
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
  int32_t v5; // w21
  WarehouseListViewManager_o *v6; // x19
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  int32_t dragStartIndex; // w8
  int32_t dragEndIndex; // w9
  int v12; // w25
  int v13; // w26
  int32_t v14; // w23
  int32_t v15; // w24
  int32_t v16; // w22
  struct WarehouseListManager_o *parentManager; // x8
  int v18; // w27
  struct System_Collections_Generic_List_ListViewItem__o *itemSortList; // x20
  WarehouseListViewManager_o *v20; // x20
  __int64 v21; // x9
  UnityEngine_Object_o *clipRange; // x21
  __int64 v23; // x9
  WarehouseListViewManager_o *v24; // x0
  int32_t v25; // w1
  bool v26; // w2
  const MethodInfo *v27; // x3

  v5 = startIndex;
  v6 = this;
  if ( (byte_41889A3 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, *(_QWORD *)&startIndex);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v7);
    sub_B2C35C(&WarehouseListViewItem_TypeInfo, v8);
    this = (WarehouseListViewManager_o *)sub_B2C35C(&WarehouseListViewObject_TypeInfo, v9);
    byte_41889A3 = 1;
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
  v6->fields.dragStartIndex = v5;
  v6->fields.dragEndIndex = endIndex;
  if ( (v5 & 0x80000000) != 0 )
  {
    v14 = -1;
    v15 = -1;
    if ( (v13 & 0x80000000) != 0 )
      goto LABEL_28;
  }
  else
  {
    if ( v5 <= endIndex )
      v14 = endIndex;
    else
      v14 = v5;
    if ( v5 <= endIndex )
      v15 = v5;
    else
      v15 = endIndex;
    if ( (v13 & 0x80000000) != 0 )
      goto LABEL_28;
  }
  if ( v13 <= v12 )
  {
    v16 = v13;
    do
    {
      if ( v16 > v14 || (v15 & 0x80000000) != 0 || v16 < v15 )
        this = (WarehouseListViewManager_o *)WarehouseListViewManager__SetDragSelect(v6, v16, 0, method);
      ++v16;
    }
    while ( v16 <= v12 );
  }
LABEL_28:
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
    if ( (v15 & 0x80000000) == 0 && v6->fields.isDragSelect )
    {
      parentManager = v6->fields.parentManager;
      if ( !parentManager )
LABEL_63:
        sub_B2C434(this, *(_QWORD *)&startIndex);
      if ( v15 <= v14 )
      {
        v18 = parentManager->fields.totalSum + 1;
        while ( 1 )
        {
          itemSortList = v6->fields.itemSortList;
          if ( !itemSortList )
            goto LABEL_63;
          if ( itemSortList->fields._size <= (unsigned int)v15 )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
          v20 = (WarehouseListViewManager_o *)itemSortList->fields._items->m_Items[v15];
          if ( !v20 )
            goto LABEL_63;
          *(_QWORD *)&startIndex = WarehouseListViewItem_TypeInfo;
          v21 = *(&WarehouseListViewItem_TypeInfo->_2.bitflags2 + 1);
          if ( *(&v20->klass->_2.bitflags2 + 1) < (unsigned int)v21
            || (WarehouseListViewItem_c *)v20->klass->_2.typeHierarchy[v21 - 1] != WarehouseListViewItem_TypeInfo )
          {
            break;
          }
          if ( SHIDWORD(v20->fields.bottomItem) >= 1 )
          {
            HIDWORD(v20->fields.bottomItem) = v18;
            clipRange = (UnityEngine_Object_o *)v20->fields.clipRange;
            ++v18;
            if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            }
            this = (WarehouseListViewManager_o *)UnityEngine_Object__op_Inequality(clipRange, 0LL, 0LL);
            if ( ((unsigned __int8)this & 1) != 0 )
            {
              this = (WarehouseListViewManager_o *)v20->fields.clipRange;
              if ( !this )
                goto LABEL_63;
              v23 = *(&WarehouseListViewObject_TypeInfo->_2.bitflags2 + 1);
              if ( *(&this->klass->_2.bitflags2 + 1) < (unsigned int)v23
                || (WarehouseListViewObject_c *)this->klass->_2.typeHierarchy[v23 - 1] != WarehouseListViewObject_TypeInfo )
              {
                goto LABEL_65;
              }
              WarehouseListViewObject__SetupDisp((WarehouseListViewObject_o *)this, 0LL);
            }
          }
          if ( ++v15 > v14 )
            return;
        }
        this = v20;
LABEL_65:
        v24 = (WarehouseListViewManager_o *)sub_B2C728(this);
        WarehouseListViewManager__SetDragSelect(v24, v25, v26, v27);
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
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  struct System_Collections_Generic_List_ListViewItem__o *itemSortList; // x25
  int size; // w21
  int v12; // w22
  __int64 v13; // x9
  UnityEngine_Object_o *scrollView; // x20

  v5 = startIndex;
  v6 = this;
  if ( (byte_41889A5 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, *(_QWORD *)&startIndex);
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v7);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v8);
    this = (WarehouseListViewManager_o *)sub_B2C35C(&WarehouseListViewItem_TypeInfo, v9);
    byte_41889A5 = 1;
  }
  *(_OWORD *)&v6->fields.dragSelectSum = xmmword_31A31B0;
  itemSortList = v6->fields.itemSortList;
  v6->fields.isDragSelect = isDragSelect;
  v6->fields.dragSelectFriendShipSum = 0;
  if ( !itemSortList )
    goto LABEL_22;
  size = itemSortList->fields._size;
  if ( size >= 1 )
  {
    v12 = 0;
    while ( 1 )
    {
      if ( itemSortList->fields._size <= (unsigned int)v12 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
      this = (WarehouseListViewManager_o *)itemSortList->fields._items->m_Items[v12];
      if ( !this )
        goto LABEL_22;
      *(_QWORD *)&startIndex = WarehouseListViewItem_TypeInfo;
      v13 = *(&WarehouseListViewItem_TypeInfo->_2.bitflags2 + 1);
      if ( *(&this->klass->_2.bitflags2 + 1) < (unsigned int)v13
        || (WarehouseListViewItem_c *)this->klass->_2.typeHierarchy[v13 - 1] != WarehouseListViewItem_TypeInfo )
      {
        break;
      }
      ++v12;
      HIDWORD(this->fields.bottomItem) = -1;
      if ( v12 >= size )
        goto LABEL_14;
      itemSortList = v6->fields.itemSortList;
      if ( !itemSortList )
        goto LABEL_22;
    }
    this = (WarehouseListViewManager_o *)sub_B2C728(this);
LABEL_22:
    sub_B2C434(this, *(_QWORD *)&startIndex);
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
  __int64 v3; // x1
  ListViewSort_o *sort; // x0
  UISprite_o *filterSprite; // x19
  System_String_o **v6; // x8

  if ( (byte_418899C & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_16993/*"btn_filter_on"*/, method);
    sub_B2C35C(&StringLiteral_16992/*"btn_filter"*/, v3);
    byte_418899C = 1;
  }
  sort = this->fields.sort;
  if ( !sort
    || (filterSprite = this->fields.filterSprite,
        sort = (ListViewSort_o *)ListViewSort__CheckFilterDefaultAll(sort, -1, 0LL),
        !filterSprite) )
  {
    sub_B2C434(sort, method);
  }
  v6 = (System_String_o **)&StringLiteral_16992/*"btn_filter"*/;
  if ( ((unsigned __int8)sort & 1) == 0 )
    v6 = (System_String_o **)&StringLiteral_16993/*"btn_filter_on"*/;
  UISprite__set_spriteName(filterSprite, *v6, 0LL);
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
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.callbackFunc,
    (System_Int32_array **)callback,
    (System_String_array **)callback,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  WarehouseListViewManager__SetMode_26891744(this, mode, v10);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarehouseListViewManager__SetMode_26891744(
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
  __int64 v12; // x1
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x0
  _BOOL8 v14; // x0
  __int64 v15; // x1
  WarehouseListViewItem_o *current; // x20
  __int64 v17; // x9
  const MethodInfo *v18; // x1
  _BOOL8 v19; // x0
  __int64 v20; // x1
  struct WarehouseListManager_o *v21; // x8
  struct WarehouseListViewManager_o *v22; // x9
  UILabel_o *v23; // x21
  System_String_o *v24; // x0
  __int64 v25; // x1
  struct WarehouseListManager_o *v26; // x8
  System_String_o *v27; // x22
  __int64 v28; // x0
  __int64 v29; // x1
  struct WarehouseListManager_o *v30; // x8
  Il2CppObject *v31; // x23
  Il2CppObject *v32; // x2
  System_String_o *v33; // x0
  __int64 v34; // x0
  __int64 v35; // x1
  const MethodInfo *v36; // x2
  struct WarehouseListManager_o *v37; // x8
  WarehouseListViewManager_o *v38; // x0
  LocalizationManager_c **v39; // x21
  char v40; // w24
  __int64 v41; // x9
  const MethodInfo *v42; // x1
  _BOOL8 CanNotSelect; // x0
  __int64 v44; // x1
  struct WarehouseListManager_o *parentManager; // x8
  struct WarehouseListViewManager_o *baseListViewManager; // x9
  LocalizationManager_c **v47; // x28
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
  Il2CppObject *v58; // x2
  System_String_o *v59; // x0
  __int64 v60; // x0
  __int64 v61; // x1
  const MethodInfo *v62; // x2
  struct WarehouseListManager_o *v63; // x8
  WarehouseListViewManager_o *v64; // x0
  __int64 v65; // x0
  __int64 v66; // x1
  const MethodInfo *v67; // x1
  const MethodInfo *v68; // x2
  int32_t v69; // w1
  const MethodInfo *v70; // x1
  int32_t sendMax; // [xsp+4h] [xbp-8Ch] BYREF
  System_Collections_Generic_List_Enumerator_T__o v72; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v73; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_418898B & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__, *(_QWORD *)&mode);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v6);
    sub_B2C35C(&int_TypeInfo, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v8);
    sub_B2C35C(&LocalizationManager_TypeInfo, v9);
    sub_B2C35C(&WarehouseListViewItem_TypeInfo, v10);
    sub_B2C35C(&StringLiteral_12469/*"SUM_INFO"*/, v11);
    byte_418898B = 1;
  }
  memset(&v73, 0, sizeof(v73));
  this->fields.initMode = mode;
  this->fields.callbackCount = ListViewManager__get_ObjectSum((ListViewManager_o *)this, 0LL);
  ListViewManager__set_IsInput((ListViewManager_o *)this, mode == 2, 0LL);
  if ( (unsigned int)(mode - 1) < 2 )
  {
    itemList = this->fields.itemList;
    if ( itemList )
    {
      System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
        &v72,
        (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)itemList,
        (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
      v39 = &LocalizationManager_TypeInfo;
      v40 = 0;
      v73 = v72;
      while ( 1 )
      {
        v65 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                &v73,
                (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
        if ( (v65 & 1) == 0 )
          break;
        current = (WarehouseListViewItem_o *)v73.fields.current;
        if ( !v73.fields.current )
          goto LABEL_53;
        v41 = *(&WarehouseListViewItem_TypeInfo->_2.bitflags2 + 1);
        if ( *(&v73.fields.current->klass->_2.bitflags2 + 1) < (unsigned int)v41
          || (WarehouseListViewItem_c *)v73.fields.current->klass->_2.typeHierarchy[v41 - 1] != WarehouseListViewItem_TypeInfo )
        {
          sub_B2C728(v73.fields.current);
LABEL_52:
          v65 = sub_B2C728(current);
LABEL_53:
          sub_B2C434(v65, v66);
        }
        if ( ListViewItem__get_IsSelect((ListViewItem_o *)v73.fields.current, 0LL) )
        {
          CanNotSelect = WarehouseListViewItem__get_IsCanNotSelect(current, v42);
          if ( CanNotSelect )
          {
            parentManager = this->fields.parentManager;
            --this->fields.selectSum;
            if ( !parentManager )
              sub_B2C434(CanNotSelect, v44);
            baseListViewManager = parentManager->fields.baseListViewManager;
            if ( !baseListViewManager )
              sub_B2C434(CanNotSelect, v44);
            v47 = v39;
            parentManager->fields.totalSum = baseListViewManager->fields.selectSum;
            v48 = *v39;
            selectDoneLabel = this->fields.selectDoneLabel;
            if ( (BYTE3(v48->vtable._0_Equals.methodPtr) & 4) != 0 && !v48->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(v48);
            v50 = LocalizationManager__Get((System_String_o *)StringLiteral_12469/*"SUM_INFO"*/, 0LL);
            v52 = this->fields.parentManager;
            if ( !v52 )
              sub_B2C434(v50, v51);
            v53 = v50;
            LODWORD(v72.fields.list) = v52->fields.totalSum;
            v54 = j_il2cpp_value_box_0(int_TypeInfo, &v72);
            v56 = this->fields.parentManager;
            if ( !v56 )
              sub_B2C434(v54, v55);
            v57 = (Il2CppObject *)v54;
            sendMax = v56->fields.sendMax;
            v58 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &sendMax);
            v59 = System_String__Format_44301068(v53, v57, v58, 0LL);
            if ( !selectDoneLabel )
              sub_B2C434(v59, v59);
            UILabel__set_text(selectDoneLabel, v59, 0LL);
            v63 = this->fields.parentManager;
            if ( !v63 )
              sub_B2C434(v60, v61);
            v64 = v63->fields.baseListViewManager;
            if ( !v64 )
              sub_B2C434(0LL, v61);
            v39 = v47;
            WarehouseListViewManager__DecrementNumber(v64, current->fields.selectNum, v62);
            ListViewItem__set_IsSelect((ListViewItem_o *)current, 0, 0LL);
            v40 = 1;
          }
        }
      }
      System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
        &v73,
        (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
      if ( (v40 & 1) != 0 )
        WarehouseListViewManager__RefrashListDisp(this, v67);
      if ( this->fields.isInput )
        v69 = 3;
      else
        v69 = 2;
      goto LABEL_49;
    }
LABEL_69:
    sub_B2C434(itemList, v12);
  }
  if ( mode != 3 )
    return;
  itemList = this->fields.itemList;
  if ( !itemList )
    goto LABEL_69;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v72,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)itemList,
    (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  v73 = v72;
  while ( 1 )
  {
    v14 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v73,
            (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    if ( !v14 )
      break;
    current = (WarehouseListViewItem_o *)v73.fields.current;
    if ( !v73.fields.current )
      sub_B2C434(v14, v15);
    v17 = *(&WarehouseListViewItem_TypeInfo->_2.bitflags2 + 1);
    if ( *(&v73.fields.current->klass->_2.bitflags2 + 1) < (unsigned int)v17
      || (WarehouseListViewItem_c *)v73.fields.current->klass->_2.typeHierarchy[v17 - 1] != WarehouseListViewItem_TypeInfo )
    {
      goto LABEL_52;
    }
    if ( ListViewItem__get_IsSelect((ListViewItem_o *)v73.fields.current, 0LL) )
    {
      v19 = WarehouseListViewItem__get_IsCanNotSelect(current, v18);
      if ( v19 )
      {
        v21 = this->fields.parentManager;
        --this->fields.selectSum;
        if ( !v21 )
          sub_B2C434(v19, v20);
        v22 = v21->fields.baseListViewManager;
        if ( !v22 )
          sub_B2C434(v19, v20);
        v21->fields.totalSum = v22->fields.selectSum;
        v23 = this->fields.selectDoneLabel;
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v24 = LocalizationManager__Get((System_String_o *)StringLiteral_12469/*"SUM_INFO"*/, 0LL);
        v26 = this->fields.parentManager;
        if ( !v26 )
          sub_B2C434(v24, v25);
        v27 = v24;
        LODWORD(v72.fields.list) = v26->fields.totalSum;
        v28 = j_il2cpp_value_box_0(int_TypeInfo, &v72);
        v30 = this->fields.parentManager;
        if ( !v30 )
          sub_B2C434(v28, v29);
        v31 = (Il2CppObject *)v28;
        sendMax = v30->fields.sendMax;
        v32 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &sendMax);
        v33 = System_String__Format_44301068(v27, v31, v32, 0LL);
        if ( !v23 )
          sub_B2C434(v33, v33);
        UILabel__set_text(v23, v33, 0LL);
        v37 = this->fields.parentManager;
        if ( !v37 )
          sub_B2C434(v34, v35);
        v38 = v37->fields.baseListViewManager;
        if ( !v38 )
          sub_B2C434(0LL, v35);
        WarehouseListViewManager__DecrementNumber(v38, current->fields.selectNum, v36);
        ListViewItem__set_IsSelect((ListViewItem_o *)current, 0, 0LL);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v73,
    (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
  WarehouseListViewManager__RefrashListDisp(this, v70);
  v69 = 4;
LABEL_49:
  WarehouseListViewManager__RequestListObject_26893276(this, v69, v68);
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
  if ( (byte_418898A & 1) == 0 )
  {
    this = (WarehouseListViewManager_o *)sub_B2C35C(&WarehouseListViewObject_TypeInfo, obj);
    byte_418898A = 1;
  }
  if ( !obj
    || (v6 = *(&WarehouseListViewObject_TypeInfo->_2.bitflags2 + 1), *(&obj->klass->_2.bitflags2 + 1) < (unsigned int)v6)
    || (WarehouseListViewObject_c *)obj->klass->_2.typeHierarchy[v6 - 1] != WarehouseListViewObject_TypeInfo )
  {
    sub_B2C434(this, obj);
  }
  if ( v5->fields.initMode == 2 )
    v7 = 3;
  else
    v7 = 2;
  WarehouseListViewObject__Init_24485348((WarehouseListViewObject_o *)obj, v7, 0LL);
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
  __int64 v10; // x1
  ListViewSort_o *sort; // x0
  UILabel_o *v12; // x20
  UnityEngine_Object_o *sortOrderSprite; // x20
  struct ListViewSort_o *v14; // x8
  int32_t sortKind; // w9
  System_String_o **v16; // x8
  struct ListViewSort_o *v17; // x8
  _BOOL4 isAscendingOrder; // w8
  System_String_o **v19; // x9
  System_String_o **v20; // x10
  System_String_o **v21; // x8
  struct ListViewSort_o *v22; // x8
  System_String_o **v23; // x8
  UnityEngine_Object_o *bonusFilterKindLabel; // x20
  UILabel_o *v25; // x20
  System_Int32_array *bonusEventIdList; // x1
  System_Int32_array *servantFilterIdList; // x2

  if ( (byte_418899F & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, method);
    sub_B2C35C(&StringLiteral_17021/*"btn_sort_up"*/, v3);
    sub_B2C35C(&StringLiteral_17104/*"btn_txt_up"*/, v4);
    sub_B2C35C(&StringLiteral_17061/*"btn_txt_new"*/, v5);
    sub_B2C35C(&StringLiteral_17051/*"btn_txt_down"*/, v6);
    sub_B2C35C(&StringLiteral_17068/*"btn_txt_old"*/, v7);
    sub_B2C35C(&StringLiteral_17018/*"btn_sort_down"*/, v8);
    byte_418899F = 1;
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
    v12 = this->fields.sortKindLabel;
    sort = (ListViewSort_o *)ListViewSort__GetSortKindButtonText(sort, 0LL);
    if ( !v12 )
      goto LABEL_46;
    UILabel__set_text(v12, (System_String_o *)sort, 0LL);
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
    v14 = this->fields.sort;
    if ( !v14 )
      goto LABEL_46;
    sortKind = v14->fields.sortKind;
    if ( sortKind == 11 || sortKind == 1 )
    {
      sort = (ListViewSort_o *)this->fields.sortExplanationSprite;
      if ( !sort )
        goto LABEL_46;
      v16 = (System_String_o **)(v14->fields.isAscendingOrder ? &StringLiteral_17068/*"btn_txt_old"*/ : &StringLiteral_17061/*"btn_txt_new"*/);
      UISprite__set_spriteName((UISprite_o *)sort, *v16, 0LL);
      v17 = this->fields.sort;
      if ( !v17 )
        goto LABEL_46;
      sort = (ListViewSort_o *)this->fields.sortOrderSprite;
      if ( !sort )
        goto LABEL_46;
      isAscendingOrder = v17->fields.isAscendingOrder;
      v19 = (System_String_o **)&StringLiteral_17018/*"btn_sort_down"*/;
      v20 = (System_String_o **)&StringLiteral_17021/*"btn_sort_up"*/;
    }
    else
    {
      sort = (ListViewSort_o *)this->fields.sortExplanationSprite;
      if ( !sort )
        goto LABEL_46;
      v21 = (System_String_o **)(v14->fields.isAscendingOrder ? &StringLiteral_17104/*"btn_txt_up"*/ : &StringLiteral_17051/*"btn_txt_down"*/);
      UISprite__set_spriteName((UISprite_o *)sort, *v21, 0LL);
      v22 = this->fields.sort;
      if ( !v22 )
        goto LABEL_46;
      sort = (ListViewSort_o *)this->fields.sortOrderSprite;
      if ( !sort )
        goto LABEL_46;
      isAscendingOrder = v22->fields.isAscendingOrder;
      v19 = (System_String_o **)&StringLiteral_17021/*"btn_sort_up"*/;
      v20 = (System_String_o **)&StringLiteral_17018/*"btn_sort_down"*/;
    }
    if ( isAscendingOrder )
      v23 = v19;
    else
      v23 = v20;
    UISprite__set_spriteName((UISprite_o *)sort, *v23, 0LL);
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
      v25 = this->fields.bonusFilterKindLabel;
      bonusEventIdList = this->fields.bonusEventIdList;
      servantFilterIdList = this->fields.servantFilterIdList;
      if ( this->fields.isQuestStart )
      {
        sort = (ListViewSort_o *)ListViewSort__GetBonusKindText_33948928(
                                   sort,
                                   bonusEventIdList,
                                   servantFilterIdList,
                                   0,
                                   0LL,
                                   0LL);
        if ( v25 )
        {
LABEL_43:
          UILabel__set_text(v25, (System_String_o *)sort, 0LL);
          return;
        }
      }
      else
      {
        sort = (ListViewSort_o *)ListViewSort__GetBonusKind2Text_33951116(
                                   sort,
                                   bonusEventIdList,
                                   servantFilterIdList,
                                   0LL,
                                   0LL,
                                   0LL,
                                   0LL);
        if ( v25 )
          goto LABEL_43;
      }
LABEL_46:
      sub_B2C434(sort, v10);
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
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *SelfUserGame; // x0
  __int64 v11; // x1
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *v12; // x8
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__c *klass; // x21
  __int64 v14; // x0
  __int64 v15; // x1
  Il2CppObject *current; // x20
  WarehouseListViewItem_c *v17; // x1
  __int64 v18; // x9
  Il2CppClass *v19; // x8
  Il2CppType byval_arg; // q0
  __int64 v21; // x1
  UserServantEntity_o *v22; // x0
  __int64 v23; // x1
  UserServantEntity_o *v24; // x0
  __int64 v25; // x1
  UserServantEntity_o *v26; // x0
  __int64 v27; // x1
  UserServantEntity_o *v28; // x0
  __int64 v29; // x1
  bool v30; // w8
  UserServantEntity_o *v31; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v32; // [xsp+0h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v33; // [xsp+20h] [xbp-80h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v34; // [xsp+40h] [xbp-60h] BYREF

  if ( (byte_41889AB & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__, isPushMode);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v7);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v8);
    sub_B2C35C(&WarehouseListViewItem_TypeInfo, v9);
    byte_41889AB = 1;
  }
  memset(&v34, 0, sizeof(v34));
  SelfUserGame = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)UserGameMaster__getSelfUserGame(0LL);
  if ( !SelfUserGame
    || (v12 = SelfUserGame,
        (SelfUserGame = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this->fields.itemList) == 0LL) )
  {
    sub_B2C434(SelfUserGame, v11);
  }
  klass = v12[3].klass;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v33,
    SelfUserGame,
    (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  v34.fields.current = (Il2CppObject *)v33.fields.fakeValue;
  *(_OWORD *)&v34.fields.list = *(_OWORD *)&v33.fields.currentCryptoKey;
  while ( 1 )
  {
    v14 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v34,
            (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    if ( (v14 & 1) == 0 )
      break;
    current = v34.fields.current;
    if ( !v34.fields.current )
      goto LABEL_30;
    v17 = WarehouseListViewItem_TypeInfo;
    v18 = *(&WarehouseListViewItem_TypeInfo->_2.bitflags2 + 1);
    if ( *(&v34.fields.current->klass->_2.bitflags2 + 1) < (unsigned int)v18
      || (WarehouseListViewItem_c *)v34.fields.current->klass->_2.typeHierarchy[v18 - 1] != WarehouseListViewItem_TypeInfo )
    {
      v14 = sub_B2C728(v34.fields.current);
LABEL_30:
      sub_B2C434(v14, v15);
    }
    v19 = v34.fields.current[7].klass;
    BYTE3(v34.fields.current[10].klass) = isPushMode;
    if ( !v19 )
      sub_B2C434(v14, v17);
    byval_arg = v19->_1.byval_arg;
    *(_OWORD *)&v33.fields.currentCryptoKey = *(_OWORD *)&v19->_1.name;
    *(Il2CppType *)&v33.fields.fakeValue = byval_arg;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    }
    v32 = v33;
    BYTE4(current[10].klass) = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v32, 0LL) == (_QWORD)klass;
    if ( isPushMode )
    {
      v22 = (UserServantEntity_o *)current[7].klass;
      if ( !v22 )
        sub_B2C434(0LL, v21);
      if ( UserServantEntity__IsLeave(v22, 0LL) )
        goto LABEL_23;
      v24 = (UserServantEntity_o *)current[7].klass;
      if ( !v24 )
        sub_B2C434(0LL, v23);
      if ( UserServantEntity__IsEventJoin(v24, 0LL) )
        goto LABEL_23;
      v26 = (UserServantEntity_o *)current[7].klass;
      if ( !v26 )
        sub_B2C434(0LL, v25);
      if ( UserServantEntity__IsCombineMaterial(v26, 0LL) )
        goto LABEL_23;
      v28 = (UserServantEntity_o *)current[7].klass;
      if ( !v28 )
        sub_B2C434(0LL, v27);
      if ( UserServantEntity__IsStatusUp(v28, 0LL) )
      {
LABEL_23:
        v30 = 0;
      }
      else
      {
        v31 = (UserServantEntity_o *)current[7].klass;
        if ( !v31 )
          sub_B2C434(0LL, v29);
        v30 = !UserServantEntity__IsMaterialTd(v31, 0LL);
      }
    }
    else
    {
      v30 = 1;
    }
    BYTE5(current[10].klass) = v30;
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v34,
    (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
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

  if ( (byte_418897D & 1) == 0 )
  {
    sub_B2C35C(&WarehouseListViewManager_CallbackFunc_TypeInfo, value);
    byte_418897D = 1;
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
    v8 = sub_B20D74(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (WarehouseListViewManager_o *)sub_B2C728(v7);
  WarehouseListViewManager__remove_callbackFunc(v10, v11, v12);
}


System_Collections_Generic_List_WarehouseListViewObject__o *__fastcall WarehouseListViewManager__get_ClippingObjectList(
        WarehouseListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v11; // x19
  __int64 v12; // x1
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  Il2CppObject *current; // x21
  _BOOL8 v15; // x0
  __int64 v16; // x1
  srcLineSprite_o *Component_srcLineSprite; // x0
  __int64 v18; // x1
  EventMissionProgressRequest_Argument_ProgressData_o *v19; // x21
  ListViewItem_o *Item; // x0
  __int64 v21; // x1
  _BOOL8 v22; // x0
  __int64 v23; // x1
  System_Collections_Generic_List_Enumerator_T__o v25; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v26; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4188982 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v3);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v4);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_WarehouseListViewObject___, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_WarehouseListViewObject__Add__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_WarehouseListViewObject___ctor__, v8);
    sub_B2C35C(&System_Collections_Generic_List_WarehouseListViewObject__TypeInfo, v9);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v10);
    byte_4188982 = 1;
  }
  memset(&v26, 0, sizeof(v26));
  v11 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_WarehouseListViewObject__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v11,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_WarehouseListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_B2C434(0LL, v12);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v25,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)objectList,
    (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v26 = v25;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v26,
            (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v26.fields.current;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v15 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v15 )
    {
      if ( !current )
        sub_B2C434(v15, v16);
      Component_srcLineSprite = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                  (UnityEngine_GameObject_o *)current,
                                  (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_WarehouseListViewObject___);
      v19 = (EventMissionProgressRequest_Argument_ProgressData_o *)Component_srcLineSprite;
      if ( !Component_srcLineSprite )
        sub_B2C434(0LL, v18);
      Item = (ListViewItem_o *)WarehouseListViewObject__GetItem(
                                 (WarehouseListViewObject_o *)Component_srcLineSprite,
                                 0LL);
      if ( !Item )
        sub_B2C434(0LL, v21);
      if ( Item->fields.isTermination )
      {
        v22 = ListViewManager__ClippingItem_24147020((ListViewManager_o *)this, Item, 0LL);
        if ( v22 )
        {
          if ( !v11 )
            sub_B2C434(v22, v23);
          goto LABEL_16;
        }
      }
      else
      {
        if ( !v11 )
          sub_B2C434(Item, v21);
LABEL_16:
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v11,
          v19,
          (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_WarehouseListViewObject__Add__);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v26,
    (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_WarehouseListViewObject__o *)v11;
}


System_Collections_Generic_List_WarehouseListViewObject__o *__fastcall WarehouseListViewManager__get_ObjectList(
        WarehouseListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v11; // x19
  __int64 v12; // x1
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  Il2CppObject *current; // x20
  _BOOL8 v15; // x0
  __int64 v16; // x1
  EventMissionProgressRequest_Argument_ProgressData_o *Component_srcLineSprite; // x0
  System_Collections_Generic_List_Enumerator_T__o v19; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v20; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_4188981 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v3);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v4);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_WarehouseListViewObject___, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_WarehouseListViewObject__Add__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_WarehouseListViewObject___ctor__, v8);
    sub_B2C35C(&System_Collections_Generic_List_WarehouseListViewObject__TypeInfo, v9);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v10);
    byte_4188981 = 1;
  }
  memset(&v20, 0, sizeof(v20));
  v11 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_WarehouseListViewObject__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v11,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_WarehouseListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_B2C434(0LL, v12);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v19,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)objectList,
    (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v20 = v19;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v20,
            (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v20.fields.current;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v15 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v15 )
    {
      if ( !current )
        sub_B2C434(v15, v16);
      Component_srcLineSprite = (EventMissionProgressRequest_Argument_ProgressData_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                                         (UnityEngine_GameObject_o *)current,
                                                                                         (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_WarehouseListViewObject___);
      if ( !v11 )
        sub_B2C434(Component_srcLineSprite, Component_srcLineSprite);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v11,
        Component_srcLineSprite,
        (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_WarehouseListViewObject__Add__);
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v20,
    (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_WarehouseListViewObject__o *)v11;
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

  if ( (byte_418897E & 1) == 0 )
  {
    sub_B2C35C(&WarehouseListViewManager_CallbackFunc_TypeInfo, value);
    byte_418897E = 1;
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
    v8 = sub_B20D74(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (const MethodInfo *)sub_B2C728(v7);
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
  sub_B2C2F8(p_method, object);
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
  __int64 v11[3]; // [xsp+8h] [xbp-48h] BYREF
  int32_t v12; // [xsp+2Ch] [xbp-24h] BYREF

  v12 = resultKind;
  if ( (byte_418555C & 1) == 0 )
  {
    sub_B2C35C(&WarehouseListViewManager_ResultKind_TypeInfo, *(_QWORD *)&resultKind);
    byte_418555C = 1;
  }
  v11[2] = 0LL;
  v11[0] = j_il2cpp_value_box_0(WarehouseListViewManager_ResultKind_TypeInfo, &v12);
  v11[1] = (__int64)item;
  return (System_IAsyncResult_o *)sub_B2C300(this, v11, callback, object);
}


void __fastcall WarehouseListViewManager_CallbackFunc__EndInvoke(
        WarehouseListViewManager_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B2C304(result, 0LL, method);
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
        sub_B2C418(*(_QWORD *)&v21->fields.extra_arg, *(_QWORD *)&resultKind, item, method);
      if ( (sub_B2C38C(v23) & 1) == 0 )
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
      v25 = sub_B2C384(v23);
      v26 = sub_B2C788(v23);
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
            v19 = sub_AC5258(v22, v30, v31, v27);
          }
          v18 = *(_QWORD *)(v19 + 8);
        }
        else
        {
          v18 = *(_QWORD *)(*v22 + 16LL * *(unsigned __int16 *)(v23 + 72) + 320);
        }
        v20 = (void (__fastcall **)(__int64 *, _QWORD, WarehouseListViewItem_o *, _QWORD))sub_B2C40C(v18, v23);
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
            v17 = sub_AC5258(v22, class_0, v10, v12);
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