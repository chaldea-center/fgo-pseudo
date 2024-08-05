void __fastcall BonusSelectSummonPartyServantListViewManager___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  int32_t v2; // w2
  int32_t v3; // w3
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  System_String_o *SORT_SAVE_KEY; // x19
  ListViewSort_o *v9; // x20
  struct BonusSelectSummonPartyServantListViewManager_StaticFields *static_fields; // x0
  int32_t v11; // w2
  int32_t v12; // w3
  System_String_o *v13; // x19
  ListViewSort_o *v14; // x20
  struct BonusSelectSummonPartyServantListViewManager_StaticFields *v15; // x0
  int32_t v16; // w2
  int32_t v17; // w3
  System_String_o *v18; // x19
  ListViewSort_o *v19; // x20
  struct BonusSelectSummonPartyServantListViewManager_StaticFields *v20; // x0
  int32_t v21; // w2
  int32_t v22; // w3

  if ( (byte_49FAD16 & 1) == 0 )
  {
    sub_1B64870(&BonusSelectSummonPartyServantListViewManager_TypeInfo, v1);
    sub_1B64870(&ListViewSort_TypeInfo, v4);
    sub_1B64870(&StringLiteral_1414/*"2"*/, v5);
    sub_1B64870(&StringLiteral_3298/*"BonusSelectSummonPartyServant"*/, v6);
    sub_1B64870(&StringLiteral_1267/*"1"*/, v7);
    byte_49FAD16 = 1;
  }
  BonusSelectSummonPartyServantListViewManager_TypeInfo->static_fields->SORT_SAVE_KEY = (struct System_String_o *)StringLiteral_3298/*"BonusSelectSummonPartyServant"*/;
  sub_1B64814(
    (ServantStatusBattleListViewItem_o *)BonusSelectSummonPartyServantListViewManager_TypeInfo->static_fields,
    StringLiteral_3298/*"BonusSelectSummonPartyServant"*/,
    v2,
    v3);
  SORT_SAVE_KEY = BonusSelectSummonPartyServantListViewManager_TypeInfo->static_fields->SORT_SAVE_KEY;
  v9 = (ListViewSort_o *)sub_1B64ABC(ListViewSort_TypeInfo);
  ListViewSort___ctor_40431268(v9, SORT_SAVE_KEY, 27, 0, 0LL);
  static_fields = BonusSelectSummonPartyServantListViewManager_TypeInfo->static_fields;
  static_fields->servantSortInfo = v9;
  sub_1B64814((ServantStatusBattleListViewItem_o *)&static_fields->servantSortInfo, (int32_t)v9, v11, v12);
  v13 = System_String__Concat_61383576(
          BonusSelectSummonPartyServantListViewManager_TypeInfo->static_fields->SORT_SAVE_KEY,
          (System_String_o *)StringLiteral_1267/*"1"*/,
          0LL);
  v14 = (ListViewSort_o *)sub_1B64ABC(ListViewSort_TypeInfo);
  ListViewSort___ctor_40431268(v14, v13, 27, 0, 0LL);
  v15 = BonusSelectSummonPartyServantListViewManager_TypeInfo->static_fields;
  v15->servantSortInfoExtra1 = v14;
  sub_1B64814((ServantStatusBattleListViewItem_o *)&v15->servantSortInfoExtra1, (int32_t)v14, v16, v17);
  v18 = System_String__Concat_61383576(
          BonusSelectSummonPartyServantListViewManager_TypeInfo->static_fields->SORT_SAVE_KEY,
          (System_String_o *)StringLiteral_1414/*"2"*/,
          0LL);
  v19 = (ListViewSort_o *)sub_1B64ABC(ListViewSort_TypeInfo);
  ListViewSort___ctor_40431268(v19, v18, 27, 0, 0LL);
  v20 = BonusSelectSummonPartyServantListViewManager_TypeInfo->static_fields;
  v20->servantSortInfoExtra2 = v19;
  sub_1B64814((ServantStatusBattleListViewItem_o *)&v20->servantSortInfoExtra2, (int32_t)v19, v21, v22);
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
  const MethodInfo *v2; // x2
  int32_t v3; // w3
  BonusSelectSummonPartyServantListViewManager_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  unsigned int scaleType; // w8
  struct ListViewItemSeed_o *smallSizeSeed; // x1
  BonusSelectSummonPartyServantListViewManager_o *v10; // x0
  int v11; // w8
  ServantStatusBattleListViewItem_o *p_seed; // x0
  __int64 v13; // x1
  const MethodInfo *v14; // x2
  System_Collections_Generic_List_object__o *itemList; // x0
  int32_t v16; // w20
  Il2CppObject *Item; // x0
  ListViewItem_o *v18; // x21
  __int64 methodPtr_low; // x10
  UnityEngine_Object_o *monitor; // x22

  v4 = this;
  if ( (byte_49FAD0C & 1) == 0 )
  {
    sub_1B64870(&BonusSelectSummonPartyServantListViewItem_TypeInfo, method);
    sub_1B64870(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v5);
    sub_1B64870(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v6);
    this = (BonusSelectSummonPartyServantListViewManager_o *)sub_1B64870(&UnityEngine_Object_TypeInfo, v7);
    byte_49FAD0C = 1;
  }
  scaleType = v4->fields.scaleType;
  if ( scaleType < 2 )
  {
    smallSizeSeed = v4->fields.smallSizeSeed;
    v10 = v4;
    v11 = 2;
  }
  else if ( scaleType == 2 )
  {
    smallSizeSeed = v4->fields.extremelySmallSizeSeed;
    v10 = v4;
    v11 = 3;
  }
  else
  {
    if ( scaleType != 3 )
      goto LABEL_10;
    smallSizeSeed = v4->fields.normalSizeSeed;
    v10 = v4;
    v11 = 1;
  }
  v10->fields.seed = smallSizeSeed;
  p_seed = (ServantStatusBattleListViewItem_o *)&v10->fields.seed;
  p_seed[1].fields.svtId.fields.currentCryptoKey = v11;
  sub_1B64814(p_seed, (int32_t)smallSizeSeed, (int32_t)v2, v3);
LABEL_10:
  BonusSelectSummonPartyServantListViewManager__SetAndSaveIconScaleType(this, v4->fields.scaleType, v2);
  itemList = (System_Collections_Generic_List_object__o *)v4->fields.itemList;
  if ( !itemList )
LABEL_22:
    sub_1B64ACC(itemList, v13);
  v16 = 0;
  while ( v16 < itemList->fields._size )
  {
    Item = System_Collections_Generic_List_object___get_Item(
             itemList,
             v16,
             (const MethodInfo_34AF6E0 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    if ( Item )
    {
      v18 = (ListViewItem_o *)Item;
      methodPtr_low = LOBYTE(BonusSelectSummonPartyServantListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(Item->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low
        && (BonusSelectSummonPartyServantListViewItem_c *)Item->klass->_2.typeHierarchy[methodPtr_low - 1] == BonusSelectSummonPartyServantListViewItem_TypeInfo )
      {
        monitor = (UnityEngine_Object_o *)Item[6].monitor;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( !UnityEngine_Object__op_Equality(monitor, 0LL, 0LL) )
        {
          itemList = (System_Collections_Generic_List_object__o *)v18->fields.viewObject;
          if ( !itemList )
            goto LABEL_22;
          ListViewObject__SetItemSeed((ListViewObject_o *)itemList, v18, v4->fields.seed, 0LL);
        }
      }
    }
    itemList = (System_Collections_Generic_List_object__o *)v4->fields.itemList;
    ++v16;
    if ( !itemList )
      goto LABEL_22;
  }
  BonusSelectSummonPartyServantListViewManager__SetMode(v4, 2, v14);
  ListViewManager__SortItem((ListViewManager_o *)v4, -1, 0, -1, 0LL);
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
  int32_t ClassId; // w0
  int32_t v20; // w2
  int32_t v21; // w3
  BonusSelectSummonPartyServantListViewManager_c *v22; // x0
  struct ListViewSort_o *servantSortInfoExtra2; // x1
  BonusSelectSummonPartyServantListViewManager_c *v24; // x0
  BonusSelectSummonPartyServantListViewManager_c *v25; // x0
  int32_t v26; // w2
  int32_t v27; // w3
  struct ListViewSort_o *sort; // x8
  int32_t sortKind; // w9
  unsigned int iconScaleKind; // w9
  struct ListViewItemSeed_o *normalSizeSeed; // x1
  Il2CppObject *Master_object; // x22
  Il2CppObject *v33; // x23
  GachaBonusSelectLineupEntity_array *v34; // x8
  __int64 v35; // x28
  il2cpp_array_size_t v36; // w21
  __int64 v37; // x24
  __int64 v38; // x8
  int32_t v39; // w2
  int32_t v40; // w3
  System_Func_int__bool__o *v41; // x26
  struct BonusSelectSummonPartyServantSelectMenu_o *partyServantSelectMenu; // x9
  GachaBonusSelectLineupEntity_o *v43; // x26
  ServantEntity_o *v44; // x25
  BonusSelectSummonPartyOrganizationListViewItem_o *organizationItem; // x27
  char v46; // w29
  BonusSelectSummonPartyServantListViewItem_o *v47; // x24
  const MethodInfo *v48; // x6
  int32_t v49; // w2
  int32_t v50; // w3
  __int64 v51; // x8
  _QWORD *v52; // x9
  __int64 m_CancellationTokenSource_low; // x10
  __int64 v54; // x8
  UILabel_o *emptyMessageLabel; // x20
  const MethodInfo *v56; // x1
  const MethodInfo *v57; // x1
  GachaBonusSelectLineupEntity_array *gachaBonusSelectLineupEntities; // [xsp+8h] [xbp-68h] BYREF

  v4 = gachaBonusSelectEntity;
  v5 = this;
  if ( (byte_49FAD05 & 1) == 0 )
  {
    sub_1B64870(&Method_BasicHelper_Any_int____75717888, gachaBonusSelectEntity);
    sub_1B64870(&BonusSelectSummonPartyServantListViewItem_TypeInfo, v6);
    sub_1B64870(&BonusSelectSummonPartyServantListViewManager_TypeInfo, v7);
    sub_1B64870(&Method_DataManager_GetMaster_GachaBonusSelectLineupMaster___, v8);
    sub_1B64870(&Method_DataManager_GetMaster_GiftMaster___, v9);
    sub_1B64870(&Method_DataManager_GetMaster_ServantMaster___, v10);
    sub_1B64870(&DataManager_TypeInfo, v11);
    sub_1B64870(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v12);
    sub_1B64870(&System_Func_int__bool__TypeInfo, v13);
    sub_1B64870(&Method_System_Collections_Generic_List_ListViewItem__Add__, v14);
    sub_1B64870(&LocalizationManager_TypeInfo, v15);
    sub_1B64870(&Method_BonusSelectSummonPartyServantListViewManager___c__DisplayClass17_0__CreateList_b__0__, v16);
    sub_1B64870(&BonusSelectSummonPartyServantListViewManager___c__DisplayClass17_0_TypeInfo, v17);
    this = (BonusSelectSummonPartyServantListViewManager_o *)sub_1B64870(&StringLiteral_11720/*"SERVANT_SORT_FILTER_RESULT_EMPTY"*/, v18);
    byte_49FAD05 = 1;
  }
  gachaBonusSelectLineupEntities = 0LL;
  if ( !v4 )
    goto LABEL_57;
  ClassId = GachaBonusSelectEntity__GetClassId(v4, 1001, 0LL);
  if ( ClassId == 1005 )
  {
    v24 = BonusSelectSummonPartyServantListViewManager_TypeInfo;
    if ( !BonusSelectSummonPartyServantListViewManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BonusSelectSummonPartyServantListViewManager_TypeInfo);
      v24 = BonusSelectSummonPartyServantListViewManager_TypeInfo;
    }
    servantSortInfoExtra2 = v24->static_fields->servantSortInfoExtra2;
  }
  else if ( ClassId == 1004 )
  {
    v22 = BonusSelectSummonPartyServantListViewManager_TypeInfo;
    if ( !BonusSelectSummonPartyServantListViewManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BonusSelectSummonPartyServantListViewManager_TypeInfo);
      v22 = BonusSelectSummonPartyServantListViewManager_TypeInfo;
    }
    servantSortInfoExtra2 = v22->static_fields->servantSortInfoExtra1;
  }
  else
  {
    v25 = BonusSelectSummonPartyServantListViewManager_TypeInfo;
    if ( !BonusSelectSummonPartyServantListViewManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BonusSelectSummonPartyServantListViewManager_TypeInfo);
      v25 = BonusSelectSummonPartyServantListViewManager_TypeInfo;
    }
    servantSortInfoExtra2 = v25->static_fields->servantSortInfo;
  }
  v5->fields.sort = servantSortInfoExtra2;
  sub_1B64814((ServantStatusBattleListViewItem_o *)&v5->fields.sort, (int32_t)servantSortInfoExtra2, v20, v21);
  this = (BonusSelectSummonPartyServantListViewManager_o *)v5->fields.sort;
  if ( !this )
    goto LABEL_57;
  ListViewSort__Load((ListViewSort_o *)this, 0LL);
  sort = v5->fields.sort;
  if ( !sort )
    goto LABEL_57;
  sortKind = sort->fields.sortKind;
  if ( sortKind != 4 && sortKind != 27 )
    sort->fields.sortKind = 27;
  iconScaleKind = sort->fields.iconScaleKind;
  sort->fields.isBonusKind = 0;
  v5->fields.scaleType = iconScaleKind;
  if ( iconScaleKind < 2 )
  {
    normalSizeSeed = v5->fields.normalSizeSeed;
    goto LABEL_26;
  }
  if ( iconScaleKind == 2 )
  {
    normalSizeSeed = v5->fields.smallSizeSeed;
    goto LABEL_26;
  }
  if ( iconScaleKind == 3 )
  {
    normalSizeSeed = v5->fields.extremelySmallSizeSeed;
LABEL_26:
    v5->fields.seed = normalSizeSeed;
    sub_1B64814((ServantStatusBattleListViewItem_o *)&v5->fields.seed, (int32_t)normalSizeSeed, v26, v27);
  }
  ListViewManager__CreateList((ListViewManager_o *)v5, 0, 0LL);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E3B674 *)Method_DataManager_GetMaster_GiftMaster___);
  v33 = DataManager__GetMaster_object_((const MethodInfo_2E3B674 *)Method_DataManager_GetMaster_ServantMaster___);
  this = (BonusSelectSummonPartyServantListViewManager_o *)DataManager__GetMaster_object_((const MethodInfo_2E3B674 *)Method_DataManager_GetMaster_GachaBonusSelectLineupMaster___);
  if ( !this )
    goto LABEL_57;
  this = (BonusSelectSummonPartyServantListViewManager_o *)GachaBonusSelectLineupMaster__TryGetEntityList(
                                                             (GachaBonusSelectLineupMaster_o *)this,
                                                             &gachaBonusSelectLineupEntities,
                                                             v4->fields.gachaBonusSelectLineupId,
                                                             0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v34 = gachaBonusSelectLineupEntities;
    if ( !gachaBonusSelectLineupEntities )
      goto LABEL_57;
    v35 = 4LL;
    while ( 1 )
    {
      v36 = v35 - 4;
      if ( (int)v35 - 4 >= (signed int)v34->max_length )
        break;
      v37 = sub_1B64ABC(BonusSelectSummonPartyServantListViewManager___c__DisplayClass17_0_TypeInfo);
      System_Object___ctor((Il2CppObject *)v37, 0LL);
      if ( !gachaBonusSelectLineupEntities )
        goto LABEL_57;
      if ( v36 >= gachaBonusSelectLineupEntities->max_length )
        goto LABEL_58;
      v38 = *((_QWORD *)&gachaBonusSelectLineupEntities->obj.klass + v35);
      if ( !v38 || !Master_object )
        goto LABEL_57;
      this = (BonusSelectSummonPartyServantListViewManager_o *)GiftMaster__getDataById(
                                                                 (GiftMaster_o *)Master_object,
                                                                 *(_DWORD *)(v38 + 24),
                                                                 0LL);
      if ( this )
      {
        if ( !v33 )
          goto LABEL_57;
        this = (BonusSelectSummonPartyServantListViewManager_o *)DataMasterBase_object__object__int___GetEntity(
                                                                   (DataMasterBase_TMaster__TEntity__PKType__o *)v33,
                                                                   (int32_t)this->fields.m_CancellationTokenSource,
                                                                   (const MethodInfo_30D6180 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
        gachaBonusSelectEntity = (GachaBonusSelectEntity_o *)this;
        if ( !v37 )
          goto LABEL_57;
      }
      else
      {
        gachaBonusSelectEntity = 0LL;
        if ( !v37 )
          goto LABEL_57;
      }
      *(_QWORD *)(v37 + 16) = gachaBonusSelectEntity;
      sub_1B64814((ServantStatusBattleListViewItem_o *)(v37 + 16), (int32_t)gachaBonusSelectEntity, v39, v40);
      v41 = (System_Func_int__bool__o *)sub_1B64ABC(System_Func_int__bool__TypeInfo);
      System_Func_int__bool____ctor(
        v41,
        (Il2CppObject *)v37,
        Method_BonusSelectSummonPartyServantListViewManager___c__DisplayClass17_0__CreateList_b__0__,
        0LL);
      this = (BonusSelectSummonPartyServantListViewManager_o *)BasicHelper__Any_int__48392396(
                                                                 notPossibleSvtIdList,
                                                                 (System_Func_T__bool__o *)v41,
                                                                 (const MethodInfo_2E268CC *)Method_BasicHelper_Any_int____75717888);
      if ( !gachaBonusSelectLineupEntities )
        goto LABEL_57;
      if ( v36 >= gachaBonusSelectLineupEntities->max_length )
LABEL_58:
        sub_1B64AD4(this, gachaBonusSelectEntity);
      partyServantSelectMenu = v5->fields.partyServantSelectMenu;
      if ( partyServantSelectMenu )
      {
        v43 = (GachaBonusSelectLineupEntity_o *)*((_QWORD *)&gachaBonusSelectLineupEntities->obj.klass + v35);
        v44 = *(ServantEntity_o **)(v37 + 16);
        organizationItem = partyServantSelectMenu->fields.organizationItem;
        v46 = (unsigned __int8)this ^ 1;
        v47 = (BonusSelectSummonPartyServantListViewItem_o *)sub_1B64ABC(BonusSelectSummonPartyServantListViewItem_TypeInfo);
        BonusSelectSummonPartyServantListViewItem___ctor(v47, v36, v44, v43, organizationItem, v46 & 1, v48);
        this = (BonusSelectSummonPartyServantListViewManager_o *)v5->fields.itemList;
        if ( this )
        {
          v51 = *(_QWORD *)&this->fields.m_CachedPtr;
          v52 = Method_System_Collections_Generic_List_ListViewItem__Add__;
          ++HIDWORD(this->fields.m_CancellationTokenSource);
          if ( v51 )
          {
            m_CancellationTokenSource_low = SLODWORD(this->fields.m_CancellationTokenSource);
            if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(v51 + 24) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                (System_Collections_Generic_List_object__o *)this,
                (Il2CppObject *)v47,
                *(const MethodInfo_34AF9B0 **)(*(_QWORD *)(v52[4] + 192LL) + 112LL));
            }
            else
            {
              v54 = v51 + 8 * m_CancellationTokenSource_low;
              LODWORD(this->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
              *(_QWORD *)(v54 + 32) = v47;
              sub_1B64814((ServantStatusBattleListViewItem_o *)(v54 + 32), (int32_t)v47, v49, v50);
            }
            v34 = gachaBonusSelectLineupEntities;
            ++v35;
            if ( gachaBonusSelectLineupEntities )
              continue;
          }
        }
      }
      goto LABEL_57;
    }
  }
  emptyMessageLabel = v5->fields.emptyMessageLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  this = (BonusSelectSummonPartyServantListViewManager_o *)LocalizationManager__Get(
                                                             (System_String_o *)StringLiteral_11720/*"SERVANT_SORT_FILTER_RESULT_EMPTY"*/,
                                                             0LL);
  if ( !emptyMessageLabel )
LABEL_57:
    sub_1B64ACC(this, gachaBonusSelectEntity);
  UILabel__set_text(emptyMessageLabel, (System_String_o *)this, 0LL);
  ListViewManager__SortItem((ListViewManager_o *)v5, -1, 0, -1, 0LL);
  BonusSelectSummonPartyServantListViewManager__SetFilterButtonImage(v5, v56);
  BonusSelectSummonPartyServantListViewManager__UpdateAscendingOrderBtnSprite(v5, v57);
}


void __fastcall BonusSelectSummonPartyServantListViewManager__DeleteContinueData(const MethodInfo *method)
{
  __int64 v1; // x1
  BonusSelectSummonPartyServantListViewManager_c *v2; // x0
  ListViewSort_o *servantSortInfo; // x0

  if ( (byte_49FAD03 & 1) == 0 )
  {
    sub_1B64870(&BonusSelectSummonPartyServantListViewManager_TypeInfo, v1);
    byte_49FAD03 = 1;
  }
  v2 = BonusSelectSummonPartyServantListViewManager_TypeInfo;
  if ( !BonusSelectSummonPartyServantListViewManager_TypeInfo->_2.cctor_finished )
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
    sub_1B64ACC(servantSortInfo, v1);
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
  Il2CppObject *Instance; // x0
  Il2CppObject *sort; // x21
  CommonUI_o *v10; // x19
  System_Action_o *v11; // x20
  __int64 v12; // x0
  __int64 v13; // x1

  if ( (byte_49FAD10 & 1) == 0 )
  {
    sub_1B64870(&System_Action_TypeInfo, isDecide);
    sub_1B64870(&Method_ListViewSort_Save__, v5);
    sub_1B64870(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    byte_49FAD10 = 1;
  }
  if ( isDecide )
  {
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
    BonusSelectSummonPartyServantListViewManager__SetFilterButtonImage(this, v7);
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE318 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  sort = (Il2CppObject *)this->fields.sort;
  v10 = (CommonUI_o *)Instance;
  v11 = (System_Action_o *)sub_1B64ABC(System_Action_TypeInfo);
  System_Action___ctor(v11, sort, Method_ListViewSort_Save__, 0LL);
  if ( !v10 )
    sub_1B64ACC(v12, v13);
  CommonUI__CloseServantFilterSelectMenu(v10, v11, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BonusSelectSummonPartyServantListViewManager__EndShowServantStatusDialog(
        BonusSelectSummonPartyServantListViewManager_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  UIProgressBar_o *scrollBar; // x0

  if ( (byte_49FAD0B & 1) == 0 )
  {
    sub_1B64870(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, isDecide);
    byte_49FAD0B = 1;
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
  scrollBar = (UIProgressBar_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE318 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !scrollBar )
LABEL_9:
    sub_1B64ACC(scrollBar, isDecide);
  CommonUI__CloseServantStatusDialog((CommonUI_o *)scrollBar, 0LL, 0LL);
}


System_String_o *__fastcall BonusSelectSummonPartyServantListViewManager__GetScaleButtonSpriteName(
        BonusSelectSummonPartyServantListViewManager_o *this,
        const MethodInfo *method)
{
  ListViewSort_o *sort; // x0

  sort = this->fields.sort;
  if ( !sort )
    sub_1B64ACC(0LL, method);
  return ListViewSort__GetScaleKindSpriteName(sort, this->fields.scaleType, 0LL);
}


void __fastcall BonusSelectSummonPartyServantListViewManager__InitLoad(const MethodInfo *method)
{
  __int64 v1; // x1
  BonusSelectSummonPartyServantListViewManager_c *v2; // x0
  ListViewSort_o *servantSortInfo; // x0

  if ( (byte_49FAD04 & 1) == 0 )
  {
    sub_1B64870(&BonusSelectSummonPartyServantListViewManager_TypeInfo, v1);
    byte_49FAD04 = 1;
  }
  v2 = BonusSelectSummonPartyServantListViewManager_TypeInfo;
  if ( !BonusSelectSummonPartyServantListViewManager_TypeInfo->_2.cctor_finished )
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
    sub_1B64ACC(servantSortInfo, v1);
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
  Il2CppObject *Instance; // x0
  ListViewSort_o *sort; // x21
  CommonUI_o *v17; // x22
  ServantFilterSelectMenu_CallbackFunc_o *v18; // x23

  if ( (byte_49FAD0F & 1) == 0 )
  {
    sub_1B64870(&Method_BonusSelectSummonPartyServantListViewManager_EndSelectFilterKind__, method);
    sub_1B64870(&Method_BonusSelectSummonPartyServantListViewManager_OnClickFilterKind__, v3);
    sub_1B64870(&ServantFilterSelectMenu_CallbackFunc_TypeInfo, v4);
    sub_1B64870(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    byte_49FAD0F = 1;
  }
  if ( this->fields.isInput )
  {
    v6 = Method_BonusSelectSummonPartyServantListViewManager_OnClickFilterKind__;
    if ( (*((_BYTE *)Method_BonusSelectSummonPartyServantListViewManager_OnClickFilterKind__ + 83) & 2) != 0 )
      v6 = (_QWORD *)sub_1B64888(Method_BonusSelectSummonPartyServantListViewManager_OnClickFilterKind__);
    v7 = (System_Reflection_MethodBase_o *)sub_1B64854(v6, v6[4]);
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
          Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE318 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          sort = this->fields.sort;
          v17 = (CommonUI_o *)Instance;
          v18 = (ServantFilterSelectMenu_CallbackFunc_o *)sub_1B64ABC(ServantFilterSelectMenu_CallbackFunc_TypeInfo);
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
    sub_1B64ACC(gachaBonusSelectEntity, v9);
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
  struct UICommonButton_o *sortKindButton; // x8
  struct System_Collections_Generic_List_UIDragDropListViewSurface__o *dropList; // x9
  _QWORD *v12; // x0
  System_Reflection_MethodBase_o *v13; // x0

  v4 = this;
  if ( (byte_49FAD09 & 1) == 0 )
  {
    this = (BonusSelectSummonPartyServantListViewManager_o *)sub_1B64870(
                                                               &Method_BonusSelectSummonPartyServantListViewManager_OnClickSelectListView__,
                                                               obj);
    byte_49FAD09 = 1;
  }
  if ( !obj )
    goto LABEL_17;
  this = (BonusSelectSummonPartyServantListViewManager_o *)BonusSelectSummonPartyServantListViewObject__GetItem(
                                                             obj,
                                                             (const MethodInfo *)obj);
  if ( !this )
    goto LABEL_17;
  if ( LOBYTE(this->fields.clipRange.fields.y) )
    goto LABEL_6;
  this = (BonusSelectSummonPartyServantListViewManager_o *)BonusSelectSummonPartyServantListViewObject__GetItem(
                                                             obj,
                                                             (const MethodInfo *)obj);
  if ( !this )
    goto LABEL_17;
  sortKindButton = this->fields.sortKindButton;
  if ( sortKindButton )
  {
    dropList = this->fields.dropList;
    if ( dropList )
    {
      if ( sortKindButton == (struct UICommonButton_o *)dropList[3].klass )
      {
LABEL_6:
        v5 = Method_BonusSelectSummonPartyServantListViewManager_OnClickSelectListView__;
        if ( (*((_BYTE *)Method_BonusSelectSummonPartyServantListViewManager_OnClickSelectListView__ + 83) & 2) != 0 )
          v5 = (_QWORD *)sub_1B64888(Method_BonusSelectSummonPartyServantListViewManager_OnClickSelectListView__);
        v6 = (System_Reflection_MethodBase_o *)sub_1B64854(v5, v5[4]);
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
        sub_1B64ACC(this, obj);
      }
    }
  }
  v12 = Method_BonusSelectSummonPartyServantListViewManager_OnClickSelectListView__;
  if ( (*((_BYTE *)Method_BonusSelectSummonPartyServantListViewManager_OnClickSelectListView__ + 83) & 2) != 0 )
    v12 = (_QWORD *)sub_1B64888(Method_BonusSelectSummonPartyServantListViewManager_OnClickSelectListView__);
  v13 = (System_Reflection_MethodBase_o *)sub_1B64854(v12, v12[4]);
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

  if ( (byte_49FAD13 & 1) == 0 )
  {
    sub_1B64870(&Method_BonusSelectSummonPartyServantListViewManager_OnClickSortAscendingOrder__, method);
    byte_49FAD13 = 1;
  }
  if ( this->fields.isInput )
  {
    v3 = Method_BonusSelectSummonPartyServantListViewManager_OnClickSortAscendingOrder__;
    if ( (*((_BYTE *)Method_BonusSelectSummonPartyServantListViewManager_OnClickSortAscendingOrder__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B64888(Method_BonusSelectSummonPartyServantListViewManager_OnClickSortAscendingOrder__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B64854(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
    sort = this->fields.sort;
    if ( !sort )
      sub_1B64ACC(v5, v6);
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

  if ( (byte_49FAD11 & 1) == 0 )
  {
    sub_1B64870(&Method_BonusSelectSummonPartyServantListViewManager_OnClickSortKind__, method);
    byte_49FAD11 = 1;
  }
  if ( this->fields.isInput )
  {
    v3 = Method_BonusSelectSummonPartyServantListViewManager_OnClickSortKind__;
    if ( (*((_BYTE *)Method_BonusSelectSummonPartyServantListViewManager_OnClickSortKind__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B64888(Method_BonusSelectSummonPartyServantListViewManager_OnClickSortKind__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B64854(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
    sort = this->fields.sort;
    if ( !sort )
      sub_1B64ACC(v5, v6);
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
  struct System_Threading_CancellationTokenSource_o *m_CancellationTokenSource; // x8
  struct System_Threading_SparselyPopulatedArray_CancellationCallbackInfo__array *registeredCallbacksLists; // x20
  struct System_Threading_ManualResetEvent_o *kernelEvent; // x22
  int32_t v17; // w22
  ServantLeaderInfo_o *v18; // x20
  ServantStatusDialog_EndDelegate_o *v19; // x22
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v20; // 0:x0.16

  if ( (byte_49FAD0A & 1) == 0 )
  {
    sub_1B64870(&Method_BonusSelectSummonPartyServantListViewManager_EndShowServantStatusDialog__, obj);
    sub_1B64870(&Method_BonusSelectSummonPartyServantListViewManager_OnLongPushListView__, v5);
    sub_1B64870(&ServantStatusDialog_EndDelegate_TypeInfo, v6);
    sub_1B64870(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v7);
    sub_1B64870(&ServantLeaderInfo_TypeInfo, v8);
    sub_1B64870(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v9);
    byte_49FAD0A = 1;
  }
  scrollBar = (UIProgressBar_o *)this->fields.scrollBar;
  if ( !scrollBar )
    goto LABEL_13;
  this->fields.tmpScrollBarValueForLongPush = UIProgressBar__get_value(scrollBar, 0LL);
  v11 = Method_BonusSelectSummonPartyServantListViewManager_OnLongPushListView__;
  if ( (*((_BYTE *)Method_BonusSelectSummonPartyServantListViewManager_OnLongPushListView__ + 83) & 2) != 0 )
    v11 = (_QWORD *)sub_1B64888(Method_BonusSelectSummonPartyServantListViewManager_OnLongPushListView__);
  v12 = (System_Reflection_MethodBase_o *)sub_1B64854(v11, v11[4]);
  OverwriteAssetSoundName__PlaySystemSe(v12, 0, 0LL);
  scrollBar = (UIProgressBar_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE318 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !obj )
    goto LABEL_13;
  v13 = (CommonUI_o *)scrollBar;
  scrollBar = (UIProgressBar_o *)BonusSelectSummonPartyServantListViewObject__GetItem(obj, (const MethodInfo *)obj);
  if ( !scrollBar )
    goto LABEL_13;
  m_CancellationTokenSource = scrollBar[1].fields.m_CancellationTokenSource;
  if ( !m_CancellationTokenSource )
    goto LABEL_13;
  kernelEvent = m_CancellationTokenSource->fields._kernelEvent;
  registeredCallbacksLists = m_CancellationTokenSource->fields._registeredCallbacksLists;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v20.fields.currentCryptoKey = kernelEvent;
  *(_QWORD *)&v20.fields.fakeValue = registeredCallbacksLists;
  v17 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46180532(v20, 0LL);
  v18 = (ServantLeaderInfo_o *)sub_1B64ABC(ServantLeaderInfo_TypeInfo);
  ServantLeaderInfo___ctor_40155148(v18, v17, 0, 1, 0LL);
  v19 = (ServantStatusDialog_EndDelegate_o *)sub_1B64ABC(ServantStatusDialog_EndDelegate_TypeInfo);
  ServantStatusDialog_EndDelegate___ctor(
    v19,
    (Il2CppObject *)this,
    Method_BonusSelectSummonPartyServantListViewManager_EndShowServantStatusDialog__,
    0LL);
  if ( !v13 )
LABEL_13:
    sub_1B64ACC(scrollBar, obj);
  CommonUI__OpenServantStatusDialog_30359436(v13, 7, v18, v19, 0LL);
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
  System_Collections_Generic_List_object__o *ObjectList; // x0
  __int64 v9; // x1
  __int64 v10; // x1
  const MethodInfo *v11; // x2
  System_Collections_Generic_List_Enumerator_object__o v12; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_49FAD06 & 1) == 0 )
  {
    sub_1B64870(
      &Method_System_Collections_Generic_List_Enumerator_BonusSelectSummonPartyServantListViewObject__Dispose__,
      *(_QWORD *)&mode);
    sub_1B64870(
      &Method_System_Collections_Generic_List_Enumerator_BonusSelectSummonPartyServantListViewObject__MoveNext__,
      v5);
    sub_1B64870(
      &Method_System_Collections_Generic_List_Enumerator_BonusSelectSummonPartyServantListViewObject__get_Current__,
      v6);
    sub_1B64870(
      &Method_System_Collections_Generic_List_BonusSelectSummonPartyServantListViewObject__GetEnumerator__,
      v7);
    byte_49FAD06 = 1;
  }
  memset(&v12, 0, sizeof(v12));
  ObjectList = (System_Collections_Generic_List_object__o *)BonusSelectSummonPartyServantListViewManager__get_ObjectList(
                                                              this,
                                                              *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_1B64ACC(0LL, v9);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v12,
    ObjectList,
    (const MethodInfo_34B0548 *)Method_System_Collections_Generic_List_BonusSelectSummonPartyServantListViewObject__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v12,
            (const MethodInfo_322C38C *)Method_System_Collections_Generic_List_Enumerator_BonusSelectSummonPartyServantListViewObject__MoveNext__) )
  {
    if ( !v12.fields._current )
      sub_1B64ACC(0LL, v10);
    BonusSelectSummonPartyServantListViewObject__Init(
      (BonusSelectSummonPartyServantListViewObject_o *)v12.fields._current,
      mode,
      v11);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v12,
    (const MethodInfo_322C388 *)Method_System_Collections_Generic_List_Enumerator_BonusSelectSummonPartyServantListViewObject__Dispose__);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BonusSelectSummonPartyServantListViewManager__SetAndSaveIconScaleType(
        BonusSelectSummonPartyServantListViewManager_o *this,
        int32_t scaleType,
        const MethodInfo *method)
{
  BonusSelectSummonPartyServantListViewManager_c *v4; // x0
  struct BonusSelectSummonPartyServantListViewManager_StaticFields *static_fields; // x8
  struct ListViewSort_o *servantSortInfo; // x0
  struct ListViewSort_o *servantSortInfoExtra1; // x9
  struct ListViewSort_o *servantSortInfoExtra2; // x8

  if ( (byte_49FAD0D & 1) == 0 )
  {
    sub_1B64870(&BonusSelectSummonPartyServantListViewManager_TypeInfo, *(_QWORD *)&scaleType);
    byte_49FAD0D = 1;
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
        (servantSortInfoExtra2 = static_fields->servantSortInfoExtra2) == 0LL)
    || (servantSortInfoExtra2->fields.iconScaleKind = scaleType,
        ListViewSort__SaveIconScaleKind(servantSortInfo, 0LL),
        (servantSortInfo = BonusSelectSummonPartyServantListViewManager_TypeInfo->static_fields->servantSortInfoExtra1) == 0LL)
    || (ListViewSort__SaveIconScaleKind(servantSortInfo, 0LL),
        (servantSortInfo = BonusSelectSummonPartyServantListViewManager_TypeInfo->static_fields->servantSortInfoExtra2) == 0LL) )
  {
LABEL_11:
    sub_1B64ACC(servantSortInfo, *(_QWORD *)&scaleType);
  }
  ListViewSort__SaveIconScaleKind(servantSortInfo, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BonusSelectSummonPartyServantListViewManager__SetAndSaveSortAscendingOrder(
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

  if ( (byte_49FAD14 & 1) == 0 )
  {
    sub_1B64870(&BonusSelectSummonPartyServantListViewManager_TypeInfo, isAscendingOrder);
    byte_49FAD14 = 1;
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
        (servantSortInfoExtra2 = static_fields->servantSortInfoExtra2) == 0LL)
    || (servantSortInfoExtra2->fields.isAscendingOrder = v7,
        ListViewSort__SaveIsAscendingOrder(servantSortInfo, 0LL),
        (servantSortInfo = BonusSelectSummonPartyServantListViewManager_TypeInfo->static_fields->servantSortInfoExtra1) == 0LL)
    || (ListViewSort__SaveIsAscendingOrder(servantSortInfo, 0LL),
        (servantSortInfo = BonusSelectSummonPartyServantListViewManager_TypeInfo->static_fields->servantSortInfoExtra2) == 0LL) )
  {
LABEL_11:
    sub_1B64ACC(servantSortInfo, isAscendingOrder);
  }
  ListViewSort__SaveIsAscendingOrder(servantSortInfo, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BonusSelectSummonPartyServantListViewManager__SetAndSaveSortKind(
        BonusSelectSummonPartyServantListViewManager_o *this,
        int32_t sortKind,
        const MethodInfo *method)
{
  BonusSelectSummonPartyServantListViewManager_c *v4; // x0
  struct BonusSelectSummonPartyServantListViewManager_StaticFields *static_fields; // x8
  struct ListViewSort_o *servantSortInfo; // x0
  struct ListViewSort_o *servantSortInfoExtra1; // x9
  struct ListViewSort_o *servantSortInfoExtra2; // x8

  if ( (byte_49FAD12 & 1) == 0 )
  {
    sub_1B64870(&BonusSelectSummonPartyServantListViewManager_TypeInfo, *(_QWORD *)&sortKind);
    byte_49FAD12 = 1;
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
        (servantSortInfoExtra2 = static_fields->servantSortInfoExtra2) == 0LL)
    || (servantSortInfoExtra2->fields.sortKind = sortKind,
        ListViewSort__SaveSortKind(servantSortInfo, 0LL),
        (servantSortInfo = BonusSelectSummonPartyServantListViewManager_TypeInfo->static_fields->servantSortInfoExtra1) == 0LL)
    || (ListViewSort__SaveSortKind(servantSortInfo, 0LL),
        (servantSortInfo = BonusSelectSummonPartyServantListViewManager_TypeInfo->static_fields->servantSortInfoExtra2) == 0LL) )
  {
LABEL_11:
    sub_1B64ACC(servantSortInfo, *(_QWORD *)&sortKind);
  }
  ListViewSort__SaveSortKind(servantSortInfo, 0LL);
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
  if ( (byte_49FAD07 & 1) == 0 )
  {
    sub_1B64870(&StringLiteral_17443/*"btn_filter_on"*/, method);
    this = (BonusSelectSummonPartyServantListViewManager_o *)sub_1B64870(&StringLiteral_17442/*"btn_filter"*/, v3);
    byte_49FAD07 = 1;
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
    sub_1B64ACC(this, method);
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
  v9 = (System_String_o **)&StringLiteral_17442/*"btn_filter"*/;
  if ( ((unsigned __int8)this & 1) == 0 )
    v9 = (System_String_o **)&StringLiteral_17443/*"btn_filter_on"*/;
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
    sub_1B64ACC(scrollView, v5);
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
  __int64 methodPtr_low; // x10
  int32_t v7; // w1

  v5 = this;
  if ( (byte_49FAD0E & 1) == 0 )
  {
    this = (BonusSelectSummonPartyServantListViewManager_o *)sub_1B64870(
                                                               &BonusSelectSummonPartyServantListViewObject_TypeInfo,
                                                               obj);
    byte_49FAD0E = 1;
  }
  if ( !obj
    || (methodPtr_low = LOBYTE(BonusSelectSummonPartyServantListViewObject_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(obj->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low)
    || (BonusSelectSummonPartyServantListViewObject_c *)obj->klass->_2.typeHierarchy[methodPtr_low - 1] != BonusSelectSummonPartyServantListViewObject_TypeInfo )
  {
    sub_1B64ACC(this, obj);
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
  if ( (byte_49FAD08 & 1) == 0 )
  {
    sub_1B64870(&StringLiteral_17560/*"btn_txt_up"*/, method);
    this = (BonusSelectSummonPartyServantListViewManager_o *)sub_1B64870(&StringLiteral_17506/*"btn_txt_down"*/, v3);
    byte_49FAD08 = 1;
  }
  sort = v2->fields.sort;
  if ( !sort || (this = (BonusSelectSummonPartyServantListViewManager_o *)v2->fields.sortExplanationSprite) == 0LL )
    sub_1B64ACC(this, method);
  if ( sort->fields.isAscendingOrder )
    v5 = (System_String_o **)&StringLiteral_17560/*"btn_txt_up"*/;
  else
    v5 = (System_String_o **)&StringLiteral_17506/*"btn_txt_down"*/;
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
  System_Collections_Generic_List_object__o *v11; // x19
  __int64 v12; // x1
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  Il2CppObject *current; // x20
  _BOOL8 v15; // x0
  __int64 v16; // x1
  Il2CppObject *Component_object; // x0
  int32_t v18; // w2
  int32_t v19; // w3
  Il2CppObject *v20; // x1
  struct System_Object_array *items; // x8
  _QWORD *v22; // x9
  __int64 size; // x10
  Il2CppClass **v24; // x0
  System_Collections_Generic_List_Enumerator_object__o v26; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v27; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_49FAD15 & 1) == 0 )
  {
    sub_1B64870(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, method);
    sub_1B64870(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v3);
    sub_1B64870(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v4);
    sub_1B64870(&Method_UnityEngine_GameObject_GetComponent_BonusSelectSummonPartyServantListViewObject___, v5);
    sub_1B64870(&Method_System_Collections_Generic_List_BonusSelectSummonPartyServantListViewObject__Add__, v6);
    sub_1B64870(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v7);
    sub_1B64870(&Method_System_Collections_Generic_List_BonusSelectSummonPartyServantListViewObject___ctor__, v8);
    sub_1B64870(&System_Collections_Generic_List_BonusSelectSummonPartyServantListViewObject__TypeInfo, v9);
    sub_1B64870(&UnityEngine_Object_TypeInfo, v10);
    byte_49FAD15 = 1;
  }
  memset(&v27, 0, sizeof(v27));
  v11 = (System_Collections_Generic_List_object__o *)sub_1B64ABC(System_Collections_Generic_List_BonusSelectSummonPartyServantListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_34AF17C *)Method_System_Collections_Generic_List_BonusSelectSummonPartyServantListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_1B64ACC(0LL, v12);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v26,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_34B0548 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v27 = v26;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v27,
            (const MethodInfo_322C38C *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v27.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v15 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v15 )
    {
      if ( !current )
        sub_1B64ACC(v15, v16);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_2E8A1B4 *)Method_UnityEngine_GameObject_GetComponent_BonusSelectSummonPartyServantListViewObject___);
      v20 = Component_object;
      if ( !v11 )
        sub_1B64ACC(Component_object, Component_object);
      items = v11->fields._items;
      v22 = Method_System_Collections_Generic_List_BonusSelectSummonPartyServantListViewObject__Add__;
      ++v11->fields._version;
      if ( !items )
        sub_1B64ACC(Component_object, Component_object);
      size = v11->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v11,
          Component_object,
          *(const MethodInfo_34AF9B0 **)(*(_QWORD *)(v22[4] + 192LL) + 112LL));
      }
      else
      {
        v24 = &items->obj.klass + size;
        v11->fields._size = size + 1;
        v24[4] = (Il2CppClass *)v20;
        sub_1B64814((ServantStatusBattleListViewItem_o *)(v24 + 4), (int32_t)v20, v18, v19);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v27,
    (const MethodInfo_322C388 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
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
  __int64 v6; // x21
  int v8; // w22
  struct System_Reflection_MethodInfo_o *v9; // x9
  __int64 v10; // x0

  v4 = *(_QWORD *)(*(_QWORD *)&method + 8LL);
  *(_QWORD *)&this->fields.extra_arg = *(_QWORD *)&method;
  v6 = *(_QWORD *)&method;
  *(_QWORD *)&this->fields.method_ptr = v4;
  *(_QWORD *)&this->fields.method = object;
  sub_1B64814((ServantStatusBattleListViewItem_o *)&this->fields.method, (int32_t)object, method, (int32_t)a4);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1B64930(v6) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1B64AE8(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1B64998(v10, 0LL);
    }
    goto LABEL_5;
  }
  if ( v8 != 2 )
  {
LABEL_5:
    v9 = *(struct System_Reflection_MethodInfo_o **)&this->fields.method;
    this->fields.m_target = *(Il2CppObject **)&this->fields.method_ptr;
    this->fields.original_method_info = v9;
    goto LABEL_6;
  }
  this->fields.m_target = (Il2CppObject *)sub_19A85B0;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_19A8558;
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
  __int64 v10; // x2
  __int64 v11; // x3
  __int64 v12; // x4
  __int64 v14[3]; // [xsp+8h] [xbp-58h] BYREF
  int32_t v15; // [xsp+28h] [xbp-38h] BYREF
  int32_t v16; // [xsp+2Ch] [xbp-34h] BYREF

  v15 = result;
  v16 = kind;
  if ( (byte_49FAD17 & 1) == 0 )
  {
    sub_1B64870(&int_TypeInfo, *(_QWORD *)&kind);
    sub_1B64870(&BonusSelectSummonPartyServantListViewManager_ResultKind_TypeInfo, v9);
    byte_49FAD17 = 1;
  }
  v14[2] = 0LL;
  v14[0] = j_il2cpp_value_box_0(
             BonusSelectSummonPartyServantListViewManager_ResultKind_TypeInfo,
             &v16,
             *(_QWORD *)&result,
             callback,
             object);
  v14[1] = j_il2cpp_value_box_0(int_TypeInfo, &v15, v10, v11, v12);
  return (System_IAsyncResult_o *)sub_1B64824(this, v14, callback, object);
}


void __fastcall BonusSelectSummonPartyServantListViewManager_CallbackFunc__EndInvoke(
        BonusSelectSummonPartyServantListViewManager_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1B64828(result, 0LL, method);
}


void __fastcall BonusSelectSummonPartyServantListViewManager_CallbackFunc__Invoke(
        BonusSelectSummonPartyServantListViewManager_CallbackFunc_o *this,
        int32_t kind,
        int32_t result,
        const MethodInfo *method)
{
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, int32_t, int32_t, _QWORD))this->fields.m_target)(
    this->fields.original_method_info,
    kind,
    result,
    *(_QWORD *)&this->fields.extra_arg);
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
  if ( (byte_49FAD18 & 1) == 0 )
  {
    this = (BonusSelectSummonPartyServantListViewManager___c__DisplayClass17_0_o *)sub_1B64870(
                                                                                     &CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo,
                                                                                     *(_QWORD *)&id);
    byte_49FAD18 = 1;
  }
  servantEntity = v4->fields.servantEntity;
  if ( !servantEntity )
    sub_1B64ACC(this, *(_QWORD *)&id);
  v7 = *(_QWORD *)&servantEntity->fields.id.fields.currentCryptoKey;
  v6 = *(_QWORD *)&servantEntity->fields.id.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v9.fields.currentCryptoKey = v7;
  *(_QWORD *)&v9.fields.fakeValue = v6;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46180532(v9, 0LL) == id;
}