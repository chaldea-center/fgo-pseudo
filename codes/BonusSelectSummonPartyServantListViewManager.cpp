void __fastcall BonusSelectSummonPartyServantListViewManager___cctor(const MethodInfo *method)
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
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  System_String_o *SORT_SAVE_KEY; // x19
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x3
  ListViewSort_o *v20; // x20
  struct BonusSelectSummonPartyServantListViewManager_StaticFields *static_fields; // x0
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7
  System_String_o *v28; // x19
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x3
  ListViewSort_o *v32; // x20
  struct BonusSelectSummonPartyServantListViewManager_StaticFields *v33; // x0
  int64_t v34; // x2
  int32_t v35; // w3
  System_String_o *v36; // x4
  BattleSetupInfo_o *v37; // x5
  FollowerInfo_o *v38; // x6
  PartyListViewItem_o *v39; // x7
  System_String_o *v40; // x19
  __int64 v41; // x1
  __int64 v42; // x2
  __int64 v43; // x3
  ListViewSort_o *v44; // x20
  struct BonusSelectSummonPartyServantListViewManager_StaticFields *v45; // x0
  int64_t v46; // x2
  int32_t v47; // w3
  System_String_o *v48; // x4
  BattleSetupInfo_o *v49; // x5
  FollowerInfo_o *v50; // x6
  PartyListViewItem_o *v51; // x7

  if ( (byte_4B12883 & 1) == 0 )
  {
    sub_1BCA7E0(&BonusSelectSummonPartyServantListViewManager_TypeInfo, v1, v2);
    sub_1BCA7E0(&ListViewSort_TypeInfo, v8, v9);
    sub_1BCA7E0(&StringLiteral_1409/*"2"*/, v10, v11);
    sub_1BCA7E0(&StringLiteral_3345/*"BonusSelectSummonPartyServant"*/, v12, v13);
    sub_1BCA7E0(&StringLiteral_1262/*"1"*/, v14, v15);
    byte_4B12883 = 1;
  }
  BonusSelectSummonPartyServantListViewManager_TypeInfo->static_fields->SORT_SAVE_KEY = (struct System_String_o *)StringLiteral_3345/*"BonusSelectSummonPartyServant"*/;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)BonusSelectSummonPartyServantListViewManager_TypeInfo->static_fields,
    StringLiteral_3345/*"BonusSelectSummonPartyServant"*/,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
  SORT_SAVE_KEY = BonusSelectSummonPartyServantListViewManager_TypeInfo->static_fields->SORT_SAVE_KEY;
  v20 = (ListViewSort_o *)sub_1BCAA2C(ListViewSort_TypeInfo, v17, v18, v19);
  ListViewSort___ctor_41480716(v20, SORT_SAVE_KEY, 27, 0, 0LL);
  static_fields = BonusSelectSummonPartyServantListViewManager_TypeInfo->static_fields;
  static_fields->servantSortInfo = v20;
  sub_1BCA784((PartyOrganizationUtility_o *)&static_fields->servantSortInfo, (int64_t)v20, v22, v23, v24, v25, v26, v27);
  v28 = System_String__Concat_62401220(
          BonusSelectSummonPartyServantListViewManager_TypeInfo->static_fields->SORT_SAVE_KEY,
          (System_String_o *)StringLiteral_1262/*"1"*/,
          0LL);
  v32 = (ListViewSort_o *)sub_1BCAA2C(ListViewSort_TypeInfo, v29, v30, v31);
  ListViewSort___ctor_41480716(v32, v28, 27, 0, 0LL);
  v33 = BonusSelectSummonPartyServantListViewManager_TypeInfo->static_fields;
  v33->servantSortInfoExtra1 = v32;
  sub_1BCA784((PartyOrganizationUtility_o *)&v33->servantSortInfoExtra1, (int64_t)v32, v34, v35, v36, v37, v38, v39);
  v40 = System_String__Concat_62401220(
          BonusSelectSummonPartyServantListViewManager_TypeInfo->static_fields->SORT_SAVE_KEY,
          (System_String_o *)StringLiteral_1409/*"2"*/,
          0LL);
  v44 = (ListViewSort_o *)sub_1BCAA2C(ListViewSort_TypeInfo, v41, v42, v43);
  ListViewSort___ctor_41480716(v44, v40, 27, 0, 0LL);
  v45 = BonusSelectSummonPartyServantListViewManager_TypeInfo->static_fields;
  v45->servantSortInfoExtra2 = v44;
  sub_1BCA784((PartyOrganizationUtility_o *)&v45->servantSortInfoExtra2, (int64_t)v44, v46, v47, v48, v49, v50, v51);
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
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  BonusSelectSummonPartyServantListViewManager_o *v8; // x19
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  unsigned int scaleType; // w8
  int64_t smallSizeSeed; // x1
  BonusSelectSummonPartyServantListViewManager_o *v17; // x0
  int v18; // w8
  struct ListViewItemSeed_o **p_seed; // x0
  __int64 v20; // x1
  const MethodInfo *v21; // x2
  System_Collections_Generic_List_object__o *itemList; // x0
  int32_t v23; // w20
  Il2CppObject *Item; // x0
  ListViewItem_o *v25; // x21
  __int64 methodPtr_low; // x10
  UnityEngine_Object_o *monitor; // x22

  v8 = this;
  if ( (byte_4B12878 & 1) == 0 )
  {
    sub_1BCA7E0(&BonusSelectSummonPartyServantListViewItem_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v11, v12);
    this = (BonusSelectSummonPartyServantListViewManager_o *)sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v13, v14);
    byte_4B12878 = 1;
  }
  scaleType = v8->fields.scaleType;
  if ( scaleType < 2 )
  {
    smallSizeSeed = (int64_t)v8->fields.smallSizeSeed;
    v17 = v8;
    v18 = 2;
  }
  else if ( scaleType == 2 )
  {
    smallSizeSeed = (int64_t)v8->fields.extremelySmallSizeSeed;
    v17 = v8;
    v18 = 3;
  }
  else
  {
    if ( scaleType != 3 )
      goto LABEL_10;
    smallSizeSeed = (int64_t)v8->fields.normalSizeSeed;
    v17 = v8;
    v18 = 1;
  }
  v17->fields.seed = (struct ListViewItemSeed_o *)smallSizeSeed;
  p_seed = &v17->fields.seed;
  *((_DWORD *)p_seed + 70) = v18;
  sub_1BCA784((PartyOrganizationUtility_o *)p_seed, smallSizeSeed, (int64_t)v2, v3, v4, v5, v6, v7);
LABEL_10:
  BonusSelectSummonPartyServantListViewManager__SetAndSaveIconScaleType(this, v8->fields.scaleType, v2);
  itemList = (System_Collections_Generic_List_object__o *)v8->fields.itemList;
  if ( !itemList )
LABEL_22:
    sub_1BCAA3C(itemList, v20);
  v23 = 0;
  while ( v23 < itemList->fields._size )
  {
    Item = System_Collections_Generic_List_object___get_Item(
             itemList,
             v23,
             (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    if ( Item )
    {
      v25 = (ListViewItem_o *)Item;
      methodPtr_low = LOBYTE(BonusSelectSummonPartyServantListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(Item->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low
        && (BonusSelectSummonPartyServantListViewItem_c *)Item->klass->_2.typeHierarchy[methodPtr_low - 1] == BonusSelectSummonPartyServantListViewItem_TypeInfo )
      {
        monitor = (UnityEngine_Object_o *)Item[6].monitor;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v20);
        if ( !UnityEngine_Object__op_Equality(monitor, 0LL, 0LL) )
        {
          itemList = (System_Collections_Generic_List_object__o *)v25->fields.viewObject;
          if ( !itemList )
            goto LABEL_22;
          ListViewObject__SetItemSeed((ListViewObject_o *)itemList, v25, v8->fields.seed, 0LL);
        }
      }
    }
    itemList = (System_Collections_Generic_List_object__o *)v8->fields.itemList;
    ++v23;
    if ( !itemList )
      goto LABEL_22;
  }
  BonusSelectSummonPartyServantListViewManager__SetMode(v8, 2, v21);
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
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x1
  __int64 v31; // x2
  int32_t ClassId; // w0
  __int64 v33; // x1
  int64_t v34; // x2
  int32_t v35; // w3
  System_String_o *v36; // x4
  BattleSetupInfo_o *v37; // x5
  FollowerInfo_o *v38; // x6
  PartyListViewItem_o *v39; // x7
  BonusSelectSummonPartyServantListViewManager_c *v40; // x0
  int64_t servantSortInfoExtra2; // x1
  BonusSelectSummonPartyServantListViewManager_c *v42; // x0
  BonusSelectSummonPartyServantListViewManager_c *v43; // x0
  int64_t v44; // x2
  int32_t v45; // w3
  System_String_o *v46; // x4
  BattleSetupInfo_o *v47; // x5
  FollowerInfo_o *v48; // x6
  PartyListViewItem_o *v49; // x7
  struct ListViewSort_o *sort; // x8
  int32_t sortKind; // w9
  unsigned int iconScaleKind; // w9
  int64_t normalSizeSeed; // x1
  __int64 v54; // x1
  Il2CppObject *Master_object; // x22
  Il2CppObject *v56; // x23
  __int64 v57; // x2
  __int64 v58; // x3
  GachaBonusSelectLineupEntity_array *v59; // x8
  __int64 v60; // x28
  il2cpp_array_size_t v61; // w21
  __int64 v62; // x24
  __int64 v63; // x8
  int64_t v64; // x2
  int32_t v65; // w3
  System_String_o *v66; // x4
  BattleSetupInfo_o *v67; // x5
  FollowerInfo_o *v68; // x6
  PartyListViewItem_o *v69; // x7
  __int64 v70; // x1
  __int64 v71; // x2
  __int64 v72; // x3
  System_Func_int__bool__o *v73; // x26
  __int64 v74; // x2
  __int64 v75; // x3
  struct BonusSelectSummonPartyServantSelectMenu_o *partyServantSelectMenu; // x9
  GachaBonusSelectLineupEntity_o *v77; // x26
  ServantEntity_o *v78; // x25
  BonusSelectSummonPartyOrganizationListViewItem_o *organizationItem; // x27
  char v80; // w29
  BonusSelectSummonPartyServantListViewItem_o *v81; // x24
  const MethodInfo *v82; // x6
  int64_t v83; // x2
  int32_t v84; // w3
  System_String_o *v85; // x4
  BattleSetupInfo_o *v86; // x5
  FollowerInfo_o *v87; // x6
  PartyListViewItem_o *v88; // x7
  __int64 v89; // x8
  _QWORD *v90; // x9
  __int64 m_CancellationTokenSource_low; // x10
  __int64 v92; // x8
  UILabel_o *emptyMessageLabel; // x20
  const MethodInfo *v94; // x1
  const MethodInfo *v95; // x1
  GachaBonusSelectLineupEntity_array *gachaBonusSelectLineupEntities; // [xsp+8h] [xbp-68h] BYREF

  v4 = gachaBonusSelectEntity;
  v5 = this;
  if ( (byte_4B12871 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_BasicHelper_Any_int____76840176, gachaBonusSelectEntity, notPossibleSvtIdList);
    sub_1BCA7E0(&BonusSelectSummonPartyServantListViewItem_TypeInfo, v6, v7);
    sub_1BCA7E0(&BonusSelectSummonPartyServantListViewManager_TypeInfo, v8, v9);
    sub_1BCA7E0(&Method_DataManager_GetMaster_GachaBonusSelectLineupMaster___, v10, v11);
    sub_1BCA7E0(&Method_DataManager_GetMaster_GiftMaster___, v12, v13);
    sub_1BCA7E0(&Method_DataManager_GetMaster_ServantMaster___, v14, v15);
    sub_1BCA7E0(&DataManager_TypeInfo, v16, v17);
    sub_1BCA7E0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v18, v19);
    sub_1BCA7E0(&System_Func_int__bool__TypeInfo, v20, v21);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewItem__Add__, v22, v23);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v24, v25);
    sub_1BCA7E0(&Method_BonusSelectSummonPartyServantListViewManager___c__DisplayClass17_0__CreateList_b__0__, v26, v27);
    sub_1BCA7E0(&BonusSelectSummonPartyServantListViewManager___c__DisplayClass17_0_TypeInfo, v28, v29);
    this = (BonusSelectSummonPartyServantListViewManager_o *)sub_1BCA7E0(&StringLiteral_11910/*"SERVANT_SORT_FILTER_RESULT_EMPTY"*/, v30, v31);
    byte_4B12871 = 1;
  }
  gachaBonusSelectLineupEntities = 0LL;
  if ( !v4 )
    goto LABEL_57;
  ClassId = GachaBonusSelectEntity__GetClassId(v4, 1001, 0LL);
  if ( ClassId == 1005 )
  {
    v42 = BonusSelectSummonPartyServantListViewManager_TypeInfo;
    if ( !BonusSelectSummonPartyServantListViewManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BonusSelectSummonPartyServantListViewManager_TypeInfo, v33);
      v42 = BonusSelectSummonPartyServantListViewManager_TypeInfo;
    }
    servantSortInfoExtra2 = (int64_t)v42->static_fields->servantSortInfoExtra2;
  }
  else if ( ClassId == 1004 )
  {
    v40 = BonusSelectSummonPartyServantListViewManager_TypeInfo;
    if ( !BonusSelectSummonPartyServantListViewManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BonusSelectSummonPartyServantListViewManager_TypeInfo, v33);
      v40 = BonusSelectSummonPartyServantListViewManager_TypeInfo;
    }
    servantSortInfoExtra2 = (int64_t)v40->static_fields->servantSortInfoExtra1;
  }
  else
  {
    v43 = BonusSelectSummonPartyServantListViewManager_TypeInfo;
    if ( !BonusSelectSummonPartyServantListViewManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BonusSelectSummonPartyServantListViewManager_TypeInfo, v33);
      v43 = BonusSelectSummonPartyServantListViewManager_TypeInfo;
    }
    servantSortInfoExtra2 = (int64_t)v43->static_fields->servantSortInfo;
  }
  v5->fields.sort = (struct ListViewSort_o *)servantSortInfoExtra2;
  sub_1BCA784((PartyOrganizationUtility_o *)&v5->fields.sort, servantSortInfoExtra2, v34, v35, v36, v37, v38, v39);
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
    normalSizeSeed = (int64_t)v5->fields.normalSizeSeed;
    goto LABEL_26;
  }
  if ( iconScaleKind == 2 )
  {
    normalSizeSeed = (int64_t)v5->fields.smallSizeSeed;
    goto LABEL_26;
  }
  if ( iconScaleKind == 3 )
  {
    normalSizeSeed = (int64_t)v5->fields.extremelySmallSizeSeed;
LABEL_26:
    v5->fields.seed = (struct ListViewItemSeed_o *)normalSizeSeed;
    sub_1BCA784((PartyOrganizationUtility_o *)&v5->fields.seed, normalSizeSeed, v44, v45, v46, v47, v48, v49);
  }
  ListViewManager__CreateList((ListViewManager_o *)v5, 0, 0LL);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v54);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_GiftMaster___);
  v56 = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_ServantMaster___);
  this = (BonusSelectSummonPartyServantListViewManager_o *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_GachaBonusSelectLineupMaster___);
  if ( !this )
    goto LABEL_57;
  this = (BonusSelectSummonPartyServantListViewManager_o *)GachaBonusSelectLineupMaster__TryGetEntityList(
                                                             (GachaBonusSelectLineupMaster_o *)this,
                                                             &gachaBonusSelectLineupEntities,
                                                             v4->fields.gachaBonusSelectLineupId,
                                                             0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v59 = gachaBonusSelectLineupEntities;
    if ( !gachaBonusSelectLineupEntities )
      goto LABEL_57;
    v60 = 4LL;
    while ( 1 )
    {
      v61 = v60 - 4;
      if ( (int)v60 - 4 >= (signed int)v59->max_length )
        break;
      v62 = sub_1BCAA2C(
              BonusSelectSummonPartyServantListViewManager___c__DisplayClass17_0_TypeInfo,
              gachaBonusSelectEntity,
              v57,
              v58);
      System_Object___ctor((Il2CppObject *)v62, 0LL);
      if ( !gachaBonusSelectLineupEntities )
        goto LABEL_57;
      if ( v61 >= gachaBonusSelectLineupEntities->max_length )
        goto LABEL_58;
      v63 = *((_QWORD *)&gachaBonusSelectLineupEntities->obj.klass + v60);
      if ( !v63 || !Master_object )
        goto LABEL_57;
      this = (BonusSelectSummonPartyServantListViewManager_o *)GiftMaster__getDataById(
                                                                 (GiftMaster_o *)Master_object,
                                                                 *(_DWORD *)(v63 + 24),
                                                                 0LL);
      if ( this )
      {
        if ( !v56 )
          goto LABEL_57;
        this = (BonusSelectSummonPartyServantListViewManager_o *)DataMasterBase_object__object__int___GetEntity(
                                                                   (DataMasterBase_TMaster__TEntity__PKType__o *)v56,
                                                                   (int32_t)this->fields.m_CancellationTokenSource,
                                                                   (const MethodInfo_31B2E40 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
        gachaBonusSelectEntity = (GachaBonusSelectEntity_o *)this;
        if ( !v62 )
          goto LABEL_57;
      }
      else
      {
        gachaBonusSelectEntity = 0LL;
        if ( !v62 )
          goto LABEL_57;
      }
      *(_QWORD *)(v62 + 16) = gachaBonusSelectEntity;
      sub_1BCA784(
        (PartyOrganizationUtility_o *)(v62 + 16),
        (int64_t)gachaBonusSelectEntity,
        v64,
        v65,
        v66,
        v67,
        v68,
        v69);
      v73 = (System_Func_int__bool__o *)sub_1BCAA2C(System_Func_int__bool__TypeInfo, v70, v71, v72);
      System_Func_int__bool____ctor(
        v73,
        (Il2CppObject *)v62,
        Method_BonusSelectSummonPartyServantListViewManager___c__DisplayClass17_0__CreateList_b__0__,
        0LL);
      this = (BonusSelectSummonPartyServantListViewManager_o *)BasicHelper__Any_int__49273364(
                                                                 notPossibleSvtIdList,
                                                                 (System_Func_T__bool__o *)v73,
                                                                 (const MethodInfo_2EFDA14 *)Method_BasicHelper_Any_int____76840176);
      if ( !gachaBonusSelectLineupEntities )
        goto LABEL_57;
      if ( v61 >= gachaBonusSelectLineupEntities->max_length )
LABEL_58:
        sub_1BCAA44(this, gachaBonusSelectEntity);
      partyServantSelectMenu = v5->fields.partyServantSelectMenu;
      if ( partyServantSelectMenu )
      {
        v77 = (GachaBonusSelectLineupEntity_o *)*((_QWORD *)&gachaBonusSelectLineupEntities->obj.klass + v60);
        v78 = *(ServantEntity_o **)(v62 + 16);
        organizationItem = partyServantSelectMenu->fields.organizationItem;
        v80 = (unsigned __int8)this ^ 1;
        v81 = (BonusSelectSummonPartyServantListViewItem_o *)sub_1BCAA2C(
                                                               BonusSelectSummonPartyServantListViewItem_TypeInfo,
                                                               gachaBonusSelectEntity,
                                                               v74,
                                                               v75);
        BonusSelectSummonPartyServantListViewItem___ctor(v81, v61, v78, v77, organizationItem, v80 & 1, v82);
        this = (BonusSelectSummonPartyServantListViewManager_o *)v5->fields.itemList;
        if ( this )
        {
          v89 = *(_QWORD *)&this->fields.m_CachedPtr;
          v90 = Method_System_Collections_Generic_List_ListViewItem__Add__;
          ++HIDWORD(this->fields.m_CancellationTokenSource);
          if ( v89 )
          {
            m_CancellationTokenSource_low = SLODWORD(this->fields.m_CancellationTokenSource);
            if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(v89 + 24) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                (System_Collections_Generic_List_object__o *)this,
                (Il2CppObject *)v81,
                *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v90[4] + 192LL) + 112LL));
            }
            else
            {
              v92 = v89 + 8 * m_CancellationTokenSource_low;
              LODWORD(this->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
              *(_QWORD *)(v92 + 32) = v81;
              sub_1BCA784((PartyOrganizationUtility_o *)(v92 + 32), (int64_t)v81, v83, v84, v85, v86, v87, v88);
            }
            v59 = gachaBonusSelectLineupEntities;
            ++v60;
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
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, gachaBonusSelectEntity);
  this = (BonusSelectSummonPartyServantListViewManager_o *)LocalizationManager__Get(
                                                             (System_String_o *)StringLiteral_11910/*"SERVANT_SORT_FILTER_RESULT_EMPTY"*/,
                                                             0LL);
  if ( !emptyMessageLabel )
LABEL_57:
    sub_1BCAA3C(this, gachaBonusSelectEntity);
  UILabel__set_text(emptyMessageLabel, (System_String_o *)this, 0LL);
  ListViewManager__SortItem((ListViewManager_o *)v5, -1, 0, -1, 0LL);
  BonusSelectSummonPartyServantListViewManager__SetFilterButtonImage(v5, v94);
  BonusSelectSummonPartyServantListViewManager__UpdateAscendingOrderBtnSprite(v5, v95);
}


void __fastcall BonusSelectSummonPartyServantListViewManager__DeleteContinueData(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  BonusSelectSummonPartyServantListViewManager_c *v3; // x0
  ListViewSort_o *servantSortInfo; // x0

  if ( (byte_4B1286F & 1) == 0 )
  {
    sub_1BCA7E0(&BonusSelectSummonPartyServantListViewManager_TypeInfo, v1, v2);
    byte_4B1286F = 1;
  }
  v3 = BonusSelectSummonPartyServantListViewManager_TypeInfo;
  if ( !BonusSelectSummonPartyServantListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BonusSelectSummonPartyServantListViewManager_TypeInfo, v1);
    v3 = BonusSelectSummonPartyServantListViewManager_TypeInfo;
  }
  servantSortInfo = v3->static_fields->servantSortInfo;
  if ( !servantSortInfo
    || (ListViewSort__DeleteContinueData(servantSortInfo, 0LL),
        (servantSortInfo = BonusSelectSummonPartyServantListViewManager_TypeInfo->static_fields->servantSortInfoExtra1) == 0LL)
    || (ListViewSort__DeleteContinueData(servantSortInfo, 0LL),
        (servantSortInfo = BonusSelectSummonPartyServantListViewManager_TypeInfo->static_fields->servantSortInfoExtra2) == 0LL) )
  {
    sub_1BCAA3C(servantSortInfo, v1);
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
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  const MethodInfo *v9; // x1
  Il2CppObject *Instance; // x0
  Il2CppObject *sort; // x21
  CommonUI_o *v12; // x19
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x3
  System_Action_o *v16; // x20
  __int64 v17; // x0
  __int64 v18; // x1

  if ( (byte_4B1287C & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, isDecide, method);
    sub_1BCA7E0(&Method_ListViewSort_Save__, v5, v6);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v7, v8);
    byte_4B1287C = 1;
  }
  if ( isDecide )
  {
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
    BonusSelectSummonPartyServantListViewManager__SetFilterButtonImage(this, v9);
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  sort = (Il2CppObject *)this->fields.sort;
  v12 = (CommonUI_o *)Instance;
  v16 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v13, v14, v15);
  System_Action___ctor(v16, sort, Method_ListViewSort_Save__, 0LL);
  if ( !v12 )
    sub_1BCAA3C(v17, v18);
  CommonUI__CloseServantFilterSelectMenu(v12, v16, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BonusSelectSummonPartyServantListViewManager__EndShowServantStatusDialog(
        BonusSelectSummonPartyServantListViewManager_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  UIProgressBar_o *scrollBar; // x0

  if ( (byte_4B12877 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, isDecide, method);
    byte_4B12877 = 1;
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
  scrollBar = (UIProgressBar_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !scrollBar )
LABEL_9:
    sub_1BCAA3C(scrollBar, isDecide);
  CommonUI__CloseServantStatusDialog((CommonUI_o *)scrollBar, 0LL, 0LL);
}


bool __fastcall BonusSelectSummonPartyServantListViewManager__GetFocusItemIndex(
        BonusSelectSummonPartyServantListViewManager_o *this,
        int32_t *index,
        System_Collections_Generic_List_ListViewItem__o *list,
        int32_t sum,
        const MethodInfo *method)
{
  __int64 v8; // x1
  __int64 v9; // x2
  int32_t v10; // w22
  __int64 methodPtr_low; // x10
  struct UICommonButton_o *sortKindButton; // x8
  struct System_Collections_Generic_List_UIDragDropListViewSurface__o *dropList; // x9

  if ( (byte_4B12882 & 1) == 0 )
  {
    sub_1BCA7E0(&BonusSelectSummonPartyServantListViewItem_TypeInfo, index, list);
    this = (BonusSelectSummonPartyServantListViewManager_o *)sub_1BCA7E0(
                                                               &Method_System_Collections_Generic_List_ListViewItem__get_Item__,
                                                               v8,
                                                               v9);
    byte_4B12882 = 1;
  }
  *index = -1;
  if ( sum >= 1 )
  {
    if ( !list )
LABEL_16:
      sub_1BCAA3C(this, index);
    v10 = 0;
    while ( 1 )
    {
      this = (BonusSelectSummonPartyServantListViewManager_o *)System_Collections_Generic_List_object___get_Item(
                                                                 (System_Collections_Generic_List_object__o *)list,
                                                                 v10,
                                                                 (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
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
      if ( sum == ++v10 )
        return 1;
    }
    *index = v10;
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
    sub_1BCAA3C(0LL, method);
  return ListViewSort__GetScaleKindSpriteName(sort, this->fields.scaleType, 0LL);
}


void __fastcall BonusSelectSummonPartyServantListViewManager__InitLoad(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  BonusSelectSummonPartyServantListViewManager_c *v3; // x0
  ListViewSort_o *servantSortInfo; // x0

  if ( (byte_4B12870 & 1) == 0 )
  {
    sub_1BCA7E0(&BonusSelectSummonPartyServantListViewManager_TypeInfo, v1, v2);
    byte_4B12870 = 1;
  }
  v3 = BonusSelectSummonPartyServantListViewManager_TypeInfo;
  if ( !BonusSelectSummonPartyServantListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BonusSelectSummonPartyServantListViewManager_TypeInfo, v1);
    v3 = BonusSelectSummonPartyServantListViewManager_TypeInfo;
  }
  servantSortInfo = v3->static_fields->servantSortInfo;
  if ( !servantSortInfo
    || (ListViewSort__InitLoad(servantSortInfo, 0LL),
        (servantSortInfo = BonusSelectSummonPartyServantListViewManager_TypeInfo->static_fields->servantSortInfoExtra1) == 0LL)
    || (ListViewSort__InitLoad(servantSortInfo, 0LL),
        (servantSortInfo = BonusSelectSummonPartyServantListViewManager_TypeInfo->static_fields->servantSortInfoExtra2) == 0LL) )
  {
    sub_1BCAA3C(servantSortInfo, v1);
  }
  ListViewSort__InitLoad(servantSortInfo, 0LL);
}


void __fastcall BonusSelectSummonPartyServantListViewManager__OnClickFilterKind(
        BonusSelectSummonPartyServantListViewManager_o *this,
        const MethodInfo *method)
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
  GachaBonusSelectEntity_o *gachaBonusSelectEntity; // x0
  __int64 v13; // x1
  struct BonusSelectSummonPartyServantSelectMenu_o *partyServantSelectMenu; // x8
  struct BonusSelectSummonPartyOrganizationListViewItem_o *organizationItem; // x8
  int32_t v16; // w20
  struct BonusSelectSummonPartyServantSelectMenu_o *v17; // x8
  struct BonusSelectSummonPartyOrganizationListViewItem_o *v18; // x8
  Il2CppObject *Instance; // x0
  ListViewSort_o *sort; // x21
  CommonUI_o *v21; // x22
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x3
  ServantFilterSelectMenu_CallbackFunc_o *v25; // x23

  if ( (byte_4B1287B & 1) == 0 )
  {
    sub_1BCA7E0(&Method_BonusSelectSummonPartyServantListViewManager_EndSelectFilterKind__, method, v2);
    sub_1BCA7E0(&Method_BonusSelectSummonPartyServantListViewManager_OnClickFilterKind__, v4, v5);
    sub_1BCA7E0(&ServantFilterSelectMenu_CallbackFunc_TypeInfo, v6, v7);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v8, v9);
    byte_4B1287B = 1;
  }
  if ( this->fields.isInput )
  {
    v10 = Method_BonusSelectSummonPartyServantListViewManager_OnClickFilterKind__;
    if ( (*((_BYTE *)Method_BonusSelectSummonPartyServantListViewManager_OnClickFilterKind__ + 83) & 2) != 0 )
      v10 = (_QWORD *)sub_1BCA7F8(Method_BonusSelectSummonPartyServantListViewManager_OnClickFilterKind__);
    v11 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v10, v10[4]);
    OverwriteAssetSoundName__PlaySystemSe(v11, 0, 0LL);
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
            v16 = 13;
          }
          else
          {
            v17 = this->fields.partyServantSelectMenu;
            if ( !v17 )
              goto LABEL_20;
            v18 = v17->fields.organizationItem;
            if ( !v18 )
              goto LABEL_20;
            gachaBonusSelectEntity = v18->fields.gachaBonusSelectEntity;
            if ( !gachaBonusSelectEntity )
              goto LABEL_20;
            if ( GachaBonusSelectEntity__GetClassId(gachaBonusSelectEntity, 1001, 0LL) == 1005 )
              v16 = 14;
            else
              v16 = 12;
          }
          Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          sort = this->fields.sort;
          v21 = (CommonUI_o *)Instance;
          v25 = (ServantFilterSelectMenu_CallbackFunc_o *)sub_1BCAA2C(
                                                            ServantFilterSelectMenu_CallbackFunc_TypeInfo,
                                                            v22,
                                                            v23,
                                                            v24);
          ServantFilterSelectMenu_CallbackFunc___ctor(
            v25,
            (Il2CppObject *)this,
            Method_BonusSelectSummonPartyServantListViewManager_EndSelectFilterKind__,
            0LL);
          if ( v21 )
          {
            CommonUI__OpenServantFilterSelectMenu(v21, v16, sort, v25, -1, 0LL);
            return;
          }
        }
      }
    }
LABEL_20:
    sub_1BCAA3C(gachaBonusSelectEntity, v13);
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
  if ( (byte_4B12875 & 1) == 0 )
  {
    this = (BonusSelectSummonPartyServantListViewManager_o *)sub_1BCA7E0(
                                                               &Method_BonusSelectSummonPartyServantListViewManager_OnClickSelectListView__,
                                                               obj,
                                                               method);
    byte_4B12875 = 1;
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
          v5 = (_QWORD *)sub_1BCA7F8(Method_BonusSelectSummonPartyServantListViewManager_OnClickSelectListView__);
        v6 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v5, v5[4]);
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
        sub_1BCAA3C(this, obj);
      }
    }
  }
  v12 = Method_BonusSelectSummonPartyServantListViewManager_OnClickSelectListView__;
  if ( (*((_BYTE *)Method_BonusSelectSummonPartyServantListViewManager_OnClickSelectListView__ + 83) & 2) != 0 )
    v12 = (_QWORD *)sub_1BCA7F8(Method_BonusSelectSummonPartyServantListViewManager_OnClickSelectListView__);
  v13 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v12, v12[4]);
  OverwriteAssetSoundName__PlaySystemSe(v13, 2, 0LL);
}


void __fastcall BonusSelectSummonPartyServantListViewManager__OnClickSortAscendingOrder(
        BonusSelectSummonPartyServantListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  BonusSelectSummonPartyServantListViewManager_o *v6; // x0
  __int64 v7; // x1
  const MethodInfo *v8; // x2
  struct ListViewSort_o *sort; // x8
  const MethodInfo *v10; // x1

  if ( (byte_4B1287F & 1) == 0 )
  {
    sub_1BCA7E0(&Method_BonusSelectSummonPartyServantListViewManager_OnClickSortAscendingOrder__, method, v2);
    byte_4B1287F = 1;
  }
  if ( this->fields.isInput )
  {
    v4 = Method_BonusSelectSummonPartyServantListViewManager_OnClickSortAscendingOrder__;
    if ( (*((_BYTE *)Method_BonusSelectSummonPartyServantListViewManager_OnClickSortAscendingOrder__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1BCA7F8(Method_BonusSelectSummonPartyServantListViewManager_OnClickSortAscendingOrder__);
    v5 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v4, v4[4]);
    OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0LL);
    sort = this->fields.sort;
    if ( !sort )
      sub_1BCAA3C(v6, v7);
    BonusSelectSummonPartyServantListViewManager__SetAndSaveSortAscendingOrder(v6, !sort->fields.isAscendingOrder, v8);
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
    BonusSelectSummonPartyServantListViewManager__UpdateAscendingOrderBtnSprite(this, v10);
  }
}


void __fastcall BonusSelectSummonPartyServantListViewManager__OnClickSortKind(
        BonusSelectSummonPartyServantListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  BonusSelectSummonPartyServantListViewManager_o *v6; // x0
  __int64 v7; // x1
  const MethodInfo *v8; // x2
  struct ListViewSort_o *sort; // x8
  int32_t v10; // w1

  if ( (byte_4B1287D & 1) == 0 )
  {
    sub_1BCA7E0(&Method_BonusSelectSummonPartyServantListViewManager_OnClickSortKind__, method, v2);
    byte_4B1287D = 1;
  }
  if ( this->fields.isInput )
  {
    v4 = Method_BonusSelectSummonPartyServantListViewManager_OnClickSortKind__;
    if ( (*((_BYTE *)Method_BonusSelectSummonPartyServantListViewManager_OnClickSortKind__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1BCA7F8(Method_BonusSelectSummonPartyServantListViewManager_OnClickSortKind__);
    v5 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v4, v4[4]);
    OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0LL);
    sort = this->fields.sort;
    if ( !sort )
      sub_1BCAA3C(v6, v7);
    if ( sort->fields.sortKind == 27 )
      v10 = 4;
    else
      v10 = 27;
    BonusSelectSummonPartyServantListViewManager__SetAndSaveSortKind(v6, v10, v8);
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
  }
}


void __fastcall BonusSelectSummonPartyServantListViewManager__OnLongPushListView(
        BonusSelectSummonPartyServantListViewManager_o *this,
        BonusSelectSummonPartyServantListViewObject_o *obj,
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
  UIProgressBar_o *scrollBar; // x0
  _QWORD *v16; // x0
  System_Reflection_MethodBase_o *v17; // x0
  CommonUI_o *v18; // x21
  struct System_Threading_CancellationTokenSource_o *m_CancellationTokenSource; // x8
  struct System_Threading_SparselyPopulatedArray_CancellationCallbackInfo__array *registeredCallbacksLists; // x20
  struct System_Threading_ManualResetEvent_o *kernelEvent; // x22
  int32_t v22; // w22
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x3
  ServantLeaderInfo_o *v26; // x20
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x3
  ServantStatusDialog_EndDelegate_o *v30; // x22
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v31; // 0:x0.16

  if ( (byte_4B12876 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_BonusSelectSummonPartyServantListViewManager_EndShowServantStatusDialog__, obj, method);
    sub_1BCA7E0(&Method_BonusSelectSummonPartyServantListViewManager_OnLongPushListView__, v5, v6);
    sub_1BCA7E0(&ServantStatusDialog_EndDelegate_TypeInfo, v7, v8);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v9, v10);
    sub_1BCA7E0(&ServantLeaderInfo_TypeInfo, v11, v12);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v13, v14);
    byte_4B12876 = 1;
  }
  scrollBar = (UIProgressBar_o *)this->fields.scrollBar;
  if ( !scrollBar )
    goto LABEL_13;
  this->fields.tmpScrollBarValueForLongPush = UIProgressBar__get_value(scrollBar, 0LL);
  v16 = Method_BonusSelectSummonPartyServantListViewManager_OnLongPushListView__;
  if ( (*((_BYTE *)Method_BonusSelectSummonPartyServantListViewManager_OnLongPushListView__ + 83) & 2) != 0 )
    v16 = (_QWORD *)sub_1BCA7F8(Method_BonusSelectSummonPartyServantListViewManager_OnLongPushListView__);
  v17 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v16, v16[4]);
  OverwriteAssetSoundName__PlaySystemSe(v17, 0, 0LL);
  scrollBar = (UIProgressBar_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !obj )
    goto LABEL_13;
  v18 = (CommonUI_o *)scrollBar;
  scrollBar = (UIProgressBar_o *)BonusSelectSummonPartyServantListViewObject__GetItem(obj, (const MethodInfo *)obj);
  if ( !scrollBar )
    goto LABEL_13;
  m_CancellationTokenSource = scrollBar[1].fields.m_CancellationTokenSource;
  if ( !m_CancellationTokenSource )
    goto LABEL_13;
  kernelEvent = m_CancellationTokenSource->fields._kernelEvent;
  registeredCallbacksLists = m_CancellationTokenSource->fields._registeredCallbacksLists;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, obj);
  *(_QWORD *)&v31.fields.currentCryptoKey = kernelEvent;
  *(_QWORD *)&v31.fields.fakeValue = registeredCallbacksLists;
  v22 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v31, 0LL);
  v26 = (ServantLeaderInfo_o *)sub_1BCAA2C(ServantLeaderInfo_TypeInfo, v23, v24, v25);
  ServantLeaderInfo___ctor_41224104(v26, v22, 0, 1, 0LL);
  v30 = (ServantStatusDialog_EndDelegate_o *)sub_1BCAA2C(ServantStatusDialog_EndDelegate_TypeInfo, v27, v28, v29);
  ServantStatusDialog_EndDelegate___ctor(
    v30,
    (Il2CppObject *)this,
    Method_BonusSelectSummonPartyServantListViewManager_EndShowServantStatusDialog__,
    0LL);
  if ( !v18 )
LABEL_13:
    sub_1BCAA3C(scrollBar, obj);
  CommonUI__OpenServantStatusDialog_30778732(v18, 7, v26, v30, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BonusSelectSummonPartyServantListViewManager__RequestListObject(
        BonusSelectSummonPartyServantListViewManager_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  System_Collections_Generic_List_object__o *ObjectList; // x0
  __int64 v12; // x1
  __int64 v13; // x1
  const MethodInfo *v14; // x2
  System_Collections_Generic_List_Enumerator_object__o v15; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4B12872 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_Enumerator_BonusSelectSummonPartyServantListViewObject__Dispose__,
      *(_QWORD *)&mode,
      method);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_Enumerator_BonusSelectSummonPartyServantListViewObject__MoveNext__,
      v5,
      v6);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_Enumerator_BonusSelectSummonPartyServantListViewObject__get_Current__,
      v7,
      v8);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_BonusSelectSummonPartyServantListViewObject__GetEnumerator__,
      v9,
      v10);
    byte_4B12872 = 1;
  }
  memset(&v15, 0, sizeof(v15));
  ObjectList = (System_Collections_Generic_List_object__o *)BonusSelectSummonPartyServantListViewManager__get_ObjectList(
                                                              this,
                                                              *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_1BCAA3C(0LL, v12);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v15,
    ObjectList,
    (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_BonusSelectSummonPartyServantListViewObject__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v15,
            (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_BonusSelectSummonPartyServantListViewObject__MoveNext__) )
  {
    if ( !v15.fields._current )
      sub_1BCAA3C(0LL, v13);
    BonusSelectSummonPartyServantListViewObject__Init(
      (BonusSelectSummonPartyServantListViewObject_o *)v15.fields._current,
      mode,
      v14);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v15,
    (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_BonusSelectSummonPartyServantListViewObject__Dispose__);
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

  if ( (byte_4B12879 & 1) == 0 )
  {
    sub_1BCA7E0(&BonusSelectSummonPartyServantListViewManager_TypeInfo, *(_QWORD *)&scaleType, method);
    byte_4B12879 = 1;
  }
  v4 = BonusSelectSummonPartyServantListViewManager_TypeInfo;
  if ( !BonusSelectSummonPartyServantListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BonusSelectSummonPartyServantListViewManager_TypeInfo, *(_QWORD *)&scaleType);
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
    sub_1BCAA3C(servantSortInfo, *(_QWORD *)&scaleType);
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

  if ( (byte_4B12880 & 1) == 0 )
  {
    sub_1BCA7E0(&BonusSelectSummonPartyServantListViewManager_TypeInfo, isAscendingOrder, method);
    byte_4B12880 = 1;
  }
  v4 = BonusSelectSummonPartyServantListViewManager_TypeInfo;
  if ( !BonusSelectSummonPartyServantListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BonusSelectSummonPartyServantListViewManager_TypeInfo, isAscendingOrder);
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
    sub_1BCAA3C(servantSortInfo, isAscendingOrder);
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

  if ( (byte_4B1287E & 1) == 0 )
  {
    sub_1BCA7E0(&BonusSelectSummonPartyServantListViewManager_TypeInfo, *(_QWORD *)&sortKind, method);
    byte_4B1287E = 1;
  }
  v4 = BonusSelectSummonPartyServantListViewManager_TypeInfo;
  if ( !BonusSelectSummonPartyServantListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BonusSelectSummonPartyServantListViewManager_TypeInfo, *(_QWORD *)&sortKind);
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
    sub_1BCAA3C(servantSortInfo, *(_QWORD *)&sortKind);
  }
  ListViewSort__SaveSortKind(servantSortInfo, 0LL);
}


void __fastcall BonusSelectSummonPartyServantListViewManager__SetFilterButtonImage(
        BonusSelectSummonPartyServantListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  BonusSelectSummonPartyServantListViewManager_o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x2
  struct BonusSelectSummonPartyServantSelectMenu_o *partyServantSelectMenu; // x8
  struct BonusSelectSummonPartyOrganizationListViewItem_o *organizationItem; // x8
  struct BonusSelectSummonPartyServantSelectMenu_o *v8; // x8
  struct BonusSelectSummonPartyOrganizationListViewItem_o *v9; // x8
  UISprite_o *filterSprite; // x19
  System_String_o **v11; // x8

  v3 = this;
  if ( (byte_4B12873 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_17688/*"btn_filter_on"*/, method, v2);
    this = (BonusSelectSummonPartyServantListViewManager_o *)sub_1BCA7E0(&StringLiteral_17687/*"btn_filter"*/, v4, v5);
    byte_4B12873 = 1;
  }
  partyServantSelectMenu = v3->fields.partyServantSelectMenu;
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
  v8 = v3->fields.partyServantSelectMenu;
  if ( !v8
    || (v9 = v8->fields.organizationItem) == 0LL
    || (this = (BonusSelectSummonPartyServantListViewManager_o *)v9->fields.gachaBonusSelectEntity) == 0LL )
  {
LABEL_19:
    sub_1BCAA3C(this, method);
  }
  if ( GachaBonusSelectEntity__GetClassId((GachaBonusSelectEntity_o *)this, 1001, 0LL) == 1005 )
    method = (const MethodInfo *)(byte_9 + 5);
  else
    method = (const MethodInfo *)(byte_9 + 3);
LABEL_14:
  this = (BonusSelectSummonPartyServantListViewManager_o *)v3->fields.sort;
  if ( !this )
    goto LABEL_19;
  filterSprite = v3->fields.filterSprite;
  this = (BonusSelectSummonPartyServantListViewManager_o *)ListViewSort__CheckBonusSelectSummonFilterDefaultAll(
                                                             (ListViewSort_o *)this,
                                                             (int32_t)method,
                                                             -1,
                                                             0LL);
  if ( !filterSprite )
    goto LABEL_19;
  v11 = (System_String_o **)&StringLiteral_17687/*"btn_filter"*/;
  if ( ((unsigned __int8)this & 1) == 0 )
    v11 = (System_String_o **)&StringLiteral_17688/*"btn_filter_on"*/;
  UISprite__set_spriteName(filterSprite, *v11, 0LL);
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
    sub_1BCAA3C(scrollView, v5);
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
  if ( (byte_4B1287A & 1) == 0 )
  {
    this = (BonusSelectSummonPartyServantListViewManager_o *)sub_1BCA7E0(
                                                               &BonusSelectSummonPartyServantListViewObject_TypeInfo,
                                                               obj,
                                                               item);
    byte_4B1287A = 1;
  }
  if ( !obj
    || (methodPtr_low = LOBYTE(BonusSelectSummonPartyServantListViewObject_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(obj->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low)
    || (BonusSelectSummonPartyServantListViewObject_c *)obj->klass->_2.typeHierarchy[methodPtr_low - 1] != BonusSelectSummonPartyServantListViewObject_TypeInfo )
  {
    sub_1BCAA3C(this, obj);
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
  __int64 v2; // x2
  BonusSelectSummonPartyServantListViewManager_o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x2
  struct ListViewSort_o *sort; // x8
  System_String_o **v7; // x8

  v3 = this;
  if ( (byte_4B12874 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_17806/*"btn_txt_up"*/, method, v2);
    this = (BonusSelectSummonPartyServantListViewManager_o *)sub_1BCA7E0(&StringLiteral_17751/*"btn_txt_down"*/, v4, v5);
    byte_4B12874 = 1;
  }
  sort = v3->fields.sort;
  if ( !sort || (this = (BonusSelectSummonPartyServantListViewManager_o *)v3->fields.sortExplanationSprite) == 0LL )
    sub_1BCAA3C(this, method);
  if ( sort->fields.isAscendingOrder )
    v7 = (System_String_o **)&StringLiteral_17806/*"btn_txt_up"*/;
  else
    v7 = (System_String_o **)&StringLiteral_17751/*"btn_txt_down"*/;
  UISprite__set_spriteName((UISprite_o *)this, *v7, 0LL);
}


System_Collections_Generic_List_BonusSelectSummonPartyServantListViewObject__o *__fastcall BonusSelectSummonPartyServantListViewManager__get_ObjectList(
        BonusSelectSummonPartyServantListViewManager_o *this,
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

  if ( (byte_4B12881 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v7, v8);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_BonusSelectSummonPartyServantListViewObject___, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_BonusSelectSummonPartyServantListViewObject__Add__, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_BonusSelectSummonPartyServantListViewObject___ctor__, v15, v16);
    sub_1BCA7E0(&System_Collections_Generic_List_BonusSelectSummonPartyServantListViewObject__TypeInfo, v17, v18);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v19, v20);
    byte_4B12881 = 1;
  }
  memset(&v42, 0, sizeof(v42));
  v21 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_BonusSelectSummonPartyServantListViewObject__TypeInfo,
                                                       method,
                                                       v2,
                                                       v3);
  System_Collections_Generic_List_object____ctor(
    v21,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_BonusSelectSummonPartyServantListViewObject___ctor__);
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
                           (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_BonusSelectSummonPartyServantListViewObject___);
      v35 = (int64_t)Component_object;
      if ( !v21 )
        sub_1BCAA3C(Component_object, Component_object);
      items = v21->fields._items;
      v37 = Method_System_Collections_Generic_List_BonusSelectSummonPartyServantListViewObject__Add__;
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
  return (System_Collections_Generic_List_BonusSelectSummonPartyServantListViewObject__o *)v21;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BonusSelectSummonPartyServantListViewManager_CallbackFunc___ctor(
        BonusSelectSummonPartyServantListViewManager_CallbackFunc_o *this,
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
  this->fields.m_target = (Il2CppObject *)sub_1A08918;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_1A088C0;
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
  __int64 v12[3]; // [xsp+8h] [xbp-58h] BYREF
  int32_t v13; // [xsp+28h] [xbp-38h] BYREF
  int32_t v14; // [xsp+2Ch] [xbp-34h] BYREF

  v13 = result;
  v14 = kind;
  if ( (byte_4B12884 & 1) == 0 )
  {
    sub_1BCA7E0(&int_TypeInfo, *(_QWORD *)&kind, *(_QWORD *)&result);
    sub_1BCA7E0(&BonusSelectSummonPartyServantListViewManager_ResultKind_TypeInfo, v9, v10);
    byte_4B12884 = 1;
  }
  v12[2] = 0LL;
  v12[0] = j_il2cpp_value_box_0(BonusSelectSummonPartyServantListViewManager_ResultKind_TypeInfo, &v14);
  v12[1] = j_il2cpp_value_box_0(int_TypeInfo, &v13);
  return (System_IAsyncResult_o *)sub_1BCA794(this, v12, callback, object);
}


void __fastcall BonusSelectSummonPartyServantListViewManager_CallbackFunc__EndInvoke(
        BonusSelectSummonPartyServantListViewManager_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1BCA798(result, 0LL, method);
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
  if ( (byte_4B12885 & 1) == 0 )
  {
    this = (BonusSelectSummonPartyServantListViewManager___c__DisplayClass17_0_o *)sub_1BCA7E0(
                                                                                     &CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo,
                                                                                     *(_QWORD *)&id,
                                                                                     method);
    byte_4B12885 = 1;
  }
  servantEntity = v4->fields.servantEntity;
  if ( !servantEntity )
    sub_1BCAA3C(this, *(_QWORD *)&id);
  v7 = *(_QWORD *)&servantEntity->fields.id.fields.currentCryptoKey;
  v6 = *(_QWORD *)&servantEntity->fields.id.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, *(_QWORD *)&id);
  *(_QWORD *)&v9.fields.currentCryptoKey = v7;
  *(_QWORD *)&v9.fields.fakeValue = v6;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v9, 0LL) == id;
}