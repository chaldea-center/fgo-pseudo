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

  if ( (byte_4C236D2 & 1) == 0 )
  {
    sub_1C2D490(&BonusSelectSummonPartyServantListViewManager_TypeInfo);
    sub_1C2D490(&StringLiteral_3204/*"BonusSelectSummonPartyServant_Extra2_{0}"*/);
    sub_1C2D490(&StringLiteral_3205/*"BonusSelectSummonPartyServant_{0}"*/);
    sub_1C2D490(&StringLiteral_3203/*"BonusSelectSummonPartyServant_Extra1_{0}"*/);
    byte_4C236D2 = 1;
  }
  BonusSelectSummonPartyServantListViewManager_TypeInfo->static_fields->SORT_SAVE_KEY_FORMAT = (struct System_String_o *)StringLiteral_3205/*"BonusSelectSummonPartyServant_{0}"*/;
  sub_1C2D434(
    (CGThumbnailListItem_o *)BonusSelectSummonPartyServantListViewManager_TypeInfo->static_fields,
    StringLiteral_3205/*"BonusSelectSummonPartyServant_{0}"*/,
    v1,
    v2);
  v3 = StringLiteral_3203/*"BonusSelectSummonPartyServant_Extra1_{0}"*/;
  static_fields = BonusSelectSummonPartyServantListViewManager_TypeInfo->static_fields;
  static_fields->SORT_SAVE_KEY_FORMAT_EX1 = (struct System_String_o *)StringLiteral_3203/*"BonusSelectSummonPartyServant_Extra1_{0}"*/;
  sub_1C2D434((CGThumbnailListItem_o *)&static_fields->SORT_SAVE_KEY_FORMAT_EX1, v3, v5, v6);
  v7 = StringLiteral_3204/*"BonusSelectSummonPartyServant_Extra2_{0}"*/;
  v8 = BonusSelectSummonPartyServantListViewManager_TypeInfo->static_fields;
  v8->SORT_SAVE_KEY_FORMAT_EX2 = (struct System_String_o *)StringLiteral_3204/*"BonusSelectSummonPartyServant_Extra2_{0}"*/;
  sub_1C2D434((CGThumbnailListItem_o *)&v8->SORT_SAVE_KEY_FORMAT_EX2, v7, v9, v10);
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
  if ( (byte_4C236C7 & 1) == 0 )
  {
    sub_1C2D490(&BonusSelectSummonPartyServantListViewItem_TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_1C2D490(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    this = (BonusSelectSummonPartyServantListViewManager_o *)sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C236C7 = 1;
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
  sub_1C2D434((CGThumbnailListItem_o *)p_seed, (int32_t)smallSizeSeed, (int32_t)v2, v3);
LABEL_10:
  BonusSelectSummonPartyServantListViewManager__SetAndSaveIconScaleType(this, v4->fields.scaleType, v2);
  itemList = (System_Collections_Generic_List_object__o *)v4->fields.itemList;
  if ( !itemList )
LABEL_22:
    sub_1C2D6EC(itemList, v10);
  v13 = 0;
  while ( v13 < itemList->fields._size )
  {
    Item = System_Collections_Generic_List_object___get_Item(
             itemList,
             v13,
             (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
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
  __int64 v28; // x2
  __int64 v29; // x8
  int32_t v30; // w2
  const MethodInfo *v31; // x3
  System_Func_int__bool__o *v32; // x26
  struct BonusSelectSummonPartyServantSelectMenu_o *partyServantSelectMenu; // x9
  GachaBonusSelectLineupEntity_o *v34; // x26
  ServantEntity_o *v35; // x25
  BonusSelectSummonPartyOrganizationListViewItem_o *organizationItem; // x27
  char v37; // w29
  BonusSelectSummonPartyServantListViewItem_o *v38; // x24
  const MethodInfo *v39; // x6
  int32_t v40; // w2
  const MethodInfo *v41; // x3
  __int64 v42; // x8
  _QWORD *v43; // x9
  __int64 v44; // x10
  __int64 v45; // x8
  UILabel_o *emptyMessageLabel; // x20
  const MethodInfo *v47; // x1
  const MethodInfo *v48; // x1
  GachaBonusSelectLineupEntity_array *gachaBonusSelectLineupEntities; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4C236C0 & 1) == 0 )
  {
    sub_1C2D490(&Method_BasicHelper_Any_int____77996856);
    sub_1C2D490(&BonusSelectSummonPartyServantListViewItem_TypeInfo);
    sub_1C2D490(&BonusSelectSummonPartyServantListViewManager_TypeInfo);
    sub_1C2D490(&Method_DataManager_GetMaster_GachaBonusSelectLineupMaster___);
    sub_1C2D490(&Method_DataManager_GetMaster_GiftMaster___);
    sub_1C2D490(&Method_DataManager_GetMaster_ServantMaster___);
    sub_1C2D490(&DataManager_TypeInfo);
    sub_1C2D490(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C2D490(&System_Func_int__bool__TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    sub_1C2D490(&LocalizationManager_TypeInfo);
    sub_1C2D490(&Method_BonusSelectSummonPartyServantListViewManager___c__DisplayClass19_0__CreateList_b__0__);
    sub_1C2D490(&BonusSelectSummonPartyServantListViewManager___c__DisplayClass19_0_TypeInfo);
    sub_1C2D490(&StringLiteral_11801/*"SERVANT_SORT_FILTER_RESULT_EMPTY"*/);
    byte_4C236C0 = 1;
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
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.sort, (int32_t)servantSortInfoExtra2, v10, v11);
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
    sub_1C2D434((CGThumbnailListItem_o *)&this->fields.seed, (int32_t)normalSizeSeed, v16, v17);
  }
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_GiftMaster___);
  v23 = DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_ServantMaster___);
  sort = DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_GachaBonusSelectLineupMaster___);
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
      v27 = sub_1C2D6DC(BonusSelectSummonPartyServantListViewManager___c__DisplayClass19_0_TypeInfo);
      System_Object___ctor((Il2CppObject *)v27, 0);
      if ( !gachaBonusSelectLineupEntities )
        goto LABEL_59;
      if ( v26 >= LODWORD(gachaBonusSelectLineupEntities->max_length) )
        goto LABEL_60;
      v29 = *((_QWORD *)&gachaBonusSelectLineupEntities->obj.klass + v25);
      if ( !v29 || !Master_object )
        goto LABEL_59;
      sort = GiftMaster__getDataById((GiftMaster_o *)Master_object, *(_DWORD *)(v29 + 24), 0);
      if ( sort )
      {
        if ( !v23 )
          goto LABEL_59;
        sort = DataMasterBase_object__object__int___GetEntity(
                 (DataMasterBase_TMaster__TEntity__PKType__o *)v23,
                 *((_DWORD *)sort + 6),
                 (const MethodInfo_3387D98 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
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
      sub_1C2D434((CGThumbnailListItem_o *)(v27 + 16), (int32_t)v8, v30, v31);
      v32 = (System_Func_int__bool__o *)sub_1C2D6DC(System_Func_int__bool__TypeInfo);
      System_Func_int__bool____ctor(
        v32,
        (Il2CppObject *)v27,
        Method_BonusSelectSummonPartyServantListViewManager___c__DisplayClass19_0__CreateList_b__0__,
        0);
      sort = (void *)BasicHelper__Any_int__51083888(
                       notPossibleSvtIdList,
                       (System_Func_T__bool__o *)v32,
                       (const MethodInfo_30B7A70 *)Method_BasicHelper_Any_int____77996856);
      if ( !gachaBonusSelectLineupEntities )
        goto LABEL_59;
      if ( v26 >= LODWORD(gachaBonusSelectLineupEntities->max_length) )
LABEL_60:
        sub_1C2D6F4(sort, v8, v28);
      partyServantSelectMenu = this->fields.partyServantSelectMenu;
      if ( partyServantSelectMenu )
      {
        v34 = (GachaBonusSelectLineupEntity_o *)*((_QWORD *)&gachaBonusSelectLineupEntities->obj.klass + v25);
        v35 = *(ServantEntity_o **)(v27 + 16);
        organizationItem = partyServantSelectMenu->fields.organizationItem;
        v37 = (unsigned __int8)sort ^ 1;
        v38 = (BonusSelectSummonPartyServantListViewItem_o *)sub_1C2D6DC(BonusSelectSummonPartyServantListViewItem_TypeInfo);
        BonusSelectSummonPartyServantListViewItem___ctor(v38, v26, v35, v34, organizationItem, v37 & 1, v39);
        sort = this->fields.itemList;
        if ( sort )
        {
          v42 = *((_QWORD *)sort + 2);
          v43 = Method_System_Collections_Generic_List_ListViewItem__Add__;
          ++*((_DWORD *)sort + 7);
          if ( v42 )
          {
            v44 = *((int *)sort + 6);
            if ( (unsigned int)v44 >= *(_DWORD *)(v42 + 24) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                (System_Collections_Generic_List_object__o *)sort,
                (Il2CppObject *)v38,
                *(const MethodInfo_3789B84 **)(*(_QWORD *)(v43[4] + 192LL) + 112LL));
            }
            else
            {
              v45 = v42 + 8 * v44;
              *((_DWORD *)sort + 6) = v44 + 1;
              *(_QWORD *)(v45 + 32) = v38;
              sub_1C2D434((CGThumbnailListItem_o *)(v45 + 32), (int32_t)v38, v40, v41);
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
  sort = LocalizationManager__Get((System_String_o *)StringLiteral_11801/*"SERVANT_SORT_FILTER_RESULT_EMPTY"*/, 0);
  if ( !emptyMessageLabel )
LABEL_59:
    sub_1C2D6EC(sort, v8);
  UILabel__set_text(emptyMessageLabel, (System_String_o *)sort, 0);
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0);
  BonusSelectSummonPartyServantListViewManager__SetFilterButtonImage(this, v47);
  BonusSelectSummonPartyServantListViewManager__UpdateAscendingOrderBtnSprite(this, v48);
}


void BonusSelectSummonPartyServantListViewManager__CreateSortData(int32_t gachaId, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  BonusSelectSummonPartyServantListViewManager_c *v6; // x0
  System_String_o *SORT_SAVE_KEY_FORMAT; // x20
  Il2CppObject *v8; // x0
  System_String_o *v9; // x20
  ListViewSort_o *v10; // x21
  struct BonusSelectSummonPartyServantListViewManager_StaticFields *static_fields; // x0
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  System_String_o *SORT_SAVE_KEY_FORMAT_EX1; // x20
  __int64 v15; // x2
  __int64 v16; // x3
  __int64 v17; // x4
  Il2CppObject *v18; // x0
  System_String_o *v19; // x20
  ListViewSort_o *v20; // x21
  struct BonusSelectSummonPartyServantListViewManager_StaticFields *v21; // x0
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  System_String_o *SORT_SAVE_KEY_FORMAT_EX2; // x20
  __int64 v25; // x2
  __int64 v26; // x3
  __int64 v27; // x4
  Il2CppObject *v28; // x0
  System_String_o *v29; // x19
  ListViewSort_o *v30; // x20
  struct BonusSelectSummonPartyServantListViewManager_StaticFields *v31; // x0
  int32_t v32; // w2
  const MethodInfo *v33; // x3
  int32_t v34; // [xsp+Ch] [xbp-44h] BYREF
  int32_t v35; // [xsp+18h] [xbp-38h] BYREF
  int32_t v36; // [xsp+1Ch] [xbp-34h] BYREF

  if ( (byte_4C236BE & 1) == 0 )
  {
    sub_1C2D490(&BonusSelectSummonPartyServantListViewManager_TypeInfo);
    sub_1C2D490(&int_TypeInfo);
    sub_1C2D490(&ListViewSort_TypeInfo);
    byte_4C236BE = 1;
  }
  v6 = BonusSelectSummonPartyServantListViewManager_TypeInfo;
  if ( !BonusSelectSummonPartyServantListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BonusSelectSummonPartyServantListViewManager_TypeInfo);
    v6 = BonusSelectSummonPartyServantListViewManager_TypeInfo;
  }
  SORT_SAVE_KEY_FORMAT = v6->static_fields->SORT_SAVE_KEY_FORMAT;
  v36 = gachaId;
  v8 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v36, v2, v3, v4);
  v9 = System_String__Format(SORT_SAVE_KEY_FORMAT, v8, 0);
  v10 = (ListViewSort_o *)sub_1C2D6DC(ListViewSort_TypeInfo);
  ListViewSort___ctor_43600724(v10, v9, 27, 0, 0);
  static_fields = BonusSelectSummonPartyServantListViewManager_TypeInfo->static_fields;
  static_fields->servantSortInfo = v10;
  sub_1C2D434((CGThumbnailListItem_o *)&static_fields->servantSortInfo, (int32_t)v10, v12, v13);
  SORT_SAVE_KEY_FORMAT_EX1 = BonusSelectSummonPartyServantListViewManager_TypeInfo->static_fields->SORT_SAVE_KEY_FORMAT_EX1;
  v35 = gachaId;
  v18 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v35, v15, v16, v17);
  v19 = System_String__Format(SORT_SAVE_KEY_FORMAT_EX1, v18, 0);
  v20 = (ListViewSort_o *)sub_1C2D6DC(ListViewSort_TypeInfo);
  ListViewSort___ctor_43600724(v20, v19, 27, 0, 0);
  v21 = BonusSelectSummonPartyServantListViewManager_TypeInfo->static_fields;
  v21->servantSortInfoExtra1 = v20;
  sub_1C2D434((CGThumbnailListItem_o *)&v21->servantSortInfoExtra1, (int32_t)v20, v22, v23);
  SORT_SAVE_KEY_FORMAT_EX2 = BonusSelectSummonPartyServantListViewManager_TypeInfo->static_fields->SORT_SAVE_KEY_FORMAT_EX2;
  v34 = gachaId;
  v28 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v34, v25, v26, v27);
  v29 = System_String__Format(SORT_SAVE_KEY_FORMAT_EX2, v28, 0);
  v30 = (ListViewSort_o *)sub_1C2D6DC(ListViewSort_TypeInfo);
  ListViewSort___ctor_43600724(v30, v29, 27, 0, 0);
  v31 = BonusSelectSummonPartyServantListViewManager_TypeInfo->static_fields;
  v31->servantSortInfoExtra2 = v30;
  sub_1C2D434((CGThumbnailListItem_o *)&v31->servantSortInfoExtra2, (int32_t)v30, v32, v33);
}


void BonusSelectSummonPartyServantListViewManager__DeleteContinueData(const MethodInfo *method)
{
  System_Int32_array *Master_object; // x0
  __int64 v2; // x1
  __int64 v3; // x2
  __int64 v4; // x3
  __int64 v5; // x4
  il2cpp_array_size_t max_length; // x8
  System_Int32_array *v7; // x19
  unsigned __int64 v8; // x24
  BonusSelectSummonPartyServantListViewManager_c *v9; // x0
  int32_t v10; // w23
  System_String_o *SORT_SAVE_KEY_FORMAT; // x20
  Il2CppObject *v12; // x0
  System_String_o *v13; // x21
  ListViewSort_o *v14; // x20
  System_String_o *SORT_SAVE_KEY_FORMAT_EX1; // x21
  __int64 v16; // x2
  __int64 v17; // x3
  __int64 v18; // x4
  Il2CppObject *v19; // x0
  System_String_o *v20; // x22
  ListViewSort_o *v21; // x21
  System_String_o *SORT_SAVE_KEY_FORMAT_EX2; // x22
  __int64 v23; // x2
  __int64 v24; // x3
  __int64 v25; // x4
  Il2CppObject *v26; // x0
  System_String_o *v27; // x23
  ListViewSort_o *v28; // x22
  int32_t v29; // [xsp+Ch] [xbp-64h] BYREF
  int32_t v30; // [xsp+18h] [xbp-58h] BYREF
  int32_t v31; // [xsp+1Ch] [xbp-54h] BYREF

  if ( (byte_4C236BF & 1) == 0 )
  {
    sub_1C2D490(&BonusSelectSummonPartyServantListViewManager_TypeInfo);
    sub_1C2D490(&Method_DataManager_GetMaster_GachaMaster___);
    sub_1C2D490(&DataManager_TypeInfo);
    sub_1C2D490(&int_TypeInfo);
    sub_1C2D490(&ListViewSort_TypeInfo);
    byte_4C236BF = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (System_Int32_array *)DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_GachaMaster___);
  if ( !Master_object )
    goto LABEL_17;
  Master_object = GachaMaster__GetClosedBonusSelectGachaIdList((GachaMaster_o *)Master_object, 0);
  if ( !Master_object )
    goto LABEL_17;
  max_length = Master_object->max_length;
  v7 = Master_object;
  if ( (int)max_length >= 1 )
  {
    v8 = 0;
    while ( 1 )
    {
      if ( v8 >= (unsigned int)max_length )
        sub_1C2D6F4(Master_object, v2, v3);
      v9 = BonusSelectSummonPartyServantListViewManager_TypeInfo;
      v10 = v7->m_Items[v8];
      if ( !BonusSelectSummonPartyServantListViewManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BonusSelectSummonPartyServantListViewManager_TypeInfo);
        v9 = BonusSelectSummonPartyServantListViewManager_TypeInfo;
      }
      SORT_SAVE_KEY_FORMAT = v9->static_fields->SORT_SAVE_KEY_FORMAT;
      v31 = v10;
      v12 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v31, v3, v4, v5);
      v13 = System_String__Format(SORT_SAVE_KEY_FORMAT, v12, 0);
      v14 = (ListViewSort_o *)sub_1C2D6DC(ListViewSort_TypeInfo);
      ListViewSort___ctor_43600724(v14, v13, 27, 0, 0);
      SORT_SAVE_KEY_FORMAT_EX1 = BonusSelectSummonPartyServantListViewManager_TypeInfo->static_fields->SORT_SAVE_KEY_FORMAT_EX1;
      v30 = v10;
      v19 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v30, v16, v17, v18);
      v20 = System_String__Format(SORT_SAVE_KEY_FORMAT_EX1, v19, 0);
      v21 = (ListViewSort_o *)sub_1C2D6DC(ListViewSort_TypeInfo);
      ListViewSort___ctor_43600724(v21, v20, 27, 0, 0);
      SORT_SAVE_KEY_FORMAT_EX2 = BonusSelectSummonPartyServantListViewManager_TypeInfo->static_fields->SORT_SAVE_KEY_FORMAT_EX2;
      v29 = v10;
      v26 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v29, v23, v24, v25);
      v27 = System_String__Format(SORT_SAVE_KEY_FORMAT_EX2, v26, 0);
      v28 = (ListViewSort_o *)sub_1C2D6DC(ListViewSort_TypeInfo);
      ListViewSort___ctor_43600724(v28, v27, 27, 0, 0);
      if ( !v14 )
        break;
      ListViewSort__DeleteContinueData(v14, 0);
      if ( !v21 )
        break;
      ListViewSort__DeleteContinueData(v21, 0);
      if ( !v28 )
        break;
      ListViewSort__DeleteContinueData(v28, 0);
      LODWORD(max_length) = v7->max_length;
      if ( (__int64)++v8 >= (int)max_length )
        return;
    }
LABEL_17:
    sub_1C2D6EC(Master_object, v2);
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

  if ( (byte_4C236CB & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&Method_ListViewSort_Save__);
    sub_1C2D490(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4C236CB = 1;
  }
  if ( isDecide )
  {
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0);
    BonusSelectSummonPartyServantListViewManager__SetFilterButtonImage(this, v5);
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  sort = (Il2CppObject *)this->fields.sort;
  v8 = (CommonUI_o *)Instance;
  v9 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
  System_Action___ctor(v9, sort, Method_ListViewSort_Save__, 0);
  if ( !v8 )
    sub_1C2D6EC(v10, v11);
  CommonUI__CloseServantFilterSelectMenu(v8, v9, 0);
}


// local variable allocation has failed, the output may be wrong!
void BonusSelectSummonPartyServantListViewManager__EndShowServantStatusDialog(
        BonusSelectSummonPartyServantListViewManager_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  UIProgressBar_o *scrollBar; // x0

  if ( (byte_4C236C6 & 1) == 0 )
  {
    sub_1C2D490(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4C236C6 = 1;
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
  scrollBar = (UIProgressBar_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !scrollBar )
LABEL_9:
    sub_1C2D6EC(scrollBar, isDecide);
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

  if ( (byte_4C236D1 & 1) == 0 )
  {
    sub_1C2D490(&BonusSelectSummonPartyServantListViewItem_TypeInfo);
    this = (BonusSelectSummonPartyServantListViewManager_o *)sub_1C2D490(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    byte_4C236D1 = 1;
  }
  *index = -1;
  if ( sum >= 1 )
  {
    if ( !list )
LABEL_16:
      sub_1C2D6EC(this, index);
    v8 = 0;
    while ( 1 )
    {
      this = (BonusSelectSummonPartyServantListViewManager_o *)System_Collections_Generic_List_object___get_Item(
                                                                 (System_Collections_Generic_List_object__o *)list,
                                                                 v8,
                                                                 (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
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
    sub_1C2D6EC(0, method);
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

  if ( (byte_4C236CA & 1) == 0 )
  {
    sub_1C2D490(&Method_BonusSelectSummonPartyServantListViewManager_EndSelectFilterKind__);
    sub_1C2D490(&Method_BonusSelectSummonPartyServantListViewManager_OnClickFilterKind__);
    sub_1C2D490(&ServantFilterSelectMenu_CallbackFunc_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4C236CA = 1;
  }
  if ( this->fields.isInput )
  {
    v3 = Method_BonusSelectSummonPartyServantListViewManager_OnClickFilterKind__;
    if ( (*((_BYTE *)Method_BonusSelectSummonPartyServantListViewManager_OnClickFilterKind__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C2D4A8(Method_BonusSelectSummonPartyServantListViewManager_OnClickFilterKind__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C2D474(v3, v3[4]);
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
          Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          sort = this->fields.sort;
          v14 = (CommonUI_o *)Instance;
          v15 = (ServantFilterSelectMenu_CallbackFunc_o *)sub_1C2D6DC(ServantFilterSelectMenu_CallbackFunc_TypeInfo);
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
    sub_1C2D6EC(gachaBonusSelectEntity, v6);
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
  if ( (byte_4C236C4 & 1) == 0 )
  {
    this = (BonusSelectSummonPartyServantListViewManager_o *)sub_1C2D490(&Method_BonusSelectSummonPartyServantListViewManager_OnClickSelectListView__);
    byte_4C236C4 = 1;
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
          v5 = (_QWORD *)sub_1C2D4A8(Method_BonusSelectSummonPartyServantListViewManager_OnClickSelectListView__);
        v6 = (System_Reflection_MethodBase_o *)sub_1C2D474(v5, v5[4]);
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
        sub_1C2D6EC(this, obj);
      }
    }
  }
  v12 = Method_BonusSelectSummonPartyServantListViewManager_OnClickSelectListView__;
  if ( (*((_BYTE *)Method_BonusSelectSummonPartyServantListViewManager_OnClickSelectListView__ + 83) & 2) != 0 )
    v12 = (_QWORD *)sub_1C2D4A8(Method_BonusSelectSummonPartyServantListViewManager_OnClickSelectListView__);
  v13 = (System_Reflection_MethodBase_o *)sub_1C2D474(v12, v12[4]);
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

  if ( (byte_4C236CE & 1) == 0 )
  {
    sub_1C2D490(&Method_BonusSelectSummonPartyServantListViewManager_OnClickSortAscendingOrder__);
    byte_4C236CE = 1;
  }
  if ( this->fields.isInput )
  {
    v3 = Method_BonusSelectSummonPartyServantListViewManager_OnClickSortAscendingOrder__;
    if ( (*((_BYTE *)Method_BonusSelectSummonPartyServantListViewManager_OnClickSortAscendingOrder__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C2D4A8(Method_BonusSelectSummonPartyServantListViewManager_OnClickSortAscendingOrder__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C2D474(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    sort = this->fields.sort;
    if ( !sort )
      sub_1C2D6EC(v5, v6);
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

  if ( (byte_4C236CC & 1) == 0 )
  {
    sub_1C2D490(&Method_BonusSelectSummonPartyServantListViewManager_OnClickSortKind__);
    byte_4C236CC = 1;
  }
  if ( this->fields.isInput )
  {
    v3 = Method_BonusSelectSummonPartyServantListViewManager_OnClickSortKind__;
    if ( (*((_BYTE *)Method_BonusSelectSummonPartyServantListViewManager_OnClickSortKind__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C2D4A8(Method_BonusSelectSummonPartyServantListViewManager_OnClickSortKind__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C2D474(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    sort = this->fields.sort;
    if ( !sort )
      sub_1C2D6EC(v5, v6);
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

  if ( (byte_4C236C5 & 1) == 0 )
  {
    sub_1C2D490(&Method_BonusSelectSummonPartyServantListViewManager_EndShowServantStatusDialog__);
    sub_1C2D490(&Method_BonusSelectSummonPartyServantListViewManager_OnLongPushListView__);
    sub_1C2D490(&ServantStatusDialog_EndDelegate_TypeInfo);
    sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C2D490(&ServantLeaderInfo_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4C236C5 = 1;
  }
  scrollBar = (UIProgressBar_o *)this->fields.scrollBar;
  if ( !scrollBar )
    goto LABEL_13;
  this->fields.tmpScrollBarValueForLongPush = UIProgressBar__get_value(scrollBar, 0);
  v6 = Method_BonusSelectSummonPartyServantListViewManager_OnLongPushListView__;
  if ( (*((_BYTE *)Method_BonusSelectSummonPartyServantListViewManager_OnLongPushListView__ + 83) & 2) != 0 )
    v6 = (_QWORD *)sub_1C2D4A8(Method_BonusSelectSummonPartyServantListViewManager_OnLongPushListView__);
  v7 = (System_Reflection_MethodBase_o *)sub_1C2D474(v6, v6[4]);
  OverwriteAssetSoundName__PlaySystemSe(v7, 0, 0, 0);
  scrollBar = (UIProgressBar_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
  v12 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v15, 0);
  v13 = (ServantLeaderInfo_o *)sub_1C2D6DC(ServantLeaderInfo_TypeInfo);
  ServantLeaderInfo___ctor_43240808(v13, v12, 0, 1, 0);
  v14 = (ServantStatusDialog_EndDelegate_o *)sub_1C2D6DC(ServantStatusDialog_EndDelegate_TypeInfo);
  ServantStatusDialog_EndDelegate___ctor(
    v14,
    (Il2CppObject *)this,
    Method_BonusSelectSummonPartyServantListViewManager_EndShowServantStatusDialog__,
    0);
  if ( !v8 )
LABEL_13:
    sub_1C2D6EC(scrollBar, obj);
  CommonUI__OpenServantStatusDialog_31180036(v8, 7, v13, v14, 0);
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

  if ( (byte_4C236C1 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_BonusSelectSummonPartyServantListViewObject__Dispose__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_BonusSelectSummonPartyServantListViewObject__MoveNext__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_BonusSelectSummonPartyServantListViewObject__get_Current__);
    sub_1C2D490(&Method_System_Collections_Generic_List_BonusSelectSummonPartyServantListViewObject__GetEnumerator__);
    byte_4C236C1 = 1;
  }
  memset(&v9, 0, sizeof(v9));
  ObjectList = (System_Collections_Generic_List_object__o *)BonusSelectSummonPartyServantListViewManager__get_ObjectList(
                                                              this,
                                                              *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_1C2D6EC(0, v6);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v9,
    ObjectList,
    (const MethodInfo_378A67C *)Method_System_Collections_Generic_List_BonusSelectSummonPartyServantListViewObject__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v9,
            (const MethodInfo_3514508 *)Method_System_Collections_Generic_List_Enumerator_BonusSelectSummonPartyServantListViewObject__MoveNext__) )
  {
    if ( !v9.fields._current )
      sub_1C2D6EC(0, v7);
    BonusSelectSummonPartyServantListViewObject__Init(
      (BonusSelectSummonPartyServantListViewObject_o *)v9.fields._current,
      mode,
      v8);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v9,
    (const MethodInfo_3514504 *)Method_System_Collections_Generic_List_Enumerator_BonusSelectSummonPartyServantListViewObject__Dispose__);
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

  if ( (byte_4C236C8 & 1) == 0 )
  {
    sub_1C2D490(&BonusSelectSummonPartyServantListViewManager_TypeInfo);
    byte_4C236C8 = 1;
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
    sub_1C2D6EC(servantSortInfo, *(_QWORD *)&scaleType);
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

  if ( (byte_4C236CF & 1) == 0 )
  {
    sub_1C2D490(&BonusSelectSummonPartyServantListViewManager_TypeInfo);
    byte_4C236CF = 1;
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
    sub_1C2D6EC(servantSortInfo, isAscendingOrder);
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

  if ( (byte_4C236CD & 1) == 0 )
  {
    sub_1C2D490(&BonusSelectSummonPartyServantListViewManager_TypeInfo);
    byte_4C236CD = 1;
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
    sub_1C2D6EC(servantSortInfo, *(_QWORD *)&sortKind);
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
  if ( (byte_4C236C2 & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_17481/*"btn_filter_on"*/);
    this = (BonusSelectSummonPartyServantListViewManager_o *)sub_1C2D490(&StringLiteral_17480/*"btn_filter"*/);
    byte_4C236C2 = 1;
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
    sub_1C2D6EC(this, method);
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
  v8 = (System_String_o **)&StringLiteral_17480/*"btn_filter"*/;
  if ( ((unsigned __int8)this & 1) == 0 )
    v8 = (System_String_o **)&StringLiteral_17481/*"btn_filter_on"*/;
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
    sub_1C2D6EC(scrollView, v5);
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
  if ( (byte_4C236C9 & 1) == 0 )
  {
    this = (BonusSelectSummonPartyServantListViewManager_o *)sub_1C2D490(&BonusSelectSummonPartyServantListViewObject_TypeInfo);
    byte_4C236C9 = 1;
  }
  if ( !obj
    || (naturalAligment = BonusSelectSummonPartyServantListViewObject_TypeInfo->_2.naturalAligment,
        obj->klass->_2.naturalAligment < (unsigned int)naturalAligment)
    || (BonusSelectSummonPartyServantListViewObject_c *)obj->klass->_2.typeHierarchy[naturalAligment - 1] != BonusSelectSummonPartyServantListViewObject_TypeInfo )
  {
    sub_1C2D6EC(this, obj);
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
  if ( (byte_4C236C3 & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_17615/*"btn_txt_up"*/);
    this = (BonusSelectSummonPartyServantListViewManager_o *)sub_1C2D490(&StringLiteral_17556/*"btn_txt_down"*/);
    byte_4C236C3 = 1;
  }
  sort = v2->fields.sort;
  if ( !sort || (this = (BonusSelectSummonPartyServantListViewManager_o *)v2->fields.sortExplanationSprite) == 0 )
    sub_1C2D6EC(this, method);
  if ( sort->fields.isAscendingOrder )
    v4 = (System_String_o **)&StringLiteral_17615/*"btn_txt_up"*/;
  else
    v4 = (System_String_o **)&StringLiteral_17556/*"btn_txt_down"*/;
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

  if ( (byte_4C236D0 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_1C2D490(&Method_UnityEngine_GameObject_GetComponent_BonusSelectSummonPartyServantListViewObject___);
    sub_1C2D490(&Method_System_Collections_Generic_List_BonusSelectSummonPartyServantListViewObject__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_1C2D490(&Method_System_Collections_Generic_List_BonusSelectSummonPartyServantListViewObject___ctor__);
    sub_1C2D490(&System_Collections_Generic_List_BonusSelectSummonPartyServantListViewObject__TypeInfo);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C236D0 = 1;
  }
  memset(&v19, 0, sizeof(v19));
  v3 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_BonusSelectSummonPartyServantListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_BonusSelectSummonPartyServantListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_1C2D6EC(0, v4);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v18,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_378A67C *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v19 = v18;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v19,
            (const MethodInfo_3514508 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v19.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v7 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0, 0);
    if ( v7 )
    {
      if ( !current )
        sub_1C2D6EC(v7, v8);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_3125ED0 *)Method_UnityEngine_GameObject_GetComponent_BonusSelectSummonPartyServantListViewObject___);
      v12 = Component_object;
      if ( !v3 )
        sub_1C2D6EC(Component_object, Component_object);
      items = v3->fields._items;
      v14 = Method_System_Collections_Generic_List_BonusSelectSummonPartyServantListViewObject__Add__;
      ++v3->fields._version;
      if ( !items )
        sub_1C2D6EC(Component_object, Component_object);
      size = v3->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v3,
          Component_object,
          *(const MethodInfo_3789B84 **)(*(_QWORD *)(v14[4] + 192LL) + 112LL));
      }
      else
      {
        v16 = &items->obj.klass + size;
        v3->fields._size = size + 1;
        v16[4] = (Il2CppClass *)v12;
        sub_1C2D434((CGThumbnailListItem_o *)(v16 + 4), (int32_t)v12, v10, v11);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v19,
    (const MethodInfo_3514504 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
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
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.m_target, (int32_t)object, method, a4);
  v8 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1C2D550(method) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1C2D708(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C2D5B8(v10, 0);
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
  this->fields.invoke_impl = (intptr_t)sub_1A6D934;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1A6D8DC;
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
  __int64 v9; // x2
  __int64 v10; // x3
  __int64 v11; // x4
  _QWORD v13[3]; // [xsp+8h] [xbp-58h] BYREF
  int32_t v14; // [xsp+28h] [xbp-38h] BYREF
  int32_t v15; // [xsp+2Ch] [xbp-34h] BYREF

  v14 = result;
  v15 = kind;
  if ( (byte_4C236D3 & 1) == 0 )
  {
    sub_1C2D490(&int_TypeInfo);
    sub_1C2D490(&BonusSelectSummonPartyServantListViewManager_ResultKind_TypeInfo);
    byte_4C236D3 = 1;
  }
  v13[2] = 0;
  v13[0] = j_il2cpp_value_box_0(
             BonusSelectSummonPartyServantListViewManager_ResultKind_TypeInfo,
             &v15,
             *(_QWORD *)&result,
             callback,
             object);
  v13[1] = j_il2cpp_value_box_0(int_TypeInfo, &v14, v9, v10, v11);
  return (System_IAsyncResult_o *)sub_1C2D444(this, v13, callback, object);
}


void BonusSelectSummonPartyServantListViewManager_CallbackFunc__EndInvoke(
        BonusSelectSummonPartyServantListViewManager_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C2D448(result, 0, method);
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
  if ( (byte_4C236D4 & 1) == 0 )
  {
    this = (BonusSelectSummonPartyServantListViewManager___c__DisplayClass19_0_o *)sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4C236D4 = 1;
  }
  servantEntity = v4->fields.servantEntity;
  if ( !servantEntity )
    sub_1C2D6EC(this, *(_QWORD *)&id);
  v7 = *(_QWORD *)&servantEntity->fields.id.fields.currentCryptoKey;
  v6 = *(_QWORD *)&servantEntity->fields.id.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v9.fields.currentCryptoKey = v7;
  *(_QWORD *)&v9.fields.fakeValue = v6;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v9, 0) == id;
}