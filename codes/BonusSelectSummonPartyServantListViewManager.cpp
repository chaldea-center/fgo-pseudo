void BonusSelectSummonPartyServantListViewManager___cctor(const MethodInfo *method)
{
  int32_t v1; // w2
  int32_t v2; // w3
  System_String_o *v3; // x4
  int32_t v4; // w5
  int64_t v5; // x6
  System_String_o *v6; // x7
  int32_t v7; // w1
  struct BonusSelectSummonPartyServantListViewManager_StaticFields *static_fields; // x0
  int32_t v9; // w2
  int32_t v10; // w3
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7
  int32_t v15; // w1
  struct BonusSelectSummonPartyServantListViewManager_StaticFields *v16; // x0
  int32_t v17; // w2
  int32_t v18; // w3
  System_String_o *v19; // x4
  int32_t v20; // w5
  int64_t v21; // x6
  System_String_o *v22; // x7

  if ( (byte_4CEA9B0 & 1) == 0 )
  {
    sub_1C7BAE8(&BonusSelectSummonPartyServantListViewManager_TypeInfo);
    sub_1C7BAE8(&StringLiteral_3209/*"BonusSelectSummonPartyServant_Extra2_{0}"*/);
    sub_1C7BAE8(&StringLiteral_3210/*"BonusSelectSummonPartyServant_{0}"*/);
    sub_1C7BAE8(&StringLiteral_3208/*"BonusSelectSummonPartyServant_Extra1_{0}"*/);
    byte_4CEA9B0 = 1;
  }
  BonusSelectSummonPartyServantListViewManager_TypeInfo->static_fields->SORT_SAVE_KEY_FORMAT = (struct System_String_o *)StringLiteral_3210/*"BonusSelectSummonPartyServant_{0}"*/;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)BonusSelectSummonPartyServantListViewManager_TypeInfo->static_fields,
    StringLiteral_3210/*"BonusSelectSummonPartyServant_{0}"*/,
    v1,
    v2,
    v3,
    v4,
    v5,
    v6);
  v7 = StringLiteral_3208/*"BonusSelectSummonPartyServant_Extra1_{0}"*/;
  static_fields = BonusSelectSummonPartyServantListViewManager_TypeInfo->static_fields;
  static_fields->SORT_SAVE_KEY_FORMAT_EX1 = (struct System_String_o *)StringLiteral_3208/*"BonusSelectSummonPartyServant_Extra1_{0}"*/;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&static_fields->SORT_SAVE_KEY_FORMAT_EX1, v7, v9, v10, v11, v12, v13, v14);
  v15 = StringLiteral_3209/*"BonusSelectSummonPartyServant_Extra2_{0}"*/;
  v16 = BonusSelectSummonPartyServantListViewManager_TypeInfo->static_fields;
  v16->SORT_SAVE_KEY_FORMAT_EX2 = (struct System_String_o *)StringLiteral_3209/*"BonusSelectSummonPartyServant_Extra2_{0}"*/;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&v16->SORT_SAVE_KEY_FORMAT_EX2, v15, v17, v18, v19, v20, v21, v22);
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
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  BonusSelectSummonPartyServantListViewManager_o *v8; // x19
  unsigned int scaleType; // w8
  struct ListViewItemSeed_o *smallSizeSeed; // x1
  BonusSelectSummonPartyServantListViewManager_o *v11; // x0
  int v12; // w8
  GrandQuestFolderBoardItem_o *p_seed; // x0
  __int64 v14; // x1
  const MethodInfo *v15; // x2
  System_Collections_Generic_List_object__o *itemList; // x0
  int32_t v17; // w20
  Il2CppObject *Item; // x0
  ListViewItem_o *v19; // x21
  __int64 naturalAligment; // x10
  UnityEngine_Object_o *klass; // x22

  v8 = this;
  if ( (byte_4CEA9A5 & 1) == 0 )
  {
    sub_1C7BAE8(&BonusSelectSummonPartyServantListViewItem_TypeInfo);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    this = (BonusSelectSummonPartyServantListViewManager_o *)sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    byte_4CEA9A5 = 1;
  }
  scaleType = v8->fields.scaleType;
  if ( scaleType < 2 )
  {
    smallSizeSeed = v8->fields.smallSizeSeed;
    v11 = v8;
    v12 = 2;
  }
  else if ( scaleType == 2 )
  {
    smallSizeSeed = v8->fields.extremelySmallSizeSeed;
    v11 = v8;
    v12 = 3;
  }
  else
  {
    if ( scaleType != 3 )
      goto LABEL_10;
    smallSizeSeed = v8->fields.normalSizeSeed;
    v11 = v8;
    v12 = 1;
  }
  v11->fields.seed = smallSizeSeed;
  p_seed = (GrandQuestFolderBoardItem_o *)&v11->fields.seed;
  p_seed[1].fields._WarId_k__BackingField = v12;
  sub_1C7BA8C(p_seed, (int32_t)smallSizeSeed, (int32_t)v2, v3, v4, v5, v6, v7);
LABEL_10:
  BonusSelectSummonPartyServantListViewManager__SetAndSaveIconScaleType(this, v8->fields.scaleType, v2);
  itemList = (System_Collections_Generic_List_object__o *)v8->fields.itemList;
  if ( !itemList )
LABEL_22:
    sub_1C7BD40(itemList, v14);
  v17 = 0;
  while ( v17 < itemList->fields._size )
  {
    Item = System_Collections_Generic_List_object___get_Item(
             itemList,
             v17,
             (const MethodInfo_383EB2C *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    if ( Item )
    {
      v19 = (ListViewItem_o *)Item;
      naturalAligment = BonusSelectSummonPartyServantListViewItem_TypeInfo->_2.naturalAligment;
      if ( Item->klass->_2.naturalAligment >= (unsigned int)naturalAligment
        && (BonusSelectSummonPartyServantListViewItem_c *)Item->klass->_2.typeHierarchy[naturalAligment - 1] == BonusSelectSummonPartyServantListViewItem_TypeInfo )
      {
        klass = (UnityEngine_Object_o *)Item[7].klass;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( !UnityEngine_Object__op_Equality(klass, 0, 0) )
        {
          itemList = (System_Collections_Generic_List_object__o *)v19->fields.viewObject;
          if ( !itemList )
            goto LABEL_22;
          ListViewObject__SetItemSeed((ListViewObject_o *)itemList, v19, v8->fields.seed, 0);
        }
      }
    }
    itemList = (System_Collections_Generic_List_object__o *)v8->fields.itemList;
    ++v17;
    if ( !itemList )
      goto LABEL_22;
  }
  BonusSelectSummonPartyServantListViewManager__SetMode(v8, 2, v15);
  ListViewManager__SortItem((ListViewManager_o *)v8, -1, 0, -1, 0);
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
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7
  BonusSelectSummonPartyServantListViewManager_c *v16; // x0
  struct ListViewSort_o *servantSortInfoExtra2; // x1
  BonusSelectSummonPartyServantListViewManager_c *v18; // x0
  BonusSelectSummonPartyServantListViewManager_c *v19; // x0
  int32_t v20; // w2
  int32_t v21; // w3
  System_String_o *v22; // x4
  int32_t v23; // w5
  int64_t v24; // x6
  System_String_o *v25; // x7
  struct ListViewSort_o *v26; // x8
  int32_t sortKind; // w9
  unsigned int iconScaleKind; // w9
  struct ListViewItemSeed_o *normalSizeSeed; // x1
  Il2CppObject *Master_object; // x22
  Il2CppObject *v31; // x23
  GachaBonusSelectLineupEntity_array *v32; // x8
  __int64 v33; // x28
  unsigned int v34; // w21
  __int64 v35; // x24
  __int64 v36; // x8
  int32_t v37; // w2
  int32_t v38; // w3
  System_String_o *v39; // x4
  int32_t v40; // w5
  int64_t v41; // x6
  System_String_o *v42; // x7
  System_Func_int__bool__o *v43; // x26
  struct BonusSelectSummonPartyServantSelectMenu_o *partyServantSelectMenu; // x9
  GachaBonusSelectLineupEntity_o *v45; // x26
  ServantEntity_o *v46; // x25
  BonusSelectSummonPartyOrganizationListViewItem_o *organizationItem; // x27
  char v48; // w29
  BonusSelectSummonPartyServantListViewItem_o *v49; // x24
  const MethodInfo *v50; // x6
  int32_t v51; // w2
  int32_t v52; // w3
  System_String_o *v53; // x4
  int32_t v54; // w5
  int64_t v55; // x6
  System_String_o *v56; // x7
  __int64 v57; // x8
  _QWORD *v58; // x9
  __int64 v59; // x10
  __int64 v60; // x8
  UILabel_o *emptyMessageLabel; // x20
  const MethodInfo *v62; // x1
  const MethodInfo *v63; // x1
  GachaBonusSelectLineupEntity_array *gachaBonusSelectLineupEntities; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4CEA99E & 1) == 0 )
  {
    sub_1C7BAE8(&Method_BasicHelper_Any_int____78794392);
    sub_1C7BAE8(&BonusSelectSummonPartyServantListViewItem_TypeInfo);
    sub_1C7BAE8(&BonusSelectSummonPartyServantListViewManager_TypeInfo);
    sub_1C7BAE8(&Method_DataManager_GetMaster_GachaBonusSelectLineupMaster___);
    sub_1C7BAE8(&Method_DataManager_GetMaster_GiftMaster___);
    sub_1C7BAE8(&Method_DataManager_GetMaster_ServantMaster___);
    sub_1C7BAE8(&DataManager_TypeInfo);
    sub_1C7BAE8(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C7BAE8(&System_Func_int__bool__TypeInfo);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    sub_1C7BAE8(&LocalizationManager_TypeInfo);
    sub_1C7BAE8(&Method_BonusSelectSummonPartyServantListViewManager___c__DisplayClass19_0__CreateList_b__0__);
    sub_1C7BAE8(&BonusSelectSummonPartyServantListViewManager___c__DisplayClass19_0_TypeInfo);
    sub_1C7BAE8(&StringLiteral_11858/*"SERVANT_SORT_FILTER_RESULT_EMPTY"*/);
    byte_4CEA99E = 1;
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
    v18 = BonusSelectSummonPartyServantListViewManager_TypeInfo;
    if ( !BonusSelectSummonPartyServantListViewManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BonusSelectSummonPartyServantListViewManager_TypeInfo);
      v18 = BonusSelectSummonPartyServantListViewManager_TypeInfo;
    }
    servantSortInfoExtra2 = v18->static_fields->servantSortInfoExtra2;
  }
  else if ( ClassId == 1004 )
  {
    v16 = BonusSelectSummonPartyServantListViewManager_TypeInfo;
    if ( !BonusSelectSummonPartyServantListViewManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BonusSelectSummonPartyServantListViewManager_TypeInfo);
      v16 = BonusSelectSummonPartyServantListViewManager_TypeInfo;
    }
    servantSortInfoExtra2 = v16->static_fields->servantSortInfoExtra1;
  }
  else
  {
    v19 = BonusSelectSummonPartyServantListViewManager_TypeInfo;
    if ( !BonusSelectSummonPartyServantListViewManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BonusSelectSummonPartyServantListViewManager_TypeInfo);
      v19 = BonusSelectSummonPartyServantListViewManager_TypeInfo;
    }
    servantSortInfoExtra2 = v19->static_fields->servantSortInfo;
  }
  this->fields.sort = servantSortInfoExtra2;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields.sort,
    (int32_t)servantSortInfoExtra2,
    v10,
    v11,
    v12,
    v13,
    v14,
    v15);
  sort = this->fields.sort;
  if ( !sort )
    goto LABEL_59;
  ListViewSort__Load((ListViewSort_o *)sort, 0);
  v26 = this->fields.sort;
  if ( !v26 )
    goto LABEL_59;
  sortKind = v26->fields.sortKind;
  if ( sortKind != 4 && sortKind != 27 )
    v26->fields.sortKind = 27;
  iconScaleKind = v26->fields.iconScaleKind;
  v26->fields.isBonusKind = 0;
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
    sub_1C7BA8C(
      (GrandQuestFolderBoardItem_o *)&this->fields.seed,
      (int32_t)normalSizeSeed,
      v20,
      v21,
      v22,
      v23,
      v24,
      v25);
  }
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_31703A0 *)Method_DataManager_GetMaster_GiftMaster___);
  v31 = DataManager__GetMaster_object_((const MethodInfo_31703A0 *)Method_DataManager_GetMaster_ServantMaster___);
  sort = DataManager__GetMaster_object_((const MethodInfo_31703A0 *)Method_DataManager_GetMaster_GachaBonusSelectLineupMaster___);
  if ( !sort )
    goto LABEL_59;
  sort = (void *)GachaBonusSelectLineupMaster__TryGetEntityList(
                   (GachaBonusSelectLineupMaster_o *)sort,
                   &gachaBonusSelectLineupEntities,
                   gachaBonusSelectEntity->fields.gachaBonusSelectLineupId,
                   0);
  if ( ((unsigned __int8)sort & 1) != 0 )
  {
    v32 = gachaBonusSelectLineupEntities;
    if ( !gachaBonusSelectLineupEntities )
      goto LABEL_59;
    v33 = 4;
    while ( 1 )
    {
      v34 = v33 - 4;
      if ( (int)v33 - 4 >= SLODWORD(v32->max_length) )
        break;
      v35 = sub_1C7BD34(BonusSelectSummonPartyServantListViewManager___c__DisplayClass19_0_TypeInfo);
      System_Object___ctor((Il2CppObject *)v35, 0);
      if ( !gachaBonusSelectLineupEntities )
        goto LABEL_59;
      if ( v34 >= LODWORD(gachaBonusSelectLineupEntities->max_length) )
        goto LABEL_60;
      v36 = *((_QWORD *)&gachaBonusSelectLineupEntities->obj.klass + v33);
      if ( !v36 || !Master_object )
        goto LABEL_59;
      sort = GiftMaster__getDataById((GiftMaster_o *)Master_object, *(_DWORD *)(v36 + 24), 0);
      if ( sort )
      {
        if ( !v31 )
          goto LABEL_59;
        sort = DataMasterBase_object__object__int___GetEntity(
                 (DataMasterBase_TMaster__TEntity__PKType__o *)v31,
                 *((_DWORD *)sort + 6),
                 (const MethodInfo_342E2FC *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
        v8 = (const MethodInfo *)sort;
        if ( !v35 )
          goto LABEL_59;
      }
      else
      {
        v8 = 0;
        if ( !v35 )
          goto LABEL_59;
      }
      *(_QWORD *)(v35 + 16) = v8;
      sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v35 + 16), (int32_t)v8, v37, v38, v39, v40, v41, v42);
      v43 = (System_Func_int__bool__o *)sub_1C7BD34(System_Func_int__bool__TypeInfo);
      System_Func_int__bool____ctor(
        v43,
        (Il2CppObject *)v35,
        Method_BonusSelectSummonPartyServantListViewManager___c__DisplayClass19_0__CreateList_b__0__,
        0);
      sort = (void *)BasicHelper__Any_int__51745960(
                       notPossibleSvtIdList,
                       (System_Func_T__bool__o *)v43,
                       (const MethodInfo_31594A8 *)Method_BasicHelper_Any_int____78794392);
      if ( !gachaBonusSelectLineupEntities )
        goto LABEL_59;
      if ( v34 >= LODWORD(gachaBonusSelectLineupEntities->max_length) )
LABEL_60:
        sub_1C7BD48(sort);
      partyServantSelectMenu = this->fields.partyServantSelectMenu;
      if ( partyServantSelectMenu )
      {
        v45 = (GachaBonusSelectLineupEntity_o *)*((_QWORD *)&gachaBonusSelectLineupEntities->obj.klass + v33);
        v46 = *(ServantEntity_o **)(v35 + 16);
        organizationItem = partyServantSelectMenu->fields.organizationItem;
        v48 = (unsigned __int8)sort ^ 1;
        v49 = (BonusSelectSummonPartyServantListViewItem_o *)sub_1C7BD34(BonusSelectSummonPartyServantListViewItem_TypeInfo);
        BonusSelectSummonPartyServantListViewItem___ctor(v49, v34, v46, v45, organizationItem, v48 & 1, v50);
        sort = this->fields.itemList;
        if ( sort )
        {
          v57 = *((_QWORD *)sort + 2);
          v58 = Method_System_Collections_Generic_List_ListViewItem__Add__;
          ++*((_DWORD *)sort + 7);
          if ( v57 )
          {
            v59 = *((int *)sort + 6);
            if ( (unsigned int)v59 >= *(_DWORD *)(v57 + 24) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                (System_Collections_Generic_List_object__o *)sort,
                (Il2CppObject *)v49,
                *(const MethodInfo_383EDFC **)(*(_QWORD *)(v58[4] + 192LL) + 112LL));
            }
            else
            {
              v60 = v57 + 8 * v59;
              *((_DWORD *)sort + 6) = v59 + 1;
              *(_QWORD *)(v60 + 32) = v49;
              sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v60 + 32), (int32_t)v49, v51, v52, v53, v54, v55, v56);
            }
            v32 = gachaBonusSelectLineupEntities;
            ++v33;
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
  sort = LocalizationManager__Get((System_String_o *)StringLiteral_11858/*"SERVANT_SORT_FILTER_RESULT_EMPTY"*/, 0);
  if ( !emptyMessageLabel )
LABEL_59:
    sub_1C7BD40(sort, v8);
  UILabel__set_text(emptyMessageLabel, (System_String_o *)sort, 0);
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0);
  BonusSelectSummonPartyServantListViewManager__SetFilterButtonImage(this, v62);
  BonusSelectSummonPartyServantListViewManager__UpdateAscendingOrderBtnSprite(this, v63);
}


void BonusSelectSummonPartyServantListViewManager__CreateSortData(int32_t gachaId, const MethodInfo *method)
{
  BonusSelectSummonPartyServantListViewManager_c *v3; // x0
  System_String_o *SORT_SAVE_KEY_FORMAT; // x20
  Il2CppObject *v5; // x0
  System_String_o *v6; // x20
  ListViewSort_o *v7; // x21
  struct BonusSelectSummonPartyServantListViewManager_StaticFields *static_fields; // x0
  int32_t v9; // w2
  int32_t v10; // w3
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7
  System_String_o *SORT_SAVE_KEY_FORMAT_EX1; // x20
  Il2CppObject *v16; // x0
  System_String_o *v17; // x20
  ListViewSort_o *v18; // x21
  struct BonusSelectSummonPartyServantListViewManager_StaticFields *v19; // x0
  int32_t v20; // w2
  int32_t v21; // w3
  System_String_o *v22; // x4
  int32_t v23; // w5
  int64_t v24; // x6
  System_String_o *v25; // x7
  System_String_o *SORT_SAVE_KEY_FORMAT_EX2; // x20
  Il2CppObject *v27; // x0
  System_String_o *v28; // x19
  ListViewSort_o *v29; // x20
  struct BonusSelectSummonPartyServantListViewManager_StaticFields *v30; // x0
  int32_t v31; // w2
  int32_t v32; // w3
  System_String_o *v33; // x4
  int32_t v34; // w5
  int64_t v35; // x6
  System_String_o *v36; // x7
  int32_t v37; // [xsp+Ch] [xbp-44h] BYREF
  int32_t v38; // [xsp+18h] [xbp-38h] BYREF
  int32_t v39; // [xsp+1Ch] [xbp-34h] BYREF

  if ( (byte_4CEA99C & 1) == 0 )
  {
    sub_1C7BAE8(&BonusSelectSummonPartyServantListViewManager_TypeInfo);
    sub_1C7BAE8(&int_TypeInfo);
    sub_1C7BAE8(&ListViewSort_TypeInfo);
    byte_4CEA99C = 1;
  }
  v3 = BonusSelectSummonPartyServantListViewManager_TypeInfo;
  if ( !BonusSelectSummonPartyServantListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BonusSelectSummonPartyServantListViewManager_TypeInfo);
    v3 = BonusSelectSummonPartyServantListViewManager_TypeInfo;
  }
  SORT_SAVE_KEY_FORMAT = v3->static_fields->SORT_SAVE_KEY_FORMAT;
  v39 = gachaId;
  v5 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v39);
  v6 = System_String__Format(SORT_SAVE_KEY_FORMAT, v5, 0);
  v7 = (ListViewSort_o *)sub_1C7BD34(ListViewSort_TypeInfo);
  ListViewSort___ctor_44358856(v7, v6, 27, 0, 0);
  static_fields = BonusSelectSummonPartyServantListViewManager_TypeInfo->static_fields;
  static_fields->servantSortInfo = v7;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&static_fields->servantSortInfo, (int32_t)v7, v9, v10, v11, v12, v13, v14);
  SORT_SAVE_KEY_FORMAT_EX1 = BonusSelectSummonPartyServantListViewManager_TypeInfo->static_fields->SORT_SAVE_KEY_FORMAT_EX1;
  v38 = gachaId;
  v16 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v38);
  v17 = System_String__Format(SORT_SAVE_KEY_FORMAT_EX1, v16, 0);
  v18 = (ListViewSort_o *)sub_1C7BD34(ListViewSort_TypeInfo);
  ListViewSort___ctor_44358856(v18, v17, 27, 0, 0);
  v19 = BonusSelectSummonPartyServantListViewManager_TypeInfo->static_fields;
  v19->servantSortInfoExtra1 = v18;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&v19->servantSortInfoExtra1, (int32_t)v18, v20, v21, v22, v23, v24, v25);
  SORT_SAVE_KEY_FORMAT_EX2 = BonusSelectSummonPartyServantListViewManager_TypeInfo->static_fields->SORT_SAVE_KEY_FORMAT_EX2;
  v37 = gachaId;
  v27 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v37);
  v28 = System_String__Format(SORT_SAVE_KEY_FORMAT_EX2, v27, 0);
  v29 = (ListViewSort_o *)sub_1C7BD34(ListViewSort_TypeInfo);
  ListViewSort___ctor_44358856(v29, v28, 27, 0, 0);
  v30 = BonusSelectSummonPartyServantListViewManager_TypeInfo->static_fields;
  v30->servantSortInfoExtra2 = v29;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&v30->servantSortInfoExtra2, (int32_t)v29, v31, v32, v33, v34, v35, v36);
}


void BonusSelectSummonPartyServantListViewManager__DeleteContinueData(const MethodInfo *method)
{
  System_Int32_array *Master_object; // x0
  __int64 v2; // x1
  il2cpp_array_size_t max_length; // x8
  System_Int32_array *v4; // x19
  unsigned __int64 v5; // x24
  BonusSelectSummonPartyServantListViewManager_c *v6; // x0
  int32_t v7; // w23
  System_String_o *SORT_SAVE_KEY_FORMAT; // x20
  Il2CppObject *v9; // x0
  System_String_o *v10; // x21
  ListViewSort_o *v11; // x20
  System_String_o *SORT_SAVE_KEY_FORMAT_EX1; // x21
  Il2CppObject *v13; // x0
  System_String_o *v14; // x22
  ListViewSort_o *v15; // x21
  System_String_o *SORT_SAVE_KEY_FORMAT_EX2; // x22
  Il2CppObject *v17; // x0
  System_String_o *v18; // x23
  ListViewSort_o *v19; // x22
  int32_t v20; // [xsp+Ch] [xbp-64h] BYREF
  int32_t v21; // [xsp+18h] [xbp-58h] BYREF
  int32_t v22; // [xsp+1Ch] [xbp-54h] BYREF

  if ( (byte_4CEA99D & 1) == 0 )
  {
    sub_1C7BAE8(&BonusSelectSummonPartyServantListViewManager_TypeInfo);
    sub_1C7BAE8(&Method_DataManager_GetMaster_GachaMaster___);
    sub_1C7BAE8(&DataManager_TypeInfo);
    sub_1C7BAE8(&int_TypeInfo);
    sub_1C7BAE8(&ListViewSort_TypeInfo);
    byte_4CEA99D = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (System_Int32_array *)DataManager__GetMaster_object_((const MethodInfo_31703A0 *)Method_DataManager_GetMaster_GachaMaster___);
  if ( !Master_object )
    goto LABEL_17;
  Master_object = GachaMaster__GetClosedBonusSelectGachaIdList((GachaMaster_o *)Master_object, 0);
  if ( !Master_object )
    goto LABEL_17;
  max_length = Master_object->max_length;
  v4 = Master_object;
  if ( (int)max_length >= 1 )
  {
    v5 = 0;
    while ( 1 )
    {
      if ( v5 >= (unsigned int)max_length )
        sub_1C7BD48(Master_object);
      v6 = BonusSelectSummonPartyServantListViewManager_TypeInfo;
      v7 = v4->m_Items[v5];
      if ( !BonusSelectSummonPartyServantListViewManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BonusSelectSummonPartyServantListViewManager_TypeInfo);
        v6 = BonusSelectSummonPartyServantListViewManager_TypeInfo;
      }
      SORT_SAVE_KEY_FORMAT = v6->static_fields->SORT_SAVE_KEY_FORMAT;
      v22 = v7;
      v9 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v22);
      v10 = System_String__Format(SORT_SAVE_KEY_FORMAT, v9, 0);
      v11 = (ListViewSort_o *)sub_1C7BD34(ListViewSort_TypeInfo);
      ListViewSort___ctor_44358856(v11, v10, 27, 0, 0);
      SORT_SAVE_KEY_FORMAT_EX1 = BonusSelectSummonPartyServantListViewManager_TypeInfo->static_fields->SORT_SAVE_KEY_FORMAT_EX1;
      v21 = v7;
      v13 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v21);
      v14 = System_String__Format(SORT_SAVE_KEY_FORMAT_EX1, v13, 0);
      v15 = (ListViewSort_o *)sub_1C7BD34(ListViewSort_TypeInfo);
      ListViewSort___ctor_44358856(v15, v14, 27, 0, 0);
      SORT_SAVE_KEY_FORMAT_EX2 = BonusSelectSummonPartyServantListViewManager_TypeInfo->static_fields->SORT_SAVE_KEY_FORMAT_EX2;
      v20 = v7;
      v17 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v20);
      v18 = System_String__Format(SORT_SAVE_KEY_FORMAT_EX2, v17, 0);
      v19 = (ListViewSort_o *)sub_1C7BD34(ListViewSort_TypeInfo);
      ListViewSort___ctor_44358856(v19, v18, 27, 0, 0);
      if ( !v11 )
        break;
      ListViewSort__DeleteContinueData(v11, 0);
      if ( !v15 )
        break;
      ListViewSort__DeleteContinueData(v15, 0);
      if ( !v19 )
        break;
      ListViewSort__DeleteContinueData(v19, 0);
      LODWORD(max_length) = v4->max_length;
      if ( (__int64)++v5 >= (int)max_length )
        return;
    }
LABEL_17:
    sub_1C7BD40(Master_object, v2);
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

  if ( (byte_4CEA9A9 & 1) == 0 )
  {
    sub_1C7BAE8(&System_Action_TypeInfo);
    sub_1C7BAE8(&Method_ListViewSort_Save__);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4CEA9A9 = 1;
  }
  if ( isDecide )
  {
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0);
    BonusSelectSummonPartyServantListViewManager__SetFilterButtonImage(this, v5);
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  sort = (Il2CppObject *)this->fields.sort;
  v8 = (CommonUI_o *)Instance;
  v9 = (System_Action_o *)sub_1C7BD34(System_Action_TypeInfo);
  System_Action___ctor(v9, sort, Method_ListViewSort_Save__, 0);
  if ( !v8 )
    sub_1C7BD40(v10, v11);
  CommonUI__CloseServantFilterSelectMenu(v8, v9, 0);
}


// local variable allocation has failed, the output may be wrong!
void BonusSelectSummonPartyServantListViewManager__EndShowServantStatusDialog(
        BonusSelectSummonPartyServantListViewManager_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  UIProgressBar_o *scrollBar; // x0

  if ( (byte_4CEA9A4 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4CEA9A4 = 1;
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
  scrollBar = (UIProgressBar_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !scrollBar )
LABEL_9:
    sub_1C7BD40(scrollBar, isDecide);
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

  if ( (byte_4CEA9AF & 1) == 0 )
  {
    sub_1C7BAE8(&BonusSelectSummonPartyServantListViewItem_TypeInfo);
    this = (BonusSelectSummonPartyServantListViewManager_o *)sub_1C7BAE8(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    byte_4CEA9AF = 1;
  }
  *index = -1;
  if ( sum >= 1 )
  {
    if ( !list )
LABEL_16:
      sub_1C7BD40(this, index);
    v8 = 0;
    while ( 1 )
    {
      this = (BonusSelectSummonPartyServantListViewManager_o *)System_Collections_Generic_List_object___get_Item(
                                                                 (System_Collections_Generic_List_object__o *)list,
                                                                 v8,
                                                                 (const MethodInfo_383EB2C *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
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
    sub_1C7BD40(0, method);
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

  if ( (byte_4CEA9A8 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_BonusSelectSummonPartyServantListViewManager_EndSelectFilterKind__);
    sub_1C7BAE8(&Method_BonusSelectSummonPartyServantListViewManager_OnClickFilterKind__);
    sub_1C7BAE8(&ServantFilterSelectMenu_CallbackFunc_TypeInfo);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4CEA9A8 = 1;
  }
  if ( this->fields.isInput )
  {
    v3 = Method_BonusSelectSummonPartyServantListViewManager_OnClickFilterKind__;
    if ( (*((_BYTE *)Method_BonusSelectSummonPartyServantListViewManager_OnClickFilterKind__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C7BB00(Method_BonusSelectSummonPartyServantListViewManager_OnClickFilterKind__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C7BACC(v3, v3[4]);
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
          Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          sort = this->fields.sort;
          v14 = (CommonUI_o *)Instance;
          v15 = (ServantFilterSelectMenu_CallbackFunc_o *)sub_1C7BD34(ServantFilterSelectMenu_CallbackFunc_TypeInfo);
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
    sub_1C7BD40(gachaBonusSelectEntity, v6);
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
  if ( (byte_4CEA9A2 & 1) == 0 )
  {
    this = (BonusSelectSummonPartyServantListViewManager_o *)sub_1C7BAE8(&Method_BonusSelectSummonPartyServantListViewManager_OnClickSelectListView__);
    byte_4CEA9A2 = 1;
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
          v5 = (_QWORD *)sub_1C7BB00(Method_BonusSelectSummonPartyServantListViewManager_OnClickSelectListView__);
        v6 = (System_Reflection_MethodBase_o *)sub_1C7BACC(v5, v5[4]);
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
        sub_1C7BD40(this, obj);
      }
    }
  }
  v12 = Method_BonusSelectSummonPartyServantListViewManager_OnClickSelectListView__;
  if ( (*((_BYTE *)Method_BonusSelectSummonPartyServantListViewManager_OnClickSelectListView__ + 83) & 2) != 0 )
    v12 = (_QWORD *)sub_1C7BB00(Method_BonusSelectSummonPartyServantListViewManager_OnClickSelectListView__);
  v13 = (System_Reflection_MethodBase_o *)sub_1C7BACC(v12, v12[4]);
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

  if ( (byte_4CEA9AC & 1) == 0 )
  {
    sub_1C7BAE8(&Method_BonusSelectSummonPartyServantListViewManager_OnClickSortAscendingOrder__);
    byte_4CEA9AC = 1;
  }
  if ( this->fields.isInput )
  {
    v3 = Method_BonusSelectSummonPartyServantListViewManager_OnClickSortAscendingOrder__;
    if ( (*((_BYTE *)Method_BonusSelectSummonPartyServantListViewManager_OnClickSortAscendingOrder__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C7BB00(Method_BonusSelectSummonPartyServantListViewManager_OnClickSortAscendingOrder__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C7BACC(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    sort = this->fields.sort;
    if ( !sort )
      sub_1C7BD40(v5, v6);
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

  if ( (byte_4CEA9AA & 1) == 0 )
  {
    sub_1C7BAE8(&Method_BonusSelectSummonPartyServantListViewManager_OnClickSortKind__);
    byte_4CEA9AA = 1;
  }
  if ( this->fields.isInput )
  {
    v3 = Method_BonusSelectSummonPartyServantListViewManager_OnClickSortKind__;
    if ( (*((_BYTE *)Method_BonusSelectSummonPartyServantListViewManager_OnClickSortKind__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C7BB00(Method_BonusSelectSummonPartyServantListViewManager_OnClickSortKind__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C7BACC(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    sort = this->fields.sort;
    if ( !sort )
      sub_1C7BD40(v5, v6);
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

  if ( (byte_4CEA9A3 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_BonusSelectSummonPartyServantListViewManager_EndShowServantStatusDialog__);
    sub_1C7BAE8(&Method_BonusSelectSummonPartyServantListViewManager_OnLongPushListView__);
    sub_1C7BAE8(&ServantStatusDialog_EndDelegate_TypeInfo);
    sub_1C7BAE8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C7BAE8(&ServantLeaderInfo_TypeInfo);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4CEA9A3 = 1;
  }
  scrollBar = (UIProgressBar_o *)this->fields.scrollBar;
  if ( !scrollBar )
    goto LABEL_13;
  this->fields.tmpScrollBarValueForLongPush = UIProgressBar__get_value(scrollBar, 0);
  v6 = Method_BonusSelectSummonPartyServantListViewManager_OnLongPushListView__;
  if ( (*((_BYTE *)Method_BonusSelectSummonPartyServantListViewManager_OnLongPushListView__ + 83) & 2) != 0 )
    v6 = (_QWORD *)sub_1C7BB00(Method_BonusSelectSummonPartyServantListViewManager_OnLongPushListView__);
  v7 = (System_Reflection_MethodBase_o *)sub_1C7BACC(v6, v6[4]);
  OverwriteAssetSoundName__PlaySystemSe(v7, 0, 0, 0);
  scrollBar = (UIProgressBar_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
  v12 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49449776(v15, 0);
  v13 = (ServantLeaderInfo_o *)sub_1C7BD34(ServantLeaderInfo_TypeInfo);
  ServantLeaderInfo___ctor_44092792(v13, v12, 0, 1, 0);
  v14 = (ServantStatusDialog_EndDelegate_o *)sub_1C7BD34(ServantStatusDialog_EndDelegate_TypeInfo);
  ServantStatusDialog_EndDelegate___ctor(
    v14,
    (Il2CppObject *)this,
    Method_BonusSelectSummonPartyServantListViewManager_EndShowServantStatusDialog__,
    0);
  if ( !v8 )
LABEL_13:
    sub_1C7BD40(scrollBar, obj);
  CommonUI__OpenServantStatusDialog_31494808(v8, 7, v13, v14, 0);
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

  if ( (byte_4CEA99F & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_BonusSelectSummonPartyServantListViewObject__Dispose__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_BonusSelectSummonPartyServantListViewObject__MoveNext__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_BonusSelectSummonPartyServantListViewObject__get_Current__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_BonusSelectSummonPartyServantListViewObject__GetEnumerator__);
    byte_4CEA99F = 1;
  }
  memset(&v9, 0, sizeof(v9));
  ObjectList = (System_Collections_Generic_List_object__o *)BonusSelectSummonPartyServantListViewManager__get_ObjectList(
                                                              this,
                                                              *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_1C7BD40(0, v6);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v9,
    ObjectList,
    (const MethodInfo_383F8F4 *)Method_System_Collections_Generic_List_BonusSelectSummonPartyServantListViewObject__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v9,
            (const MethodInfo_35BDF98 *)Method_System_Collections_Generic_List_Enumerator_BonusSelectSummonPartyServantListViewObject__MoveNext__) )
  {
    if ( !v9.fields._current )
      sub_1C7BD40(0, v7);
    BonusSelectSummonPartyServantListViewObject__Init(
      (BonusSelectSummonPartyServantListViewObject_o *)v9.fields._current,
      mode,
      v8);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v9,
    (const MethodInfo_35BDF94 *)Method_System_Collections_Generic_List_Enumerator_BonusSelectSummonPartyServantListViewObject__Dispose__);
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

  if ( (byte_4CEA9A6 & 1) == 0 )
  {
    sub_1C7BAE8(&BonusSelectSummonPartyServantListViewManager_TypeInfo);
    byte_4CEA9A6 = 1;
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
    sub_1C7BD40(servantSortInfo, *(_QWORD *)&scaleType);
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

  if ( (byte_4CEA9AD & 1) == 0 )
  {
    sub_1C7BAE8(&BonusSelectSummonPartyServantListViewManager_TypeInfo);
    byte_4CEA9AD = 1;
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
    sub_1C7BD40(servantSortInfo, isAscendingOrder);
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

  if ( (byte_4CEA9AB & 1) == 0 )
  {
    sub_1C7BAE8(&BonusSelectSummonPartyServantListViewManager_TypeInfo);
    byte_4CEA9AB = 1;
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
    sub_1C7BD40(servantSortInfo, *(_QWORD *)&sortKind);
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
  if ( (byte_4CEA9A0 & 1) == 0 )
  {
    sub_1C7BAE8(&StringLiteral_17575/*"btn_filter_on"*/);
    this = (BonusSelectSummonPartyServantListViewManager_o *)sub_1C7BAE8(&StringLiteral_17574/*"btn_filter"*/);
    byte_4CEA9A0 = 1;
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
    sub_1C7BD40(this, method);
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
  v8 = (System_String_o **)&StringLiteral_17574/*"btn_filter"*/;
  if ( ((unsigned __int8)this & 1) == 0 )
    v8 = (System_String_o **)&StringLiteral_17575/*"btn_filter_on"*/;
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
    sub_1C7BD40(scrollView, v5);
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
  if ( (byte_4CEA9A7 & 1) == 0 )
  {
    this = (BonusSelectSummonPartyServantListViewManager_o *)sub_1C7BAE8(&BonusSelectSummonPartyServantListViewObject_TypeInfo);
    byte_4CEA9A7 = 1;
  }
  if ( !obj
    || (naturalAligment = BonusSelectSummonPartyServantListViewObject_TypeInfo->_2.naturalAligment,
        obj->klass->_2.naturalAligment < (unsigned int)naturalAligment)
    || (BonusSelectSummonPartyServantListViewObject_c *)obj->klass->_2.typeHierarchy[naturalAligment - 1] != BonusSelectSummonPartyServantListViewObject_TypeInfo )
  {
    sub_1C7BD40(this, obj);
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
  if ( (byte_4CEA9A1 & 1) == 0 )
  {
    sub_1C7BAE8(&StringLiteral_17711/*"btn_txt_up"*/);
    this = (BonusSelectSummonPartyServantListViewManager_o *)sub_1C7BAE8(&StringLiteral_17652/*"btn_txt_down"*/);
    byte_4CEA9A1 = 1;
  }
  sort = v2->fields.sort;
  if ( !sort || (this = (BonusSelectSummonPartyServantListViewManager_o *)v2->fields.sortExplanationSprite) == 0 )
    sub_1C7BD40(this, method);
  if ( sort->fields.isAscendingOrder )
    v4 = (System_String_o **)&StringLiteral_17711/*"btn_txt_up"*/;
  else
    v4 = (System_String_o **)&StringLiteral_17652/*"btn_txt_down"*/;
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
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7
  Il2CppObject *v16; // x1
  struct System_Object_array *items; // x8
  _QWORD *v18; // x9
  __int64 size; // x10
  Il2CppClass **v20; // x0
  System_Collections_Generic_List_Enumerator_object__o v22; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v23; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4CEA9AE & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_1C7BAE8(&Method_UnityEngine_GameObject_GetComponent_BonusSelectSummonPartyServantListViewObject___);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_BonusSelectSummonPartyServantListViewObject__Add__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_BonusSelectSummonPartyServantListViewObject___ctor__);
    sub_1C7BAE8(&System_Collections_Generic_List_BonusSelectSummonPartyServantListViewObject__TypeInfo);
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    byte_4CEA9AE = 1;
  }
  memset(&v23, 0, sizeof(v23));
  v3 = (System_Collections_Generic_List_object__o *)sub_1C7BD34(System_Collections_Generic_List_BonusSelectSummonPartyServantListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_383E5C8 *)Method_System_Collections_Generic_List_BonusSelectSummonPartyServantListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_1C7BD40(0, v4);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v22,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_383F8F4 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v23 = v22;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v23,
            (const MethodInfo_35BDF98 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v23.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v7 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0, 0);
    if ( v7 )
    {
      if ( !current )
        sub_1C7BD40(v7, v8);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_31C70C8 *)Method_UnityEngine_GameObject_GetComponent_BonusSelectSummonPartyServantListViewObject___);
      v16 = Component_object;
      if ( !v3 )
        sub_1C7BD40(Component_object, Component_object);
      items = v3->fields._items;
      v18 = Method_System_Collections_Generic_List_BonusSelectSummonPartyServantListViewObject__Add__;
      ++v3->fields._version;
      if ( !items )
        sub_1C7BD40(Component_object, Component_object);
      size = v3->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v3,
          Component_object,
          *(const MethodInfo_383EDFC **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
      }
      else
      {
        v20 = &items->obj.klass + size;
        v3->fields._size = size + 1;
        v20[4] = (Il2CppClass *)v16;
        sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v20 + 4), (int32_t)v16, v10, v11, v12, v13, v14, v15);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v23,
    (const MethodInfo_35BDF94 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_BonusSelectSummonPartyServantListViewObject__o *)v3;
}


void BonusSelectSummonPartyServantListViewManager_CallbackFunc___ctor(
        BonusSelectSummonPartyServantListViewManager_CallbackFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  intptr_t v8; // x8
  int v12; // w22
  Il2CppObject *m_target; // x9
  __int64 v14; // x0

  v8 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v8;
  this->fields.m_target = object;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields.m_target,
    (int32_t)object,
    method,
    (int32_t)a4,
    v4,
    v5,
    v6,
    v7);
  v12 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1C7BBA8(method) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_1C7BD5C(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C7BC10(v14, 0);
    }
    goto LABEL_5;
  }
  if ( v12 != 2 )
  {
LABEL_5:
    m_target = this->fields.m_target;
    this->fields.invoke_impl = this->fields.method_ptr;
    this->fields.method_code = (intptr_t)m_target;
    goto LABEL_6;
  }
  this->fields.invoke_impl = (intptr_t)sub_1AAD280;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1AAD228;
}


System_IAsyncResult_o *BonusSelectSummonPartyServantListViewManager_CallbackFunc__BeginInvoke(
        BonusSelectSummonPartyServantListViewManager_CallbackFunc_o *this,
        int32_t kind,
        int32_t result,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  _QWORD v10[3]; // [xsp+8h] [xbp-58h] BYREF
  int32_t v11; // [xsp+28h] [xbp-38h] BYREF
  int32_t v12; // [xsp+2Ch] [xbp-34h] BYREF

  v11 = result;
  v12 = kind;
  if ( (byte_4CEA9B1 & 1) == 0 )
  {
    sub_1C7BAE8(&int_TypeInfo);
    sub_1C7BAE8(&BonusSelectSummonPartyServantListViewManager_ResultKind_TypeInfo);
    byte_4CEA9B1 = 1;
  }
  v10[2] = 0;
  v10[0] = j_il2cpp_value_box_0(BonusSelectSummonPartyServantListViewManager_ResultKind_TypeInfo, &v12);
  v10[1] = j_il2cpp_value_box_0(int_TypeInfo, &v11);
  return (System_IAsyncResult_o *)sub_1C7BA9C(this, v10, callback, object);
}


void BonusSelectSummonPartyServantListViewManager_CallbackFunc__EndInvoke(
        BonusSelectSummonPartyServantListViewManager_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C7BAA0(result, 0, method);
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
  if ( (byte_4CEA9B2 & 1) == 0 )
  {
    this = (BonusSelectSummonPartyServantListViewManager___c__DisplayClass19_0_o *)sub_1C7BAE8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4CEA9B2 = 1;
  }
  servantEntity = v4->fields.servantEntity;
  if ( !servantEntity )
    sub_1C7BD40(this, *(_QWORD *)&id);
  v7 = *(_QWORD *)&servantEntity->fields.id.fields.currentCryptoKey;
  v6 = *(_QWORD *)&servantEntity->fields.id.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v9.fields.currentCryptoKey = v7;
  *(_QWORD *)&v9.fields.fakeValue = v6;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49449776(v9, 0) == id;
}