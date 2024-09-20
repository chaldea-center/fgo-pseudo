void __fastcall BonusSelectSummonPartyServantListViewManager___cctor(const MethodInfo *method)
{
  int32_t v1; // w2
  int32_t v2; // w3
  System_String_o *SORT_SAVE_KEY; // x19
  ListViewSort_o *v4; // x20
  struct BonusSelectSummonPartyServantListViewManager_StaticFields *static_fields; // x0
  int32_t v6; // w2
  int32_t v7; // w3
  System_String_o *v8; // x19
  ListViewSort_o *v9; // x20
  struct BonusSelectSummonPartyServantListViewManager_StaticFields *v10; // x0
  int32_t v11; // w2
  int32_t v12; // w3
  System_String_o *v13; // x19
  ListViewSort_o *v14; // x20
  struct BonusSelectSummonPartyServantListViewManager_StaticFields *v15; // x0
  int32_t v16; // w2
  int32_t v17; // w3

  if ( (byte_4A578F6 & 1) == 0 )
  {
    sub_1B885B0(&BonusSelectSummonPartyServantListViewManager_TypeInfo);
    sub_1B885B0(&ListViewSort_TypeInfo);
    sub_1B885B0(&StringLiteral_1413/*"2"*/);
    sub_1B885B0(&StringLiteral_3320/*"BonusSelectSummonPartyServant"*/);
    sub_1B885B0(&StringLiteral_1266/*"1"*/);
    byte_4A578F6 = 1;
  }
  BonusSelectSummonPartyServantListViewManager_TypeInfo->static_fields->SORT_SAVE_KEY = (struct System_String_o *)StringLiteral_3320/*"BonusSelectSummonPartyServant"*/;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)BonusSelectSummonPartyServantListViewManager_TypeInfo->static_fields,
    StringLiteral_3320/*"BonusSelectSummonPartyServant"*/,
    v1,
    v2);
  SORT_SAVE_KEY = BonusSelectSummonPartyServantListViewManager_TypeInfo->static_fields->SORT_SAVE_KEY;
  v4 = (ListViewSort_o *)sub_1B887FC(ListViewSort_TypeInfo);
  ListViewSort___ctor_40759068(v4, SORT_SAVE_KEY, 27, 0, 0LL);
  static_fields = BonusSelectSummonPartyServantListViewManager_TypeInfo->static_fields;
  static_fields->servantSortInfo = v4;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->servantSortInfo, (int32_t)v4, v6, v7);
  v8 = System_String__Concat_61707032(
         BonusSelectSummonPartyServantListViewManager_TypeInfo->static_fields->SORT_SAVE_KEY,
         (System_String_o *)StringLiteral_1266/*"1"*/,
         0LL);
  v9 = (ListViewSort_o *)sub_1B887FC(ListViewSort_TypeInfo);
  ListViewSort___ctor_40759068(v9, v8, 27, 0, 0LL);
  v10 = BonusSelectSummonPartyServantListViewManager_TypeInfo->static_fields;
  v10->servantSortInfoExtra1 = v9;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v10->servantSortInfoExtra1, (int32_t)v9, v11, v12);
  v13 = System_String__Concat_61707032(
          BonusSelectSummonPartyServantListViewManager_TypeInfo->static_fields->SORT_SAVE_KEY,
          (System_String_o *)StringLiteral_1413/*"2"*/,
          0LL);
  v14 = (ListViewSort_o *)sub_1B887FC(ListViewSort_TypeInfo);
  ListViewSort___ctor_40759068(v14, v13, 27, 0, 0LL);
  v15 = BonusSelectSummonPartyServantListViewManager_TypeInfo->static_fields;
  v15->servantSortInfoExtra2 = v14;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v15->servantSortInfoExtra2, (int32_t)v14, v16, v17);
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
  unsigned int scaleType; // w8
  struct ListViewItemSeed_o *smallSizeSeed; // x1
  BonusSelectSummonPartyServantListViewManager_o *v7; // x0
  int v8; // w8
  ServantStatusBattleListViewItem_o *p_seed; // x0
  __int64 v10; // x1
  const MethodInfo *v11; // x2
  System_Collections_Generic_List_object__o *itemList; // x0
  int32_t v13; // w20
  Il2CppObject *Item; // x0
  ListViewItem_o *v15; // x21
  __int64 methodPtr_low; // x10
  UnityEngine_Object_o *monitor; // x22

  v4 = this;
  if ( (byte_4A578EB & 1) == 0 )
  {
    sub_1B885B0(&BonusSelectSummonPartyServantListViewItem_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    this = (BonusSelectSummonPartyServantListViewManager_o *)sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A578EB = 1;
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
  p_seed = (ServantStatusBattleListViewItem_o *)&v7->fields.seed;
  p_seed[1].fields.svtId.fields.currentCryptoKey = v8;
  sub_1B88554(p_seed, (int32_t)smallSizeSeed, (int32_t)v2, v3);
LABEL_10:
  BonusSelectSummonPartyServantListViewManager__SetAndSaveIconScaleType(this, v4->fields.scaleType, v2);
  itemList = (System_Collections_Generic_List_object__o *)v4->fields.itemList;
  if ( !itemList )
LABEL_22:
    sub_1B8880C(itemList, v10);
  v13 = 0;
  while ( v13 < itemList->fields._size )
  {
    Item = System_Collections_Generic_List_object___get_Item(
             itemList,
             v13,
             (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    if ( Item )
    {
      v15 = (ListViewItem_o *)Item;
      methodPtr_low = LOBYTE(BonusSelectSummonPartyServantListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(Item->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low
        && (BonusSelectSummonPartyServantListViewItem_c *)Item->klass->_2.typeHierarchy[methodPtr_low - 1] == BonusSelectSummonPartyServantListViewItem_TypeInfo )
      {
        monitor = (UnityEngine_Object_o *)Item[6].monitor;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( !UnityEngine_Object__op_Equality(monitor, 0LL, 0LL) )
        {
          itemList = (System_Collections_Generic_List_object__o *)v15->fields.viewObject;
          if ( !itemList )
            goto LABEL_22;
          ListViewObject__SetItemSeed((ListViewObject_o *)itemList, v15, v4->fields.seed, 0LL);
        }
      }
    }
    itemList = (System_Collections_Generic_List_object__o *)v4->fields.itemList;
    ++v13;
    if ( !itemList )
      goto LABEL_22;
  }
  BonusSelectSummonPartyServantListViewManager__SetMode(v4, 2, v11);
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
  int32_t ClassId; // w0
  int32_t v7; // w2
  int32_t v8; // w3
  BonusSelectSummonPartyServantListViewManager_c *v9; // x0
  struct ListViewSort_o *servantSortInfoExtra2; // x1
  BonusSelectSummonPartyServantListViewManager_c *v11; // x0
  BonusSelectSummonPartyServantListViewManager_c *v12; // x0
  int32_t v13; // w2
  int32_t v14; // w3
  struct ListViewSort_o *sort; // x8
  int32_t sortKind; // w9
  unsigned int iconScaleKind; // w9
  struct ListViewItemSeed_o *normalSizeSeed; // x1
  Il2CppObject *Master_object; // x22
  Il2CppObject *v20; // x23
  GachaBonusSelectLineupEntity_array *v21; // x8
  __int64 v22; // x28
  il2cpp_array_size_t v23; // w21
  __int64 v24; // x24
  __int64 v25; // x8
  int32_t v26; // w2
  int32_t v27; // w3
  System_Func_int__bool__o *v28; // x26
  struct BonusSelectSummonPartyServantSelectMenu_o *partyServantSelectMenu; // x9
  GachaBonusSelectLineupEntity_o *v30; // x26
  ServantEntity_o *v31; // x25
  BonusSelectSummonPartyOrganizationListViewItem_o *organizationItem; // x27
  char v33; // w29
  BonusSelectSummonPartyServantListViewItem_o *v34; // x24
  const MethodInfo *v35; // x6
  int32_t v36; // w2
  int32_t v37; // w3
  __int64 v38; // x8
  _QWORD *v39; // x9
  __int64 m_CancellationTokenSource_low; // x10
  __int64 v41; // x8
  UILabel_o *emptyMessageLabel; // x20
  const MethodInfo *v43; // x1
  const MethodInfo *v44; // x1
  GachaBonusSelectLineupEntity_array *gachaBonusSelectLineupEntities; // [xsp+8h] [xbp-68h] BYREF

  v4 = gachaBonusSelectEntity;
  v5 = this;
  if ( (byte_4A578E4 & 1) == 0 )
  {
    sub_1B885B0(&Method_BasicHelper_Any_int____76088816);
    sub_1B885B0(&BonusSelectSummonPartyServantListViewItem_TypeInfo);
    sub_1B885B0(&BonusSelectSummonPartyServantListViewManager_TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMaster_GachaBonusSelectLineupMaster___);
    sub_1B885B0(&Method_DataManager_GetMaster_GiftMaster___);
    sub_1B885B0(&Method_DataManager_GetMaster_ServantMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1B885B0(&System_Func_int__bool__TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&Method_BonusSelectSummonPartyServantListViewManager___c__DisplayClass17_0__CreateList_b__0__);
    sub_1B885B0(&BonusSelectSummonPartyServantListViewManager___c__DisplayClass17_0_TypeInfo);
    this = (BonusSelectSummonPartyServantListViewManager_o *)sub_1B885B0(&StringLiteral_11772/*"SERVANT_SORT_FILTER_RESULT_EMPTY"*/);
    byte_4A578E4 = 1;
  }
  gachaBonusSelectLineupEntities = 0LL;
  if ( !v4 )
    goto LABEL_57;
  ClassId = GachaBonusSelectEntity__GetClassId(v4, 1001, 0LL);
  if ( ClassId == 1005 )
  {
    v11 = BonusSelectSummonPartyServantListViewManager_TypeInfo;
    if ( !BonusSelectSummonPartyServantListViewManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BonusSelectSummonPartyServantListViewManager_TypeInfo);
      v11 = BonusSelectSummonPartyServantListViewManager_TypeInfo;
    }
    servantSortInfoExtra2 = v11->static_fields->servantSortInfoExtra2;
  }
  else if ( ClassId == 1004 )
  {
    v9 = BonusSelectSummonPartyServantListViewManager_TypeInfo;
    if ( !BonusSelectSummonPartyServantListViewManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BonusSelectSummonPartyServantListViewManager_TypeInfo);
      v9 = BonusSelectSummonPartyServantListViewManager_TypeInfo;
    }
    servantSortInfoExtra2 = v9->static_fields->servantSortInfoExtra1;
  }
  else
  {
    v12 = BonusSelectSummonPartyServantListViewManager_TypeInfo;
    if ( !BonusSelectSummonPartyServantListViewManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BonusSelectSummonPartyServantListViewManager_TypeInfo);
      v12 = BonusSelectSummonPartyServantListViewManager_TypeInfo;
    }
    servantSortInfoExtra2 = v12->static_fields->servantSortInfo;
  }
  v5->fields.sort = servantSortInfoExtra2;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v5->fields.sort, (int32_t)servantSortInfoExtra2, v7, v8);
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
    sub_1B88554((ServantStatusBattleListViewItem_o *)&v5->fields.seed, (int32_t)normalSizeSeed, v13, v14);
  }
  ListViewManager__CreateList((ListViewManager_o *)v5, 0, 0LL);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_GiftMaster___);
  v20 = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_ServantMaster___);
  this = (BonusSelectSummonPartyServantListViewManager_o *)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_GachaBonusSelectLineupMaster___);
  if ( !this )
    goto LABEL_57;
  this = (BonusSelectSummonPartyServantListViewManager_o *)GachaBonusSelectLineupMaster__TryGetEntityList(
                                                             (GachaBonusSelectLineupMaster_o *)this,
                                                             &gachaBonusSelectLineupEntities,
                                                             v4->fields.gachaBonusSelectLineupId,
                                                             0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v21 = gachaBonusSelectLineupEntities;
    if ( !gachaBonusSelectLineupEntities )
      goto LABEL_57;
    v22 = 4LL;
    while ( 1 )
    {
      v23 = v22 - 4;
      if ( (int)v22 - 4 >= (signed int)v21->max_length )
        break;
      v24 = sub_1B887FC(BonusSelectSummonPartyServantListViewManager___c__DisplayClass17_0_TypeInfo);
      System_Object___ctor((Il2CppObject *)v24, 0LL);
      if ( !gachaBonusSelectLineupEntities )
        goto LABEL_57;
      if ( v23 >= gachaBonusSelectLineupEntities->max_length )
        goto LABEL_58;
      v25 = *((_QWORD *)&gachaBonusSelectLineupEntities->obj.klass + v22);
      if ( !v25 || !Master_object )
        goto LABEL_57;
      this = (BonusSelectSummonPartyServantListViewManager_o *)GiftMaster__getDataById(
                                                                 (GiftMaster_o *)Master_object,
                                                                 *(_DWORD *)(v25 + 24),
                                                                 0LL);
      if ( this )
      {
        if ( !v20 )
          goto LABEL_57;
        this = (BonusSelectSummonPartyServantListViewManager_o *)DataMasterBase_object__object__int___GetEntity(
                                                                   (DataMasterBase_TMaster__TEntity__PKType__o *)v20,
                                                                   (int32_t)this->fields.m_CancellationTokenSource,
                                                                   (const MethodInfo_311D934 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
        gachaBonusSelectEntity = (GachaBonusSelectEntity_o *)this;
        if ( !v24 )
          goto LABEL_57;
      }
      else
      {
        gachaBonusSelectEntity = 0LL;
        if ( !v24 )
          goto LABEL_57;
      }
      *(_QWORD *)(v24 + 16) = gachaBonusSelectEntity;
      sub_1B88554((ServantStatusBattleListViewItem_o *)(v24 + 16), (int32_t)gachaBonusSelectEntity, v26, v27);
      v28 = (System_Func_int__bool__o *)sub_1B887FC(System_Func_int__bool__TypeInfo);
      System_Func_int__bool____ctor(
        v28,
        (Il2CppObject *)v24,
        Method_BonusSelectSummonPartyServantListViewManager___c__DisplayClass17_0__CreateList_b__0__,
        0LL);
      this = (BonusSelectSummonPartyServantListViewManager_o *)BasicHelper__Any_int__48671312(
                                                                 notPossibleSvtIdList,
                                                                 (System_Func_T__bool__o *)v28,
                                                                 (const MethodInfo_2E6AA50 *)Method_BasicHelper_Any_int____76088816);
      if ( !gachaBonusSelectLineupEntities )
        goto LABEL_57;
      if ( v23 >= gachaBonusSelectLineupEntities->max_length )
LABEL_58:
        sub_1B88814(this, gachaBonusSelectEntity);
      partyServantSelectMenu = v5->fields.partyServantSelectMenu;
      if ( partyServantSelectMenu )
      {
        v30 = (GachaBonusSelectLineupEntity_o *)*((_QWORD *)&gachaBonusSelectLineupEntities->obj.klass + v22);
        v31 = *(ServantEntity_o **)(v24 + 16);
        organizationItem = partyServantSelectMenu->fields.organizationItem;
        v33 = (unsigned __int8)this ^ 1;
        v34 = (BonusSelectSummonPartyServantListViewItem_o *)sub_1B887FC(BonusSelectSummonPartyServantListViewItem_TypeInfo);
        BonusSelectSummonPartyServantListViewItem___ctor(v34, v23, v31, v30, organizationItem, v33 & 1, v35);
        this = (BonusSelectSummonPartyServantListViewManager_o *)v5->fields.itemList;
        if ( this )
        {
          v38 = *(_QWORD *)&this->fields.m_CachedPtr;
          v39 = Method_System_Collections_Generic_List_ListViewItem__Add__;
          ++HIDWORD(this->fields.m_CancellationTokenSource);
          if ( v38 )
          {
            m_CancellationTokenSource_low = SLODWORD(this->fields.m_CancellationTokenSource);
            if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(v38 + 24) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                (System_Collections_Generic_List_object__o *)this,
                (Il2CppObject *)v34,
                *(const MethodInfo_34FD834 **)(*(_QWORD *)(v39[4] + 192LL) + 112LL));
            }
            else
            {
              v41 = v38 + 8 * m_CancellationTokenSource_low;
              LODWORD(this->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
              *(_QWORD *)(v41 + 32) = v34;
              sub_1B88554((ServantStatusBattleListViewItem_o *)(v41 + 32), (int32_t)v34, v36, v37);
            }
            v21 = gachaBonusSelectLineupEntities;
            ++v22;
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
                                                             (System_String_o *)StringLiteral_11772/*"SERVANT_SORT_FILTER_RESULT_EMPTY"*/,
                                                             0LL);
  if ( !emptyMessageLabel )
LABEL_57:
    sub_1B8880C(this, gachaBonusSelectEntity);
  UILabel__set_text(emptyMessageLabel, (System_String_o *)this, 0LL);
  ListViewManager__SortItem((ListViewManager_o *)v5, -1, 0, -1, 0LL);
  BonusSelectSummonPartyServantListViewManager__SetFilterButtonImage(v5, v43);
  BonusSelectSummonPartyServantListViewManager__UpdateAscendingOrderBtnSprite(v5, v44);
}


void __fastcall BonusSelectSummonPartyServantListViewManager__DeleteContinueData(const MethodInfo *method)
{
  __int64 v1; // x1
  BonusSelectSummonPartyServantListViewManager_c *v2; // x0
  ListViewSort_o *servantSortInfo; // x0

  if ( (byte_4A578E2 & 1) == 0 )
  {
    sub_1B885B0(&BonusSelectSummonPartyServantListViewManager_TypeInfo);
    byte_4A578E2 = 1;
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
    sub_1B8880C(servantSortInfo, v1);
  }
  ListViewSort__DeleteContinueData(servantSortInfo, 0LL);
}


void __fastcall BonusSelectSummonPartyServantListViewManager__EndSelectFilterKind(
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

  if ( (byte_4A578EF & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_ListViewSort_Save__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4A578EF = 1;
  }
  if ( isDecide )
  {
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
    BonusSelectSummonPartyServantListViewManager__SetFilterButtonImage(this, v5);
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  sort = (Il2CppObject *)this->fields.sort;
  v8 = (CommonUI_o *)Instance;
  v9 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
  System_Action___ctor(v9, sort, Method_ListViewSort_Save__, 0LL);
  if ( !v8 )
    sub_1B8880C(v10, v11);
  CommonUI__CloseServantFilterSelectMenu(v8, v9, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BonusSelectSummonPartyServantListViewManager__EndShowServantStatusDialog(
        BonusSelectSummonPartyServantListViewManager_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  UIProgressBar_o *scrollBar; // x0

  if ( (byte_4A578EA & 1) == 0 )
  {
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4A578EA = 1;
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
  scrollBar = (UIProgressBar_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !scrollBar )
LABEL_9:
    sub_1B8880C(scrollBar, isDecide);
  CommonUI__CloseServantStatusDialog((CommonUI_o *)scrollBar, 0LL, 0LL);
}


bool __fastcall BonusSelectSummonPartyServantListViewManager__GetFocusItemIndex(
        BonusSelectSummonPartyServantListViewManager_o *this,
        int32_t *index,
        System_Collections_Generic_List_ListViewItem__o *list,
        int32_t sum,
        const MethodInfo *method)
{
  int32_t v8; // w22
  __int64 methodPtr_low; // x10
  struct UICommonButton_o *sortKindButton; // x8
  struct System_Collections_Generic_List_UIDragDropListViewSurface__o *dropList; // x9

  if ( (byte_4A578F5 & 1) == 0 )
  {
    sub_1B885B0(&BonusSelectSummonPartyServantListViewItem_TypeInfo);
    this = (BonusSelectSummonPartyServantListViewManager_o *)sub_1B885B0(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    byte_4A578F5 = 1;
  }
  *index = -1;
  if ( sum >= 1 )
  {
    if ( !list )
LABEL_16:
      sub_1B8880C(this, index);
    v8 = 0;
    while ( 1 )
    {
      this = (BonusSelectSummonPartyServantListViewManager_o *)System_Collections_Generic_List_object___get_Item(
                                                                 (System_Collections_Generic_List_object__o *)list,
                                                                 v8,
                                                                 (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
      if ( !this )
        goto LABEL_16;
      methodPtr_low = LOBYTE(BonusSelectSummonPartyServantListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(this->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
        || (BonusSelectSummonPartyServantListViewItem_c *)this->klass->_2.typeHierarchy[methodPtr_low - 1] != BonusSelectSummonPartyServantListViewItem_TypeInfo )
      {
        goto LABEL_16;
      }
      sortKindButton = this->fields.sortKindButton;
      if ( sortKindButton )
      {
        dropList = this->fields.dropList;
        if ( dropList )
        {
          if ( sortKindButton == (struct UICommonButton_o *)dropList[3].klass )
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


System_String_o *__fastcall BonusSelectSummonPartyServantListViewManager__GetScaleButtonSpriteName(
        BonusSelectSummonPartyServantListViewManager_o *this,
        const MethodInfo *method)
{
  ListViewSort_o *sort; // x0

  sort = this->fields.sort;
  if ( !sort )
    sub_1B8880C(0LL, method);
  return ListViewSort__GetScaleKindSpriteName(sort, this->fields.scaleType, 0LL);
}


void __fastcall BonusSelectSummonPartyServantListViewManager__InitLoad(const MethodInfo *method)
{
  __int64 v1; // x1
  BonusSelectSummonPartyServantListViewManager_c *v2; // x0
  ListViewSort_o *servantSortInfo; // x0

  if ( (byte_4A578E3 & 1) == 0 )
  {
    sub_1B885B0(&BonusSelectSummonPartyServantListViewManager_TypeInfo);
    byte_4A578E3 = 1;
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
    sub_1B8880C(servantSortInfo, v1);
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
  Il2CppObject *Instance; // x0
  ListViewSort_o *sort; // x21
  CommonUI_o *v14; // x22
  ServantFilterSelectMenu_CallbackFunc_o *v15; // x23

  if ( (byte_4A578EE & 1) == 0 )
  {
    sub_1B885B0(&Method_BonusSelectSummonPartyServantListViewManager_EndSelectFilterKind__);
    sub_1B885B0(&Method_BonusSelectSummonPartyServantListViewManager_OnClickFilterKind__);
    sub_1B885B0(&ServantFilterSelectMenu_CallbackFunc_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4A578EE = 1;
  }
  if ( this->fields.isInput )
  {
    v3 = Method_BonusSelectSummonPartyServantListViewManager_OnClickFilterKind__;
    if ( (*((_BYTE *)Method_BonusSelectSummonPartyServantListViewManager_OnClickFilterKind__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B885C8(Method_BonusSelectSummonPartyServantListViewManager_OnClickFilterKind__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B88594(v3, v3[4]);
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
          Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          sort = this->fields.sort;
          v14 = (CommonUI_o *)Instance;
          v15 = (ServantFilterSelectMenu_CallbackFunc_o *)sub_1B887FC(ServantFilterSelectMenu_CallbackFunc_TypeInfo);
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
    sub_1B8880C(gachaBonusSelectEntity, v6);
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
  if ( (byte_4A578E8 & 1) == 0 )
  {
    this = (BonusSelectSummonPartyServantListViewManager_o *)sub_1B885B0(&Method_BonusSelectSummonPartyServantListViewManager_OnClickSelectListView__);
    byte_4A578E8 = 1;
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
          v5 = (_QWORD *)sub_1B885C8(Method_BonusSelectSummonPartyServantListViewManager_OnClickSelectListView__);
        v6 = (System_Reflection_MethodBase_o *)sub_1B88594(v5, v5[4]);
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
        sub_1B8880C(this, obj);
      }
    }
  }
  v12 = Method_BonusSelectSummonPartyServantListViewManager_OnClickSelectListView__;
  if ( (*((_BYTE *)Method_BonusSelectSummonPartyServantListViewManager_OnClickSelectListView__ + 83) & 2) != 0 )
    v12 = (_QWORD *)sub_1B885C8(Method_BonusSelectSummonPartyServantListViewManager_OnClickSelectListView__);
  v13 = (System_Reflection_MethodBase_o *)sub_1B88594(v12, v12[4]);
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

  if ( (byte_4A578F2 & 1) == 0 )
  {
    sub_1B885B0(&Method_BonusSelectSummonPartyServantListViewManager_OnClickSortAscendingOrder__);
    byte_4A578F2 = 1;
  }
  if ( this->fields.isInput )
  {
    v3 = Method_BonusSelectSummonPartyServantListViewManager_OnClickSortAscendingOrder__;
    if ( (*((_BYTE *)Method_BonusSelectSummonPartyServantListViewManager_OnClickSortAscendingOrder__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B885C8(Method_BonusSelectSummonPartyServantListViewManager_OnClickSortAscendingOrder__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B88594(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
    sort = this->fields.sort;
    if ( !sort )
      sub_1B8880C(v5, v6);
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

  if ( (byte_4A578F0 & 1) == 0 )
  {
    sub_1B885B0(&Method_BonusSelectSummonPartyServantListViewManager_OnClickSortKind__);
    byte_4A578F0 = 1;
  }
  if ( this->fields.isInput )
  {
    v3 = Method_BonusSelectSummonPartyServantListViewManager_OnClickSortKind__;
    if ( (*((_BYTE *)Method_BonusSelectSummonPartyServantListViewManager_OnClickSortKind__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B885C8(Method_BonusSelectSummonPartyServantListViewManager_OnClickSortKind__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B88594(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
    sort = this->fields.sort;
    if ( !sort )
      sub_1B8880C(v5, v6);
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
  struct System_Threading_CancellationTokenSource_o *m_CancellationTokenSource; // x8
  struct System_Threading_SparselyPopulatedArray_CancellationCallbackInfo__array *registeredCallbacksLists; // x20
  struct System_Threading_ManualResetEvent_o *kernelEvent; // x22
  int32_t v12; // w22
  ServantLeaderInfo_o *v13; // x20
  ServantStatusDialog_EndDelegate_o *v14; // x22
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v15; // 0:x0.16

  if ( (byte_4A578E9 & 1) == 0 )
  {
    sub_1B885B0(&Method_BonusSelectSummonPartyServantListViewManager_EndShowServantStatusDialog__);
    sub_1B885B0(&Method_BonusSelectSummonPartyServantListViewManager_OnLongPushListView__);
    sub_1B885B0(&ServantStatusDialog_EndDelegate_TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1B885B0(&ServantLeaderInfo_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4A578E9 = 1;
  }
  scrollBar = (UIProgressBar_o *)this->fields.scrollBar;
  if ( !scrollBar )
    goto LABEL_13;
  this->fields.tmpScrollBarValueForLongPush = UIProgressBar__get_value(scrollBar, 0LL);
  v6 = Method_BonusSelectSummonPartyServantListViewManager_OnLongPushListView__;
  if ( (*((_BYTE *)Method_BonusSelectSummonPartyServantListViewManager_OnLongPushListView__ + 83) & 2) != 0 )
    v6 = (_QWORD *)sub_1B885C8(Method_BonusSelectSummonPartyServantListViewManager_OnLongPushListView__);
  v7 = (System_Reflection_MethodBase_o *)sub_1B88594(v6, v6[4]);
  OverwriteAssetSoundName__PlaySystemSe(v7, 0, 0LL);
  scrollBar = (UIProgressBar_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !obj )
    goto LABEL_13;
  v8 = (CommonUI_o *)scrollBar;
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
  *(_QWORD *)&v15.fields.currentCryptoKey = kernelEvent;
  *(_QWORD *)&v15.fields.fakeValue = registeredCallbacksLists;
  v12 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v15, 0LL);
  v13 = (ServantLeaderInfo_o *)sub_1B887FC(ServantLeaderInfo_TypeInfo);
  ServantLeaderInfo___ctor_40485696(v13, v12, 0, 1, 0LL);
  v14 = (ServantStatusDialog_EndDelegate_o *)sub_1B887FC(ServantStatusDialog_EndDelegate_TypeInfo);
  ServantStatusDialog_EndDelegate___ctor(
    v14,
    (Il2CppObject *)this,
    Method_BonusSelectSummonPartyServantListViewManager_EndShowServantStatusDialog__,
    0LL);
  if ( !v8 )
LABEL_13:
    sub_1B8880C(scrollBar, obj);
  CommonUI__OpenServantStatusDialog_30506432(v8, 7, v13, v14, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BonusSelectSummonPartyServantListViewManager__RequestListObject(
        BonusSelectSummonPartyServantListViewManager_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *ObjectList; // x0
  __int64 v6; // x1
  __int64 v7; // x1
  const MethodInfo *v8; // x2
  System_Collections_Generic_List_Enumerator_object__o v9; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4A578E5 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_BonusSelectSummonPartyServantListViewObject__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_BonusSelectSummonPartyServantListViewObject__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_BonusSelectSummonPartyServantListViewObject__get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_List_BonusSelectSummonPartyServantListViewObject__GetEnumerator__);
    byte_4A578E5 = 1;
  }
  memset(&v9, 0, sizeof(v9));
  ObjectList = (System_Collections_Generic_List_object__o *)BonusSelectSummonPartyServantListViewManager__get_ObjectList(
                                                              this,
                                                              *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_1B8880C(0LL, v6);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v9,
    ObjectList,
    (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_BonusSelectSummonPartyServantListViewObject__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v9,
            (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_BonusSelectSummonPartyServantListViewObject__MoveNext__) )
  {
    if ( !v9.fields._current )
      sub_1B8880C(0LL, v7);
    BonusSelectSummonPartyServantListViewObject__Init(
      (BonusSelectSummonPartyServantListViewObject_o *)v9.fields._current,
      mode,
      v8);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v9,
    (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_BonusSelectSummonPartyServantListViewObject__Dispose__);
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

  if ( (byte_4A578EC & 1) == 0 )
  {
    sub_1B885B0(&BonusSelectSummonPartyServantListViewManager_TypeInfo);
    byte_4A578EC = 1;
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
    sub_1B8880C(servantSortInfo, *(_QWORD *)&scaleType);
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

  if ( (byte_4A578F3 & 1) == 0 )
  {
    sub_1B885B0(&BonusSelectSummonPartyServantListViewManager_TypeInfo);
    byte_4A578F3 = 1;
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
    sub_1B8880C(servantSortInfo, isAscendingOrder);
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

  if ( (byte_4A578F1 & 1) == 0 )
  {
    sub_1B885B0(&BonusSelectSummonPartyServantListViewManager_TypeInfo);
    byte_4A578F1 = 1;
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
    sub_1B8880C(servantSortInfo, *(_QWORD *)&sortKind);
  }
  ListViewSort__SaveSortKind(servantSortInfo, 0LL);
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
  if ( (byte_4A578E6 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_17511/*"btn_filter_on"*/);
    this = (BonusSelectSummonPartyServantListViewManager_o *)sub_1B885B0(&StringLiteral_17510/*"btn_filter"*/);
    byte_4A578E6 = 1;
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
    sub_1B8880C(this, method);
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
  v8 = (System_String_o **)&StringLiteral_17510/*"btn_filter"*/;
  if ( ((unsigned __int8)this & 1) == 0 )
    v8 = (System_String_o **)&StringLiteral_17511/*"btn_filter_on"*/;
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
    sub_1B8880C(scrollView, v5);
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
  if ( (byte_4A578ED & 1) == 0 )
  {
    this = (BonusSelectSummonPartyServantListViewManager_o *)sub_1B885B0(&BonusSelectSummonPartyServantListViewObject_TypeInfo);
    byte_4A578ED = 1;
  }
  if ( !obj
    || (methodPtr_low = LOBYTE(BonusSelectSummonPartyServantListViewObject_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(obj->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low)
    || (BonusSelectSummonPartyServantListViewObject_c *)obj->klass->_2.typeHierarchy[methodPtr_low - 1] != BonusSelectSummonPartyServantListViewObject_TypeInfo )
  {
    sub_1B8880C(this, obj);
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
  if ( (byte_4A578E7 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_17628/*"btn_txt_up"*/);
    this = (BonusSelectSummonPartyServantListViewManager_o *)sub_1B885B0(&StringLiteral_17574/*"btn_txt_down"*/);
    byte_4A578E7 = 1;
  }
  sort = v2->fields.sort;
  if ( !sort || (this = (BonusSelectSummonPartyServantListViewManager_o *)v2->fields.sortExplanationSprite) == 0LL )
    sub_1B8880C(this, method);
  if ( sort->fields.isAscendingOrder )
    v4 = (System_String_o **)&StringLiteral_17628/*"btn_txt_up"*/;
  else
    v4 = (System_String_o **)&StringLiteral_17574/*"btn_txt_down"*/;
  UISprite__set_spriteName((UISprite_o *)this, *v4, 0LL);
}


System_Collections_Generic_List_BonusSelectSummonPartyServantListViewObject__o *__fastcall BonusSelectSummonPartyServantListViewManager__get_ObjectList(
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
  Il2CppObject *v12; // x1
  struct System_Object_array *items; // x8
  _QWORD *v14; // x9
  __int64 size; // x10
  Il2CppClass **v16; // x0
  System_Collections_Generic_List_Enumerator_object__o v18; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v19; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4A578F4 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_BonusSelectSummonPartyServantListViewObject___);
    sub_1B885B0(&Method_System_Collections_Generic_List_BonusSelectSummonPartyServantListViewObject__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_1B885B0(&Method_System_Collections_Generic_List_BonusSelectSummonPartyServantListViewObject___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_BonusSelectSummonPartyServantListViewObject__TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A578F4 = 1;
  }
  memset(&v19, 0, sizeof(v19));
  v3 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_BonusSelectSummonPartyServantListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_BonusSelectSummonPartyServantListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_1B8880C(0LL, v4);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v18,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v19 = v18;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v19,
            (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v19.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v7 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v7 )
    {
      if ( !current )
        sub_1B8880C(v7, v8);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_BonusSelectSummonPartyServantListViewObject___);
      v12 = Component_object;
      if ( !v3 )
        sub_1B8880C(Component_object, Component_object);
      items = v3->fields._items;
      v14 = Method_System_Collections_Generic_List_BonusSelectSummonPartyServantListViewObject__Add__;
      ++v3->fields._version;
      if ( !items )
        sub_1B8880C(Component_object, Component_object);
      size = v3->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v3,
          Component_object,
          *(const MethodInfo_34FD834 **)(*(_QWORD *)(v14[4] + 192LL) + 112LL));
      }
      else
      {
        v16 = &items->obj.klass + size;
        v3->fields._size = size + 1;
        v16[4] = (Il2CppClass *)v12;
        sub_1B88554((ServantStatusBattleListViewItem_o *)(v16 + 4), (int32_t)v12, v10, v11);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v19,
    (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
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
  __int64 v6; // x21
  int v8; // w22
  struct System_Reflection_MethodInfo_o *v9; // x9
  __int64 v10; // x0

  v4 = *(_QWORD *)(*(_QWORD *)&method + 8LL);
  *(_QWORD *)&this->fields.extra_arg = *(_QWORD *)&method;
  v6 = *(_QWORD *)&method;
  *(_QWORD *)&this->fields.method_ptr = v4;
  *(_QWORD *)&this->fields.method = object;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.method, (int32_t)object, method, (int32_t)a4);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1B88670(v6) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1B88828(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1B886D8(v10, 0LL);
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
  this->fields.m_target = (Il2CppObject *)sub_19CA5FC;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_19CA5A4;
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
  __int64 v10; // x3
  __int64 v11; // x4
  __int64 v13[3]; // [xsp+8h] [xbp-58h] BYREF
  int32_t v14; // [xsp+28h] [xbp-38h] BYREF
  int32_t v15; // [xsp+2Ch] [xbp-34h] BYREF

  v14 = result;
  v15 = kind;
  if ( (byte_4A578F7 & 1) == 0 )
  {
    sub_1B885B0(&int_TypeInfo);
    sub_1B885B0(&BonusSelectSummonPartyServantListViewManager_ResultKind_TypeInfo);
    byte_4A578F7 = 1;
  }
  v13[2] = 0LL;
  v13[0] = j_il2cpp_value_box_0(
             BonusSelectSummonPartyServantListViewManager_ResultKind_TypeInfo,
             &v15,
             *(_QWORD *)&result,
             callback,
             object);
  v13[1] = j_il2cpp_value_box_0(int_TypeInfo, &v14, v9, v10, v11);
  return (System_IAsyncResult_o *)sub_1B88564(this, v13, callback, object);
}


void __fastcall BonusSelectSummonPartyServantListViewManager_CallbackFunc__EndInvoke(
        BonusSelectSummonPartyServantListViewManager_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1B88568(result, 0LL, method);
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
  if ( (byte_4A578F8 & 1) == 0 )
  {
    this = (BonusSelectSummonPartyServantListViewManager___c__DisplayClass17_0_o *)sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4A578F8 = 1;
  }
  servantEntity = v4->fields.servantEntity;
  if ( !servantEntity )
    sub_1B8880C(this, *(_QWORD *)&id);
  v7 = *(_QWORD *)&servantEntity->fields.id.fields.currentCryptoKey;
  v6 = *(_QWORD *)&servantEntity->fields.id.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v9.fields.currentCryptoKey = v7;
  *(_QWORD *)&v9.fields.fakeValue = v6;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v9, 0LL) == id;
}