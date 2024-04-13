void __fastcall BonusSelectSummonPartyServantListViewManager___cctor(const MethodInfo *method)
{
  int v1; // w1
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  BattleServantConfConponent_o *static_fields; // x0
  System_Int32_array **v21; // x1
  System_String_o *SORT_SAVE_KEY; // x19
  ListViewSort_o *v23; // x20
  struct BonusSelectSummonPartyServantListViewManager_StaticFields *v24; // x0
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  System_String_o *v31; // x19
  ListViewSort_o *v32; // x20
  struct BonusSelectSummonPartyServantListViewManager_StaticFields *v33; // x0
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7
  System_String_o *v40; // x19
  ListViewSort_o *v41; // x20
  struct BonusSelectSummonPartyServantListViewManager_StaticFields *v42; // x0
  System_String_array **v43; // x2
  System_String_array **v44; // x3
  System_Boolean_array **v45; // x4
  System_Int32_array **v46; // x5
  System_Int32_array *v47; // x6
  System_Int32_array *v48; // x7

  if ( (byte_42E8692 & 1) == 0 )
  {
    sub_B5D5C4(&BonusSelectSummonPartyServantListViewManager_TypeInfo, v1, (_DWORD)v2, v3);
    sub_B5D5C4(&ListViewSort_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&StringLiteral_1124/*"2"*/, v11, v12, v13);
    sub_B5D5C4(&StringLiteral_2903/*"BonusSelectSummonPartyServant"*/, v14, v15, v16);
    sub_B5D5C4(&StringLiteral_1026/*"1"*/, v17, v18, v19);
    byte_42E8692 = 1;
  }
  static_fields = (BattleServantConfConponent_o *)BonusSelectSummonPartyServantListViewManager_TypeInfo->static_fields;
  v21 = (System_Int32_array **)StringLiteral_2903/*"BonusSelectSummonPartyServant"*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_2903/*"BonusSelectSummonPartyServant"*/;
  sub_B5D560(static_fields, v21, v2, v3, v4, v5, v6, v7);
  SORT_SAVE_KEY = BonusSelectSummonPartyServantListViewManager_TypeInfo->static_fields->SORT_SAVE_KEY;
  v23 = (ListViewSort_o *)sub_B5D694(ListViewSort_TypeInfo);
  ListViewSort___ctor_34028932(v23, SORT_SAVE_KEY, 27, 0, 0LL);
  v24 = BonusSelectSummonPartyServantListViewManager_TypeInfo->static_fields;
  v24->servantSortInfo = v23;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v24->servantSortInfo,
    (System_Int32_array **)v23,
    v25,
    v26,
    v27,
    v28,
    v29,
    v30);
  v31 = System_String__Concat_44577788(
          BonusSelectSummonPartyServantListViewManager_TypeInfo->static_fields->SORT_SAVE_KEY,
          (System_String_o *)StringLiteral_1026/*"1"*/,
          0LL);
  v32 = (ListViewSort_o *)sub_B5D694(ListViewSort_TypeInfo);
  ListViewSort___ctor_34028932(v32, v31, 27, 0, 0LL);
  v33 = BonusSelectSummonPartyServantListViewManager_TypeInfo->static_fields;
  v33->servantSortInfoExtra1 = v32;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v33->servantSortInfoExtra1,
    (System_Int32_array **)v32,
    v34,
    v35,
    v36,
    v37,
    v38,
    v39);
  v40 = System_String__Concat_44577788(
          BonusSelectSummonPartyServantListViewManager_TypeInfo->static_fields->SORT_SAVE_KEY,
          (System_String_o *)StringLiteral_1124/*"2"*/,
          0LL);
  v41 = (ListViewSort_o *)sub_B5D694(ListViewSort_TypeInfo);
  ListViewSort___ctor_34028932(v41, v40, 27, 0, 0LL);
  v42 = BonusSelectSummonPartyServantListViewManager_TypeInfo->static_fields;
  v42->servantSortInfoExtra2 = v41;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v42->servantSortInfoExtra2,
    (System_Int32_array **)v41,
    v43,
    v44,
    v45,
    v46,
    v47,
    v48);
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
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  unsigned int scaleType; // w8
  System_Int32_array **smallSizeSeed; // x1
  int v20; // w8
  ListViewObject_o *v21; // x0
  __int64 v22; // x1
  const MethodInfo *v23; // x2
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x20
  unsigned __int64 v25; // x22
  ListViewItem_o *v26; // x20
  __int64 v27; // x10
  UnityEngine_Object_o *viewObject; // x21

  v8 = this;
  if ( (byte_42E8688 & 1) == 0 )
  {
    sub_B5D5C4(&BonusSelectSummonPartyServantListViewItem_TypeInfo, (_DWORD)method, (_DWORD)v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v9, v10, v11);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v12, v13, v14);
    this = (BonusSelectSummonPartyServantListViewManager_o *)sub_B5D5C4(&UnityEngine_Object_TypeInfo, v15, v16, v17);
    byte_42E8688 = 1;
  }
  scaleType = v8->fields.scaleType;
  if ( scaleType < 2 )
  {
    smallSizeSeed = (System_Int32_array **)v8->fields.smallSizeSeed;
    v20 = 2;
  }
  else if ( scaleType == 2 )
  {
    smallSizeSeed = (System_Int32_array **)v8->fields.extremelySmallSizeSeed;
    v20 = 3;
  }
  else
  {
    if ( scaleType != 3 )
      goto LABEL_10;
    smallSizeSeed = (System_Int32_array **)v8->fields.normalSizeSeed;
    v20 = 1;
  }
  v8->fields.scaleType = v20;
  v8->fields.seed = (struct ListViewItemSeed_o *)smallSizeSeed;
  sub_B5D560((BattleServantConfConponent_o *)&v8->fields.seed, smallSizeSeed, v2, v3, v4, v5, v6, v7);
LABEL_10:
  BonusSelectSummonPartyServantListViewManager__SetAndSaveIconScaleType(
    this,
    v8->fields.scaleType,
    (const MethodInfo *)v2);
  itemList = v8->fields.itemList;
  if ( !itemList )
LABEL_25:
    sub_B5D69C(v21, v22);
  v25 = 0LL;
  while ( (__int64)v25 < itemList->fields._size )
  {
    if ( v25 >= (unsigned int)itemList->fields._size )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
    v26 = itemList->fields._items->m_Items[v25];
    if ( v26 )
    {
      v27 = *(&BonusSelectSummonPartyServantListViewItem_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v26->klass->_2.bitflags2 + 1) >= (unsigned int)v27
        && (BonusSelectSummonPartyServantListViewItem_c *)v26->klass->_2.typeHierarchy[v27 - 1] == BonusSelectSummonPartyServantListViewItem_TypeInfo )
      {
        viewObject = (UnityEngine_Object_o *)v26->fields.viewObject;
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        v21 = (ListViewObject_o *)UnityEngine_Object__op_Equality(viewObject, 0LL, 0LL);
        if ( ((unsigned __int8)v21 & 1) == 0 )
        {
          v21 = v26->fields.viewObject;
          if ( !v21 )
            goto LABEL_25;
          ListViewObject__SetItemSeed(v21, v26, v8->fields.seed, 0LL);
        }
      }
    }
    itemList = v8->fields.itemList;
    ++v25;
    if ( !itemList )
      goto LABEL_25;
  }
  BonusSelectSummonPartyServantListViewManager__SetMode(v8, 2, v23);
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
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  int v30; // w1
  int v31; // w2
  __int64 v32; // x3
  int v33; // w1
  int v34; // w2
  __int64 v35; // x3
  int v36; // w1
  int v37; // w2
  __int64 v38; // x3
  int v39; // w1
  int v40; // w2
  __int64 v41; // x3
  int v42; // w1
  int v43; // w2
  __int64 v44; // x3
  int v45; // w1
  int v46; // w2
  __int64 v47; // x3
  int32_t ClassId; // w0
  System_String_array **v49; // x2
  System_String_array **v50; // x3
  System_Boolean_array **v51; // x4
  System_Int32_array **v52; // x5
  System_Int32_array *v53; // x6
  System_Int32_array *v54; // x7
  BonusSelectSummonPartyServantListViewManager_c *v55; // x0
  System_Int32_array **servantSortInfoExtra2; // x1
  BonusSelectSummonPartyServantListViewManager_c *v57; // x0
  BonusSelectSummonPartyServantListViewManager_c *v58; // x0
  struct ListViewSort_o **p_sort; // x22
  System_String_array **v60; // x2
  System_String_array **v61; // x3
  System_Boolean_array **v62; // x4
  System_Int32_array **v63; // x5
  System_Int32_array *v64; // x6
  System_Int32_array *v65; // x7
  struct ListViewSort_o *v66; // x8
  int32_t sortKind; // w9
  unsigned int iconScaleKind; // w8
  System_Int32_array **normalSizeSeed; // x1
  GiftMaster_o *Master_WarQuestSelectionMaster; // x22
  DataMasterBase_WarMaster__WarEntity__int__o *v71; // x23
  GachaBonusSelectLineupEntity_array *v72; // x8
  __int64 v73; // x28
  unsigned int v74; // w21
  __int64 v75; // x24
  __int64 v76; // x8
  System_String_array **v77; // x2
  System_String_array **v78; // x3
  System_Boolean_array **v79; // x4
  System_Int32_array **v80; // x5
  System_Int32_array *v81; // x6
  System_Int32_array *v82; // x7
  System_Func_int__bool__o *v83; // x26
  struct BonusSelectSummonPartyServantSelectMenu_o *partyServantSelectMenu; // x9
  GachaBonusSelectLineupEntity_o *v85; // x26
  ServantEntity_o *v86; // x25
  BonusSelectSummonPartyOrganizationListViewItem_o *organizationItem; // x27
  char v88; // w20
  BonusSelectSummonPartyServantListViewItem_o *v89; // x24
  const MethodInfo *v90; // x6
  UILabel_o *emptyMessageLabel; // x20
  const MethodInfo *v92; // x1
  const MethodInfo *v93; // x1
  __int64 v94; // x0
  GachaBonusSelectLineupEntity_array *gachaBonusSelectLineupEntities; // [xsp+8h] [xbp-58h] BYREF

  v4 = gachaBonusSelectEntity;
  v5 = this;
  if ( (byte_42E8681 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_BasicHelper_Any_int____68810384,
      (_DWORD)gachaBonusSelectEntity,
      (_DWORD)notPossibleSvtIdList,
      method);
    sub_B5D5C4(&BonusSelectSummonPartyServantListViewItem_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&BonusSelectSummonPartyServantListViewManager_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&Method_DataManager_GetMaster_GachaBonusSelectLineupMaster___, v12, v13, v14);
    sub_B5D5C4(&Method_DataManager_GetMaster_GiftMaster___, v15, v16, v17);
    sub_B5D5C4(&Method_DataManager_GetMaster_ServantMaster___, v18, v19, v20);
    sub_B5D5C4(&DataManager_TypeInfo, v21, v22, v23);
    sub_B5D5C4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v24, v25, v26);
    sub_B5D5C4(&Method_System_Func_int__bool___ctor__, v27, v28, v29);
    sub_B5D5C4(&System_Func_int__bool__TypeInfo, v30, v31, v32);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewItem__Add__, v33, v34, v35);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v36, v37, v38);
    sub_B5D5C4(
      &Method_BonusSelectSummonPartyServantListViewManager___c__DisplayClass17_0__CreateList_b__0__,
      v39,
      v40,
      v41);
    sub_B5D5C4(&BonusSelectSummonPartyServantListViewManager___c__DisplayClass17_0_TypeInfo, v42, v43, v44);
    this = (BonusSelectSummonPartyServantListViewManager_o *)sub_B5D5C4(&StringLiteral_12025/*"SERVANT_SORT_FILTER_RESULT_EMPTY"*/, v45, v46, v47);
    byte_42E8681 = 1;
  }
  gachaBonusSelectLineupEntities = 0LL;
  if ( !v4 )
    goto LABEL_59;
  ClassId = GachaBonusSelectEntity__GetClassId(v4, 1001, 0LL);
  if ( ClassId == 1005 )
  {
    v57 = BonusSelectSummonPartyServantListViewManager_TypeInfo;
    if ( (BYTE3(BonusSelectSummonPartyServantListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BonusSelectSummonPartyServantListViewManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BonusSelectSummonPartyServantListViewManager_TypeInfo);
      v57 = BonusSelectSummonPartyServantListViewManager_TypeInfo;
    }
    servantSortInfoExtra2 = (System_Int32_array **)v57->static_fields->servantSortInfoExtra2;
  }
  else if ( ClassId == 1004 )
  {
    v55 = BonusSelectSummonPartyServantListViewManager_TypeInfo;
    if ( (BYTE3(BonusSelectSummonPartyServantListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BonusSelectSummonPartyServantListViewManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BonusSelectSummonPartyServantListViewManager_TypeInfo);
      v55 = BonusSelectSummonPartyServantListViewManager_TypeInfo;
    }
    servantSortInfoExtra2 = (System_Int32_array **)v55->static_fields->servantSortInfoExtra1;
  }
  else
  {
    v58 = BonusSelectSummonPartyServantListViewManager_TypeInfo;
    if ( (BYTE3(BonusSelectSummonPartyServantListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BonusSelectSummonPartyServantListViewManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BonusSelectSummonPartyServantListViewManager_TypeInfo);
      v58 = BonusSelectSummonPartyServantListViewManager_TypeInfo;
    }
    servantSortInfoExtra2 = (System_Int32_array **)v58->static_fields->servantSortInfo;
  }
  v5->fields.sort = (struct ListViewSort_o *)servantSortInfoExtra2;
  p_sort = &v5->fields.sort;
  sub_B5D560((BattleServantConfConponent_o *)&v5->fields.sort, servantSortInfoExtra2, v49, v50, v51, v52, v53, v54);
  this = (BonusSelectSummonPartyServantListViewManager_o *)v5->fields.sort;
  if ( !this )
    goto LABEL_59;
  ListViewSort__Load((ListViewSort_o *)this, 0LL);
  v66 = *p_sort;
  if ( !*p_sort )
    goto LABEL_59;
  sortKind = v66->fields.sortKind;
  if ( sortKind != 4 && sortKind != 27 )
  {
    v66->fields.sortKind = 27;
    v66 = *p_sort;
    if ( !*p_sort )
      goto LABEL_59;
  }
  v66->fields.isBonusKind = 0;
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
  sub_B5D560((BattleServantConfConponent_o *)&v5->fields.seed, normalSizeSeed, v60, v61, v62, v63, v64, v65);
LABEL_31:
  ListViewManager__CreateList((ListViewManager_o *)v5, 0, 0LL);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (GiftMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_GiftMaster___);
  v71 = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_ServantMaster___);
  this = (BonusSelectSummonPartyServantListViewManager_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_GachaBonusSelectLineupMaster___);
  if ( !this )
    goto LABEL_59;
  this = (BonusSelectSummonPartyServantListViewManager_o *)GachaBonusSelectLineupMaster__TryGetEntityList(
                                                             (GachaBonusSelectLineupMaster_o *)this,
                                                             &gachaBonusSelectLineupEntities,
                                                             v4->fields.gachaBonusSelectLineupId,
                                                             0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v72 = gachaBonusSelectLineupEntities;
    if ( !gachaBonusSelectLineupEntities )
      goto LABEL_59;
    v73 = 4LL;
    while ( 1 )
    {
      v74 = v73 - 4;
      if ( (int)v73 - 4 >= (signed int)v72->max_length )
        break;
      v75 = sub_B5D694(BonusSelectSummonPartyServantListViewManager___c__DisplayClass17_0_TypeInfo);
      BonusSelectSummonPartyServantListViewManager___c__DisplayClass17_0___ctor(
        (BonusSelectSummonPartyServantListViewManager___c__DisplayClass17_0_o *)v75,
        0LL);
      if ( !gachaBonusSelectLineupEntities )
        goto LABEL_59;
      if ( v74 >= gachaBonusSelectLineupEntities->max_length )
        goto LABEL_60;
      v76 = *((_QWORD *)&gachaBonusSelectLineupEntities->obj.klass + v73);
      if ( !v76 || !Master_WarQuestSelectionMaster )
        goto LABEL_59;
      this = (BonusSelectSummonPartyServantListViewManager_o *)GiftMaster__getDataById(
                                                                 Master_WarQuestSelectionMaster,
                                                                 *(_DWORD *)(v76 + 24),
                                                                 0LL);
      if ( this )
      {
        if ( !v71 )
          goto LABEL_59;
        this = (BonusSelectSummonPartyServantListViewManager_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                                                   v71,
                                                                   (int32_t)this->fields.dropObjectList,
                                                                   (const MethodInfo_23FAE10 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
        gachaBonusSelectEntity = (GachaBonusSelectEntity_o *)this;
        if ( !v75 )
          goto LABEL_59;
      }
      else
      {
        gachaBonusSelectEntity = 0LL;
        if ( !v75 )
          goto LABEL_59;
      }
      *(_QWORD *)(v75 + 16) = gachaBonusSelectEntity;
      sub_B5D560(
        (BattleServantConfConponent_o *)(v75 + 16),
        (System_Int32_array **)gachaBonusSelectEntity,
        v77,
        v78,
        v79,
        v80,
        v81,
        v82);
      v83 = (System_Func_int__bool__o *)sub_B5D694(System_Func_int__bool__TypeInfo);
      System_Func_int__bool____ctor(
        v83,
        (Il2CppObject *)v75,
        Method_BonusSelectSummonPartyServantListViewManager___c__DisplayClass17_0__CreateList_b__0__,
        (const MethodInfo_2C28A40 *)Method_System_Func_int__bool___ctor__);
      this = (BonusSelectSummonPartyServantListViewManager_o *)BasicHelper__Any_int__28142236(
                                                                 notPossibleSvtIdList,
                                                                 (System_Func_T__bool__o *)v83,
                                                                 (const MethodInfo_1AD6A9C *)Method_BasicHelper_Any_int____68810384);
      if ( !gachaBonusSelectLineupEntities )
        goto LABEL_59;
      if ( v74 >= gachaBonusSelectLineupEntities->max_length )
      {
LABEL_60:
        v94 = sub_B5D6C8(this);
        sub_B5D668(v94, 0LL);
      }
      partyServantSelectMenu = v5->fields.partyServantSelectMenu;
      if ( partyServantSelectMenu )
      {
        v85 = (GachaBonusSelectLineupEntity_o *)*((_QWORD *)&gachaBonusSelectLineupEntities->obj.klass + v73);
        v86 = *(ServantEntity_o **)(v75 + 16);
        organizationItem = partyServantSelectMenu->fields.organizationItem;
        v88 = (unsigned __int8)this ^ 1;
        v89 = (BonusSelectSummonPartyServantListViewItem_o *)sub_B5D694(BonusSelectSummonPartyServantListViewItem_TypeInfo);
        BonusSelectSummonPartyServantListViewItem___ctor(v89, v74, v86, v85, organizationItem, v88 & 1, v90);
        this = (BonusSelectSummonPartyServantListViewManager_o *)v5->fields.itemList;
        if ( this )
        {
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)this,
            (EventMissionProgressRequest_Argument_ProgressData_o *)v89,
            (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
          v72 = gachaBonusSelectLineupEntities;
          ++v73;
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
                                                             (System_String_o *)StringLiteral_12025/*"SERVANT_SORT_FILTER_RESULT_EMPTY"*/,
                                                             0LL);
  if ( !emptyMessageLabel )
LABEL_59:
    sub_B5D69C(this, gachaBonusSelectEntity);
  UILabel__set_text(emptyMessageLabel, (System_String_o *)this, 0LL);
  ListViewManager__SortItem((ListViewManager_o *)v5, -1, 0, -1, 0LL);
  BonusSelectSummonPartyServantListViewManager__SetFilterButtonImage(v5, v92);
  BonusSelectSummonPartyServantListViewManager__UpdateAscendingOrderBtnSprite(v5, v93);
}


void __fastcall BonusSelectSummonPartyServantListViewManager__DeleteContinueData(const MethodInfo *method)
{
  __int64 v1; // x1
  int v2; // w2
  __int64 v3; // x3
  BonusSelectSummonPartyServantListViewManager_c *v4; // x0
  ListViewSort_o *servantSortInfo; // x0

  if ( (byte_42E867F & 1) == 0 )
  {
    sub_B5D5C4(&BonusSelectSummonPartyServantListViewManager_TypeInfo, v1, v2, v3);
    byte_42E867F = 1;
  }
  v4 = BonusSelectSummonPartyServantListViewManager_TypeInfo;
  if ( (BYTE3(BonusSelectSummonPartyServantListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BonusSelectSummonPartyServantListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BonusSelectSummonPartyServantListViewManager_TypeInfo);
    v4 = BonusSelectSummonPartyServantListViewManager_TypeInfo;
  }
  servantSortInfo = v4->static_fields->servantSortInfo;
  if ( !servantSortInfo
    || (ListViewSort__DeleteContinueData(servantSortInfo, 0LL),
        (servantSortInfo = BonusSelectSummonPartyServantListViewManager_TypeInfo->static_fields->servantSortInfoExtra1) == 0LL)
    || (ListViewSort__DeleteContinueData(servantSortInfo, 0LL),
        (servantSortInfo = BonusSelectSummonPartyServantListViewManager_TypeInfo->static_fields->servantSortInfoExtra2) == 0LL) )
  {
    sub_B5D69C(servantSortInfo, v1);
  }
  ListViewSort__DeleteContinueData(servantSortInfo, 0LL);
}


void __fastcall BonusSelectSummonPartyServantListViewManager__EndSelectFilterKind(
        BonusSelectSummonPartyServantListViewManager_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v3; // x3
  char v6; // w1
  int v7; // w2
  __int64 v8; // x3
  char v9; // w1
  int v10; // w2
  __int64 v11; // x3
  const MethodInfo *v12; // x1
  WebViewManager_o *Instance; // x0
  Il2CppObject *sort; // x21
  CommonUI_o *v15; // x19
  System_Action_o *v16; // x20
  __int64 v17; // x0
  __int64 v18; // x1

  if ( (byte_42E868C & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, isDecide, (_DWORD)method, v3);
    sub_B5D5C4(&Method_ListViewSort_Save__, v6, v7, v8);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v9, v10, v11);
    byte_42E868C = 1;
  }
  if ( isDecide )
  {
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
    BonusSelectSummonPartyServantListViewManager__SetFilterButtonImage(this, v12);
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  sort = (Il2CppObject *)this->fields.sort;
  v15 = (CommonUI_o *)Instance;
  v16 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(v16, sort, Method_ListViewSort_Save__, 0LL);
  if ( !v15 )
    sub_B5D69C(v17, v18);
  CommonUI__CloseServantFilterSelectMenu(v15, v16, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BonusSelectSummonPartyServantListViewManager__EndShowServantStatusDialog(
        BonusSelectSummonPartyServantListViewManager_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v3; // x3
  UIProgressBar_o *scrollBar; // x0

  if ( (byte_42E8687 & 1) == 0 )
  {
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, isDecide, (_DWORD)method, v3);
    byte_42E8687 = 1;
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
  scrollBar = (UIProgressBar_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !scrollBar )
LABEL_9:
    sub_B5D69C(scrollBar, isDecide);
  CommonUI__CloseServantStatusDialog((CommonUI_o *)scrollBar, 0LL, 0LL);
}


System_String_o *__fastcall BonusSelectSummonPartyServantListViewManager__GetScaleButtonSpriteName(
        BonusSelectSummonPartyServantListViewManager_o *this,
        const MethodInfo *method)
{
  ListViewSort_o *sort; // x0

  sort = this->fields.sort;
  if ( !sort )
    sub_B5D69C(0LL, method);
  return ListViewSort__GetScaleKindSpriteName(sort, this->fields.scaleType, 0LL);
}


void __fastcall BonusSelectSummonPartyServantListViewManager__InitLoad(const MethodInfo *method)
{
  __int64 v1; // x1
  int v2; // w2
  __int64 v3; // x3
  BonusSelectSummonPartyServantListViewManager_c *v4; // x0
  ListViewSort_o *servantSortInfo; // x0

  if ( (byte_42E8680 & 1) == 0 )
  {
    sub_B5D5C4(&BonusSelectSummonPartyServantListViewManager_TypeInfo, v1, v2, v3);
    byte_42E8680 = 1;
  }
  v4 = BonusSelectSummonPartyServantListViewManager_TypeInfo;
  if ( (BYTE3(BonusSelectSummonPartyServantListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BonusSelectSummonPartyServantListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BonusSelectSummonPartyServantListViewManager_TypeInfo);
    v4 = BonusSelectSummonPartyServantListViewManager_TypeInfo;
  }
  servantSortInfo = v4->static_fields->servantSortInfo;
  if ( !servantSortInfo
    || (ListViewSort__InitLoad(servantSortInfo, 0LL),
        (servantSortInfo = BonusSelectSummonPartyServantListViewManager_TypeInfo->static_fields->servantSortInfoExtra1) == 0LL)
    || (ListViewSort__InitLoad(servantSortInfo, 0LL),
        (servantSortInfo = BonusSelectSummonPartyServantListViewManager_TypeInfo->static_fields->servantSortInfoExtra2) == 0LL) )
  {
    sub_B5D69C(servantSortInfo, v1);
  }
  ListViewSort__InitLoad(servantSortInfo, 0LL);
}


void __fastcall BonusSelectSummonPartyServantListViewManager__OnClickFilterKind(
        BonusSelectSummonPartyServantListViewManager_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  _QWORD *v14; // x0
  System_Reflection_MethodBase_o *v15; // x0
  GachaBonusSelectEntity_o *gachaBonusSelectEntity; // x0
  __int64 v17; // x1
  struct BonusSelectSummonPartyServantSelectMenu_o *partyServantSelectMenu; // x8
  struct BonusSelectSummonPartyOrganizationListViewItem_o *organizationItem; // x8
  int32_t v20; // w20
  struct BonusSelectSummonPartyServantSelectMenu_o *v21; // x8
  struct BonusSelectSummonPartyOrganizationListViewItem_o *v22; // x8
  WebViewManager_o *Instance; // x0
  ListViewSort_o *sort; // x21
  CommonUI_o *v25; // x22
  ServantFilterSelectMenu_CallbackFunc_o *v26; // x23

  if ( (byte_42E868B & 1) == 0 )
  {
    sub_B5D5C4(&Method_BonusSelectSummonPartyServantListViewManager_EndSelectFilterKind__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_BonusSelectSummonPartyServantListViewManager_OnClickFilterKind__, v5, v6, v7);
    sub_B5D5C4(&ServantFilterSelectMenu_CallbackFunc_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v11, v12, v13);
    byte_42E868B = 1;
  }
  if ( this->fields.isInput )
  {
    v14 = Method_BonusSelectSummonPartyServantListViewManager_OnClickFilterKind__;
    if ( (*((_BYTE *)Method_BonusSelectSummonPartyServantListViewManager_OnClickFilterKind__ + 75) & 2) != 0 )
      v14 = (_QWORD *)sub_B5D5CC(Method_BonusSelectSummonPartyServantListViewManager_OnClickFilterKind__);
    v15 = (System_Reflection_MethodBase_o *)sub_B5D5A8(v14, v14[3]);
    OverwriteAssetSoundName__PlaySystemSe(v15, 0, 0LL);
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
            v20 = 13;
          }
          else
          {
            v21 = this->fields.partyServantSelectMenu;
            if ( !v21 )
              goto LABEL_20;
            v22 = v21->fields.organizationItem;
            if ( !v22 )
              goto LABEL_20;
            gachaBonusSelectEntity = v22->fields.gachaBonusSelectEntity;
            if ( !gachaBonusSelectEntity )
              goto LABEL_20;
            if ( GachaBonusSelectEntity__GetClassId(gachaBonusSelectEntity, 1001, 0LL) == 1005 )
              v20 = 14;
            else
              v20 = 12;
          }
          Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          sort = this->fields.sort;
          v25 = (CommonUI_o *)Instance;
          v26 = (ServantFilterSelectMenu_CallbackFunc_o *)sub_B5D694(ServantFilterSelectMenu_CallbackFunc_TypeInfo);
          ServantFilterSelectMenu_CallbackFunc___ctor(
            v26,
            (Il2CppObject *)this,
            Method_BonusSelectSummonPartyServantListViewManager_EndSelectFilterKind__,
            0LL);
          if ( v25 )
          {
            CommonUI__OpenServantFilterSelectMenu(v25, v20, sort, v26, -1, 0LL);
            return;
          }
        }
      }
    }
LABEL_20:
    sub_B5D69C(gachaBonusSelectEntity, v17);
  }
}


void __fastcall BonusSelectSummonPartyServantListViewManager__OnClickSelectListView(
        BonusSelectSummonPartyServantListViewManager_o *this,
        BonusSelectSummonPartyServantListViewObject_o *obj,
        const MethodInfo *method)
{
  __int64 v3; // x3
  BonusSelectSummonPartyServantListViewManager_o *v5; // x20
  _QWORD *v6; // x0
  System_Reflection_MethodBase_o *v7; // x0
  BonusSelectSummonPartyServantSelectMenu_o *partyServantSelectMenu; // x20
  const MethodInfo *v9; // x1
  const MethodInfo *v10; // x2
  struct UICommonButton_o *sortOrderButton; // x8
  struct UICommonButton_o *sortKindButton; // x9
  _QWORD *v13; // x0
  System_Reflection_MethodBase_o *v14; // x0

  v5 = this;
  if ( (byte_42E8685 & 1) == 0 )
  {
    this = (BonusSelectSummonPartyServantListViewManager_o *)sub_B5D5C4(
                                                               &Method_BonusSelectSummonPartyServantListViewManager_OnClickSelectListView__,
                                                               (_DWORD)obj,
                                                               (_DWORD)method,
                                                               v3);
    byte_42E8685 = 1;
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
        v6 = Method_BonusSelectSummonPartyServantListViewManager_OnClickSelectListView__;
        if ( (*((_BYTE *)Method_BonusSelectSummonPartyServantListViewManager_OnClickSelectListView__ + 75) & 2) != 0 )
          v6 = (_QWORD *)sub_B5D5CC(Method_BonusSelectSummonPartyServantListViewManager_OnClickSelectListView__);
        v7 = (System_Reflection_MethodBase_o *)sub_B5D5A8(v6, v6[3]);
        OverwriteAssetSoundName__PlaySystemSe(v7, 0, 0LL);
        partyServantSelectMenu = v5->fields.partyServantSelectMenu;
        this = (BonusSelectSummonPartyServantListViewManager_o *)BonusSelectSummonPartyServantListViewObject__GetItem(
                                                                   obj,
                                                                   v9);
        if ( partyServantSelectMenu )
        {
          BonusSelectSummonPartyServantSelectMenu__Close(
            partyServantSelectMenu,
            (BonusSelectSummonPartyServantListViewItem_o *)this,
            v10);
          return;
        }
LABEL_17:
        sub_B5D69C(this, obj);
      }
    }
  }
  v13 = Method_BonusSelectSummonPartyServantListViewManager_OnClickSelectListView__;
  if ( (*((_BYTE *)Method_BonusSelectSummonPartyServantListViewManager_OnClickSelectListView__ + 75) & 2) != 0 )
    v13 = (_QWORD *)sub_B5D5CC(Method_BonusSelectSummonPartyServantListViewManager_OnClickSelectListView__);
  v14 = (System_Reflection_MethodBase_o *)sub_B5D5A8(v13, v13[3]);
  OverwriteAssetSoundName__PlaySystemSe(v14, 2, 0LL);
}


void __fastcall BonusSelectSummonPartyServantListViewManager__OnClickSortAscendingOrder(
        BonusSelectSummonPartyServantListViewManager_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  BonusSelectSummonPartyServantListViewManager_o *v7; // x0
  __int64 v8; // x1
  const MethodInfo *v9; // x2
  struct ListViewSort_o *sort; // x8
  const MethodInfo *v11; // x1

  if ( (byte_42E868F & 1) == 0 )
  {
    sub_B5D5C4(&Method_BonusSelectSummonPartyServantListViewManager_OnClickSortAscendingOrder__, (_DWORD)method, v2, v3);
    byte_42E868F = 1;
  }
  if ( this->fields.isInput )
  {
    v5 = Method_BonusSelectSummonPartyServantListViewManager_OnClickSortAscendingOrder__;
    if ( (*((_BYTE *)Method_BonusSelectSummonPartyServantListViewManager_OnClickSortAscendingOrder__ + 75) & 2) != 0 )
      v5 = (_QWORD *)sub_B5D5CC(Method_BonusSelectSummonPartyServantListViewManager_OnClickSortAscendingOrder__);
    v6 = (System_Reflection_MethodBase_o *)sub_B5D5A8(v5, v5[3]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0LL);
    sort = this->fields.sort;
    if ( !sort )
      sub_B5D69C(v7, v8);
    BonusSelectSummonPartyServantListViewManager__SetAndSaveSortAscendingOrder(v7, !sort->fields.isAscendingOrder, v9);
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
    BonusSelectSummonPartyServantListViewManager__UpdateAscendingOrderBtnSprite(this, v11);
  }
}


void __fastcall BonusSelectSummonPartyServantListViewManager__OnClickSortKind(
        BonusSelectSummonPartyServantListViewManager_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  BonusSelectSummonPartyServantListViewManager_o *v7; // x0
  __int64 v8; // x1
  const MethodInfo *v9; // x2
  struct ListViewSort_o *sort; // x8
  int32_t v11; // w1

  if ( (byte_42E868D & 1) == 0 )
  {
    sub_B5D5C4(&Method_BonusSelectSummonPartyServantListViewManager_OnClickSortKind__, (_DWORD)method, v2, v3);
    byte_42E868D = 1;
  }
  if ( this->fields.isInput )
  {
    v5 = Method_BonusSelectSummonPartyServantListViewManager_OnClickSortKind__;
    if ( (*((_BYTE *)Method_BonusSelectSummonPartyServantListViewManager_OnClickSortKind__ + 75) & 2) != 0 )
      v5 = (_QWORD *)sub_B5D5CC(Method_BonusSelectSummonPartyServantListViewManager_OnClickSortKind__);
    v6 = (System_Reflection_MethodBase_o *)sub_B5D5A8(v5, v5[3]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0LL);
    sort = this->fields.sort;
    if ( !sort )
      sub_B5D69C(v7, v8);
    if ( sort->fields.sortKind == 27 )
      v11 = 4;
    else
      v11 = 27;
    BonusSelectSummonPartyServantListViewManager__SetAndSaveSortKind(v7, v11, v9);
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
  }
}


void __fastcall BonusSelectSummonPartyServantListViewManager__OnLongPushListView(
        BonusSelectSummonPartyServantListViewManager_o *this,
        BonusSelectSummonPartyServantListViewObject_o *obj,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  UIProgressBar_o *scrollBar; // x0
  _QWORD *v22; // x0
  System_Reflection_MethodBase_o *v23; // x0
  CommonUI_o *v24; // x21
  struct UnityEngine_Transform_o *thumb; // x8
  UnityEngine_Transform_c *klass; // x20
  __int64 v27; // x22
  int32_t v28; // w22
  ServantLeaderInfo_o *v29; // x20
  ServantStatusDialog_EndDelegate_o *v30; // x22
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v31; // 0:x0.16

  if ( (byte_42E8686 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_BonusSelectSummonPartyServantListViewManager_EndShowServantStatusDialog__,
      (_DWORD)obj,
      (_DWORD)method,
      v3);
    sub_B5D5C4(&Method_BonusSelectSummonPartyServantListViewManager_OnLongPushListView__, v6, v7, v8);
    sub_B5D5C4(&ServantStatusDialog_EndDelegate_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v12, v13, v14);
    sub_B5D5C4(&ServantLeaderInfo_TypeInfo, v15, v16, v17);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v18, v19, v20);
    byte_42E8686 = 1;
  }
  scrollBar = (UIProgressBar_o *)this->fields.scrollBar;
  if ( !scrollBar )
    goto LABEL_14;
  this->fields.tmpScrollBarValueForLongPush = UIProgressBar__get_value(scrollBar, 0LL);
  v22 = Method_BonusSelectSummonPartyServantListViewManager_OnLongPushListView__;
  if ( (*((_BYTE *)Method_BonusSelectSummonPartyServantListViewManager_OnLongPushListView__ + 75) & 2) != 0 )
    v22 = (_QWORD *)sub_B5D5CC(Method_BonusSelectSummonPartyServantListViewManager_OnLongPushListView__);
  v23 = (System_Reflection_MethodBase_o *)sub_B5D5A8(v22, v22[3]);
  OverwriteAssetSoundName__PlaySystemSe(v23, 0, 0LL);
  scrollBar = (UIProgressBar_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !obj )
    goto LABEL_14;
  v24 = (CommonUI_o *)scrollBar;
  scrollBar = (UIProgressBar_o *)BonusSelectSummonPartyServantListViewObject__GetItem(obj, (const MethodInfo *)obj);
  if ( !scrollBar )
    goto LABEL_14;
  thumb = scrollBar[1].fields.thumb;
  if ( !thumb )
    goto LABEL_14;
  v27 = *(_QWORD *)&thumb->fields.m_CachedPtr;
  klass = thumb[1].klass;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v31.fields.currentCryptoKey = v27;
  *(_QWORD *)&v31.fields.fakeValue = klass;
  v28 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v31, 0LL);
  v29 = (ServantLeaderInfo_o *)sub_B5D694(ServantLeaderInfo_TypeInfo);
  ServantLeaderInfo___ctor_29348816(v29, v28, 0, 1, 0LL);
  v30 = (ServantStatusDialog_EndDelegate_o *)sub_B5D694(ServantStatusDialog_EndDelegate_TypeInfo);
  ServantStatusDialog_EndDelegate___ctor(
    v30,
    (Il2CppObject *)this,
    Method_BonusSelectSummonPartyServantListViewManager_EndShowServantStatusDialog__,
    0LL);
  if ( !v24 )
LABEL_14:
    sub_B5D69C(scrollBar, obj);
  CommonUI__OpenServantStatusDialog_18214956(v24, 7, v29, v30, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BonusSelectSummonPartyServantListViewManager__RequestListObject(
        BonusSelectSummonPartyServantListViewManager_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  System_Collections_Generic_List_BonusSelectSummonPartyServantListViewObject__o *ObjectList; // x0
  __int64 v16; // x1
  __int64 v17; // x1
  const MethodInfo *v18; // x2
  System_Collections_Generic_List_Enumerator_T__o v19; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_42E8682 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_BonusSelectSummonPartyServantListViewObject__Dispose__,
      mode,
      (_DWORD)method,
      v3);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_BonusSelectSummonPartyServantListViewObject__MoveNext__,
      v6,
      v7,
      v8);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_BonusSelectSummonPartyServantListViewObject__get_Current__,
      v9,
      v10,
      v11);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_BonusSelectSummonPartyServantListViewObject__GetEnumerator__,
      v12,
      v13,
      v14);
    byte_42E8682 = 1;
  }
  memset(&v19, 0, sizeof(v19));
  ObjectList = BonusSelectSummonPartyServantListViewManager__get_ObjectList(this, *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_B5D69C(0LL, v16);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v19,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)ObjectList,
    (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_BonusSelectSummonPartyServantListViewObject__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v19,
            (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_BonusSelectSummonPartyServantListViewObject__MoveNext__) )
  {
    if ( !v19.fields.current )
      sub_B5D69C(0LL, v17);
    BonusSelectSummonPartyServantListViewObject__Init(
      (BonusSelectSummonPartyServantListViewObject_o *)v19.fields.current,
      mode,
      v18);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v19,
    (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_BonusSelectSummonPartyServantListViewObject__Dispose__);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BonusSelectSummonPartyServantListViewManager__SetAndSaveIconScaleType(
        BonusSelectSummonPartyServantListViewManager_o *this,
        int32_t scaleType,
        const MethodInfo *method)
{
  __int64 v3; // x3
  ListViewSort_o *servantSortInfoExtra1; // x0
  _DWORD *gc_desc; // x8
  const char *name; // x8
  const char *namespaze; // x8

  if ( (byte_42E8689 & 1) == 0 )
  {
    sub_B5D5C4(&BonusSelectSummonPartyServantListViewManager_TypeInfo, scaleType, (_DWORD)method, v3);
    byte_42E8689 = 1;
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
    sub_B5D69C(servantSortInfoExtra1, *(_QWORD *)&scaleType);
  }
  ListViewSort__SaveIconScaleKind(servantSortInfoExtra1, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BonusSelectSummonPartyServantListViewManager__SetAndSaveSortAscendingOrder(
        BonusSelectSummonPartyServantListViewManager_o *this,
        bool isAscendingOrder,
        const MethodInfo *method)
{
  __int64 v3; // x3
  ListViewSort_o *servantSortInfoExtra1; // x0
  _BYTE *gc_desc; // x9
  bool v7; // w8
  const char *name; // x9
  const char *namespaze; // x9

  if ( (byte_42E8690 & 1) == 0 )
  {
    sub_B5D5C4(&BonusSelectSummonPartyServantListViewManager_TypeInfo, isAscendingOrder, (_DWORD)method, v3);
    byte_42E8690 = 1;
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
  v7 = isAscendingOrder;
  gc_desc[60] = isAscendingOrder;
  name = servantSortInfoExtra1[1].klass->_1.name;
  if ( !name )
    goto LABEL_13;
  *((_BYTE *)name + 60) = v7;
  namespaze = servantSortInfoExtra1[1].klass->_1.namespaze;
  if ( !namespaze
    || (*((_BYTE *)namespaze + 60) = v7,
        (servantSortInfoExtra1 = (ListViewSort_o *)servantSortInfoExtra1[1].klass->_1.gc_desc) == 0LL)
    || (ListViewSort__SaveIsAscendingOrder(servantSortInfoExtra1, 0LL),
        (servantSortInfoExtra1 = BonusSelectSummonPartyServantListViewManager_TypeInfo->static_fields->servantSortInfoExtra1) == 0LL)
    || (ListViewSort__SaveIsAscendingOrder(servantSortInfoExtra1, 0LL),
        (servantSortInfoExtra1 = BonusSelectSummonPartyServantListViewManager_TypeInfo->static_fields->servantSortInfoExtra2) == 0LL) )
  {
LABEL_13:
    sub_B5D69C(servantSortInfoExtra1, isAscendingOrder);
  }
  ListViewSort__SaveIsAscendingOrder(servantSortInfoExtra1, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BonusSelectSummonPartyServantListViewManager__SetAndSaveSortKind(
        BonusSelectSummonPartyServantListViewManager_o *this,
        int32_t sortKind,
        const MethodInfo *method)
{
  __int64 v3; // x3
  ListViewSort_o *servantSortInfoExtra1; // x0
  _DWORD *gc_desc; // x8
  const char *name; // x8
  const char *namespaze; // x8

  if ( (byte_42E868E & 1) == 0 )
  {
    sub_B5D5C4(&BonusSelectSummonPartyServantListViewManager_TypeInfo, sortKind, (_DWORD)method, v3);
    byte_42E868E = 1;
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
    sub_B5D69C(servantSortInfoExtra1, *(_QWORD *)&sortKind);
  }
  ListViewSort__SaveSortKind(servantSortInfoExtra1, 0LL);
}


void __fastcall BonusSelectSummonPartyServantListViewManager__SetFilterButtonImage(
        BonusSelectSummonPartyServantListViewManager_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  BonusSelectSummonPartyServantListViewManager_o *v4; // x19
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  struct BonusSelectSummonPartyServantSelectMenu_o *partyServantSelectMenu; // x8
  struct BonusSelectSummonPartyOrganizationListViewItem_o *organizationItem; // x8
  struct BonusSelectSummonPartyServantSelectMenu_o *v10; // x8
  struct BonusSelectSummonPartyOrganizationListViewItem_o *v11; // x8
  UISprite_o *filterSprite; // x19
  System_String_o **v13; // x8

  v4 = this;
  if ( (byte_42E8683 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_17202/*"btn_filter_on"*/, (_DWORD)method, v2, v3);
    this = (BonusSelectSummonPartyServantListViewManager_o *)sub_B5D5C4(&StringLiteral_17201/*"btn_filter"*/, v5, v6, v7);
    byte_42E8683 = 1;
  }
  partyServantSelectMenu = v4->fields.partyServantSelectMenu;
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
  v10 = v4->fields.partyServantSelectMenu;
  if ( !v10
    || (v11 = v10->fields.organizationItem) == 0LL
    || (this = (BonusSelectSummonPartyServantListViewManager_o *)v11->fields.gachaBonusSelectEntity) == 0LL )
  {
LABEL_19:
    sub_B5D69C(this, method);
  }
  if ( GachaBonusSelectEntity__GetClassId((GachaBonusSelectEntity_o *)this, 1001, 0LL) == 1005 )
    method = (const MethodInfo *)(byte_9 + 5);
  else
    method = (const MethodInfo *)(byte_9 + 3);
LABEL_14:
  this = (BonusSelectSummonPartyServantListViewManager_o *)v4->fields.sort;
  if ( !this )
    goto LABEL_19;
  filterSprite = v4->fields.filterSprite;
  this = (BonusSelectSummonPartyServantListViewManager_o *)ListViewSort__CheckBonusSelectSummonFilterDefaultAll(
                                                             (ListViewSort_o *)this,
                                                             (int32_t)method,
                                                             -1,
                                                             0LL);
  if ( !filterSprite )
    goto LABEL_19;
  v13 = (System_String_o **)&StringLiteral_17201/*"btn_filter"*/;
  if ( ((unsigned __int8)this & 1) == 0 )
    v13 = (System_String_o **)&StringLiteral_17202/*"btn_filter_on"*/;
  UISprite__set_spriteName(filterSprite, *v13, 0LL);
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
    sub_B5D69C(scrollView, v5);
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
  if ( (byte_42E868A & 1) == 0 )
  {
    this = (BonusSelectSummonPartyServantListViewManager_o *)sub_B5D5C4(
                                                               &BonusSelectSummonPartyServantListViewObject_TypeInfo,
                                                               (_DWORD)obj,
                                                               (_DWORD)item,
                                                               method);
    byte_42E868A = 1;
  }
  if ( !obj
    || (v6 = *(&BonusSelectSummonPartyServantListViewObject_TypeInfo->_2.bitflags2 + 1),
        *(&obj->klass->_2.bitflags2 + 1) < (unsigned int)v6)
    || (BonusSelectSummonPartyServantListViewObject_c *)obj->klass->_2.typeHierarchy[v6 - 1] != BonusSelectSummonPartyServantListViewObject_TypeInfo )
  {
    sub_B5D69C(this, obj);
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
  int v2; // w2
  __int64 v3; // x3
  BonusSelectSummonPartyServantListViewManager_o *v4; // x19
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  struct ListViewSort_o *sort; // x8
  System_String_o **v9; // x8

  v4 = this;
  if ( (byte_42E8684 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_17314/*"btn_txt_up"*/, (_DWORD)method, v2, v3);
    this = (BonusSelectSummonPartyServantListViewManager_o *)sub_B5D5C4(&StringLiteral_17260/*"btn_txt_down"*/, v5, v6, v7);
    byte_42E8684 = 1;
  }
  sort = v4->fields.sort;
  if ( !sort || (this = (BonusSelectSummonPartyServantListViewManager_o *)v4->fields.sortExplanationSprite) == 0LL )
    sub_B5D69C(this, method);
  if ( sort->fields.isAscendingOrder )
    v9 = (System_String_o **)&StringLiteral_17314/*"btn_txt_up"*/;
  else
    v9 = (System_String_o **)&StringLiteral_17260/*"btn_txt_down"*/;
  UISprite__set_spriteName((UISprite_o *)this, *v9, 0LL);
}


System_Collections_Generic_List_BonusSelectSummonPartyServantListViewObject__o *__fastcall BonusSelectSummonPartyServantListViewManager__get_ObjectList(
        BonusSelectSummonPartyServantListViewManager_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v29; // x19
  __int64 v30; // x1
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  Il2CppObject *current; // x20
  _BOOL8 v33; // x0
  __int64 v34; // x1
  EventMissionProgressRequest_Argument_ProgressData_o *Component_srcLineSprite; // x0
  System_Collections_Generic_List_Enumerator_T__o v37; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v38; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_42E8691 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v8, v9, v10);
    sub_B5D5C4(
      &Method_UnityEngine_GameObject_GetComponent_BonusSelectSummonPartyServantListViewObject___,
      v11,
      v12,
      v13);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_BonusSelectSummonPartyServantListViewObject__Add__,
      v14,
      v15,
      v16);
    sub_B5D5C4(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v17, v18, v19);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_BonusSelectSummonPartyServantListViewObject___ctor__,
      v20,
      v21,
      v22);
    sub_B5D5C4(&System_Collections_Generic_List_BonusSelectSummonPartyServantListViewObject__TypeInfo, v23, v24, v25);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v26, v27, v28);
    byte_42E8691 = 1;
  }
  memset(&v38, 0, sizeof(v38));
  v29 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_BonusSelectSummonPartyServantListViewObject__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v29,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_BonusSelectSummonPartyServantListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_B5D69C(0LL, v30);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v37,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)objectList,
    (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v38 = v37;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v38,
            (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v38.fields.current;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v33 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v33 )
    {
      if ( !current )
        sub_B5D69C(v33, v34);
      Component_srcLineSprite = (EventMissionProgressRequest_Argument_ProgressData_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                                         (UnityEngine_GameObject_o *)current,
                                                                                         (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_BonusSelectSummonPartyServantListViewObject___);
      if ( !v29 )
        sub_B5D69C(Component_srcLineSprite, Component_srcLineSprite);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v29,
        Component_srcLineSprite,
        (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_BonusSelectSummonPartyServantListViewObject__Add__);
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v38,
    (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_BonusSelectSummonPartyServantListViewObject__o *)v29;
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
  sub_B5D560(p_method);
}


System_IAsyncResult_o *__fastcall BonusSelectSummonPartyServantListViewManager_CallbackFunc__BeginInvoke(
        BonusSelectSummonPartyServantListViewManager_CallbackFunc_o *this,
        int32_t kind,
        int32_t result,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  __int64 v13[3]; // [xsp+0h] [xbp-40h] BYREF
  int32_t v14; // [xsp+18h] [xbp-28h] BYREF
  int32_t v15; // [xsp+1Ch] [xbp-24h] BYREF

  v14 = result;
  v15 = kind;
  if ( (byte_42E5E2C & 1) == 0 )
  {
    sub_B5D5C4(&int_TypeInfo, kind, result, callback);
    sub_B5D5C4(&BonusSelectSummonPartyServantListViewManager_ResultKind_TypeInfo, v9, v10, v11);
    byte_42E5E2C = 1;
  }
  v13[2] = 0LL;
  v13[0] = j_il2cpp_value_box_0(BonusSelectSummonPartyServantListViewManager_ResultKind_TypeInfo, &v15);
  v13[1] = j_il2cpp_value_box_0(int_TypeInfo, &v14);
  return (System_IAsyncResult_o *)sub_B5D568(this, v13, callback, object);
}


void __fastcall BonusSelectSummonPartyServantListViewManager_CallbackFunc__EndInvoke(
        BonusSelectSummonPartyServantListViewManager_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B5D56C(result, 0LL, method);
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
        sub_B5D680(*(_QWORD *)&v21->fields.extra_arg, *(_QWORD *)&kind, *(_QWORD *)&result);
      if ( (sub_B5D5F4(v23) & 1) == 0 )
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
      v25 = sub_B5D5EC(v23);
      v26 = sub_B5D9F0(v23);
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
            v19 = sub_AF54C0(v22, v30, v31, v27);
          }
          v18 = *(_QWORD *)(v19 + 8);
        }
        else
        {
          v18 = *(_QWORD *)(*v22 + 16LL * *(unsigned __int16 *)(v23 + 72) + 320);
        }
        v20 = (void (__fastcall **)(__int64 *, _QWORD, _QWORD, _QWORD))sub_B5D674(v18, v23);
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
            v17 = sub_AF54C0(v22, class_0, v10, v12);
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
  __int64 v3; // x3
  BonusSelectSummonPartyServantListViewManager___c__DisplayClass17_0_o *v5; // x20
  struct ServantEntity_o *servantEntity; // x8
  __int64 v7; // x20
  __int64 v8; // x21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v10; // 0:x0.16

  v5 = this;
  if ( (byte_42E5E2B & 1) == 0 )
  {
    this = (BonusSelectSummonPartyServantListViewManager___c__DisplayClass17_0_o *)sub_B5D5C4(
                                                                                     &CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo,
                                                                                     id,
                                                                                     (_DWORD)method,
                                                                                     v3);
    byte_42E5E2B = 1;
  }
  servantEntity = v5->fields.servantEntity;
  if ( !servantEntity )
    sub_B5D69C(this, *(_QWORD *)&id);
  v8 = *(_QWORD *)&servantEntity->fields.id.fields.currentCryptoKey;
  v7 = *(_QWORD *)&servantEntity->fields.id.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v10.fields.currentCryptoKey = v8;
  *(_QWORD *)&v10.fields.fakeValue = v7;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v10, 0LL) == id;
}