void BonusSelectSummonPartyServantListViewManager___cctor(const MethodInfo *method)
{
  int32_t v1; // w2
  const MethodInfo *v2; // x3
  int32_t v3; // w1
  struct BonusSelectSummonPartyServantListViewManager_StaticFields *static_fields; // x0
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  int32_t v7; // w1
  struct BonusSelectSummonPartyServantListViewManager_StaticFields *v8; // x0
  int32_t v9; // w2
  const MethodInfo *v10; // x3

  if ( (byte_4C531B3 & 1) == 0 )
  {
    sub_1C3E564(&BonusSelectSummonPartyServantListViewManager_TypeInfo);
    sub_1C3E564(&StringLiteral_3207/*"BonusSelectSummonPartyServant_Extra2_{0}"*/);
    sub_1C3E564(&StringLiteral_3208/*"BonusSelectSummonPartyServant_{0}"*/);
    sub_1C3E564(&StringLiteral_3206/*"BonusSelectSummonPartyServant_Extra1_{0}"*/);
    byte_4C531B3 = 1;
  }
  BonusSelectSummonPartyServantListViewManager_TypeInfo->static_fields->SORT_SAVE_KEY_FORMAT = (struct System_String_o *)StringLiteral_3208/*"BonusSelectSummonPartyServant_{0}"*/;
  sub_1C3E508(
    (CGThumbnailListItem_o *)BonusSelectSummonPartyServantListViewManager_TypeInfo->static_fields,
    StringLiteral_3208/*"BonusSelectSummonPartyServant_{0}"*/,
    v1,
    v2);
  v3 = StringLiteral_3206/*"BonusSelectSummonPartyServant_Extra1_{0}"*/;
  static_fields = BonusSelectSummonPartyServantListViewManager_TypeInfo->static_fields;
  static_fields->SORT_SAVE_KEY_FORMAT_EX1 = (struct System_String_o *)StringLiteral_3206/*"BonusSelectSummonPartyServant_Extra1_{0}"*/;
  sub_1C3E508((CGThumbnailListItem_o *)&static_fields->SORT_SAVE_KEY_FORMAT_EX1, v3, v5, v6);
  v7 = StringLiteral_3207/*"BonusSelectSummonPartyServant_Extra2_{0}"*/;
  v8 = BonusSelectSummonPartyServantListViewManager_TypeInfo->static_fields;
  v8->SORT_SAVE_KEY_FORMAT_EX2 = (struct System_String_o *)StringLiteral_3207/*"BonusSelectSummonPartyServant_Extra2_{0}"*/;
  sub_1C3E508((CGThumbnailListItem_o *)&v8->SORT_SAVE_KEY_FORMAT_EX2, v7, v9, v10);
}


void BonusSelectSummonPartyServantListViewManager___ctor(
        BonusSelectSummonPartyServantListViewManager_o *this,
        const MethodInfo *method)
{
  this->fields.SCROLLBAR_UNEXPECTED_AUTOMOVE_DIFF_THRESHOLD = 0.001;
  ListViewManager___ctor((ListViewManager_o *)this, 0);
}


void BonusSelectSummonPartyServantListViewManager__Awake(
        BonusSelectSummonPartyServantListViewManager_o *this,
        const MethodInfo *method)
{
  ;
}


void BonusSelectSummonPartyServantListViewManager__ChangeIconScale(
        BonusSelectSummonPartyServantListViewManager_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  const MethodInfo *v3; // x3
  BonusSelectSummonPartyServantListViewManager_o *v4; // x19
  unsigned int scaleType; // w8
  struct ListViewItemSeed_o *smallSizeSeed; // x1
  BonusSelectSummonPartyServantListViewManager_o *v7; // x0
  int v8; // w8
  struct ListViewItemSeed_o **p_seed; // x0
  __int64 v10; // x1
  const MethodInfo *v11; // x2
  System_Collections_Generic_List_object__o *itemList; // x0
  int32_t v13; // w20
  Il2CppObject *Item; // x0
  ListViewItem_o *v15; // x21
  __int64 naturalAligment; // x10
  UnityEngine_Object_o *klass; // x22

  v4 = this;
  if ( (byte_4C531A8 & 1) == 0 )
  {
    sub_1C3E564(&BonusSelectSummonPartyServantListViewItem_TypeInfo);
    sub_1C3E564(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_1C3E564(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    this = (BonusSelectSummonPartyServantListViewManager_o *)sub_1C3E564(&UnityEngine_Object_TypeInfo);
    byte_4C531A8 = 1;
  }
  scaleType = v4->fields.scaleType;
  if ( scaleType < 2 )
  {
    smallSizeSeed = v4->fields.smallSizeSeed;
    v7 = v4;
    v8 = 2;
  }
  else if ( scaleType == 2 )
  {
    smallSizeSeed = v4->fields.extremelySmallSizeSeed;
    v7 = v4;
    v8 = 3;
  }
  else
  {
    if ( scaleType != 3 )
      goto LABEL_10;
    smallSizeSeed = v4->fields.normalSizeSeed;
    v7 = v4;
    v8 = 1;
  }
  v7->fields.seed = smallSizeSeed;
  p_seed = &v7->fields.seed;
  *((_DWORD *)p_seed + 70) = v8;
  sub_1C3E508((CGThumbnailListItem_o *)p_seed, (int32_t)smallSizeSeed, (int32_t)v2, v3);
LABEL_10:
  BonusSelectSummonPartyServantListViewManager__SetAndSaveIconScaleType(this, v4->fields.scaleType, v2);
  itemList = (System_Collections_Generic_List_object__o *)v4->fields.itemList;
  if ( !itemList )
LABEL_22:
    sub_1C3E7C0(itemList, v10);
  v13 = 0;
  while ( v13 < itemList->fields._size )
  {
    Item = System_Collections_Generic_List_object___get_Item(
             itemList,
             v13,
             (const MethodInfo_37B5190 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    if ( Item )
    {
      v15 = (ListViewItem_o *)Item;
      naturalAligment = BonusSelectSummonPartyServantListViewItem_TypeInfo->_2.naturalAligment;
      if ( Item->klass->_2.naturalAligment >= (unsigned int)naturalAligment
        && (BonusSelectSummonPartyServantListViewItem_c *)Item->klass->_2.typeHierarchy[naturalAligment - 1] == BonusSelectSummonPartyServantListViewItem_TypeInfo )
      {
        klass = (UnityEngine_Object_o *)Item[7].klass;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( !UnityEngine_Object__op_Equality(klass, 0, 0) )
        {
          itemList = (System_Collections_Generic_List_object__o *)v15->fields.viewObject;
          if ( !itemList )
            goto LABEL_22;
          ListViewObject__SetItemSeed((ListViewObject_o *)itemList, v15, v4->fields.seed, 0);
        }
      }
    }
    itemList = (System_Collections_Generic_List_object__o *)v4->fields.itemList;
    ++v13;
    if ( !itemList )
      goto LABEL_22;
  }
  BonusSelectSummonPartyServantListViewManager__SetMode(v4, 2, v11);
  ListViewManager__SortItem((ListViewManager_o *)v4, -1, 0, -1, 0);
}


void BonusSelectSummonPartyServantListViewManager__CheckAssert(
        BonusSelectSummonPartyServantListViewManager_o *this,
        const MethodInfo *method)
{
  ;
}


void BonusSelectSummonPartyServantListViewManager__CreateList(
        BonusSelectSummonPartyServantListViewManager_o *this,
        GachaBonusSelectEntity_o *gachaBonusSelectEntity,
        System_Int32_array *notPossibleSvtIdList,
        const MethodInfo *method)
{
  BonusSelectSummonPartyServantListViewManager_c *v6; // x0
  void *sort; // x0
  const MethodInfo *v8; // x1
  int32_t ClassId; // w0
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  BonusSelectSummonPartyServantListViewManager_c *v12; // x0
  struct ListViewSort_o *servantSortInfoExtra2; // x1
  BonusSelectSummonPartyServantListViewManager_c *v14; // x0
  BonusSelectSummonPartyServantListViewManager_c *v15; // x0
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  struct ListViewSort_o *v18; // x8
  int32_t sortKind; // w9
  unsigned int iconScaleKind; // w9
  struct ListViewItemSeed_o *normalSizeSeed; // x1
  Il2CppObject *Master_object; // x22
  Il2CppObject *v23; // x23
  GachaBonusSelectLineupEntity_array *v24; // x8
  __int64 v25; // x28
  unsigned int v26; // w21
  __int64 v27; // x24
  __int64 v28; // x8
  int32_t v29; // w2
  const MethodInfo *v30; // x3
  System_Func_int__bool__o *v31; // x26
  struct BonusSelectSummonPartyServantSelectMenu_o *partyServantSelectMenu; // x9
  GachaBonusSelectLineupEntity_o *v33; // x26
  ServantEntity_o *v34; // x25
  BonusSelectSummonPartyOrganizationListViewItem_o *organizationItem; // x27
  char v36; // w29
  BonusSelectSummonPartyServantListViewItem_o *v37; // x24
  const MethodInfo *v38; // x6
  int32_t v39; // w2
  const MethodInfo *v40; // x3
  __int64 v41; // x8
  _QWORD *v42; // x9
  __int64 v43; // x10
  __int64 v44; // x8
  UILabel_o *emptyMessageLabel; // x20
  const MethodInfo *v46; // x1
  const MethodInfo *v47; // x1
  GachaBonusSelectLineupEntity_array *gachaBonusSelectLineupEntities; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4C531A1 & 1) == 0 )
  {
    sub_1C3E564(&Method_BasicHelper_Any_int____78187928);
    sub_1C3E564(&BonusSelectSummonPartyServantListViewItem_TypeInfo);
    sub_1C3E564(&BonusSelectSummonPartyServantListViewManager_TypeInfo);
    sub_1C3E564(&Method_DataManager_GetMaster_GachaBonusSelectLineupMaster___);
    sub_1C3E564(&Method_DataManager_GetMaster_GiftMaster___);
    sub_1C3E564(&Method_DataManager_GetMaster_ServantMaster___);
    sub_1C3E564(&DataManager_TypeInfo);
    sub_1C3E564(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C3E564(&System_Func_int__bool__TypeInfo);
    sub_1C3E564(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    sub_1C3E564(&LocalizationManager_TypeInfo);
    sub_1C3E564(&Method_BonusSelectSummonPartyServantListViewManager___c__DisplayClass19_0__CreateList_b__0__);
    sub_1C3E564(&BonusSelectSummonPartyServantListViewManager___c__DisplayClass19_0_TypeInfo);
    sub_1C3E564(&StringLiteral_11810/*"SERVANT_SORT_FILTER_RESULT_EMPTY"*/);
    byte_4C531A1 = 1;
  }
  v6 = BonusSelectSummonPartyServantListViewManager_TypeInfo;
  gachaBonusSelectLineupEntities = 0;
  if ( !BonusSelectSummonPartyServantListViewManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BonusSelectSummonPartyServantListViewManager_TypeInfo);
  BonusSelectSummonPartyServantListViewManager__DeleteContinueData((const MethodInfo *)v6);
  if ( !gachaBonusSelectEntity )
    goto LABEL_59;
  BonusSelectSummonPartyServantListViewManager__CreateSortData(gachaBonusSelectEntity->fields.gachaId, v8);
  ClassId = GachaBonusSelectEntity__GetClassId(gachaBonusSelectEntity, 1001, 0);
  if ( ClassId == 1005 )
  {
    v14 = BonusSelectSummonPartyServantListViewManager_TypeInfo;
    if ( !BonusSelectSummonPartyServantListViewManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BonusSelectSummonPartyServantListViewManager_TypeInfo);
      v14 = BonusSelectSummonPartyServantListViewManager_TypeInfo;
    }
    servantSortInfoExtra2 = v14->static_fields->servantSortInfoExtra2;
  }
  else if ( ClassId == 1004 )
  {
    v12 = BonusSelectSummonPartyServantListViewManager_TypeInfo;
    if ( !BonusSelectSummonPartyServantListViewManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BonusSelectSummonPartyServantListViewManager_TypeInfo);
      v12 = BonusSelectSummonPartyServantListViewManager_TypeInfo;
    }
    servantSortInfoExtra2 = v12->static_fields->servantSortInfoExtra1;
  }
  else
  {
    v15 = BonusSelectSummonPartyServantListViewManager_TypeInfo;
    if ( !BonusSelectSummonPartyServantListViewManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BonusSelectSummonPartyServantListViewManager_TypeInfo);
      v15 = BonusSelectSummonPartyServantListViewManager_TypeInfo;
    }
    servantSortInfoExtra2 = v15->static_fields->servantSortInfo;
  }
  this->fields.sort = servantSortInfoExtra2;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.sort, (int32_t)servantSortInfoExtra2, v10, v11);
  sort = this->fields.sort;
  if ( !sort )
    goto LABEL_59;
  ListViewSort__Load((ListViewSort_o *)sort, 0);
  v18 = this->fields.sort;
  if ( !v18 )
    goto LABEL_59;
  sortKind = v18->fields.sortKind;
  if ( sortKind != 4 && sortKind != 27 )
    v18->fields.sortKind = 27;
  iconScaleKind = v18->fields.iconScaleKind;
  v18->fields.isBonusKind = 0;
  this->fields.scaleType = iconScaleKind;
  if ( iconScaleKind < 2 )
  {
    normalSizeSeed = this->fields.normalSizeSeed;
    goto LABEL_28;
  }
  if ( iconScaleKind == 2 )
  {
    normalSizeSeed = this->fields.smallSizeSeed;
    goto LABEL_28;
  }
  if ( iconScaleKind == 3 )
  {
    normalSizeSeed = this->fields.extremelySmallSizeSeed;
LABEL_28:
    this->fields.seed = normalSizeSeed;
    sub_1C3E508((CGThumbnailListItem_o *)&this->fields.seed, (int32_t)normalSizeSeed, v16, v17);
  }
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30F9A1C *)Method_DataManager_GetMaster_GiftMaster___);
  v23 = DataManager__GetMaster_object_((const MethodInfo_30F9A1C *)Method_DataManager_GetMaster_ServantMaster___);
  sort = DataManager__GetMaster_object_((const MethodInfo_30F9A1C *)Method_DataManager_GetMaster_GachaBonusSelectLineupMaster___);
  if ( !sort )
    goto LABEL_59;
  sort = (void *)GachaBonusSelectLineupMaster__TryGetEntityList(
                   (GachaBonusSelectLineupMaster_o *)sort,
                   &gachaBonusSelectLineupEntities,
                   gachaBonusSelectEntity->fields.gachaBonusSelectLineupId,
                   0);
  if ( ((unsigned __int8)sort & 1) != 0 )
  {
    v24 = gachaBonusSelectLineupEntities;
    if ( !gachaBonusSelectLineupEntities )
      goto LABEL_59;
    v25 = 4;
    while ( 1 )
    {
      v26 = v25 - 4;
      if ( (int)v25 - 4 >= SLODWORD(v24->max_length) )
        break;
      v27 = sub_1C3E7B0(BonusSelectSummonPartyServantListViewManager___c__DisplayClass19_0_TypeInfo);
      System_Object___ctor((Il2CppObject *)v27, 0);
      if ( !gachaBonusSelectLineupEntities )
        goto LABEL_59;
      if ( v26 >= LODWORD(gachaBonusSelectLineupEntities->max_length) )
        goto LABEL_60;
      v28 = *((_QWORD *)&gachaBonusSelectLineupEntities->obj.klass + v25);
      if ( !v28 || !Master_object )
        goto LABEL_59;
      sort = GiftMaster__getDataById((GiftMaster_o *)Master_object, *(_DWORD *)(v28 + 24), 0);
      if ( sort )
      {
        if ( !v23 )
          goto LABEL_59;
        sort = DataMasterBase_object__object__int___GetEntity(
                 (DataMasterBase_TMaster__TEntity__PKType__o *)v23,
                 *((_DWORD *)sort + 6),
                 (const MethodInfo_33B2F58 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
        v8 = (const MethodInfo *)sort;
        if ( !v27 )
          goto LABEL_59;
      }
      else
      {
        v8 = 0;
        if ( !v27 )
          goto LABEL_59;
      }
      *(_QWORD *)(v27 + 16) = v8;
      sub_1C3E508((CGThumbnailListItem_o *)(v27 + 16), (int32_t)v8, v29, v30);
      v31 = (System_Func_int__bool__o *)sub_1C3E7B0(System_Func_int__bool__TypeInfo);
      System_Func_int__bool____ctor(
        v31,
        (Il2CppObject *)v27,
        Method_BonusSelectSummonPartyServantListViewManager___c__DisplayClass19_0__CreateList_b__0__,
        0);
      sort = (void *)BasicHelper__Any_int__51260304(
                       notPossibleSvtIdList,
                       (System_Func_T__bool__o *)v31,
                       (const MethodInfo_30E2B90 *)Method_BasicHelper_Any_int____78187928);
      if ( !gachaBonusSelectLineupEntities )
        goto LABEL_59;
      if ( v26 >= LODWORD(gachaBonusSelectLineupEntities->max_length) )
LABEL_60:
        sub_1C3E7C8(sort, v8);
      partyServantSelectMenu = this->fields.partyServantSelectMenu;
      if ( partyServantSelectMenu )
      {
        v33 = (GachaBonusSelectLineupEntity_o *)*((_QWORD *)&gachaBonusSelectLineupEntities->obj.klass + v25);
        v34 = *(ServantEntity_o **)(v27 + 16);
        organizationItem = partyServantSelectMenu->fields.organizationItem;
        v36 = (unsigned __int8)sort ^ 1;
        v37 = (BonusSelectSummonPartyServantListViewItem_o *)sub_1C3E7B0(BonusSelectSummonPartyServantListViewItem_TypeInfo);
        BonusSelectSummonPartyServantListViewItem___ctor(v37, v26, v34, v33, organizationItem, v36 & 1, v38);
        sort = this->fields.itemList;
        if ( sort )
        {
          v41 = *((_QWORD *)sort + 2);
          v42 = Method_System_Collections_Generic_List_ListViewItem__Add__;
          ++*((_DWORD *)sort + 7);
          if ( v41 )
          {
            v43 = *((int *)sort + 6);
            if ( (unsigned int)v43 >= *(_DWORD *)(v41 + 24) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                (System_Collections_Generic_List_object__o *)sort,
                (Il2CppObject *)v37,
                *(const MethodInfo_37B5460 **)(*(_QWORD *)(v42[4] + 192LL) + 112LL));
            }
            else
            {
              v44 = v41 + 8 * v43;
              *((_DWORD *)sort + 6) = v43 + 1;
              *(_QWORD *)(v44 + 32) = v37;
              sub_1C3E508((CGThumbnailListItem_o *)(v44 + 32), (int32_t)v37, v39, v40);
            }
            v24 = gachaBonusSelectLineupEntities;
            ++v25;
            if ( gachaBonusSelectLineupEntities )
              continue;
          }
        }
      }
      goto LABEL_59;
    }
  }
  emptyMessageLabel = this->fields.emptyMessageLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  sort = LocalizationManager__Get((System_String_o *)StringLiteral_11810/*"SERVANT_SORT_FILTER_RESULT_EMPTY"*/, 0);
  if ( !emptyMessageLabel )
LABEL_59:
    sub_1C3E7C0(sort, v8);
  UILabel__set_text(emptyMessageLabel, (System_String_o *)sort, 0);
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0);
  BonusSelectSummonPartyServantListViewManager__SetFilterButtonImage(this, v46);
  BonusSelectSummonPartyServantListViewManager__UpdateAscendingOrderBtnSprite(this, v47);
}


void BonusSelectSummonPartyServantListViewManager__CreateSortData(int32_t gachaId, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v5; // x5
  __int64 v6; // x6
  __int64 v7; // x7
  BonusSelectSummonPartyServantListViewManager_c *v9; // x0
  System_String_o *SORT_SAVE_KEY_FORMAT; // x20
  Il2CppObject *v11; // x0
  System_String_o *v12; // x20
  ListViewSort_o *v13; // x21
  struct BonusSelectSummonPartyServantListViewManager_StaticFields *static_fields; // x0
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  System_String_o *SORT_SAVE_KEY_FORMAT_EX1; // x20
  __int64 v18; // x2
  __int64 v19; // x3
  __int64 v20; // x4
  __int64 v21; // x5
  __int64 v22; // x6
  __int64 v23; // x7
  Il2CppObject *v24; // x0
  System_String_o *v25; // x20
  ListViewSort_o *v26; // x21
  struct BonusSelectSummonPartyServantListViewManager_StaticFields *v27; // x0
  int32_t v28; // w2
  const MethodInfo *v29; // x3
  System_String_o *SORT_SAVE_KEY_FORMAT_EX2; // x20
  __int64 v31; // x2
  __int64 v32; // x3
  __int64 v33; // x4
  __int64 v34; // x5
  __int64 v35; // x6
  __int64 v36; // x7
  Il2CppObject *v37; // x0
  System_String_o *v38; // x19
  ListViewSort_o *v39; // x20
  struct BonusSelectSummonPartyServantListViewManager_StaticFields *v40; // x0
  int32_t v41; // w2
  const MethodInfo *v42; // x3
  int32_t v43; // [xsp+Ch] [xbp-44h] BYREF
  int32_t v44; // [xsp+18h] [xbp-38h] BYREF
  int32_t v45; // [xsp+1Ch] [xbp-34h] BYREF

  if ( (byte_4C5319F & 1) == 0 )
  {
    sub_1C3E564(&BonusSelectSummonPartyServantListViewManager_TypeInfo);
    sub_1C3E564(&int_TypeInfo);
    sub_1C3E564(&ListViewSort_TypeInfo);
    byte_4C5319F = 1;
  }
  v9 = BonusSelectSummonPartyServantListViewManager_TypeInfo;
  if ( !BonusSelectSummonPartyServantListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BonusSelectSummonPartyServantListViewManager_TypeInfo);
    v9 = BonusSelectSummonPartyServantListViewManager_TypeInfo;
  }
  SORT_SAVE_KEY_FORMAT = v9->static_fields->SORT_SAVE_KEY_FORMAT;
  v45 = gachaId;
  v11 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v45, v2, v3, v4, v5, v6, v7);
  v12 = System_String__Format(SORT_SAVE_KEY_FORMAT, v11, 0);
  v13 = (ListViewSort_o *)sub_1C3E7B0(ListViewSort_TypeInfo);
  ListViewSort___ctor_43894048(v13, v12, 27, 0, 0);
  static_fields = BonusSelectSummonPartyServantListViewManager_TypeInfo->static_fields;
  static_fields->servantSortInfo = v13;
  sub_1C3E508((CGThumbnailListItem_o *)&static_fields->servantSortInfo, (int32_t)v13, v15, v16);
  SORT_SAVE_KEY_FORMAT_EX1 = BonusSelectSummonPartyServantListViewManager_TypeInfo->static_fields->SORT_SAVE_KEY_FORMAT_EX1;
  v44 = gachaId;
  v24 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v44, v18, v19, v20, v21, v22, v23);
  v25 = System_String__Format(SORT_SAVE_KEY_FORMAT_EX1, v24, 0);
  v26 = (ListViewSort_o *)sub_1C3E7B0(ListViewSort_TypeInfo);
  ListViewSort___ctor_43894048(v26, v25, 27, 0, 0);
  v27 = BonusSelectSummonPartyServantListViewManager_TypeInfo->static_fields;
  v27->servantSortInfoExtra1 = v26;
  sub_1C3E508((CGThumbnailListItem_o *)&v27->servantSortInfoExtra1, (int32_t)v26, v28, v29);
  SORT_SAVE_KEY_FORMAT_EX2 = BonusSelectSummonPartyServantListViewManager_TypeInfo->static_fields->SORT_SAVE_KEY_FORMAT_EX2;
  v43 = gachaId;
  v37 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v43, v31, v32, v33, v34, v35, v36);
  v38 = System_String__Format(SORT_SAVE_KEY_FORMAT_EX2, v37, 0);
  v39 = (ListViewSort_o *)sub_1C3E7B0(ListViewSort_TypeInfo);
  ListViewSort___ctor_43894048(v39, v38, 27, 0, 0);
  v40 = BonusSelectSummonPartyServantListViewManager_TypeInfo->static_fields;
  v40->servantSortInfoExtra2 = v39;
  sub_1C3E508((CGThumbnailListItem_o *)&v40->servantSortInfoExtra2, (int32_t)v39, v41, v42);
}


void BonusSelectSummonPartyServantListViewManager__DeleteContinueData(const MethodInfo *method)
{
  System_Int32_array *Master_object; // x0
  __int64 v2; // x1
  __int64 v3; // x2
  __int64 v4; // x3
  __int64 v5; // x4
  __int64 v6; // x5
  __int64 v7; // x6
  __int64 v8; // x7
  il2cpp_array_size_t max_length; // x8
  System_Int32_array *v10; // x19
  unsigned __int64 v11; // x24
  BonusSelectSummonPartyServantListViewManager_c *v12; // x0
  int32_t v13; // w23
  System_String_o *SORT_SAVE_KEY_FORMAT; // x20
  Il2CppObject *v15; // x0
  System_String_o *v16; // x21
  ListViewSort_o *v17; // x20
  System_String_o *SORT_SAVE_KEY_FORMAT_EX1; // x21
  __int64 v19; // x2
  __int64 v20; // x3
  __int64 v21; // x4
  __int64 v22; // x5
  __int64 v23; // x6
  __int64 v24; // x7
  Il2CppObject *v25; // x0
  System_String_o *v26; // x22
  ListViewSort_o *v27; // x21
  System_String_o *SORT_SAVE_KEY_FORMAT_EX2; // x22
  __int64 v29; // x2
  __int64 v30; // x3
  __int64 v31; // x4
  __int64 v32; // x5
  __int64 v33; // x6
  __int64 v34; // x7
  Il2CppObject *v35; // x0
  System_String_o *v36; // x23
  ListViewSort_o *v37; // x22
  int32_t v38; // [xsp+Ch] [xbp-64h] BYREF
  int32_t v39; // [xsp+18h] [xbp-58h] BYREF
  int32_t v40; // [xsp+1Ch] [xbp-54h] BYREF

  if ( (byte_4C531A0 & 1) == 0 )
  {
    sub_1C3E564(&BonusSelectSummonPartyServantListViewManager_TypeInfo);
    sub_1C3E564(&Method_DataManager_GetMaster_GachaMaster___);
    sub_1C3E564(&DataManager_TypeInfo);
    sub_1C3E564(&int_TypeInfo);
    sub_1C3E564(&ListViewSort_TypeInfo);
    byte_4C531A0 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (System_Int32_array *)DataManager__GetMaster_object_((const MethodInfo_30F9A1C *)Method_DataManager_GetMaster_GachaMaster___);
  if ( !Master_object )
    goto LABEL_17;
  Master_object = GachaMaster__GetClosedBonusSelectGachaIdList((GachaMaster_o *)Master_object, 0);
  if ( !Master_object )
    goto LABEL_17;
  max_length = Master_object->max_length;
  v10 = Master_object;
  if ( (int)max_length >= 1 )
  {
    v11 = 0;
    while ( 1 )
    {
      if ( v11 >= (unsigned int)max_length )
        sub_1C3E7C8(Master_object, v2);
      v12 = BonusSelectSummonPartyServantListViewManager_TypeInfo;
      v13 = v10->m_Items[v11];
      if ( !BonusSelectSummonPartyServantListViewManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BonusSelectSummonPartyServantListViewManager_TypeInfo);
        v12 = BonusSelectSummonPartyServantListViewManager_TypeInfo;
      }
      SORT_SAVE_KEY_FORMAT = v12->static_fields->SORT_SAVE_KEY_FORMAT;
      v40 = v13;
      v15 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v40, v3, v4, v5, v6, v7, v8);
      v16 = System_String__Format(SORT_SAVE_KEY_FORMAT, v15, 0);
      v17 = (ListViewSort_o *)sub_1C3E7B0(ListViewSort_TypeInfo);
      ListViewSort___ctor_43894048(v17, v16, 27, 0, 0);
      SORT_SAVE_KEY_FORMAT_EX1 = BonusSelectSummonPartyServantListViewManager_TypeInfo->static_fields->SORT_SAVE_KEY_FORMAT_EX1;
      v39 = v13;
      v25 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v39, v19, v20, v21, v22, v23, v24);
      v26 = System_String__Format(SORT_SAVE_KEY_FORMAT_EX1, v25, 0);
      v27 = (ListViewSort_o *)sub_1C3E7B0(ListViewSort_TypeInfo);
      ListViewSort___ctor_43894048(v27, v26, 27, 0, 0);
      SORT_SAVE_KEY_FORMAT_EX2 = BonusSelectSummonPartyServantListViewManager_TypeInfo->static_fields->SORT_SAVE_KEY_FORMAT_EX2;
      v38 = v13;
      v35 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v38, v29, v30, v31, v32, v33, v34);
      v36 = System_String__Format(SORT_SAVE_KEY_FORMAT_EX2, v35, 0);
      v37 = (ListViewSort_o *)sub_1C3E7B0(ListViewSort_TypeInfo);
      ListViewSort___ctor_43894048(v37, v36, 27, 0, 0);
      if ( !v17 )
        break;
      ListViewSort__DeleteContinueData(v17, 0);
      if ( !v27 )
        break;
      ListViewSort__DeleteContinueData(v27, 0);
      if ( !v37 )
        break;
      ListViewSort__DeleteContinueData(v37, 0);
      LODWORD(max_length) = v10->max_length;
      if ( (__int64)++v11 >= (int)max_length )
        return;
    }
LABEL_17:
    sub_1C3E7C0(Master_object, v2);
  }
}


void BonusSelectSummonPartyServantListViewManager__EndSelectFilterKind(
        BonusSelectSummonPartyServantListViewManager_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x1
  Il2CppObject *Instance; // x0
  Il2CppObject *sort; // x21
  CommonUI_o *v8; // x19
  System_Action_o *v9; // x20
  __int64 v10; // x0
  __int64 v11; // x1

  if ( (byte_4C531AC & 1) == 0 )
  {
    sub_1C3E564(&System_Action_TypeInfo);
    sub_1C3E564(&Method_ListViewSort_Save__);
    sub_1C3E564(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4C531AC = 1;
  }
  if ( isDecide )
  {
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0);
    BonusSelectSummonPartyServantListViewManager__SetFilterButtonImage(this, v5);
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  sort = (Il2CppObject *)this->fields.sort;
  v8 = (CommonUI_o *)Instance;
  v9 = (System_Action_o *)sub_1C3E7B0(System_Action_TypeInfo);
  System_Action___ctor(v9, sort, Method_ListViewSort_Save__, 0);
  if ( !v8 )
    sub_1C3E7C0(v10, v11);
  CommonUI__CloseServantFilterSelectMenu(v8, v9, 0);
}


// local variable allocation has failed, the output may be wrong!
void BonusSelectSummonPartyServantListViewManager__EndShowServantStatusDialog(
        BonusSelectSummonPartyServantListViewManager_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  UIProgressBar_o *scrollBar; // x0

  if ( (byte_4C531A7 & 1) == 0 )
  {
    sub_1C3E564(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4C531A7 = 1;
  }
  scrollBar = (UIProgressBar_o *)this->fields.scrollBar;
  if ( !scrollBar )
    goto LABEL_9;
  if ( vabds_f32(this->fields.tmpScrollBarValueForLongPush, UIProgressBar__get_value(scrollBar, 0)) > this->fields.SCROLLBAR_UNEXPECTED_AUTOMOVE_DIFF_THRESHOLD )
  {
    scrollBar = (UIProgressBar_o *)this->fields.scrollBar;
    if ( !scrollBar )
      goto LABEL_9;
    UIProgressBar__set_value(scrollBar, this->fields.tmpScrollBarValueForLongPush, 0);
  }
  scrollBar = (UIProgressBar_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !scrollBar )
LABEL_9:
    sub_1C3E7C0(scrollBar, isDecide);
  CommonUI__CloseServantStatusDialog((CommonUI_o *)scrollBar, 0, 0);
}


bool BonusSelectSummonPartyServantListViewManager__GetFocusItemIndex(
        BonusSelectSummonPartyServantListViewManager_o *this,
        int32_t *index,
        System_Collections_Generic_List_ListViewItem__o *list,
        int32_t sum,
        const MethodInfo *method)
{
  int32_t v8; // w22
  __int64 naturalAligment; // x10
  struct UICommonButton_o *sortOrderButton; // x8
  struct UICommonButton_o *sortKindButton; // x9

  if ( (byte_4C531B2 & 1) == 0 )
  {
    sub_1C3E564(&BonusSelectSummonPartyServantListViewItem_TypeInfo);
    this = (BonusSelectSummonPartyServantListViewManager_o *)sub_1C3E564(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    byte_4C531B2 = 1;
  }
  *index = -1;
  if ( sum >= 1 )
  {
    if ( !list )
LABEL_16:
      sub_1C3E7C0(this, index);
    v8 = 0;
    while ( 1 )
    {
      this = (BonusSelectSummonPartyServantListViewManager_o *)System_Collections_Generic_List_object___get_Item(
                                                                 (System_Collections_Generic_List_object__o *)list,
                                                                 v8,
                                                                 (const MethodInfo_37B5190 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
      if ( !this )
        goto LABEL_16;
      naturalAligment = BonusSelectSummonPartyServantListViewItem_TypeInfo->_2.naturalAligment;
      if ( this->klass->_2.naturalAligment < (unsigned int)naturalAligment
        || (BonusSelectSummonPartyServantListViewItem_c *)this->klass->_2.typeHierarchy[naturalAligment - 1] != BonusSelectSummonPartyServantListViewItem_TypeInfo )
      {
        goto LABEL_16;
      }
      sortOrderButton = this->fields.sortOrderButton;
      if ( sortOrderButton )
      {
        sortKindButton = this->fields.sortKindButton;
        if ( sortKindButton )
        {
          if ( sortOrderButton == (struct UICommonButton_o *)sortKindButton[1].fields.m_CachedPtr )
            break;
        }
      }
      if ( sum == ++v8 )
        return 1;
    }
    *index = v8;
  }
  return 1;
}


System_String_o *BonusSelectSummonPartyServantListViewManager__GetScaleButtonSpriteName(
        BonusSelectSummonPartyServantListViewManager_o *this,
        const MethodInfo *method)
{
  ListViewSort_o *sort; // x0

  sort = this->fields.sort;
  if ( !sort )
    sub_1C3E7C0(0, method);
  return ListViewSort__GetScaleKindSpriteName(sort, this->fields.scaleType, 0);
}


void BonusSelectSummonPartyServantListViewManager__OnClickFilterKind(
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
  Il2CppObject *Instance; // x0
  ListViewSort_o *sort; // x21
  CommonUI_o *v14; // x22
  ServantFilterSelectMenu_CallbackFunc_o *v15; // x23

  if ( (byte_4C531AB & 1) == 0 )
  {
    sub_1C3E564(&Method_BonusSelectSummonPartyServantListViewManager_EndSelectFilterKind__);
    sub_1C3E564(&Method_BonusSelectSummonPartyServantListViewManager_OnClickFilterKind__);
    sub_1C3E564(&ServantFilterSelectMenu_CallbackFunc_TypeInfo);
    sub_1C3E564(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4C531AB = 1;
  }
  if ( this->fields.isInput )
  {
    v3 = Method_BonusSelectSummonPartyServantListViewManager_OnClickFilterKind__;
    if ( (*((_BYTE *)Method_BonusSelectSummonPartyServantListViewManager_OnClickFilterKind__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C3E57C(Method_BonusSelectSummonPartyServantListViewManager_OnClickFilterKind__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C3E548(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
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
                                                                 0);
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
            if ( GachaBonusSelectEntity__GetClassId(gachaBonusSelectEntity, 1001, 0) == 1005 )
              v9 = 14;
            else
              v9 = 12;
          }
          Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          sort = this->fields.sort;
          v14 = (CommonUI_o *)Instance;
          v15 = (ServantFilterSelectMenu_CallbackFunc_o *)sub_1C3E7B0(ServantFilterSelectMenu_CallbackFunc_TypeInfo);
          ServantFilterSelectMenu_CallbackFunc___ctor(
            v15,
            (Il2CppObject *)this,
            Method_BonusSelectSummonPartyServantListViewManager_EndSelectFilterKind__,
            0);
          if ( v14 )
          {
            CommonUI__OpenServantFilterSelectMenu(v14, v9, sort, v15, -1, 0);
            return;
          }
        }
      }
    }
LABEL_20:
    sub_1C3E7C0(gachaBonusSelectEntity, v6);
  }
}


void BonusSelectSummonPartyServantListViewManager__OnClickSelectListView(
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
  if ( (byte_4C531A5 & 1) == 0 )
  {
    this = (BonusSelectSummonPartyServantListViewManager_o *)sub_1C3E564(&Method_BonusSelectSummonPartyServantListViewManager_OnClickSelectListView__);
    byte_4C531A5 = 1;
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
      if ( sortOrderButton == (struct UICommonButton_o *)sortKindButton[1].fields.m_CachedPtr )
      {
LABEL_6:
        v5 = Method_BonusSelectSummonPartyServantListViewManager_OnClickSelectListView__;
        if ( (*((_BYTE *)Method_BonusSelectSummonPartyServantListViewManager_OnClickSelectListView__ + 83) & 2) != 0 )
          v5 = (_QWORD *)sub_1C3E57C(Method_BonusSelectSummonPartyServantListViewManager_OnClickSelectListView__);
        v6 = (System_Reflection_MethodBase_o *)sub_1C3E548(v5, v5[4]);
        OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0, 0);
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
        sub_1C3E7C0(this, obj);
      }
    }
  }
  v12 = Method_BonusSelectSummonPartyServantListViewManager_OnClickSelectListView__;
  if ( (*((_BYTE *)Method_BonusSelectSummonPartyServantListViewManager_OnClickSelectListView__ + 83) & 2) != 0 )
    v12 = (_QWORD *)sub_1C3E57C(Method_BonusSelectSummonPartyServantListViewManager_OnClickSelectListView__);
  v13 = (System_Reflection_MethodBase_o *)sub_1C3E548(v12, v12[4]);
  OverwriteAssetSoundName__PlaySystemSe(v13, 2, 0, 0);
}


void BonusSelectSummonPartyServantListViewManager__OnClickSortAscendingOrder(
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

  if ( (byte_4C531AF & 1) == 0 )
  {
    sub_1C3E564(&Method_BonusSelectSummonPartyServantListViewManager_OnClickSortAscendingOrder__);
    byte_4C531AF = 1;
  }
  if ( this->fields.isInput )
  {
    v3 = Method_BonusSelectSummonPartyServantListViewManager_OnClickSortAscendingOrder__;
    if ( (*((_BYTE *)Method_BonusSelectSummonPartyServantListViewManager_OnClickSortAscendingOrder__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C3E57C(Method_BonusSelectSummonPartyServantListViewManager_OnClickSortAscendingOrder__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C3E548(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    sort = this->fields.sort;
    if ( !sort )
      sub_1C3E7C0(v5, v6);
    BonusSelectSummonPartyServantListViewManager__SetAndSaveSortAscendingOrder(v5, !sort->fields.isAscendingOrder, v7);
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0);
    BonusSelectSummonPartyServantListViewManager__UpdateAscendingOrderBtnSprite(this, v9);
  }
}


void BonusSelectSummonPartyServantListViewManager__OnClickSortKind(
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

  if ( (byte_4C531AD & 1) == 0 )
  {
    sub_1C3E564(&Method_BonusSelectSummonPartyServantListViewManager_OnClickSortKind__);
    byte_4C531AD = 1;
  }
  if ( this->fields.isInput )
  {
    v3 = Method_BonusSelectSummonPartyServantListViewManager_OnClickSortKind__;
    if ( (*((_BYTE *)Method_BonusSelectSummonPartyServantListViewManager_OnClickSortKind__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C3E57C(Method_BonusSelectSummonPartyServantListViewManager_OnClickSortKind__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C3E548(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    sort = this->fields.sort;
    if ( !sort )
      sub_1C3E7C0(v5, v6);
    if ( sort->fields.sortKind == 27 )
      v9 = 4;
    else
      v9 = 27;
    BonusSelectSummonPartyServantListViewManager__SetAndSaveSortKind(v5, v9, v7);
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0);
  }
}


void BonusSelectSummonPartyServantListViewManager__OnLongPushListView(
        BonusSelectSummonPartyServantListViewManager_o *this,
        BonusSelectSummonPartyServantListViewObject_o *obj,
        const MethodInfo *method)
{
  UIProgressBar_o *scrollBar; // x0
  _QWORD *v6; // x0
  System_Reflection_MethodBase_o *v7; // x0
  CommonUI_o *v8; // x21
  struct UIProgressBar_OnDragFinished_o *onDragFinished; // x8
  intptr_t invoke_impl; // x20
  intptr_t method_ptr; // x22
  int32_t v12; // w22
  ServantLeaderInfo_o *v13; // x20
  ServantStatusDialog_EndDelegate_o *v14; // x22
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v15; // 0:x0.16

  if ( (byte_4C531A6 & 1) == 0 )
  {
    sub_1C3E564(&Method_BonusSelectSummonPartyServantListViewManager_EndShowServantStatusDialog__);
    sub_1C3E564(&Method_BonusSelectSummonPartyServantListViewManager_OnLongPushListView__);
    sub_1C3E564(&ServantStatusDialog_EndDelegate_TypeInfo);
    sub_1C3E564(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C3E564(&ServantLeaderInfo_TypeInfo);
    sub_1C3E564(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4C531A6 = 1;
  }
  scrollBar = (UIProgressBar_o *)this->fields.scrollBar;
  if ( !scrollBar )
    goto LABEL_13;
  this->fields.tmpScrollBarValueForLongPush = UIProgressBar__get_value(scrollBar, 0);
  v6 = Method_BonusSelectSummonPartyServantListViewManager_OnLongPushListView__;
  if ( (*((_BYTE *)Method_BonusSelectSummonPartyServantListViewManager_OnLongPushListView__ + 83) & 2) != 0 )
    v6 = (_QWORD *)sub_1C3E57C(Method_BonusSelectSummonPartyServantListViewManager_OnLongPushListView__);
  v7 = (System_Reflection_MethodBase_o *)sub_1C3E548(v6, v6[4]);
  OverwriteAssetSoundName__PlaySystemSe(v7, 0, 0, 0);
  scrollBar = (UIProgressBar_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !obj )
    goto LABEL_13;
  v8 = (CommonUI_o *)scrollBar;
  scrollBar = (UIProgressBar_o *)BonusSelectSummonPartyServantListViewObject__GetItem(obj, (const MethodInfo *)obj);
  if ( !scrollBar )
    goto LABEL_13;
  onDragFinished = scrollBar[1].fields.onDragFinished;
  if ( !onDragFinished )
    goto LABEL_13;
  method_ptr = onDragFinished->fields.method_ptr;
  invoke_impl = onDragFinished->fields.invoke_impl;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v15.fields.currentCryptoKey = method_ptr;
  *(_QWORD *)&v15.fields.fakeValue = invoke_impl;
  v12 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49004136(v15, 0);
  v13 = (ServantLeaderInfo_o *)sub_1C3E7B0(ServantLeaderInfo_TypeInfo);
  ServantLeaderInfo___ctor_43531924(v13, v12, 0, 1, 0);
  v14 = (ServantStatusDialog_EndDelegate_o *)sub_1C3E7B0(ServantStatusDialog_EndDelegate_TypeInfo);
  ServantStatusDialog_EndDelegate___ctor(
    v14,
    (Il2CppObject *)this,
    Method_BonusSelectSummonPartyServantListViewManager_EndShowServantStatusDialog__,
    0);
  if ( !v8 )
LABEL_13:
    sub_1C3E7C0(scrollBar, obj);
  CommonUI__OpenServantStatusDialog_31250580(v8, 7, v13, v14, 0);
}


// local variable allocation has failed, the output may be wrong!
void BonusSelectSummonPartyServantListViewManager__RequestListObject(
        BonusSelectSummonPartyServantListViewManager_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *ObjectList; // x0
  __int64 v6; // x1
  __int64 v7; // x1
  const MethodInfo *v8; // x2
  System_Collections_Generic_List_Enumerator_object__o v9; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4C531A2 & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_BonusSelectSummonPartyServantListViewObject__Dispose__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_BonusSelectSummonPartyServantListViewObject__MoveNext__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_BonusSelectSummonPartyServantListViewObject__get_Current__);
    sub_1C3E564(&Method_System_Collections_Generic_List_BonusSelectSummonPartyServantListViewObject__GetEnumerator__);
    byte_4C531A2 = 1;
  }
  memset(&v9, 0, sizeof(v9));
  ObjectList = (System_Collections_Generic_List_object__o *)BonusSelectSummonPartyServantListViewManager__get_ObjectList(
                                                              this,
                                                              *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_1C3E7C0(0, v6);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v9,
    ObjectList,
    (const MethodInfo_37B5F58 *)Method_System_Collections_Generic_List_BonusSelectSummonPartyServantListViewObject__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v9,
            (const MethodInfo_353FC4C *)Method_System_Collections_Generic_List_Enumerator_BonusSelectSummonPartyServantListViewObject__MoveNext__) )
  {
    if ( !v9.fields._current )
      sub_1C3E7C0(0, v7);
    BonusSelectSummonPartyServantListViewObject__Init(
      (BonusSelectSummonPartyServantListViewObject_o *)v9.fields._current,
      mode,
      v8);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v9,
    (const MethodInfo_353FC48 *)Method_System_Collections_Generic_List_Enumerator_BonusSelectSummonPartyServantListViewObject__Dispose__);
}


// local variable allocation has failed, the output may be wrong!
void BonusSelectSummonPartyServantListViewManager__SetAndSaveIconScaleType(
        BonusSelectSummonPartyServantListViewManager_o *this,
        int32_t scaleType,
        const MethodInfo *method)
{
  BonusSelectSummonPartyServantListViewManager_c *v4; // x0
  struct BonusSelectSummonPartyServantListViewManager_StaticFields *static_fields; // x8
  struct ListViewSort_o *servantSortInfo; // x0
  struct ListViewSort_o *servantSortInfoExtra1; // x9
  struct ListViewSort_o *servantSortInfoExtra2; // x8

  if ( (byte_4C531A9 & 1) == 0 )
  {
    sub_1C3E564(&BonusSelectSummonPartyServantListViewManager_TypeInfo);
    byte_4C531A9 = 1;
  }
  v4 = BonusSelectSummonPartyServantListViewManager_TypeInfo;
  if ( !BonusSelectSummonPartyServantListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BonusSelectSummonPartyServantListViewManager_TypeInfo);
    v4 = BonusSelectSummonPartyServantListViewManager_TypeInfo;
  }
  static_fields = v4->static_fields;
  servantSortInfo = static_fields->servantSortInfo;
  if ( !servantSortInfo )
    goto LABEL_11;
  servantSortInfo->fields.iconScaleKind = scaleType;
  servantSortInfoExtra1 = static_fields->servantSortInfoExtra1;
  if ( !servantSortInfoExtra1
    || (servantSortInfoExtra1->fields.iconScaleKind = scaleType,
        (servantSortInfoExtra2 = static_fields->servantSortInfoExtra2) == 0)
    || (servantSortInfoExtra2->fields.iconScaleKind = scaleType,
        ListViewSort__SaveIconScaleKind(servantSortInfo, 0),
        (servantSortInfo = BonusSelectSummonPartyServantListViewManager_TypeInfo->static_fields->servantSortInfoExtra1) == 0)
    || (ListViewSort__SaveIconScaleKind(servantSortInfo, 0),
        (servantSortInfo = BonusSelectSummonPartyServantListViewManager_TypeInfo->static_fields->servantSortInfoExtra2) == 0) )
  {
LABEL_11:
    sub_1C3E7C0(servantSortInfo, *(_QWORD *)&scaleType);
  }
  ListViewSort__SaveIconScaleKind(servantSortInfo, 0);
}


// local variable allocation has failed, the output may be wrong!
void BonusSelectSummonPartyServantListViewManager__SetAndSaveSortAscendingOrder(
        BonusSelectSummonPartyServantListViewManager_o *this,
        bool isAscendingOrder,
        const MethodInfo *method)
{
  BonusSelectSummonPartyServantListViewManager_c *v4; // x0
  struct BonusSelectSummonPartyServantListViewManager_StaticFields *static_fields; // x8
  struct ListViewSort_o *servantSortInfo; // x0
  bool v7; // w9
  struct ListViewSort_o *servantSortInfoExtra1; // x10
  struct ListViewSort_o *servantSortInfoExtra2; // x8

  if ( (byte_4C531B0 & 1) == 0 )
  {
    sub_1C3E564(&BonusSelectSummonPartyServantListViewManager_TypeInfo);
    byte_4C531B0 = 1;
  }
  v4 = BonusSelectSummonPartyServantListViewManager_TypeInfo;
  if ( !BonusSelectSummonPartyServantListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BonusSelectSummonPartyServantListViewManager_TypeInfo);
    v4 = BonusSelectSummonPartyServantListViewManager_TypeInfo;
  }
  static_fields = v4->static_fields;
  servantSortInfo = static_fields->servantSortInfo;
  if ( !servantSortInfo )
    goto LABEL_11;
  v7 = isAscendingOrder;
  servantSortInfo->fields.isAscendingOrder = isAscendingOrder;
  servantSortInfoExtra1 = static_fields->servantSortInfoExtra1;
  if ( !servantSortInfoExtra1
    || (servantSortInfoExtra1->fields.isAscendingOrder = v7,
        (servantSortInfoExtra2 = static_fields->servantSortInfoExtra2) == 0)
    || (servantSortInfoExtra2->fields.isAscendingOrder = v7,
        ListViewSort__SaveIsAscendingOrder(servantSortInfo, 0),
        (servantSortInfo = BonusSelectSummonPartyServantListViewManager_TypeInfo->static_fields->servantSortInfoExtra1) == 0)
    || (ListViewSort__SaveIsAscendingOrder(servantSortInfo, 0),
        (servantSortInfo = BonusSelectSummonPartyServantListViewManager_TypeInfo->static_fields->servantSortInfoExtra2) == 0) )
  {
LABEL_11:
    sub_1C3E7C0(servantSortInfo, isAscendingOrder);
  }
  ListViewSort__SaveIsAscendingOrder(servantSortInfo, 0);
}


// local variable allocation has failed, the output may be wrong!
void BonusSelectSummonPartyServantListViewManager__SetAndSaveSortKind(
        BonusSelectSummonPartyServantListViewManager_o *this,
        int32_t sortKind,
        const MethodInfo *method)
{
  BonusSelectSummonPartyServantListViewManager_c *v4; // x0
  struct BonusSelectSummonPartyServantListViewManager_StaticFields *static_fields; // x8
  struct ListViewSort_o *servantSortInfo; // x0
  struct ListViewSort_o *servantSortInfoExtra1; // x9
  struct ListViewSort_o *servantSortInfoExtra2; // x8

  if ( (byte_4C531AE & 1) == 0 )
  {
    sub_1C3E564(&BonusSelectSummonPartyServantListViewManager_TypeInfo);
    byte_4C531AE = 1;
  }
  v4 = BonusSelectSummonPartyServantListViewManager_TypeInfo;
  if ( !BonusSelectSummonPartyServantListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BonusSelectSummonPartyServantListViewManager_TypeInfo);
    v4 = BonusSelectSummonPartyServantListViewManager_TypeInfo;
  }
  static_fields = v4->static_fields;
  servantSortInfo = static_fields->servantSortInfo;
  if ( !servantSortInfo )
    goto LABEL_11;
  servantSortInfo->fields.sortKind = sortKind;
  servantSortInfoExtra1 = static_fields->servantSortInfoExtra1;
  if ( !servantSortInfoExtra1
    || (servantSortInfoExtra1->fields.sortKind = sortKind,
        (servantSortInfoExtra2 = static_fields->servantSortInfoExtra2) == 0)
    || (servantSortInfoExtra2->fields.sortKind = sortKind,
        ListViewSort__SaveSortKind(servantSortInfo, 0),
        (servantSortInfo = BonusSelectSummonPartyServantListViewManager_TypeInfo->static_fields->servantSortInfoExtra1) == 0)
    || (ListViewSort__SaveSortKind(servantSortInfo, 0),
        (servantSortInfo = BonusSelectSummonPartyServantListViewManager_TypeInfo->static_fields->servantSortInfoExtra2) == 0) )
  {
LABEL_11:
    sub_1C3E7C0(servantSortInfo, *(_QWORD *)&sortKind);
  }
  ListViewSort__SaveSortKind(servantSortInfo, 0);
}


void BonusSelectSummonPartyServantListViewManager__SetFilterButtonImage(
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
  if ( (byte_4C531A3 & 1) == 0 )
  {
    sub_1C3E564(&StringLiteral_17504/*"btn_filter_on"*/);
    this = (BonusSelectSummonPartyServantListViewManager_o *)sub_1C3E564(&StringLiteral_17503/*"btn_filter"*/);
    byte_4C531A3 = 1;
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
                                                             0);
  if ( (_DWORD)this == 1004 )
  {
    method = (const MethodInfo *)(byte_9 + 4);
    goto LABEL_14;
  }
  v5 = v2->fields.partyServantSelectMenu;
  if ( !v5
    || (v6 = v5->fields.organizationItem) == 0
    || (this = (BonusSelectSummonPartyServantListViewManager_o *)v6->fields.gachaBonusSelectEntity) == 0 )
  {
LABEL_19:
    sub_1C3E7C0(this, method);
  }
  if ( GachaBonusSelectEntity__GetClassId((GachaBonusSelectEntity_o *)this, 1001, 0) == 1005 )
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
                                                             0);
  if ( !filterSprite )
    goto LABEL_19;
  v8 = (System_String_o **)&StringLiteral_17503/*"btn_filter"*/;
  if ( ((unsigned __int8)this & 1) == 0 )
    v8 = (System_String_o **)&StringLiteral_17504/*"btn_filter_on"*/;
  UISprite__set_spriteName(filterSprite, *v8, 0);
}


void BonusSelectSummonPartyServantListViewManager__SetMode(
        BonusSelectSummonPartyServantListViewManager_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  __int64 v5; // x1
  UnityEngine_Behaviour_o *scrollView; // x0
  const MethodInfo *v7; // x2
  int32_t v8; // w1

  ListViewManager__set_IsInput((ListViewManager_o *)this, mode == 2, 0);
  scrollView = (UnityEngine_Behaviour_o *)this->fields.scrollView;
  if ( !scrollView )
    goto LABEL_12;
  if ( UnityEngine_Behaviour__get_enabled(scrollView, 0) )
    goto LABEL_6;
  scrollView = (UnityEngine_Behaviour_o *)this->fields.scrollView;
  if ( !scrollView
    || (UnityEngine_Behaviour__set_enabled(scrollView, 1, 0),
        (scrollView = (UnityEngine_Behaviour_o *)this->fields.scrollView) == 0) )
  {
LABEL_12:
    sub_1C3E7C0(scrollView, v5);
  }
  UIScrollView__UpdatePosition((UIScrollView_o *)scrollView, 0);
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
      ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0);
      break;
    default:
      return;
  }
}


void BonusSelectSummonPartyServantListViewManager__SetObjectItem(
        BonusSelectSummonPartyServantListViewManager_o *this,
        ListViewObject_o *obj,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  BonusSelectSummonPartyServantListViewManager_o *v5; // x20
  __int64 naturalAligment; // x10
  int32_t v7; // w1

  v5 = this;
  if ( (byte_4C531AA & 1) == 0 )
  {
    this = (BonusSelectSummonPartyServantListViewManager_o *)sub_1C3E564(&BonusSelectSummonPartyServantListViewObject_TypeInfo);
    byte_4C531AA = 1;
  }
  if ( !obj
    || (naturalAligment = BonusSelectSummonPartyServantListViewObject_TypeInfo->_2.naturalAligment,
        obj->klass->_2.naturalAligment < (unsigned int)naturalAligment)
    || (BonusSelectSummonPartyServantListViewObject_c *)obj->klass->_2.typeHierarchy[naturalAligment - 1] != BonusSelectSummonPartyServantListViewObject_TypeInfo )
  {
    sub_1C3E7C0(this, obj);
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


void BonusSelectSummonPartyServantListViewManager__UpdateAscendingOrderBtnSprite(
        BonusSelectSummonPartyServantListViewManager_o *this,
        const MethodInfo *method)
{
  BonusSelectSummonPartyServantListViewManager_o *v2; // x19
  struct ListViewSort_o *sort; // x8
  System_String_o **v4; // x8

  v2 = this;
  if ( (byte_4C531A4 & 1) == 0 )
  {
    sub_1C3E564(&StringLiteral_17638/*"btn_txt_up"*/);
    this = (BonusSelectSummonPartyServantListViewManager_o *)sub_1C3E564(&StringLiteral_17579/*"btn_txt_down"*/);
    byte_4C531A4 = 1;
  }
  sort = v2->fields.sort;
  if ( !sort || (this = (BonusSelectSummonPartyServantListViewManager_o *)v2->fields.sortExplanationSprite) == 0 )
    sub_1C3E7C0(this, method);
  if ( sort->fields.isAscendingOrder )
    v4 = (System_String_o **)&StringLiteral_17638/*"btn_txt_up"*/;
  else
    v4 = (System_String_o **)&StringLiteral_17579/*"btn_txt_down"*/;
  UISprite__set_spriteName((UISprite_o *)this, *v4, 0);
}


System_Collections_Generic_List_BonusSelectSummonPartyServantListViewObject__o *BonusSelectSummonPartyServantListViewManager__get_ObjectList(
        BonusSelectSummonPartyServantListViewManager_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x19
  __int64 v4; // x1
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  Il2CppObject *current; // x20
  _BOOL8 v7; // x0
  __int64 v8; // x1
  Il2CppObject *Component_object; // x0
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  Il2CppObject *v12; // x1
  struct System_Object_array *items; // x8
  _QWORD *v14; // x9
  __int64 size; // x10
  Il2CppClass **v16; // x0
  System_Collections_Generic_List_Enumerator_object__o v18; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v19; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4C531B1 & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_1C3E564(&Method_UnityEngine_GameObject_GetComponent_BonusSelectSummonPartyServantListViewObject___);
    sub_1C3E564(&Method_System_Collections_Generic_List_BonusSelectSummonPartyServantListViewObject__Add__);
    sub_1C3E564(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_1C3E564(&Method_System_Collections_Generic_List_BonusSelectSummonPartyServantListViewObject___ctor__);
    sub_1C3E564(&System_Collections_Generic_List_BonusSelectSummonPartyServantListViewObject__TypeInfo);
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    byte_4C531B1 = 1;
  }
  memset(&v19, 0, sizeof(v19));
  v3 = (System_Collections_Generic_List_object__o *)sub_1C3E7B0(System_Collections_Generic_List_BonusSelectSummonPartyServantListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_37B4C2C *)Method_System_Collections_Generic_List_BonusSelectSummonPartyServantListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_1C3E7C0(0, v4);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v18,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_37B5F58 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v19 = v18;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v19,
            (const MethodInfo_353FC4C *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v19.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v7 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0, 0);
    if ( v7 )
    {
      if ( !current )
        sub_1C3E7C0(v7, v8);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_31510CC *)Method_UnityEngine_GameObject_GetComponent_BonusSelectSummonPartyServantListViewObject___);
      v12 = Component_object;
      if ( !v3 )
        sub_1C3E7C0(Component_object, Component_object);
      items = v3->fields._items;
      v14 = Method_System_Collections_Generic_List_BonusSelectSummonPartyServantListViewObject__Add__;
      ++v3->fields._version;
      if ( !items )
        sub_1C3E7C0(Component_object, Component_object);
      size = v3->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v3,
          Component_object,
          *(const MethodInfo_37B5460 **)(*(_QWORD *)(v14[4] + 192LL) + 112LL));
      }
      else
      {
        v16 = &items->obj.klass + size;
        v3->fields._size = size + 1;
        v16[4] = (Il2CppClass *)v12;
        sub_1C3E508((CGThumbnailListItem_o *)(v16 + 4), (int32_t)v12, v10, v11);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v19,
    (const MethodInfo_353FC48 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_BonusSelectSummonPartyServantListViewObject__o *)v3;
}


void BonusSelectSummonPartyServantListViewManager_CallbackFunc___ctor(
        BonusSelectSummonPartyServantListViewManager_CallbackFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  intptr_t v4; // x8
  int v8; // w22
  Il2CppObject *m_target; // x9
  __int64 v10; // x0

  v4 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v4;
  this->fields.m_target = object;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.m_target, (int32_t)object, method, a4);
  v8 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1C3E624(method) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1C3E7DC(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C3E68C(v10, 0);
    }
    goto LABEL_5;
  }
  if ( v8 != 2 )
  {
LABEL_5:
    m_target = this->fields.m_target;
    this->fields.invoke_impl = this->fields.method_ptr;
    this->fields.method_code = (intptr_t)m_target;
    goto LABEL_6;
  }
  this->fields.invoke_impl = (intptr_t)sub_1A7E980;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1A7E928;
}


// local variable allocation has failed, the output may be wrong!
System_IAsyncResult_o *BonusSelectSummonPartyServantListViewManager_CallbackFunc__BeginInvoke(
        BonusSelectSummonPartyServantListViewManager_CallbackFunc_o *this,
        int32_t kind,
        int32_t result,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v6; // x6
  __int64 v7; // x7
  __int64 v11; // x2
  __int64 v12; // x3
  __int64 v13; // x4
  __int64 v14; // x5
  __int64 v15; // x6
  __int64 v16; // x7
  _QWORD v18[3]; // [xsp+8h] [xbp-58h] BYREF
  int32_t v19; // [xsp+28h] [xbp-38h] BYREF
  int32_t v20; // [xsp+2Ch] [xbp-34h] BYREF

  v19 = result;
  v20 = kind;
  if ( (byte_4C531B4 & 1) == 0 )
  {
    sub_1C3E564(&int_TypeInfo);
    sub_1C3E564(&BonusSelectSummonPartyServantListViewManager_ResultKind_TypeInfo);
    byte_4C531B4 = 1;
  }
  v18[2] = 0;
  v18[0] = j_il2cpp_value_box_0(
             BonusSelectSummonPartyServantListViewManager_ResultKind_TypeInfo,
             &v20,
             *(_QWORD *)&result,
             callback,
             object,
             method,
             v6,
             v7);
  v18[1] = j_il2cpp_value_box_0(int_TypeInfo, &v19, v11, v12, v13, v14, v15, v16);
  return (System_IAsyncResult_o *)sub_1C3E518(this, v18, callback, object);
}


void BonusSelectSummonPartyServantListViewManager_CallbackFunc__EndInvoke(
        BonusSelectSummonPartyServantListViewManager_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C3E51C(result, 0, method);
}


void BonusSelectSummonPartyServantListViewManager_CallbackFunc__Invoke(
        BonusSelectSummonPartyServantListViewManager_CallbackFunc_o *this,
        int32_t kind,
        int32_t result,
        const MethodInfo *method)
{
  ((void (__fastcall *)(intptr_t, int32_t, int32_t, intptr_t))this->fields.invoke_impl)(
    this->fields.method_code,
    kind,
    result,
    this->fields.method);
}


void BonusSelectSummonPartyServantListViewManager___c__DisplayClass19_0___ctor(
        BonusSelectSummonPartyServantListViewManager___c__DisplayClass19_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


// local variable allocation has failed, the output may be wrong!
bool BonusSelectSummonPartyServantListViewManager___c__DisplayClass19_0___CreateList_b__0(
        BonusSelectSummonPartyServantListViewManager___c__DisplayClass19_0_o *this,
        int32_t id,
        const MethodInfo *method)
{
  BonusSelectSummonPartyServantListViewManager___c__DisplayClass19_0_o *v4; // x20
  struct ServantEntity_o *servantEntity; // x8
  __int64 v6; // x20
  __int64 v7; // x21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v9; // 0:x0.16

  v4 = this;
  if ( (byte_4C531B5 & 1) == 0 )
  {
    this = (BonusSelectSummonPartyServantListViewManager___c__DisplayClass19_0_o *)sub_1C3E564(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4C531B5 = 1;
  }
  servantEntity = v4->fields.servantEntity;
  if ( !servantEntity )
    sub_1C3E7C0(this, *(_QWORD *)&id);
  v7 = *(_QWORD *)&servantEntity->fields.id.fields.currentCryptoKey;
  v6 = *(_QWORD *)&servantEntity->fields.id.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v9.fields.currentCryptoKey = v7;
  *(_QWORD *)&v9.fields.fakeValue = v6;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49004136(v9, 0) == id;
}