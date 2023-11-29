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
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x3
  __int64 v18; // x4
  ListViewSort_o *v19; // x20
  struct BonusSelectSummonPartyServantListViewManager_StaticFields *v20; // x0
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  System_String_o *v27; // x19
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x3
  __int64 v31; // x4
  ListViewSort_o *v32; // x20
  struct BonusSelectSummonPartyServantListViewManager_StaticFields *v33; // x0
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7
  System_String_o *v40; // x19
  __int64 v41; // x1
  __int64 v42; // x2
  __int64 v43; // x3
  __int64 v44; // x4
  ListViewSort_o *v45; // x20
  struct BonusSelectSummonPartyServantListViewManager_StaticFields *v46; // x0
  System_String_array **v47; // x2
  System_String_array **v48; // x3
  System_Boolean_array **v49; // x4
  System_Int32_array **v50; // x5
  System_Int32_array *v51; // x6
  System_Int32_array *v52; // x7

  if ( (byte_40FB127 & 1) == 0 )
  {
    sub_B16FFC(&BonusSelectSummonPartyServantListViewManager_TypeInfo, v1);
    sub_B16FFC(&ListViewSort_TypeInfo, v8);
    sub_B16FFC(&StringLiteral_1102, v9);
    sub_B16FFC(&StringLiteral_2836, v10);
    sub_B16FFC(&StringLiteral_1004, v11);
    byte_40FB127 = 1;
  }
  static_fields = (BattleServantConfConponent_o *)BonusSelectSummonPartyServantListViewManager_TypeInfo->static_fields;
  v13 = (System_Int32_array **)StringLiteral_2836;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_2836;
  sub_B16F98(static_fields, v13, v2, v3, v4, v5, v6, v7);
  SORT_SAVE_KEY = BonusSelectSummonPartyServantListViewManager_TypeInfo->static_fields->SORT_SAVE_KEY;
  v19 = (ListViewSort_o *)sub_B170CC(ListViewSort_TypeInfo, v15, v16, v17, v18);
  ListViewSort___ctor_30208480(v19, SORT_SAVE_KEY, 27, 0, 0LL);
  v20 = BonusSelectSummonPartyServantListViewManager_TypeInfo->static_fields;
  v20->servantSortInfo = v19;
  sub_B16F98(
    (BattleServantConfConponent_o *)&v20->servantSortInfo,
    (System_Int32_array **)v19,
    v21,
    v22,
    v23,
    v24,
    v25,
    v26);
  v27 = System_String__Concat_43743732(
          BonusSelectSummonPartyServantListViewManager_TypeInfo->static_fields->SORT_SAVE_KEY,
          (System_String_o *)StringLiteral_1004,
          0LL);
  v32 = (ListViewSort_o *)sub_B170CC(ListViewSort_TypeInfo, v28, v29, v30, v31);
  ListViewSort___ctor_30208480(v32, v27, 27, 0, 0LL);
  v33 = BonusSelectSummonPartyServantListViewManager_TypeInfo->static_fields;
  v33->servantSortInfoExtra1 = v32;
  sub_B16F98(
    (BattleServantConfConponent_o *)&v33->servantSortInfoExtra1,
    (System_Int32_array **)v32,
    v34,
    v35,
    v36,
    v37,
    v38,
    v39);
  v40 = System_String__Concat_43743732(
          BonusSelectSummonPartyServantListViewManager_TypeInfo->static_fields->SORT_SAVE_KEY,
          (System_String_o *)StringLiteral_1102,
          0LL);
  v45 = (ListViewSort_o *)sub_B170CC(ListViewSort_TypeInfo, v41, v42, v43, v44);
  ListViewSort___ctor_30208480(v45, v40, 27, 0, 0LL);
  v46 = BonusSelectSummonPartyServantListViewManager_TypeInfo->static_fields;
  v46->servantSortInfoExtra2 = v45;
  sub_B16F98(
    (BattleServantConfConponent_o *)&v46->servantSortInfoExtra2,
    (System_Int32_array **)v45,
    v47,
    v48,
    v49,
    v50,
    v51,
    v52);
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
  const MethodInfo *v15; // x2
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x20
  unsigned __int64 v17; // x22
  ListViewItem_o *v18; // x20
  __int64 v19; // x10
  UnityEngine_Object_o *viewObject; // x21
  ListViewObject_o *v21; // x0

  v8 = this;
  if ( (byte_40FB11D & 1) == 0 )
  {
    sub_B16FFC(&BonusSelectSummonPartyServantListViewItem_TypeInfo, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v10);
    this = (BonusSelectSummonPartyServantListViewManager_o *)sub_B16FFC(&UnityEngine_Object_TypeInfo, v11);
    byte_40FB11D = 1;
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
  sub_B16F98((BattleServantConfConponent_o *)&v8->fields.seed, smallSizeSeed, v2, v3, v4, v5, v6, v7);
LABEL_10:
  BonusSelectSummonPartyServantListViewManager__SetAndSaveIconScaleType(
    this,
    v8->fields.scaleType,
    (const MethodInfo *)v2);
  itemList = v8->fields.itemList;
  if ( !itemList )
LABEL_25:
    sub_B170D4();
  v17 = 0LL;
  while ( (__int64)v17 < itemList->fields._size )
  {
    if ( v17 >= (unsigned int)itemList->fields._size )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
    v18 = itemList->fields._items->m_Items[v17];
    if ( v18 )
    {
      v19 = *(&BonusSelectSummonPartyServantListViewItem_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v18->klass->_2.bitflags2 + 1) >= (unsigned int)v19
        && (BonusSelectSummonPartyServantListViewItem_c *)v18->klass->_2.typeHierarchy[v19 - 1] == BonusSelectSummonPartyServantListViewItem_TypeInfo )
      {
        viewObject = (UnityEngine_Object_o *)v18->fields.viewObject;
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        if ( !UnityEngine_Object__op_Equality(viewObject, 0LL, 0LL) )
        {
          v21 = v18->fields.viewObject;
          if ( !v21 )
            goto LABEL_25;
          ListViewObject__SetItemSeed(v21, v18, v8->fields.seed, 0LL);
        }
      }
    }
    itemList = v8->fields.itemList;
    ++v17;
    if ( !itemList )
      goto LABEL_25;
  }
  BonusSelectSummonPartyServantListViewManager__SetMode(v8, 2, v15);
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
  struct ListViewSort_o *servantSortInfoExtra2; // x1
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
  struct ListViewItemSeed_o *normalSizeSeed; // x1
  GiftMaster_o *Master_WarQuestSelectionMaster; // x22
  DataMasterBase_WarMaster__WarEntity__int__o *v43; // x23
  GachaBonusSelectLineupMaster_o *v44; // x0
  __int64 v45; // x1
  __int64 v46; // x2
  __int64 v47; // x3
  __int64 v48; // x4
  GachaBonusSelectLineupEntity_array *v49; // x8
  __int64 v50; // x28
  unsigned int v51; // w21
  __int64 v52; // x24
  _BOOL8 v53; // x0
  __int64 v54; // x1
  __int64 v55; // x2
  __int64 v56; // x8
  GiftEntity_o *DataById; // x0
  System_String_array **v58; // x2
  System_String_array **v59; // x3
  System_Boolean_array **v60; // x4
  System_Int32_array **v61; // x5
  System_Int32_array *v62; // x6
  System_Int32_array *v63; // x7
  System_Int32_array **Entity; // x1
  __int64 v65; // x1
  __int64 v66; // x2
  __int64 v67; // x3
  __int64 v68; // x4
  System_Func_int__bool__o *v69; // x26
  __int64 v70; // x3
  __int64 v71; // x4
  struct BonusSelectSummonPartyServantSelectMenu_o *partyServantSelectMenu; // x9
  GachaBonusSelectLineupEntity_o *v73; // x26
  ServantEntity_o *v74; // x25
  BonusSelectSummonPartyOrganizationListViewItem_o *organizationItem; // x27
  bool v76; // w20
  BonusSelectSummonPartyServantListViewItem_o *v77; // x24
  const MethodInfo *v78; // x6
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x0
  UILabel_o *emptyMessageLabel; // x20
  System_String_o *v81; // x0
  const MethodInfo *v82; // x1
  const MethodInfo *v83; // x1
  GachaBonusSelectLineupEntity_array *gachaBonusSelectLineupEntities; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_40FB116 & 1) == 0 )
  {
    sub_B16FFC(&Method_BasicHelper_Any_int____66805656, gachaBonusSelectEntity);
    sub_B16FFC(&BonusSelectSummonPartyServantListViewItem_TypeInfo, v6);
    sub_B16FFC(&BonusSelectSummonPartyServantListViewManager_TypeInfo, v7);
    sub_B16FFC(&Method_DataManager_GetMaster_GachaBonusSelectLineupMaster___, v8);
    sub_B16FFC(&Method_DataManager_GetMaster_GiftMaster___, v9);
    sub_B16FFC(&Method_DataManager_GetMaster_ServantMaster___, v10);
    sub_B16FFC(&DataManager_TypeInfo, v11);
    sub_B16FFC(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v12);
    sub_B16FFC(&Method_System_Func_int__bool___ctor__, v13);
    sub_B16FFC(&System_Func_int__bool__TypeInfo, v14);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewItem__Add__, v15);
    sub_B16FFC(&LocalizationManager_TypeInfo, v16);
    sub_B16FFC(&Method_BonusSelectSummonPartyServantListViewManager___c__DisplayClass17_0__CreateList_b__0__, v17);
    sub_B16FFC(&BonusSelectSummonPartyServantListViewManager___c__DisplayClass17_0_TypeInfo, v18);
    sub_B16FFC(&StringLiteral_11842, v19);
    byte_40FB116 = 1;
  }
  gachaBonusSelectLineupEntities = 0LL;
  if ( !gachaBonusSelectEntity )
    goto LABEL_59;
  ClassId = GachaBonusSelectEntity__GetClassId(gachaBonusSelectEntity, 1001, 0LL);
  if ( ClassId == 1005 )
  {
    v29 = BonusSelectSummonPartyServantListViewManager_TypeInfo;
    if ( (BYTE3(BonusSelectSummonPartyServantListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BonusSelectSummonPartyServantListViewManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BonusSelectSummonPartyServantListViewManager_TypeInfo);
      v29 = BonusSelectSummonPartyServantListViewManager_TypeInfo;
    }
    servantSortInfoExtra2 = v29->static_fields->servantSortInfoExtra2;
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
    servantSortInfoExtra2 = v27->static_fields->servantSortInfoExtra1;
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
    servantSortInfoExtra2 = v30->static_fields->servantSortInfo;
  }
  this->fields.sort = servantSortInfoExtra2;
  p_sort = &this->fields.sort;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.sort,
    (System_Int32_array **)servantSortInfoExtra2,
    v21,
    v22,
    v23,
    v24,
    v25,
    v26);
  if ( !this->fields.sort )
    goto LABEL_59;
  ListViewSort__Load(this->fields.sort, 0LL);
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
      goto LABEL_31;
    normalSizeSeed = this->fields.extremelySmallSizeSeed;
  }
  this->fields.seed = normalSizeSeed;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.seed,
    (System_Int32_array **)normalSizeSeed,
    v32,
    v33,
    v34,
    v35,
    v36,
    v37);
LABEL_31:
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (GiftMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_GiftMaster___);
  v43 = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_ServantMaster___);
  v44 = (GachaBonusSelectLineupMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_GachaBonusSelectLineupMaster___);
  if ( !v44 )
    goto LABEL_59;
  if ( GachaBonusSelectLineupMaster__TryGetEntityList(
         v44,
         &gachaBonusSelectLineupEntities,
         gachaBonusSelectEntity->fields.gachaBonusSelectLineupId,
         0LL) )
  {
    v49 = gachaBonusSelectLineupEntities;
    if ( !gachaBonusSelectLineupEntities )
      goto LABEL_59;
    v50 = 4LL;
    while ( 1 )
    {
      v51 = v50 - 4;
      if ( (int)v50 - 4 >= (signed int)v49->max_length )
        break;
      v52 = sub_B170CC(BonusSelectSummonPartyServantListViewManager___c__DisplayClass17_0_TypeInfo, v45, v46, v47, v48);
      BonusSelectSummonPartyServantListViewManager___c__DisplayClass17_0___ctor(
        (BonusSelectSummonPartyServantListViewManager___c__DisplayClass17_0_o *)v52,
        0LL);
      if ( !gachaBonusSelectLineupEntities )
        goto LABEL_59;
      if ( v51 >= gachaBonusSelectLineupEntities->max_length )
        goto LABEL_60;
      v56 = *((_QWORD *)&gachaBonusSelectLineupEntities->obj.klass + v50);
      if ( !v56 || !Master_WarQuestSelectionMaster )
        goto LABEL_59;
      DataById = GiftMaster__getDataById(Master_WarQuestSelectionMaster, *(_DWORD *)(v56 + 24), 0LL);
      if ( DataById )
      {
        if ( !v43 )
          goto LABEL_59;
        Entity = (System_Int32_array **)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                          v43,
                                          DataById->fields.objectId,
                                          (const MethodInfo_266F388 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
        if ( !v52 )
          goto LABEL_59;
      }
      else
      {
        Entity = 0LL;
        if ( !v52 )
          goto LABEL_59;
      }
      *(_QWORD *)(v52 + 16) = Entity;
      sub_B16F98((BattleServantConfConponent_o *)(v52 + 16), Entity, v58, v59, v60, v61, v62, v63);
      v69 = (System_Func_int__bool__o *)sub_B170CC(System_Func_int__bool__TypeInfo, v65, v66, v67, v68);
      System_Func_int__bool____ctor(
        v69,
        (Il2CppObject *)v52,
        Method_BonusSelectSummonPartyServantListViewManager___c__DisplayClass17_0__CreateList_b__0__,
        (const MethodInfo_2B6586C *)Method_System_Func_int__bool___ctor__);
      v53 = BasicHelper__Any_int__25910576(
              notPossibleSvtIdList,
              (System_Func_T__bool__o *)v69,
              (const MethodInfo_18B5D30 *)Method_BasicHelper_Any_int____66805656);
      if ( !gachaBonusSelectLineupEntities )
        goto LABEL_59;
      if ( v51 >= gachaBonusSelectLineupEntities->max_length )
      {
LABEL_60:
        sub_B17100(v53, v54, v55);
        sub_B170A0();
      }
      partyServantSelectMenu = this->fields.partyServantSelectMenu;
      if ( partyServantSelectMenu )
      {
        v73 = (GachaBonusSelectLineupEntity_o *)*((_QWORD *)&gachaBonusSelectLineupEntities->obj.klass + v50);
        v74 = *(ServantEntity_o **)(v52 + 16);
        organizationItem = partyServantSelectMenu->fields.organizationItem;
        v76 = !v53;
        v77 = (BonusSelectSummonPartyServantListViewItem_o *)sub_B170CC(
                                                               BonusSelectSummonPartyServantListViewItem_TypeInfo,
                                                               v54,
                                                               v55,
                                                               v70,
                                                               v71);
        BonusSelectSummonPartyServantListViewItem___ctor(v77, v51, v74, v73, organizationItem, v76, v78);
        itemList = this->fields.itemList;
        if ( itemList )
        {
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)itemList,
            (EventMissionProgressRequest_Argument_ProgressData_o *)v77,
            (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
          v49 = gachaBonusSelectLineupEntities;
          ++v50;
          if ( gachaBonusSelectLineupEntities )
            continue;
        }
      }
      goto LABEL_59;
    }
  }
  emptyMessageLabel = this->fields.emptyMessageLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v81 = LocalizationManager__Get((System_String_o *)StringLiteral_11842, 0LL);
  if ( !emptyMessageLabel )
LABEL_59:
    sub_B170D4();
  UILabel__set_text(emptyMessageLabel, v81, 0LL);
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
  BonusSelectSummonPartyServantListViewManager__SetFilterButtonImage(this, v82);
  BonusSelectSummonPartyServantListViewManager__UpdateAscendingOrderBtnSprite(this, v83);
}


void __fastcall BonusSelectSummonPartyServantListViewManager__DeleteContinueData(const MethodInfo *method)
{
  __int64 v1; // x1
  BonusSelectSummonPartyServantListViewManager_c *v2; // x0
  ListViewSort_o *servantSortInfo; // x0
  ListViewSort_o *servantSortInfoExtra1; // x0
  ListViewSort_o *servantSortInfoExtra2; // x0

  if ( (byte_40FB114 & 1) == 0 )
  {
    sub_B16FFC(&BonusSelectSummonPartyServantListViewManager_TypeInfo, v1);
    byte_40FB114 = 1;
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
        (servantSortInfoExtra1 = BonusSelectSummonPartyServantListViewManager_TypeInfo->static_fields->servantSortInfoExtra1) == 0LL)
    || (ListViewSort__DeleteContinueData(servantSortInfoExtra1, 0LL),
        (servantSortInfoExtra2 = BonusSelectSummonPartyServantListViewManager_TypeInfo->static_fields->servantSortInfoExtra2) == 0LL) )
  {
    sub_B170D4();
  }
  ListViewSort__DeleteContinueData(servantSortInfoExtra2, 0LL);
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
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x3
  __int64 v14; // x4
  System_Action_o *v15; // x20

  if ( (byte_40FB121 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, isDecide);
    sub_B16FFC(&Method_ListViewSort_Save__, v5);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    byte_40FB121 = 1;
  }
  if ( isDecide )
  {
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
    BonusSelectSummonPartyServantListViewManager__SetFilterButtonImage(this, v7);
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  sort = (Il2CppObject *)this->fields.sort;
  v10 = (CommonUI_o *)Instance;
  v15 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v11, v12, v13, v14);
  System_Action___ctor(v15, sort, Method_ListViewSort_Save__, 0LL);
  if ( !v10 )
    sub_B170D4();
  CommonUI__CloseServantFilterSelectMenu(v10, v15, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BonusSelectSummonPartyServantListViewManager__EndShowServantStatusDialog(
        BonusSelectSummonPartyServantListViewManager_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  UIProgressBar_o *scrollBar; // x0
  UIProgressBar_o *v5; // x0
  CommonUI_o *Instance; // x0

  if ( (byte_40FB11C & 1) == 0 )
  {
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, isDecide);
    byte_40FB11C = 1;
  }
  scrollBar = (UIProgressBar_o *)this->fields.scrollBar;
  if ( !scrollBar )
    goto LABEL_9;
  if ( vabds_f32(this->fields.tmpScrollBarValueForLongPush, UIProgressBar__get_value(scrollBar, 0LL)) > this->fields.SCROLLBAR_UNEXPECTED_AUTOMOVE_DIFF_THRESHOLD )
  {
    v5 = (UIProgressBar_o *)this->fields.scrollBar;
    if ( !v5 )
      goto LABEL_9;
    UIProgressBar__set_value(v5, this->fields.tmpScrollBarValueForLongPush, 0LL);
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
LABEL_9:
    sub_B170D4();
  CommonUI__CloseServantStatusDialog(Instance, 0LL, 0LL);
}


System_String_o *__fastcall BonusSelectSummonPartyServantListViewManager__GetScaleButtonSpriteName(
        BonusSelectSummonPartyServantListViewManager_o *this,
        const MethodInfo *method)
{
  ListViewSort_o *sort; // x0

  sort = this->fields.sort;
  if ( !sort )
    sub_B170D4();
  return ListViewSort__GetScaleKindSpriteName(sort, this->fields.scaleType, 0LL);
}


void __fastcall BonusSelectSummonPartyServantListViewManager__InitLoad(const MethodInfo *method)
{
  __int64 v1; // x1
  BonusSelectSummonPartyServantListViewManager_c *v2; // x0
  ListViewSort_o *servantSortInfo; // x0
  ListViewSort_o *servantSortInfoExtra1; // x0
  ListViewSort_o *servantSortInfoExtra2; // x0

  if ( (byte_40FB115 & 1) == 0 )
  {
    sub_B16FFC(&BonusSelectSummonPartyServantListViewManager_TypeInfo, v1);
    byte_40FB115 = 1;
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
        (servantSortInfoExtra1 = BonusSelectSummonPartyServantListViewManager_TypeInfo->static_fields->servantSortInfoExtra1) == 0LL)
    || (ListViewSort__InitLoad(servantSortInfoExtra1, 0LL),
        (servantSortInfoExtra2 = BonusSelectSummonPartyServantListViewManager_TypeInfo->static_fields->servantSortInfoExtra2) == 0LL) )
  {
    sub_B170D4();
  }
  ListViewSort__InitLoad(servantSortInfoExtra2, 0LL);
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
  struct BonusSelectSummonPartyServantSelectMenu_o *partyServantSelectMenu; // x8
  struct BonusSelectSummonPartyOrganizationListViewItem_o *organizationItem; // x8
  GachaBonusSelectEntity_o *gachaBonusSelectEntity; // x0
  int32_t v11; // w20
  struct BonusSelectSummonPartyServantSelectMenu_o *v12; // x8
  struct BonusSelectSummonPartyOrganizationListViewItem_o *v13; // x8
  GachaBonusSelectEntity_o *v14; // x0
  WebViewManager_o *Instance; // x0
  ListViewSort_o *sort; // x21
  CommonUI_o *v17; // x22
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x3
  __int64 v21; // x4
  ServantFilterSelectMenu_CallbackFunc_o *v22; // x23

  if ( (byte_40FB120 & 1) == 0 )
  {
    sub_B16FFC(&Method_BonusSelectSummonPartyServantListViewManager_EndSelectFilterKind__, method);
    sub_B16FFC(&Method_BonusSelectSummonPartyServantListViewManager_OnClickFilterKind__, v3);
    sub_B16FFC(&ServantFilterSelectMenu_CallbackFunc_TypeInfo, v4);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    byte_40FB120 = 1;
  }
  if ( this->fields.isInput )
  {
    v6 = Method_BonusSelectSummonPartyServantListViewManager_OnClickFilterKind__;
    if ( (*((_BYTE *)Method_BonusSelectSummonPartyServantListViewManager_OnClickFilterKind__ + 75) & 2) != 0 )
      v6 = (_QWORD *)sub_B17004(Method_BonusSelectSummonPartyServantListViewManager_OnClickFilterKind__);
    v7 = (System_Reflection_MethodBase_o *)sub_B16FE0(v6, v6[3]);
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
          if ( GachaBonusSelectEntity__GetClassId(gachaBonusSelectEntity, 1001, 0LL) == 1004 )
          {
            v11 = 13;
          }
          else
          {
            v12 = this->fields.partyServantSelectMenu;
            if ( !v12 )
              goto LABEL_20;
            v13 = v12->fields.organizationItem;
            if ( !v13 )
              goto LABEL_20;
            v14 = v13->fields.gachaBonusSelectEntity;
            if ( !v14 )
              goto LABEL_20;
            if ( GachaBonusSelectEntity__GetClassId(v14, 1001, 0LL) == 1005 )
              v11 = 14;
            else
              v11 = 12;
          }
          Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          sort = this->fields.sort;
          v17 = (CommonUI_o *)Instance;
          v22 = (ServantFilterSelectMenu_CallbackFunc_o *)sub_B170CC(
                                                            ServantFilterSelectMenu_CallbackFunc_TypeInfo,
                                                            v18,
                                                            v19,
                                                            v20,
                                                            v21);
          ServantFilterSelectMenu_CallbackFunc___ctor(
            v22,
            (Il2CppObject *)this,
            Method_BonusSelectSummonPartyServantListViewManager_EndSelectFilterKind__,
            0LL);
          if ( v17 )
          {
            CommonUI__OpenServantFilterSelectMenu(v17, v11, sort, v22, -1, 0LL);
            return;
          }
        }
      }
    }
LABEL_20:
    sub_B170D4();
  }
}


void __fastcall BonusSelectSummonPartyServantListViewManager__OnClickSelectListView(
        BonusSelectSummonPartyServantListViewManager_o *this,
        BonusSelectSummonPartyServantListViewObject_o *obj,
        const MethodInfo *method)
{
  BonusSelectSummonPartyServantListViewItem_o *Item; // x0
  const MethodInfo *v6; // x1
  _QWORD *v7; // x0
  System_Reflection_MethodBase_o *v8; // x0
  BonusSelectSummonPartyServantSelectMenu_o *partyServantSelectMenu; // x20
  const MethodInfo *v10; // x1
  BonusSelectSummonPartyServantListViewItem_o *v11; // x0
  const MethodInfo *v12; // x2
  BonusSelectSummonPartyServantListViewItem_o *v13; // x0
  struct ServantEntity_o *servantEntity; // x8
  struct BonusSelectSummonPartyOrganizationListViewItem_o *baseItem; // x9
  _QWORD *v16; // x0
  System_Reflection_MethodBase_o *v17; // x0

  if ( (byte_40FB11A & 1) == 0 )
  {
    sub_B16FFC(&Method_BonusSelectSummonPartyServantListViewManager_OnClickSelectListView__, obj);
    byte_40FB11A = 1;
  }
  if ( !obj )
    goto LABEL_17;
  Item = BonusSelectSummonPartyServantListViewObject__GetItem(obj, (const MethodInfo *)obj);
  if ( !Item )
    goto LABEL_17;
  if ( Item->fields.isPossibleSelect )
    goto LABEL_6;
  v13 = BonusSelectSummonPartyServantListViewObject__GetItem(obj, v6);
  if ( !v13 )
    goto LABEL_17;
  servantEntity = v13->fields.servantEntity;
  if ( servantEntity )
  {
    baseItem = v13->fields.baseItem;
    if ( baseItem )
    {
      if ( servantEntity == baseItem->fields.servantEntity )
      {
LABEL_6:
        v7 = Method_BonusSelectSummonPartyServantListViewManager_OnClickSelectListView__;
        if ( (*((_BYTE *)Method_BonusSelectSummonPartyServantListViewManager_OnClickSelectListView__ + 75) & 2) != 0 )
          v7 = (_QWORD *)sub_B17004(Method_BonusSelectSummonPartyServantListViewManager_OnClickSelectListView__);
        v8 = (System_Reflection_MethodBase_o *)sub_B16FE0(v7, v7[3]);
        OverwriteAssetSoundName__PlaySystemSe(v8, 0, 0LL);
        partyServantSelectMenu = this->fields.partyServantSelectMenu;
        v11 = BonusSelectSummonPartyServantListViewObject__GetItem(obj, v10);
        if ( partyServantSelectMenu )
        {
          BonusSelectSummonPartyServantSelectMenu__Close(partyServantSelectMenu, v11, v12);
          return;
        }
LABEL_17:
        sub_B170D4();
      }
    }
  }
  v16 = Method_BonusSelectSummonPartyServantListViewManager_OnClickSelectListView__;
  if ( (*((_BYTE *)Method_BonusSelectSummonPartyServantListViewManager_OnClickSelectListView__ + 75) & 2) != 0 )
    v16 = (_QWORD *)sub_B17004(Method_BonusSelectSummonPartyServantListViewManager_OnClickSelectListView__);
  v17 = (System_Reflection_MethodBase_o *)sub_B16FE0(v16, v16[3]);
  OverwriteAssetSoundName__PlaySystemSe(v17, 2, 0LL);
}


void __fastcall BonusSelectSummonPartyServantListViewManager__OnClickSortAscendingOrder(
        BonusSelectSummonPartyServantListViewManager_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  BonusSelectSummonPartyServantListViewManager_o *v5; // x0
  const MethodInfo *v6; // x2
  struct ListViewSort_o *sort; // x8
  const MethodInfo *v8; // x1

  if ( (byte_40FB124 & 1) == 0 )
  {
    sub_B16FFC(&Method_BonusSelectSummonPartyServantListViewManager_OnClickSortAscendingOrder__, method);
    byte_40FB124 = 1;
  }
  if ( this->fields.isInput )
  {
    v3 = Method_BonusSelectSummonPartyServantListViewManager_OnClickSortAscendingOrder__;
    if ( (*((_BYTE *)Method_BonusSelectSummonPartyServantListViewManager_OnClickSortAscendingOrder__ + 75) & 2) != 0 )
      v3 = (_QWORD *)sub_B17004(Method_BonusSelectSummonPartyServantListViewManager_OnClickSortAscendingOrder__);
    v4 = (System_Reflection_MethodBase_o *)sub_B16FE0(v3, v3[3]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
    sort = this->fields.sort;
    if ( !sort )
      sub_B170D4();
    BonusSelectSummonPartyServantListViewManager__SetAndSaveSortAscendingOrder(v5, !sort->fields.isAscendingOrder, v6);
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
    BonusSelectSummonPartyServantListViewManager__UpdateAscendingOrderBtnSprite(this, v8);
  }
}


void __fastcall BonusSelectSummonPartyServantListViewManager__OnClickSortKind(
        BonusSelectSummonPartyServantListViewManager_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  BonusSelectSummonPartyServantListViewManager_o *v5; // x0
  const MethodInfo *v6; // x2
  struct ListViewSort_o *sort; // x8
  int32_t v8; // w1

  if ( (byte_40FB122 & 1) == 0 )
  {
    sub_B16FFC(&Method_BonusSelectSummonPartyServantListViewManager_OnClickSortKind__, method);
    byte_40FB122 = 1;
  }
  if ( this->fields.isInput )
  {
    v3 = Method_BonusSelectSummonPartyServantListViewManager_OnClickSortKind__;
    if ( (*((_BYTE *)Method_BonusSelectSummonPartyServantListViewManager_OnClickSortKind__ + 75) & 2) != 0 )
      v3 = (_QWORD *)sub_B17004(Method_BonusSelectSummonPartyServantListViewManager_OnClickSortKind__);
    v4 = (System_Reflection_MethodBase_o *)sub_B16FE0(v3, v3[3]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
    sort = this->fields.sort;
    if ( !sort )
      sub_B170D4();
    if ( sort->fields.sortKind == 27 )
      v8 = 4;
    else
      v8 = 27;
    BonusSelectSummonPartyServantListViewManager__SetAndSaveSortKind(v5, v8, v6);
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
  WebViewManager_o *Instance; // x0
  const MethodInfo *v14; // x1
  CommonUI_o *v15; // x21
  BonusSelectSummonPartyServantListViewItem_o *Item; // x0
  struct ServantEntity_o *servantEntity; // x8
  __int64 v18; // x20
  __int64 v19; // x22
  int32_t v20; // w22
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x3
  __int64 v24; // x4
  ServantLeaderInfo_o *v25; // x20
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x3
  __int64 v29; // x4
  ServantStatusDialog_EndDelegate_o *v30; // x22
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v31; // 0:x0.16

  if ( (byte_40FB11B & 1) == 0 )
  {
    sub_B16FFC(&Method_BonusSelectSummonPartyServantListViewManager_EndShowServantStatusDialog__, obj);
    sub_B16FFC(&Method_BonusSelectSummonPartyServantListViewManager_OnLongPushListView__, v5);
    sub_B16FFC(&ServantStatusDialog_EndDelegate_TypeInfo, v6);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v7);
    sub_B16FFC(&ServantLeaderInfo_TypeInfo, v8);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v9);
    byte_40FB11B = 1;
  }
  scrollBar = (UIProgressBar_o *)this->fields.scrollBar;
  if ( !scrollBar )
    goto LABEL_14;
  this->fields.tmpScrollBarValueForLongPush = UIProgressBar__get_value(scrollBar, 0LL);
  v11 = Method_BonusSelectSummonPartyServantListViewManager_OnLongPushListView__;
  if ( (*((_BYTE *)Method_BonusSelectSummonPartyServantListViewManager_OnLongPushListView__ + 75) & 2) != 0 )
    v11 = (_QWORD *)sub_B17004(Method_BonusSelectSummonPartyServantListViewManager_OnLongPushListView__);
  v12 = (System_Reflection_MethodBase_o *)sub_B16FE0(v11, v11[3]);
  OverwriteAssetSoundName__PlaySystemSe(v12, 0, 0LL);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !obj )
    goto LABEL_14;
  v15 = (CommonUI_o *)Instance;
  Item = BonusSelectSummonPartyServantListViewObject__GetItem(obj, v14);
  if ( !Item )
    goto LABEL_14;
  servantEntity = Item->fields.servantEntity;
  if ( !servantEntity )
    goto LABEL_14;
  v19 = *(_QWORD *)&servantEntity->fields.id.fields.currentCryptoKey;
  v18 = *(_QWORD *)&servantEntity->fields.id.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v31.fields.currentCryptoKey = v19;
  *(_QWORD *)&v31.fields.fakeValue = v18;
  v20 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v31, 0LL);
  v25 = (ServantLeaderInfo_o *)sub_B170CC(ServantLeaderInfo_TypeInfo, v21, v22, v23, v24);
  ServantLeaderInfo___ctor_29610580(v25, v20, 0, 1, 0LL);
  v30 = (ServantStatusDialog_EndDelegate_o *)sub_B170CC(ServantStatusDialog_EndDelegate_TypeInfo, v26, v27, v28, v29);
  ServantStatusDialog_EndDelegate___ctor(
    v30,
    (Il2CppObject *)this,
    Method_BonusSelectSummonPartyServantListViewManager_EndShowServantStatusDialog__,
    0LL);
  if ( !v15 )
LABEL_14:
    sub_B170D4();
  CommonUI__OpenServantStatusDialog_18250312(v15, 7, v25, v30, 0LL);
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
  const MethodInfo *v9; // x2
  System_Collections_Generic_List_Enumerator_T__o v10; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_40FB117 & 1) == 0 )
  {
    sub_B16FFC(
      &Method_System_Collections_Generic_List_Enumerator_BonusSelectSummonPartyServantListViewObject__Dispose__,
      *(_QWORD *)&mode);
    sub_B16FFC(
      &Method_System_Collections_Generic_List_Enumerator_BonusSelectSummonPartyServantListViewObject__MoveNext__,
      v5);
    sub_B16FFC(
      &Method_System_Collections_Generic_List_Enumerator_BonusSelectSummonPartyServantListViewObject__get_Current__,
      v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_BonusSelectSummonPartyServantListViewObject__GetEnumerator__, v7);
    byte_40FB117 = 1;
  }
  memset(&v10, 0, sizeof(v10));
  ObjectList = BonusSelectSummonPartyServantListViewManager__get_ObjectList(this, *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_B170D4();
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v10,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)ObjectList,
    (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_BonusSelectSummonPartyServantListViewObject__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v10,
            (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_BonusSelectSummonPartyServantListViewObject__MoveNext__) )
  {
    if ( !v10.fields.current )
      sub_B170D4();
    BonusSelectSummonPartyServantListViewObject__Init(
      (BonusSelectSummonPartyServantListViewObject_o *)v10.fields.current,
      mode,
      v9);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v10,
    (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_BonusSelectSummonPartyServantListViewObject__Dispose__);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BonusSelectSummonPartyServantListViewManager__SetAndSaveIconScaleType(
        BonusSelectSummonPartyServantListViewManager_o *this,
        int32_t scaleType,
        const MethodInfo *method)
{
  BonusSelectSummonPartyServantListViewManager_c *v4; // x0
  struct ListViewSort_o *servantSortInfo; // x8
  struct ListViewSort_o *servantSortInfoExtra1; // x8
  struct ListViewSort_o *servantSortInfoExtra2; // x8
  ListViewSort_o *v8; // x0
  ListViewSort_o *v9; // x0
  ListViewSort_o *v10; // x0

  if ( (byte_40FB11E & 1) == 0 )
  {
    sub_B16FFC(&BonusSelectSummonPartyServantListViewManager_TypeInfo, *(_QWORD *)&scaleType);
    byte_40FB11E = 1;
  }
  v4 = BonusSelectSummonPartyServantListViewManager_TypeInfo;
  if ( (BYTE3(BonusSelectSummonPartyServantListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BonusSelectSummonPartyServantListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BonusSelectSummonPartyServantListViewManager_TypeInfo);
    v4 = BonusSelectSummonPartyServantListViewManager_TypeInfo;
  }
  servantSortInfo = v4->static_fields->servantSortInfo;
  if ( !servantSortInfo )
    goto LABEL_13;
  servantSortInfo->fields.iconScaleKind = scaleType;
  servantSortInfoExtra1 = v4->static_fields->servantSortInfoExtra1;
  if ( !servantSortInfoExtra1 )
    goto LABEL_13;
  servantSortInfoExtra1->fields.iconScaleKind = scaleType;
  servantSortInfoExtra2 = v4->static_fields->servantSortInfoExtra2;
  if ( !servantSortInfoExtra2
    || (servantSortInfoExtra2->fields.iconScaleKind = scaleType, (v8 = v4->static_fields->servantSortInfo) == 0LL)
    || (ListViewSort__SaveIconScaleKind(v8, 0LL),
        (v9 = BonusSelectSummonPartyServantListViewManager_TypeInfo->static_fields->servantSortInfoExtra1) == 0LL)
    || (ListViewSort__SaveIconScaleKind(v9, 0LL),
        (v10 = BonusSelectSummonPartyServantListViewManager_TypeInfo->static_fields->servantSortInfoExtra2) == 0LL) )
  {
LABEL_13:
    sub_B170D4();
  }
  ListViewSort__SaveIconScaleKind(v10, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BonusSelectSummonPartyServantListViewManager__SetAndSaveSortAscendingOrder(
        BonusSelectSummonPartyServantListViewManager_o *this,
        bool isAscendingOrder,
        const MethodInfo *method)
{
  BonusSelectSummonPartyServantListViewManager_c *v4; // x0
  struct ListViewSort_o *servantSortInfo; // x9
  bool v6; // w8
  struct ListViewSort_o *servantSortInfoExtra1; // x9
  struct ListViewSort_o *servantSortInfoExtra2; // x9
  ListViewSort_o *v9; // x0
  ListViewSort_o *v10; // x0
  ListViewSort_o *v11; // x0

  if ( (byte_40FB125 & 1) == 0 )
  {
    sub_B16FFC(&BonusSelectSummonPartyServantListViewManager_TypeInfo, isAscendingOrder);
    byte_40FB125 = 1;
  }
  v4 = BonusSelectSummonPartyServantListViewManager_TypeInfo;
  if ( (BYTE3(BonusSelectSummonPartyServantListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BonusSelectSummonPartyServantListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BonusSelectSummonPartyServantListViewManager_TypeInfo);
    v4 = BonusSelectSummonPartyServantListViewManager_TypeInfo;
  }
  servantSortInfo = v4->static_fields->servantSortInfo;
  if ( !servantSortInfo )
    goto LABEL_13;
  v6 = isAscendingOrder;
  servantSortInfo->fields.isAscendingOrder = isAscendingOrder;
  servantSortInfoExtra1 = v4->static_fields->servantSortInfoExtra1;
  if ( !servantSortInfoExtra1 )
    goto LABEL_13;
  servantSortInfoExtra1->fields.isAscendingOrder = v6;
  servantSortInfoExtra2 = v4->static_fields->servantSortInfoExtra2;
  if ( !servantSortInfoExtra2
    || (servantSortInfoExtra2->fields.isAscendingOrder = v6, (v9 = v4->static_fields->servantSortInfo) == 0LL)
    || (ListViewSort__SaveIsAscendingOrder(v9, 0LL),
        (v10 = BonusSelectSummonPartyServantListViewManager_TypeInfo->static_fields->servantSortInfoExtra1) == 0LL)
    || (ListViewSort__SaveIsAscendingOrder(v10, 0LL),
        (v11 = BonusSelectSummonPartyServantListViewManager_TypeInfo->static_fields->servantSortInfoExtra2) == 0LL) )
  {
LABEL_13:
    sub_B170D4();
  }
  ListViewSort__SaveIsAscendingOrder(v11, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BonusSelectSummonPartyServantListViewManager__SetAndSaveSortKind(
        BonusSelectSummonPartyServantListViewManager_o *this,
        int32_t sortKind,
        const MethodInfo *method)
{
  BonusSelectSummonPartyServantListViewManager_c *v4; // x0
  struct ListViewSort_o *servantSortInfo; // x8
  struct ListViewSort_o *servantSortInfoExtra1; // x8
  struct ListViewSort_o *servantSortInfoExtra2; // x8
  ListViewSort_o *v8; // x0
  ListViewSort_o *v9; // x0
  ListViewSort_o *v10; // x0

  if ( (byte_40FB123 & 1) == 0 )
  {
    sub_B16FFC(&BonusSelectSummonPartyServantListViewManager_TypeInfo, *(_QWORD *)&sortKind);
    byte_40FB123 = 1;
  }
  v4 = BonusSelectSummonPartyServantListViewManager_TypeInfo;
  if ( (BYTE3(BonusSelectSummonPartyServantListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BonusSelectSummonPartyServantListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BonusSelectSummonPartyServantListViewManager_TypeInfo);
    v4 = BonusSelectSummonPartyServantListViewManager_TypeInfo;
  }
  servantSortInfo = v4->static_fields->servantSortInfo;
  if ( !servantSortInfo )
    goto LABEL_13;
  servantSortInfo->fields.sortKind = sortKind;
  servantSortInfoExtra1 = v4->static_fields->servantSortInfoExtra1;
  if ( !servantSortInfoExtra1 )
    goto LABEL_13;
  servantSortInfoExtra1->fields.sortKind = sortKind;
  servantSortInfoExtra2 = v4->static_fields->servantSortInfoExtra2;
  if ( !servantSortInfoExtra2
    || (servantSortInfoExtra2->fields.sortKind = sortKind, (v8 = v4->static_fields->servantSortInfo) == 0LL)
    || (ListViewSort__SaveSortKind(v8, 0LL),
        (v9 = BonusSelectSummonPartyServantListViewManager_TypeInfo->static_fields->servantSortInfoExtra1) == 0LL)
    || (ListViewSort__SaveSortKind(v9, 0LL),
        (v10 = BonusSelectSummonPartyServantListViewManager_TypeInfo->static_fields->servantSortInfoExtra2) == 0LL) )
  {
LABEL_13:
    sub_B170D4();
  }
  ListViewSort__SaveSortKind(v10, 0LL);
}


void __fastcall BonusSelectSummonPartyServantListViewManager__SetFilterButtonImage(
        BonusSelectSummonPartyServantListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  struct BonusSelectSummonPartyServantSelectMenu_o *partyServantSelectMenu; // x8
  struct BonusSelectSummonPartyOrganizationListViewItem_o *organizationItem; // x8
  GachaBonusSelectEntity_o *gachaBonusSelectEntity; // x0
  int32_t v7; // w1
  struct BonusSelectSummonPartyServantSelectMenu_o *v8; // x8
  struct BonusSelectSummonPartyOrganizationListViewItem_o *v9; // x8
  GachaBonusSelectEntity_o *v10; // x0
  ListViewSort_o *sort; // x0
  UISprite_o *filterSprite; // x19
  bool v13; // w0
  System_String_o **v14; // x8

  if ( (byte_40FB118 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_16927, method);
    sub_B16FFC(&StringLiteral_16926, v3);
    byte_40FB118 = 1;
  }
  partyServantSelectMenu = this->fields.partyServantSelectMenu;
  if ( !partyServantSelectMenu )
    goto LABEL_19;
  organizationItem = partyServantSelectMenu->fields.organizationItem;
  if ( !organizationItem )
    goto LABEL_19;
  gachaBonusSelectEntity = organizationItem->fields.gachaBonusSelectEntity;
  if ( !gachaBonusSelectEntity )
    goto LABEL_19;
  if ( GachaBonusSelectEntity__GetClassId(gachaBonusSelectEntity, 1001, 0LL) == 1004 )
  {
    v7 = 13;
    goto LABEL_14;
  }
  v8 = this->fields.partyServantSelectMenu;
  if ( !v8 || (v9 = v8->fields.organizationItem) == 0LL || (v10 = v9->fields.gachaBonusSelectEntity) == 0LL )
LABEL_19:
    sub_B170D4();
  if ( GachaBonusSelectEntity__GetClassId(v10, 1001, 0LL) == 1005 )
    v7 = 14;
  else
    v7 = 12;
LABEL_14:
  sort = this->fields.sort;
  if ( !sort )
    goto LABEL_19;
  filterSprite = this->fields.filterSprite;
  v13 = ListViewSort__CheckBonusSelectSummonFilterDefaultAll(sort, v7, -1, 0LL);
  if ( !filterSprite )
    goto LABEL_19;
  v14 = (System_String_o **)&StringLiteral_16926;
  if ( !v13 )
    v14 = (System_String_o **)&StringLiteral_16927;
  UISprite__set_spriteName(filterSprite, *v14, 0LL);
}


void __fastcall BonusSelectSummonPartyServantListViewManager__SetMode(
        BonusSelectSummonPartyServantListViewManager_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  UnityEngine_Behaviour_o *scrollView; // x0
  const MethodInfo *v6; // x2
  UnityEngine_Behaviour_o *v7; // x0
  UIScrollView_o *v8; // x0
  int32_t v9; // w1

  ListViewManager__set_IsInput((ListViewManager_o *)this, mode == 2, 0LL);
  scrollView = (UnityEngine_Behaviour_o *)this->fields.scrollView;
  if ( !scrollView )
    goto LABEL_12;
  if ( UnityEngine_Behaviour__get_enabled(scrollView, 0LL) )
    goto LABEL_6;
  v7 = (UnityEngine_Behaviour_o *)this->fields.scrollView;
  if ( !v7 || (UnityEngine_Behaviour__set_enabled(v7, 1, 0LL), (v8 = this->fields.scrollView) == 0LL) )
LABEL_12:
    sub_B170D4();
  UIScrollView__UpdatePosition(v8, 0LL);
LABEL_6:
  switch ( mode )
  {
    case 1:
      v9 = 2;
      goto LABEL_10;
    case 2:
      v9 = 3;
      goto LABEL_10;
    case 3:
      v9 = 4;
LABEL_10:
      BonusSelectSummonPartyServantListViewManager__RequestListObject(this, v9, v6);
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
  __int64 v6; // x10
  int32_t v7; // w1

  if ( (byte_40FB11F & 1) == 0 )
  {
    sub_B16FFC(&BonusSelectSummonPartyServantListViewObject_TypeInfo, obj);
    byte_40FB11F = 1;
  }
  if ( !obj
    || (v6 = *(&BonusSelectSummonPartyServantListViewObject_TypeInfo->_2.bitflags2 + 1),
        *(&obj->klass->_2.bitflags2 + 1) < (unsigned int)v6)
    || (BonusSelectSummonPartyServantListViewObject_c *)obj->klass->_2.typeHierarchy[v6 - 1] != BonusSelectSummonPartyServantListViewObject_TypeInfo )
  {
    sub_B170D4();
  }
  if ( this->fields.isInput )
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
  __int64 v3; // x1
  struct ListViewSort_o *sort; // x8
  UISprite_o *sortExplanationSprite; // x0
  System_String_o **v6; // x8

  if ( (byte_40FB119 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_17038, method);
    sub_B16FFC(&StringLiteral_16985, v3);
    byte_40FB119 = 1;
  }
  sort = this->fields.sort;
  if ( !sort || (sortExplanationSprite = this->fields.sortExplanationSprite) == 0LL )
    sub_B170D4();
  if ( sort->fields.isAscendingOrder )
    v6 = (System_String_o **)&StringLiteral_17038;
  else
    v6 = (System_String_o **)&StringLiteral_16985;
  UISprite__set_spriteName(sortExplanationSprite, *v6, 0LL);
}


System_Collections_Generic_List_BonusSelectSummonPartyServantListViewObject__o *__fastcall BonusSelectSummonPartyServantListViewManager__get_ObjectList(
        BonusSelectSummonPartyServantListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v14; // x19
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  Il2CppObject *current; // x20
  EventMissionProgressRequest_Argument_ProgressData_o *Component_srcLineSprite; // x1
  System_Collections_Generic_List_Enumerator_T__o v19; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v20; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_40FB126 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v7);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_BonusSelectSummonPartyServantListViewObject___, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_BonusSelectSummonPartyServantListViewObject__Add__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_BonusSelectSummonPartyServantListViewObject___ctor__, v11);
    sub_B16FFC(&System_Collections_Generic_List_BonusSelectSummonPartyServantListViewObject__TypeInfo, v12);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v13);
    byte_40FB126 = 1;
  }
  memset(&v20, 0, sizeof(v20));
  v14 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_BonusSelectSummonPartyServantListViewObject__TypeInfo,
                                                                                                  method,
                                                                                                  v2,
                                                                                                  v3,
                                                                                                  v4);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v14,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_BonusSelectSummonPartyServantListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_B170D4();
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v19,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)objectList,
    (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v20 = v19;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v20,
            (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v20.fields.current;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL) )
    {
      if ( !current )
        sub_B170D4();
      Component_srcLineSprite = (EventMissionProgressRequest_Argument_ProgressData_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                                         (UnityEngine_GameObject_o *)current,
                                                                                         (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_BonusSelectSummonPartyServantListViewObject___);
      if ( !v14 )
        sub_B170D4();
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v14,
        Component_srcLineSprite,
        (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_BonusSelectSummonPartyServantListViewObject__Add__);
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v20,
    (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_BonusSelectSummonPartyServantListViewObject__o *)v14;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BonusSelectSummonPartyServantListViewManager_CallbackFunc___ctor(
        BonusSelectSummonPartyServantListViewManager_CallbackFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  struct BattleServantClassBoardSkillEffectListComponent_o *v8; // x8
  BattleServantConfConponent_o *p_method; // x0

  v8 = **(struct BattleServantClassBoardSkillEffectListComponent_o ***)&method;
  *(_QWORD *)&this->fields.method = object;
  p_method = (BattleServantConfConponent_o *)&this->fields.method;
  p_method->monitor = *(void **)&method;
  p_method[-1].fields.classBoardSkillObj = v8;
  sub_B16F98(
    p_method,
    (System_Int32_array **)object,
    *(System_String_array ***)&method,
    (System_String_array **)a4,
    v4,
    v5,
    v6,
    v7);
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
  if ( (byte_40F709C & 1) == 0 )
  {
    sub_B16FFC(&int_TypeInfo, *(_QWORD *)&kind);
    sub_B16FFC(&BonusSelectSummonPartyServantListViewManager_ResultKind_TypeInfo, v9);
    byte_40F709C = 1;
  }
  v11[2] = 0LL;
  v11[0] = j_il2cpp_value_box_0(BonusSelectSummonPartyServantListViewManager_ResultKind_TypeInfo, &v13);
  v11[1] = j_il2cpp_value_box_0(int_TypeInfo, &v12);
  return (System_IAsyncResult_o *)sub_B16FA0(this, v11, callback, object);
}


void __fastcall BonusSelectSummonPartyServantListViewManager_CallbackFunc__EndInvoke(
        BonusSelectSummonPartyServantListViewManager_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B16FA4(result, 0LL, method);
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
        sub_B170B8(*(_QWORD *)&v20->fields.extra_arg, *(_QWORD *)&kind, *(_QWORD *)&result);
      if ( (sub_B1702C(v22) & 1) == 0 )
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
      v24 = sub_B17024(v22);
      v25 = sub_B17428(v22);
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
            v18 = sub_AAFEF8(v21, v28, v29);
          }
          v17 = *(_QWORD *)(v18 + 8);
        }
        else
        {
          v17 = *(_QWORD *)(*v21 + 16LL * *(unsigned __int16 *)(v22 + 72) + 320);
        }
        v19 = (void (__fastcall **)(__int64 *, _QWORD, _QWORD, _QWORD))sub_B170AC(v17, v22);
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
            v16 = sub_AAFEF8(v21, class_0, v10);
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
  struct ServantEntity_o *servantEntity; // x8
  __int64 v6; // x20
  __int64 v7; // x21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v9; // 0:x0.16

  if ( (byte_40F709B & 1) == 0 )
  {
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, *(_QWORD *)&id);
    byte_40F709B = 1;
  }
  servantEntity = this->fields.servantEntity;
  if ( !servantEntity )
    sub_B170D4();
  v7 = *(_QWORD *)&servantEntity->fields.id.fields.currentCryptoKey;
  v6 = *(_QWORD *)&servantEntity->fields.id.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v9.fields.currentCryptoKey = v7;
  *(_QWORD *)&v9.fields.fakeValue = v6;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v9, 0LL) == id;
}