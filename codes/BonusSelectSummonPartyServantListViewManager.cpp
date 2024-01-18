void __fastcall BonusSelectSummonPartyServantListViewManager___cctor(const MethodInfo *method)
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
  __int64 v10; // x1
  __int64 v11; // x1
  BattleServantConfConponent_o *static_fields; // x0
  System_Int32_array **v13; // x1
  System_String_o *SORT_SAVE_KEY; // x19
  ListViewSort_o *v15; // x20
  struct BonusSelectSummonPartyServantListViewManager_StaticFields *v16; // x0
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  System_String_o *v23; // x19
  ListViewSort_o *v24; // x20
  struct BonusSelectSummonPartyServantListViewManager_StaticFields *v25; // x0
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  System_String_o *v32; // x19
  ListViewSort_o *v33; // x20
  struct BonusSelectSummonPartyServantListViewManager_StaticFields *v34; // x0
  System_String_array **v35; // x2
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7

  if ( (byte_4187DF8 & 1) == 0 )
  {
    sub_B2C35C(&BonusSelectSummonPartyServantListViewManager_TypeInfo, v1);
    sub_B2C35C(&ListViewSort_TypeInfo, v8);
    sub_B2C35C(&StringLiteral_1104/*"2"*/, v9);
    sub_B2C35C(&StringLiteral_2848/*"BonusSelectSummonPartyServant"*/, v10);
    sub_B2C35C(&StringLiteral_1006/*"1"*/, v11);
    byte_4187DF8 = 1;
  }
  static_fields = (BattleServantConfConponent_o *)BonusSelectSummonPartyServantListViewManager_TypeInfo->static_fields;
  v13 = (System_Int32_array **)StringLiteral_2848/*"BonusSelectSummonPartyServant"*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_2848/*"BonusSelectSummonPartyServant"*/;
  sub_B2C2F8(static_fields, v13, v2, v3, v4, v5, v6, v7);
  SORT_SAVE_KEY = BonusSelectSummonPartyServantListViewManager_TypeInfo->static_fields->SORT_SAVE_KEY;
  v15 = (ListViewSort_o *)sub_B2C42C(ListViewSort_TypeInfo);
  ListViewSort___ctor_33914184(v15, SORT_SAVE_KEY, 27, 0, 0LL);
  v16 = BonusSelectSummonPartyServantListViewManager_TypeInfo->static_fields;
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
  v23 = System_String__Concat_44305532(
          BonusSelectSummonPartyServantListViewManager_TypeInfo->static_fields->SORT_SAVE_KEY,
          (System_String_o *)StringLiteral_1006/*"1"*/,
          0LL);
  v24 = (ListViewSort_o *)sub_B2C42C(ListViewSort_TypeInfo);
  ListViewSort___ctor_33914184(v24, v23, 27, 0, 0LL);
  v25 = BonusSelectSummonPartyServantListViewManager_TypeInfo->static_fields;
  v25->servantSortInfoExtra1 = v24;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&v25->servantSortInfoExtra1,
    (System_Int32_array **)v24,
    v26,
    v27,
    v28,
    v29,
    v30,
    v31);
  v32 = System_String__Concat_44305532(
          BonusSelectSummonPartyServantListViewManager_TypeInfo->static_fields->SORT_SAVE_KEY,
          (System_String_o *)StringLiteral_1104/*"2"*/,
          0LL);
  v33 = (ListViewSort_o *)sub_B2C42C(ListViewSort_TypeInfo);
  ListViewSort___ctor_33914184(v33, v32, 27, 0, 0LL);
  v34 = BonusSelectSummonPartyServantListViewManager_TypeInfo->static_fields;
  v34->servantSortInfoExtra2 = v33;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&v34->servantSortInfoExtra2,
    (System_Int32_array **)v33,
    v35,
    v36,
    v37,
    v38,
    v39,
    v40);
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
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  unsigned int scaleType; // w8
  System_Int32_array **smallSizeSeed; // x1
  int v14; // w8
  ListViewObject_o *v15; // x0
  __int64 v16; // x1
  const MethodInfo *v17; // x2
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x20
  unsigned __int64 v19; // x22
  ListViewItem_o *v20; // x20
  __int64 v21; // x10
  UnityEngine_Object_o *viewObject; // x21

  v8 = this;
  if ( (byte_4187DEE & 1) == 0 )
  {
    sub_B2C35C(&BonusSelectSummonPartyServantListViewItem_TypeInfo, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v9);
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v10);
    this = (BonusSelectSummonPartyServantListViewManager_o *)sub_B2C35C(&UnityEngine_Object_TypeInfo, v11);
    byte_4187DEE = 1;
  }
  scaleType = v8->fields.scaleType;
  if ( scaleType < 2 )
  {
    smallSizeSeed = (System_Int32_array **)v8->fields.smallSizeSeed;
    v14 = 2;
  }
  else if ( scaleType == 2 )
  {
    smallSizeSeed = (System_Int32_array **)v8->fields.extremelySmallSizeSeed;
    v14 = 3;
  }
  else
  {
    if ( scaleType != 3 )
      goto LABEL_10;
    smallSizeSeed = (System_Int32_array **)v8->fields.normalSizeSeed;
    v14 = 1;
  }
  v8->fields.scaleType = v14;
  v8->fields.seed = (struct ListViewItemSeed_o *)smallSizeSeed;
  sub_B2C2F8((BattleServantConfConponent_o *)&v8->fields.seed, smallSizeSeed, v2, v3, v4, v5, v6, v7);
LABEL_10:
  BonusSelectSummonPartyServantListViewManager__SetAndSaveIconScaleType(
    this,
    v8->fields.scaleType,
    (const MethodInfo *)v2);
  itemList = v8->fields.itemList;
  if ( !itemList )
LABEL_25:
    sub_B2C434(v15, v16);
  v19 = 0LL;
  while ( (__int64)v19 < itemList->fields._size )
  {
    if ( v19 >= (unsigned int)itemList->fields._size )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
    v20 = itemList->fields._items->m_Items[v19];
    if ( v20 )
    {
      v21 = *(&BonusSelectSummonPartyServantListViewItem_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v20->klass->_2.bitflags2 + 1) >= (unsigned int)v21
        && (BonusSelectSummonPartyServantListViewItem_c *)v20->klass->_2.typeHierarchy[v21 - 1] == BonusSelectSummonPartyServantListViewItem_TypeInfo )
      {
        viewObject = (UnityEngine_Object_o *)v20->fields.viewObject;
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        v15 = (ListViewObject_o *)UnityEngine_Object__op_Equality(viewObject, 0LL, 0LL);
        if ( ((unsigned __int8)v15 & 1) == 0 )
        {
          v15 = v20->fields.viewObject;
          if ( !v15 )
            goto LABEL_25;
          ListViewObject__SetItemSeed(v15, v20, v8->fields.seed, 0LL);
        }
      }
    }
    itemList = v8->fields.itemList;
    ++v19;
    if ( !itemList )
      goto LABEL_25;
  }
  BonusSelectSummonPartyServantListViewManager__SetMode(v8, 2, v17);
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
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  int32_t ClassId; // w0
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  BonusSelectSummonPartyServantListViewManager_c *v27; // x0
  System_Int32_array **servantSortInfoExtra2; // x1
  BonusSelectSummonPartyServantListViewManager_c *v29; // x0
  BonusSelectSummonPartyServantListViewManager_c *v30; // x0
  struct ListViewSort_o **p_sort; // x22
  System_String_array **v32; // x2
  System_String_array **v33; // x3
  System_Boolean_array **v34; // x4
  System_Int32_array **v35; // x5
  System_Int32_array *v36; // x6
  System_Int32_array *v37; // x7
  struct ListViewSort_o *v38; // x8
  int32_t sortKind; // w9
  unsigned int iconScaleKind; // w8
  System_Int32_array **normalSizeSeed; // x1
  GiftMaster_o *Master_WarQuestSelectionMaster; // x22
  DataMasterBase_WarMaster__WarEntity__int__o *v43; // x23
  GachaBonusSelectLineupEntity_array *v44; // x8
  __int64 v45; // x28
  unsigned int v46; // w21
  __int64 v47; // x24
  __int64 v48; // x8
  System_String_array **v49; // x2
  System_String_array **v50; // x3
  System_Boolean_array **v51; // x4
  System_Int32_array **v52; // x5
  System_Int32_array *v53; // x6
  System_Int32_array *v54; // x7
  System_Func_int__bool__o *v55; // x26
  struct BonusSelectSummonPartyServantSelectMenu_o *partyServantSelectMenu; // x9
  GachaBonusSelectLineupEntity_o *v57; // x26
  ServantEntity_o *v58; // x25
  BonusSelectSummonPartyOrganizationListViewItem_o *organizationItem; // x27
  char v60; // w20
  BonusSelectSummonPartyServantListViewItem_o *v61; // x24
  const MethodInfo *v62; // x6
  UILabel_o *emptyMessageLabel; // x20
  const MethodInfo *v64; // x1
  const MethodInfo *v65; // x1
  __int64 v66; // x0
  GachaBonusSelectLineupEntity_array *gachaBonusSelectLineupEntities; // [xsp+8h] [xbp-58h] BYREF

  v4 = gachaBonusSelectEntity;
  v5 = this;
  if ( (byte_4187DE7 & 1) == 0 )
  {
    sub_B2C35C(&Method_BasicHelper_Any_int____67380496, gachaBonusSelectEntity);
    sub_B2C35C(&BonusSelectSummonPartyServantListViewItem_TypeInfo, v6);
    sub_B2C35C(&BonusSelectSummonPartyServantListViewManager_TypeInfo, v7);
    sub_B2C35C(&Method_DataManager_GetMaster_GachaBonusSelectLineupMaster___, v8);
    sub_B2C35C(&Method_DataManager_GetMaster_GiftMaster___, v9);
    sub_B2C35C(&Method_DataManager_GetMaster_ServantMaster___, v10);
    sub_B2C35C(&DataManager_TypeInfo, v11);
    sub_B2C35C(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v12);
    sub_B2C35C(&Method_System_Func_int__bool___ctor__, v13);
    sub_B2C35C(&System_Func_int__bool__TypeInfo, v14);
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewItem__Add__, v15);
    sub_B2C35C(&LocalizationManager_TypeInfo, v16);
    sub_B2C35C(&Method_BonusSelectSummonPartyServantListViewManager___c__DisplayClass17_0__CreateList_b__0__, v17);
    sub_B2C35C(&BonusSelectSummonPartyServantListViewManager___c__DisplayClass17_0_TypeInfo, v18);
    this = (BonusSelectSummonPartyServantListViewManager_o *)sub_B2C35C(&StringLiteral_11892/*"SERVANT_SORT_FILTER_RESULT_EMPTY"*/, v19);
    byte_4187DE7 = 1;
  }
  gachaBonusSelectLineupEntities = 0LL;
  if ( !v4 )
    goto LABEL_59;
  ClassId = GachaBonusSelectEntity__GetClassId(v4, 1001, 0LL);
  if ( ClassId == 1005 )
  {
    v29 = BonusSelectSummonPartyServantListViewManager_TypeInfo;
    if ( (BYTE3(BonusSelectSummonPartyServantListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BonusSelectSummonPartyServantListViewManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BonusSelectSummonPartyServantListViewManager_TypeInfo);
      v29 = BonusSelectSummonPartyServantListViewManager_TypeInfo;
    }
    servantSortInfoExtra2 = (System_Int32_array **)v29->static_fields->servantSortInfoExtra2;
  }
  else if ( ClassId == 1004 )
  {
    v27 = BonusSelectSummonPartyServantListViewManager_TypeInfo;
    if ( (BYTE3(BonusSelectSummonPartyServantListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BonusSelectSummonPartyServantListViewManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BonusSelectSummonPartyServantListViewManager_TypeInfo);
      v27 = BonusSelectSummonPartyServantListViewManager_TypeInfo;
    }
    servantSortInfoExtra2 = (System_Int32_array **)v27->static_fields->servantSortInfoExtra1;
  }
  else
  {
    v30 = BonusSelectSummonPartyServantListViewManager_TypeInfo;
    if ( (BYTE3(BonusSelectSummonPartyServantListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BonusSelectSummonPartyServantListViewManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BonusSelectSummonPartyServantListViewManager_TypeInfo);
      v30 = BonusSelectSummonPartyServantListViewManager_TypeInfo;
    }
    servantSortInfoExtra2 = (System_Int32_array **)v30->static_fields->servantSortInfo;
  }
  v5->fields.sort = (struct ListViewSort_o *)servantSortInfoExtra2;
  p_sort = &v5->fields.sort;
  sub_B2C2F8((BattleServantConfConponent_o *)&v5->fields.sort, servantSortInfoExtra2, v21, v22, v23, v24, v25, v26);
  this = (BonusSelectSummonPartyServantListViewManager_o *)v5->fields.sort;
  if ( !this )
    goto LABEL_59;
  ListViewSort__Load((ListViewSort_o *)this, 0LL);
  v38 = *p_sort;
  if ( !*p_sort )
    goto LABEL_59;
  sortKind = v38->fields.sortKind;
  if ( sortKind != 4 && sortKind != 27 )
  {
    v38->fields.sortKind = 27;
    v38 = *p_sort;
    if ( !*p_sort )
      goto LABEL_59;
  }
  v38->fields.isBonusKind = 0;
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
  sub_B2C2F8((BattleServantConfConponent_o *)&v5->fields.seed, normalSizeSeed, v32, v33, v34, v35, v36, v37);
LABEL_31:
  ListViewManager__CreateList((ListViewManager_o *)v5, 0, 0LL);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (GiftMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_GiftMaster___);
  v43 = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_ServantMaster___);
  this = (BonusSelectSummonPartyServantListViewManager_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_GachaBonusSelectLineupMaster___);
  if ( !this )
    goto LABEL_59;
  this = (BonusSelectSummonPartyServantListViewManager_o *)GachaBonusSelectLineupMaster__TryGetEntityList(
                                                             (GachaBonusSelectLineupMaster_o *)this,
                                                             &gachaBonusSelectLineupEntities,
                                                             v4->fields.gachaBonusSelectLineupId,
                                                             0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v44 = gachaBonusSelectLineupEntities;
    if ( !gachaBonusSelectLineupEntities )
      goto LABEL_59;
    v45 = 4LL;
    while ( 1 )
    {
      v46 = v45 - 4;
      if ( (int)v45 - 4 >= (signed int)v44->max_length )
        break;
      v47 = sub_B2C42C(BonusSelectSummonPartyServantListViewManager___c__DisplayClass17_0_TypeInfo);
      BonusSelectSummonPartyServantListViewManager___c__DisplayClass17_0___ctor(
        (BonusSelectSummonPartyServantListViewManager___c__DisplayClass17_0_o *)v47,
        0LL);
      if ( !gachaBonusSelectLineupEntities )
        goto LABEL_59;
      if ( v46 >= gachaBonusSelectLineupEntities->max_length )
        goto LABEL_60;
      v48 = *((_QWORD *)&gachaBonusSelectLineupEntities->obj.klass + v45);
      if ( !v48 || !Master_WarQuestSelectionMaster )
        goto LABEL_59;
      this = (BonusSelectSummonPartyServantListViewManager_o *)GiftMaster__getDataById(
                                                                 Master_WarQuestSelectionMaster,
                                                                 *(_DWORD *)(v48 + 24),
                                                                 0LL);
      if ( this )
      {
        if ( !v43 )
          goto LABEL_59;
        this = (BonusSelectSummonPartyServantListViewManager_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                                                   v43,
                                                                   (int32_t)this->fields.dropObjectList,
                                                                   (const MethodInfo_24E40D0 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
        gachaBonusSelectEntity = (GachaBonusSelectEntity_o *)this;
        if ( !v47 )
          goto LABEL_59;
      }
      else
      {
        gachaBonusSelectEntity = 0LL;
        if ( !v47 )
          goto LABEL_59;
      }
      *(_QWORD *)(v47 + 16) = gachaBonusSelectEntity;
      sub_B2C2F8(
        (BattleServantConfConponent_o *)(v47 + 16),
        (System_Int32_array **)gachaBonusSelectEntity,
        v49,
        v50,
        v51,
        v52,
        v53,
        v54);
      v55 = (System_Func_int__bool__o *)sub_B2C42C(System_Func_int__bool__TypeInfo);
      System_Func_int__bool____ctor(
        v55,
        (Il2CppObject *)v47,
        Method_BonusSelectSummonPartyServantListViewManager___c__DisplayClass17_0__CreateList_b__0__,
        (const MethodInfo_270C930 *)Method_System_Func_int__bool___ctor__);
      this = (BonusSelectSummonPartyServantListViewManager_o *)BasicHelper__Any_int__24273940(
                                                                 notPossibleSvtIdList,
                                                                 (System_Func_T__bool__o *)v55,
                                                                 (const MethodInfo_1726414 *)Method_BasicHelper_Any_int____67380496);
      if ( !gachaBonusSelectLineupEntities )
        goto LABEL_59;
      if ( v46 >= gachaBonusSelectLineupEntities->max_length )
      {
LABEL_60:
        v66 = sub_B2C460(this);
        sub_B2C400(v66, 0LL);
      }
      partyServantSelectMenu = v5->fields.partyServantSelectMenu;
      if ( partyServantSelectMenu )
      {
        v57 = (GachaBonusSelectLineupEntity_o *)*((_QWORD *)&gachaBonusSelectLineupEntities->obj.klass + v45);
        v58 = *(ServantEntity_o **)(v47 + 16);
        organizationItem = partyServantSelectMenu->fields.organizationItem;
        v60 = (unsigned __int8)this ^ 1;
        v61 = (BonusSelectSummonPartyServantListViewItem_o *)sub_B2C42C(BonusSelectSummonPartyServantListViewItem_TypeInfo);
        BonusSelectSummonPartyServantListViewItem___ctor(v61, v46, v58, v57, organizationItem, v60 & 1, v62);
        this = (BonusSelectSummonPartyServantListViewManager_o *)v5->fields.itemList;
        if ( this )
        {
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)this,
            (EventMissionProgressRequest_Argument_ProgressData_o *)v61,
            (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
          v44 = gachaBonusSelectLineupEntities;
          ++v45;
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
                                                             (System_String_o *)StringLiteral_11892/*"SERVANT_SORT_FILTER_RESULT_EMPTY"*/,
                                                             0LL);
  if ( !emptyMessageLabel )
LABEL_59:
    sub_B2C434(this, gachaBonusSelectEntity);
  UILabel__set_text(emptyMessageLabel, (System_String_o *)this, 0LL);
  ListViewManager__SortItem((ListViewManager_o *)v5, -1, 0, -1, 0LL);
  BonusSelectSummonPartyServantListViewManager__SetFilterButtonImage(v5, v64);
  BonusSelectSummonPartyServantListViewManager__UpdateAscendingOrderBtnSprite(v5, v65);
}


void __fastcall BonusSelectSummonPartyServantListViewManager__DeleteContinueData(const MethodInfo *method)
{
  __int64 v1; // x1
  BonusSelectSummonPartyServantListViewManager_c *v2; // x0
  ListViewSort_o *servantSortInfo; // x0

  if ( (byte_4187DE5 & 1) == 0 )
  {
    sub_B2C35C(&BonusSelectSummonPartyServantListViewManager_TypeInfo, v1);
    byte_4187DE5 = 1;
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
    sub_B2C434(servantSortInfo, v1);
  }
  ListViewSort__DeleteContinueData(servantSortInfo, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BonusSelectSummonPartyServantListViewManager__EndSelectFilterKind(
        BonusSelectSummonPartyServantListViewManager_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  const MethodInfo *v7; // x1
  WebViewManager_o *Instance; // x0
  Il2CppObject *sort; // x21
  CommonUI_o *v10; // x19
  System_Action_o *v11; // x20
  __int64 v12; // x0
  __int64 v13; // x1

  if ( (byte_4187DF2 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, isDecide);
    sub_B2C35C(&Method_ListViewSort_Save__, v5);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    byte_4187DF2 = 1;
  }
  if ( isDecide )
  {
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
    BonusSelectSummonPartyServantListViewManager__SetFilterButtonImage(this, v7);
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  sort = (Il2CppObject *)this->fields.sort;
  v10 = (CommonUI_o *)Instance;
  v11 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(v11, sort, Method_ListViewSort_Save__, 0LL);
  if ( !v10 )
    sub_B2C434(v12, v13);
  CommonUI__CloseServantFilterSelectMenu(v10, v11, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BonusSelectSummonPartyServantListViewManager__EndShowServantStatusDialog(
        BonusSelectSummonPartyServantListViewManager_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  UIProgressBar_o *scrollBar; // x0

  if ( (byte_4187DED & 1) == 0 )
  {
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, isDecide);
    byte_4187DED = 1;
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
  scrollBar = (UIProgressBar_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !scrollBar )
LABEL_9:
    sub_B2C434(scrollBar, isDecide);
  CommonUI__CloseServantStatusDialog((CommonUI_o *)scrollBar, 0LL, 0LL);
}


System_String_o *__fastcall BonusSelectSummonPartyServantListViewManager__GetScaleButtonSpriteName(
        BonusSelectSummonPartyServantListViewManager_o *this,
        const MethodInfo *method)
{
  ListViewSort_o *sort; // x0

  sort = this->fields.sort;
  if ( !sort )
    sub_B2C434(0LL, method);
  return ListViewSort__GetScaleKindSpriteName(sort, this->fields.scaleType, 0LL);
}


void __fastcall BonusSelectSummonPartyServantListViewManager__InitLoad(const MethodInfo *method)
{
  __int64 v1; // x1
  BonusSelectSummonPartyServantListViewManager_c *v2; // x0
  ListViewSort_o *servantSortInfo; // x0

  if ( (byte_4187DE6 & 1) == 0 )
  {
    sub_B2C35C(&BonusSelectSummonPartyServantListViewManager_TypeInfo, v1);
    byte_4187DE6 = 1;
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
    sub_B2C434(servantSortInfo, v1);
  }
  ListViewSort__InitLoad(servantSortInfo, 0LL);
}


void __fastcall BonusSelectSummonPartyServantListViewManager__OnClickFilterKind(
        BonusSelectSummonPartyServantListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  _QWORD *v6; // x0
  System_Reflection_MethodBase_o *v7; // x0
  GachaBonusSelectEntity_o *gachaBonusSelectEntity; // x0
  __int64 v9; // x1
  struct BonusSelectSummonPartyServantSelectMenu_o *partyServantSelectMenu; // x8
  struct BonusSelectSummonPartyOrganizationListViewItem_o *organizationItem; // x8
  int32_t v12; // w20
  struct BonusSelectSummonPartyServantSelectMenu_o *v13; // x8
  struct BonusSelectSummonPartyOrganizationListViewItem_o *v14; // x8
  WebViewManager_o *Instance; // x0
  ListViewSort_o *sort; // x21
  CommonUI_o *v17; // x22
  ServantFilterSelectMenu_CallbackFunc_o *v18; // x23

  if ( (byte_4187DF1 & 1) == 0 )
  {
    sub_B2C35C(&Method_BonusSelectSummonPartyServantListViewManager_EndSelectFilterKind__, method);
    sub_B2C35C(&Method_BonusSelectSummonPartyServantListViewManager_OnClickFilterKind__, v3);
    sub_B2C35C(&ServantFilterSelectMenu_CallbackFunc_TypeInfo, v4);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    byte_4187DF1 = 1;
  }
  if ( this->fields.isInput )
  {
    v6 = Method_BonusSelectSummonPartyServantListViewManager_OnClickFilterKind__;
    if ( (*((_BYTE *)Method_BonusSelectSummonPartyServantListViewManager_OnClickFilterKind__ + 75) & 2) != 0 )
      v6 = (_QWORD *)sub_B2C364(Method_BonusSelectSummonPartyServantListViewManager_OnClickFilterKind__);
    v7 = (System_Reflection_MethodBase_o *)sub_B2C340(v6, v6[3]);
    OverwriteAssetSoundName__PlaySystemSe(v7, 0, 0LL);
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
            v12 = 13;
          }
          else
          {
            v13 = this->fields.partyServantSelectMenu;
            if ( !v13 )
              goto LABEL_20;
            v14 = v13->fields.organizationItem;
            if ( !v14 )
              goto LABEL_20;
            gachaBonusSelectEntity = v14->fields.gachaBonusSelectEntity;
            if ( !gachaBonusSelectEntity )
              goto LABEL_20;
            if ( GachaBonusSelectEntity__GetClassId(gachaBonusSelectEntity, 1001, 0LL) == 1005 )
              v12 = 14;
            else
              v12 = 12;
          }
          Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          sort = this->fields.sort;
          v17 = (CommonUI_o *)Instance;
          v18 = (ServantFilterSelectMenu_CallbackFunc_o *)sub_B2C42C(ServantFilterSelectMenu_CallbackFunc_TypeInfo);
          ServantFilterSelectMenu_CallbackFunc___ctor(
            v18,
            (Il2CppObject *)this,
            Method_BonusSelectSummonPartyServantListViewManager_EndSelectFilterKind__,
            0LL);
          if ( v17 )
          {
            CommonUI__OpenServantFilterSelectMenu(v17, v12, sort, v18, -1, 0LL);
            return;
          }
        }
      }
    }
LABEL_20:
    sub_B2C434(gachaBonusSelectEntity, v9);
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
  if ( (byte_4187DEB & 1) == 0 )
  {
    this = (BonusSelectSummonPartyServantListViewManager_o *)sub_B2C35C(
                                                               &Method_BonusSelectSummonPartyServantListViewManager_OnClickSelectListView__,
                                                               obj);
    byte_4187DEB = 1;
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
          v5 = (_QWORD *)sub_B2C364(Method_BonusSelectSummonPartyServantListViewManager_OnClickSelectListView__);
        v6 = (System_Reflection_MethodBase_o *)sub_B2C340(v5, v5[3]);
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
        sub_B2C434(this, obj);
      }
    }
  }
  v12 = Method_BonusSelectSummonPartyServantListViewManager_OnClickSelectListView__;
  if ( (*((_BYTE *)Method_BonusSelectSummonPartyServantListViewManager_OnClickSelectListView__ + 75) & 2) != 0 )
    v12 = (_QWORD *)sub_B2C364(Method_BonusSelectSummonPartyServantListViewManager_OnClickSelectListView__);
  v13 = (System_Reflection_MethodBase_o *)sub_B2C340(v12, v12[3]);
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

  if ( (byte_4187DF5 & 1) == 0 )
  {
    sub_B2C35C(&Method_BonusSelectSummonPartyServantListViewManager_OnClickSortAscendingOrder__, method);
    byte_4187DF5 = 1;
  }
  if ( this->fields.isInput )
  {
    v3 = Method_BonusSelectSummonPartyServantListViewManager_OnClickSortAscendingOrder__;
    if ( (*((_BYTE *)Method_BonusSelectSummonPartyServantListViewManager_OnClickSortAscendingOrder__ + 75) & 2) != 0 )
      v3 = (_QWORD *)sub_B2C364(Method_BonusSelectSummonPartyServantListViewManager_OnClickSortAscendingOrder__);
    v4 = (System_Reflection_MethodBase_o *)sub_B2C340(v3, v3[3]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
    sort = this->fields.sort;
    if ( !sort )
      sub_B2C434(v5, v6);
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

  if ( (byte_4187DF3 & 1) == 0 )
  {
    sub_B2C35C(&Method_BonusSelectSummonPartyServantListViewManager_OnClickSortKind__, method);
    byte_4187DF3 = 1;
  }
  if ( this->fields.isInput )
  {
    v3 = Method_BonusSelectSummonPartyServantListViewManager_OnClickSortKind__;
    if ( (*((_BYTE *)Method_BonusSelectSummonPartyServantListViewManager_OnClickSortKind__ + 75) & 2) != 0 )
      v3 = (_QWORD *)sub_B2C364(Method_BonusSelectSummonPartyServantListViewManager_OnClickSortKind__);
    v4 = (System_Reflection_MethodBase_o *)sub_B2C340(v3, v3[3]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
    sort = this->fields.sort;
    if ( !sort )
      sub_B2C434(v5, v6);
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
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  UIProgressBar_o *scrollBar; // x0
  _QWORD *v11; // x0
  System_Reflection_MethodBase_o *v12; // x0
  CommonUI_o *v13; // x21
  struct UnityEngine_Transform_o *thumb; // x8
  UnityEngine_Transform_c *klass; // x20
  __int64 v16; // x22
  int32_t v17; // w22
  ServantLeaderInfo_o *v18; // x20
  ServantStatusDialog_EndDelegate_o *v19; // x22
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v20; // 0:x0.16

  if ( (byte_4187DEC & 1) == 0 )
  {
    sub_B2C35C(&Method_BonusSelectSummonPartyServantListViewManager_EndShowServantStatusDialog__, obj);
    sub_B2C35C(&Method_BonusSelectSummonPartyServantListViewManager_OnLongPushListView__, v5);
    sub_B2C35C(&ServantStatusDialog_EndDelegate_TypeInfo, v6);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v7);
    sub_B2C35C(&ServantLeaderInfo_TypeInfo, v8);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v9);
    byte_4187DEC = 1;
  }
  scrollBar = (UIProgressBar_o *)this->fields.scrollBar;
  if ( !scrollBar )
    goto LABEL_14;
  this->fields.tmpScrollBarValueForLongPush = UIProgressBar__get_value(scrollBar, 0LL);
  v11 = Method_BonusSelectSummonPartyServantListViewManager_OnLongPushListView__;
  if ( (*((_BYTE *)Method_BonusSelectSummonPartyServantListViewManager_OnLongPushListView__ + 75) & 2) != 0 )
    v11 = (_QWORD *)sub_B2C364(Method_BonusSelectSummonPartyServantListViewManager_OnLongPushListView__);
  v12 = (System_Reflection_MethodBase_o *)sub_B2C340(v11, v11[3]);
  OverwriteAssetSoundName__PlaySystemSe(v12, 0, 0LL);
  scrollBar = (UIProgressBar_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !obj )
    goto LABEL_14;
  v13 = (CommonUI_o *)scrollBar;
  scrollBar = (UIProgressBar_o *)BonusSelectSummonPartyServantListViewObject__GetItem(obj, (const MethodInfo *)obj);
  if ( !scrollBar )
    goto LABEL_14;
  thumb = scrollBar[1].fields.thumb;
  if ( !thumb )
    goto LABEL_14;
  v16 = *(_QWORD *)&thumb->fields.m_CachedPtr;
  klass = thumb[1].klass;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v20.fields.currentCryptoKey = v16;
  *(_QWORD *)&v20.fields.fakeValue = klass;
  v17 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v20, 0LL);
  v18 = (ServantLeaderInfo_o *)sub_B2C42C(ServantLeaderInfo_TypeInfo);
  ServantLeaderInfo___ctor_29329736(v18, v17, 0, 1, 0LL);
  v19 = (ServantStatusDialog_EndDelegate_o *)sub_B2C42C(ServantStatusDialog_EndDelegate_TypeInfo);
  ServantStatusDialog_EndDelegate___ctor(
    v19,
    (Il2CppObject *)this,
    Method_BonusSelectSummonPartyServantListViewManager_EndShowServantStatusDialog__,
    0LL);
  if ( !v13 )
LABEL_14:
    sub_B2C434(scrollBar, obj);
  CommonUI__OpenServantStatusDialog_17984076(v13, 7, v18, v19, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BonusSelectSummonPartyServantListViewManager__RequestListObject(
        BonusSelectSummonPartyServantListViewManager_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  System_Collections_Generic_List_BonusSelectSummonPartyServantListViewObject__o *ObjectList; // x0
  __int64 v9; // x1
  __int64 v10; // x1
  const MethodInfo *v11; // x2
  System_Collections_Generic_List_Enumerator_T__o v12; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4187DE8 & 1) == 0 )
  {
    sub_B2C35C(
      &Method_System_Collections_Generic_List_Enumerator_BonusSelectSummonPartyServantListViewObject__Dispose__,
      *(_QWORD *)&mode);
    sub_B2C35C(
      &Method_System_Collections_Generic_List_Enumerator_BonusSelectSummonPartyServantListViewObject__MoveNext__,
      v5);
    sub_B2C35C(
      &Method_System_Collections_Generic_List_Enumerator_BonusSelectSummonPartyServantListViewObject__get_Current__,
      v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_BonusSelectSummonPartyServantListViewObject__GetEnumerator__, v7);
    byte_4187DE8 = 1;
  }
  memset(&v12, 0, sizeof(v12));
  ObjectList = BonusSelectSummonPartyServantListViewManager__get_ObjectList(this, *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_B2C434(0LL, v9);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v12,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)ObjectList,
    (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_BonusSelectSummonPartyServantListViewObject__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v12,
            (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_BonusSelectSummonPartyServantListViewObject__MoveNext__) )
  {
    if ( !v12.fields.current )
      sub_B2C434(0LL, v10);
    BonusSelectSummonPartyServantListViewObject__Init(
      (BonusSelectSummonPartyServantListViewObject_o *)v12.fields.current,
      mode,
      v11);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v12,
    (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_BonusSelectSummonPartyServantListViewObject__Dispose__);
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

  if ( (byte_4187DEF & 1) == 0 )
  {
    sub_B2C35C(&BonusSelectSummonPartyServantListViewManager_TypeInfo, *(_QWORD *)&scaleType);
    byte_4187DEF = 1;
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
    sub_B2C434(servantSortInfoExtra1, *(_QWORD *)&scaleType);
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

  if ( (byte_4187DF6 & 1) == 0 )
  {
    sub_B2C35C(&BonusSelectSummonPartyServantListViewManager_TypeInfo, isAscendingOrder);
    byte_4187DF6 = 1;
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
    sub_B2C434(servantSortInfoExtra1, isAscendingOrder);
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

  if ( (byte_4187DF4 & 1) == 0 )
  {
    sub_B2C35C(&BonusSelectSummonPartyServantListViewManager_TypeInfo, *(_QWORD *)&sortKind);
    byte_4187DF4 = 1;
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
    sub_B2C434(servantSortInfoExtra1, *(_QWORD *)&sortKind);
  }
  ListViewSort__SaveSortKind(servantSortInfoExtra1, 0LL);
}


void __fastcall BonusSelectSummonPartyServantListViewManager__SetFilterButtonImage(
        BonusSelectSummonPartyServantListViewManager_o *this,
        const MethodInfo *method)
{
  BonusSelectSummonPartyServantListViewManager_o *v2; // x19
  __int64 v3; // x1
  struct BonusSelectSummonPartyServantSelectMenu_o *partyServantSelectMenu; // x8
  struct BonusSelectSummonPartyOrganizationListViewItem_o *organizationItem; // x8
  struct BonusSelectSummonPartyServantSelectMenu_o *v6; // x8
  struct BonusSelectSummonPartyOrganizationListViewItem_o *v7; // x8
  UISprite_o *filterSprite; // x19
  System_String_o **v9; // x8

  v2 = this;
  if ( (byte_4187DE9 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_16993/*"btn_filter_on"*/, method);
    this = (BonusSelectSummonPartyServantListViewManager_o *)sub_B2C35C(&StringLiteral_16992/*"btn_filter"*/, v3);
    byte_4187DE9 = 1;
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
  v6 = v2->fields.partyServantSelectMenu;
  if ( !v6
    || (v7 = v6->fields.organizationItem) == 0LL
    || (this = (BonusSelectSummonPartyServantListViewManager_o *)v7->fields.gachaBonusSelectEntity) == 0LL )
  {
LABEL_19:
    sub_B2C434(this, method);
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
  v9 = (System_String_o **)&StringLiteral_16992/*"btn_filter"*/;
  if ( ((unsigned __int8)this & 1) == 0 )
    v9 = (System_String_o **)&StringLiteral_16993/*"btn_filter_on"*/;
  UISprite__set_spriteName(filterSprite, *v9, 0LL);
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
    sub_B2C434(scrollView, v5);
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
  if ( (byte_4187DF0 & 1) == 0 )
  {
    this = (BonusSelectSummonPartyServantListViewManager_o *)sub_B2C35C(
                                                               &BonusSelectSummonPartyServantListViewObject_TypeInfo,
                                                               obj);
    byte_4187DF0 = 1;
  }
  if ( !obj
    || (v6 = *(&BonusSelectSummonPartyServantListViewObject_TypeInfo->_2.bitflags2 + 1),
        *(&obj->klass->_2.bitflags2 + 1) < (unsigned int)v6)
    || (BonusSelectSummonPartyServantListViewObject_c *)obj->klass->_2.typeHierarchy[v6 - 1] != BonusSelectSummonPartyServantListViewObject_TypeInfo )
  {
    sub_B2C434(this, obj);
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
  __int64 v3; // x1
  struct ListViewSort_o *sort; // x8
  System_String_o **v5; // x8

  v2 = this;
  if ( (byte_4187DEA & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_17104/*"btn_txt_up"*/, method);
    this = (BonusSelectSummonPartyServantListViewManager_o *)sub_B2C35C(&StringLiteral_17051/*"btn_txt_down"*/, v3);
    byte_4187DEA = 1;
  }
  sort = v2->fields.sort;
  if ( !sort || (this = (BonusSelectSummonPartyServantListViewManager_o *)v2->fields.sortExplanationSprite) == 0LL )
    sub_B2C434(this, method);
  if ( sort->fields.isAscendingOrder )
    v5 = (System_String_o **)&StringLiteral_17104/*"btn_txt_up"*/;
  else
    v5 = (System_String_o **)&StringLiteral_17051/*"btn_txt_down"*/;
  UISprite__set_spriteName((UISprite_o *)this, *v5, 0LL);
}


System_Collections_Generic_List_BonusSelectSummonPartyServantListViewObject__o *__fastcall BonusSelectSummonPartyServantListViewManager__get_ObjectList(
        BonusSelectSummonPartyServantListViewManager_o *this,
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

  if ( (byte_4187DF7 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v3);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v4);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_BonusSelectSummonPartyServantListViewObject___, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_BonusSelectSummonPartyServantListViewObject__Add__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_BonusSelectSummonPartyServantListViewObject___ctor__, v8);
    sub_B2C35C(&System_Collections_Generic_List_BonusSelectSummonPartyServantListViewObject__TypeInfo, v9);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v10);
    byte_4187DF7 = 1;
  }
  memset(&v20, 0, sizeof(v20));
  v11 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_BonusSelectSummonPartyServantListViewObject__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v11,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_BonusSelectSummonPartyServantListViewObject___ctor__);
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
                                                                                         (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_BonusSelectSummonPartyServantListViewObject___);
      if ( !v11 )
        sub_B2C434(Component_srcLineSprite, Component_srcLineSprite);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v11,
        Component_srcLineSprite,
        (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_BonusSelectSummonPartyServantListViewObject__Add__);
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v20,
    (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_BonusSelectSummonPartyServantListViewObject__o *)v11;
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
  sub_B2C2F8(p_method, object);
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
  __int64 v9; // x1
  __int64 v11[3]; // [xsp+0h] [xbp-40h] BYREF
  int32_t v12; // [xsp+18h] [xbp-28h] BYREF
  int32_t v13; // [xsp+1Ch] [xbp-24h] BYREF

  v12 = result;
  v13 = kind;
  if ( (byte_4184EA4 & 1) == 0 )
  {
    sub_B2C35C(&int_TypeInfo, *(_QWORD *)&kind);
    sub_B2C35C(&BonusSelectSummonPartyServantListViewManager_ResultKind_TypeInfo, v9);
    byte_4184EA4 = 1;
  }
  v11[2] = 0LL;
  v11[0] = j_il2cpp_value_box_0(BonusSelectSummonPartyServantListViewManager_ResultKind_TypeInfo, &v13);
  v11[1] = j_il2cpp_value_box_0(int_TypeInfo, &v12);
  return (System_IAsyncResult_o *)sub_B2C300(this, v11, callback, object);
}


void __fastcall BonusSelectSummonPartyServantListViewManager_CallbackFunc__EndInvoke(
        BonusSelectSummonPartyServantListViewManager_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B2C304(result, 0LL, method);
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
  __int64 v12; // x3
  __int64 v13; // x8
  unsigned int v14; // w23
  unsigned __int64 v15; // x10
  _DWORD *v16; // x11
  __int64 v17; // x0
  __int64 v18; // x0
  __int64 v19; // x0
  void (__fastcall **v20)(__int64 *, _QWORD, _QWORD, _QWORD); // x0
  BonusSelectSummonPartyServantListViewManager_CallbackFunc_o *v21; // x8
  __int64 *v22; // x22
  __int64 v23; // x23
  void (__fastcall *v24)(unsigned int *, _QWORD, __int64); // x24
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
  BonusSelectSummonPartyServantListViewManager_CallbackFunc_o *v35; // [xsp+18h] [xbp-48h] BYREF

  v35 = this;
  v34 = kind;
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
    v8 = (BonusSelectSummonPartyServantListViewManager_CallbackFunc_o **)(v4 + 32);
LABEL_5:
    v9 = 0LL;
    while ( 1 )
    {
      v21 = v8[v9];
      v22 = *(__int64 **)&v21->fields.method;
      v23 = *(_QWORD *)&v21->fields.extra_arg;
      v24 = *(void (__fastcall **)(unsigned int *, _QWORD, __int64))&v21->fields.method_ptr;
      if ( *(__int16 *)(v23 + 72) == -1 )
        sub_B2C418(*(_QWORD *)&v21->fields.extra_arg, *(_QWORD *)&kind, *(_QWORD *)&result, method);
      if ( (sub_B2C38C(v23) & 1) == 0 )
        break;
      if ( *(_BYTE *)(v23 + 74) != 2 )
        goto LABEL_36;
      v24((unsigned int *)v34, (unsigned int)result, v23);
LABEL_38:
      if ( ++v9 == v7 )
        return;
    }
    if ( !v22 )
    {
      v24(&v34 - 4, (unsigned int)result, v23);
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
        v20 = (void (__fastcall **)(__int64 *, _QWORD, _QWORD, _QWORD))sub_B2C40C(v18, v23);
        (*v20)(v22, v28, (unsigned int)result, v20);
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
          (*(void (__fastcall **)(__int64 *, _QWORD, _QWORD, _QWORD))v17)(
            v22,
            v14,
            (unsigned int)result,
            *(_QWORD *)(v17 + 8));
        }
        else
        {
          (*(void (__fastcall **)(__int64 *, _QWORD, _QWORD, _QWORD))(*v22 + 16LL * *(unsigned __int16 *)(v23 + 72) + 312))(
            v22,
            v34,
            (unsigned int)result,
            *(_QWORD *)(*v22 + 16LL * *(unsigned __int16 *)(v23 + 72) + 320));
        }
      }
      goto LABEL_38;
    }
LABEL_36:
    ((void (__fastcall *)(__int64 *, _QWORD, _QWORD, __int64))v24)(v22, v34, (unsigned int)result, v23);
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
  if ( (byte_4184EA3 & 1) == 0 )
  {
    this = (BonusSelectSummonPartyServantListViewManager___c__DisplayClass17_0_o *)sub_B2C35C(
                                                                                     &CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo,
                                                                                     *(_QWORD *)&id);
    byte_4184EA3 = 1;
  }
  servantEntity = v4->fields.servantEntity;
  if ( !servantEntity )
    sub_B2C434(this, *(_QWORD *)&id);
  v7 = *(_QWORD *)&servantEntity->fields.id.fields.currentCryptoKey;
  v6 = *(_QWORD *)&servantEntity->fields.id.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v9.fields.currentCryptoKey = v7;
  *(_QWORD *)&v9.fields.fakeValue = v6;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v9, 0LL) == id;
}