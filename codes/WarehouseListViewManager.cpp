void __fastcall WarehouseListViewManager___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v8; // x1
  __int64 v9; // x1
  System_String_o *SORT_SAVE_KEY; // x19
  System_String_o *v11; // x0
  System_String_o *v12; // x19
  ListViewSort_o *v13; // x20
  struct WarehouseListViewManager_StaticFields *static_fields; // x0
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7
  System_String_o *v21; // x19
  System_String_o *v22; // x0
  System_String_o *v23; // x19
  ListViewSort_o *v24; // x20
  struct WarehouseListViewManager_StaticFields *v25; // x0
  int64_t v26; // x2
  int32_t v27; // w3
  System_String_o *v28; // x4
  BattleSetupInfo_o *v29; // x5
  FollowerInfo_o *v30; // x6
  PartyListViewItem_o *v31; // x7
  System_String_o *v32; // x19
  System_String_o *v33; // x0
  System_String_o *v34; // x19
  ListViewSort_o *v35; // x20
  struct WarehouseListViewManager_StaticFields *v36; // x0
  int64_t v37; // x2
  int32_t v38; // w3
  System_String_o *v39; // x4
  BattleSetupInfo_o *v40; // x5
  FollowerInfo_o *v41; // x6
  PartyListViewItem_o *v42; // x7
  System_String_o *v43; // x19
  System_String_o *v44; // x0
  System_String_o *v45; // x19
  ListViewSort_o *v46; // x20
  struct WarehouseListViewManager_StaticFields *v47; // x0
  int64_t v48; // x2
  int32_t v49; // w3
  System_String_o *v50; // x4
  BattleSetupInfo_o *v51; // x5
  FollowerInfo_o *v52; // x6
  PartyListViewItem_o *v53; // x7
  int v54; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4BC5A43 & 1) == 0 )
  {
    sub_1C1ABD4(&ListViewSort_TypeInfo, v1);
    sub_1C1ABD4(&WarehouseListViewManager_TypeInfo, v8);
    sub_1C1ABD4(&StringLiteral_15852/*"Warehouse"*/, v9);
    byte_4BC5A43 = 1;
  }
  WarehouseListViewManager_TypeInfo->static_fields->SORT_SAVE_KEY = (struct System_String_o *)StringLiteral_15852/*"Warehouse"*/;
  sub_1C1AB78(
    (PartyOrganizationUtility_o *)WarehouseListViewManager_TypeInfo->static_fields,
    StringLiteral_15852/*"Warehouse"*/,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
  SORT_SAVE_KEY = WarehouseListViewManager_TypeInfo->static_fields->SORT_SAVE_KEY;
  v54 = 1;
  v11 = System_Int32__ToString((int32_t)&v54, 0LL);
  v12 = System_String__Concat_63040368(SORT_SAVE_KEY, v11, 0LL);
  v13 = (ListViewSort_o *)sub_1C1AE20(ListViewSort_TypeInfo);
  ListViewSort___ctor_41977068(v13, v12, 3, 0, 0LL);
  static_fields = WarehouseListViewManager_TypeInfo->static_fields;
  static_fields->servantSortInfo = v13;
  sub_1C1AB78((PartyOrganizationUtility_o *)&static_fields->servantSortInfo, (int64_t)v13, v15, v16, v17, v18, v19, v20);
  v21 = WarehouseListViewManager_TypeInfo->static_fields->SORT_SAVE_KEY;
  v54 = 2;
  v22 = System_Int32__ToString((int32_t)&v54, 0LL);
  v23 = System_String__Concat_63040368(v21, v22, 0LL);
  v24 = (ListViewSort_o *)sub_1C1AE20(ListViewSort_TypeInfo);
  ListViewSort___ctor_41977068(v24, v23, 3, 0, 0LL);
  v25 = WarehouseListViewManager_TypeInfo->static_fields;
  v25->servantEquipSortInfo = v24;
  sub_1C1AB78((PartyOrganizationUtility_o *)&v25->servantEquipSortInfo, (int64_t)v24, v26, v27, v28, v29, v30, v31);
  v32 = WarehouseListViewManager_TypeInfo->static_fields->SORT_SAVE_KEY;
  v54 = 3;
  v33 = System_Int32__ToString((int32_t)&v54, 0LL);
  v34 = System_String__Concat_63040368(v32, v33, 0LL);
  v35 = (ListViewSort_o *)sub_1C1AE20(ListViewSort_TypeInfo);
  ListViewSort___ctor_41977068(v35, v34, 3, 0, 0LL);
  v36 = WarehouseListViewManager_TypeInfo->static_fields;
  v36->servantWarehouseSortInfo = v35;
  sub_1C1AB78((PartyOrganizationUtility_o *)&v36->servantWarehouseSortInfo, (int64_t)v35, v37, v38, v39, v40, v41, v42);
  v43 = WarehouseListViewManager_TypeInfo->static_fields->SORT_SAVE_KEY;
  v54 = 4;
  v44 = System_Int32__ToString((int32_t)&v54, 0LL);
  v45 = System_String__Concat_63040368(v43, v44, 0LL);
  v46 = (ListViewSort_o *)sub_1C1AE20(ListViewSort_TypeInfo);
  ListViewSort___ctor_41977068(v46, v45, 3, 0, 0LL);
  v47 = WarehouseListViewManager_TypeInfo->static_fields;
  v47->servantEquipWarehouseSortInfo = v46;
  sub_1C1AB78(
    (PartyOrganizationUtility_o *)&v47->servantEquipWarehouseSortInfo,
    (int64_t)v46,
    v48,
    v49,
    v50,
    v51,
    v52,
    v53);
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
  *(_OWORD *)&this->fields.dragSelectSum = xmmword_BFA5E0;
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

  if ( (byte_4BC5A3F & 1) == 0 )
  {
    sub_1C1ABD4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, *(_QWORD *)&index);
    sub_1C1ABD4(&WarehouseListViewItem_TypeInfo, v5);
    byte_4BC5A3F = 1;
  }
  itemSortList = (System_Collections_Generic_List_object__o *)this->fields.itemSortList;
  if ( !itemSortList
    || (itemSortList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                      itemSortList,
                                                                      index,
                                                                      (const MethodInfo_363C5C0 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__)) == 0LL )
  {
    sub_1C1AE30(itemSortList, *(_QWORD *)&index);
  }
  methodPtr_low = LOBYTE(WarehouseListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(itemSortList->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
    && (WarehouseListViewItem_c *)itemSortList->klass->_2.typeHierarchy[methodPtr_low - 1] == WarehouseListViewItem_TypeInfo )
  {
    HIDWORD(itemSortList[5].fields._syncRoot) = -1;
  }
  else
  {
    sub_1C1B0F0(itemSortList);
    WarehouseListViewManager__GetModeKind(v8, v9);
  }
}


void __fastcall WarehouseListViewManager__ChangeIconScale(WarehouseListViewManager_o *this, const MethodInfo *method)
{
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  unsigned int scaleType; // w8
  struct ListViewItemSeed_o *smallSizeSeed; // x1
  WarehouseListViewManager_o *v16; // x0
  int v17; // w8
  struct ListViewItemSeed_o **p_seed; // x0
  ListViewSort_o *sort; // x0
  _BOOL8 v20; // x0
  __int64 v21; // x1
  ListViewItem_o *current; // x20
  __int64 methodPtr_low; // x9
  UnityEngine_Object_o *monitor; // x21
  __int64 v25; // x1
  ListViewObject_o *viewObject; // x0
  const MethodInfo *v27; // x2
  System_Collections_Generic_List_Enumerator_object__o v28; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v29; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4BC5A37 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__, method);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v9);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v10);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v11);
    sub_1C1ABD4(&UnityEngine_Object_TypeInfo, v12);
    sub_1C1ABD4(&WarehouseListViewItem_TypeInfo, v13);
    byte_4BC5A37 = 1;
  }
  memset(&v29, 0, sizeof(v29));
  scaleType = this->fields.scaleType;
  if ( scaleType < 2 )
  {
    smallSizeSeed = this->fields.smallSizeSeed;
    v16 = this;
    v17 = 2;
  }
  else if ( scaleType == 2 )
  {
    smallSizeSeed = this->fields.extremelySmallSizeSeed;
    v16 = this;
    v17 = 3;
  }
  else
  {
    if ( scaleType != 3 )
      goto LABEL_10;
    smallSizeSeed = this->fields.normalSizeSeed;
    v16 = this;
    v17 = 1;
  }
  v16->fields.seed = smallSizeSeed;
  p_seed = &v16->fields.seed;
  *((_DWORD *)p_seed + 84) = v17;
  sub_1C1AB78((PartyOrganizationUtility_o *)p_seed, (int64_t)smallSizeSeed, v2, v3, v4, v5, v6, v7);
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
    (System_Collections_Generic_List_Enumerator_T__o *)&v28,
    (System_Collections_Generic_List_object__o *)sort,
    (const MethodInfo_363D388 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  v29 = v28;
  while ( 1 )
  {
    v20 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v29,
            (const MethodInfo_33CE4F8 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    if ( !v20 )
      break;
    current = (ListViewItem_o *)v29.fields._current;
    if ( !v29.fields._current )
      goto LABEL_26;
    methodPtr_low = LOBYTE(WarehouseListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(v29.fields._current->klass->vtable[0].methodPtr) < (unsigned int)methodPtr_low
      || (WarehouseListViewItem_c *)v29.fields._current->klass->_2.typeHierarchy[methodPtr_low - 1] != WarehouseListViewItem_TypeInfo )
    {
      sub_1C1B0F0(v29.fields._current);
LABEL_26:
      sub_1C1AE30(v20, v21);
    }
    monitor = (UnityEngine_Object_o *)v29.fields._current[6].monitor;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Equality(monitor, 0LL, 0LL) )
    {
      viewObject = current->fields.viewObject;
      if ( !viewObject )
        sub_1C1AE30(0LL, v25);
      ListViewObject__SetItemSeed(viewObject, current, this->fields.seed, 0LL);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v29,
    (const MethodInfo_33CE4F4 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
  WarehouseListViewManager__SetMode_36971284(this, 2, v27);
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
  sort = (ListViewSort_o *)this->fields.scrollBar;
  if ( !sort
    || (sort = (ListViewSort_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)sort, 0LL)) == 0LL )
  {
LABEL_28:
    sub_1C1AE30(sort, method);
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
      sub_1C1AE30(this, isPlus);
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
    this->klass->vtable._6_GetFocusItemIndex.methodPtr);
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
  Il2CppObject *MasterData_object; // x24
  Il2CppObject *v27; // x25
  int64_t v28; // x2
  int32_t v29; // w3
  System_String_o *v30; // x4
  BattleSetupInfo_o *v31; // x5
  FollowerInfo_o *v32; // x6
  PartyListViewItem_o *v33; // x7
  System_String_o *v34; // x19
  WarehouseListViewManager_c *v35; // x0
  struct ListViewSort_o *servantSortInfo; // x1
  __int64 *v37; // x8
  int64_t v38; // x22
  struct ListViewSort_o *v39; // x8
  WarehouseListViewManager_c *v40; // x0
  struct ListViewSort_o *servantEquipSortInfo; // x1
  WarehouseListViewManager_c *v42; // x0
  struct ListViewSort_o *servantWarehouseSortInfo; // x1
  WarehouseListViewManager_c *v44; // x0
  struct ListViewSort_o *servantEquipWarehouseSortInfo; // x1
  _BOOL4 isQuestStart; // w8
  int v47; // w9
  struct ListViewSort_BonusFilterInfo_array *AlignedBonusFilter; // x0
  int64_t v49; // x2
  int32_t v50; // w3
  System_String_o *v51; // x4
  BattleSetupInfo_o *v52; // x5
  FollowerInfo_o *v53; // x6
  PartyListViewItem_o *v54; // x7
  struct ListViewSort_o *sort; // x20
  struct ListViewSort_BonusFilterInfo_array *v56; // x0
  int64_t v57; // x2
  int32_t v58; // w3
  System_String_o *v59; // x4
  BattleSetupInfo_o *v60; // x5
  FollowerInfo_o *v61; // x6
  PartyListViewItem_o *v62; // x7
  struct ListViewSort_o *v63; // x8
  struct ListViewSort_o *v64; // x8
  int64_t v65; // x2
  int32_t v66; // w3
  System_String_o *v67; // x4
  BattleSetupInfo_o *v68; // x5
  FollowerInfo_o *v69; // x6
  PartyListViewItem_o *v70; // x7
  struct ListViewSort_o *v71; // x8
  unsigned int iconScaleKind; // w8
  struct ListViewItemSeed_o *normalSizeSeed; // x1
  Il2CppObject *v74; // x24
  int v75; // w8
  __int64 v76; // x25
  int64_t v77; // x20
  __int64 v78; // x8
  __int128 v79; // q0
  EventUpValSetupInfo_o *v80; // x19
  __int64 v81; // x21
  System_Int64_array *v82; // x23
  System_Int64_array *v83; // x29
  UserServantEntity_o *v84; // x24
  int64_t v85; // x27
  WarehouseListViewItem_o *v86; // x0
  bool v87; // w7
  Il2CppObject *v88; // x26
  int64_t v89; // x2
  int32_t v90; // w3
  System_String_o *v91; // x4
  BattleSetupInfo_o *v92; // x5
  FollowerInfo_o *v93; // x6
  PartyListViewItem_o *v94; // x7
  __int64 v95; // x8
  _QWORD *v96; // x9
  __int64 v97; // x10
  __int64 v98; // x8
  const MethodInfo *v99; // x3
  UILabel_o *emptyMessageLabel; // x20
  const MethodInfo *v101; // x1
  const MethodInfo *v102; // [xsp+0h] [xbp-E0h]
  System_String_o *v103; // [xsp+8h] [xbp-D8h]
  System_Int64_array *recoverySvtList; // [xsp+10h] [xbp-D0h]
  int64_t v105; // [xsp+18h] [xbp-C8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v106; // [xsp+20h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v107; // [xsp+40h] [xbp-A0h]
  int32_t eventId; // [xsp+6Ch] [xbp-74h] BYREF
  System_Int64_array *equipIdList; // [xsp+70h] [xbp-70h] BYREF
  System_Int64_array *svtIdList; // [xsp+78h] [xbp-68h] BYREF

  if ( (byte_4BC5A1A & 1) == 0 )
  {
    sub_1C1ABD4(&Method_DataManager_GetMasterData_EventMaster___, *(_QWORD *)&kind);
    sub_1C1ABD4(&Method_DataManager_GetMasterData_UserDeckMaster___, v7);
    sub_1C1ABD4(&Method_DataManager_GetMasterData_UserEventServantFatigueMaster___, v8);
    sub_1C1ABD4(&Method_DataManager_GetMasterData_UserServantMaster___, v9);
    sub_1C1ABD4(&Method_DataManager_GetMasterData_UserServantStorageMaster___, v10);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_ListViewItem__Add__, v11);
    sub_1C1ABD4(&LocalizationManager_TypeInfo, v12);
    sub_1C1ABD4(&NetworkManager_TypeInfo, v13);
    sub_1C1ABD4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v14);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v15);
    sub_1C1ABD4(&WarehouseListViewItem_TypeInfo, v16);
    sub_1C1ABD4(&WarehouseListViewManager_TypeInfo, v17);
    sub_1C1ABD4(&StringLiteral_11783/*"SERVANT_EQUIP_EMPTY"*/, v18);
    sub_1C1ABD4(&StringLiteral_11778/*"SERVANT_EMPTY"*/, v19);
    sub_1C1ABD4(&StringLiteral_11811/*"SERVANT_EQUIP_WAREHOUSE_EMPTY"*/, v20);
    sub_1C1ABD4(&StringLiteral_11980/*"SERVANT_SORT_FILTER_RESULT_EMPTY"*/, v21);
    sub_1C1ABD4(&StringLiteral_12160/*"SERVANT_WAREHOUSE_EMPTY"*/, v22);
    sub_1C1ABD4(&StringLiteral_1/*""*/, v23);
    byte_4BC5A1A = 1;
  }
  equipIdList = 0LL;
  svtIdList = 0LL;
  eventId = 0;
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_83;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F9F490 *)Method_DataManager_GetMasterData_UserServantMaster___);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_83;
  v27 = DataManager__GetMasterData_object_(
          (DataManager_o *)Instance,
          (const MethodInfo_2F9F490 *)Method_DataManager_GetMasterData_UserServantStorageMaster___);
  Instance = (int64_t)UserGameMaster__getSelfUserGame(0LL);
  v34 = (System_String_o *)StringLiteral_1/*""*/;
  v105 = Instance;
  this->fields.kind = kind;
  switch ( kind )
  {
    case 0:
      v35 = WarehouseListViewManager_TypeInfo;
      if ( !WarehouseListViewManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(WarehouseListViewManager_TypeInfo);
        v35 = WarehouseListViewManager_TypeInfo;
      }
      servantSortInfo = v35->static_fields->servantSortInfo;
      this->fields.sort = servantSortInfo;
      sub_1C1AB78(
        (PartyOrganizationUtility_o *)&this->fields.sort,
        (int64_t)servantSortInfo,
        v28,
        v29,
        v30,
        v31,
        v32,
        v33);
      Instance = (int64_t)this->fields.sort;
      if ( !Instance )
        goto LABEL_83;
      *(_DWORD *)(Instance + 128) = 0;
      ListViewSort__Load((ListViewSort_o *)Instance, 0LL);
      if ( !MasterData_object )
        goto LABEL_83;
      Instance = (int64_t)UserServantMaster__getKeepServantList((UserServantMaster_o *)MasterData_object, 0LL);
      v37 = &StringLiteral_11778/*"SERVANT_EMPTY"*/;
      break;
    case 1:
      v40 = WarehouseListViewManager_TypeInfo;
      if ( !WarehouseListViewManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(WarehouseListViewManager_TypeInfo);
        v40 = WarehouseListViewManager_TypeInfo;
      }
      servantEquipSortInfo = v40->static_fields->servantEquipSortInfo;
      this->fields.sort = servantEquipSortInfo;
      sub_1C1AB78(
        (PartyOrganizationUtility_o *)&this->fields.sort,
        (int64_t)servantEquipSortInfo,
        v28,
        v29,
        v30,
        v31,
        v32,
        v33);
      Instance = (int64_t)this->fields.sort;
      if ( !Instance )
        goto LABEL_83;
      *(_DWORD *)(Instance + 128) = 1;
      ListViewSort__Load((ListViewSort_o *)Instance, 0LL);
      if ( !MasterData_object )
        goto LABEL_83;
      Instance = (int64_t)UserServantMaster__getServantEquipList((UserServantMaster_o *)MasterData_object, 0LL);
      v37 = &StringLiteral_11783/*"SERVANT_EQUIP_EMPTY"*/;
      break;
    case 2:
      v42 = WarehouseListViewManager_TypeInfo;
      if ( !WarehouseListViewManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(WarehouseListViewManager_TypeInfo);
        v42 = WarehouseListViewManager_TypeInfo;
      }
      servantWarehouseSortInfo = v42->static_fields->servantWarehouseSortInfo;
      this->fields.sort = servantWarehouseSortInfo;
      sub_1C1AB78(
        (PartyOrganizationUtility_o *)&this->fields.sort,
        (int64_t)servantWarehouseSortInfo,
        v28,
        v29,
        v30,
        v31,
        v32,
        v33);
      Instance = (int64_t)this->fields.sort;
      if ( !Instance )
        goto LABEL_83;
      *(_DWORD *)(Instance + 128) = 0;
      ListViewSort__Load((ListViewSort_o *)Instance, 0LL);
      if ( !v27 )
        goto LABEL_83;
      Instance = (int64_t)UserServantStorageMaster__getKeepServantList((UserServantStorageMaster_o *)v27, 0LL);
      v37 = &StringLiteral_12160/*"SERVANT_WAREHOUSE_EMPTY"*/;
      break;
    case 3:
      v44 = WarehouseListViewManager_TypeInfo;
      if ( !WarehouseListViewManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(WarehouseListViewManager_TypeInfo);
        v44 = WarehouseListViewManager_TypeInfo;
      }
      servantEquipWarehouseSortInfo = v44->static_fields->servantEquipWarehouseSortInfo;
      this->fields.sort = servantEquipWarehouseSortInfo;
      sub_1C1AB78(
        (PartyOrganizationUtility_o *)&this->fields.sort,
        (int64_t)servantEquipWarehouseSortInfo,
        v28,
        v29,
        v30,
        v31,
        v32,
        v33);
      Instance = (int64_t)this->fields.sort;
      if ( !Instance )
        goto LABEL_83;
      *(_DWORD *)(Instance + 128) = 1;
      ListViewSort__Load((ListViewSort_o *)Instance, 0LL);
      if ( !v27 )
        goto LABEL_83;
      Instance = (int64_t)UserServantStorageMaster__getServantEquipList((UserServantStorageMaster_o *)v27, 0LL);
      v37 = &StringLiteral_11811/*"SERVANT_EQUIP_WAREHOUSE_EMPTY"*/;
      break;
    default:
      v38 = 0LL;
      if ( !setupInfo )
        goto LABEL_12;
      goto LABEL_30;
  }
  v34 = (System_String_o *)*v37;
  v38 = Instance;
  if ( setupInfo )
  {
LABEL_30:
    isQuestStart = setupInfo->fields.isQuestStart;
    v47 = this->fields.kind | 2;
    this->fields.isQuestStart = isQuestStart;
    if ( v47 == 2 )
    {
      Instance = (int64_t)this->fields.sort;
      if ( !Instance )
        goto LABEL_83;
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
      sub_1C1AB78(
        (PartyOrganizationUtility_o *)&this->fields.alignedBonusFilterInfos,
        (int64_t)AlignedBonusFilter,
        v49,
        v50,
        v51,
        v52,
        v53,
        v54);
      sort = this->fields.sort;
      Instance = BasicHelper__IsNullOrEmpty(
                   (System_Collections_ICollection_o *)this->fields.alignedBonusFilterInfos,
                   0LL);
      if ( !sort )
        goto LABEL_83;
      sort->fields.isBonusKind = (Instance & 1) == 0;
    }
    else
    {
      Instance = (int64_t)this->fields.sort;
      if ( !Instance )
        goto LABEL_83;
      v56 = ListViewSort__GetAlignedBonusFilter(
              (ListViewSort_o *)Instance,
              0LL,
              setupInfo->fields.servantEquipFilterEventCampaignIds,
              setupInfo->fields.servantEquipFilterEventIds,
              0LL,
              0LL,
              isQuestStart,
              0LL);
      this->fields.alignedBonusFilterInfos = v56;
      sub_1C1AB78(
        (PartyOrganizationUtility_o *)&this->fields.alignedBonusFilterInfos,
        (int64_t)v56,
        v57,
        v58,
        v59,
        v60,
        v61,
        v62);
      v63 = this->fields.sort;
      if ( !v63 )
        goto LABEL_83;
      v63->fields.isBonusKind = 1;
    }
  }
  else
  {
LABEL_12:
    v39 = this->fields.sort;
    this->fields.isQuestStart = 1;
    if ( !v39 )
      goto LABEL_83;
    v39->fields.isBonusKind = 0;
    this->fields.alignedBonusFilterInfos = 0LL;
    sub_1C1AB78((PartyOrganizationUtility_o *)&this->fields.alignedBonusFilterInfos, 0LL, v28, v29, v30, v31, v32, v33);
  }
  Instance = (int64_t)this->fields.bonusFilterKindButton;
  if ( !Instance )
    goto LABEL_83;
  Instance = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  v64 = this->fields.sort;
  if ( !v64 )
    goto LABEL_83;
  if ( !Instance )
    goto LABEL_83;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, v64->fields.isBonusKind, 0LL);
  v71 = this->fields.sort;
  if ( !v71 )
    goto LABEL_83;
  iconScaleKind = v71->fields.iconScaleKind;
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
  sub_1C1AB78((PartyOrganizationUtility_o *)&this->fields.seed, (int64_t)normalSizeSeed, v65, v66, v67, v68, v69, v70);
LABEL_48:
  *(_QWORD *)&this->fields.sellEnableRestCnt = 0LL;
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
  *(_OWORD *)&this->fields.dragSelectSum = xmmword_BFA5E0;
  this->fields.isDragSelect = 1;
  this->fields.dragSelectFriendShipSum = 0;
  if ( !v38 )
    goto LABEL_79;
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_83;
  v74 = DataManager__GetMasterData_object_(
          (DataManager_o *)Instance,
          (const MethodInfo_2F9F490 *)Method_DataManager_GetMasterData_UserDeckMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4BC2585 )
  {
    sub_1C1ABD4(&NetworkManager_TypeInfo, v25);
    byte_4BC2585 = 1;
  }
  Instance = (int64_t)NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Instance = (int64_t)NetworkManager_TypeInfo;
  }
  if ( !v74
    || (UserDeckMaster__getPartyList(
          (UserDeckMaster_o *)v74,
          &svtIdList,
          &equipIdList,
          *(_QWORD *)(*(_QWORD *)(Instance + 184) + 64LL),
          0LL),
        (Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0)
    || (Instance = (int64_t)DataManager__GetMasterData_object_(
                              (DataManager_o *)Instance,
                              (const MethodInfo_2F9F490 *)Method_DataManager_GetMasterData_EventMaster___)) == 0 )
  {
LABEL_83:
    sub_1C1AE30(Instance, v25);
  }
  Instance = EventMaster__IsEnableFatigueEvent((EventMaster_o *)Instance, &eventId, 0LL);
  recoverySvtList = 0LL;
  if ( (Instance & 1) != 0 )
  {
    Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_83;
    Instance = (int64_t)DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_2F9F490 *)Method_DataManager_GetMasterData_UserEventServantFatigueMaster___);
    if ( !Instance )
      goto LABEL_83;
    Instance = (int64_t)UserEventServantFatigueMaster__GetRecoverySvtIdList(
                          (UserEventServantFatigueMaster_o *)Instance,
                          eventId,
                          0LL);
    recoverySvtList = (System_Int64_array *)Instance;
  }
  v75 = *(_DWORD *)(v38 + 24);
  if ( v75 >= 1 )
  {
    v76 = 0LL;
    v77 = v38 + 32;
    v103 = v34;
    do
    {
      if ( (unsigned int)v76 >= v75 )
        goto LABEL_84;
      v78 = *(_QWORD *)(v77 + 8 * v76);
      if ( !v78 )
        goto LABEL_83;
      v79 = *(_OWORD *)(v78 + 32);
      v80 = setupInfo;
      *(_OWORD *)&v107.fields.currentCryptoKey = *(_OWORD *)(v78 + 16);
      *(_OWORD *)&v107.fields.fakeValue = v79;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v106 = v107;
      Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47559652(&v106, 0LL);
      if ( (unsigned int)v76 >= *(_DWORD *)(v38 + 24) )
LABEL_84:
        sub_1C1AE38(Instance, v25);
      if ( !v105 )
        goto LABEL_83;
      v81 = *(_QWORD *)(v105 + 112);
      v82 = equipIdList;
      v83 = svtIdList;
      v84 = *(UserServantEntity_o **)(v77 + 8 * v76);
      v85 = Instance;
      v86 = (WarehouseListViewItem_o *)sub_1C1AE20(WarehouseListViewItem_TypeInfo);
      v87 = v85 == v81;
      v88 = (Il2CppObject *)v86;
      setupInfo = v80;
      WarehouseListViewItem___ctor(v86, v76, v84, v80, v83, v82, recoverySvtList, v87, v102);
      Instance = (int64_t)this->fields.itemList;
      if ( !Instance )
        goto LABEL_83;
      v95 = *(_QWORD *)(Instance + 16);
      v96 = Method_System_Collections_Generic_List_ListViewItem__Add__;
      ++*(_DWORD *)(Instance + 28);
      if ( !v95 )
        goto LABEL_83;
      v97 = *(int *)(Instance + 24);
      if ( (unsigned int)v97 >= *(_DWORD *)(v95 + 24) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)Instance,
          v88,
          *(const MethodInfo_363C890 **)(*(_QWORD *)(v96[4] + 192LL) + 112LL));
      }
      else
      {
        v98 = v95 + 8 * v97;
        *(_DWORD *)(Instance + 24) = v97 + 1;
        *(_QWORD *)(v98 + 32) = v88;
        sub_1C1AB78((PartyOrganizationUtility_o *)(v98 + 32), (int64_t)v88, v89, v90, v91, v92, v93, v94);
      }
      WarehouseListViewManager__ChangeSellEnableRestCnt(this, 1, (WarehouseListViewItem_o *)v88, v99);
      v75 = *(_DWORD *)(v38 + 24);
      ++v76;
    }
    while ( (int)v76 < v75 );
    v34 = v103;
    if ( (int)v76 > 0 )
      v34 = (System_String_o *)StringLiteral_11980/*"SERVANT_SORT_FILTER_RESULT_EMPTY"*/;
  }
LABEL_79:
  emptyMessageLabel = this->fields.emptyMessageLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  Instance = (int64_t)LocalizationManager__Get(v34, 0LL);
  if ( !emptyMessageLabel )
    goto LABEL_83;
  UILabel__set_text(emptyMessageLabel, (System_String_o *)Instance, 0LL);
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
  WarehouseListViewManager__SetFilterButtonImage(this, v101);
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

  if ( (byte_4BC5A3E & 1) == 0 )
  {
    sub_1C1ABD4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, *(_QWORD *)&index);
    sub_1C1ABD4(&WarehouseListViewItem_TypeInfo, v5);
    byte_4BC5A3E = 1;
  }
  *(_QWORD *)friendShipSum = 0LL;
  itemSortList = (System_Collections_Generic_List_object__o *)this->fields.itemSortList;
  if ( !itemSortList )
    goto LABEL_24;
  itemSortList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                itemSortList,
                                                                index,
                                                                (const MethodInfo_363C5C0 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
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
        sub_1C1AE30(itemSortList, *(_QWORD *)&index);
      }
    }
LABEL_23:
    v7->fields.dragSelectNum = -1;
    return;
  }
  sub_1C1B0F0(itemSortList);
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
  __int64 v10; // x1
  int32_t klass; // w9
  System_Collections_Generic_List_Enumerator_object__o v12; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4BC5A2B & 1) == 0 )
  {
    sub_1C1ABD4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__, *(_QWORD *)&selectNum);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v5);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v6);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v7);
    byte_4BC5A2B = 1;
  }
  memset(&v12, 0, sizeof(v12));
  itemList = this->fields.itemList;
  if ( !itemList )
    sub_1C1AE30(0LL, *(_QWORD *)&selectNum);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v12,
    (System_Collections_Generic_List_object__o *)itemList,
    (const MethodInfo_363D388 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  while ( 1 )
  {
    v9 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v12,
           (const MethodInfo_33CE4F8 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    if ( !v9 )
      break;
    if ( !v12.fields._current )
      sub_1C1AE30(v9, v10);
    klass = (int32_t)v12.fields._current[1].klass;
    if ( klass > selectNum )
      LODWORD(v12.fields._current[1].klass) = klass - 1;
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v12,
    (const MethodInfo_33CE4F4 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
}


void __fastcall WarehouseListViewManager__DeleteContinueData(const MethodInfo *method)
{
  __int64 v1; // x1
  WarehouseListViewManager_c *v2; // x0
  ListViewSort_o *servantSortInfo; // x0

  if ( (byte_4BC5A16 & 1) == 0 )
  {
    sub_1C1ABD4(&WarehouseListViewManager_TypeInfo, v1);
    byte_4BC5A16 = 1;
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
    sub_1C1AE30(servantSortInfo, v1);
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
  System_Action_o *v9; // x21
  __int64 v10; // x0
  __int64 v11; // x1

  if ( (byte_4BC5A32 & 1) == 0 )
  {
    sub_1C1ABD4(&System_Action_TypeInfo, isDecide);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    sub_1C1ABD4(&Method_WarehouseListViewManager_EndCloseSelectFilterKind__, v6);
    byte_4BC5A32 = 1;
  }
  if ( isDecide )
  {
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
    WarehouseListViewManager__SetFilterButtonImage(this, v7);
    ListViewManager__CheckScroll((ListViewManager_o *)this, this->fields.scaleType, 0LL);
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v9 = (System_Action_o *)sub_1C1AE20(System_Action_TypeInfo);
  System_Action___ctor(v9, (Il2CppObject *)this, Method_WarehouseListViewManager_EndCloseSelectFilterKind__, 0LL);
  if ( !Instance )
    sub_1C1AE30(v10, v11);
  CommonUI__CloseServantFilterSelectMenu((CommonUI_o *)Instance, v9, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarehouseListViewManager__EndSelectSortKind(
        WarehouseListViewManager_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v6; // x1

  if ( (byte_4BC5A30 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, isDecide);
    byte_4BC5A30 = 1;
  }
  if ( isDecide )
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1C1AE30(0LL, v6);
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

  if ( (byte_4BC5A35 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, *(_QWORD *)&svtId);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v5);
    sub_1C1ABD4(&WarehouseListViewItem_TypeInfo, v6);
    byte_4BC5A35 = 1;
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
                                                                (const MethodInfo_363C5C0 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
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
    sub_1C1AE30(itemList, *(_QWORD *)&svtId);
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

  if ( (byte_4BC5A41 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, *(_QWORD *)&index);
    sub_1C1ABD4(&WarehouseListViewItem_TypeInfo, v5);
    byte_4BC5A41 = 1;
  }
  result = (WarehouseListViewItem_o *)this->fields.itemList;
  if ( result )
  {
    result = (WarehouseListViewItem_o *)System_Collections_Generic_List_object___get_Item(
                                          (System_Collections_Generic_List_object__o *)result,
                                          index,
                                          (const MethodInfo_363C5C0 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
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
    sub_1C1AE30(this, method);
  return warehouseListMenu->fields.modeKind;
}


System_String_o *__fastcall WarehouseListViewManager__GetScaleButtonSpriteName(
        WarehouseListViewManager_o *this,
        const MethodInfo *method)
{
  ListViewSort_o *sort; // x0

  sort = this->fields.sort;
  if ( !sort )
    sub_1C1AE30(0LL, method);
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
  __int64 v13; // x1
  Il2CppObject *current; // x21
  __int64 methodPtr_low; // x9
  int32_t *v16; // x8
  System_Collections_Generic_List_Enumerator_object__o v17; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v18; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4BC5A40 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__, normalSum);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v7);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v8);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v9);
    sub_1C1ABD4(&WarehouseListViewItem_TypeInfo, v10);
    byte_4BC5A40 = 1;
  }
  memset(&v18, 0, sizeof(v18));
  *normalSum = 0;
  *friendShipSum = 0;
  itemList = this->fields.itemList;
  if ( !itemList )
    sub_1C1AE30(0LL, normalSum);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v17,
    (System_Collections_Generic_List_object__o *)itemList,
    (const MethodInfo_363D388 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  v18 = v17;
  while ( 1 )
  {
    v12 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v18,
            (const MethodInfo_33CE4F8 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    if ( !v12 )
      break;
    current = v18.fields._current;
    if ( !v18.fields._current )
      goto LABEL_16;
    methodPtr_low = LOBYTE(WarehouseListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(v18.fields._current->klass->vtable[0].methodPtr) < (unsigned int)methodPtr_low
      || (WarehouseListViewItem_c *)v18.fields._current->klass->_2.typeHierarchy[methodPtr_low - 1] != WarehouseListViewItem_TypeInfo )
    {
      sub_1C1B0F0(v18.fields._current);
LABEL_16:
      sub_1C1AE30(v12, v13);
    }
    if ( ListViewItem__get_IsSelect((ListViewItem_o *)v18.fields._current, 0LL) )
    {
      if ( BYTE6(current[10].klass) )
        v16 = friendShipSum;
      else
        v16 = normalSum;
      ++*v16;
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v18,
    (const MethodInfo_33CE4F4 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
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
  __int64 v12; // x1
  Il2CppObject *current; // x20
  __int64 methodPtr_low; // x9
  const MethodInfo *v15; // x1
  int64_t UserSvtId; // x0
  struct System_Int64_array *items; // x8
  _QWORD *v18; // x9
  __int64 size; // x10
  System_Collections_Generic_List_Enumerator_object__o v20; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v21; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4BC5A26 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__, list);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v5);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v6);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_long__Add__, v7);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v8);
    sub_1C1ABD4(&WarehouseListViewItem_TypeInfo, v9);
    byte_4BC5A26 = 1;
  }
  memset(&v21, 0, sizeof(v21));
  itemList = this->fields.itemList;
  if ( !itemList )
    sub_1C1AE30(0LL, list);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v20,
    (System_Collections_Generic_List_object__o *)itemList,
    (const MethodInfo_363D388 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  v21 = v20;
  while ( 1 )
  {
    v11 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v21,
            (const MethodInfo_33CE4F8 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    if ( !v11 )
      break;
    current = v21.fields._current;
    if ( !v21.fields._current )
      goto LABEL_17;
    methodPtr_low = LOBYTE(WarehouseListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(v21.fields._current->klass->vtable[0].methodPtr) < (unsigned int)methodPtr_low
      || (WarehouseListViewItem_c *)v21.fields._current->klass->_2.typeHierarchy[methodPtr_low - 1] != WarehouseListViewItem_TypeInfo )
    {
      sub_1C1B0F0(v21.fields._current);
LABEL_17:
      sub_1C1AE30(v11, v12);
    }
    if ( ListViewItem__get_IsSelect((ListViewItem_o *)v21.fields._current, 0LL) )
    {
      UserSvtId = WarehouseListViewItem__get_UserSvtId((WarehouseListViewItem_o *)current, v15);
      if ( !list )
        sub_1C1AE30(UserSvtId, UserSvtId);
      items = list->fields._items;
      v18 = Method_System_Collections_Generic_List_long__Add__;
      ++list->fields._version;
      if ( !items )
        sub_1C1AE30(UserSvtId, UserSvtId);
      size = list->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_long___AddWithResize(
          list,
          UserSvtId,
          *(const MethodInfo_36248C4 **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
      }
      else
      {
        list->fields._size = size + 1;
        items->m_Items[size] = UserSvtId;
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v21,
    (const MethodInfo_33CE4F4 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
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
  const MethodInfo *v9; // x1
  System_Collections_Generic_List_object__o *itemList; // x0
  int size; // w23
  int32_t v12; // w21
  WarehouseListViewItem_o *v13; // x22
  __int64 methodPtr_low; // x9
  System_Collections_Generic_Dictionary_long__int__o *result; // x0
  WarehouseListViewManager_o *v16; // x0
  System_Collections_Generic_Dictionary_long__int__o *v17; // x1
  const MethodInfo *v18; // x2

  if ( (byte_4BC5A38 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_System_Collections_Generic_Dictionary_long__int__Add__, method);
    sub_1C1ABD4(&Method_System_Collections_Generic_Dictionary_long__int___ctor__, v3);
    sub_1C1ABD4(&System_Collections_Generic_Dictionary_long__int__TypeInfo, v4);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v5);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v6);
    sub_1C1ABD4(&WarehouseListViewItem_TypeInfo, v7);
    byte_4BC5A38 = 1;
  }
  v8 = (System_Collections_Generic_Dictionary_long__int__o *)sub_1C1AE20(System_Collections_Generic_Dictionary_long__int__TypeInfo);
  System_Collections_Generic_Dictionary_long__int____ctor(
    v8,
    (const MethodInfo_32DB2CC *)Method_System_Collections_Generic_Dictionary_long__int___ctor__);
  itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
  if ( !itemList )
LABEL_14:
    sub_1C1AE30(itemList, v9);
  size = itemList->fields._size;
  if ( size < 1 )
    return v8;
  v12 = 0;
  while ( 1 )
  {
    itemList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                              itemList,
                                                              v12,
                                                              (const MethodInfo_363C5C0 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
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
      itemList = (System_Collections_Generic_List_object__o *)WarehouseListViewItem__get_UserSvtId(v13, v9);
      if ( !v8 )
        goto LABEL_14;
      System_Collections_Generic_Dictionary_long__int___Add(
        v8,
        (int64_t)itemList,
        v13->fields.selectNum,
        (const MethodInfo_32DBCA0 *)Method_System_Collections_Generic_Dictionary_long__int__Add__);
    }
    if ( size == ++v12 )
      return v8;
    itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
    if ( !itemList )
      goto LABEL_14;
  }
  sub_1C1B0F0(itemList);
  WarehouseListViewManager__ModifyScaleChangeList(v16, v17, v18);
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
  System_Collections_Generic_List_long__o *v16; // x22
  int64_t v17; // x1
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  int64_t itemList; // x0
  int v25; // w25
  int32_t v26; // w24
  __int64 methodPtr_low; // x10
  __int64 v28; // x8
  __int128 v29; // q0
  struct System_Int64_array *items; // x8
  _QWORD *v31; // x9
  __int64 size; // x10
  Il2CppClass **v33; // x8
  __int128 v34; // q0
  struct System_Int64_array *v35; // x8
  _QWORD *v36; // x9
  __int64 v37; // x10
  __int64 v38; // x8
  System_Collections_Generic_List_long__o *v39; // x0
  int v40; // w21
  System_Int64_array *v41; // x0
  int64_t v42; // x2
  int32_t v43; // w3
  System_String_o *v44; // x4
  BattleSetupInfo_o *v45; // x5
  FollowerInfo_o *v46; // x6
  PartyListViewItem_o *v47; // x7
  System_Int64_array *v48; // x1
  int64_t v49; // x2
  int32_t v50; // w3
  System_String_o *v51; // x4
  BattleSetupInfo_o *v52; // x5
  FollowerInfo_o *v53; // x6
  PartyListViewItem_o *v54; // x7
  System_Int64_array **v55; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v57; // [xsp+0h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v58; // [xsp+20h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v59; // [xsp+40h] [xbp-80h]

  if ( (byte_4BC5A20 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_System_Collections_Generic_List_long__Add__, choiceList);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_long__ToArray__, v7);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_long___ctor__, v8);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_long__get_Count__, v9);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v10);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v11);
    sub_1C1ABD4(&System_Collections_Generic_List_long__TypeInfo, v12);
    sub_1C1ABD4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v13);
    sub_1C1ABD4(&WarehouseListViewItem_TypeInfo, v14);
    byte_4BC5A20 = 1;
  }
  v15 = (System_Collections_Generic_List_long__o *)sub_1C1AE20(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v15,
    (const MethodInfo_3624070 *)Method_System_Collections_Generic_List_long___ctor__);
  v16 = (System_Collections_Generic_List_long__o *)sub_1C1AE20(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v16,
    (const MethodInfo_3624070 *)Method_System_Collections_Generic_List_long___ctor__);
  itemList = (int64_t)this->fields.itemList;
  if ( !itemList )
    goto LABEL_37;
  v25 = *(_DWORD *)(itemList + 24);
  if ( v25 >= 1 )
  {
    v26 = 0;
    while ( 1 )
    {
      itemList = (int64_t)System_Collections_Generic_List_object___get_Item(
                            (System_Collections_Generic_List_object__o *)itemList,
                            v26,
                            (const MethodInfo_363C5C0 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
      if ( !itemList )
        goto LABEL_37;
      methodPtr_low = LOBYTE(WarehouseListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
      if ( *(unsigned __int8 *)(*(_QWORD *)itemList + 304LL) < (unsigned int)methodPtr_low
        || *(WarehouseListViewItem_c **)(*(_QWORD *)(*(_QWORD *)itemList + 200LL) + 8 * methodPtr_low - 8) != WarehouseListViewItem_TypeInfo )
      {
        goto LABEL_37;
      }
      v28 = *(_QWORD *)(itemList + 112);
      if ( v28 && *(_BYTE *)(itemList + 233) )
      {
        if ( *(_BYTE *)(itemList + 161) )
        {
          v29 = *(_OWORD *)(v28 + 32);
          *(_OWORD *)&v59.fields.currentCryptoKey = *(_OWORD *)(v28 + 16);
          *(_OWORD *)&v59.fields.fakeValue = v29;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v58 = v59;
          itemList = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47559652(&v58, 0LL);
          if ( !v16 )
            goto LABEL_37;
          items = v16->fields._items;
          v31 = Method_System_Collections_Generic_List_long__Add__;
          ++v16->fields._version;
          if ( !items )
            goto LABEL_37;
          size = v16->fields._size;
          v17 = itemList;
          if ( (unsigned int)size >= items->max_length )
          {
            v38 = v31[4];
            v39 = v16;
LABEL_27:
            System_Collections_Generic_List_long___AddWithResize(
              v39,
              v17,
              *(const MethodInfo_36248C4 **)(*(_QWORD *)(v38 + 192) + 112LL));
            goto LABEL_28;
          }
          v33 = &items->obj.klass + size;
          v16->fields._size = size + 1;
        }
        else
        {
          v34 = *(_OWORD *)(v28 + 32);
          *(_OWORD *)&v59.fields.currentCryptoKey = *(_OWORD *)(v28 + 16);
          *(_OWORD *)&v59.fields.fakeValue = v34;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v57 = v59;
          itemList = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47559652(&v57, 0LL);
          if ( !v15 )
            goto LABEL_37;
          v35 = v15->fields._items;
          v36 = Method_System_Collections_Generic_List_long__Add__;
          ++v15->fields._version;
          if ( !v35 )
            goto LABEL_37;
          v37 = v15->fields._size;
          v17 = itemList;
          if ( (unsigned int)v37 >= v35->max_length )
          {
            v38 = v36[4];
            v39 = v15;
            goto LABEL_27;
          }
          v33 = &v35->obj.klass + v37;
          v15->fields._size = v37 + 1;
        }
        v33[4] = (Il2CppClass *)v17;
      }
LABEL_28:
      if ( v25 == ++v26 )
        break;
      itemList = (int64_t)this->fields.itemList;
      if ( !itemList )
        goto LABEL_37;
    }
  }
  if ( !v15 || !v16 )
LABEL_37:
    sub_1C1AE30(itemList, v17);
  v40 = v16->fields._size + v15->fields._size;
  if ( v40 < 1 )
  {
    *choiceList = 0LL;
    sub_1C1AB78((PartyOrganizationUtility_o *)choiceList, 0LL, v18, v19, v20, v21, v22, v23);
    v55 = unchoiceList;
    v48 = 0LL;
    *unchoiceList = 0LL;
  }
  else
  {
    v41 = System_Collections_Generic_List_long___ToArray(
            v15,
            (const MethodInfo_362637C *)Method_System_Collections_Generic_List_long__ToArray__);
    *choiceList = v41;
    sub_1C1AB78((PartyOrganizationUtility_o *)choiceList, (int64_t)v41, v42, v43, v44, v45, v46, v47);
    v48 = System_Collections_Generic_List_long___ToArray(
            v16,
            (const MethodInfo_362637C *)Method_System_Collections_Generic_List_long__ToArray__);
    *unchoiceList = v48;
    v55 = unchoiceList;
  }
  sub_1C1AB78((PartyOrganizationUtility_o *)v55, (int64_t)v48, v49, v50, v51, v52, v53, v54);
  return v40 > 0;
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
  System_Collections_Generic_List_long__o *v16; // x22
  int64_t v17; // x1
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  int64_t itemList; // x0
  int v25; // w25
  int32_t v26; // w24
  __int64 methodPtr_low; // x10
  __int64 v28; // x8
  __int128 v29; // q0
  struct System_Int64_array *items; // x8
  _QWORD *v31; // x9
  __int64 size; // x10
  Il2CppClass **v33; // x8
  __int128 v34; // q0
  struct System_Int64_array *v35; // x8
  _QWORD *v36; // x9
  __int64 v37; // x10
  __int64 v38; // x8
  System_Collections_Generic_List_long__o *v39; // x0
  int v40; // w21
  System_Int64_array *v41; // x0
  int64_t v42; // x2
  int32_t v43; // w3
  System_String_o *v44; // x4
  BattleSetupInfo_o *v45; // x5
  FollowerInfo_o *v46; // x6
  PartyListViewItem_o *v47; // x7
  System_Int64_array *v48; // x1
  int64_t v49; // x2
  int32_t v50; // w3
  System_String_o *v51; // x4
  BattleSetupInfo_o *v52; // x5
  FollowerInfo_o *v53; // x6
  PartyListViewItem_o *v54; // x7
  System_Int64_array **v55; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v57; // [xsp+0h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v58; // [xsp+20h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v59; // [xsp+40h] [xbp-80h]

  if ( (byte_4BC5A1F & 1) == 0 )
  {
    sub_1C1ABD4(&Method_System_Collections_Generic_List_long__Add__, lockList);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_long__ToArray__, v7);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_long___ctor__, v8);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_long__get_Count__, v9);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v10);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v11);
    sub_1C1ABD4(&System_Collections_Generic_List_long__TypeInfo, v12);
    sub_1C1ABD4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v13);
    sub_1C1ABD4(&WarehouseListViewItem_TypeInfo, v14);
    byte_4BC5A1F = 1;
  }
  v15 = (System_Collections_Generic_List_long__o *)sub_1C1AE20(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v15,
    (const MethodInfo_3624070 *)Method_System_Collections_Generic_List_long___ctor__);
  v16 = (System_Collections_Generic_List_long__o *)sub_1C1AE20(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v16,
    (const MethodInfo_3624070 *)Method_System_Collections_Generic_List_long___ctor__);
  itemList = (int64_t)this->fields.itemList;
  if ( !itemList )
    goto LABEL_37;
  v25 = *(_DWORD *)(itemList + 24);
  if ( v25 >= 1 )
  {
    v26 = 0;
    while ( 1 )
    {
      itemList = (int64_t)System_Collections_Generic_List_object___get_Item(
                            (System_Collections_Generic_List_object__o *)itemList,
                            v26,
                            (const MethodInfo_363C5C0 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
      if ( !itemList )
        goto LABEL_37;
      methodPtr_low = LOBYTE(WarehouseListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
      if ( *(unsigned __int8 *)(*(_QWORD *)itemList + 304LL) < (unsigned int)methodPtr_low
        || *(WarehouseListViewItem_c **)(*(_QWORD *)(*(_QWORD *)itemList + 200LL) + 8 * methodPtr_low - 8) != WarehouseListViewItem_TypeInfo )
      {
        goto LABEL_37;
      }
      v28 = *(_QWORD *)(itemList + 112);
      if ( v28 && *(_BYTE *)(itemList + 232) )
      {
        if ( *(_BYTE *)(itemList + 160) )
        {
          v29 = *(_OWORD *)(v28 + 32);
          *(_OWORD *)&v59.fields.currentCryptoKey = *(_OWORD *)(v28 + 16);
          *(_OWORD *)&v59.fields.fakeValue = v29;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v58 = v59;
          itemList = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47559652(&v58, 0LL);
          if ( !v16 )
            goto LABEL_37;
          items = v16->fields._items;
          v31 = Method_System_Collections_Generic_List_long__Add__;
          ++v16->fields._version;
          if ( !items )
            goto LABEL_37;
          size = v16->fields._size;
          v17 = itemList;
          if ( (unsigned int)size >= items->max_length )
          {
            v38 = v31[4];
            v39 = v16;
LABEL_27:
            System_Collections_Generic_List_long___AddWithResize(
              v39,
              v17,
              *(const MethodInfo_36248C4 **)(*(_QWORD *)(v38 + 192) + 112LL));
            goto LABEL_28;
          }
          v33 = &items->obj.klass + size;
          v16->fields._size = size + 1;
        }
        else
        {
          v34 = *(_OWORD *)(v28 + 32);
          *(_OWORD *)&v59.fields.currentCryptoKey = *(_OWORD *)(v28 + 16);
          *(_OWORD *)&v59.fields.fakeValue = v34;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v57 = v59;
          itemList = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47559652(&v57, 0LL);
          if ( !v15 )
            goto LABEL_37;
          v35 = v15->fields._items;
          v36 = Method_System_Collections_Generic_List_long__Add__;
          ++v15->fields._version;
          if ( !v35 )
            goto LABEL_37;
          v37 = v15->fields._size;
          v17 = itemList;
          if ( (unsigned int)v37 >= v35->max_length )
          {
            v38 = v36[4];
            v39 = v15;
            goto LABEL_27;
          }
          v33 = &v35->obj.klass + v37;
          v15->fields._size = v37 + 1;
        }
        v33[4] = (Il2CppClass *)v17;
      }
LABEL_28:
      if ( v25 == ++v26 )
        break;
      itemList = (int64_t)this->fields.itemList;
      if ( !itemList )
        goto LABEL_37;
    }
  }
  if ( !v15 || !v16 )
LABEL_37:
    sub_1C1AE30(itemList, v17);
  v40 = v16->fields._size + v15->fields._size;
  if ( v40 < 1 )
  {
    *lockList = 0LL;
    sub_1C1AB78((PartyOrganizationUtility_o *)lockList, 0LL, v18, v19, v20, v21, v22, v23);
    v55 = unlockList;
    v48 = 0LL;
    *unlockList = 0LL;
  }
  else
  {
    v41 = System_Collections_Generic_List_long___ToArray(
            v15,
            (const MethodInfo_362637C *)Method_System_Collections_Generic_List_long__ToArray__);
    *lockList = v41;
    sub_1C1AB78((PartyOrganizationUtility_o *)lockList, (int64_t)v41, v42, v43, v44, v45, v46, v47);
    v48 = System_Collections_Generic_List_long___ToArray(
            v16,
            (const MethodInfo_362637C *)Method_System_Collections_Generic_List_long__ToArray__);
    *unlockList = v48;
    v55 = unlockList;
  }
  sub_1C1AB78((PartyOrganizationUtility_o *)v55, (int64_t)v48, v49, v50, v51, v52, v53, v54);
  return v40 > 0;
}


void __fastcall WarehouseListViewManager__InitLoad(const MethodInfo *method)
{
  __int64 v1; // x1
  WarehouseListViewManager_c *v2; // x0
  ListViewSort_o *servantSortInfo; // x0

  if ( (byte_4BC5A17 & 1) == 0 )
  {
    sub_1C1ABD4(&WarehouseListViewManager_TypeInfo, v1);
    byte_4BC5A17 = 1;
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
    sub_1C1AE30(servantSortInfo, v1);
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
    sub_1C1AE30(this, item);
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
    sub_1C1AE30(parentManager, item);
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
  __int64 v14; // x1
  DataMasterBase_TMaster__TEntity__PKType__o *v15; // x20
  _BOOL8 v16; // x0
  const MethodInfo *v17; // x1
  WarehouseListViewItem_o *current; // x21
  __int64 methodPtr_low; // x10
  const MethodInfo *v20; // x1
  int64_t UserSvtId; // x0
  Il2CppObject *Entity; // x1
  const MethodInfo *v23; // x2
  UnityEngine_Object_o *viewObject; // x22
  __int64 v25; // x1
  struct ListViewObject_o *v26; // x0
  UserGameEntity_o *SelfUserGame; // x20
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x9
  DataMasterBase_TMaster__TEntity__PKType__o *v29; // x19
  _BOOL8 v30; // x0
  const MethodInfo *v31; // x1
  WarehouseListViewItem_o *v32; // x21
  __int64 v33; // x10
  const MethodInfo *v34; // x1
  int64_t v35; // x0
  Il2CppObject *v36; // x1
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
  System_Collections_Generic_List_Enumerator_object__o v47; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v48; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_4BC5A1D & 1) == 0 )
  {
    sub_1C1ABD4(&Method_DataManager_GetMasterData_UserServantMaster___, method);
    sub_1C1ABD4(&Method_DataManager_GetMasterData_UserServantStorageMaster___, v3);
    sub_1C1ABD4(&Method_DataMasterBase_UserServantStorageMaster__UserServantEntity__long__GetEntity__, v4);
    sub_1C1ABD4(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v5);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__, v6);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v7);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v8);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v9);
    sub_1C1ABD4(&UnityEngine_Object_TypeInfo, v10);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11);
    sub_1C1ABD4(&WarehouseListViewItem_TypeInfo, v12);
    byte_4BC5A1D = 1;
  }
  memset(&v48, 0, sizeof(v48));
  if ( this->fields.itemList )
  {
    if ( (this->fields.kind & 0xFFFFFFFE) == 2 )
    {
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( Instance )
      {
        Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2F9F490 *)Method_DataManager_GetMasterData_UserServantStorageMaster___);
        if ( this->fields.itemList )
        {
          v15 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
          System_Collections_Generic_List_object___GetEnumerator(
            (System_Collections_Generic_List_Enumerator_T__o *)&v47,
            (System_Collections_Generic_List_object__o *)this->fields.itemList,
            (const MethodInfo_363D388 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
          v48 = v47;
          while ( 1 )
          {
            v16 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                    &v48,
                    (const MethodInfo_33CE4F8 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
            if ( !v16 )
              break;
            current = (WarehouseListViewItem_o *)v48.fields._current;
            if ( !v48.fields._current
              || (methodPtr_low = LOBYTE(WarehouseListViewItem_TypeInfo->vtable._0_Equals.methodPtr),
                  LOBYTE(v48.fields._current->klass->vtable[0].methodPtr) < (unsigned int)methodPtr_low)
              || (WarehouseListViewItem_c *)v48.fields._current->klass->_2.typeHierarchy[methodPtr_low - 1] != WarehouseListViewItem_TypeInfo )
            {
              sub_1C1AE30(v16, v17);
            }
            if ( WarehouseListViewItem__get_UserSvtId((WarehouseListViewItem_o *)v48.fields._current, v17) >= 1 )
            {
              UserSvtId = WarehouseListViewItem__get_UserSvtId(current, v20);
              if ( !v15 )
                sub_1C1AE30(UserSvtId, UserSvtId);
              Entity = DataMasterBase_object__object__long___GetEntity(
                         v15,
                         UserSvtId,
                         (const MethodInfo_324ABD4 *)Method_DataMasterBase_UserServantStorageMaster__UserServantEntity__long__GetEntity__);
              if ( Entity )
                WarehouseListViewItem__Modify(current, (UserServantEntity_o *)Entity, v23);
              viewObject = (UnityEngine_Object_o *)current->fields.viewObject;
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              if ( UnityEngine_Object__op_Inequality(viewObject, 0LL, 0LL) )
              {
                v26 = current->fields.viewObject;
                if ( !v26 )
                  sub_1C1AE30(0LL, v25);
                ((void (__fastcall *)(struct ListViewObject_o *, WarehouseListViewItem_o *, Il2CppMethodPointer))v26->klass->vtable._5_SetItem.method)(
                  v26,
                  current,
                  v26->klass->vtable._6_SetItem.methodPtr);
              }
            }
          }
LABEL_41:
          System_Collections_Generic_List_Enumerator_object___Dispose(
            &v48,
            (const MethodInfo_33CE4F4 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
          return;
        }
      }
    }
    else
    {
      SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( Instance )
      {
        Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2F9F490 *)Method_DataManager_GetMasterData_UserServantMaster___);
        itemList = this->fields.itemList;
        if ( itemList )
        {
          v29 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
          System_Collections_Generic_List_object___GetEnumerator(
            (System_Collections_Generic_List_Enumerator_T__o *)&v47,
            (System_Collections_Generic_List_object__o *)itemList,
            (const MethodInfo_363D388 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
          v48 = v47;
          while ( 1 )
          {
            v30 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                    &v48,
                    (const MethodInfo_33CE4F8 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
            if ( !v30 )
              break;
            v32 = (WarehouseListViewItem_o *)v48.fields._current;
            if ( !v48.fields._current
              || (v33 = LOBYTE(WarehouseListViewItem_TypeInfo->vtable._0_Equals.methodPtr),
                  LOBYTE(v48.fields._current->klass->vtable[0].methodPtr) < (unsigned int)v33)
              || (WarehouseListViewItem_c *)v48.fields._current->klass->_2.typeHierarchy[v33 - 1] != WarehouseListViewItem_TypeInfo )
            {
              sub_1C1AE30(v30, v31);
            }
            if ( WarehouseListViewItem__get_UserSvtId((WarehouseListViewItem_o *)v48.fields._current, v31) >= 1 )
            {
              v35 = WarehouseListViewItem__get_UserSvtId(v32, v34);
              if ( !v29 )
                sub_1C1AE30(v35, v35);
              v36 = DataMasterBase_object__object__long___GetEntity(
                      v29,
                      v35,
                      (const MethodInfo_324ABD4 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
              if ( v36 )
                WarehouseListViewItem__Modify(v32, (UserServantEntity_o *)v36, v37);
              v38 = WarehouseListViewItem__get_UserSvtId(v32, (const MethodInfo *)v36);
              if ( !SelfUserGame )
                sub_1C1AE30(v38, v39);
              favoriteUserSvtId = SelfUserGame->fields.favoriteUserSvtId;
              v41 = v38;
              v42 = WarehouseListViewItem__get_UserSvtId(v32, v39);
              WarehouseListViewItem__Modify_36958428(
                v32,
                v41 == favoriteUserSvtId,
                v42 == SelfUserGame->fields.pushUserSvtId,
                v43);
              v44 = (UnityEngine_Object_o *)v32->fields.viewObject;
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              if ( UnityEngine_Object__op_Inequality(v44, 0LL, 0LL) )
              {
                v46 = v32->fields.viewObject;
                if ( !v46 )
                  sub_1C1AE30(0LL, v45);
                ((void (__fastcall *)(struct ListViewObject_o *, WarehouseListViewItem_o *, Il2CppMethodPointer))v46->klass->vtable._5_SetItem.method)(
                  v46,
                  v32,
                  v46->klass->vtable._6_SetItem.methodPtr);
              }
            }
          }
          goto LABEL_41;
        }
      }
    }
    sub_1C1AE30(Instance, v14);
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
  Il2CppObject *Entity; // x19
  UserGameEntity_o *SelfUserGame; // x22
  _BOOL8 v22; // x0
  const MethodInfo *v23; // x1
  __int64 v24; // x11
  WarehouseListViewItem_o *v25; // x20
  int64_t v26; // x0
  Il2CppObject v27; // q0
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
  _BOOL8 v39; // x0
  const MethodInfo *v40; // x1
  __int64 methodPtr_low; // x11
  WarehouseListViewItem_o *current; // x22
  int64_t v43; // x0
  __int128 v44; // q0
  int64_t v45; // x23
  const MethodInfo *v46; // x2
  UnityEngine_Object_o *viewObject; // x23
  __int64 v48; // x1
  struct ListViewObject_o *v49; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v50; // [xsp+0h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v51; // [xsp+20h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v52; // [xsp+40h] [xbp-A0h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v53; // [xsp+60h] [xbp-80h] BYREF

  if ( (byte_4BC5A1E & 1) == 0 )
  {
    sub_1C1ABD4(&Method_DataManager_GetMasterData_UserServantMaster___, userSvtId);
    sub_1C1ABD4(&Method_DataManager_GetMasterData_UserServantStorageMaster___, v5);
    sub_1C1ABD4(&Method_DataMasterBase_UserServantStorageMaster__UserServantEntity__long__GetEntity__, v6);
    sub_1C1ABD4(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v7);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__, v8);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v9);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v10);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v11);
    sub_1C1ABD4(&UnityEngine_Object_TypeInfo, v12);
    sub_1C1ABD4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v13);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v14);
    sub_1C1ABD4(&WarehouseListViewItem_TypeInfo, v15);
    byte_4BC5A1E = 1;
  }
  memset(&v53, 0, sizeof(v53));
  itemList = this->fields.itemList;
  if ( itemList )
  {
    if ( (this->fields.kind & 0xFFFFFFFE) == 2 )
    {
      if ( userSvtId < 1 )
      {
        v19 = 0LL;
        goto LABEL_37;
      }
      Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( Instance )
      {
        Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                      Instance,
                                      (const MethodInfo_2F9F490 *)Method_DataManager_GetMasterData_UserServantStorageMaster___);
        if ( Instance )
        {
          Instance = (DataManager_o *)DataMasterBase_object__object__long___GetEntity(
                                        (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                                        userSvtId,
                                        (const MethodInfo_324ABD4 *)Method_DataMasterBase_UserServantStorageMaster__UserServantEntity__long__GetEntity__);
          itemList = this->fields.itemList;
          if ( itemList )
          {
            v19 = Instance;
LABEL_37:
            System_Collections_Generic_List_object___GetEnumerator(
              (System_Collections_Generic_List_Enumerator_T__o *)&v52,
              (System_Collections_Generic_List_object__o *)itemList,
              (const MethodInfo_363D388 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
            v53 = *(System_Collections_Generic_List_Enumerator_object__o *)&v52.fields.currentCryptoKey;
            while ( 1 )
            {
              v39 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                      &v53,
                      (const MethodInfo_33CE4F8 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
              if ( !v39 )
                goto LABEL_57;
              if ( v53.fields._current
                && (methodPtr_low = LOBYTE(WarehouseListViewItem_TypeInfo->vtable._0_Equals.methodPtr),
                    LOBYTE(v53.fields._current->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low) )
              {
                if ( (WarehouseListViewItem_c *)v53.fields._current->klass->_2.typeHierarchy[methodPtr_low - 1] == WarehouseListViewItem_TypeInfo )
                  current = (WarehouseListViewItem_o *)v53.fields._current;
                else
                  current = 0LL;
                if ( v19 )
                {
LABEL_42:
                  if ( !current )
                    sub_1C1AE30(v39, v40);
                  v43 = WarehouseListViewItem__get_UserSvtId(current, v40);
                  v44 = *(_OWORD *)&v19->fields._DispLog;
                  v45 = v43;
                  *(SingletonMonoBehaviour_DataManager__Fields *)&v52.fields.currentCryptoKey = v19->fields.SingletonMonoBehaviour_DataManager__Fields;
                  *(_OWORD *)&v52.fields.fakeValue = v44;
                  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
                  v51 = v52;
                  if ( v45 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47559652(&v51, 0LL) )
                    WarehouseListViewItem__Modify(current, (UserServantEntity_o *)v19, v46);
                  goto LABEL_52;
                }
              }
              else
              {
                current = 0LL;
                if ( v19 )
                  goto LABEL_42;
              }
              if ( !current )
                sub_1C1AE30(v39, v40);
LABEL_52:
              viewObject = (UnityEngine_Object_o *)current->fields.viewObject;
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              if ( UnityEngine_Object__op_Inequality(viewObject, 0LL, 0LL) )
              {
                v49 = current->fields.viewObject;
                if ( !v49 )
                  sub_1C1AE30(0LL, v48);
                ((void (__fastcall *)(struct ListViewObject_o *, WarehouseListViewItem_o *, Il2CppMethodPointer))v49->klass->vtable._5_SetItem.method)(
                  v49,
                  current,
                  v49->klass->vtable._6_SetItem.methodPtr);
              }
            }
          }
        }
      }
LABEL_66:
      sub_1C1AE30(Instance, v18);
    }
    Entity = 0LL;
    SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
    if ( userSvtId >= 1 )
    {
      Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_66;
      Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                    Instance,
                                    (const MethodInfo_2F9F490 *)Method_DataManager_GetMasterData_UserServantMaster___);
      if ( !Instance )
        goto LABEL_66;
      Entity = DataMasterBase_object__object__long___GetEntity(
                 (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                 userSvtId,
                 (const MethodInfo_324ABD4 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    }
    Instance = (DataManager_o *)this->fields.itemList;
    if ( !Instance )
      goto LABEL_66;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v52,
      (System_Collections_Generic_List_object__o *)Instance,
      (const MethodInfo_363D388 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    *(_OWORD *)&v53.fields._list = *(_OWORD *)&v52.fields.currentCryptoKey;
    v53.fields._current = (Il2CppObject *)v52.fields.fakeValue;
    while ( 1 )
    {
      v22 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v53,
              (const MethodInfo_33CE4F8 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
      if ( !v22 )
      {
LABEL_57:
        System_Collections_Generic_List_Enumerator_object___Dispose(
          &v53,
          (const MethodInfo_33CE4F4 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
        return;
      }
      if ( v53.fields._current
        && (v24 = LOBYTE(WarehouseListViewItem_TypeInfo->vtable._0_Equals.methodPtr),
            LOBYTE(v53.fields._current->klass->vtable[0].methodPtr) >= (unsigned int)v24) )
      {
        if ( (WarehouseListViewItem_c *)v53.fields._current->klass->_2.typeHierarchy[v24 - 1] == WarehouseListViewItem_TypeInfo )
          v25 = (WarehouseListViewItem_o *)v53.fields._current;
        else
          v25 = 0LL;
        if ( Entity )
        {
LABEL_20:
          if ( !v25 )
            sub_1C1AE30(v22, v23);
          v26 = WarehouseListViewItem__get_UserSvtId(v25, v23);
          v27 = Entity[2];
          v28 = v26;
          *(Il2CppObject *)&v52.fields.currentCryptoKey = Entity[1];
          *(Il2CppObject *)&v52.fields.fakeValue = v27;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v50 = v52;
          if ( v28 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47559652(&v50, 0LL) )
            WarehouseListViewItem__Modify(v25, (UserServantEntity_o *)Entity, v29);
          goto LABEL_30;
        }
      }
      else
      {
        v25 = 0LL;
        if ( Entity )
          goto LABEL_20;
      }
      if ( !v25 )
        sub_1C1AE30(v22, v23);
LABEL_30:
      v30 = WarehouseListViewItem__get_UserSvtId(v25, v23);
      if ( !SelfUserGame )
        sub_1C1AE30(v30, v31);
      favoriteUserSvtId = SelfUserGame->fields.favoriteUserSvtId;
      v33 = v30;
      v34 = WarehouseListViewItem__get_UserSvtId(v25, v31);
      WarehouseListViewItem__Modify_36958428(
        v25,
        v33 == favoriteUserSvtId,
        v34 == SelfUserGame->fields.pushUserSvtId,
        v35);
      v36 = (UnityEngine_Object_o *)v25->fields.viewObject;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(v36, 0LL, 0LL) )
      {
        v38 = v25->fields.viewObject;
        if ( !v38 )
          sub_1C1AE30(0LL, v37);
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
  System_Collections_Generic_List_object__o *itemList; // x0
  const MethodInfo *v12; // x1
  struct WarehouseListManager_o *parentManager; // x8
  struct WarehouseListViewManager_o *baseListViewManager; // x9
  int size; // w23
  int32_t v16; // w21
  WarehouseListViewItem_o *v17; // x22
  __int64 methodPtr_low; // x9
  int64_t UserSvtId; // x0
  int64_t v20; // x0
  struct WarehouseListManager_o *v21; // x8
  struct WarehouseListViewManager_o *v22; // x9
  WarehouseListViewManager_o *v23; // x0
  const MethodInfo *v24; // x1

  if ( (byte_4BC5A39 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_System_Collections_Generic_Dictionary_long__int__ContainsKey__, selectServantIdDic);
    sub_1C1ABD4(&Method_System_Collections_Generic_Dictionary_long__int__get_Count__, v5);
    sub_1C1ABD4(&Method_System_Collections_Generic_Dictionary_long__int__get_Item__, v6);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v7);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v8);
    sub_1C1ABD4(&WarehouseListViewItem_TypeInfo, v9);
    byte_4BC5A39 = 1;
  }
  if ( selectServantIdDic
    && System_Collections_Generic_Dictionary_long__int___get_Count(
         selectServantIdDic,
         (const MethodInfo_32DB950 *)Method_System_Collections_Generic_Dictionary_long__int__get_Count__) )
  {
    WarehouseListViewManager__ReleaseAll(this, v10);
    parentManager = this->fields.parentManager;
    if ( !parentManager
      || (baseListViewManager = parentManager->fields.baseListViewManager) == 0LL
      || (parentManager->fields.totalSum = baseListViewManager->fields.selectSum,
          (itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList) == 0LL) )
    {
LABEL_19:
      sub_1C1AE30(itemList, v12);
    }
    size = itemList->fields._size;
    if ( size >= 1 )
    {
      v16 = 0;
      while ( 1 )
      {
        itemList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                  itemList,
                                                                  v16,
                                                                  (const MethodInfo_363C5C0 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
        if ( !itemList )
          goto LABEL_19;
        v17 = (WarehouseListViewItem_o *)itemList;
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
               (const MethodInfo_32DBE94 *)Method_System_Collections_Generic_Dictionary_long__int__ContainsKey__) )
        {
          v20 = WarehouseListViewItem__get_UserSvtId(v17, v12);
          itemList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_Dictionary_long__int___get_Item(
                                                                    selectServantIdDic,
                                                                    v20,
                                                                    (const MethodInfo_32DBC00 *)Method_System_Collections_Generic_Dictionary_long__int__get_Item__);
          v17->fields.selectNum = (int)itemList;
          v21 = this->fields.parentManager;
          ++this->fields.selectSum;
          if ( !v21 )
            goto LABEL_19;
          v22 = v21->fields.baseListViewManager;
          if ( !v22 )
            goto LABEL_19;
          v21->fields.totalSum = v22->fields.selectSum;
        }
        if ( size == ++v16 )
          return;
        itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
        if ( !itemList )
          goto LABEL_19;
      }
      sub_1C1B0F0(itemList);
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
  __int64 v5; // x1
  ListViewSort_o *sort; // x0

  if ( (byte_4BC5A29 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_WarehouseListViewManager_OnClickBonusFilterKind__, method);
    byte_4BC5A29 = 1;
  }
  if ( this->fields.isInput )
  {
    v3 = Method_WarehouseListViewManager_OnClickBonusFilterKind__;
    if ( (*((_BYTE *)Method_WarehouseListViewManager_OnClickBonusFilterKind__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C1ABEC(Method_WarehouseListViewManager_OnClickBonusFilterKind__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C1ABB8(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0LL);
    sort = this->fields.sort;
    if ( !sort )
      sub_1C1AE30(0LL, v5);
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
  ServantFilterSelectMenu_CallbackFunc_o *v11; // x22
  __int64 v12; // x0
  __int64 v13; // x1
  CommonUI_o *v14; // x0
  int32_t v15; // w1
  Il2CppObject *v16; // x0
  ListViewSort_o *v17; // x20
  CommonUI_o *v18; // x21
  ServantFilterSelectMenu_CallbackFunc_o *v19; // x22
  Il2CppObject *v20; // x0
  Il2CppObject *v21; // x21

  if ( (byte_4BC5A31 & 1) == 0 )
  {
    sub_1C1ABD4(&ServantFilterSelectMenu_CallbackFunc_TypeInfo, method);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v3);
    sub_1C1ABD4(&Method_WarehouseListViewManager_EndSelectFilterKind__, v4);
    sub_1C1ABD4(&Method_WarehouseListViewManager_OnClickFilterKind__, v5);
    byte_4BC5A31 = 1;
  }
  if ( this->fields.isInput )
  {
    v6 = Method_WarehouseListViewManager_OnClickFilterKind__;
    if ( (*((_BYTE *)Method_WarehouseListViewManager_OnClickFilterKind__ + 83) & 2) != 0 )
      v6 = (_QWORD *)sub_1C1ABEC(Method_WarehouseListViewManager_OnClickFilterKind__);
    v7 = (System_Reflection_MethodBase_o *)sub_1C1ABB8(v6, v6[4]);
    OverwriteAssetSoundName__PlaySystemSe(v7, 0, 0, 0LL);
    switch ( this->fields.kind )
    {
      case 0:
      case 2:
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        sort = this->fields.sort;
        v10 = Instance;
        v11 = (ServantFilterSelectMenu_CallbackFunc_o *)sub_1C1AE20(ServantFilterSelectMenu_CallbackFunc_TypeInfo);
        ServantFilterSelectMenu_CallbackFunc___ctor(
          v11,
          (Il2CppObject *)this,
          Method_WarehouseListViewManager_EndSelectFilterKind__,
          0LL);
        if ( !v10 )
          goto LABEL_15;
        v14 = (CommonUI_o *)v10;
        v15 = 0;
        goto LABEL_14;
      case 1:
      case 3:
        v16 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        v17 = this->fields.sort;
        v18 = (CommonUI_o *)v16;
        v19 = (ServantFilterSelectMenu_CallbackFunc_o *)sub_1C1AE20(ServantFilterSelectMenu_CallbackFunc_TypeInfo);
        ServantFilterSelectMenu_CallbackFunc___ctor(
          v19,
          (Il2CppObject *)this,
          Method_WarehouseListViewManager_EndSelectFilterKind__,
          0LL);
        if ( !v18 )
          goto LABEL_15;
        CommonUI__OpenServantFilterSelectMenu_31105860(v18, 5, v17, (ListViewManager_o *)this, v19, -1, 0LL);
        break;
      default:
        v20 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        sort = this->fields.sort;
        v21 = v20;
        v11 = (ServantFilterSelectMenu_CallbackFunc_o *)sub_1C1AE20(ServantFilterSelectMenu_CallbackFunc_TypeInfo);
        ServantFilterSelectMenu_CallbackFunc___ctor(
          v11,
          (Il2CppObject *)this,
          Method_WarehouseListViewManager_EndSelectFilterKind__,
          0LL);
        if ( !v21 )
LABEL_15:
          sub_1C1AE30(v12, v13);
        v15 = 6;
        v14 = (CommonUI_o *)v21;
LABEL_14:
        CommonUI__OpenServantFilterSelectMenu(v14, v15, sort, v11, -1, 0LL);
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

  if ( (byte_4BC5A28 & 1) == 0 )
  {
    sub_1C1ABD4(&WarehouseListViewItem_TypeInfo, item);
    byte_4BC5A28 = 1;
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
  __int64 v6; // x1
  struct ListViewSort_o *sort; // x8

  if ( (byte_4BC5A34 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_WarehouseListViewManager_OnClickSortAscendingOrder__, method);
    byte_4BC5A34 = 1;
  }
  if ( this->fields.isInput )
  {
    v3 = Method_WarehouseListViewManager_OnClickSortAscendingOrder__;
    if ( (*((_BYTE *)Method_WarehouseListViewManager_OnClickSortAscendingOrder__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C1ABEC(Method_WarehouseListViewManager_OnClickSortAscendingOrder__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C1ABB8(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0LL);
    sort = this->fields.sort;
    if ( !sort )
      sub_1C1AE30(v5, v6);
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
  ServantSortSelectMenu_CallbackFunc_o *v12; // x22
  __int64 v13; // x0
  __int64 v14; // x1
  int32_t v15; // w1

  if ( (byte_4BC5A2F & 1) == 0 )
  {
    sub_1C1ABD4(&ServantSortSelectMenu_CallbackFunc_TypeInfo, method);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v3);
    sub_1C1ABD4(&Method_WarehouseListViewManager_EndSelectSortKind__, v4);
    sub_1C1ABD4(&Method_WarehouseListViewManager_OnClickSortKind__, v5);
    byte_4BC5A2F = 1;
  }
  if ( this->fields.isInput )
  {
    v6 = Method_WarehouseListViewManager_OnClickSortKind__;
    if ( (*((_BYTE *)Method_WarehouseListViewManager_OnClickSortKind__ + 83) & 2) != 0 )
      v6 = (_QWORD *)sub_1C1ABEC(Method_WarehouseListViewManager_OnClickSortKind__);
    v7 = (System_Reflection_MethodBase_o *)sub_1C1ABB8(v6, v6[4]);
    OverwriteAssetSoundName__PlaySystemSe(v7, 0, 0, 0LL);
    kind = this->fields.kind;
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sort = this->fields.sort;
    v11 = (CommonUI_o *)Instance;
    v12 = (ServantSortSelectMenu_CallbackFunc_o *)sub_1C1AE20(ServantSortSelectMenu_CallbackFunc_TypeInfo);
    ServantSortSelectMenu_CallbackFunc___ctor(
      v12,
      (Il2CppObject *)this,
      Method_WarehouseListViewManager_EndSelectSortKind__,
      0LL);
    if ( !v11 )
      sub_1C1AE30(v13, v14);
    if ( kind <= 3 )
      v15 = kind + 1;
    else
      v15 = 3;
    CommonUI__OpenServantSortSelectMenu(v11, v15, sort, 1, v12, 0LL);
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

  if ( (byte_4BC5A2E & 1) == 0 )
  {
    sub_1C1ABD4(&WarehouseListViewItem_TypeInfo, item);
    byte_4BC5A2E = 1;
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
  __int64 v7; // x1
  UIScrollView_o *v8; // x0

  if ( (byte_4BC5A25 & 1) == 0 )
  {
    sub_1C1ABD4(&UnityEngine_Object_TypeInfo, method);
    byte_4BC5A25 = 1;
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
        v8 = this->fields.scrollView;
        if ( !v8
          || (((void (__fastcall *)(UIScrollView_o *, __int64, Il2CppMethodPointer))v8->klass->vtable._8_UpdateScrollbars.method)(
                v8,
                1LL,
                v8->klass->vtable._9_SetDragAmount.methodPtr),
              (v8 = this->fields.scrollView) == 0LL) )
        {
          sub_1C1AE30(v8, v7);
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
  int v6; // w22
  System_Collections_Generic_List_object__o *v7; // x20
  int32_t v8; // w21

  if ( (byte_4BC5A1B & 1) == 0 )
  {
    sub_1C1ABD4(&Method_System_Collections_Generic_List_WarehouseListViewObject__get_Count__, method);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_WarehouseListViewObject__get_Item__, v3);
    byte_4BC5A1B = 1;
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
                        (const MethodInfo_363C5C0 *)Method_System_Collections_Generic_List_WarehouseListViewObject__get_Item__);
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
    sub_1C1AE30(parentManager, method);
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
  __int64 v9; // x1
  Il2CppObject *current; // x20
  __int64 methodPtr_low; // x9
  const MethodInfo *v12; // x3
  const MethodInfo *v13; // x1
  System_Collections_Generic_List_Enumerator_object__o v14; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4BC5A27 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__, method);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v3);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v4);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v5);
    sub_1C1ABD4(&WarehouseListViewItem_TypeInfo, v6);
    byte_4BC5A27 = 1;
  }
  memset(&v14, 0, sizeof(v14));
  itemList = this->fields.itemList;
  this->fields.sellEnableRestCnt = 0;
  if ( !itemList )
    sub_1C1AE30(0LL, method);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v14,
    (System_Collections_Generic_List_object__o *)itemList,
    (const MethodInfo_363D388 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  while ( 1 )
  {
    v8 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v14,
           (const MethodInfo_33CE4F8 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    if ( !v8 )
      break;
    current = v14.fields._current;
    if ( !v14.fields._current )
      goto LABEL_12;
    methodPtr_low = LOBYTE(WarehouseListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(v14.fields._current->klass->vtable[0].methodPtr) < (unsigned int)methodPtr_low
      || (WarehouseListViewItem_c *)v14.fields._current->klass->_2.typeHierarchy[methodPtr_low - 1] != WarehouseListViewItem_TypeInfo )
    {
      sub_1C1B0F0(v14.fields._current);
LABEL_12:
      sub_1C1AE30(v8, v9);
    }
    ListViewItem__set_IsSelect((ListViewItem_o *)v14.fields._current, 0, 0LL);
    WarehouseListViewManager__ChangeSellEnableRestCnt(this, 1, (WarehouseListViewItem_o *)current, v12);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v14,
    (const MethodInfo_33CE4F4 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
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
  System_Collections_Generic_List_object__o *ObjectList; // x0
  __int64 v15; // x1
  int32_t size; // w8
  Il2CppObject *current; // x21
  System_Action_o *v18; // x22
  __int64 v19; // x0
  __int64 v20; // x1
  System_Collections_Generic_List_Enumerator_object__o v21; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4BC5A23 & 1) == 0 )
  {
    sub_1C1ABD4(&System_Action_TypeInfo, *(_QWORD *)&mode);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_Enumerator_WarehouseListViewObject__Dispose__, v7);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_Enumerator_WarehouseListViewObject__MoveNext__, v8);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_Enumerator_WarehouseListViewObject__get_Current__, v9);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_WarehouseListViewObject__GetEnumerator__, v10);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_WarehouseListViewObject__get_Count__, v11);
    sub_1C1ABD4(&Method_WarehouseListViewManager_OnMoveEnd__, v12);
    sub_1C1ABD4(&StringLiteral_10123/*"OnMoveEnd"*/, v13);
    byte_4BC5A23 = 1;
  }
  memset(&v21, 0, sizeof(v21));
  ObjectList = (System_Collections_Generic_List_object__o *)WarehouseListViewManager__get_ObjectList(
                                                              this,
                                                              *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_1C1AE30(0LL, v15);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10123/*"OnMoveEnd"*/,
      delay,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v21,
      ObjectList,
      (const MethodInfo_363D388 *)Method_System_Collections_Generic_List_WarehouseListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v21,
              (const MethodInfo_33CE4F8 *)Method_System_Collections_Generic_List_Enumerator_WarehouseListViewObject__MoveNext__) )
    {
      current = v21.fields._current;
      v18 = (System_Action_o *)sub_1C1AE20(System_Action_TypeInfo);
      System_Action___ctor(v18, (Il2CppObject *)this, Method_WarehouseListViewManager_OnMoveEnd__, 0LL);
      if ( !current )
        sub_1C1AE30(v19, v20);
      WarehouseListViewObject__Init_36982756((WarehouseListViewObject_o *)current, mode, v18, delay, 0LL);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v21,
      (const MethodInfo_33CE4F4 *)Method_System_Collections_Generic_List_Enumerator_WarehouseListViewObject__Dispose__);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarehouseListViewManager__RequestListObject_36972860(
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
  __int64 v13; // x1
  int32_t size; // w8
  Il2CppObject *current; // x21
  System_Action_o *v16; // x22
  __int64 v17; // x0
  __int64 v18; // x1
  System_Collections_Generic_List_Enumerator_object__o v19; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4BC5A24 & 1) == 0 )
  {
    sub_1C1ABD4(&System_Action_TypeInfo, *(_QWORD *)&mode);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_Enumerator_WarehouseListViewObject__Dispose__, v5);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_Enumerator_WarehouseListViewObject__MoveNext__, v6);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_Enumerator_WarehouseListViewObject__get_Current__, v7);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_WarehouseListViewObject__GetEnumerator__, v8);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_WarehouseListViewObject__get_Count__, v9);
    sub_1C1ABD4(&Method_WarehouseListViewManager_OnMoveEnd__, v10);
    sub_1C1ABD4(&StringLiteral_10123/*"OnMoveEnd"*/, v11);
    byte_4BC5A24 = 1;
  }
  memset(&v19, 0, sizeof(v19));
  ObjectList = (System_Collections_Generic_List_object__o *)WarehouseListViewManager__get_ObjectList(
                                                              this,
                                                              *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_1C1AE30(0LL, v13);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10123/*"OnMoveEnd"*/,
      0.0,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v19,
      ObjectList,
      (const MethodInfo_363D388 *)Method_System_Collections_Generic_List_WarehouseListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v19,
              (const MethodInfo_33CE4F8 *)Method_System_Collections_Generic_List_Enumerator_WarehouseListViewObject__MoveNext__) )
    {
      current = v19.fields._current;
      v16 = (System_Action_o *)sub_1C1AE20(System_Action_TypeInfo);
      System_Action___ctor(v16, (Il2CppObject *)this, Method_WarehouseListViewManager_OnMoveEnd__, 0LL);
      if ( !current )
        sub_1C1AE30(v17, v18);
      WarehouseListViewObject__Init_36982840((WarehouseListViewObject_o *)current, mode, v16, 0LL);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v19,
      (const MethodInfo_33CE4F4 *)Method_System_Collections_Generic_List_Enumerator_WarehouseListViewObject__Dispose__);
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

  if ( (byte_4BC5A1C & 1) == 0 )
  {
    sub_1C1ABD4(&WarehouseListViewManager_TypeInfo, method);
    byte_4BC5A1C = 1;
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
    sub_1C1AE30(v4, v5);
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
  __int64 v16; // x2
  __int64 v17; // x3
  __int64 v18; // x4
  struct WarehouseListManager_o *v19; // x8
  WarehouseListViewManager_o *v20; // x22
  __int64 v21; // x2
  __int64 v22; // x3
  __int64 v23; // x4
  struct WarehouseListManager_o *v24; // x8
  Il2CppObject *v25; // x23
  Il2CppObject *v26; // x0
  const MethodInfo *v27; // x3
  const MethodInfo *v28; // x2
  struct WarehouseListManager_o *v29; // x8
  const MethodInfo *v30; // x1
  bool IsSelectEnable; // w21
  _QWORD *v32; // x8
  struct WarehouseListManager_o *v33; // x8
  struct WarehouseListViewManager_o *v34; // x9
  UILabel_o *v35; // x21
  __int64 v36; // x2
  __int64 v37; // x3
  __int64 v38; // x4
  struct WarehouseListManager_o *v39; // x8
  WarehouseListViewManager_o *v40; // x22
  __int64 v41; // x2
  __int64 v42; // x3
  __int64 v43; // x4
  struct WarehouseListManager_o *v44; // x8
  Il2CppObject *v45; // x23
  Il2CppObject *v46; // x0
  const MethodInfo *v47; // x3
  int32_t sendMax; // [xsp+8h] [xbp-38h] BYREF
  int32_t totalSum; // [xsp+Ch] [xbp-34h] BYREF

  v4 = this;
  if ( (byte_4BC5A2A & 1) == 0 )
  {
    sub_1C1ABD4(&int_TypeInfo, selectItem);
    sub_1C1ABD4(&LocalizationManager_TypeInfo, v5);
    sub_1C1ABD4(&Method_WarehouseListViewManager_SelectListView__, v6);
    this = (WarehouseListViewManager_o *)sub_1C1ABD4(&StringLiteral_12610/*"SUM_INFO"*/, v7);
    byte_4BC5A2A = 1;
  }
  if ( !selectItem )
    goto LABEL_34;
  if ( !WarehouseListViewItem__get_IsCanNotSelect(selectItem, (const MethodInfo *)selectItem) )
  {
    if ( ListViewItem__get_IsSelect((ListViewItem_o *)selectItem, 0LL) )
    {
      v11 = Method_WarehouseListViewManager_SelectListView__;
      if ( (*((_BYTE *)Method_WarehouseListViewManager_SelectListView__ + 83) & 2) != 0 )
        v11 = (_QWORD *)sub_1C1ABEC(Method_WarehouseListViewManager_SelectListView__);
      v12 = (System_Reflection_MethodBase_o *)sub_1C1ABB8(v11, v11[4]);
      OverwriteAssetSoundName__PlaySystemSe(v12, 0, 0, 0LL);
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
          this = (WarehouseListViewManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12610/*"SUM_INFO"*/, 0LL);
          v19 = v4->fields.parentManager;
          if ( v19 )
          {
            v20 = this;
            totalSum = v19->fields.totalSum;
            this = (WarehouseListViewManager_o *)j_il2cpp_value_box_0(int_TypeInfo, &totalSum, v16, v17, v18);
            v24 = v4->fields.parentManager;
            if ( v24 )
            {
              v25 = (Il2CppObject *)this;
              sendMax = v24->fields.sendMax;
              v26 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &sendMax, v21, v22, v23);
              this = (WarehouseListViewManager_o *)System_String__Format_63054740((System_String_o *)v20, v25, v26, 0LL);
              if ( selectDoneLabel )
              {
                UILabel__set_text(selectDoneLabel, (System_String_o *)this, 0LL);
                WarehouseListViewManager__ChangeSellEnableRestCnt(v4, 1, selectItem, v27);
                v29 = v4->fields.parentManager;
                if ( v29 )
                {
                  this = v29->fields.baseListViewManager;
                  if ( this )
                  {
                    WarehouseListViewManager__DecrementNumber(this, selectItem->fields.selectNum, v28);
                    ListViewItem__set_IsSelect((ListViewItem_o *)selectItem, 0, 0LL);
LABEL_32:
                    WarehouseListViewManager__RefrashListDisp(v4, v30);
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
      v32 = Method_WarehouseListViewManager_SelectListView__;
      if ( (*((_BYTE *)Method_WarehouseListViewManager_SelectListView__ + 83) & 2) != 0 )
        v32 = (_QWORD *)sub_1C1ABEC(Method_WarehouseListViewManager_SelectListView__);
      v9 = (System_Reflection_MethodBase_o *)sub_1C1ABB8(v32, v32[4]);
      if ( !IsSelectEnable )
        goto LABEL_33;
      OverwriteAssetSoundName__PlaySystemSe(v9, 0, 0, 0LL);
      v33 = v4->fields.parentManager;
      if ( v33 )
      {
        selectItem->fields.selectNum = v33->fields.totalSum;
        ++v4->fields.selectSum;
        v34 = v33->fields.baseListViewManager;
        if ( v34 )
        {
          v33->fields.totalSum = v34->fields.selectSum;
          v35 = v4->fields.selectDoneLabel;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          this = (WarehouseListViewManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12610/*"SUM_INFO"*/, 0LL);
          v39 = v4->fields.parentManager;
          if ( v39 )
          {
            v40 = this;
            totalSum = v39->fields.totalSum;
            this = (WarehouseListViewManager_o *)j_il2cpp_value_box_0(int_TypeInfo, &totalSum, v36, v37, v38);
            v44 = v4->fields.parentManager;
            if ( v44 )
            {
              v45 = (Il2CppObject *)this;
              sendMax = v44->fields.sendMax;
              v46 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &sendMax, v41, v42, v43);
              this = (WarehouseListViewManager_o *)System_String__Format_63054740((System_String_o *)v40, v45, v46, 0LL);
              if ( v35 )
              {
                UILabel__set_text(v35, (System_String_o *)this, 0LL);
                WarehouseListViewManager__ChangeSellEnableRestCnt(v4, 0, selectItem, v47);
                goto LABEL_32;
              }
            }
          }
        }
      }
    }
LABEL_34:
    sub_1C1AE30(this, selectItem);
  }
  v8 = Method_WarehouseListViewManager_SelectListView__;
  if ( (*((_BYTE *)Method_WarehouseListViewManager_SelectListView__ + 83) & 2) != 0 )
    v8 = (_QWORD *)sub_1C1ABEC(Method_WarehouseListViewManager_SelectListView__);
  v9 = (System_Reflection_MethodBase_o *)sub_1C1ABB8(v8, v8[4]);
LABEL_33:
  OverwriteAssetSoundName__PlaySystemSe(v9, 2, 0, 0LL);
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

  if ( (byte_4BC5A2D & 1) == 0 )
  {
    sub_1C1ABD4(&Method_WarehouseListViewManager_SelectListViewChoice__, selectItem);
    byte_4BC5A2D = 1;
  }
  v5 = Method_WarehouseListViewManager_SelectListViewChoice__;
  if ( (*((_BYTE *)Method_WarehouseListViewManager_SelectListViewChoice__ + 83) & 2) != 0 )
    v5 = (_QWORD *)sub_1C1ABEC(Method_WarehouseListViewManager_SelectListViewChoice__);
  v6 = (System_Reflection_MethodBase_o *)sub_1C1ABB8(v5, v5[4]);
  OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0, 0LL);
  if ( !selectItem )
    sub_1C1AE30(v7, v8);
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

  if ( (byte_4BC5A2C & 1) == 0 )
  {
    sub_1C1ABD4(&Method_WarehouseListViewManager_SelectListViewLock__, selectItem);
    byte_4BC5A2C = 1;
  }
  v5 = Method_WarehouseListViewManager_SelectListViewLock__;
  if ( (*((_BYTE *)Method_WarehouseListViewManager_SelectListViewLock__ + 83) & 2) != 0 )
    v5 = (_QWORD *)sub_1C1ABEC(Method_WarehouseListViewManager_SelectListViewLock__);
  v6 = (System_Reflection_MethodBase_o *)sub_1C1ABB8(v5, v5[4]);
  OverwriteAssetSoundName__PlaySystemSe(v6, 11, 0, 0LL);
  if ( !selectItem )
    sub_1C1AE30(v7, v8);
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

  if ( (byte_4BC5A3D & 1) == 0 )
  {
    sub_1C1ABD4(&Method_WarehouseListViewManager_SetDragEnd__, method);
    byte_4BC5A3D = 1;
  }
  v3 = Method_WarehouseListViewManager_SetDragEnd__;
  if ( (*((_BYTE *)Method_WarehouseListViewManager_SetDragEnd__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C1ABEC(Method_WarehouseListViewManager_SetDragEnd__);
  v4 = (System_Reflection_MethodBase_o *)sub_1C1ABB8(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0LL);
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
  *(_OWORD *)&this->fields.dragSelectSum = xmmword_BFA5E0;
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

  if ( (byte_4BC5A3B & 1) == 0 )
  {
    sub_1C1ABD4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, *(_QWORD *)&index);
    sub_1C1ABD4(&UnityEngine_Object_TypeInfo, v7);
    sub_1C1ABD4(&WarehouseListViewItem_TypeInfo, v8);
    sub_1C1ABD4(&WarehouseListViewObject_TypeInfo, v9);
    byte_4BC5A3B = 1;
  }
  itemSortList = (System_Collections_Generic_List_object__o *)this->fields.itemSortList;
  if ( !itemSortList )
    goto LABEL_46;
  itemSortList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                itemSortList,
                                                                index,
                                                                (const MethodInfo_363C5C0 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
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
    sub_1C1AE30(itemSortList, *(_QWORD *)&index);
  v21 = LOBYTE(WarehouseListViewObject_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(itemSortList->klass->vtable._0_Equals.methodPtr) >= (unsigned int)v21
    && (WarehouseListViewObject_c *)itemSortList->klass->_2.typeHierarchy[v21 - 1] == WarehouseListViewObject_TypeInfo )
  {
    WarehouseListViewObject__SetupDisp((WarehouseListViewObject_o *)itemSortList, 0LL);
    return v15;
  }
LABEL_47:
  sub_1C1B0F0(itemSortList);
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
  if ( (byte_4BC5A3A & 1) == 0 )
  {
    sub_1C1ABD4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, *(_QWORD *)&startIndex);
    sub_1C1ABD4(&UnityEngine_Object_TypeInfo, v7);
    sub_1C1ABD4(&WarehouseListViewItem_TypeInfo, v8);
    this = (WarehouseListViewManager_o *)sub_1C1ABD4(&WarehouseListViewObject_TypeInfo, v9);
    byte_4BC5A3A = 1;
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
        sub_1C1AE30(this, *(_QWORD *)&startIndex);
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
                                                 (const MethodInfo_363C5C0 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
          if ( !this )
            goto LABEL_63;
          *(_QWORD *)&startIndex = WarehouseListViewItem_TypeInfo;
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
                sub_1C1B0F0(this);
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
  int32_t v4; // w20
  bool v6; // w21
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  System_Collections_Generic_List_object__o *itemSortList; // x0
  int size; // w22
  int32_t v12; // w21
  __int64 methodPtr_low; // x9
  UnityEngine_Object_o *scrollView; // x20

  v4 = startIndex;
  v6 = isDragSelect;
  if ( (byte_4BC5A3C & 1) == 0 )
  {
    sub_1C1ABD4(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, *(_QWORD *)&startIndex);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v7);
    sub_1C1ABD4(&UnityEngine_Object_TypeInfo, v8);
    sub_1C1ABD4(&WarehouseListViewItem_TypeInfo, v9);
    byte_4BC5A3C = 1;
  }
  *(_OWORD *)&this->fields.dragSelectSum = xmmword_BFA5E0;
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
                                                                    (const MethodInfo_363C5C0 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
      if ( !itemSortList )
        goto LABEL_19;
      *(_QWORD *)&startIndex = WarehouseListViewItem_TypeInfo;
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
    sub_1C1B0F0(itemSortList);
LABEL_19:
    sub_1C1AE30(itemSortList, *(_QWORD *)&startIndex);
  }
LABEL_12:
  WarehouseListViewManager__SetDragSelectItem(this, v4, v4, method);
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

  if ( (byte_4BC5A33 & 1) == 0 )
  {
    sub_1C1ABD4(&StringLiteral_17791/*"btn_filter_on"*/, method);
    sub_1C1ABD4(&StringLiteral_17790/*"btn_filter"*/, v3);
    byte_4BC5A33 = 1;
  }
  sort = this->fields.sort;
  if ( !sort
    || (filterSprite = this->fields.filterSprite,
        sort = (ListViewSort_o *)ListViewSort__CheckFilterDefaultAll(sort, -1, 0LL),
        !filterSprite) )
  {
    sub_1C1AE30(sort, method);
  }
  v6 = (System_String_o **)&StringLiteral_17790/*"btn_filter"*/;
  if ( ((unsigned __int8)sort & 1) == 0 )
    v6 = (System_String_o **)&StringLiteral_17791/*"btn_filter_on"*/;
  UISprite__set_spriteName(filterSprite, *v6, 0LL);
}


void __fastcall WarehouseListViewManager__SetMode(
        WarehouseListViewManager_o *this,
        int32_t mode,
        WarehouseListViewManager_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  const MethodInfo *v10; // x2

  this->fields.callbackFunc = callback;
  sub_1C1AB78(
    (PartyOrganizationUtility_o *)&this->fields.callbackFunc,
    (int64_t)callback,
    (int64_t)callback,
    (int32_t)method,
    v4,
    v5,
    v6,
    v7);
  WarehouseListViewManager__SetMode_36971284(this, mode, v10);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarehouseListViewManager__SetMode_36971284(
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
  WarehouseListViewItem_o *v16; // x20
  __int64 v17; // x9
  const MethodInfo *v18; // x1
  _BOOL8 v19; // x0
  __int64 v20; // x1
  struct WarehouseListManager_o *v21; // x8
  struct WarehouseListViewManager_o *v22; // x9
  UILabel_o *v23; // x21
  System_String_o *v24; // x0
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x3
  __int64 v28; // x4
  struct WarehouseListManager_o *v29; // x8
  System_String_o *v30; // x22
  __int64 v31; // x0
  __int64 v32; // x1
  __int64 v33; // x2
  __int64 v34; // x3
  __int64 v35; // x4
  struct WarehouseListManager_o *v36; // x8
  Il2CppObject *v37; // x23
  Il2CppObject *v38; // x2
  System_String_o *v39; // x0
  __int64 v40; // x0
  __int64 v41; // x1
  const MethodInfo *v42; // x2
  struct WarehouseListManager_o *v43; // x8
  WarehouseListViewManager_o *v44; // x0
  char v45; // w24
  _BOOL8 v46; // x0
  __int64 v47; // x1
  WarehouseListViewItem_o *current; // x20
  __int64 methodPtr_low; // x9
  const MethodInfo *v50; // x1
  _BOOL8 CanNotSelect; // x0
  __int64 v52; // x1
  struct WarehouseListManager_o *parentManager; // x8
  struct WarehouseListViewManager_o *baseListViewManager; // x9
  UILabel_o *selectDoneLabel; // x21
  System_String_o *v56; // x0
  __int64 v57; // x1
  __int64 v58; // x2
  __int64 v59; // x3
  __int64 v60; // x4
  struct WarehouseListManager_o *v61; // x8
  System_String_o *v62; // x22
  __int64 v63; // x0
  __int64 v64; // x1
  __int64 v65; // x2
  __int64 v66; // x3
  __int64 v67; // x4
  struct WarehouseListManager_o *v68; // x8
  Il2CppObject *v69; // x23
  Il2CppObject *v70; // x2
  System_String_o *v71; // x0
  __int64 v72; // x0
  __int64 v73; // x1
  const MethodInfo *v74; // x2
  struct WarehouseListManager_o *v75; // x8
  WarehouseListViewManager_o *v76; // x0
  const MethodInfo *v77; // x1
  const MethodInfo *v78; // x2
  int32_t v79; // w1
  const MethodInfo *v80; // x1
  int32_t sendMax; // [xsp+4h] [xbp-9Ch] BYREF
  System_Collections_Generic_List_Enumerator_object__o v82; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v83; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_4BC5A22 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__, *(_QWORD *)&mode);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v5);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v6);
    sub_1C1ABD4(&int_TypeInfo, v7);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v8);
    sub_1C1ABD4(&LocalizationManager_TypeInfo, v9);
    sub_1C1ABD4(&WarehouseListViewItem_TypeInfo, v10);
    sub_1C1ABD4(&StringLiteral_12610/*"SUM_INFO"*/, v11);
    byte_4BC5A22 = 1;
  }
  memset(&v83, 0, sizeof(v83));
  this->fields.initMode = mode;
  this->fields.callbackCount = ListViewManager__get_ObjectSum((ListViewManager_o *)this, 0LL);
  ListViewManager__set_IsInput((ListViewManager_o *)this, mode == 2, 0LL);
  if ( (unsigned int)(mode - 1) < 2 )
  {
    itemList = this->fields.itemList;
    if ( itemList )
    {
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v82,
        (System_Collections_Generic_List_object__o *)itemList,
        (const MethodInfo_363D388 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
      v83 = v82;
      v45 = 0;
      while ( 1 )
      {
        v46 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v83,
                (const MethodInfo_33CE4F8 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
        if ( !v46 )
          break;
        current = (WarehouseListViewItem_o *)v83.fields._current;
        if ( !v83.fields._current )
          goto LABEL_50;
        methodPtr_low = LOBYTE(WarehouseListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(v83.fields._current->klass->vtable[0].methodPtr) < (unsigned int)methodPtr_low
          || (WarehouseListViewItem_c *)v83.fields._current->klass->_2.typeHierarchy[methodPtr_low - 1] != WarehouseListViewItem_TypeInfo )
        {
          sub_1C1B0F0(v83.fields._current);
LABEL_50:
          sub_1C1AE30(v46, v47);
        }
        if ( ListViewItem__get_IsSelect((ListViewItem_o *)v83.fields._current, 0LL) )
        {
          CanNotSelect = WarehouseListViewItem__get_IsCanNotSelect(current, v50);
          if ( CanNotSelect )
          {
            parentManager = this->fields.parentManager;
            --this->fields.selectSum;
            if ( !parentManager )
              sub_1C1AE30(CanNotSelect, v52);
            baseListViewManager = parentManager->fields.baseListViewManager;
            if ( !baseListViewManager )
              sub_1C1AE30(CanNotSelect, v52);
            parentManager->fields.totalSum = baseListViewManager->fields.selectSum;
            selectDoneLabel = this->fields.selectDoneLabel;
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            v56 = LocalizationManager__Get((System_String_o *)StringLiteral_12610/*"SUM_INFO"*/, 0LL);
            v61 = this->fields.parentManager;
            if ( !v61 )
              sub_1C1AE30(v56, v57);
            v62 = v56;
            LODWORD(v82.fields._list) = v61->fields.totalSum;
            v63 = j_il2cpp_value_box_0(int_TypeInfo, &v82, v58, v59, v60);
            v68 = this->fields.parentManager;
            if ( !v68 )
              sub_1C1AE30(v63, v64);
            v69 = (Il2CppObject *)v63;
            sendMax = v68->fields.sendMax;
            v70 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &sendMax, v65, v66, v67);
            v71 = System_String__Format_63054740(v62, v69, v70, 0LL);
            if ( !selectDoneLabel )
              sub_1C1AE30(v71, v71);
            UILabel__set_text(selectDoneLabel, v71, 0LL);
            v75 = this->fields.parentManager;
            if ( !v75 )
              sub_1C1AE30(v72, v73);
            v76 = v75->fields.baseListViewManager;
            if ( !v76 )
              sub_1C1AE30(0LL, v73);
            WarehouseListViewManager__DecrementNumber(v76, current->fields.selectNum, v74);
            ListViewItem__set_IsSelect((ListViewItem_o *)current, 0, 0LL);
            v45 = 1;
          }
        }
      }
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v83,
        (const MethodInfo_33CE4F4 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
      if ( (v45 & 1) != 0 )
        WarehouseListViewManager__RefrashListDisp(this, v77);
      if ( this->fields.isInput )
        v79 = 3;
      else
        v79 = 2;
      goto LABEL_47;
    }
LABEL_60:
    sub_1C1AE30(itemList, v12);
  }
  if ( mode != 3 )
    return;
  itemList = this->fields.itemList;
  if ( !itemList )
    goto LABEL_60;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v82,
    (System_Collections_Generic_List_object__o *)itemList,
    (const MethodInfo_363D388 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  v83 = v82;
  while ( 1 )
  {
    v14 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v83,
            (const MethodInfo_33CE4F8 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    if ( !v14 )
      break;
    v16 = (WarehouseListViewItem_o *)v83.fields._current;
    if ( !v83.fields._current )
      goto LABEL_52;
    v17 = LOBYTE(WarehouseListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(v83.fields._current->klass->vtable[0].methodPtr) < (unsigned int)v17
      || (WarehouseListViewItem_c *)v83.fields._current->klass->_2.typeHierarchy[v17 - 1] != WarehouseListViewItem_TypeInfo )
    {
      sub_1C1B0F0(v83.fields._current);
LABEL_52:
      sub_1C1AE30(v14, v15);
    }
    if ( ListViewItem__get_IsSelect((ListViewItem_o *)v83.fields._current, 0LL) )
    {
      v19 = WarehouseListViewItem__get_IsCanNotSelect(v16, v18);
      if ( v19 )
      {
        v21 = this->fields.parentManager;
        --this->fields.selectSum;
        if ( !v21 )
          sub_1C1AE30(v19, v20);
        v22 = v21->fields.baseListViewManager;
        if ( !v22 )
          sub_1C1AE30(v19, v20);
        v21->fields.totalSum = v22->fields.selectSum;
        v23 = this->fields.selectDoneLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v24 = LocalizationManager__Get((System_String_o *)StringLiteral_12610/*"SUM_INFO"*/, 0LL);
        v29 = this->fields.parentManager;
        if ( !v29 )
          sub_1C1AE30(v24, v25);
        v30 = v24;
        LODWORD(v82.fields._list) = v29->fields.totalSum;
        v31 = j_il2cpp_value_box_0(int_TypeInfo, &v82, v26, v27, v28);
        v36 = this->fields.parentManager;
        if ( !v36 )
          sub_1C1AE30(v31, v32);
        v37 = (Il2CppObject *)v31;
        sendMax = v36->fields.sendMax;
        v38 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &sendMax, v33, v34, v35);
        v39 = System_String__Format_63054740(v30, v37, v38, 0LL);
        if ( !v23 )
          sub_1C1AE30(v39, v39);
        UILabel__set_text(v23, v39, 0LL);
        v43 = this->fields.parentManager;
        if ( !v43 )
          sub_1C1AE30(v40, v41);
        v44 = v43->fields.baseListViewManager;
        if ( !v44 )
          sub_1C1AE30(0LL, v41);
        WarehouseListViewManager__DecrementNumber(v44, v16->fields.selectNum, v42);
        ListViewItem__set_IsSelect((ListViewItem_o *)v16, 0, 0LL);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v83,
    (const MethodInfo_33CE4F4 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
  WarehouseListViewManager__RefrashListDisp(this, v80);
  v79 = 4;
LABEL_47:
  WarehouseListViewManager__RequestListObject_36972860(this, v79, v78);
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
  if ( (byte_4BC5A21 & 1) == 0 )
  {
    this = (WarehouseListViewManager_o *)sub_1C1ABD4(&WarehouseListViewObject_TypeInfo, obj);
    byte_4BC5A21 = 1;
  }
  if ( !obj
    || (methodPtr_low = LOBYTE(WarehouseListViewObject_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(obj->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low)
    || (WarehouseListViewObject_c *)obj->klass->_2.typeHierarchy[methodPtr_low - 1] != WarehouseListViewObject_TypeInfo )
  {
    sub_1C1AE30(this, obj);
  }
  if ( v5->fields.initMode == 2 )
    v7 = 3;
  else
    v7 = 2;
  WarehouseListViewObject__Init_36981844((WarehouseListViewObject_o *)obj, v7, 0LL);
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
  System_String_o **v18; // x9
  System_String_o **v19; // x10
  System_String_o **v20; // x8
  System_String_o **v21; // x8
  UnityEngine_Object_o *bonusFilterKindLabel; // x20
  UILabel_o *v23; // x20

  if ( (byte_4BC5A36 & 1) == 0 )
  {
    sub_1C1ABD4(&UnityEngine_Object_TypeInfo, method);
    sub_1C1ABD4(&StringLiteral_17821/*"btn_sort_up"*/, v3);
    sub_1C1ABD4(&StringLiteral_17912/*"btn_txt_up"*/, v4);
    sub_1C1ABD4(&StringLiteral_17865/*"btn_txt_new"*/, v5);
    sub_1C1ABD4(&StringLiteral_17855/*"btn_txt_down"*/, v6);
    sub_1C1ABD4(&StringLiteral_17872/*"btn_txt_old"*/, v7);
    sub_1C1ABD4(&StringLiteral_17818/*"btn_sort_down"*/, v8);
    byte_4BC5A36 = 1;
  }
  sortKindLabel = (UnityEngine_Object_o *)this->fields.sortKindLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(sortKindLabel, 0LL, 0LL) )
  {
    sort = this->fields.sort;
    if ( !sort )
      goto LABEL_41;
    v12 = this->fields.sortKindLabel;
    sort = (ListViewSort_o *)ListViewSort__GetSortKindButtonText(sort, 0, 0LL);
    if ( !v12 )
      goto LABEL_41;
    UILabel__set_text(v12, (System_String_o *)sort, 0LL);
  }
  sortOrderSprite = (UnityEngine_Object_o *)this->fields.sortOrderSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  sort = (ListViewSort_o *)UnityEngine_Object__op_Inequality(sortOrderSprite, 0LL, 0LL);
  if ( ((unsigned __int8)sort & 1) != 0 )
  {
    v14 = this->fields.sort;
    if ( !v14 )
      goto LABEL_41;
    sortKind = v14->fields.sortKind;
    if ( sortKind == 11 || sortKind == 1 )
    {
      sort = (ListViewSort_o *)this->fields.sortExplanationSprite;
      if ( !sort )
        goto LABEL_41;
      v16 = (System_String_o **)(v14->fields.isAscendingOrder ? &StringLiteral_17872/*"btn_txt_old"*/ : &StringLiteral_17865/*"btn_txt_new"*/);
      UISprite__set_spriteName((UISprite_o *)sort, *v16, 0LL);
      v17 = this->fields.sort;
      if ( !v17 )
        goto LABEL_41;
      sort = (ListViewSort_o *)this->fields.sortOrderSprite;
      if ( !sort )
        goto LABEL_41;
      v18 = (System_String_o **)&StringLiteral_17818/*"btn_sort_down"*/;
      v19 = (System_String_o **)&StringLiteral_17821/*"btn_sort_up"*/;
    }
    else
    {
      sort = (ListViewSort_o *)this->fields.sortExplanationSprite;
      if ( !sort )
        goto LABEL_41;
      v20 = (System_String_o **)(v14->fields.isAscendingOrder ? &StringLiteral_17912/*"btn_txt_up"*/ : &StringLiteral_17855/*"btn_txt_down"*/);
      UISprite__set_spriteName((UISprite_o *)sort, *v20, 0LL);
      v17 = this->fields.sort;
      if ( !v17 )
        goto LABEL_41;
      sort = (ListViewSort_o *)this->fields.sortOrderSprite;
      if ( !sort )
        goto LABEL_41;
      v18 = (System_String_o **)&StringLiteral_17821/*"btn_sort_up"*/;
      v19 = (System_String_o **)&StringLiteral_17818/*"btn_sort_down"*/;
    }
    if ( v17->fields.isAscendingOrder )
      v21 = v18;
    else
      v21 = v19;
    UISprite__set_spriteName((UISprite_o *)sort, *v21, 0LL);
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
      v23 = this->fields.bonusFilterKindLabel;
      sort = (ListViewSort_o *)ListViewSort__GetBonusFilterButtonText(
                                 sort,
                                 this->fields.alignedBonusFilterInfos,
                                 this->fields.isQuestStart,
                                 0LL);
      if ( v23 )
      {
        UILabel__set_text(v23, (System_String_o *)sort, 0LL);
        return;
      }
LABEL_41:
      sub_1C1AE30(sort, v10);
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
  __int64 v11; // x1
  System_Collections_Generic_List_object__o *v12; // x8
  System_Collections_Generic_List_object__c *klass; // x23
  Il2CppObject *v14; // x21
  _BOOL8 v15; // x0
  __int64 v16; // x1
  Il2CppObject *current; // x20
  WarehouseListViewItem_c *v18; // x1
  __int64 methodPtr_low; // x9
  Il2CppClass *v20; // x8
  Il2CppType byval_arg; // q0
  __int64 v22; // x1
  UserServantEntity_o *v23; // x0
  __int64 v24; // x1
  _BOOL4 IsLeave; // w8
  bool v26; // w8
  Il2CppObject *v27; // x26
  UserServantEntity_o *v28; // x0
  _BOOL8 IsEventJoin; // x0
  __int64 v30; // x1
  UserServantEntity_o *v31; // x0
  UserServantEntity_o *v32; // x0
  UserServantEntity_o *v33; // x0
  Il2CppObject *v34; // [xsp+8h] [xbp-C8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v35; // [xsp+10h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v36; // [xsp+30h] [xbp-A0h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v37; // [xsp+50h] [xbp-80h] BYREF

  if ( (byte_4BC5A42 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__, isPushMode);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v5);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v6);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v7);
    sub_1C1ABD4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v8);
    sub_1C1ABD4(&WarehouseListViewItem_TypeInfo, v9);
    byte_4BC5A42 = 1;
  }
  memset(&v37, 0, sizeof(v37));
  SelfUserGame = (System_Collections_Generic_List_object__o *)UserGameMaster__getSelfUserGame(0LL);
  if ( !SelfUserGame
    || (v12 = SelfUserGame, (SelfUserGame = (System_Collections_Generic_List_object__o *)this->fields.itemList) == 0LL) )
  {
    sub_1C1AE30(SelfUserGame, v11);
  }
  klass = v12[3].klass;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v36,
    SelfUserGame,
    (const MethodInfo_363D388 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  v14 = 0LL;
  v34 = 0LL;
  *(_OWORD *)&v37.fields._list = *(_OWORD *)&v36.fields.currentCryptoKey;
  v37.fields._current = (Il2CppObject *)v36.fields.fakeValue;
  while ( 1 )
  {
    v15 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v37,
            (const MethodInfo_33CE4F8 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    if ( !v15 )
      break;
    current = v37.fields._current;
    if ( !v37.fields._current )
      goto LABEL_39;
    v18 = WarehouseListViewItem_TypeInfo;
    methodPtr_low = LOBYTE(WarehouseListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(v37.fields._current->klass->vtable[0].methodPtr) < (unsigned int)methodPtr_low
      || (WarehouseListViewItem_c *)v37.fields._current->klass->_2.typeHierarchy[methodPtr_low - 1] != WarehouseListViewItem_TypeInfo )
    {
      sub_1C1B0F0(v37.fields._current);
LABEL_39:
      sub_1C1AE30(v15, v16);
    }
    v20 = v37.fields._current[7].klass;
    BYTE3(v37.fields._current[10].klass) = isPushMode;
    if ( !v20 )
      sub_1C1AE30(v15, v18);
    byval_arg = v20->_1.byval_arg;
    *(_OWORD *)&v36.fields.currentCryptoKey = *(_OWORD *)&v20->_1.name;
    *(Il2CppType *)&v36.fields.fakeValue = byval_arg;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    v35 = v36;
    BYTE4(current[10].klass) = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47559652(&v35, 0LL) == (_QWORD)klass;
    if ( isPushMode )
    {
      v23 = (UserServantEntity_o *)current[7].klass;
      if ( !v23 )
        sub_1C1AE30(0LL, v22);
      IsLeave = UserServantEntity__IsLeave(v23, 0LL);
      if ( !IsLeave )
        v14 = current;
      if ( IsLeave )
      {
        v26 = 0;
        v27 = current;
      }
      else
      {
        v28 = (UserServantEntity_o *)current[7].klass;
        if ( !v28 )
          sub_1C1AE30(0LL, v24);
        IsEventJoin = UserServantEntity__IsEventJoin(v28, 0LL);
        if ( IsEventJoin )
          v27 = v34;
        else
          v27 = v14;
        if ( IsEventJoin )
        {
          v26 = 0;
          v27 = current;
        }
        else
        {
          v31 = (UserServantEntity_o *)current[7].klass;
          if ( !v31 )
            sub_1C1AE30(0LL, v30);
          IsEventJoin = UserServantEntity__IsCombineMaterial(v31, 0LL);
          if ( IsEventJoin )
          {
            v26 = 0;
            v27 = v14;
          }
          else
          {
            v32 = (UserServantEntity_o *)current[7].klass;
            if ( !v32 )
              sub_1C1AE30(0LL, v30);
            IsEventJoin = UserServantEntity__IsStatusUp(v32, 0LL);
            if ( IsEventJoin )
            {
              v26 = 0;
            }
            else
            {
              v33 = (UserServantEntity_o *)current[7].klass;
              if ( !v33 )
                sub_1C1AE30(0LL, v30);
              IsEventJoin = UserServantEntity__IsMaterialTd(v33, 0LL);
              v26 = !IsEventJoin;
            }
          }
          v34 = current;
        }
        if ( !v27 )
          sub_1C1AE30(IsEventJoin, v30);
      }
      BYTE5(v27[10].klass) = v26;
    }
    else
    {
      BYTE5(current[10].klass) = 1;
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v37,
    (const MethodInfo_33CE4F4 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
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

  if ( (byte_4BC5A14 & 1) == 0 )
  {
    sub_1C1ABD4(&WarehouseListViewManager_CallbackFunc_TypeInfo, value);
    byte_4BC5A14 = 1;
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
    v8 = sub_1C560C4(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1C1B0F0(v7);
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
  System_Collections_Generic_List_object__o *v11; // x19
  __int64 v12; // x1
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  Il2CppObject *current; // x21
  _BOOL8 v15; // x0
  __int64 v16; // x1
  Il2CppObject *Component_object; // x0
  __int64 v18; // x1
  Il2CppObject *v19; // x21
  ListViewItem_o *Item; // x0
  __int64 v21; // x1
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7
  _BOOL8 v28; // x0
  __int64 v29; // x1
  struct System_Object_array *items; // x8
  _QWORD *v31; // x9
  __int64 size; // x10
  Il2CppClass **v33; // x0
  System_Collections_Generic_List_Enumerator_object__o v35; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v36; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_4BC5A19 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, method);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v3);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v4);
    sub_1C1ABD4(&Method_UnityEngine_GameObject_GetComponent_WarehouseListViewObject___, v5);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_WarehouseListViewObject__Add__, v6);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v7);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_WarehouseListViewObject___ctor__, v8);
    sub_1C1ABD4(&System_Collections_Generic_List_WarehouseListViewObject__TypeInfo, v9);
    sub_1C1ABD4(&UnityEngine_Object_TypeInfo, v10);
    byte_4BC5A19 = 1;
  }
  memset(&v36, 0, sizeof(v36));
  v11 = (System_Collections_Generic_List_object__o *)sub_1C1AE20(System_Collections_Generic_List_WarehouseListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_363C05C *)Method_System_Collections_Generic_List_WarehouseListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_1C1AE30(0LL, v12);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v35,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_363D388 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v36 = v35;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v36,
            (const MethodInfo_33CE4F8 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v36.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v15 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v15 )
    {
      if ( !current )
        sub_1C1AE30(v15, v16);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_2FEFBC0 *)Method_UnityEngine_GameObject_GetComponent_WarehouseListViewObject___);
      v19 = Component_object;
      if ( !Component_object )
        sub_1C1AE30(0LL, v18);
      Item = (ListViewItem_o *)WarehouseListViewObject__GetItem((WarehouseListViewObject_o *)Component_object, 0LL);
      if ( !Item )
        sub_1C1AE30(0LL, v21);
      if ( Item->fields.isTermination )
      {
        v28 = ListViewManager__ClippingItem_41959744((ListViewManager_o *)this, Item, 0LL);
        if ( v28 )
        {
          if ( !v11 )
            sub_1C1AE30(v28, v29);
          items = v11->fields._items;
          v31 = Method_System_Collections_Generic_List_WarehouseListViewObject__Add__;
          ++v11->fields._version;
          if ( !items )
            sub_1C1AE30(v28, v29);
          size = v11->fields._size;
          if ( (unsigned int)size < items->max_length )
            goto LABEL_17;
LABEL_21:
          System_Collections_Generic_List_object___AddWithResize(
            v11,
            v19,
            *(const MethodInfo_363C890 **)(*(_QWORD *)(v31[4] + 192LL) + 112LL));
        }
      }
      else
      {
        if ( !v11 )
          sub_1C1AE30(Item, v21);
        items = v11->fields._items;
        v31 = Method_System_Collections_Generic_List_WarehouseListViewObject__Add__;
        ++v11->fields._version;
        if ( !items )
          sub_1C1AE30(Item, v21);
        size = v11->fields._size;
        if ( (unsigned int)size >= items->max_length )
          goto LABEL_21;
LABEL_17:
        v33 = &items->obj.klass + size;
        v11->fields._size = size + 1;
        v33[4] = (Il2CppClass *)v19;
        sub_1C1AB78((PartyOrganizationUtility_o *)(v33 + 4), (int64_t)v19, v22, v23, v24, v25, v26, v27);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v36,
    (const MethodInfo_33CE4F4 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
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
  System_Collections_Generic_List_object__o *v11; // x19
  __int64 v12; // x1
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  Il2CppObject *current; // x20
  _BOOL8 v15; // x0
  __int64 v16; // x1
  Il2CppObject *Component_object; // x0
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  int64_t v24; // x1
  struct System_Object_array *items; // x8
  _QWORD *v26; // x9
  __int64 size; // x10
  Il2CppClass **v28; // x0
  System_Collections_Generic_List_Enumerator_object__o v30; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v31; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4BC5A18 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, method);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v3);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v4);
    sub_1C1ABD4(&Method_UnityEngine_GameObject_GetComponent_WarehouseListViewObject___, v5);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_WarehouseListViewObject__Add__, v6);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v7);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_WarehouseListViewObject___ctor__, v8);
    sub_1C1ABD4(&System_Collections_Generic_List_WarehouseListViewObject__TypeInfo, v9);
    sub_1C1ABD4(&UnityEngine_Object_TypeInfo, v10);
    byte_4BC5A18 = 1;
  }
  memset(&v31, 0, sizeof(v31));
  v11 = (System_Collections_Generic_List_object__o *)sub_1C1AE20(System_Collections_Generic_List_WarehouseListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_363C05C *)Method_System_Collections_Generic_List_WarehouseListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_1C1AE30(0LL, v12);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v30,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_363D388 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v31 = v30;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v31,
            (const MethodInfo_33CE4F8 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v31.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v15 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v15 )
    {
      if ( !current )
        sub_1C1AE30(v15, v16);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_2FEFBC0 *)Method_UnityEngine_GameObject_GetComponent_WarehouseListViewObject___);
      v24 = (int64_t)Component_object;
      if ( !v11 )
        sub_1C1AE30(Component_object, Component_object);
      items = v11->fields._items;
      v26 = Method_System_Collections_Generic_List_WarehouseListViewObject__Add__;
      ++v11->fields._version;
      if ( !items )
        sub_1C1AE30(Component_object, Component_object);
      size = v11->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v11,
          Component_object,
          *(const MethodInfo_363C890 **)(*(_QWORD *)(v26[4] + 192LL) + 112LL));
      }
      else
      {
        v28 = &items->obj.klass + size;
        v11->fields._size = size + 1;
        v28[4] = (Il2CppClass *)v24;
        sub_1C1AB78((PartyOrganizationUtility_o *)(v28 + 4), v24, v18, v19, v20, v21, v22, v23);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v31,
    (const MethodInfo_33CE4F4 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
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

  if ( (byte_4BC5A15 & 1) == 0 )
  {
    sub_1C1ABD4(&WarehouseListViewManager_CallbackFunc_TypeInfo, value);
    byte_4BC5A15 = 1;
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
    v8 = sub_1C560C4(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1C1B0F0(v7);
  WarehouseListViewManager__DeleteContinueData(v10);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarehouseListViewManager_CallbackFunc___ctor(
        WarehouseListViewManager_CallbackFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v8; // x8
  __int64 v10; // x21
  int v12; // w22
  struct System_Reflection_MethodInfo_o *v13; // x9
  __int64 v14; // x0

  v8 = *(_QWORD *)(*(_QWORD *)&method + 8LL);
  *(_QWORD *)&this->fields.extra_arg = *(_QWORD *)&method;
  v10 = *(_QWORD *)&method;
  *(_QWORD *)&this->fields.method_ptr = v8;
  *(_QWORD *)&this->fields.method = object;
  sub_1C1AB78(
    (PartyOrganizationUtility_o *)&this->fields.method,
    (int64_t)object,
    *(int64_t *)&method,
    (int32_t)a4,
    v4,
    v5,
    v6,
    v7);
  v12 = *(unsigned __int8 *)(v10 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1C1AC94(v10) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_1C1AE4C(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1C1ACFC(v14, 0LL);
    }
    goto LABEL_5;
  }
  if ( v12 != 2 )
  {
LABEL_5:
    v13 = *(struct System_Reflection_MethodInfo_o **)&this->fields.method;
    this->fields.m_target = *(Il2CppObject **)&this->fields.method_ptr;
    this->fields.original_method_info = v13;
    goto LABEL_6;
  }
  this->fields.m_target = (Il2CppObject *)sub_1A5A99C;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_1A5A944;
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
  if ( (byte_4BC5A45 & 1) == 0 )
  {
    sub_1C1ABD4(&WarehouseListViewManager_ResultKind_TypeInfo, *(_QWORD *)&resultKind);
    byte_4BC5A45 = 1;
  }
  v11[2] = 0LL;
  v11[0] = j_il2cpp_value_box_0(WarehouseListViewManager_ResultKind_TypeInfo, &v12, item, callback, object);
  v11[1] = (__int64)item;
  return (System_IAsyncResult_o *)sub_1C1AB88(this, v11, callback, object);
}


void __fastcall WarehouseListViewManager_CallbackFunc__EndInvoke(
        WarehouseListViewManager_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C1AB8C(result, 0LL, method);
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