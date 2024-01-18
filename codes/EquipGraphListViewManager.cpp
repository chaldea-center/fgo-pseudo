void __fastcall EquipGraphListViewManager___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  __int64 v4; // x1
  ListViewSort_o *v5; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  ListViewSort_o *v13; // x19
  struct EquipGraphListViewManager_StaticFields *v14; // x0
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7

  if ( (byte_418A19B & 1) == 0 )
  {
    sub_B2C35C(&EquipGraphListViewManager_TypeInfo, v1);
    sub_B2C35C(&ListViewSort_TypeInfo, v2);
    sub_B2C35C(&StringLiteral_6057/*"EquipGraph"*/, v3);
    sub_B2C35C(&StringLiteral_15412/*"WarBoardEquipGraph"*/, v4);
    byte_418A19B = 1;
  }
  v5 = (ListViewSort_o *)sub_B2C42C(ListViewSort_TypeInfo);
  ListViewSort___ctor_33914184(v5, (System_String_o *)StringLiteral_6057/*"EquipGraph"*/, 3, 0, 0LL);
  static_fields = (BattleServantConfConponent_o *)EquipGraphListViewManager_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v5;
  sub_B2C2F8(static_fields, (System_Int32_array **)v5, v7, v8, v9, v10, v11, v12);
  v13 = (ListViewSort_o *)sub_B2C42C(ListViewSort_TypeInfo);
  ListViewSort___ctor_33914184(v13, (System_String_o *)StringLiteral_15412/*"WarBoardEquipGraph"*/, 3, 0, 0LL);
  v14 = EquipGraphListViewManager_TypeInfo->static_fields;
  v14->warBoardSortStatus = v13;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&v14->warBoardSortStatus,
    (System_Int32_array **)v13,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20);
}


void __fastcall EquipGraphListViewManager___ctor(EquipGraphListViewManager_o *this, const MethodInfo *method)
{
  ListViewManager___ctor((ListViewManager_o *)this, 0LL);
}


void __fastcall EquipGraphListViewManager__ChangeIconScale(EquipGraphListViewManager_o *this, const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  unsigned int scaleType; // w8
  EquipGraphListViewManager_o *v9; // x19
  struct ListViewItemSeed_o *smallSizeSeed; // x1
  int32_t v11; // w8
  struct ListViewSort_o *sort; // x8
  const MethodInfo *v13; // x2
  const MethodInfo *v14; // x2

  scaleType = this->fields.scaleType;
  v9 = this;
  if ( scaleType < 2 )
  {
    smallSizeSeed = this->fields.smallSizeSeed;
    v11 = 2;
    goto LABEL_7;
  }
  if ( scaleType == 2 )
  {
    smallSizeSeed = this->fields.extremelySmallSizeSeed;
    v11 = 3;
    goto LABEL_7;
  }
  if ( scaleType == 3 )
  {
    smallSizeSeed = this->fields.normalSizeSeed;
    v11 = 1;
LABEL_7:
    this->fields.scaleType = v11;
    this->fields.seed = smallSizeSeed;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&this->fields.seed,
      (System_Int32_array **)smallSizeSeed,
      v2,
      v3,
      v4,
      v5,
      v6,
      v7);
  }
  sort = v9->fields.sort;
  if ( !sort
    || (sort->fields.iconScaleKind = v9->fields.scaleType, (this = (EquipGraphListViewManager_o *)v9->fields.sort) == 0LL) )
  {
    sub_B2C434(this, method);
  }
  ListViewSort__Save((ListViewSort_o *)this, 0LL);
  EquipGraphListViewManager__ModifyList(v9, 1, v13);
  EquipGraphListViewManager__SetMode_29525100(v9, 2, v14);
  ListViewManager__SortItem((ListViewManager_o *)v9, -1, 0, -1, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EquipGraphListViewManager__CreateList(
        EquipGraphListViewManager_o *this,
        PartyListViewItem_array *baseDeckItemList,
        PartyListViewItem_o *partyItem,
        int32_t member,
        EventUpValSetupInfo_o *setupInfo,
        const MethodInfo *method)
{
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  PartyListViewItem_array *v11; // x28
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  __int64 v24; // x1
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  EquipGraphListViewManager_c *v31; // x0
  struct ListViewSort_o **p_sortStatus; // x8
  struct ListViewSort_o *v33; // x1
  struct ListViewSort_o **p_sort; // x23
  __int64 servantItemDraw; // x0
  const MethodInfo *v36; // x1
  System_String_array **v37; // x2
  System_String_array **v38; // x3
  System_Boolean_array **v39; // x4
  System_Int32_array **v40; // x5
  System_Int32_array *v41; // x6
  System_Int32_array *v42; // x7
  struct ListViewSort_o *sort; // x8
  unsigned int iconScaleKind; // w8
  struct ListViewItemSeed_o *normalSizeSeed; // x1
  struct System_Int32_array *servantEquipFilterEventIdList; // x9
  struct ListViewSort_o *v47; // x8
  struct System_Int32_array *v48; // x1
  struct System_Int32_array **p_bonusEventIdList; // x0
  struct ListViewSort_o *v50; // x8
  System_Int32_array *bonusEventIdList; // x1
  PartyOrganizationListViewItem_o *v52; // x24
  EquipGraphServantItem_o *v53; // x25
  const MethodInfo *v54; // x2
  System_Int32_array **v55; // x1
  struct EquipGraphServantItem_o **p_servantItemInfo; // x27
  ListViewManager_o *v57; // x25
  System_String_array **v58; // x2
  System_String_array **v59; // x3
  System_Boolean_array **v60; // x4
  System_Int32_array **v61; // x5
  System_Int32_array *v62; // x6
  System_Int32_array *v63; // x7
  const MethodInfo *v64; // x2
  const MethodInfo *v65; // x2
  struct EquipGraphServantItem_o *servantItemInfo; // x8
  struct ServantEntity_o *equipServantEntity; // x9
  __int64 v68; // x24
  UserServantEntity_array *ServantEquipList; // x0
  UnityEngine_Object_o *infoDataLabel; // x26
  UserServantEntity_array *v71; // x19
  UILabel_o *monitor; // x27
  PartyListViewItem_array *v73; // x25
  System_String_o *v74; // x28
  Il2CppObject *v75; // x26
  Il2CppObject *v76; // x0
  __int64 v77; // x8
  UserServantEntity_array *v78; // x20
  unsigned __int64 v79; // x23
  UserServantEntity_o **m_Items; // x22
  UserServantEntity_o *v81; // x26
  PartyListViewItem_array *v82; // x24
  __int64 v83; // x28
  struct EquipGraphServantItem_o **v84; // x19
  int32_t memberIndex; // w25
  EquipGraphListViewItem_o *v86; // x0
  int64_t v87; // x3
  EventMissionProgressRequest_Argument_ProgressData_o *v88; // x27
  int64_t v89; // x4
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x8
  UILabel_o *emptyMessageLabel; // x20
  System_String_o **v92; // x8
  System_String_o *v93; // x21
  const MethodInfo *v94; // x1
  const MethodInfo *v95; // x1
  __int64 v96; // x0
  int32_t memberIdx; // [xsp+0h] [xbp-80h]
  const MethodInfo *v98; // [xsp+8h] [xbp-78h]
  struct EquipGraphServantItem_o **v99; // [xsp+18h] [xbp-68h]
  PartyListViewItem_o *v100; // [xsp+18h] [xbp-68h]
  EquipGraphListViewManager_o *v101; // [xsp+20h] [xbp-60h]
  int v102; // [xsp+28h] [xbp-58h] BYREF
  int v103; // [xsp+2Ch] [xbp-54h] BYREF

  v11 = baseDeckItemList;
  if ( (byte_418A183 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_UserServantMaster___, baseDeckItemList);
    sub_B2C35C(&EquipGraphListViewItem_TypeInfo, v13);
    sub_B2C35C(&EquipGraphListViewManager_TypeInfo, v14);
    sub_B2C35C(&EquipGraphServantItem_TypeInfo, v15);
    sub_B2C35C(&int_TypeInfo, v16);
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewItem__Add__, v17);
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v18);
    sub_B2C35C(&LocalizationManager_TypeInfo, v19);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v20);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v21);
    sub_B2C35C(&StringLiteral_11690/*"SERVANT_EQUIP_EMPTY"*/, v22);
    sub_B2C35C(&StringLiteral_11892/*"SERVANT_SORT_FILTER_RESULT_EMPTY"*/, v23);
    sub_B2C35C(&StringLiteral_12469/*"SUM_INFO"*/, v24);
    byte_418A183 = 1;
  }
  this->fields.waveDeckItemList = v11;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.waveDeckItemList,
    (System_Int32_array **)v11,
    (System_String_array **)partyItem,
    *(System_String_array ***)&member,
    (System_Boolean_array **)setupInfo,
    (System_Int32_array **)method,
    v6,
    v7);
  v31 = EquipGraphListViewManager_TypeInfo;
  if ( (BYTE3(EquipGraphListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EquipGraphListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EquipGraphListViewManager_TypeInfo);
    v31 = EquipGraphListViewManager_TypeInfo;
  }
  p_sortStatus = &v31->static_fields->sortStatus;
  v33 = *p_sortStatus;
  this->fields.sort = *p_sortStatus;
  p_sort = &this->fields.sort;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.sort,
    (System_Int32_array **)v33,
    v25,
    v26,
    v27,
    v28,
    v29,
    v30);
  if ( !this->fields.sort )
    goto LABEL_71;
  this->fields.sort->fields.listViewKind = 1;
  servantItemDraw = (__int64)*p_sort;
  if ( !*p_sort )
    goto LABEL_71;
  ListViewSort__Load((ListViewSort_o *)servantItemDraw, 0LL);
  if ( !partyItem )
    goto LABEL_71;
  sort = this->fields.sort;
  this->fields.isWaveBattle = partyItem->fields.menuKind == 9;
  if ( !sort )
    goto LABEL_71;
  iconScaleKind = sort->fields.iconScaleKind;
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
      goto LABEL_17;
    normalSizeSeed = this->fields.extremelySmallSizeSeed;
  }
  this->fields.seed = normalSizeSeed;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.seed,
    (System_Int32_array **)normalSizeSeed,
    v37,
    v38,
    v39,
    v40,
    v41,
    v42);
LABEL_17:
  this->fields.memberIndex = member;
  if ( setupInfo )
  {
    this->fields.isQuestStart = setupInfo->fields.isQuestStart;
    servantEquipFilterEventIdList = setupInfo->fields.servantEquipFilterEventIdList;
    v47 = this->fields.sort;
    if ( servantEquipFilterEventIdList )
      LOBYTE(servantEquipFilterEventIdList) = servantEquipFilterEventIdList->max_length != 0;
    if ( !v47 )
      goto LABEL_71;
    v47->fields.isBonusKind = (char)servantEquipFilterEventIdList;
    v48 = setupInfo->fields.servantEquipFilterEventIdList;
    p_bonusEventIdList = &this->fields.bonusEventIdList;
    this->fields.bonusEventIdList = v48;
  }
  else
  {
    v50 = this->fields.sort;
    this->fields.isQuestStart = 1;
    if ( !v50 )
      goto LABEL_71;
    p_bonusEventIdList = &this->fields.bonusEventIdList;
    v48 = 0LL;
    v50->fields.isBonusKind = 0;
    this->fields.bonusEventIdList = 0LL;
  }
  sub_B2C2F8(
    (BattleServantConfConponent_o *)p_bonusEventIdList,
    (System_Int32_array **)v48,
    v37,
    v38,
    v39,
    v40,
    v41,
    v42);
  servantItemDraw = (__int64)*p_sort;
  if ( !*p_sort )
    goto LABEL_71;
  if ( *(_BYTE *)(servantItemDraw + 61) )
  {
    bonusEventIdList = this->fields.bonusEventIdList;
    if ( this->fields.isQuestStart )
      ListViewSort__AlignBonusKind((ListViewSort_o *)servantItemDraw, bonusEventIdList, 0LL, 0, 0LL, 0LL);
    else
      ListViewSort__AlignBonusKind2((ListViewSort_o *)servantItemDraw, bonusEventIdList, 0LL, 0LL, 0LL, 0LL, 0LL);
  }
  servantItemDraw = (__int64)PartyListViewItem__GetMember(partyItem, this->fields.memberIndex, 0LL);
  if ( !servantItemDraw )
    goto LABEL_71;
  v52 = (PartyOrganizationListViewItem_o *)servantItemDraw;
  if ( !*(_BYTE *)(servantItemDraw + 128) )
  {
    v101 = this;
    v53 = (EquipGraphServantItem_o *)sub_B2C42C(EquipGraphServantItem_TypeInfo);
    EquipGraphServantItem___ctor(v53, v52, v54);
    v55 = (System_Int32_array **)v53;
    p_servantItemInfo = &this->fields.servantItemInfo;
    this->fields.servantItemInfo = v53;
    v57 = (ListViewManager_o *)this;
    sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.servantItemInfo, v55, v58, v59, v60, v61, v62, v63);
    servantItemDraw = (__int64)this->fields.servantItemDraw;
    if ( !servantItemDraw )
      goto LABEL_71;
    EquipGraphServantItemDraw__SetItem(
      (EquipGraphServantItemDraw_o *)servantItemDraw,
      this->fields.servantItemInfo,
      v64);
    servantItemDraw = (__int64)this->fields.servantItemDraw;
    if ( !servantItemDraw )
      goto LABEL_71;
    EquipGraphServantItemDraw__SetInput((EquipGraphServantItemDraw_o *)servantItemDraw, 0, v65);
    servantItemDraw = (__int64)UserGameMaster__getSelfUserGame(0LL);
    servantItemInfo = this->fields.servantItemInfo;
    this->fields.maxCost = partyItem->fields.maxCost;
    if ( !servantItemInfo )
      goto LABEL_71;
    equipServantEntity = servantItemInfo->fields.equipServantEntity;
    if ( equipServantEntity )
      LODWORD(equipServantEntity) = equipServantEntity->fields.cost;
    this->fields.baseCost = partyItem->fields.cost - (_DWORD)equipServantEntity;
    this->fields.partyNumber = partyItem->fields.index + 1;
    if ( !v11 )
      goto LABEL_71;
    v68 = servantItemDraw;
    this->fields.maxWave = *(_QWORD *)&v11->max_length;
    servantItemDraw = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !servantItemDraw )
      goto LABEL_71;
    servantItemDraw = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                 (DataManager_o *)servantItemDraw,
                                 (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserServantMaster___);
    if ( !servantItemDraw )
      goto LABEL_71;
    ServantEquipList = UserServantMaster__getServantEquipList((UserServantMaster_o *)servantItemDraw, 0LL);
    infoDataLabel = (UnityEngine_Object_o *)this->fields.infoDataLabel;
    v71 = ServantEquipList;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(infoDataLabel, 0LL, 0LL) )
    {
      v99 = p_servantItemInfo;
      monitor = (UILabel_o *)v57[1].monitor;
      v73 = v11;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      servantItemDraw = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_12469/*"SUM_INFO"*/, 0LL);
      if ( !v71 )
        goto LABEL_71;
      v74 = (System_String_o *)servantItemDraw;
      v103 = *(_QWORD *)&v71->max_length;
      servantItemDraw = j_il2cpp_value_box_0(int_TypeInfo, &v103);
      if ( !v68 )
        goto LABEL_71;
      v75 = (Il2CppObject *)servantItemDraw;
      v102 = *(_DWORD *)(v68 + 148);
      v76 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v102);
      servantItemDraw = (__int64)System_String__Format_44301068(v74, v75, v76, 0LL);
      if ( !monitor )
        goto LABEL_71;
      UILabel__set_text(monitor, (System_String_o *)servantItemDraw, 0LL);
      v11 = v73;
      p_servantItemInfo = v99;
      v57 = (ListViewManager_o *)v101;
    }
    servantItemDraw = (__int64)v57[1].fields.emptyMessageLabel;
    if ( !servantItemDraw )
      goto LABEL_71;
    servantItemDraw = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)servantItemDraw, 0LL);
    if ( !*p_sort )
      goto LABEL_71;
    if ( !servantItemDraw )
      goto LABEL_71;
    v100 = partyItem;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)servantItemDraw, (*p_sort)->fields.isBonusKind, 0LL);
    ListViewManager__CreateList(v57, 0, 0LL);
    if ( !v71 )
      goto LABEL_71;
    v77 = *(_QWORD *)&v71->max_length;
    if ( (int)v77 >= 1 )
    {
      v78 = v71;
      v79 = 0LL;
      m_Items = v71->m_Items;
      while ( 1 )
      {
        if ( v79 >= (unsigned int)v77 )
        {
          v96 = sub_B2C460(servantItemDraw);
          sub_B2C400(v96, 0LL);
        }
        servantItemDraw = (__int64)*p_servantItemInfo;
        if ( !*p_servantItemInfo )
          break;
        v81 = m_Items[v79];
        v82 = v11;
        servantItemDraw = EquipGraphServantItem__get_EquipUserSvtId((EquipGraphServantItem_o *)servantItemDraw, v36);
        if ( !*p_servantItemInfo )
          break;
        v83 = servantItemDraw;
        v84 = p_servantItemInfo;
        memberIndex = v101->fields.memberIndex;
        v86 = (EquipGraphListViewItem_o *)sub_B2C42C(EquipGraphListViewItem_TypeInfo);
        memberIdx = memberIndex;
        v57 = (ListViewManager_o *)v101;
        v87 = v83;
        v88 = (EventMissionProgressRequest_Argument_ProgressData_o *)v86;
        v11 = v82;
        EquipGraphListViewItem___ctor(v86, v79, v81, v87, v89, v82, v100, setupInfo, memberIdx, v98);
        servantItemDraw = (__int64)v101->fields.itemList;
        if ( !servantItemDraw )
          break;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)servantItemDraw,
          v88,
          (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
        LODWORD(v77) = v78->max_length;
        ++v79;
        p_servantItemInfo = v84;
        if ( (__int64)v79 >= (int)v77 )
          goto LABEL_61;
      }
LABEL_71:
      sub_B2C434(servantItemDraw, v36);
    }
LABEL_61:
    itemList = v57->fields.itemList;
    if ( !itemList )
      goto LABEL_71;
    emptyMessageLabel = v57->fields.emptyMessageLabel;
    v92 = (System_String_o **)(itemList->fields._size <= 0 ? &StringLiteral_11690/*"SERVANT_EQUIP_EMPTY"*/ : &StringLiteral_11892/*"SERVANT_SORT_FILTER_RESULT_EMPTY"*/);
    v93 = *v92;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    servantItemDraw = (__int64)LocalizationManager__Get(v93, 0LL);
    if ( !emptyMessageLabel )
      goto LABEL_71;
    UILabel__set_text(emptyMessageLabel, (System_String_o *)servantItemDraw, 0LL);
    EquipGraphListViewManager__RefrashListDisp((EquipGraphListViewManager_o *)v57, v94);
    ListViewManager__SortItem(v57, -1, 0, -1, 0LL);
    EquipGraphListViewManager__SetFilterButtonImage((EquipGraphListViewManager_o *)v57, v95);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EquipGraphListViewManager__CreateList_29520852(
        EquipGraphListViewManager_o *this,
        WarBoardPartyListViewItem_o *partyItem,
        int32_t member,
        EventUpValSetupInfo_o *setupInfo,
        const MethodInfo *method)
{
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  EquipGraphListViewManager_c *v24; // x0
  struct ListViewSort_o *warBoardSortStatus; // x1
  struct ListViewSort_o **p_sort; // x22
  __int64 MemberItem; // x0
  const MethodInfo *v28; // x1
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  unsigned int iconScaleKind; // w8
  struct ListViewItemSeed_o *normalSizeSeed; // x1
  struct System_Int32_array *servantEquipFilterEventIdList; // x9
  struct ListViewSort_o *sort; // x8
  struct System_Int32_array *v39; // x1
  struct System_Int32_array **p_bonusEventIdList; // x0
  struct ListViewSort_o *v41; // x8
  System_Int32_array *bonusEventIdList; // x1
  PartyOrganizationListViewItem_o *v43; // x23
  EquipGraphServantItem_o *v44; // x24
  const MethodInfo *v45; // x2
  struct EquipGraphServantItem_o **p_servantItemInfo; // x23
  System_String_array **v47; // x2
  System_String_array **v48; // x3
  System_Boolean_array **v49; // x4
  System_Int32_array **v50; // x5
  System_Int32_array *v51; // x6
  System_Int32_array *v52; // x7
  const MethodInfo *v53; // x2
  const MethodInfo *v54; // x2
  struct EquipGraphServantItem_o *servantItemInfo; // x8
  struct ServantEntity_o *equipServantEntity; // x9
  __int64 v57; // x24
  UserServantEntity_array *ServantEquipList; // x0
  UnityEngine_Object_o *infoDataLabel; // x26
  UserServantEntity_array *v60; // x25
  UILabel_o *v61; // x26
  System_String_o *v62; // x27
  Il2CppObject *v63; // x28
  Il2CppObject *v64; // x0
  __int64 v65; // x8
  UserServantEntity_array *v66; // x24
  unsigned __int64 v67; // x22
  UserServantEntity_o **m_Items; // x28
  UserServantEntity_o *v69; // x25
  int64_t v70; // x27
  EquipGraphListViewItem_o *v71; // x26
  int64_t v72; // x4
  const MethodInfo *v73; // x7
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x8
  UILabel_o *emptyMessageLabel; // x20
  System_String_o **v76; // x8
  System_String_o *v77; // x21
  const MethodInfo *v78; // x1
  const MethodInfo *v79; // x1
  __int64 v80; // x0
  WarBoardPartyListViewItem_o *partyItema; // [xsp+8h] [xbp-68h]
  EquipGraphListViewManager_o *v82; // [xsp+10h] [xbp-60h]
  int v83; // [xsp+18h] [xbp-58h] BYREF
  int v84; // [xsp+1Ch] [xbp-54h] BYREF

  if ( (byte_418A184 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_UserServantMaster___, partyItem);
    sub_B2C35C(&EquipGraphListViewItem_TypeInfo, v12);
    sub_B2C35C(&EquipGraphListViewManager_TypeInfo, v13);
    sub_B2C35C(&EquipGraphServantItem_TypeInfo, v14);
    sub_B2C35C(&int_TypeInfo, v15);
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewItem__Add__, v16);
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v17);
    sub_B2C35C(&LocalizationManager_TypeInfo, v18);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v19);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v20);
    sub_B2C35C(&StringLiteral_11690/*"SERVANT_EQUIP_EMPTY"*/, v21);
    sub_B2C35C(&StringLiteral_11892/*"SERVANT_SORT_FILTER_RESULT_EMPTY"*/, v22);
    sub_B2C35C(&StringLiteral_12469/*"SUM_INFO"*/, v23);
    byte_418A184 = 1;
  }
  v24 = EquipGraphListViewManager_TypeInfo;
  if ( (BYTE3(EquipGraphListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EquipGraphListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EquipGraphListViewManager_TypeInfo);
    v24 = EquipGraphListViewManager_TypeInfo;
  }
  warBoardSortStatus = v24->static_fields->warBoardSortStatus;
  this->fields.sort = warBoardSortStatus;
  p_sort = &this->fields.sort;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.sort,
    (System_Int32_array **)warBoardSortStatus,
    *(System_String_array ***)&member,
    (System_String_array **)setupInfo,
    (System_Boolean_array **)method,
    v5,
    v6,
    v7);
  if ( !this->fields.sort )
    goto LABEL_70;
  this->fields.sort->fields.listViewKind = 1;
  MemberItem = (__int64)*p_sort;
  if ( !*p_sort )
    goto LABEL_70;
  ListViewSort__Load((ListViewSort_o *)MemberItem, 0LL);
  if ( !*p_sort )
    goto LABEL_70;
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
      goto LABEL_16;
    normalSizeSeed = this->fields.extremelySmallSizeSeed;
  }
  this->fields.seed = normalSizeSeed;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.seed,
    (System_Int32_array **)normalSizeSeed,
    v29,
    v30,
    v31,
    v32,
    v33,
    v34);
LABEL_16:
  this->fields.memberIndex = member;
  if ( setupInfo )
  {
    this->fields.isQuestStart = setupInfo->fields.isQuestStart;
    servantEquipFilterEventIdList = setupInfo->fields.servantEquipFilterEventIdList;
    sort = this->fields.sort;
    if ( servantEquipFilterEventIdList )
      LOBYTE(servantEquipFilterEventIdList) = servantEquipFilterEventIdList->max_length != 0;
    if ( !sort )
      goto LABEL_70;
    sort->fields.isBonusKind = (char)servantEquipFilterEventIdList;
    v39 = setupInfo->fields.servantEquipFilterEventIdList;
    p_bonusEventIdList = &this->fields.bonusEventIdList;
    this->fields.bonusEventIdList = v39;
  }
  else
  {
    v41 = this->fields.sort;
    this->fields.isQuestStart = 1;
    if ( !v41 )
      goto LABEL_70;
    p_bonusEventIdList = &this->fields.bonusEventIdList;
    v39 = 0LL;
    v41->fields.isBonusKind = 0;
    this->fields.bonusEventIdList = 0LL;
  }
  sub_B2C2F8(
    (BattleServantConfConponent_o *)p_bonusEventIdList,
    (System_Int32_array **)v39,
    v29,
    v30,
    v31,
    v32,
    v33,
    v34);
  MemberItem = (__int64)*p_sort;
  if ( !*p_sort )
    goto LABEL_70;
  if ( !*(_BYTE *)(MemberItem + 61) )
    goto LABEL_27;
  bonusEventIdList = this->fields.bonusEventIdList;
  if ( this->fields.isQuestStart )
  {
    ListViewSort__AlignBonusKind((ListViewSort_o *)MemberItem, bonusEventIdList, 0LL, 0, 0LL, 0LL);
LABEL_27:
    if ( !partyItem )
      goto LABEL_70;
    goto LABEL_28;
  }
  ListViewSort__AlignBonusKind2((ListViewSort_o *)MemberItem, bonusEventIdList, 0LL, 0LL, 0LL, 0LL, 0LL);
  if ( !partyItem )
    goto LABEL_70;
LABEL_28:
  MemberItem = (__int64)WarBoardPartyListViewItem__GetMemberItem(partyItem, this->fields.memberIndex, 0LL);
  if ( !MemberItem )
    goto LABEL_70;
  v43 = (PartyOrganizationListViewItem_o *)MemberItem;
  if ( !*(_BYTE *)(MemberItem + 128) )
  {
    v44 = (EquipGraphServantItem_o *)sub_B2C42C(EquipGraphServantItem_TypeInfo);
    EquipGraphServantItem___ctor(v44, v43, v45);
    p_servantItemInfo = &this->fields.servantItemInfo;
    this->fields.servantItemInfo = v44;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&this->fields.servantItemInfo,
      (System_Int32_array **)v44,
      v47,
      v48,
      v49,
      v50,
      v51,
      v52);
    MemberItem = (__int64)this->fields.servantItemDraw;
    if ( !MemberItem )
      goto LABEL_70;
    EquipGraphServantItemDraw__SetItem((EquipGraphServantItemDraw_o *)MemberItem, this->fields.servantItemInfo, v53);
    MemberItem = (__int64)this->fields.servantItemDraw;
    if ( !MemberItem )
      goto LABEL_70;
    EquipGraphServantItemDraw__SetInput((EquipGraphServantItemDraw_o *)MemberItem, 0, v54);
    MemberItem = (__int64)UserGameMaster__getSelfUserGame(0LL);
    servantItemInfo = this->fields.servantItemInfo;
    this->fields.maxCost = partyItem->fields.maxCost;
    if ( !servantItemInfo )
      goto LABEL_70;
    equipServantEntity = servantItemInfo->fields.equipServantEntity;
    v57 = MemberItem;
    if ( equipServantEntity )
      LODWORD(equipServantEntity) = equipServantEntity->fields.cost;
    this->fields.baseCost = partyItem->fields.cost - (_DWORD)equipServantEntity;
    MemberItem = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !MemberItem )
      goto LABEL_70;
    partyItema = partyItem;
    MemberItem = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                            (DataManager_o *)MemberItem,
                            (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserServantMaster___);
    if ( !MemberItem )
      goto LABEL_70;
    ServantEquipList = UserServantMaster__getServantEquipList((UserServantMaster_o *)MemberItem, 0LL);
    infoDataLabel = (UnityEngine_Object_o *)this->fields.infoDataLabel;
    v60 = ServantEquipList;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v82 = this;
    if ( UnityEngine_Object__op_Inequality(infoDataLabel, 0LL, 0LL) )
    {
      v61 = this->fields.infoDataLabel;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      MemberItem = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_12469/*"SUM_INFO"*/, 0LL);
      if ( !v60 )
        goto LABEL_70;
      v62 = (System_String_o *)MemberItem;
      v84 = *(_QWORD *)&v60->max_length;
      MemberItem = j_il2cpp_value_box_0(int_TypeInfo, &v84);
      if ( !v57 )
        goto LABEL_70;
      v63 = (Il2CppObject *)MemberItem;
      v83 = *(_DWORD *)(v57 + 148);
      v64 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v83);
      MemberItem = (__int64)System_String__Format_44301068(v62, v63, v64, 0LL);
      if ( !v61 )
        goto LABEL_70;
      UILabel__set_text(v61, (System_String_o *)MemberItem, 0LL);
      this = v82;
    }
    MemberItem = (__int64)this->fields.bonusFilterKindButton;
    if ( !MemberItem )
      goto LABEL_70;
    MemberItem = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)MemberItem, 0LL);
    if ( !*p_sort )
      goto LABEL_70;
    if ( !MemberItem )
      goto LABEL_70;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)MemberItem, (*p_sort)->fields.isBonusKind, 0LL);
    ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
    if ( !v60 )
      goto LABEL_70;
    v65 = *(_QWORD *)&v60->max_length;
    if ( (int)v65 >= 1 )
    {
      v66 = v60;
      v67 = 0LL;
      m_Items = v60->m_Items;
      while ( 1 )
      {
        if ( v67 >= (unsigned int)v65 )
        {
          v80 = sub_B2C460(MemberItem);
          sub_B2C400(v80, 0LL);
        }
        MemberItem = (__int64)*p_servantItemInfo;
        if ( !*p_servantItemInfo )
          break;
        v69 = m_Items[v67];
        MemberItem = EquipGraphServantItem__get_EquipUserSvtId((EquipGraphServantItem_o *)MemberItem, v28);
        if ( !*p_servantItemInfo )
          break;
        v70 = MemberItem;
        v71 = (EquipGraphListViewItem_o *)sub_B2C42C(EquipGraphListViewItem_TypeInfo);
        EquipGraphListViewItem___ctor_29506184(v71, v67, v69, v70, v72, partyItema, setupInfo, v73);
        this = v82;
        MemberItem = (__int64)v82->fields.itemList;
        if ( !MemberItem )
          break;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)MemberItem,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v71,
          (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
        LODWORD(v65) = v66->max_length;
        if ( (__int64)++v67 >= (int)v65 )
          goto LABEL_59;
      }
LABEL_70:
      sub_B2C434(MemberItem, v28);
    }
LABEL_59:
    itemList = this->fields.itemList;
    if ( !itemList )
      goto LABEL_70;
    emptyMessageLabel = this->fields.emptyMessageLabel;
    v76 = (System_String_o **)(itemList->fields._size <= 0 ? &StringLiteral_11690/*"SERVANT_EQUIP_EMPTY"*/ : &StringLiteral_11892/*"SERVANT_SORT_FILTER_RESULT_EMPTY"*/);
    v77 = *v76;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    MemberItem = (__int64)LocalizationManager__Get(v77, 0LL);
    if ( !emptyMessageLabel )
      goto LABEL_70;
    UILabel__set_text(emptyMessageLabel, (System_String_o *)MemberItem, 0LL);
    EquipGraphListViewManager__RefrashListDisp(this, v78);
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
    EquipGraphListViewManager__SetFilterButtonImage(this, v79);
  }
}


void __fastcall EquipGraphListViewManager__DeleteContinueData(const MethodInfo *method)
{
  __int64 v1; // x1
  EquipGraphListViewManager_c *v2; // x0
  ListViewSort_o *sortStatus; // x0

  if ( (byte_418A17F & 1) == 0 )
  {
    sub_B2C35C(&EquipGraphListViewManager_TypeInfo, v1);
    byte_418A17F = 1;
  }
  v2 = EquipGraphListViewManager_TypeInfo;
  if ( (BYTE3(EquipGraphListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EquipGraphListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EquipGraphListViewManager_TypeInfo);
    v2 = EquipGraphListViewManager_TypeInfo;
  }
  sortStatus = v2->static_fields->sortStatus;
  if ( !sortStatus
    || (ListViewSort__DeleteContinueData(sortStatus, 0LL),
        (sortStatus = EquipGraphListViewManager_TypeInfo->static_fields->warBoardSortStatus) == 0LL) )
  {
    sub_B2C434(sortStatus, v1);
  }
  ListViewSort__DeleteContinueData(sortStatus, 0LL);
}


void __fastcall EquipGraphListViewManager__DestroyList(EquipGraphListViewManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  ListViewSort_o *sort; // x0
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7

  ListViewManager__DestroyList((ListViewManager_o *)this, 0LL);
  sort = this->fields.sort;
  if ( !sort )
    sub_B2C434(0LL, v3);
  ListViewSort__Save(sort, 0LL);
  this->fields.bonusEventIdList = 0LL;
  sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.bonusEventIdList, 0LL, v5, v6, v7, v8, v9, v10);
}


void __fastcall EquipGraphListViewManager__EndCloseSelectFilterKind(
        EquipGraphListViewManager_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall EquipGraphListViewManager__EndCloseSelectSortKind(
        EquipGraphListViewManager_o *this,
        const MethodInfo *method)
{
  ;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EquipGraphListViewManager__EndSelectConfirm(
        EquipGraphListViewManager_o *this,
        bool result,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  int64_t Instance; // x0
  const MethodInfo *v16; // x1
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  struct EquipGraphListViewItem_o *selectItem; // x8
  int64_t v24; // x2
  _BOOL8 v25; // x0
  __int64 v26; // x1
  Il2CppObject *v27; // x27
  __int64 v28; // x10
  int klass_high; // w9
  int32_t baseCost; // w8
  _DWORD *monitor; // x9
  UnityEngine_Object_o *v32; // x21
  _BOOL8 v33; // x0
  __int64 v34; // x1
  void *v35; // x8
  __int64 v36; // x11
  __int64 v37; // x11
  EquipGraphListViewObject_o *v38; // x21
  const MethodInfo *v39; // x1
  struct PartyListViewItem_array **p_waveDeckItemList; // x20
  struct PartyListViewItem_array *v41; // x26
  __int64 v42; // x8
  unsigned __int64 v43; // x27
  PartyListViewItem_o *v44; // x20
  int32_t i; // w21
  struct EquipGraphListViewItem_o *v46; // x8
  struct ServantEntity_o *servantEntity; // x8
  PartyOrganizationListViewItem_o *v48; // x22
  __int64 v49; // x23
  __int64 v50; // x24
  int v51; // w23
  struct PartyListViewItem_array *waveDeckItemList; // x9
  int v53; // w10
  struct PartyListViewItem_array *v54; // x8
  int v55; // w9
  struct EquipGraphListViewItem_o *v56; // x10
  struct UserServantEntity_o *userSvtEntity; // x10
  int32_t memberIndex; // w21
  __int128 v59; // q1
  PartyListViewItem_o *v60; // x20
  _BOOL8 v61; // x0
  __int64 v62; // x1
  const MethodInfo *v63; // x4
  EquipGraphListViewItem_o *current; // x22
  __int64 v65; // x10
  UnityEngine_Object_o *viewObject; // x23
  _BOOL8 v67; // x0
  __int64 v68; // x1
  struct ListViewObject_o *v69; // x8
  __int64 v70; // x11
  __int64 v71; // x11
  EquipGraphListViewObject_o *v72; // x22
  const MethodInfo *v73; // x1
  struct EquipGraphListViewItem_o *v74; // x8
  struct EquipGraphListViewItem_o *v75; // x8
  struct ServantEntity_o *v76; // x10
  struct UserServantEntity_o *v77; // x8
  __int128 v78; // q1
  EquipGraphServantItem_o *servantItemInfo; // x20
  const MethodInfo *v80; // x2
  const MethodInfo *v81; // x2
  struct EquipGraphListViewItem_o *v82; // x8
  UnityEngine_Object_o *v83; // x20
  struct EquipGraphListViewItem_o *v84; // x8
  EquipGraphListViewObject_o *v85; // x20
  __int64 v86; // x10
  const MethodInfo *v87; // x1
  System_Action_o *selectItemCallbackFunc; // x20
  __int64 v89; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v90; // [xsp+10h] [xbp-F0h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v91; // [xsp+38h] [xbp-C8h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v92; // [xsp+50h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v93; // [xsp+70h] [xbp-90h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v94; // [xsp+90h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v95; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o EquipSvtId; // 0:x0.16

  if ( (byte_418A191 & 1) == 0 )
  {
    sub_B2C35C(&BalanceConfig_TypeInfo, result);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v7);
    sub_B2C35C(&EquipGraphListViewItem_TypeInfo, v8);
    sub_B2C35C(&EquipGraphListViewObject_TypeInfo, v9);
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v10);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v11);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v12);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v13);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v14);
    byte_418A191 = 1;
  }
  memset(&v94, 0, sizeof(v94));
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_131;
  CommonUI__CloseConfirmDialog((CommonUI_o *)Instance, 0LL);
  if ( !result )
    goto LABEL_128;
  if ( this->fields.isWaveBattle )
  {
    selectItem = this->fields.selectItem;
    if ( !selectItem )
      goto LABEL_131;
    if ( selectItem->fields._OrganizedWave_k__BackingField < 1 )
    {
      p_waveDeckItemList = &this->fields.waveDeckItemList;
      if ( selectItem->fields._IsUnique_k__BackingField )
      {
        v41 = *p_waveDeckItemList;
        if ( !*p_waveDeckItemList )
          goto LABEL_131;
        v42 = *(_QWORD *)&v41->max_length;
        if ( (int)v42 >= 1 )
        {
          v43 = 0LL;
          do
          {
            if ( v43 >= (unsigned int)v42 )
              goto LABEL_136;
            v44 = v41->m_Items[v43];
            for ( i = 0; ; ++i )
            {
              Instance = (int64_t)BalanceConfig_TypeInfo;
              if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !BalanceConfig_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                Instance = (int64_t)BalanceConfig_TypeInfo;
              }
              if ( i >= *(_DWORD *)(*(_QWORD *)(Instance + 184) + 160LL) )
                break;
              if ( !v44 )
                goto LABEL_131;
              Instance = (int64_t)PartyListViewItem__GetMember(v44, i, 0LL);
              v46 = this->fields.selectItem;
              if ( !v46 )
                goto LABEL_131;
              servantEntity = v46->fields.servantEntity;
              if ( !servantEntity )
                goto LABEL_131;
              v48 = (PartyOrganizationListViewItem_o *)Instance;
              v50 = *(_QWORD *)&servantEntity->fields.id.fields.currentCryptoKey;
              v49 = *(_QWORD *)&servantEntity->fields.id.fields.fakeValue;
              if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
              }
              *(_QWORD *)&v95.fields.currentCryptoKey = v50;
              *(_QWORD *)&v95.fields.fakeValue = v49;
              Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v95, 0LL);
              if ( !v48 )
                goto LABEL_131;
              v51 = Instance;
              EquipSvtId = PartyOrganizationListViewItem__get_EquipSvtId(v48, 0LL);
              if ( v51 == CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(EquipSvtId, 0LL) )
                PartyListViewItem__SetEquip(v44, i, 0LL, 0LL);
            }
            LODWORD(v42) = v41->max_length;
            ++v43;
          }
          while ( (__int64)v43 < (int)v42 );
          p_waveDeckItemList = &this->fields.waveDeckItemList;
        }
      }
    }
    else
    {
      Instance = (int64_t)this->fields.servantItemInfo;
      if ( !Instance )
        goto LABEL_131;
      if ( *(_QWORD *)(Instance + 72) )
      {
        Instance = EquipGraphServantItem__get_EquipUserSvtId((EquipGraphServantItem_o *)Instance, v16);
        selectItem = this->fields.selectItem;
        if ( !selectItem )
          goto LABEL_131;
        v24 = Instance;
      }
      else
      {
        v24 = 0LL;
      }
      waveDeckItemList = this->fields.waveDeckItemList;
      if ( !waveDeckItemList )
LABEL_131:
        sub_B2C434(Instance, v16);
      v53 = selectItem->fields._OrganizedWave_k__BackingField - 1;
      if ( v53 >= waveDeckItemList->max_length )
      {
LABEL_136:
        v89 = sub_B2C460(Instance);
        sub_B2C400(v89, 0LL);
      }
      Instance = (int64_t)waveDeckItemList->m_Items[v53];
      if ( !Instance )
        goto LABEL_131;
      p_waveDeckItemList = &this->fields.waveDeckItemList;
      PartyListViewItem__SetEquip((PartyListViewItem_o *)Instance, selectItem->fields.wearerMember, v24, 0LL);
    }
    v54 = *p_waveDeckItemList;
    if ( !*p_waveDeckItemList )
      goto LABEL_131;
    v55 = this->fields.partyNumber - 1;
    if ( v55 < v54->max_length )
    {
      v56 = this->fields.selectItem;
      if ( v56 )
      {
        userSvtEntity = v56->fields.userSvtEntity;
        if ( userSvtEntity )
        {
          memberIndex = this->fields.memberIndex;
          v59 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
          v60 = v54->m_Items[v55];
          *(_OWORD *)&v93.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
          *(_OWORD *)&v93.fields.fakeValue = v59;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          }
          v92 = v93;
          Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v92, 0LL);
          if ( v60 )
          {
            PartyListViewItem__SetEquip(v60, memberIndex, Instance, 0LL);
            Instance = (int64_t)this->fields.itemList;
            if ( Instance )
            {
              System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
                &v91,
                (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)Instance,
                (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
              v94 = v91;
              while ( 1 )
              {
                v61 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                        &v94,
                        (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
                if ( !v61 )
                  break;
                current = (EquipGraphListViewItem_o *)v94.fields.current;
                if ( !v94.fields.current
                  || (v65 = *(&EquipGraphListViewItem_TypeInfo->_2.bitflags2 + 1),
                      *(&v94.fields.current->klass->_2.bitflags2 + 1) < (unsigned int)v65)
                  || (EquipGraphListViewItem_c *)v94.fields.current->klass->_2.typeHierarchy[v65 - 1] != EquipGraphListViewItem_TypeInfo )
                {
                  sub_B2C434(v61, v62);
                }
                if ( BYTE1(v94.fields.current[9].klass) )
                  LOWORD(v94.fields.current[9].klass) = 0;
                EquipGraphListViewItem__UpdateWaveBattleInfo(
                  current,
                  this->fields.waveDeckItemList,
                  v60,
                  this->fields.memberIndex,
                  v63);
                viewObject = (UnityEngine_Object_o *)current->fields.viewObject;
                if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                }
                v67 = UnityEngine_Object__op_Inequality(viewObject, 0LL, 0LL);
                if ( v67 )
                {
                  v69 = current->fields.viewObject;
                  if ( !v69
                    || (v70 = *(&EquipGraphListViewObject_TypeInfo->_2.bitflags2 + 1),
                        *(&v69->klass->_2.bitflags2 + 1) < (unsigned int)v70)
                    || (EquipGraphListViewObject_c *)v69->klass->_2.typeHierarchy[v70 - 1] != EquipGraphListViewObject_TypeInfo )
                  {
                    sub_B2C434(v67, v68);
                  }
                  v71 = *(&EquipGraphListViewObject_TypeInfo->_2.bitflags2 + 1);
                  if ( *(&v69->klass->_2.bitflags2 + 1) >= (unsigned int)v71 )
                  {
                    if ( (EquipGraphListViewObject_c *)v69->klass->_2.typeHierarchy[v71 - 1] == EquipGraphListViewObject_TypeInfo )
                      v72 = (EquipGraphListViewObject_o *)current->fields.viewObject;
                    else
                      v72 = 0LL;
                  }
                  else
                  {
                    v72 = 0LL;
                  }
                  UnityEngine_Vector3__get_zero(0LL);
                  if ( (byte_418A1A4 & 1) == 0 )
                  {
                    sub_B2C35C(&EquipGraphListViewItem_TypeInfo, v73);
                    byte_418A1A4 = 1;
                  }
                  EquipGraphListViewObject__SetupDisp(v72, v73);
                }
              }
              System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
                &v94,
                (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
              this->fields.baseCost = v60->fields.cost;
              goto LABEL_103;
            }
          }
        }
      }
      goto LABEL_131;
    }
    goto LABEL_136;
  }
  Instance = (int64_t)this->fields.itemList;
  if ( !Instance )
    goto LABEL_131;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v93,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)Instance,
    (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  v94.fields.current = (Il2CppObject *)v93.fields.fakeValue;
  *(_OWORD *)&v94.fields.list = *(_OWORD *)&v93.fields.currentCryptoKey;
  while ( 1 )
  {
    v25 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v94,
            (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    if ( !v25 )
      break;
    v27 = v94.fields.current;
    if ( !v94.fields.current
      || (v28 = *(&EquipGraphListViewItem_TypeInfo->_2.bitflags2 + 1),
          *(&v94.fields.current->klass->_2.bitflags2 + 1) < (unsigned int)v28)
      || (EquipGraphListViewItem_c *)v94.fields.current->klass->_2.typeHierarchy[v28 - 1] != EquipGraphListViewItem_TypeInfo )
    {
      sub_B2C434(v25, v26);
    }
    if ( BYTE1(v94.fields.current[9].klass) )
    {
      BYTE1(v94.fields.current[9].klass) = 0;
      klass_high = HIDWORD(v27[9].klass);
      if ( klass_high != this->fields.memberIndex && (klass_high & 0x80000000) == 0 )
      {
        baseCost = this->fields.baseCost;
        goto LABEL_25;
      }
      if ( SHIDWORD(v27[14].monitor) > 0 || BYTE4(v27[15].klass) )
      {
        baseCost = this->fields.baseCost;
        if ( (klass_high & 0x80000000) != 0 )
        {
          LODWORD(monitor) = 0;
          goto LABEL_28;
        }
LABEL_25:
        monitor = v27[7].monitor;
        if ( monitor )
          LODWORD(monitor) = monitor[38];
LABEL_28:
        this->fields.baseCost = (_DWORD)monitor + baseCost;
        v32 = (UnityEngine_Object_o *)v27[6].monitor;
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        v33 = UnityEngine_Object__op_Inequality(v32, 0LL, 0LL);
        if ( v33 )
        {
          v35 = v27[6].monitor;
          if ( !v35
            || (v36 = *(&EquipGraphListViewObject_TypeInfo->_2.bitflags2 + 1),
                *(unsigned __int8 *)(*(_QWORD *)v35 + 300LL) < (unsigned int)v36)
            || *(EquipGraphListViewObject_c **)(*(_QWORD *)(*(_QWORD *)v35 + 200LL) + 8 * v36 - 8) != EquipGraphListViewObject_TypeInfo )
          {
            sub_B2C434(v33, v34);
          }
          v37 = *(&EquipGraphListViewObject_TypeInfo->_2.bitflags2 + 1);
          if ( *(unsigned __int8 *)(*(_QWORD *)v35 + 300LL) >= (unsigned int)v37 )
          {
            if ( *(EquipGraphListViewObject_c **)(*(_QWORD *)(*(_QWORD *)v35 + 200LL) + 8 * v37 - 8) == EquipGraphListViewObject_TypeInfo )
              v38 = (EquipGraphListViewObject_o *)v27[6].monitor;
            else
              v38 = 0LL;
          }
          else
          {
            v38 = 0LL;
          }
          UnityEngine_Vector3__get_zero(0LL);
          if ( (byte_418A1A4 & 1) == 0 )
          {
            sub_B2C35C(&EquipGraphListViewItem_TypeInfo, v39);
            byte_418A1A4 = 1;
          }
          EquipGraphListViewObject__SetupDisp(v38, v39);
        }
      }
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v94,
    (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
LABEL_103:
  v74 = this->fields.selectItem;
  if ( !v74 )
    goto LABEL_131;
  v74->fields.isBase = 1;
  v75 = this->fields.selectItem;
  if ( !v75 )
    goto LABEL_131;
  if ( (v75->fields.wearerMember & 0x80000000) != 0 )
  {
    LODWORD(v76) = 0;
  }
  else
  {
    v76 = v75->fields.servantEntity;
    if ( v76 )
      LODWORD(v76) = v76->fields.cost;
  }
  this->fields.baseCost -= (int)v76;
  v77 = v75->fields.userSvtEntity;
  if ( !v77 )
    goto LABEL_131;
  v78 = *(_OWORD *)&v77->fields.id.fields.fakeValue;
  servantItemInfo = this->fields.servantItemInfo;
  *(_OWORD *)&v93.fields.currentCryptoKey = *(_OWORD *)&v77->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v93.fields.fakeValue = v78;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v90 = v93;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v90, 0LL);
  if ( !servantItemInfo )
    goto LABEL_131;
  EquipGraphServantItem__SetEquipTarget(servantItemInfo, Instance, v80);
  Instance = (int64_t)this->fields.servantItemDraw;
  if ( !Instance )
    goto LABEL_131;
  EquipGraphServantItemDraw__SetItem((EquipGraphServantItemDraw_o *)Instance, this->fields.servantItemInfo, v81);
  v82 = this->fields.selectItem;
  if ( !v82 )
    goto LABEL_131;
  v83 = (UnityEngine_Object_o *)v82->fields.viewObject;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  Instance = UnityEngine_Object__op_Inequality(v83, 0LL, 0LL);
  if ( (Instance & 1) != 0 )
  {
    v84 = this->fields.selectItem;
    if ( v84 )
    {
      v85 = (EquipGraphListViewObject_o *)v84->fields.viewObject;
      if ( v85 )
      {
        v86 = *(&EquipGraphListViewObject_TypeInfo->_2.bitflags2 + 1);
        if ( *(&v85->klass->_2.bitflags2 + 1) >= (unsigned int)v86
          && (EquipGraphListViewObject_c *)v85->klass->_2.typeHierarchy[v86 - 1] == EquipGraphListViewObject_TypeInfo )
        {
          UnityEngine_Vector3__get_zero(0LL);
          if ( (byte_418A1A4 & 1) == 0 )
          {
            sub_B2C35C(&EquipGraphListViewItem_TypeInfo, v87);
            byte_418A1A4 = 1;
          }
          EquipGraphListViewObject__SetupDisp(v85, v87);
          goto LABEL_127;
        }
      }
    }
    goto LABEL_131;
  }
LABEL_127:
  EquipGraphListViewManager__RefrashListDisp(this, v16);
LABEL_128:
  selectItemCallbackFunc = this->fields.selectItemCallbackFunc;
  if ( selectItemCallbackFunc )
  {
    this->fields.selectItemCallbackFunc = 0LL;
    sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.selectItemCallbackFunc, 0LL, v17, v18, v19, v20, v21, v22);
    System_Action__Invoke(selectItemCallbackFunc, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EquipGraphListViewManager__EndSelectFilterKind(
        EquipGraphListViewManager_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  const MethodInfo *v7; // x1
  CommonUI_o *Instance; // x20
  System_Action_o *v9; // x21
  __int64 v10; // x0
  __int64 v11; // x1

  if ( (byte_418A193 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, isDecide);
    sub_B2C35C(&Method_EquipGraphListViewManager_EndCloseSelectFilterKind__, v5);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    byte_418A193 = 1;
  }
  if ( isDecide )
  {
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
    EquipGraphListViewManager__SetFilterButtonImage(this, v7);
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v9 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(v9, (Il2CppObject *)this, Method_EquipGraphListViewManager_EndCloseSelectFilterKind__, 0LL);
  if ( !Instance )
    sub_B2C434(v10, v11);
  CommonUI__CloseServantFilterSelectMenu(Instance, v9, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EquipGraphListViewManager__EndSelectSortKind(
        EquipGraphListViewManager_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  CommonUI_o *Instance; // x20
  System_Action_o *v8; // x21
  __int64 v9; // x0
  __int64 v10; // x1

  if ( (byte_418A197 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, isDecide);
    sub_B2C35C(&Method_EquipGraphListViewManager_EndCloseSelectSortKind__, v5);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    byte_418A197 = 1;
  }
  if ( isDecide )
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v8 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(v8, (Il2CppObject *)this, Method_EquipGraphListViewManager_EndCloseSelectSortKind__, 0LL);
  if ( !Instance )
    sub_B2C434(v9, v10);
  CommonUI__CloseServantSortSelectMenu(Instance, v8, 0LL);
}


// local variable allocation has failed, the output may be wrong!
int64_t __fastcall EquipGraphListViewManager__GetAmountSortValue(
        EquipGraphListViewManager_o *this,
        int32_t svtId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x0
  int64_t v12; // x19
  Il2CppObject *current; // x8
  __int64 v14; // x11
  Il2CppClass *klass; // x8
  Il2CppClass *parent; // x21
  Il2CppClass *declaringType; // x22
  _BOOL8 v18; // x0
  __int64 v19; // x1
  System_Collections_Generic_List_Enumerator_T__o v21; // [xsp+8h] [xbp-58h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v22; // 0:x0.16

  if ( (byte_418A19A & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__, *(_QWORD *)&svtId);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v6);
    sub_B2C35C(&EquipGraphListViewItem_TypeInfo, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v9);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v10);
    byte_418A19A = 1;
  }
  memset(&v21, 0, sizeof(v21));
  itemList = this->fields.itemList;
  if ( !itemList )
    sub_B2C434(0LL, *(_QWORD *)&svtId);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v21,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)itemList,
    (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  v12 = 0LL;
  while ( 1 )
  {
    v18 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v21,
            (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    if ( !v18 )
      break;
    current = v21.fields.current;
    if ( !v21.fields.current
      || (v14 = *(&EquipGraphListViewItem_TypeInfo->_2.bitflags2 + 1),
          *(&v21.fields.current->klass->_2.bitflags2 + 1) < (unsigned int)v14)
      || (EquipGraphListViewItem_c *)v21.fields.current->klass->_2.typeHierarchy[v14 - 1] != EquipGraphListViewItem_TypeInfo )
    {
      sub_B2C434(v18, v19);
    }
    if ( (EquipGraphListViewItem_c *)v21.fields.current->klass->_2.typeHierarchy[*(&EquipGraphListViewItem_TypeInfo->_2.bitflags2
                                                                                 + 1)
                                                                               - 1] != EquipGraphListViewItem_TypeInfo )
      current = 0LL;
    klass = current[7].klass;
    if ( !klass )
      sub_B2C434(v18, v19);
    declaringType = klass->_1.declaringType;
    parent = klass->_1.parent;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v22.fields.currentCryptoKey = declaringType;
    *(_QWORD *)&v22.fields.fakeValue = parent;
    if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v22, 0LL) == svtId )
      ++v12;
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v21,
    (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
  return v12;
}


// local variable allocation has failed, the output may be wrong!
EquipGraphListViewItem_o *__fastcall EquipGraphListViewManager__GetItem(
        EquipGraphListViewManager_o *this,
        int32_t index,
        const MethodInfo *method)
{
  __int64 v5; // x1
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x20
  ListViewItem_o *v7; // x8
  __int64 v8; // x11

  if ( (byte_418A186 & 1) == 0 )
  {
    sub_B2C35C(&EquipGraphListViewItem_TypeInfo, *(_QWORD *)&index);
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v5);
    byte_418A186 = 1;
  }
  itemList = this->fields.itemList;
  if ( !itemList )
    return 0LL;
  if ( itemList->fields._size <= (unsigned int)index )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
  v7 = itemList->fields._items->m_Items[index];
  if ( !v7 )
    return 0LL;
  v8 = *(&EquipGraphListViewItem_TypeInfo->_2.bitflags2 + 1);
  if ( *(&v7->klass->_2.bitflags2 + 1) < (unsigned int)v8 )
    return 0LL;
  if ( (EquipGraphListViewItem_c *)v7->klass->_2.typeHierarchy[v8 - 1] == EquipGraphListViewItem_TypeInfo )
    return (EquipGraphListViewItem_o *)itemList->fields._items->m_Items[index];
  return 0LL;
}


System_String_o *__fastcall EquipGraphListViewManager__GetScaleButtonSpriteName(
        EquipGraphListViewManager_o *this,
        const MethodInfo *method)
{
  ListViewSort_o *sort; // x0

  sort = this->fields.sort;
  if ( !sort )
    sub_B2C434(0LL, method);
  return ListViewSort__GetScaleKindSpriteName(sort, this->fields.scaleType, 0LL);
}


int32_t __fastcall EquipGraphListViewManager__GetSelect(EquipGraphListViewManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x0
  _BOOL8 v8; // x0
  __int64 v9; // x1
  __int64 v10; // x11
  int32_t klass_high; // w19
  int v12; // w20
  System_Collections_Generic_List_Enumerator_T__o v14; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_418A18E & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v3);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v4);
    sub_B2C35C(&EquipGraphListViewItem_TypeInfo, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v6);
    byte_418A18E = 1;
  }
  memset(&v14, 0, sizeof(v14));
  itemList = this->fields.itemList;
  if ( !itemList )
    sub_B2C434(0LL, method);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v14,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)itemList,
    (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  while ( 1 )
  {
    v8 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
           &v14,
           (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    if ( !v8 )
      break;
    if ( !v14.fields.current
      || (v10 = *(&EquipGraphListViewItem_TypeInfo->_2.bitflags2 + 1),
          *(&v14.fields.current->klass->_2.bitflags2 + 1) < (unsigned int)v10)
      || (EquipGraphListViewItem_c *)v14.fields.current->klass->_2.typeHierarchy[v10 - 1] != EquipGraphListViewItem_TypeInfo )
    {
      sub_B2C434(v8, v9);
    }
    if ( BYTE1(v14.fields.current[9].klass) )
    {
      klass_high = HIDWORD(v14.fields.current[1].klass);
      v12 = 3;
      goto LABEL_12;
    }
  }
  klass_high = 0;
  v12 = 1;
LABEL_12:
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v14,
    (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
  if ( (unsigned int)(v12 + 1) >> 2 )
    return klass_high;
  else
    return -1;
}


EquipGraphListViewItem_o *__fastcall EquipGraphListViewManager__GetSelectItem(
        EquipGraphListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x0
  _BOOL8 v8; // x0
  __int64 v9; // x1
  Il2CppObject *current; // x19
  __int64 v11; // x10
  char v12; // w20
  System_Collections_Generic_List_Enumerator_T__o v14; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_418A18F & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v3);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v4);
    sub_B2C35C(&EquipGraphListViewItem_TypeInfo, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v6);
    byte_418A18F = 1;
  }
  memset(&v14, 0, sizeof(v14));
  itemList = this->fields.itemList;
  if ( !itemList )
    sub_B2C434(0LL, method);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v14,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)itemList,
    (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  while ( 1 )
  {
    v8 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
           &v14,
           (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    if ( !v8 )
      break;
    current = v14.fields.current;
    if ( !v14.fields.current
      || (v11 = *(&EquipGraphListViewItem_TypeInfo->_2.bitflags2 + 1),
          *(&v14.fields.current->klass->_2.bitflags2 + 1) < (unsigned int)v11)
      || (EquipGraphListViewItem_c *)v14.fields.current->klass->_2.typeHierarchy[v11 - 1] != EquipGraphListViewItem_TypeInfo )
    {
      sub_B2C434(v8, v9);
    }
    if ( BYTE1(v14.fields.current[9].klass) )
    {
      v12 = 2;
      goto LABEL_12;
    }
  }
  v12 = 0;
  current = 0LL;
LABEL_12:
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v14,
    (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
  if ( ((v12 + 2) & 3) != 0 )
    return 0LL;
  else
    return (EquipGraphListViewItem_o *)current;
}


EquipGraphServantItem_o *__fastcall EquipGraphListViewManager__GetServantItemInfo(
        EquipGraphListViewManager_o *this,
        const MethodInfo *method)
{
  return this->fields.servantItemInfo;
}


bool __fastcall EquipGraphListViewManager__GetSwapChoiceList(
        EquipGraphListViewManager_o *this,
        System_Int64_array **choiceList,
        System_Int64_array **unchoiceList,
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
  System_Collections_Generic_List_long__o *v14; // x23
  System_Collections_Generic_List_long__o *v15; // x22
  int64_t v16; // x0
  __int64 v17; // x1
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x19
  signed __int64 size; // x24
  unsigned __int64 v26; // x25
  ListViewItem_o *v27; // x8
  __int64 v28; // x11
  ListViewItem_c *klass; // x9
  Il2CppType byval_arg; // q0
  const MethodInfo_2F6CFA8 *v31; // x2
  int64_t v32; // x1
  System_Collections_Generic_List_long__o *v33; // x0
  Il2CppType v34; // q0
  System_Int64_array *v35; // x0
  System_String_array **v36; // x2
  System_String_array **v37; // x3
  System_Boolean_array **v38; // x4
  System_Int32_array **v39; // x5
  System_Int32_array *v40; // x6
  System_Int32_array *v41; // x7
  System_Int64_array *v42; // x0
  System_String_array **v43; // x2
  System_String_array **v44; // x3
  System_Boolean_array **v45; // x4
  System_Int32_array **v46; // x5
  System_Int32_array *v47; // x6
  System_Int32_array *v48; // x7
  System_String_array **v50; // x2
  System_String_array **v51; // x3
  System_Boolean_array **v52; // x4
  System_Int32_array **v53; // x5
  System_Int32_array *v54; // x6
  System_Int32_array *v55; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v57; // [xsp+10h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v58; // [xsp+30h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v59; // [xsp+50h] [xbp-70h]

  if ( (byte_418A188 & 1) == 0 )
  {
    sub_B2C35C(&EquipGraphListViewItem_TypeInfo, choiceList);
    sub_B2C35C(&Method_System_Collections_Generic_List_long__Add__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_long__ToArray__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_long___ctor__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_long__get_Count__, v9);
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v10);
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v11);
    sub_B2C35C(&System_Collections_Generic_List_long__TypeInfo, v12);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v13);
    byte_418A188 = 1;
  }
  v14 = (System_Collections_Generic_List_long__o *)sub_B2C42C(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v14,
    (const MethodInfo_2F6C24C *)Method_System_Collections_Generic_List_long___ctor__);
  v15 = (System_Collections_Generic_List_long__o *)sub_B2C42C(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v15,
    (const MethodInfo_2F6C24C *)Method_System_Collections_Generic_List_long___ctor__);
  itemList = this->fields.itemList;
  if ( !itemList )
    goto LABEL_33;
  size = itemList->fields._size;
  if ( (int)size >= 1 )
  {
    v26 = 0LL;
    do
    {
      if ( v26 >= (unsigned int)itemList->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
      v27 = itemList->fields._items->m_Items[v26];
      if ( !v27 )
        break;
      v28 = *(&EquipGraphListViewItem_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v27->klass->_2.bitflags2 + 1) < (unsigned int)v28
        || (EquipGraphListViewItem_c *)v27->klass->_2.typeHierarchy[v28 - 1] != EquipGraphListViewItem_TypeInfo )
      {
        break;
      }
      klass = v27[1].klass;
      if ( klass && v27[1].fields.isTerminationSpace )
      {
        if ( BYTE5(v27[1].fields.sortStr1) )
        {
          byval_arg = klass->_1.byval_arg;
          *(_OWORD *)&v59.fields.currentCryptoKey = *(_OWORD *)&klass->_1.name;
          *(Il2CppType *)&v59.fields.fakeValue = byval_arg;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          }
          v58 = v59;
          v16 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v58, 0LL);
          if ( !v15 )
            break;
          v31 = (const MethodInfo_2F6CFA8 *)Method_System_Collections_Generic_List_long__Add__;
          v32 = v16;
          v33 = v15;
        }
        else
        {
          v34 = klass->_1.byval_arg;
          *(_OWORD *)&v59.fields.currentCryptoKey = *(_OWORD *)&klass->_1.name;
          *(Il2CppType *)&v59.fields.fakeValue = v34;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          }
          v57 = v59;
          v16 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v57, 0LL);
          if ( !v14 )
            break;
          v31 = (const MethodInfo_2F6CFA8 *)Method_System_Collections_Generic_List_long__Add__;
          v32 = v16;
          v33 = v14;
        }
        System_Collections_Generic_List_long___Add(v33, v32, v31);
      }
      if ( (__int64)++v26 >= size )
        goto LABEL_28;
      itemList = this->fields.itemList;
    }
    while ( itemList );
LABEL_33:
    sub_B2C434(v16, v17);
  }
LABEL_28:
  if ( !v14 || !v15 )
    goto LABEL_33;
  if ( v15->fields._size + v14->fields._size < 1 )
  {
    *choiceList = 0LL;
    sub_B2C2F8((BattleServantConfConponent_o *)choiceList, 0LL, v18, v19, v20, v21, v22, v23);
    *unchoiceList = 0LL;
    sub_B2C2F8((BattleServantConfConponent_o *)unchoiceList, 0LL, v50, v51, v52, v53, v54, v55);
    return 0;
  }
  else
  {
    v35 = System_Collections_Generic_List_long___ToArray(
            v14,
            (const MethodInfo_2F6F0B4 *)Method_System_Collections_Generic_List_long__ToArray__);
    *choiceList = v35;
    sub_B2C2F8((BattleServantConfConponent_o *)choiceList, (System_Int32_array **)v35, v36, v37, v38, v39, v40, v41);
    v42 = System_Collections_Generic_List_long___ToArray(
            v15,
            (const MethodInfo_2F6F0B4 *)Method_System_Collections_Generic_List_long__ToArray__);
    *unchoiceList = v42;
    sub_B2C2F8((BattleServantConfConponent_o *)unchoiceList, (System_Int32_array **)v42, v43, v44, v45, v46, v47, v48);
    return 1;
  }
}


bool __fastcall EquipGraphListViewManager__GetSwapLockList(
        EquipGraphListViewManager_o *this,
        System_Int64_array **lockList,
        System_Int64_array **unlockList,
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
  System_Collections_Generic_List_long__o *v14; // x23
  System_Collections_Generic_List_long__o *v15; // x22
  int64_t v16; // x0
  __int64 v17; // x1
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x19
  signed __int64 size; // x24
  unsigned __int64 v26; // x25
  ListViewItem_o *v27; // x8
  __int64 v28; // x11
  ListViewItem_c *klass; // x9
  Il2CppType byval_arg; // q0
  const MethodInfo_2F6CFA8 *v31; // x2
  int64_t v32; // x1
  System_Collections_Generic_List_long__o *v33; // x0
  Il2CppType v34; // q0
  System_Int64_array *v35; // x0
  System_String_array **v36; // x2
  System_String_array **v37; // x3
  System_Boolean_array **v38; // x4
  System_Int32_array **v39; // x5
  System_Int32_array *v40; // x6
  System_Int32_array *v41; // x7
  System_Int64_array *v42; // x0
  System_String_array **v43; // x2
  System_String_array **v44; // x3
  System_Boolean_array **v45; // x4
  System_Int32_array **v46; // x5
  System_Int32_array *v47; // x6
  System_Int32_array *v48; // x7
  System_String_array **v50; // x2
  System_String_array **v51; // x3
  System_Boolean_array **v52; // x4
  System_Int32_array **v53; // x5
  System_Int32_array *v54; // x6
  System_Int32_array *v55; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v57; // [xsp+10h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v58; // [xsp+30h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v59; // [xsp+50h] [xbp-70h]

  if ( (byte_418A187 & 1) == 0 )
  {
    sub_B2C35C(&EquipGraphListViewItem_TypeInfo, lockList);
    sub_B2C35C(&Method_System_Collections_Generic_List_long__Add__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_long__ToArray__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_long___ctor__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_long__get_Count__, v9);
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v10);
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v11);
    sub_B2C35C(&System_Collections_Generic_List_long__TypeInfo, v12);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v13);
    byte_418A187 = 1;
  }
  v14 = (System_Collections_Generic_List_long__o *)sub_B2C42C(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v14,
    (const MethodInfo_2F6C24C *)Method_System_Collections_Generic_List_long___ctor__);
  v15 = (System_Collections_Generic_List_long__o *)sub_B2C42C(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v15,
    (const MethodInfo_2F6C24C *)Method_System_Collections_Generic_List_long___ctor__);
  itemList = this->fields.itemList;
  if ( !itemList )
    goto LABEL_33;
  size = itemList->fields._size;
  if ( (int)size >= 1 )
  {
    v26 = 0LL;
    do
    {
      if ( v26 >= (unsigned int)itemList->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
      v27 = itemList->fields._items->m_Items[v26];
      if ( !v27 )
        break;
      v28 = *(&EquipGraphListViewItem_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v27->klass->_2.bitflags2 + 1) < (unsigned int)v28
        || (EquipGraphListViewItem_c *)v27->klass->_2.typeHierarchy[v28 - 1] != EquipGraphListViewItem_TypeInfo )
      {
        break;
      }
      klass = v27[1].klass;
      if ( klass && v27[1].fields.isTermination )
      {
        if ( BYTE4(v27[1].fields.sortStr1) )
        {
          byval_arg = klass->_1.byval_arg;
          *(_OWORD *)&v59.fields.currentCryptoKey = *(_OWORD *)&klass->_1.name;
          *(Il2CppType *)&v59.fields.fakeValue = byval_arg;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          }
          v58 = v59;
          v16 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v58, 0LL);
          if ( !v15 )
            break;
          v31 = (const MethodInfo_2F6CFA8 *)Method_System_Collections_Generic_List_long__Add__;
          v32 = v16;
          v33 = v15;
        }
        else
        {
          v34 = klass->_1.byval_arg;
          *(_OWORD *)&v59.fields.currentCryptoKey = *(_OWORD *)&klass->_1.name;
          *(Il2CppType *)&v59.fields.fakeValue = v34;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          }
          v57 = v59;
          v16 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v57, 0LL);
          if ( !v14 )
            break;
          v31 = (const MethodInfo_2F6CFA8 *)Method_System_Collections_Generic_List_long__Add__;
          v32 = v16;
          v33 = v14;
        }
        System_Collections_Generic_List_long___Add(v33, v32, v31);
      }
      if ( (__int64)++v26 >= size )
        goto LABEL_28;
      itemList = this->fields.itemList;
    }
    while ( itemList );
LABEL_33:
    sub_B2C434(v16, v17);
  }
LABEL_28:
  if ( !v14 || !v15 )
    goto LABEL_33;
  if ( v15->fields._size + v14->fields._size < 1 )
  {
    *lockList = 0LL;
    sub_B2C2F8((BattleServantConfConponent_o *)lockList, 0LL, v18, v19, v20, v21, v22, v23);
    *unlockList = 0LL;
    sub_B2C2F8((BattleServantConfConponent_o *)unlockList, 0LL, v50, v51, v52, v53, v54, v55);
    return 0;
  }
  else
  {
    v35 = System_Collections_Generic_List_long___ToArray(
            v14,
            (const MethodInfo_2F6F0B4 *)Method_System_Collections_Generic_List_long__ToArray__);
    *lockList = v35;
    sub_B2C2F8((BattleServantConfConponent_o *)lockList, (System_Int32_array **)v35, v36, v37, v38, v39, v40, v41);
    v42 = System_Collections_Generic_List_long___ToArray(
            v15,
            (const MethodInfo_2F6F0B4 *)Method_System_Collections_Generic_List_long__ToArray__);
    *unlockList = v42;
    sub_B2C2F8((BattleServantConfConponent_o *)unlockList, (System_Int32_array **)v42, v43, v44, v45, v46, v47, v48);
    return 1;
  }
}


void __fastcall EquipGraphListViewManager__InitLoad(const MethodInfo *method)
{
  __int64 v1; // x1
  EquipGraphListViewManager_c *v2; // x0
  ListViewSort_o *sortStatus; // x0

  if ( (byte_418A180 & 1) == 0 )
  {
    sub_B2C35C(&EquipGraphListViewManager_TypeInfo, v1);
    byte_418A180 = 1;
  }
  v2 = EquipGraphListViewManager_TypeInfo;
  if ( (BYTE3(EquipGraphListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EquipGraphListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EquipGraphListViewManager_TypeInfo);
    v2 = EquipGraphListViewManager_TypeInfo;
  }
  sortStatus = v2->static_fields->sortStatus;
  if ( !sortStatus
    || (ListViewSort__InitLoad(sortStatus, 0LL),
        (sortStatus = EquipGraphListViewManager_TypeInfo->static_fields->warBoardSortStatus) == 0LL) )
  {
    sub_B2C434(sortStatus, v1);
  }
  ListViewSort__InitLoad(sortStatus, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EquipGraphListViewManager__ModifyList(
        EquipGraphListViewManager_o *this,
        bool isIconSizeChange,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  int64_t Instance; // x0
  const MethodInfo *v11; // x1
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x8
  signed __int64 size; // x25
  unsigned int v14; // w27
  int64_t v15; // x26
  __int64 v16; // x8
  System_Int32_array ***v17; // x26
  __int64 v18; // t1
  __int128 v19; // q0
  int64_t v20; // x22
  unsigned __int64 v21; // x21
  struct System_Collections_Generic_List_ListViewItem__o *v22; // x23
  EquipGraphListViewItem_o *v23; // x23
  __int64 v24; // x10
  struct UserServantEntity_o *userSvtEntity; // x8
  __int128 v26; // q0
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  System_Int32_array **v33; // x1
  const MethodInfo *v34; // x1
  __int64 v35; // x0
  unsigned __int64 v36; // x22
  struct System_Collections_Generic_List_ListViewItem__o *v37; // x20
  ListViewItem_o *v38; // x20
  __int64 v39; // x10
  UnityEngine_Object_o *viewObject; // x21
  __int64 v42; // [xsp+10h] [xbp-C0h]
  int64_t v43; // [xsp+18h] [xbp-B8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v44; // [xsp+20h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v45; // [xsp+40h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v46; // [xsp+60h] [xbp-70h]

  if ( (byte_418A185 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_UserServantMaster___, isIconSizeChange);
    sub_B2C35C(&EquipGraphListViewItem_TypeInfo, v4);
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v6);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v7);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v8);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    byte_418A185 = 1;
  }
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_52;
  Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !Instance )
    goto LABEL_52;
  Instance = (int64_t)UserServantMaster__getServantEquipList((UserServantMaster_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_52;
  itemList = this->fields.itemList;
  if ( !itemList )
    goto LABEL_52;
  size = itemList->fields._size;
  v42 = *(_QWORD *)(Instance + 24);
  if ( (int)v42 >= 1 )
  {
    if ( !(_DWORD)v42 )
    {
LABEL_34:
      v35 = sub_B2C460(Instance);
      sub_B2C400(v35, 0LL);
    }
    v14 = 0;
    v43 = Instance;
    while ( 1 )
    {
      v15 = Instance + 8LL * (int)v14;
      v18 = *(_QWORD *)(v15 + 32);
      v17 = (System_Int32_array ***)(v15 + 32);
      v16 = v18;
      if ( !v18 )
        break;
      v19 = *(_OWORD *)(v16 + 32);
      *(_OWORD *)&v46.fields.currentCryptoKey = *(_OWORD *)(v16 + 16);
      *(_OWORD *)&v46.fields.fakeValue = v19;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      }
      v45 = v46;
      Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v45, 0LL);
      if ( (int)size >= 1 )
      {
        v20 = Instance;
        v21 = 0LL;
        while ( 1 )
        {
          v22 = this->fields.itemList;
          if ( !v22 )
            goto LABEL_52;
          if ( v21 >= (unsigned int)v22->fields._size )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
          v23 = (EquipGraphListViewItem_o *)v22->fields._items->m_Items[v21];
          if ( !v23 )
            goto LABEL_52;
          v24 = *(&EquipGraphListViewItem_TypeInfo->_2.bitflags2 + 1);
          if ( *(&v23->klass->_2.bitflags2 + 1) < (unsigned int)v24
            || (EquipGraphListViewItem_c *)v23->klass->_2.typeHierarchy[v24 - 1] != EquipGraphListViewItem_TypeInfo )
          {
            goto LABEL_52;
          }
          userSvtEntity = v23->fields.userSvtEntity;
          if ( userSvtEntity )
          {
            v26 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
            *(_OWORD *)&v46.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
            *(_OWORD *)&v46.fields.fakeValue = v26;
            if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
            }
            v44 = v46;
            Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v44, 0LL);
            if ( Instance == v20 )
              break;
          }
          if ( (__int64)++v21 >= size )
            goto LABEL_32;
        }
        if ( v14 >= *(_DWORD *)(v43 + 24) )
          goto LABEL_34;
        v33 = *v17;
        v23->fields.userSvtEntity = (struct UserServantEntity_o *)*v17;
        sub_B2C2F8((BattleServantConfConponent_o *)&v23->fields.userSvtEntity, v33, v27, v28, v29, v30, v31, v32);
        if ( !isIconSizeChange )
        {
          EquipGraphListViewItem__ModifyLockItem(v23, v11);
          EquipGraphListViewItem__ModifyChoiceItem(v23, v34);
        }
      }
LABEL_32:
      Instance = v43;
      if ( (int)++v14 >= (int)v42 )
        goto LABEL_35;
      if ( v14 >= *(_DWORD *)(v43 + 24) )
        goto LABEL_34;
    }
LABEL_52:
    sub_B2C434(Instance, v11);
  }
LABEL_35:
  if ( (int)size >= 1 && isIconSizeChange )
  {
    v36 = 0LL;
    while ( 1 )
    {
      v37 = this->fields.itemList;
      if ( !v37 )
        goto LABEL_52;
      if ( v36 >= (unsigned int)v37->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
      v38 = v37->fields._items->m_Items[v36];
      if ( v38 )
      {
        v39 = *(&EquipGraphListViewItem_TypeInfo->_2.bitflags2 + 1);
        if ( *(&v38->klass->_2.bitflags2 + 1) >= (unsigned int)v39
          && (EquipGraphListViewItem_c *)v38->klass->_2.typeHierarchy[v39 - 1] == EquipGraphListViewItem_TypeInfo )
        {
          viewObject = (UnityEngine_Object_o *)v38->fields.viewObject;
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          Instance = UnityEngine_Object__op_Equality(viewObject, 0LL, 0LL);
          if ( (Instance & 1) == 0 )
          {
            Instance = (int64_t)v38->fields.viewObject;
            if ( !Instance )
              goto LABEL_52;
            ListViewObject__SetItemSeed((ListViewObject_o *)Instance, v38, this->fields.seed, 0LL);
          }
        }
      }
      if ( (__int64)++v36 >= size )
        return;
    }
  }
}


void __fastcall EquipGraphListViewManager__OnClickBonusFilterKind(
        EquipGraphListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  ListViewSort_o *sort; // x0
  System_Int32_array *bonusEventIdList; // x1

  if ( (byte_418A195 & 1) == 0 )
  {
    sub_B2C35C(&SoundManager_TypeInfo, method);
    byte_418A195 = 1;
  }
  if ( this->fields.isInput )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    sort = this->fields.sort;
    if ( !sort )
      sub_B2C434(0LL, v3);
    bonusEventIdList = this->fields.bonusEventIdList;
    if ( this->fields.isQuestStart )
      ListViewSort__IncBonusKind(sort, bonusEventIdList, 0LL, 0, 0LL, 0LL);
    else
      ListViewSort__IncBonusKind2(sort, bonusEventIdList, 0LL, 0LL, 0LL, 0LL, 0LL);
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
  }
}


void __fastcall EquipGraphListViewManager__OnClickDecide(EquipGraphListViewManager_o *this, const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  EquipGraphListViewManager_CallbackFunc_o *callbackFunc; // x19
  const MethodInfo *v10; // x1
  int32_t Select; // w2

  callbackFunc = this->fields.callbackFunc;
  this->fields.callbackFunc = 0LL;
  sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.callbackFunc, 0LL, v2, v3, v4, v5, v6, v7);
  if ( callbackFunc )
  {
    Select = EquipGraphListViewManager__GetSelect(this, v10);
    EquipGraphListViewManager_CallbackFunc__Invoke(callbackFunc, 1, Select, 0LL);
  }
}


void __fastcall EquipGraphListViewManager__OnClickEquipExplanation(
        EquipGraphListViewManager_o *this,
        const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  struct EquipGraphListMenu_o *equipGraphListMenu; // x8
  EquipGraphListViewManager_CallbackFunc_o *callbackFunc; // x20
  const MethodInfo *v11; // x1
  int32_t Select; // w2

  equipGraphListMenu = this->fields.equipGraphListMenu;
  if ( !equipGraphListMenu )
    sub_B2C434(this, method);
  if ( !equipGraphListMenu->fields.modeKind )
  {
    callbackFunc = this->fields.callbackFunc;
    this->fields.callbackFunc = 0LL;
    sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.callbackFunc, 0LL, v2, v3, v4, v5, v6, v7);
    if ( callbackFunc )
    {
      Select = EquipGraphListViewManager__GetSelect(this, v11);
      EquipGraphListViewManager_CallbackFunc__Invoke(callbackFunc, 3, Select, 0LL);
    }
  }
}


void __fastcall EquipGraphListViewManager__OnClickFilterKind(
        EquipGraphListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  WebViewManager_o *Instance; // x0
  ListViewSort_o *sort; // x20
  CommonUI_o *v8; // x21
  ServantFilterSelectMenu_CallbackFunc_o *v9; // x22
  __int64 v10; // x0
  __int64 v11; // x1

  if ( (byte_418A192 & 1) == 0 )
  {
    sub_B2C35C(&ServantFilterSelectMenu_CallbackFunc_TypeInfo, method);
    sub_B2C35C(&Method_EquipGraphListViewManager_EndSelectFilterKind__, v3);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    sub_B2C35C(&SoundManager_TypeInfo, v5);
    byte_418A192 = 1;
  }
  if ( this->fields.isInput )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sort = this->fields.sort;
    v8 = (CommonUI_o *)Instance;
    v9 = (ServantFilterSelectMenu_CallbackFunc_o *)sub_B2C42C(ServantFilterSelectMenu_CallbackFunc_TypeInfo);
    ServantFilterSelectMenu_CallbackFunc___ctor(
      v9,
      (Il2CppObject *)this,
      Method_EquipGraphListViewManager_EndSelectFilterKind__,
      0LL);
    if ( !v8 )
      sub_B2C434(v10, v11);
    CommonUI__OpenServantFilterSelectMenu_17978356(v8, 5, sort, (ListViewManager_o *)this, v9, -1, 0LL);
  }
}


void __fastcall EquipGraphListViewManager__OnClickListView(
        EquipGraphListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  ;
}


void __fastcall EquipGraphListViewManager__OnClickSelectListView(
        EquipGraphListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  EquipGraphListViewManager_CallbackFunc_o *callbackFunc; // x19
  __int64 v10; // x0
  __int64 v11; // x1
  int32_t Index; // w2

  callbackFunc = this->fields.callbackFunc;
  this->fields.callbackFunc = 0LL;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.callbackFunc,
    0LL,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  if ( callbackFunc )
  {
    if ( !obj )
      sub_B2C434(v10, v11);
    Index = ListViewObject__get_Index(obj, 0LL);
    EquipGraphListViewManager_CallbackFunc__Invoke(callbackFunc, 2, Index, 0LL);
  }
}


void __fastcall EquipGraphListViewManager__OnClickSortAscendingOrder(
        EquipGraphListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x0
  __int64 v4; // x1
  struct ListViewSort_o *sort; // x8

  if ( (byte_418A198 & 1) == 0 )
  {
    sub_B2C35C(&SoundManager_TypeInfo, method);
    byte_418A198 = 1;
  }
  if ( this->fields.isInput )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    sort = this->fields.sort;
    if ( !sort )
      sub_B2C434(v3, v4);
    sort->fields.isAscendingOrder ^= 1u;
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
  }
}


void __fastcall EquipGraphListViewManager__OnClickSortKind(EquipGraphListViewManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  WebViewManager_o *Instance; // x0
  ListViewSort_o *sort; // x20
  CommonUI_o *v8; // x21
  ServantSortSelectMenu_CallbackFunc_o *v9; // x22
  __int64 v10; // x0
  __int64 v11; // x1

  if ( (byte_418A196 & 1) == 0 )
  {
    sub_B2C35C(&ServantSortSelectMenu_CallbackFunc_TypeInfo, method);
    sub_B2C35C(&Method_EquipGraphListViewManager_EndSelectSortKind__, v3);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    sub_B2C35C(&SoundManager_TypeInfo, v5);
    byte_418A196 = 1;
  }
  if ( this->fields.isInput )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sort = this->fields.sort;
    v8 = (CommonUI_o *)Instance;
    v9 = (ServantSortSelectMenu_CallbackFunc_o *)sub_B2C42C(ServantSortSelectMenu_CallbackFunc_TypeInfo);
    ServantSortSelectMenu_CallbackFunc___ctor(
      v9,
      (Il2CppObject *)this,
      Method_EquipGraphListViewManager_EndSelectSortKind__,
      0LL);
    if ( !v8 )
      sub_B2C434(v10, v11);
    CommonUI__OpenServantSortSelectMenu(v8, 4, sort, 0, v9, 0LL);
  }
}


void __fastcall EquipGraphListViewManager__OnLongPushListView(
        EquipGraphListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  struct EquipGraphListMenu_o *equipGraphListMenu; // x8
  EquipGraphListViewManager_o *v4; // x20
  EquipGraphListViewManager_CallbackFunc_o *callbackFunc; // x21
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  int32_t Index; // w2

  equipGraphListMenu = this->fields.equipGraphListMenu;
  if ( !equipGraphListMenu )
    goto LABEL_8;
  if ( equipGraphListMenu->fields.modeKind )
    return;
  v4 = this;
  this = (EquipGraphListViewManager_o *)this->fields.scrollView;
  if ( !this )
LABEL_8:
    sub_B2C434(this, obj);
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, 0, 0LL);
  callbackFunc = v4->fields.callbackFunc;
  v4->fields.callbackFunc = 0LL;
  sub_B2C2F8((BattleServantConfConponent_o *)&v4->fields.callbackFunc, 0LL, v7, v8, v9, v10, v11, v12);
  if ( callbackFunc )
  {
    if ( obj )
    {
      Index = ListViewObject__get_Index(obj, 0LL);
      EquipGraphListViewManager_CallbackFunc__Invoke(callbackFunc, 3, Index, 0LL);
      return;
    }
    goto LABEL_8;
  }
}


void __fastcall EquipGraphListViewManager__OnMoveEnd(EquipGraphListViewManager_o *this, const MethodInfo *method)
{
  int32_t callbackCount; // w8
  bool v4; // vf
  int32_t v5; // w8
  UnityEngine_Object_o *scrollView; // x20
  __int64 v7; // x1
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  struct UIScrollView_o *v14; // x0
  System_Action_o *callbackFunc2; // x20

  if ( (byte_418A18D & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, method);
    byte_418A18D = 1;
  }
  callbackCount = this->fields.callbackCount;
  v4 = __OFSUB__(callbackCount, 1);
  v5 = callbackCount - 1;
  if ( v5 < 0 == v4 )
  {
    this->fields.callbackCount = v5;
    if ( !v5 )
    {
      scrollView = (UnityEngine_Object_o *)this->fields.scrollView;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Inequality(scrollView, 0LL, 0LL) )
      {
        v14 = this->fields.scrollView;
        if ( !v14 )
          sub_B2C434(0LL, v7);
        ((void (__fastcall *)(struct UIScrollView_o *, __int64, Il2CppMethodPointer))v14->klass->vtable._8_UpdateScrollbars.method)(
          v14,
          1LL,
          v14->klass->vtable._9_SetDragAmount.methodPtr);
      }
      callbackFunc2 = this->fields.callbackFunc2;
      this->fields.callbackFunc2 = 0LL;
      sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.callbackFunc2, 0LL, v8, v9, v10, v11, v12, v13);
      if ( callbackFunc2 )
        System_Action__Invoke(callbackFunc2, 0LL);
    }
  }
}


void __fastcall EquipGraphListViewManager__RefrashListDisp(EquipGraphListViewManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  System_String_o *ObjectList; // x0
  __int64 v10; // x1
  int klass; // w8
  System_String_o *v12; // x20
  __int64 v13; // x21
  UnityEngine_Object_o *infoData2Label; // x20
  struct EquipGraphServantItem_o *servantItemInfo; // x8
  struct ServantEntity_o *equipServantEntity; // x9
  int32_t baseCost; // w8
  int v18; // w22
  UILabel_o *v19; // x20
  System_String_o **v20; // x8
  System_String_o *v21; // x21
  System_String_o *v22; // x21
  Il2CppObject *v23; // x22
  Il2CppObject *v24; // x0
  int32_t maxCost; // [xsp+8h] [xbp-28h] BYREF
  int v26; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_418A189 & 1) == 0 )
  {
    sub_B2C35C(&int_TypeInfo, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_EquipGraphListViewObject__get_Count__, v3);
    sub_B2C35C(&Method_System_Collections_Generic_List_EquipGraphListViewObject__get_Item__, v4);
    sub_B2C35C(&LocalizationManager_TypeInfo, v5);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v6);
    sub_B2C35C(&StringLiteral_12470/*"SUM_OVER_INFO"*/, v7);
    sub_B2C35C(&StringLiteral_12469/*"SUM_INFO"*/, v8);
    byte_418A189 = 1;
  }
  ObjectList = (System_String_o *)EquipGraphListViewManager__get_ObjectList(this, method);
  if ( !ObjectList )
    goto LABEL_26;
  klass = (int)ObjectList[1].klass;
  v12 = ObjectList;
  if ( klass >= 1 )
  {
    v13 = 0LL;
    while ( 1 )
    {
      if ( klass <= (unsigned int)v13 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
      ObjectList = *(System_String_o **)(*(_QWORD *)&v12->fields + 8 * v13 + 32);
      if ( !ObjectList )
        break;
      ((void (__fastcall *)(System_String_o *, bool, Il2CppMethodPointer))ObjectList->klass->vtable._9_System_IConvertible_ToSByte.method)(
        ObjectList,
        this->fields.isInput,
        ObjectList->klass->vtable._10_System_IConvertible_ToByte.methodPtr);
      klass = (int)v12[1].klass;
      if ( (int)++v13 >= klass )
        goto LABEL_10;
    }
LABEL_26:
    sub_B2C434(ObjectList, v10);
  }
LABEL_10:
  infoData2Label = (UnityEngine_Object_o *)this->fields.infoData2Label;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  ObjectList = (System_String_o *)UnityEngine_Object__op_Inequality(infoData2Label, 0LL, 0LL);
  if ( ((unsigned __int8)ObjectList & 1) != 0 )
  {
    servantItemInfo = this->fields.servantItemInfo;
    if ( !servantItemInfo )
      goto LABEL_26;
    equipServantEntity = servantItemInfo->fields.equipServantEntity;
    baseCost = this->fields.baseCost;
    if ( equipServantEntity )
      LODWORD(equipServantEntity) = equipServantEntity->fields.cost;
    v18 = (_DWORD)equipServantEntity + baseCost;
    v19 = this->fields.infoData2Label;
    v20 = (int)equipServantEntity + baseCost <= this->fields.maxCost
        ? (System_String_o **)&StringLiteral_12469/*"SUM_INFO"*/
        : (System_String_o **)&StringLiteral_12470/*"SUM_OVER_INFO"*/;
    v21 = *v20;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v22 = LocalizationManager__Get(v21, 0LL);
    v26 = v18;
    v23 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v26);
    maxCost = this->fields.maxCost;
    v24 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &maxCost);
    ObjectList = System_String__Format_44301068(v22, v23, v24, 0LL);
    if ( !v19 )
      goto LABEL_26;
    UILabel__set_text(v19, ObjectList, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EquipGraphListViewManager__RequestListObject(
        EquipGraphListViewManager_o *this,
        int32_t mode,
        float delay,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *ObjectList; // x0
  __int64 v15; // x1
  int32_t size; // w8
  Il2CppObject *current; // x21
  System_Action_o *v18; // x22
  __int64 v19; // x0
  __int64 v20; // x1
  const MethodInfo *v21; // x3
  System_Collections_Generic_List_Enumerator_T__o v22; // [xsp+8h] [xbp-58h] BYREF
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  if ( (byte_418A18B & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, *(_QWORD *)&mode);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_EquipGraphListViewObject__Dispose__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_EquipGraphListViewObject__MoveNext__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_EquipGraphListViewObject__get_Current__, v9);
    sub_B2C35C(&Method_EquipGraphListViewManager_OnMoveEnd__, v10);
    sub_B2C35C(&Method_System_Collections_Generic_List_EquipGraphListViewObject__GetEnumerator__, v11);
    sub_B2C35C(&Method_System_Collections_Generic_List_EquipGraphListViewObject__get_Count__, v12);
    sub_B2C35C(&StringLiteral_10036/*"OnMoveEnd"*/, v13);
    byte_418A18B = 1;
  }
  memset(&v22, 0, sizeof(v22));
  ObjectList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)EquipGraphListViewManager__get_ObjectList(
                                                                                                this,
                                                                                                *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_B2C434(0LL, v15);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10036/*"OnMoveEnd"*/,
      delay,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v22,
      ObjectList,
      (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_EquipGraphListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v22,
              (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_EquipGraphListViewObject__MoveNext__) )
    {
      current = v22.fields.current;
      v18 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
      System_Action___ctor(v18, (Il2CppObject *)this, Method_EquipGraphListViewManager_OnMoveEnd__, 0LL);
      if ( !current )
        sub_B2C434(v19, v20);
      zero = UnityEngine_Vector3__get_zero(0LL);
      EquipGraphListViewObject__Init(
        (EquipGraphListViewObject_o *)current,
        mode,
        v18,
        zero.fields.x,
        *(UnityEngine_Vector3_o *)&zero.fields.y,
        v21);
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v22,
      (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_EquipGraphListViewObject__Dispose__);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EquipGraphListViewManager__RequestListObject_29525360(
        EquipGraphListViewManager_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *ObjectList; // x0
  __int64 v13; // x1
  int32_t size; // w8
  Il2CppObject *current; // x21
  System_Action_o *v16; // x22
  __int64 v17; // x0
  __int64 v18; // x1
  const MethodInfo *v19; // x3
  System_Collections_Generic_List_Enumerator_T__o v20; // [xsp+8h] [xbp-58h] BYREF
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  if ( (byte_418A18C & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, *(_QWORD *)&mode);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_EquipGraphListViewObject__Dispose__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_EquipGraphListViewObject__MoveNext__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_EquipGraphListViewObject__get_Current__, v7);
    sub_B2C35C(&Method_EquipGraphListViewManager_OnMoveEnd__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_EquipGraphListViewObject__GetEnumerator__, v9);
    sub_B2C35C(&Method_System_Collections_Generic_List_EquipGraphListViewObject__get_Count__, v10);
    sub_B2C35C(&StringLiteral_10036/*"OnMoveEnd"*/, v11);
    byte_418A18C = 1;
  }
  memset(&v20, 0, sizeof(v20));
  ObjectList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)EquipGraphListViewManager__get_ObjectList(
                                                                                                this,
                                                                                                *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_B2C434(0LL, v13);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10036/*"OnMoveEnd"*/,
      0.0,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v20,
      ObjectList,
      (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_EquipGraphListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v20,
              (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_EquipGraphListViewObject__MoveNext__) )
    {
      current = v20.fields.current;
      v16 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
      System_Action___ctor(v16, (Il2CppObject *)this, Method_EquipGraphListViewManager_OnMoveEnd__, 0LL);
      if ( !current )
        sub_B2C434(v17, v18);
      zero = UnityEngine_Vector3__get_zero(0LL);
      EquipGraphListViewObject__Init(
        (EquipGraphListViewObject_o *)current,
        mode,
        v16,
        zero.fields.x,
        *(UnityEngine_Vector3_o *)&zero.fields.y,
        v19);
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v20,
      (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_EquipGraphListViewObject__Dispose__);
  }
}


void __fastcall EquipGraphListViewManager__SelectEquip(
        EquipGraphListViewManager_o *this,
        EquipGraphListViewItem_o *item,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  __int64 v24; // x1
  __int64 v25; // x1
  __int64 v26; // x1
  __int64 v27; // x1
  __int64 v28; // x1
  __int64 v29; // x1
  __int64 v30; // x1
  __int64 v31; // x1
  __int64 v32; // x1
  __int64 v33; // x1
  __int64 v34; // x1
  __int64 v35; // x1
  __int64 v36; // x1
  __int64 v37; // x1
  __int64 v38; // x1
  __int64 v39; // x1
  struct EquipGraphListViewItem_o **p_selectItem; // x20
  BattleServantConfConponent_o *p_selectItemCallbackFunc; // x22
  System_String_array **v42; // x2
  System_String_array **v43; // x3
  System_Boolean_array **v44; // x4
  System_Int32_array **v45; // x5
  System_Int32_array *v46; // x6
  System_Int32_array *v47; // x7
  __int64 servantItemInfo; // x0
  const MethodInfo *v49; // x1
  struct EquipGraphListViewItem_o *selectItem; // x8
  struct ListViewObject_o *viewObject; // x9
  __int64 v52; // x12
  EquipGraphListViewObject_o *v53; // x24
  const MethodInfo *v54; // x2
  struct PartyListViewItem_array *waveDeckItemList; // x8
  int v56; // w9
  struct EquipGraphListViewItem_o *v57; // x8
  int32_t wearerMember; // w11
  int32_t baseCost; // w9
  int32_t *p_baseCost; // x10
  _QWORD *v61; // x0
  System_Reflection_MethodBase_o *v62; // x0
  const MethodInfo *v63; // x2
  struct EquipGraphServantItem_o *v64; // x8
  struct PartyListViewItem_array *v65; // x8
  int v66; // w10
  Il2CppClass **v67; // x8
  Il2CppClass *v68; // x21
  int events; // w19
  struct EquipGraphServantItem_o *v70; // x8
  struct ServantEntity_o *equipServantEntity; // x8
  CommonUI_o *Instance; // x20
  System_String_o *v73; // x21
  System_String_o *v74; // x22
  NotificationDialog_ClickDelegate_o *v75; // x23
  struct ServantEntity_o *servantEntity; // x8
  _QWORD *v77; // x0
  System_Reflection_MethodBase_o *v78; // x0
  struct EquipGraphServantItem_o *v79; // x8
  struct PartyListViewItem_array *v80; // x9
  __int64 v81; // x8
  unsigned __int64 v82; // x19
  int v83; // w27
  PartyListViewItem_o *v84; // x21
  int32_t v85; // w22
  struct ServantEntity_o *v86; // x8
  PartyOrganizationListViewItem_o *v87; // x23
  __int64 v88; // x24
  __int64 v89; // x25
  int v90; // w24
  ServantEntity_o *v91; // x21
  const MethodInfo *v92; // x1
  const MethodInfo *v93; // x2
  const MethodInfo *v94; // x1
  EquipGraphListViewManager_o *v95; // x0
  System_String_array **v96; // x2
  System_String_array **v97; // x3
  System_Boolean_array **v98; // x4
  System_Int32_array **v99; // x5
  System_Int32_array *v100; // x6
  System_Int32_array *v101; // x7
  System_String_o *v102; // x21
  __int64 v103; // x22
  System_String_array **v104; // x2
  System_String_array **v105; // x3
  System_Boolean_array **v106; // x4
  System_Int32_array **v107; // x5
  System_Int32_array *v108; // x6
  System_Int32_array *v109; // x7
  System_Int32_array **v110; // x23
  System_String_array **v111; // x2
  System_String_array **v112; // x3
  System_Boolean_array **v113; // x4
  System_Int32_array **v114; // x5
  System_Int32_array *v115; // x6
  System_Int32_array *v116; // x7
  System_Int32_array **v117; // x23
  int32_t weareRarity; // w23
  System_String_array **v119; // x2
  System_String_array **v120; // x3
  System_Boolean_array **v121; // x4
  System_Int32_array **v122; // x5
  System_Int32_array *v123; // x6
  System_Int32_array *v124; // x7
  System_Int32_array **v125; // x23
  System_String_array **v126; // x2
  System_String_array **v127; // x3
  System_Boolean_array **v128; // x4
  System_Int32_array **v129; // x5
  System_Int32_array *v130; // x6
  System_Int32_array *v131; // x7
  System_Int32_array **v132; // x23
  System_String_array **v133; // x2
  System_String_array **v134; // x3
  System_Boolean_array **v135; // x4
  System_Int32_array **v136; // x5
  System_Int32_array *v137; // x6
  System_Int32_array *v138; // x7
  System_Int32_array **wearerServantName; // x20
  System_String_array **v140; // x2
  System_String_array **v141; // x3
  System_Boolean_array **v142; // x4
  System_Int32_array **v143; // x5
  System_Int32_array *v144; // x6
  System_Int32_array *v145; // x7
  System_Int32_array **v146; // x20
  System_String_array **v147; // x2
  System_String_array **v148; // x3
  System_Boolean_array **v149; // x4
  System_Int32_array **v150; // x5
  System_Int32_array *v151; // x6
  System_Int32_array *v152; // x7
  System_Int32_array **v153; // x20
  struct EquipGraphServantItem_o *v154; // x8
  int32_t Rarity; // w0
  System_String_array **v156; // x2
  System_String_array **v157; // x3
  System_Boolean_array **v158; // x4
  System_Int32_array **v159; // x5
  System_Int32_array *v160; // x6
  System_Int32_array *v161; // x7
  System_Int32_array **v162; // x20
  System_String_array **v163; // x2
  System_String_array **v164; // x3
  System_Boolean_array **v165; // x4
  System_Int32_array **v166; // x5
  System_Int32_array *v167; // x6
  System_Int32_array *v168; // x7
  System_Int32_array **v169; // x20
  System_String_array **v170; // x2
  System_String_array **v171; // x3
  System_Boolean_array **v172; // x4
  System_Int32_array **v173; // x5
  System_Int32_array *v174; // x6
  System_Int32_array *v175; // x7
  System_Int32_array **v176; // x20
  System_String_o *v177; // x20
  CommonUI_o *v178; // x21
  System_String_o *v179; // x22
  System_String_o *v180; // x23
  System_String_o *v181; // x24
  CommonConfirmDialog_ClickDelegate_o *v182; // x25
  int32_t v183; // w9
  System_String_o *v184; // x21
  System_Object_array *v185; // x22
  System_String_array **v186; // x2
  System_String_array **v187; // x3
  System_Boolean_array **v188; // x4
  System_Int32_array **v189; // x5
  System_Int32_array *v190; // x6
  System_Int32_array *v191; // x7
  System_Int32_array **v192; // x23
  System_String_array **v193; // x2
  System_String_array **v194; // x3
  System_Boolean_array **v195; // x4
  System_Int32_array **v196; // x5
  System_Int32_array *v197; // x6
  System_Int32_array *v198; // x7
  System_Int32_array **v199; // x23
  System_String_array **v200; // x2
  System_String_array **v201; // x3
  System_Boolean_array **v202; // x4
  System_Int32_array **v203; // x5
  System_Int32_array *v204; // x6
  System_Int32_array *v205; // x7
  System_Int32_array **v206; // x23
  System_String_array **v207; // x2
  System_String_array **v208; // x3
  System_Boolean_array **v209; // x4
  System_Int32_array **v210; // x5
  System_Int32_array *v211; // x6
  System_Int32_array *v212; // x7
  System_Int32_array **v213; // x23
  struct EquipGraphServantItem_o *v214; // x8
  int32_t v215; // w23
  System_String_array **v216; // x2
  System_String_array **v217; // x3
  System_Boolean_array **v218; // x4
  System_Int32_array **v219; // x5
  System_Int32_array *v220; // x6
  System_Int32_array *v221; // x7
  System_Int32_array **v222; // x23
  System_String_array **v223; // x2
  System_String_array **v224; // x3
  System_Boolean_array **v225; // x4
  System_Int32_array **v226; // x5
  System_Int32_array *v227; // x6
  System_Int32_array *v228; // x7
  System_Int32_array **v229; // x20
  System_String_o *v230; // x20
  CommonUI_o *v231; // x21
  System_String_o *v232; // x22
  CommonConfirmDialog_ClickDelegate_o *v233; // x23
  struct PartyListViewItem_array *v234; // x8
  int v235; // w9
  struct EquipGraphListViewItem_o *v236; // x10
  struct UserServantEntity_o *userSvtEntity; // x10
  int32_t memberIndex; // w23
  __int128 v239; // q1
  PartyListViewItem_o *v240; // x24
  _BOOL8 v241; // x0
  __int64 v242; // x1
  Il2CppObject *current; // x19
  __int64 v244; // x10
  int klass_high; // w9
  int32_t v246; // w8
  _DWORD *monitor; // x9
  UnityEngine_Object_o *v248; // x24
  _BOOL8 v249; // x0
  __int64 v250; // x1
  void *v251; // x8
  __int64 v252; // x11
  __int64 v253; // x11
  EquipGraphListViewObject_o *v254; // x24
  const MethodInfo *v255; // x1
  struct EquipGraphListViewItem_o *v256; // x8
  struct UserServantEntity_o *v257; // x8
  __int128 v258; // q1
  EquipGraphServantItem_o *v259; // x20
  const MethodInfo *v260; // x2
  const MethodInfo *v261; // x2
  struct UserServantEntity_o *userServantEntity; // x23
  System_String_o *v263; // x20
  __int64 v264; // x22
  System_String_array **v265; // x2
  System_String_array **v266; // x3
  System_Boolean_array **v267; // x4
  System_Int32_array **v268; // x5
  System_Int32_array *v269; // x6
  System_Int32_array *v270; // x7
  System_Int32_array **v271; // x24
  System_String_array **v272; // x2
  System_String_array **v273; // x3
  System_Boolean_array **v274; // x4
  System_Int32_array **v275; // x5
  System_Int32_array *v276; // x6
  System_Int32_array *v277; // x7
  System_Int32_array **v278; // x24
  int32_t v279; // w24
  System_String_array **v280; // x2
  System_String_array **v281; // x3
  System_Boolean_array **v282; // x4
  System_Int32_array **v283; // x5
  System_Int32_array *v284; // x6
  System_Int32_array *v285; // x7
  System_Int32_array **v286; // x24
  System_String_array **v287; // x2
  System_String_array **v288; // x3
  System_Boolean_array **v289; // x4
  System_Int32_array **v290; // x5
  System_Int32_array *v291; // x6
  System_Int32_array *v292; // x7
  System_Int32_array **v293; // x24
  __int64 v294; // x23
  __int64 v295; // x24
  int32_t v296; // w0
  System_String_array **v297; // x2
  System_String_array **v298; // x3
  System_Boolean_array **v299; // x4
  System_Int32_array **v300; // x5
  System_Int32_array *v301; // x6
  System_Int32_array *v302; // x7
  System_Int32_array **v303; // x21
  System_String_o *v304; // x20
  CommonUI_o *v305; // x21
  System_String_o *v306; // x22
  System_String_o *v307; // x23
  System_String_o *v308; // x24
  CommonConfirmDialog_ClickDelegate_o *v309; // x25
  __int64 v310; // x0
  __int64 v311; // x0
  struct PartyListViewItem_array *v312; // [xsp+68h] [xbp-E8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v313; // [xsp+70h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v314; // [xsp+90h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v315; // [xsp+B0h] [xbp-A0h] BYREF
  int32_t v316; // [xsp+D4h] [xbp-7Ch] BYREF
  int32_t partyNumber; // [xsp+D8h] [xbp-78h] BYREF
  int32_t maxWave; // [xsp+DCh] [xbp-74h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v319; // [xsp+E0h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v320; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o EquipSvtId; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v322; // 0:x0.16

  if ( (byte_418A190 & 1) == 0 )
  {
    sub_B2C35C(&BalanceConfig_TypeInfo, item);
    sub_B2C35C(&NotificationDialog_ClickDelegate_TypeInfo, v11);
    sub_B2C35C(&CommonConfirmDialog_ClickDelegate_TypeInfo, v12);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__, v13);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v14);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v15);
    sub_B2C35C(&EquipGraphListViewItem_TypeInfo, v16);
    sub_B2C35C(&Method_EquipGraphListViewManager_EndSelectConfirm__, v17);
    sub_B2C35C(&Method_EquipGraphListViewManager_SelectEquip__, v18);
    sub_B2C35C(&Method_EquipGraphListViewManager__SelectEquip_b__71_0__, v19);
    sub_B2C35C(&EquipGraphListViewObject_TypeInfo, v20);
    sub_B2C35C(&int_TypeInfo, v21);
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v22);
    sub_B2C35C(&LocalizationManager_TypeInfo, v23);
    sub_B2C35C(&object___TypeInfo, v24);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v25);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v26);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v27);
    sub_B2C35C(&Rarity_TypeInfo, v28);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v29);
    sub_B2C35C(&SoundManager_TypeInfo, v30);
    sub_B2C35C(&StringLiteral_15349/*"WAVE_BATTLE_EQUIP_SWAP_MESSAGE"*/, v31);
    sub_B2C35C(&StringLiteral_15350/*"WAVE_BATTLE_EQUIP_SWAP_TITLE"*/, v32);
    sub_B2C35C(&StringLiteral_15346/*"WAVE_BATTLE_EQUIP_MOVE_MESSAGE"*/, v33);
    sub_B2C35C(&StringLiteral_5530/*"EQUIP_GRAPH_USE_WARNING_TITLE"*/, v34);
    sub_B2C35C(&StringLiteral_5529/*"EQUIP_GRAPH_USE_WARNING_MESSAGE"*/, v35);
    sub_B2C35C(&StringLiteral_15345/*"WAVE_BATTLE_COST_OVER_TITLE"*/, v36);
    sub_B2C35C(&StringLiteral_3264/*"COMMON_CONFIRM_NO"*/, v37);
    sub_B2C35C(&StringLiteral_3267/*"COMMON_CONFIRM_YES"*/, v38);
    sub_B2C35C(&StringLiteral_15344/*"WAVE_BATTLE_COST_OVER_MESSAGE"*/, v39);
    byte_418A190 = 1;
  }
  p_selectItem = &this->fields.selectItem;
  memset(&v319, 0, sizeof(v319));
  this->fields.selectItem = item;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.selectItem,
    (System_Int32_array **)item,
    (System_String_array **)callback,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  p_selectItemCallbackFunc = (BattleServantConfConponent_o *)&this->fields.selectItemCallbackFunc;
  this->fields.selectItemCallbackFunc = callback;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.selectItemCallbackFunc,
    (System_Int32_array **)callback,
    v42,
    v43,
    v44,
    v45,
    v46,
    v47);
  selectItem = this->fields.selectItem;
  if ( !selectItem )
    goto LABEL_257;
  viewObject = selectItem->fields.viewObject;
  if ( viewObject
    && (v52 = *(&EquipGraphListViewObject_TypeInfo->_2.bitflags2 + 1),
        *(&viewObject->klass->_2.bitflags2 + 1) >= (unsigned int)v52) )
  {
    if ( (EquipGraphListViewObject_c *)viewObject->klass->_2.typeHierarchy[v52 - 1] == EquipGraphListViewObject_TypeInfo )
      v53 = (EquipGraphListViewObject_o *)selectItem->fields.viewObject;
    else
      v53 = 0LL;
  }
  else
  {
    v53 = 0LL;
  }
  if ( selectItem->fields.isBase )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    if ( !this->fields.isWaveBattle )
      goto LABEL_19;
    waveDeckItemList = this->fields.waveDeckItemList;
    if ( !waveDeckItemList )
      goto LABEL_257;
    v56 = this->fields.partyNumber - 1;
    if ( v56 < waveDeckItemList->max_length )
    {
      servantItemInfo = (__int64)waveDeckItemList->m_Items[v56];
      if ( !servantItemInfo )
        goto LABEL_257;
      PartyListViewItem__SetEquip((PartyListViewItem_o *)servantItemInfo, this->fields.memberIndex, 0LL, 0LL);
LABEL_19:
      if ( !*p_selectItem )
        goto LABEL_257;
      (*p_selectItem)->fields.isBase = 0;
      v57 = *p_selectItem;
      if ( !*p_selectItem )
        goto LABEL_257;
      wearerMember = v57->fields.wearerMember;
      if ( wearerMember == this->fields.memberIndex || (wearerMember & 0x80000000) != 0 )
      {
        if ( v57->fields._OrganizedWave_k__BackingField <= 0 && !v57->fields._IsUnique_k__BackingField )
        {
LABEL_80:
          servantItemInfo = (__int64)this->fields.servantItemInfo;
          if ( !servantItemInfo )
            goto LABEL_257;
          EquipGraphServantItem__SetEquipTarget((EquipGraphServantItem_o *)servantItemInfo, 0LL, v54);
          servantItemInfo = (__int64)this->fields.servantItemDraw;
          if ( !servantItemInfo )
            goto LABEL_257;
          EquipGraphServantItemDraw__SetItem(
            (EquipGraphServantItemDraw_o *)servantItemInfo,
            this->fields.servantItemInfo,
            v93);
          v95 = this;
LABEL_83:
          EquipGraphListViewManager__RefrashListDisp(v95, v94);
          if ( callback )
          {
            p_selectItemCallbackFunc->klass = 0LL;
            sub_B2C2F8(p_selectItemCallbackFunc, 0LL, v96, v97, v98, v99, v100, v101);
            System_Action__Invoke(callback, 0LL);
          }
          return;
        }
        baseCost = this->fields.baseCost;
        p_baseCost = &this->fields.baseCost;
        if ( (wearerMember & 0x80000000) != 0 )
        {
          LODWORD(servantEntity) = 0;
LABEL_76:
          *p_baseCost = (_DWORD)servantEntity + baseCost;
          if ( !v53 )
            goto LABEL_257;
          UnityEngine_Vector3__get_zero(0LL);
          if ( (byte_418A1A4 & 1) == 0 )
          {
            sub_B2C35C(&EquipGraphListViewItem_TypeInfo, v92);
            byte_418A1A4 = 1;
          }
          EquipGraphListViewObject__SetupDisp(v53, v92);
          goto LABEL_80;
        }
      }
      else
      {
        baseCost = this->fields.baseCost;
        p_baseCost = &this->fields.baseCost;
      }
      servantEntity = v57->fields.servantEntity;
      if ( servantEntity )
        LODWORD(servantEntity) = servantEntity->fields.cost;
      goto LABEL_76;
    }
LABEL_259:
    v310 = sub_B2C460(servantItemInfo);
    sub_B2C400(v310, 0LL);
  }
  if ( selectItem->fields._OrganizedWave_k__BackingField >= 1 )
  {
    v61 = Method_EquipGraphListViewManager_SelectEquip__;
    if ( (*((_BYTE *)Method_EquipGraphListViewManager_SelectEquip__ + 75) & 2) != 0 )
      v61 = (_QWORD *)sub_B2C364(Method_EquipGraphListViewManager_SelectEquip__);
    v62 = (System_Reflection_MethodBase_o *)sub_B2C340(v61, v61[3]);
    OverwriteAssetSoundName__PlaySystemSe(v62, 0, 0LL);
    v64 = this->fields.servantItemInfo;
    if ( !v64 )
      goto LABEL_257;
    if ( v64->fields.equipUserSvtEntity )
    {
      if ( !item )
        goto LABEL_257;
      v65 = this->fields.waveDeckItemList;
      if ( !v65 )
        goto LABEL_257;
      v66 = item->fields._OrganizedWave_k__BackingField - 1;
      if ( v66 >= v65->max_length )
        goto LABEL_259;
      if ( !*p_selectItem )
        goto LABEL_257;
      v67 = &v65->obj.klass + v66;
      v68 = v67[4];
      if ( !v68 )
        goto LABEL_257;
      servantItemInfo = (__int64)PartyListViewItem__GetMember(
                                   (PartyListViewItem_o *)v67[4],
                                   (*p_selectItem)->fields.wearerMember,
                                   0LL);
      if ( !servantItemInfo )
        goto LABEL_257;
      events = (int)v68->_1.events;
      servantItemInfo = PartyOrganizationListViewItem__get_EquipCost(
                          (PartyOrganizationListViewItem_o *)servantItemInfo,
                          0LL);
      v70 = this->fields.servantItemInfo;
      if ( !v70 )
        goto LABEL_257;
      equipServantEntity = v70->fields.equipServantEntity;
      if ( equipServantEntity )
        LODWORD(equipServantEntity) = equipServantEntity->fields.cost;
      if ( events - (int)servantItemInfo + (int)equipServantEntity > SHIDWORD(v68->_1.interopData) )
      {
        Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v73 = LocalizationManager__Get((System_String_o *)StringLiteral_15345/*"WAVE_BATTLE_COST_OVER_TITLE"*/, 0LL);
        v74 = LocalizationManager__Get((System_String_o *)StringLiteral_15344/*"WAVE_BATTLE_COST_OVER_MESSAGE"*/, 0LL);
        v75 = (NotificationDialog_ClickDelegate_o *)sub_B2C42C(NotificationDialog_ClickDelegate_TypeInfo);
        NotificationDialog_ClickDelegate___ctor(
          v75,
          (Il2CppObject *)this,
          Method_EquipGraphListViewManager__SelectEquip_b__71_0__,
          0LL);
        if ( !Instance )
          goto LABEL_257;
        CommonUI__OpenNotificationDialog_17973524(
          Instance,
          v73,
          v74,
          v75,
          -1,
          0,
          0,
          0,
          0,
          0,
          0LL,
          0LL,
          0,
          0,
          0LL,
          1,
          0LL,
          0LL,
          0LL,
          0LL);
        return;
      }
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v102 = LocalizationManager__Get((System_String_o *)StringLiteral_15349/*"WAVE_BATTLE_EQUIP_SWAP_MESSAGE"*/, 0LL);
      servantItemInfo = sub_B2C374(object___TypeInfo, 10LL);
      if ( !*p_selectItem )
        goto LABEL_257;
      v103 = servantItemInfo;
      LODWORD(v315.fields.currentCryptoKey) = (*p_selectItem)->fields._OrganizedWave_k__BackingField;
      servantItemInfo = j_il2cpp_value_box_0(int_TypeInfo, &v315);
      if ( !v103 )
        goto LABEL_257;
      v110 = (System_Int32_array **)servantItemInfo;
      if ( !servantItemInfo || (servantItemInfo = sub_B2C41C(servantItemInfo, *(_QWORD *)(*(_QWORD *)v103 + 64LL))) != 0 )
      {
        if ( !*(_DWORD *)(v103 + 24) )
          goto LABEL_259;
        *(_QWORD *)(v103 + 32) = v110;
        sub_B2C2F8((BattleServantConfConponent_o *)(v103 + 32), v110, v104, v105, v106, v107, v108, v109);
        maxWave = this->fields.maxWave;
        servantItemInfo = j_il2cpp_value_box_0(int_TypeInfo, &maxWave);
        v117 = (System_Int32_array **)servantItemInfo;
        if ( !servantItemInfo
          || (servantItemInfo = sub_B2C41C(servantItemInfo, *(_QWORD *)(*(_QWORD *)v103 + 64LL))) != 0 )
        {
          if ( *(_DWORD *)(v103 + 24) <= 1u )
            goto LABEL_259;
          *(_QWORD *)(v103 + 40) = v117;
          sub_B2C2F8((BattleServantConfConponent_o *)(v103 + 40), v117, v111, v112, v113, v114, v115, v116);
          if ( !*p_selectItem )
            goto LABEL_257;
          weareRarity = (*p_selectItem)->fields.weareRarity;
          if ( (BYTE3(Rarity_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !Rarity_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(Rarity_TypeInfo);
          servantItemInfo = (__int64)Rarity__getRarityType(weareRarity, 0LL);
          v125 = (System_Int32_array **)servantItemInfo;
          if ( !servantItemInfo
            || (servantItemInfo = sub_B2C41C(servantItemInfo, *(_QWORD *)(*(_QWORD *)v103 + 64LL))) != 0 )
          {
            if ( *(_DWORD *)(v103 + 24) <= 2u )
              goto LABEL_259;
            *(_QWORD *)(v103 + 48) = v125;
            sub_B2C2F8((BattleServantConfConponent_o *)(v103 + 48), v125, v119, v120, v121, v122, v123, v124);
            servantItemInfo = (__int64)*p_selectItem;
            if ( !*p_selectItem )
              goto LABEL_257;
            servantItemInfo = (__int64)EquipGraphListViewItem__get_WeareServantClassName(
                                         (EquipGraphListViewItem_o *)servantItemInfo,
                                         v49);
            v132 = (System_Int32_array **)servantItemInfo;
            if ( !servantItemInfo
              || (servantItemInfo = sub_B2C41C(servantItemInfo, *(_QWORD *)(*(_QWORD *)v103 + 64LL))) != 0 )
            {
              if ( *(_DWORD *)(v103 + 24) <= 3u )
                goto LABEL_259;
              *(_QWORD *)(v103 + 56) = v132;
              sub_B2C2F8((BattleServantConfConponent_o *)(v103 + 56), v132, v126, v127, v128, v129, v130, v131);
              if ( !*p_selectItem )
                goto LABEL_257;
              wearerServantName = (System_Int32_array **)(*p_selectItem)->fields.wearerServantName;
              if ( !wearerServantName
                || (servantItemInfo = sub_B2C41C(wearerServantName, *(_QWORD *)(*(_QWORD *)v103 + 64LL))) != 0 )
              {
                if ( *(_DWORD *)(v103 + 24) <= 4u )
                  goto LABEL_259;
                *(_QWORD *)(v103 + 64) = wearerServantName;
                sub_B2C2F8(
                  (BattleServantConfConponent_o *)(v103 + 64),
                  wearerServantName,
                  v133,
                  v134,
                  v135,
                  v136,
                  v137,
                  v138);
                partyNumber = this->fields.partyNumber;
                servantItemInfo = j_il2cpp_value_box_0(int_TypeInfo, &partyNumber);
                v146 = (System_Int32_array **)servantItemInfo;
                if ( !servantItemInfo
                  || (servantItemInfo = sub_B2C41C(servantItemInfo, *(_QWORD *)(*(_QWORD *)v103 + 64LL))) != 0 )
                {
                  if ( *(_DWORD *)(v103 + 24) <= 5u )
                    goto LABEL_259;
                  *(_QWORD *)(v103 + 72) = v146;
                  sub_B2C2F8((BattleServantConfConponent_o *)(v103 + 72), v146, v140, v141, v142, v143, v144, v145);
                  v316 = this->fields.maxWave;
                  servantItemInfo = j_il2cpp_value_box_0(int_TypeInfo, &v316);
                  v153 = (System_Int32_array **)servantItemInfo;
                  if ( !servantItemInfo
                    || (servantItemInfo = sub_B2C41C(servantItemInfo, *(_QWORD *)(*(_QWORD *)v103 + 64LL))) != 0 )
                  {
                    if ( *(_DWORD *)(v103 + 24) <= 6u )
                      goto LABEL_259;
                    *(_QWORD *)(v103 + 80) = v153;
                    sub_B2C2F8((BattleServantConfConponent_o *)(v103 + 80), v153, v147, v148, v149, v150, v151, v152);
                    v154 = this->fields.servantItemInfo;
                    if ( !v154 )
                      goto LABEL_257;
                    servantItemInfo = (__int64)v154->fields.userServantEntity;
                    if ( !servantItemInfo )
                      goto LABEL_257;
                    Rarity = UserServantEntity__getRarity((UserServantEntity_o *)servantItemInfo, 0LL);
                    servantItemInfo = (__int64)Rarity__getRarityType(Rarity, 0LL);
                    v162 = (System_Int32_array **)servantItemInfo;
                    if ( !servantItemInfo
                      || (servantItemInfo = sub_B2C41C(servantItemInfo, *(_QWORD *)(*(_QWORD *)v103 + 64LL))) != 0 )
                    {
                      if ( *(_DWORD *)(v103 + 24) <= 7u )
                        goto LABEL_259;
                      *(_QWORD *)(v103 + 88) = v162;
                      sub_B2C2F8((BattleServantConfConponent_o *)(v103 + 88), v162, v156, v157, v158, v159, v160, v161);
                      servantItemInfo = (__int64)this->fields.servantItemInfo;
                      if ( !servantItemInfo )
                        goto LABEL_257;
                      servantItemInfo = (__int64)EquipGraphServantItem__get_ClassName(
                                                   (EquipGraphServantItem_o *)servantItemInfo,
                                                   v49);
                      v169 = (System_Int32_array **)servantItemInfo;
                      if ( !servantItemInfo
                        || (servantItemInfo = sub_B2C41C(servantItemInfo, *(_QWORD *)(*(_QWORD *)v103 + 64LL))) != 0 )
                      {
                        if ( *(_DWORD *)(v103 + 24) <= 8u )
                          goto LABEL_259;
                        *(_QWORD *)(v103 + 96) = v169;
                        sub_B2C2F8(
                          (BattleServantConfConponent_o *)(v103 + 96),
                          v169,
                          v163,
                          v164,
                          v165,
                          v166,
                          v167,
                          v168);
                        servantItemInfo = (__int64)this->fields.servantItemInfo;
                        if ( !servantItemInfo )
                          goto LABEL_257;
                        servantItemInfo = (__int64)EquipGraphServantItem__get_NameText(
                                                     (EquipGraphServantItem_o *)servantItemInfo,
                                                     v49);
                        v176 = (System_Int32_array **)servantItemInfo;
                        if ( !servantItemInfo
                          || (servantItemInfo = sub_B2C41C(servantItemInfo, *(_QWORD *)(*(_QWORD *)v103 + 64LL))) != 0 )
                        {
                          if ( *(_DWORD *)(v103 + 24) > 9u )
                          {
                            *(_QWORD *)(v103 + 104) = v176;
                            sub_B2C2F8(
                              (BattleServantConfConponent_o *)(v103 + 104),
                              v176,
                              v170,
                              v171,
                              v172,
                              v173,
                              v174,
                              v175);
                            v177 = System_String__Format_44384256(v102, (System_Object_array *)v103, 0LL);
                            v178 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                            v179 = LocalizationManager__Get((System_String_o *)StringLiteral_15350/*"WAVE_BATTLE_EQUIP_SWAP_TITLE"*/, 0LL);
                            v180 = LocalizationManager__Get((System_String_o *)StringLiteral_3267/*"COMMON_CONFIRM_YES"*/, 0LL);
                            v181 = LocalizationManager__Get((System_String_o *)StringLiteral_3264/*"COMMON_CONFIRM_NO"*/, 0LL);
                            v182 = (CommonConfirmDialog_ClickDelegate_o *)sub_B2C42C(CommonConfirmDialog_ClickDelegate_TypeInfo);
                            CommonConfirmDialog_ClickDelegate___ctor(
                              v182,
                              (Il2CppObject *)this,
                              Method_EquipGraphListViewManager_EndSelectConfirm__,
                              0LL);
                            if ( !v178 )
                              goto LABEL_257;
                            CommonUI__OpenConfirmDialog_17971264(
                              v178,
                              v179,
                              v177,
                              v180,
                              v181,
                              v182,
                              24,
                              24,
                              15.0,
                              740,
                              0,
                              480,
                              -162.5,
                              0,
                              0,
                              280,
                              0,
                              0LL);
                            return;
                          }
                          goto LABEL_259;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
LABEL_261:
      v311 = sub_B2C454(servantItemInfo);
      sub_B2C400(v311, 0LL);
    }
    goto LABEL_74;
  }
  if ( selectItem->fields._IsUnique_k__BackingField )
  {
    v77 = Method_EquipGraphListViewManager_SelectEquip__;
    if ( (*((_BYTE *)Method_EquipGraphListViewManager_SelectEquip__ + 75) & 2) != 0 )
      v77 = (_QWORD *)sub_B2C364(Method_EquipGraphListViewManager_SelectEquip__);
    v78 = (System_Reflection_MethodBase_o *)sub_B2C340(v77, v77[3]);
    OverwriteAssetSoundName__PlaySystemSe(v78, 0, 0LL);
    v79 = this->fields.servantItemInfo;
    if ( !v79 )
      goto LABEL_257;
    if ( v79->fields.equipUserSvtEntity )
    {
      v80 = this->fields.waveDeckItemList;
      if ( !v80 )
        goto LABEL_257;
      v81 = *(_QWORD *)&v80->max_length;
      if ( (int)v81 < 1 )
        return;
      v82 = 0LL;
      v83 = 1;
      v312 = this->fields.waveDeckItemList;
      while ( 1 )
      {
        if ( v82 >= (unsigned int)v81 )
          goto LABEL_259;
        v84 = v80->m_Items[v82];
        v85 = 0;
        do
        {
          servantItemInfo = (__int64)BalanceConfig_TypeInfo;
          if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !BalanceConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
            servantItemInfo = (__int64)BalanceConfig_TypeInfo;
          }
          if ( v85 >= *(_DWORD *)(*(_QWORD *)(servantItemInfo + 184) + 160LL) )
            goto LABEL_72;
          if ( !v84 )
            goto LABEL_257;
          servantItemInfo = (__int64)PartyListViewItem__GetMember(v84, v85, 0LL);
          if ( !*p_selectItem )
            goto LABEL_257;
          v86 = (*p_selectItem)->fields.servantEntity;
          if ( !v86 )
            goto LABEL_257;
          v87 = (PartyOrganizationListViewItem_o *)servantItemInfo;
          v89 = *(_QWORD *)&v86->fields.id.fields.currentCryptoKey;
          v88 = *(_QWORD *)&v86->fields.id.fields.fakeValue;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          }
          *(_QWORD *)&v320.fields.currentCryptoKey = v89;
          *(_QWORD *)&v320.fields.fakeValue = v88;
          servantItemInfo = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v320, 0LL);
          if ( !v87 )
            goto LABEL_257;
          v90 = servantItemInfo;
          EquipSvtId = PartyOrganizationListViewItem__get_EquipSvtId(v87, 0LL);
          servantItemInfo = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(EquipSvtId, 0LL);
          ++v85;
        }
        while ( v90 != (_DWORD)servantItemInfo );
        v91 = v87->fields.servantEntity;
        if ( v91 )
          break;
LABEL_72:
        v80 = v312;
        ++v82;
        ++v83;
        LODWORD(v81) = v312->max_length;
        if ( (__int64)v82 >= (int)v81 )
          return;
      }
      userServantEntity = v87->fields.userServantEntity;
      if ( !userServantEntity )
        return;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v263 = LocalizationManager__Get((System_String_o *)StringLiteral_15346/*"WAVE_BATTLE_EQUIP_MOVE_MESSAGE"*/, 0LL);
      v264 = sub_B2C374(object___TypeInfo, 5LL);
      LODWORD(v315.fields.currentCryptoKey) = v83;
      servantItemInfo = j_il2cpp_value_box_0(int_TypeInfo, &v315);
      if ( !v264 )
        goto LABEL_257;
      v271 = (System_Int32_array **)servantItemInfo;
      if ( !servantItemInfo || (servantItemInfo = sub_B2C41C(servantItemInfo, *(_QWORD *)(*(_QWORD *)v264 + 64LL))) != 0 )
      {
        if ( !*(_DWORD *)(v264 + 24) )
          goto LABEL_259;
        *(_QWORD *)(v264 + 32) = v271;
        sub_B2C2F8((BattleServantConfConponent_o *)(v264 + 32), v271, v265, v266, v267, v268, v269, v270);
        maxWave = this->fields.maxWave;
        servantItemInfo = j_il2cpp_value_box_0(int_TypeInfo, &maxWave);
        v278 = (System_Int32_array **)servantItemInfo;
        if ( !servantItemInfo
          || (servantItemInfo = sub_B2C41C(servantItemInfo, *(_QWORD *)(*(_QWORD *)v264 + 64LL))) != 0 )
        {
          if ( *(_DWORD *)(v264 + 24) <= 1u )
            goto LABEL_259;
          *(_QWORD *)(v264 + 40) = v278;
          sub_B2C2F8((BattleServantConfConponent_o *)(v264 + 40), v278, v272, v273, v274, v275, v276, v277);
          v279 = UserServantEntity__getRarity(userServantEntity, 0LL);
          if ( (BYTE3(Rarity_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !Rarity_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(Rarity_TypeInfo);
          servantItemInfo = (__int64)Rarity__getRarityType(v279, 0LL);
          v286 = (System_Int32_array **)servantItemInfo;
          if ( !servantItemInfo
            || (servantItemInfo = sub_B2C41C(servantItemInfo, *(_QWORD *)(*(_QWORD *)v264 + 64LL))) != 0 )
          {
            if ( *(_DWORD *)(v264 + 24) <= 2u )
              goto LABEL_259;
            *(_QWORD *)(v264 + 48) = v286;
            sub_B2C2F8((BattleServantConfConponent_o *)(v264 + 48), v286, v280, v281, v282, v283, v284, v285);
            servantItemInfo = (__int64)ServantEntity__getClassName(v91, 0LL);
            v293 = (System_Int32_array **)servantItemInfo;
            if ( !servantItemInfo
              || (servantItemInfo = sub_B2C41C(servantItemInfo, *(_QWORD *)(*(_QWORD *)v264 + 64LL))) != 0 )
            {
              if ( *(_DWORD *)(v264 + 24) <= 3u )
                goto LABEL_259;
              *(_QWORD *)(v264 + 56) = v293;
              sub_B2C2F8((BattleServantConfConponent_o *)(v264 + 56), v293, v287, v288, v289, v290, v291, v292);
              v295 = *(_QWORD *)&userServantEntity->fields.limitCount.fields.currentCryptoKey;
              v294 = *(_QWORD *)&userServantEntity->fields.limitCount.fields.fakeValue;
              if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
              }
              *(_QWORD *)&v322.fields.currentCryptoKey = v295;
              *(_QWORD *)&v322.fields.fakeValue = v294;
              v296 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v322, 0LL);
              servantItemInfo = (__int64)ServantEntity__getName(v91, v296, -1, 0LL);
              v303 = (System_Int32_array **)servantItemInfo;
              if ( !servantItemInfo
                || (servantItemInfo = sub_B2C41C(servantItemInfo, *(_QWORD *)(*(_QWORD *)v264 + 64LL))) != 0 )
              {
                if ( *(_DWORD *)(v264 + 24) > 4u )
                {
                  *(_QWORD *)(v264 + 64) = v303;
                  sub_B2C2F8((BattleServantConfConponent_o *)(v264 + 64), v303, v297, v298, v299, v300, v301, v302);
                  v304 = System_String__Format_44384256(v263, (System_Object_array *)v264, 0LL);
                  v305 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                  v306 = LocalizationManager__Get((System_String_o *)StringLiteral_5530/*"EQUIP_GRAPH_USE_WARNING_TITLE"*/, 0LL);
                  v307 = LocalizationManager__Get((System_String_o *)StringLiteral_3267/*"COMMON_CONFIRM_YES"*/, 0LL);
                  v308 = LocalizationManager__Get((System_String_o *)StringLiteral_3264/*"COMMON_CONFIRM_NO"*/, 0LL);
                  v309 = (CommonConfirmDialog_ClickDelegate_o *)sub_B2C42C(CommonConfirmDialog_ClickDelegate_TypeInfo);
                  CommonConfirmDialog_ClickDelegate___ctor(
                    v309,
                    (Il2CppObject *)this,
                    Method_EquipGraphListViewManager_EndSelectConfirm__,
                    0LL);
                  if ( !v305 )
                    goto LABEL_257;
                  CommonUI__OpenConfirmDialog_17971264(
                    v305,
                    v306,
                    v304,
                    v307,
                    v308,
                    v309,
                    26,
                    26,
                    15.0,
                    740,
                    0,
                    480,
                    -162.5,
                    0,
                    0,
                    280,
                    0,
                    0LL);
                  return;
                }
                goto LABEL_259;
              }
            }
          }
        }
      }
      goto LABEL_261;
    }
LABEL_74:
    EquipGraphListViewManager__EndSelectConfirm(this, 1, v63);
    return;
  }
  v183 = selectItem->fields.wearerMember;
  if ( v183 == this->fields.memberIndex || (v183 & 0x80000000) != 0 )
  {
    if ( (WORD1(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    if ( this->fields.isWaveBattle )
    {
      v234 = this->fields.waveDeckItemList;
      if ( !v234 )
        goto LABEL_257;
      v235 = this->fields.partyNumber - 1;
      if ( v235 >= v234->max_length )
        goto LABEL_259;
      v236 = this->fields.selectItem;
      if ( !v236 )
        goto LABEL_257;
      userSvtEntity = v236->fields.userSvtEntity;
      if ( !userSvtEntity )
        goto LABEL_257;
      memberIndex = this->fields.memberIndex;
      v239 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
      v240 = v234->m_Items[v235];
      *(_OWORD *)&v315.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v315.fields.fakeValue = v239;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      }
      v314 = v315;
      servantItemInfo = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v314, 0LL);
      if ( !v240 )
        goto LABEL_257;
      PartyListViewItem__SetEquip(v240, memberIndex, servantItemInfo, 0LL);
    }
    servantItemInfo = (__int64)this->fields.itemList;
    if ( !servantItemInfo )
      goto LABEL_257;
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v315,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)servantItemInfo,
      (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    v319 = *(System_Collections_Generic_List_Enumerator_T__o *)&v315.fields.currentCryptoKey;
    while ( 1 )
    {
      do
      {
        v241 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                 &v319,
                 (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
        if ( !v241 )
        {
          System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
            &v319,
            (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
          if ( *p_selectItem )
          {
            (*p_selectItem)->fields.isBase = 1;
            v256 = this->fields.selectItem;
            if ( v256 )
            {
              v257 = v256->fields.userSvtEntity;
              if ( v257 )
              {
                v258 = *(_OWORD *)&v257->fields.id.fields.fakeValue;
                v259 = this->fields.servantItemInfo;
                *(_OWORD *)&v315.fields.currentCryptoKey = *(_OWORD *)&v257->fields.id.fields.currentCryptoKey;
                *(_OWORD *)&v315.fields.fakeValue = v258;
                if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
                }
                v313 = v315;
                servantItemInfo = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v313, 0LL);
                if ( v259 )
                {
                  EquipGraphServantItem__SetEquipTarget(v259, servantItemInfo, v260);
                  servantItemInfo = (__int64)this->fields.servantItemDraw;
                  if ( servantItemInfo )
                  {
                    EquipGraphServantItemDraw__SetItem(
                      (EquipGraphServantItemDraw_o *)servantItemInfo,
                      this->fields.servantItemInfo,
                      v261);
                    v95 = this;
                    goto LABEL_83;
                  }
                }
              }
            }
          }
LABEL_257:
          sub_B2C434(servantItemInfo, v49);
        }
        current = v319.fields.current;
        if ( v319.fields.current )
        {
          v244 = *(&EquipGraphListViewItem_TypeInfo->_2.bitflags2 + 1);
          if ( *(&v319.fields.current->klass->_2.bitflags2 + 1) >= (unsigned int)v244
            && (EquipGraphListViewItem_c *)v319.fields.current->klass->_2.typeHierarchy[v244 - 1] == EquipGraphListViewItem_TypeInfo )
          {
            continue;
          }
        }
        sub_B2C434(v241, v242);
      }
      while ( !BYTE1(v319.fields.current[9].klass) );
      BYTE1(v319.fields.current[9].klass) = 0;
      klass_high = HIDWORD(current[9].klass);
      if ( klass_high != this->fields.memberIndex && (klass_high & 0x80000000) == 0 )
        break;
      if ( SHIDWORD(current[14].monitor) > 0 || BYTE4(current[15].klass) )
      {
        v246 = this->fields.baseCost;
        if ( (klass_high & 0x80000000) != 0 )
        {
          LODWORD(monitor) = 0;
          goto LABEL_205;
        }
LABEL_202:
        monitor = current[7].monitor;
        if ( monitor )
          LODWORD(monitor) = monitor[38];
LABEL_205:
        this->fields.baseCost = (_DWORD)monitor + v246;
        v248 = (UnityEngine_Object_o *)current[6].monitor;
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        v249 = UnityEngine_Object__op_Inequality(v248, 0LL, 0LL);
        if ( v249 )
        {
          v251 = current[6].monitor;
          if ( !v251
            || (v252 = *(&EquipGraphListViewObject_TypeInfo->_2.bitflags2 + 1),
                *(unsigned __int8 *)(*(_QWORD *)v251 + 300LL) < (unsigned int)v252)
            || *(EquipGraphListViewObject_c **)(*(_QWORD *)(*(_QWORD *)v251 + 200LL) + 8 * v252 - 8) != EquipGraphListViewObject_TypeInfo )
          {
            sub_B2C434(v249, v250);
          }
          v253 = *(&EquipGraphListViewObject_TypeInfo->_2.bitflags2 + 1);
          if ( *(unsigned __int8 *)(*(_QWORD *)v251 + 300LL) >= (unsigned int)v253 )
          {
            if ( *(EquipGraphListViewObject_c **)(*(_QWORD *)(*(_QWORD *)v251 + 200LL) + 8 * v253 - 8) == EquipGraphListViewObject_TypeInfo )
              v254 = (EquipGraphListViewObject_o *)current[6].monitor;
            else
              v254 = 0LL;
          }
          else
          {
            v254 = 0LL;
          }
          UnityEngine_Vector3__get_zero(0LL);
          if ( (byte_418A1A4 & 1) == 0 )
          {
            sub_B2C35C(&EquipGraphListViewItem_TypeInfo, v255);
            byte_418A1A4 = 1;
          }
          EquipGraphListViewObject__SetupDisp(v254, v255);
        }
      }
    }
    v246 = this->fields.baseCost;
    goto LABEL_202;
  }
  if ( (WORD1(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
    && !SoundManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  }
  SoundManager__playSystemSe(0, 0LL);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v184 = LocalizationManager__Get((System_String_o *)StringLiteral_5529/*"EQUIP_GRAPH_USE_WARNING_MESSAGE"*/, 0LL);
  servantItemInfo = sub_B2C374(object___TypeInfo, 6LL);
  if ( !this->fields.servantItemInfo )
    goto LABEL_257;
  v185 = (System_Object_array *)servantItemInfo;
  servantItemInfo = (__int64)EquipGraphServantItem__get_NameText(this->fields.servantItemInfo, v49);
  if ( !v185 )
    goto LABEL_257;
  v192 = (System_Int32_array **)servantItemInfo;
  if ( servantItemInfo )
  {
    servantItemInfo = sub_B2C41C(servantItemInfo, v185->obj.klass->_1.element_class);
    if ( !servantItemInfo )
      goto LABEL_261;
  }
  if ( !v185->max_length )
    goto LABEL_259;
  v185->m_Items[0] = (Il2CppObject *)v192;
  sub_B2C2F8((BattleServantConfConponent_o *)v185->m_Items, v192, v186, v187, v188, v189, v190, v191);
  if ( !*p_selectItem )
    goto LABEL_257;
  v199 = (System_Int32_array **)(*p_selectItem)->fields.wearerServantName;
  if ( v199 )
  {
    servantItemInfo = sub_B2C41C(v199, v185->obj.klass->_1.element_class);
    if ( !servantItemInfo )
      goto LABEL_261;
  }
  if ( v185->max_length <= 1 )
    goto LABEL_259;
  v185->m_Items[1] = (Il2CppObject *)v199;
  sub_B2C2F8((BattleServantConfConponent_o *)&v185->m_Items[1], v199, v193, v194, v195, v196, v197, v198);
  servantItemInfo = (__int64)this->fields.servantItemInfo;
  if ( !servantItemInfo )
    goto LABEL_257;
  servantItemInfo = (__int64)EquipGraphServantItem__get_ClassName((EquipGraphServantItem_o *)servantItemInfo, v49);
  v206 = (System_Int32_array **)servantItemInfo;
  if ( servantItemInfo )
  {
    servantItemInfo = sub_B2C41C(servantItemInfo, v185->obj.klass->_1.element_class);
    if ( !servantItemInfo )
      goto LABEL_261;
  }
  if ( v185->max_length <= 2 )
    goto LABEL_259;
  v185->m_Items[2] = (Il2CppObject *)v206;
  sub_B2C2F8((BattleServantConfConponent_o *)&v185->m_Items[2], v206, v200, v201, v202, v203, v204, v205);
  servantItemInfo = (__int64)*p_selectItem;
  if ( !*p_selectItem )
    goto LABEL_257;
  servantItemInfo = (__int64)EquipGraphListViewItem__get_WeareServantClassName(
                               (EquipGraphListViewItem_o *)servantItemInfo,
                               v49);
  v213 = (System_Int32_array **)servantItemInfo;
  if ( servantItemInfo )
  {
    servantItemInfo = sub_B2C41C(servantItemInfo, v185->obj.klass->_1.element_class);
    if ( !servantItemInfo )
      goto LABEL_261;
  }
  if ( v185->max_length <= 3 )
    goto LABEL_259;
  v185->m_Items[3] = (Il2CppObject *)v213;
  sub_B2C2F8((BattleServantConfConponent_o *)&v185->m_Items[3], v213, v207, v208, v209, v210, v211, v212);
  v214 = this->fields.servantItemInfo;
  if ( !v214 )
    goto LABEL_257;
  servantItemInfo = (__int64)v214->fields.userServantEntity;
  if ( !servantItemInfo )
    goto LABEL_257;
  v215 = UserServantEntity__getRarity((UserServantEntity_o *)servantItemInfo, 0LL);
  if ( (BYTE3(Rarity_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !Rarity_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Rarity_TypeInfo);
  servantItemInfo = (__int64)Rarity__getRarityType(v215, 0LL);
  v222 = (System_Int32_array **)servantItemInfo;
  if ( servantItemInfo )
  {
    servantItemInfo = sub_B2C41C(servantItemInfo, v185->obj.klass->_1.element_class);
    if ( !servantItemInfo )
      goto LABEL_261;
  }
  if ( v185->max_length <= 4 )
    goto LABEL_259;
  v185->m_Items[4] = (Il2CppObject *)v222;
  sub_B2C2F8((BattleServantConfConponent_o *)&v185->m_Items[4], v222, v216, v217, v218, v219, v220, v221);
  if ( !*p_selectItem )
    goto LABEL_257;
  servantItemInfo = (__int64)Rarity__getRarityType((*p_selectItem)->fields.weareRarity, 0LL);
  v229 = (System_Int32_array **)servantItemInfo;
  if ( servantItemInfo )
  {
    servantItemInfo = sub_B2C41C(servantItemInfo, v185->obj.klass->_1.element_class);
    if ( !servantItemInfo )
      goto LABEL_261;
  }
  if ( v185->max_length <= 5 )
    goto LABEL_259;
  v185->m_Items[5] = (Il2CppObject *)v229;
  sub_B2C2F8((BattleServantConfConponent_o *)&v185->m_Items[5], v229, v223, v224, v225, v226, v227, v228);
  v230 = System_String__Format_44384256(v184, v185, 0LL);
  v231 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v232 = LocalizationManager__Get((System_String_o *)StringLiteral_5530/*"EQUIP_GRAPH_USE_WARNING_TITLE"*/, 0LL);
  v233 = (CommonConfirmDialog_ClickDelegate_o *)sub_B2C42C(CommonConfirmDialog_ClickDelegate_TypeInfo);
  CommonConfirmDialog_ClickDelegate___ctor(
    v233,
    (Il2CppObject *)this,
    Method_EquipGraphListViewManager_EndSelectConfirm__,
    0LL);
  servantItemInfo = (__int64)BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
  }
  if ( !v231 )
    goto LABEL_257;
  CommonUI__OpenConfirmDialog(v231, v232, v230, v233, BalanceConfig_TypeInfo->static_fields->DefaultFontSize, 0, 0, 0LL);
}


void __fastcall EquipGraphListViewManager__SetFilterButtonImage(
        EquipGraphListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  ListViewSort_o *sort; // x0
  UISprite_o *filterSprite; // x19
  System_String_o **v6; // x8

  if ( (byte_418A194 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_16993/*"btn_filter_on"*/, method);
    sub_B2C35C(&StringLiteral_16992/*"btn_filter"*/, v3);
    byte_418A194 = 1;
  }
  sort = this->fields.sort;
  if ( !sort
    || (filterSprite = this->fields.filterSprite,
        sort = (ListViewSort_o *)ListViewSort__CheckFilterDefaultAll(sort, -1, 0LL),
        !filterSprite) )
  {
    sub_B2C434(sort, method);
  }
  v6 = (System_String_o **)&StringLiteral_16992/*"btn_filter"*/;
  if ( ((unsigned __int8)sort & 1) == 0 )
    v6 = (System_String_o **)&StringLiteral_16993/*"btn_filter_on"*/;
  UISprite__set_spriteName(filterSprite, *v6, 0LL);
}


void __fastcall EquipGraphListViewManager__SetMode(
        EquipGraphListViewManager_o *this,
        int32_t mode,
        EquipGraphListViewManager_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  const MethodInfo *v10; // x2

  this->fields.callbackFunc = callback;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.callbackFunc,
    (System_Int32_array **)callback,
    (System_String_array **)callback,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  EquipGraphListViewManager__SetMode_29525100(this, mode, v10);
}


void __fastcall EquipGraphListViewManager__SetMode_29525100(
        EquipGraphListViewManager_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  __int64 v5; // x1
  const MethodInfo *v6; // x2
  EquipGraphServantItemDraw_o *servantItemDraw; // x0
  const MethodInfo *v8; // x2
  int32_t v9; // w1

  this->fields.initMode = mode;
  this->fields.callbackCount = ListViewManager__get_ObjectSum((ListViewManager_o *)this, 0LL);
  ListViewManager__set_IsInput((ListViewManager_o *)this, mode == 2, 0LL);
  servantItemDraw = this->fields.servantItemDraw;
  if ( !servantItemDraw )
    goto LABEL_15;
  EquipGraphServantItemDraw__SetInput(servantItemDraw, this->fields.isInput, v6);
  servantItemDraw = (EquipGraphServantItemDraw_o *)this->fields.scrollView;
  if ( !servantItemDraw )
    goto LABEL_15;
  if ( UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)servantItemDraw, 0LL) )
    goto LABEL_7;
  servantItemDraw = (EquipGraphServantItemDraw_o *)this->fields.scrollView;
  if ( !servantItemDraw
    || (UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)servantItemDraw, 1, 0LL),
        (servantItemDraw = (EquipGraphServantItemDraw_o *)this->fields.scrollView) == 0LL) )
  {
LABEL_15:
    sub_B2C434(servantItemDraw, v5);
  }
  UIScrollView__UpdatePosition((UIScrollView_o *)servantItemDraw, 0LL);
LABEL_7:
  switch ( mode )
  {
    case 3:
      v9 = 4;
      goto LABEL_13;
    case 2:
      v9 = 3;
      goto LABEL_13;
    case 1:
      v9 = 2;
LABEL_13:
      EquipGraphListViewManager__RequestListObject_29525360(this, v9, v8);
      break;
  }
}


void __fastcall EquipGraphListViewManager__SetMode_29525304(
        EquipGraphListViewManager_o *this,
        int32_t mode,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  const MethodInfo *v10; // x2

  this->fields.callbackFunc2 = callback;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.callbackFunc2,
    (System_Int32_array **)callback,
    (System_String_array **)callback,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  EquipGraphListViewManager__SetMode_29525100(this, mode, v10);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EquipGraphListViewManager__SetObjectItem(
        EquipGraphListViewManager_o *this,
        ListViewObject_o *obj,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  EquipGraphListViewManager_o *v5; // x20
  __int64 v6; // x10
  int32_t initMode; // w20
  const MethodInfo *v8; // x3
  float v9; // s0
  int v10; // s1
  int32_t v13; // w1

  v5 = this;
  if ( (byte_418A18A & 1) == 0 )
  {
    this = (EquipGraphListViewManager_o *)sub_B2C35C(&EquipGraphListViewObject_TypeInfo, obj);
    byte_418A18A = 1;
  }
  if ( !obj
    || (v6 = *(&EquipGraphListViewObject_TypeInfo->_2.bitflags2 + 1), *(&obj->klass->_2.bitflags2 + 1) < (unsigned int)v6)
    || (EquipGraphListViewObject_c *)obj->klass->_2.typeHierarchy[v6 - 1] != EquipGraphListViewObject_TypeInfo )
  {
    sub_B2C434(this, obj);
  }
  initMode = v5->fields.initMode;
  *(UnityEngine_Vector3_o *)&v9 = UnityEngine_Vector3__get_zero(0LL);
  if ( initMode == 2 )
    v13 = 3;
  else
    v13 = 2;
  EquipGraphListViewObject__Init((EquipGraphListViewObject_o *)obj, v13, 0LL, v9, *(UnityEngine_Vector3_o *)&v10, v8);
}


void __fastcall EquipGraphListViewManager__SetSortButtonImage(
        EquipGraphListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  UnityEngine_Object_o *sortKindLabel; // x20
  __int64 v10; // x1
  ListViewSort_o *sort; // x0
  UILabel_o *v12; // x20
  UnityEngine_Object_o *sortOrderSprite; // x20
  struct ListViewSort_o *v14; // x8
  int32_t sortKind; // w9
  System_String_o **v16; // x8
  struct ListViewSort_o *v17; // x8
  _BOOL4 isAscendingOrder; // w8
  System_String_o **v19; // x9
  System_String_o **v20; // x10
  System_String_o **v21; // x8
  struct ListViewSort_o *v22; // x8
  System_String_o **v23; // x8
  UnityEngine_Object_o *bonusFilterKindLabel; // x20
  UILabel_o *v25; // x20
  System_Int32_array *bonusEventIdList; // x1

  if ( (byte_418A199 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, method);
    sub_B2C35C(&StringLiteral_17021/*"btn_sort_up"*/, v3);
    sub_B2C35C(&StringLiteral_17104/*"btn_txt_up"*/, v4);
    sub_B2C35C(&StringLiteral_17061/*"btn_txt_new"*/, v5);
    sub_B2C35C(&StringLiteral_17051/*"btn_txt_down"*/, v6);
    sub_B2C35C(&StringLiteral_17068/*"btn_txt_old"*/, v7);
    sub_B2C35C(&StringLiteral_17018/*"btn_sort_down"*/, v8);
    byte_418A199 = 1;
  }
  sortKindLabel = (UnityEngine_Object_o *)this->fields.sortKindLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(sortKindLabel, 0LL, 0LL) )
  {
    sort = this->fields.sort;
    if ( !sort )
      goto LABEL_45;
    v12 = this->fields.sortKindLabel;
    sort = (ListViewSort_o *)ListViewSort__GetSortKindButtonText(sort, 0LL);
    if ( !v12 )
      goto LABEL_45;
    UILabel__set_text(v12, (System_String_o *)sort, 0LL);
  }
  sortOrderSprite = (UnityEngine_Object_o *)this->fields.sortOrderSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  sort = (ListViewSort_o *)UnityEngine_Object__op_Inequality(sortOrderSprite, 0LL, 0LL);
  if ( ((unsigned __int8)sort & 1) != 0 )
  {
    v14 = this->fields.sort;
    if ( !v14 )
      goto LABEL_45;
    sortKind = v14->fields.sortKind;
    if ( sortKind == 11 || sortKind == 1 )
    {
      sort = (ListViewSort_o *)this->fields.sortExplanationSprite;
      if ( !sort )
        goto LABEL_45;
      v16 = (System_String_o **)(v14->fields.isAscendingOrder ? &StringLiteral_17068/*"btn_txt_old"*/ : &StringLiteral_17061/*"btn_txt_new"*/);
      UISprite__set_spriteName((UISprite_o *)sort, *v16, 0LL);
      v17 = this->fields.sort;
      if ( !v17 )
        goto LABEL_45;
      sort = (ListViewSort_o *)this->fields.sortOrderSprite;
      if ( !sort )
        goto LABEL_45;
      isAscendingOrder = v17->fields.isAscendingOrder;
      v19 = (System_String_o **)&StringLiteral_17018/*"btn_sort_down"*/;
      v20 = (System_String_o **)&StringLiteral_17021/*"btn_sort_up"*/;
    }
    else
    {
      sort = (ListViewSort_o *)this->fields.sortExplanationSprite;
      if ( !sort )
        goto LABEL_45;
      v21 = (System_String_o **)(v14->fields.isAscendingOrder ? &StringLiteral_17104/*"btn_txt_up"*/ : &StringLiteral_17051/*"btn_txt_down"*/);
      UISprite__set_spriteName((UISprite_o *)sort, *v21, 0LL);
      v22 = this->fields.sort;
      if ( !v22 )
        goto LABEL_45;
      sort = (ListViewSort_o *)this->fields.sortOrderSprite;
      if ( !sort )
        goto LABEL_45;
      isAscendingOrder = v22->fields.isAscendingOrder;
      v19 = (System_String_o **)&StringLiteral_17021/*"btn_sort_up"*/;
      v20 = (System_String_o **)&StringLiteral_17018/*"btn_sort_down"*/;
    }
    if ( isAscendingOrder )
      v23 = v19;
    else
      v23 = v20;
    UISprite__set_spriteName((UISprite_o *)sort, *v23, 0LL);
  }
  bonusFilterKindLabel = (UnityEngine_Object_o *)this->fields.bonusFilterKindLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(bonusFilterKindLabel, 0LL, 0LL) )
  {
    sort = this->fields.sort;
    if ( sort )
    {
      v25 = this->fields.bonusFilterKindLabel;
      bonusEventIdList = this->fields.bonusEventIdList;
      if ( this->fields.isQuestStart )
      {
        sort = (ListViewSort_o *)ListViewSort__GetBonusKindText_33948928(sort, bonusEventIdList, 0LL, 0, 0LL, 0LL);
        if ( v25 )
        {
LABEL_42:
          UILabel__set_text(v25, (System_String_o *)sort, 0LL);
          return;
        }
      }
      else
      {
        sort = (ListViewSort_o *)ListViewSort__GetBonusKind2Text_33951116(
                                   sort,
                                   bonusEventIdList,
                                   0LL,
                                   0LL,
                                   0LL,
                                   0LL,
                                   0LL);
        if ( v25 )
          goto LABEL_42;
      }
    }
LABEL_45:
    sub_B2C434(sort, v10);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EquipGraphListViewManager___SelectEquip_b__71_0(
        EquipGraphListViewManager_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  __int64 v5; // x1
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7
  System_Action_o *selectItemCallbackFunc; // x20

  if ( (byte_418A19C & 1) == 0 )
  {
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, isDecide);
    byte_418A19C = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B2C434(0LL, v5);
  CommonUI__CloseNotificationDialog(Instance, 0LL);
  selectItemCallbackFunc = this->fields.selectItemCallbackFunc;
  if ( selectItemCallbackFunc )
  {
    this->fields.selectItemCallbackFunc = 0LL;
    sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.selectItemCallbackFunc, 0LL, v6, v7, v8, v9, v10, v11);
    System_Action__Invoke(selectItemCallbackFunc, 0LL);
  }
}


void __fastcall EquipGraphListViewManager__add_callbackFunc(
        EquipGraphListViewManager_o *this,
        EquipGraphListViewManager_CallbackFunc_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *callbackFunc; // x21
  struct EquipGraphListViewManager_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v7; // x0
  __int64 v8; // x0
  bool v9; // zf
  EquipGraphListViewManager_o *v10; // x0
  EquipGraphListViewManager_CallbackFunc_o *v11; // x1
  const MethodInfo *v12; // x2

  if ( (byte_418A179 & 1) == 0 )
  {
    sub_B2C35C(&EquipGraphListViewManager_CallbackFunc_TypeInfo, value);
    byte_418A179 = 1;
  }
  callbackFunc = (System_Delegate_o *)this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  while ( 1 )
  {
    v7 = System_Delegate__Combine(callbackFunc, (System_Delegate_o *)value, 0LL);
    if ( v7 )
    {
      if ( (EquipGraphListViewManager_CallbackFunc_c *)v7->klass != EquipGraphListViewManager_CallbackFunc_TypeInfo )
        break;
    }
    v8 = sub_B20D74(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_B2C728(v7);
  EquipGraphListViewManager__remove_callbackFunc(v10, v11, v12);
}


void __fastcall EquipGraphListViewManager__add_callbackFunc2(
        EquipGraphListViewManager_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *callbackFunc2; // x21
  struct System_Action_o **p_callbackFunc2; // x20
  System_Delegate_o *v7; // x0
  __int64 v8; // x0
  bool v9; // zf
  EquipGraphListViewManager_o *v10; // x0
  System_Action_o *v11; // x1
  const MethodInfo *v12; // x2

  if ( (byte_418A17B & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, value);
    byte_418A17B = 1;
  }
  callbackFunc2 = (System_Delegate_o *)this->fields.callbackFunc2;
  p_callbackFunc2 = &this->fields.callbackFunc2;
  while ( 1 )
  {
    v7 = System_Delegate__Combine(callbackFunc2, (System_Delegate_o *)value, 0LL);
    if ( v7 )
    {
      if ( (System_Action_c *)v7->klass != System_Action_TypeInfo )
        break;
    }
    v8 = sub_B20D74(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_B2C728(v7);
  EquipGraphListViewManager__remove_callbackFunc2(v10, v11, v12);
}


void __fastcall EquipGraphListViewManager__add_selectItemCallbackFunc(
        EquipGraphListViewManager_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *selectItemCallbackFunc; // x21
  struct System_Action_o **p_selectItemCallbackFunc; // x20
  System_Delegate_o *v7; // x0
  __int64 v8; // x0
  bool v9; // zf
  EquipGraphListViewManager_o *v10; // x0
  System_Action_o *v11; // x1
  const MethodInfo *v12; // x2

  if ( (byte_418A17D & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, value);
    byte_418A17D = 1;
  }
  selectItemCallbackFunc = (System_Delegate_o *)this->fields.selectItemCallbackFunc;
  p_selectItemCallbackFunc = &this->fields.selectItemCallbackFunc;
  while ( 1 )
  {
    v7 = System_Delegate__Combine(selectItemCallbackFunc, (System_Delegate_o *)value, 0LL);
    if ( v7 )
    {
      if ( (System_Action_c *)v7->klass != System_Action_TypeInfo )
        break;
    }
    v8 = sub_B20D74(p_selectItemCallbackFunc, v7, selectItemCallbackFunc);
    v9 = selectItemCallbackFunc == (System_Delegate_o *)v8;
    selectItemCallbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_B2C728(v7);
  EquipGraphListViewManager__remove_selectItemCallbackFunc(v10, v11, v12);
}


System_Collections_Generic_List_EquipGraphListViewObject__o *__fastcall EquipGraphListViewManager__get_ClippingObjectList(
        EquipGraphListViewManager_o *this,
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
  Il2CppObject *current; // x21
  _BOOL8 v15; // x0
  __int64 v16; // x1
  EquipGraphListViewObject_o *Component_srcLineSprite; // x0
  const MethodInfo *v18; // x1
  EventMissionProgressRequest_Argument_ProgressData_o *v19; // x21
  ListViewItem_o *Item; // x0
  __int64 v21; // x1
  _BOOL8 v22; // x0
  __int64 v23; // x1
  System_Collections_Generic_List_Enumerator_T__o v25; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v26; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_418A182 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v3);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v4);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_EquipGraphListViewObject___, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_EquipGraphListViewObject__Add__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_EquipGraphListViewObject___ctor__, v8);
    sub_B2C35C(&System_Collections_Generic_List_EquipGraphListViewObject__TypeInfo, v9);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v10);
    byte_418A182 = 1;
  }
  memset(&v26, 0, sizeof(v26));
  v11 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_EquipGraphListViewObject__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v11,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_EquipGraphListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_B2C434(0LL, v12);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v25,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)objectList,
    (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v26 = v25;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v26,
            (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v26.fields.current;
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
      Component_srcLineSprite = (EquipGraphListViewObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                (UnityEngine_GameObject_o *)current,
                                                                (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_EquipGraphListViewObject___);
      v19 = (EventMissionProgressRequest_Argument_ProgressData_o *)Component_srcLineSprite;
      if ( !Component_srcLineSprite )
        sub_B2C434(0LL, v18);
      Item = (ListViewItem_o *)EquipGraphListViewObject__GetItem(Component_srcLineSprite, v18);
      if ( !Item )
        sub_B2C434(0LL, v21);
      if ( Item->fields.isTermination )
      {
        v22 = ListViewManager__ClippingItem_24147020((ListViewManager_o *)this, Item, 0LL);
        if ( v22 )
        {
          if ( !v11 )
            sub_B2C434(v22, v23);
          goto LABEL_16;
        }
      }
      else
      {
        if ( !v11 )
          sub_B2C434(Item, v21);
LABEL_16:
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v11,
          v19,
          (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_EquipGraphListViewObject__Add__);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v26,
    (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_EquipGraphListViewObject__o *)v11;
}


System_Collections_Generic_List_EquipGraphListViewObject__o *__fastcall EquipGraphListViewManager__get_ObjectList(
        EquipGraphListViewManager_o *this,
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

  if ( (byte_418A181 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v3);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v4);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_EquipGraphListViewObject___, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_EquipGraphListViewObject__Add__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_EquipGraphListViewObject___ctor__, v8);
    sub_B2C35C(&System_Collections_Generic_List_EquipGraphListViewObject__TypeInfo, v9);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v10);
    byte_418A181 = 1;
  }
  memset(&v20, 0, sizeof(v20));
  v11 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_EquipGraphListViewObject__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v11,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_EquipGraphListViewObject___ctor__);
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
                                                                                         (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_EquipGraphListViewObject___);
      if ( !v11 )
        sub_B2C434(Component_srcLineSprite, Component_srcLineSprite);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v11,
        Component_srcLineSprite,
        (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_EquipGraphListViewObject__Add__);
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v20,
    (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_EquipGraphListViewObject__o *)v11;
}


void __fastcall EquipGraphListViewManager__remove_callbackFunc(
        EquipGraphListViewManager_o *this,
        EquipGraphListViewManager_CallbackFunc_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *callbackFunc; // x21
  struct EquipGraphListViewManager_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v7; // x0
  __int64 v8; // x0
  bool v9; // zf
  EquipGraphListViewManager_o *v10; // x0
  System_Action_o *v11; // x1
  const MethodInfo *v12; // x2

  if ( (byte_418A17A & 1) == 0 )
  {
    sub_B2C35C(&EquipGraphListViewManager_CallbackFunc_TypeInfo, value);
    byte_418A17A = 1;
  }
  callbackFunc = (System_Delegate_o *)this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  while ( 1 )
  {
    v7 = System_Delegate__Remove(callbackFunc, (System_Delegate_o *)value, 0LL);
    if ( v7 )
    {
      if ( (EquipGraphListViewManager_CallbackFunc_c *)v7->klass != EquipGraphListViewManager_CallbackFunc_TypeInfo )
        break;
    }
    v8 = sub_B20D74(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_B2C728(v7);
  EquipGraphListViewManager__add_callbackFunc2(v10, v11, v12);
}


void __fastcall EquipGraphListViewManager__remove_callbackFunc2(
        EquipGraphListViewManager_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *callbackFunc2; // x21
  struct System_Action_o **p_callbackFunc2; // x20
  System_Delegate_o *v7; // x0
  __int64 v8; // x0
  bool v9; // zf
  EquipGraphListViewManager_o *v10; // x0
  System_Action_o *v11; // x1
  const MethodInfo *v12; // x2

  if ( (byte_418A17C & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, value);
    byte_418A17C = 1;
  }
  callbackFunc2 = (System_Delegate_o *)this->fields.callbackFunc2;
  p_callbackFunc2 = &this->fields.callbackFunc2;
  while ( 1 )
  {
    v7 = System_Delegate__Remove(callbackFunc2, (System_Delegate_o *)value, 0LL);
    if ( v7 )
    {
      if ( (System_Action_c *)v7->klass != System_Action_TypeInfo )
        break;
    }
    v8 = sub_B20D74(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_B2C728(v7);
  EquipGraphListViewManager__add_selectItemCallbackFunc(v10, v11, v12);
}


void __fastcall EquipGraphListViewManager__remove_selectItemCallbackFunc(
        EquipGraphListViewManager_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *selectItemCallbackFunc; // x21
  struct System_Action_o **p_selectItemCallbackFunc; // x20
  System_Delegate_o *v7; // x0
  __int64 v8; // x0
  bool v9; // zf
  const MethodInfo *v10; // x0

  if ( (byte_418A17E & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, value);
    byte_418A17E = 1;
  }
  selectItemCallbackFunc = (System_Delegate_o *)this->fields.selectItemCallbackFunc;
  p_selectItemCallbackFunc = &this->fields.selectItemCallbackFunc;
  while ( 1 )
  {
    v7 = System_Delegate__Remove(selectItemCallbackFunc, (System_Delegate_o *)value, 0LL);
    if ( v7 )
    {
      if ( (System_Action_c *)v7->klass != System_Action_TypeInfo )
        break;
    }
    v8 = sub_B20D74(p_selectItemCallbackFunc, v7, selectItemCallbackFunc);
    v9 = selectItemCallbackFunc == (System_Delegate_o *)v8;
    selectItemCallbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_B2C728(v7);
  EquipGraphListViewManager__DeleteContinueData(v10);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EquipGraphListViewManager_CallbackFunc___ctor(
        EquipGraphListViewManager_CallbackFunc_o *this,
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
System_IAsyncResult_o *__fastcall EquipGraphListViewManager_CallbackFunc__BeginInvoke(
        EquipGraphListViewManager_CallbackFunc_o *this,
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
  if ( (byte_4184AAC & 1) == 0 )
  {
    sub_B2C35C(&int_TypeInfo, *(_QWORD *)&kind);
    sub_B2C35C(&EquipGraphListViewManager_ResultKind_TypeInfo, v9);
    byte_4184AAC = 1;
  }
  v11[2] = 0LL;
  v11[0] = j_il2cpp_value_box_0(EquipGraphListViewManager_ResultKind_TypeInfo, &v13);
  v11[1] = j_il2cpp_value_box_0(int_TypeInfo, &v12);
  return (System_IAsyncResult_o *)sub_B2C300(this, v11, callback, object);
}


void __fastcall EquipGraphListViewManager_CallbackFunc__EndInvoke(
        EquipGraphListViewManager_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B2C304(result, 0LL, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EquipGraphListViewManager_CallbackFunc__Invoke(
        EquipGraphListViewManager_CallbackFunc_o *this,
        int32_t kind,
        int32_t result,
        const MethodInfo *method)
{
  __int64 v4; // x8
  __int64 v7; // x25
  EquipGraphListViewManager_CallbackFunc_o **v8; // x26
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
  EquipGraphListViewManager_CallbackFunc_o *v21; // x8
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
  EquipGraphListViewManager_CallbackFunc_o *v35; // [xsp+18h] [xbp-48h] BYREF

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
    v8 = (EquipGraphListViewManager_CallbackFunc_o **)(v4 + 32);
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