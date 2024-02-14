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
  __int64 v15; // x1
  __int64 v16; // x2
  ListViewSort_o *v17; // x20
  struct WarehouseListViewManager_StaticFields *v18; // x0
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  System_String_o *v25; // x19
  System_String_o *v26; // x0
  System_String_o *v27; // x19
  __int64 v28; // x1
  __int64 v29; // x2
  ListViewSort_o *v30; // x20
  struct WarehouseListViewManager_StaticFields *v31; // x0
  System_String_array **v32; // x2
  System_String_array **v33; // x3
  System_Boolean_array **v34; // x4
  System_Int32_array **v35; // x5
  System_Int32_array *v36; // x6
  System_Int32_array *v37; // x7
  System_String_o *v38; // x19
  System_String_o *v39; // x0
  System_String_o *v40; // x19
  __int64 v41; // x1
  __int64 v42; // x2
  ListViewSort_o *v43; // x20
  struct WarehouseListViewManager_StaticFields *v44; // x0
  System_String_array **v45; // x2
  System_String_array **v46; // x3
  System_Boolean_array **v47; // x4
  System_Int32_array **v48; // x5
  System_Int32_array *v49; // x6
  System_Int32_array *v50; // x7
  System_String_o *v51; // x19
  System_String_o *v52; // x0
  System_String_o *v53; // x19
  __int64 v54; // x1
  __int64 v55; // x2
  ListViewSort_o *v56; // x20
  struct WarehouseListViewManager_StaticFields *v57; // x0
  System_String_array **v58; // x2
  System_String_array **v59; // x3
  System_Boolean_array **v60; // x4
  System_Int32_array **v61; // x5
  System_Int32_array *v62; // x6
  System_Int32_array *v63; // x7
  int v64; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4215717 & 1) == 0 )
  {
    sub_B0D8A4(&ListViewSort_TypeInfo, v1);
    sub_B0D8A4(&WarehouseListViewManager_TypeInfo, v8);
    sub_B0D8A4(&StringLiteral_15473/*"Warehouse"*/, v9);
    byte_4215717 = 1;
  }
  static_fields = (BattleServantConfConponent_o *)WarehouseListViewManager_TypeInfo->static_fields;
  v11 = (System_Int32_array **)StringLiteral_15473/*"Warehouse"*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_15473/*"Warehouse"*/;
  sub_B0D840(static_fields, v11, v2, v3, v4, v5, v6, v7);
  SORT_SAVE_KEY = WarehouseListViewManager_TypeInfo->static_fields->SORT_SAVE_KEY;
  v64 = 1;
  v13 = System_Int32__ToString((int32_t)&v64, 0LL);
  v14 = System_String__Concat_43849904(SORT_SAVE_KEY, v13, 0LL);
  v17 = (ListViewSort_o *)sub_B0D974(ListViewSort_TypeInfo, v15, v16);
  ListViewSort___ctor_32823364(v17, v14, 3, 0, 0LL);
  v18 = WarehouseListViewManager_TypeInfo->static_fields;
  v18->servantSortInfo = v17;
  sub_B0D840(
    (BattleServantConfConponent_o *)&v18->servantSortInfo,
    (System_Int32_array **)v17,
    v19,
    v20,
    v21,
    v22,
    v23,
    v24);
  v25 = WarehouseListViewManager_TypeInfo->static_fields->SORT_SAVE_KEY;
  v64 = 2;
  v26 = System_Int32__ToString((int32_t)&v64, 0LL);
  v27 = System_String__Concat_43849904(v25, v26, 0LL);
  v30 = (ListViewSort_o *)sub_B0D974(ListViewSort_TypeInfo, v28, v29);
  ListViewSort___ctor_32823364(v30, v27, 3, 0, 0LL);
  v31 = WarehouseListViewManager_TypeInfo->static_fields;
  v31->servantEquipSortInfo = v30;
  sub_B0D840(
    (BattleServantConfConponent_o *)&v31->servantEquipSortInfo,
    (System_Int32_array **)v30,
    v32,
    v33,
    v34,
    v35,
    v36,
    v37);
  v38 = WarehouseListViewManager_TypeInfo->static_fields->SORT_SAVE_KEY;
  v64 = 3;
  v39 = System_Int32__ToString((int32_t)&v64, 0LL);
  v40 = System_String__Concat_43849904(v38, v39, 0LL);
  v43 = (ListViewSort_o *)sub_B0D974(ListViewSort_TypeInfo, v41, v42);
  ListViewSort___ctor_32823364(v43, v40, 3, 0, 0LL);
  v44 = WarehouseListViewManager_TypeInfo->static_fields;
  v44->servantWarehouseSortInfo = v43;
  sub_B0D840(
    (BattleServantConfConponent_o *)&v44->servantWarehouseSortInfo,
    (System_Int32_array **)v43,
    v45,
    v46,
    v47,
    v48,
    v49,
    v50);
  v51 = WarehouseListViewManager_TypeInfo->static_fields->SORT_SAVE_KEY;
  v64 = 4;
  v52 = System_Int32__ToString((int32_t)&v64, 0LL);
  v53 = System_String__Concat_43849904(v51, v52, 0LL);
  v56 = (ListViewSort_o *)sub_B0D974(ListViewSort_TypeInfo, v54, v55);
  ListViewSort___ctor_32823364(v56, v53, 3, 0, 0LL);
  v57 = WarehouseListViewManager_TypeInfo->static_fields;
  v57->servantEquipWarehouseSortInfo = v56;
  sub_B0D840(
    (BattleServantConfConponent_o *)&v57->servantEquipWarehouseSortInfo,
    (System_Int32_array **)v56,
    v58,
    v59,
    v60,
    v61,
    v62,
    v63);
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
  *(_OWORD *)&this->fields.dragSelectSum = xmmword_3204CE0;
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
  if ( (byte_4215713 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, *(_QWORD *)&index);
    this = (WarehouseListViewManager_o *)sub_B0D8A4(&WarehouseListViewItem_TypeInfo, v5);
    byte_4215713 = 1;
  }
  itemSortList = v4->fields.itemSortList;
  if ( !itemSortList )
    goto LABEL_10;
  if ( itemSortList->fields._size <= (unsigned int)index )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
  this = (WarehouseListViewManager_o *)itemSortList->fields._items->m_Items[index];
  if ( !this )
LABEL_10:
    sub_B0D97C(this);
  v7 = *(&WarehouseListViewItem_TypeInfo->_2.bitflags2 + 1);
  if ( *(&this->klass->_2.bitflags2 + 1) >= (unsigned int)v7
    && (WarehouseListViewItem_c *)this->klass->_2.typeHierarchy[v7 - 1] == WarehouseListViewItem_TypeInfo )
  {
    HIDWORD(this->fields.bottomItem) = -1;
  }
  else
  {
    v8 = (WarehouseListViewManager_o *)sub_B0DC70(this);
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
  ListViewItem_o *current; // x20
  __int64 v20; // x9
  UnityEngine_Object_o *monitor; // x21
  ListViewObject_o *viewObject; // x0
  const MethodInfo *v23; // x2
  System_Collections_Generic_List_Enumerator_T__o v24; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v25; // [xsp+20h] [xbp-50h] BYREF

  v8 = this;
  if ( (byte_421570B & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__, method);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v9);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v10);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v11);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v12);
    this = (WarehouseListViewManager_o *)sub_B0D8A4(&WarehouseListViewItem_TypeInfo, v13);
    byte_421570B = 1;
  }
  memset(&v25, 0, sizeof(v25));
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
  sub_B0D840((BattleServantConfConponent_o *)&v8->fields.seed, smallSizeSeed, v2, v3, v4, v5, v6, v7);
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
    &v24,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this,
    (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  v25 = v24;
  while ( 1 )
  {
    v18 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v25,
            (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    if ( (v18 & 1) == 0 )
      break;
    current = (ListViewItem_o *)v25.fields.current;
    if ( !v25.fields.current )
      goto LABEL_28;
    v20 = *(&WarehouseListViewItem_TypeInfo->_2.bitflags2 + 1);
    if ( *(&v25.fields.current->klass->_2.bitflags2 + 1) < (unsigned int)v20
      || (WarehouseListViewItem_c *)v25.fields.current->klass->_2.typeHierarchy[v20 - 1] != WarehouseListViewItem_TypeInfo )
    {
      v18 = sub_B0DC70(v25.fields.current);
LABEL_28:
      sub_B0D97C(v18);
    }
    monitor = (UnityEngine_Object_o *)v25.fields.current[6].monitor;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( !UnityEngine_Object__op_Equality(monitor, 0LL, 0LL) )
    {
      viewObject = current->fields.viewObject;
      if ( !viewObject )
        sub_B0D97C(0LL);
      ListViewObject__SetItemSeed(viewObject, current, v8->fields.seed, 0LL);
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v25,
    (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
  WarehouseListViewManager__SetMode_26337716(v8, 2, v23);
  ListViewManager__SortItem((ListViewManager_o *)v8, -1, 0, -1, 0LL);
  this = (WarehouseListViewManager_o *)v8->fields.scrollBar;
  if ( !this
    || (this = (WarehouseListViewManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL)) == 0LL )
  {
LABEL_30:
    sub_B0D97C(this);
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
      sub_B0D97C(this);
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
  UserServantMaster_o *MasterData_WarQuestSelectionMaster; // x24
  UserServantStorageMaster_o *v26; // x25
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  int64_t v33; // x26
  System_String_o *v34; // x21
  WarehouseListViewManager_c *v35; // x0
  struct ListViewSort_o *servantSortInfo; // x1
  struct ListViewSort_o **p_sort; // x22
  __int64 *v38; // x8
  WarehouseListViewManager_c *v39; // x0
  struct ListViewSort_o *servantEquipSortInfo; // x1
  struct ListViewSort_o **v41; // x22
  WarehouseListViewManager_c *v42; // x0
  struct ListViewSort_o *servantWarehouseSortInfo; // x1
  struct ListViewSort_o **v44; // x22
  WarehouseListViewManager_c *v45; // x0
  struct ListViewSort_o *servantEquipWarehouseSortInfo; // x1
  struct ListViewSort_o **v47; // x22
  int64_t v48; // x23
  int v49; // w8
  struct ListViewSort_o *sort; // x8
  struct ListViewSort_o **v51; // x22
  struct System_Int32_array *servantFilterEventIdList; // x9
  struct System_Int32_array *servantFilterIdList; // x9
  struct ListViewSort_o *v54; // x8
  System_String_array **v55; // x2
  System_String_array **v56; // x3
  System_Boolean_array **v57; // x4
  System_Int32_array **v58; // x5
  System_Int32_array *v59; // x6
  System_Int32_array *v60; // x7
  struct System_Int32_array *servantEquipFilterEventIdList; // x1
  struct System_Int32_array **p_servantFilterIdList; // x0
  struct ListViewSort_o *v63; // x8
  struct System_Int32_array *v64; // x1
  System_Int32_array *bonusEventIdList; // x1
  System_Int32_array *v66; // x2
  System_String_array **v67; // x2
  System_String_array **v68; // x3
  System_Boolean_array **v69; // x4
  System_Int32_array **v70; // x5
  System_Int32_array *v71; // x6
  System_Int32_array *v72; // x7
  unsigned int iconScaleKind; // w8
  struct ListViewItemSeed_o *normalSizeSeed; // x1
  UserDeckMaster_o *v75; // x24
  int v76; // w8
  __int64 v77; // x25
  int64_t v78; // x20
  __int64 v79; // x8
  __int128 v80; // q0
  __int64 v81; // x1
  __int64 v82; // x2
  System_Int64_array *v83; // x22
  int64_t v84; // x24
  int64_t v85; // x28
  UserServantEntity_o *v86; // x20
  __int64 v87; // x23
  int64_t v88; // x27
  int64_t v89; // x21
  WarehouseListViewItem_o *v90; // x26
  const MethodInfo *v91; // x3
  UILabel_o *emptyMessageLabel; // x20
  const MethodInfo *v93; // x1
  __int64 v94; // x0
  const MethodInfo *v95; // [xsp+0h] [xbp-E0h]
  System_String_o *v96; // [xsp+10h] [xbp-D0h]
  EventUpValSetupInfo_o *v97; // [xsp+18h] [xbp-C8h]
  System_Int64_array *v98; // [xsp+20h] [xbp-C0h]
  System_Int64_array *partyUserEquipList; // [xsp+28h] [xbp-B8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v100; // [xsp+30h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v101; // [xsp+50h] [xbp-90h]
  int32_t eventId; // [xsp+7Ch] [xbp-64h] BYREF
  System_Int64_array *equipIdList; // [xsp+80h] [xbp-60h] BYREF
  System_Int64_array *svtIdList; // [xsp+88h] [xbp-58h] BYREF

  if ( (byte_42156EE & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_EventMaster___, *(_QWORD *)&kind);
    sub_B0D8A4(&Method_DataManager_GetMasterData_UserDeckMaster___, v7);
    sub_B0D8A4(&Method_DataManager_GetMasterData_UserEventServantFatigueMaster___, v8);
    sub_B0D8A4(&Method_DataManager_GetMasterData_UserServantMaster___, v9);
    sub_B0D8A4(&Method_DataManager_GetMasterData_UserServantStorageMaster___, v10);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ListViewItem__Add__, v11);
    sub_B0D8A4(&LocalizationManager_TypeInfo, v12);
    sub_B0D8A4(&NetworkManager_TypeInfo, v13);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v14);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v15);
    sub_B0D8A4(&WarehouseListViewItem_TypeInfo, v16);
    sub_B0D8A4(&WarehouseListViewManager_TypeInfo, v17);
    sub_B0D8A4(&StringLiteral_11718/*"SERVANT_EQUIP_EMPTY"*/, v18);
    sub_B0D8A4(&StringLiteral_11713/*"SERVANT_EMPTY"*/, v19);
    sub_B0D8A4(&StringLiteral_11746/*"SERVANT_EQUIP_WAREHOUSE_EMPTY"*/, v20);
    sub_B0D8A4(&StringLiteral_11913/*"SERVANT_SORT_FILTER_RESULT_EMPTY"*/, v21);
    sub_B0D8A4(&StringLiteral_12094/*"SERVANT_WAREHOUSE_EMPTY"*/, v22);
    sub_B0D8A4(&StringLiteral_1/*""*/, v23);
    byte_42156EE = 1;
  }
  equipIdList = 0LL;
  svtIdList = 0LL;
  eventId = 0;
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_95;
  MasterData_WarQuestSelectionMaster = (UserServantMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                (DataManager_o *)Instance,
                                                                (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_UserServantMaster___);
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_95;
  v26 = (UserServantStorageMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                        (DataManager_o *)Instance,
                                        (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_UserServantStorageMaster___);
  Instance = (int64_t)UserGameMaster__getSelfUserGame(0LL);
  v33 = Instance;
  v34 = (System_String_o *)StringLiteral_1/*""*/;
  this->fields.kind = kind;
  switch ( kind )
  {
    case 0:
      v35 = WarehouseListViewManager_TypeInfo;
      if ( (BYTE3(WarehouseListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !WarehouseListViewManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(WarehouseListViewManager_TypeInfo);
        v35 = WarehouseListViewManager_TypeInfo;
      }
      servantSortInfo = v35->static_fields->servantSortInfo;
      this->fields.sort = servantSortInfo;
      p_sort = &this->fields.sort;
      sub_B0D840(
        (BattleServantConfConponent_o *)&this->fields.sort,
        (System_Int32_array **)servantSortInfo,
        v27,
        v28,
        v29,
        v30,
        v31,
        v32);
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
      v38 = &StringLiteral_11713/*"SERVANT_EMPTY"*/;
      break;
    case 1:
      v39 = WarehouseListViewManager_TypeInfo;
      if ( (BYTE3(WarehouseListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !WarehouseListViewManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(WarehouseListViewManager_TypeInfo);
        v39 = WarehouseListViewManager_TypeInfo;
      }
      servantEquipSortInfo = v39->static_fields->servantEquipSortInfo;
      this->fields.sort = servantEquipSortInfo;
      v41 = &this->fields.sort;
      sub_B0D840(
        (BattleServantConfConponent_o *)&this->fields.sort,
        (System_Int32_array **)servantEquipSortInfo,
        v27,
        v28,
        v29,
        v30,
        v31,
        v32);
      if ( !this->fields.sort )
        goto LABEL_95;
      this->fields.sort->fields.listViewKind = 1;
      Instance = (int64_t)*v41;
      if ( !*v41 )
        goto LABEL_95;
      ListViewSort__Load((ListViewSort_o *)Instance, 0LL);
      if ( !MasterData_WarQuestSelectionMaster )
        goto LABEL_95;
      Instance = (int64_t)UserServantMaster__getServantEquipList(MasterData_WarQuestSelectionMaster, 0LL);
      v38 = &StringLiteral_11718/*"SERVANT_EQUIP_EMPTY"*/;
      break;
    case 2:
      v42 = WarehouseListViewManager_TypeInfo;
      if ( (BYTE3(WarehouseListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !WarehouseListViewManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(WarehouseListViewManager_TypeInfo);
        v42 = WarehouseListViewManager_TypeInfo;
      }
      servantWarehouseSortInfo = v42->static_fields->servantWarehouseSortInfo;
      this->fields.sort = servantWarehouseSortInfo;
      v44 = &this->fields.sort;
      sub_B0D840(
        (BattleServantConfConponent_o *)&this->fields.sort,
        (System_Int32_array **)servantWarehouseSortInfo,
        v27,
        v28,
        v29,
        v30,
        v31,
        v32);
      if ( !this->fields.sort )
        goto LABEL_95;
      this->fields.sort->fields.listViewKind = 0;
      Instance = (int64_t)*v44;
      if ( !*v44 )
        goto LABEL_95;
      ListViewSort__Load((ListViewSort_o *)Instance, 0LL);
      if ( !v26 )
        goto LABEL_95;
      Instance = (int64_t)UserServantStorageMaster__getKeepServantList(v26, 0LL);
      v38 = &StringLiteral_12094/*"SERVANT_WAREHOUSE_EMPTY"*/;
      break;
    case 3:
      v45 = WarehouseListViewManager_TypeInfo;
      if ( (BYTE3(WarehouseListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !WarehouseListViewManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(WarehouseListViewManager_TypeInfo);
        v45 = WarehouseListViewManager_TypeInfo;
      }
      servantEquipWarehouseSortInfo = v45->static_fields->servantEquipWarehouseSortInfo;
      this->fields.sort = servantEquipWarehouseSortInfo;
      v47 = &this->fields.sort;
      sub_B0D840(
        (BattleServantConfConponent_o *)&this->fields.sort,
        (System_Int32_array **)servantEquipWarehouseSortInfo,
        v27,
        v28,
        v29,
        v30,
        v31,
        v32);
      if ( !this->fields.sort )
        goto LABEL_95;
      this->fields.sort->fields.listViewKind = 1;
      Instance = (int64_t)*v47;
      if ( !*v47 )
        goto LABEL_95;
      ListViewSort__Load((ListViewSort_o *)Instance, 0LL);
      if ( !v26 )
        goto LABEL_95;
      Instance = (int64_t)UserServantStorageMaster__getServantEquipList(v26, 0LL);
      v38 = &StringLiteral_11746/*"SERVANT_EQUIP_WAREHOUSE_EMPTY"*/;
      break;
    default:
      v48 = 0LL;
      if ( !setupInfo )
        goto LABEL_43;
      goto LABEL_35;
  }
  v34 = (System_String_o *)*v38;
  v48 = Instance;
  if ( setupInfo )
  {
LABEL_35:
    v49 = this->fields.kind | 2;
    this->fields.isQuestStart = setupInfo->fields.isQuestStart;
    if ( v49 == 2 )
    {
      v51 = &this->fields.sort;
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
      v64 = setupInfo->fields.servantFilterEventIdList;
      this->fields.bonusEventIdList = v64;
      sub_B0D840(
        (BattleServantConfConponent_o *)&this->fields.bonusEventIdList,
        (System_Int32_array **)v64,
        v27,
        v28,
        v29,
        v30,
        v31,
        v32);
      servantEquipFilterEventIdList = setupInfo->fields.servantFilterIdList;
      p_servantFilterIdList = &this->fields.servantFilterIdList;
      this->fields.servantFilterIdList = servantEquipFilterEventIdList;
    }
    else
    {
      v51 = &this->fields.sort;
      v54 = this->fields.sort;
      if ( !v54 )
        goto LABEL_95;
      v54->fields.isBonusKind = 1;
      this->fields.servantFilterIdList = 0LL;
      sub_B0D840((BattleServantConfConponent_o *)&this->fields.servantFilterIdList, 0LL, v27, v28, v29, v30, v31, v32);
      servantEquipFilterEventIdList = setupInfo->fields.servantEquipFilterEventIdList;
      p_servantFilterIdList = &this->fields.bonusEventIdList;
      this->fields.bonusEventIdList = servantEquipFilterEventIdList;
    }
  }
  else
  {
LABEL_43:
    v51 = &this->fields.sort;
    v63 = this->fields.sort;
    this->fields.isQuestStart = 1;
    if ( !v63 )
      goto LABEL_95;
    v63->fields.isBonusKind = 0;
    this->fields.bonusEventIdList = 0LL;
    sub_B0D840((BattleServantConfConponent_o *)&this->fields.bonusEventIdList, 0LL, v27, v28, v29, v30, v31, v32);
    p_servantFilterIdList = &this->fields.servantFilterIdList;
    servantEquipFilterEventIdList = 0LL;
    this->fields.servantFilterIdList = 0LL;
  }
  sub_B0D840(
    (BattleServantConfConponent_o *)p_servantFilterIdList,
    (System_Int32_array **)servantEquipFilterEventIdList,
    v55,
    v56,
    v57,
    v58,
    v59,
    v60);
  Instance = (int64_t)*v51;
  if ( !*v51 )
    goto LABEL_95;
  if ( *(_BYTE *)(Instance + 61) )
  {
    bonusEventIdList = this->fields.bonusEventIdList;
    v66 = this->fields.servantFilterIdList;
    if ( this->fields.isQuestStart )
      ListViewSort__AlignBonusKind((ListViewSort_o *)Instance, bonusEventIdList, v66, 0, 0LL, 0LL);
    else
      ListViewSort__AlignBonusKind2((ListViewSort_o *)Instance, bonusEventIdList, v66, 0LL, 0LL, 0LL, 0LL);
  }
  Instance = (int64_t)this->fields.bonusFilterKindButton;
  if ( !Instance )
    goto LABEL_95;
  Instance = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  if ( !*v51 )
    goto LABEL_95;
  if ( !Instance )
    goto LABEL_95;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, (*v51)->fields.isBonusKind, 0LL);
  if ( !*v51 )
    goto LABEL_95;
  iconScaleKind = (*v51)->fields.iconScaleKind;
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
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.seed,
    (System_Int32_array **)normalSizeSeed,
    v67,
    v68,
    v69,
    v70,
    v71,
    v72);
LABEL_65:
  *(_QWORD *)&this->fields.sellEnableRestCnt = 0LL;
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
  *(_OWORD *)&this->fields.dragSelectSum = xmmword_3204CE0;
  this->fields.isDragSelect = 1;
  this->fields.dragSelectFriendShipSum = 0;
  if ( !v48 )
    goto LABEL_90;
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_95;
  v75 = (UserDeckMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                              (DataManager_o *)Instance,
                              (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_UserDeckMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Instance = NetworkManager__get_UserId(0LL);
  if ( !v75
    || (UserDeckMaster__getPartyList(v75, &svtIdList, &equipIdList, Instance, 0LL),
        (Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0)
    || (Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                              (DataManager_o *)Instance,
                              (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_EventMaster___)) == 0 )
  {
LABEL_95:
    sub_B0D97C(Instance);
  }
  Instance = EventMaster__IsEnableFatigueEvent((EventMaster_o *)Instance, &eventId, 0LL);
  v98 = 0LL;
  if ( (Instance & 1) != 0 )
  {
    Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_95;
    Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_UserEventServantFatigueMaster___);
    if ( !Instance )
      goto LABEL_95;
    Instance = (int64_t)UserEventServantFatigueMaster__GetRecoverySvtIdList(
                          (UserEventServantFatigueMaster_o *)Instance,
                          eventId,
                          0LL);
    v98 = (System_Int64_array *)Instance;
  }
  v76 = *(_DWORD *)(v48 + 24);
  if ( v76 >= 1 )
  {
    v77 = 0LL;
    v78 = v48 + 32;
    v96 = v34;
    v97 = setupInfo;
    do
    {
      if ( (unsigned int)v77 >= v76 )
        goto LABEL_96;
      v79 = *(_QWORD *)(v78 + 8 * v77);
      if ( !v79 )
        goto LABEL_95;
      v80 = *(_OWORD *)(v79 + 32);
      *(_OWORD *)&v101.fields.currentCryptoKey = *(_OWORD *)(v79 + 16);
      *(_OWORD *)&v101.fields.fakeValue = v80;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      }
      v100 = v101;
      Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44165732(&v100, 0LL);
      if ( (unsigned int)v77 >= *(_DWORD *)(v48 + 24) )
      {
LABEL_96:
        v94 = sub_B0D9A8(Instance);
        sub_B0D948(v94, 0LL);
      }
      if ( !v33 )
        goto LABEL_95;
      v83 = svtIdList;
      v84 = v48;
      v85 = v78;
      v86 = *(UserServantEntity_o **)(v78 + 8 * v77);
      partyUserEquipList = equipIdList;
      v87 = *(_QWORD *)(v33 + 112);
      v88 = Instance;
      v89 = v33;
      v90 = (WarehouseListViewItem_o *)sub_B0D974(WarehouseListViewItem_TypeInfo, v81, v82);
      WarehouseListViewItem___ctor(v90, v77, v86, v97, v83, partyUserEquipList, v98, v88 == v87, v95);
      Instance = (int64_t)this->fields.itemList;
      if ( !Instance )
        goto LABEL_95;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)Instance,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v90,
        (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
      WarehouseListViewManager__ChangeSellEnableRestCnt(this, 1, v90, v91);
      v76 = *(_DWORD *)(v84 + 24);
      ++v77;
      v48 = v84;
      v33 = v89;
      v78 = v85;
    }
    while ( (int)v77 < v76 );
    v34 = v96;
    if ( (int)v77 > 0 )
      v34 = (System_String_o *)StringLiteral_11913/*"SERVANT_SORT_FILTER_RESULT_EMPTY"*/;
  }
LABEL_90:
  emptyMessageLabel = this->fields.emptyMessageLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  Instance = (int64_t)LocalizationManager__Get(v34, 0LL);
  if ( !emptyMessageLabel )
    goto LABEL_95;
  UILabel__set_text(emptyMessageLabel, (System_String_o *)Instance, 0LL);
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
  WarehouseListViewManager__SetFilterButtonImage(this, v93);
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
  if ( (byte_4215712 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, *(_QWORD *)&index);
    this = (WarehouseListViewManager_o *)sub_B0D8A4(&WarehouseListViewItem_TypeInfo, v5);
    byte_4215712 = 1;
  }
  *(_QWORD *)friendShipSum = 0LL;
  itemSortList = v4->fields.itemSortList;
  if ( !itemSortList )
    goto LABEL_27;
  if ( itemSortList->fields._size <= (unsigned int)index )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
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
        sub_B0D97C(this);
      }
    }
LABEL_26:
    HIDWORD(v7[2].monitor) = -1;
    return;
  }
  v21 = (WarehouseListViewManager_o *)sub_B0DC70(v7);
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
  System_Collections_Generic_List_Enumerator_T__o v11; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_42156FF & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__, *(_QWORD *)&selectNum);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v7);
    byte_42156FF = 1;
  }
  memset(&v11, 0, sizeof(v11));
  itemList = this->fields.itemList;
  if ( !itemList )
    sub_B0D97C(0LL);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v11,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)itemList,
    (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  while ( 1 )
  {
    v10 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v11,
            (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    if ( !v10 )
      break;
    if ( !v11.fields.current )
      sub_B0D97C(v10);
    klass = (int32_t)v11.fields.current[1].klass;
    if ( klass > selectNum )
      LODWORD(v11.fields.current[1].klass) = klass - 1;
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v11,
    (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
}


void __fastcall WarehouseListViewManager__DeleteContinueData(const MethodInfo *method)
{
  __int64 v1; // x1
  WarehouseListViewManager_c *v2; // x0
  ListViewSort_o *servantSortInfo; // x0

  if ( (byte_42156EA & 1) == 0 )
  {
    sub_B0D8A4(&WarehouseListViewManager_TypeInfo, v1);
    byte_42156EA = 1;
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
    sub_B0D97C(servantSortInfo);
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
  __int64 v9; // x1
  __int64 v10; // x2
  System_Action_o *v11; // x21
  __int64 v12; // x0

  if ( (byte_4215706 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, isDecide);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    sub_B0D8A4(&Method_WarehouseListViewManager_EndCloseSelectFilterKind__, v6);
    byte_4215706 = 1;
  }
  if ( isDecide )
  {
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
    WarehouseListViewManager__SetFilterButtonImage(this, v7);
    ListViewManager__CheckScroll((ListViewManager_o *)this, this->fields.scaleType, 0LL);
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v11 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v9, v10);
  System_Action___ctor(v11, (Il2CppObject *)this, Method_WarehouseListViewManager_EndCloseSelectFilterKind__, 0LL);
  if ( !Instance )
    sub_B0D97C(v12);
  CommonUI__CloseServantFilterSelectMenu(Instance, v11, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarehouseListViewManager__EndSelectSortKind(
        WarehouseListViewManager_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x0

  if ( (byte_4215704 & 1) == 0 )
  {
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, isDecide);
    byte_4215704 = 1;
  }
  if ( isDecide )
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B0D97C(0LL);
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
  if ( (byte_4215709 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, *(_QWORD *)&svtId);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v5);
    this = (WarehouseListViewManager_o *)sub_B0D8A4(&WarehouseListViewItem_TypeInfo, v6);
    byte_4215709 = 1;
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
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
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
    sub_B0D97C(this);
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

  if ( (byte_4215715 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, *(_QWORD *)&index);
    sub_B0D8A4(&WarehouseListViewItem_TypeInfo, v5);
    byte_4215715 = 1;
  }
  itemList = this->fields.itemList;
  if ( !itemList )
    return 0LL;
  if ( itemList->fields._size <= (unsigned int)index )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
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
    sub_B0D97C(this);
  return warehouseListMenu->fields.modeKind;
}


System_String_o *__fastcall WarehouseListViewManager__GetScaleButtonSpriteName(
        WarehouseListViewManager_o *this,
        const MethodInfo *method)
{
  ListViewSort_o *sort; // x0

  sort = this->fields.sort;
  if ( !sort )
    sub_B0D97C(0LL);
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
  System_Collections_Generic_List_Enumerator_T__o v16; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4215714 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__, normalSum);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v9);
    sub_B0D8A4(&WarehouseListViewItem_TypeInfo, v10);
    byte_4215714 = 1;
  }
  memset(&v16, 0, sizeof(v16));
  *normalSum = 0;
  *friendShipSum = 0;
  itemList = this->fields.itemList;
  if ( !itemList )
    sub_B0D97C(0LL);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v16,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)itemList,
    (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  while ( 1 )
  {
    v15 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v16,
            (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    if ( (v15 & 1) == 0 )
      break;
    current = v16.fields.current;
    if ( !v16.fields.current )
      goto LABEL_16;
    v13 = *(&WarehouseListViewItem_TypeInfo->_2.bitflags2 + 1);
    if ( *(&v16.fields.current->klass->_2.bitflags2 + 1) < (unsigned int)v13
      || (WarehouseListViewItem_c *)v16.fields.current->klass->_2.typeHierarchy[v13 - 1] != WarehouseListViewItem_TypeInfo )
    {
      v15 = sub_B0DC70(v16.fields.current);
LABEL_16:
      sub_B0D97C(v15);
    }
    if ( ListViewItem__get_IsSelect((ListViewItem_o *)v16.fields.current, 0LL) )
    {
      if ( BYTE6(current[10].klass) )
        v14 = friendShipSum;
      else
        v14 = normalSum;
      ++*v14;
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v16,
    (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
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
  Il2CppObject *current; // x20
  __int64 v13; // x9
  const MethodInfo *v14; // x1
  int64_t UserSvtId; // x0
  System_Collections_Generic_List_Enumerator_T__o v16; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v17; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_42156FA & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__, list);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_long__Add__, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v8);
    sub_B0D8A4(&WarehouseListViewItem_TypeInfo, v9);
    byte_42156FA = 1;
  }
  memset(&v17, 0, sizeof(v17));
  itemList = this->fields.itemList;
  if ( !itemList )
    sub_B0D97C(0LL);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v16,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)itemList,
    (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  v17 = v16;
  while ( 1 )
  {
    v11 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v17,
            (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    if ( (v11 & 1) == 0 )
      break;
    current = v17.fields.current;
    if ( !v17.fields.current )
      goto LABEL_14;
    v13 = *(&WarehouseListViewItem_TypeInfo->_2.bitflags2 + 1);
    if ( *(&v17.fields.current->klass->_2.bitflags2 + 1) < (unsigned int)v13
      || (WarehouseListViewItem_c *)v17.fields.current->klass->_2.typeHierarchy[v13 - 1] != WarehouseListViewItem_TypeInfo )
    {
      v11 = sub_B0DC70(v17.fields.current);
LABEL_14:
      sub_B0D97C(v11);
    }
    if ( ListViewItem__get_IsSelect((ListViewItem_o *)v17.fields.current, 0LL) )
    {
      UserSvtId = WarehouseListViewItem__get_UserSvtId((WarehouseListViewItem_o *)current, v14);
      if ( !list )
        sub_B0D97C(UserSvtId);
      System_Collections_Generic_List_long___Add(
        list,
        UserSvtId,
        (const MethodInfo_2FB5EB0 *)Method_System_Collections_Generic_List_long__Add__);
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v17,
    (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
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
  int64_t IsSelect; // x0
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x21
  int size; // w22
  unsigned int v13; // w23
  ListViewItem_o *v14; // x21
  __int64 v15; // x9
  const MethodInfo *v16; // x1
  System_Collections_Generic_Dictionary_long__int__o *result; // x0
  WarehouseListViewManager_o *v18; // x0
  System_Collections_Generic_Dictionary_long__int__o *v19; // x1
  const MethodInfo *v20; // x2

  if ( (byte_421570C & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_long__int__Add__, method);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_long__int___ctor__, v4);
    sub_B0D8A4(&System_Collections_Generic_Dictionary_long__int__TypeInfo, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v7);
    sub_B0D8A4(&WarehouseListViewItem_TypeInfo, v8);
    byte_421570C = 1;
  }
  v9 = (System_Collections_Generic_Dictionary_long__int__o *)sub_B0D974(
                                                               System_Collections_Generic_Dictionary_long__int__TypeInfo,
                                                               method,
                                                               v2);
  System_Collections_Generic_Dictionary_long__int____ctor(
    v9,
    (const MethodInfo_2EB16B0 *)Method_System_Collections_Generic_Dictionary_long__int___ctor__);
  itemList = this->fields.itemList;
  if ( !itemList )
LABEL_16:
    sub_B0D97C(IsSelect);
  size = itemList->fields._size;
  if ( size < 1 )
    return v9;
  v13 = 0;
  while ( 1 )
  {
    if ( itemList->fields._size <= v13 )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
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
      IsSelect = WarehouseListViewItem__get_UserSvtId((WarehouseListViewItem_o *)v14, v16);
      if ( !v9 )
        goto LABEL_16;
      System_Collections_Generic_Dictionary_long__int___Add(
        v9,
        IsSelect,
        v14->fields.selectNum,
        (const MethodInfo_2EB2264 *)Method_System_Collections_Generic_Dictionary_long__int__Add__);
    }
    if ( (int)++v13 >= size )
      return v9;
    itemList = this->fields.itemList;
    if ( !itemList )
      goto LABEL_16;
  }
  v18 = (WarehouseListViewManager_o *)sub_B0DC70(v14);
  WarehouseListViewManager__ModifyScaleChangeList(v18, v19, v20);
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
  __int64 v15; // x1
  __int64 v16; // x2
  System_Collections_Generic_List_long__o *v17; // x22
  int64_t v18; // x0
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x19
  signed __int64 size; // x24
  unsigned __int64 v27; // x25
  ListViewItem_o *v28; // x8
  __int64 v29; // x11
  ListViewItem_c *klass; // x9
  Il2CppType byval_arg; // q0
  const MethodInfo_2FB5EB0 *v32; // x2
  int64_t v33; // x1
  System_Collections_Generic_List_long__o *v34; // x0
  Il2CppType v35; // q0
  System_Int64_array *v36; // x0
  System_String_array **v37; // x2
  System_String_array **v38; // x3
  System_Boolean_array **v39; // x4
  System_Int32_array **v40; // x5
  System_Int32_array *v41; // x6
  System_Int32_array *v42; // x7
  System_Int64_array *v43; // x0
  System_String_array **v44; // x2
  System_String_array **v45; // x3
  System_Boolean_array **v46; // x4
  System_Int32_array **v47; // x5
  System_Int32_array *v48; // x6
  System_Int32_array *v49; // x7
  System_String_array **v51; // x2
  System_String_array **v52; // x3
  System_Boolean_array **v53; // x4
  System_Int32_array **v54; // x5
  System_Int32_array *v55; // x6
  System_Int32_array *v56; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v58; // [xsp+10h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v59; // [xsp+30h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v60; // [xsp+50h] [xbp-70h]

  if ( (byte_42156F4 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_long__Add__, choiceList);
    sub_B0D8A4(&Method_System_Collections_Generic_List_long__ToArray__, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_long___ctor__, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_long__get_Count__, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v9);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v10);
    sub_B0D8A4(&System_Collections_Generic_List_long__TypeInfo, v11);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v12);
    sub_B0D8A4(&WarehouseListViewItem_TypeInfo, v13);
    byte_42156F4 = 1;
  }
  v14 = (System_Collections_Generic_List_long__o *)sub_B0D974(
                                                     System_Collections_Generic_List_long__TypeInfo,
                                                     choiceList,
                                                     unchoiceList);
  System_Collections_Generic_List_long____ctor(
    v14,
    (const MethodInfo_2FB5154 *)Method_System_Collections_Generic_List_long___ctor__);
  v17 = (System_Collections_Generic_List_long__o *)sub_B0D974(System_Collections_Generic_List_long__TypeInfo, v15, v16);
  System_Collections_Generic_List_long____ctor(
    v17,
    (const MethodInfo_2FB5154 *)Method_System_Collections_Generic_List_long___ctor__);
  itemList = this->fields.itemList;
  if ( !itemList )
    goto LABEL_33;
  size = itemList->fields._size;
  if ( (int)size >= 1 )
  {
    v27 = 0LL;
    do
    {
      if ( v27 >= (unsigned int)itemList->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
      v28 = itemList->fields._items->m_Items[v27];
      if ( !v28 )
        break;
      v29 = *(&WarehouseListViewItem_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v28->klass->_2.bitflags2 + 1) < (unsigned int)v29
        || (WarehouseListViewItem_c *)v28->klass->_2.typeHierarchy[v29 - 1] != WarehouseListViewItem_TypeInfo )
      {
        break;
      }
      klass = v28[1].klass;
      if ( klass && BYTE1(v28[2].monitor) )
      {
        if ( BYTE1(v28[1].fields.sortValue1) )
        {
          byval_arg = klass->_1.byval_arg;
          *(_OWORD *)&v60.fields.currentCryptoKey = *(_OWORD *)&klass->_1.name;
          *(Il2CppType *)&v60.fields.fakeValue = byval_arg;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          }
          v59 = v60;
          v18 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44165732(&v59, 0LL);
          if ( !v17 )
            break;
          v32 = (const MethodInfo_2FB5EB0 *)Method_System_Collections_Generic_List_long__Add__;
          v33 = v18;
          v34 = v17;
        }
        else
        {
          v35 = klass->_1.byval_arg;
          *(_OWORD *)&v60.fields.currentCryptoKey = *(_OWORD *)&klass->_1.name;
          *(Il2CppType *)&v60.fields.fakeValue = v35;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          }
          v58 = v60;
          v18 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44165732(&v58, 0LL);
          if ( !v14 )
            break;
          v32 = (const MethodInfo_2FB5EB0 *)Method_System_Collections_Generic_List_long__Add__;
          v33 = v18;
          v34 = v14;
        }
        System_Collections_Generic_List_long___Add(v34, v33, v32);
      }
      if ( (__int64)++v27 >= size )
        goto LABEL_28;
      itemList = this->fields.itemList;
    }
    while ( itemList );
LABEL_33:
    sub_B0D97C(v18);
  }
LABEL_28:
  if ( !v14 || !v17 )
    goto LABEL_33;
  if ( v17->fields._size + v14->fields._size < 1 )
  {
    *choiceList = 0LL;
    sub_B0D840((BattleServantConfConponent_o *)choiceList, 0LL, v19, v20, v21, v22, v23, v24);
    *unchoiceList = 0LL;
    sub_B0D840((BattleServantConfConponent_o *)unchoiceList, 0LL, v51, v52, v53, v54, v55, v56);
    return 0;
  }
  else
  {
    v36 = System_Collections_Generic_List_long___ToArray(
            v14,
            (const MethodInfo_2FB7FBC *)Method_System_Collections_Generic_List_long__ToArray__);
    *choiceList = v36;
    sub_B0D840((BattleServantConfConponent_o *)choiceList, (System_Int32_array **)v36, v37, v38, v39, v40, v41, v42);
    v43 = System_Collections_Generic_List_long___ToArray(
            v17,
            (const MethodInfo_2FB7FBC *)Method_System_Collections_Generic_List_long__ToArray__);
    *unchoiceList = v43;
    sub_B0D840((BattleServantConfConponent_o *)unchoiceList, (System_Int32_array **)v43, v44, v45, v46, v47, v48, v49);
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
  __int64 v15; // x1
  __int64 v16; // x2
  System_Collections_Generic_List_long__o *v17; // x22
  int64_t v18; // x0
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x19
  signed __int64 size; // x24
  unsigned __int64 v27; // x25
  ListViewItem_o *v28; // x8
  __int64 v29; // x11
  ListViewItem_c *klass; // x9
  Il2CppType byval_arg; // q0
  const MethodInfo_2FB5EB0 *v32; // x2
  int64_t v33; // x1
  System_Collections_Generic_List_long__o *v34; // x0
  Il2CppType v35; // q0
  System_Int64_array *v36; // x0
  System_String_array **v37; // x2
  System_String_array **v38; // x3
  System_Boolean_array **v39; // x4
  System_Int32_array **v40; // x5
  System_Int32_array *v41; // x6
  System_Int32_array *v42; // x7
  System_Int64_array *v43; // x0
  System_String_array **v44; // x2
  System_String_array **v45; // x3
  System_Boolean_array **v46; // x4
  System_Int32_array **v47; // x5
  System_Int32_array *v48; // x6
  System_Int32_array *v49; // x7
  System_String_array **v51; // x2
  System_String_array **v52; // x3
  System_Boolean_array **v53; // x4
  System_Int32_array **v54; // x5
  System_Int32_array *v55; // x6
  System_Int32_array *v56; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v58; // [xsp+10h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v59; // [xsp+30h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v60; // [xsp+50h] [xbp-70h]

  if ( (byte_42156F3 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_long__Add__, lockList);
    sub_B0D8A4(&Method_System_Collections_Generic_List_long__ToArray__, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_long___ctor__, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_long__get_Count__, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v9);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v10);
    sub_B0D8A4(&System_Collections_Generic_List_long__TypeInfo, v11);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v12);
    sub_B0D8A4(&WarehouseListViewItem_TypeInfo, v13);
    byte_42156F3 = 1;
  }
  v14 = (System_Collections_Generic_List_long__o *)sub_B0D974(
                                                     System_Collections_Generic_List_long__TypeInfo,
                                                     lockList,
                                                     unlockList);
  System_Collections_Generic_List_long____ctor(
    v14,
    (const MethodInfo_2FB5154 *)Method_System_Collections_Generic_List_long___ctor__);
  v17 = (System_Collections_Generic_List_long__o *)sub_B0D974(System_Collections_Generic_List_long__TypeInfo, v15, v16);
  System_Collections_Generic_List_long____ctor(
    v17,
    (const MethodInfo_2FB5154 *)Method_System_Collections_Generic_List_long___ctor__);
  itemList = this->fields.itemList;
  if ( !itemList )
    goto LABEL_33;
  size = itemList->fields._size;
  if ( (int)size >= 1 )
  {
    v27 = 0LL;
    do
    {
      if ( v27 >= (unsigned int)itemList->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
      v28 = itemList->fields._items->m_Items[v27];
      if ( !v28 )
        break;
      v29 = *(&WarehouseListViewItem_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v28->klass->_2.bitflags2 + 1) < (unsigned int)v29
        || (WarehouseListViewItem_c *)v28->klass->_2.typeHierarchy[v29 - 1] != WarehouseListViewItem_TypeInfo )
      {
        break;
      }
      klass = v28[1].klass;
      if ( klass && LOBYTE(v28[2].monitor) )
      {
        if ( LOBYTE(v28[1].fields.sortValue1) )
        {
          byval_arg = klass->_1.byval_arg;
          *(_OWORD *)&v60.fields.currentCryptoKey = *(_OWORD *)&klass->_1.name;
          *(Il2CppType *)&v60.fields.fakeValue = byval_arg;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          }
          v59 = v60;
          v18 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44165732(&v59, 0LL);
          if ( !v17 )
            break;
          v32 = (const MethodInfo_2FB5EB0 *)Method_System_Collections_Generic_List_long__Add__;
          v33 = v18;
          v34 = v17;
        }
        else
        {
          v35 = klass->_1.byval_arg;
          *(_OWORD *)&v60.fields.currentCryptoKey = *(_OWORD *)&klass->_1.name;
          *(Il2CppType *)&v60.fields.fakeValue = v35;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          }
          v58 = v60;
          v18 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44165732(&v58, 0LL);
          if ( !v14 )
            break;
          v32 = (const MethodInfo_2FB5EB0 *)Method_System_Collections_Generic_List_long__Add__;
          v33 = v18;
          v34 = v14;
        }
        System_Collections_Generic_List_long___Add(v34, v33, v32);
      }
      if ( (__int64)++v27 >= size )
        goto LABEL_28;
      itemList = this->fields.itemList;
    }
    while ( itemList );
LABEL_33:
    sub_B0D97C(v18);
  }
LABEL_28:
  if ( !v14 || !v17 )
    goto LABEL_33;
  if ( v17->fields._size + v14->fields._size < 1 )
  {
    *lockList = 0LL;
    sub_B0D840((BattleServantConfConponent_o *)lockList, 0LL, v19, v20, v21, v22, v23, v24);
    *unlockList = 0LL;
    sub_B0D840((BattleServantConfConponent_o *)unlockList, 0LL, v51, v52, v53, v54, v55, v56);
    return 0;
  }
  else
  {
    v36 = System_Collections_Generic_List_long___ToArray(
            v14,
            (const MethodInfo_2FB7FBC *)Method_System_Collections_Generic_List_long__ToArray__);
    *lockList = v36;
    sub_B0D840((BattleServantConfConponent_o *)lockList, (System_Int32_array **)v36, v37, v38, v39, v40, v41, v42);
    v43 = System_Collections_Generic_List_long___ToArray(
            v17,
            (const MethodInfo_2FB7FBC *)Method_System_Collections_Generic_List_long__ToArray__);
    *unlockList = v43;
    sub_B0D840((BattleServantConfConponent_o *)unlockList, (System_Int32_array **)v43, v44, v45, v46, v47, v48, v49);
    return 1;
  }
}


void __fastcall WarehouseListViewManager__InitLoad(const MethodInfo *method)
{
  __int64 v1; // x1
  WarehouseListViewManager_c *v2; // x0
  ListViewSort_o *servantSortInfo; // x0

  if ( (byte_42156EB & 1) == 0 )
  {
    sub_B0D8A4(&WarehouseListViewManager_TypeInfo, v1);
    byte_42156EB = 1;
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
    sub_B0D97C(servantSortInfo);
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
    sub_B0D97C(this);
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
    sub_B0D97C(parentManager);
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
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *v14; // x20
  _BOOL8 v15; // x0
  const MethodInfo *v16; // x1
  WarehouseListViewItem_o *current; // x21
  __int64 v18; // x10
  const MethodInfo *v19; // x1
  int64_t UserSvtId; // x0
  UserServantEntity_o *Entity; // x1
  const MethodInfo *v22; // x2
  UnityEngine_Object_o *viewObject; // x22
  struct ListViewObject_o *v24; // x0
  UserGameEntity_o *SelfUserGame; // x20
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x9
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *v27; // x19
  _BOOL8 v28; // x0
  const MethodInfo *v29; // x1
  WarehouseListViewItem_o *v30; // x21
  __int64 v31; // x10
  const MethodInfo *v32; // x1
  int64_t v33; // x0
  UserServantEntity_o *v34; // x1
  const MethodInfo *v35; // x2
  int64_t v36; // x0
  const MethodInfo *v37; // x1
  int64_t favoriteUserSvtId; // x27
  int64_t v39; // x22
  int64_t v40; // x0
  const MethodInfo *v41; // x3
  UnityEngine_Object_o *v42; // x22
  struct ListViewObject_o *v43; // x0
  int v44; // w19
  System_Collections_Generic_List_Enumerator_T__o v45; // [xsp+8h] [xbp-98h] BYREF
  int v46[2]; // [xsp+20h] [xbp-80h]
  int v47; // [xsp+28h] [xbp-78h]
  System_Collections_Generic_List_Enumerator_T__o v48; // [xsp+30h] [xbp-70h] BYREF

  if ( (byte_42156F1 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_UserServantMaster___, method);
    sub_B0D8A4(&Method_DataManager_GetMasterData_UserServantStorageMaster___, v3);
    sub_B0D8A4(&Method_DataMasterBase_UserServantStorageMaster__UserServantEntity__long__GetEntity__, v4);
    sub_B0D8A4(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v9);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v10);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11);
    sub_B0D8A4(&WarehouseListViewItem_TypeInfo, v12);
    byte_42156F1 = 1;
  }
  memset(&v48, 0, sizeof(v48));
  v47 = 0;
  if ( this->fields.itemList )
  {
    if ( (this->fields.kind & 0xFFFFFFFE) == 2 )
    {
      Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( Instance )
      {
        Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_UserServantStorageMaster___);
        if ( this->fields.itemList )
        {
          v14 = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)Instance;
          System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
            &v45,
            (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this->fields.itemList,
            (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
          v48 = v45;
          while ( 1 )
          {
            v15 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                    &v48,
                    (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
            if ( !v15 )
              break;
            current = (WarehouseListViewItem_o *)v48.fields.current;
            if ( !v48.fields.current
              || (v18 = *(&WarehouseListViewItem_TypeInfo->_2.bitflags2 + 1),
                  *(&v48.fields.current->klass->_2.bitflags2 + 1) < (unsigned int)v18)
              || (WarehouseListViewItem_c *)v48.fields.current->klass->_2.typeHierarchy[v18 - 1] != WarehouseListViewItem_TypeInfo )
            {
              sub_B0D97C(v15);
            }
            if ( WarehouseListViewItem__get_UserSvtId((WarehouseListViewItem_o *)v48.fields.current, v16) >= 1 )
            {
              UserSvtId = WarehouseListViewItem__get_UserSvtId(current, v19);
              if ( !v14 )
                sub_B0D97C(UserSvtId);
              Entity = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
                         v14,
                         UserSvtId,
                         (const MethodInfo_2669DFC *)Method_DataMasterBase_UserServantStorageMaster__UserServantEntity__long__GetEntity__);
              if ( Entity )
                WarehouseListViewItem__Modify(current, Entity, v22);
              viewObject = (UnityEngine_Object_o *)current->fields.viewObject;
              if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              }
              if ( UnityEngine_Object__op_Inequality(viewObject, 0LL, 0LL) )
              {
                v24 = current->fields.viewObject;
                if ( !v24 )
                  sub_B0D97C(0LL);
                ((void (__fastcall *)(struct ListViewObject_o *, WarehouseListViewItem_o *, Il2CppMethodPointer))v24->klass->vtable._5_SetItem.method)(
                  v24,
                  current,
                  v24->klass->vtable._6_SetItem.methodPtr);
              }
            }
          }
          v46[0] = 335;
          v47 = 1;
          System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
            &v48,
            (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
          v47 = 0;
          return;
        }
      }
LABEL_52:
      sub_B0D97C(Instance);
    }
    SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_52;
    Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                  Instance,
                                  (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_UserServantMaster___);
    itemList = this->fields.itemList;
    if ( !itemList )
      goto LABEL_52;
    v27 = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)Instance;
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v45,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)itemList,
      (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    v48 = v45;
    while ( 1 )
    {
      v28 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v48,
              (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
      if ( !v28 )
        break;
      v30 = (WarehouseListViewItem_o *)v48.fields.current;
      if ( !v48.fields.current
        || (v31 = *(&WarehouseListViewItem_TypeInfo->_2.bitflags2 + 1),
            *(&v48.fields.current->klass->_2.bitflags2 + 1) < (unsigned int)v31)
        || (WarehouseListViewItem_c *)v48.fields.current->klass->_2.typeHierarchy[v31 - 1] != WarehouseListViewItem_TypeInfo )
      {
        sub_B0D97C(v28);
      }
      if ( WarehouseListViewItem__get_UserSvtId((WarehouseListViewItem_o *)v48.fields.current, v29) >= 1 )
      {
        v33 = WarehouseListViewItem__get_UserSvtId(v30, v32);
        if ( !v27 )
          sub_B0D97C(v33);
        v34 = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
                v27,
                v33,
                (const MethodInfo_2669DFC *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
        if ( v34 )
          WarehouseListViewItem__Modify(v30, v34, v35);
        v36 = WarehouseListViewItem__get_UserSvtId(v30, (const MethodInfo *)v34);
        if ( !SelfUserGame )
          sub_B0D97C(v36);
        favoriteUserSvtId = SelfUserGame->fields.favoriteUserSvtId;
        v39 = v36;
        v40 = WarehouseListViewItem__get_UserSvtId(v30, v37);
        WarehouseListViewItem__Modify_26326392(
          v30,
          v39 == favoriteUserSvtId,
          v40 == SelfUserGame->fields.pushUserSvtId,
          v41);
        v42 = (UnityEngine_Object_o *)v30->fields.viewObject;
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        if ( UnityEngine_Object__op_Inequality(v42, 0LL, 0LL) )
        {
          v43 = v30->fields.viewObject;
          if ( !v43 )
            sub_B0D97C(0LL);
          ((void (__fastcall *)(struct ListViewObject_o *, WarehouseListViewItem_o *, Il2CppMethodPointer))v43->klass->vtable._5_SetItem.method)(
            v43,
            v30,
            v43->klass->vtable._6_SetItem.methodPtr);
        }
      }
    }
    v46[0] = 335;
    v44 = ++v47;
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v48,
      (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    if ( v44 && v46[v44 - 1] == 335 )
      v47 = v44 - 1;
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
  UserServantEntity_o *Entity; // x19
  UserGameEntity_o *SelfUserGame; // x22
  _BOOL8 v21; // x0
  const MethodInfo *v22; // x1
  __int64 v23; // x11
  WarehouseListViewItem_o *v24; // x20
  int64_t v25; // x0
  __int128 v26; // q0
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
  int v37; // w19
  _BOOL8 v38; // x0
  const MethodInfo *v39; // x1
  __int64 v40; // x11
  WarehouseListViewItem_o *current; // x22
  int64_t v42; // x0
  __int128 v43; // q0
  int64_t v44; // x23
  const MethodInfo *v45; // x2
  UnityEngine_Object_o *viewObject; // x23
  struct ListViewObject_o *v47; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v48; // [xsp+0h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v49; // [xsp+20h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v50; // [xsp+40h] [xbp-A0h] BYREF
  int v51[2]; // [xsp+60h] [xbp-80h]
  int v52; // [xsp+68h] [xbp-78h]
  System_Collections_Generic_List_Enumerator_T__o v53; // [xsp+70h] [xbp-70h] BYREF

  if ( (byte_42156F2 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_UserServantMaster___, userSvtId);
    sub_B0D8A4(&Method_DataManager_GetMasterData_UserServantStorageMaster___, v5);
    sub_B0D8A4(&Method_DataMasterBase_UserServantStorageMaster__UserServantEntity__long__GetEntity__, v6);
    sub_B0D8A4(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v9);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v10);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v11);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v12);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v13);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v14);
    sub_B0D8A4(&WarehouseListViewItem_TypeInfo, v15);
    byte_42156F2 = 1;
  }
  memset(&v53, 0, sizeof(v53));
  v52 = 0;
  itemList = this->fields.itemList;
  if ( itemList )
  {
    if ( (this->fields.kind & 0xFFFFFFFE) == 2 )
    {
      if ( userSvtId < 1 )
      {
        v18 = 0LL;
        goto LABEL_42;
      }
      Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( Instance )
      {
        Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_UserServantStorageMaster___);
        if ( Instance )
        {
          Instance = (DataManager_o *)DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
                                        (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)Instance,
                                        userSvtId,
                                        (const MethodInfo_2669DFC *)Method_DataMasterBase_UserServantStorageMaster__UserServantEntity__long__GetEntity__);
          itemList = this->fields.itemList;
          if ( itemList )
          {
            v18 = Instance;
LABEL_42:
            System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
              (System_Collections_Generic_List_Enumerator_T__o *)&v50,
              (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)itemList,
              (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
            v53 = *(System_Collections_Generic_List_Enumerator_T__o *)&v50.fields.currentCryptoKey;
            while ( 1 )
            {
              v38 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                      &v53,
                      (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
              if ( !v38 )
              {
                v51[0] = 342;
                v52 = 1;
                System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
                  &v53,
                  (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
                v52 = 0;
                return;
              }
              if ( v53.fields.current
                && (v40 = *(&WarehouseListViewItem_TypeInfo->_2.bitflags2 + 1),
                    *(&v53.fields.current->klass->_2.bitflags2 + 1) >= (unsigned int)v40) )
              {
                if ( (WarehouseListViewItem_c *)v53.fields.current->klass->_2.typeHierarchy[v40 - 1] == WarehouseListViewItem_TypeInfo )
                  current = (WarehouseListViewItem_o *)v53.fields.current;
                else
                  current = 0LL;
                if ( v18 )
                {
LABEL_47:
                  if ( !current )
                    sub_B0D97C(v38);
                  v42 = WarehouseListViewItem__get_UserSvtId(current, v39);
                  v43 = *(_OWORD *)&v18->fields.lookup;
                  v44 = v42;
                  *(_OWORD *)&v50.fields.currentCryptoKey = *(_OWORD *)&v18->fields.m_CachedPtr;
                  *(_OWORD *)&v50.fields.fakeValue = v43;
                  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
                  }
                  v49 = v50;
                  if ( v44 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44165732(&v49, 0LL) )
                    WarehouseListViewItem__Modify(current, (UserServantEntity_o *)v18, v45);
                  goto LABEL_58;
                }
              }
              else
              {
                current = 0LL;
                if ( v18 )
                  goto LABEL_47;
              }
              if ( !current )
                sub_B0D97C(v38);
LABEL_58:
              viewObject = (UnityEngine_Object_o *)current->fields.viewObject;
              if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              }
              if ( UnityEngine_Object__op_Inequality(viewObject, 0LL, 0LL) )
              {
                v47 = current->fields.viewObject;
                if ( !v47 )
                  sub_B0D97C(0LL);
                ((void (__fastcall *)(struct ListViewObject_o *, WarehouseListViewItem_o *, Il2CppMethodPointer))v47->klass->vtable._5_SetItem.method)(
                  v47,
                  current,
                  v47->klass->vtable._6_SetItem.methodPtr);
              }
            }
          }
        }
      }
LABEL_73:
      sub_B0D97C(Instance);
    }
    Entity = 0LL;
    SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
    if ( userSvtId >= 1 )
    {
      Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_73;
      Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                    Instance,
                                    (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_UserServantMaster___);
      if ( !Instance )
        goto LABEL_73;
      Entity = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
                 (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)Instance,
                 userSvtId,
                 (const MethodInfo_2669DFC *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    }
    Instance = (DataManager_o *)this->fields.itemList;
    if ( !Instance )
      goto LABEL_73;
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v50,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)Instance,
      (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    v53.fields.current = (Il2CppObject *)v50.fields.fakeValue;
    *(_OWORD *)&v53.fields.list = *(_OWORD *)&v50.fields.currentCryptoKey;
    while ( 1 )
    {
      v21 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v53,
              (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
      if ( !v21 )
      {
        v51[0] = 342;
        v37 = ++v52;
        System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
          &v53,
          (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
        if ( v37 && v51[v37 - 1] == 342 )
          v52 = v37 - 1;
        return;
      }
      if ( v53.fields.current
        && (v23 = *(&WarehouseListViewItem_TypeInfo->_2.bitflags2 + 1),
            *(&v53.fields.current->klass->_2.bitflags2 + 1) >= (unsigned int)v23) )
      {
        if ( (WarehouseListViewItem_c *)v53.fields.current->klass->_2.typeHierarchy[v23 - 1] == WarehouseListViewItem_TypeInfo )
          v24 = (WarehouseListViewItem_o *)v53.fields.current;
        else
          v24 = 0LL;
        if ( Entity )
        {
LABEL_20:
          if ( !v24 )
            sub_B0D97C(v21);
          v25 = WarehouseListViewItem__get_UserSvtId(v24, v22);
          v26 = *(_OWORD *)&Entity->fields.id.fields.fakeValue;
          v27 = v25;
          *(_OWORD *)&v50.fields.currentCryptoKey = *(_OWORD *)&Entity->fields.id.fields.currentCryptoKey;
          *(_OWORD *)&v50.fields.fakeValue = v26;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          }
          v48 = v50;
          if ( v27 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44165732(&v48, 0LL) )
            WarehouseListViewItem__Modify(v24, Entity, v28);
          goto LABEL_31;
        }
      }
      else
      {
        v24 = 0LL;
        if ( Entity )
          goto LABEL_20;
      }
      if ( !v24 )
        sub_B0D97C(v21);
LABEL_31:
      v29 = WarehouseListViewItem__get_UserSvtId(v24, v22);
      if ( !SelfUserGame )
        sub_B0D97C(v29);
      favoriteUserSvtId = SelfUserGame->fields.favoriteUserSvtId;
      v32 = v29;
      v33 = WarehouseListViewItem__get_UserSvtId(v24, v30);
      WarehouseListViewItem__Modify_26326392(
        v24,
        v32 == favoriteUserSvtId,
        v33 == SelfUserGame->fields.pushUserSvtId,
        v34);
      v35 = (UnityEngine_Object_o *)v24->fields.viewObject;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Inequality(v35, 0LL, 0LL) )
      {
        v36 = v24->fields.viewObject;
        if ( !v36 )
          sub_B0D97C(0LL);
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
  __int64 Item; // x0
  struct WarehouseListManager_o *parentManager; // x8
  struct WarehouseListViewManager_o *baseListViewManager; // x9
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x21
  int size; // w22
  unsigned int v16; // w23
  WarehouseListViewItem_o *v17; // x21
  __int64 v18; // x9
  int64_t UserSvtId; // x0
  const MethodInfo *v20; // x1
  int64_t v21; // x0
  struct WarehouseListManager_o *v22; // x8
  struct WarehouseListViewManager_o *v23; // x9
  WarehouseListViewManager_o *v24; // x0
  const MethodInfo *v25; // x1

  if ( (byte_421570D & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_long__int__ContainsKey__, selectServantIdDic);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_long__int__get_Count__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_long__int__get_Item__, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v8);
    sub_B0D8A4(&WarehouseListViewItem_TypeInfo, v9);
    byte_421570D = 1;
  }
  if ( selectServantIdDic
    && System_Collections_Generic_Dictionary_long__int___get_Count(
         selectServantIdDic,
         (const MethodInfo_2EB1E60 *)Method_System_Collections_Generic_Dictionary_long__int__get_Count__) )
  {
    WarehouseListViewManager__ReleaseAll(this, v10);
    parentManager = this->fields.parentManager;
    if ( !parentManager
      || (baseListViewManager = parentManager->fields.baseListViewManager) == 0LL
      || (parentManager->fields.totalSum = baseListViewManager->fields.selectSum,
          (itemList = this->fields.itemList) == 0LL) )
    {
LABEL_21:
      sub_B0D97C(Item);
    }
    size = itemList->fields._size;
    if ( size >= 1 )
    {
      v16 = 0;
      while ( 1 )
      {
        if ( itemList->fields._size <= v16 )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
        v17 = (WarehouseListViewItem_o *)itemList->fields._items->m_Items[v16];
        if ( !v17 )
          goto LABEL_21;
        v18 = *(&WarehouseListViewItem_TypeInfo->_2.bitflags2 + 1);
        if ( *(&v17->klass->_2.bitflags2 + 1) < (unsigned int)v18
          || (WarehouseListViewItem_c *)v17->klass->_2.typeHierarchy[v18 - 1] != WarehouseListViewItem_TypeInfo )
        {
          break;
        }
        UserSvtId = WarehouseListViewItem__get_UserSvtId(v17, (const MethodInfo *)WarehouseListViewItem_TypeInfo);
        Item = System_Collections_Generic_Dictionary_long__int___ContainsKey(
                 selectServantIdDic,
                 UserSvtId,
                 (const MethodInfo_2EB24D8 *)Method_System_Collections_Generic_Dictionary_long__int__ContainsKey__);
        if ( (Item & 1) != 0 )
        {
          v21 = WarehouseListViewItem__get_UserSvtId(v17, v20);
          Item = System_Collections_Generic_Dictionary_long__int___get_Item(
                   selectServantIdDic,
                   v21,
                   (const MethodInfo_2EB21A0 *)Method_System_Collections_Generic_Dictionary_long__int__get_Item__);
          v17->fields.selectNum = Item;
          v22 = this->fields.parentManager;
          ++this->fields.selectSum;
          if ( !v22 )
            goto LABEL_21;
          v23 = v22->fields.baseListViewManager;
          if ( !v23 )
            goto LABEL_21;
          v22->fields.totalSum = v23->fields.selectSum;
        }
        if ( (int)++v16 >= size )
          return;
        itemList = this->fields.itemList;
        if ( !itemList )
          goto LABEL_21;
      }
      v24 = (WarehouseListViewManager_o *)sub_B0DC70(v17);
      WarehouseListViewManager__IsDragStart(v24, v25);
    }
  }
}


void __fastcall WarehouseListViewManager__OnClickBonusFilterKind(
        WarehouseListViewManager_o *this,
        const MethodInfo *method)
{
  ListViewSort_o *sort; // x0
  System_Int32_array *bonusEventIdList; // x1
  System_Int32_array *servantFilterIdList; // x2

  if ( (byte_42156FD & 1) == 0 )
  {
    sub_B0D8A4(&SoundManager_TypeInfo, method);
    byte_42156FD = 1;
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
      sub_B0D97C(0LL);
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
  __int64 v9; // x1
  __int64 v10; // x2
  ServantFilterSelectMenu_CallbackFunc_o *v11; // x22
  __int64 v12; // x0
  CommonUI_o *v13; // x0
  int32_t v14; // w1
  WebViewManager_o *v15; // x0
  ListViewSort_o *v16; // x20
  CommonUI_o *v17; // x21
  __int64 v18; // x1
  __int64 v19; // x2
  ServantFilterSelectMenu_CallbackFunc_o *v20; // x22
  WebViewManager_o *v21; // x0
  CommonUI_o *v22; // x21
  __int64 v23; // x1
  __int64 v24; // x2

  if ( (byte_4215705 & 1) == 0 )
  {
    sub_B0D8A4(&ServantFilterSelectMenu_CallbackFunc_TypeInfo, method);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v3);
    sub_B0D8A4(&SoundManager_TypeInfo, v4);
    sub_B0D8A4(&Method_WarehouseListViewManager_EndSelectFilterKind__, v5);
    byte_4215705 = 1;
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
        Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        sort = this->fields.sort;
        v8 = (CommonUI_o *)Instance;
        v11 = (ServantFilterSelectMenu_CallbackFunc_o *)sub_B0D974(
                                                          ServantFilterSelectMenu_CallbackFunc_TypeInfo,
                                                          v9,
                                                          v10);
        ServantFilterSelectMenu_CallbackFunc___ctor(
          v11,
          (Il2CppObject *)this,
          Method_WarehouseListViewManager_EndSelectFilterKind__,
          0LL);
        if ( !v8 )
          goto LABEL_16;
        v13 = v8;
        v14 = 0;
        goto LABEL_15;
      case 1:
      case 3:
        v15 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        v16 = this->fields.sort;
        v17 = (CommonUI_o *)v15;
        v20 = (ServantFilterSelectMenu_CallbackFunc_o *)sub_B0D974(
                                                          ServantFilterSelectMenu_CallbackFunc_TypeInfo,
                                                          v18,
                                                          v19);
        ServantFilterSelectMenu_CallbackFunc___ctor(
          v20,
          (Il2CppObject *)this,
          Method_WarehouseListViewManager_EndSelectFilterKind__,
          0LL);
        if ( !v17 )
          goto LABEL_16;
        CommonUI__OpenServantFilterSelectMenu_17023928(v17, 5, v16, (ListViewManager_o *)this, v20, -1, 0LL);
        break;
      default:
        v21 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        sort = this->fields.sort;
        v22 = (CommonUI_o *)v21;
        v11 = (ServantFilterSelectMenu_CallbackFunc_o *)sub_B0D974(
                                                          ServantFilterSelectMenu_CallbackFunc_TypeInfo,
                                                          v23,
                                                          v24);
        ServantFilterSelectMenu_CallbackFunc___ctor(
          v11,
          (Il2CppObject *)this,
          Method_WarehouseListViewManager_EndSelectFilterKind__,
          0LL);
        if ( !v22 )
LABEL_16:
          sub_B0D97C(v12);
        v14 = 6;
        v13 = v22;
LABEL_15:
        CommonUI__OpenServantFilterSelectMenu(v13, v14, sort, v11, -1, 0LL);
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

  if ( (byte_42156FC & 1) == 0 )
  {
    sub_B0D8A4(&WarehouseListViewItem_TypeInfo, item);
    byte_42156FC = 1;
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
  struct ListViewSort_o *sort; // x8

  if ( (byte_4215708 & 1) == 0 )
  {
    sub_B0D8A4(&SoundManager_TypeInfo, method);
    byte_4215708 = 1;
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
      sub_B0D97C(v3);
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
  __int64 v10; // x1
  __int64 v11; // x2
  ServantSortSelectMenu_CallbackFunc_o *v12; // x22
  __int64 v13; // x0
  int32_t v14; // w1

  if ( (byte_4215703 & 1) == 0 )
  {
    sub_B0D8A4(&ServantSortSelectMenu_CallbackFunc_TypeInfo, method);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v3);
    sub_B0D8A4(&SoundManager_TypeInfo, v4);
    sub_B0D8A4(&Method_WarehouseListViewManager_EndSelectSortKind__, v5);
    byte_4215703 = 1;
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
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sort = this->fields.sort;
    v9 = (CommonUI_o *)Instance;
    v12 = (ServantSortSelectMenu_CallbackFunc_o *)sub_B0D974(ServantSortSelectMenu_CallbackFunc_TypeInfo, v10, v11);
    ServantSortSelectMenu_CallbackFunc___ctor(
      v12,
      (Il2CppObject *)this,
      Method_WarehouseListViewManager_EndSelectSortKind__,
      0LL);
    if ( !v9 )
      sub_B0D97C(v13);
    if ( kind < 4 )
      v14 = kind + 1;
    else
      v14 = 3;
    CommonUI__OpenServantSortSelectMenu(v9, v14, sort, 1, v12, 0LL);
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

  if ( (byte_4215702 & 1) == 0 )
  {
    sub_B0D8A4(&WarehouseListViewItem_TypeInfo, item);
    byte_4215702 = 1;
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
  UIScrollView_o *v7; // x0

  if ( (byte_42156F9 & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, method);
    byte_42156F9 = 1;
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
        v7 = this->fields.scrollView;
        if ( !v7
          || (((void (__fastcall *)(UIScrollView_o *, __int64, Il2CppMethodPointer))v7->klass->vtable._8_UpdateScrollbars.method)(
                v7,
                1LL,
                v7->klass->vtable._9_SetDragAmount.methodPtr),
              (v7 = this->fields.scrollView) == 0LL) )
        {
          sub_B0D97C(v7);
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
  int v6; // w21
  void *v7; // x20
  __int64 v8; // x22
  unsigned int v9; // w8

  if ( (byte_42156EF & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_WarehouseListViewObject__get_Count__, method);
    sub_B0D8A4(&Method_System_Collections_Generic_List_WarehouseListViewObject__get_Item__, v3);
    byte_42156EF = 1;
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
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
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
    sub_B0D97C(parentManager);
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
  Il2CppObject *current; // x20
  __int64 v10; // x9
  const MethodInfo *v11; // x3
  const MethodInfo *v12; // x1
  System_Collections_Generic_List_Enumerator_T__o v13; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_42156FB & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__, method);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v3);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v4);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v5);
    sub_B0D8A4(&WarehouseListViewItem_TypeInfo, v6);
    byte_42156FB = 1;
  }
  memset(&v13, 0, sizeof(v13));
  itemList = this->fields.itemList;
  this->fields.sellEnableRestCnt = 0;
  if ( !itemList )
    sub_B0D97C(0LL);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v13,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)itemList,
    (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  while ( 1 )
  {
    v8 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
           &v13,
           (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    if ( (v8 & 1) == 0 )
      break;
    current = v13.fields.current;
    if ( !v13.fields.current )
      goto LABEL_12;
    v10 = *(&WarehouseListViewItem_TypeInfo->_2.bitflags2 + 1);
    if ( *(&v13.fields.current->klass->_2.bitflags2 + 1) < (unsigned int)v10
      || (WarehouseListViewItem_c *)v13.fields.current->klass->_2.typeHierarchy[v10 - 1] != WarehouseListViewItem_TypeInfo )
    {
      v8 = sub_B0DC70(v13.fields.current);
LABEL_12:
      sub_B0D97C(v8);
    }
    ListViewItem__set_IsSelect((ListViewItem_o *)v13.fields.current, 0, 0LL);
    WarehouseListViewManager__ChangeSellEnableRestCnt(this, 1, (WarehouseListViewItem_o *)current, v11);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v13,
    (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
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
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *ObjectList; // x0
  int32_t size; // w8
  __int64 v16; // x1
  __int64 v17; // x2
  Il2CppObject *current; // x21
  System_Action_o *v19; // x22
  __int64 v20; // x0
  System_Collections_Generic_List_Enumerator_T__o v21; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_42156F7 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, *(_QWORD *)&mode);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_WarehouseListViewObject__Dispose__, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_WarehouseListViewObject__MoveNext__, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_WarehouseListViewObject__get_Current__, v9);
    sub_B0D8A4(&Method_System_Collections_Generic_List_WarehouseListViewObject__GetEnumerator__, v10);
    sub_B0D8A4(&Method_System_Collections_Generic_List_WarehouseListViewObject__get_Count__, v11);
    sub_B0D8A4(&Method_WarehouseListViewManager_OnMoveEnd__, v12);
    sub_B0D8A4(&StringLiteral_10060/*"OnMoveEnd"*/, v13);
    byte_42156F7 = 1;
  }
  memset(&v21, 0, sizeof(v21));
  ObjectList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)WarehouseListViewManager__get_ObjectList(
                                                                                                this,
                                                                                                *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_B0D97C(0LL);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10060/*"OnMoveEnd"*/,
      delay,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v21,
      ObjectList,
      (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_WarehouseListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v21,
              (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_WarehouseListViewObject__MoveNext__) )
    {
      current = v21.fields.current;
      v19 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v16, v17);
      System_Action___ctor(v19, (Il2CppObject *)this, Method_WarehouseListViewManager_OnMoveEnd__, 0LL);
      if ( !current )
        sub_B0D97C(v20);
      WarehouseListViewObject__Init_23730864((WarehouseListViewObject_o *)current, mode, v19, delay, 0LL);
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v21,
      (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_WarehouseListViewObject__Dispose__);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarehouseListViewManager__RequestListObject_26339248(
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
  int32_t size; // w8
  __int64 v14; // x1
  __int64 v15; // x2
  Il2CppObject *current; // x21
  System_Action_o *v17; // x22
  __int64 v18; // x0
  System_Collections_Generic_List_Enumerator_T__o v19; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_42156F8 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, *(_QWORD *)&mode);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_WarehouseListViewObject__Dispose__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_WarehouseListViewObject__MoveNext__, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_WarehouseListViewObject__get_Current__, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_WarehouseListViewObject__GetEnumerator__, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_List_WarehouseListViewObject__get_Count__, v9);
    sub_B0D8A4(&Method_WarehouseListViewManager_OnMoveEnd__, v10);
    sub_B0D8A4(&StringLiteral_10060/*"OnMoveEnd"*/, v11);
    byte_42156F8 = 1;
  }
  memset(&v19, 0, sizeof(v19));
  ObjectList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)WarehouseListViewManager__get_ObjectList(
                                                                                                this,
                                                                                                *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_B0D97C(0LL);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10060/*"OnMoveEnd"*/,
      0.0,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v19,
      ObjectList,
      (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_WarehouseListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v19,
              (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_WarehouseListViewObject__MoveNext__) )
    {
      current = v19.fields.current;
      v17 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v14, v15);
      System_Action___ctor(v17, (Il2CppObject *)this, Method_WarehouseListViewManager_OnMoveEnd__, 0LL);
      if ( !current )
        sub_B0D97C(v18);
      WarehouseListViewObject__Init_23730928((WarehouseListViewObject_o *)current, mode, v17, 0LL);
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v19,
      (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_WarehouseListViewObject__Dispose__);
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

  if ( (byte_42156F0 & 1) == 0 )
  {
    sub_B0D8A4(&WarehouseListViewManager_TypeInfo, method);
    byte_42156F0 = 1;
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
    sub_B0D97C(v4);
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
  if ( (byte_42156FE & 1) == 0 )
  {
    sub_B0D8A4(&int_TypeInfo, selectItem);
    sub_B0D8A4(&LocalizationManager_TypeInfo, v5);
    sub_B0D8A4(&SoundManager_TypeInfo, v6);
    this = (WarehouseListViewManager_o *)sub_B0D8A4(&StringLiteral_12507/*"SUM_INFO"*/, v7);
    byte_42156FE = 1;
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
        this = (WarehouseListViewManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12507/*"SUM_INFO"*/, 0LL);
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
            this = (WarehouseListViewManager_o *)System_String__Format_43845440(v14, v16, v17, 0LL);
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
          this = (WarehouseListViewManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12507/*"SUM_INFO"*/, 0LL);
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
              this = (WarehouseListViewManager_o *)System_String__Format_43845440(v27, v29, v30, 0LL);
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
    sub_B0D97C(this);
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

  if ( (byte_4215701 & 1) == 0 )
  {
    sub_B0D8A4(&SoundManager_TypeInfo, selectItem);
    byte_4215701 = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(0, 0LL);
  if ( !selectItem )
    sub_B0D97C(v5);
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

  if ( (byte_4215700 & 1) == 0 )
  {
    sub_B0D8A4(&SoundManager_TypeInfo, selectItem);
    byte_4215700 = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(11, 0LL);
  if ( !selectItem )
    sub_B0D97C(v5);
  selectItem->fields.isSwapLock ^= 1u;
  WarehouseListViewManager__RefrashListDisp(this, v6);
}


void __fastcall WarehouseListViewManager__SetDragEnd(WarehouseListViewManager_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  const MethodInfo *v4; // x2
  int32_t dragStartIndex; // w20
  int32_t dragEndIndex; // w21

  if ( (byte_4215711 & 1) == 0 )
  {
    sub_B0D8A4(&SoundManager_TypeInfo, method);
    byte_4215711 = 1;
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
  *(_OWORD *)&this->fields.dragSelectSum = xmmword_3204CE0;
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
  if ( (byte_421570F & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, *(_QWORD *)&index);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v7);
    sub_B0D8A4(&WarehouseListViewItem_TypeInfo, v8);
    this = (WarehouseListViewManager_o *)sub_B0D8A4(&WarehouseListViewObject_TypeInfo, v9);
    byte_421570F = 1;
  }
  itemSortList = v6->fields.itemSortList;
  if ( !itemSortList )
    goto LABEL_49;
  if ( itemSortList->fields._size <= (unsigned int)index )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
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
    sub_B0D97C(this);
  v21 = *(&WarehouseListViewObject_TypeInfo->_2.bitflags2 + 1);
  if ( *(&this->klass->_2.bitflags2 + 1) >= (unsigned int)v21
    && (WarehouseListViewObject_c *)this->klass->_2.typeHierarchy[v21 - 1] == WarehouseListViewObject_TypeInfo )
  {
    WarehouseListViewObject__SetupDisp((WarehouseListViewObject_o *)this, 0LL);
    return v15;
  }
LABEL_51:
  v23 = (WarehouseListViewManager_o *)sub_B0DC70(this);
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
  if ( (byte_421570E & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, *(_QWORD *)&startIndex);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v7);
    sub_B0D8A4(&WarehouseListViewItem_TypeInfo, v8);
    this = (WarehouseListViewManager_o *)sub_B0D8A4(&WarehouseListViewObject_TypeInfo, v9);
    byte_421570E = 1;
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
        sub_B0D97C(this);
      if ( v15 <= v14 )
      {
        v18 = parentManager->fields.totalSum + 1;
        while ( 1 )
        {
          itemSortList = v6->fields.itemSortList;
          if ( !itemSortList )
            goto LABEL_63;
          if ( itemSortList->fields._size <= (unsigned int)v15 )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
          v20 = (WarehouseListViewManager_o *)itemSortList->fields._items->m_Items[v15];
          if ( !v20 )
            goto LABEL_63;
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
        v24 = (WarehouseListViewManager_o *)sub_B0DC70(this);
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
  WarehouseListViewManager_o *v6; // x19
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  struct System_Collections_Generic_List_ListViewItem__o *itemSortList; // x25
  int size; // w21
  int v12; // w22
  __int64 v13; // x9
  UnityEngine_Object_o *scrollView; // x20

  v6 = this;
  if ( (byte_4215710 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, *(_QWORD *)&startIndex);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v7);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v8);
    this = (WarehouseListViewManager_o *)sub_B0D8A4(&WarehouseListViewItem_TypeInfo, v9);
    byte_4215710 = 1;
  }
  *(_OWORD *)&v6->fields.dragSelectSum = xmmword_3204CE0;
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
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
      this = (WarehouseListViewManager_o *)itemSortList->fields._items->m_Items[v12];
      if ( !this )
        goto LABEL_22;
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
    this = (WarehouseListViewManager_o *)sub_B0DC70(this);
LABEL_22:
    sub_B0D97C(this);
  }
LABEL_14:
  WarehouseListViewManager__SetDragSelectItem(v6, startIndex, startIndex, method);
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

  if ( (byte_4215707 & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_17044/*"btn_filter_on"*/, method);
    sub_B0D8A4(&StringLiteral_17043/*"btn_filter"*/, v3);
    byte_4215707 = 1;
  }
  sort = this->fields.sort;
  if ( !sort
    || (filterSprite = this->fields.filterSprite,
        sort = (ListViewSort_o *)ListViewSort__CheckFilterDefaultAll(sort, -1, 0LL),
        !filterSprite) )
  {
    sub_B0D97C(sort);
  }
  v6 = (System_String_o **)&StringLiteral_17043/*"btn_filter"*/;
  if ( ((unsigned __int8)sort & 1) == 0 )
    v6 = (System_String_o **)&StringLiteral_17044/*"btn_filter_on"*/;
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
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.callbackFunc,
    (System_Int32_array **)callback,
    (System_String_array **)callback,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  WarehouseListViewManager__SetMode_26337716(this, mode, v10);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarehouseListViewManager__SetMode_26337716(
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
  WarehouseListViewItem_o *current; // x20
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
  LocalizationManager_c **v33; // x21
  char v34; // w24
  __int64 v35; // x9
  const MethodInfo *v36; // x1
  _BOOL8 CanNotSelect; // x0
  struct WarehouseListManager_o *parentManager; // x8
  struct WarehouseListViewManager_o *baseListViewManager; // x9
  LocalizationManager_c **v40; // x28
  LocalizationManager_c *v41; // x0
  UILabel_o *selectDoneLabel; // x21
  System_String_o *v43; // x0
  struct WarehouseListManager_o *v44; // x8
  System_String_o *v45; // x22
  __int64 v46; // x0
  struct WarehouseListManager_o *v47; // x8
  Il2CppObject *v48; // x23
  Il2CppObject *v49; // x2
  System_String_o *v50; // x0
  __int64 v51; // x0
  const MethodInfo *v52; // x2
  struct WarehouseListManager_o *v53; // x8
  WarehouseListViewManager_o *v54; // x0
  __int64 v55; // x0
  const MethodInfo *v56; // x1
  const MethodInfo *v57; // x2
  int32_t v58; // w1
  const MethodInfo *v59; // x1
  int32_t sendMax; // [xsp+4h] [xbp-8Ch] BYREF
  System_Collections_Generic_List_Enumerator_T__o v61; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v62; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_42156F6 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__, *(_QWORD *)&mode);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v6);
    sub_B0D8A4(&int_TypeInfo, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v8);
    sub_B0D8A4(&LocalizationManager_TypeInfo, v9);
    sub_B0D8A4(&WarehouseListViewItem_TypeInfo, v10);
    sub_B0D8A4(&StringLiteral_12507/*"SUM_INFO"*/, v11);
    byte_42156F6 = 1;
  }
  memset(&v62, 0, sizeof(v62));
  this->fields.initMode = mode;
  this->fields.callbackCount = ListViewManager__get_ObjectSum((ListViewManager_o *)this, 0LL);
  ListViewManager__set_IsInput((ListViewManager_o *)this, mode == 2, 0LL);
  if ( (unsigned int)(mode - 1) < 2 )
  {
    itemList = this->fields.itemList;
    if ( itemList )
    {
      System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
        &v61,
        (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)itemList,
        (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
      v33 = &LocalizationManager_TypeInfo;
      v34 = 0;
      v62 = v61;
      while ( 1 )
      {
        v55 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                &v62,
                (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
        if ( (v55 & 1) == 0 )
          break;
        current = (WarehouseListViewItem_o *)v62.fields.current;
        if ( !v62.fields.current )
          goto LABEL_53;
        v35 = *(&WarehouseListViewItem_TypeInfo->_2.bitflags2 + 1);
        if ( *(&v62.fields.current->klass->_2.bitflags2 + 1) < (unsigned int)v35
          || (WarehouseListViewItem_c *)v62.fields.current->klass->_2.typeHierarchy[v35 - 1] != WarehouseListViewItem_TypeInfo )
        {
          sub_B0DC70(v62.fields.current);
LABEL_52:
          v55 = sub_B0DC70(current);
LABEL_53:
          sub_B0D97C(v55);
        }
        if ( ListViewItem__get_IsSelect((ListViewItem_o *)v62.fields.current, 0LL) )
        {
          CanNotSelect = WarehouseListViewItem__get_IsCanNotSelect(current, v36);
          if ( CanNotSelect )
          {
            parentManager = this->fields.parentManager;
            --this->fields.selectSum;
            if ( !parentManager )
              sub_B0D97C(CanNotSelect);
            baseListViewManager = parentManager->fields.baseListViewManager;
            if ( !baseListViewManager )
              sub_B0D97C(CanNotSelect);
            v40 = v33;
            parentManager->fields.totalSum = baseListViewManager->fields.selectSum;
            v41 = *v33;
            selectDoneLabel = this->fields.selectDoneLabel;
            if ( (BYTE3(v41->vtable._0_Equals.methodPtr) & 4) != 0 && !v41->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(v41);
            v43 = LocalizationManager__Get((System_String_o *)StringLiteral_12507/*"SUM_INFO"*/, 0LL);
            v44 = this->fields.parentManager;
            if ( !v44 )
              sub_B0D97C(v43);
            v45 = v43;
            LODWORD(v61.fields.list) = v44->fields.totalSum;
            v46 = j_il2cpp_value_box_0(int_TypeInfo, &v61);
            v47 = this->fields.parentManager;
            if ( !v47 )
              sub_B0D97C(v46);
            v48 = (Il2CppObject *)v46;
            sendMax = v47->fields.sendMax;
            v49 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &sendMax);
            v50 = System_String__Format_43845440(v45, v48, v49, 0LL);
            if ( !selectDoneLabel )
              sub_B0D97C(v50);
            UILabel__set_text(selectDoneLabel, v50, 0LL);
            v53 = this->fields.parentManager;
            if ( !v53 )
              sub_B0D97C(v51);
            v54 = v53->fields.baseListViewManager;
            if ( !v54 )
              sub_B0D97C(0LL);
            v33 = v40;
            WarehouseListViewManager__DecrementNumber(v54, current->fields.selectNum, v52);
            ListViewItem__set_IsSelect((ListViewItem_o *)current, 0, 0LL);
            v34 = 1;
          }
        }
      }
      System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
        &v62,
        (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
      if ( (v34 & 1) != 0 )
        WarehouseListViewManager__RefrashListDisp(this, v56);
      if ( this->fields.isInput )
        v58 = 3;
      else
        v58 = 2;
      goto LABEL_49;
    }
LABEL_69:
    sub_B0D97C(itemList);
  }
  if ( mode != 3 )
    return;
  itemList = this->fields.itemList;
  if ( !itemList )
    goto LABEL_69;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v61,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)itemList,
    (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  v62 = v61;
  while ( 1 )
  {
    v13 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v62,
            (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    if ( !v13 )
      break;
    current = (WarehouseListViewItem_o *)v62.fields.current;
    if ( !v62.fields.current )
      sub_B0D97C(v13);
    v15 = *(&WarehouseListViewItem_TypeInfo->_2.bitflags2 + 1);
    if ( *(&v62.fields.current->klass->_2.bitflags2 + 1) < (unsigned int)v15
      || (WarehouseListViewItem_c *)v62.fields.current->klass->_2.typeHierarchy[v15 - 1] != WarehouseListViewItem_TypeInfo )
    {
      goto LABEL_52;
    }
    if ( ListViewItem__get_IsSelect((ListViewItem_o *)v62.fields.current, 0LL) )
    {
      v17 = WarehouseListViewItem__get_IsCanNotSelect(current, v16);
      if ( v17 )
      {
        v18 = this->fields.parentManager;
        --this->fields.selectSum;
        if ( !v18 )
          sub_B0D97C(v17);
        v19 = v18->fields.baseListViewManager;
        if ( !v19 )
          sub_B0D97C(v17);
        v18->fields.totalSum = v19->fields.selectSum;
        v20 = this->fields.selectDoneLabel;
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v21 = LocalizationManager__Get((System_String_o *)StringLiteral_12507/*"SUM_INFO"*/, 0LL);
        v22 = this->fields.parentManager;
        if ( !v22 )
          sub_B0D97C(v21);
        v23 = v21;
        LODWORD(v61.fields.list) = v22->fields.totalSum;
        v24 = j_il2cpp_value_box_0(int_TypeInfo, &v61);
        v25 = this->fields.parentManager;
        if ( !v25 )
          sub_B0D97C(v24);
        v26 = (Il2CppObject *)v24;
        sendMax = v25->fields.sendMax;
        v27 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &sendMax);
        v28 = System_String__Format_43845440(v23, v26, v27, 0LL);
        if ( !v20 )
          sub_B0D97C(v28);
        UILabel__set_text(v20, v28, 0LL);
        v31 = this->fields.parentManager;
        if ( !v31 )
          sub_B0D97C(v29);
        v32 = v31->fields.baseListViewManager;
        if ( !v32 )
          sub_B0D97C(0LL);
        WarehouseListViewManager__DecrementNumber(v32, current->fields.selectNum, v30);
        ListViewItem__set_IsSelect((ListViewItem_o *)current, 0, 0LL);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v62,
    (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
  WarehouseListViewManager__RefrashListDisp(this, v59);
  v58 = 4;
LABEL_49:
  WarehouseListViewManager__RequestListObject_26339248(this, v58, v57);
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
  if ( (byte_42156F5 & 1) == 0 )
  {
    this = (WarehouseListViewManager_o *)sub_B0D8A4(&WarehouseListViewObject_TypeInfo, obj);
    byte_42156F5 = 1;
  }
  if ( !obj
    || (v6 = *(&WarehouseListViewObject_TypeInfo->_2.bitflags2 + 1), *(&obj->klass->_2.bitflags2 + 1) < (unsigned int)v6)
    || (WarehouseListViewObject_c *)obj->klass->_2.typeHierarchy[v6 - 1] != WarehouseListViewObject_TypeInfo )
  {
    sub_B0D97C(this);
  }
  if ( v5->fields.initMode == 2 )
    v7 = 3;
  else
    v7 = 2;
  WarehouseListViewObject__Init_23729960((WarehouseListViewObject_o *)obj, v7, 0LL);
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
  _BOOL4 isAscendingOrder; // w8
  System_String_o **v18; // x9
  System_String_o **v19; // x10
  System_String_o **v20; // x8
  struct ListViewSort_o *v21; // x8
  System_String_o **v22; // x8
  UnityEngine_Object_o *bonusFilterKindLabel; // x20
  UILabel_o *v24; // x20
  System_Int32_array *bonusEventIdList; // x1
  System_Int32_array *servantFilterIdList; // x2

  if ( (byte_421570A & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, method);
    sub_B0D8A4(&StringLiteral_17072/*"btn_sort_up"*/, v3);
    sub_B0D8A4(&StringLiteral_17156/*"btn_txt_up"*/, v4);
    sub_B0D8A4(&StringLiteral_17112/*"btn_txt_new"*/, v5);
    sub_B0D8A4(&StringLiteral_17102/*"btn_txt_down"*/, v6);
    sub_B0D8A4(&StringLiteral_17119/*"btn_txt_old"*/, v7);
    sub_B0D8A4(&StringLiteral_17069/*"btn_sort_down"*/, v8);
    byte_421570A = 1;
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
    v11 = this->fields.sortKindLabel;
    sort = (ListViewSort_o *)ListViewSort__GetSortKindButtonText(sort, 0LL);
    if ( !v11 )
      goto LABEL_46;
    UILabel__set_text(v11, (System_String_o *)sort, 0LL);
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
    v13 = this->fields.sort;
    if ( !v13 )
      goto LABEL_46;
    sortKind = v13->fields.sortKind;
    if ( sortKind == 11 || sortKind == 1 )
    {
      sort = (ListViewSort_o *)this->fields.sortExplanationSprite;
      if ( !sort )
        goto LABEL_46;
      v15 = (System_String_o **)(v13->fields.isAscendingOrder ? &StringLiteral_17119/*"btn_txt_old"*/ : &StringLiteral_17112/*"btn_txt_new"*/);
      UISprite__set_spriteName((UISprite_o *)sort, *v15, 0LL);
      v16 = this->fields.sort;
      if ( !v16 )
        goto LABEL_46;
      sort = (ListViewSort_o *)this->fields.sortOrderSprite;
      if ( !sort )
        goto LABEL_46;
      isAscendingOrder = v16->fields.isAscendingOrder;
      v18 = (System_String_o **)&StringLiteral_17069/*"btn_sort_down"*/;
      v19 = (System_String_o **)&StringLiteral_17072/*"btn_sort_up"*/;
    }
    else
    {
      sort = (ListViewSort_o *)this->fields.sortExplanationSprite;
      if ( !sort )
        goto LABEL_46;
      v20 = (System_String_o **)(v13->fields.isAscendingOrder ? &StringLiteral_17156/*"btn_txt_up"*/ : &StringLiteral_17102/*"btn_txt_down"*/);
      UISprite__set_spriteName((UISprite_o *)sort, *v20, 0LL);
      v21 = this->fields.sort;
      if ( !v21 )
        goto LABEL_46;
      sort = (ListViewSort_o *)this->fields.sortOrderSprite;
      if ( !sort )
        goto LABEL_46;
      isAscendingOrder = v21->fields.isAscendingOrder;
      v18 = (System_String_o **)&StringLiteral_17072/*"btn_sort_up"*/;
      v19 = (System_String_o **)&StringLiteral_17069/*"btn_sort_down"*/;
    }
    if ( isAscendingOrder )
      v22 = v18;
    else
      v22 = v19;
    UISprite__set_spriteName((UISprite_o *)sort, *v22, 0LL);
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
      v24 = this->fields.bonusFilterKindLabel;
      bonusEventIdList = this->fields.bonusEventIdList;
      servantFilterIdList = this->fields.servantFilterIdList;
      if ( this->fields.isQuestStart )
      {
        sort = (ListViewSort_o *)ListViewSort__GetBonusKindText_32859020(
                                   sort,
                                   bonusEventIdList,
                                   servantFilterIdList,
                                   0,
                                   0LL,
                                   0LL);
        if ( v24 )
        {
LABEL_43:
          UILabel__set_text(v24, (System_String_o *)sort, 0LL);
          return;
        }
      }
      else
      {
        sort = (ListViewSort_o *)ListViewSort__GetBonusKind2Text_32861208(
                                   sort,
                                   bonusEventIdList,
                                   servantFilterIdList,
                                   0LL,
                                   0LL,
                                   0LL,
                                   0LL);
        if ( v24 )
          goto LABEL_43;
      }
LABEL_46:
      sub_B0D97C(sort);
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
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *v11; // x8
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__c *klass; // x21
  __int64 v13; // x0
  Il2CppObject *current; // x20
  __int64 v15; // x9
  Il2CppClass *v16; // x8
  Il2CppType byval_arg; // q0
  UserServantEntity_o *v18; // x0
  UserServantEntity_o *v19; // x0
  UserServantEntity_o *v20; // x0
  UserServantEntity_o *v21; // x0
  bool v22; // w8
  UserServantEntity_o *v23; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v24; // [xsp+0h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v25; // [xsp+20h] [xbp-80h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v26; // [xsp+40h] [xbp-60h] BYREF

  if ( (byte_4215716 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__, isPushMode);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v7);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v8);
    sub_B0D8A4(&WarehouseListViewItem_TypeInfo, v9);
    byte_4215716 = 1;
  }
  memset(&v26, 0, sizeof(v26));
  SelfUserGame = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)UserGameMaster__getSelfUserGame(0LL);
  if ( !SelfUserGame
    || (v11 = SelfUserGame,
        (SelfUserGame = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this->fields.itemList) == 0LL) )
  {
    sub_B0D97C(SelfUserGame);
  }
  klass = v11[3].klass;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v25,
    SelfUserGame,
    (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  v26.fields.current = (Il2CppObject *)v25.fields.fakeValue;
  *(_OWORD *)&v26.fields.list = *(_OWORD *)&v25.fields.currentCryptoKey;
  while ( 1 )
  {
    v13 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v26,
            (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    if ( (v13 & 1) == 0 )
      break;
    current = v26.fields.current;
    if ( !v26.fields.current )
      goto LABEL_30;
    v15 = *(&WarehouseListViewItem_TypeInfo->_2.bitflags2 + 1);
    if ( *(&v26.fields.current->klass->_2.bitflags2 + 1) < (unsigned int)v15
      || (WarehouseListViewItem_c *)v26.fields.current->klass->_2.typeHierarchy[v15 - 1] != WarehouseListViewItem_TypeInfo )
    {
      v13 = sub_B0DC70(v26.fields.current);
LABEL_30:
      sub_B0D97C(v13);
    }
    v16 = v26.fields.current[7].klass;
    BYTE3(v26.fields.current[10].klass) = isPushMode;
    if ( !v16 )
      sub_B0D97C(v13);
    byval_arg = v16->_1.byval_arg;
    *(_OWORD *)&v25.fields.currentCryptoKey = *(_OWORD *)&v16->_1.name;
    *(Il2CppType *)&v25.fields.fakeValue = byval_arg;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    }
    v24 = v25;
    BYTE4(current[10].klass) = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44165732(&v24, 0LL) == (_QWORD)klass;
    if ( isPushMode )
    {
      v18 = (UserServantEntity_o *)current[7].klass;
      if ( !v18 )
        sub_B0D97C(0LL);
      if ( UserServantEntity__IsLeave(v18, 0LL) )
        goto LABEL_23;
      v19 = (UserServantEntity_o *)current[7].klass;
      if ( !v19 )
        sub_B0D97C(0LL);
      if ( UserServantEntity__IsEventJoin(v19, 0LL) )
        goto LABEL_23;
      v20 = (UserServantEntity_o *)current[7].klass;
      if ( !v20 )
        sub_B0D97C(0LL);
      if ( UserServantEntity__IsCombineMaterial(v20, 0LL) )
        goto LABEL_23;
      v21 = (UserServantEntity_o *)current[7].klass;
      if ( !v21 )
        sub_B0D97C(0LL);
      if ( UserServantEntity__IsStatusUp(v21, 0LL) )
      {
LABEL_23:
        v22 = 0;
      }
      else
      {
        v23 = (UserServantEntity_o *)current[7].klass;
        if ( !v23 )
          sub_B0D97C(0LL);
        v22 = !UserServantEntity__IsMaterialTd(v23, 0LL);
      }
    }
    else
    {
      v22 = 1;
    }
    BYTE5(current[10].klass) = v22;
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v26,
    (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
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

  if ( (byte_42156E8 & 1) == 0 )
  {
    sub_B0D8A4(&WarehouseListViewManager_CallbackFunc_TypeInfo, value);
    byte_42156E8 = 1;
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
    v8 = sub_B022BC(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (WarehouseListViewManager_o *)sub_B0DC70(v7);
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
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v12; // x19
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  Il2CppObject *current; // x21
  _BOOL8 v15; // x0
  srcLineSprite_o *Component_srcLineSprite; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v17; // x21
  ListViewItem_o *Item; // x0
  _BOOL8 v19; // x0
  System_Collections_Generic_List_Enumerator_T__o v21; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v22; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_42156ED & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, method);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v4);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v5);
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_WarehouseListViewObject___, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_WarehouseListViewObject__Add__, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_List_WarehouseListViewObject___ctor__, v9);
    sub_B0D8A4(&System_Collections_Generic_List_WarehouseListViewObject__TypeInfo, v10);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v11);
    byte_42156ED = 1;
  }
  memset(&v22, 0, sizeof(v22));
  v12 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_WarehouseListViewObject__TypeInfo,
                                                                                                  method,
                                                                                                  v2);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v12,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_WarehouseListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_B0D97C(0LL);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v21,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)objectList,
    (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v22 = v21;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v22,
            (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v22.fields.current;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v15 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v15 )
    {
      if ( !current )
        sub_B0D97C(v15);
      Component_srcLineSprite = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                  (UnityEngine_GameObject_o *)current,
                                  (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_WarehouseListViewObject___);
      v17 = (EventMissionProgressRequest_Argument_ProgressData_o *)Component_srcLineSprite;
      if ( !Component_srcLineSprite )
        sub_B0D97C(0LL);
      Item = (ListViewItem_o *)WarehouseListViewObject__GetItem(
                                 (WarehouseListViewObject_o *)Component_srcLineSprite,
                                 0LL);
      if ( !Item )
        sub_B0D97C(0LL);
      if ( Item->fields.isTermination )
      {
        v19 = ListViewManager__ClippingItem_23719204((ListViewManager_o *)this, Item, 0LL);
        if ( v19 )
        {
          if ( !v12 )
            sub_B0D97C(v19);
          goto LABEL_16;
        }
      }
      else
      {
        if ( !v12 )
          sub_B0D97C(Item);
LABEL_16:
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v12,
          v17,
          (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_WarehouseListViewObject__Add__);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v22,
    (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
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
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v12; // x19
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  Il2CppObject *current; // x20
  _BOOL8 v15; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *Component_srcLineSprite; // x0
  System_Collections_Generic_List_Enumerator_T__o v18; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v19; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_42156EC & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, method);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v4);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v5);
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_WarehouseListViewObject___, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_WarehouseListViewObject__Add__, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_List_WarehouseListViewObject___ctor__, v9);
    sub_B0D8A4(&System_Collections_Generic_List_WarehouseListViewObject__TypeInfo, v10);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v11);
    byte_42156EC = 1;
  }
  memset(&v19, 0, sizeof(v19));
  v12 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_WarehouseListViewObject__TypeInfo,
                                                                                                  method,
                                                                                                  v2);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v12,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_WarehouseListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_B0D97C(0LL);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v18,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)objectList,
    (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v19 = v18;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v19,
            (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v19.fields.current;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v15 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v15 )
    {
      if ( !current )
        sub_B0D97C(v15);
      Component_srcLineSprite = (EventMissionProgressRequest_Argument_ProgressData_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                                         (UnityEngine_GameObject_o *)current,
                                                                                         (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_WarehouseListViewObject___);
      if ( !v12 )
        sub_B0D97C(Component_srcLineSprite);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v12,
        Component_srcLineSprite,
        (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_WarehouseListViewObject__Add__);
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v19,
    (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
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

  if ( (byte_42156E9 & 1) == 0 )
  {
    sub_B0D8A4(&WarehouseListViewManager_CallbackFunc_TypeInfo, value);
    byte_42156E9 = 1;
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
    v8 = sub_B022BC(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (const MethodInfo *)sub_B0DC70(v7);
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
  sub_B0D840(p_method, object);
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
  if ( (byte_4211F33 & 1) == 0 )
  {
    sub_B0D8A4(&WarehouseListViewManager_ResultKind_TypeInfo, *(_QWORD *)&resultKind);
    byte_4211F33 = 1;
  }
  v11[2] = 0LL;
  v11[0] = j_il2cpp_value_box_0(WarehouseListViewManager_ResultKind_TypeInfo, &v12);
  v11[1] = (__int64)item;
  return (System_IAsyncResult_o *)sub_B0D848(this, v11, callback, object);
}


void __fastcall WarehouseListViewManager_CallbackFunc__EndInvoke(
        WarehouseListViewManager_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B0D84C(result, 0LL, method);
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
  __int64 v12; // x8
  unsigned int v13; // w23
  unsigned __int64 v14; // x10
  _DWORD *v15; // x11
  __int64 v16; // x0
  __int64 v17; // x0
  __int64 v18; // x0
  void (__fastcall **v19)(__int64 *, _QWORD, WarehouseListViewItem_o *, _QWORD); // x0
  WarehouseListViewManager_CallbackFunc_o *v20; // x8
  __int64 *v21; // x22
  __int64 v22; // x23
  void (__fastcall *v23)(unsigned int *, WarehouseListViewItem_o *, __int64); // x24
  char v24; // w24
  char v25; // w0
  unsigned int v26; // w24
  __int64 v27; // x8
  __int64 v28; // x1
  __int64 v29; // x2
  unsigned __int64 v30; // x10
  _DWORD *v31; // x11
  unsigned int v32; // [xsp+Ch] [xbp-54h] BYREF
  WarehouseListViewManager_CallbackFunc_o *v33; // [xsp+18h] [xbp-48h] BYREF

  v33 = this;
  v32 = resultKind;
  v4 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v4 )
  {
    v8 = &v33;
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
      v20 = v8[v9];
      v21 = *(__int64 **)&v20->fields.method;
      v22 = *(_QWORD *)&v20->fields.extra_arg;
      v23 = *(void (__fastcall **)(unsigned int *, WarehouseListViewItem_o *, __int64))&v20->fields.method_ptr;
      if ( *(__int16 *)(v22 + 72) == -1 )
        sub_B0D960(*(_QWORD *)&v20->fields.extra_arg, *(_QWORD *)&resultKind, item, method);
      if ( (sub_B0D8D4(v22) & 1) == 0 )
        break;
      if ( *(_BYTE *)(v22 + 74) != 2 )
        goto LABEL_36;
      v23((unsigned int *)v32, item, v22);
LABEL_38:
      if ( ++v9 == v7 )
        return;
    }
    if ( !v21 )
    {
      v23(&v32 - 4, item, v22);
      goto LABEL_38;
    }
    if ( *(__int16 *)(v22 + 72) != -1 && (*(_BYTE *)(*v21 + 277) & 1) == 0 && this->fields.m_target )
    {
      v24 = sub_B0D8CC(v22);
      v25 = sub_B0DCD0(v22);
      if ( (v24 & 1) != 0 )
      {
        v26 = v32;
        if ( (v25 & 1) != 0 )
        {
          v27 = *v21;
          v28 = *(_QWORD *)(v22 + 24);
          v29 = *(unsigned __int16 *)(v22 + 72);
          if ( *(_WORD *)(*v21 + 298) )
          {
            v30 = 0LL;
            v31 = (_DWORD *)(*(_QWORD *)(v27 + 176) + 8LL);
            while ( *((_QWORD *)v31 - 1) != v28 )
            {
              ++v30;
              v31 += 4;
              if ( v30 >= *(unsigned __int16 *)(*v21 + 298) )
                goto LABEL_35;
            }
            v18 = v27 + 16LL * (*v31 + (int)v29) + 312;
          }
          else
          {
LABEL_35:
            v18 = sub_AA67A0(v21, v28, v29);
          }
          v17 = *(_QWORD *)(v18 + 8);
        }
        else
        {
          v17 = *(_QWORD *)(*v21 + 16LL * *(unsigned __int16 *)(v22 + 72) + 320);
        }
        v19 = (void (__fastcall **)(__int64 *, _QWORD, WarehouseListViewItem_o *, _QWORD))sub_B0D954(v17, v22);
        (*v19)(v21, v26, item, v19);
      }
      else
      {
        v10 = *(unsigned __int16 *)(v22 + 72);
        if ( (v25 & 1) != 0 )
        {
          class_0 = j_il2cpp_method_get_class_0(v22);
          v12 = *v21;
          v13 = v32;
          if ( *(_WORD *)(*v21 + 298) )
          {
            v14 = 0LL;
            v15 = (_DWORD *)(*(_QWORD *)(v12 + 176) + 8LL);
            while ( *((_QWORD *)v15 - 1) != class_0 )
            {
              ++v14;
              v15 += 4;
              if ( v14 >= *(unsigned __int16 *)(*v21 + 298) )
                goto LABEL_11;
            }
            v16 = v12 + 16LL * (int)(*v15 + v10) + 312;
          }
          else
          {
LABEL_11:
            v16 = sub_AA67A0(v21, class_0, v10);
          }
          (*(void (__fastcall **)(__int64 *, _QWORD, WarehouseListViewItem_o *, _QWORD))v16)(
            v21,
            v13,
            item,
            *(_QWORD *)(v16 + 8));
        }
        else
        {
          (*(void (__fastcall **)(__int64 *, _QWORD, WarehouseListViewItem_o *, _QWORD))(*v21
                                                                                       + 16LL
                                                                                       * *(unsigned __int16 *)(v22 + 72)
                                                                                       + 312))(
            v21,
            v32,
            item,
            *(_QWORD *)(*v21 + 16LL * *(unsigned __int16 *)(v22 + 72) + 320));
        }
      }
      goto LABEL_38;
    }
LABEL_36:
    ((void (__fastcall *)(__int64 *, _QWORD, WarehouseListViewItem_o *, __int64))v23)(v21, v32, item, v22);
    goto LABEL_38;
  }
}