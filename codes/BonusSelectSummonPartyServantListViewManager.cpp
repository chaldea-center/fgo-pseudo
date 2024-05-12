void __fastcall BonusSelectSummonPartyServantListViewManager___cctor(const MethodInfo *method)
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
  ListViewSort_o *v10; // x20
  struct BonusSelectSummonPartyServantListViewManager_StaticFields *v11; // x0
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  System_String_o *v18; // x19
  ListViewSort_o *v19; // x20
  struct BonusSelectSummonPartyServantListViewManager_StaticFields *v20; // x0
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  System_String_o *v27; // x19
  ListViewSort_o *v28; // x20
  struct BonusSelectSummonPartyServantListViewManager_StaticFields *v29; // x0
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7

  if ( (byte_438AE52 & 1) == 0 )
  {
    sub_B775C4(&BonusSelectSummonPartyServantListViewManager_TypeInfo);
    sub_B775C4(&ListViewSort_TypeInfo);
    sub_B775C4(&StringLiteral_1131/*"2"*/);
    sub_B775C4(&StringLiteral_2958/*"BonusSelectSummonPartyServant"*/);
    sub_B775C4(&StringLiteral_1033/*"1"*/);
    byte_438AE52 = 1;
  }
  static_fields = (BattleServantConfConponent_o *)BonusSelectSummonPartyServantListViewManager_TypeInfo->static_fields;
  v8 = (System_Int32_array **)StringLiteral_2958/*"BonusSelectSummonPartyServant"*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_2958/*"BonusSelectSummonPartyServant"*/;
  sub_B77560(static_fields, v8, v1, v2, v3, v4, v5, v6);
  SORT_SAVE_KEY = BonusSelectSummonPartyServantListViewManager_TypeInfo->static_fields->SORT_SAVE_KEY;
  v10 = (ListViewSort_o *)sub_B77694(ListViewSort_TypeInfo);
  ListViewSort___ctor_34308400(v10, SORT_SAVE_KEY, 27, 0, 0LL);
  v11 = BonusSelectSummonPartyServantListViewManager_TypeInfo->static_fields;
  v11->servantSortInfo = v10;
  sub_B77560(
    (BattleServantConfConponent_o *)&v11->servantSortInfo,
    (System_Int32_array **)v10,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
  v18 = System_String__Concat_44901936(
          BonusSelectSummonPartyServantListViewManager_TypeInfo->static_fields->SORT_SAVE_KEY,
          (System_String_o *)StringLiteral_1033/*"1"*/,
          0LL);
  v19 = (ListViewSort_o *)sub_B77694(ListViewSort_TypeInfo);
  ListViewSort___ctor_34308400(v19, v18, 27, 0, 0LL);
  v20 = BonusSelectSummonPartyServantListViewManager_TypeInfo->static_fields;
  v20->servantSortInfoExtra1 = v19;
  sub_B77560(
    (BattleServantConfConponent_o *)&v20->servantSortInfoExtra1,
    (System_Int32_array **)v19,
    v21,
    v22,
    v23,
    v24,
    v25,
    v26);
  v27 = System_String__Concat_44901936(
          BonusSelectSummonPartyServantListViewManager_TypeInfo->static_fields->SORT_SAVE_KEY,
          (System_String_o *)StringLiteral_1131/*"2"*/,
          0LL);
  v28 = (ListViewSort_o *)sub_B77694(ListViewSort_TypeInfo);
  ListViewSort___ctor_34308400(v28, v27, 27, 0, 0LL);
  v29 = BonusSelectSummonPartyServantListViewManager_TypeInfo->static_fields;
  v29->servantSortInfoExtra2 = v28;
  sub_B77560(
    (BattleServantConfConponent_o *)&v29->servantSortInfoExtra2,
    (System_Int32_array **)v28,
    v30,
    v31,
    v32,
    v33,
    v34,
    v35);
}


void __fastcall BonusSelectSummonPartyServantListViewManager___ctor(
        BonusSelectSummonPartyServantListViewManager_o *this,
        const MethodInfo *method)
{
  this->fields.SCROLLBAR_UNEXPECTED_AUTOMOVE_DIFF_THRESHOLD = 0.001;
  ListViewManager___ctor((ListViewManager_o *)this, 0LL);
}


void __fastcall BonusSelectSummonPartyServantListViewManager__Awake(
        BonusSelectSummonPartyServantListViewManager_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall BonusSelectSummonPartyServantListViewManager__ChangeIconScale(
        BonusSelectSummonPartyServantListViewManager_o *this,
        const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  BonusSelectSummonPartyServantListViewManager_o *v8; // x19
  unsigned int scaleType; // w8
  System_Int32_array **smallSizeSeed; // x1
  int v11; // w8
  ListViewObject_o *v12; // x0
  __int64 v13; // x1
  const MethodInfo *v14; // x2
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x20
  unsigned __int64 v16; // x22
  ListViewItem_o *v17; // x20
  __int64 v18; // x10
  UnityEngine_Object_o *viewObject; // x21

  v8 = this;
  if ( (byte_438AE48 & 1) == 0 )
  {
    sub_B775C4(&BonusSelectSummonPartyServantListViewItem_TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_B775C4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    this = (BonusSelectSummonPartyServantListViewManager_o *)sub_B775C4(&UnityEngine_Object_TypeInfo);
    byte_438AE48 = 1;
  }
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
  sub_B77560((BattleServantConfConponent_o *)&v8->fields.seed, smallSizeSeed, v2, v3, v4, v5, v6, v7);
LABEL_10:
  BonusSelectSummonPartyServantListViewManager__SetAndSaveIconScaleType(
    this,
    v8->fields.scaleType,
    (const MethodInfo *)v2);
  itemList = v8->fields.itemList;
  if ( !itemList )
LABEL_25:
    sub_B7769C(v12, v13);
  v16 = 0LL;
  while ( (__int64)v16 < itemList->fields._size )
  {
    if ( v16 >= (unsigned int)itemList->fields._size )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_42293568(0LL);
    v17 = itemList->fields._items->m_Items[v16];
    if ( v17 )
    {
      v18 = *(&BonusSelectSummonPartyServantListViewItem_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v17->klass->_2.bitflags2 + 1) >= (unsigned int)v18
        && (BonusSelectSummonPartyServantListViewItem_c *)v17->klass->_2.typeHierarchy[v18 - 1] == BonusSelectSummonPartyServantListViewItem_TypeInfo )
      {
        viewObject = (UnityEngine_Object_o *)v17->fields.viewObject;
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        v12 = (ListViewObject_o *)UnityEngine_Object__op_Equality(viewObject, 0LL, 0LL);
        if ( ((unsigned __int8)v12 & 1) == 0 )
        {
          v12 = v17->fields.viewObject;
          if ( !v12 )
            goto LABEL_25;
          ListViewObject__SetItemSeed(v12, v17, v8->fields.seed, 0LL);
        }
      }
    }
    itemList = v8->fields.itemList;
    ++v16;
    if ( !itemList )
      goto LABEL_25;
  }
  BonusSelectSummonPartyServantListViewManager__SetMode(v8, 2, v14);
  ListViewManager__SortItem((ListViewManager_o *)v8, -1, 0, -1, 0LL);
}


void __fastcall BonusSelectSummonPartyServantListViewManager__CheckAssert(
        BonusSelectSummonPartyServantListViewManager_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall BonusSelectSummonPartyServantListViewManager__CreateList(
        BonusSelectSummonPartyServantListViewManager_o *this,
        GachaBonusSelectEntity_o *gachaBonusSelectEntity,
        System_Int32_array *notPossibleSvtIdList,
        const MethodInfo *method)
{
  GachaBonusSelectEntity_o *v4; // x21
  BonusSelectSummonPartyServantListViewManager_o *v5; // x19
  int32_t ClassId; // w0
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  BonusSelectSummonPartyServantListViewManager_c *v13; // x0
  System_Int32_array **servantSortInfoExtra2; // x1
  BonusSelectSummonPartyServantListViewManager_c *v15; // x0
  BonusSelectSummonPartyServantListViewManager_c *v16; // x0
  struct ListViewSort_o **p_sort; // x22
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  struct ListViewSort_o *v24; // x8
  int32_t sortKind; // w9
  unsigned int iconScaleKind; // w8
  System_Int32_array **normalSizeSeed; // x1
  GiftMaster_o *Master_WarQuestSelectionMaster; // x22
  DataMasterBase_WarMaster__WarEntity__int__o *v29; // x23
  GachaBonusSelectLineupEntity_array *v30; // x8
  __int64 v31; // x28
  unsigned int v32; // w21
  __int64 v33; // x24
  __int64 v34; // x8
  System_String_array **v35; // x2
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7
  System_Func_int__bool__o *v41; // x26
  struct BonusSelectSummonPartyServantSelectMenu_o *partyServantSelectMenu; // x9
  GachaBonusSelectLineupEntity_o *v43; // x26
  ServantEntity_o *v44; // x25
  BonusSelectSummonPartyOrganizationListViewItem_o *organizationItem; // x27
  char v46; // w20
  BonusSelectSummonPartyServantListViewItem_o *v47; // x24
  const MethodInfo *v48; // x6
  UILabel_o *emptyMessageLabel; // x20
  const MethodInfo *v50; // x1
  const MethodInfo *v51; // x1
  __int64 v52; // x0
  GachaBonusSelectLineupEntity_array *gachaBonusSelectLineupEntities; // [xsp+8h] [xbp-58h] BYREF

  v4 = gachaBonusSelectEntity;
  v5 = this;
  if ( (byte_438AE41 & 1) == 0 )
  {
    sub_B775C4(&Method_BasicHelper_Any_int____69468304);
    sub_B775C4(&BonusSelectSummonPartyServantListViewItem_TypeInfo);
    sub_B775C4(&BonusSelectSummonPartyServantListViewManager_TypeInfo);
    sub_B775C4(&Method_DataManager_GetMaster_GachaBonusSelectLineupMaster___);
    sub_B775C4(&Method_DataManager_GetMaster_GiftMaster___);
    sub_B775C4(&Method_DataManager_GetMaster_ServantMaster___);
    sub_B775C4(&DataManager_TypeInfo);
    sub_B775C4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_B775C4(&Method_System_Func_int__bool___ctor__);
    sub_B775C4(&System_Func_int__bool__TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    sub_B775C4(&LocalizationManager_TypeInfo);
    sub_B775C4(&Method_BonusSelectSummonPartyServantListViewManager___c__DisplayClass17_0__CreateList_b__0__);
    sub_B775C4(&BonusSelectSummonPartyServantListViewManager___c__DisplayClass17_0_TypeInfo);
    this = (BonusSelectSummonPartyServantListViewManager_o *)sub_B775C4(&StringLiteral_12110/*"SERVANT_SORT_FILTER_RESULT_EMPTY"*/);
    byte_438AE41 = 1;
  }
  gachaBonusSelectLineupEntities = 0LL;
  if ( !v4 )
    goto LABEL_59;
  ClassId = GachaBonusSelectEntity__GetClassId(v4, 1001, 0LL);
  if ( ClassId == 1005 )
  {
    v15 = BonusSelectSummonPartyServantListViewManager_TypeInfo;
    if ( (BYTE3(BonusSelectSummonPartyServantListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BonusSelectSummonPartyServantListViewManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BonusSelectSummonPartyServantListViewManager_TypeInfo);
      v15 = BonusSelectSummonPartyServantListViewManager_TypeInfo;
    }
    servantSortInfoExtra2 = (System_Int32_array **)v15->static_fields->servantSortInfoExtra2;
  }
  else if ( ClassId == 1004 )
  {
    v13 = BonusSelectSummonPartyServantListViewManager_TypeInfo;
    if ( (BYTE3(BonusSelectSummonPartyServantListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BonusSelectSummonPartyServantListViewManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BonusSelectSummonPartyServantListViewManager_TypeInfo);
      v13 = BonusSelectSummonPartyServantListViewManager_TypeInfo;
    }
    servantSortInfoExtra2 = (System_Int32_array **)v13->static_fields->servantSortInfoExtra1;
  }
  else
  {
    v16 = BonusSelectSummonPartyServantListViewManager_TypeInfo;
    if ( (BYTE3(BonusSelectSummonPartyServantListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BonusSelectSummonPartyServantListViewManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BonusSelectSummonPartyServantListViewManager_TypeInfo);
      v16 = BonusSelectSummonPartyServantListViewManager_TypeInfo;
    }
    servantSortInfoExtra2 = (System_Int32_array **)v16->static_fields->servantSortInfo;
  }
  v5->fields.sort = (struct ListViewSort_o *)servantSortInfoExtra2;
  p_sort = &v5->fields.sort;
  sub_B77560((BattleServantConfConponent_o *)&v5->fields.sort, servantSortInfoExtra2, v7, v8, v9, v10, v11, v12);
  this = (BonusSelectSummonPartyServantListViewManager_o *)v5->fields.sort;
  if ( !this )
    goto LABEL_59;
  ListViewSort__Load((ListViewSort_o *)this, 0LL);
  v24 = *p_sort;
  if ( !*p_sort )
    goto LABEL_59;
  sortKind = v24->fields.sortKind;
  if ( sortKind != 4 && sortKind != 27 )
  {
    v24->fields.sortKind = 27;
    v24 = *p_sort;
    if ( !*p_sort )
      goto LABEL_59;
  }
  v24->fields.isBonusKind = 0;
  if ( !*p_sort )
    goto LABEL_59;
  iconScaleKind = (*p_sort)->fields.iconScaleKind;
  v5->fields.scaleType = iconScaleKind;
  if ( iconScaleKind < 2 )
  {
    normalSizeSeed = (System_Int32_array **)v5->fields.normalSizeSeed;
  }
  else if ( iconScaleKind == 2 )
  {
    normalSizeSeed = (System_Int32_array **)v5->fields.smallSizeSeed;
  }
  else
  {
    if ( iconScaleKind != 3 )
      goto LABEL_31;
    normalSizeSeed = (System_Int32_array **)v5->fields.extremelySmallSizeSeed;
  }
  v5->fields.seed = (struct ListViewItemSeed_o *)normalSizeSeed;
  sub_B77560((BattleServantConfConponent_o *)&v5->fields.seed, normalSizeSeed, v18, v19, v20, v21, v22, v23);
LABEL_31:
  ListViewManager__CreateList((ListViewManager_o *)v5, 0, 0LL);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (GiftMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1D18390 *)Method_DataManager_GetMaster_GiftMaster___);
  v29 = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1D18390 *)Method_DataManager_GetMaster_ServantMaster___);
  this = (BonusSelectSummonPartyServantListViewManager_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1D18390 *)Method_DataManager_GetMaster_GachaBonusSelectLineupMaster___);
  if ( !this )
    goto LABEL_59;
  this = (BonusSelectSummonPartyServantListViewManager_o *)GachaBonusSelectLineupMaster__TryGetEntityList(
                                                             (GachaBonusSelectLineupMaster_o *)this,
                                                             &gachaBonusSelectLineupEntities,
                                                             v4->fields.gachaBonusSelectLineupId,
                                                             0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v30 = gachaBonusSelectLineupEntities;
    if ( !gachaBonusSelectLineupEntities )
      goto LABEL_59;
    v31 = 4LL;
    while ( 1 )
    {
      v32 = v31 - 4;
      if ( (int)v31 - 4 >= (signed int)v30->max_length )
        break;
      v33 = sub_B77694(BonusSelectSummonPartyServantListViewManager___c__DisplayClass17_0_TypeInfo);
      BonusSelectSummonPartyServantListViewManager___c__DisplayClass17_0___ctor(
        (BonusSelectSummonPartyServantListViewManager___c__DisplayClass17_0_o *)v33,
        0LL);
      if ( !gachaBonusSelectLineupEntities )
        goto LABEL_59;
      if ( v32 >= gachaBonusSelectLineupEntities->max_length )
        goto LABEL_60;
      v34 = *((_QWORD *)&gachaBonusSelectLineupEntities->obj.klass + v31);
      if ( !v34 || !Master_WarQuestSelectionMaster )
        goto LABEL_59;
      this = (BonusSelectSummonPartyServantListViewManager_o *)GiftMaster__getDataById(
                                                                 Master_WarQuestSelectionMaster,
                                                                 *(_DWORD *)(v34 + 24),
                                                                 0LL);
      if ( this )
      {
        if ( !v29 )
          goto LABEL_59;
        this = (BonusSelectSummonPartyServantListViewManager_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                                                   v29,
                                                                   (int32_t)this->fields.dropObjectList,
                                                                   (const MethodInfo_21FB894 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
        gachaBonusSelectEntity = (GachaBonusSelectEntity_o *)this;
        if ( !v33 )
          goto LABEL_59;
      }
      else
      {
        gachaBonusSelectEntity = 0LL;
        if ( !v33 )
          goto LABEL_59;
      }
      *(_QWORD *)(v33 + 16) = gachaBonusSelectEntity;
      sub_B77560(
        (BattleServantConfConponent_o *)(v33 + 16),
        (System_Int32_array **)gachaBonusSelectEntity,
        v35,
        v36,
        v37,
        v38,
        v39,
        v40);
      v41 = (System_Func_int__bool__o *)sub_B77694(System_Func_int__bool__TypeInfo);
      System_Func_int__bool____ctor(
        v41,
        (Il2CppObject *)v33,
        Method_BonusSelectSummonPartyServantListViewManager___c__DisplayClass17_0__CreateList_b__0__,
        (const MethodInfo_29E3034 *)Method_System_Func_int__bool___ctor__);
      this = (BonusSelectSummonPartyServantListViewManager_o *)BasicHelper__Any_int__29777580(
                                                                 notPossibleSvtIdList,
                                                                 (System_Func_T__bool__o *)v41,
                                                                 (const MethodInfo_1C65EAC *)Method_BasicHelper_Any_int____69468304);
      if ( !gachaBonusSelectLineupEntities )
        goto LABEL_59;
      if ( v32 >= gachaBonusSelectLineupEntities->max_length )
      {
LABEL_60:
        v52 = sub_B776C8(this);
        sub_B77668(v52, 0LL);
      }
      partyServantSelectMenu = v5->fields.partyServantSelectMenu;
      if ( partyServantSelectMenu )
      {
        v43 = (GachaBonusSelectLineupEntity_o *)*((_QWORD *)&gachaBonusSelectLineupEntities->obj.klass + v31);
        v44 = *(ServantEntity_o **)(v33 + 16);
        organizationItem = partyServantSelectMenu->fields.organizationItem;
        v46 = (unsigned __int8)this ^ 1;
        v47 = (BonusSelectSummonPartyServantListViewItem_o *)sub_B77694(BonusSelectSummonPartyServantListViewItem_TypeInfo);
        BonusSelectSummonPartyServantListViewItem___ctor(v47, v32, v44, v43, organizationItem, v46 & 1, v48);
        this = (BonusSelectSummonPartyServantListViewManager_o *)v5->fields.itemList;
        if ( this )
        {
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)this,
            (EventMissionProgressRequest_Argument_ProgressData_o *)v47,
            (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
          v30 = gachaBonusSelectLineupEntities;
          ++v31;
          if ( gachaBonusSelectLineupEntities )
            continue;
        }
      }
      goto LABEL_59;
    }
  }
  emptyMessageLabel = v5->fields.emptyMessageLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  this = (BonusSelectSummonPartyServantListViewManager_o *)LocalizationManager__Get(
                                                             (System_String_o *)StringLiteral_12110/*"SERVANT_SORT_FILTER_RESULT_EMPTY"*/,
                                                             0LL);
  if ( !emptyMessageLabel )
LABEL_59:
    sub_B7769C(this, gachaBonusSelectEntity);
  UILabel__set_text(emptyMessageLabel, (System_String_o *)this, 0LL);
  ListViewManager__SortItem((ListViewManager_o *)v5, -1, 0, -1, 0LL);
  BonusSelectSummonPartyServantListViewManager__SetFilterButtonImage(v5, v50);
  BonusSelectSummonPartyServantListViewManager__UpdateAscendingOrderBtnSprite(v5, v51);
}


void __fastcall BonusSelectSummonPartyServantListViewManager__DeleteContinueData(const MethodInfo *method)
{
  __int64 v1; // x1
  BonusSelectSummonPartyServantListViewManager_c *v2; // x0
  ListViewSort_o *servantSortInfo; // x0

  if ( (byte_438AE3F & 1) == 0 )
  {
    sub_B775C4(&BonusSelectSummonPartyServantListViewManager_TypeInfo);
    byte_438AE3F = 1;
  }
  v2 = BonusSelectSummonPartyServantListViewManager_TypeInfo;
  if ( (BYTE3(BonusSelectSummonPartyServantListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BonusSelectSummonPartyServantListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BonusSelectSummonPartyServantListViewManager_TypeInfo);
    v2 = BonusSelectSummonPartyServantListViewManager_TypeInfo;
  }
  servantSortInfo = v2->static_fields->servantSortInfo;
  if ( !servantSortInfo
    || (ListViewSort__DeleteContinueData(servantSortInfo, 0LL),
        (servantSortInfo = BonusSelectSummonPartyServantListViewManager_TypeInfo->static_fields->servantSortInfoExtra1) == 0LL)
    || (ListViewSort__DeleteContinueData(servantSortInfo, 0LL),
        (servantSortInfo = BonusSelectSummonPartyServantListViewManager_TypeInfo->static_fields->servantSortInfoExtra2) == 0LL) )
  {
    sub_B7769C(servantSortInfo, v1);
  }
  ListViewSort__DeleteContinueData(servantSortInfo, 0LL);
}


void __fastcall BonusSelectSummonPartyServantListViewManager__EndSelectFilterKind(
        BonusSelectSummonPartyServantListViewManager_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x1
  WebViewManager_o *Instance; // x0
  Il2CppObject *sort; // x21
  CommonUI_o *v8; // x19
  System_Action_o *v9; // x20
  __int64 v10; // x0
  __int64 v11; // x1

  if ( (byte_438AE4C & 1) == 0 )
  {
    sub_B775C4(&System_Action_TypeInfo);
    sub_B775C4(&Method_ListViewSort_Save__);
    sub_B775C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_438AE4C = 1;
  }
  if ( isDecide )
  {
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
    BonusSelectSummonPartyServantListViewManager__SetFilterButtonImage(this, v5);
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  sort = (Il2CppObject *)this->fields.sort;
  v8 = (CommonUI_o *)Instance;
  v9 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
  System_Action___ctor(v9, sort, Method_ListViewSort_Save__, 0LL);
  if ( !v8 )
    sub_B7769C(v10, v11);
  CommonUI__CloseServantFilterSelectMenu(v8, v9, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BonusSelectSummonPartyServantListViewManager__EndShowServantStatusDialog(
        BonusSelectSummonPartyServantListViewManager_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  UIProgressBar_o *scrollBar; // x0

  if ( (byte_438AE47 & 1) == 0 )
  {
    sub_B775C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_438AE47 = 1;
  }
  scrollBar = (UIProgressBar_o *)this->fields.scrollBar;
  if ( !scrollBar )
    goto LABEL_9;
  if ( vabds_f32(this->fields.tmpScrollBarValueForLongPush, UIProgressBar__get_value(scrollBar, 0LL)) > this->fields.SCROLLBAR_UNEXPECTED_AUTOMOVE_DIFF_THRESHOLD )
  {
    scrollBar = (UIProgressBar_o *)this->fields.scrollBar;
    if ( !scrollBar )
      goto LABEL_9;
    UIProgressBar__set_value(scrollBar, this->fields.tmpScrollBarValueForLongPush, 0LL);
  }
  scrollBar = (UIProgressBar_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !scrollBar )
LABEL_9:
    sub_B7769C(scrollBar, isDecide);
  CommonUI__CloseServantStatusDialog((CommonUI_o *)scrollBar, 0LL, 0LL);
}


System_String_o *__fastcall BonusSelectSummonPartyServantListViewManager__GetScaleButtonSpriteName(
        BonusSelectSummonPartyServantListViewManager_o *this,
        const MethodInfo *method)
{
  ListViewSort_o *sort; // x0

  sort = this->fields.sort;
  if ( !sort )
    sub_B7769C(0LL, method);
  return ListViewSort__GetScaleKindSpriteName(sort, this->fields.scaleType, 0LL);
}


void __fastcall BonusSelectSummonPartyServantListViewManager__InitLoad(const MethodInfo *method)
{
  __int64 v1; // x1
  BonusSelectSummonPartyServantListViewManager_c *v2; // x0
  ListViewSort_o *servantSortInfo; // x0

  if ( (byte_438AE40 & 1) == 0 )
  {
    sub_B775C4(&BonusSelectSummonPartyServantListViewManager_TypeInfo);
    byte_438AE40 = 1;
  }
  v2 = BonusSelectSummonPartyServantListViewManager_TypeInfo;
  if ( (BYTE3(BonusSelectSummonPartyServantListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BonusSelectSummonPartyServantListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BonusSelectSummonPartyServantListViewManager_TypeInfo);
    v2 = BonusSelectSummonPartyServantListViewManager_TypeInfo;
  }
  servantSortInfo = v2->static_fields->servantSortInfo;
  if ( !servantSortInfo
    || (ListViewSort__InitLoad(servantSortInfo, 0LL),
        (servantSortInfo = BonusSelectSummonPartyServantListViewManager_TypeInfo->static_fields->servantSortInfoExtra1) == 0LL)
    || (ListViewSort__InitLoad(servantSortInfo, 0LL),
        (servantSortInfo = BonusSelectSummonPartyServantListViewManager_TypeInfo->static_fields->servantSortInfoExtra2) == 0LL) )
  {
    sub_B7769C(servantSortInfo, v1);
  }
  ListViewSort__InitLoad(servantSortInfo, 0LL);
}


void __fastcall BonusSelectSummonPartyServantListViewManager__OnClickFilterKind(
        BonusSelectSummonPartyServantListViewManager_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  GachaBonusSelectEntity_o *gachaBonusSelectEntity; // x0
  __int64 v6; // x1
  struct BonusSelectSummonPartyServantSelectMenu_o *partyServantSelectMenu; // x8
  struct BonusSelectSummonPartyOrganizationListViewItem_o *organizationItem; // x8
  int32_t v9; // w20
  struct BonusSelectSummonPartyServantSelectMenu_o *v10; // x8
  struct BonusSelectSummonPartyOrganizationListViewItem_o *v11; // x8
  WebViewManager_o *Instance; // x0
  ListViewSort_o *sort; // x21
  CommonUI_o *v14; // x22
  ServantFilterSelectMenu_CallbackFunc_o *v15; // x23

  if ( (byte_438AE4B & 1) == 0 )
  {
    sub_B775C4(&Method_BonusSelectSummonPartyServantListViewManager_EndSelectFilterKind__);
    sub_B775C4(&Method_BonusSelectSummonPartyServantListViewManager_OnClickFilterKind__);
    sub_B775C4(&ServantFilterSelectMenu_CallbackFunc_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_438AE4B = 1;
  }
  if ( this->fields.isInput )
  {
    v3 = Method_BonusSelectSummonPartyServantListViewManager_OnClickFilterKind__;
    if ( (*((_BYTE *)Method_BonusSelectSummonPartyServantListViewManager_OnClickFilterKind__ + 75) & 2) != 0 )
      v3 = (_QWORD *)sub_B775CC(Method_BonusSelectSummonPartyServantListViewManager_OnClickFilterKind__);
    v4 = (System_Reflection_MethodBase_o *)sub_B775A8(v3, v3[3]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
    partyServantSelectMenu = this->fields.partyServantSelectMenu;
    if ( partyServantSelectMenu )
    {
      organizationItem = partyServantSelectMenu->fields.organizationItem;
      if ( organizationItem )
      {
        gachaBonusSelectEntity = organizationItem->fields.gachaBonusSelectEntity;
        if ( gachaBonusSelectEntity )
        {
          gachaBonusSelectEntity = (GachaBonusSelectEntity_o *)GachaBonusSelectEntity__GetClassId(
                                                                 gachaBonusSelectEntity,
                                                                 1001,
                                                                 0LL);
          if ( (_DWORD)gachaBonusSelectEntity == 1004 )
          {
            v9 = 13;
          }
          else
          {
            v10 = this->fields.partyServantSelectMenu;
            if ( !v10 )
              goto LABEL_20;
            v11 = v10->fields.organizationItem;
            if ( !v11 )
              goto LABEL_20;
            gachaBonusSelectEntity = v11->fields.gachaBonusSelectEntity;
            if ( !gachaBonusSelectEntity )
              goto LABEL_20;
            if ( GachaBonusSelectEntity__GetClassId(gachaBonusSelectEntity, 1001, 0LL) == 1005 )
              v9 = 14;
            else
              v9 = 12;
          }
          Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          sort = this->fields.sort;
          v14 = (CommonUI_o *)Instance;
          v15 = (ServantFilterSelectMenu_CallbackFunc_o *)sub_B77694(ServantFilterSelectMenu_CallbackFunc_TypeInfo);
          ServantFilterSelectMenu_CallbackFunc___ctor(
            v15,
            (Il2CppObject *)this,
            Method_BonusSelectSummonPartyServantListViewManager_EndSelectFilterKind__,
            0LL);
          if ( v14 )
          {
            CommonUI__OpenServantFilterSelectMenu(v14, v9, sort, v15, -1, 0LL);
            return;
          }
        }
      }
    }
LABEL_20:
    sub_B7769C(gachaBonusSelectEntity, v6);
  }
}


void __fastcall BonusSelectSummonPartyServantListViewManager__OnClickSelectListView(
        BonusSelectSummonPartyServantListViewManager_o *this,
        BonusSelectSummonPartyServantListViewObject_o *obj,
        const MethodInfo *method)
{
  BonusSelectSummonPartyServantListViewManager_o *v4; // x20
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  BonusSelectSummonPartyServantSelectMenu_o *partyServantSelectMenu; // x20
  const MethodInfo *v8; // x1
  const MethodInfo *v9; // x2
  struct UICommonButton_o *sortOrderButton; // x8
  struct UICommonButton_o *sortKindButton; // x9
  _QWORD *v12; // x0
  System_Reflection_MethodBase_o *v13; // x0

  v4 = this;
  if ( (byte_438AE45 & 1) == 0 )
  {
    this = (BonusSelectSummonPartyServantListViewManager_o *)sub_B775C4(&Method_BonusSelectSummonPartyServantListViewManager_OnClickSelectListView__);
    byte_438AE45 = 1;
  }
  if ( !obj )
    goto LABEL_17;
  this = (BonusSelectSummonPartyServantListViewManager_o *)BonusSelectSummonPartyServantListViewObject__GetItem(
                                                             obj,
                                                             (const MethodInfo *)obj);
  if ( !this )
    goto LABEL_17;
  if ( BYTE4(this->fields.dragParentObject) )
    goto LABEL_6;
  this = (BonusSelectSummonPartyServantListViewManager_o *)BonusSelectSummonPartyServantListViewObject__GetItem(
                                                             obj,
                                                             (const MethodInfo *)obj);
  if ( !this )
    goto LABEL_17;
  sortOrderButton = this->fields.sortOrderButton;
  if ( sortOrderButton )
  {
    sortKindButton = this->fields.sortKindButton;
    if ( sortKindButton )
    {
      if ( sortOrderButton == *(struct UICommonButton_o **)&sortKindButton[1].fields.m_CachedPtr )
      {
LABEL_6:
        v5 = Method_BonusSelectSummonPartyServantListViewManager_OnClickSelectListView__;
        if ( (*((_BYTE *)Method_BonusSelectSummonPartyServantListViewManager_OnClickSelectListView__ + 75) & 2) != 0 )
          v5 = (_QWORD *)sub_B775CC(Method_BonusSelectSummonPartyServantListViewManager_OnClickSelectListView__);
        v6 = (System_Reflection_MethodBase_o *)sub_B775A8(v5, v5[3]);
        OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0LL);
        partyServantSelectMenu = v4->fields.partyServantSelectMenu;
        this = (BonusSelectSummonPartyServantListViewManager_o *)BonusSelectSummonPartyServantListViewObject__GetItem(
                                                                   obj,
                                                                   v8);
        if ( partyServantSelectMenu )
        {
          BonusSelectSummonPartyServantSelectMenu__Close(
            partyServantSelectMenu,
            (BonusSelectSummonPartyServantListViewItem_o *)this,
            v9);
          return;
        }
LABEL_17:
        sub_B7769C(this, obj);
      }
    }
  }
  v12 = Method_BonusSelectSummonPartyServantListViewManager_OnClickSelectListView__;
  if ( (*((_BYTE *)Method_BonusSelectSummonPartyServantListViewManager_OnClickSelectListView__ + 75) & 2) != 0 )
    v12 = (_QWORD *)sub_B775CC(Method_BonusSelectSummonPartyServantListViewManager_OnClickSelectListView__);
  v13 = (System_Reflection_MethodBase_o *)sub_B775A8(v12, v12[3]);
  OverwriteAssetSoundName__PlaySystemSe(v13, 2, 0LL);
}


void __fastcall BonusSelectSummonPartyServantListViewManager__OnClickSortAscendingOrder(
        BonusSelectSummonPartyServantListViewManager_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  BonusSelectSummonPartyServantListViewManager_o *v5; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x2
  struct ListViewSort_o *sort; // x8
  const MethodInfo *v9; // x1

  if ( (byte_438AE4F & 1) == 0 )
  {
    sub_B775C4(&Method_BonusSelectSummonPartyServantListViewManager_OnClickSortAscendingOrder__);
    byte_438AE4F = 1;
  }
  if ( this->fields.isInput )
  {
    v3 = Method_BonusSelectSummonPartyServantListViewManager_OnClickSortAscendingOrder__;
    if ( (*((_BYTE *)Method_BonusSelectSummonPartyServantListViewManager_OnClickSortAscendingOrder__ + 75) & 2) != 0 )
      v3 = (_QWORD *)sub_B775CC(Method_BonusSelectSummonPartyServantListViewManager_OnClickSortAscendingOrder__);
    v4 = (System_Reflection_MethodBase_o *)sub_B775A8(v3, v3[3]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
    sort = this->fields.sort;
    if ( !sort )
      sub_B7769C(v5, v6);
    BonusSelectSummonPartyServantListViewManager__SetAndSaveSortAscendingOrder(v5, !sort->fields.isAscendingOrder, v7);
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
    BonusSelectSummonPartyServantListViewManager__UpdateAscendingOrderBtnSprite(this, v9);
  }
}


void __fastcall BonusSelectSummonPartyServantListViewManager__OnClickSortKind(
        BonusSelectSummonPartyServantListViewManager_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  BonusSelectSummonPartyServantListViewManager_o *v5; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x2
  struct ListViewSort_o *sort; // x8
  int32_t v9; // w1

  if ( (byte_438AE4D & 1) == 0 )
  {
    sub_B775C4(&Method_BonusSelectSummonPartyServantListViewManager_OnClickSortKind__);
    byte_438AE4D = 1;
  }
  if ( this->fields.isInput )
  {
    v3 = Method_BonusSelectSummonPartyServantListViewManager_OnClickSortKind__;
    if ( (*((_BYTE *)Method_BonusSelectSummonPartyServantListViewManager_OnClickSortKind__ + 75) & 2) != 0 )
      v3 = (_QWORD *)sub_B775CC(Method_BonusSelectSummonPartyServantListViewManager_OnClickSortKind__);
    v4 = (System_Reflection_MethodBase_o *)sub_B775A8(v3, v3[3]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
    sort = this->fields.sort;
    if ( !sort )
      sub_B7769C(v5, v6);
    if ( sort->fields.sortKind == 27 )
      v9 = 4;
    else
      v9 = 27;
    BonusSelectSummonPartyServantListViewManager__SetAndSaveSortKind(v5, v9, v7);
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
  }
}


void __fastcall BonusSelectSummonPartyServantListViewManager__OnLongPushListView(
        BonusSelectSummonPartyServantListViewManager_o *this,
        BonusSelectSummonPartyServantListViewObject_o *obj,
        const MethodInfo *method)
{
  UIProgressBar_o *scrollBar; // x0
  _QWORD *v6; // x0
  System_Reflection_MethodBase_o *v7; // x0
  CommonUI_o *v8; // x21
  struct UnityEngine_Transform_o *thumb; // x8
  UnityEngine_Transform_c *klass; // x20
  __int64 v11; // x22
  int32_t v12; // w22
  ServantLeaderInfo_o *v13; // x20
  ServantStatusDialog_EndDelegate_o *v14; // x22
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v15; // 0:x0.16

  if ( (byte_438AE46 & 1) == 0 )
  {
    sub_B775C4(&Method_BonusSelectSummonPartyServantListViewManager_EndShowServantStatusDialog__);
    sub_B775C4(&Method_BonusSelectSummonPartyServantListViewManager_OnLongPushListView__);
    sub_B775C4(&ServantStatusDialog_EndDelegate_TypeInfo);
    sub_B775C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B775C4(&ServantLeaderInfo_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_438AE46 = 1;
  }
  scrollBar = (UIProgressBar_o *)this->fields.scrollBar;
  if ( !scrollBar )
    goto LABEL_14;
  this->fields.tmpScrollBarValueForLongPush = UIProgressBar__get_value(scrollBar, 0LL);
  v6 = Method_BonusSelectSummonPartyServantListViewManager_OnLongPushListView__;
  if ( (*((_BYTE *)Method_BonusSelectSummonPartyServantListViewManager_OnLongPushListView__ + 75) & 2) != 0 )
    v6 = (_QWORD *)sub_B775CC(Method_BonusSelectSummonPartyServantListViewManager_OnLongPushListView__);
  v7 = (System_Reflection_MethodBase_o *)sub_B775A8(v6, v6[3]);
  OverwriteAssetSoundName__PlaySystemSe(v7, 0, 0LL);
  scrollBar = (UIProgressBar_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !obj )
    goto LABEL_14;
  v8 = (CommonUI_o *)scrollBar;
  scrollBar = (UIProgressBar_o *)BonusSelectSummonPartyServantListViewObject__GetItem(obj, (const MethodInfo *)obj);
  if ( !scrollBar )
    goto LABEL_14;
  thumb = scrollBar[1].fields.thumb;
  if ( !thumb )
    goto LABEL_14;
  v11 = *(_QWORD *)&thumb->fields.m_CachedPtr;
  klass = thumb[1].klass;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v15.fields.currentCryptoKey = v11;
  *(_QWORD *)&v15.fields.fakeValue = klass;
  v12 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45425956(v15, 0LL);
  v13 = (ServantLeaderInfo_o *)sub_B77694(ServantLeaderInfo_TypeInfo);
  ServantLeaderInfo___ctor_29357584(v13, v12, 0, 1, 0LL);
  v14 = (ServantStatusDialog_EndDelegate_o *)sub_B77694(ServantStatusDialog_EndDelegate_TypeInfo);
  ServantStatusDialog_EndDelegate___ctor(
    v14,
    (Il2CppObject *)this,
    Method_BonusSelectSummonPartyServantListViewManager_EndShowServantStatusDialog__,
    0LL);
  if ( !v8 )
LABEL_14:
    sub_B7769C(scrollBar, obj);
  CommonUI__OpenServantStatusDialog_18068936(v8, 7, v13, v14, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BonusSelectSummonPartyServantListViewManager__RequestListObject(
        BonusSelectSummonPartyServantListViewManager_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  System_Collections_Generic_List_BonusSelectSummonPartyServantListViewObject__o *ObjectList; // x0
  __int64 v6; // x1
  __int64 v7; // x1
  const MethodInfo *v8; // x2
  System_Collections_Generic_List_Enumerator_T__o v9; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_438AE42 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_BonusSelectSummonPartyServantListViewObject__Dispose__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_BonusSelectSummonPartyServantListViewObject__MoveNext__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_BonusSelectSummonPartyServantListViewObject__get_Current__);
    sub_B775C4(&Method_System_Collections_Generic_List_BonusSelectSummonPartyServantListViewObject__GetEnumerator__);
    byte_438AE42 = 1;
  }
  memset(&v9, 0, sizeof(v9));
  ObjectList = BonusSelectSummonPartyServantListViewManager__get_ObjectList(this, *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_B7769C(0LL, v6);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v9,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)ObjectList,
    (const MethodInfo_3054114 *)Method_System_Collections_Generic_List_BonusSelectSummonPartyServantListViewObject__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v9,
            (const MethodInfo_225C720 *)Method_System_Collections_Generic_List_Enumerator_BonusSelectSummonPartyServantListViewObject__MoveNext__) )
  {
    if ( !v9.fields.current )
      sub_B7769C(0LL, v7);
    BonusSelectSummonPartyServantListViewObject__Init(
      (BonusSelectSummonPartyServantListViewObject_o *)v9.fields.current,
      mode,
      v8);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v9,
    (const MethodInfo_225C71C *)Method_System_Collections_Generic_List_Enumerator_BonusSelectSummonPartyServantListViewObject__Dispose__);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BonusSelectSummonPartyServantListViewManager__SetAndSaveIconScaleType(
        BonusSelectSummonPartyServantListViewManager_o *this,
        int32_t scaleType,
        const MethodInfo *method)
{
  ListViewSort_o *servantSortInfoExtra1; // x0
  _DWORD *gc_desc; // x8
  const char *name; // x8
  const char *namespaze; // x8

  if ( (byte_438AE49 & 1) == 0 )
  {
    sub_B775C4(&BonusSelectSummonPartyServantListViewManager_TypeInfo);
    byte_438AE49 = 1;
  }
  servantSortInfoExtra1 = (ListViewSort_o *)BonusSelectSummonPartyServantListViewManager_TypeInfo;
  if ( (BYTE3(BonusSelectSummonPartyServantListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BonusSelectSummonPartyServantListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BonusSelectSummonPartyServantListViewManager_TypeInfo);
    servantSortInfoExtra1 = (ListViewSort_o *)BonusSelectSummonPartyServantListViewManager_TypeInfo;
  }
  gc_desc = servantSortInfoExtra1[1].klass->_1.gc_desc;
  if ( !gc_desc )
    goto LABEL_13;
  gc_desc[34] = scaleType;
  name = servantSortInfoExtra1[1].klass->_1.name;
  if ( !name )
    goto LABEL_13;
  *((_DWORD *)name + 34) = scaleType;
  namespaze = servantSortInfoExtra1[1].klass->_1.namespaze;
  if ( !namespaze
    || (*((_DWORD *)namespaze + 34) = scaleType,
        (servantSortInfoExtra1 = (ListViewSort_o *)servantSortInfoExtra1[1].klass->_1.gc_desc) == 0LL)
    || (ListViewSort__SaveIconScaleKind(servantSortInfoExtra1, 0LL),
        (servantSortInfoExtra1 = BonusSelectSummonPartyServantListViewManager_TypeInfo->static_fields->servantSortInfoExtra1) == 0LL)
    || (ListViewSort__SaveIconScaleKind(servantSortInfoExtra1, 0LL),
        (servantSortInfoExtra1 = BonusSelectSummonPartyServantListViewManager_TypeInfo->static_fields->servantSortInfoExtra2) == 0LL) )
  {
LABEL_13:
    sub_B7769C(servantSortInfoExtra1, *(_QWORD *)&scaleType);
  }
  ListViewSort__SaveIconScaleKind(servantSortInfoExtra1, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BonusSelectSummonPartyServantListViewManager__SetAndSaveSortAscendingOrder(
        BonusSelectSummonPartyServantListViewManager_o *this,
        bool isAscendingOrder,
        const MethodInfo *method)
{
  ListViewSort_o *servantSortInfoExtra1; // x0
  _BYTE *gc_desc; // x9
  bool v6; // w8
  const char *name; // x9
  const char *namespaze; // x9

  if ( (byte_438AE50 & 1) == 0 )
  {
    sub_B775C4(&BonusSelectSummonPartyServantListViewManager_TypeInfo);
    byte_438AE50 = 1;
  }
  servantSortInfoExtra1 = (ListViewSort_o *)BonusSelectSummonPartyServantListViewManager_TypeInfo;
  if ( (BYTE3(BonusSelectSummonPartyServantListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BonusSelectSummonPartyServantListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BonusSelectSummonPartyServantListViewManager_TypeInfo);
    servantSortInfoExtra1 = (ListViewSort_o *)BonusSelectSummonPartyServantListViewManager_TypeInfo;
  }
  gc_desc = servantSortInfoExtra1[1].klass->_1.gc_desc;
  if ( !gc_desc )
    goto LABEL_13;
  v6 = isAscendingOrder;
  gc_desc[60] = isAscendingOrder;
  name = servantSortInfoExtra1[1].klass->_1.name;
  if ( !name )
    goto LABEL_13;
  *((_BYTE *)name + 60) = v6;
  namespaze = servantSortInfoExtra1[1].klass->_1.namespaze;
  if ( !namespaze
    || (*((_BYTE *)namespaze + 60) = v6,
        (servantSortInfoExtra1 = (ListViewSort_o *)servantSortInfoExtra1[1].klass->_1.gc_desc) == 0LL)
    || (ListViewSort__SaveIsAscendingOrder(servantSortInfoExtra1, 0LL),
        (servantSortInfoExtra1 = BonusSelectSummonPartyServantListViewManager_TypeInfo->static_fields->servantSortInfoExtra1) == 0LL)
    || (ListViewSort__SaveIsAscendingOrder(servantSortInfoExtra1, 0LL),
        (servantSortInfoExtra1 = BonusSelectSummonPartyServantListViewManager_TypeInfo->static_fields->servantSortInfoExtra2) == 0LL) )
  {
LABEL_13:
    sub_B7769C(servantSortInfoExtra1, isAscendingOrder);
  }
  ListViewSort__SaveIsAscendingOrder(servantSortInfoExtra1, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BonusSelectSummonPartyServantListViewManager__SetAndSaveSortKind(
        BonusSelectSummonPartyServantListViewManager_o *this,
        int32_t sortKind,
        const MethodInfo *method)
{
  ListViewSort_o *servantSortInfoExtra1; // x0
  _DWORD *gc_desc; // x8
  const char *name; // x8
  const char *namespaze; // x8

  if ( (byte_438AE4E & 1) == 0 )
  {
    sub_B775C4(&BonusSelectSummonPartyServantListViewManager_TypeInfo);
    byte_438AE4E = 1;
  }
  servantSortInfoExtra1 = (ListViewSort_o *)BonusSelectSummonPartyServantListViewManager_TypeInfo;
  if ( (BYTE3(BonusSelectSummonPartyServantListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BonusSelectSummonPartyServantListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BonusSelectSummonPartyServantListViewManager_TypeInfo);
    servantSortInfoExtra1 = (ListViewSort_o *)BonusSelectSummonPartyServantListViewManager_TypeInfo;
  }
  gc_desc = servantSortInfoExtra1[1].klass->_1.gc_desc;
  if ( !gc_desc )
    goto LABEL_13;
  gc_desc[14] = sortKind;
  name = servantSortInfoExtra1[1].klass->_1.name;
  if ( !name )
    goto LABEL_13;
  *((_DWORD *)name + 14) = sortKind;
  namespaze = servantSortInfoExtra1[1].klass->_1.namespaze;
  if ( !namespaze
    || (*((_DWORD *)namespaze + 14) = sortKind,
        (servantSortInfoExtra1 = (ListViewSort_o *)servantSortInfoExtra1[1].klass->_1.gc_desc) == 0LL)
    || (ListViewSort__SaveSortKind(servantSortInfoExtra1, 0LL),
        (servantSortInfoExtra1 = BonusSelectSummonPartyServantListViewManager_TypeInfo->static_fields->servantSortInfoExtra1) == 0LL)
    || (ListViewSort__SaveSortKind(servantSortInfoExtra1, 0LL),
        (servantSortInfoExtra1 = BonusSelectSummonPartyServantListViewManager_TypeInfo->static_fields->servantSortInfoExtra2) == 0LL) )
  {
LABEL_13:
    sub_B7769C(servantSortInfoExtra1, *(_QWORD *)&sortKind);
  }
  ListViewSort__SaveSortKind(servantSortInfoExtra1, 0LL);
}


void __fastcall BonusSelectSummonPartyServantListViewManager__SetFilterButtonImage(
        BonusSelectSummonPartyServantListViewManager_o *this,
        const MethodInfo *method)
{
  BonusSelectSummonPartyServantListViewManager_o *v2; // x19
  struct BonusSelectSummonPartyServantSelectMenu_o *partyServantSelectMenu; // x8
  struct BonusSelectSummonPartyOrganizationListViewItem_o *organizationItem; // x8
  struct BonusSelectSummonPartyServantSelectMenu_o *v5; // x8
  struct BonusSelectSummonPartyOrganizationListViewItem_o *v6; // x8
  UISprite_o *filterSprite; // x19
  System_String_o **v8; // x8

  v2 = this;
  if ( (byte_438AE43 & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_17332/*"btn_filter_on"*/);
    this = (BonusSelectSummonPartyServantListViewManager_o *)sub_B775C4(&StringLiteral_17331/*"btn_filter"*/);
    byte_438AE43 = 1;
  }
  partyServantSelectMenu = v2->fields.partyServantSelectMenu;
  if ( !partyServantSelectMenu )
    goto LABEL_19;
  organizationItem = partyServantSelectMenu->fields.organizationItem;
  if ( !organizationItem )
    goto LABEL_19;
  this = (BonusSelectSummonPartyServantListViewManager_o *)organizationItem->fields.gachaBonusSelectEntity;
  if ( !this )
    goto LABEL_19;
  this = (BonusSelectSummonPartyServantListViewManager_o *)GachaBonusSelectEntity__GetClassId(
                                                             (GachaBonusSelectEntity_o *)this,
                                                             1001,
                                                             0LL);
  if ( (_DWORD)this == 1004 )
  {
    method = (const MethodInfo *)(byte_9 + 4);
    goto LABEL_14;
  }
  v5 = v2->fields.partyServantSelectMenu;
  if ( !v5
    || (v6 = v5->fields.organizationItem) == 0LL
    || (this = (BonusSelectSummonPartyServantListViewManager_o *)v6->fields.gachaBonusSelectEntity) == 0LL )
  {
LABEL_19:
    sub_B7769C(this, method);
  }
  if ( GachaBonusSelectEntity__GetClassId((GachaBonusSelectEntity_o *)this, 1001, 0LL) == 1005 )
    method = (const MethodInfo *)(byte_9 + 5);
  else
    method = (const MethodInfo *)(byte_9 + 3);
LABEL_14:
  this = (BonusSelectSummonPartyServantListViewManager_o *)v2->fields.sort;
  if ( !this )
    goto LABEL_19;
  filterSprite = v2->fields.filterSprite;
  this = (BonusSelectSummonPartyServantListViewManager_o *)ListViewSort__CheckBonusSelectSummonFilterDefaultAll(
                                                             (ListViewSort_o *)this,
                                                             (int32_t)method,
                                                             -1,
                                                             0LL);
  if ( !filterSprite )
    goto LABEL_19;
  v8 = (System_String_o **)&StringLiteral_17331/*"btn_filter"*/;
  if ( ((unsigned __int8)this & 1) == 0 )
    v8 = (System_String_o **)&StringLiteral_17332/*"btn_filter_on"*/;
  UISprite__set_spriteName(filterSprite, *v8, 0LL);
}


void __fastcall BonusSelectSummonPartyServantListViewManager__SetMode(
        BonusSelectSummonPartyServantListViewManager_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  __int64 v5; // x1
  UnityEngine_Behaviour_o *scrollView; // x0
  const MethodInfo *v7; // x2
  int32_t v8; // w1

  ListViewManager__set_IsInput((ListViewManager_o *)this, mode == 2, 0LL);
  scrollView = (UnityEngine_Behaviour_o *)this->fields.scrollView;
  if ( !scrollView )
    goto LABEL_12;
  if ( UnityEngine_Behaviour__get_enabled(scrollView, 0LL) )
    goto LABEL_6;
  scrollView = (UnityEngine_Behaviour_o *)this->fields.scrollView;
  if ( !scrollView
    || (UnityEngine_Behaviour__set_enabled(scrollView, 1, 0LL),
        (scrollView = (UnityEngine_Behaviour_o *)this->fields.scrollView) == 0LL) )
  {
LABEL_12:
    sub_B7769C(scrollView, v5);
  }
  UIScrollView__UpdatePosition((UIScrollView_o *)scrollView, 0LL);
LABEL_6:
  switch ( mode )
  {
    case 1:
      v8 = 2;
      goto LABEL_10;
    case 2:
      v8 = 3;
      goto LABEL_10;
    case 3:
      v8 = 4;
LABEL_10:
      BonusSelectSummonPartyServantListViewManager__RequestListObject(this, v8, v7);
      break;
    case 4:
      ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
      break;
    default:
      return;
  }
}


void __fastcall BonusSelectSummonPartyServantListViewManager__SetObjectItem(
        BonusSelectSummonPartyServantListViewManager_o *this,
        ListViewObject_o *obj,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  BonusSelectSummonPartyServantListViewManager_o *v5; // x20
  __int64 v6; // x10
  int32_t v7; // w1

  v5 = this;
  if ( (byte_438AE4A & 1) == 0 )
  {
    this = (BonusSelectSummonPartyServantListViewManager_o *)sub_B775C4(&BonusSelectSummonPartyServantListViewObject_TypeInfo);
    byte_438AE4A = 1;
  }
  if ( !obj
    || (v6 = *(&BonusSelectSummonPartyServantListViewObject_TypeInfo->_2.bitflags2 + 1),
        *(&obj->klass->_2.bitflags2 + 1) < (unsigned int)v6)
    || (BonusSelectSummonPartyServantListViewObject_c *)obj->klass->_2.typeHierarchy[v6 - 1] != BonusSelectSummonPartyServantListViewObject_TypeInfo )
  {
    sub_B7769C(this, obj);
  }
  if ( v5->fields.isInput )
    v7 = 3;
  else
    v7 = 2;
  BonusSelectSummonPartyServantListViewObject__Init(
    (BonusSelectSummonPartyServantListViewObject_o *)obj,
    v7,
    (const MethodInfo *)item);
}


void __fastcall BonusSelectSummonPartyServantListViewManager__UpdateAscendingOrderBtnSprite(
        BonusSelectSummonPartyServantListViewManager_o *this,
        const MethodInfo *method)
{
  BonusSelectSummonPartyServantListViewManager_o *v2; // x19
  struct ListViewSort_o *sort; // x8
  System_String_o **v4; // x8

  v2 = this;
  if ( (byte_438AE44 & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_17444/*"btn_txt_up"*/);
    this = (BonusSelectSummonPartyServantListViewManager_o *)sub_B775C4(&StringLiteral_17390/*"btn_txt_down"*/);
    byte_438AE44 = 1;
  }
  sort = v2->fields.sort;
  if ( !sort || (this = (BonusSelectSummonPartyServantListViewManager_o *)v2->fields.sortExplanationSprite) == 0LL )
    sub_B7769C(this, method);
  if ( sort->fields.isAscendingOrder )
    v4 = (System_String_o **)&StringLiteral_17444/*"btn_txt_up"*/;
  else
    v4 = (System_String_o **)&StringLiteral_17390/*"btn_txt_down"*/;
  UISprite__set_spriteName((UISprite_o *)this, *v4, 0LL);
}


System_Collections_Generic_List_BonusSelectSummonPartyServantListViewObject__o *__fastcall BonusSelectSummonPartyServantListViewManager__get_ObjectList(
        BonusSelectSummonPartyServantListViewManager_o *this,
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

  if ( (byte_438AE51 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_B775C4(&Method_UnityEngine_GameObject_GetComponent_BonusSelectSummonPartyServantListViewObject___);
    sub_B775C4(&Method_System_Collections_Generic_List_BonusSelectSummonPartyServantListViewObject__Add__);
    sub_B775C4(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_B775C4(&Method_System_Collections_Generic_List_BonusSelectSummonPartyServantListViewObject___ctor__);
    sub_B775C4(&System_Collections_Generic_List_BonusSelectSummonPartyServantListViewObject__TypeInfo);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    byte_438AE51 = 1;
  }
  memset(&v12, 0, sizeof(v12));
  v3 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B77694(System_Collections_Generic_List_BonusSelectSummonPartyServantListViewObject__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v3,
    (const MethodInfo_30525D4 *)Method_System_Collections_Generic_List_BonusSelectSummonPartyServantListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_B7769C(0LL, v4);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v11,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)objectList,
    (const MethodInfo_3054114 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v12 = v11;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v12,
            (const MethodInfo_225C720 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
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
        sub_B7769C(v7, v8);
      Component_srcLineSprite = (EventMissionProgressRequest_Argument_ProgressData_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                                         (UnityEngine_GameObject_o *)current,
                                                                                         (const MethodInfo_1DEBFC4 *)Method_UnityEngine_GameObject_GetComponent_BonusSelectSummonPartyServantListViewObject___);
      if ( !v3 )
        sub_B7769C(Component_srcLineSprite, Component_srcLineSprite);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v3,
        Component_srcLineSprite,
        (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_BonusSelectSummonPartyServantListViewObject__Add__);
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v12,
    (const MethodInfo_225C71C *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_BonusSelectSummonPartyServantListViewObject__o *)v3;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BonusSelectSummonPartyServantListViewManager_CallbackFunc___ctor(
        BonusSelectSummonPartyServantListViewManager_CallbackFunc_o *this,
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
  sub_B77560(p_method);
}


// local variable allocation has failed, the output may be wrong!
System_IAsyncResult_o *__fastcall BonusSelectSummonPartyServantListViewManager_CallbackFunc__BeginInvoke(
        BonusSelectSummonPartyServantListViewManager_CallbackFunc_o *this,
        int32_t kind,
        int32_t result,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v9; // x2
  __int64 v11[3]; // [xsp+0h] [xbp-40h] BYREF
  int32_t v12; // [xsp+18h] [xbp-28h] BYREF
  int32_t v13; // [xsp+1Ch] [xbp-24h] BYREF

  v12 = result;
  v13 = kind;
  if ( (byte_4388536 & 1) == 0 )
  {
    sub_B775C4(&int_TypeInfo);
    sub_B775C4(&BonusSelectSummonPartyServantListViewManager_ResultKind_TypeInfo);
    byte_4388536 = 1;
  }
  v11[2] = 0LL;
  v11[0] = j_il2cpp_value_box_0(
             BonusSelectSummonPartyServantListViewManager_ResultKind_TypeInfo,
             &v13,
             *(_QWORD *)&result);
  v11[1] = j_il2cpp_value_box_0(int_TypeInfo, &v12, v9);
  return (System_IAsyncResult_o *)sub_B77568(this, v11, callback, object);
}


void __fastcall BonusSelectSummonPartyServantListViewManager_CallbackFunc__EndInvoke(
        BonusSelectSummonPartyServantListViewManager_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B7756C(result, 0LL, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BonusSelectSummonPartyServantListViewManager_CallbackFunc__Invoke(
        BonusSelectSummonPartyServantListViewManager_CallbackFunc_o *this,
        int32_t kind,
        int32_t result,
        const MethodInfo *method)
{
  __int64 v4; // x8
  __int64 v7; // x25
  BonusSelectSummonPartyServantListViewManager_CallbackFunc_o **v8; // x26
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
  void (__fastcall **v19)(__int64 *, _QWORD, _QWORD, _QWORD); // x0
  BonusSelectSummonPartyServantListViewManager_CallbackFunc_o *v20; // x8
  __int64 *v21; // x22
  __int64 v22; // x23
  void (__fastcall *v23)(unsigned int *, _QWORD, __int64); // x24
  char v24; // w24
  char v25; // w0
  unsigned int v26; // w24
  __int64 v27; // x8
  __int64 v28; // x1
  __int64 v29; // x2
  unsigned __int64 v30; // x10
  _DWORD *v31; // x11
  unsigned int v32; // [xsp+Ch] [xbp-54h] BYREF
  BonusSelectSummonPartyServantListViewManager_CallbackFunc_o *v33; // [xsp+18h] [xbp-48h] BYREF

  v33 = this;
  v32 = kind;
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
    v8 = (BonusSelectSummonPartyServantListViewManager_CallbackFunc_o **)(v4 + 32);
LABEL_5:
    v9 = 0LL;
    while ( 1 )
    {
      v20 = v8[v9];
      v21 = *(__int64 **)&v20->fields.method;
      v22 = *(_QWORD *)&v20->fields.extra_arg;
      v23 = *(void (__fastcall **)(unsigned int *, _QWORD, __int64))&v20->fields.method_ptr;
      if ( *(__int16 *)(v22 + 72) == -1 )
        sub_B77680(*(_QWORD *)&v20->fields.extra_arg, *(_QWORD *)&kind);
      if ( (sub_B775F4(v22) & 1) == 0 )
        break;
      if ( *(_BYTE *)(v22 + 74) != 2 )
        goto LABEL_36;
      v23((unsigned int *)v32, (unsigned int)result, v22);
LABEL_38:
      if ( ++v9 == v7 )
        return;
    }
    if ( !v21 )
    {
      v23(&v32 - 4, (unsigned int)result, v22);
      goto LABEL_38;
    }
    if ( *(__int16 *)(v22 + 72) != -1 && (*(_BYTE *)(*v21 + 277) & 1) == 0 && this->fields.m_target )
    {
      v24 = sub_B775EC(v22);
      v25 = sub_B779F0(v22);
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
            v18 = sub_B0F4C0(v21, v28, v29);
          }
          v17 = *(_QWORD *)(v18 + 8);
        }
        else
        {
          v17 = *(_QWORD *)(*v21 + 16LL * *(unsigned __int16 *)(v22 + 72) + 320);
        }
        v19 = (void (__fastcall **)(__int64 *, _QWORD, _QWORD, _QWORD))sub_B77674(v17, v22);
        (*v19)(v21, v26, (unsigned int)result, v19);
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
            v16 = sub_B0F4C0(v21, class_0, v10);
          }
          (*(void (__fastcall **)(__int64 *, _QWORD, _QWORD, _QWORD))v16)(
            v21,
            v13,
            (unsigned int)result,
            *(_QWORD *)(v16 + 8));
        }
        else
        {
          (*(void (__fastcall **)(__int64 *, _QWORD, _QWORD, _QWORD))(*v21 + 16LL * *(unsigned __int16 *)(v22 + 72) + 312))(
            v21,
            v32,
            (unsigned int)result,
            *(_QWORD *)(*v21 + 16LL * *(unsigned __int16 *)(v22 + 72) + 320));
        }
      }
      goto LABEL_38;
    }
LABEL_36:
    ((void (__fastcall *)(__int64 *, _QWORD, _QWORD, __int64))v23)(v21, v32, (unsigned int)result, v22);
    goto LABEL_38;
  }
}


void __fastcall BonusSelectSummonPartyServantListViewManager___c__DisplayClass17_0___ctor(
        BonusSelectSummonPartyServantListViewManager___c__DisplayClass17_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall BonusSelectSummonPartyServantListViewManager___c__DisplayClass17_0___CreateList_b__0(
        BonusSelectSummonPartyServantListViewManager___c__DisplayClass17_0_o *this,
        int32_t id,
        const MethodInfo *method)
{
  BonusSelectSummonPartyServantListViewManager___c__DisplayClass17_0_o *v4; // x20
  struct ServantEntity_o *servantEntity; // x8
  __int64 v6; // x20
  __int64 v7; // x21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v9; // 0:x0.16

  v4 = this;
  if ( (byte_4388535 & 1) == 0 )
  {
    this = (BonusSelectSummonPartyServantListViewManager___c__DisplayClass17_0_o *)sub_B775C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4388535 = 1;
  }
  servantEntity = v4->fields.servantEntity;
  if ( !servantEntity )
    sub_B7769C(this, *(_QWORD *)&id);
  v7 = *(_QWORD *)&servantEntity->fields.id.fields.currentCryptoKey;
  v6 = *(_QWORD *)&servantEntity->fields.id.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v9.fields.currentCryptoKey = v7;
  *(_QWORD *)&v9.fields.fakeValue = v6;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45425956(v9, 0LL) == id;
}