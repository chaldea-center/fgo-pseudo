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
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  System_String_o *SORT_SAVE_KEY; // x19
  ListViewSort_o *v13; // x20
  struct BonusSelectSummonPartyServantListViewManager_StaticFields *static_fields; // x0
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7
  System_String_o *v21; // x19
  ListViewSort_o *v22; // x20
  struct BonusSelectSummonPartyServantListViewManager_StaticFields *v23; // x0
  int64_t v24; // x2
  int32_t v25; // w3
  System_String_o *v26; // x4
  BattleSetupInfo_o *v27; // x5
  FollowerInfo_o *v28; // x6
  PartyListViewItem_o *v29; // x7
  System_String_o *v30; // x19
  ListViewSort_o *v31; // x20
  struct BonusSelectSummonPartyServantListViewManager_StaticFields *v32; // x0
  int64_t v33; // x2
  int32_t v34; // w3
  System_String_o *v35; // x4
  BattleSetupInfo_o *v36; // x5
  FollowerInfo_o *v37; // x6
  PartyListViewItem_o *v38; // x7

  if ( (byte_4B631E0 & 1) == 0 )
  {
    sub_1BE4ACC(&BonusSelectSummonPartyServantListViewManager_TypeInfo, v1);
    sub_1BE4ACC(&ListViewSort_TypeInfo, v8);
    sub_1BE4ACC(&StringLiteral_1410/*"2"*/, v9);
    sub_1BE4ACC(&StringLiteral_3353/*"BonusSelectSummonPartyServant"*/, v10);
    sub_1BE4ACC(&StringLiteral_1262/*"1"*/, v11);
    byte_4B631E0 = 1;
  }
  BonusSelectSummonPartyServantListViewManager_TypeInfo->static_fields->SORT_SAVE_KEY = (struct System_String_o *)StringLiteral_3353/*"BonusSelectSummonPartyServant"*/;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)BonusSelectSummonPartyServantListViewManager_TypeInfo->static_fields,
    StringLiteral_3353/*"BonusSelectSummonPartyServant"*/,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
  SORT_SAVE_KEY = BonusSelectSummonPartyServantListViewManager_TypeInfo->static_fields->SORT_SAVE_KEY;
  v13 = (ListViewSort_o *)sub_1BE4D18(ListViewSort_TypeInfo);
  ListViewSort___ctor_41720260(v13, SORT_SAVE_KEY, 27, 0, 0LL);
  static_fields = BonusSelectSummonPartyServantListViewManager_TypeInfo->static_fields;
  static_fields->servantSortInfo = v13;
  sub_1BE4A70((PartyOrganizationUtility_o *)&static_fields->servantSortInfo, (int64_t)v13, v15, v16, v17, v18, v19, v20);
  v21 = System_String__Concat_62698808(
          BonusSelectSummonPartyServantListViewManager_TypeInfo->static_fields->SORT_SAVE_KEY,
          (System_String_o *)StringLiteral_1262/*"1"*/,
          0LL);
  v22 = (ListViewSort_o *)sub_1BE4D18(ListViewSort_TypeInfo);
  ListViewSort___ctor_41720260(v22, v21, 27, 0, 0LL);
  v23 = BonusSelectSummonPartyServantListViewManager_TypeInfo->static_fields;
  v23->servantSortInfoExtra1 = v22;
  sub_1BE4A70((PartyOrganizationUtility_o *)&v23->servantSortInfoExtra1, (int64_t)v22, v24, v25, v26, v27, v28, v29);
  v30 = System_String__Concat_62698808(
          BonusSelectSummonPartyServantListViewManager_TypeInfo->static_fields->SORT_SAVE_KEY,
          (System_String_o *)StringLiteral_1410/*"2"*/,
          0LL);
  v31 = (ListViewSort_o *)sub_1BE4D18(ListViewSort_TypeInfo);
  ListViewSort___ctor_41720260(v31, v30, 27, 0, 0LL);
  v32 = BonusSelectSummonPartyServantListViewManager_TypeInfo->static_fields;
  v32->servantSortInfoExtra2 = v31;
  sub_1BE4A70((PartyOrganizationUtility_o *)&v32->servantSortInfoExtra2, (int64_t)v31, v33, v34, v35, v36, v37, v38);
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
  __int64 v10; // x1
  __int64 v11; // x1
  unsigned int scaleType; // w8
  int64_t smallSizeSeed; // x1
  BonusSelectSummonPartyServantListViewManager_o *v14; // x0
  int v15; // w8
  PartyOrganizationUtility_o *p_seed; // x0
  __int64 v17; // x1
  const MethodInfo *v18; // x2
  System_Collections_Generic_List_object__o *itemList; // x0
  int32_t v20; // w20
  Il2CppObject *Item; // x0
  ListViewItem_o *v22; // x21
  __int64 methodPtr_low; // x10
  UnityEngine_Object_o *monitor; // x22

  v8 = this;
  if ( (byte_4B631D5 & 1) == 0 )
  {
    sub_1BE4ACC(&BonusSelectSummonPartyServantListViewItem_TypeInfo, method);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v9);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v10);
    this = (BonusSelectSummonPartyServantListViewManager_o *)sub_1BE4ACC(&UnityEngine_Object_TypeInfo, v11);
    byte_4B631D5 = 1;
  }
  scaleType = v8->fields.scaleType;
  if ( scaleType < 2 )
  {
    smallSizeSeed = (int64_t)v8->fields.smallSizeSeed;
    v14 = v8;
    v15 = 2;
  }
  else if ( scaleType == 2 )
  {
    smallSizeSeed = (int64_t)v8->fields.extremelySmallSizeSeed;
    v14 = v8;
    v15 = 3;
  }
  else
  {
    if ( scaleType != 3 )
      goto LABEL_10;
    smallSizeSeed = (int64_t)v8->fields.normalSizeSeed;
    v14 = v8;
    v15 = 1;
  }
  v14->fields.seed = (struct ListViewItemSeed_o *)smallSizeSeed;
  p_seed = (PartyOrganizationUtility_o *)&v14->fields.seed;
  p_seed[1].fields._CachedQuestPhase_k__BackingField = v15;
  sub_1BE4A70(p_seed, smallSizeSeed, (int64_t)v2, v3, v4, v5, v6, v7);
LABEL_10:
  BonusSelectSummonPartyServantListViewManager__SetAndSaveIconScaleType(this, v8->fields.scaleType, v2);
  itemList = (System_Collections_Generic_List_object__o *)v8->fields.itemList;
  if ( !itemList )
LABEL_22:
    sub_1BE4D28(itemList, v17);
  v20 = 0;
  while ( v20 < itemList->fields._size )
  {
    Item = System_Collections_Generic_List_object___get_Item(
             itemList,
             v20,
             (const MethodInfo_35EBF54 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    if ( Item )
    {
      v22 = (ListViewItem_o *)Item;
      methodPtr_low = LOBYTE(BonusSelectSummonPartyServantListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(Item->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low
        && (BonusSelectSummonPartyServantListViewItem_c *)Item->klass->_2.typeHierarchy[methodPtr_low - 1] == BonusSelectSummonPartyServantListViewItem_TypeInfo )
      {
        monitor = (UnityEngine_Object_o *)Item[6].monitor;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( !UnityEngine_Object__op_Equality(monitor, 0LL, 0LL) )
        {
          itemList = (System_Collections_Generic_List_object__o *)v22->fields.viewObject;
          if ( !itemList )
            goto LABEL_22;
          ListViewObject__SetItemSeed((ListViewObject_o *)itemList, v22, v8->fields.seed, 0LL);
        }
      }
    }
    itemList = (System_Collections_Generic_List_object__o *)v8->fields.itemList;
    ++v20;
    if ( !itemList )
      goto LABEL_22;
  }
  BonusSelectSummonPartyServantListViewManager__SetMode(v8, 2, v18);
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
  int32_t ClassId; // w0
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7
  BonusSelectSummonPartyServantListViewManager_c *v26; // x0
  int64_t servantSortInfoExtra2; // x1
  BonusSelectSummonPartyServantListViewManager_c *v28; // x0
  BonusSelectSummonPartyServantListViewManager_c *v29; // x0
  int64_t v30; // x2
  int32_t v31; // w3
  System_String_o *v32; // x4
  BattleSetupInfo_o *v33; // x5
  FollowerInfo_o *v34; // x6
  PartyListViewItem_o *v35; // x7
  struct ListViewSort_o *sort; // x8
  int32_t sortKind; // w9
  unsigned int iconScaleKind; // w9
  int64_t normalSizeSeed; // x1
  Il2CppObject *Master_object; // x22
  Il2CppObject *v41; // x23
  GachaBonusSelectLineupEntity_array *v42; // x8
  __int64 v43; // x28
  il2cpp_array_size_t v44; // w21
  __int64 v45; // x24
  __int64 v46; // x8
  int64_t v47; // x2
  int32_t v48; // w3
  System_String_o *v49; // x4
  BattleSetupInfo_o *v50; // x5
  FollowerInfo_o *v51; // x6
  PartyListViewItem_o *v52; // x7
  System_Func_int__bool__o *v53; // x26
  struct BonusSelectSummonPartyServantSelectMenu_o *partyServantSelectMenu; // x9
  GachaBonusSelectLineupEntity_o *v55; // x26
  ServantEntity_o *v56; // x25
  BonusSelectSummonPartyOrganizationListViewItem_o *organizationItem; // x27
  char v58; // w29
  BonusSelectSummonPartyServantListViewItem_o *v59; // x24
  const MethodInfo *v60; // x6
  int64_t v61; // x2
  int32_t v62; // w3
  System_String_o *v63; // x4
  BattleSetupInfo_o *v64; // x5
  FollowerInfo_o *v65; // x6
  PartyListViewItem_o *v66; // x7
  __int64 v67; // x8
  _QWORD *v68; // x9
  __int64 m_CancellationTokenSource_low; // x10
  __int64 v70; // x8
  UILabel_o *emptyMessageLabel; // x20
  const MethodInfo *v72; // x1
  const MethodInfo *v73; // x1
  GachaBonusSelectLineupEntity_array *gachaBonusSelectLineupEntities; // [xsp+8h] [xbp-68h] BYREF

  v4 = gachaBonusSelectEntity;
  v5 = this;
  if ( (byte_4B631CE & 1) == 0 )
  {
    sub_1BE4ACC(&Method_BasicHelper_Any_int____77161864, gachaBonusSelectEntity);
    sub_1BE4ACC(&BonusSelectSummonPartyServantListViewItem_TypeInfo, v6);
    sub_1BE4ACC(&BonusSelectSummonPartyServantListViewManager_TypeInfo, v7);
    sub_1BE4ACC(&Method_DataManager_GetMaster_GachaBonusSelectLineupMaster___, v8);
    sub_1BE4ACC(&Method_DataManager_GetMaster_GiftMaster___, v9);
    sub_1BE4ACC(&Method_DataManager_GetMaster_ServantMaster___, v10);
    sub_1BE4ACC(&DataManager_TypeInfo, v11);
    sub_1BE4ACC(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v12);
    sub_1BE4ACC(&System_Func_int__bool__TypeInfo, v13);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_ListViewItem__Add__, v14);
    sub_1BE4ACC(&LocalizationManager_TypeInfo, v15);
    sub_1BE4ACC(&Method_BonusSelectSummonPartyServantListViewManager___c__DisplayClass17_0__CreateList_b__0__, v16);
    sub_1BE4ACC(&BonusSelectSummonPartyServantListViewManager___c__DisplayClass17_0_TypeInfo, v17);
    this = (BonusSelectSummonPartyServantListViewManager_o *)sub_1BE4ACC(&StringLiteral_11942/*"SERVANT_SORT_FILTER_RESULT_EMPTY"*/, v18);
    byte_4B631CE = 1;
  }
  gachaBonusSelectLineupEntities = 0LL;
  if ( !v4 )
    goto LABEL_57;
  ClassId = GachaBonusSelectEntity__GetClassId(v4, 1001, 0LL);
  if ( ClassId == 1005 )
  {
    v28 = BonusSelectSummonPartyServantListViewManager_TypeInfo;
    if ( !BonusSelectSummonPartyServantListViewManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BonusSelectSummonPartyServantListViewManager_TypeInfo);
      v28 = BonusSelectSummonPartyServantListViewManager_TypeInfo;
    }
    servantSortInfoExtra2 = (int64_t)v28->static_fields->servantSortInfoExtra2;
  }
  else if ( ClassId == 1004 )
  {
    v26 = BonusSelectSummonPartyServantListViewManager_TypeInfo;
    if ( !BonusSelectSummonPartyServantListViewManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BonusSelectSummonPartyServantListViewManager_TypeInfo);
      v26 = BonusSelectSummonPartyServantListViewManager_TypeInfo;
    }
    servantSortInfoExtra2 = (int64_t)v26->static_fields->servantSortInfoExtra1;
  }
  else
  {
    v29 = BonusSelectSummonPartyServantListViewManager_TypeInfo;
    if ( !BonusSelectSummonPartyServantListViewManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BonusSelectSummonPartyServantListViewManager_TypeInfo);
      v29 = BonusSelectSummonPartyServantListViewManager_TypeInfo;
    }
    servantSortInfoExtra2 = (int64_t)v29->static_fields->servantSortInfo;
  }
  v5->fields.sort = (struct ListViewSort_o *)servantSortInfoExtra2;
  sub_1BE4A70((PartyOrganizationUtility_o *)&v5->fields.sort, servantSortInfoExtra2, v20, v21, v22, v23, v24, v25);
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
    sub_1BE4A70((PartyOrganizationUtility_o *)&v5->fields.seed, normalSizeSeed, v30, v31, v32, v33, v34, v35);
  }
  ListViewManager__CreateList((ListViewManager_o *)v5, 0, 0LL);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F590BC *)Method_DataManager_GetMaster_GiftMaster___);
  v41 = DataManager__GetMaster_object_((const MethodInfo_2F590BC *)Method_DataManager_GetMaster_ServantMaster___);
  this = (BonusSelectSummonPartyServantListViewManager_o *)DataManager__GetMaster_object_((const MethodInfo_2F590BC *)Method_DataManager_GetMaster_GachaBonusSelectLineupMaster___);
  if ( !this )
    goto LABEL_57;
  this = (BonusSelectSummonPartyServantListViewManager_o *)GachaBonusSelectLineupMaster__TryGetEntityList(
                                                             (GachaBonusSelectLineupMaster_o *)this,
                                                             &gachaBonusSelectLineupEntities,
                                                             v4->fields.gachaBonusSelectLineupId,
                                                             0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v42 = gachaBonusSelectLineupEntities;
    if ( !gachaBonusSelectLineupEntities )
      goto LABEL_57;
    v43 = 4LL;
    while ( 1 )
    {
      v44 = v43 - 4;
      if ( (int)v43 - 4 >= (signed int)v42->max_length )
        break;
      v45 = sub_1BE4D18(BonusSelectSummonPartyServantListViewManager___c__DisplayClass17_0_TypeInfo);
      System_Object___ctor((Il2CppObject *)v45, 0LL);
      if ( !gachaBonusSelectLineupEntities )
        goto LABEL_57;
      if ( v44 >= gachaBonusSelectLineupEntities->max_length )
        goto LABEL_58;
      v46 = *((_QWORD *)&gachaBonusSelectLineupEntities->obj.klass + v43);
      if ( !v46 || !Master_object )
        goto LABEL_57;
      this = (BonusSelectSummonPartyServantListViewManager_o *)GiftMaster__getDataById(
                                                                 (GiftMaster_o *)Master_object,
                                                                 *(_DWORD *)(v46 + 24),
                                                                 0LL);
      if ( this )
      {
        if ( !v41 )
          goto LABEL_57;
        this = (BonusSelectSummonPartyServantListViewManager_o *)DataMasterBase_object__object__int___GetEntity(
                                                                   (DataMasterBase_TMaster__TEntity__PKType__o *)v41,
                                                                   (int32_t)this->fields.m_CancellationTokenSource,
                                                                   (const MethodInfo_31FD7C4 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
        gachaBonusSelectEntity = (GachaBonusSelectEntity_o *)this;
        if ( !v45 )
          goto LABEL_57;
      }
      else
      {
        gachaBonusSelectEntity = 0LL;
        if ( !v45 )
          goto LABEL_57;
      }
      *(_QWORD *)(v45 + 16) = gachaBonusSelectEntity;
      sub_1BE4A70(
        (PartyOrganizationUtility_o *)(v45 + 16),
        (int64_t)gachaBonusSelectEntity,
        v47,
        v48,
        v49,
        v50,
        v51,
        v52);
      v53 = (System_Func_int__bool__o *)sub_1BE4D18(System_Func_int__bool__TypeInfo);
      System_Func_int__bool____ctor(
        v53,
        (Il2CppObject *)v45,
        Method_BonusSelectSummonPartyServantListViewManager___c__DisplayClass17_0__CreateList_b__0__,
        0LL);
      this = (BonusSelectSummonPartyServantListViewManager_o *)BasicHelper__Any_int__49561084(
                                                                 notPossibleSvtIdList,
                                                                 (System_Func_T__bool__o *)v53,
                                                                 (const MethodInfo_2F43DFC *)Method_BasicHelper_Any_int____77161864);
      if ( !gachaBonusSelectLineupEntities )
        goto LABEL_57;
      if ( v44 >= gachaBonusSelectLineupEntities->max_length )
LABEL_58:
        sub_1BE4D30(this, gachaBonusSelectEntity);
      partyServantSelectMenu = v5->fields.partyServantSelectMenu;
      if ( partyServantSelectMenu )
      {
        v55 = (GachaBonusSelectLineupEntity_o *)*((_QWORD *)&gachaBonusSelectLineupEntities->obj.klass + v43);
        v56 = *(ServantEntity_o **)(v45 + 16);
        organizationItem = partyServantSelectMenu->fields.organizationItem;
        v58 = (unsigned __int8)this ^ 1;
        v59 = (BonusSelectSummonPartyServantListViewItem_o *)sub_1BE4D18(BonusSelectSummonPartyServantListViewItem_TypeInfo);
        BonusSelectSummonPartyServantListViewItem___ctor(v59, v44, v56, v55, organizationItem, v58 & 1, v60);
        this = (BonusSelectSummonPartyServantListViewManager_o *)v5->fields.itemList;
        if ( this )
        {
          v67 = *(_QWORD *)&this->fields.m_CachedPtr;
          v68 = Method_System_Collections_Generic_List_ListViewItem__Add__;
          ++HIDWORD(this->fields.m_CancellationTokenSource);
          if ( v67 )
          {
            m_CancellationTokenSource_low = SLODWORD(this->fields.m_CancellationTokenSource);
            if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(v67 + 24) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                (System_Collections_Generic_List_object__o *)this,
                (Il2CppObject *)v59,
                *(const MethodInfo_35EC224 **)(*(_QWORD *)(v68[4] + 192LL) + 112LL));
            }
            else
            {
              v70 = v67 + 8 * m_CancellationTokenSource_low;
              LODWORD(this->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
              *(_QWORD *)(v70 + 32) = v59;
              sub_1BE4A70((PartyOrganizationUtility_o *)(v70 + 32), (int64_t)v59, v61, v62, v63, v64, v65, v66);
            }
            v42 = gachaBonusSelectLineupEntities;
            ++v43;
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
                                                             (System_String_o *)StringLiteral_11942/*"SERVANT_SORT_FILTER_RESULT_EMPTY"*/,
                                                             0LL);
  if ( !emptyMessageLabel )
LABEL_57:
    sub_1BE4D28(this, gachaBonusSelectEntity);
  UILabel__set_text(emptyMessageLabel, (System_String_o *)this, 0LL);
  ListViewManager__SortItem((ListViewManager_o *)v5, -1, 0, -1, 0LL);
  BonusSelectSummonPartyServantListViewManager__SetFilterButtonImage(v5, v72);
  BonusSelectSummonPartyServantListViewManager__UpdateAscendingOrderBtnSprite(v5, v73);
}


void __fastcall BonusSelectSummonPartyServantListViewManager__DeleteContinueData(const MethodInfo *method)
{
  __int64 v1; // x1
  BonusSelectSummonPartyServantListViewManager_c *v2; // x0
  ListViewSort_o *servantSortInfo; // x0

  if ( (byte_4B631CC & 1) == 0 )
  {
    sub_1BE4ACC(&BonusSelectSummonPartyServantListViewManager_TypeInfo, v1);
    byte_4B631CC = 1;
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
    sub_1BE4D28(servantSortInfo, v1);
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

  if ( (byte_4B631D9 & 1) == 0 )
  {
    sub_1BE4ACC(&System_Action_TypeInfo, isDecide);
    sub_1BE4ACC(&Method_ListViewSort_Save__, v5);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    byte_4B631D9 = 1;
  }
  if ( isDecide )
  {
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
    BonusSelectSummonPartyServantListViewManager__SetFilterButtonImage(this, v7);
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  sort = (Il2CppObject *)this->fields.sort;
  v10 = (CommonUI_o *)Instance;
  v11 = (System_Action_o *)sub_1BE4D18(System_Action_TypeInfo);
  System_Action___ctor(v11, sort, Method_ListViewSort_Save__, 0LL);
  if ( !v10 )
    sub_1BE4D28(v12, v13);
  CommonUI__CloseServantFilterSelectMenu(v10, v11, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BonusSelectSummonPartyServantListViewManager__EndShowServantStatusDialog(
        BonusSelectSummonPartyServantListViewManager_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  UIProgressBar_o *scrollBar; // x0

  if ( (byte_4B631D4 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, isDecide);
    byte_4B631D4 = 1;
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
  scrollBar = (UIProgressBar_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !scrollBar )
LABEL_9:
    sub_1BE4D28(scrollBar, isDecide);
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
  int32_t v9; // w22
  __int64 methodPtr_low; // x10
  struct UICommonButton_o *sortKindButton; // x8
  struct System_Collections_Generic_List_UIDragDropListViewSurface__o *dropList; // x9

  if ( (byte_4B631DF & 1) == 0 )
  {
    sub_1BE4ACC(&BonusSelectSummonPartyServantListViewItem_TypeInfo, index);
    this = (BonusSelectSummonPartyServantListViewManager_o *)sub_1BE4ACC(
                                                               &Method_System_Collections_Generic_List_ListViewItem__get_Item__,
                                                               v8);
    byte_4B631DF = 1;
  }
  *index = -1;
  if ( sum >= 1 )
  {
    if ( !list )
LABEL_16:
      sub_1BE4D28(this, index);
    v9 = 0;
    while ( 1 )
    {
      this = (BonusSelectSummonPartyServantListViewManager_o *)System_Collections_Generic_List_object___get_Item(
                                                                 (System_Collections_Generic_List_object__o *)list,
                                                                 v9,
                                                                 (const MethodInfo_35EBF54 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
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
      if ( sum == ++v9 )
        return 1;
    }
    *index = v9;
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
    sub_1BE4D28(0LL, method);
  return ListViewSort__GetScaleKindSpriteName(sort, this->fields.scaleType, 0LL);
}


void __fastcall BonusSelectSummonPartyServantListViewManager__InitLoad(const MethodInfo *method)
{
  __int64 v1; // x1
  BonusSelectSummonPartyServantListViewManager_c *v2; // x0
  ListViewSort_o *servantSortInfo; // x0

  if ( (byte_4B631CD & 1) == 0 )
  {
    sub_1BE4ACC(&BonusSelectSummonPartyServantListViewManager_TypeInfo, v1);
    byte_4B631CD = 1;
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
    sub_1BE4D28(servantSortInfo, v1);
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

  if ( (byte_4B631D8 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_BonusSelectSummonPartyServantListViewManager_EndSelectFilterKind__, method);
    sub_1BE4ACC(&Method_BonusSelectSummonPartyServantListViewManager_OnClickFilterKind__, v3);
    sub_1BE4ACC(&ServantFilterSelectMenu_CallbackFunc_TypeInfo, v4);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    byte_4B631D8 = 1;
  }
  if ( this->fields.isInput )
  {
    v6 = Method_BonusSelectSummonPartyServantListViewManager_OnClickFilterKind__;
    if ( (*((_BYTE *)Method_BonusSelectSummonPartyServantListViewManager_OnClickFilterKind__ + 83) & 2) != 0 )
      v6 = (_QWORD *)sub_1BE4AE4(Method_BonusSelectSummonPartyServantListViewManager_OnClickFilterKind__);
    v7 = (System_Reflection_MethodBase_o *)sub_1BE4AB0(v6, v6[4]);
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
          Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          sort = this->fields.sort;
          v17 = (CommonUI_o *)Instance;
          v18 = (ServantFilterSelectMenu_CallbackFunc_o *)sub_1BE4D18(ServantFilterSelectMenu_CallbackFunc_TypeInfo);
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
    sub_1BE4D28(gachaBonusSelectEntity, v9);
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
  if ( (byte_4B631D2 & 1) == 0 )
  {
    this = (BonusSelectSummonPartyServantListViewManager_o *)sub_1BE4ACC(
                                                               &Method_BonusSelectSummonPartyServantListViewManager_OnClickSelectListView__,
                                                               obj);
    byte_4B631D2 = 1;
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
          v5 = (_QWORD *)sub_1BE4AE4(Method_BonusSelectSummonPartyServantListViewManager_OnClickSelectListView__);
        v6 = (System_Reflection_MethodBase_o *)sub_1BE4AB0(v5, v5[4]);
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
        sub_1BE4D28(this, obj);
      }
    }
  }
  v12 = Method_BonusSelectSummonPartyServantListViewManager_OnClickSelectListView__;
  if ( (*((_BYTE *)Method_BonusSelectSummonPartyServantListViewManager_OnClickSelectListView__ + 83) & 2) != 0 )
    v12 = (_QWORD *)sub_1BE4AE4(Method_BonusSelectSummonPartyServantListViewManager_OnClickSelectListView__);
  v13 = (System_Reflection_MethodBase_o *)sub_1BE4AB0(v12, v12[4]);
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

  if ( (byte_4B631DC & 1) == 0 )
  {
    sub_1BE4ACC(&Method_BonusSelectSummonPartyServantListViewManager_OnClickSortAscendingOrder__, method);
    byte_4B631DC = 1;
  }
  if ( this->fields.isInput )
  {
    v3 = Method_BonusSelectSummonPartyServantListViewManager_OnClickSortAscendingOrder__;
    if ( (*((_BYTE *)Method_BonusSelectSummonPartyServantListViewManager_OnClickSortAscendingOrder__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1BE4AE4(Method_BonusSelectSummonPartyServantListViewManager_OnClickSortAscendingOrder__);
    v4 = (System_Reflection_MethodBase_o *)sub_1BE4AB0(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
    sort = this->fields.sort;
    if ( !sort )
      sub_1BE4D28(v5, v6);
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

  if ( (byte_4B631DA & 1) == 0 )
  {
    sub_1BE4ACC(&Method_BonusSelectSummonPartyServantListViewManager_OnClickSortKind__, method);
    byte_4B631DA = 1;
  }
  if ( this->fields.isInput )
  {
    v3 = Method_BonusSelectSummonPartyServantListViewManager_OnClickSortKind__;
    if ( (*((_BYTE *)Method_BonusSelectSummonPartyServantListViewManager_OnClickSortKind__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1BE4AE4(Method_BonusSelectSummonPartyServantListViewManager_OnClickSortKind__);
    v4 = (System_Reflection_MethodBase_o *)sub_1BE4AB0(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
    sort = this->fields.sort;
    if ( !sort )
      sub_1BE4D28(v5, v6);
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

  if ( (byte_4B631D3 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_BonusSelectSummonPartyServantListViewManager_EndShowServantStatusDialog__, obj);
    sub_1BE4ACC(&Method_BonusSelectSummonPartyServantListViewManager_OnLongPushListView__, v5);
    sub_1BE4ACC(&ServantStatusDialog_EndDelegate_TypeInfo, v6);
    sub_1BE4ACC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v7);
    sub_1BE4ACC(&ServantLeaderInfo_TypeInfo, v8);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v9);
    byte_4B631D3 = 1;
  }
  scrollBar = (UIProgressBar_o *)this->fields.scrollBar;
  if ( !scrollBar )
    goto LABEL_13;
  this->fields.tmpScrollBarValueForLongPush = UIProgressBar__get_value(scrollBar, 0LL);
  v11 = Method_BonusSelectSummonPartyServantListViewManager_OnLongPushListView__;
  if ( (*((_BYTE *)Method_BonusSelectSummonPartyServantListViewManager_OnLongPushListView__ + 83) & 2) != 0 )
    v11 = (_QWORD *)sub_1BE4AE4(Method_BonusSelectSummonPartyServantListViewManager_OnLongPushListView__);
  v12 = (System_Reflection_MethodBase_o *)sub_1BE4AB0(v11, v11[4]);
  OverwriteAssetSoundName__PlaySystemSe(v12, 0, 0LL);
  scrollBar = (UIProgressBar_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
  v17 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47299060(v20, 0LL);
  v18 = (ServantLeaderInfo_o *)sub_1BE4D18(ServantLeaderInfo_TypeInfo);
  ServantLeaderInfo___ctor_41463448(v18, v17, 0, 1, 0LL);
  v19 = (ServantStatusDialog_EndDelegate_o *)sub_1BE4D18(ServantStatusDialog_EndDelegate_TypeInfo);
  ServantStatusDialog_EndDelegate___ctor(
    v19,
    (Il2CppObject *)this,
    Method_BonusSelectSummonPartyServantListViewManager_EndShowServantStatusDialog__,
    0LL);
  if ( !v13 )
LABEL_13:
    sub_1BE4D28(scrollBar, obj);
  CommonUI__OpenServantStatusDialog_30886140(v13, 7, v18, v19, 0LL);
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

  if ( (byte_4B631CF & 1) == 0 )
  {
    sub_1BE4ACC(
      &Method_System_Collections_Generic_List_Enumerator_BonusSelectSummonPartyServantListViewObject__Dispose__,
      *(_QWORD *)&mode);
    sub_1BE4ACC(
      &Method_System_Collections_Generic_List_Enumerator_BonusSelectSummonPartyServantListViewObject__MoveNext__,
      v5);
    sub_1BE4ACC(
      &Method_System_Collections_Generic_List_Enumerator_BonusSelectSummonPartyServantListViewObject__get_Current__,
      v6);
    sub_1BE4ACC(
      &Method_System_Collections_Generic_List_BonusSelectSummonPartyServantListViewObject__GetEnumerator__,
      v7);
    byte_4B631CF = 1;
  }
  memset(&v12, 0, sizeof(v12));
  ObjectList = (System_Collections_Generic_List_object__o *)BonusSelectSummonPartyServantListViewManager__get_ObjectList(
                                                              this,
                                                              *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_1BE4D28(0LL, v9);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v12,
    ObjectList,
    (const MethodInfo_35ECD1C *)Method_System_Collections_Generic_List_BonusSelectSummonPartyServantListViewObject__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v12,
            (const MethodInfo_3361CE0 *)Method_System_Collections_Generic_List_Enumerator_BonusSelectSummonPartyServantListViewObject__MoveNext__) )
  {
    if ( !v12.fields._current )
      sub_1BE4D28(0LL, v10);
    BonusSelectSummonPartyServantListViewObject__Init(
      (BonusSelectSummonPartyServantListViewObject_o *)v12.fields._current,
      mode,
      v11);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v12,
    (const MethodInfo_3361CDC *)Method_System_Collections_Generic_List_Enumerator_BonusSelectSummonPartyServantListViewObject__Dispose__);
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

  if ( (byte_4B631D6 & 1) == 0 )
  {
    sub_1BE4ACC(&BonusSelectSummonPartyServantListViewManager_TypeInfo, *(_QWORD *)&scaleType);
    byte_4B631D6 = 1;
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
    sub_1BE4D28(servantSortInfo, *(_QWORD *)&scaleType);
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

  if ( (byte_4B631DD & 1) == 0 )
  {
    sub_1BE4ACC(&BonusSelectSummonPartyServantListViewManager_TypeInfo, isAscendingOrder);
    byte_4B631DD = 1;
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
    sub_1BE4D28(servantSortInfo, isAscendingOrder);
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

  if ( (byte_4B631DB & 1) == 0 )
  {
    sub_1BE4ACC(&BonusSelectSummonPartyServantListViewManager_TypeInfo, *(_QWORD *)&sortKind);
    byte_4B631DB = 1;
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
    sub_1BE4D28(servantSortInfo, *(_QWORD *)&sortKind);
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
  if ( (byte_4B631D0 & 1) == 0 )
  {
    sub_1BE4ACC(&StringLiteral_17735/*"btn_filter_on"*/, method);
    this = (BonusSelectSummonPartyServantListViewManager_o *)sub_1BE4ACC(&StringLiteral_17734/*"btn_filter"*/, v3);
    byte_4B631D0 = 1;
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
    sub_1BE4D28(this, method);
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
  v9 = (System_String_o **)&StringLiteral_17734/*"btn_filter"*/;
  if ( ((unsigned __int8)this & 1) == 0 )
    v9 = (System_String_o **)&StringLiteral_17735/*"btn_filter_on"*/;
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
    sub_1BE4D28(scrollView, v5);
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
  if ( (byte_4B631D7 & 1) == 0 )
  {
    this = (BonusSelectSummonPartyServantListViewManager_o *)sub_1BE4ACC(
                                                               &BonusSelectSummonPartyServantListViewObject_TypeInfo,
                                                               obj);
    byte_4B631D7 = 1;
  }
  if ( !obj
    || (methodPtr_low = LOBYTE(BonusSelectSummonPartyServantListViewObject_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(obj->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low)
    || (BonusSelectSummonPartyServantListViewObject_c *)obj->klass->_2.typeHierarchy[methodPtr_low - 1] != BonusSelectSummonPartyServantListViewObject_TypeInfo )
  {
    sub_1BE4D28(this, obj);
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
  if ( (byte_4B631D1 & 1) == 0 )
  {
    sub_1BE4ACC(&StringLiteral_17856/*"btn_txt_up"*/, method);
    this = (BonusSelectSummonPartyServantListViewManager_o *)sub_1BE4ACC(&StringLiteral_17799/*"btn_txt_down"*/, v3);
    byte_4B631D1 = 1;
  }
  sort = v2->fields.sort;
  if ( !sort || (this = (BonusSelectSummonPartyServantListViewManager_o *)v2->fields.sortExplanationSprite) == 0LL )
    sub_1BE4D28(this, method);
  if ( sort->fields.isAscendingOrder )
    v5 = (System_String_o **)&StringLiteral_17856/*"btn_txt_up"*/;
  else
    v5 = (System_String_o **)&StringLiteral_17799/*"btn_txt_down"*/;
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
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  int64_t v24; // x1
  struct System_Object_array *items; // x8
  _QWORD *v26; // x9
  __int64 size; // x10
  Il2CppClass **v28; // x0
  System_Collections_Generic_List_Enumerator_object__o v30; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v31; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4B631DE & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, method);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v3);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v4);
    sub_1BE4ACC(&Method_UnityEngine_GameObject_GetComponent_BonusSelectSummonPartyServantListViewObject___, v5);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_BonusSelectSummonPartyServantListViewObject__Add__, v6);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v7);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_BonusSelectSummonPartyServantListViewObject___ctor__, v8);
    sub_1BE4ACC(&System_Collections_Generic_List_BonusSelectSummonPartyServantListViewObject__TypeInfo, v9);
    sub_1BE4ACC(&UnityEngine_Object_TypeInfo, v10);
    byte_4B631DE = 1;
  }
  memset(&v31, 0, sizeof(v31));
  v11 = (System_Collections_Generic_List_object__o *)sub_1BE4D18(System_Collections_Generic_List_BonusSelectSummonPartyServantListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_35EB9F0 *)Method_System_Collections_Generic_List_BonusSelectSummonPartyServantListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_1BE4D28(0LL, v12);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v30,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_35ECD1C *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v31 = v30;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v31,
            (const MethodInfo_3361CE0 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v31.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v15 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v15 )
    {
      if ( !current )
        sub_1BE4D28(v15, v16);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_2FA979C *)Method_UnityEngine_GameObject_GetComponent_BonusSelectSummonPartyServantListViewObject___);
      v24 = (int64_t)Component_object;
      if ( !v11 )
        sub_1BE4D28(Component_object, Component_object);
      items = v11->fields._items;
      v26 = Method_System_Collections_Generic_List_BonusSelectSummonPartyServantListViewObject__Add__;
      ++v11->fields._version;
      if ( !items )
        sub_1BE4D28(Component_object, Component_object);
      size = v11->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v11,
          Component_object,
          *(const MethodInfo_35EC224 **)(*(_QWORD *)(v26[4] + 192LL) + 112LL));
      }
      else
      {
        v28 = &items->obj.klass + size;
        v11->fields._size = size + 1;
        v28[4] = (Il2CppClass *)v24;
        sub_1BE4A70((PartyOrganizationUtility_o *)(v28 + 4), v24, v18, v19, v20, v21, v22, v23);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v31,
    (const MethodInfo_3361CDC *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_BonusSelectSummonPartyServantListViewObject__o *)v11;
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
  sub_1BE4A70(
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
  if ( (sub_1BE4B8C(v10) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_1BE4D44(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1BE4BF4(v14, 0LL);
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
  this->fields.m_target = (Il2CppObject *)sub_1A226E8;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_1A22690;
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
  if ( (byte_4B631E1 & 1) == 0 )
  {
    sub_1BE4ACC(&int_TypeInfo, *(_QWORD *)&kind);
    sub_1BE4ACC(&BonusSelectSummonPartyServantListViewManager_ResultKind_TypeInfo, v9);
    byte_4B631E1 = 1;
  }
  v14[2] = 0LL;
  v14[0] = j_il2cpp_value_box_0(
             BonusSelectSummonPartyServantListViewManager_ResultKind_TypeInfo,
             &v16,
             *(_QWORD *)&result,
             callback,
             object);
  v14[1] = j_il2cpp_value_box_0(int_TypeInfo, &v15, v10, v11, v12);
  return (System_IAsyncResult_o *)sub_1BE4A80(this, v14, callback, object);
}


void __fastcall BonusSelectSummonPartyServantListViewManager_CallbackFunc__EndInvoke(
        BonusSelectSummonPartyServantListViewManager_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1BE4A84(result, 0LL, method);
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
  if ( (byte_4B631E2 & 1) == 0 )
  {
    this = (BonusSelectSummonPartyServantListViewManager___c__DisplayClass17_0_o *)sub_1BE4ACC(
                                                                                     &CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo,
                                                                                     *(_QWORD *)&id);
    byte_4B631E2 = 1;
  }
  servantEntity = v4->fields.servantEntity;
  if ( !servantEntity )
    sub_1BE4D28(this, *(_QWORD *)&id);
  v7 = *(_QWORD *)&servantEntity->fields.id.fields.currentCryptoKey;
  v6 = *(_QWORD *)&servantEntity->fields.id.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v9.fields.currentCryptoKey = v7;
  *(_QWORD *)&v9.fields.fakeValue = v6;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47299060(v9, 0LL) == id;
}