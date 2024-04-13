void __fastcall WarehouseListViewManager___cctor(const MethodInfo *method)
{
  int v1; // w1
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  BattleServantConfConponent_o *static_fields; // x0
  System_Int32_array **v15; // x1
  System_String_o *SORT_SAVE_KEY; // x19
  System_String_o *v17; // x0
  System_String_o *v18; // x19
  ListViewSort_o *v19; // x20
  struct WarehouseListViewManager_StaticFields *v20; // x0
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  System_String_o *v27; // x19
  System_String_o *v28; // x0
  System_String_o *v29; // x19
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
  ListViewSort_o *v41; // x20
  struct WarehouseListViewManager_StaticFields *v42; // x0
  System_String_array **v43; // x2
  System_String_array **v44; // x3
  System_Boolean_array **v45; // x4
  System_Int32_array **v46; // x5
  System_Int32_array *v47; // x6
  System_Int32_array *v48; // x7
  System_String_o *v49; // x19
  System_String_o *v50; // x0
  System_String_o *v51; // x19
  ListViewSort_o *v52; // x20
  struct WarehouseListViewManager_StaticFields *v53; // x0
  System_String_array **v54; // x2
  System_String_array **v55; // x3
  System_Boolean_array **v56; // x4
  System_Int32_array **v57; // x5
  System_Int32_array *v58; // x6
  System_Int32_array *v59; // x7
  int v60; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_42E9415 & 1) == 0 )
  {
    sub_B5D5C4(&ListViewSort_TypeInfo, v1, (_DWORD)v2, v3);
    sub_B5D5C4(&WarehouseListViewManager_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&StringLiteral_15616/*"Warehouse"*/, v11, v12, v13);
    byte_42E9415 = 1;
  }
  static_fields = (BattleServantConfConponent_o *)WarehouseListViewManager_TypeInfo->static_fields;
  v15 = (System_Int32_array **)StringLiteral_15616/*"Warehouse"*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_15616/*"Warehouse"*/;
  sub_B5D560(static_fields, v15, v2, v3, v4, v5, v6, v7);
  SORT_SAVE_KEY = WarehouseListViewManager_TypeInfo->static_fields->SORT_SAVE_KEY;
  v60 = 1;
  v17 = System_Int32__ToString((int32_t)&v60, 0LL);
  v18 = System_String__Concat_44577788(SORT_SAVE_KEY, v17, 0LL);
  v19 = (ListViewSort_o *)sub_B5D694(ListViewSort_TypeInfo);
  ListViewSort___ctor_34028932(v19, v18, 3, 0, 0LL);
  v20 = WarehouseListViewManager_TypeInfo->static_fields;
  v20->servantSortInfo = v19;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v20->servantSortInfo,
    (System_Int32_array **)v19,
    v21,
    v22,
    v23,
    v24,
    v25,
    v26);
  v27 = WarehouseListViewManager_TypeInfo->static_fields->SORT_SAVE_KEY;
  v60 = 2;
  v28 = System_Int32__ToString((int32_t)&v60, 0LL);
  v29 = System_String__Concat_44577788(v27, v28, 0LL);
  v30 = (ListViewSort_o *)sub_B5D694(ListViewSort_TypeInfo);
  ListViewSort___ctor_34028932(v30, v29, 3, 0, 0LL);
  v31 = WarehouseListViewManager_TypeInfo->static_fields;
  v31->servantEquipSortInfo = v30;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v31->servantEquipSortInfo,
    (System_Int32_array **)v30,
    v32,
    v33,
    v34,
    v35,
    v36,
    v37);
  v38 = WarehouseListViewManager_TypeInfo->static_fields->SORT_SAVE_KEY;
  v60 = 3;
  v39 = System_Int32__ToString((int32_t)&v60, 0LL);
  v40 = System_String__Concat_44577788(v38, v39, 0LL);
  v41 = (ListViewSort_o *)sub_B5D694(ListViewSort_TypeInfo);
  ListViewSort___ctor_34028932(v41, v40, 3, 0, 0LL);
  v42 = WarehouseListViewManager_TypeInfo->static_fields;
  v42->servantWarehouseSortInfo = v41;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v42->servantWarehouseSortInfo,
    (System_Int32_array **)v41,
    v43,
    v44,
    v45,
    v46,
    v47,
    v48);
  v49 = WarehouseListViewManager_TypeInfo->static_fields->SORT_SAVE_KEY;
  v60 = 4;
  v50 = System_Int32__ToString((int32_t)&v60, 0LL);
  v51 = System_String__Concat_44577788(v49, v50, 0LL);
  v52 = (ListViewSort_o *)sub_B5D694(ListViewSort_TypeInfo);
  ListViewSort___ctor_34028932(v52, v51, 3, 0, 0LL);
  v53 = WarehouseListViewManager_TypeInfo->static_fields;
  v53->servantEquipWarehouseSortInfo = v52;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v53->servantEquipWarehouseSortInfo,
    (System_Int32_array **)v52,
    v54,
    v55,
    v56,
    v57,
    v58,
    v59);
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
  *(_OWORD *)&this->fields.dragSelectSum = xmmword_32A3DA0;
  this->fields.isDragSelect = 1;
  this->fields.dragSelectFriendShipSum = 0;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarehouseListViewManager__CancelDragSelect(
        WarehouseListViewManager_o *this,
        int32_t index,
        const MethodInfo *method)
{
  __int64 v3; // x3
  WarehouseListViewManager_o *v5; // x20
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  struct System_Collections_Generic_List_ListViewItem__o *itemSortList; // x20
  __int64 v10; // x9
  WarehouseListViewManager_o *v11; // x0
  const MethodInfo *v12; // x1

  v5 = this;
  if ( (byte_42E9411 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, index, (_DWORD)method, v3);
    this = (WarehouseListViewManager_o *)sub_B5D5C4(&WarehouseListViewItem_TypeInfo, v6, v7, v8);
    byte_42E9411 = 1;
  }
  itemSortList = v5->fields.itemSortList;
  if ( !itemSortList )
    goto LABEL_10;
  if ( itemSortList->fields._size <= (unsigned int)index )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
  this = (WarehouseListViewManager_o *)itemSortList->fields._items->m_Items[index];
  if ( !this )
LABEL_10:
    sub_B5D69C(this, *(_QWORD *)&index);
  v10 = *(&WarehouseListViewItem_TypeInfo->_2.bitflags2 + 1);
  if ( *(&this->klass->_2.bitflags2 + 1) >= (unsigned int)v10
    && (WarehouseListViewItem_c *)this->klass->_2.typeHierarchy[v10 - 1] == WarehouseListViewItem_TypeInfo )
  {
    HIDWORD(this->fields.bottomItem) = -1;
  }
  else
  {
    v11 = (WarehouseListViewManager_o *)sub_B5D990(this);
    WarehouseListViewManager__GetModeKind(v11, v12);
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
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  unsigned int scaleType; // w8
  System_Int32_array **smallSizeSeed; // x1
  int v26; // w8
  struct ListViewSort_o *sort; // x8
  __int64 v28; // x0
  __int64 v29; // x1
  ListViewItem_o *current; // x20
  __int64 v31; // x9
  UnityEngine_Object_o *monitor; // x21
  __int64 v33; // x1
  ListViewObject_o *viewObject; // x0
  const MethodInfo *v35; // x2
  System_Collections_Generic_List_Enumerator_T__o v36; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v37; // [xsp+20h] [xbp-50h] BYREF

  v8 = this;
  if ( (byte_42E9409 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__,
      (_DWORD)method,
      (_DWORD)v2,
      v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v9, v10, v11);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v12, v13, v14);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v15, v16, v17);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v18, v19, v20);
    this = (WarehouseListViewManager_o *)sub_B5D5C4(&WarehouseListViewItem_TypeInfo, v21, v22, v23);
    byte_42E9409 = 1;
  }
  memset(&v37, 0, sizeof(v37));
  scaleType = v8->fields.scaleType;
  if ( scaleType < 2 )
  {
    smallSizeSeed = (System_Int32_array **)v8->fields.smallSizeSeed;
    v26 = 2;
  }
  else if ( scaleType == 2 )
  {
    smallSizeSeed = (System_Int32_array **)v8->fields.extremelySmallSizeSeed;
    v26 = 3;
  }
  else
  {
    if ( scaleType != 3 )
      goto LABEL_10;
    smallSizeSeed = (System_Int32_array **)v8->fields.normalSizeSeed;
    v26 = 1;
  }
  v8->fields.scaleType = v26;
  v8->fields.seed = (struct ListViewItemSeed_o *)smallSizeSeed;
  sub_B5D560((BattleServantConfConponent_o *)&v8->fields.seed, smallSizeSeed, v2, v3, v4, v5, v6, v7);
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
    &v36,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this,
    (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  v37 = v36;
  while ( 1 )
  {
    v28 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v37,
            (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    if ( (v28 & 1) == 0 )
      break;
    current = (ListViewItem_o *)v37.fields.current;
    if ( !v37.fields.current )
      goto LABEL_28;
    v31 = *(&WarehouseListViewItem_TypeInfo->_2.bitflags2 + 1);
    if ( *(&v37.fields.current->klass->_2.bitflags2 + 1) < (unsigned int)v31
      || (WarehouseListViewItem_c *)v37.fields.current->klass->_2.typeHierarchy[v31 - 1] != WarehouseListViewItem_TypeInfo )
    {
      v28 = sub_B5D990(v37.fields.current);
LABEL_28:
      sub_B5D69C(v28, v29);
    }
    monitor = (UnityEngine_Object_o *)v37.fields.current[6].monitor;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( !UnityEngine_Object__op_Equality(monitor, 0LL, 0LL) )
    {
      viewObject = current->fields.viewObject;
      if ( !viewObject )
        sub_B5D69C(0LL, v33);
      ListViewObject__SetItemSeed(viewObject, current, v8->fields.seed, 0LL);
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v37,
    (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
  WarehouseListViewManager__SetMode_26335900(v8, 2, v35);
  ListViewManager__SortItem((ListViewManager_o *)v8, -1, 0, -1, 0LL);
  this = (WarehouseListViewManager_o *)v8->fields.scrollBar;
  if ( !this
    || (this = (WarehouseListViewManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL)) == 0LL )
  {
LABEL_30:
    sub_B5D69C(this, method);
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
      sub_B5D69C(this, isPlus);
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
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  int v22; // w1
  int v23; // w2
  __int64 v24; // x3
  int v25; // w1
  int v26; // w2
  __int64 v27; // x3
  int v28; // w1
  int v29; // w2
  __int64 v30; // x3
  int v31; // w1
  int v32; // w2
  __int64 v33; // x3
  int v34; // w1
  int v35; // w2
  __int64 v36; // x3
  int v37; // w1
  int v38; // w2
  __int64 v39; // x3
  int v40; // w1
  int v41; // w2
  __int64 v42; // x3
  int v43; // w1
  int v44; // w2
  __int64 v45; // x3
  int v46; // w1
  int v47; // w2
  __int64 v48; // x3
  int v49; // w1
  int v50; // w2
  __int64 v51; // x3
  int v52; // w1
  int v53; // w2
  __int64 v54; // x3
  int v55; // w1
  int v56; // w2
  __int64 v57; // x3
  int64_t Instance; // x0
  __int64 v59; // x1
  UserServantMaster_o *MasterData_WarQuestSelectionMaster; // x24
  UserServantStorageMaster_o *v61; // x25
  System_String_array **v62; // x2
  System_String_array **v63; // x3
  System_Boolean_array **v64; // x4
  System_Int32_array **v65; // x5
  System_Int32_array *v66; // x6
  System_Int32_array *v67; // x7
  int64_t v68; // x26
  System_String_o *v69; // x21
  WarehouseListViewManager_c *v70; // x0
  struct ListViewSort_o *servantSortInfo; // x1
  struct ListViewSort_o **p_sort; // x22
  __int64 *v73; // x8
  WarehouseListViewManager_c *v74; // x0
  struct ListViewSort_o *servantEquipSortInfo; // x1
  struct ListViewSort_o **v76; // x22
  WarehouseListViewManager_c *v77; // x0
  struct ListViewSort_o *servantWarehouseSortInfo; // x1
  struct ListViewSort_o **v79; // x22
  WarehouseListViewManager_c *v80; // x0
  struct ListViewSort_o *servantEquipWarehouseSortInfo; // x1
  struct ListViewSort_o **v82; // x22
  int64_t v83; // x23
  int v84; // w8
  struct ListViewSort_o *sort; // x8
  struct ListViewSort_o **v86; // x22
  struct System_Int32_array *servantFilterEventIdList; // x9
  struct System_Int32_array *servantFilterIdList; // x9
  struct ListViewSort_o *v89; // x8
  System_String_array **v90; // x2
  System_String_array **v91; // x3
  System_Boolean_array **v92; // x4
  System_Int32_array **v93; // x5
  System_Int32_array *v94; // x6
  System_Int32_array *v95; // x7
  struct System_Int32_array *servantEquipFilterEventIdList; // x1
  struct System_Int32_array **p_servantFilterIdList; // x0
  struct ListViewSort_o *v98; // x8
  struct System_Int32_array *v99; // x1
  System_Int32_array *bonusEventIdList; // x1
  System_Int32_array *v101; // x2
  System_String_array **v102; // x2
  System_String_array **v103; // x3
  System_Boolean_array **v104; // x4
  System_Int32_array **v105; // x5
  System_Int32_array *v106; // x6
  System_Int32_array *v107; // x7
  unsigned int iconScaleKind; // w8
  struct ListViewItemSeed_o *normalSizeSeed; // x1
  UserDeckMaster_o *v110; // x24
  int v111; // w8
  __int64 v112; // x25
  int64_t v113; // x20
  __int64 v114; // x8
  __int128 v115; // q0
  System_Int64_array *v116; // x22
  int64_t v117; // x24
  int64_t v118; // x28
  UserServantEntity_o *v119; // x20
  __int64 v120; // x23
  int64_t v121; // x27
  int64_t v122; // x21
  WarehouseListViewItem_o *v123; // x26
  const MethodInfo *v124; // x3
  UILabel_o *emptyMessageLabel; // x20
  const MethodInfo *v126; // x1
  __int64 v127; // x0
  const MethodInfo *v128; // [xsp+0h] [xbp-E0h]
  System_String_o *v129; // [xsp+10h] [xbp-D0h]
  EventUpValSetupInfo_o *v130; // [xsp+18h] [xbp-C8h]
  System_Int64_array *v131; // [xsp+20h] [xbp-C0h]
  System_Int64_array *partyUserEquipList; // [xsp+28h] [xbp-B8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v133; // [xsp+30h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v134; // [xsp+50h] [xbp-90h]
  int32_t eventId; // [xsp+7Ch] [xbp-64h] BYREF
  System_Int64_array *equipIdList; // [xsp+80h] [xbp-60h] BYREF
  System_Int64_array *svtIdList; // [xsp+88h] [xbp-58h] BYREF

  if ( (byte_42E93EC & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_EventMaster___, kind, (_DWORD)setupInfo, method);
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserDeckMaster___, v7, v8, v9);
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserEventServantFatigueMaster___, v10, v11, v12);
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserServantMaster___, v13, v14, v15);
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserServantStorageMaster___, v16, v17, v18);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewItem__Add__, v19, v20, v21);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v22, v23, v24);
    sub_B5D5C4(&NetworkManager_TypeInfo, v25, v26, v27);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v28, v29, v30);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v31, v32, v33);
    sub_B5D5C4(&WarehouseListViewItem_TypeInfo, v34, v35, v36);
    sub_B5D5C4(&WarehouseListViewManager_TypeInfo, v37, v38, v39);
    sub_B5D5C4(&StringLiteral_11829/*"SERVANT_EQUIP_EMPTY"*/, v40, v41, v42);
    sub_B5D5C4(&StringLiteral_11824/*"SERVANT_EMPTY"*/, v43, v44, v45);
    sub_B5D5C4(&StringLiteral_11857/*"SERVANT_EQUIP_WAREHOUSE_EMPTY"*/, v46, v47, v48);
    sub_B5D5C4(&StringLiteral_12025/*"SERVANT_SORT_FILTER_RESULT_EMPTY"*/, v49, v50, v51);
    sub_B5D5C4(&StringLiteral_12203/*"SERVANT_WAREHOUSE_EMPTY"*/, v52, v53, v54);
    sub_B5D5C4(&StringLiteral_1/*""*/, v55, v56, v57);
    byte_42E93EC = 1;
  }
  equipIdList = 0LL;
  svtIdList = 0LL;
  eventId = 0;
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_95;
  MasterData_WarQuestSelectionMaster = (UserServantMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                (DataManager_o *)Instance,
                                                                (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserServantMaster___);
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_95;
  v61 = (UserServantStorageMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                        (DataManager_o *)Instance,
                                        (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserServantStorageMaster___);
  Instance = (int64_t)UserGameMaster__getSelfUserGame(0LL);
  v68 = Instance;
  v69 = (System_String_o *)StringLiteral_1/*""*/;
  this->fields.kind = kind;
  switch ( kind )
  {
    case 0:
      v70 = WarehouseListViewManager_TypeInfo;
      if ( (BYTE3(WarehouseListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !WarehouseListViewManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(WarehouseListViewManager_TypeInfo);
        v70 = WarehouseListViewManager_TypeInfo;
      }
      servantSortInfo = v70->static_fields->servantSortInfo;
      this->fields.sort = servantSortInfo;
      p_sort = &this->fields.sort;
      sub_B5D560(
        (BattleServantConfConponent_o *)&this->fields.sort,
        (System_Int32_array **)servantSortInfo,
        v62,
        v63,
        v64,
        v65,
        v66,
        v67);
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
      v73 = &StringLiteral_11824/*"SERVANT_EMPTY"*/;
      break;
    case 1:
      v74 = WarehouseListViewManager_TypeInfo;
      if ( (BYTE3(WarehouseListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !WarehouseListViewManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(WarehouseListViewManager_TypeInfo);
        v74 = WarehouseListViewManager_TypeInfo;
      }
      servantEquipSortInfo = v74->static_fields->servantEquipSortInfo;
      this->fields.sort = servantEquipSortInfo;
      v76 = &this->fields.sort;
      sub_B5D560(
        (BattleServantConfConponent_o *)&this->fields.sort,
        (System_Int32_array **)servantEquipSortInfo,
        v62,
        v63,
        v64,
        v65,
        v66,
        v67);
      if ( !this->fields.sort )
        goto LABEL_95;
      this->fields.sort->fields.listViewKind = 1;
      Instance = (int64_t)*v76;
      if ( !*v76 )
        goto LABEL_95;
      ListViewSort__Load((ListViewSort_o *)Instance, 0LL);
      if ( !MasterData_WarQuestSelectionMaster )
        goto LABEL_95;
      Instance = (int64_t)UserServantMaster__getServantEquipList(MasterData_WarQuestSelectionMaster, 0LL);
      v73 = &StringLiteral_11829/*"SERVANT_EQUIP_EMPTY"*/;
      break;
    case 2:
      v77 = WarehouseListViewManager_TypeInfo;
      if ( (BYTE3(WarehouseListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !WarehouseListViewManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(WarehouseListViewManager_TypeInfo);
        v77 = WarehouseListViewManager_TypeInfo;
      }
      servantWarehouseSortInfo = v77->static_fields->servantWarehouseSortInfo;
      this->fields.sort = servantWarehouseSortInfo;
      v79 = &this->fields.sort;
      sub_B5D560(
        (BattleServantConfConponent_o *)&this->fields.sort,
        (System_Int32_array **)servantWarehouseSortInfo,
        v62,
        v63,
        v64,
        v65,
        v66,
        v67);
      if ( !this->fields.sort )
        goto LABEL_95;
      this->fields.sort->fields.listViewKind = 0;
      Instance = (int64_t)*v79;
      if ( !*v79 )
        goto LABEL_95;
      ListViewSort__Load((ListViewSort_o *)Instance, 0LL);
      if ( !v61 )
        goto LABEL_95;
      Instance = (int64_t)UserServantStorageMaster__getKeepServantList(v61, 0LL);
      v73 = &StringLiteral_12203/*"SERVANT_WAREHOUSE_EMPTY"*/;
      break;
    case 3:
      v80 = WarehouseListViewManager_TypeInfo;
      if ( (BYTE3(WarehouseListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !WarehouseListViewManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(WarehouseListViewManager_TypeInfo);
        v80 = WarehouseListViewManager_TypeInfo;
      }
      servantEquipWarehouseSortInfo = v80->static_fields->servantEquipWarehouseSortInfo;
      this->fields.sort = servantEquipWarehouseSortInfo;
      v82 = &this->fields.sort;
      sub_B5D560(
        (BattleServantConfConponent_o *)&this->fields.sort,
        (System_Int32_array **)servantEquipWarehouseSortInfo,
        v62,
        v63,
        v64,
        v65,
        v66,
        v67);
      if ( !this->fields.sort )
        goto LABEL_95;
      this->fields.sort->fields.listViewKind = 1;
      Instance = (int64_t)*v82;
      if ( !*v82 )
        goto LABEL_95;
      ListViewSort__Load((ListViewSort_o *)Instance, 0LL);
      if ( !v61 )
        goto LABEL_95;
      Instance = (int64_t)UserServantStorageMaster__getServantEquipList(v61, 0LL);
      v73 = &StringLiteral_11857/*"SERVANT_EQUIP_WAREHOUSE_EMPTY"*/;
      break;
    default:
      v83 = 0LL;
      if ( !setupInfo )
        goto LABEL_43;
      goto LABEL_35;
  }
  v69 = (System_String_o *)*v73;
  v83 = Instance;
  if ( setupInfo )
  {
LABEL_35:
    v84 = this->fields.kind | 2;
    this->fields.isQuestStart = setupInfo->fields.isQuestStart;
    if ( v84 == 2 )
    {
      v86 = &this->fields.sort;
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
      v99 = setupInfo->fields.servantFilterEventIdList;
      this->fields.bonusEventIdList = v99;
      sub_B5D560(
        (BattleServantConfConponent_o *)&this->fields.bonusEventIdList,
        (System_Int32_array **)v99,
        v62,
        v63,
        v64,
        v65,
        v66,
        v67);
      servantEquipFilterEventIdList = setupInfo->fields.servantFilterIdList;
      p_servantFilterIdList = &this->fields.servantFilterIdList;
      this->fields.servantFilterIdList = servantEquipFilterEventIdList;
    }
    else
    {
      v86 = &this->fields.sort;
      v89 = this->fields.sort;
      if ( !v89 )
        goto LABEL_95;
      v89->fields.isBonusKind = 1;
      this->fields.servantFilterIdList = 0LL;
      sub_B5D560((BattleServantConfConponent_o *)&this->fields.servantFilterIdList, 0LL, v62, v63, v64, v65, v66, v67);
      servantEquipFilterEventIdList = setupInfo->fields.servantEquipFilterEventIdList;
      p_servantFilterIdList = &this->fields.bonusEventIdList;
      this->fields.bonusEventIdList = servantEquipFilterEventIdList;
    }
  }
  else
  {
LABEL_43:
    v86 = &this->fields.sort;
    v98 = this->fields.sort;
    this->fields.isQuestStart = 1;
    if ( !v98 )
      goto LABEL_95;
    v98->fields.isBonusKind = 0;
    this->fields.bonusEventIdList = 0LL;
    sub_B5D560((BattleServantConfConponent_o *)&this->fields.bonusEventIdList, 0LL, v62, v63, v64, v65, v66, v67);
    p_servantFilterIdList = &this->fields.servantFilterIdList;
    servantEquipFilterEventIdList = 0LL;
    this->fields.servantFilterIdList = 0LL;
  }
  sub_B5D560(
    (BattleServantConfConponent_o *)p_servantFilterIdList,
    (System_Int32_array **)servantEquipFilterEventIdList,
    v90,
    v91,
    v92,
    v93,
    v94,
    v95);
  Instance = (int64_t)*v86;
  if ( !*v86 )
    goto LABEL_95;
  if ( *(_BYTE *)(Instance + 61) )
  {
    bonusEventIdList = this->fields.bonusEventIdList;
    v101 = this->fields.servantFilterIdList;
    if ( this->fields.isQuestStart )
      ListViewSort__AlignBonusKind((ListViewSort_o *)Instance, bonusEventIdList, v101, 0, 0LL, 0LL);
    else
      ListViewSort__AlignBonusKind2((ListViewSort_o *)Instance, bonusEventIdList, v101, 0LL, 0LL, 0LL, 0LL);
  }
  Instance = (int64_t)this->fields.bonusFilterKindButton;
  if ( !Instance )
    goto LABEL_95;
  Instance = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  if ( !*v86 )
    goto LABEL_95;
  if ( !Instance )
    goto LABEL_95;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, (*v86)->fields.isBonusKind, 0LL);
  if ( !*v86 )
    goto LABEL_95;
  iconScaleKind = (*v86)->fields.iconScaleKind;
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
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.seed,
    (System_Int32_array **)normalSizeSeed,
    v102,
    v103,
    v104,
    v105,
    v106,
    v107);
LABEL_65:
  *(_QWORD *)&this->fields.sellEnableRestCnt = 0LL;
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
  *(_OWORD *)&this->fields.dragSelectSum = xmmword_32A3DA0;
  this->fields.isDragSelect = 1;
  this->fields.dragSelectFriendShipSum = 0;
  if ( !v83 )
    goto LABEL_90;
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_95;
  v110 = (UserDeckMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                               (DataManager_o *)Instance,
                               (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserDeckMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Instance = NetworkManager__get_UserId(0LL);
  if ( !v110
    || (UserDeckMaster__getPartyList(v110, &svtIdList, &equipIdList, Instance, 0LL),
        (Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0)
    || (Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                              (DataManager_o *)Instance,
                              (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_EventMaster___)) == 0 )
  {
LABEL_95:
    sub_B5D69C(Instance, v59);
  }
  Instance = EventMaster__IsEnableFatigueEvent((EventMaster_o *)Instance, &eventId, 0LL);
  v131 = 0LL;
  if ( (Instance & 1) != 0 )
  {
    Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_95;
    Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserEventServantFatigueMaster___);
    if ( !Instance )
      goto LABEL_95;
    Instance = (int64_t)UserEventServantFatigueMaster__GetRecoverySvtIdList(
                          (UserEventServantFatigueMaster_o *)Instance,
                          eventId,
                          0LL);
    v131 = (System_Int64_array *)Instance;
  }
  v111 = *(_DWORD *)(v83 + 24);
  if ( v111 >= 1 )
  {
    v112 = 0LL;
    v113 = v83 + 32;
    v129 = v69;
    v130 = setupInfo;
    do
    {
      if ( (unsigned int)v112 >= v111 )
        goto LABEL_96;
      v114 = *(_QWORD *)(v113 + 8 * v112);
      if ( !v114 )
        goto LABEL_95;
      v115 = *(_OWORD *)(v114 + 32);
      *(_OWORD *)&v134.fields.currentCryptoKey = *(_OWORD *)(v114 + 16);
      *(_OWORD *)&v134.fields.fakeValue = v115;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      }
      v133 = v134;
      Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v133, 0LL);
      if ( (unsigned int)v112 >= *(_DWORD *)(v83 + 24) )
      {
LABEL_96:
        v127 = sub_B5D6C8(Instance);
        sub_B5D668(v127, 0LL);
      }
      if ( !v68 )
        goto LABEL_95;
      v116 = svtIdList;
      v117 = v83;
      v118 = v113;
      v119 = *(UserServantEntity_o **)(v113 + 8 * v112);
      partyUserEquipList = equipIdList;
      v120 = *(_QWORD *)(v68 + 112);
      v121 = Instance;
      v122 = v68;
      v123 = (WarehouseListViewItem_o *)sub_B5D694(WarehouseListViewItem_TypeInfo);
      WarehouseListViewItem___ctor(v123, v112, v119, v130, v116, partyUserEquipList, v131, v121 == v120, v128);
      Instance = (int64_t)this->fields.itemList;
      if ( !Instance )
        goto LABEL_95;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)Instance,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v123,
        (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
      WarehouseListViewManager__ChangeSellEnableRestCnt(this, 1, v123, v124);
      v111 = *(_DWORD *)(v117 + 24);
      ++v112;
      v83 = v117;
      v68 = v122;
      v113 = v118;
    }
    while ( (int)v112 < v111 );
    v69 = v129;
    if ( (int)v112 > 0 )
      v69 = (System_String_o *)StringLiteral_12025/*"SERVANT_SORT_FILTER_RESULT_EMPTY"*/;
  }
LABEL_90:
  emptyMessageLabel = this->fields.emptyMessageLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  Instance = (int64_t)LocalizationManager__Get(v69, 0LL);
  if ( !emptyMessageLabel )
    goto LABEL_95;
  UILabel__set_text(emptyMessageLabel, (System_String_o *)Instance, 0LL);
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
  WarehouseListViewManager__SetFilterButtonImage(this, v126);
  ListViewManager__CheckScroll((ListViewManager_o *)this, this->fields.scaleType, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarehouseListViewManager__DecideDragSelect(
        WarehouseListViewManager_o *this,
        int32_t index,
        const MethodInfo *method)
{
  __int64 v3; // x3
  WarehouseListViewManager_o *v5; // x19
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  struct System_Collections_Generic_List_ListViewItem__o *itemSortList; // x21
  ListViewItem_o *v10; // x20
  __int64 v11; // x9
  _BOOL4 isDragSelect; // w21
  const MethodInfo *v13; // x2
  const MethodInfo *v14; // x3
  const MethodInfo *v15; // x3
  struct WarehouseListManager_o *parentManager; // x8
  struct WarehouseListManager_o *v17; // x8
  struct WarehouseListViewManager_o *baseListViewManager; // x9
  int32_t selectSum; // w9
  WarehouseListViewManager_o *v20; // x0
  bool v21; // w1
  struct WarehouseListManager_o *v22; // x8
  struct WarehouseListViewManager_o *v23; // x9
  WarehouseListViewManager_o *v24; // x0
  const MethodInfo *v25; // x1
  int32_t friendShipSum[2]; // [xsp+8h] [xbp-18h] BYREF

  v5 = this;
  if ( (byte_42E9410 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, index, (_DWORD)method, v3);
    this = (WarehouseListViewManager_o *)sub_B5D5C4(&WarehouseListViewItem_TypeInfo, v6, v7, v8);
    byte_42E9410 = 1;
  }
  *(_QWORD *)friendShipSum = 0LL;
  itemSortList = v5->fields.itemSortList;
  if ( !itemSortList )
    goto LABEL_27;
  if ( itemSortList->fields._size <= (unsigned int)index )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
  v10 = itemSortList->fields._items->m_Items[index];
  if ( !v10 )
    goto LABEL_27;
  v11 = *(&WarehouseListViewItem_TypeInfo->_2.bitflags2 + 1);
  if ( *(&v10->klass->_2.bitflags2 + 1) >= (unsigned int)v11
    && (WarehouseListViewItem_c *)v10->klass->_2.typeHierarchy[v11 - 1] == WarehouseListViewItem_TypeInfo )
  {
    if ( SHIDWORD(v10[2].monitor) >= 1 )
    {
      isDragSelect = v5->fields.isDragSelect;
      this = (WarehouseListViewManager_o *)ListViewItem__get_IsSelect(v10, 0LL);
      if ( isDragSelect )
      {
        if ( ((unsigned __int8)this & 1) == 0 )
        {
          this = (WarehouseListViewManager_o *)v5->fields.parentManager;
          if ( this )
          {
            WarehouseListManager__GetSelectItemNum(
              (WarehouseListManager_o *)this,
              &friendShipSum[1],
              friendShipSum,
              v14);
            parentManager = v5->fields.parentManager;
            if ( parentManager )
            {
              if ( friendShipSum[1] >= parentManager->fields.sendMax && !BYTE6(v10[1].fields.sortValue1) )
                goto LABEL_26;
              v10->fields.selectNum = parentManager->fields.totalSum;
              v17 = v5->fields.parentManager;
              ++v5->fields.selectSum;
              if ( v17 )
              {
                baseListViewManager = v17->fields.baseListViewManager;
                if ( baseListViewManager )
                {
                  selectSum = baseListViewManager->fields.selectSum;
                  v20 = v5;
                  v21 = 0;
LABEL_25:
                  v17->fields.totalSum = selectSum;
                  WarehouseListViewManager__ChangeSellEnableRestCnt(v20, v21, (WarehouseListViewItem_o *)v10, v15);
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
        v22 = v5->fields.parentManager;
        if ( v22 )
        {
          this = v22->fields.baseListViewManager;
          if ( this )
          {
            WarehouseListViewManager__DecrementNumber(this, v10->fields.selectNum, v13);
            ListViewItem__set_IsSelect(v10, 0, 0LL);
            v17 = v5->fields.parentManager;
            --v5->fields.selectSum;
            if ( v17 )
            {
              v23 = v17->fields.baseListViewManager;
              if ( v23 )
              {
                selectSum = v23->fields.selectSum;
                v21 = 1;
                v20 = v5;
                goto LABEL_25;
              }
            }
          }
        }
LABEL_27:
        sub_B5D69C(this, *(_QWORD *)&index);
      }
    }
LABEL_26:
    HIDWORD(v10[2].monitor) = -1;
    return;
  }
  v24 = (WarehouseListViewManager_o *)sub_B5D990(v10);
  WarehouseListViewManager__CancelDragEnd(v24, v25);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarehouseListViewManager__DecrementNumber(
        WarehouseListViewManager_o *this,
        int32_t selectNum,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x0
  int32_t klass; // w9
  _BOOL8 v17; // x0
  __int64 v18; // x1
  System_Collections_Generic_List_Enumerator_T__o v19; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_42E93FD & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__,
      selectNum,
      (_DWORD)method,
      v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v6, v7, v8);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v9, v10, v11);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v12, v13, v14);
    byte_42E93FD = 1;
  }
  memset(&v19, 0, sizeof(v19));
  itemList = this->fields.itemList;
  if ( !itemList )
    sub_B5D69C(0LL, *(_QWORD *)&selectNum);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v19,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)itemList,
    (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  while ( 1 )
  {
    v17 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v19,
            (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    if ( !v17 )
      break;
    if ( !v19.fields.current )
      sub_B5D69C(v17, v18);
    klass = (int32_t)v19.fields.current[1].klass;
    if ( klass > selectNum )
      LODWORD(v19.fields.current[1].klass) = klass - 1;
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v19,
    (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
}


void __fastcall WarehouseListViewManager__DeleteContinueData(const MethodInfo *method)
{
  __int64 v1; // x1
  int v2; // w2
  __int64 v3; // x3
  WarehouseListViewManager_c *v4; // x0
  ListViewSort_o *servantSortInfo; // x0

  if ( (byte_42E93E8 & 1) == 0 )
  {
    sub_B5D5C4(&WarehouseListViewManager_TypeInfo, v1, v2, v3);
    byte_42E93E8 = 1;
  }
  v4 = WarehouseListViewManager_TypeInfo;
  if ( (BYTE3(WarehouseListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarehouseListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarehouseListViewManager_TypeInfo);
    v4 = WarehouseListViewManager_TypeInfo;
  }
  servantSortInfo = v4->static_fields->servantSortInfo;
  if ( !servantSortInfo
    || (ListViewSort__DeleteContinueData(servantSortInfo, 0LL),
        (servantSortInfo = WarehouseListViewManager_TypeInfo->static_fields->servantEquipSortInfo) == 0LL)
    || (ListViewSort__DeleteContinueData(servantSortInfo, 0LL),
        (servantSortInfo = WarehouseListViewManager_TypeInfo->static_fields->servantWarehouseSortInfo) == 0LL)
    || (ListViewSort__DeleteContinueData(servantSortInfo, 0LL),
        (servantSortInfo = WarehouseListViewManager_TypeInfo->static_fields->servantEquipWarehouseSortInfo) == 0LL) )
  {
    sub_B5D69C(servantSortInfo, v1);
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
  __int64 v3; // x3
  char v6; // w1
  int v7; // w2
  __int64 v8; // x3
  char v9; // w1
  int v10; // w2
  __int64 v11; // x3
  const MethodInfo *v12; // x1
  CommonUI_o *Instance; // x20
  System_Action_o *v14; // x21
  __int64 v15; // x0
  __int64 v16; // x1

  if ( (byte_42E9404 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, isDecide, (_DWORD)method, v3);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6, v7, v8);
    sub_B5D5C4(&Method_WarehouseListViewManager_EndCloseSelectFilterKind__, v9, v10, v11);
    byte_42E9404 = 1;
  }
  if ( isDecide )
  {
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
    WarehouseListViewManager__SetFilterButtonImage(this, v12);
    ListViewManager__CheckScroll((ListViewManager_o *)this, this->fields.scaleType, 0LL);
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v14 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(v14, (Il2CppObject *)this, Method_WarehouseListViewManager_EndCloseSelectFilterKind__, 0LL);
  if ( !Instance )
    sub_B5D69C(v15, v16);
  CommonUI__CloseServantFilterSelectMenu(Instance, v14, 0LL);
}


void __fastcall WarehouseListViewManager__EndSelectSortKind(
        WarehouseListViewManager_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v3; // x3
  CommonUI_o *Instance; // x0
  __int64 v7; // x1

  if ( (byte_42E9402 & 1) == 0 )
  {
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, isDecide, (_DWORD)method, v3);
    byte_42E9402 = 1;
  }
  if ( isDecide )
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B5D69C(0LL, v7);
  CommonUI__CloseServantSortSelectMenu(Instance, 0LL, 0LL);
}


// local variable allocation has failed, the output may be wrong!
int64_t __fastcall WarehouseListViewManager__GetAmountSortValue(
        WarehouseListViewManager_o *this,
        int32_t svtId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  WarehouseListViewManager_o *v5; // x20
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x25
  signed __int64 size; // x22
  int64_t v14; // x21
  unsigned __int64 v15; // x23
  ListViewItem_o *v16; // x8
  __int64 v17; // x11

  v5 = this;
  if ( (byte_42E9407 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, svtId, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v6, v7, v8);
    this = (WarehouseListViewManager_o *)sub_B5D5C4(&WarehouseListViewItem_TypeInfo, v9, v10, v11);
    byte_42E9407 = 1;
  }
  itemList = v5->fields.itemList;
  if ( !itemList )
    goto LABEL_17;
  size = itemList->fields._size;
  if ( (int)size >= 1 )
  {
    v14 = 0LL;
    v15 = 0LL;
    do
    {
      if ( v15 >= (unsigned int)itemList->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
      v16 = itemList->fields._items->m_Items[v15];
      if ( !v16 )
        break;
      v17 = *(&WarehouseListViewItem_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v16->klass->_2.bitflags2 + 1) < (unsigned int)v17
        || (WarehouseListViewItem_c *)v16->klass->_2.typeHierarchy[v17 - 1] != WarehouseListViewItem_TypeInfo )
      {
        break;
      }
      ++v15;
      if ( (WarehouseListViewItem_c *)v16->klass->_2.typeHierarchy[*(&WarehouseListViewItem_TypeInfo->_2.bitflags2 + 1)
                                                                 - 1] != WarehouseListViewItem_TypeInfo )
        v16 = 0LL;
      if ( v16[1].fields.selectNum == svtId )
        ++v14;
      if ( (__int64)v15 >= size )
        return v14;
      itemList = v5->fields.itemList;
    }
    while ( itemList );
LABEL_17:
    sub_B5D69C(this, *(_QWORD *)&svtId);
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
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x20
  ListViewItem_o *v10; // x8
  __int64 v11; // x11

  if ( (byte_42E9413 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, index, (_DWORD)method, v3);
    sub_B5D5C4(&WarehouseListViewItem_TypeInfo, v6, v7, v8);
    byte_42E9413 = 1;
  }
  itemList = this->fields.itemList;
  if ( !itemList )
    return 0LL;
  if ( itemList->fields._size <= (unsigned int)index )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
  v10 = itemList->fields._items->m_Items[index];
  if ( !v10 )
    return 0LL;
  v11 = *(&WarehouseListViewItem_TypeInfo->_2.bitflags2 + 1);
  if ( *(&v10->klass->_2.bitflags2 + 1) < (unsigned int)v11 )
    return 0LL;
  if ( (WarehouseListViewItem_c *)v10->klass->_2.typeHierarchy[v11 - 1] == WarehouseListViewItem_TypeInfo )
    return (WarehouseListViewItem_o *)itemList->fields._items->m_Items[index];
  return 0LL;
}


int32_t __fastcall WarehouseListViewManager__GetModeKind(WarehouseListViewManager_o *this, const MethodInfo *method)
{
  struct WarehouseListMenu_o *warehouseListMenu; // x8

  warehouseListMenu = this->fields.warehouseListMenu;
  if ( !warehouseListMenu )
    sub_B5D69C(this, method);
  return warehouseListMenu->fields.modeKind;
}


System_String_o *__fastcall WarehouseListViewManager__GetScaleButtonSpriteName(
        WarehouseListViewManager_o *this,
        const MethodInfo *method)
{
  ListViewSort_o *sort; // x0

  sort = this->fields.sort;
  if ( !sort )
    sub_B5D69C(0LL, method);
  return ListViewSort__GetScaleKindSpriteName(sort, this->fields.scaleType, 0LL);
}


void __fastcall WarehouseListViewManager__GetSelectItemNum(
        WarehouseListViewManager_o *this,
        int32_t *normalSum,
        int32_t *friendShipSum,
        const MethodInfo *method)
{
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x0
  Il2CppObject *current; // x21
  __int64 v21; // x9
  int32_t *v22; // x8
  __int64 v23; // x0
  __int64 v24; // x1
  System_Collections_Generic_List_Enumerator_T__o v25; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_42E9412 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__,
      (_DWORD)normalSum,
      (_DWORD)friendShipSum,
      method);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v7, v8, v9);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v10, v11, v12);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v13, v14, v15);
    sub_B5D5C4(&WarehouseListViewItem_TypeInfo, v16, v17, v18);
    byte_42E9412 = 1;
  }
  memset(&v25, 0, sizeof(v25));
  *normalSum = 0;
  *friendShipSum = 0;
  itemList = this->fields.itemList;
  if ( !itemList )
    sub_B5D69C(0LL, normalSum);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v25,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)itemList,
    (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  while ( 1 )
  {
    v23 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v25,
            (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    if ( (v23 & 1) == 0 )
      break;
    current = v25.fields.current;
    if ( !v25.fields.current )
      goto LABEL_16;
    v21 = *(&WarehouseListViewItem_TypeInfo->_2.bitflags2 + 1);
    if ( *(&v25.fields.current->klass->_2.bitflags2 + 1) < (unsigned int)v21
      || (WarehouseListViewItem_c *)v25.fields.current->klass->_2.typeHierarchy[v21 - 1] != WarehouseListViewItem_TypeInfo )
    {
      v23 = sub_B5D990(v25.fields.current);
LABEL_16:
      sub_B5D69C(v23, v24);
    }
    if ( ListViewItem__get_IsSelect((ListViewItem_o *)v25.fields.current, 0LL) )
    {
      if ( BYTE6(current[10].klass) )
        v22 = friendShipSum;
      else
        v22 = normalSum;
      ++*v22;
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v25,
    (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
}


void __fastcall WarehouseListViewManager__GetSelectList(
        WarehouseListViewManager_o *this,
        System_Collections_Generic_List_long__o *list,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x0
  __int64 v22; // x0
  __int64 v23; // x1
  Il2CppObject *current; // x20
  __int64 v25; // x9
  const MethodInfo *v26; // x1
  int64_t UserSvtId; // x0
  System_Collections_Generic_List_Enumerator_T__o v28; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v29; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_42E93F8 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__,
      (_DWORD)list,
      (_DWORD)method,
      v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v6, v7, v8);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v9, v10, v11);
    sub_B5D5C4(&Method_System_Collections_Generic_List_long__Add__, v12, v13, v14);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v15, v16, v17);
    sub_B5D5C4(&WarehouseListViewItem_TypeInfo, v18, v19, v20);
    byte_42E93F8 = 1;
  }
  memset(&v29, 0, sizeof(v29));
  itemList = this->fields.itemList;
  if ( !itemList )
    sub_B5D69C(0LL, list);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v28,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)itemList,
    (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  v29 = v28;
  while ( 1 )
  {
    v22 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v29,
            (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    if ( (v22 & 1) == 0 )
      break;
    current = v29.fields.current;
    if ( !v29.fields.current )
      goto LABEL_14;
    v25 = *(&WarehouseListViewItem_TypeInfo->_2.bitflags2 + 1);
    if ( *(&v29.fields.current->klass->_2.bitflags2 + 1) < (unsigned int)v25
      || (WarehouseListViewItem_c *)v29.fields.current->klass->_2.typeHierarchy[v25 - 1] != WarehouseListViewItem_TypeInfo )
    {
      v22 = sub_B5D990(v29.fields.current);
LABEL_14:
      sub_B5D69C(v22, v23);
    }
    if ( ListViewItem__get_IsSelect((ListViewItem_o *)v29.fields.current, 0LL) )
    {
      UserSvtId = WarehouseListViewItem__get_UserSvtId((WarehouseListViewItem_o *)current, v26);
      if ( !list )
        sub_B5D69C(UserSvtId, UserSvtId);
      System_Collections_Generic_List_long___Add(
        list,
        UserSvtId,
        (const MethodInfo_3047788 *)Method_System_Collections_Generic_List_long__Add__);
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v29,
    (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
}


System_Collections_Generic_Dictionary_long__int__o *__fastcall WarehouseListViewManager__GetSelectServantIdDic(
        WarehouseListViewManager_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  System_Collections_Generic_Dictionary_long__int__o *v20; // x20
  int64_t IsSelect; // x0
  const MethodInfo *v22; // x1
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x21
  int size; // w22
  unsigned int v25; // w23
  ListViewItem_o *v26; // x21
  __int64 v27; // x9
  System_Collections_Generic_Dictionary_long__int__o *result; // x0
  WarehouseListViewManager_o *v29; // x0
  System_Collections_Generic_Dictionary_long__int__o *v30; // x1
  const MethodInfo *v31; // x2

  if ( (byte_42E940A & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_long__int__Add__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_long__int___ctor__, v5, v6, v7);
    sub_B5D5C4(&System_Collections_Generic_Dictionary_long__int__TypeInfo, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v14, v15, v16);
    sub_B5D5C4(&WarehouseListViewItem_TypeInfo, v17, v18, v19);
    byte_42E940A = 1;
  }
  v20 = (System_Collections_Generic_Dictionary_long__int__o *)sub_B5D694(System_Collections_Generic_Dictionary_long__int__TypeInfo);
  System_Collections_Generic_Dictionary_long__int____ctor(
    v20,
    (const MethodInfo_2F5434C *)Method_System_Collections_Generic_Dictionary_long__int___ctor__);
  itemList = this->fields.itemList;
  if ( !itemList )
LABEL_16:
    sub_B5D69C(IsSelect, v22);
  size = itemList->fields._size;
  if ( size < 1 )
    return v20;
  v25 = 0;
  while ( 1 )
  {
    if ( itemList->fields._size <= v25 )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
    v26 = itemList->fields._items->m_Items[v25];
    if ( !v26 )
      goto LABEL_16;
    v27 = *(&WarehouseListViewItem_TypeInfo->_2.bitflags2 + 1);
    if ( *(&v26->klass->_2.bitflags2 + 1) < (unsigned int)v27
      || (WarehouseListViewItem_c *)v26->klass->_2.typeHierarchy[v27 - 1] != WarehouseListViewItem_TypeInfo )
    {
      break;
    }
    IsSelect = ListViewItem__get_IsSelect(v26, 0LL);
    if ( (IsSelect & 1) != 0 )
    {
      IsSelect = WarehouseListViewItem__get_UserSvtId((WarehouseListViewItem_o *)v26, v22);
      if ( !v20 )
        goto LABEL_16;
      System_Collections_Generic_Dictionary_long__int___Add(
        v20,
        IsSelect,
        v26->fields.selectNum,
        (const MethodInfo_2F54F00 *)Method_System_Collections_Generic_Dictionary_long__int__Add__);
    }
    if ( (int)++v25 >= size )
      return v20;
    itemList = this->fields.itemList;
    if ( !itemList )
      goto LABEL_16;
  }
  v29 = (WarehouseListViewManager_o *)sub_B5D990(v26);
  WarehouseListViewManager__ModifyScaleChangeList(v29, v30, v31);
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
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  System_Collections_Generic_List_long__o *v30; // x23
  System_Collections_Generic_List_long__o *v31; // x22
  int64_t v32; // x0
  __int64 v33; // x1
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x19
  signed __int64 size; // x24
  unsigned __int64 v42; // x25
  ListViewItem_o *v43; // x8
  __int64 v44; // x11
  ListViewItem_c *klass; // x9
  Il2CppType byval_arg; // q0
  const MethodInfo_3047788 *v47; // x2
  int64_t v48; // x1
  System_Collections_Generic_List_long__o *v49; // x0
  Il2CppType v50; // q0
  System_Int64_array *v51; // x0
  System_String_array **v52; // x2
  System_String_array **v53; // x3
  System_Boolean_array **v54; // x4
  System_Int32_array **v55; // x5
  System_Int32_array *v56; // x6
  System_Int32_array *v57; // x7
  System_Int64_array *v58; // x0
  System_String_array **v59; // x2
  System_String_array **v60; // x3
  System_Boolean_array **v61; // x4
  System_Int32_array **v62; // x5
  System_Int32_array *v63; // x6
  System_Int32_array *v64; // x7
  System_String_array **v66; // x2
  System_String_array **v67; // x3
  System_Boolean_array **v68; // x4
  System_Int32_array **v69; // x5
  System_Int32_array *v70; // x6
  System_Int32_array *v71; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v73; // [xsp+10h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v74; // [xsp+30h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v75; // [xsp+50h] [xbp-70h]

  if ( (byte_42E93F2 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_long__Add__, (_DWORD)choiceList, (_DWORD)unchoiceList, method);
    sub_B5D5C4(&Method_System_Collections_Generic_List_long__ToArray__, v6, v7, v8);
    sub_B5D5C4(&Method_System_Collections_Generic_List_long___ctor__, v9, v10, v11);
    sub_B5D5C4(&Method_System_Collections_Generic_List_long__get_Count__, v12, v13, v14);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v15, v16, v17);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v18, v19, v20);
    sub_B5D5C4(&System_Collections_Generic_List_long__TypeInfo, v21, v22, v23);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v24, v25, v26);
    sub_B5D5C4(&WarehouseListViewItem_TypeInfo, v27, v28, v29);
    byte_42E93F2 = 1;
  }
  v30 = (System_Collections_Generic_List_long__o *)sub_B5D694(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v30,
    (const MethodInfo_3046A2C *)Method_System_Collections_Generic_List_long___ctor__);
  v31 = (System_Collections_Generic_List_long__o *)sub_B5D694(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v31,
    (const MethodInfo_3046A2C *)Method_System_Collections_Generic_List_long___ctor__);
  itemList = this->fields.itemList;
  if ( !itemList )
    goto LABEL_33;
  size = itemList->fields._size;
  if ( (int)size >= 1 )
  {
    v42 = 0LL;
    do
    {
      if ( v42 >= (unsigned int)itemList->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
      v43 = itemList->fields._items->m_Items[v42];
      if ( !v43 )
        break;
      v44 = *(&WarehouseListViewItem_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v43->klass->_2.bitflags2 + 1) < (unsigned int)v44
        || (WarehouseListViewItem_c *)v43->klass->_2.typeHierarchy[v44 - 1] != WarehouseListViewItem_TypeInfo )
      {
        break;
      }
      klass = v43[1].klass;
      if ( klass && BYTE1(v43[2].monitor) )
      {
        if ( BYTE1(v43[1].fields.sortValue1) )
        {
          byval_arg = klass->_1.byval_arg;
          *(_OWORD *)&v75.fields.currentCryptoKey = *(_OWORD *)&klass->_1.name;
          *(Il2CppType *)&v75.fields.fakeValue = byval_arg;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          }
          v74 = v75;
          v32 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v74, 0LL);
          if ( !v31 )
            break;
          v47 = (const MethodInfo_3047788 *)Method_System_Collections_Generic_List_long__Add__;
          v48 = v32;
          v49 = v31;
        }
        else
        {
          v50 = klass->_1.byval_arg;
          *(_OWORD *)&v75.fields.currentCryptoKey = *(_OWORD *)&klass->_1.name;
          *(Il2CppType *)&v75.fields.fakeValue = v50;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          }
          v73 = v75;
          v32 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v73, 0LL);
          if ( !v30 )
            break;
          v47 = (const MethodInfo_3047788 *)Method_System_Collections_Generic_List_long__Add__;
          v48 = v32;
          v49 = v30;
        }
        System_Collections_Generic_List_long___Add(v49, v48, v47);
      }
      if ( (__int64)++v42 >= size )
        goto LABEL_28;
      itemList = this->fields.itemList;
    }
    while ( itemList );
LABEL_33:
    sub_B5D69C(v32, v33);
  }
LABEL_28:
  if ( !v30 || !v31 )
    goto LABEL_33;
  if ( v31->fields._size + v30->fields._size < 1 )
  {
    *choiceList = 0LL;
    sub_B5D560((BattleServantConfConponent_o *)choiceList, 0LL, v34, v35, v36, v37, v38, v39);
    *unchoiceList = 0LL;
    sub_B5D560((BattleServantConfConponent_o *)unchoiceList, 0LL, v66, v67, v68, v69, v70, v71);
    return 0;
  }
  else
  {
    v51 = System_Collections_Generic_List_long___ToArray(
            v30,
            (const MethodInfo_3049894 *)Method_System_Collections_Generic_List_long__ToArray__);
    *choiceList = v51;
    sub_B5D560((BattleServantConfConponent_o *)choiceList, (System_Int32_array **)v51, v52, v53, v54, v55, v56, v57);
    v58 = System_Collections_Generic_List_long___ToArray(
            v31,
            (const MethodInfo_3049894 *)Method_System_Collections_Generic_List_long__ToArray__);
    *unchoiceList = v58;
    sub_B5D560((BattleServantConfConponent_o *)unchoiceList, (System_Int32_array **)v58, v59, v60, v61, v62, v63, v64);
    return 1;
  }
}


bool __fastcall WarehouseListViewManager__GetSwapLockList(
        WarehouseListViewManager_o *this,
        System_Int64_array **lockList,
        System_Int64_array **unlockList,
        const MethodInfo *method)
{
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  System_Collections_Generic_List_long__o *v30; // x23
  System_Collections_Generic_List_long__o *v31; // x22
  int64_t v32; // x0
  __int64 v33; // x1
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x19
  signed __int64 size; // x24
  unsigned __int64 v42; // x25
  ListViewItem_o *v43; // x8
  __int64 v44; // x11
  ListViewItem_c *klass; // x9
  Il2CppType byval_arg; // q0
  const MethodInfo_3047788 *v47; // x2
  int64_t v48; // x1
  System_Collections_Generic_List_long__o *v49; // x0
  Il2CppType v50; // q0
  System_Int64_array *v51; // x0
  System_String_array **v52; // x2
  System_String_array **v53; // x3
  System_Boolean_array **v54; // x4
  System_Int32_array **v55; // x5
  System_Int32_array *v56; // x6
  System_Int32_array *v57; // x7
  System_Int64_array *v58; // x0
  System_String_array **v59; // x2
  System_String_array **v60; // x3
  System_Boolean_array **v61; // x4
  System_Int32_array **v62; // x5
  System_Int32_array *v63; // x6
  System_Int32_array *v64; // x7
  System_String_array **v66; // x2
  System_String_array **v67; // x3
  System_Boolean_array **v68; // x4
  System_Int32_array **v69; // x5
  System_Int32_array *v70; // x6
  System_Int32_array *v71; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v73; // [xsp+10h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v74; // [xsp+30h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v75; // [xsp+50h] [xbp-70h]

  if ( (byte_42E93F1 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_long__Add__, (_DWORD)lockList, (_DWORD)unlockList, method);
    sub_B5D5C4(&Method_System_Collections_Generic_List_long__ToArray__, v6, v7, v8);
    sub_B5D5C4(&Method_System_Collections_Generic_List_long___ctor__, v9, v10, v11);
    sub_B5D5C4(&Method_System_Collections_Generic_List_long__get_Count__, v12, v13, v14);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v15, v16, v17);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v18, v19, v20);
    sub_B5D5C4(&System_Collections_Generic_List_long__TypeInfo, v21, v22, v23);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v24, v25, v26);
    sub_B5D5C4(&WarehouseListViewItem_TypeInfo, v27, v28, v29);
    byte_42E93F1 = 1;
  }
  v30 = (System_Collections_Generic_List_long__o *)sub_B5D694(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v30,
    (const MethodInfo_3046A2C *)Method_System_Collections_Generic_List_long___ctor__);
  v31 = (System_Collections_Generic_List_long__o *)sub_B5D694(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v31,
    (const MethodInfo_3046A2C *)Method_System_Collections_Generic_List_long___ctor__);
  itemList = this->fields.itemList;
  if ( !itemList )
    goto LABEL_33;
  size = itemList->fields._size;
  if ( (int)size >= 1 )
  {
    v42 = 0LL;
    do
    {
      if ( v42 >= (unsigned int)itemList->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
      v43 = itemList->fields._items->m_Items[v42];
      if ( !v43 )
        break;
      v44 = *(&WarehouseListViewItem_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v43->klass->_2.bitflags2 + 1) < (unsigned int)v44
        || (WarehouseListViewItem_c *)v43->klass->_2.typeHierarchy[v44 - 1] != WarehouseListViewItem_TypeInfo )
      {
        break;
      }
      klass = v43[1].klass;
      if ( klass && LOBYTE(v43[2].monitor) )
      {
        if ( LOBYTE(v43[1].fields.sortValue1) )
        {
          byval_arg = klass->_1.byval_arg;
          *(_OWORD *)&v75.fields.currentCryptoKey = *(_OWORD *)&klass->_1.name;
          *(Il2CppType *)&v75.fields.fakeValue = byval_arg;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          }
          v74 = v75;
          v32 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v74, 0LL);
          if ( !v31 )
            break;
          v47 = (const MethodInfo_3047788 *)Method_System_Collections_Generic_List_long__Add__;
          v48 = v32;
          v49 = v31;
        }
        else
        {
          v50 = klass->_1.byval_arg;
          *(_OWORD *)&v75.fields.currentCryptoKey = *(_OWORD *)&klass->_1.name;
          *(Il2CppType *)&v75.fields.fakeValue = v50;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          }
          v73 = v75;
          v32 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v73, 0LL);
          if ( !v30 )
            break;
          v47 = (const MethodInfo_3047788 *)Method_System_Collections_Generic_List_long__Add__;
          v48 = v32;
          v49 = v30;
        }
        System_Collections_Generic_List_long___Add(v49, v48, v47);
      }
      if ( (__int64)++v42 >= size )
        goto LABEL_28;
      itemList = this->fields.itemList;
    }
    while ( itemList );
LABEL_33:
    sub_B5D69C(v32, v33);
  }
LABEL_28:
  if ( !v30 || !v31 )
    goto LABEL_33;
  if ( v31->fields._size + v30->fields._size < 1 )
  {
    *lockList = 0LL;
    sub_B5D560((BattleServantConfConponent_o *)lockList, 0LL, v34, v35, v36, v37, v38, v39);
    *unlockList = 0LL;
    sub_B5D560((BattleServantConfConponent_o *)unlockList, 0LL, v66, v67, v68, v69, v70, v71);
    return 0;
  }
  else
  {
    v51 = System_Collections_Generic_List_long___ToArray(
            v30,
            (const MethodInfo_3049894 *)Method_System_Collections_Generic_List_long__ToArray__);
    *lockList = v51;
    sub_B5D560((BattleServantConfConponent_o *)lockList, (System_Int32_array **)v51, v52, v53, v54, v55, v56, v57);
    v58 = System_Collections_Generic_List_long___ToArray(
            v31,
            (const MethodInfo_3049894 *)Method_System_Collections_Generic_List_long__ToArray__);
    *unlockList = v58;
    sub_B5D560((BattleServantConfConponent_o *)unlockList, (System_Int32_array **)v58, v59, v60, v61, v62, v63, v64);
    return 1;
  }
}


void __fastcall WarehouseListViewManager__InitLoad(const MethodInfo *method)
{
  __int64 v1; // x1
  int v2; // w2
  __int64 v3; // x3
  WarehouseListViewManager_c *v4; // x0
  ListViewSort_o *servantSortInfo; // x0

  if ( (byte_42E93E9 & 1) == 0 )
  {
    sub_B5D5C4(&WarehouseListViewManager_TypeInfo, v1, v2, v3);
    byte_42E93E9 = 1;
  }
  v4 = WarehouseListViewManager_TypeInfo;
  if ( (BYTE3(WarehouseListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarehouseListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarehouseListViewManager_TypeInfo);
    v4 = WarehouseListViewManager_TypeInfo;
  }
  servantSortInfo = v4->static_fields->servantSortInfo;
  if ( !servantSortInfo
    || (ListViewSort__InitLoad(servantSortInfo, 0LL),
        (servantSortInfo = WarehouseListViewManager_TypeInfo->static_fields->servantEquipSortInfo) == 0LL)
    || (ListViewSort__InitLoad(servantSortInfo, 0LL),
        (servantSortInfo = WarehouseListViewManager_TypeInfo->static_fields->servantWarehouseSortInfo) == 0LL)
    || (ListViewSort__InitLoad(servantSortInfo, 0LL),
        (servantSortInfo = WarehouseListViewManager_TypeInfo->static_fields->servantEquipWarehouseSortInfo) == 0LL) )
  {
    sub_B5D69C(servantSortInfo, v1);
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
    sub_B5D69C(this, item);
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
    sub_B5D69C(parentManager, item);
  return !ServantEntity__get_IsOrganization((ServantEntity_o *)parentManager, 0LL)
      || item->fields.attribute
      || this->fields.sellEnableRestCnt - addServantSum >= 2;
}


void __fastcall WarehouseListViewManager__Modify(WarehouseListViewManager_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  int v32; // w1
  int v33; // w2
  __int64 v34; // x3
  DataManager_o *Instance; // x0
  __int64 v36; // x1
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *v37; // x20
  _BOOL8 v38; // x0
  const MethodInfo *v39; // x1
  WarehouseListViewItem_o *current; // x21
  __int64 v41; // x10
  const MethodInfo *v42; // x1
  int64_t UserSvtId; // x0
  UserServantEntity_o *Entity; // x1
  const MethodInfo *v45; // x2
  UnityEngine_Object_o *viewObject; // x22
  __int64 v47; // x1
  struct ListViewObject_o *v48; // x0
  UserGameEntity_o *SelfUserGame; // x20
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x9
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *v51; // x19
  _BOOL8 v52; // x0
  const MethodInfo *v53; // x1
  WarehouseListViewItem_o *v54; // x21
  __int64 v55; // x10
  const MethodInfo *v56; // x1
  int64_t v57; // x0
  UserServantEntity_o *v58; // x1
  const MethodInfo *v59; // x2
  int64_t v60; // x0
  const MethodInfo *v61; // x1
  int64_t favoriteUserSvtId; // x27
  int64_t v63; // x22
  int64_t v64; // x0
  const MethodInfo *v65; // x3
  UnityEngine_Object_o *v66; // x22
  __int64 v67; // x1
  struct ListViewObject_o *v68; // x0
  int v69; // w19
  System_Collections_Generic_List_Enumerator_T__o v70; // [xsp+8h] [xbp-98h] BYREF
  int v71[2]; // [xsp+20h] [xbp-80h]
  int v72; // [xsp+28h] [xbp-78h]
  System_Collections_Generic_List_Enumerator_T__o v73; // [xsp+30h] [xbp-70h] BYREF

  if ( (byte_42E93EF & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserServantMaster___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserServantStorageMaster___, v5, v6, v7);
    sub_B5D5C4(&Method_DataMasterBase_UserServantStorageMaster__UserServantEntity__long__GetEntity__, v8, v9, v10);
    sub_B5D5C4(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__, v14, v15, v16);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v17, v18, v19);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v20, v21, v22);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v23, v24, v25);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v26, v27, v28);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v29, v30, v31);
    sub_B5D5C4(&WarehouseListViewItem_TypeInfo, v32, v33, v34);
    byte_42E93EF = 1;
  }
  memset(&v73, 0, sizeof(v73));
  v72 = 0;
  if ( this->fields.itemList )
  {
    if ( (this->fields.kind & 0xFFFFFFFE) == 2 )
    {
      Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( Instance )
      {
        Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserServantStorageMaster___);
        if ( this->fields.itemList )
        {
          v37 = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)Instance;
          System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
            &v70,
            (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this->fields.itemList,
            (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
          v73 = v70;
          while ( 1 )
          {
            v38 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                    &v73,
                    (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
            if ( !v38 )
              break;
            current = (WarehouseListViewItem_o *)v73.fields.current;
            if ( !v73.fields.current
              || (v41 = *(&WarehouseListViewItem_TypeInfo->_2.bitflags2 + 1),
                  *(&v73.fields.current->klass->_2.bitflags2 + 1) < (unsigned int)v41)
              || (WarehouseListViewItem_c *)v73.fields.current->klass->_2.typeHierarchy[v41 - 1] != WarehouseListViewItem_TypeInfo )
            {
              sub_B5D69C(v38, v39);
            }
            if ( WarehouseListViewItem__get_UserSvtId((WarehouseListViewItem_o *)v73.fields.current, v39) >= 1 )
            {
              UserSvtId = WarehouseListViewItem__get_UserSvtId(current, v42);
              if ( !v37 )
                sub_B5D69C(UserSvtId, UserSvtId);
              Entity = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
                         v37,
                         UserSvtId,
                         (const MethodInfo_23FB038 *)Method_DataMasterBase_UserServantStorageMaster__UserServantEntity__long__GetEntity__);
              if ( Entity )
                WarehouseListViewItem__Modify(current, Entity, v45);
              viewObject = (UnityEngine_Object_o *)current->fields.viewObject;
              if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              }
              if ( UnityEngine_Object__op_Inequality(viewObject, 0LL, 0LL) )
              {
                v48 = current->fields.viewObject;
                if ( !v48 )
                  sub_B5D69C(0LL, v47);
                ((void (__fastcall *)(struct ListViewObject_o *, WarehouseListViewItem_o *, Il2CppMethodPointer))v48->klass->vtable._5_SetItem.method)(
                  v48,
                  current,
                  v48->klass->vtable._6_SetItem.methodPtr);
              }
            }
          }
          v71[0] = 335;
          v72 = 1;
          System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
            &v73,
            (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
          v72 = 0;
          return;
        }
      }
LABEL_52:
      sub_B5D69C(Instance, v36);
    }
    SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_52;
    Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                  Instance,
                                  (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserServantMaster___);
    itemList = this->fields.itemList;
    if ( !itemList )
      goto LABEL_52;
    v51 = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)Instance;
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v70,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)itemList,
      (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    v73 = v70;
    while ( 1 )
    {
      v52 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v73,
              (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
      if ( !v52 )
        break;
      v54 = (WarehouseListViewItem_o *)v73.fields.current;
      if ( !v73.fields.current
        || (v55 = *(&WarehouseListViewItem_TypeInfo->_2.bitflags2 + 1),
            *(&v73.fields.current->klass->_2.bitflags2 + 1) < (unsigned int)v55)
        || (WarehouseListViewItem_c *)v73.fields.current->klass->_2.typeHierarchy[v55 - 1] != WarehouseListViewItem_TypeInfo )
      {
        sub_B5D69C(v52, v53);
      }
      if ( WarehouseListViewItem__get_UserSvtId((WarehouseListViewItem_o *)v73.fields.current, v53) >= 1 )
      {
        v57 = WarehouseListViewItem__get_UserSvtId(v54, v56);
        if ( !v51 )
          sub_B5D69C(v57, v57);
        v58 = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
                v51,
                v57,
                (const MethodInfo_23FB038 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
        if ( v58 )
          WarehouseListViewItem__Modify(v54, v58, v59);
        v60 = WarehouseListViewItem__get_UserSvtId(v54, (const MethodInfo *)v58);
        if ( !SelfUserGame )
          sub_B5D69C(v60, v61);
        favoriteUserSvtId = SelfUserGame->fields.favoriteUserSvtId;
        v63 = v60;
        v64 = WarehouseListViewItem__get_UserSvtId(v54, v61);
        WarehouseListViewItem__Modify_26324576(
          v54,
          v63 == favoriteUserSvtId,
          v64 == SelfUserGame->fields.pushUserSvtId,
          v65);
        v66 = (UnityEngine_Object_o *)v54->fields.viewObject;
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        if ( UnityEngine_Object__op_Inequality(v66, 0LL, 0LL) )
        {
          v68 = v54->fields.viewObject;
          if ( !v68 )
            sub_B5D69C(0LL, v67);
          ((void (__fastcall *)(struct ListViewObject_o *, WarehouseListViewItem_o *, Il2CppMethodPointer))v68->klass->vtable._5_SetItem.method)(
            v68,
            v54,
            v68->klass->vtable._6_SetItem.methodPtr);
        }
      }
    }
    v71[0] = 335;
    v69 = ++v72;
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v73,
      (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    if ( v69 && v71[v69 - 1] == 335 )
      v72 = v69 - 1;
  }
}


void __fastcall WarehouseListViewManager__ModifyItem(
        WarehouseListViewManager_o *this,
        int64_t userSvtId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  int v30; // w1
  int v31; // w2
  __int64 v32; // x3
  int v33; // w1
  int v34; // w2
  __int64 v35; // x3
  int v36; // w1
  int v37; // w2
  __int64 v38; // x3
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x9
  DataManager_o *Instance; // x0
  __int64 v41; // x1
  DataManager_o *v42; // x19
  UserServantEntity_o *Entity; // x19
  UserGameEntity_o *SelfUserGame; // x22
  _BOOL8 v45; // x0
  const MethodInfo *v46; // x1
  __int64 v47; // x11
  WarehouseListViewItem_o *v48; // x20
  int64_t v49; // x0
  __int128 v50; // q0
  int64_t v51; // x21
  const MethodInfo *v52; // x2
  int64_t v53; // x0
  const MethodInfo *v54; // x1
  int64_t favoriteUserSvtId; // x28
  int64_t v56; // x21
  int64_t v57; // x0
  const MethodInfo *v58; // x3
  UnityEngine_Object_o *v59; // x21
  __int64 v60; // x1
  struct ListViewObject_o *v61; // x0
  int v62; // w19
  _BOOL8 v63; // x0
  const MethodInfo *v64; // x1
  __int64 v65; // x11
  WarehouseListViewItem_o *current; // x22
  int64_t v67; // x0
  __int128 v68; // q0
  int64_t v69; // x23
  const MethodInfo *v70; // x2
  UnityEngine_Object_o *viewObject; // x23
  __int64 v72; // x1
  struct ListViewObject_o *v73; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v74; // [xsp+0h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v75; // [xsp+20h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v76; // [xsp+40h] [xbp-A0h] BYREF
  int v77[2]; // [xsp+60h] [xbp-80h]
  int v78; // [xsp+68h] [xbp-78h]
  System_Collections_Generic_List_Enumerator_T__o v79; // [xsp+70h] [xbp-70h] BYREF

  if ( (byte_42E93F0 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserServantMaster___, userSvtId, (_DWORD)method, v3);
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserServantStorageMaster___, v6, v7, v8);
    sub_B5D5C4(&Method_DataMasterBase_UserServantStorageMaster__UserServantEntity__long__GetEntity__, v9, v10, v11);
    sub_B5D5C4(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v12, v13, v14);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__, v15, v16, v17);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v18, v19, v20);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v21, v22, v23);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v24, v25, v26);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v27, v28, v29);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v30, v31, v32);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v33, v34, v35);
    sub_B5D5C4(&WarehouseListViewItem_TypeInfo, v36, v37, v38);
    byte_42E93F0 = 1;
  }
  memset(&v79, 0, sizeof(v79));
  v78 = 0;
  itemList = this->fields.itemList;
  if ( itemList )
  {
    if ( (this->fields.kind & 0xFFFFFFFE) == 2 )
    {
      if ( userSvtId < 1 )
      {
        v42 = 0LL;
        goto LABEL_42;
      }
      Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( Instance )
      {
        Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserServantStorageMaster___);
        if ( Instance )
        {
          Instance = (DataManager_o *)DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
                                        (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)Instance,
                                        userSvtId,
                                        (const MethodInfo_23FB038 *)Method_DataMasterBase_UserServantStorageMaster__UserServantEntity__long__GetEntity__);
          itemList = this->fields.itemList;
          if ( itemList )
          {
            v42 = Instance;
LABEL_42:
            System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
              (System_Collections_Generic_List_Enumerator_T__o *)&v76,
              (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)itemList,
              (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
            v79 = *(System_Collections_Generic_List_Enumerator_T__o *)&v76.fields.currentCryptoKey;
            while ( 1 )
            {
              v63 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                      &v79,
                      (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
              if ( !v63 )
              {
                v77[0] = 342;
                v78 = 1;
                System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
                  &v79,
                  (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
                v78 = 0;
                return;
              }
              if ( v79.fields.current
                && (v65 = *(&WarehouseListViewItem_TypeInfo->_2.bitflags2 + 1),
                    *(&v79.fields.current->klass->_2.bitflags2 + 1) >= (unsigned int)v65) )
              {
                if ( (WarehouseListViewItem_c *)v79.fields.current->klass->_2.typeHierarchy[v65 - 1] == WarehouseListViewItem_TypeInfo )
                  current = (WarehouseListViewItem_o *)v79.fields.current;
                else
                  current = 0LL;
                if ( v42 )
                {
LABEL_47:
                  if ( !current )
                    sub_B5D69C(v63, v64);
                  v67 = WarehouseListViewItem__get_UserSvtId(current, v64);
                  v68 = *(_OWORD *)&v42->fields.lookup;
                  v69 = v67;
                  *(_OWORD *)&v76.fields.currentCryptoKey = *(_OWORD *)&v42->fields.m_CachedPtr;
                  *(_OWORD *)&v76.fields.fakeValue = v68;
                  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
                  }
                  v75 = v76;
                  if ( v69 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v75, 0LL) )
                    WarehouseListViewItem__Modify(current, (UserServantEntity_o *)v42, v70);
                  goto LABEL_58;
                }
              }
              else
              {
                current = 0LL;
                if ( v42 )
                  goto LABEL_47;
              }
              if ( !current )
                sub_B5D69C(v63, v64);
LABEL_58:
              viewObject = (UnityEngine_Object_o *)current->fields.viewObject;
              if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              }
              if ( UnityEngine_Object__op_Inequality(viewObject, 0LL, 0LL) )
              {
                v73 = current->fields.viewObject;
                if ( !v73 )
                  sub_B5D69C(0LL, v72);
                ((void (__fastcall *)(struct ListViewObject_o *, WarehouseListViewItem_o *, Il2CppMethodPointer))v73->klass->vtable._5_SetItem.method)(
                  v73,
                  current,
                  v73->klass->vtable._6_SetItem.methodPtr);
              }
            }
          }
        }
      }
LABEL_73:
      sub_B5D69C(Instance, v41);
    }
    Entity = 0LL;
    SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
    if ( userSvtId >= 1 )
    {
      Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_73;
      Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                    Instance,
                                    (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserServantMaster___);
      if ( !Instance )
        goto LABEL_73;
      Entity = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
                 (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)Instance,
                 userSvtId,
                 (const MethodInfo_23FB038 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    }
    Instance = (DataManager_o *)this->fields.itemList;
    if ( !Instance )
      goto LABEL_73;
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v76,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)Instance,
      (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    v79.fields.current = (Il2CppObject *)v76.fields.fakeValue;
    *(_OWORD *)&v79.fields.list = *(_OWORD *)&v76.fields.currentCryptoKey;
    while ( 1 )
    {
      v45 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v79,
              (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
      if ( !v45 )
      {
        v77[0] = 342;
        v62 = ++v78;
        System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
          &v79,
          (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
        if ( v62 && v77[v62 - 1] == 342 )
          v78 = v62 - 1;
        return;
      }
      if ( v79.fields.current
        && (v47 = *(&WarehouseListViewItem_TypeInfo->_2.bitflags2 + 1),
            *(&v79.fields.current->klass->_2.bitflags2 + 1) >= (unsigned int)v47) )
      {
        if ( (WarehouseListViewItem_c *)v79.fields.current->klass->_2.typeHierarchy[v47 - 1] == WarehouseListViewItem_TypeInfo )
          v48 = (WarehouseListViewItem_o *)v79.fields.current;
        else
          v48 = 0LL;
        if ( Entity )
        {
LABEL_20:
          if ( !v48 )
            sub_B5D69C(v45, v46);
          v49 = WarehouseListViewItem__get_UserSvtId(v48, v46);
          v50 = *(_OWORD *)&Entity->fields.id.fields.fakeValue;
          v51 = v49;
          *(_OWORD *)&v76.fields.currentCryptoKey = *(_OWORD *)&Entity->fields.id.fields.currentCryptoKey;
          *(_OWORD *)&v76.fields.fakeValue = v50;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          }
          v74 = v76;
          if ( v51 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v74, 0LL) )
            WarehouseListViewItem__Modify(v48, Entity, v52);
          goto LABEL_31;
        }
      }
      else
      {
        v48 = 0LL;
        if ( Entity )
          goto LABEL_20;
      }
      if ( !v48 )
        sub_B5D69C(v45, v46);
LABEL_31:
      v53 = WarehouseListViewItem__get_UserSvtId(v48, v46);
      if ( !SelfUserGame )
        sub_B5D69C(v53, v54);
      favoriteUserSvtId = SelfUserGame->fields.favoriteUserSvtId;
      v56 = v53;
      v57 = WarehouseListViewItem__get_UserSvtId(v48, v54);
      WarehouseListViewItem__Modify_26324576(
        v48,
        v56 == favoriteUserSvtId,
        v57 == SelfUserGame->fields.pushUserSvtId,
        v58);
      v59 = (UnityEngine_Object_o *)v48->fields.viewObject;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Inequality(v59, 0LL, 0LL) )
      {
        v61 = v48->fields.viewObject;
        if ( !v61 )
          sub_B5D69C(0LL, v60);
        ((void (__fastcall *)(struct ListViewObject_o *, WarehouseListViewItem_o *, Il2CppMethodPointer))v61->klass->vtable._5_SetItem.method)(
          v61,
          v48,
          v61->klass->vtable._6_SetItem.methodPtr);
      }
    }
  }
}


void __fastcall WarehouseListViewManager__ModifyScaleChangeList(
        WarehouseListViewManager_o *this,
        System_Collections_Generic_Dictionary_long__int__o *selectServantIdDic,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  const MethodInfo *v21; // x1
  __int64 Item; // x0
  const MethodInfo *v23; // x1
  struct WarehouseListManager_o *parentManager; // x8
  struct WarehouseListViewManager_o *baseListViewManager; // x9
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x21
  int size; // w22
  unsigned int v28; // w23
  WarehouseListViewItem_o *v29; // x21
  __int64 v30; // x9
  int64_t UserSvtId; // x0
  int64_t v32; // x0
  struct WarehouseListManager_o *v33; // x8
  struct WarehouseListViewManager_o *v34; // x9
  WarehouseListViewManager_o *v35; // x0
  const MethodInfo *v36; // x1

  if ( (byte_42E940B & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_long__int__ContainsKey__,
      (_DWORD)selectServantIdDic,
      (_DWORD)method,
      v3);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_long__int__get_Count__, v6, v7, v8);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_long__int__get_Item__, v9, v10, v11);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v12, v13, v14);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v15, v16, v17);
    sub_B5D5C4(&WarehouseListViewItem_TypeInfo, v18, v19, v20);
    byte_42E940B = 1;
  }
  if ( selectServantIdDic
    && System_Collections_Generic_Dictionary_long__int___get_Count(
         selectServantIdDic,
         (const MethodInfo_2F54AFC *)Method_System_Collections_Generic_Dictionary_long__int__get_Count__) )
  {
    WarehouseListViewManager__ReleaseAll(this, v21);
    parentManager = this->fields.parentManager;
    if ( !parentManager
      || (baseListViewManager = parentManager->fields.baseListViewManager) == 0LL
      || (parentManager->fields.totalSum = baseListViewManager->fields.selectSum,
          (itemList = this->fields.itemList) == 0LL) )
    {
LABEL_21:
      sub_B5D69C(Item, v23);
    }
    size = itemList->fields._size;
    if ( size >= 1 )
    {
      v28 = 0;
      while ( 1 )
      {
        if ( itemList->fields._size <= v28 )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
        v29 = (WarehouseListViewItem_o *)itemList->fields._items->m_Items[v28];
        if ( !v29 )
          goto LABEL_21;
        v30 = *(&WarehouseListViewItem_TypeInfo->_2.bitflags2 + 1);
        if ( *(&v29->klass->_2.bitflags2 + 1) < (unsigned int)v30
          || (WarehouseListViewItem_c *)v29->klass->_2.typeHierarchy[v30 - 1] != WarehouseListViewItem_TypeInfo )
        {
          break;
        }
        UserSvtId = WarehouseListViewItem__get_UserSvtId(v29, (const MethodInfo *)WarehouseListViewItem_TypeInfo);
        Item = System_Collections_Generic_Dictionary_long__int___ContainsKey(
                 selectServantIdDic,
                 UserSvtId,
                 (const MethodInfo_2F55174 *)Method_System_Collections_Generic_Dictionary_long__int__ContainsKey__);
        if ( (Item & 1) != 0 )
        {
          v32 = WarehouseListViewItem__get_UserSvtId(v29, v23);
          Item = System_Collections_Generic_Dictionary_long__int___get_Item(
                   selectServantIdDic,
                   v32,
                   (const MethodInfo_2F54E3C *)Method_System_Collections_Generic_Dictionary_long__int__get_Item__);
          v29->fields.selectNum = Item;
          v33 = this->fields.parentManager;
          ++this->fields.selectSum;
          if ( !v33 )
            goto LABEL_21;
          v34 = v33->fields.baseListViewManager;
          if ( !v34 )
            goto LABEL_21;
          v33->fields.totalSum = v34->fields.selectSum;
        }
        if ( (int)++v28 >= size )
          return;
        itemList = this->fields.itemList;
        if ( !itemList )
          goto LABEL_21;
      }
      v35 = (WarehouseListViewManager_o *)sub_B5D990(v29);
      WarehouseListViewManager__IsDragStart(v35, v36);
    }
  }
}


void __fastcall WarehouseListViewManager__OnClickBonusFilterKind(
        WarehouseListViewManager_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  __int64 v5; // x1
  ListViewSort_o *sort; // x0
  System_Int32_array *bonusEventIdList; // x1
  System_Int32_array *servantFilterIdList; // x2

  if ( (byte_42E93FB & 1) == 0 )
  {
    sub_B5D5C4(&SoundManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E93FB = 1;
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
      sub_B5D69C(0LL, v5);
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  WebViewManager_o *Instance; // x0
  ListViewSort_o *sort; // x20
  CommonUI_o *v16; // x21
  ServantFilterSelectMenu_CallbackFunc_o *v17; // x22
  __int64 v18; // x0
  __int64 v19; // x1
  CommonUI_o *v20; // x0
  int32_t v21; // w1
  WebViewManager_o *v22; // x0
  ListViewSort_o *v23; // x20
  CommonUI_o *v24; // x21
  ServantFilterSelectMenu_CallbackFunc_o *v25; // x22
  WebViewManager_o *v26; // x0
  CommonUI_o *v27; // x21

  if ( (byte_42E9403 & 1) == 0 )
  {
    sub_B5D5C4(&ServantFilterSelectMenu_CallbackFunc_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5, v6, v7);
    sub_B5D5C4(&SoundManager_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&Method_WarehouseListViewManager_EndSelectFilterKind__, v11, v12, v13);
    byte_42E9403 = 1;
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
        Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        sort = this->fields.sort;
        v16 = (CommonUI_o *)Instance;
        v17 = (ServantFilterSelectMenu_CallbackFunc_o *)sub_B5D694(ServantFilterSelectMenu_CallbackFunc_TypeInfo);
        ServantFilterSelectMenu_CallbackFunc___ctor(
          v17,
          (Il2CppObject *)this,
          Method_WarehouseListViewManager_EndSelectFilterKind__,
          0LL);
        if ( !v16 )
          goto LABEL_16;
        v20 = v16;
        v21 = 0;
        goto LABEL_15;
      case 1:
      case 3:
        v22 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        v23 = this->fields.sort;
        v24 = (CommonUI_o *)v22;
        v25 = (ServantFilterSelectMenu_CallbackFunc_o *)sub_B5D694(ServantFilterSelectMenu_CallbackFunc_TypeInfo);
        ServantFilterSelectMenu_CallbackFunc___ctor(
          v25,
          (Il2CppObject *)this,
          Method_WarehouseListViewManager_EndSelectFilterKind__,
          0LL);
        if ( !v24 )
          goto LABEL_16;
        CommonUI__OpenServantFilterSelectMenu_18209116(v24, 5, v23, (ListViewManager_o *)this, v25, -1, 0LL);
        break;
      default:
        v26 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        sort = this->fields.sort;
        v27 = (CommonUI_o *)v26;
        v17 = (ServantFilterSelectMenu_CallbackFunc_o *)sub_B5D694(ServantFilterSelectMenu_CallbackFunc_TypeInfo);
        ServantFilterSelectMenu_CallbackFunc___ctor(
          v17,
          (Il2CppObject *)this,
          Method_WarehouseListViewManager_EndSelectFilterKind__,
          0LL);
        if ( !v27 )
LABEL_16:
          sub_B5D69C(v18, v19);
        v21 = 6;
        v20 = v27;
LABEL_15:
        CommonUI__OpenServantFilterSelectMenu(v20, v21, sort, v17, -1, 0LL);
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
  __int64 v3; // x3
  __int64 v6; // x10
  ListViewItem_o *v7; // x2
  WarehouseListViewManager_CallbackFunc_o *callbackFunc; // x0

  if ( (byte_42E93FA & 1) == 0 )
  {
    sub_B5D5C4(&WarehouseListViewItem_TypeInfo, (_DWORD)item, (_DWORD)method, v3);
    byte_42E93FA = 1;
  }
  if ( item
    && (v6 = *(&WarehouseListViewItem_TypeInfo->_2.bitflags2 + 1), *(&item->klass->_2.bitflags2 + 1) >= (unsigned int)v6) )
  {
    if ( (WarehouseListViewItem_c *)item->klass->_2.typeHierarchy[v6 - 1] == WarehouseListViewItem_TypeInfo )
      v7 = item;
    else
      v7 = 0LL;
  }
  else
  {
    v7 = 0LL;
  }
  callbackFunc = this->fields.callbackFunc;
  if ( callbackFunc )
    WarehouseListViewManager_CallbackFunc__Invoke(callbackFunc, 1, (WarehouseListViewItem_o *)v7, 0LL);
}


void __fastcall WarehouseListViewManager__OnClickSortAscendingOrder(
        WarehouseListViewManager_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  __int64 v5; // x0
  __int64 v6; // x1
  struct ListViewSort_o *sort; // x8

  if ( (byte_42E9406 & 1) == 0 )
  {
    sub_B5D5C4(&SoundManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E9406 = 1;
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
      sub_B5D69C(v5, v6);
    sort->fields.isAscendingOrder ^= 1u;
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
  }
}


void __fastcall WarehouseListViewManager__OnClickSortKind(WarehouseListViewManager_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  unsigned int kind; // w23
  WebViewManager_o *Instance; // x0
  ListViewSort_o *sort; // x20
  CommonUI_o *v17; // x21
  ServantSortSelectMenu_CallbackFunc_o *v18; // x22
  __int64 v19; // x0
  __int64 v20; // x1
  int32_t v21; // w1

  if ( (byte_42E9401 & 1) == 0 )
  {
    sub_B5D5C4(&ServantSortSelectMenu_CallbackFunc_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5, v6, v7);
    sub_B5D5C4(&SoundManager_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&Method_WarehouseListViewManager_EndSelectSortKind__, v11, v12, v13);
    byte_42E9401 = 1;
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
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sort = this->fields.sort;
    v17 = (CommonUI_o *)Instance;
    v18 = (ServantSortSelectMenu_CallbackFunc_o *)sub_B5D694(ServantSortSelectMenu_CallbackFunc_TypeInfo);
    ServantSortSelectMenu_CallbackFunc___ctor(
      v18,
      (Il2CppObject *)this,
      Method_WarehouseListViewManager_EndSelectSortKind__,
      0LL);
    if ( !v17 )
      sub_B5D69C(v19, v20);
    if ( kind < 4 )
      v21 = kind + 1;
    else
      v21 = 3;
    CommonUI__OpenServantSortSelectMenu(v17, v21, sort, 1, v18, 0LL);
  }
}


void __fastcall WarehouseListViewManager__OnLongPushListView(
        WarehouseListViewManager_o *this,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x10
  ListViewItem_o *v7; // x2
  WarehouseListViewManager_CallbackFunc_o *callbackFunc; // x0

  if ( (byte_42E9400 & 1) == 0 )
  {
    sub_B5D5C4(&WarehouseListViewItem_TypeInfo, (_DWORD)item, (_DWORD)method, v3);
    byte_42E9400 = 1;
  }
  if ( item
    && (v6 = *(&WarehouseListViewItem_TypeInfo->_2.bitflags2 + 1), *(&item->klass->_2.bitflags2 + 1) >= (unsigned int)v6) )
  {
    if ( (WarehouseListViewItem_c *)item->klass->_2.typeHierarchy[v6 - 1] == WarehouseListViewItem_TypeInfo )
      v7 = item;
    else
      v7 = 0LL;
  }
  else
  {
    v7 = 0LL;
  }
  callbackFunc = this->fields.callbackFunc;
  if ( callbackFunc )
    WarehouseListViewManager_CallbackFunc__Invoke(callbackFunc, 2, (WarehouseListViewItem_o *)v7, 0LL);
}


void __fastcall WarehouseListViewManager__OnMoveEnd(WarehouseListViewManager_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int32_t callbackCount; // w8
  bool v6; // vf
  int32_t v7; // w8
  UnityEngine_Object_o *scrollView; // x20
  __int64 v9; // x1
  UIScrollView_o *v10; // x0

  if ( (byte_42E93F7 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E93F7 = 1;
  }
  callbackCount = this->fields.callbackCount;
  v6 = __OFSUB__(callbackCount, 1);
  v7 = callbackCount - 1;
  if ( v7 < 0 == v6 )
  {
    this->fields.callbackCount = v7;
    if ( !v7 )
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
        v10 = this->fields.scrollView;
        if ( !v10
          || (((void (__fastcall *)(UIScrollView_o *, __int64, Il2CppMethodPointer))v10->klass->vtable._8_UpdateScrollbars.method)(
                v10,
                1LL,
                v10->klass->vtable._9_SetDragAmount.methodPtr),
              (v10 = this->fields.scrollView) == 0LL) )
        {
          sub_B5D69C(v10, v9);
        }
        UIScrollView__UpdatePosition(v10, 0LL);
      }
    }
  }
}


void __fastcall WarehouseListViewManager__RefrashListDisp(WarehouseListViewManager_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  void *parentManager; // x0
  const MethodInfo *v9; // x1
  int v10; // w21
  void *v11; // x20
  __int64 v12; // x22
  unsigned int v13; // w8

  if ( (byte_42E93ED & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_WarehouseListViewObject__get_Count__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_WarehouseListViewObject__get_Item__, v5, v6, v7);
    byte_42E93ED = 1;
  }
  parentManager = this->fields.parentManager;
  if ( !parentManager )
    goto LABEL_13;
  WarehouseListManager__RefrashListDisp((WarehouseListManager_o *)parentManager, method);
  parentManager = WarehouseListViewManager__get_ObjectList(this, v9);
  if ( !parentManager )
    goto LABEL_13;
  v10 = *((_DWORD *)parentManager + 6);
  v11 = parentManager;
  if ( v10 >= 1 )
  {
    v12 = 0LL;
    v13 = *((_DWORD *)parentManager + 6);
    while ( 1 )
    {
      if ( v13 <= (unsigned int)v12 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
      parentManager = *(void **)(*((_QWORD *)v11 + 2) + 8 * v12 + 32);
      if ( !parentManager )
        break;
      (*(void (__fastcall **)(void *, bool, _QWORD))(*(_QWORD *)parentManager + 456LL))(
        parentManager,
        this->fields.isInput,
        *(_QWORD *)(*(_QWORD *)parentManager + 464LL));
      if ( (int)v12 + 1 >= v10 )
        return;
      v13 = *((_DWORD *)v11 + 6);
      ++v12;
    }
LABEL_13:
    sub_B5D69C(parentManager, method);
  }
}


void __fastcall WarehouseListViewManager__ReleaseAll(WarehouseListViewManager_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x0
  __int64 v18; // x0
  __int64 v19; // x1
  Il2CppObject *current; // x20
  __int64 v21; // x9
  const MethodInfo *v22; // x3
  const MethodInfo *v23; // x1
  System_Collections_Generic_List_Enumerator_T__o v24; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_42E93F9 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v11, v12, v13);
    sub_B5D5C4(&WarehouseListViewItem_TypeInfo, v14, v15, v16);
    byte_42E93F9 = 1;
  }
  memset(&v24, 0, sizeof(v24));
  itemList = this->fields.itemList;
  this->fields.sellEnableRestCnt = 0;
  if ( !itemList )
    sub_B5D69C(0LL, method);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v24,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)itemList,
    (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  while ( 1 )
  {
    v18 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v24,
            (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    if ( (v18 & 1) == 0 )
      break;
    current = v24.fields.current;
    if ( !v24.fields.current )
      goto LABEL_12;
    v21 = *(&WarehouseListViewItem_TypeInfo->_2.bitflags2 + 1);
    if ( *(&v24.fields.current->klass->_2.bitflags2 + 1) < (unsigned int)v21
      || (WarehouseListViewItem_c *)v24.fields.current->klass->_2.typeHierarchy[v21 - 1] != WarehouseListViewItem_TypeInfo )
    {
      v18 = sub_B5D990(v24.fields.current);
LABEL_12:
      sub_B5D69C(v18, v19);
    }
    ListViewItem__set_IsSelect((ListViewItem_o *)v24.fields.current, 0, 0LL);
    WarehouseListViewManager__ChangeSellEnableRestCnt(this, 1, (WarehouseListViewItem_o *)current, v22);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v24,
    (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
  this->fields.selectSum = 0;
  WarehouseListViewManager__RefrashListDisp(this, v23);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarehouseListViewManager__RequestListObject(
        WarehouseListViewManager_o *this,
        int32_t mode,
        float delay,
        const MethodInfo *method)
{
  __int64 v4; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *ObjectList; // x0
  __int64 v30; // x1
  int32_t size; // w8
  Il2CppObject *current; // x21
  System_Action_o *v33; // x22
  __int64 v34; // x0
  __int64 v35; // x1
  System_Collections_Generic_List_Enumerator_T__o v36; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_42E93F5 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, mode, (_DWORD)method, v4);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_WarehouseListViewObject__Dispose__, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_WarehouseListViewObject__MoveNext__, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_WarehouseListViewObject__get_Current__, v14, v15, v16);
    sub_B5D5C4(&Method_System_Collections_Generic_List_WarehouseListViewObject__GetEnumerator__, v17, v18, v19);
    sub_B5D5C4(&Method_System_Collections_Generic_List_WarehouseListViewObject__get_Count__, v20, v21, v22);
    sub_B5D5C4(&Method_WarehouseListViewManager_OnMoveEnd__, v23, v24, v25);
    sub_B5D5C4(&StringLiteral_10142/*"OnMoveEnd"*/, v26, v27, v28);
    byte_42E93F5 = 1;
  }
  memset(&v36, 0, sizeof(v36));
  ObjectList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)WarehouseListViewManager__get_ObjectList(
                                                                                                this,
                                                                                                *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_B5D69C(0LL, v30);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10142/*"OnMoveEnd"*/,
      delay,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v36,
      ObjectList,
      (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_WarehouseListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v36,
              (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_WarehouseListViewObject__MoveNext__) )
    {
      current = v36.fields.current;
      v33 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
      System_Action___ctor(v33, (Il2CppObject *)this, Method_WarehouseListViewManager_OnMoveEnd__, 0LL);
      if ( !current )
        sub_B5D69C(v34, v35);
      WarehouseListViewObject__Init_22678020((WarehouseListViewObject_o *)current, mode, v33, delay, 0LL);
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v36,
      (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_WarehouseListViewObject__Dispose__);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarehouseListViewManager__RequestListObject_26337432(
        WarehouseListViewManager_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *ObjectList; // x0
  __int64 v28; // x1
  int32_t size; // w8
  Il2CppObject *current; // x21
  System_Action_o *v31; // x22
  __int64 v32; // x0
  __int64 v33; // x1
  System_Collections_Generic_List_Enumerator_T__o v34; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_42E93F6 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, mode, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_WarehouseListViewObject__Dispose__, v6, v7, v8);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_WarehouseListViewObject__MoveNext__, v9, v10, v11);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_WarehouseListViewObject__get_Current__, v12, v13, v14);
    sub_B5D5C4(&Method_System_Collections_Generic_List_WarehouseListViewObject__GetEnumerator__, v15, v16, v17);
    sub_B5D5C4(&Method_System_Collections_Generic_List_WarehouseListViewObject__get_Count__, v18, v19, v20);
    sub_B5D5C4(&Method_WarehouseListViewManager_OnMoveEnd__, v21, v22, v23);
    sub_B5D5C4(&StringLiteral_10142/*"OnMoveEnd"*/, v24, v25, v26);
    byte_42E93F6 = 1;
  }
  memset(&v34, 0, sizeof(v34));
  ObjectList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)WarehouseListViewManager__get_ObjectList(
                                                                                                this,
                                                                                                *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_B5D69C(0LL, v28);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10142/*"OnMoveEnd"*/,
      0.0,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v34,
      ObjectList,
      (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_WarehouseListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v34,
              (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_WarehouseListViewObject__MoveNext__) )
    {
      current = v34.fields.current;
      v31 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
      System_Action___ctor(v31, (Il2CppObject *)this, Method_WarehouseListViewManager_OnMoveEnd__, 0LL);
      if ( !current )
        sub_B5D69C(v32, v33);
      WarehouseListViewObject__Init_22678084((WarehouseListViewObject_o *)current, mode, v31, 0LL);
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v34,
      (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_WarehouseListViewObject__Dispose__);
  }
}


void __fastcall WarehouseListViewManager__SaveSortInfo(WarehouseListViewManager_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  WarehouseListViewManager_c *v4; // x0
  ListViewSort_o *servantSortInfo; // x8
  __int64 v6; // x0
  __int64 v7; // x1
  ListViewSort_o *servantEquipSortInfo; // x8
  ListViewSort_o *servantWarehouseSortInfo; // x8
  ListViewSort_o *servantEquipWarehouseSortInfo; // x8

  if ( (byte_42E93EE & 1) == 0 )
  {
    sub_B5D5C4(&WarehouseListViewManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E93EE = 1;
  }
  v4 = WarehouseListViewManager_TypeInfo;
  if ( (BYTE3(WarehouseListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarehouseListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarehouseListViewManager_TypeInfo);
    v4 = WarehouseListViewManager_TypeInfo;
  }
  servantSortInfo = v4->static_fields->servantSortInfo;
  if ( servantSortInfo )
  {
    if ( (BYTE3(v4->vtable._0_Equals.methodPtr) & 4) != 0 && !v4->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v4);
      servantSortInfo = WarehouseListViewManager_TypeInfo->static_fields->servantSortInfo;
      if ( !servantSortInfo )
        goto LABEL_36;
    }
    ListViewSort__Save(servantSortInfo, 0LL);
    v4 = WarehouseListViewManager_TypeInfo;
  }
  if ( (BYTE3(v4->vtable._0_Equals.methodPtr) & 4) != 0 && !v4->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v4);
    v4 = WarehouseListViewManager_TypeInfo;
  }
  servantEquipSortInfo = v4->static_fields->servantEquipSortInfo;
  if ( servantEquipSortInfo )
  {
    if ( (BYTE3(v4->vtable._0_Equals.methodPtr) & 4) != 0 && !v4->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v4);
      servantEquipSortInfo = WarehouseListViewManager_TypeInfo->static_fields->servantEquipSortInfo;
      if ( !servantEquipSortInfo )
        goto LABEL_36;
    }
    ListViewSort__Save(servantEquipSortInfo, 0LL);
    v4 = WarehouseListViewManager_TypeInfo;
  }
  if ( (BYTE3(v4->vtable._0_Equals.methodPtr) & 4) != 0 && !v4->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v4);
    v4 = WarehouseListViewManager_TypeInfo;
  }
  servantWarehouseSortInfo = v4->static_fields->servantWarehouseSortInfo;
  if ( servantWarehouseSortInfo )
  {
    if ( (BYTE3(v4->vtable._0_Equals.methodPtr) & 4) != 0 && !v4->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v4);
      servantWarehouseSortInfo = WarehouseListViewManager_TypeInfo->static_fields->servantWarehouseSortInfo;
      if ( !servantWarehouseSortInfo )
        goto LABEL_36;
    }
    ListViewSort__Save(servantWarehouseSortInfo, 0LL);
    v4 = WarehouseListViewManager_TypeInfo;
  }
  if ( (BYTE3(v4->vtable._0_Equals.methodPtr) & 4) != 0 && !v4->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v4);
    v4 = WarehouseListViewManager_TypeInfo;
  }
  servantEquipWarehouseSortInfo = v4->static_fields->servantEquipWarehouseSortInfo;
  if ( servantEquipWarehouseSortInfo )
  {
    if ( (BYTE3(v4->vtable._0_Equals.methodPtr) & 4) == 0
      || v4->_2.cctor_finished
      || (j_il2cpp_runtime_class_init_0(v4),
          (servantEquipWarehouseSortInfo = WarehouseListViewManager_TypeInfo->static_fields->servantEquipWarehouseSortInfo) != 0LL) )
    {
      ListViewSort__Save(servantEquipWarehouseSortInfo, 0LL);
      return;
    }
LABEL_36:
    sub_B5D69C(v6, v7);
  }
}


void __fastcall WarehouseListViewManager__SelectListView(
        WarehouseListViewManager_o *this,
        WarehouseListViewItem_o *selectItem,
        const MethodInfo *method)
{
  __int64 v3; // x3
  WarehouseListViewManager_o *v5; // x19
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  SoundManager_c *v15; // x0
  const MethodInfo *v16; // x4
  struct WarehouseListManager_o *parentManager; // x8
  struct WarehouseListViewManager_o *baseListViewManager; // x9
  UILabel_o *selectDoneLabel; // x21
  struct WarehouseListManager_o *v20; // x8
  System_String_o *v21; // x22
  struct WarehouseListManager_o *v22; // x8
  Il2CppObject *v23; // x23
  Il2CppObject *v24; // x0
  const MethodInfo *v25; // x3
  const MethodInfo *v26; // x2
  struct WarehouseListManager_o *v27; // x8
  const MethodInfo *v28; // x1
  struct WarehouseListManager_o *v29; // x8
  struct WarehouseListManager_o *v30; // x8
  struct WarehouseListViewManager_o *v31; // x9
  UILabel_o *v32; // x21
  struct WarehouseListManager_o *v33; // x8
  System_String_o *v34; // x22
  struct WarehouseListManager_o *v35; // x8
  Il2CppObject *v36; // x23
  Il2CppObject *v37; // x0
  const MethodInfo *v38; // x3
  int32_t sendMax; // [xsp+8h] [xbp-38h] BYREF
  int32_t totalSum; // [xsp+Ch] [xbp-34h] BYREF

  v5 = this;
  if ( (byte_42E93FC & 1) == 0 )
  {
    sub_B5D5C4(&int_TypeInfo, (_DWORD)selectItem, (_DWORD)method, v3);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&SoundManager_TypeInfo, v9, v10, v11);
    this = (WarehouseListViewManager_o *)sub_B5D5C4(&StringLiteral_12617/*"SUM_INFO"*/, v12, v13, v14);
    byte_42E93FC = 1;
  }
  if ( !selectItem )
    goto LABEL_42;
  if ( WarehouseListViewItem__get_IsCanNotSelect(selectItem, (const MethodInfo *)selectItem) )
  {
    v15 = SoundManager_TypeInfo;
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
    parentManager = v5->fields.parentManager;
    --v5->fields.selectSum;
    if ( parentManager )
    {
      baseListViewManager = parentManager->fields.baseListViewManager;
      if ( baseListViewManager )
      {
        parentManager->fields.totalSum = baseListViewManager->fields.selectSum;
        selectDoneLabel = v5->fields.selectDoneLabel;
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        this = (WarehouseListViewManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12617/*"SUM_INFO"*/, 0LL);
        v20 = v5->fields.parentManager;
        if ( v20 )
        {
          v21 = (System_String_o *)this;
          totalSum = v20->fields.totalSum;
          this = (WarehouseListViewManager_o *)j_il2cpp_value_box_0(int_TypeInfo, &totalSum);
          v22 = v5->fields.parentManager;
          if ( v22 )
          {
            v23 = (Il2CppObject *)this;
            sendMax = v22->fields.sendMax;
            v24 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &sendMax);
            this = (WarehouseListViewManager_o *)System_String__Format_44573324(v21, v23, v24, 0LL);
            if ( selectDoneLabel )
            {
              UILabel__set_text(selectDoneLabel, (System_String_o *)this, 0LL);
              WarehouseListViewManager__ChangeSellEnableRestCnt(v5, 1, selectItem, v25);
              v27 = v5->fields.parentManager;
              if ( v27 )
              {
                this = v27->fields.baseListViewManager;
                if ( this )
                {
                  WarehouseListViewManager__DecrementNumber(this, selectItem->fields.selectNum, v26);
                  ListViewItem__set_IsSelect((ListViewItem_o *)selectItem, 0, 0LL);
LABEL_37:
                  WarehouseListViewManager__RefrashListDisp(v5, v28);
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
  if ( WarehouseListViewManager__IsSelectEnable(v5, selectItem, 0, 0, v16) )
  {
    if ( (WORD1(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    v29 = v5->fields.parentManager;
    if ( v29 )
    {
      selectItem->fields.selectNum = v29->fields.totalSum;
      v30 = v5->fields.parentManager;
      ++v5->fields.selectSum;
      if ( v30 )
      {
        v31 = v30->fields.baseListViewManager;
        if ( v31 )
        {
          v30->fields.totalSum = v31->fields.selectSum;
          v32 = v5->fields.selectDoneLabel;
          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          this = (WarehouseListViewManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12617/*"SUM_INFO"*/, 0LL);
          v33 = v5->fields.parentManager;
          if ( v33 )
          {
            v34 = (System_String_o *)this;
            totalSum = v33->fields.totalSum;
            this = (WarehouseListViewManager_o *)j_il2cpp_value_box_0(int_TypeInfo, &totalSum);
            v35 = v5->fields.parentManager;
            if ( v35 )
            {
              v36 = (Il2CppObject *)this;
              sendMax = v35->fields.sendMax;
              v37 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &sendMax);
              this = (WarehouseListViewManager_o *)System_String__Format_44573324(v34, v36, v37, 0LL);
              if ( v32 )
              {
                UILabel__set_text(v32, (System_String_o *)this, 0LL);
                WarehouseListViewManager__ChangeSellEnableRestCnt(v5, 0, selectItem, v38);
                goto LABEL_37;
              }
            }
          }
        }
      }
    }
LABEL_42:
    sub_B5D69C(this, selectItem);
  }
  if ( (WORD1(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) == 0
    || SoundManager_TypeInfo->_2.cctor_finished )
  {
    goto LABEL_40;
  }
  v15 = SoundManager_TypeInfo;
LABEL_7:
  j_il2cpp_runtime_class_init_0(v15);
LABEL_40:
  SoundManager__playSystemSe(2, 0LL);
}


void __fastcall WarehouseListViewManager__SelectListViewChoice(
        WarehouseListViewManager_o *this,
        WarehouseListViewItem_o *selectItem,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x0
  const MethodInfo *v7; // x1

  if ( (byte_42E93FF & 1) == 0 )
  {
    sub_B5D5C4(&SoundManager_TypeInfo, (_DWORD)selectItem, (_DWORD)method, v3);
    byte_42E93FF = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(0, 0LL);
  if ( !selectItem )
    sub_B5D69C(v6, v7);
  selectItem->fields.isSwapChoice ^= 1u;
  WarehouseListViewManager__RefrashListDisp(this, v7);
}


void __fastcall WarehouseListViewManager__SelectListViewLock(
        WarehouseListViewManager_o *this,
        WarehouseListViewItem_o *selectItem,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x0
  const MethodInfo *v7; // x1

  if ( (byte_42E93FE & 1) == 0 )
  {
    sub_B5D5C4(&SoundManager_TypeInfo, (_DWORD)selectItem, (_DWORD)method, v3);
    byte_42E93FE = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(11, 0LL);
  if ( !selectItem )
    sub_B5D69C(v6, v7);
  selectItem->fields.isSwapLock ^= 1u;
  WarehouseListViewManager__RefrashListDisp(this, v7);
}


void __fastcall WarehouseListViewManager__SetDragEnd(WarehouseListViewManager_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  const MethodInfo *v5; // x1
  const MethodInfo *v6; // x2
  int32_t dragStartIndex; // w20
  int32_t dragEndIndex; // w21

  if ( (byte_42E940F & 1) == 0 )
  {
    sub_B5D5C4(&SoundManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E940F = 1;
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
  *(_OWORD *)&this->fields.dragSelectSum = xmmword_32A3DA0;
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
  int v7; // w1
  char v8; // w2
  __int64 v9; // x3
  int v10; // w1
  char v11; // w2
  __int64 v12; // x3
  int v13; // w1
  char v14; // w2
  __int64 v15; // x3
  struct System_Collections_Generic_List_ListViewItem__o *itemSortList; // x22
  ListViewItem_o *v17; // x19
  WarehouseListViewItem_c *v18; // x1
  __int64 v19; // x9
  int monitor_high; // w8
  bool v21; // w21
  _BOOL4 v22; // w21
  bool IsSelect; // w0
  const MethodInfo *v24; // x4
  int v25; // w8
  UnityEngine_Object_o *viewObject; // x20
  __int64 v27; // x9
  bool result; // w0
  WarehouseListViewManager_o *v29; // x0
  int32_t v30; // w1
  bool v31; // w2
  const MethodInfo *v32; // x3

  v6 = this;
  if ( (byte_42E940D & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, index, isDragSelect, method);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v7, v8, v9);
    sub_B5D5C4(&WarehouseListViewItem_TypeInfo, v10, v11, v12);
    this = (WarehouseListViewManager_o *)sub_B5D5C4(&WarehouseListViewObject_TypeInfo, v13, v14, v15);
    byte_42E940D = 1;
  }
  itemSortList = v6->fields.itemSortList;
  if ( !itemSortList )
    goto LABEL_49;
  if ( itemSortList->fields._size <= (unsigned int)index )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
  v17 = itemSortList->fields._items->m_Items[index];
  if ( !v17 )
    goto LABEL_49;
  v18 = WarehouseListViewItem_TypeInfo;
  v19 = *(&WarehouseListViewItem_TypeInfo->_2.bitflags2 + 1);
  if ( *(&v17->klass->_2.bitflags2 + 1) < (unsigned int)v19
    || (WarehouseListViewItem_c *)v17->klass->_2.typeHierarchy[v19 - 1] != WarehouseListViewItem_TypeInfo )
  {
    this = (WarehouseListViewManager_o *)v17;
    goto LABEL_51;
  }
  monitor_high = HIDWORD(v17[2].monitor);
  if ( !isDragSelect )
  {
    if ( (monitor_high & 0x80000000) == 0 )
    {
      if ( !ListViewItem__get_IsSelect(v17, 0LL) && SHIDWORD(v17[2].monitor) >= 1 )
      {
        if ( BYTE6(v17[1].fields.sortValue1) )
          --v6->fields.dragSelectFriendShipSum;
        else
          --v6->fields.dragSelectSum;
        if ( !v6->fields.kind )
        {
          this = (WarehouseListViewManager_o *)v17[1].monitor;
          if ( !this )
            goto LABEL_49;
          if ( ServantEntity__get_IsOrganization((ServantEntity_o *)this, 0LL) && !HIDWORD(v17[1].fields.sortValue2B) )
            --v6->fields.dragServantSelectSum;
        }
      }
      v21 = 0;
      v25 = -1;
      goto LABEL_29;
    }
    goto LABEL_31;
  }
  if ( (monitor_high & 0x80000000) == 0 )
    goto LABEL_31;
  HIDWORD(v17[2].monitor) = 0;
  v21 = 0;
  if ( !WarehouseListViewItem__get_IsCanNotSelect((WarehouseListViewItem_o *)v17, (const MethodInfo *)v18) )
  {
    v22 = v6->fields.isDragSelect;
    IsSelect = ListViewItem__get_IsSelect(v17, 0LL);
    if ( v22 )
    {
      if ( !IsSelect )
      {
        if ( !WarehouseListViewManager__IsSelectEnable(
                v6,
                (WarehouseListViewItem_o *)v17,
                v6->fields.dragSelectSum,
                v6->fields.dragServantSelectSum,
                v24) )
        {
          v21 = 1;
          goto LABEL_32;
        }
        if ( BYTE6(v17[1].fields.sortValue1) )
          ++v6->fields.dragSelectFriendShipSum;
        else
          ++v6->fields.dragSelectSum;
        if ( !v6->fields.kind )
        {
          this = (WarehouseListViewManager_o *)v17[1].monitor;
          if ( !this )
            goto LABEL_49;
          if ( ServantEntity__get_IsOrganization((ServantEntity_o *)this, 0LL) && !HIDWORD(v17[1].fields.sortValue2B) )
            ++v6->fields.dragServantSelectSum;
        }
        goto LABEL_48;
      }
    }
    else if ( IsSelect )
    {
LABEL_48:
      v21 = 0;
      v25 = 1;
LABEL_29:
      HIDWORD(v17[2].monitor) = v25;
      goto LABEL_32;
    }
LABEL_31:
    v21 = 0;
  }
LABEL_32:
  viewObject = (UnityEngine_Object_o *)v17->fields.viewObject;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Inequality(viewObject, 0LL, 0LL) )
    return v21;
  this = (WarehouseListViewManager_o *)v17->fields.viewObject;
  if ( !this )
LABEL_49:
    sub_B5D69C(this, *(_QWORD *)&index);
  v27 = *(&WarehouseListViewObject_TypeInfo->_2.bitflags2 + 1);
  if ( *(&this->klass->_2.bitflags2 + 1) >= (unsigned int)v27
    && (WarehouseListViewObject_c *)this->klass->_2.typeHierarchy[v27 - 1] == WarehouseListViewObject_TypeInfo )
  {
    WarehouseListViewObject__SetupDisp((WarehouseListViewObject_o *)this, 0LL);
    return v21;
  }
LABEL_51:
  v29 = (WarehouseListViewManager_o *)sub_B5D990(this);
  WarehouseListViewManager__SetDragStart(v29, v30, v31, v32);
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
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int32_t dragStartIndex; // w8
  int32_t dragEndIndex; // w9
  int v18; // w25
  int v19; // w26
  int32_t v20; // w23
  int32_t v21; // w24
  int32_t v22; // w22
  struct WarehouseListManager_o *parentManager; // x8
  int v24; // w27
  struct System_Collections_Generic_List_ListViewItem__o *itemSortList; // x20
  WarehouseListViewManager_o *v26; // x20
  __int64 v27; // x9
  UnityEngine_Object_o *clipRange; // x21
  __int64 v29; // x9
  WarehouseListViewManager_o *v30; // x0
  int32_t v31; // w1
  bool v32; // w2
  const MethodInfo *v33; // x3

  v5 = startIndex;
  v6 = this;
  if ( (byte_42E940C & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, startIndex, endIndex, method);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v7, v8, v9);
    sub_B5D5C4(&WarehouseListViewItem_TypeInfo, v10, v11, v12);
    this = (WarehouseListViewManager_o *)sub_B5D5C4(&WarehouseListViewObject_TypeInfo, v13, v14, v15);
    byte_42E940C = 1;
  }
  dragStartIndex = v6->fields.dragStartIndex;
  if ( (dragStartIndex & 0x80000000) != 0 )
  {
    v18 = -1;
    v19 = -1;
  }
  else
  {
    dragEndIndex = v6->fields.dragEndIndex;
    if ( dragStartIndex <= dragEndIndex )
      v18 = v6->fields.dragEndIndex;
    else
      v18 = v6->fields.dragStartIndex;
    if ( dragStartIndex <= dragEndIndex )
      v19 = v6->fields.dragStartIndex;
    else
      v19 = v6->fields.dragEndIndex;
  }
  v6->fields.dragStartIndex = v5;
  v6->fields.dragEndIndex = endIndex;
  if ( (v5 & 0x80000000) != 0 )
  {
    v20 = -1;
    v21 = -1;
    if ( (v19 & 0x80000000) != 0 )
      goto LABEL_28;
  }
  else
  {
    if ( v5 <= endIndex )
      v20 = endIndex;
    else
      v20 = v5;
    if ( v5 <= endIndex )
      v21 = v5;
    else
      v21 = endIndex;
    if ( (v19 & 0x80000000) != 0 )
      goto LABEL_28;
  }
  if ( v19 <= v18 )
  {
    v22 = v19;
    do
    {
      if ( v22 > v20 || (v21 & 0x80000000) != 0 || v22 < v21 )
        this = (WarehouseListViewManager_o *)WarehouseListViewManager__SetDragSelect(v6, v22, 0, method);
      ++v22;
    }
    while ( v22 <= v18 );
  }
LABEL_28:
  if ( (v5 & 0x80000000) == 0 )
  {
    if ( v5 <= endIndex )
    {
      do
      {
        if ( v5 > v18 || (v19 & 0x80000000) != 0 || v5 < v19 )
          this = (WarehouseListViewManager_o *)WarehouseListViewManager__SetDragSelect(v6, v5, 1, method);
        ++v5;
      }
      while ( v5 <= endIndex );
    }
    else
    {
      do
      {
        if ( v5 > v18 || (v19 & 0x80000000) != 0 || v5 < v19 )
          this = (WarehouseListViewManager_o *)WarehouseListViewManager__SetDragSelect(v6, v5, 1, method);
        --v5;
      }
      while ( v5 >= endIndex );
    }
    if ( (v21 & 0x80000000) == 0 && v6->fields.isDragSelect )
    {
      parentManager = v6->fields.parentManager;
      if ( !parentManager )
LABEL_63:
        sub_B5D69C(this, *(_QWORD *)&startIndex);
      if ( v21 <= v20 )
      {
        v24 = parentManager->fields.totalSum + 1;
        while ( 1 )
        {
          itemSortList = v6->fields.itemSortList;
          if ( !itemSortList )
            goto LABEL_63;
          if ( itemSortList->fields._size <= (unsigned int)v21 )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
          v26 = (WarehouseListViewManager_o *)itemSortList->fields._items->m_Items[v21];
          if ( !v26 )
            goto LABEL_63;
          *(_QWORD *)&startIndex = WarehouseListViewItem_TypeInfo;
          v27 = *(&WarehouseListViewItem_TypeInfo->_2.bitflags2 + 1);
          if ( *(&v26->klass->_2.bitflags2 + 1) < (unsigned int)v27
            || (WarehouseListViewItem_c *)v26->klass->_2.typeHierarchy[v27 - 1] != WarehouseListViewItem_TypeInfo )
          {
            break;
          }
          if ( SHIDWORD(v26->fields.bottomItem) >= 1 )
          {
            HIDWORD(v26->fields.bottomItem) = v24;
            clipRange = (UnityEngine_Object_o *)v26->fields.clipRange;
            ++v24;
            if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            }
            this = (WarehouseListViewManager_o *)UnityEngine_Object__op_Inequality(clipRange, 0LL, 0LL);
            if ( ((unsigned __int8)this & 1) != 0 )
            {
              this = (WarehouseListViewManager_o *)v26->fields.clipRange;
              if ( !this )
                goto LABEL_63;
              v29 = *(&WarehouseListViewObject_TypeInfo->_2.bitflags2 + 1);
              if ( *(&this->klass->_2.bitflags2 + 1) < (unsigned int)v29
                || (WarehouseListViewObject_c *)this->klass->_2.typeHierarchy[v29 - 1] != WarehouseListViewObject_TypeInfo )
              {
                goto LABEL_65;
              }
              WarehouseListViewObject__SetupDisp((WarehouseListViewObject_o *)this, 0LL);
            }
          }
          if ( ++v21 > v20 )
            return;
        }
        this = v26;
LABEL_65:
        v30 = (WarehouseListViewManager_o *)sub_B5D990(this);
        WarehouseListViewManager__SetDragSelect(v30, v31, v32, v33);
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
  int v7; // w1
  char v8; // w2
  __int64 v9; // x3
  int v10; // w1
  char v11; // w2
  __int64 v12; // x3
  int v13; // w1
  char v14; // w2
  __int64 v15; // x3
  struct System_Collections_Generic_List_ListViewItem__o *itemSortList; // x25
  int size; // w21
  int v18; // w22
  __int64 v19; // x9
  UnityEngine_Object_o *scrollView; // x20

  v5 = startIndex;
  v6 = this;
  if ( (byte_42E940E & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, startIndex, isDragSelect, method);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v7, v8, v9);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v10, v11, v12);
    this = (WarehouseListViewManager_o *)sub_B5D5C4(&WarehouseListViewItem_TypeInfo, v13, v14, v15);
    byte_42E940E = 1;
  }
  *(_OWORD *)&v6->fields.dragSelectSum = xmmword_32A3DA0;
  itemSortList = v6->fields.itemSortList;
  v6->fields.isDragSelect = isDragSelect;
  v6->fields.dragSelectFriendShipSum = 0;
  if ( !itemSortList )
    goto LABEL_22;
  size = itemSortList->fields._size;
  if ( size >= 1 )
  {
    v18 = 0;
    while ( 1 )
    {
      if ( itemSortList->fields._size <= (unsigned int)v18 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
      this = (WarehouseListViewManager_o *)itemSortList->fields._items->m_Items[v18];
      if ( !this )
        goto LABEL_22;
      *(_QWORD *)&startIndex = WarehouseListViewItem_TypeInfo;
      v19 = *(&WarehouseListViewItem_TypeInfo->_2.bitflags2 + 1);
      if ( *(&this->klass->_2.bitflags2 + 1) < (unsigned int)v19
        || (WarehouseListViewItem_c *)this->klass->_2.typeHierarchy[v19 - 1] != WarehouseListViewItem_TypeInfo )
      {
        break;
      }
      ++v18;
      HIDWORD(this->fields.bottomItem) = -1;
      if ( v18 >= size )
        goto LABEL_14;
      itemSortList = v6->fields.itemSortList;
      if ( !itemSortList )
        goto LABEL_22;
    }
    this = (WarehouseListViewManager_o *)sub_B5D990(this);
LABEL_22:
    sub_B5D69C(this, *(_QWORD *)&startIndex);
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  ListViewSort_o *sort; // x0
  UISprite_o *filterSprite; // x19
  System_String_o **v10; // x8

  if ( (byte_42E9405 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_17202/*"btn_filter_on"*/, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_17201/*"btn_filter"*/, v5, v6, v7);
    byte_42E9405 = 1;
  }
  sort = this->fields.sort;
  if ( !sort
    || (filterSprite = this->fields.filterSprite,
        sort = (ListViewSort_o *)ListViewSort__CheckFilterDefaultAll(sort, -1, 0LL),
        !filterSprite) )
  {
    sub_B5D69C(sort, method);
  }
  v10 = (System_String_o **)&StringLiteral_17201/*"btn_filter"*/;
  if ( ((unsigned __int8)sort & 1) == 0 )
    v10 = (System_String_o **)&StringLiteral_17202/*"btn_filter_on"*/;
  UISprite__set_spriteName(filterSprite, *v10, 0LL);
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
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.callbackFunc,
    (System_Int32_array **)callback,
    (System_String_array **)callback,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  WarehouseListViewManager__SetMode_26335900(this, mode, v10);
}


void __fastcall WarehouseListViewManager__SetMode_26335900(
        WarehouseListViewManager_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  __int64 v27; // x1
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x0
  _BOOL8 v29; // x0
  __int64 v30; // x1
  WarehouseListViewItem_o *current; // x20
  __int64 v32; // x9
  const MethodInfo *v33; // x1
  _BOOL8 v34; // x0
  __int64 v35; // x1
  struct WarehouseListManager_o *v36; // x8
  struct WarehouseListViewManager_o *v37; // x9
  UILabel_o *v38; // x21
  System_String_o *v39; // x0
  __int64 v40; // x1
  struct WarehouseListManager_o *v41; // x8
  System_String_o *v42; // x22
  __int64 v43; // x0
  __int64 v44; // x1
  struct WarehouseListManager_o *v45; // x8
  Il2CppObject *v46; // x23
  Il2CppObject *v47; // x2
  System_String_o *v48; // x0
  __int64 v49; // x0
  __int64 v50; // x1
  const MethodInfo *v51; // x2
  struct WarehouseListManager_o *v52; // x8
  WarehouseListViewManager_o *v53; // x0
  LocalizationManager_c **v54; // x21
  char v55; // w24
  __int64 v56; // x9
  const MethodInfo *v57; // x1
  _BOOL8 CanNotSelect; // x0
  __int64 v59; // x1
  struct WarehouseListManager_o *parentManager; // x8
  struct WarehouseListViewManager_o *baseListViewManager; // x9
  LocalizationManager_c **v62; // x28
  LocalizationManager_c *v63; // x0
  UILabel_o *selectDoneLabel; // x21
  System_String_o *v65; // x0
  __int64 v66; // x1
  struct WarehouseListManager_o *v67; // x8
  System_String_o *v68; // x22
  __int64 v69; // x0
  __int64 v70; // x1
  struct WarehouseListManager_o *v71; // x8
  Il2CppObject *v72; // x23
  Il2CppObject *v73; // x2
  System_String_o *v74; // x0
  __int64 v75; // x0
  __int64 v76; // x1
  const MethodInfo *v77; // x2
  struct WarehouseListManager_o *v78; // x8
  WarehouseListViewManager_o *v79; // x0
  __int64 v80; // x0
  __int64 v81; // x1
  const MethodInfo *v82; // x1
  const MethodInfo *v83; // x2
  int32_t v84; // w1
  const MethodInfo *v85; // x1
  int32_t sendMax; // [xsp+4h] [xbp-8Ch] BYREF
  System_Collections_Generic_List_Enumerator_T__o v87; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v88; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_42E93F4 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__, mode, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v6, v7, v8);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v9, v10, v11);
    sub_B5D5C4(&int_TypeInfo, v12, v13, v14);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v15, v16, v17);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v18, v19, v20);
    sub_B5D5C4(&WarehouseListViewItem_TypeInfo, v21, v22, v23);
    sub_B5D5C4(&StringLiteral_12617/*"SUM_INFO"*/, v24, v25, v26);
    byte_42E93F4 = 1;
  }
  memset(&v88, 0, sizeof(v88));
  this->fields.initMode = mode;
  this->fields.callbackCount = ListViewManager__get_ObjectSum((ListViewManager_o *)this, 0LL);
  ListViewManager__set_IsInput((ListViewManager_o *)this, mode == 2, 0LL);
  if ( (unsigned int)(mode - 1) < 2 )
  {
    itemList = this->fields.itemList;
    if ( itemList )
    {
      System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
        &v87,
        (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)itemList,
        (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
      v54 = &LocalizationManager_TypeInfo;
      v55 = 0;
      v88 = v87;
      while ( 1 )
      {
        v80 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                &v88,
                (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
        if ( (v80 & 1) == 0 )
          break;
        current = (WarehouseListViewItem_o *)v88.fields.current;
        if ( !v88.fields.current )
          goto LABEL_53;
        v56 = *(&WarehouseListViewItem_TypeInfo->_2.bitflags2 + 1);
        if ( *(&v88.fields.current->klass->_2.bitflags2 + 1) < (unsigned int)v56
          || (WarehouseListViewItem_c *)v88.fields.current->klass->_2.typeHierarchy[v56 - 1] != WarehouseListViewItem_TypeInfo )
        {
          sub_B5D990(v88.fields.current);
LABEL_52:
          v80 = sub_B5D990(current);
LABEL_53:
          sub_B5D69C(v80, v81);
        }
        if ( ListViewItem__get_IsSelect((ListViewItem_o *)v88.fields.current, 0LL) )
        {
          CanNotSelect = WarehouseListViewItem__get_IsCanNotSelect(current, v57);
          if ( CanNotSelect )
          {
            parentManager = this->fields.parentManager;
            --this->fields.selectSum;
            if ( !parentManager )
              sub_B5D69C(CanNotSelect, v59);
            baseListViewManager = parentManager->fields.baseListViewManager;
            if ( !baseListViewManager )
              sub_B5D69C(CanNotSelect, v59);
            v62 = v54;
            parentManager->fields.totalSum = baseListViewManager->fields.selectSum;
            v63 = *v54;
            selectDoneLabel = this->fields.selectDoneLabel;
            if ( (BYTE3(v63->vtable._0_Equals.methodPtr) & 4) != 0 && !v63->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(v63);
            v65 = LocalizationManager__Get((System_String_o *)StringLiteral_12617/*"SUM_INFO"*/, 0LL);
            v67 = this->fields.parentManager;
            if ( !v67 )
              sub_B5D69C(v65, v66);
            v68 = v65;
            LODWORD(v87.fields.list) = v67->fields.totalSum;
            v69 = j_il2cpp_value_box_0(int_TypeInfo, &v87);
            v71 = this->fields.parentManager;
            if ( !v71 )
              sub_B5D69C(v69, v70);
            v72 = (Il2CppObject *)v69;
            sendMax = v71->fields.sendMax;
            v73 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &sendMax);
            v74 = System_String__Format_44573324(v68, v72, v73, 0LL);
            if ( !selectDoneLabel )
              sub_B5D69C(v74, v74);
            UILabel__set_text(selectDoneLabel, v74, 0LL);
            v78 = this->fields.parentManager;
            if ( !v78 )
              sub_B5D69C(v75, v76);
            v79 = v78->fields.baseListViewManager;
            if ( !v79 )
              sub_B5D69C(0LL, v76);
            v54 = v62;
            WarehouseListViewManager__DecrementNumber(v79, current->fields.selectNum, v77);
            ListViewItem__set_IsSelect((ListViewItem_o *)current, 0, 0LL);
            v55 = 1;
          }
        }
      }
      System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
        &v88,
        (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
      if ( (v55 & 1) != 0 )
        WarehouseListViewManager__RefrashListDisp(this, v82);
      if ( this->fields.isInput )
        v84 = 3;
      else
        v84 = 2;
      goto LABEL_49;
    }
LABEL_69:
    sub_B5D69C(itemList, v27);
  }
  if ( mode != 3 )
    return;
  itemList = this->fields.itemList;
  if ( !itemList )
    goto LABEL_69;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v87,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)itemList,
    (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  v88 = v87;
  while ( 1 )
  {
    v29 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v88,
            (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    if ( !v29 )
      break;
    current = (WarehouseListViewItem_o *)v88.fields.current;
    if ( !v88.fields.current )
      sub_B5D69C(v29, v30);
    v32 = *(&WarehouseListViewItem_TypeInfo->_2.bitflags2 + 1);
    if ( *(&v88.fields.current->klass->_2.bitflags2 + 1) < (unsigned int)v32
      || (WarehouseListViewItem_c *)v88.fields.current->klass->_2.typeHierarchy[v32 - 1] != WarehouseListViewItem_TypeInfo )
    {
      goto LABEL_52;
    }
    if ( ListViewItem__get_IsSelect((ListViewItem_o *)v88.fields.current, 0LL) )
    {
      v34 = WarehouseListViewItem__get_IsCanNotSelect(current, v33);
      if ( v34 )
      {
        v36 = this->fields.parentManager;
        --this->fields.selectSum;
        if ( !v36 )
          sub_B5D69C(v34, v35);
        v37 = v36->fields.baseListViewManager;
        if ( !v37 )
          sub_B5D69C(v34, v35);
        v36->fields.totalSum = v37->fields.selectSum;
        v38 = this->fields.selectDoneLabel;
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v39 = LocalizationManager__Get((System_String_o *)StringLiteral_12617/*"SUM_INFO"*/, 0LL);
        v41 = this->fields.parentManager;
        if ( !v41 )
          sub_B5D69C(v39, v40);
        v42 = v39;
        LODWORD(v87.fields.list) = v41->fields.totalSum;
        v43 = j_il2cpp_value_box_0(int_TypeInfo, &v87);
        v45 = this->fields.parentManager;
        if ( !v45 )
          sub_B5D69C(v43, v44);
        v46 = (Il2CppObject *)v43;
        sendMax = v45->fields.sendMax;
        v47 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &sendMax);
        v48 = System_String__Format_44573324(v42, v46, v47, 0LL);
        if ( !v38 )
          sub_B5D69C(v48, v48);
        UILabel__set_text(v38, v48, 0LL);
        v52 = this->fields.parentManager;
        if ( !v52 )
          sub_B5D69C(v49, v50);
        v53 = v52->fields.baseListViewManager;
        if ( !v53 )
          sub_B5D69C(0LL, v50);
        WarehouseListViewManager__DecrementNumber(v53, current->fields.selectNum, v51);
        ListViewItem__set_IsSelect((ListViewItem_o *)current, 0, 0LL);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v88,
    (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
  WarehouseListViewManager__RefrashListDisp(this, v85);
  v84 = 4;
LABEL_49:
  WarehouseListViewManager__RequestListObject_26337432(this, v84, v83);
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
  if ( (byte_42E93F3 & 1) == 0 )
  {
    this = (WarehouseListViewManager_o *)sub_B5D5C4(
                                           &WarehouseListViewObject_TypeInfo,
                                           (_DWORD)obj,
                                           (_DWORD)item,
                                           method);
    byte_42E93F3 = 1;
  }
  if ( !obj
    || (v6 = *(&WarehouseListViewObject_TypeInfo->_2.bitflags2 + 1), *(&obj->klass->_2.bitflags2 + 1) < (unsigned int)v6)
    || (WarehouseListViewObject_c *)obj->klass->_2.typeHierarchy[v6 - 1] != WarehouseListViewObject_TypeInfo )
  {
    sub_B5D69C(this, obj);
  }
  if ( v5->fields.initMode == 2 )
    v7 = 3;
  else
    v7 = 2;
  WarehouseListViewObject__Init_22677116((WarehouseListViewObject_o *)obj, v7, 0LL);
}


void __fastcall WarehouseListViewManager__SetSortButtonImage(
        WarehouseListViewManager_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  UnityEngine_Object_o *sortKindLabel; // x20
  __int64 v24; // x1
  ListViewSort_o *sort; // x0
  UILabel_o *v26; // x20
  UnityEngine_Object_o *sortOrderSprite; // x20
  struct ListViewSort_o *v28; // x8
  int32_t sortKind; // w9
  System_String_o **v30; // x8
  struct ListViewSort_o *v31; // x8
  _BOOL4 isAscendingOrder; // w8
  System_String_o **v33; // x9
  System_String_o **v34; // x10
  System_String_o **v35; // x8
  struct ListViewSort_o *v36; // x8
  System_String_o **v37; // x8
  UnityEngine_Object_o *bonusFilterKindLabel; // x20
  UILabel_o *v39; // x20
  System_Int32_array *bonusEventIdList; // x1
  System_Int32_array *servantFilterIdList; // x2

  if ( (byte_42E9408 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_17230/*"btn_sort_up"*/, v5, v6, v7);
    sub_B5D5C4(&StringLiteral_17314/*"btn_txt_up"*/, v8, v9, v10);
    sub_B5D5C4(&StringLiteral_17270/*"btn_txt_new"*/, v11, v12, v13);
    sub_B5D5C4(&StringLiteral_17260/*"btn_txt_down"*/, v14, v15, v16);
    sub_B5D5C4(&StringLiteral_17277/*"btn_txt_old"*/, v17, v18, v19);
    sub_B5D5C4(&StringLiteral_17227/*"btn_sort_down"*/, v20, v21, v22);
    byte_42E9408 = 1;
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
    v26 = this->fields.sortKindLabel;
    sort = (ListViewSort_o *)ListViewSort__GetSortKindButtonText(sort, 0LL);
    if ( !v26 )
      goto LABEL_46;
    UILabel__set_text(v26, (System_String_o *)sort, 0LL);
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
    v28 = this->fields.sort;
    if ( !v28 )
      goto LABEL_46;
    sortKind = v28->fields.sortKind;
    if ( sortKind == 11 || sortKind == 1 )
    {
      sort = (ListViewSort_o *)this->fields.sortExplanationSprite;
      if ( !sort )
        goto LABEL_46;
      v30 = (System_String_o **)(v28->fields.isAscendingOrder ? &StringLiteral_17277/*"btn_txt_old"*/ : &StringLiteral_17270/*"btn_txt_new"*/);
      UISprite__set_spriteName((UISprite_o *)sort, *v30, 0LL);
      v31 = this->fields.sort;
      if ( !v31 )
        goto LABEL_46;
      sort = (ListViewSort_o *)this->fields.sortOrderSprite;
      if ( !sort )
        goto LABEL_46;
      isAscendingOrder = v31->fields.isAscendingOrder;
      v33 = (System_String_o **)&StringLiteral_17227/*"btn_sort_down"*/;
      v34 = (System_String_o **)&StringLiteral_17230/*"btn_sort_up"*/;
    }
    else
    {
      sort = (ListViewSort_o *)this->fields.sortExplanationSprite;
      if ( !sort )
        goto LABEL_46;
      v35 = (System_String_o **)(v28->fields.isAscendingOrder ? &StringLiteral_17314/*"btn_txt_up"*/ : &StringLiteral_17260/*"btn_txt_down"*/);
      UISprite__set_spriteName((UISprite_o *)sort, *v35, 0LL);
      v36 = this->fields.sort;
      if ( !v36 )
        goto LABEL_46;
      sort = (ListViewSort_o *)this->fields.sortOrderSprite;
      if ( !sort )
        goto LABEL_46;
      isAscendingOrder = v36->fields.isAscendingOrder;
      v33 = (System_String_o **)&StringLiteral_17230/*"btn_sort_up"*/;
      v34 = (System_String_o **)&StringLiteral_17227/*"btn_sort_down"*/;
    }
    if ( isAscendingOrder )
      v37 = v33;
    else
      v37 = v34;
    UISprite__set_spriteName((UISprite_o *)sort, *v37, 0LL);
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
      v39 = this->fields.bonusFilterKindLabel;
      bonusEventIdList = this->fields.bonusEventIdList;
      servantFilterIdList = this->fields.servantFilterIdList;
      if ( this->fields.isQuestStart )
      {
        sort = (ListViewSort_o *)ListViewSort__GetBonusKindText_34064848(
                                   sort,
                                   bonusEventIdList,
                                   servantFilterIdList,
                                   0,
                                   0LL,
                                   0LL);
        if ( v39 )
        {
LABEL_43:
          UILabel__set_text(v39, (System_String_o *)sort, 0LL);
          return;
        }
      }
      else
      {
        sort = (ListViewSort_o *)ListViewSort__GetBonusKind2Text_34067136(
                                   sort,
                                   bonusEventIdList,
                                   servantFilterIdList,
                                   0LL,
                                   0LL,
                                   0LL,
                                   0LL);
        if ( v39 )
          goto LABEL_43;
      }
LABEL_46:
      sub_B5D69C(sort, v24);
    }
  }
}


void __fastcall WarehouseListViewManager__UpdateItemState(
        WarehouseListViewManager_o *this,
        bool isPushMode,
        const MethodInfo *method)
{
  __int64 v3; // x3
  char v6; // w1
  int v7; // w2
  __int64 v8; // x3
  char v9; // w1
  int v10; // w2
  __int64 v11; // x3
  char v12; // w1
  int v13; // w2
  __int64 v14; // x3
  char v15; // w1
  int v16; // w2
  __int64 v17; // x3
  char v18; // w1
  int v19; // w2
  __int64 v20; // x3
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *SelfUserGame; // x0
  __int64 v22; // x1
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *v23; // x8
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__c *klass; // x21
  __int64 v25; // x0
  __int64 v26; // x1
  Il2CppObject *current; // x20
  WarehouseListViewItem_c *v28; // x1
  __int64 v29; // x9
  Il2CppClass *v30; // x8
  Il2CppType byval_arg; // q0
  __int64 v32; // x1
  UserServantEntity_o *v33; // x0
  __int64 v34; // x1
  UserServantEntity_o *v35; // x0
  __int64 v36; // x1
  UserServantEntity_o *v37; // x0
  __int64 v38; // x1
  UserServantEntity_o *v39; // x0
  __int64 v40; // x1
  bool v41; // w8
  UserServantEntity_o *v42; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v43; // [xsp+0h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v44; // [xsp+20h] [xbp-80h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v45; // [xsp+40h] [xbp-60h] BYREF

  if ( (byte_42E9414 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__,
      isPushMode,
      (_DWORD)method,
      v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v6, v7, v8);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v9, v10, v11);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v12, v13, v14);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v15, v16, v17);
    sub_B5D5C4(&WarehouseListViewItem_TypeInfo, v18, v19, v20);
    byte_42E9414 = 1;
  }
  memset(&v45, 0, sizeof(v45));
  SelfUserGame = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)UserGameMaster__getSelfUserGame(0LL);
  if ( !SelfUserGame
    || (v23 = SelfUserGame,
        (SelfUserGame = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this->fields.itemList) == 0LL) )
  {
    sub_B5D69C(SelfUserGame, v22);
  }
  klass = v23[3].klass;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v44,
    SelfUserGame,
    (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  v45.fields.current = (Il2CppObject *)v44.fields.fakeValue;
  *(_OWORD *)&v45.fields.list = *(_OWORD *)&v44.fields.currentCryptoKey;
  while ( 1 )
  {
    v25 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v45,
            (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    if ( (v25 & 1) == 0 )
      break;
    current = v45.fields.current;
    if ( !v45.fields.current )
      goto LABEL_30;
    v28 = WarehouseListViewItem_TypeInfo;
    v29 = *(&WarehouseListViewItem_TypeInfo->_2.bitflags2 + 1);
    if ( *(&v45.fields.current->klass->_2.bitflags2 + 1) < (unsigned int)v29
      || (WarehouseListViewItem_c *)v45.fields.current->klass->_2.typeHierarchy[v29 - 1] != WarehouseListViewItem_TypeInfo )
    {
      v25 = sub_B5D990(v45.fields.current);
LABEL_30:
      sub_B5D69C(v25, v26);
    }
    v30 = v45.fields.current[7].klass;
    BYTE3(v45.fields.current[10].klass) = isPushMode;
    if ( !v30 )
      sub_B5D69C(v25, v28);
    byval_arg = v30->_1.byval_arg;
    *(_OWORD *)&v44.fields.currentCryptoKey = *(_OWORD *)&v30->_1.name;
    *(Il2CppType *)&v44.fields.fakeValue = byval_arg;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    }
    v43 = v44;
    BYTE4(current[10].klass) = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v43, 0LL) == (_QWORD)klass;
    if ( isPushMode )
    {
      v33 = (UserServantEntity_o *)current[7].klass;
      if ( !v33 )
        sub_B5D69C(0LL, v32);
      if ( UserServantEntity__IsLeave(v33, 0LL) )
        goto LABEL_23;
      v35 = (UserServantEntity_o *)current[7].klass;
      if ( !v35 )
        sub_B5D69C(0LL, v34);
      if ( UserServantEntity__IsEventJoin(v35, 0LL) )
        goto LABEL_23;
      v37 = (UserServantEntity_o *)current[7].klass;
      if ( !v37 )
        sub_B5D69C(0LL, v36);
      if ( UserServantEntity__IsCombineMaterial(v37, 0LL) )
        goto LABEL_23;
      v39 = (UserServantEntity_o *)current[7].klass;
      if ( !v39 )
        sub_B5D69C(0LL, v38);
      if ( UserServantEntity__IsStatusUp(v39, 0LL) )
      {
LABEL_23:
        v41 = 0;
      }
      else
      {
        v42 = (UserServantEntity_o *)current[7].klass;
        if ( !v42 )
          sub_B5D69C(0LL, v40);
        v41 = !UserServantEntity__IsMaterialTd(v42, 0LL);
      }
    }
    else
    {
      v41 = 1;
    }
    BYTE5(current[10].klass) = v41;
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v45,
    (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
}


void __fastcall WarehouseListViewManager__add_callbackFunc(
        WarehouseListViewManager_o *this,
        WarehouseListViewManager_CallbackFunc_o *value,
        const MethodInfo *method)
{
  __int64 v3; // x3
  System_Delegate_o *callbackFunc; // x21
  struct WarehouseListViewManager_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  WarehouseListViewManager_o *v11; // x0
  WarehouseListViewManager_CallbackFunc_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_42E93E6 & 1) == 0 )
  {
    sub_B5D5C4(&WarehouseListViewManager_CallbackFunc_TypeInfo, (_DWORD)value, (_DWORD)method, v3);
    byte_42E93E6 = 1;
  }
  callbackFunc = (System_Delegate_o *)this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Combine(callbackFunc, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (WarehouseListViewManager_CallbackFunc_c *)v8->klass != WarehouseListViewManager_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_B51FDC(p_callbackFunc, v8, callbackFunc);
    v10 = callbackFunc == (System_Delegate_o *)v9;
    callbackFunc = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (WarehouseListViewManager_o *)sub_B5D990(v8);
  WarehouseListViewManager__remove_callbackFunc(v11, v12, v13);
}


System_Collections_Generic_List_WarehouseListViewObject__o *__fastcall WarehouseListViewManager__get_ClippingObjectList(
        WarehouseListViewManager_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v29; // x19
  __int64 v30; // x1
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  Il2CppObject *current; // x21
  _BOOL8 v33; // x0
  __int64 v34; // x1
  srcLineSprite_o *Component_srcLineSprite; // x0
  __int64 v36; // x1
  EventMissionProgressRequest_Argument_ProgressData_o *v37; // x21
  ListViewItem_o *Item; // x0
  __int64 v39; // x1
  _BOOL8 v40; // x0
  __int64 v41; // x1
  System_Collections_Generic_List_Enumerator_T__o v43; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v44; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_42E93EB & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v8, v9, v10);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_WarehouseListViewObject___, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_List_WarehouseListViewObject__Add__, v14, v15, v16);
    sub_B5D5C4(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v17, v18, v19);
    sub_B5D5C4(&Method_System_Collections_Generic_List_WarehouseListViewObject___ctor__, v20, v21, v22);
    sub_B5D5C4(&System_Collections_Generic_List_WarehouseListViewObject__TypeInfo, v23, v24, v25);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v26, v27, v28);
    byte_42E93EB = 1;
  }
  memset(&v44, 0, sizeof(v44));
  v29 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_WarehouseListViewObject__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v29,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_WarehouseListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_B5D69C(0LL, v30);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v43,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)objectList,
    (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v44 = v43;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v44,
            (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v44.fields.current;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v33 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v33 )
    {
      if ( !current )
        sub_B5D69C(v33, v34);
      Component_srcLineSprite = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                  (UnityEngine_GameObject_o *)current,
                                  (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_WarehouseListViewObject___);
      v37 = (EventMissionProgressRequest_Argument_ProgressData_o *)Component_srcLineSprite;
      if ( !Component_srcLineSprite )
        sub_B5D69C(0LL, v36);
      Item = (ListViewItem_o *)WarehouseListViewObject__GetItem(
                                 (WarehouseListViewObject_o *)Component_srcLineSprite,
                                 0LL);
      if ( !Item )
        sub_B5D69C(0LL, v39);
      if ( Item->fields.isTermination )
      {
        v40 = ListViewManager__ClippingItem_23920288((ListViewManager_o *)this, Item, 0LL);
        if ( v40 )
        {
          if ( !v29 )
            sub_B5D69C(v40, v41);
          goto LABEL_16;
        }
      }
      else
      {
        if ( !v29 )
          sub_B5D69C(Item, v39);
LABEL_16:
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v29,
          v37,
          (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_WarehouseListViewObject__Add__);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v44,
    (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_WarehouseListViewObject__o *)v29;
}


System_Collections_Generic_List_WarehouseListViewObject__o *__fastcall WarehouseListViewManager__get_ObjectList(
        WarehouseListViewManager_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v29; // x19
  __int64 v30; // x1
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  Il2CppObject *current; // x20
  _BOOL8 v33; // x0
  __int64 v34; // x1
  EventMissionProgressRequest_Argument_ProgressData_o *Component_srcLineSprite; // x0
  System_Collections_Generic_List_Enumerator_T__o v37; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v38; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_42E93EA & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v8, v9, v10);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_WarehouseListViewObject___, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_List_WarehouseListViewObject__Add__, v14, v15, v16);
    sub_B5D5C4(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v17, v18, v19);
    sub_B5D5C4(&Method_System_Collections_Generic_List_WarehouseListViewObject___ctor__, v20, v21, v22);
    sub_B5D5C4(&System_Collections_Generic_List_WarehouseListViewObject__TypeInfo, v23, v24, v25);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v26, v27, v28);
    byte_42E93EA = 1;
  }
  memset(&v38, 0, sizeof(v38));
  v29 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_WarehouseListViewObject__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v29,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_WarehouseListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_B5D69C(0LL, v30);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v37,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)objectList,
    (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v38 = v37;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v38,
            (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v38.fields.current;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v33 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v33 )
    {
      if ( !current )
        sub_B5D69C(v33, v34);
      Component_srcLineSprite = (EventMissionProgressRequest_Argument_ProgressData_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                                         (UnityEngine_GameObject_o *)current,
                                                                                         (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_WarehouseListViewObject___);
      if ( !v29 )
        sub_B5D69C(Component_srcLineSprite, Component_srcLineSprite);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v29,
        Component_srcLineSprite,
        (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_WarehouseListViewObject__Add__);
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v38,
    (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_WarehouseListViewObject__o *)v29;
}


void __fastcall WarehouseListViewManager__remove_callbackFunc(
        WarehouseListViewManager_o *this,
        WarehouseListViewManager_CallbackFunc_o *value,
        const MethodInfo *method)
{
  __int64 v3; // x3
  System_Delegate_o *callbackFunc; // x21
  struct WarehouseListViewManager_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  const MethodInfo *v11; // x0

  if ( (byte_42E93E7 & 1) == 0 )
  {
    sub_B5D5C4(&WarehouseListViewManager_CallbackFunc_TypeInfo, (_DWORD)value, (_DWORD)method, v3);
    byte_42E93E7 = 1;
  }
  callbackFunc = (System_Delegate_o *)this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Remove(callbackFunc, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (WarehouseListViewManager_CallbackFunc_c *)v8->klass != WarehouseListViewManager_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_B51FDC(p_callbackFunc, v8, callbackFunc);
    v10 = callbackFunc == (System_Delegate_o *)v9;
    callbackFunc = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (const MethodInfo *)sub_B5D990(v8);
  WarehouseListViewManager__DeleteContinueData(v11);
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
  sub_B5D560(p_method);
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
  if ( (byte_42E5FF2 & 1) == 0 )
  {
    sub_B5D5C4(&WarehouseListViewManager_ResultKind_TypeInfo, resultKind, (_DWORD)item, callback);
    byte_42E5FF2 = 1;
  }
  v11[2] = 0LL;
  v11[0] = j_il2cpp_value_box_0(WarehouseListViewManager_ResultKind_TypeInfo, &v12);
  v11[1] = (__int64)item;
  return (System_IAsyncResult_o *)sub_B5D568(this, v11, callback, object);
}


void __fastcall WarehouseListViewManager_CallbackFunc__EndInvoke(
        WarehouseListViewManager_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B5D56C(result, 0LL, method);
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
        sub_B5D680(*(_QWORD *)&v21->fields.extra_arg, *(_QWORD *)&resultKind, item);
      if ( (sub_B5D5F4(v23) & 1) == 0 )
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
      v25 = sub_B5D5EC(v23);
      v26 = sub_B5D9F0(v23);
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
            v19 = sub_AF54C0(v22, v30, v31, v27);
          }
          v18 = *(_QWORD *)(v19 + 8);
        }
        else
        {
          v18 = *(_QWORD *)(*v22 + 16LL * *(unsigned __int16 *)(v23 + 72) + 320);
        }
        v20 = (void (__fastcall **)(__int64 *, _QWORD, WarehouseListViewItem_o *, _QWORD))sub_B5D674(v18, v23);
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
            v17 = sub_AF54C0(v22, class_0, v10, v12);
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