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
  __int64 v17; // x3
  __int64 v18; // x4
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
  __int64 v30; // x1
  __int64 v31; // x2
  __int64 v32; // x3
  __int64 v33; // x4
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
  __int64 v45; // x1
  __int64 v46; // x2
  __int64 v47; // x3
  __int64 v48; // x4
  ListViewSort_o *v49; // x20
  struct WarehouseListViewManager_StaticFields *v50; // x0
  System_String_array **v51; // x2
  System_String_array **v52; // x3
  System_Boolean_array **v53; // x4
  System_Int32_array **v54; // x5
  System_Int32_array *v55; // x6
  System_Int32_array *v56; // x7
  System_String_o *v57; // x19
  System_String_o *v58; // x0
  System_String_o *v59; // x19
  __int64 v60; // x1
  __int64 v61; // x2
  __int64 v62; // x3
  __int64 v63; // x4
  ListViewSort_o *v64; // x20
  struct WarehouseListViewManager_StaticFields *v65; // x0
  System_String_array **v66; // x2
  System_String_array **v67; // x3
  System_Boolean_array **v68; // x4
  System_Int32_array **v69; // x5
  System_Int32_array *v70; // x6
  System_Int32_array *v71; // x7
  int v72; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_40FA9CE & 1) == 0 )
  {
    sub_B16FFC(&ListViewSort_TypeInfo, v1);
    sub_B16FFC(&WarehouseListViewManager_TypeInfo, v8);
    sub_B16FFC(&StringLiteral_15364, v9);
    byte_40FA9CE = 1;
  }
  static_fields = (BattleServantConfConponent_o *)WarehouseListViewManager_TypeInfo->static_fields;
  v11 = (System_Int32_array **)StringLiteral_15364;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_15364;
  sub_B16F98(static_fields, v11, v2, v3, v4, v5, v6, v7);
  SORT_SAVE_KEY = WarehouseListViewManager_TypeInfo->static_fields->SORT_SAVE_KEY;
  v72 = 1;
  v13 = System_Int32__ToString((int32_t)&v72, 0LL);
  v14 = System_String__Concat_43743732(SORT_SAVE_KEY, v13, 0LL);
  v19 = (ListViewSort_o *)sub_B170CC(ListViewSort_TypeInfo, v15, v16, v17, v18);
  ListViewSort___ctor_30208480(v19, v14, 3, 0, 0LL);
  v20 = WarehouseListViewManager_TypeInfo->static_fields;
  v20->servantSortInfo = v19;
  sub_B16F98(
    (BattleServantConfConponent_o *)&v20->servantSortInfo,
    (System_Int32_array **)v19,
    v21,
    v22,
    v23,
    v24,
    v25,
    v26);
  v27 = WarehouseListViewManager_TypeInfo->static_fields->SORT_SAVE_KEY;
  v72 = 2;
  v28 = System_Int32__ToString((int32_t)&v72, 0LL);
  v29 = System_String__Concat_43743732(v27, v28, 0LL);
  v34 = (ListViewSort_o *)sub_B170CC(ListViewSort_TypeInfo, v30, v31, v32, v33);
  ListViewSort___ctor_30208480(v34, v29, 3, 0, 0LL);
  v35 = WarehouseListViewManager_TypeInfo->static_fields;
  v35->servantEquipSortInfo = v34;
  sub_B16F98(
    (BattleServantConfConponent_o *)&v35->servantEquipSortInfo,
    (System_Int32_array **)v34,
    v36,
    v37,
    v38,
    v39,
    v40,
    v41);
  v42 = WarehouseListViewManager_TypeInfo->static_fields->SORT_SAVE_KEY;
  v72 = 3;
  v43 = System_Int32__ToString((int32_t)&v72, 0LL);
  v44 = System_String__Concat_43743732(v42, v43, 0LL);
  v49 = (ListViewSort_o *)sub_B170CC(ListViewSort_TypeInfo, v45, v46, v47, v48);
  ListViewSort___ctor_30208480(v49, v44, 3, 0, 0LL);
  v50 = WarehouseListViewManager_TypeInfo->static_fields;
  v50->servantWarehouseSortInfo = v49;
  sub_B16F98(
    (BattleServantConfConponent_o *)&v50->servantWarehouseSortInfo,
    (System_Int32_array **)v49,
    v51,
    v52,
    v53,
    v54,
    v55,
    v56);
  v57 = WarehouseListViewManager_TypeInfo->static_fields->SORT_SAVE_KEY;
  v72 = 4;
  v58 = System_Int32__ToString((int32_t)&v72, 0LL);
  v59 = System_String__Concat_43743732(v57, v58, 0LL);
  v64 = (ListViewSort_o *)sub_B170CC(ListViewSort_TypeInfo, v60, v61, v62, v63);
  ListViewSort___ctor_30208480(v64, v59, 3, 0, 0LL);
  v65 = WarehouseListViewManager_TypeInfo->static_fields;
  v65->servantEquipWarehouseSortInfo = v64;
  sub_B16F98(
    (BattleServantConfConponent_o *)&v65->servantEquipWarehouseSortInfo,
    (System_Int32_array **)v64,
    v66,
    v67,
    v68,
    v69,
    v70,
    v71);
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
  *(_OWORD *)&this->fields.dragSelectSum = xmmword_31369F0;
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
  struct System_Collections_Generic_List_ListViewItem__o *itemSortList; // x20
  ListViewItem_o *v7; // x0
  __int64 v8; // x9
  WarehouseListViewManager_o *v9; // x0
  const MethodInfo *v10; // x1

  if ( (byte_40FA9CA & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, *(_QWORD *)&index);
    sub_B16FFC(&WarehouseListViewItem_TypeInfo, v5);
    byte_40FA9CA = 1;
  }
  itemSortList = this->fields.itemSortList;
  if ( !itemSortList )
    goto LABEL_10;
  if ( itemSortList->fields._size <= (unsigned int)index )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
  v7 = itemSortList->fields._items->m_Items[index];
  if ( !v7 )
LABEL_10:
    sub_B170D4();
  v8 = *(&WarehouseListViewItem_TypeInfo->_2.bitflags2 + 1);
  if ( *(&v7->klass->_2.bitflags2 + 1) >= (unsigned int)v8
    && (WarehouseListViewItem_c *)v7->klass->_2.typeHierarchy[v8 - 1] == WarehouseListViewItem_TypeInfo )
  {
    HIDWORD(v7[2].monitor) = -1;
  }
  else
  {
    v9 = (WarehouseListViewManager_o *)sub_B173C8(v7);
    WarehouseListViewManager__GetModeKind(v9, v10);
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
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  unsigned int scaleType; // w8
  struct ListViewItemSeed_o *smallSizeSeed; // x1
  int32_t v16; // w8
  struct ListViewSort_o *sort; // x8
  ListViewSort_o *v18; // x0
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x0
  ListViewItem_o *current; // x20
  __int64 v21; // x9
  UnityEngine_Object_o *monitor; // x21
  ListViewObject_o *viewObject; // x0
  const MethodInfo *v24; // x2
  UnityEngine_Component_o *scrollBar; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  System_Collections_Generic_List_Enumerator_T__o v27; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v28; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_40FA9C2 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v11);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v12);
    sub_B16FFC(&WarehouseListViewItem_TypeInfo, v13);
    byte_40FA9C2 = 1;
  }
  memset(&v28, 0, sizeof(v28));
  scaleType = this->fields.scaleType;
  if ( scaleType < 2 )
  {
    smallSizeSeed = this->fields.smallSizeSeed;
    v16 = 2;
  }
  else if ( scaleType == 2 )
  {
    smallSizeSeed = this->fields.extremelySmallSizeSeed;
    v16 = 3;
  }
  else
  {
    if ( scaleType != 3 )
      goto LABEL_10;
    smallSizeSeed = this->fields.normalSizeSeed;
    v16 = 1;
  }
  this->fields.scaleType = v16;
  this->fields.seed = smallSizeSeed;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.seed,
    (System_Int32_array **)smallSizeSeed,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
LABEL_10:
  sort = this->fields.sort;
  if ( !sort )
    goto LABEL_30;
  sort->fields.iconScaleKind = this->fields.scaleType;
  v18 = this->fields.sort;
  if ( !v18 )
    goto LABEL_30;
  ListViewSort__Save(v18, 0LL);
  itemList = this->fields.itemList;
  if ( !itemList )
    goto LABEL_30;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v27,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)itemList,
    (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  v28 = v27;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v28,
            (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__) )
  {
    current = (ListViewItem_o *)v28.fields.current;
    if ( !v28.fields.current )
      goto LABEL_28;
    v21 = *(&WarehouseListViewItem_TypeInfo->_2.bitflags2 + 1);
    if ( *(&v28.fields.current->klass->_2.bitflags2 + 1) < (unsigned int)v21
      || (WarehouseListViewItem_c *)v28.fields.current->klass->_2.typeHierarchy[v21 - 1] != WarehouseListViewItem_TypeInfo )
    {
      sub_B173C8(v28.fields.current);
LABEL_28:
      sub_B170D4();
    }
    monitor = (UnityEngine_Object_o *)v28.fields.current[6].monitor;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( !UnityEngine_Object__op_Equality(monitor, 0LL, 0LL) )
    {
      viewObject = current->fields.viewObject;
      if ( !viewObject )
        sub_B170D4();
      ListViewObject__SetItemSeed(viewObject, current, this->fields.seed, 0LL);
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v28,
    (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
  WarehouseListViewManager__SetMode_26454636(this, 2, v24);
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
  scrollBar = (UnityEngine_Component_o *)this->fields.scrollBar;
  if ( !scrollBar || (gameObject = UnityEngine_Component__get_gameObject(scrollBar, 0LL)) == 0LL )
LABEL_30:
    sub_B170D4();
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
}


void __fastcall WarehouseListViewManager__ChangeSellEnableRestCnt(
        WarehouseListViewManager_o *this,
        bool isPlus,
        WarehouseListViewItem_o *item,
        const MethodInfo *method)
{
  ServantEntity_o *servantEntity; // x0
  int32_t sellEnableRestCnt; // w8
  int32_t v9; // w8

  if ( !this->fields.kind )
  {
    if ( !item || (servantEntity = item->fields.servantEntity) == 0LL )
      sub_B170D4();
    if ( ServantEntity__get_IsOrganization(servantEntity, 0LL) && !item->fields.attribute )
    {
      sellEnableRestCnt = this->fields.sellEnableRestCnt;
      if ( isPlus )
        v9 = sellEnableRestCnt + 1;
      else
        v9 = sellEnableRestCnt - 1;
      this->fields.sellEnableRestCnt = v9;
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
  WebViewManager_o *Instance; // x0
  UserServantMaster_o *MasterData_WarQuestSelectionMaster; // x24
  WebViewManager_o *v26; // x0
  UserServantStorageMaster_o *v27; // x25
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  UserGameEntity_o *SelfUserGame; // x26
  System_String_o *v35; // x21
  WarehouseListViewManager_c *v36; // x0
  struct ListViewSort_o *servantSortInfo; // x1
  ListViewSort_o **p_sort; // x22
  UserServantEntity_array *KeepServantList; // x0
  __int64 *v40; // x8
  WarehouseListViewManager_c *v41; // x0
  struct ListViewSort_o *servantEquipSortInfo; // x1
  ListViewSort_o **v43; // x22
  WarehouseListViewManager_c *v44; // x0
  struct ListViewSort_o *servantWarehouseSortInfo; // x1
  ListViewSort_o **v46; // x22
  WarehouseListViewManager_c *v47; // x0
  struct ListViewSort_o *servantEquipWarehouseSortInfo; // x1
  ListViewSort_o **v49; // x22
  UserServantEntity_array *v50; // x23
  int v51; // w8
  struct ListViewSort_o *sort; // x8
  struct ListViewSort_o **v53; // x22
  struct System_Int32_array *servantFilterEventIdList; // x9
  struct System_Int32_array *servantFilterIdList; // x9
  struct ListViewSort_o *v56; // x8
  System_String_array **v57; // x2
  System_String_array **v58; // x3
  System_Boolean_array **v59; // x4
  System_Int32_array **v60; // x5
  System_Int32_array *v61; // x6
  System_Int32_array *v62; // x7
  struct System_Int32_array *servantEquipFilterEventIdList; // x1
  struct System_Int32_array **p_servantFilterIdList; // x0
  struct ListViewSort_o *v65; // x8
  struct System_Int32_array *v66; // x1
  ListViewSort_o *v67; // x0
  System_Int32_array *bonusEventIdList; // x1
  System_Int32_array *v69; // x2
  UnityEngine_Component_o *bonusFilterKindButton; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  System_String_array **v72; // x2
  System_String_array **v73; // x3
  System_Boolean_array **v74; // x4
  System_Int32_array **v75; // x5
  System_Int32_array *v76; // x6
  System_Int32_array *v77; // x7
  unsigned int iconScaleKind; // w8
  struct ListViewItemSeed_o *normalSizeSeed; // x1
  WebViewManager_o *v80; // x0
  UserDeckMaster_o *v81; // x24
  int64_t UserId; // x0
  WebViewManager_o *v83; // x0
  EventMaster_o *v84; // x0
  int64_t IsEnableFatigueEvent; // x0
  __int64 v86; // x1
  __int64 v87; // x2
  WebViewManager_o *v88; // x0
  UserEventServantFatigueMaster_o *v89; // x0
  int max_length; // w8
  __int64 v91; // x25
  UserServantEntity_o **m_Items; // x20
  UserServantEntity_o *v93; // x8
  __int128 v94; // q0
  __int64 v95; // x3
  __int64 v96; // x4
  System_Int64_array *v97; // x22
  UserServantEntity_array *v98; // x24
  UserServantEntity_o **v99; // x28
  UserServantEntity_o *v100; // x20
  int64_t favoriteUserSvtId; // x23
  int64_t v102; // x27
  UserGameEntity_o *v103; // x21
  WarehouseListViewItem_o *v104; // x26
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x0
  const MethodInfo *v106; // x3
  UILabel_o *emptyMessageLabel; // x20
  System_String_o *v108; // x0
  const MethodInfo *v109; // x1
  const MethodInfo *v110; // [xsp+0h] [xbp-E0h]
  System_String_o *v111; // [xsp+10h] [xbp-D0h]
  EventUpValSetupInfo_o *v112; // [xsp+18h] [xbp-C8h]
  System_Int64_array *v113; // [xsp+20h] [xbp-C0h]
  System_Int64_array *partyUserEquipList; // [xsp+28h] [xbp-B8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v115; // [xsp+30h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v116; // [xsp+50h] [xbp-90h]
  int32_t eventId; // [xsp+7Ch] [xbp-64h] BYREF
  System_Int64_array *equipIdList; // [xsp+80h] [xbp-60h] BYREF
  System_Int64_array *svtIdList; // [xsp+88h] [xbp-58h] BYREF

  if ( (byte_40FA9A5 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_EventMaster___, *(_QWORD *)&kind);
    sub_B16FFC(&Method_DataManager_GetMasterData_UserDeckMaster___, v7);
    sub_B16FFC(&Method_DataManager_GetMasterData_UserEventServantFatigueMaster___, v8);
    sub_B16FFC(&Method_DataManager_GetMasterData_UserServantMaster___, v9);
    sub_B16FFC(&Method_DataManager_GetMasterData_UserServantStorageMaster___, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewItem__Add__, v11);
    sub_B16FFC(&LocalizationManager_TypeInfo, v12);
    sub_B16FFC(&NetworkManager_TypeInfo, v13);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v14);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v15);
    sub_B16FFC(&WarehouseListViewItem_TypeInfo, v16);
    sub_B16FFC(&WarehouseListViewManager_TypeInfo, v17);
    sub_B16FFC(&StringLiteral_11651, v18);
    sub_B16FFC(&StringLiteral_11646, v19);
    sub_B16FFC(&StringLiteral_11679, v20);
    sub_B16FFC(&StringLiteral_11842, v21);
    sub_B16FFC(&StringLiteral_12005, v22);
    sub_B16FFC(&StringLiteral_1, v23);
    byte_40FA9A5 = 1;
  }
  equipIdList = 0LL;
  svtIdList = 0LL;
  eventId = 0;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_95;
  MasterData_WarQuestSelectionMaster = (UserServantMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                (DataManager_o *)Instance,
                                                                (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserServantMaster___);
  v26 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !v26 )
    goto LABEL_95;
  v27 = (UserServantStorageMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                        (DataManager_o *)v26,
                                        (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserServantStorageMaster___);
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  v35 = (System_String_o *)StringLiteral_1;
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
      sub_B16F98(
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
      if ( !*p_sort )
        goto LABEL_95;
      ListViewSort__Load(*p_sort, 0LL);
      if ( !MasterData_WarQuestSelectionMaster )
        goto LABEL_95;
      KeepServantList = UserServantMaster__getKeepServantList(MasterData_WarQuestSelectionMaster, 0LL);
      v40 = &StringLiteral_11646;
      break;
    case 1:
      v41 = WarehouseListViewManager_TypeInfo;
      if ( (BYTE3(WarehouseListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !WarehouseListViewManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(WarehouseListViewManager_TypeInfo);
        v41 = WarehouseListViewManager_TypeInfo;
      }
      servantEquipSortInfo = v41->static_fields->servantEquipSortInfo;
      this->fields.sort = servantEquipSortInfo;
      v43 = &this->fields.sort;
      sub_B16F98(
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
      if ( !*v43 )
        goto LABEL_95;
      ListViewSort__Load(*v43, 0LL);
      if ( !MasterData_WarQuestSelectionMaster )
        goto LABEL_95;
      KeepServantList = UserServantMaster__getServantEquipList(MasterData_WarQuestSelectionMaster, 0LL);
      v40 = &StringLiteral_11651;
      break;
    case 2:
      v44 = WarehouseListViewManager_TypeInfo;
      if ( (BYTE3(WarehouseListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !WarehouseListViewManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(WarehouseListViewManager_TypeInfo);
        v44 = WarehouseListViewManager_TypeInfo;
      }
      servantWarehouseSortInfo = v44->static_fields->servantWarehouseSortInfo;
      this->fields.sort = servantWarehouseSortInfo;
      v46 = &this->fields.sort;
      sub_B16F98(
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
      if ( !*v46 )
        goto LABEL_95;
      ListViewSort__Load(*v46, 0LL);
      if ( !v27 )
        goto LABEL_95;
      KeepServantList = UserServantStorageMaster__getKeepServantList(v27, 0LL);
      v40 = &StringLiteral_12005;
      break;
    case 3:
      v47 = WarehouseListViewManager_TypeInfo;
      if ( (BYTE3(WarehouseListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !WarehouseListViewManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(WarehouseListViewManager_TypeInfo);
        v47 = WarehouseListViewManager_TypeInfo;
      }
      servantEquipWarehouseSortInfo = v47->static_fields->servantEquipWarehouseSortInfo;
      this->fields.sort = servantEquipWarehouseSortInfo;
      v49 = &this->fields.sort;
      sub_B16F98(
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
      if ( !*v49 )
        goto LABEL_95;
      ListViewSort__Load(*v49, 0LL);
      if ( !v27 )
        goto LABEL_95;
      KeepServantList = UserServantStorageMaster__getServantEquipList(v27, 0LL);
      v40 = &StringLiteral_11679;
      break;
    default:
      v50 = 0LL;
      if ( !setupInfo )
        goto LABEL_43;
      goto LABEL_35;
  }
  v35 = (System_String_o *)*v40;
  v50 = KeepServantList;
  if ( setupInfo )
  {
LABEL_35:
    v51 = this->fields.kind | 2;
    this->fields.isQuestStart = setupInfo->fields.isQuestStart;
    if ( v51 == 2 )
    {
      v53 = &this->fields.sort;
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
      v66 = setupInfo->fields.servantFilterEventIdList;
      this->fields.bonusEventIdList = v66;
      sub_B16F98(
        (BattleServantConfConponent_o *)&this->fields.bonusEventIdList,
        (System_Int32_array **)v66,
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
      v53 = &this->fields.sort;
      v56 = this->fields.sort;
      if ( !v56 )
        goto LABEL_95;
      v56->fields.isBonusKind = 1;
      this->fields.servantFilterIdList = 0LL;
      sub_B16F98((BattleServantConfConponent_o *)&this->fields.servantFilterIdList, 0LL, v28, v29, v30, v31, v32, v33);
      servantEquipFilterEventIdList = setupInfo->fields.servantEquipFilterEventIdList;
      p_servantFilterIdList = &this->fields.bonusEventIdList;
      this->fields.bonusEventIdList = servantEquipFilterEventIdList;
    }
  }
  else
  {
LABEL_43:
    v53 = &this->fields.sort;
    v65 = this->fields.sort;
    this->fields.isQuestStart = 1;
    if ( !v65 )
      goto LABEL_95;
    v65->fields.isBonusKind = 0;
    this->fields.bonusEventIdList = 0LL;
    sub_B16F98((BattleServantConfConponent_o *)&this->fields.bonusEventIdList, 0LL, v28, v29, v30, v31, v32, v33);
    p_servantFilterIdList = &this->fields.servantFilterIdList;
    servantEquipFilterEventIdList = 0LL;
    this->fields.servantFilterIdList = 0LL;
  }
  sub_B16F98(
    (BattleServantConfConponent_o *)p_servantFilterIdList,
    (System_Int32_array **)servantEquipFilterEventIdList,
    v57,
    v58,
    v59,
    v60,
    v61,
    v62);
  v67 = *v53;
  if ( !*v53 )
    goto LABEL_95;
  if ( v67->fields.isBonusKind )
  {
    bonusEventIdList = this->fields.bonusEventIdList;
    v69 = this->fields.servantFilterIdList;
    if ( this->fields.isQuestStart )
      ListViewSort__AlignBonusKind(v67, bonusEventIdList, v69, 0, 0LL, 0LL);
    else
      ListViewSort__AlignBonusKind2(v67, bonusEventIdList, v69, 0LL, 0LL, 0LL, 0LL);
  }
  bonusFilterKindButton = (UnityEngine_Component_o *)this->fields.bonusFilterKindButton;
  if ( !bonusFilterKindButton )
    goto LABEL_95;
  gameObject = UnityEngine_Component__get_gameObject(bonusFilterKindButton, 0LL);
  if ( !*v53 )
    goto LABEL_95;
  if ( !gameObject )
    goto LABEL_95;
  UnityEngine_GameObject__SetActive(gameObject, (*v53)->fields.isBonusKind, 0LL);
  if ( !*v53 )
    goto LABEL_95;
  iconScaleKind = (*v53)->fields.iconScaleKind;
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
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.seed,
    (System_Int32_array **)normalSizeSeed,
    v72,
    v73,
    v74,
    v75,
    v76,
    v77);
LABEL_65:
  *(_QWORD *)&this->fields.sellEnableRestCnt = 0LL;
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
  *(_OWORD *)&this->fields.dragSelectSum = xmmword_31369F0;
  this->fields.isDragSelect = 1;
  this->fields.dragSelectFriendShipSum = 0;
  if ( !v50 )
    goto LABEL_90;
  v80 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !v80 )
    goto LABEL_95;
  v81 = (UserDeckMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                              (DataManager_o *)v80,
                              (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserDeckMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  UserId = NetworkManager__get_UserId(0LL);
  if ( !v81
    || (UserDeckMaster__getPartyList(v81, &svtIdList, &equipIdList, UserId, 0LL),
        (v83 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
    || (v84 = (EventMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                 (DataManager_o *)v83,
                                 (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_EventMaster___)) == 0LL )
  {
LABEL_95:
    sub_B170D4();
  }
  IsEnableFatigueEvent = EventMaster__IsEnableFatigueEvent(v84, &eventId, 0LL);
  v113 = 0LL;
  if ( (IsEnableFatigueEvent & 1) != 0 )
  {
    v88 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !v88 )
      goto LABEL_95;
    v89 = (UserEventServantFatigueMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                               (DataManager_o *)v88,
                                               (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserEventServantFatigueMaster___);
    if ( !v89 )
      goto LABEL_95;
    IsEnableFatigueEvent = (int64_t)UserEventServantFatigueMaster__GetRecoverySvtIdList(v89, eventId, 0LL);
    v113 = (System_Int64_array *)IsEnableFatigueEvent;
  }
  max_length = v50->max_length;
  if ( max_length >= 1 )
  {
    v91 = 0LL;
    m_Items = v50->m_Items;
    v111 = v35;
    v112 = setupInfo;
    do
    {
      if ( (unsigned int)v91 >= max_length )
        goto LABEL_96;
      v93 = m_Items[v91];
      if ( !v93 )
        goto LABEL_95;
      v94 = *(_OWORD *)&v93->fields.id.fields.fakeValue;
      *(_OWORD *)&v116.fields.currentCryptoKey = *(_OWORD *)&v93->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v116.fields.fakeValue = v94;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      }
      v115 = v116;
      IsEnableFatigueEvent = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v115, 0LL);
      if ( (unsigned int)v91 >= v50->max_length )
      {
LABEL_96:
        sub_B17100(IsEnableFatigueEvent, v86, v87);
        sub_B170A0();
      }
      if ( !SelfUserGame )
        goto LABEL_95;
      v97 = svtIdList;
      v98 = v50;
      v99 = m_Items;
      v100 = m_Items[v91];
      partyUserEquipList = equipIdList;
      favoriteUserSvtId = SelfUserGame->fields.favoriteUserSvtId;
      v102 = IsEnableFatigueEvent;
      v103 = SelfUserGame;
      v104 = (WarehouseListViewItem_o *)sub_B170CC(WarehouseListViewItem_TypeInfo, v86, v87, v95, v96);
      WarehouseListViewItem___ctor(
        v104,
        v91,
        v100,
        v112,
        v97,
        partyUserEquipList,
        v113,
        v102 == favoriteUserSvtId,
        v110);
      itemList = this->fields.itemList;
      if ( !itemList )
        goto LABEL_95;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)itemList,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v104,
        (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
      WarehouseListViewManager__ChangeSellEnableRestCnt(this, 1, v104, v106);
      max_length = v98->max_length;
      ++v91;
      v50 = v98;
      SelfUserGame = v103;
      m_Items = v99;
    }
    while ( (int)v91 < max_length );
    v35 = v111;
    if ( (int)v91 > 0 )
      v35 = (System_String_o *)StringLiteral_11842;
  }
LABEL_90:
  emptyMessageLabel = this->fields.emptyMessageLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v108 = LocalizationManager__Get(v35, 0LL);
  if ( !emptyMessageLabel )
    goto LABEL_95;
  UILabel__set_text(emptyMessageLabel, v108, 0LL);
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
  WarehouseListViewManager__SetFilterButtonImage(this, v109);
  ListViewManager__CheckScroll((ListViewManager_o *)this, this->fields.scaleType, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarehouseListViewManager__DecideDragSelect(
        WarehouseListViewManager_o *this,
        int32_t index,
        const MethodInfo *method)
{
  __int64 v5; // x1
  struct System_Collections_Generic_List_ListViewItem__o *itemSortList; // x21
  ListViewItem_o *v7; // x20
  __int64 v8; // x9
  _BOOL4 isDragSelect; // w21
  bool IsSelect; // w0
  const MethodInfo *v11; // x2
  const MethodInfo *v12; // x3
  WarehouseListManager_o *parentManager; // x0
  const MethodInfo *v14; // x3
  struct WarehouseListManager_o *v15; // x8
  struct WarehouseListManager_o *v16; // x8
  struct WarehouseListViewManager_o *baseListViewManager; // x9
  int32_t selectSum; // w9
  WarehouseListViewManager_o *v19; // x0
  bool v20; // w1
  struct WarehouseListManager_o *v21; // x8
  WarehouseListViewManager_o *v22; // x0
  struct WarehouseListViewManager_o *v23; // x9
  WarehouseListViewManager_o *v24; // x0
  const MethodInfo *v25; // x1
  int32_t friendShipSum[2]; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_40FA9C9 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, *(_QWORD *)&index);
    sub_B16FFC(&WarehouseListViewItem_TypeInfo, v5);
    byte_40FA9C9 = 1;
  }
  *(_QWORD *)friendShipSum = 0LL;
  itemSortList = this->fields.itemSortList;
  if ( !itemSortList )
    goto LABEL_27;
  if ( itemSortList->fields._size <= (unsigned int)index )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
  v7 = itemSortList->fields._items->m_Items[index];
  if ( !v7 )
    goto LABEL_27;
  v8 = *(&WarehouseListViewItem_TypeInfo->_2.bitflags2 + 1);
  if ( *(&v7->klass->_2.bitflags2 + 1) >= (unsigned int)v8
    && (WarehouseListViewItem_c *)v7->klass->_2.typeHierarchy[v8 - 1] == WarehouseListViewItem_TypeInfo )
  {
    if ( SHIDWORD(v7[2].monitor) >= 1 )
    {
      isDragSelect = this->fields.isDragSelect;
      IsSelect = ListViewItem__get_IsSelect(v7, 0LL);
      if ( isDragSelect )
      {
        if ( !IsSelect )
        {
          parentManager = this->fields.parentManager;
          if ( parentManager )
          {
            WarehouseListManager__GetSelectItemNum(parentManager, &friendShipSum[1], friendShipSum, v12);
            v15 = this->fields.parentManager;
            if ( v15 )
            {
              if ( friendShipSum[1] >= v15->fields.sendMax && !BYTE6(v7[1].fields.sortValue1) )
                goto LABEL_26;
              v7->fields.selectNum = v15->fields.totalSum;
              v16 = this->fields.parentManager;
              ++this->fields.selectSum;
              if ( v16 )
              {
                baseListViewManager = v16->fields.baseListViewManager;
                if ( baseListViewManager )
                {
                  selectSum = baseListViewManager->fields.selectSum;
                  v19 = this;
                  v20 = 0;
LABEL_25:
                  v16->fields.totalSum = selectSum;
                  WarehouseListViewManager__ChangeSellEnableRestCnt(v19, v20, (WarehouseListViewItem_o *)v7, v14);
                  goto LABEL_26;
                }
              }
            }
          }
          goto LABEL_27;
        }
      }
      else if ( IsSelect )
      {
        v21 = this->fields.parentManager;
        if ( v21 )
        {
          v22 = v21->fields.baseListViewManager;
          if ( v22 )
          {
            WarehouseListViewManager__DecrementNumber(v22, v7->fields.selectNum, v11);
            ListViewItem__set_IsSelect(v7, 0, 0LL);
            v16 = this->fields.parentManager;
            --this->fields.selectSum;
            if ( v16 )
            {
              v23 = v16->fields.baseListViewManager;
              if ( v23 )
              {
                selectSum = v23->fields.selectSum;
                v20 = 1;
                v19 = this;
                goto LABEL_25;
              }
            }
          }
        }
LABEL_27:
        sub_B170D4();
      }
    }
LABEL_26:
    HIDWORD(v7[2].monitor) = -1;
    return;
  }
  v24 = (WarehouseListViewManager_o *)sub_B173C8(v7);
  WarehouseListViewManager__CancelDragEnd(v24, v25);
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
  System_Collections_Generic_List_Enumerator_T__o v10; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_40FA9B6 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__, *(_QWORD *)&selectNum);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v5);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v7);
    byte_40FA9B6 = 1;
  }
  memset(&v10, 0, sizeof(v10));
  itemList = this->fields.itemList;
  if ( !itemList )
    sub_B170D4();
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v10,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)itemList,
    (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v10,
            (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__) )
  {
    if ( !v10.fields.current )
      sub_B170D4();
    klass = (int32_t)v10.fields.current[1].klass;
    if ( klass > selectNum )
      LODWORD(v10.fields.current[1].klass) = klass - 1;
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v10,
    (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
}


void __fastcall WarehouseListViewManager__DeleteContinueData(const MethodInfo *method)
{
  __int64 v1; // x1
  WarehouseListViewManager_c *v2; // x0
  ListViewSort_o *servantSortInfo; // x0
  ListViewSort_o *servantEquipSortInfo; // x0
  ListViewSort_o *servantWarehouseSortInfo; // x0
  ListViewSort_o *servantEquipWarehouseSortInfo; // x0

  if ( (byte_40FA9A1 & 1) == 0 )
  {
    sub_B16FFC(&WarehouseListViewManager_TypeInfo, v1);
    byte_40FA9A1 = 1;
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
        (servantEquipSortInfo = WarehouseListViewManager_TypeInfo->static_fields->servantEquipSortInfo) == 0LL)
    || (ListViewSort__DeleteContinueData(servantEquipSortInfo, 0LL),
        (servantWarehouseSortInfo = WarehouseListViewManager_TypeInfo->static_fields->servantWarehouseSortInfo) == 0LL)
    || (ListViewSort__DeleteContinueData(servantWarehouseSortInfo, 0LL),
        (servantEquipWarehouseSortInfo = WarehouseListViewManager_TypeInfo->static_fields->servantEquipWarehouseSortInfo) == 0LL) )
  {
    sub_B170D4();
  }
  ListViewSort__DeleteContinueData(servantEquipWarehouseSortInfo, 0LL);
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
  __int64 v11; // x3
  __int64 v12; // x4
  System_Action_o *v13; // x21

  if ( (byte_40FA9BD & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, isDecide);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    sub_B16FFC(&Method_WarehouseListViewManager_EndCloseSelectFilterKind__, v6);
    byte_40FA9BD = 1;
  }
  if ( isDecide )
  {
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
    WarehouseListViewManager__SetFilterButtonImage(this, v7);
    ListViewManager__CheckScroll((ListViewManager_o *)this, this->fields.scaleType, 0LL);
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v13 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v9, v10, v11, v12);
  System_Action___ctor(v13, (Il2CppObject *)this, Method_WarehouseListViewManager_EndCloseSelectFilterKind__, 0LL);
  if ( !Instance )
    sub_B170D4();
  CommonUI__CloseServantFilterSelectMenu(Instance, v13, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarehouseListViewManager__EndSelectSortKind(
        WarehouseListViewManager_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x0

  if ( (byte_40FA9BB & 1) == 0 )
  {
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, isDecide);
    byte_40FA9BB = 1;
  }
  if ( isDecide )
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B170D4();
  CommonUI__CloseServantSortSelectMenu(Instance, 0LL, 0LL);
}


// local variable allocation has failed, the output may be wrong!
int64_t __fastcall WarehouseListViewManager__GetAmountSortValue(
        WarehouseListViewManager_o *this,
        int32_t svtId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x25
  signed __int64 size; // x22
  int64_t v9; // x21
  unsigned __int64 v10; // x23
  ListViewItem_o *v11; // x8
  __int64 v12; // x11

  if ( (byte_40FA9C0 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, *(_QWORD *)&svtId);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v5);
    sub_B16FFC(&WarehouseListViewItem_TypeInfo, v6);
    byte_40FA9C0 = 1;
  }
  itemList = this->fields.itemList;
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
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
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
      itemList = this->fields.itemList;
    }
    while ( itemList );
LABEL_17:
    sub_B170D4();
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

  if ( (byte_40FA9CC & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, *(_QWORD *)&index);
    sub_B16FFC(&WarehouseListViewItem_TypeInfo, v5);
    byte_40FA9CC = 1;
  }
  itemList = this->fields.itemList;
  if ( !itemList )
    return 0LL;
  if ( itemList->fields._size <= (unsigned int)index )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
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
    sub_B170D4();
  return warehouseListMenu->fields.modeKind;
}


System_String_o *__fastcall WarehouseListViewManager__GetScaleButtonSpriteName(
        WarehouseListViewManager_o *this,
        const MethodInfo *method)
{
  ListViewSort_o *sort; // x0

  sort = this->fields.sort;
  if ( !sort )
    sub_B170D4();
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
  System_Collections_Generic_List_Enumerator_T__o v15; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_40FA9CB & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__, normalSum);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v9);
    sub_B16FFC(&WarehouseListViewItem_TypeInfo, v10);
    byte_40FA9CB = 1;
  }
  memset(&v15, 0, sizeof(v15));
  *normalSum = 0;
  *friendShipSum = 0;
  itemList = this->fields.itemList;
  if ( !itemList )
    sub_B170D4();
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v15,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)itemList,
    (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v15,
            (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__) )
  {
    current = v15.fields.current;
    if ( !v15.fields.current )
      goto LABEL_16;
    v13 = *(&WarehouseListViewItem_TypeInfo->_2.bitflags2 + 1);
    if ( *(&v15.fields.current->klass->_2.bitflags2 + 1) < (unsigned int)v13
      || (WarehouseListViewItem_c *)v15.fields.current->klass->_2.typeHierarchy[v13 - 1] != WarehouseListViewItem_TypeInfo )
    {
      sub_B173C8(v15.fields.current);
LABEL_16:
      sub_B170D4();
    }
    if ( ListViewItem__get_IsSelect((ListViewItem_o *)v15.fields.current, 0LL) )
    {
      if ( BYTE6(current[10].klass) )
        v14 = friendShipSum;
      else
        v14 = normalSum;
      ++*v14;
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v15,
    (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
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
  Il2CppObject *current; // x20
  __int64 v12; // x9
  const MethodInfo *v13; // x1
  int64_t UserSvtId; // x1
  System_Collections_Generic_List_Enumerator_T__o v15; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v16; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_40FA9B1 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__, list);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v5);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_long__Add__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v8);
    sub_B16FFC(&WarehouseListViewItem_TypeInfo, v9);
    byte_40FA9B1 = 1;
  }
  memset(&v16, 0, sizeof(v16));
  itemList = this->fields.itemList;
  if ( !itemList )
    sub_B170D4();
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v15,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)itemList,
    (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  v16 = v15;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v16,
            (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__) )
  {
    current = v16.fields.current;
    if ( !v16.fields.current )
      goto LABEL_14;
    v12 = *(&WarehouseListViewItem_TypeInfo->_2.bitflags2 + 1);
    if ( *(&v16.fields.current->klass->_2.bitflags2 + 1) < (unsigned int)v12
      || (WarehouseListViewItem_c *)v16.fields.current->klass->_2.typeHierarchy[v12 - 1] != WarehouseListViewItem_TypeInfo )
    {
      sub_B173C8(v16.fields.current);
LABEL_14:
      sub_B170D4();
    }
    if ( ListViewItem__get_IsSelect((ListViewItem_o *)v16.fields.current, 0LL) )
    {
      UserSvtId = WarehouseListViewItem__get_UserSvtId((WarehouseListViewItem_o *)current, v13);
      if ( !list )
        sub_B170D4();
      System_Collections_Generic_List_long___Add(
        list,
        UserSvtId,
        (const MethodInfo_2F164A0 *)Method_System_Collections_Generic_List_long__Add__);
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v16,
    (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
}


System_Collections_Generic_Dictionary_long__int__o *__fastcall WarehouseListViewManager__GetSelectServantIdDic(
        WarehouseListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  System_Collections_Generic_Dictionary_long__int__o *v11; // x20
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x21
  int size; // w22
  unsigned int v14; // w23
  WarehouseListViewItem_o *v15; // x21
  __int64 v16; // x9
  const MethodInfo *v17; // x1
  int64_t UserSvtId; // x0
  System_Collections_Generic_Dictionary_long__int__o *result; // x0
  WarehouseListViewManager_o *v20; // x0
  System_Collections_Generic_Dictionary_long__int__o *v21; // x1
  const MethodInfo *v22; // x2

  if ( (byte_40FA9C3 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_long__int__Add__, method);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_long__int___ctor__, v6);
    sub_B16FFC(&System_Collections_Generic_Dictionary_long__int__TypeInfo, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v9);
    sub_B16FFC(&WarehouseListViewItem_TypeInfo, v10);
    byte_40FA9C3 = 1;
  }
  v11 = (System_Collections_Generic_Dictionary_long__int__o *)sub_B170CC(
                                                                System_Collections_Generic_Dictionary_long__int__TypeInfo,
                                                                method,
                                                                v2,
                                                                v3,
                                                                v4);
  System_Collections_Generic_Dictionary_long__int____ctor(
    v11,
    (const MethodInfo_2E0A644 *)Method_System_Collections_Generic_Dictionary_long__int___ctor__);
  itemList = this->fields.itemList;
  if ( !itemList )
LABEL_16:
    sub_B170D4();
  size = itemList->fields._size;
  if ( size < 1 )
    return v11;
  v14 = 0;
  while ( 1 )
  {
    if ( itemList->fields._size <= v14 )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
    v15 = (WarehouseListViewItem_o *)itemList->fields._items->m_Items[v14];
    if ( !v15 )
      goto LABEL_16;
    v16 = *(&WarehouseListViewItem_TypeInfo->_2.bitflags2 + 1);
    if ( *(&v15->klass->_2.bitflags2 + 1) < (unsigned int)v16
      || (WarehouseListViewItem_c *)v15->klass->_2.typeHierarchy[v16 - 1] != WarehouseListViewItem_TypeInfo )
    {
      break;
    }
    if ( ListViewItem__get_IsSelect((ListViewItem_o *)v15, 0LL) )
    {
      UserSvtId = WarehouseListViewItem__get_UserSvtId(v15, v17);
      if ( !v11 )
        goto LABEL_16;
      System_Collections_Generic_Dictionary_long__int___Add(
        v11,
        UserSvtId,
        v15->fields.selectNum,
        (const MethodInfo_2E0B1F8 *)Method_System_Collections_Generic_Dictionary_long__int__Add__);
    }
    if ( (int)++v14 >= size )
      return v11;
    itemList = this->fields.itemList;
    if ( !itemList )
      goto LABEL_16;
  }
  v20 = (WarehouseListViewManager_o *)sub_B173C8(v15);
  WarehouseListViewManager__ModifyScaleChangeList(v20, v21, v22);
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
  __int64 v4; // x4
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
  __int64 v18; // x3
  __int64 v19; // x4
  System_Collections_Generic_List_long__o *v20; // x22
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x19
  signed __int64 size; // x24
  unsigned __int64 v29; // x25
  ListViewItem_o *v30; // x8
  __int64 v31; // x11
  ListViewItem_c *klass; // x9
  Il2CppType byval_arg; // q0
  int64_t v34; // x0
  const MethodInfo_2F164A0 *v35; // x2
  int64_t v36; // x1
  System_Collections_Generic_List_long__o *v37; // x0
  Il2CppType v38; // q0
  int64_t v39; // x0
  System_Int64_array *v40; // x0
  System_String_array **v41; // x2
  System_String_array **v42; // x3
  System_Boolean_array **v43; // x4
  System_Int32_array **v44; // x5
  System_Int32_array *v45; // x6
  System_Int32_array *v46; // x7
  System_Int64_array *v47; // x0
  System_String_array **v48; // x2
  System_String_array **v49; // x3
  System_Boolean_array **v50; // x4
  System_Int32_array **v51; // x5
  System_Int32_array *v52; // x6
  System_Int32_array *v53; // x7
  System_String_array **v55; // x2
  System_String_array **v56; // x3
  System_Boolean_array **v57; // x4
  System_Int32_array **v58; // x5
  System_Int32_array *v59; // x6
  System_Int32_array *v60; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v62; // [xsp+10h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v63; // [xsp+30h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v64; // [xsp+50h] [xbp-70h]

  if ( (byte_40FA9AB & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_long__Add__, choiceList);
    sub_B16FFC(&Method_System_Collections_Generic_List_long__ToArray__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_long___ctor__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_long__get_Count__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v11);
    sub_B16FFC(&System_Collections_Generic_List_long__TypeInfo, v12);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v13);
    sub_B16FFC(&WarehouseListViewItem_TypeInfo, v14);
    byte_40FA9AB = 1;
  }
  v15 = (System_Collections_Generic_List_long__o *)sub_B170CC(
                                                     System_Collections_Generic_List_long__TypeInfo,
                                                     choiceList,
                                                     unchoiceList,
                                                     method,
                                                     v4);
  System_Collections_Generic_List_long____ctor(
    v15,
    (const MethodInfo_2F15744 *)Method_System_Collections_Generic_List_long___ctor__);
  v20 = (System_Collections_Generic_List_long__o *)sub_B170CC(
                                                     System_Collections_Generic_List_long__TypeInfo,
                                                     v16,
                                                     v17,
                                                     v18,
                                                     v19);
  System_Collections_Generic_List_long____ctor(
    v20,
    (const MethodInfo_2F15744 *)Method_System_Collections_Generic_List_long___ctor__);
  itemList = this->fields.itemList;
  if ( !itemList )
    goto LABEL_33;
  size = itemList->fields._size;
  if ( (int)size >= 1 )
  {
    v29 = 0LL;
    do
    {
      if ( v29 >= (unsigned int)itemList->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
      v30 = itemList->fields._items->m_Items[v29];
      if ( !v30 )
        break;
      v31 = *(&WarehouseListViewItem_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v30->klass->_2.bitflags2 + 1) < (unsigned int)v31
        || (WarehouseListViewItem_c *)v30->klass->_2.typeHierarchy[v31 - 1] != WarehouseListViewItem_TypeInfo )
      {
        break;
      }
      klass = v30[1].klass;
      if ( klass && BYTE1(v30[2].monitor) )
      {
        if ( BYTE1(v30[1].fields.sortValue1) )
        {
          byval_arg = klass->_1.byval_arg;
          *(_OWORD *)&v64.fields.currentCryptoKey = *(_OWORD *)&klass->_1.name;
          *(Il2CppType *)&v64.fields.fakeValue = byval_arg;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          }
          v63 = v64;
          v34 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v63, 0LL);
          if ( !v20 )
            break;
          v35 = (const MethodInfo_2F164A0 *)Method_System_Collections_Generic_List_long__Add__;
          v36 = v34;
          v37 = v20;
        }
        else
        {
          v38 = klass->_1.byval_arg;
          *(_OWORD *)&v64.fields.currentCryptoKey = *(_OWORD *)&klass->_1.name;
          *(Il2CppType *)&v64.fields.fakeValue = v38;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          }
          v62 = v64;
          v39 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v62, 0LL);
          if ( !v15 )
            break;
          v35 = (const MethodInfo_2F164A0 *)Method_System_Collections_Generic_List_long__Add__;
          v36 = v39;
          v37 = v15;
        }
        System_Collections_Generic_List_long___Add(v37, v36, v35);
      }
      if ( (__int64)++v29 >= size )
        goto LABEL_28;
      itemList = this->fields.itemList;
    }
    while ( itemList );
LABEL_33:
    sub_B170D4();
  }
LABEL_28:
  if ( !v15 || !v20 )
    goto LABEL_33;
  if ( v20->fields._size + v15->fields._size < 1 )
  {
    *choiceList = 0LL;
    sub_B16F98((BattleServantConfConponent_o *)choiceList, 0LL, v21, v22, v23, v24, v25, v26);
    *unchoiceList = 0LL;
    sub_B16F98((BattleServantConfConponent_o *)unchoiceList, 0LL, v55, v56, v57, v58, v59, v60);
    return 0;
  }
  else
  {
    v40 = System_Collections_Generic_List_long___ToArray(
            v15,
            (const MethodInfo_2F185AC *)Method_System_Collections_Generic_List_long__ToArray__);
    *choiceList = v40;
    sub_B16F98((BattleServantConfConponent_o *)choiceList, (System_Int32_array **)v40, v41, v42, v43, v44, v45, v46);
    v47 = System_Collections_Generic_List_long___ToArray(
            v20,
            (const MethodInfo_2F185AC *)Method_System_Collections_Generic_List_long__ToArray__);
    *unchoiceList = v47;
    sub_B16F98((BattleServantConfConponent_o *)unchoiceList, (System_Int32_array **)v47, v48, v49, v50, v51, v52, v53);
    return 1;
  }
}


bool __fastcall WarehouseListViewManager__GetSwapLockList(
        WarehouseListViewManager_o *this,
        System_Int64_array **lockList,
        System_Int64_array **unlockList,
        const MethodInfo *method)
{
  __int64 v4; // x4
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
  __int64 v18; // x3
  __int64 v19; // x4
  System_Collections_Generic_List_long__o *v20; // x22
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x19
  signed __int64 size; // x24
  unsigned __int64 v29; // x25
  ListViewItem_o *v30; // x8
  __int64 v31; // x11
  ListViewItem_c *klass; // x9
  Il2CppType byval_arg; // q0
  int64_t v34; // x0
  const MethodInfo_2F164A0 *v35; // x2
  int64_t v36; // x1
  System_Collections_Generic_List_long__o *v37; // x0
  Il2CppType v38; // q0
  int64_t v39; // x0
  System_Int64_array *v40; // x0
  System_String_array **v41; // x2
  System_String_array **v42; // x3
  System_Boolean_array **v43; // x4
  System_Int32_array **v44; // x5
  System_Int32_array *v45; // x6
  System_Int32_array *v46; // x7
  System_Int64_array *v47; // x0
  System_String_array **v48; // x2
  System_String_array **v49; // x3
  System_Boolean_array **v50; // x4
  System_Int32_array **v51; // x5
  System_Int32_array *v52; // x6
  System_Int32_array *v53; // x7
  System_String_array **v55; // x2
  System_String_array **v56; // x3
  System_Boolean_array **v57; // x4
  System_Int32_array **v58; // x5
  System_Int32_array *v59; // x6
  System_Int32_array *v60; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v62; // [xsp+10h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v63; // [xsp+30h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v64; // [xsp+50h] [xbp-70h]

  if ( (byte_40FA9AA & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_long__Add__, lockList);
    sub_B16FFC(&Method_System_Collections_Generic_List_long__ToArray__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_long___ctor__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_long__get_Count__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v11);
    sub_B16FFC(&System_Collections_Generic_List_long__TypeInfo, v12);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v13);
    sub_B16FFC(&WarehouseListViewItem_TypeInfo, v14);
    byte_40FA9AA = 1;
  }
  v15 = (System_Collections_Generic_List_long__o *)sub_B170CC(
                                                     System_Collections_Generic_List_long__TypeInfo,
                                                     lockList,
                                                     unlockList,
                                                     method,
                                                     v4);
  System_Collections_Generic_List_long____ctor(
    v15,
    (const MethodInfo_2F15744 *)Method_System_Collections_Generic_List_long___ctor__);
  v20 = (System_Collections_Generic_List_long__o *)sub_B170CC(
                                                     System_Collections_Generic_List_long__TypeInfo,
                                                     v16,
                                                     v17,
                                                     v18,
                                                     v19);
  System_Collections_Generic_List_long____ctor(
    v20,
    (const MethodInfo_2F15744 *)Method_System_Collections_Generic_List_long___ctor__);
  itemList = this->fields.itemList;
  if ( !itemList )
    goto LABEL_33;
  size = itemList->fields._size;
  if ( (int)size >= 1 )
  {
    v29 = 0LL;
    do
    {
      if ( v29 >= (unsigned int)itemList->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
      v30 = itemList->fields._items->m_Items[v29];
      if ( !v30 )
        break;
      v31 = *(&WarehouseListViewItem_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v30->klass->_2.bitflags2 + 1) < (unsigned int)v31
        || (WarehouseListViewItem_c *)v30->klass->_2.typeHierarchy[v31 - 1] != WarehouseListViewItem_TypeInfo )
      {
        break;
      }
      klass = v30[1].klass;
      if ( klass && LOBYTE(v30[2].monitor) )
      {
        if ( LOBYTE(v30[1].fields.sortValue1) )
        {
          byval_arg = klass->_1.byval_arg;
          *(_OWORD *)&v64.fields.currentCryptoKey = *(_OWORD *)&klass->_1.name;
          *(Il2CppType *)&v64.fields.fakeValue = byval_arg;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          }
          v63 = v64;
          v34 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v63, 0LL);
          if ( !v20 )
            break;
          v35 = (const MethodInfo_2F164A0 *)Method_System_Collections_Generic_List_long__Add__;
          v36 = v34;
          v37 = v20;
        }
        else
        {
          v38 = klass->_1.byval_arg;
          *(_OWORD *)&v64.fields.currentCryptoKey = *(_OWORD *)&klass->_1.name;
          *(Il2CppType *)&v64.fields.fakeValue = v38;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          }
          v62 = v64;
          v39 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v62, 0LL);
          if ( !v15 )
            break;
          v35 = (const MethodInfo_2F164A0 *)Method_System_Collections_Generic_List_long__Add__;
          v36 = v39;
          v37 = v15;
        }
        System_Collections_Generic_List_long___Add(v37, v36, v35);
      }
      if ( (__int64)++v29 >= size )
        goto LABEL_28;
      itemList = this->fields.itemList;
    }
    while ( itemList );
LABEL_33:
    sub_B170D4();
  }
LABEL_28:
  if ( !v15 || !v20 )
    goto LABEL_33;
  if ( v20->fields._size + v15->fields._size < 1 )
  {
    *lockList = 0LL;
    sub_B16F98((BattleServantConfConponent_o *)lockList, 0LL, v21, v22, v23, v24, v25, v26);
    *unlockList = 0LL;
    sub_B16F98((BattleServantConfConponent_o *)unlockList, 0LL, v55, v56, v57, v58, v59, v60);
    return 0;
  }
  else
  {
    v40 = System_Collections_Generic_List_long___ToArray(
            v15,
            (const MethodInfo_2F185AC *)Method_System_Collections_Generic_List_long__ToArray__);
    *lockList = v40;
    sub_B16F98((BattleServantConfConponent_o *)lockList, (System_Int32_array **)v40, v41, v42, v43, v44, v45, v46);
    v47 = System_Collections_Generic_List_long___ToArray(
            v20,
            (const MethodInfo_2F185AC *)Method_System_Collections_Generic_List_long__ToArray__);
    *unlockList = v47;
    sub_B16F98((BattleServantConfConponent_o *)unlockList, (System_Int32_array **)v47, v48, v49, v50, v51, v52, v53);
    return 1;
  }
}


void __fastcall WarehouseListViewManager__InitLoad(const MethodInfo *method)
{
  __int64 v1; // x1
  WarehouseListViewManager_c *v2; // x0
  ListViewSort_o *servantSortInfo; // x0
  ListViewSort_o *servantEquipSortInfo; // x0
  ListViewSort_o *servantWarehouseSortInfo; // x0
  ListViewSort_o *servantEquipWarehouseSortInfo; // x0

  if ( (byte_40FA9A2 & 1) == 0 )
  {
    sub_B16FFC(&WarehouseListViewManager_TypeInfo, v1);
    byte_40FA9A2 = 1;
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
        (servantEquipSortInfo = WarehouseListViewManager_TypeInfo->static_fields->servantEquipSortInfo) == 0LL)
    || (ListViewSort__InitLoad(servantEquipSortInfo, 0LL),
        (servantWarehouseSortInfo = WarehouseListViewManager_TypeInfo->static_fields->servantWarehouseSortInfo) == 0LL)
    || (ListViewSort__InitLoad(servantWarehouseSortInfo, 0LL),
        (servantEquipWarehouseSortInfo = WarehouseListViewManager_TypeInfo->static_fields->servantEquipWarehouseSortInfo) == 0LL) )
  {
    sub_B170D4();
  }
  ListViewSort__InitLoad(servantEquipWarehouseSortInfo, 0LL);
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
    sub_B170D4();
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
  ServantEntity_o *servantEntity; // x0
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
  servantEntity = item->fields.servantEntity;
  if ( !servantEntity )
LABEL_16:
    sub_B170D4();
  return !ServantEntity__get_IsOrganization(servantEntity, 0LL)
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
  WebViewManager_o *Instance; // x0
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *v15; // x20
  const MethodInfo *v16; // x1
  WarehouseListViewItem_o *current; // x21
  __int64 v18; // x10
  const MethodInfo *v19; // x1
  int64_t UserSvtId; // x1
  UserServantEntity_o *Entity; // x1
  const MethodInfo *v22; // x2
  UnityEngine_Object_o *viewObject; // x22
  struct ListViewObject_o *v24; // x0
  UserGameEntity_o *SelfUserGame; // x20
  WebViewManager_o *v26; // x0
  WarQuestSelectionMaster_o *v27; // x0
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x9
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *v29; // x19
  const MethodInfo *v30; // x1
  WarehouseListViewItem_o *v31; // x21
  __int64 v32; // x10
  const MethodInfo *v33; // x1
  int64_t v34; // x1
  UserServantEntity_o *v35; // x1
  const MethodInfo *v36; // x2
  int64_t v37; // x0
  const MethodInfo *v38; // x1
  int64_t favoriteUserSvtId; // x27
  int64_t v40; // x22
  int64_t v41; // x0
  const MethodInfo *v42; // x3
  UnityEngine_Object_o *v43; // x22
  struct ListViewObject_o *v44; // x0
  int v45; // w19
  System_Collections_Generic_List_Enumerator_T__o v46; // [xsp+8h] [xbp-98h] BYREF
  int v47[2]; // [xsp+20h] [xbp-80h]
  int v48; // [xsp+28h] [xbp-78h]
  System_Collections_Generic_List_Enumerator_T__o v49; // [xsp+30h] [xbp-70h] BYREF

  if ( (byte_40FA9A8 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_UserServantMaster___, method);
    sub_B16FFC(&Method_DataManager_GetMasterData_UserServantStorageMaster___, v3);
    sub_B16FFC(&Method_DataMasterBase_UserServantStorageMaster__UserServantEntity__long__GetEntity__, v4);
    sub_B16FFC(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v5);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v9);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v10);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11);
    sub_B16FFC(&WarehouseListViewItem_TypeInfo, v12);
    byte_40FA9A8 = 1;
  }
  memset(&v49, 0, sizeof(v49));
  v48 = 0;
  if ( this->fields.itemList )
  {
    if ( (this->fields.kind & 0xFFFFFFFE) == 2 )
    {
      Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( Instance )
      {
        MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                               (DataManager_o *)Instance,
                                               (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserServantStorageMaster___);
        if ( this->fields.itemList )
        {
          v15 = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)MasterData_WarQuestSelectionMaster;
          System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
            &v46,
            (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this->fields.itemList,
            (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
          v49 = v46;
          while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                    &v49,
                    (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__) )
          {
            current = (WarehouseListViewItem_o *)v49.fields.current;
            if ( !v49.fields.current
              || (v18 = *(&WarehouseListViewItem_TypeInfo->_2.bitflags2 + 1),
                  *(&v49.fields.current->klass->_2.bitflags2 + 1) < (unsigned int)v18)
              || (WarehouseListViewItem_c *)v49.fields.current->klass->_2.typeHierarchy[v18 - 1] != WarehouseListViewItem_TypeInfo )
            {
              sub_B170D4();
            }
            if ( WarehouseListViewItem__get_UserSvtId((WarehouseListViewItem_o *)v49.fields.current, v16) >= 1 )
            {
              UserSvtId = WarehouseListViewItem__get_UserSvtId(current, v19);
              if ( !v15 )
                sub_B170D4();
              Entity = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
                         v15,
                         UserSvtId,
                         (const MethodInfo_266F5B0 *)Method_DataMasterBase_UserServantStorageMaster__UserServantEntity__long__GetEntity__);
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
                  sub_B170D4();
                ((void (__fastcall *)(struct ListViewObject_o *, WarehouseListViewItem_o *, Il2CppMethodPointer))v24->klass->vtable._5_SetItem.method)(
                  v24,
                  current,
                  v24->klass->vtable._6_SetItem.methodPtr);
              }
            }
          }
          v47[0] = 335;
          v48 = 1;
          System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
            &v49,
            (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
          v48 = 0;
          return;
        }
      }
LABEL_52:
      sub_B170D4();
    }
    SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
    v26 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !v26 )
      goto LABEL_52;
    v27 = DataManager__GetMasterData_WarQuestSelectionMaster_(
            (DataManager_o *)v26,
            (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserServantMaster___);
    itemList = this->fields.itemList;
    if ( !itemList )
      goto LABEL_52;
    v29 = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)v27;
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v46,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)itemList,
      (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    v49 = v46;
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v49,
              (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__) )
    {
      v31 = (WarehouseListViewItem_o *)v49.fields.current;
      if ( !v49.fields.current
        || (v32 = *(&WarehouseListViewItem_TypeInfo->_2.bitflags2 + 1),
            *(&v49.fields.current->klass->_2.bitflags2 + 1) < (unsigned int)v32)
        || (WarehouseListViewItem_c *)v49.fields.current->klass->_2.typeHierarchy[v32 - 1] != WarehouseListViewItem_TypeInfo )
      {
        sub_B170D4();
      }
      if ( WarehouseListViewItem__get_UserSvtId((WarehouseListViewItem_o *)v49.fields.current, v30) >= 1 )
      {
        v34 = WarehouseListViewItem__get_UserSvtId(v31, v33);
        if ( !v29 )
          sub_B170D4();
        v35 = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
                v29,
                v34,
                (const MethodInfo_266F5B0 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
        if ( v35 )
          WarehouseListViewItem__Modify(v31, v35, v36);
        v37 = WarehouseListViewItem__get_UserSvtId(v31, (const MethodInfo *)v35);
        if ( !SelfUserGame )
          sub_B170D4();
        favoriteUserSvtId = SelfUserGame->fields.favoriteUserSvtId;
        v40 = v37;
        v41 = WarehouseListViewItem__get_UserSvtId(v31, v38);
        WarehouseListViewItem__Modify_26443496(
          v31,
          v40 == favoriteUserSvtId,
          v41 == SelfUserGame->fields.pushUserSvtId,
          v42);
        v43 = (UnityEngine_Object_o *)v31->fields.viewObject;
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        if ( UnityEngine_Object__op_Inequality(v43, 0LL, 0LL) )
        {
          v44 = v31->fields.viewObject;
          if ( !v44 )
            sub_B170D4();
          ((void (__fastcall *)(struct ListViewObject_o *, WarehouseListViewItem_o *, Il2CppMethodPointer))v44->klass->vtable._5_SetItem.method)(
            v44,
            v31,
            v44->klass->vtable._6_SetItem.methodPtr);
        }
      }
    }
    v47[0] = 335;
    v45 = ++v48;
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v49,
      (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    if ( v45 && v47[v45 - 1] == 335 )
      v48 = v45 - 1;
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
  WebViewManager_o *Instance; // x0
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *MasterData_WarQuestSelectionMaster; // x0
  UserServantEntity_o *Entity; // x0
  UserServantEntity_o *v20; // x19
  UserServantEntity_o *v21; // x19
  UserGameEntity_o *SelfUserGame; // x22
  WebViewManager_o *v23; // x0
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *v24; // x0
  struct System_Collections_Generic_List_ListViewItem__o *v25; // x0
  const MethodInfo *v26; // x1
  __int64 v27; // x11
  WarehouseListViewItem_o *v28; // x20
  int64_t v29; // x0
  __int128 v30; // q0
  int64_t v31; // x21
  const MethodInfo *v32; // x2
  int64_t v33; // x0
  const MethodInfo *v34; // x1
  int64_t favoriteUserSvtId; // x28
  int64_t v36; // x21
  int64_t v37; // x0
  const MethodInfo *v38; // x3
  UnityEngine_Object_o *v39; // x21
  struct ListViewObject_o *v40; // x0
  int v41; // w19
  const MethodInfo *v42; // x1
  __int64 v43; // x11
  WarehouseListViewItem_o *current; // x22
  int64_t v45; // x0
  __int128 v46; // q0
  int64_t v47; // x23
  const MethodInfo *v48; // x2
  UnityEngine_Object_o *viewObject; // x23
  struct ListViewObject_o *v50; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v51; // [xsp+0h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v52; // [xsp+20h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v53; // [xsp+40h] [xbp-A0h] BYREF
  int v54[2]; // [xsp+60h] [xbp-80h]
  int v55; // [xsp+68h] [xbp-78h]
  System_Collections_Generic_List_Enumerator_T__o v56; // [xsp+70h] [xbp-70h] BYREF

  if ( (byte_40FA9A9 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_UserServantMaster___, userSvtId);
    sub_B16FFC(&Method_DataManager_GetMasterData_UserServantStorageMaster___, v5);
    sub_B16FFC(&Method_DataMasterBase_UserServantStorageMaster__UserServantEntity__long__GetEntity__, v6);
    sub_B16FFC(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v11);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v12);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v13);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v14);
    sub_B16FFC(&WarehouseListViewItem_TypeInfo, v15);
    byte_40FA9A9 = 1;
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
        v20 = 0LL;
        goto LABEL_42;
      }
      Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( Instance )
      {
        MasterData_WarQuestSelectionMaster = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)DataManager__GetMasterData_WarQuestSelectionMaster_((DataManager_o *)Instance, (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserServantStorageMaster___);
        if ( MasterData_WarQuestSelectionMaster )
        {
          Entity = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
                     MasterData_WarQuestSelectionMaster,
                     userSvtId,
                     (const MethodInfo_266F5B0 *)Method_DataMasterBase_UserServantStorageMaster__UserServantEntity__long__GetEntity__);
          itemList = this->fields.itemList;
          if ( itemList )
          {
            v20 = Entity;
LABEL_42:
            System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
              (System_Collections_Generic_List_Enumerator_T__o *)&v53,
              (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)itemList,
              (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
            v56 = *(System_Collections_Generic_List_Enumerator_T__o *)&v53.fields.currentCryptoKey;
            while ( 1 )
            {
              if ( !System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                      &v56,
                      (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__) )
              {
                v54[0] = 342;
                v55 = 1;
                System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
                  &v56,
                  (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
                v55 = 0;
                return;
              }
              if ( v56.fields.current
                && (v43 = *(&WarehouseListViewItem_TypeInfo->_2.bitflags2 + 1),
                    *(&v56.fields.current->klass->_2.bitflags2 + 1) >= (unsigned int)v43) )
              {
                if ( (WarehouseListViewItem_c *)v56.fields.current->klass->_2.typeHierarchy[v43 - 1] == WarehouseListViewItem_TypeInfo )
                  current = (WarehouseListViewItem_o *)v56.fields.current;
                else
                  current = 0LL;
                if ( v20 )
                {
LABEL_47:
                  if ( !current )
                    sub_B170D4();
                  v45 = WarehouseListViewItem__get_UserSvtId(current, v42);
                  v46 = *(_OWORD *)&v20->fields.id.fields.fakeValue;
                  v47 = v45;
                  *(_OWORD *)&v53.fields.currentCryptoKey = *(_OWORD *)&v20->fields.id.fields.currentCryptoKey;
                  *(_OWORD *)&v53.fields.fakeValue = v46;
                  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
                  }
                  v52 = v53;
                  if ( v47 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v52, 0LL) )
                    WarehouseListViewItem__Modify(current, v20, v48);
                  goto LABEL_58;
                }
              }
              else
              {
                current = 0LL;
                if ( v20 )
                  goto LABEL_47;
              }
              if ( !current )
                sub_B170D4();
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
                  sub_B170D4();
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
      sub_B170D4();
    }
    v21 = 0LL;
    SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
    if ( userSvtId >= 1 )
    {
      v23 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !v23 )
        goto LABEL_73;
      v24 = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                     (DataManager_o *)v23,
                                                                                     (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserServantMaster___);
      if ( !v24 )
        goto LABEL_73;
      v21 = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
              v24,
              userSvtId,
              (const MethodInfo_266F5B0 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    }
    v25 = this->fields.itemList;
    if ( !v25 )
      goto LABEL_73;
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v53,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v25,
      (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    v56.fields.current = (Il2CppObject *)v53.fields.fakeValue;
    *(_OWORD *)&v56.fields.list = *(_OWORD *)&v53.fields.currentCryptoKey;
    while ( 1 )
    {
      if ( !System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v56,
              (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__) )
      {
        v54[0] = 342;
        v41 = ++v55;
        System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
          &v56,
          (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
        if ( v41 && v54[v41 - 1] == 342 )
          v55 = v41 - 1;
        return;
      }
      if ( v56.fields.current
        && (v27 = *(&WarehouseListViewItem_TypeInfo->_2.bitflags2 + 1),
            *(&v56.fields.current->klass->_2.bitflags2 + 1) >= (unsigned int)v27) )
      {
        if ( (WarehouseListViewItem_c *)v56.fields.current->klass->_2.typeHierarchy[v27 - 1] == WarehouseListViewItem_TypeInfo )
          v28 = (WarehouseListViewItem_o *)v56.fields.current;
        else
          v28 = 0LL;
        if ( v21 )
        {
LABEL_20:
          if ( !v28 )
            sub_B170D4();
          v29 = WarehouseListViewItem__get_UserSvtId(v28, v26);
          v30 = *(_OWORD *)&v21->fields.id.fields.fakeValue;
          v31 = v29;
          *(_OWORD *)&v53.fields.currentCryptoKey = *(_OWORD *)&v21->fields.id.fields.currentCryptoKey;
          *(_OWORD *)&v53.fields.fakeValue = v30;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          }
          v51 = v53;
          if ( v31 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v51, 0LL) )
            WarehouseListViewItem__Modify(v28, v21, v32);
          goto LABEL_31;
        }
      }
      else
      {
        v28 = 0LL;
        if ( v21 )
          goto LABEL_20;
      }
      if ( !v28 )
        sub_B170D4();
LABEL_31:
      v33 = WarehouseListViewItem__get_UserSvtId(v28, v26);
      if ( !SelfUserGame )
        sub_B170D4();
      favoriteUserSvtId = SelfUserGame->fields.favoriteUserSvtId;
      v36 = v33;
      v37 = WarehouseListViewItem__get_UserSvtId(v28, v34);
      WarehouseListViewItem__Modify_26443496(
        v28,
        v36 == favoriteUserSvtId,
        v37 == SelfUserGame->fields.pushUserSvtId,
        v38);
      v39 = (UnityEngine_Object_o *)v28->fields.viewObject;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Inequality(v39, 0LL, 0LL) )
      {
        v40 = v28->fields.viewObject;
        if ( !v40 )
          sub_B170D4();
        ((void (__fastcall *)(struct ListViewObject_o *, WarehouseListViewItem_o *, Il2CppMethodPointer))v40->klass->vtable._5_SetItem.method)(
          v40,
          v28,
          v40->klass->vtable._6_SetItem.methodPtr);
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
  struct WarehouseListManager_o *parentManager; // x8
  struct WarehouseListViewManager_o *baseListViewManager; // x9
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x21
  int size; // w22
  unsigned int v15; // w23
  WarehouseListViewItem_o *v16; // x21
  __int64 v17; // x9
  int64_t UserSvtId; // x0
  const MethodInfo *v19; // x1
  int64_t v20; // x0
  struct WarehouseListManager_o *v21; // x8
  struct WarehouseListViewManager_o *v22; // x9
  WarehouseListViewManager_o *v23; // x0
  const MethodInfo *v24; // x1

  if ( (byte_40FA9C4 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_long__int__ContainsKey__, selectServantIdDic);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_long__int__get_Count__, v5);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_long__int__get_Item__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v8);
    sub_B16FFC(&WarehouseListViewItem_TypeInfo, v9);
    byte_40FA9C4 = 1;
  }
  if ( selectServantIdDic
    && System_Collections_Generic_Dictionary_long__int___get_Count(
         selectServantIdDic,
         (const MethodInfo_2E0ADF4 *)Method_System_Collections_Generic_Dictionary_long__int__get_Count__) )
  {
    WarehouseListViewManager__ReleaseAll(this, v10);
    parentManager = this->fields.parentManager;
    if ( !parentManager
      || (baseListViewManager = parentManager->fields.baseListViewManager) == 0LL
      || (parentManager->fields.totalSum = baseListViewManager->fields.selectSum,
          (itemList = this->fields.itemList) == 0LL) )
    {
LABEL_21:
      sub_B170D4();
    }
    size = itemList->fields._size;
    if ( size >= 1 )
    {
      v15 = 0;
      while ( 1 )
      {
        if ( itemList->fields._size <= v15 )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
        v16 = (WarehouseListViewItem_o *)itemList->fields._items->m_Items[v15];
        if ( !v16 )
          goto LABEL_21;
        v17 = *(&WarehouseListViewItem_TypeInfo->_2.bitflags2 + 1);
        if ( *(&v16->klass->_2.bitflags2 + 1) < (unsigned int)v17
          || (WarehouseListViewItem_c *)v16->klass->_2.typeHierarchy[v17 - 1] != WarehouseListViewItem_TypeInfo )
        {
          break;
        }
        UserSvtId = WarehouseListViewItem__get_UserSvtId(v16, (const MethodInfo *)WarehouseListViewItem_TypeInfo);
        if ( System_Collections_Generic_Dictionary_long__int___ContainsKey(
               selectServantIdDic,
               UserSvtId,
               (const MethodInfo_2E0B46C *)Method_System_Collections_Generic_Dictionary_long__int__ContainsKey__) )
        {
          v20 = WarehouseListViewItem__get_UserSvtId(v16, v19);
          v16->fields.selectNum = System_Collections_Generic_Dictionary_long__int___get_Item(
                                    selectServantIdDic,
                                    v20,
                                    (const MethodInfo_2E0B134 *)Method_System_Collections_Generic_Dictionary_long__int__get_Item__);
          v21 = this->fields.parentManager;
          ++this->fields.selectSum;
          if ( !v21 )
            goto LABEL_21;
          v22 = v21->fields.baseListViewManager;
          if ( !v22 )
            goto LABEL_21;
          v21->fields.totalSum = v22->fields.selectSum;
        }
        if ( (int)++v15 >= size )
          return;
        itemList = this->fields.itemList;
        if ( !itemList )
          goto LABEL_21;
      }
      v23 = (WarehouseListViewManager_o *)sub_B173C8(v16);
      WarehouseListViewManager__IsDragStart(v23, v24);
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

  if ( (byte_40FA9B4 & 1) == 0 )
  {
    sub_B16FFC(&SoundManager_TypeInfo, method);
    byte_40FA9B4 = 1;
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
      sub_B170D4();
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
  __int64 v11; // x3
  __int64 v12; // x4
  ServantFilterSelectMenu_CallbackFunc_o *v13; // x22
  CommonUI_o *v14; // x0
  int32_t v15; // w1
  WebViewManager_o *v16; // x0
  ListViewSort_o *v17; // x20
  CommonUI_o *v18; // x21
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x3
  __int64 v22; // x4
  ServantFilterSelectMenu_CallbackFunc_o *v23; // x22
  WebViewManager_o *v24; // x0
  CommonUI_o *v25; // x21
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x3
  __int64 v29; // x4

  if ( (byte_40FA9BC & 1) == 0 )
  {
    sub_B16FFC(&ServantFilterSelectMenu_CallbackFunc_TypeInfo, method);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v3);
    sub_B16FFC(&SoundManager_TypeInfo, v4);
    sub_B16FFC(&Method_WarehouseListViewManager_EndSelectFilterKind__, v5);
    byte_40FA9BC = 1;
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
        Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        sort = this->fields.sort;
        v8 = (CommonUI_o *)Instance;
        v13 = (ServantFilterSelectMenu_CallbackFunc_o *)sub_B170CC(
                                                          ServantFilterSelectMenu_CallbackFunc_TypeInfo,
                                                          v9,
                                                          v10,
                                                          v11,
                                                          v12);
        ServantFilterSelectMenu_CallbackFunc___ctor(
          v13,
          (Il2CppObject *)this,
          Method_WarehouseListViewManager_EndSelectFilterKind__,
          0LL);
        if ( !v8 )
          goto LABEL_16;
        v14 = v8;
        v15 = 0;
        goto LABEL_15;
      case 1:
      case 3:
        v16 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        v17 = this->fields.sort;
        v18 = (CommonUI_o *)v16;
        v23 = (ServantFilterSelectMenu_CallbackFunc_o *)sub_B170CC(
                                                          ServantFilterSelectMenu_CallbackFunc_TypeInfo,
                                                          v19,
                                                          v20,
                                                          v21,
                                                          v22);
        ServantFilterSelectMenu_CallbackFunc___ctor(
          v23,
          (Il2CppObject *)this,
          Method_WarehouseListViewManager_EndSelectFilterKind__,
          0LL);
        if ( !v18 )
          goto LABEL_16;
        CommonUI__OpenServantFilterSelectMenu_18244592(v18, 5, v17, (ListViewManager_o *)this, v23, -1, 0LL);
        break;
      default:
        v24 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        sort = this->fields.sort;
        v25 = (CommonUI_o *)v24;
        v13 = (ServantFilterSelectMenu_CallbackFunc_o *)sub_B170CC(
                                                          ServantFilterSelectMenu_CallbackFunc_TypeInfo,
                                                          v26,
                                                          v27,
                                                          v28,
                                                          v29);
        ServantFilterSelectMenu_CallbackFunc___ctor(
          v13,
          (Il2CppObject *)this,
          Method_WarehouseListViewManager_EndSelectFilterKind__,
          0LL);
        if ( !v25 )
LABEL_16:
          sub_B170D4();
        v15 = 6;
        v14 = v25;
LABEL_15:
        CommonUI__OpenServantFilterSelectMenu(v14, v15, sort, v13, -1, 0LL);
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

  if ( (byte_40FA9B3 & 1) == 0 )
  {
    sub_B16FFC(&WarehouseListViewItem_TypeInfo, item);
    byte_40FA9B3 = 1;
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
  struct ListViewSort_o *sort; // x8

  if ( (byte_40FA9BF & 1) == 0 )
  {
    sub_B16FFC(&SoundManager_TypeInfo, method);
    byte_40FA9BF = 1;
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
      sub_B170D4();
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
  __int64 v12; // x3
  __int64 v13; // x4
  ServantSortSelectMenu_CallbackFunc_o *v14; // x22
  int32_t v15; // w1

  if ( (byte_40FA9BA & 1) == 0 )
  {
    sub_B16FFC(&ServantSortSelectMenu_CallbackFunc_TypeInfo, method);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v3);
    sub_B16FFC(&SoundManager_TypeInfo, v4);
    sub_B16FFC(&Method_WarehouseListViewManager_EndSelectSortKind__, v5);
    byte_40FA9BA = 1;
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
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sort = this->fields.sort;
    v9 = (CommonUI_o *)Instance;
    v14 = (ServantSortSelectMenu_CallbackFunc_o *)sub_B170CC(
                                                    ServantSortSelectMenu_CallbackFunc_TypeInfo,
                                                    v10,
                                                    v11,
                                                    v12,
                                                    v13);
    ServantSortSelectMenu_CallbackFunc___ctor(
      v14,
      (Il2CppObject *)this,
      Method_WarehouseListViewManager_EndSelectSortKind__,
      0LL);
    if ( !v9 )
      sub_B170D4();
    if ( kind < 4 )
      v15 = kind + 1;
    else
      v15 = 3;
    CommonUI__OpenServantSortSelectMenu(v9, v15, sort, 1, v14, 0LL);
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

  if ( (byte_40FA9B9 & 1) == 0 )
  {
    sub_B16FFC(&WarehouseListViewItem_TypeInfo, item);
    byte_40FA9B9 = 1;
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
  struct UIScrollView_o *v7; // x0
  UIScrollView_o *v8; // x0

  if ( (byte_40FA9B0 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    byte_40FA9B0 = 1;
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
          || (((void (__fastcall *)(struct UIScrollView_o *, __int64, Il2CppMethodPointer))v7->klass->vtable._8_UpdateScrollbars.method)(
                v7,
                1LL,
                v7->klass->vtable._9_SetDragAmount.methodPtr),
              (v8 = this->fields.scrollView) == 0LL) )
        {
          sub_B170D4();
        }
        UIScrollView__UpdatePosition(v8, 0LL);
      }
    }
  }
}


void __fastcall WarehouseListViewManager__RefrashListDisp(WarehouseListViewManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  WarehouseListManager_o *parentManager; // x0
  const MethodInfo *v5; // x1
  System_Collections_Generic_List_WarehouseListViewObject__o *ObjectList; // x0
  int size; // w21
  System_Collections_Generic_List_WarehouseListViewObject__o *v8; // x20
  __int64 v9; // x22
  unsigned int v10; // w8
  WarehouseListViewObject_o *v11; // x0

  if ( (byte_40FA9A6 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_WarehouseListViewObject__get_Count__, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_WarehouseListViewObject__get_Item__, v3);
    byte_40FA9A6 = 1;
  }
  parentManager = this->fields.parentManager;
  if ( !parentManager )
    goto LABEL_13;
  WarehouseListManager__RefrashListDisp(parentManager, method);
  ObjectList = WarehouseListViewManager__get_ObjectList(this, v5);
  if ( !ObjectList )
    goto LABEL_13;
  size = ObjectList->fields._size;
  v8 = ObjectList;
  if ( size >= 1 )
  {
    v9 = 0LL;
    v10 = ObjectList->fields._size;
    while ( 1 )
    {
      if ( v10 <= (unsigned int)v9 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
      v11 = v8->fields._items->m_Items[v9];
      if ( !v11 )
        break;
      ((void (__fastcall *)(WarehouseListViewObject_o *, bool, Il2CppMethodPointer))v11->klass->vtable._9_SetInput.method)(
        v11,
        this->fields.isInput,
        v11->klass->vtable._10_Invalidation.methodPtr);
      if ( (int)v9 + 1 >= size )
        return;
      v10 = v8->fields._size;
      ++v9;
    }
LABEL_13:
    sub_B170D4();
  }
}


void __fastcall WarehouseListViewManager__ReleaseAll(WarehouseListViewManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x0
  Il2CppObject *current; // x20
  __int64 v9; // x9
  const MethodInfo *v10; // x3
  const MethodInfo *v11; // x1
  System_Collections_Generic_List_Enumerator_T__o v12; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_40FA9B2 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v3);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v4);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v5);
    sub_B16FFC(&WarehouseListViewItem_TypeInfo, v6);
    byte_40FA9B2 = 1;
  }
  memset(&v12, 0, sizeof(v12));
  itemList = this->fields.itemList;
  this->fields.sellEnableRestCnt = 0;
  if ( !itemList )
    sub_B170D4();
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v12,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)itemList,
    (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v12,
            (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__) )
  {
    current = v12.fields.current;
    if ( !v12.fields.current )
      goto LABEL_12;
    v9 = *(&WarehouseListViewItem_TypeInfo->_2.bitflags2 + 1);
    if ( *(&v12.fields.current->klass->_2.bitflags2 + 1) < (unsigned int)v9
      || (WarehouseListViewItem_c *)v12.fields.current->klass->_2.typeHierarchy[v9 - 1] != WarehouseListViewItem_TypeInfo )
    {
      sub_B173C8(v12.fields.current);
LABEL_12:
      sub_B170D4();
    }
    ListViewItem__set_IsSelect((ListViewItem_o *)v12.fields.current, 0, 0LL);
    WarehouseListViewManager__ChangeSellEnableRestCnt(this, 1, (WarehouseListViewItem_o *)current, v10);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v12,
    (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
  this->fields.selectSum = 0;
  WarehouseListViewManager__RefrashListDisp(this, v11);
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
  __int64 v18; // x3
  __int64 v19; // x4
  Il2CppObject *current; // x21
  System_Action_o *v21; // x22
  System_Collections_Generic_List_Enumerator_T__o v22; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_40FA9AE & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, *(_QWORD *)&mode);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_WarehouseListViewObject__Dispose__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_WarehouseListViewObject__MoveNext__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_WarehouseListViewObject__get_Current__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_WarehouseListViewObject__GetEnumerator__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_WarehouseListViewObject__get_Count__, v11);
    sub_B16FFC(&Method_WarehouseListViewManager_OnMoveEnd__, v12);
    sub_B16FFC(&StringLiteral_10004, v13);
    byte_40FA9AE = 1;
  }
  memset(&v22, 0, sizeof(v22));
  ObjectList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)WarehouseListViewManager__get_ObjectList(
                                                                                                this,
                                                                                                *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_B170D4();
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10004,
      delay,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v22,
      ObjectList,
      (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_WarehouseListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v22,
              (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_WarehouseListViewObject__MoveNext__) )
    {
      current = v22.fields.current;
      v21 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v16, v17, v18, v19);
      System_Action___ctor(v21, (Il2CppObject *)this, Method_WarehouseListViewManager_OnMoveEnd__, 0LL);
      if ( !current )
        sub_B170D4();
      WarehouseListViewObject__Init_18325804((WarehouseListViewObject_o *)current, mode, v21, delay, 0LL);
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v22,
      (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_WarehouseListViewObject__Dispose__);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarehouseListViewManager__RequestListObject_26456168(
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
  __int64 v16; // x3
  __int64 v17; // x4
  Il2CppObject *current; // x21
  System_Action_o *v19; // x22
  System_Collections_Generic_List_Enumerator_T__o v20; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_40FA9AF & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, *(_QWORD *)&mode);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_WarehouseListViewObject__Dispose__, v5);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_WarehouseListViewObject__MoveNext__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_WarehouseListViewObject__get_Current__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_WarehouseListViewObject__GetEnumerator__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_WarehouseListViewObject__get_Count__, v9);
    sub_B16FFC(&Method_WarehouseListViewManager_OnMoveEnd__, v10);
    sub_B16FFC(&StringLiteral_10004, v11);
    byte_40FA9AF = 1;
  }
  memset(&v20, 0, sizeof(v20));
  ObjectList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)WarehouseListViewManager__get_ObjectList(
                                                                                                this,
                                                                                                *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_B170D4();
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10004,
      0.0,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v20,
      ObjectList,
      (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_WarehouseListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v20,
              (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_WarehouseListViewObject__MoveNext__) )
    {
      current = v20.fields.current;
      v19 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v14, v15, v16, v17);
      System_Action___ctor(v19, (Il2CppObject *)this, Method_WarehouseListViewManager_OnMoveEnd__, 0LL);
      if ( !current )
        sub_B170D4();
      WarehouseListViewObject__Init_18325868((WarehouseListViewObject_o *)current, mode, v19, 0LL);
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v20,
      (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_WarehouseListViewObject__Dispose__);
  }
}


void __fastcall WarehouseListViewManager__SaveSortInfo(WarehouseListViewManager_o *this, const MethodInfo *method)
{
  WarehouseListViewManager_c *v2; // x0
  ListViewSort_o *servantSortInfo; // x8
  ListViewSort_o *servantEquipSortInfo; // x8
  ListViewSort_o *servantWarehouseSortInfo; // x8
  ListViewSort_o *servantEquipWarehouseSortInfo; // x8

  if ( (byte_40FA9A7 & 1) == 0 )
  {
    sub_B16FFC(&WarehouseListViewManager_TypeInfo, method);
    byte_40FA9A7 = 1;
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
    sub_B170D4();
  }
}


void __fastcall WarehouseListViewManager__SelectListView(
        WarehouseListViewManager_o *this,
        WarehouseListViewItem_o *selectItem,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  SoundManager_c *v8; // x0
  const MethodInfo *v9; // x4
  struct WarehouseListManager_o *parentManager; // x8
  struct WarehouseListViewManager_o *baseListViewManager; // x9
  UILabel_o *selectDoneLabel; // x21
  System_String_o *v13; // x0
  struct WarehouseListManager_o *v14; // x8
  System_String_o *v15; // x22
  __int64 v16; // x0
  struct WarehouseListManager_o *v17; // x8
  Il2CppObject *v18; // x23
  Il2CppObject *v19; // x0
  System_String_o *v20; // x0
  const MethodInfo *v21; // x3
  const MethodInfo *v22; // x2
  struct WarehouseListManager_o *v23; // x8
  WarehouseListViewManager_o *v24; // x0
  const MethodInfo *v25; // x1
  struct WarehouseListManager_o *v26; // x8
  struct WarehouseListManager_o *v27; // x8
  struct WarehouseListViewManager_o *v28; // x9
  UILabel_o *v29; // x21
  System_String_o *v30; // x0
  struct WarehouseListManager_o *v31; // x8
  System_String_o *v32; // x22
  __int64 v33; // x0
  struct WarehouseListManager_o *v34; // x8
  Il2CppObject *v35; // x23
  Il2CppObject *v36; // x0
  System_String_o *v37; // x0
  const MethodInfo *v38; // x3
  int32_t sendMax; // [xsp+8h] [xbp-38h] BYREF
  int32_t totalSum; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_40FA9B5 & 1) == 0 )
  {
    sub_B16FFC(&int_TypeInfo, selectItem);
    sub_B16FFC(&LocalizationManager_TypeInfo, v5);
    sub_B16FFC(&SoundManager_TypeInfo, v6);
    sub_B16FFC(&StringLiteral_12413, v7);
    byte_40FA9B5 = 1;
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
    parentManager = this->fields.parentManager;
    --this->fields.selectSum;
    if ( parentManager )
    {
      baseListViewManager = parentManager->fields.baseListViewManager;
      if ( baseListViewManager )
      {
        parentManager->fields.totalSum = baseListViewManager->fields.selectSum;
        selectDoneLabel = this->fields.selectDoneLabel;
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v13 = LocalizationManager__Get((System_String_o *)StringLiteral_12413, 0LL);
        v14 = this->fields.parentManager;
        if ( v14 )
        {
          v15 = v13;
          totalSum = v14->fields.totalSum;
          v16 = j_il2cpp_value_box_0(int_TypeInfo, &totalSum);
          v17 = this->fields.parentManager;
          if ( v17 )
          {
            v18 = (Il2CppObject *)v16;
            sendMax = v17->fields.sendMax;
            v19 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &sendMax);
            v20 = System_String__Format_43739268(v15, v18, v19, 0LL);
            if ( selectDoneLabel )
            {
              UILabel__set_text(selectDoneLabel, v20, 0LL);
              WarehouseListViewManager__ChangeSellEnableRestCnt(this, 1, selectItem, v21);
              v23 = this->fields.parentManager;
              if ( v23 )
              {
                v24 = v23->fields.baseListViewManager;
                if ( v24 )
                {
                  WarehouseListViewManager__DecrementNumber(v24, selectItem->fields.selectNum, v22);
                  ListViewItem__set_IsSelect((ListViewItem_o *)selectItem, 0, 0LL);
LABEL_37:
                  WarehouseListViewManager__RefrashListDisp(this, v25);
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
  if ( WarehouseListViewManager__IsSelectEnable(this, selectItem, 0, 0, v9) )
  {
    if ( (WORD1(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    v26 = this->fields.parentManager;
    if ( v26 )
    {
      selectItem->fields.selectNum = v26->fields.totalSum;
      v27 = this->fields.parentManager;
      ++this->fields.selectSum;
      if ( v27 )
      {
        v28 = v27->fields.baseListViewManager;
        if ( v28 )
        {
          v27->fields.totalSum = v28->fields.selectSum;
          v29 = this->fields.selectDoneLabel;
          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          v30 = LocalizationManager__Get((System_String_o *)StringLiteral_12413, 0LL);
          v31 = this->fields.parentManager;
          if ( v31 )
          {
            v32 = v30;
            totalSum = v31->fields.totalSum;
            v33 = j_il2cpp_value_box_0(int_TypeInfo, &totalSum);
            v34 = this->fields.parentManager;
            if ( v34 )
            {
              v35 = (Il2CppObject *)v33;
              sendMax = v34->fields.sendMax;
              v36 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &sendMax);
              v37 = System_String__Format_43739268(v32, v35, v36, 0LL);
              if ( v29 )
              {
                UILabel__set_text(v29, v37, 0LL);
                WarehouseListViewManager__ChangeSellEnableRestCnt(this, 0, selectItem, v38);
                goto LABEL_37;
              }
            }
          }
        }
      }
    }
LABEL_42:
    sub_B170D4();
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
  const MethodInfo *v5; // x1

  if ( (byte_40FA9B8 & 1) == 0 )
  {
    sub_B16FFC(&SoundManager_TypeInfo, selectItem);
    byte_40FA9B8 = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(0, 0LL);
  if ( !selectItem )
    sub_B170D4();
  selectItem->fields.isSwapChoice ^= 1u;
  WarehouseListViewManager__RefrashListDisp(this, v5);
}


void __fastcall WarehouseListViewManager__SelectListViewLock(
        WarehouseListViewManager_o *this,
        WarehouseListViewItem_o *selectItem,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x1

  if ( (byte_40FA9B7 & 1) == 0 )
  {
    sub_B16FFC(&SoundManager_TypeInfo, selectItem);
    byte_40FA9B7 = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(11, 0LL);
  if ( !selectItem )
    sub_B170D4();
  selectItem->fields.isSwapLock ^= 1u;
  WarehouseListViewManager__RefrashListDisp(this, v5);
}


void __fastcall WarehouseListViewManager__SetDragEnd(WarehouseListViewManager_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  const MethodInfo *v4; // x2
  int32_t dragStartIndex; // w20
  int32_t dragEndIndex; // w21

  if ( (byte_40FA9C8 & 1) == 0 )
  {
    sub_B16FFC(&SoundManager_TypeInfo, method);
    byte_40FA9C8 = 1;
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
  *(_OWORD *)&this->fields.dragSelectSum = xmmword_31369F0;
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
  struct System_Collections_Generic_List_ListViewItem__o *itemSortList; // x22
  ListViewItem_o *v11; // x19
  WarehouseListViewItem_c *v12; // x1
  __int64 v13; // x9
  int monitor_high; // w8
  bool v15; // w21
  _BOOL4 v16; // w21
  bool IsSelect; // w0
  const MethodInfo *v18; // x4
  ServantEntity_o *monitor; // x0
  int v20; // w8
  UnityEngine_Object_o *viewObject; // x20
  WarehouseListViewObject_o *v22; // x0
  __int64 v23; // x9
  bool result; // w0
  ServantEntity_o *v25; // x0
  WarehouseListViewManager_o *v26; // x0
  int32_t v27; // w1
  bool v28; // w2
  const MethodInfo *v29; // x3

  if ( (byte_40FA9C6 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, *(_QWORD *)&index);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v7);
    sub_B16FFC(&WarehouseListViewItem_TypeInfo, v8);
    sub_B16FFC(&WarehouseListViewObject_TypeInfo, v9);
    byte_40FA9C6 = 1;
  }
  itemSortList = this->fields.itemSortList;
  if ( !itemSortList )
    goto LABEL_49;
  if ( itemSortList->fields._size <= (unsigned int)index )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
  v11 = itemSortList->fields._items->m_Items[index];
  if ( !v11 )
    goto LABEL_49;
  v12 = WarehouseListViewItem_TypeInfo;
  v13 = *(&WarehouseListViewItem_TypeInfo->_2.bitflags2 + 1);
  if ( *(&v11->klass->_2.bitflags2 + 1) < (unsigned int)v13
    || (WarehouseListViewItem_c *)v11->klass->_2.typeHierarchy[v13 - 1] != WarehouseListViewItem_TypeInfo )
  {
    v22 = (WarehouseListViewObject_o *)v11;
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
          --this->fields.dragSelectFriendShipSum;
        else
          --this->fields.dragSelectSum;
        if ( !this->fields.kind )
        {
          monitor = (ServantEntity_o *)v11[1].monitor;
          if ( !monitor )
            goto LABEL_49;
          if ( ServantEntity__get_IsOrganization(monitor, 0LL) && !HIDWORD(v11[1].fields.sortValue2B) )
            --this->fields.dragServantSelectSum;
        }
      }
      v15 = 0;
      v20 = -1;
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
    v16 = this->fields.isDragSelect;
    IsSelect = ListViewItem__get_IsSelect(v11, 0LL);
    if ( v16 )
    {
      if ( !IsSelect )
      {
        if ( !WarehouseListViewManager__IsSelectEnable(
                this,
                (WarehouseListViewItem_o *)v11,
                this->fields.dragSelectSum,
                this->fields.dragServantSelectSum,
                v18) )
        {
          v15 = 1;
          goto LABEL_32;
        }
        if ( BYTE6(v11[1].fields.sortValue1) )
          ++this->fields.dragSelectFriendShipSum;
        else
          ++this->fields.dragSelectSum;
        if ( !this->fields.kind )
        {
          v25 = (ServantEntity_o *)v11[1].monitor;
          if ( !v25 )
            goto LABEL_49;
          if ( ServantEntity__get_IsOrganization(v25, 0LL) && !HIDWORD(v11[1].fields.sortValue2B) )
            ++this->fields.dragServantSelectSum;
        }
        goto LABEL_48;
      }
    }
    else if ( IsSelect )
    {
LABEL_48:
      v15 = 0;
      v20 = 1;
LABEL_29:
      HIDWORD(v11[2].monitor) = v20;
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
  v22 = (WarehouseListViewObject_o *)v11->fields.viewObject;
  if ( !v22 )
LABEL_49:
    sub_B170D4();
  v23 = *(&WarehouseListViewObject_TypeInfo->_2.bitflags2 + 1);
  if ( *(&v22->klass->_2.bitflags2 + 1) >= (unsigned int)v23
    && (WarehouseListViewObject_c *)v22->klass->_2.typeHierarchy[v23 - 1] == WarehouseListViewObject_TypeInfo )
  {
    WarehouseListViewObject__SetupDisp(v22, 0LL);
    return v15;
  }
LABEL_51:
  v26 = (WarehouseListViewManager_o *)sub_B173C8(v22);
  WarehouseListViewManager__SetDragStart(v26, v27, v28, v29);
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
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  int32_t dragStartIndex; // w8
  int32_t dragEndIndex; // w9
  int32_t v12; // w25
  int32_t v13; // w26
  int32_t v14; // w23
  int32_t v15; // w24
  int32_t v16; // w22
  struct WarehouseListManager_o *parentManager; // x8
  int v18; // w27
  struct System_Collections_Generic_List_ListViewItem__o *itemSortList; // x20
  WarehouseListViewObject_o *v20; // x20
  __int64 v21; // x9
  UnityEngine_Object_o *v22; // x21
  WarehouseListViewObject_o *v23; // x0
  __int64 v24; // x9
  WarehouseListViewManager_o *v25; // x0
  int32_t v26; // w1
  bool v27; // w2
  const MethodInfo *v28; // x3

  v5 = startIndex;
  if ( (byte_40FA9C5 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, *(_QWORD *)&startIndex);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v7);
    sub_B16FFC(&WarehouseListViewItem_TypeInfo, v8);
    sub_B16FFC(&WarehouseListViewObject_TypeInfo, v9);
    byte_40FA9C5 = 1;
  }
  dragStartIndex = this->fields.dragStartIndex;
  if ( (dragStartIndex & 0x80000000) != 0 )
  {
    v12 = -1;
    v13 = -1;
  }
  else
  {
    dragEndIndex = this->fields.dragEndIndex;
    if ( dragStartIndex <= dragEndIndex )
      v12 = this->fields.dragEndIndex;
    else
      v12 = this->fields.dragStartIndex;
    if ( dragStartIndex <= dragEndIndex )
      v13 = this->fields.dragStartIndex;
    else
      v13 = this->fields.dragEndIndex;
  }
  this->fields.dragStartIndex = v5;
  this->fields.dragEndIndex = endIndex;
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
        WarehouseListViewManager__SetDragSelect(this, v16, 0, method);
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
          WarehouseListViewManager__SetDragSelect(this, v5, 1, method);
        ++v5;
      }
      while ( v5 <= endIndex );
    }
    else
    {
      do
      {
        if ( v5 > v12 || (v13 & 0x80000000) != 0 || v5 < v13 )
          WarehouseListViewManager__SetDragSelect(this, v5, 1, method);
        --v5;
      }
      while ( v5 >= endIndex );
    }
    if ( (v15 & 0x80000000) == 0 && this->fields.isDragSelect )
    {
      parentManager = this->fields.parentManager;
      if ( !parentManager )
LABEL_63:
        sub_B170D4();
      if ( v15 <= v14 )
      {
        v18 = parentManager->fields.totalSum + 1;
        while ( 1 )
        {
          itemSortList = this->fields.itemSortList;
          if ( !itemSortList )
            goto LABEL_63;
          if ( itemSortList->fields._size <= (unsigned int)v15 )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
          v20 = (WarehouseListViewObject_o *)itemSortList->fields._items->m_Items[v15];
          if ( !v20 )
            goto LABEL_63;
          v21 = *(&WarehouseListViewItem_TypeInfo->_2.bitflags2 + 1);
          if ( *(&v20->klass->_2.bitflags2 + 1) < (unsigned int)v21
            || (WarehouseListViewItem_c *)v20->klass->_2.typeHierarchy[v21 - 1] != WarehouseListViewItem_TypeInfo )
          {
            break;
          }
          if ( SHIDWORD(v20[1].fields.mDragDrop) >= 1 )
          {
            HIDWORD(v20[1].fields.mDragDrop) = v18;
            v22 = *(UnityEngine_Object_o **)&v20->fields.isBusy;
            ++v18;
            if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            }
            if ( UnityEngine_Object__op_Inequality(v22, 0LL, 0LL) )
            {
              v23 = *(WarehouseListViewObject_o **)&v20->fields.isBusy;
              if ( !v23 )
                goto LABEL_63;
              v24 = *(&WarehouseListViewObject_TypeInfo->_2.bitflags2 + 1);
              if ( *(&v23->klass->_2.bitflags2 + 1) < (unsigned int)v24
                || (WarehouseListViewObject_c *)v23->klass->_2.typeHierarchy[v24 - 1] != WarehouseListViewObject_TypeInfo )
              {
                goto LABEL_65;
              }
              WarehouseListViewObject__SetupDisp(v23, 0LL);
            }
          }
          if ( ++v15 > v14 )
            return;
        }
        v23 = v20;
LABEL_65:
        v25 = (WarehouseListViewManager_o *)sub_B173C8(v23);
        WarehouseListViewManager__SetDragSelect(v25, v26, v27, v28);
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
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  struct System_Collections_Generic_List_ListViewItem__o *itemSortList; // x25
  int size; // w21
  int v12; // w22
  ListViewItem_o *v13; // x0
  __int64 v14; // x9
  UnityEngine_Object_o *scrollView; // x20
  UIScrollView_o *v16; // x0

  if ( (byte_40FA9C7 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, *(_QWORD *)&startIndex);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v7);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v8);
    sub_B16FFC(&WarehouseListViewItem_TypeInfo, v9);
    byte_40FA9C7 = 1;
  }
  *(_OWORD *)&this->fields.dragSelectSum = xmmword_31369F0;
  itemSortList = this->fields.itemSortList;
  this->fields.isDragSelect = isDragSelect;
  this->fields.dragSelectFriendShipSum = 0;
  if ( !itemSortList )
    goto LABEL_22;
  size = itemSortList->fields._size;
  if ( size >= 1 )
  {
    v12 = 0;
    while ( 1 )
    {
      if ( itemSortList->fields._size <= (unsigned int)v12 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
      v13 = itemSortList->fields._items->m_Items[v12];
      if ( !v13 )
        goto LABEL_22;
      v14 = *(&WarehouseListViewItem_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v13->klass->_2.bitflags2 + 1) < (unsigned int)v14
        || (WarehouseListViewItem_c *)v13->klass->_2.typeHierarchy[v14 - 1] != WarehouseListViewItem_TypeInfo )
      {
        break;
      }
      ++v12;
      HIDWORD(v13[2].monitor) = -1;
      if ( v12 >= size )
        goto LABEL_14;
      itemSortList = this->fields.itemSortList;
      if ( !itemSortList )
        goto LABEL_22;
    }
    sub_B173C8(v13);
LABEL_22:
    sub_B170D4();
  }
LABEL_14:
  WarehouseListViewManager__SetDragSelectItem(this, startIndex, startIndex, method);
  scrollView = (UnityEngine_Object_o *)this->fields.scrollView;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(scrollView, 0LL, 0LL) )
  {
    v16 = this->fields.scrollView;
    if ( !v16 )
      goto LABEL_22;
    UIScrollView__Press(v16, 0, 0LL);
  }
}


void __fastcall WarehouseListViewManager__SetFilterButtonImage(
        WarehouseListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  ListViewSort_o *sort; // x0
  UISprite_o *filterSprite; // x19
  bool v6; // w0
  System_String_o **v7; // x8

  if ( (byte_40FA9BE & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_16927, method);
    sub_B16FFC(&StringLiteral_16926, v3);
    byte_40FA9BE = 1;
  }
  sort = this->fields.sort;
  if ( !sort
    || (filterSprite = this->fields.filterSprite, v6 = ListViewSort__CheckFilterDefaultAll(sort, -1, 0LL), !filterSprite) )
  {
    sub_B170D4();
  }
  v7 = (System_String_o **)&StringLiteral_16926;
  if ( !v6 )
    v7 = (System_String_o **)&StringLiteral_16927;
  UISprite__set_spriteName(filterSprite, *v7, 0LL);
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
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.callbackFunc,
    (System_Int32_array **)callback,
    (System_String_array **)callback,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  WarehouseListViewManager__SetMode_26454636(this, mode, v10);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarehouseListViewManager__SetMode_26454636(
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
  struct System_Collections_Generic_List_ListViewItem__o *v12; // x0
  ListViewItem_o *current; // x20
  __int64 v14; // x9
  const MethodInfo *v15; // x1
  struct WarehouseListManager_o *v16; // x8
  struct WarehouseListViewManager_o *v17; // x9
  UILabel_o *v18; // x21
  System_String_o *v19; // x0
  struct WarehouseListManager_o *v20; // x8
  System_String_o *v21; // x22
  __int64 v22; // x0
  struct WarehouseListManager_o *v23; // x8
  Il2CppObject *v24; // x23
  Il2CppObject *v25; // x2
  System_String_o *v26; // x1
  const MethodInfo *v27; // x2
  struct WarehouseListManager_o *v28; // x8
  WarehouseListViewManager_o *v29; // x0
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x0
  LocalizationManager_c **v31; // x21
  char v32; // w24
  __int64 v33; // x9
  const MethodInfo *v34; // x1
  struct WarehouseListManager_o *parentManager; // x8
  struct WarehouseListViewManager_o *baseListViewManager; // x9
  LocalizationManager_c **v37; // x28
  LocalizationManager_c *v38; // x0
  UILabel_o *selectDoneLabel; // x21
  System_String_o *v40; // x0
  struct WarehouseListManager_o *v41; // x8
  System_String_o *v42; // x22
  __int64 v43; // x0
  struct WarehouseListManager_o *v44; // x8
  Il2CppObject *v45; // x23
  Il2CppObject *v46; // x2
  System_String_o *v47; // x1
  const MethodInfo *v48; // x2
  struct WarehouseListManager_o *v49; // x8
  WarehouseListViewManager_o *v50; // x0
  const MethodInfo *v51; // x1
  const MethodInfo *v52; // x2
  int32_t v53; // w1
  const MethodInfo *v54; // x1
  int32_t sendMax; // [xsp+4h] [xbp-8Ch] BYREF
  System_Collections_Generic_List_Enumerator_T__o v56; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v57; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_40FA9AD & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__, *(_QWORD *)&mode);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v5);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v6);
    sub_B16FFC(&int_TypeInfo, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v8);
    sub_B16FFC(&LocalizationManager_TypeInfo, v9);
    sub_B16FFC(&WarehouseListViewItem_TypeInfo, v10);
    sub_B16FFC(&StringLiteral_12413, v11);
    byte_40FA9AD = 1;
  }
  memset(&v57, 0, sizeof(v57));
  this->fields.initMode = mode;
  this->fields.callbackCount = ListViewManager__get_ObjectSum((ListViewManager_o *)this, 0LL);
  ListViewManager__set_IsInput((ListViewManager_o *)this, mode == 2, 0LL);
  if ( (unsigned int)(mode - 1) < 2 )
  {
    itemList = this->fields.itemList;
    if ( itemList )
    {
      System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
        &v56,
        (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)itemList,
        (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
      v31 = &LocalizationManager_TypeInfo;
      v32 = 0;
      v57 = v56;
      while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                &v57,
                (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__) )
      {
        current = (ListViewItem_o *)v57.fields.current;
        if ( !v57.fields.current )
          goto LABEL_53;
        v33 = *(&WarehouseListViewItem_TypeInfo->_2.bitflags2 + 1);
        if ( *(&v57.fields.current->klass->_2.bitflags2 + 1) < (unsigned int)v33
          || (WarehouseListViewItem_c *)v57.fields.current->klass->_2.typeHierarchy[v33 - 1] != WarehouseListViewItem_TypeInfo )
        {
          sub_B173C8(v57.fields.current);
LABEL_52:
          sub_B173C8(current);
LABEL_53:
          sub_B170D4();
        }
        if ( ListViewItem__get_IsSelect((ListViewItem_o *)v57.fields.current, 0LL)
          && WarehouseListViewItem__get_IsCanNotSelect((WarehouseListViewItem_o *)current, v34) )
        {
          parentManager = this->fields.parentManager;
          --this->fields.selectSum;
          if ( !parentManager )
            sub_B170D4();
          baseListViewManager = parentManager->fields.baseListViewManager;
          if ( !baseListViewManager )
            sub_B170D4();
          v37 = v31;
          parentManager->fields.totalSum = baseListViewManager->fields.selectSum;
          v38 = *v31;
          selectDoneLabel = this->fields.selectDoneLabel;
          if ( (BYTE3(v38->vtable._0_Equals.methodPtr) & 4) != 0 && !v38->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(v38);
          v40 = LocalizationManager__Get((System_String_o *)StringLiteral_12413, 0LL);
          v41 = this->fields.parentManager;
          if ( !v41 )
            sub_B170D4();
          v42 = v40;
          LODWORD(v56.fields.list) = v41->fields.totalSum;
          v43 = j_il2cpp_value_box_0(int_TypeInfo, &v56);
          v44 = this->fields.parentManager;
          if ( !v44 )
            sub_B170D4();
          v45 = (Il2CppObject *)v43;
          sendMax = v44->fields.sendMax;
          v46 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &sendMax);
          v47 = System_String__Format_43739268(v42, v45, v46, 0LL);
          if ( !selectDoneLabel )
            sub_B170D4();
          UILabel__set_text(selectDoneLabel, v47, 0LL);
          v49 = this->fields.parentManager;
          if ( !v49 )
            sub_B170D4();
          v50 = v49->fields.baseListViewManager;
          if ( !v50 )
            sub_B170D4();
          v31 = v37;
          WarehouseListViewManager__DecrementNumber(v50, current->fields.selectNum, v48);
          ListViewItem__set_IsSelect(current, 0, 0LL);
          v32 = 1;
        }
      }
      System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
        &v57,
        (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
      if ( (v32 & 1) != 0 )
        WarehouseListViewManager__RefrashListDisp(this, v51);
      if ( this->fields.isInput )
        v53 = 3;
      else
        v53 = 2;
      goto LABEL_49;
    }
LABEL_69:
    sub_B170D4();
  }
  if ( mode != 3 )
    return;
  v12 = this->fields.itemList;
  if ( !v12 )
    goto LABEL_69;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v56,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v12,
    (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  v57 = v56;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v57,
            (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__) )
  {
    current = (ListViewItem_o *)v57.fields.current;
    if ( !v57.fields.current )
      sub_B170D4();
    v14 = *(&WarehouseListViewItem_TypeInfo->_2.bitflags2 + 1);
    if ( *(&v57.fields.current->klass->_2.bitflags2 + 1) < (unsigned int)v14
      || (WarehouseListViewItem_c *)v57.fields.current->klass->_2.typeHierarchy[v14 - 1] != WarehouseListViewItem_TypeInfo )
    {
      goto LABEL_52;
    }
    if ( ListViewItem__get_IsSelect((ListViewItem_o *)v57.fields.current, 0LL)
      && WarehouseListViewItem__get_IsCanNotSelect((WarehouseListViewItem_o *)current, v15) )
    {
      v16 = this->fields.parentManager;
      --this->fields.selectSum;
      if ( !v16 )
        sub_B170D4();
      v17 = v16->fields.baseListViewManager;
      if ( !v17 )
        sub_B170D4();
      v16->fields.totalSum = v17->fields.selectSum;
      v18 = this->fields.selectDoneLabel;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v19 = LocalizationManager__Get((System_String_o *)StringLiteral_12413, 0LL);
      v20 = this->fields.parentManager;
      if ( !v20 )
        sub_B170D4();
      v21 = v19;
      LODWORD(v56.fields.list) = v20->fields.totalSum;
      v22 = j_il2cpp_value_box_0(int_TypeInfo, &v56);
      v23 = this->fields.parentManager;
      if ( !v23 )
        sub_B170D4();
      v24 = (Il2CppObject *)v22;
      sendMax = v23->fields.sendMax;
      v25 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &sendMax);
      v26 = System_String__Format_43739268(v21, v24, v25, 0LL);
      if ( !v18 )
        sub_B170D4();
      UILabel__set_text(v18, v26, 0LL);
      v28 = this->fields.parentManager;
      if ( !v28 )
        sub_B170D4();
      v29 = v28->fields.baseListViewManager;
      if ( !v29 )
        sub_B170D4();
      WarehouseListViewManager__DecrementNumber(v29, current->fields.selectNum, v27);
      ListViewItem__set_IsSelect(current, 0, 0LL);
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v57,
    (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
  WarehouseListViewManager__RefrashListDisp(this, v54);
  v53 = 4;
LABEL_49:
  WarehouseListViewManager__RequestListObject_26456168(this, v53, v52);
}


void __fastcall WarehouseListViewManager__SetObjectItem(
        WarehouseListViewManager_o *this,
        ListViewObject_o *obj,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  __int64 v6; // x10
  int32_t v7; // w1

  if ( (byte_40FA9AC & 1) == 0 )
  {
    sub_B16FFC(&WarehouseListViewObject_TypeInfo, obj);
    byte_40FA9AC = 1;
  }
  if ( !obj
    || (v6 = *(&WarehouseListViewObject_TypeInfo->_2.bitflags2 + 1), *(&obj->klass->_2.bitflags2 + 1) < (unsigned int)v6)
    || (WarehouseListViewObject_c *)obj->klass->_2.typeHierarchy[v6 - 1] != WarehouseListViewObject_TypeInfo )
  {
    sub_B170D4();
  }
  if ( this->fields.initMode == 2 )
    v7 = 3;
  else
    v7 = 2;
  WarehouseListViewObject__Init_18324900((WarehouseListViewObject_o *)obj, v7, 0LL);
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
  System_String_o *SortKindButtonText; // x0
  UnityEngine_Object_o *sortOrderSprite; // x20
  struct ListViewSort_o *v14; // x8
  int32_t sortKind; // w9
  UISprite_o *sortExplanationSprite; // x0
  System_String_o **v17; // x8
  struct ListViewSort_o *v18; // x8
  UISprite_o *v19; // x0
  _BOOL4 isAscendingOrder; // w8
  System_String_o **v21; // x9
  System_String_o **v22; // x10
  UISprite_o *v23; // x0
  System_String_o **v24; // x8
  struct ListViewSort_o *v25; // x8
  System_String_o **v26; // x8
  UnityEngine_Object_o *bonusFilterKindLabel; // x20
  struct ListViewSort_o *v28; // x0
  UILabel_o *v29; // x20
  System_Int32_array *bonusEventIdList; // x1
  System_Int32_array *servantFilterIdList; // x2
  System_String_o *BonusKindText_30242532; // x0

  if ( (byte_40FA9C1 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    sub_B16FFC(&StringLiteral_16955, v3);
    sub_B16FFC(&StringLiteral_17038, v4);
    sub_B16FFC(&StringLiteral_16995, v5);
    sub_B16FFC(&StringLiteral_16985, v6);
    sub_B16FFC(&StringLiteral_17002, v7);
    sub_B16FFC(&StringLiteral_16952, v8);
    byte_40FA9C1 = 1;
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
    SortKindButtonText = ListViewSort__GetSortKindButtonText(sort, 0LL);
    if ( !v11 )
      goto LABEL_46;
    UILabel__set_text(v11, SortKindButtonText, 0LL);
  }
  sortOrderSprite = (UnityEngine_Object_o *)this->fields.sortOrderSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(sortOrderSprite, 0LL, 0LL) )
  {
    v14 = this->fields.sort;
    if ( !v14 )
      goto LABEL_46;
    sortKind = v14->fields.sortKind;
    if ( sortKind == 11 || sortKind == 1 )
    {
      sortExplanationSprite = this->fields.sortExplanationSprite;
      if ( !sortExplanationSprite )
        goto LABEL_46;
      v17 = (System_String_o **)(v14->fields.isAscendingOrder ? &StringLiteral_17002 : &StringLiteral_16995);
      UISprite__set_spriteName(sortExplanationSprite, *v17, 0LL);
      v18 = this->fields.sort;
      if ( !v18 )
        goto LABEL_46;
      v19 = this->fields.sortOrderSprite;
      if ( !v19 )
        goto LABEL_46;
      isAscendingOrder = v18->fields.isAscendingOrder;
      v21 = (System_String_o **)&StringLiteral_16952;
      v22 = (System_String_o **)&StringLiteral_16955;
    }
    else
    {
      v23 = this->fields.sortExplanationSprite;
      if ( !v23 )
        goto LABEL_46;
      v24 = (System_String_o **)(v14->fields.isAscendingOrder ? &StringLiteral_17038 : &StringLiteral_16985);
      UISprite__set_spriteName(v23, *v24, 0LL);
      v25 = this->fields.sort;
      if ( !v25 )
        goto LABEL_46;
      v19 = this->fields.sortOrderSprite;
      if ( !v19 )
        goto LABEL_46;
      isAscendingOrder = v25->fields.isAscendingOrder;
      v21 = (System_String_o **)&StringLiteral_16955;
      v22 = (System_String_o **)&StringLiteral_16952;
    }
    if ( isAscendingOrder )
      v26 = v21;
    else
      v26 = v22;
    UISprite__set_spriteName(v19, *v26, 0LL);
  }
  bonusFilterKindLabel = (UnityEngine_Object_o *)this->fields.bonusFilterKindLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(bonusFilterKindLabel, 0LL, 0LL) )
  {
    v28 = this->fields.sort;
    if ( !v28 )
      goto LABEL_46;
    if ( v28->fields.isBonusKind )
    {
      v29 = this->fields.bonusFilterKindLabel;
      bonusEventIdList = this->fields.bonusEventIdList;
      servantFilterIdList = this->fields.servantFilterIdList;
      if ( this->fields.isQuestStart )
      {
        BonusKindText_30242532 = ListViewSort__GetBonusKindText_30242532(
                                   v28,
                                   bonusEventIdList,
                                   servantFilterIdList,
                                   0,
                                   0LL,
                                   0LL);
        if ( v29 )
        {
LABEL_43:
          UILabel__set_text(v29, BonusKindText_30242532, 0LL);
          return;
        }
      }
      else
      {
        BonusKindText_30242532 = ListViewSort__GetBonusKind2Text_30244736(
                                   v28,
                                   bonusEventIdList,
                                   servantFilterIdList,
                                   0LL,
                                   0LL,
                                   0LL,
                                   0LL);
        if ( v29 )
          goto LABEL_43;
      }
LABEL_46:
      sub_B170D4();
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
  UserGameEntity_o *SelfUserGame; // x0
  UserGameEntity_o *v11; // x8
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x0
  int64_t pushUserSvtId; // x21
  Il2CppObject *current; // x20
  __int64 v15; // x9
  Il2CppClass *klass; // x8
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

  if ( (byte_40FA9CD & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__, isPushMode);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v5);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v7);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v8);
    sub_B16FFC(&WarehouseListViewItem_TypeInfo, v9);
    byte_40FA9CD = 1;
  }
  memset(&v26, 0, sizeof(v26));
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  if ( !SelfUserGame || (v11 = SelfUserGame, (itemList = this->fields.itemList) == 0LL) )
    sub_B170D4();
  pushUserSvtId = v11->fields.pushUserSvtId;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v25,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)itemList,
    (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  v26.fields.current = (Il2CppObject *)v25.fields.fakeValue;
  *(_OWORD *)&v26.fields.list = *(_OWORD *)&v25.fields.currentCryptoKey;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v26,
            (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__) )
  {
    current = v26.fields.current;
    if ( !v26.fields.current )
      goto LABEL_30;
    v15 = *(&WarehouseListViewItem_TypeInfo->_2.bitflags2 + 1);
    if ( *(&v26.fields.current->klass->_2.bitflags2 + 1) < (unsigned int)v15
      || (WarehouseListViewItem_c *)v26.fields.current->klass->_2.typeHierarchy[v15 - 1] != WarehouseListViewItem_TypeInfo )
    {
      sub_B173C8(v26.fields.current);
LABEL_30:
      sub_B170D4();
    }
    klass = v26.fields.current[7].klass;
    BYTE3(v26.fields.current[10].klass) = isPushMode;
    if ( !klass )
      sub_B170D4();
    byval_arg = klass->_1.byval_arg;
    *(_OWORD *)&v25.fields.currentCryptoKey = *(_OWORD *)&klass->_1.name;
    *(Il2CppType *)&v25.fields.fakeValue = byval_arg;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    }
    v24 = v25;
    BYTE4(current[10].klass) = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v24, 0LL) == pushUserSvtId;
    if ( isPushMode )
    {
      v18 = (UserServantEntity_o *)current[7].klass;
      if ( !v18 )
        sub_B170D4();
      if ( UserServantEntity__IsLeave(v18, 0LL) )
        goto LABEL_23;
      v19 = (UserServantEntity_o *)current[7].klass;
      if ( !v19 )
        sub_B170D4();
      if ( UserServantEntity__IsEventJoin(v19, 0LL) )
        goto LABEL_23;
      v20 = (UserServantEntity_o *)current[7].klass;
      if ( !v20 )
        sub_B170D4();
      if ( UserServantEntity__IsCombineMaterial(v20, 0LL) )
        goto LABEL_23;
      v21 = (UserServantEntity_o *)current[7].klass;
      if ( !v21 )
        sub_B170D4();
      if ( UserServantEntity__IsStatusUp(v21, 0LL) )
      {
LABEL_23:
        v22 = 0;
      }
      else
      {
        v23 = (UserServantEntity_o *)current[7].klass;
        if ( !v23 )
          sub_B170D4();
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
    (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
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

  if ( (byte_40FA99F & 1) == 0 )
  {
    sub_B16FFC(&WarehouseListViewManager_CallbackFunc_TypeInfo, value);
    byte_40FA99F = 1;
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
    v8 = sub_B0BA14(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (WarehouseListViewManager_o *)sub_B173C8(v7);
  WarehouseListViewManager__remove_callbackFunc(v10, v11, v12);
}


System_Collections_Generic_List_WarehouseListViewObject__o *__fastcall WarehouseListViewManager__get_ClippingObjectList(
        WarehouseListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v14; // x19
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  Il2CppObject *current; // x21
  srcLineSprite_o *Component_srcLineSprite; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v18; // x21
  ListViewItem_o *Item; // x0
  System_Collections_Generic_List_Enumerator_T__o v21; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v22; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_40FA9A4 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v7);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_WarehouseListViewObject___, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_WarehouseListViewObject__Add__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_WarehouseListViewObject___ctor__, v11);
    sub_B16FFC(&System_Collections_Generic_List_WarehouseListViewObject__TypeInfo, v12);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v13);
    byte_40FA9A4 = 1;
  }
  memset(&v22, 0, sizeof(v22));
  v14 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_WarehouseListViewObject__TypeInfo,
                                                                                                  method,
                                                                                                  v2,
                                                                                                  v3,
                                                                                                  v4);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v14,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_WarehouseListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_B170D4();
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v21,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)objectList,
    (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v22 = v21;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v22,
            (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v22.fields.current;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL) )
    {
      if ( !current )
        sub_B170D4();
      Component_srcLineSprite = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                  (UnityEngine_GameObject_o *)current,
                                  (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_WarehouseListViewObject___);
      v18 = (EventMissionProgressRequest_Argument_ProgressData_o *)Component_srcLineSprite;
      if ( !Component_srcLineSprite )
        sub_B170D4();
      Item = (ListViewItem_o *)WarehouseListViewObject__GetItem(
                                 (WarehouseListViewObject_o *)Component_srcLineSprite,
                                 0LL);
      if ( !Item )
        sub_B170D4();
      if ( Item->fields.isTermination )
      {
        if ( ListViewManager__ClippingItem_30192136((ListViewManager_o *)this, Item, 0LL) )
        {
          if ( !v14 )
            sub_B170D4();
          goto LABEL_16;
        }
      }
      else
      {
        if ( !v14 )
          sub_B170D4();
LABEL_16:
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v14,
          v18,
          (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_WarehouseListViewObject__Add__);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v22,
    (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_WarehouseListViewObject__o *)v14;
}


System_Collections_Generic_List_WarehouseListViewObject__o *__fastcall WarehouseListViewManager__get_ObjectList(
        WarehouseListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v14; // x19
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  Il2CppObject *current; // x20
  EventMissionProgressRequest_Argument_ProgressData_o *Component_srcLineSprite; // x1
  System_Collections_Generic_List_Enumerator_T__o v19; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v20; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_40FA9A3 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v7);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_WarehouseListViewObject___, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_WarehouseListViewObject__Add__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_WarehouseListViewObject___ctor__, v11);
    sub_B16FFC(&System_Collections_Generic_List_WarehouseListViewObject__TypeInfo, v12);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v13);
    byte_40FA9A3 = 1;
  }
  memset(&v20, 0, sizeof(v20));
  v14 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_WarehouseListViewObject__TypeInfo,
                                                                                                  method,
                                                                                                  v2,
                                                                                                  v3,
                                                                                                  v4);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v14,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_WarehouseListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_B170D4();
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v19,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)objectList,
    (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v20 = v19;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v20,
            (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v20.fields.current;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL) )
    {
      if ( !current )
        sub_B170D4();
      Component_srcLineSprite = (EventMissionProgressRequest_Argument_ProgressData_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                                         (UnityEngine_GameObject_o *)current,
                                                                                         (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_WarehouseListViewObject___);
      if ( !v14 )
        sub_B170D4();
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v14,
        Component_srcLineSprite,
        (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_WarehouseListViewObject__Add__);
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v20,
    (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_WarehouseListViewObject__o *)v14;
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

  if ( (byte_40FA9A0 & 1) == 0 )
  {
    sub_B16FFC(&WarehouseListViewManager_CallbackFunc_TypeInfo, value);
    byte_40FA9A0 = 1;
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
    v8 = sub_B0BA14(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (const MethodInfo *)sub_B173C8(v7);
  WarehouseListViewManager__DeleteContinueData(v10);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarehouseListViewManager_CallbackFunc___ctor(
        WarehouseListViewManager_CallbackFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  struct BattleServantClassBoardSkillEffectListComponent_o *v8; // x8
  BattleServantConfConponent_o *p_method; // x0

  v8 = **(struct BattleServantClassBoardSkillEffectListComponent_o ***)&method;
  *(_QWORD *)&this->fields.method = object;
  p_method = (BattleServantConfConponent_o *)&this->fields.method;
  p_method->monitor = *(void **)&method;
  p_method[-1].fields.classBoardSkillObj = v8;
  sub_B16F98(
    p_method,
    (System_Int32_array **)object,
    *(System_String_array ***)&method,
    (System_String_array **)a4,
    v4,
    v5,
    v6,
    v7);
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
  if ( (byte_40F7896 & 1) == 0 )
  {
    sub_B16FFC(&WarehouseListViewManager_ResultKind_TypeInfo, *(_QWORD *)&resultKind);
    byte_40F7896 = 1;
  }
  v11[2] = 0LL;
  v11[0] = j_il2cpp_value_box_0(WarehouseListViewManager_ResultKind_TypeInfo, &v12);
  v11[1] = (__int64)item;
  return (System_IAsyncResult_o *)sub_B16FA0(this, v11, callback, object);
}


void __fastcall WarehouseListViewManager_CallbackFunc__EndInvoke(
        WarehouseListViewManager_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B16FA4(result, 0LL, method);
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
        sub_B170B8(*(_QWORD *)&v20->fields.extra_arg, *(_QWORD *)&resultKind, item);
      if ( (sub_B1702C(v22) & 1) == 0 )
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
      v24 = sub_B17024(v22);
      v25 = sub_B17428(v22);
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
            v18 = sub_AAFEF8(v21, v28, v29);
          }
          v17 = *(_QWORD *)(v18 + 8);
        }
        else
        {
          v17 = *(_QWORD *)(*v21 + 16LL * *(unsigned __int16 *)(v22 + 72) + 320);
        }
        v19 = (void (__fastcall **)(__int64 *, _QWORD, WarehouseListViewItem_o *, _QWORD))sub_B170AC(v17, v22);
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
            v16 = sub_AAFEF8(v21, class_0, v10);
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