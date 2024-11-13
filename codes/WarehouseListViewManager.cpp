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
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  System_String_o *SORT_SAVE_KEY; // x19
  System_String_o *v13; // x0
  System_String_o *v14; // x19
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x3
  ListViewSort_o *v18; // x20
  struct WarehouseListViewManager_StaticFields *static_fields; // x0
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7
  System_String_o *v26; // x19
  System_String_o *v27; // x0
  System_String_o *v28; // x19
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x3
  ListViewSort_o *v32; // x20
  struct WarehouseListViewManager_StaticFields *v33; // x0
  int64_t v34; // x2
  int32_t v35; // w3
  System_String_o *v36; // x4
  BattleSetupInfo_o *v37; // x5
  FollowerInfo_o *v38; // x6
  PartyListViewItem_o *v39; // x7
  System_String_o *v40; // x19
  System_String_o *v41; // x0
  System_String_o *v42; // x19
  __int64 v43; // x1
  __int64 v44; // x2
  __int64 v45; // x3
  ListViewSort_o *v46; // x20
  struct WarehouseListViewManager_StaticFields *v47; // x0
  int64_t v48; // x2
  int32_t v49; // w3
  System_String_o *v50; // x4
  BattleSetupInfo_o *v51; // x5
  FollowerInfo_o *v52; // x6
  PartyListViewItem_o *v53; // x7
  System_String_o *v54; // x19
  System_String_o *v55; // x0
  System_String_o *v56; // x19
  __int64 v57; // x1
  __int64 v58; // x2
  __int64 v59; // x3
  ListViewSort_o *v60; // x20
  struct WarehouseListViewManager_StaticFields *v61; // x0
  int64_t v62; // x2
  int32_t v63; // w3
  System_String_o *v64; // x4
  BattleSetupInfo_o *v65; // x5
  FollowerInfo_o *v66; // x6
  PartyListViewItem_o *v67; // x7
  int v68; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4B141E0 & 1) == 0 )
  {
    sub_1BCA7E0(&ListViewSort_TypeInfo, v1, v2);
    sub_1BCA7E0(&WarehouseListViewManager_TypeInfo, v8, v9);
    sub_1BCA7E0(&StringLiteral_15762/*"Warehouse"*/, v10, v11);
    byte_4B141E0 = 1;
  }
  WarehouseListViewManager_TypeInfo->static_fields->SORT_SAVE_KEY = (struct System_String_o *)StringLiteral_15762/*"Warehouse"*/;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)WarehouseListViewManager_TypeInfo->static_fields,
    StringLiteral_15762/*"Warehouse"*/,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
  SORT_SAVE_KEY = WarehouseListViewManager_TypeInfo->static_fields->SORT_SAVE_KEY;
  v68 = 1;
  v13 = System_Int32__ToString((int32_t)&v68, 0LL);
  v14 = System_String__Concat_62401220(SORT_SAVE_KEY, v13, 0LL);
  v18 = (ListViewSort_o *)sub_1BCAA2C(ListViewSort_TypeInfo, v15, v16, v17);
  ListViewSort___ctor_41480716(v18, v14, 3, 0, 0LL);
  static_fields = WarehouseListViewManager_TypeInfo->static_fields;
  static_fields->servantSortInfo = v18;
  sub_1BCA784((PartyOrganizationUtility_o *)&static_fields->servantSortInfo, (int64_t)v18, v20, v21, v22, v23, v24, v25);
  v26 = WarehouseListViewManager_TypeInfo->static_fields->SORT_SAVE_KEY;
  v68 = 2;
  v27 = System_Int32__ToString((int32_t)&v68, 0LL);
  v28 = System_String__Concat_62401220(v26, v27, 0LL);
  v32 = (ListViewSort_o *)sub_1BCAA2C(ListViewSort_TypeInfo, v29, v30, v31);
  ListViewSort___ctor_41480716(v32, v28, 3, 0, 0LL);
  v33 = WarehouseListViewManager_TypeInfo->static_fields;
  v33->servantEquipSortInfo = v32;
  sub_1BCA784((PartyOrganizationUtility_o *)&v33->servantEquipSortInfo, (int64_t)v32, v34, v35, v36, v37, v38, v39);
  v40 = WarehouseListViewManager_TypeInfo->static_fields->SORT_SAVE_KEY;
  v68 = 3;
  v41 = System_Int32__ToString((int32_t)&v68, 0LL);
  v42 = System_String__Concat_62401220(v40, v41, 0LL);
  v46 = (ListViewSort_o *)sub_1BCAA2C(ListViewSort_TypeInfo, v43, v44, v45);
  ListViewSort___ctor_41480716(v46, v42, 3, 0, 0LL);
  v47 = WarehouseListViewManager_TypeInfo->static_fields;
  v47->servantWarehouseSortInfo = v46;
  sub_1BCA784((PartyOrganizationUtility_o *)&v47->servantWarehouseSortInfo, (int64_t)v46, v48, v49, v50, v51, v52, v53);
  v54 = WarehouseListViewManager_TypeInfo->static_fields->SORT_SAVE_KEY;
  v68 = 4;
  v55 = System_Int32__ToString((int32_t)&v68, 0LL);
  v56 = System_String__Concat_62401220(v54, v55, 0LL);
  v60 = (ListViewSort_o *)sub_1BCAA2C(ListViewSort_TypeInfo, v57, v58, v59);
  ListViewSort___ctor_41480716(v60, v56, 3, 0, 0LL);
  v61 = WarehouseListViewManager_TypeInfo->static_fields;
  v61->servantEquipWarehouseSortInfo = v60;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v61->servantEquipWarehouseSortInfo,
    (int64_t)v60,
    v62,
    v63,
    v64,
    v65,
    v66,
    v67);
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
  *(_OWORD *)&this->fields.dragSelectSum = xmmword_BD2BC0;
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
  __int64 v6; // x2
  System_Collections_Generic_List_object__o *itemSortList; // x0
  __int64 methodPtr_low; // x9
  WarehouseListViewManager_o *v9; // x0
  const MethodInfo *v10; // x1

  if ( (byte_4B141DC & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, *(_QWORD *)&index, method);
    sub_1BCA7E0(&WarehouseListViewItem_TypeInfo, v5, v6);
    byte_4B141DC = 1;
  }
  itemSortList = (System_Collections_Generic_List_object__o *)this->fields.itemSortList;
  if ( !itemSortList
    || (itemSortList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                      itemSortList,
                                                                      index,
                                                                      (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_ListViewItem__get_Item__)) == 0LL )
  {
    sub_1BCAA3C(itemSortList, *(_QWORD *)&index);
  }
  methodPtr_low = LOBYTE(WarehouseListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(itemSortList->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
    && (WarehouseListViewItem_c *)itemSortList->klass->_2.typeHierarchy[methodPtr_low - 1] == WarehouseListViewItem_TypeInfo )
  {
    HIDWORD(itemSortList[5].fields._syncRoot) = -1;
  }
  else
  {
    sub_1BCACFC(itemSortList);
    WarehouseListViewManager__GetModeKind(v9, v10);
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
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  unsigned int scaleType; // w8
  struct ListViewItemSeed_o *smallSizeSeed; // x1
  WarehouseListViewManager_o *v21; // x0
  int v22; // w8
  PartyOrganizationUtility_o *p_seed; // x0
  ListViewSort_o *sort; // x0
  _BOOL8 v25; // x0
  __int64 v26; // x1
  ListViewItem_o *current; // x20
  __int64 methodPtr_low; // x9
  UnityEngine_Object_o *monitor; // x21
  __int64 v30; // x1
  ListViewObject_o *viewObject; // x0
  const MethodInfo *v32; // x2
  System_Collections_Generic_List_Enumerator_object__o v33; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v34; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4B141D4 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v13, v14);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v15, v16);
    sub_1BCA7E0(&WarehouseListViewItem_TypeInfo, v17, v18);
    byte_4B141D4 = 1;
  }
  memset(&v34, 0, sizeof(v34));
  scaleType = this->fields.scaleType;
  if ( scaleType < 2 )
  {
    smallSizeSeed = this->fields.smallSizeSeed;
    v21 = this;
    v22 = 2;
  }
  else if ( scaleType == 2 )
  {
    smallSizeSeed = this->fields.extremelySmallSizeSeed;
    v21 = this;
    v22 = 3;
  }
  else
  {
    if ( scaleType != 3 )
      goto LABEL_10;
    smallSizeSeed = this->fields.normalSizeSeed;
    v21 = this;
    v22 = 1;
  }
  v21->fields.seed = smallSizeSeed;
  p_seed = (PartyOrganizationUtility_o *)&v21->fields.seed;
  p_seed[2].fields._SelectedPartyPosition_k__BackingField = v22;
  sub_1BCA784(p_seed, (int64_t)smallSizeSeed, v2, v3, v4, v5, v6, v7);
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
    (System_Collections_Generic_List_Enumerator_T__o *)&v33,
    (System_Collections_Generic_List_object__o *)sort,
    (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  v34 = v33;
  while ( 1 )
  {
    v25 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v34,
            (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    if ( !v25 )
      break;
    current = (ListViewItem_o *)v34.fields._current;
    if ( !v34.fields._current )
      goto LABEL_26;
    methodPtr_low = LOBYTE(WarehouseListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(v34.fields._current->klass->vtable[0].methodPtr) < (unsigned int)methodPtr_low
      || (WarehouseListViewItem_c *)v34.fields._current->klass->_2.typeHierarchy[methodPtr_low - 1] != WarehouseListViewItem_TypeInfo )
    {
      sub_1BCACFC(v34.fields._current);
LABEL_26:
      sub_1BCAA3C(v25, v26);
    }
    monitor = (UnityEngine_Object_o *)v34.fields._current[6].monitor;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, WarehouseListViewItem_TypeInfo);
    if ( !UnityEngine_Object__op_Equality(monitor, 0LL, 0LL) )
    {
      viewObject = current->fields.viewObject;
      if ( !viewObject )
        sub_1BCAA3C(0LL, v30);
      ListViewObject__SetItemSeed(viewObject, current, this->fields.seed, 0LL);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v34,
    (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
  WarehouseListViewManager__SetMode_36523224(this, 2, v32);
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
  sort = (ListViewSort_o *)this->fields.scrollBar;
  if ( !sort
    || (sort = (ListViewSort_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)sort, 0LL)) == 0LL )
  {
LABEL_28:
    sub_1BCAA3C(sort, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)sort, 1, 0LL);
}


// local variable allocation has failed, the output may be wrong!
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
      sub_1BCAA3C(this, isPlus);
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
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x1
  __int64 v36; // x2
  __int64 v37; // x1
  __int64 v38; // x2
  __int64 v39; // x1
  __int64 v40; // x2
  int64_t Instance; // x0
  __int64 v42; // x1
  Il2CppObject *MasterData_object; // x24
  Il2CppObject *v44; // x25
  int64_t v45; // x2
  int32_t v46; // w3
  System_String_o *v47; // x4
  BattleSetupInfo_o *v48; // x5
  FollowerInfo_o *v49; // x6
  PartyListViewItem_o *v50; // x7
  System_String_o *v51; // x22
  WarehouseListViewManager_c *v52; // x0
  struct ListViewSort_o *servantSortInfo; // x1
  __int64 *v54; // x8
  int64_t v55; // x23
  struct ListViewSort_o *v56; // x8
  WarehouseListViewManager_c *v57; // x0
  struct ListViewSort_o *servantEquipSortInfo; // x1
  WarehouseListViewManager_c *v59; // x0
  struct ListViewSort_o *servantWarehouseSortInfo; // x1
  WarehouseListViewManager_c *v61; // x0
  struct ListViewSort_o *servantEquipWarehouseSortInfo; // x1
  _BOOL4 isQuestStart; // w8
  int v64; // w9
  struct ListViewSort_BonusFilterInfo_array *AlignedBonusFilter; // x0
  int64_t v66; // x2
  int32_t v67; // w3
  System_String_o *v68; // x4
  BattleSetupInfo_o *v69; // x5
  FollowerInfo_o *v70; // x6
  PartyListViewItem_o *v71; // x7
  struct ListViewSort_o *sort; // x20
  struct ListViewSort_BonusFilterInfo_array *v73; // x0
  int64_t v74; // x2
  int32_t v75; // w3
  System_String_o *v76; // x4
  BattleSetupInfo_o *v77; // x5
  FollowerInfo_o *v78; // x6
  PartyListViewItem_o *v79; // x7
  struct ListViewSort_o *v80; // x8
  struct ListViewSort_o *v81; // x8
  int64_t v82; // x2
  int32_t v83; // w3
  System_String_o *v84; // x4
  BattleSetupInfo_o *v85; // x5
  FollowerInfo_o *v86; // x6
  PartyListViewItem_o *v87; // x7
  struct ListViewSort_o *v88; // x8
  unsigned int iconScaleKind; // w8
  struct ListViewItemSeed_o *normalSizeSeed; // x1
  __int64 v91; // x1
  Il2CppObject *v92; // x24
  int v93; // w8
  __int64 v94; // x25
  int64_t v95; // x20
  __int64 v96; // x8
  __int128 v97; // q0
  __int64 v98; // x2
  __int64 v99; // x3
  int64_t v100; // x24
  __int64 v101; // x23
  System_Int64_array *v102; // x28
  System_Int64_array *v103; // x29
  UserServantEntity_o *v104; // x22
  int64_t v105; // x27
  WarehouseListViewItem_o *v106; // x26
  int64_t v107; // x2
  int32_t v108; // w3
  System_String_o *v109; // x4
  BattleSetupInfo_o *v110; // x5
  FollowerInfo_o *v111; // x6
  PartyListViewItem_o *v112; // x7
  __int64 v113; // x8
  _QWORD *v114; // x9
  __int64 v115; // x10
  __int64 v116; // x8
  const MethodInfo *v117; // x3
  UILabel_o *emptyMessageLabel; // x20
  const MethodInfo *v119; // x1
  const MethodInfo *v120; // [xsp+0h] [xbp-E0h]
  System_String_o *v121; // [xsp+8h] [xbp-D8h]
  System_Int64_array *recoverySvtList; // [xsp+10h] [xbp-D0h]
  int64_t v123; // [xsp+18h] [xbp-C8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v124; // [xsp+20h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v125; // [xsp+40h] [xbp-A0h]
  int32_t eventId; // [xsp+6Ch] [xbp-74h] BYREF
  System_Int64_array *equipIdList; // [xsp+70h] [xbp-70h] BYREF
  System_Int64_array *svtIdList; // [xsp+78h] [xbp-68h] BYREF

  if ( (byte_4B141B7 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_EventMaster___, *(_QWORD *)&kind, setupInfo);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserDeckMaster___, v7, v8);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserEventServantFatigueMaster___, v9, v10);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserServantMaster___, v11, v12);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserServantStorageMaster___, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewItem__Add__, v15, v16);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v17, v18);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v19, v20);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v21, v22);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v23, v24);
    sub_1BCA7E0(&WarehouseListViewItem_TypeInfo, v25, v26);
    sub_1BCA7E0(&WarehouseListViewManager_TypeInfo, v27, v28);
    sub_1BCA7E0(&StringLiteral_11713/*"SERVANT_EQUIP_EMPTY"*/, v29, v30);
    sub_1BCA7E0(&StringLiteral_11708/*"SERVANT_EMPTY"*/, v31, v32);
    sub_1BCA7E0(&StringLiteral_11741/*"SERVANT_EQUIP_WAREHOUSE_EMPTY"*/, v33, v34);
    sub_1BCA7E0(&StringLiteral_11910/*"SERVANT_SORT_FILTER_RESULT_EMPTY"*/, v35, v36);
    sub_1BCA7E0(&StringLiteral_12089/*"SERVANT_WAREHOUSE_EMPTY"*/, v37, v38);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v39, v40);
    byte_4B141B7 = 1;
  }
  equipIdList = 0LL;
  svtIdList = 0LL;
  eventId = 0;
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_79;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserServantMaster___);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_79;
  v44 = DataManager__GetMasterData_object_(
          (DataManager_o *)Instance,
          (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserServantStorageMaster___);
  Instance = (int64_t)UserGameMaster__getSelfUserGame(0LL);
  v51 = (System_String_o *)StringLiteral_1/*""*/;
  v123 = Instance;
  this->fields.kind = kind;
  switch ( kind )
  {
    case 0:
      v52 = WarehouseListViewManager_TypeInfo;
      if ( !WarehouseListViewManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(WarehouseListViewManager_TypeInfo, v42);
        v52 = WarehouseListViewManager_TypeInfo;
      }
      servantSortInfo = v52->static_fields->servantSortInfo;
      this->fields.sort = servantSortInfo;
      sub_1BCA784(
        (PartyOrganizationUtility_o *)&this->fields.sort,
        (int64_t)servantSortInfo,
        v45,
        v46,
        v47,
        v48,
        v49,
        v50);
      Instance = (int64_t)this->fields.sort;
      if ( !Instance )
        goto LABEL_79;
      *(_DWORD *)(Instance + 128) = 0;
      ListViewSort__Load((ListViewSort_o *)Instance, 0LL);
      if ( !MasterData_object )
        goto LABEL_79;
      Instance = (int64_t)UserServantMaster__getKeepServantList((UserServantMaster_o *)MasterData_object, 0LL);
      v54 = &StringLiteral_11708/*"SERVANT_EMPTY"*/;
      break;
    case 1:
      v57 = WarehouseListViewManager_TypeInfo;
      if ( !WarehouseListViewManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(WarehouseListViewManager_TypeInfo, v42);
        v57 = WarehouseListViewManager_TypeInfo;
      }
      servantEquipSortInfo = v57->static_fields->servantEquipSortInfo;
      this->fields.sort = servantEquipSortInfo;
      sub_1BCA784(
        (PartyOrganizationUtility_o *)&this->fields.sort,
        (int64_t)servantEquipSortInfo,
        v45,
        v46,
        v47,
        v48,
        v49,
        v50);
      Instance = (int64_t)this->fields.sort;
      if ( !Instance )
        goto LABEL_79;
      *(_DWORD *)(Instance + 128) = 1;
      ListViewSort__Load((ListViewSort_o *)Instance, 0LL);
      if ( !MasterData_object )
        goto LABEL_79;
      Instance = (int64_t)UserServantMaster__getServantEquipList((UserServantMaster_o *)MasterData_object, 0LL);
      v54 = &StringLiteral_11713/*"SERVANT_EQUIP_EMPTY"*/;
      break;
    case 2:
      v59 = WarehouseListViewManager_TypeInfo;
      if ( !WarehouseListViewManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(WarehouseListViewManager_TypeInfo, v42);
        v59 = WarehouseListViewManager_TypeInfo;
      }
      servantWarehouseSortInfo = v59->static_fields->servantWarehouseSortInfo;
      this->fields.sort = servantWarehouseSortInfo;
      sub_1BCA784(
        (PartyOrganizationUtility_o *)&this->fields.sort,
        (int64_t)servantWarehouseSortInfo,
        v45,
        v46,
        v47,
        v48,
        v49,
        v50);
      Instance = (int64_t)this->fields.sort;
      if ( !Instance )
        goto LABEL_79;
      *(_DWORD *)(Instance + 128) = 0;
      ListViewSort__Load((ListViewSort_o *)Instance, 0LL);
      if ( !v44 )
        goto LABEL_79;
      Instance = (int64_t)UserServantStorageMaster__getKeepServantList((UserServantStorageMaster_o *)v44, 0LL);
      v54 = &StringLiteral_12089/*"SERVANT_WAREHOUSE_EMPTY"*/;
      break;
    case 3:
      v61 = WarehouseListViewManager_TypeInfo;
      if ( !WarehouseListViewManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(WarehouseListViewManager_TypeInfo, v42);
        v61 = WarehouseListViewManager_TypeInfo;
      }
      servantEquipWarehouseSortInfo = v61->static_fields->servantEquipWarehouseSortInfo;
      this->fields.sort = servantEquipWarehouseSortInfo;
      sub_1BCA784(
        (PartyOrganizationUtility_o *)&this->fields.sort,
        (int64_t)servantEquipWarehouseSortInfo,
        v45,
        v46,
        v47,
        v48,
        v49,
        v50);
      Instance = (int64_t)this->fields.sort;
      if ( !Instance )
        goto LABEL_79;
      *(_DWORD *)(Instance + 128) = 1;
      ListViewSort__Load((ListViewSort_o *)Instance, 0LL);
      if ( !v44 )
        goto LABEL_79;
      Instance = (int64_t)UserServantStorageMaster__getServantEquipList((UserServantStorageMaster_o *)v44, 0LL);
      v54 = &StringLiteral_11741/*"SERVANT_EQUIP_WAREHOUSE_EMPTY"*/;
      break;
    default:
      v55 = 0LL;
      if ( !setupInfo )
        goto LABEL_12;
      goto LABEL_30;
  }
  v51 = (System_String_o *)*v54;
  v55 = Instance;
  if ( setupInfo )
  {
LABEL_30:
    isQuestStart = setupInfo->fields.isQuestStart;
    v64 = this->fields.kind | 2;
    this->fields.isQuestStart = isQuestStart;
    if ( v64 == 2 )
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
      sub_1BCA784(
        (PartyOrganizationUtility_o *)&this->fields.alignedBonusFilterInfos,
        (int64_t)AlignedBonusFilter,
        v66,
        v67,
        v68,
        v69,
        v70,
        v71);
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
      v73 = ListViewSort__GetAlignedBonusFilter(
              (ListViewSort_o *)Instance,
              0LL,
              setupInfo->fields.servantEquipFilterEventCampaignIds,
              setupInfo->fields.servantEquipFilterEventIds,
              0LL,
              0LL,
              isQuestStart,
              0LL);
      this->fields.alignedBonusFilterInfos = v73;
      sub_1BCA784(
        (PartyOrganizationUtility_o *)&this->fields.alignedBonusFilterInfos,
        (int64_t)v73,
        v74,
        v75,
        v76,
        v77,
        v78,
        v79);
      v80 = this->fields.sort;
      if ( !v80 )
        goto LABEL_79;
      v80->fields.isBonusKind = 1;
    }
  }
  else
  {
LABEL_12:
    v56 = this->fields.sort;
    this->fields.isQuestStart = 1;
    if ( !v56 )
      goto LABEL_79;
    v56->fields.isBonusKind = 0;
    this->fields.alignedBonusFilterInfos = 0LL;
    sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.alignedBonusFilterInfos, 0LL, v45, v46, v47, v48, v49, v50);
  }
  Instance = (int64_t)this->fields.bonusFilterKindButton;
  if ( !Instance )
    goto LABEL_79;
  Instance = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  v81 = this->fields.sort;
  if ( !v81 )
    goto LABEL_79;
  if ( !Instance )
    goto LABEL_79;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, v81->fields.isBonusKind, 0LL);
  v88 = this->fields.sort;
  if ( !v88 )
    goto LABEL_79;
  iconScaleKind = v88->fields.iconScaleKind;
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
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.seed, (int64_t)normalSizeSeed, v82, v83, v84, v85, v86, v87);
LABEL_48:
  *(_QWORD *)&this->fields.sellEnableRestCnt = 0LL;
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
  *(_OWORD *)&this->fields.dragSelectSum = xmmword_BD2BC0;
  this->fields.isDragSelect = 1;
  this->fields.dragSelectFriendShipSum = 0;
  if ( !v55 )
    goto LABEL_75;
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_79;
  v92 = DataManager__GetMasterData_object_(
          (DataManager_o *)Instance,
          (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserDeckMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v91);
  Instance = NetworkManager__get_UserId(0LL);
  if ( !v92
    || (UserDeckMaster__getPartyList((UserDeckMaster_o *)v92, &svtIdList, &equipIdList, Instance, 0LL),
        (Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0)
    || (Instance = (int64_t)DataManager__GetMasterData_object_(
                              (DataManager_o *)Instance,
                              (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_EventMaster___)) == 0 )
  {
LABEL_79:
    sub_1BCAA3C(Instance, v42);
  }
  Instance = EventMaster__IsEnableFatigueEvent((EventMaster_o *)Instance, &eventId, 0LL);
  recoverySvtList = 0LL;
  if ( (Instance & 1) != 0 )
  {
    Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_79;
    Instance = (int64_t)DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserEventServantFatigueMaster___);
    if ( !Instance )
      goto LABEL_79;
    Instance = (int64_t)UserEventServantFatigueMaster__GetRecoverySvtIdList(
                          (UserEventServantFatigueMaster_o *)Instance,
                          eventId,
                          0LL);
    recoverySvtList = (System_Int64_array *)Instance;
  }
  v93 = *(_DWORD *)(v55 + 24);
  if ( v93 >= 1 )
  {
    v94 = 0LL;
    v95 = v55 + 32;
    v121 = v51;
    do
    {
      if ( (unsigned int)v94 >= v93 )
        goto LABEL_80;
      v96 = *(_QWORD *)(v95 + 8 * v94);
      if ( !v96 )
        goto LABEL_79;
      v97 = *(_OWORD *)(v96 + 32);
      *(_OWORD *)&v125.fields.currentCryptoKey = *(_OWORD *)(v96 + 16);
      *(_OWORD *)&v125.fields.fakeValue = v97;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v42);
      v124 = v125;
      Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v124, 0LL);
      if ( (unsigned int)v94 >= *(_DWORD *)(v55 + 24) )
LABEL_80:
        sub_1BCAA44(Instance, v42);
      if ( !v123 )
        goto LABEL_79;
      v100 = v55;
      v101 = *(_QWORD *)(v123 + 112);
      v102 = equipIdList;
      v103 = svtIdList;
      v104 = *(UserServantEntity_o **)(v95 + 8 * v94);
      v105 = Instance;
      v106 = (WarehouseListViewItem_o *)sub_1BCAA2C(WarehouseListViewItem_TypeInfo, v42, v98, v99);
      WarehouseListViewItem___ctor(v106, v94, v104, setupInfo, v103, v102, recoverySvtList, v105 == v101, v120);
      Instance = (int64_t)this->fields.itemList;
      if ( !Instance )
        goto LABEL_79;
      v113 = *(_QWORD *)(Instance + 16);
      v114 = Method_System_Collections_Generic_List_ListViewItem__Add__;
      ++*(_DWORD *)(Instance + 28);
      if ( !v113 )
        goto LABEL_79;
      v115 = *(int *)(Instance + 24);
      v55 = v100;
      if ( (unsigned int)v115 >= *(_DWORD *)(v113 + 24) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)Instance,
          (Il2CppObject *)v106,
          *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v114[4] + 192LL) + 112LL));
      }
      else
      {
        v116 = v113 + 8 * v115;
        *(_DWORD *)(Instance + 24) = v115 + 1;
        *(_QWORD *)(v116 + 32) = v106;
        sub_1BCA784((PartyOrganizationUtility_o *)(v116 + 32), (int64_t)v106, v107, v108, v109, v110, v111, v112);
      }
      WarehouseListViewManager__ChangeSellEnableRestCnt(this, 1, v106, v117);
      v93 = *(_DWORD *)(v100 + 24);
      ++v94;
    }
    while ( (int)v94 < v93 );
    v51 = v121;
    if ( (int)v94 > 0 )
      v51 = (System_String_o *)StringLiteral_11910/*"SERVANT_SORT_FILTER_RESULT_EMPTY"*/;
  }
LABEL_75:
  emptyMessageLabel = this->fields.emptyMessageLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v42);
  Instance = (int64_t)LocalizationManager__Get(v51, 0LL);
  if ( !emptyMessageLabel )
    goto LABEL_79;
  UILabel__set_text(emptyMessageLabel, (System_String_o *)Instance, 0LL);
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
  WarehouseListViewManager__SetFilterButtonImage(this, v119);
  ListViewManager__CheckScroll((ListViewManager_o *)this, this->fields.scaleType, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarehouseListViewManager__DecideDragSelect(
        WarehouseListViewManager_o *this,
        int32_t index,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  System_Collections_Generic_List_object__o *itemSortList; // x0
  WarehouseListViewItem_o *v8; // x20
  __int64 methodPtr_low; // x9
  _BOOL4 isDragSelect; // w21
  const MethodInfo *v11; // x2
  const MethodInfo *v12; // x3
  const MethodInfo *v13; // x3
  struct WarehouseListManager_o *parentManager; // x8
  struct WarehouseListViewManager_o *baseListViewManager; // x9
  int32_t selectSum; // w9
  WarehouseListViewManager_o *v17; // x0
  bool v18; // w1
  struct WarehouseListManager_o *v19; // x8
  struct WarehouseListViewManager_o *v20; // x9
  WarehouseListViewManager_o *v21; // x0
  const MethodInfo *v22; // x1
  int32_t friendShipSum[2]; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4B141DB & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, *(_QWORD *)&index, method);
    sub_1BCA7E0(&WarehouseListViewItem_TypeInfo, v5, v6);
    byte_4B141DB = 1;
  }
  *(_QWORD *)friendShipSum = 0LL;
  itemSortList = (System_Collections_Generic_List_object__o *)this->fields.itemSortList;
  if ( !itemSortList )
    goto LABEL_24;
  itemSortList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                itemSortList,
                                                                index,
                                                                (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
  if ( !itemSortList )
    goto LABEL_24;
  v8 = (WarehouseListViewItem_o *)itemSortList;
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
              v12);
            parentManager = this->fields.parentManager;
            if ( parentManager )
            {
              if ( friendShipSum[1] >= parentManager->fields.sendMax && !v8->fields.isFriendShipSvtEq )
                goto LABEL_23;
              v8->fields.selectNum = parentManager->fields.totalSum;
              ++this->fields.selectSum;
              baseListViewManager = parentManager->fields.baseListViewManager;
              if ( baseListViewManager )
              {
                selectSum = baseListViewManager->fields.selectSum;
                v17 = this;
                v18 = 0;
LABEL_22:
                parentManager->fields.totalSum = selectSum;
                WarehouseListViewManager__ChangeSellEnableRestCnt(v17, v18, v8, v13);
                goto LABEL_23;
              }
            }
          }
          goto LABEL_24;
        }
      }
      else if ( ((unsigned __int8)itemSortList & 1) != 0 )
      {
        v19 = this->fields.parentManager;
        if ( v19 )
        {
          itemSortList = (System_Collections_Generic_List_object__o *)v19->fields.baseListViewManager;
          if ( itemSortList )
          {
            WarehouseListViewManager__DecrementNumber(
              (WarehouseListViewManager_o *)itemSortList,
              v8->fields.selectNum,
              v11);
            ListViewItem__set_IsSelect((ListViewItem_o *)v8, 0, 0LL);
            parentManager = this->fields.parentManager;
            --this->fields.selectSum;
            if ( parentManager )
            {
              v20 = parentManager->fields.baseListViewManager;
              if ( v20 )
              {
                selectSum = v20->fields.selectSum;
                v18 = 1;
                v17 = this;
                goto LABEL_22;
              }
            }
          }
        }
LABEL_24:
        sub_1BCAA3C(itemSortList, *(_QWORD *)&index);
      }
    }
LABEL_23:
    v8->fields.dragSelectNum = -1;
    return;
  }
  sub_1BCACFC(itemSortList);
  WarehouseListViewManager__CancelDragEnd(v21, v22);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarehouseListViewManager__DecrementNumber(
        WarehouseListViewManager_o *this,
        int32_t selectNum,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x0
  _BOOL8 v12; // x0
  __int64 v13; // x1
  int32_t klass; // w9
  System_Collections_Generic_List_Enumerator_object__o v15; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4B141C8 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__,
      *(_QWORD *)&selectNum,
      method);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v9, v10);
    byte_4B141C8 = 1;
  }
  memset(&v15, 0, sizeof(v15));
  itemList = this->fields.itemList;
  if ( !itemList )
    sub_1BCAA3C(0LL, *(_QWORD *)&selectNum);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v15,
    (System_Collections_Generic_List_object__o *)itemList,
    (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  while ( 1 )
  {
    v12 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v15,
            (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    if ( !v12 )
      break;
    if ( !v15.fields._current )
      sub_1BCAA3C(v12, v13);
    klass = (int32_t)v15.fields._current[1].klass;
    if ( klass > selectNum )
      LODWORD(v15.fields._current[1].klass) = klass - 1;
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v15,
    (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
}


void __fastcall WarehouseListViewManager__DeleteContinueData(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  WarehouseListViewManager_c *v3; // x0
  ListViewSort_o *servantSortInfo; // x0

  if ( (byte_4B141B3 & 1) == 0 )
  {
    sub_1BCA7E0(&WarehouseListViewManager_TypeInfo, v1, v2);
    byte_4B141B3 = 1;
  }
  v3 = WarehouseListViewManager_TypeInfo;
  if ( !WarehouseListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarehouseListViewManager_TypeInfo, v1);
    v3 = WarehouseListViewManager_TypeInfo;
  }
  servantSortInfo = v3->static_fields->servantSortInfo;
  if ( !servantSortInfo
    || (ListViewSort__DeleteContinueData(servantSortInfo, 0LL),
        (servantSortInfo = WarehouseListViewManager_TypeInfo->static_fields->servantEquipSortInfo) == 0LL)
    || (ListViewSort__DeleteContinueData(servantSortInfo, 0LL),
        (servantSortInfo = WarehouseListViewManager_TypeInfo->static_fields->servantWarehouseSortInfo) == 0LL)
    || (ListViewSort__DeleteContinueData(servantSortInfo, 0LL),
        (servantSortInfo = WarehouseListViewManager_TypeInfo->static_fields->servantEquipWarehouseSortInfo) == 0LL) )
  {
    sub_1BCAA3C(servantSortInfo, v1);
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
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  const MethodInfo *v9; // x1
  Il2CppObject *Instance; // x20
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x3
  System_Action_o *v14; // x21
  __int64 v15; // x0
  __int64 v16; // x1

  if ( (byte_4B141CF & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, isDecide, method);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5, v6);
    sub_1BCA7E0(&Method_WarehouseListViewManager_EndCloseSelectFilterKind__, v7, v8);
    byte_4B141CF = 1;
  }
  if ( isDecide )
  {
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
    WarehouseListViewManager__SetFilterButtonImage(this, v9);
    ListViewManager__CheckScroll((ListViewManager_o *)this, this->fields.scaleType, 0LL);
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v14 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v11, v12, v13);
  System_Action___ctor(v14, (Il2CppObject *)this, Method_WarehouseListViewManager_EndCloseSelectFilterKind__, 0LL);
  if ( !Instance )
    sub_1BCAA3C(v15, v16);
  CommonUI__CloseServantFilterSelectMenu((CommonUI_o *)Instance, v14, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarehouseListViewManager__EndSelectSortKind(
        WarehouseListViewManager_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v6; // x1

  if ( (byte_4B141CD & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, isDecide, method);
    byte_4B141CD = 1;
  }
  if ( isDecide )
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1BCAA3C(0LL, v6);
  CommonUI__CloseServantSortSelectMenu((CommonUI_o *)Instance, 0LL, 0LL);
}


// local variable allocation has failed, the output may be wrong!
int64_t __fastcall WarehouseListViewManager__GetAmountSortValue(
        WarehouseListViewManager_o *this,
        int32_t svtId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  System_Collections_Generic_List_object__o *itemList; // x0
  int size; // w23
  int32_t v11; // w22
  int64_t v12; // x21
  System_Collections_Generic_List_object__c *klass; // x9
  __int64 methodPtr_low; // x10
  System_Collections_Generic_List_object__o *v15; // x8

  if ( (byte_4B141D2 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, *(_QWORD *)&svtId, method);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v5, v6);
    sub_1BCA7E0(&WarehouseListViewItem_TypeInfo, v7, v8);
    byte_4B141D2 = 1;
  }
  itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
  if ( !itemList )
    goto LABEL_16;
  size = itemList->fields._size;
  if ( size >= 1 )
  {
    v11 = 0;
    v12 = 0LL;
    do
    {
      itemList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                itemList,
                                                                v11,
                                                                (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
      if ( !itemList )
        break;
      klass = itemList->klass;
      methodPtr_low = LOBYTE(WarehouseListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(itemList->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
        || (WarehouseListViewItem_c *)klass->_2.typeHierarchy[methodPtr_low - 1] != WarehouseListViewItem_TypeInfo )
      {
        break;
      }
      ++v11;
      if ( (WarehouseListViewItem_c *)klass->_2.typeHierarchy[methodPtr_low - 1] == WarehouseListViewItem_TypeInfo )
        v15 = itemList;
      else
        v15 = 0LL;
      if ( LODWORD(v15[3].monitor) == svtId )
        ++v12;
      if ( size == v11 )
        return v12;
      itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
    }
    while ( itemList );
LABEL_16:
    sub_1BCAA3C(itemList, *(_QWORD *)&svtId);
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
  __int64 v6; // x2
  WarehouseListViewItem_o *result; // x0
  __int64 methodPtr_low; // x10

  if ( (byte_4B141DE & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, *(_QWORD *)&index, method);
    sub_1BCA7E0(&WarehouseListViewItem_TypeInfo, v5, v6);
    byte_4B141DE = 1;
  }
  result = (WarehouseListViewItem_o *)this->fields.itemList;
  if ( result )
  {
    result = (WarehouseListViewItem_o *)System_Collections_Generic_List_object___get_Item(
                                          (System_Collections_Generic_List_object__o *)result,
                                          index,
                                          (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
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
    sub_1BCAA3C(this, method);
  return warehouseListMenu->fields.modeKind;
}


System_String_o *__fastcall WarehouseListViewManager__GetScaleButtonSpriteName(
        WarehouseListViewManager_o *this,
        const MethodInfo *method)
{
  ListViewSort_o *sort; // x0

  sort = this->fields.sort;
  if ( !sort )
    sub_1BCAA3C(0LL, method);
  return ListViewSort__GetScaleKindSpriteName(sort, this->fields.scaleType, 0LL);
}


void __fastcall WarehouseListViewManager__GetSelectItemNum(
        WarehouseListViewManager_o *this,
        int32_t *normalSum,
        int32_t *friendShipSum,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x0
  _BOOL8 v16; // x0
  __int64 v17; // x1
  Il2CppObject *current; // x21
  __int64 methodPtr_low; // x9
  int32_t *v20; // x8
  System_Collections_Generic_List_Enumerator_object__o v21; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v22; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4B141DD & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__, normalSum, friendShipSum);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v11, v12);
    sub_1BCA7E0(&WarehouseListViewItem_TypeInfo, v13, v14);
    byte_4B141DD = 1;
  }
  memset(&v22, 0, sizeof(v22));
  *normalSum = 0;
  *friendShipSum = 0;
  itemList = this->fields.itemList;
  if ( !itemList )
    sub_1BCAA3C(0LL, normalSum);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v21,
    (System_Collections_Generic_List_object__o *)itemList,
    (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  v22 = v21;
  while ( 1 )
  {
    v16 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v22,
            (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    if ( !v16 )
      break;
    current = v22.fields._current;
    if ( !v22.fields._current )
      goto LABEL_16;
    methodPtr_low = LOBYTE(WarehouseListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(v22.fields._current->klass->vtable[0].methodPtr) < (unsigned int)methodPtr_low
      || (WarehouseListViewItem_c *)v22.fields._current->klass->_2.typeHierarchy[methodPtr_low - 1] != WarehouseListViewItem_TypeInfo )
    {
      sub_1BCACFC(v22.fields._current);
LABEL_16:
      sub_1BCAA3C(v16, v17);
    }
    if ( ListViewItem__get_IsSelect((ListViewItem_o *)v22.fields._current, 0LL) )
    {
      if ( BYTE6(current[10].klass) )
        v20 = friendShipSum;
      else
        v20 = normalSum;
      ++*v20;
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v22,
    (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
}


void __fastcall WarehouseListViewManager__GetSelectList(
        WarehouseListViewManager_o *this,
        System_Collections_Generic_List_long__o *list,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x0
  _BOOL8 v16; // x0
  __int64 v17; // x1
  Il2CppObject *current; // x20
  __int64 methodPtr_low; // x9
  const MethodInfo *v20; // x1
  int64_t UserSvtId; // x0
  struct System_Int64_array *items; // x8
  _QWORD *v23; // x9
  __int64 size; // x10
  System_Collections_Generic_List_Enumerator_object__o v25; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v26; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4B141C3 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__, list, method);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_long__Add__, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v11, v12);
    sub_1BCA7E0(&WarehouseListViewItem_TypeInfo, v13, v14);
    byte_4B141C3 = 1;
  }
  memset(&v26, 0, sizeof(v26));
  itemList = this->fields.itemList;
  if ( !itemList )
    sub_1BCAA3C(0LL, list);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v25,
    (System_Collections_Generic_List_object__o *)itemList,
    (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  v26 = v25;
  while ( 1 )
  {
    v16 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v26,
            (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    if ( !v16 )
      break;
    current = v26.fields._current;
    if ( !v26.fields._current )
      goto LABEL_17;
    methodPtr_low = LOBYTE(WarehouseListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(v26.fields._current->klass->vtable[0].methodPtr) < (unsigned int)methodPtr_low
      || (WarehouseListViewItem_c *)v26.fields._current->klass->_2.typeHierarchy[methodPtr_low - 1] != WarehouseListViewItem_TypeInfo )
    {
      sub_1BCACFC(v26.fields._current);
LABEL_17:
      sub_1BCAA3C(v16, v17);
    }
    if ( ListViewItem__get_IsSelect((ListViewItem_o *)v26.fields._current, 0LL) )
    {
      UserSvtId = WarehouseListViewItem__get_UserSvtId((WarehouseListViewItem_o *)current, v20);
      if ( !list )
        sub_1BCAA3C(UserSvtId, UserSvtId);
      items = list->fields._items;
      v23 = Method_System_Collections_Generic_List_long__Add__;
      ++list->fields._version;
      if ( !items )
        sub_1BCAA3C(UserSvtId, UserSvtId);
      size = list->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_long___AddWithResize(
          list,
          UserSvtId,
          *(const MethodInfo_3589C90 **)(*(_QWORD *)(v23[4] + 192LL) + 112LL));
      }
      else
      {
        list->fields._size = size + 1;
        items->m_Items[size] = UserSvtId;
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v26,
    (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
}


System_Collections_Generic_Dictionary_long__int__o *__fastcall WarehouseListViewManager__GetSelectServantIdDic(
        WarehouseListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  System_Collections_Generic_Dictionary_long__int__o *v15; // x20
  const MethodInfo *v16; // x1
  System_Collections_Generic_List_object__o *itemList; // x0
  int size; // w23
  int32_t v19; // w21
  WarehouseListViewItem_o *v20; // x22
  __int64 methodPtr_low; // x9
  System_Collections_Generic_Dictionary_long__int__o *result; // x0
  WarehouseListViewManager_o *v23; // x0
  System_Collections_Generic_Dictionary_long__int__o *v24; // x1
  const MethodInfo *v25; // x2

  if ( (byte_4B141D5 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_long__int__Add__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_long__int___ctor__, v5, v6);
    sub_1BCA7E0(&System_Collections_Generic_Dictionary_long__int__TypeInfo, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v11, v12);
    sub_1BCA7E0(&WarehouseListViewItem_TypeInfo, v13, v14);
    byte_4B141D5 = 1;
  }
  v15 = (System_Collections_Generic_Dictionary_long__int__o *)sub_1BCAA2C(
                                                                System_Collections_Generic_Dictionary_long__int__TypeInfo,
                                                                method,
                                                                v2,
                                                                v3);
  System_Collections_Generic_Dictionary_long__int____ctor(
    v15,
    (const MethodInfo_323D83C *)Method_System_Collections_Generic_Dictionary_long__int___ctor__);
  itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
  if ( !itemList )
LABEL_14:
    sub_1BCAA3C(itemList, v16);
  size = itemList->fields._size;
  if ( size < 1 )
    return v15;
  v19 = 0;
  while ( 1 )
  {
    itemList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                              itemList,
                                                              v19,
                                                              (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    if ( !itemList )
      goto LABEL_14;
    v20 = (WarehouseListViewItem_o *)itemList;
    methodPtr_low = LOBYTE(WarehouseListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(itemList->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
      || (WarehouseListViewItem_c *)itemList->klass->_2.typeHierarchy[methodPtr_low - 1] != WarehouseListViewItem_TypeInfo )
    {
      break;
    }
    if ( ListViewItem__get_IsSelect((ListViewItem_o *)itemList, 0LL) )
    {
      itemList = (System_Collections_Generic_List_object__o *)WarehouseListViewItem__get_UserSvtId(v20, v16);
      if ( !v15 )
        goto LABEL_14;
      System_Collections_Generic_Dictionary_long__int___Add(
        v15,
        (int64_t)itemList,
        v20->fields.selectNum,
        (const MethodInfo_323E210 *)Method_System_Collections_Generic_Dictionary_long__int__Add__);
    }
    if ( size == ++v19 )
      return v15;
    itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
    if ( !itemList )
      goto LABEL_14;
  }
  sub_1BCACFC(itemList);
  WarehouseListViewManager__ModifyScaleChangeList(v23, v24, v25);
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
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  System_Collections_Generic_List_long__o *v23; // x23
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x3
  System_Collections_Generic_List_long__o *v27; // x22
  int64_t v28; // x1
  int64_t v29; // x2
  int32_t v30; // w3
  System_String_o *v31; // x4
  BattleSetupInfo_o *v32; // x5
  FollowerInfo_o *v33; // x6
  PartyListViewItem_o *v34; // x7
  int64_t itemList; // x0
  int v36; // w25
  int32_t v37; // w24
  __int64 methodPtr_low; // x10
  __int64 v39; // x8
  __int128 v40; // q0
  struct System_Int64_array *items; // x8
  _QWORD *v42; // x9
  __int64 size; // x10
  Il2CppClass **v44; // x8
  __int128 v45; // q0
  struct System_Int64_array *v46; // x8
  _QWORD *v47; // x9
  __int64 v48; // x10
  __int64 v49; // x8
  System_Collections_Generic_List_long__o *v50; // x0
  int v51; // w21
  System_Int64_array *v52; // x0
  int64_t v53; // x2
  int32_t v54; // w3
  System_String_o *v55; // x4
  BattleSetupInfo_o *v56; // x5
  FollowerInfo_o *v57; // x6
  PartyListViewItem_o *v58; // x7
  System_Int64_array *v59; // x1
  int64_t v60; // x2
  int32_t v61; // w3
  System_String_o *v62; // x4
  BattleSetupInfo_o *v63; // x5
  FollowerInfo_o *v64; // x6
  PartyListViewItem_o *v65; // x7
  System_Int64_array **v66; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v68; // [xsp+0h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v69; // [xsp+20h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v70; // [xsp+40h] [xbp-80h]

  if ( (byte_4B141BD & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_long__Add__, choiceList, unchoiceList);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_long__ToArray__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_long___ctor__, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_long__get_Count__, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v15, v16);
    sub_1BCA7E0(&System_Collections_Generic_List_long__TypeInfo, v17, v18);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v19, v20);
    sub_1BCA7E0(&WarehouseListViewItem_TypeInfo, v21, v22);
    byte_4B141BD = 1;
  }
  v23 = (System_Collections_Generic_List_long__o *)sub_1BCAA2C(
                                                     System_Collections_Generic_List_long__TypeInfo,
                                                     choiceList,
                                                     unchoiceList,
                                                     method);
  System_Collections_Generic_List_long____ctor(
    v23,
    (const MethodInfo_358943C *)Method_System_Collections_Generic_List_long___ctor__);
  v27 = (System_Collections_Generic_List_long__o *)sub_1BCAA2C(
                                                     System_Collections_Generic_List_long__TypeInfo,
                                                     v24,
                                                     v25,
                                                     v26);
  System_Collections_Generic_List_long____ctor(
    v27,
    (const MethodInfo_358943C *)Method_System_Collections_Generic_List_long___ctor__);
  itemList = (int64_t)this->fields.itemList;
  if ( !itemList )
    goto LABEL_37;
  v36 = *(_DWORD *)(itemList + 24);
  if ( v36 >= 1 )
  {
    v37 = 0;
    while ( 1 )
    {
      itemList = (int64_t)System_Collections_Generic_List_object___get_Item(
                            (System_Collections_Generic_List_object__o *)itemList,
                            v37,
                            (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
      if ( !itemList )
        goto LABEL_37;
      methodPtr_low = LOBYTE(WarehouseListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
      if ( *(unsigned __int8 *)(*(_QWORD *)itemList + 304LL) < (unsigned int)methodPtr_low
        || *(WarehouseListViewItem_c **)(*(_QWORD *)(*(_QWORD *)itemList + 200LL) + 8 * methodPtr_low - 8) != WarehouseListViewItem_TypeInfo )
      {
        goto LABEL_37;
      }
      v39 = *(_QWORD *)(itemList + 112);
      if ( v39 && *(_BYTE *)(itemList + 233) )
      {
        if ( *(_BYTE *)(itemList + 161) )
        {
          v40 = *(_OWORD *)(v39 + 32);
          *(_OWORD *)&v70.fields.currentCryptoKey = *(_OWORD *)(v39 + 16);
          *(_OWORD *)&v70.fields.fakeValue = v40;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v28);
          v69 = v70;
          itemList = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v69, 0LL);
          if ( !v27 )
            goto LABEL_37;
          items = v27->fields._items;
          v42 = Method_System_Collections_Generic_List_long__Add__;
          ++v27->fields._version;
          if ( !items )
            goto LABEL_37;
          size = v27->fields._size;
          v28 = itemList;
          if ( (unsigned int)size >= items->max_length )
          {
            v49 = v42[4];
            v50 = v27;
LABEL_27:
            System_Collections_Generic_List_long___AddWithResize(
              v50,
              v28,
              *(const MethodInfo_3589C90 **)(*(_QWORD *)(v49 + 192) + 112LL));
            goto LABEL_28;
          }
          v44 = &items->obj.klass + size;
          v27->fields._size = size + 1;
        }
        else
        {
          v45 = *(_OWORD *)(v39 + 32);
          *(_OWORD *)&v70.fields.currentCryptoKey = *(_OWORD *)(v39 + 16);
          *(_OWORD *)&v70.fields.fakeValue = v45;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v28);
          v68 = v70;
          itemList = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v68, 0LL);
          if ( !v23 )
            goto LABEL_37;
          v46 = v23->fields._items;
          v47 = Method_System_Collections_Generic_List_long__Add__;
          ++v23->fields._version;
          if ( !v46 )
            goto LABEL_37;
          v48 = v23->fields._size;
          v28 = itemList;
          if ( (unsigned int)v48 >= v46->max_length )
          {
            v49 = v47[4];
            v50 = v23;
            goto LABEL_27;
          }
          v44 = &v46->obj.klass + v48;
          v23->fields._size = v48 + 1;
        }
        v44[4] = (Il2CppClass *)v28;
      }
LABEL_28:
      if ( v36 == ++v37 )
        break;
      itemList = (int64_t)this->fields.itemList;
      if ( !itemList )
        goto LABEL_37;
    }
  }
  if ( !v23 || !v27 )
LABEL_37:
    sub_1BCAA3C(itemList, v28);
  v51 = v27->fields._size + v23->fields._size;
  if ( v51 < 1 )
  {
    *choiceList = 0LL;
    sub_1BCA784((PartyOrganizationUtility_o *)choiceList, 0LL, v29, v30, v31, v32, v33, v34);
    v66 = unchoiceList;
    v59 = 0LL;
    *unchoiceList = 0LL;
  }
  else
  {
    v52 = System_Collections_Generic_List_long___ToArray(
            v23,
            (const MethodInfo_358B748 *)Method_System_Collections_Generic_List_long__ToArray__);
    *choiceList = v52;
    sub_1BCA784((PartyOrganizationUtility_o *)choiceList, (int64_t)v52, v53, v54, v55, v56, v57, v58);
    v59 = System_Collections_Generic_List_long___ToArray(
            v27,
            (const MethodInfo_358B748 *)Method_System_Collections_Generic_List_long__ToArray__);
    *unchoiceList = v59;
    v66 = unchoiceList;
  }
  sub_1BCA784((PartyOrganizationUtility_o *)v66, (int64_t)v59, v60, v61, v62, v63, v64, v65);
  return v51 > 0;
}


bool __fastcall WarehouseListViewManager__GetSwapLockList(
        WarehouseListViewManager_o *this,
        System_Int64_array **lockList,
        System_Int64_array **unlockList,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  System_Collections_Generic_List_long__o *v23; // x23
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x3
  System_Collections_Generic_List_long__o *v27; // x22
  int64_t v28; // x1
  int64_t v29; // x2
  int32_t v30; // w3
  System_String_o *v31; // x4
  BattleSetupInfo_o *v32; // x5
  FollowerInfo_o *v33; // x6
  PartyListViewItem_o *v34; // x7
  int64_t itemList; // x0
  int v36; // w25
  int32_t v37; // w24
  __int64 methodPtr_low; // x10
  __int64 v39; // x8
  __int128 v40; // q0
  struct System_Int64_array *items; // x8
  _QWORD *v42; // x9
  __int64 size; // x10
  Il2CppClass **v44; // x8
  __int128 v45; // q0
  struct System_Int64_array *v46; // x8
  _QWORD *v47; // x9
  __int64 v48; // x10
  __int64 v49; // x8
  System_Collections_Generic_List_long__o *v50; // x0
  int v51; // w21
  System_Int64_array *v52; // x0
  int64_t v53; // x2
  int32_t v54; // w3
  System_String_o *v55; // x4
  BattleSetupInfo_o *v56; // x5
  FollowerInfo_o *v57; // x6
  PartyListViewItem_o *v58; // x7
  System_Int64_array *v59; // x1
  int64_t v60; // x2
  int32_t v61; // w3
  System_String_o *v62; // x4
  BattleSetupInfo_o *v63; // x5
  FollowerInfo_o *v64; // x6
  PartyListViewItem_o *v65; // x7
  System_Int64_array **v66; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v68; // [xsp+0h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v69; // [xsp+20h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v70; // [xsp+40h] [xbp-80h]

  if ( (byte_4B141BC & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_long__Add__, lockList, unlockList);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_long__ToArray__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_long___ctor__, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_long__get_Count__, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v15, v16);
    sub_1BCA7E0(&System_Collections_Generic_List_long__TypeInfo, v17, v18);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v19, v20);
    sub_1BCA7E0(&WarehouseListViewItem_TypeInfo, v21, v22);
    byte_4B141BC = 1;
  }
  v23 = (System_Collections_Generic_List_long__o *)sub_1BCAA2C(
                                                     System_Collections_Generic_List_long__TypeInfo,
                                                     lockList,
                                                     unlockList,
                                                     method);
  System_Collections_Generic_List_long____ctor(
    v23,
    (const MethodInfo_358943C *)Method_System_Collections_Generic_List_long___ctor__);
  v27 = (System_Collections_Generic_List_long__o *)sub_1BCAA2C(
                                                     System_Collections_Generic_List_long__TypeInfo,
                                                     v24,
                                                     v25,
                                                     v26);
  System_Collections_Generic_List_long____ctor(
    v27,
    (const MethodInfo_358943C *)Method_System_Collections_Generic_List_long___ctor__);
  itemList = (int64_t)this->fields.itemList;
  if ( !itemList )
    goto LABEL_37;
  v36 = *(_DWORD *)(itemList + 24);
  if ( v36 >= 1 )
  {
    v37 = 0;
    while ( 1 )
    {
      itemList = (int64_t)System_Collections_Generic_List_object___get_Item(
                            (System_Collections_Generic_List_object__o *)itemList,
                            v37,
                            (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
      if ( !itemList )
        goto LABEL_37;
      methodPtr_low = LOBYTE(WarehouseListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
      if ( *(unsigned __int8 *)(*(_QWORD *)itemList + 304LL) < (unsigned int)methodPtr_low
        || *(WarehouseListViewItem_c **)(*(_QWORD *)(*(_QWORD *)itemList + 200LL) + 8 * methodPtr_low - 8) != WarehouseListViewItem_TypeInfo )
      {
        goto LABEL_37;
      }
      v39 = *(_QWORD *)(itemList + 112);
      if ( v39 && *(_BYTE *)(itemList + 232) )
      {
        if ( *(_BYTE *)(itemList + 160) )
        {
          v40 = *(_OWORD *)(v39 + 32);
          *(_OWORD *)&v70.fields.currentCryptoKey = *(_OWORD *)(v39 + 16);
          *(_OWORD *)&v70.fields.fakeValue = v40;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v28);
          v69 = v70;
          itemList = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v69, 0LL);
          if ( !v27 )
            goto LABEL_37;
          items = v27->fields._items;
          v42 = Method_System_Collections_Generic_List_long__Add__;
          ++v27->fields._version;
          if ( !items )
            goto LABEL_37;
          size = v27->fields._size;
          v28 = itemList;
          if ( (unsigned int)size >= items->max_length )
          {
            v49 = v42[4];
            v50 = v27;
LABEL_27:
            System_Collections_Generic_List_long___AddWithResize(
              v50,
              v28,
              *(const MethodInfo_3589C90 **)(*(_QWORD *)(v49 + 192) + 112LL));
            goto LABEL_28;
          }
          v44 = &items->obj.klass + size;
          v27->fields._size = size + 1;
        }
        else
        {
          v45 = *(_OWORD *)(v39 + 32);
          *(_OWORD *)&v70.fields.currentCryptoKey = *(_OWORD *)(v39 + 16);
          *(_OWORD *)&v70.fields.fakeValue = v45;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v28);
          v68 = v70;
          itemList = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v68, 0LL);
          if ( !v23 )
            goto LABEL_37;
          v46 = v23->fields._items;
          v47 = Method_System_Collections_Generic_List_long__Add__;
          ++v23->fields._version;
          if ( !v46 )
            goto LABEL_37;
          v48 = v23->fields._size;
          v28 = itemList;
          if ( (unsigned int)v48 >= v46->max_length )
          {
            v49 = v47[4];
            v50 = v23;
            goto LABEL_27;
          }
          v44 = &v46->obj.klass + v48;
          v23->fields._size = v48 + 1;
        }
        v44[4] = (Il2CppClass *)v28;
      }
LABEL_28:
      if ( v36 == ++v37 )
        break;
      itemList = (int64_t)this->fields.itemList;
      if ( !itemList )
        goto LABEL_37;
    }
  }
  if ( !v23 || !v27 )
LABEL_37:
    sub_1BCAA3C(itemList, v28);
  v51 = v27->fields._size + v23->fields._size;
  if ( v51 < 1 )
  {
    *lockList = 0LL;
    sub_1BCA784((PartyOrganizationUtility_o *)lockList, 0LL, v29, v30, v31, v32, v33, v34);
    v66 = unlockList;
    v59 = 0LL;
    *unlockList = 0LL;
  }
  else
  {
    v52 = System_Collections_Generic_List_long___ToArray(
            v23,
            (const MethodInfo_358B748 *)Method_System_Collections_Generic_List_long__ToArray__);
    *lockList = v52;
    sub_1BCA784((PartyOrganizationUtility_o *)lockList, (int64_t)v52, v53, v54, v55, v56, v57, v58);
    v59 = System_Collections_Generic_List_long___ToArray(
            v27,
            (const MethodInfo_358B748 *)Method_System_Collections_Generic_List_long__ToArray__);
    *unlockList = v59;
    v66 = unlockList;
  }
  sub_1BCA784((PartyOrganizationUtility_o *)v66, (int64_t)v59, v60, v61, v62, v63, v64, v65);
  return v51 > 0;
}


void __fastcall WarehouseListViewManager__InitLoad(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  WarehouseListViewManager_c *v3; // x0
  ListViewSort_o *servantSortInfo; // x0

  if ( (byte_4B141B4 & 1) == 0 )
  {
    sub_1BCA7E0(&WarehouseListViewManager_TypeInfo, v1, v2);
    byte_4B141B4 = 1;
  }
  v3 = WarehouseListViewManager_TypeInfo;
  if ( !WarehouseListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarehouseListViewManager_TypeInfo, v1);
    v3 = WarehouseListViewManager_TypeInfo;
  }
  servantSortInfo = v3->static_fields->servantSortInfo;
  if ( !servantSortInfo
    || (ListViewSort__InitLoad(servantSortInfo, 0LL),
        (servantSortInfo = WarehouseListViewManager_TypeInfo->static_fields->servantEquipSortInfo) == 0LL)
    || (ListViewSort__InitLoad(servantSortInfo, 0LL),
        (servantSortInfo = WarehouseListViewManager_TypeInfo->static_fields->servantWarehouseSortInfo) == 0LL)
    || (ListViewSort__InitLoad(servantSortInfo, 0LL),
        (servantSortInfo = WarehouseListViewManager_TypeInfo->static_fields->servantEquipWarehouseSortInfo) == 0LL) )
  {
    sub_1BCAA3C(servantSortInfo, v1);
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
    sub_1BCAA3C(this, item);
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
    sub_1BCAA3C(parentManager, item);
  return !ServantEntity__get_IsOrganization((ServantEntity_o *)parentManager, 0LL)
      || item->fields.attribute
      || this->fields.sellEnableRestCnt - addServantSum >= 2;
}


void __fastcall WarehouseListViewManager__Modify(WarehouseListViewManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  Il2CppObject *Instance; // x0
  __int64 v25; // x1
  DataMasterBase_TMaster__TEntity__PKType__o *v26; // x20
  _BOOL8 v27; // x0
  const MethodInfo *v28; // x1
  WarehouseListViewItem_o *current; // x21
  __int64 methodPtr_low; // x10
  const MethodInfo *v31; // x1
  int64_t UserSvtId; // x0
  Il2CppObject *Entity; // x1
  const MethodInfo *v34; // x2
  UnityEngine_Object_o *viewObject; // x22
  __int64 v36; // x1
  struct ListViewObject_o *v37; // x0
  UserGameEntity_o *SelfUserGame; // x20
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x9
  DataMasterBase_TMaster__TEntity__PKType__o *v40; // x19
  _BOOL8 v41; // x0
  const MethodInfo *v42; // x1
  WarehouseListViewItem_o *v43; // x21
  __int64 v44; // x10
  const MethodInfo *v45; // x1
  int64_t v46; // x0
  Il2CppObject *v47; // x1
  const MethodInfo *v48; // x2
  int64_t v49; // x0
  const MethodInfo *v50; // x1
  int64_t favoriteUserSvtId; // x27
  int64_t v52; // x22
  int64_t v53; // x0
  const MethodInfo *v54; // x3
  __int64 v55; // x1
  UnityEngine_Object_o *v56; // x22
  __int64 v57; // x1
  struct ListViewObject_o *v58; // x0
  System_Collections_Generic_List_Enumerator_object__o v59; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v60; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_4B141BA & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserServantMaster___, method, v2);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserServantStorageMaster___, v4, v5);
    sub_1BCA7E0(&Method_DataMasterBase_UserServantStorageMaster__UserServantEntity__long__GetEntity__, v6, v7);
    sub_1BCA7E0(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v8, v9);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__, v10, v11);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v12, v13);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v14, v15);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v16, v17);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v18, v19);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v20, v21);
    sub_1BCA7E0(&WarehouseListViewItem_TypeInfo, v22, v23);
    byte_4B141BA = 1;
  }
  memset(&v60, 0, sizeof(v60));
  if ( this->fields.itemList )
  {
    if ( (this->fields.kind & 0xFFFFFFFE) == 2 )
    {
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( Instance )
      {
        Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserServantStorageMaster___);
        if ( this->fields.itemList )
        {
          v26 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
          System_Collections_Generic_List_object___GetEnumerator(
            (System_Collections_Generic_List_Enumerator_T__o *)&v59,
            (System_Collections_Generic_List_object__o *)this->fields.itemList,
            (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
          v60 = v59;
          while ( 1 )
          {
            v27 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                    &v60,
                    (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
            if ( !v27 )
              break;
            current = (WarehouseListViewItem_o *)v60.fields._current;
            if ( !v60.fields._current
              || (methodPtr_low = LOBYTE(WarehouseListViewItem_TypeInfo->vtable._0_Equals.methodPtr),
                  LOBYTE(v60.fields._current->klass->vtable[0].methodPtr) < (unsigned int)methodPtr_low)
              || (WarehouseListViewItem_c *)v60.fields._current->klass->_2.typeHierarchy[methodPtr_low - 1] != WarehouseListViewItem_TypeInfo )
            {
              sub_1BCAA3C(v27, v28);
            }
            if ( WarehouseListViewItem__get_UserSvtId((WarehouseListViewItem_o *)v60.fields._current, v28) >= 1 )
            {
              UserSvtId = WarehouseListViewItem__get_UserSvtId(current, v31);
              if ( !v26 )
                sub_1BCAA3C(UserSvtId, UserSvtId);
              Entity = DataMasterBase_object__object__long___GetEntity(
                         v26,
                         UserSvtId,
                         (const MethodInfo_31B2FEC *)Method_DataMasterBase_UserServantStorageMaster__UserServantEntity__long__GetEntity__);
              if ( Entity )
                WarehouseListViewItem__Modify(current, (UserServantEntity_o *)Entity, v34);
              viewObject = (UnityEngine_Object_o *)current->fields.viewObject;
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, Entity);
              if ( UnityEngine_Object__op_Inequality(viewObject, 0LL, 0LL) )
              {
                v37 = current->fields.viewObject;
                if ( !v37 )
                  sub_1BCAA3C(0LL, v36);
                ((void (__fastcall *)(struct ListViewObject_o *, WarehouseListViewItem_o *, Il2CppMethodPointer))v37->klass->vtable._5_SetItem.method)(
                  v37,
                  current,
                  v37->klass->vtable._6_SetItem.methodPtr);
              }
            }
          }
LABEL_41:
          System_Collections_Generic_List_Enumerator_object___Dispose(
            &v60,
            (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
          return;
        }
      }
    }
    else
    {
      SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( Instance )
      {
        Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserServantMaster___);
        itemList = this->fields.itemList;
        if ( itemList )
        {
          v40 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
          System_Collections_Generic_List_object___GetEnumerator(
            (System_Collections_Generic_List_Enumerator_T__o *)&v59,
            (System_Collections_Generic_List_object__o *)itemList,
            (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
          v60 = v59;
          while ( 1 )
          {
            v41 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                    &v60,
                    (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
            if ( !v41 )
              break;
            v43 = (WarehouseListViewItem_o *)v60.fields._current;
            if ( !v60.fields._current
              || (v44 = LOBYTE(WarehouseListViewItem_TypeInfo->vtable._0_Equals.methodPtr),
                  LOBYTE(v60.fields._current->klass->vtable[0].methodPtr) < (unsigned int)v44)
              || (WarehouseListViewItem_c *)v60.fields._current->klass->_2.typeHierarchy[v44 - 1] != WarehouseListViewItem_TypeInfo )
            {
              sub_1BCAA3C(v41, v42);
            }
            if ( WarehouseListViewItem__get_UserSvtId((WarehouseListViewItem_o *)v60.fields._current, v42) >= 1 )
            {
              v46 = WarehouseListViewItem__get_UserSvtId(v43, v45);
              if ( !v40 )
                sub_1BCAA3C(v46, v46);
              v47 = DataMasterBase_object__object__long___GetEntity(
                      v40,
                      v46,
                      (const MethodInfo_31B2FEC *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
              if ( v47 )
                WarehouseListViewItem__Modify(v43, (UserServantEntity_o *)v47, v48);
              v49 = WarehouseListViewItem__get_UserSvtId(v43, (const MethodInfo *)v47);
              if ( !SelfUserGame )
                sub_1BCAA3C(v49, v50);
              favoriteUserSvtId = SelfUserGame->fields.favoriteUserSvtId;
              v52 = v49;
              v53 = WarehouseListViewItem__get_UserSvtId(v43, v50);
              WarehouseListViewItem__Modify_36510376(
                v43,
                v52 == favoriteUserSvtId,
                v53 == SelfUserGame->fields.pushUserSvtId,
                v54);
              v56 = (UnityEngine_Object_o *)v43->fields.viewObject;
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v55);
              if ( UnityEngine_Object__op_Inequality(v56, 0LL, 0LL) )
              {
                v58 = v43->fields.viewObject;
                if ( !v58 )
                  sub_1BCAA3C(0LL, v57);
                ((void (__fastcall *)(struct ListViewObject_o *, WarehouseListViewItem_o *, Il2CppMethodPointer))v58->klass->vtable._5_SetItem.method)(
                  v58,
                  v43,
                  v58->klass->vtable._6_SetItem.methodPtr);
              }
            }
          }
          goto LABEL_41;
        }
      }
    }
    sub_1BCAA3C(Instance, v25);
  }
}


void __fastcall WarehouseListViewManager__ModifyItem(
        WarehouseListViewManager_o *this,
        int64_t userSvtId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x9
  DataManager_o *Instance; // x0
  __int64 v29; // x1
  DataManager_o *v30; // x19
  Il2CppObject *Entity; // x19
  UserGameEntity_o *SelfUserGame; // x22
  _BOOL8 v33; // x0
  const MethodInfo *v34; // x1
  __int64 v35; // x11
  WarehouseListViewItem_o *v36; // x20
  int64_t v37; // x0
  __int64 v38; // x1
  Il2CppObject v39; // q0
  int64_t v40; // x21
  const MethodInfo *v41; // x2
  int64_t v42; // x0
  const MethodInfo *v43; // x1
  int64_t favoriteUserSvtId; // x28
  int64_t v45; // x21
  int64_t v46; // x0
  const MethodInfo *v47; // x3
  __int64 v48; // x1
  UnityEngine_Object_o *v49; // x21
  __int64 v50; // x1
  struct ListViewObject_o *v51; // x0
  _BOOL8 v52; // x0
  const MethodInfo *v53; // x1
  __int64 methodPtr_low; // x11
  WarehouseListViewItem_o *current; // x22
  int64_t v56; // x0
  __int64 v57; // x1
  __int128 v58; // q0
  int64_t v59; // x23
  const MethodInfo *v60; // x2
  UnityEngine_Object_o *viewObject; // x23
  __int64 v62; // x1
  struct ListViewObject_o *v63; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v64; // [xsp+0h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v65; // [xsp+20h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v66; // [xsp+40h] [xbp-A0h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v67; // [xsp+60h] [xbp-80h] BYREF

  if ( (byte_4B141BB & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserServantMaster___, userSvtId, method);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserServantStorageMaster___, v5, v6);
    sub_1BCA7E0(&Method_DataMasterBase_UserServantStorageMaster__UserServantEntity__long__GetEntity__, v7, v8);
    sub_1BCA7E0(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v15, v16);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v17, v18);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v19, v20);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v21, v22);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v23, v24);
    sub_1BCA7E0(&WarehouseListViewItem_TypeInfo, v25, v26);
    byte_4B141BB = 1;
  }
  memset(&v67, 0, sizeof(v67));
  itemList = this->fields.itemList;
  if ( itemList )
  {
    if ( (this->fields.kind & 0xFFFFFFFE) == 2 )
    {
      if ( userSvtId < 1 )
      {
        v30 = 0LL;
        goto LABEL_37;
      }
      Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( Instance )
      {
        Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                      Instance,
                                      (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserServantStorageMaster___);
        if ( Instance )
        {
          Instance = (DataManager_o *)DataMasterBase_object__object__long___GetEntity(
                                        (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                                        userSvtId,
                                        (const MethodInfo_31B2FEC *)Method_DataMasterBase_UserServantStorageMaster__UserServantEntity__long__GetEntity__);
          itemList = this->fields.itemList;
          if ( itemList )
          {
            v30 = Instance;
LABEL_37:
            System_Collections_Generic_List_object___GetEnumerator(
              (System_Collections_Generic_List_Enumerator_T__o *)&v66,
              (System_Collections_Generic_List_object__o *)itemList,
              (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
            v67 = *(System_Collections_Generic_List_Enumerator_object__o *)&v66.fields.currentCryptoKey;
            while ( 1 )
            {
              v52 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                      &v67,
                      (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
              if ( !v52 )
                goto LABEL_57;
              if ( v67.fields._current
                && (methodPtr_low = LOBYTE(WarehouseListViewItem_TypeInfo->vtable._0_Equals.methodPtr),
                    LOBYTE(v67.fields._current->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low) )
              {
                if ( (WarehouseListViewItem_c *)v67.fields._current->klass->_2.typeHierarchy[methodPtr_low - 1] == WarehouseListViewItem_TypeInfo )
                  current = (WarehouseListViewItem_o *)v67.fields._current;
                else
                  current = 0LL;
                if ( v30 )
                {
LABEL_42:
                  if ( !current )
                    sub_1BCAA3C(v52, v53);
                  v56 = WarehouseListViewItem__get_UserSvtId(current, v53);
                  v58 = *(_OWORD *)&v30->fields._DispLog;
                  v59 = v56;
                  *(SingletonMonoBehaviour_DataManager__Fields *)&v66.fields.currentCryptoKey = v30->fields.SingletonMonoBehaviour_DataManager__Fields;
                  *(_OWORD *)&v66.fields.fakeValue = v58;
                  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v57);
                  v65 = v66;
                  if ( v59 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v65, 0LL) )
                    WarehouseListViewItem__Modify(current, (UserServantEntity_o *)v30, v60);
                  goto LABEL_52;
                }
              }
              else
              {
                current = 0LL;
                if ( v30 )
                  goto LABEL_42;
              }
              if ( !current )
                sub_1BCAA3C(v52, v53);
LABEL_52:
              viewObject = (UnityEngine_Object_o *)current->fields.viewObject;
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v53);
              if ( UnityEngine_Object__op_Inequality(viewObject, 0LL, 0LL) )
              {
                v63 = current->fields.viewObject;
                if ( !v63 )
                  sub_1BCAA3C(0LL, v62);
                ((void (__fastcall *)(struct ListViewObject_o *, WarehouseListViewItem_o *, Il2CppMethodPointer))v63->klass->vtable._5_SetItem.method)(
                  v63,
                  current,
                  v63->klass->vtable._6_SetItem.methodPtr);
              }
            }
          }
        }
      }
LABEL_66:
      sub_1BCAA3C(Instance, v29);
    }
    Entity = 0LL;
    SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
    if ( userSvtId >= 1 )
    {
      Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_66;
      Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                    Instance,
                                    (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserServantMaster___);
      if ( !Instance )
        goto LABEL_66;
      Entity = DataMasterBase_object__object__long___GetEntity(
                 (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                 userSvtId,
                 (const MethodInfo_31B2FEC *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    }
    Instance = (DataManager_o *)this->fields.itemList;
    if ( !Instance )
      goto LABEL_66;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v66,
      (System_Collections_Generic_List_object__o *)Instance,
      (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    *(_OWORD *)&v67.fields._list = *(_OWORD *)&v66.fields.currentCryptoKey;
    v67.fields._current = (Il2CppObject *)v66.fields.fakeValue;
    while ( 1 )
    {
      v33 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v67,
              (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
      if ( !v33 )
      {
LABEL_57:
        System_Collections_Generic_List_Enumerator_object___Dispose(
          &v67,
          (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
        return;
      }
      if ( v67.fields._current
        && (v35 = LOBYTE(WarehouseListViewItem_TypeInfo->vtable._0_Equals.methodPtr),
            LOBYTE(v67.fields._current->klass->vtable[0].methodPtr) >= (unsigned int)v35) )
      {
        if ( (WarehouseListViewItem_c *)v67.fields._current->klass->_2.typeHierarchy[v35 - 1] == WarehouseListViewItem_TypeInfo )
          v36 = (WarehouseListViewItem_o *)v67.fields._current;
        else
          v36 = 0LL;
        if ( Entity )
        {
LABEL_20:
          if ( !v36 )
            sub_1BCAA3C(v33, v34);
          v37 = WarehouseListViewItem__get_UserSvtId(v36, v34);
          v39 = Entity[2];
          v40 = v37;
          *(Il2CppObject *)&v66.fields.currentCryptoKey = Entity[1];
          *(Il2CppObject *)&v66.fields.fakeValue = v39;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v38);
          v64 = v66;
          if ( v40 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v64, 0LL) )
            WarehouseListViewItem__Modify(v36, (UserServantEntity_o *)Entity, v41);
          goto LABEL_30;
        }
      }
      else
      {
        v36 = 0LL;
        if ( Entity )
          goto LABEL_20;
      }
      if ( !v36 )
        sub_1BCAA3C(v33, v34);
LABEL_30:
      v42 = WarehouseListViewItem__get_UserSvtId(v36, v34);
      if ( !SelfUserGame )
        sub_1BCAA3C(v42, v43);
      favoriteUserSvtId = SelfUserGame->fields.favoriteUserSvtId;
      v45 = v42;
      v46 = WarehouseListViewItem__get_UserSvtId(v36, v43);
      WarehouseListViewItem__Modify_36510376(
        v36,
        v45 == favoriteUserSvtId,
        v46 == SelfUserGame->fields.pushUserSvtId,
        v47);
      v49 = (UnityEngine_Object_o *)v36->fields.viewObject;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v48);
      if ( UnityEngine_Object__op_Inequality(v49, 0LL, 0LL) )
      {
        v51 = v36->fields.viewObject;
        if ( !v51 )
          sub_1BCAA3C(0LL, v50);
        ((void (__fastcall *)(struct ListViewObject_o *, WarehouseListViewItem_o *, Il2CppMethodPointer))v51->klass->vtable._5_SetItem.method)(
          v51,
          v36,
          v51->klass->vtable._6_SetItem.methodPtr);
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
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  const MethodInfo *v15; // x1
  System_Collections_Generic_List_object__o *itemList; // x0
  const MethodInfo *v17; // x1
  struct WarehouseListManager_o *parentManager; // x8
  struct WarehouseListViewManager_o *baseListViewManager; // x9
  int size; // w23
  int32_t v21; // w21
  WarehouseListViewItem_o *v22; // x22
  __int64 methodPtr_low; // x9
  int64_t UserSvtId; // x0
  int64_t v25; // x0
  struct WarehouseListManager_o *v26; // x8
  struct WarehouseListViewManager_o *v27; // x9
  WarehouseListViewManager_o *v28; // x0
  const MethodInfo *v29; // x1

  if ( (byte_4B141D6 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_long__int__ContainsKey__, selectServantIdDic, method);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_long__int__get_Count__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_long__int__get_Item__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v11, v12);
    sub_1BCA7E0(&WarehouseListViewItem_TypeInfo, v13, v14);
    byte_4B141D6 = 1;
  }
  if ( selectServantIdDic
    && System_Collections_Generic_Dictionary_long__int___get_Count(
         selectServantIdDic,
         (const MethodInfo_323DEC0 *)Method_System_Collections_Generic_Dictionary_long__int__get_Count__) )
  {
    WarehouseListViewManager__ReleaseAll(this, v15);
    parentManager = this->fields.parentManager;
    if ( !parentManager
      || (baseListViewManager = parentManager->fields.baseListViewManager) == 0LL
      || (parentManager->fields.totalSum = baseListViewManager->fields.selectSum,
          (itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList) == 0LL) )
    {
LABEL_19:
      sub_1BCAA3C(itemList, v17);
    }
    size = itemList->fields._size;
    if ( size >= 1 )
    {
      v21 = 0;
      while ( 1 )
      {
        itemList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                  itemList,
                                                                  v21,
                                                                  (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
        if ( !itemList )
          goto LABEL_19;
        v22 = (WarehouseListViewItem_o *)itemList;
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
               (const MethodInfo_323E404 *)Method_System_Collections_Generic_Dictionary_long__int__ContainsKey__) )
        {
          v25 = WarehouseListViewItem__get_UserSvtId(v22, v17);
          itemList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_Dictionary_long__int___get_Item(
                                                                    selectServantIdDic,
                                                                    v25,
                                                                    (const MethodInfo_323E170 *)Method_System_Collections_Generic_Dictionary_long__int__get_Item__);
          v22->fields.selectNum = (int)itemList;
          v26 = this->fields.parentManager;
          ++this->fields.selectSum;
          if ( !v26 )
            goto LABEL_19;
          v27 = v26->fields.baseListViewManager;
          if ( !v27 )
            goto LABEL_19;
          v26->fields.totalSum = v27->fields.selectSum;
        }
        if ( size == ++v21 )
          return;
        itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
        if ( !itemList )
          goto LABEL_19;
      }
      sub_1BCACFC(itemList);
      WarehouseListViewManager__IsDragStart(v28, v29);
    }
  }
}


void __fastcall WarehouseListViewManager__OnClickBonusFilterKind(
        WarehouseListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  __int64 v6; // x1
  ListViewSort_o *sort; // x0

  if ( (byte_4B141C6 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_WarehouseListViewManager_OnClickBonusFilterKind__, method, v2);
    byte_4B141C6 = 1;
  }
  if ( this->fields.isInput )
  {
    v4 = Method_WarehouseListViewManager_OnClickBonusFilterKind__;
    if ( (*((_BYTE *)Method_WarehouseListViewManager_OnClickBonusFilterKind__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1BCA7F8(Method_WarehouseListViewManager_OnClickBonusFilterKind__);
    v5 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v4, v4[4]);
    OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0LL);
    sort = this->fields.sort;
    if ( !sort )
      sub_1BCAA3C(0LL, v6);
    ListViewSort__IncrementBonusFilter(sort, this->fields.alignedBonusFilterInfos, this->fields.isQuestStart, 0LL, 0LL);
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
    ListViewManager__CheckScroll((ListViewManager_o *)this, this->fields.scaleType, 0LL);
  }
}


void __fastcall WarehouseListViewManager__OnClickFilterKind(WarehouseListViewManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  _QWORD *v10; // x0
  System_Reflection_MethodBase_o *v11; // x0
  Il2CppObject *Instance; // x0
  ListViewSort_o *sort; // x20
  Il2CppObject *v14; // x21
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x3
  ServantFilterSelectMenu_CallbackFunc_o *v18; // x22
  __int64 v19; // x0
  __int64 v20; // x1
  CommonUI_o *v21; // x0
  int32_t v22; // w1
  Il2CppObject *v23; // x0
  ListViewSort_o *v24; // x20
  CommonUI_o *v25; // x21
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x3
  ServantFilterSelectMenu_CallbackFunc_o *v29; // x22
  Il2CppObject *v30; // x0
  Il2CppObject *v31; // x21
  __int64 v32; // x1
  __int64 v33; // x2
  __int64 v34; // x3

  if ( (byte_4B141CE & 1) == 0 )
  {
    sub_1BCA7E0(&ServantFilterSelectMenu_CallbackFunc_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4, v5);
    sub_1BCA7E0(&Method_WarehouseListViewManager_EndSelectFilterKind__, v6, v7);
    sub_1BCA7E0(&Method_WarehouseListViewManager_OnClickFilterKind__, v8, v9);
    byte_4B141CE = 1;
  }
  if ( this->fields.isInput )
  {
    v10 = Method_WarehouseListViewManager_OnClickFilterKind__;
    if ( (*((_BYTE *)Method_WarehouseListViewManager_OnClickFilterKind__ + 83) & 2) != 0 )
      v10 = (_QWORD *)sub_1BCA7F8(Method_WarehouseListViewManager_OnClickFilterKind__);
    v11 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v10, v10[4]);
    OverwriteAssetSoundName__PlaySystemSe(v11, 0, 0LL);
    switch ( this->fields.kind )
    {
      case 0:
      case 2:
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        sort = this->fields.sort;
        v14 = Instance;
        v18 = (ServantFilterSelectMenu_CallbackFunc_o *)sub_1BCAA2C(
                                                          ServantFilterSelectMenu_CallbackFunc_TypeInfo,
                                                          v15,
                                                          v16,
                                                          v17);
        ServantFilterSelectMenu_CallbackFunc___ctor(
          v18,
          (Il2CppObject *)this,
          Method_WarehouseListViewManager_EndSelectFilterKind__,
          0LL);
        if ( !v14 )
          goto LABEL_15;
        v21 = (CommonUI_o *)v14;
        v22 = 0;
        goto LABEL_14;
      case 1:
      case 3:
        v23 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        v24 = this->fields.sort;
        v25 = (CommonUI_o *)v23;
        v29 = (ServantFilterSelectMenu_CallbackFunc_o *)sub_1BCAA2C(
                                                          ServantFilterSelectMenu_CallbackFunc_TypeInfo,
                                                          v26,
                                                          v27,
                                                          v28);
        ServantFilterSelectMenu_CallbackFunc___ctor(
          v29,
          (Il2CppObject *)this,
          Method_WarehouseListViewManager_EndSelectFilterKind__,
          0LL);
        if ( !v25 )
          goto LABEL_15;
        CommonUI__OpenServantFilterSelectMenu_30773292(v25, 5, v24, (ListViewManager_o *)this, v29, -1, 0LL);
        break;
      default:
        v30 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        sort = this->fields.sort;
        v31 = v30;
        v18 = (ServantFilterSelectMenu_CallbackFunc_o *)sub_1BCAA2C(
                                                          ServantFilterSelectMenu_CallbackFunc_TypeInfo,
                                                          v32,
                                                          v33,
                                                          v34);
        ServantFilterSelectMenu_CallbackFunc___ctor(
          v18,
          (Il2CppObject *)this,
          Method_WarehouseListViewManager_EndSelectFilterKind__,
          0LL);
        if ( !v31 )
LABEL_15:
          sub_1BCAA3C(v19, v20);
        v22 = 6;
        v21 = (CommonUI_o *)v31;
LABEL_14:
        CommonUI__OpenServantFilterSelectMenu(v21, v22, sort, v18, -1, 0LL);
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

  if ( (byte_4B141C5 & 1) == 0 )
  {
    sub_1BCA7E0(&WarehouseListViewItem_TypeInfo, item, method);
    byte_4B141C5 = 1;
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
  __int64 v2; // x2
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  __int64 v6; // x0
  __int64 v7; // x1
  struct ListViewSort_o *sort; // x8

  if ( (byte_4B141D1 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_WarehouseListViewManager_OnClickSortAscendingOrder__, method, v2);
    byte_4B141D1 = 1;
  }
  if ( this->fields.isInput )
  {
    v4 = Method_WarehouseListViewManager_OnClickSortAscendingOrder__;
    if ( (*((_BYTE *)Method_WarehouseListViewManager_OnClickSortAscendingOrder__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1BCA7F8(Method_WarehouseListViewManager_OnClickSortAscendingOrder__);
    v5 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v4, v4[4]);
    OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0LL);
    sort = this->fields.sort;
    if ( !sort )
      sub_1BCAA3C(v6, v7);
    sort->fields.isAscendingOrder ^= 1u;
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
  }
}


void __fastcall WarehouseListViewManager__OnClickSortKind(WarehouseListViewManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  _QWORD *v10; // x0
  System_Reflection_MethodBase_o *v11; // x0
  unsigned int kind; // w23
  Il2CppObject *Instance; // x0
  ListViewSort_o *sort; // x20
  CommonUI_o *v15; // x21
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x3
  ServantSortSelectMenu_CallbackFunc_o *v19; // x22
  __int64 v20; // x0
  __int64 v21; // x1
  int32_t v22; // w1

  if ( (byte_4B141CC & 1) == 0 )
  {
    sub_1BCA7E0(&ServantSortSelectMenu_CallbackFunc_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4, v5);
    sub_1BCA7E0(&Method_WarehouseListViewManager_EndSelectSortKind__, v6, v7);
    sub_1BCA7E0(&Method_WarehouseListViewManager_OnClickSortKind__, v8, v9);
    byte_4B141CC = 1;
  }
  if ( this->fields.isInput )
  {
    v10 = Method_WarehouseListViewManager_OnClickSortKind__;
    if ( (*((_BYTE *)Method_WarehouseListViewManager_OnClickSortKind__ + 83) & 2) != 0 )
      v10 = (_QWORD *)sub_1BCA7F8(Method_WarehouseListViewManager_OnClickSortKind__);
    v11 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v10, v10[4]);
    OverwriteAssetSoundName__PlaySystemSe(v11, 0, 0LL);
    kind = this->fields.kind;
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sort = this->fields.sort;
    v15 = (CommonUI_o *)Instance;
    v19 = (ServantSortSelectMenu_CallbackFunc_o *)sub_1BCAA2C(
                                                    ServantSortSelectMenu_CallbackFunc_TypeInfo,
                                                    v16,
                                                    v17,
                                                    v18);
    ServantSortSelectMenu_CallbackFunc___ctor(
      v19,
      (Il2CppObject *)this,
      Method_WarehouseListViewManager_EndSelectSortKind__,
      0LL);
    if ( !v15 )
      sub_1BCAA3C(v20, v21);
    if ( kind <= 3 )
      v22 = kind + 1;
    else
      v22 = 3;
    CommonUI__OpenServantSortSelectMenu(v15, v22, sort, 1, v19, 0LL);
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

  if ( (byte_4B141CB & 1) == 0 )
  {
    sub_1BCA7E0(&WarehouseListViewItem_TypeInfo, item, method);
    byte_4B141CB = 1;
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
  __int64 v2; // x2
  int32_t callbackCount; // w8
  bool v5; // vf
  int32_t v6; // w8
  __int64 v7; // x1
  UnityEngine_Object_o *scrollView; // x20
  __int64 v9; // x1
  UIScrollView_o *v10; // x0

  if ( (byte_4B141C2 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    byte_4B141C2 = 1;
  }
  callbackCount = this->fields.callbackCount;
  v5 = __OFSUB__(callbackCount, 1);
  v6 = callbackCount - 1;
  if ( v6 < 0 == v5 )
  {
    this->fields.callbackCount = v6;
    if ( !v6 )
    {
      ListViewManager__DragMaskEnd((ListViewManager_o *)this, 0LL);
      scrollView = (UnityEngine_Object_o *)this->fields.scrollView;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7);
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
          sub_1BCAA3C(v10, v9);
        }
        UIScrollView__UpdatePosition(v10, 0LL);
      }
    }
  }
}


void __fastcall WarehouseListViewManager__RefrashListDisp(WarehouseListViewManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  void *parentManager; // x0
  const MethodInfo *v7; // x1
  int v8; // w22
  System_Collections_Generic_List_object__o *v9; // x20
  int32_t v10; // w21

  if ( (byte_4B141B8 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_WarehouseListViewObject__get_Count__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_WarehouseListViewObject__get_Item__, v4, v5);
    byte_4B141B8 = 1;
  }
  parentManager = this->fields.parentManager;
  if ( !parentManager )
    goto LABEL_10;
  WarehouseListManager__RefrashListDisp((WarehouseListManager_o *)parentManager, method);
  parentManager = WarehouseListViewManager__get_ObjectList(this, v7);
  if ( !parentManager )
    goto LABEL_10;
  v8 = *((_DWORD *)parentManager + 6);
  v9 = (System_Collections_Generic_List_object__o *)parentManager;
  if ( v8 >= 1 )
  {
    v10 = 0;
    while ( 1 )
    {
      parentManager = System_Collections_Generic_List_object___get_Item(
                        v9,
                        v10,
                        (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_WarehouseListViewObject__get_Item__);
      if ( !parentManager )
        break;
      (*(void (__fastcall **)(void *, bool, _QWORD))(*(_QWORD *)parentManager + 456LL))(
        parentManager,
        this->fields.isInput,
        *(_QWORD *)(*(_QWORD *)parentManager + 464LL));
      if ( v8 == ++v10 )
        return;
    }
LABEL_10:
    sub_1BCAA3C(parentManager, method);
  }
}


void __fastcall WarehouseListViewManager__ReleaseAll(WarehouseListViewManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x0
  _BOOL8 v13; // x0
  __int64 v14; // x1
  Il2CppObject *current; // x20
  __int64 methodPtr_low; // x9
  const MethodInfo *v17; // x3
  const MethodInfo *v18; // x1
  System_Collections_Generic_List_Enumerator_object__o v19; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4B141C4 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v4, v5);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v6, v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v8, v9);
    sub_1BCA7E0(&WarehouseListViewItem_TypeInfo, v10, v11);
    byte_4B141C4 = 1;
  }
  memset(&v19, 0, sizeof(v19));
  itemList = this->fields.itemList;
  this->fields.sellEnableRestCnt = 0;
  if ( !itemList )
    sub_1BCAA3C(0LL, method);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v19,
    (System_Collections_Generic_List_object__o *)itemList,
    (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  while ( 1 )
  {
    v13 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v19,
            (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    if ( !v13 )
      break;
    current = v19.fields._current;
    if ( !v19.fields._current )
      goto LABEL_12;
    methodPtr_low = LOBYTE(WarehouseListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(v19.fields._current->klass->vtable[0].methodPtr) < (unsigned int)methodPtr_low
      || (WarehouseListViewItem_c *)v19.fields._current->klass->_2.typeHierarchy[methodPtr_low - 1] != WarehouseListViewItem_TypeInfo )
    {
      sub_1BCACFC(v19.fields._current);
LABEL_12:
      sub_1BCAA3C(v13, v14);
    }
    ListViewItem__set_IsSelect((ListViewItem_o *)v19.fields._current, 0, 0LL);
    WarehouseListViewManager__ChangeSellEnableRestCnt(this, 1, (WarehouseListViewItem_o *)current, v17);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v19,
    (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
  this->fields.selectSum = 0;
  WarehouseListViewManager__RefrashListDisp(this, v18);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarehouseListViewManager__RequestListObject(
        WarehouseListViewManager_o *this,
        int32_t mode,
        float delay,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  System_Collections_Generic_List_object__o *ObjectList; // x0
  __int64 v22; // x1
  int32_t size; // w8
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x3
  Il2CppObject *current; // x21
  System_Action_o *v28; // x22
  __int64 v29; // x0
  __int64 v30; // x1
  System_Collections_Generic_List_Enumerator_object__o v31; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4B141C0 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, *(_QWORD *)&mode, method);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_WarehouseListViewObject__Dispose__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_WarehouseListViewObject__MoveNext__, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_WarehouseListViewObject__get_Current__, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_WarehouseListViewObject__GetEnumerator__, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_WarehouseListViewObject__get_Count__, v15, v16);
    sub_1BCA7E0(&Method_WarehouseListViewManager_OnMoveEnd__, v17, v18);
    sub_1BCA7E0(&StringLiteral_10069/*"OnMoveEnd"*/, v19, v20);
    byte_4B141C0 = 1;
  }
  memset(&v31, 0, sizeof(v31));
  ObjectList = (System_Collections_Generic_List_object__o *)WarehouseListViewManager__get_ObjectList(
                                                              this,
                                                              *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_1BCAA3C(0LL, v22);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10069/*"OnMoveEnd"*/,
      delay,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v31,
      ObjectList,
      (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_WarehouseListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v31,
              (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_WarehouseListViewObject__MoveNext__) )
    {
      current = v31.fields._current;
      v28 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v24, v25, v26);
      System_Action___ctor(v28, (Il2CppObject *)this, Method_WarehouseListViewManager_OnMoveEnd__, 0LL);
      if ( !current )
        sub_1BCAA3C(v29, v30);
      WarehouseListViewObject__Init_36534688((WarehouseListViewObject_o *)current, mode, v28, delay, 0LL);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v31,
      (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_WarehouseListViewObject__Dispose__);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarehouseListViewManager__RequestListObject_36524800(
        WarehouseListViewManager_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  System_Collections_Generic_List_object__o *ObjectList; // x0
  __int64 v20; // x1
  int32_t size; // w8
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x3
  Il2CppObject *current; // x21
  System_Action_o *v26; // x22
  __int64 v27; // x0
  __int64 v28; // x1
  System_Collections_Generic_List_Enumerator_object__o v29; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4B141C1 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, *(_QWORD *)&mode, method);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_WarehouseListViewObject__Dispose__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_WarehouseListViewObject__MoveNext__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_WarehouseListViewObject__get_Current__, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_WarehouseListViewObject__GetEnumerator__, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_WarehouseListViewObject__get_Count__, v13, v14);
    sub_1BCA7E0(&Method_WarehouseListViewManager_OnMoveEnd__, v15, v16);
    sub_1BCA7E0(&StringLiteral_10069/*"OnMoveEnd"*/, v17, v18);
    byte_4B141C1 = 1;
  }
  memset(&v29, 0, sizeof(v29));
  ObjectList = (System_Collections_Generic_List_object__o *)WarehouseListViewManager__get_ObjectList(
                                                              this,
                                                              *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_1BCAA3C(0LL, v20);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10069/*"OnMoveEnd"*/,
      0.0,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v29,
      ObjectList,
      (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_WarehouseListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v29,
              (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_WarehouseListViewObject__MoveNext__) )
    {
      current = v29.fields._current;
      v26 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v22, v23, v24);
      System_Action___ctor(v26, (Il2CppObject *)this, Method_WarehouseListViewManager_OnMoveEnd__, 0LL);
      if ( !current )
        sub_1BCAA3C(v27, v28);
      WarehouseListViewObject__Init_36534772((WarehouseListViewObject_o *)current, mode, v26, 0LL);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v29,
      (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_WarehouseListViewObject__Dispose__);
  }
}


void __fastcall WarehouseListViewManager__SaveSortInfo(WarehouseListViewManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  WarehouseListViewManager_c *v3; // x0
  ListViewSort_o *servantSortInfo; // x8
  __int64 v5; // x0
  __int64 v6; // x1
  ListViewSort_o *servantEquipSortInfo; // x8
  ListViewSort_o *servantWarehouseSortInfo; // x8
  ListViewSort_o *servantEquipWarehouseSortInfo; // x8

  if ( (byte_4B141B9 & 1) == 0 )
  {
    sub_1BCA7E0(&WarehouseListViewManager_TypeInfo, method, v2);
    byte_4B141B9 = 1;
  }
  v3 = WarehouseListViewManager_TypeInfo;
  if ( !WarehouseListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarehouseListViewManager_TypeInfo, method);
    v3 = WarehouseListViewManager_TypeInfo;
  }
  servantSortInfo = v3->static_fields->servantSortInfo;
  if ( servantSortInfo )
  {
    if ( !v3->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v3, method);
      servantSortInfo = WarehouseListViewManager_TypeInfo->static_fields->servantSortInfo;
      if ( !servantSortInfo )
        goto LABEL_28;
    }
    ListViewSort__Save(servantSortInfo, 0LL);
    v3 = WarehouseListViewManager_TypeInfo;
  }
  if ( !v3->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v3, method);
    v3 = WarehouseListViewManager_TypeInfo;
  }
  servantEquipSortInfo = v3->static_fields->servantEquipSortInfo;
  if ( servantEquipSortInfo )
  {
    if ( !v3->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v3, method);
      servantEquipSortInfo = WarehouseListViewManager_TypeInfo->static_fields->servantEquipSortInfo;
      if ( !servantEquipSortInfo )
        goto LABEL_28;
    }
    ListViewSort__Save(servantEquipSortInfo, 0LL);
    v3 = WarehouseListViewManager_TypeInfo;
  }
  if ( !v3->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v3, method);
    v3 = WarehouseListViewManager_TypeInfo;
  }
  servantWarehouseSortInfo = v3->static_fields->servantWarehouseSortInfo;
  if ( servantWarehouseSortInfo )
  {
    if ( !v3->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v3, method);
      servantWarehouseSortInfo = WarehouseListViewManager_TypeInfo->static_fields->servantWarehouseSortInfo;
      if ( !servantWarehouseSortInfo )
        goto LABEL_28;
    }
    ListViewSort__Save(servantWarehouseSortInfo, 0LL);
    v3 = WarehouseListViewManager_TypeInfo;
  }
  if ( !v3->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v3, method);
    v3 = WarehouseListViewManager_TypeInfo;
  }
  servantEquipWarehouseSortInfo = v3->static_fields->servantEquipWarehouseSortInfo;
  if ( servantEquipWarehouseSortInfo )
  {
    if ( v3->_2.cctor_finished
      || (j_il2cpp_runtime_class_init_0(v3, method),
          (servantEquipWarehouseSortInfo = WarehouseListViewManager_TypeInfo->static_fields->servantEquipWarehouseSortInfo) != 0LL) )
    {
      ListViewSort__Save(servantEquipWarehouseSortInfo, 0LL);
      return;
    }
LABEL_28:
    sub_1BCAA3C(v5, v6);
  }
}


void __fastcall WarehouseListViewManager__SelectListView(
        WarehouseListViewManager_o *this,
        WarehouseListViewItem_o *selectItem,
        const MethodInfo *method)
{
  WarehouseListViewManager_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  _QWORD *v11; // x0
  System_Reflection_MethodBase_o *v12; // x0
  const MethodInfo *v13; // x4
  _QWORD *v14; // x0
  System_Reflection_MethodBase_o *v15; // x0
  struct WarehouseListManager_o *parentManager; // x8
  struct WarehouseListViewManager_o *baseListViewManager; // x9
  UILabel_o *selectDoneLabel; // x21
  struct WarehouseListManager_o *v19; // x8
  WarehouseListViewManager_o *v20; // x22
  struct WarehouseListManager_o *v21; // x8
  Il2CppObject *v22; // x23
  Il2CppObject *v23; // x0
  const MethodInfo *v24; // x3
  const MethodInfo *v25; // x2
  struct WarehouseListManager_o *v26; // x8
  const MethodInfo *v27; // x1
  bool IsSelectEnable; // w21
  _QWORD *v29; // x8
  struct WarehouseListManager_o *v30; // x8
  struct WarehouseListViewManager_o *v31; // x9
  UILabel_o *v32; // x21
  struct WarehouseListManager_o *v33; // x8
  WarehouseListViewManager_o *v34; // x22
  struct WarehouseListManager_o *v35; // x8
  Il2CppObject *v36; // x23
  Il2CppObject *v37; // x0
  const MethodInfo *v38; // x3
  int32_t sendMax; // [xsp+8h] [xbp-38h] BYREF
  int32_t totalSum; // [xsp+Ch] [xbp-34h] BYREF

  v4 = this;
  if ( (byte_4B141C7 & 1) == 0 )
  {
    sub_1BCA7E0(&int_TypeInfo, selectItem, method);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v5, v6);
    sub_1BCA7E0(&Method_WarehouseListViewManager_SelectListView__, v7, v8);
    this = (WarehouseListViewManager_o *)sub_1BCA7E0(&StringLiteral_12532/*"SUM_INFO"*/, v9, v10);
    byte_4B141C7 = 1;
  }
  if ( !selectItem )
    goto LABEL_34;
  if ( !WarehouseListViewItem__get_IsCanNotSelect(selectItem, (const MethodInfo *)selectItem) )
  {
    if ( ListViewItem__get_IsSelect((ListViewItem_o *)selectItem, 0LL) )
    {
      v14 = Method_WarehouseListViewManager_SelectListView__;
      if ( (*((_BYTE *)Method_WarehouseListViewManager_SelectListView__ + 83) & 2) != 0 )
        v14 = (_QWORD *)sub_1BCA7F8(Method_WarehouseListViewManager_SelectListView__);
      v15 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v14, v14[4]);
      OverwriteAssetSoundName__PlaySystemSe(v15, 0, 0LL);
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
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, selectItem);
          this = (WarehouseListViewManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12532/*"SUM_INFO"*/, 0LL);
          v19 = v4->fields.parentManager;
          if ( v19 )
          {
            v20 = this;
            totalSum = v19->fields.totalSum;
            this = (WarehouseListViewManager_o *)j_il2cpp_value_box_0(int_TypeInfo, &totalSum);
            v21 = v4->fields.parentManager;
            if ( v21 )
            {
              v22 = (Il2CppObject *)this;
              sendMax = v21->fields.sendMax;
              v23 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &sendMax);
              this = (WarehouseListViewManager_o *)System_String__Format_62415592((System_String_o *)v20, v22, v23, 0LL);
              if ( selectDoneLabel )
              {
                UILabel__set_text(selectDoneLabel, (System_String_o *)this, 0LL);
                WarehouseListViewManager__ChangeSellEnableRestCnt(v4, 1, selectItem, v24);
                v26 = v4->fields.parentManager;
                if ( v26 )
                {
                  this = v26->fields.baseListViewManager;
                  if ( this )
                  {
                    WarehouseListViewManager__DecrementNumber(this, selectItem->fields.selectNum, v25);
                    ListViewItem__set_IsSelect((ListViewItem_o *)selectItem, 0, 0LL);
LABEL_32:
                    WarehouseListViewManager__RefrashListDisp(v4, v27);
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
      IsSelectEnable = WarehouseListViewManager__IsSelectEnable(v4, selectItem, 0, 0, v13);
      v29 = Method_WarehouseListViewManager_SelectListView__;
      if ( (*((_BYTE *)Method_WarehouseListViewManager_SelectListView__ + 83) & 2) != 0 )
        v29 = (_QWORD *)sub_1BCA7F8(Method_WarehouseListViewManager_SelectListView__);
      v12 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v29, v29[4]);
      if ( !IsSelectEnable )
        goto LABEL_33;
      OverwriteAssetSoundName__PlaySystemSe(v12, 0, 0LL);
      v30 = v4->fields.parentManager;
      if ( v30 )
      {
        selectItem->fields.selectNum = v30->fields.totalSum;
        ++v4->fields.selectSum;
        v31 = v30->fields.baseListViewManager;
        if ( v31 )
        {
          v30->fields.totalSum = v31->fields.selectSum;
          v32 = v4->fields.selectDoneLabel;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, selectItem);
          this = (WarehouseListViewManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12532/*"SUM_INFO"*/, 0LL);
          v33 = v4->fields.parentManager;
          if ( v33 )
          {
            v34 = this;
            totalSum = v33->fields.totalSum;
            this = (WarehouseListViewManager_o *)j_il2cpp_value_box_0(int_TypeInfo, &totalSum);
            v35 = v4->fields.parentManager;
            if ( v35 )
            {
              v36 = (Il2CppObject *)this;
              sendMax = v35->fields.sendMax;
              v37 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &sendMax);
              this = (WarehouseListViewManager_o *)System_String__Format_62415592((System_String_o *)v34, v36, v37, 0LL);
              if ( v32 )
              {
                UILabel__set_text(v32, (System_String_o *)this, 0LL);
                WarehouseListViewManager__ChangeSellEnableRestCnt(v4, 0, selectItem, v38);
                goto LABEL_32;
              }
            }
          }
        }
      }
    }
LABEL_34:
    sub_1BCAA3C(this, selectItem);
  }
  v11 = Method_WarehouseListViewManager_SelectListView__;
  if ( (*((_BYTE *)Method_WarehouseListViewManager_SelectListView__ + 83) & 2) != 0 )
    v11 = (_QWORD *)sub_1BCA7F8(Method_WarehouseListViewManager_SelectListView__);
  v12 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v11, v11[4]);
LABEL_33:
  OverwriteAssetSoundName__PlaySystemSe(v12, 2, 0LL);
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

  if ( (byte_4B141CA & 1) == 0 )
  {
    sub_1BCA7E0(&Method_WarehouseListViewManager_SelectListViewChoice__, selectItem, method);
    byte_4B141CA = 1;
  }
  v5 = Method_WarehouseListViewManager_SelectListViewChoice__;
  if ( (*((_BYTE *)Method_WarehouseListViewManager_SelectListViewChoice__ + 83) & 2) != 0 )
    v5 = (_QWORD *)sub_1BCA7F8(Method_WarehouseListViewManager_SelectListViewChoice__);
  v6 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v5, v5[4]);
  OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0LL);
  if ( !selectItem )
    sub_1BCAA3C(v7, v8);
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

  if ( (byte_4B141C9 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_WarehouseListViewManager_SelectListViewLock__, selectItem, method);
    byte_4B141C9 = 1;
  }
  v5 = Method_WarehouseListViewManager_SelectListViewLock__;
  if ( (*((_BYTE *)Method_WarehouseListViewManager_SelectListViewLock__ + 83) & 2) != 0 )
    v5 = (_QWORD *)sub_1BCA7F8(Method_WarehouseListViewManager_SelectListViewLock__);
  v6 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v5, v5[4]);
  OverwriteAssetSoundName__PlaySystemSe(v6, 11, 0LL);
  if ( !selectItem )
    sub_1BCAA3C(v7, v8);
  selectItem->fields.isSwapLock ^= 1u;
  WarehouseListViewManager__RefrashListDisp(this, v8);
}


void __fastcall WarehouseListViewManager__SetDragEnd(WarehouseListViewManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  const MethodInfo *v6; // x1
  const MethodInfo *v7; // x2
  int32_t dragStartIndex; // w20
  int32_t dragEndIndex; // w21

  if ( (byte_4B141DA & 1) == 0 )
  {
    sub_1BCA7E0(&Method_WarehouseListViewManager_SetDragEnd__, method, v2);
    byte_4B141DA = 1;
  }
  v4 = Method_WarehouseListViewManager_SetDragEnd__;
  if ( (*((_BYTE *)Method_WarehouseListViewManager_SetDragEnd__ + 83) & 2) != 0 )
    v4 = (_QWORD *)sub_1BCA7F8(Method_WarehouseListViewManager_SetDragEnd__);
  v5 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v4, v4[4]);
  OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0LL);
  dragStartIndex = this->fields.dragStartIndex;
  if ( (dragStartIndex & 0x80000000) == 0 )
  {
    dragEndIndex = this->fields.dragEndIndex;
    if ( dragStartIndex <= dragEndIndex )
    {
      do
        WarehouseListViewManager__DecideDragSelect(this, dragStartIndex++, v7);
      while ( dragStartIndex <= this->fields.dragEndIndex );
    }
    else
    {
      do
        WarehouseListViewManager__DecideDragSelect(this, dragEndIndex++, v7);
      while ( dragEndIndex <= this->fields.dragStartIndex );
    }
  }
  WarehouseListViewManager__RefrashListDisp(this, v6);
  *(_OWORD *)&this->fields.dragSelectSum = xmmword_BD2BC0;
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
  int32_t v5; // w19
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  System_Collections_Generic_List_object__o *itemSortList; // x0
  System_Collections_Generic_List_object__o *v14; // x19
  __int64 methodPtr_low; // x9
  int syncRoot_high; // w8
  bool v17; // w21
  _BOOL4 v18; // w21
  bool IsSelect; // w0
  const MethodInfo *v20; // x4
  int v21; // w8
  UnityEngine_Object_o *v22; // x20
  __int64 v23; // x9
  bool result; // w0
  WarehouseListViewManager_o *v25; // x0
  int32_t v26; // w1
  bool v27; // w2
  const MethodInfo *v28; // x3

  v5 = index;
  if ( (byte_4B141D8 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, *(_QWORD *)&index, isDragSelect);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v7, v8);
    sub_1BCA7E0(&WarehouseListViewItem_TypeInfo, v9, v10);
    sub_1BCA7E0(&WarehouseListViewObject_TypeInfo, v11, v12);
    byte_4B141D8 = 1;
  }
  itemSortList = (System_Collections_Generic_List_object__o *)this->fields.itemSortList;
  if ( !itemSortList )
    goto LABEL_46;
  itemSortList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                itemSortList,
                                                                v5,
                                                                (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
  if ( !itemSortList )
    goto LABEL_46;
  v14 = itemSortList;
  *(_QWORD *)&index = WarehouseListViewItem_TypeInfo;
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
      if ( !ListViewItem__get_IsSelect((ListViewItem_o *)itemSortList, 0LL) && SHIDWORD(v14[5].fields._syncRoot) >= 1 )
      {
        if ( BYTE6(v14[4].klass) )
          --this->fields.dragSelectFriendShipSum;
        else
          --this->fields.dragSelectSum;
        if ( !this->fields.kind )
        {
          itemSortList = (System_Collections_Generic_List_object__o *)v14[3].klass;
          if ( !itemSortList )
            goto LABEL_46;
          if ( ServantEntity__get_IsOrganization((ServantEntity_o *)itemSortList, 0LL)
            && !HIDWORD(v14[4].fields._syncRoot) )
          {
            --this->fields.dragServantSelectSum;
          }
        }
      }
      v17 = 0;
      v21 = -1;
      goto LABEL_27;
    }
    goto LABEL_29;
  }
  if ( (syncRoot_high & 0x80000000) == 0 )
    goto LABEL_29;
  HIDWORD(itemSortList[5].fields._syncRoot) = 0;
  v17 = 0;
  if ( WarehouseListViewItem__get_IsCanNotSelect((WarehouseListViewItem_o *)itemSortList, *(const MethodInfo **)&index) )
    goto LABEL_30;
  v18 = this->fields.isDragSelect;
  IsSelect = ListViewItem__get_IsSelect((ListViewItem_o *)v14, 0LL);
  if ( !v18 )
  {
    if ( IsSelect )
    {
LABEL_45:
      v17 = 0;
      v21 = 1;
LABEL_27:
      HIDWORD(v14[5].fields._syncRoot) = v21;
      goto LABEL_30;
    }
    goto LABEL_29;
  }
  if ( IsSelect )
  {
LABEL_29:
    v17 = 0;
    goto LABEL_30;
  }
  if ( WarehouseListViewManager__IsSelectEnable(
         this,
         (WarehouseListViewItem_o *)v14,
         this->fields.dragSelectSum,
         this->fields.dragServantSelectSum,
         v20) )
  {
    if ( BYTE6(v14[4].klass) )
      ++this->fields.dragSelectFriendShipSum;
    else
      ++this->fields.dragSelectSum;
    if ( !this->fields.kind )
    {
      itemSortList = (System_Collections_Generic_List_object__o *)v14[3].klass;
      if ( !itemSortList )
        goto LABEL_46;
      if ( ServantEntity__get_IsOrganization((ServantEntity_o *)itemSortList, 0LL) && !HIDWORD(v14[4].fields._syncRoot) )
        ++this->fields.dragServantSelectSum;
    }
    goto LABEL_45;
  }
  v17 = 1;
LABEL_30:
  v22 = *(UnityEngine_Object_o **)&v14[2].fields._size;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, *(_QWORD *)&index);
  if ( !UnityEngine_Object__op_Inequality(v22, 0LL, 0LL) )
    return v17;
  itemSortList = *(System_Collections_Generic_List_object__o **)&v14[2].fields._size;
  if ( !itemSortList )
LABEL_46:
    sub_1BCAA3C(itemSortList, *(_QWORD *)&index);
  v23 = LOBYTE(WarehouseListViewObject_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(itemSortList->klass->vtable._0_Equals.methodPtr) >= (unsigned int)v23
    && (WarehouseListViewObject_c *)itemSortList->klass->_2.typeHierarchy[v23 - 1] == WarehouseListViewObject_TypeInfo )
  {
    WarehouseListViewObject__SetupDisp((WarehouseListViewObject_o *)itemSortList, 0LL);
    return v17;
  }
LABEL_47:
  sub_1BCACFC(itemSortList);
  WarehouseListViewManager__SetDragStart(v25, v26, v27, v28);
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
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  int32_t dragStartIndex; // w8
  int32_t dragEndIndex; // w9
  int v15; // w25
  int v16; // w26
  int32_t v17; // w8
  int32_t v18; // w9
  int v19; // w24
  int32_t v20; // w20
  int32_t v21; // w23
  struct WarehouseListManager_o *parentManager; // x8
  int v23; // w27
  WarehouseListViewManager_o *v24; // x21
  __int64 methodPtr_low; // x9
  UnityEngine_Object_o *dropDragPrefab; // x22
  __int64 v27; // x9
  WarehouseListViewManager_o *v28; // x0
  int32_t v29; // w1
  bool v30; // w2
  const MethodInfo *v31; // x3

  v5 = startIndex;
  v6 = this;
  if ( (byte_4B141D7 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_ListViewItem__get_Item__,
      *(_QWORD *)&startIndex,
      *(_QWORD *)&endIndex);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v7, v8);
    sub_1BCA7E0(&WarehouseListViewItem_TypeInfo, v9, v10);
    this = (WarehouseListViewManager_o *)sub_1BCA7E0(&WarehouseListViewObject_TypeInfo, v11, v12);
    byte_4B141D7 = 1;
  }
  dragStartIndex = v6->fields.dragStartIndex;
  if ( (dragStartIndex & 0x80000000) != 0 )
  {
    v15 = -1;
    v16 = -1;
  }
  else
  {
    dragEndIndex = v6->fields.dragEndIndex;
    if ( dragStartIndex <= dragEndIndex )
      v15 = v6->fields.dragEndIndex;
    else
      v15 = v6->fields.dragStartIndex;
    if ( dragStartIndex <= dragEndIndex )
      v16 = v6->fields.dragStartIndex;
    else
      v16 = v6->fields.dragEndIndex;
  }
  if ( v5 <= endIndex )
    v17 = endIndex;
  else
    v17 = v5;
  if ( v5 <= endIndex )
    v18 = v5;
  else
    v18 = endIndex;
  if ( v5 < 0 )
    v19 = -1;
  else
    v19 = v17;
  if ( v5 < 0 )
    v20 = -1;
  else
    v20 = v18;
  v6->fields.dragStartIndex = v5;
  v6->fields.dragEndIndex = endIndex;
  if ( (v16 & 0x80000000) == 0 && v16 <= v15 )
  {
    v21 = v16;
    do
    {
      if ( v21 > v19 || (v20 & 0x80000000) != 0 || v21 < v20 )
        this = (WarehouseListViewManager_o *)WarehouseListViewManager__SetDragSelect(v6, v21, 0, method);
      ++v21;
    }
    while ( v21 <= v15 );
  }
  if ( (v5 & 0x80000000) == 0 )
  {
    if ( v5 <= endIndex )
    {
      do
      {
        if ( v5 > v15 || (v16 & 0x80000000) != 0 || v5 < v16 )
          this = (WarehouseListViewManager_o *)WarehouseListViewManager__SetDragSelect(v6, v5, 1, method);
        ++v5;
      }
      while ( v5 <= endIndex );
    }
    else
    {
      do
      {
        if ( v5 > v15 || (v16 & 0x80000000) != 0 || v5 < v16 )
          this = (WarehouseListViewManager_o *)WarehouseListViewManager__SetDragSelect(v6, v5, 1, method);
        --v5;
      }
      while ( v5 >= endIndex );
    }
    if ( (v20 & 0x80000000) == 0 && v6->fields.isDragSelect )
    {
      parentManager = v6->fields.parentManager;
      if ( !parentManager )
LABEL_63:
        sub_1BCAA3C(this, *(_QWORD *)&startIndex);
      if ( v20 <= v19 )
      {
        v23 = parentManager->fields.totalSum + 1;
        do
        {
          this = (WarehouseListViewManager_o *)v6->fields.itemSortList;
          if ( !this )
            goto LABEL_63;
          this = (WarehouseListViewManager_o *)System_Collections_Generic_List_object___get_Item(
                                                 (System_Collections_Generic_List_object__o *)this,
                                                 v20,
                                                 (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
          if ( !this )
            goto LABEL_63;
          *(_QWORD *)&startIndex = WarehouseListViewItem_TypeInfo;
          v24 = this;
          methodPtr_low = LOBYTE(WarehouseListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
          if ( LOBYTE(this->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
            || (WarehouseListViewItem_c *)this->klass->_2.typeHierarchy[methodPtr_low - 1] != WarehouseListViewItem_TypeInfo )
          {
            goto LABEL_64;
          }
          if ( SHIDWORD(this->fields.topItem) >= 1 )
          {
            HIDWORD(this->fields.topItem) = v23;
            dropDragPrefab = (UnityEngine_Object_o *)this->fields.dropDragPrefab;
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, *(_QWORD *)&startIndex);
            ++v23;
            if ( UnityEngine_Object__op_Inequality(dropDragPrefab, 0LL, 0LL) )
            {
              this = (WarehouseListViewManager_o *)v24->fields.dropDragPrefab;
              if ( !this )
                goto LABEL_63;
              v27 = LOBYTE(WarehouseListViewObject_TypeInfo->vtable._0_Equals.methodPtr);
              if ( LOBYTE(this->klass->vtable._0_Equals.methodPtr) < (unsigned int)v27
                || (WarehouseListViewObject_c *)this->klass->_2.typeHierarchy[v27 - 1] != WarehouseListViewObject_TypeInfo )
              {
LABEL_64:
                sub_1BCACFC(this);
                WarehouseListViewManager__SetDragSelect(v28, v29, v30, v31);
                return;
              }
              WarehouseListViewObject__SetupDisp((WarehouseListViewObject_o *)this, 0LL);
            }
          }
          ++v20;
        }
        while ( v20 <= v19 );
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
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  System_Collections_Generic_List_object__o *itemSortList; // x0
  int size; // w22
  int32_t v15; // w21
  __int64 methodPtr_low; // x9
  __int64 v17; // x1
  UnityEngine_Object_o *scrollView; // x20

  v4 = startIndex;
  v6 = isDragSelect;
  if ( (byte_4B141D9 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, *(_QWORD *)&startIndex, isDragSelect);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v7, v8);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v9, v10);
    sub_1BCA7E0(&WarehouseListViewItem_TypeInfo, v11, v12);
    byte_4B141D9 = 1;
  }
  *(_OWORD *)&this->fields.dragSelectSum = xmmword_BD2BC0;
  itemSortList = (System_Collections_Generic_List_object__o *)this->fields.itemSortList;
  this->fields.isDragSelect = v6;
  this->fields.dragSelectFriendShipSum = 0;
  if ( !itemSortList )
    goto LABEL_19;
  size = itemSortList->fields._size;
  if ( size >= 1 )
  {
    v15 = 0;
    while ( 1 )
    {
      itemSortList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                    itemSortList,
                                                                    v15,
                                                                    (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
      if ( !itemSortList )
        goto LABEL_19;
      *(_QWORD *)&startIndex = WarehouseListViewItem_TypeInfo;
      methodPtr_low = LOBYTE(WarehouseListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(itemSortList->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
        || (WarehouseListViewItem_c *)itemSortList->klass->_2.typeHierarchy[methodPtr_low - 1] != WarehouseListViewItem_TypeInfo )
      {
        break;
      }
      ++v15;
      HIDWORD(itemSortList[5].fields._syncRoot) = -1;
      if ( size == v15 )
        goto LABEL_12;
      itemSortList = (System_Collections_Generic_List_object__o *)this->fields.itemSortList;
      if ( !itemSortList )
        goto LABEL_19;
    }
    sub_1BCACFC(itemSortList);
LABEL_19:
    sub_1BCAA3C(itemSortList, *(_QWORD *)&startIndex);
  }
LABEL_12:
  WarehouseListViewManager__SetDragSelectItem(this, v4, v4, method);
  scrollView = (UnityEngine_Object_o *)this->fields.scrollView;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v17);
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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  ListViewSort_o *sort; // x0
  UISprite_o *filterSprite; // x19
  System_String_o **v8; // x8

  if ( (byte_4B141D0 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_17688/*"btn_filter_on"*/, method, v2);
    sub_1BCA7E0(&StringLiteral_17687/*"btn_filter"*/, v4, v5);
    byte_4B141D0 = 1;
  }
  sort = this->fields.sort;
  if ( !sort
    || (filterSprite = this->fields.filterSprite,
        sort = (ListViewSort_o *)ListViewSort__CheckFilterDefaultAll(sort, -1, 0LL),
        !filterSprite) )
  {
    sub_1BCAA3C(sort, method);
  }
  v8 = (System_String_o **)&StringLiteral_17687/*"btn_filter"*/;
  if ( ((unsigned __int8)sort & 1) == 0 )
    v8 = (System_String_o **)&StringLiteral_17688/*"btn_filter_on"*/;
  UISprite__set_spriteName(filterSprite, *v8, 0LL);
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
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.callbackFunc,
    (int64_t)callback,
    (int64_t)callback,
    (int32_t)method,
    v4,
    v5,
    v6,
    v7);
  WarehouseListViewManager__SetMode_36523224(this, mode, v10);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarehouseListViewManager__SetMode_36523224(
        WarehouseListViewManager_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x0
  _BOOL8 v21; // x0
  __int64 v22; // x1
  WarehouseListViewItem_o *v23; // x20
  __int64 v24; // x9
  const MethodInfo *v25; // x1
  _BOOL8 v26; // x0
  __int64 v27; // x1
  struct WarehouseListManager_o *v28; // x8
  struct WarehouseListViewManager_o *v29; // x9
  UILabel_o *v30; // x21
  System_String_o *v31; // x0
  __int64 v32; // x1
  struct WarehouseListManager_o *v33; // x8
  System_String_o *v34; // x22
  __int64 v35; // x0
  __int64 v36; // x1
  struct WarehouseListManager_o *v37; // x8
  Il2CppObject *v38; // x23
  Il2CppObject *v39; // x2
  System_String_o *v40; // x0
  __int64 v41; // x0
  __int64 v42; // x1
  const MethodInfo *v43; // x2
  struct WarehouseListManager_o *v44; // x8
  WarehouseListViewManager_o *v45; // x0
  char v46; // w24
  _BOOL8 v47; // x0
  __int64 v48; // x1
  WarehouseListViewItem_o *current; // x20
  __int64 methodPtr_low; // x9
  const MethodInfo *v51; // x1
  _BOOL8 CanNotSelect; // x0
  __int64 v53; // x1
  struct WarehouseListManager_o *parentManager; // x8
  struct WarehouseListViewManager_o *baseListViewManager; // x9
  UILabel_o *selectDoneLabel; // x21
  System_String_o *v57; // x0
  __int64 v58; // x1
  struct WarehouseListManager_o *v59; // x8
  System_String_o *v60; // x22
  __int64 v61; // x0
  __int64 v62; // x1
  struct WarehouseListManager_o *v63; // x8
  Il2CppObject *v64; // x23
  Il2CppObject *v65; // x2
  System_String_o *v66; // x0
  __int64 v67; // x0
  __int64 v68; // x1
  const MethodInfo *v69; // x2
  struct WarehouseListManager_o *v70; // x8
  WarehouseListViewManager_o *v71; // x0
  const MethodInfo *v72; // x1
  const MethodInfo *v73; // x2
  int32_t v74; // w1
  const MethodInfo *v75; // x1
  int32_t sendMax; // [xsp+4h] [xbp-9Ch] BYREF
  System_Collections_Generic_List_Enumerator_object__o v77; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v78; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_4B141BF & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__, *(_QWORD *)&mode, method);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v7, v8);
    sub_1BCA7E0(&int_TypeInfo, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v11, v12);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v13, v14);
    sub_1BCA7E0(&WarehouseListViewItem_TypeInfo, v15, v16);
    sub_1BCA7E0(&StringLiteral_12532/*"SUM_INFO"*/, v17, v18);
    byte_4B141BF = 1;
  }
  memset(&v78, 0, sizeof(v78));
  this->fields.initMode = mode;
  this->fields.callbackCount = ListViewManager__get_ObjectSum((ListViewManager_o *)this, 0LL);
  ListViewManager__set_IsInput((ListViewManager_o *)this, mode == 2, 0LL);
  if ( (unsigned int)(mode - 1) < 2 )
  {
    itemList = this->fields.itemList;
    if ( itemList )
    {
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v77,
        (System_Collections_Generic_List_object__o *)itemList,
        (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
      v78 = v77;
      v46 = 0;
      while ( 1 )
      {
        v47 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v78,
                (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
        if ( !v47 )
          break;
        current = (WarehouseListViewItem_o *)v78.fields._current;
        if ( !v78.fields._current )
          goto LABEL_50;
        methodPtr_low = LOBYTE(WarehouseListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(v78.fields._current->klass->vtable[0].methodPtr) < (unsigned int)methodPtr_low
          || (WarehouseListViewItem_c *)v78.fields._current->klass->_2.typeHierarchy[methodPtr_low - 1] != WarehouseListViewItem_TypeInfo )
        {
          sub_1BCACFC(v78.fields._current);
LABEL_50:
          sub_1BCAA3C(v47, v48);
        }
        if ( ListViewItem__get_IsSelect((ListViewItem_o *)v78.fields._current, 0LL) )
        {
          CanNotSelect = WarehouseListViewItem__get_IsCanNotSelect(current, v51);
          if ( CanNotSelect )
          {
            parentManager = this->fields.parentManager;
            --this->fields.selectSum;
            if ( !parentManager )
              sub_1BCAA3C(CanNotSelect, v53);
            baseListViewManager = parentManager->fields.baseListViewManager;
            if ( !baseListViewManager )
              sub_1BCAA3C(CanNotSelect, v53);
            parentManager->fields.totalSum = baseListViewManager->fields.selectSum;
            selectDoneLabel = this->fields.selectDoneLabel;
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v53);
            v57 = LocalizationManager__Get((System_String_o *)StringLiteral_12532/*"SUM_INFO"*/, 0LL);
            v59 = this->fields.parentManager;
            if ( !v59 )
              sub_1BCAA3C(v57, v58);
            v60 = v57;
            LODWORD(v77.fields._list) = v59->fields.totalSum;
            v61 = j_il2cpp_value_box_0(int_TypeInfo, &v77);
            v63 = this->fields.parentManager;
            if ( !v63 )
              sub_1BCAA3C(v61, v62);
            v64 = (Il2CppObject *)v61;
            sendMax = v63->fields.sendMax;
            v65 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &sendMax);
            v66 = System_String__Format_62415592(v60, v64, v65, 0LL);
            if ( !selectDoneLabel )
              sub_1BCAA3C(v66, v66);
            UILabel__set_text(selectDoneLabel, v66, 0LL);
            v70 = this->fields.parentManager;
            if ( !v70 )
              sub_1BCAA3C(v67, v68);
            v71 = v70->fields.baseListViewManager;
            if ( !v71 )
              sub_1BCAA3C(0LL, v68);
            WarehouseListViewManager__DecrementNumber(v71, current->fields.selectNum, v69);
            ListViewItem__set_IsSelect((ListViewItem_o *)current, 0, 0LL);
            v46 = 1;
          }
        }
      }
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v78,
        (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
      if ( (v46 & 1) != 0 )
        WarehouseListViewManager__RefrashListDisp(this, v72);
      if ( this->fields.isInput )
        v74 = 3;
      else
        v74 = 2;
      goto LABEL_47;
    }
LABEL_60:
    sub_1BCAA3C(itemList, v19);
  }
  if ( mode != 3 )
    return;
  itemList = this->fields.itemList;
  if ( !itemList )
    goto LABEL_60;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v77,
    (System_Collections_Generic_List_object__o *)itemList,
    (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  v78 = v77;
  while ( 1 )
  {
    v21 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v78,
            (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    if ( !v21 )
      break;
    v23 = (WarehouseListViewItem_o *)v78.fields._current;
    if ( !v78.fields._current )
      goto LABEL_52;
    v24 = LOBYTE(WarehouseListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(v78.fields._current->klass->vtable[0].methodPtr) < (unsigned int)v24
      || (WarehouseListViewItem_c *)v78.fields._current->klass->_2.typeHierarchy[v24 - 1] != WarehouseListViewItem_TypeInfo )
    {
      sub_1BCACFC(v78.fields._current);
LABEL_52:
      sub_1BCAA3C(v21, v22);
    }
    if ( ListViewItem__get_IsSelect((ListViewItem_o *)v78.fields._current, 0LL) )
    {
      v26 = WarehouseListViewItem__get_IsCanNotSelect(v23, v25);
      if ( v26 )
      {
        v28 = this->fields.parentManager;
        --this->fields.selectSum;
        if ( !v28 )
          sub_1BCAA3C(v26, v27);
        v29 = v28->fields.baseListViewManager;
        if ( !v29 )
          sub_1BCAA3C(v26, v27);
        v28->fields.totalSum = v29->fields.selectSum;
        v30 = this->fields.selectDoneLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v27);
        v31 = LocalizationManager__Get((System_String_o *)StringLiteral_12532/*"SUM_INFO"*/, 0LL);
        v33 = this->fields.parentManager;
        if ( !v33 )
          sub_1BCAA3C(v31, v32);
        v34 = v31;
        LODWORD(v77.fields._list) = v33->fields.totalSum;
        v35 = j_il2cpp_value_box_0(int_TypeInfo, &v77);
        v37 = this->fields.parentManager;
        if ( !v37 )
          sub_1BCAA3C(v35, v36);
        v38 = (Il2CppObject *)v35;
        sendMax = v37->fields.sendMax;
        v39 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &sendMax);
        v40 = System_String__Format_62415592(v34, v38, v39, 0LL);
        if ( !v30 )
          sub_1BCAA3C(v40, v40);
        UILabel__set_text(v30, v40, 0LL);
        v44 = this->fields.parentManager;
        if ( !v44 )
          sub_1BCAA3C(v41, v42);
        v45 = v44->fields.baseListViewManager;
        if ( !v45 )
          sub_1BCAA3C(0LL, v42);
        WarehouseListViewManager__DecrementNumber(v45, v23->fields.selectNum, v43);
        ListViewItem__set_IsSelect((ListViewItem_o *)v23, 0, 0LL);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v78,
    (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
  WarehouseListViewManager__RefrashListDisp(this, v75);
  v74 = 4;
LABEL_47:
  WarehouseListViewManager__RequestListObject_36524800(this, v74, v73);
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
  if ( (byte_4B141BE & 1) == 0 )
  {
    this = (WarehouseListViewManager_o *)sub_1BCA7E0(&WarehouseListViewObject_TypeInfo, obj, item);
    byte_4B141BE = 1;
  }
  if ( !obj
    || (methodPtr_low = LOBYTE(WarehouseListViewObject_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(obj->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low)
    || (WarehouseListViewObject_c *)obj->klass->_2.typeHierarchy[methodPtr_low - 1] != WarehouseListViewObject_TypeInfo )
  {
    sub_1BCAA3C(this, obj);
  }
  if ( v5->fields.initMode == 2 )
    v7 = 3;
  else
    v7 = 2;
  WarehouseListViewObject__Init_36533776((WarehouseListViewObject_o *)obj, v7, 0LL);
}


void __fastcall WarehouseListViewManager__SetSortButtonImage(
        WarehouseListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  UnityEngine_Object_o *sortKindLabel; // x20
  __int64 v17; // x1
  ListViewSort_o *sort; // x0
  UILabel_o *v19; // x20
  UnityEngine_Object_o *sortOrderSprite; // x20
  struct ListViewSort_o *v21; // x8
  int32_t sortKind; // w9
  System_String_o **v23; // x8
  struct ListViewSort_o *v24; // x8
  System_String_o **v25; // x9
  System_String_o **v26; // x10
  System_String_o **v27; // x8
  System_String_o **v28; // x8
  UnityEngine_Object_o *bonusFilterKindLabel; // x20
  UILabel_o *v30; // x20

  if ( (byte_4B141D3 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    sub_1BCA7E0(&StringLiteral_17718/*"btn_sort_up"*/, v4, v5);
    sub_1BCA7E0(&StringLiteral_17806/*"btn_txt_up"*/, v6, v7);
    sub_1BCA7E0(&StringLiteral_17761/*"btn_txt_new"*/, v8, v9);
    sub_1BCA7E0(&StringLiteral_17751/*"btn_txt_down"*/, v10, v11);
    sub_1BCA7E0(&StringLiteral_17768/*"btn_txt_old"*/, v12, v13);
    sub_1BCA7E0(&StringLiteral_17715/*"btn_sort_down"*/, v14, v15);
    byte_4B141D3 = 1;
  }
  sortKindLabel = (UnityEngine_Object_o *)this->fields.sortKindLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Inequality(sortKindLabel, 0LL, 0LL) )
  {
    sort = this->fields.sort;
    if ( !sort )
      goto LABEL_41;
    v19 = this->fields.sortKindLabel;
    sort = (ListViewSort_o *)ListViewSort__GetSortKindButtonText(sort, 0, 0LL);
    if ( !v19 )
      goto LABEL_41;
    UILabel__set_text(v19, (System_String_o *)sort, 0LL);
  }
  sortOrderSprite = (UnityEngine_Object_o *)this->fields.sortOrderSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v17);
  sort = (ListViewSort_o *)UnityEngine_Object__op_Inequality(sortOrderSprite, 0LL, 0LL);
  if ( ((unsigned __int8)sort & 1) != 0 )
  {
    v21 = this->fields.sort;
    if ( !v21 )
      goto LABEL_41;
    sortKind = v21->fields.sortKind;
    if ( sortKind == 11 || sortKind == 1 )
    {
      sort = (ListViewSort_o *)this->fields.sortExplanationSprite;
      if ( !sort )
        goto LABEL_41;
      v23 = (System_String_o **)(v21->fields.isAscendingOrder ? &StringLiteral_17768/*"btn_txt_old"*/ : &StringLiteral_17761/*"btn_txt_new"*/);
      UISprite__set_spriteName((UISprite_o *)sort, *v23, 0LL);
      v24 = this->fields.sort;
      if ( !v24 )
        goto LABEL_41;
      sort = (ListViewSort_o *)this->fields.sortOrderSprite;
      if ( !sort )
        goto LABEL_41;
      v25 = (System_String_o **)&StringLiteral_17715/*"btn_sort_down"*/;
      v26 = (System_String_o **)&StringLiteral_17718/*"btn_sort_up"*/;
    }
    else
    {
      sort = (ListViewSort_o *)this->fields.sortExplanationSprite;
      if ( !sort )
        goto LABEL_41;
      v27 = (System_String_o **)(v21->fields.isAscendingOrder ? &StringLiteral_17806/*"btn_txt_up"*/ : &StringLiteral_17751/*"btn_txt_down"*/);
      UISprite__set_spriteName((UISprite_o *)sort, *v27, 0LL);
      v24 = this->fields.sort;
      if ( !v24 )
        goto LABEL_41;
      sort = (ListViewSort_o *)this->fields.sortOrderSprite;
      if ( !sort )
        goto LABEL_41;
      v25 = (System_String_o **)&StringLiteral_17718/*"btn_sort_up"*/;
      v26 = (System_String_o **)&StringLiteral_17715/*"btn_sort_down"*/;
    }
    if ( v24->fields.isAscendingOrder )
      v28 = v25;
    else
      v28 = v26;
    UISprite__set_spriteName((UISprite_o *)sort, *v28, 0LL);
  }
  bonusFilterKindLabel = (UnityEngine_Object_o *)this->fields.bonusFilterKindLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v17);
  if ( UnityEngine_Object__op_Inequality(bonusFilterKindLabel, 0LL, 0LL) )
  {
    sort = this->fields.sort;
    if ( !sort )
      goto LABEL_41;
    if ( sort->fields.isBonusKind )
    {
      v30 = this->fields.bonusFilterKindLabel;
      sort = (ListViewSort_o *)ListViewSort__GetBonusFilterButtonText(
                                 sort,
                                 this->fields.alignedBonusFilterInfos,
                                 this->fields.isQuestStart,
                                 0LL);
      if ( v30 )
      {
        UILabel__set_text(v30, (System_String_o *)sort, 0LL);
        return;
      }
LABEL_41:
      sub_1BCAA3C(sort, v17);
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
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  System_Collections_Generic_List_object__o *SelfUserGame; // x0
  __int64 v16; // x1
  System_Collections_Generic_List_object__o *v17; // x8
  System_Collections_Generic_List_object__c *klass; // x23
  Il2CppObject *v19; // x21
  _BOOL8 v20; // x0
  __int64 v21; // x1
  Il2CppObject *current; // x20
  WarehouseListViewItem_c *v23; // x1
  __int64 methodPtr_low; // x9
  Il2CppClass *v25; // x8
  Il2CppType byval_arg; // q0
  __int64 v27; // x1
  UserServantEntity_o *v28; // x0
  __int64 v29; // x1
  _BOOL4 IsLeave; // w8
  bool v31; // w8
  Il2CppObject *v32; // x26
  UserServantEntity_o *v33; // x0
  _BOOL8 IsEventJoin; // x0
  __int64 v35; // x1
  UserServantEntity_o *v36; // x0
  UserServantEntity_o *v37; // x0
  UserServantEntity_o *v38; // x0
  Il2CppObject *v39; // [xsp+8h] [xbp-C8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v40; // [xsp+10h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v41; // [xsp+30h] [xbp-A0h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v42; // [xsp+50h] [xbp-80h] BYREF

  if ( (byte_4B141DF & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__, isPushMode, method);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v9, v10);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v11, v12);
    sub_1BCA7E0(&WarehouseListViewItem_TypeInfo, v13, v14);
    byte_4B141DF = 1;
  }
  memset(&v42, 0, sizeof(v42));
  SelfUserGame = (System_Collections_Generic_List_object__o *)UserGameMaster__getSelfUserGame(0LL);
  if ( !SelfUserGame
    || (v17 = SelfUserGame, (SelfUserGame = (System_Collections_Generic_List_object__o *)this->fields.itemList) == 0LL) )
  {
    sub_1BCAA3C(SelfUserGame, v16);
  }
  klass = v17[3].klass;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v41,
    SelfUserGame,
    (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  v19 = 0LL;
  v39 = 0LL;
  *(_OWORD *)&v42.fields._list = *(_OWORD *)&v41.fields.currentCryptoKey;
  v42.fields._current = (Il2CppObject *)v41.fields.fakeValue;
  while ( 1 )
  {
    v20 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v42,
            (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    if ( !v20 )
      break;
    current = v42.fields._current;
    if ( !v42.fields._current )
      goto LABEL_39;
    v23 = WarehouseListViewItem_TypeInfo;
    methodPtr_low = LOBYTE(WarehouseListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(v42.fields._current->klass->vtable[0].methodPtr) < (unsigned int)methodPtr_low
      || (WarehouseListViewItem_c *)v42.fields._current->klass->_2.typeHierarchy[methodPtr_low - 1] != WarehouseListViewItem_TypeInfo )
    {
      sub_1BCACFC(v42.fields._current);
LABEL_39:
      sub_1BCAA3C(v20, v21);
    }
    v25 = v42.fields._current[7].klass;
    BYTE3(v42.fields._current[10].klass) = isPushMode;
    if ( !v25 )
      sub_1BCAA3C(v20, v23);
    byval_arg = v25->_1.byval_arg;
    *(_OWORD *)&v41.fields.currentCryptoKey = *(_OWORD *)&v25->_1.name;
    *(Il2CppType *)&v41.fields.fakeValue = byval_arg;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v23);
    v40 = v41;
    BYTE4(current[10].klass) = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v40, 0LL) == (_QWORD)klass;
    if ( isPushMode )
    {
      v28 = (UserServantEntity_o *)current[7].klass;
      if ( !v28 )
        sub_1BCAA3C(0LL, v27);
      IsLeave = UserServantEntity__IsLeave(v28, 0LL);
      if ( !IsLeave )
        v19 = current;
      if ( IsLeave )
      {
        v31 = 0;
        v32 = current;
      }
      else
      {
        v33 = (UserServantEntity_o *)current[7].klass;
        if ( !v33 )
          sub_1BCAA3C(0LL, v29);
        IsEventJoin = UserServantEntity__IsEventJoin(v33, 0LL);
        if ( IsEventJoin )
          v32 = v39;
        else
          v32 = v19;
        if ( IsEventJoin )
        {
          v31 = 0;
          v32 = current;
        }
        else
        {
          v36 = (UserServantEntity_o *)current[7].klass;
          if ( !v36 )
            sub_1BCAA3C(0LL, v35);
          IsEventJoin = UserServantEntity__IsCombineMaterial(v36, 0LL);
          if ( IsEventJoin )
          {
            v31 = 0;
            v32 = v19;
          }
          else
          {
            v37 = (UserServantEntity_o *)current[7].klass;
            if ( !v37 )
              sub_1BCAA3C(0LL, v35);
            IsEventJoin = UserServantEntity__IsStatusUp(v37, 0LL);
            if ( IsEventJoin )
            {
              v31 = 0;
            }
            else
            {
              v38 = (UserServantEntity_o *)current[7].klass;
              if ( !v38 )
                sub_1BCAA3C(0LL, v35);
              IsEventJoin = UserServantEntity__IsMaterialTd(v38, 0LL);
              v31 = !IsEventJoin;
            }
          }
          v39 = current;
        }
        if ( !v32 )
          sub_1BCAA3C(IsEventJoin, v35);
      }
      BYTE5(v32[10].klass) = v31;
    }
    else
    {
      BYTE5(current[10].klass) = 1;
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v42,
    (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
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

  if ( (byte_4B141B1 & 1) == 0 )
  {
    sub_1BCA7E0(&WarehouseListViewManager_CallbackFunc_TypeInfo, value, method);
    byte_4B141B1 = 1;
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
    v8 = sub_1C05CD0(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1BCACFC(v7);
  WarehouseListViewManager__remove_callbackFunc(v10, v11, v12);
}


System_Collections_Generic_List_WarehouseListViewObject__o *__fastcall WarehouseListViewManager__get_ClippingObjectList(
        WarehouseListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  System_Collections_Generic_List_object__o *v21; // x19
  __int64 v22; // x1
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  __int64 v24; // x1
  Il2CppObject *current; // x21
  _BOOL8 v26; // x0
  __int64 v27; // x1
  Il2CppObject *Component_object; // x0
  __int64 v29; // x1
  Il2CppObject *v30; // x21
  ListViewItem_o *Item; // x0
  __int64 v32; // x1
  int64_t v33; // x2
  int32_t v34; // w3
  System_String_o *v35; // x4
  BattleSetupInfo_o *v36; // x5
  FollowerInfo_o *v37; // x6
  PartyListViewItem_o *v38; // x7
  _BOOL8 v39; // x0
  __int64 v40; // x1
  struct System_Object_array *items; // x8
  _QWORD *v42; // x9
  __int64 size; // x10
  Il2CppClass **v44; // x0
  System_Collections_Generic_List_Enumerator_object__o v46; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v47; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_4B141B6 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v7, v8);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_WarehouseListViewObject___, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_WarehouseListViewObject__Add__, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_WarehouseListViewObject___ctor__, v15, v16);
    sub_1BCA7E0(&System_Collections_Generic_List_WarehouseListViewObject__TypeInfo, v17, v18);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v19, v20);
    byte_4B141B6 = 1;
  }
  memset(&v47, 0, sizeof(v47));
  v21 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_WarehouseListViewObject__TypeInfo,
                                                       method,
                                                       v2,
                                                       v3);
  System_Collections_Generic_List_object____ctor(
    v21,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_WarehouseListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_1BCAA3C(0LL, v22);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v46,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v47 = v46;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v47,
            (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v47.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v24);
    v26 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v26 )
    {
      if ( !current )
        sub_1BCAA3C(v26, v27);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_WarehouseListViewObject___);
      v30 = Component_object;
      if ( !Component_object )
        sub_1BCAA3C(0LL, v29);
      Item = (ListViewItem_o *)WarehouseListViewObject__GetItem((WarehouseListViewObject_o *)Component_object, 0LL);
      if ( !Item )
        sub_1BCAA3C(0LL, v32);
      if ( Item->fields.isTermination )
      {
        v39 = ListViewManager__ClippingItem_41463120((ListViewManager_o *)this, Item, 0LL);
        if ( v39 )
        {
          if ( !v21 )
            sub_1BCAA3C(v39, v40);
          items = v21->fields._items;
          v42 = Method_System_Collections_Generic_List_WarehouseListViewObject__Add__;
          ++v21->fields._version;
          if ( !items )
            sub_1BCAA3C(v39, v40);
          size = v21->fields._size;
          if ( (unsigned int)size < items->max_length )
            goto LABEL_17;
LABEL_21:
          System_Collections_Generic_List_object___AddWithResize(
            v21,
            v30,
            *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v42[4] + 192LL) + 112LL));
        }
      }
      else
      {
        if ( !v21 )
          sub_1BCAA3C(Item, v32);
        items = v21->fields._items;
        v42 = Method_System_Collections_Generic_List_WarehouseListViewObject__Add__;
        ++v21->fields._version;
        if ( !items )
          sub_1BCAA3C(Item, v32);
        size = v21->fields._size;
        if ( (unsigned int)size >= items->max_length )
          goto LABEL_21;
LABEL_17:
        v44 = &items->obj.klass + size;
        v21->fields._size = size + 1;
        v44[4] = (Il2CppClass *)v30;
        sub_1BCA784((PartyOrganizationUtility_o *)(v44 + 4), (int64_t)v30, v33, v34, v35, v36, v37, v38);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v47,
    (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_WarehouseListViewObject__o *)v21;
}


System_Collections_Generic_List_WarehouseListViewObject__o *__fastcall WarehouseListViewManager__get_ObjectList(
        WarehouseListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  System_Collections_Generic_List_object__o *v21; // x19
  __int64 v22; // x1
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  __int64 v24; // x1
  Il2CppObject *current; // x20
  _BOOL8 v26; // x0
  __int64 v27; // x1
  Il2CppObject *Component_object; // x0
  int64_t v29; // x2
  int32_t v30; // w3
  System_String_o *v31; // x4
  BattleSetupInfo_o *v32; // x5
  FollowerInfo_o *v33; // x6
  PartyListViewItem_o *v34; // x7
  int64_t v35; // x1
  struct System_Object_array *items; // x8
  _QWORD *v37; // x9
  __int64 size; // x10
  Il2CppClass **v39; // x0
  System_Collections_Generic_List_Enumerator_object__o v41; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v42; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4B141B5 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v7, v8);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_WarehouseListViewObject___, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_WarehouseListViewObject__Add__, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_WarehouseListViewObject___ctor__, v15, v16);
    sub_1BCA7E0(&System_Collections_Generic_List_WarehouseListViewObject__TypeInfo, v17, v18);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v19, v20);
    byte_4B141B5 = 1;
  }
  memset(&v42, 0, sizeof(v42));
  v21 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_WarehouseListViewObject__TypeInfo,
                                                       method,
                                                       v2,
                                                       v3);
  System_Collections_Generic_List_object____ctor(
    v21,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_WarehouseListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_1BCAA3C(0LL, v22);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v41,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v42 = v41;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v42,
            (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v42.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v24);
    v26 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v26 )
    {
      if ( !current )
        sub_1BCAA3C(v26, v27);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_WarehouseListViewObject___);
      v35 = (int64_t)Component_object;
      if ( !v21 )
        sub_1BCAA3C(Component_object, Component_object);
      items = v21->fields._items;
      v37 = Method_System_Collections_Generic_List_WarehouseListViewObject__Add__;
      ++v21->fields._version;
      if ( !items )
        sub_1BCAA3C(Component_object, Component_object);
      size = v21->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v21,
          Component_object,
          *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v37[4] + 192LL) + 112LL));
      }
      else
      {
        v39 = &items->obj.klass + size;
        v21->fields._size = size + 1;
        v39[4] = (Il2CppClass *)v35;
        sub_1BCA784((PartyOrganizationUtility_o *)(v39 + 4), v35, v29, v30, v31, v32, v33, v34);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v42,
    (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_WarehouseListViewObject__o *)v21;
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

  if ( (byte_4B141B2 & 1) == 0 )
  {
    sub_1BCA7E0(&WarehouseListViewManager_CallbackFunc_TypeInfo, value, method);
    byte_4B141B2 = 1;
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
    v8 = sub_1C05CD0(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1BCACFC(v7);
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
  sub_1BCA784(
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
  if ( (sub_1BCA8A0(v10) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_1BCAA58(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1BCA908(v14, 0LL);
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
  this->fields.m_target = (Il2CppObject *)sub_1A0B550;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_1A0B4F8;
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
  if ( (byte_4B141E2 & 1) == 0 )
  {
    sub_1BCA7E0(&WarehouseListViewManager_ResultKind_TypeInfo, *(_QWORD *)&resultKind, item);
    byte_4B141E2 = 1;
  }
  v11[2] = 0LL;
  v11[0] = j_il2cpp_value_box_0(WarehouseListViewManager_ResultKind_TypeInfo, &v12);
  v11[1] = (__int64)item;
  return (System_IAsyncResult_o *)sub_1BCA794(this, v11, callback, object);
}


void __fastcall WarehouseListViewManager_CallbackFunc__EndInvoke(
        WarehouseListViewManager_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1BCA798(result, 0LL, method);
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