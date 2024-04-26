void __fastcall EquipGraphListViewManager___cctor(const MethodInfo *method)
{
  ListViewSort_o *v1; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v3; // x2
  System_String_array **v4; // x3
  System_Boolean_array **v5; // x4
  System_Int32_array **v6; // x5
  System_Int32_array *v7; // x6
  System_Int32_array *v8; // x7
  ListViewSort_o *v9; // x19
  struct EquipGraphListViewManager_StaticFields *v10; // x0
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7

  if ( (byte_435504C & 1) == 0 )
  {
    sub_B70694(&EquipGraphListViewManager_TypeInfo);
    sub_B70694(&ListViewSort_TypeInfo);
    sub_B70694(&StringLiteral_6149/*"EquipGraph"*/);
    sub_B70694(&StringLiteral_15633/*"WarBoardEquipGraph"*/);
    byte_435504C = 1;
  }
  v1 = (ListViewSort_o *)sub_B70764(ListViewSort_TypeInfo);
  ListViewSort___ctor_33980040(v1, (System_String_o *)StringLiteral_6149/*"EquipGraph"*/, 3, 0, 0LL);
  static_fields = (BattleServantConfConponent_o *)EquipGraphListViewManager_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v1;
  sub_B70630(static_fields, (System_Int32_array **)v1, v3, v4, v5, v6, v7, v8);
  v9 = (ListViewSort_o *)sub_B70764(ListViewSort_TypeInfo);
  ListViewSort___ctor_33980040(v9, (System_String_o *)StringLiteral_15633/*"WarBoardEquipGraph"*/, 3, 0, 0LL);
  v10 = EquipGraphListViewManager_TypeInfo->static_fields;
  v10->warBoardSortStatus = v9;
  sub_B70630(
    (BattleServantConfConponent_o *)&v10->warBoardSortStatus,
    (System_Int32_array **)v9,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
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
    sub_B70630(
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
    sub_B7076C(this, method);
  }
  ListViewSort__Save((ListViewSort_o *)this, 0LL);
  EquipGraphListViewManager__ModifyList(v9, 1, v13);
  EquipGraphListViewManager__SetMode_31332316(v9, 2, v14);
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
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  EquipGraphListViewManager_c *v19; // x0
  struct ListViewSort_o **p_sortStatus; // x8
  struct ListViewSort_o *v21; // x1
  struct ListViewSort_o **p_sort; // x23
  __int64 servantItemDraw; // x0
  const MethodInfo *v24; // x1
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  struct ListViewSort_o *sort; // x8
  unsigned int iconScaleKind; // w8
  struct ListViewItemSeed_o *normalSizeSeed; // x1
  struct System_Int32_array *servantEquipFilterEventIdList; // x9
  struct ListViewSort_o *v35; // x8
  struct System_Int32_array *v36; // x1
  struct System_Int32_array **p_bonusEventIdList; // x0
  struct ListViewSort_o *v38; // x8
  System_Int32_array *bonusEventIdList; // x1
  PartyOrganizationListViewItem_o *v40; // x24
  EquipGraphServantItem_o *v41; // x25
  const MethodInfo *v42; // x2
  System_Int32_array **v43; // x1
  struct EquipGraphServantItem_o **p_servantItemInfo; // x27
  ListViewManager_o *v45; // x25
  System_String_array **v46; // x2
  System_String_array **v47; // x3
  System_Boolean_array **v48; // x4
  System_Int32_array **v49; // x5
  System_Int32_array *v50; // x6
  System_Int32_array *v51; // x7
  const MethodInfo *v52; // x2
  const MethodInfo *v53; // x2
  struct EquipGraphServantItem_o *servantItemInfo; // x8
  struct ServantEntity_o *equipServantEntity; // x9
  __int64 v56; // x24
  UserServantEntity_array *ServantEquipList; // x0
  UnityEngine_Object_o *infoDataLabel; // x26
  UserServantEntity_array *v59; // x19
  UILabel_o *monitor; // x27
  PartyListViewItem_array *v61; // x25
  __int64 v62; // x2
  System_String_o *v63; // x28
  __int64 v64; // x2
  Il2CppObject *v65; // x26
  Il2CppObject *v66; // x0
  __int64 v67; // x8
  UserServantEntity_array *v68; // x20
  unsigned __int64 v69; // x23
  UserServantEntity_o **m_Items; // x22
  UserServantEntity_o *v71; // x26
  PartyListViewItem_array *v72; // x24
  __int64 v73; // x28
  struct EquipGraphServantItem_o **v74; // x19
  int32_t memberIndex; // w25
  EquipGraphListViewItem_o *v76; // x0
  int64_t v77; // x3
  EventMissionProgressRequest_Argument_ProgressData_o *v78; // x27
  int64_t v79; // x4
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x8
  UILabel_o *emptyMessageLabel; // x20
  System_String_o **v82; // x8
  System_String_o *v83; // x21
  const MethodInfo *v84; // x1
  const MethodInfo *v85; // x1
  __int64 v86; // x0
  int32_t memberIdx; // [xsp+0h] [xbp-80h]
  const MethodInfo *v88; // [xsp+8h] [xbp-78h]
  struct EquipGraphServantItem_o **v89; // [xsp+18h] [xbp-68h]
  PartyListViewItem_o *v90; // [xsp+18h] [xbp-68h]
  EquipGraphListViewManager_o *v91; // [xsp+20h] [xbp-60h]
  int v92; // [xsp+28h] [xbp-58h] BYREF
  int v93; // [xsp+2Ch] [xbp-54h] BYREF

  if ( (byte_4355034 & 1) == 0 )
  {
    sub_B70694(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_B70694(&EquipGraphListViewItem_TypeInfo);
    sub_B70694(&EquipGraphListViewManager_TypeInfo);
    sub_B70694(&EquipGraphServantItem_TypeInfo);
    sub_B70694(&int_TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    sub_B70694(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_B70694(&LocalizationManager_TypeInfo);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B70694(&StringLiteral_11850/*"SERVANT_EQUIP_EMPTY"*/);
    sub_B70694(&StringLiteral_12046/*"SERVANT_SORT_FILTER_RESULT_EMPTY"*/);
    sub_B70694(&StringLiteral_12638/*"SUM_INFO"*/);
    byte_4355034 = 1;
  }
  this->fields.waveDeckItemList = baseDeckItemList;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.waveDeckItemList,
    (System_Int32_array **)baseDeckItemList,
    (System_String_array **)partyItem,
    *(System_String_array ***)&member,
    (System_Boolean_array **)setupInfo,
    (System_Int32_array **)method,
    v6,
    v7);
  v19 = EquipGraphListViewManager_TypeInfo;
  if ( (BYTE3(EquipGraphListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EquipGraphListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EquipGraphListViewManager_TypeInfo);
    v19 = EquipGraphListViewManager_TypeInfo;
  }
  p_sortStatus = &v19->static_fields->sortStatus;
  v21 = *p_sortStatus;
  this->fields.sort = *p_sortStatus;
  p_sort = &this->fields.sort;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.sort,
    (System_Int32_array **)v21,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
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
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.seed,
    (System_Int32_array **)normalSizeSeed,
    v25,
    v26,
    v27,
    v28,
    v29,
    v30);
LABEL_17:
  this->fields.memberIndex = member;
  if ( setupInfo )
  {
    this->fields.isQuestStart = setupInfo->fields.isQuestStart;
    servantEquipFilterEventIdList = setupInfo->fields.servantEquipFilterEventIdList;
    v35 = this->fields.sort;
    if ( servantEquipFilterEventIdList )
      LOBYTE(servantEquipFilterEventIdList) = servantEquipFilterEventIdList->max_length != 0;
    if ( !v35 )
      goto LABEL_71;
    v35->fields.isBonusKind = (char)servantEquipFilterEventIdList;
    v36 = setupInfo->fields.servantEquipFilterEventIdList;
    p_bonusEventIdList = &this->fields.bonusEventIdList;
    this->fields.bonusEventIdList = v36;
  }
  else
  {
    v38 = this->fields.sort;
    this->fields.isQuestStart = 1;
    if ( !v38 )
      goto LABEL_71;
    p_bonusEventIdList = &this->fields.bonusEventIdList;
    v36 = 0LL;
    v38->fields.isBonusKind = 0;
    this->fields.bonusEventIdList = 0LL;
  }
  sub_B70630(
    (BattleServantConfConponent_o *)p_bonusEventIdList,
    (System_Int32_array **)v36,
    v25,
    v26,
    v27,
    v28,
    v29,
    v30);
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
  v40 = (PartyOrganizationListViewItem_o *)servantItemDraw;
  if ( !*(_BYTE *)(servantItemDraw + 128) )
  {
    v91 = this;
    v41 = (EquipGraphServantItem_o *)sub_B70764(EquipGraphServantItem_TypeInfo);
    EquipGraphServantItem___ctor(v41, v40, v42);
    v43 = (System_Int32_array **)v41;
    p_servantItemInfo = &this->fields.servantItemInfo;
    this->fields.servantItemInfo = v41;
    v45 = (ListViewManager_o *)this;
    sub_B70630((BattleServantConfConponent_o *)&this->fields.servantItemInfo, v43, v46, v47, v48, v49, v50, v51);
    servantItemDraw = (__int64)this->fields.servantItemDraw;
    if ( !servantItemDraw )
      goto LABEL_71;
    EquipGraphServantItemDraw__SetItem(
      (EquipGraphServantItemDraw_o *)servantItemDraw,
      this->fields.servantItemInfo,
      v52);
    servantItemDraw = (__int64)this->fields.servantItemDraw;
    if ( !servantItemDraw )
      goto LABEL_71;
    EquipGraphServantItemDraw__SetInput((EquipGraphServantItemDraw_o *)servantItemDraw, 0, v53);
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
    if ( !baseDeckItemList )
      goto LABEL_71;
    v56 = servantItemDraw;
    this->fields.maxWave = *(_QWORD *)&baseDeckItemList->max_length;
    servantItemDraw = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !servantItemDraw )
      goto LABEL_71;
    servantItemDraw = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                 (DataManager_o *)servantItemDraw,
                                 (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_UserServantMaster___);
    if ( !servantItemDraw )
      goto LABEL_71;
    ServantEquipList = UserServantMaster__getServantEquipList((UserServantMaster_o *)servantItemDraw, 0LL);
    infoDataLabel = (UnityEngine_Object_o *)this->fields.infoDataLabel;
    v59 = ServantEquipList;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(infoDataLabel, 0LL, 0LL) )
    {
      v89 = p_servantItemInfo;
      monitor = (UILabel_o *)v45[1].monitor;
      v61 = baseDeckItemList;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      servantItemDraw = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_12638/*"SUM_INFO"*/, 0LL);
      if ( !v59 )
        goto LABEL_71;
      v63 = (System_String_o *)servantItemDraw;
      v93 = *(_QWORD *)&v59->max_length;
      servantItemDraw = j_il2cpp_value_box_0(int_TypeInfo, &v93, v62);
      if ( !v56 )
        goto LABEL_71;
      v65 = (Il2CppObject *)servantItemDraw;
      v92 = *(_DWORD *)(v56 + 148);
      v66 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v92, v64);
      servantItemDraw = (__int64)System_String__Format_44753704(v63, v65, v66, 0LL);
      if ( !monitor )
        goto LABEL_71;
      UILabel__set_text(monitor, (System_String_o *)servantItemDraw, 0LL);
      baseDeckItemList = v61;
      p_servantItemInfo = v89;
      v45 = (ListViewManager_o *)v91;
    }
    servantItemDraw = (__int64)v45[1].fields.emptyMessageLabel;
    if ( !servantItemDraw )
      goto LABEL_71;
    servantItemDraw = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)servantItemDraw, 0LL);
    if ( !*p_sort )
      goto LABEL_71;
    if ( !servantItemDraw )
      goto LABEL_71;
    v90 = partyItem;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)servantItemDraw, (*p_sort)->fields.isBonusKind, 0LL);
    ListViewManager__CreateList(v45, 0, 0LL);
    if ( !v59 )
      goto LABEL_71;
    v67 = *(_QWORD *)&v59->max_length;
    if ( (int)v67 >= 1 )
    {
      v68 = v59;
      v69 = 0LL;
      m_Items = v59->m_Items;
      while ( 1 )
      {
        if ( v69 >= (unsigned int)v67 )
        {
          v86 = sub_B70798(servantItemDraw);
          sub_B70738(v86, 0LL);
        }
        servantItemDraw = (__int64)*p_servantItemInfo;
        if ( !*p_servantItemInfo )
          break;
        v71 = m_Items[v69];
        v72 = baseDeckItemList;
        servantItemDraw = EquipGraphServantItem__get_EquipUserSvtId((EquipGraphServantItem_o *)servantItemDraw, v24);
        if ( !*p_servantItemInfo )
          break;
        v73 = servantItemDraw;
        v74 = p_servantItemInfo;
        memberIndex = v91->fields.memberIndex;
        v76 = (EquipGraphListViewItem_o *)sub_B70764(EquipGraphListViewItem_TypeInfo);
        memberIdx = memberIndex;
        v45 = (ListViewManager_o *)v91;
        v77 = v73;
        v78 = (EventMissionProgressRequest_Argument_ProgressData_o *)v76;
        baseDeckItemList = v72;
        EquipGraphListViewItem___ctor(v76, v69, v71, v77, v79, v72, v90, setupInfo, memberIdx, v88);
        servantItemDraw = (__int64)v91->fields.itemList;
        if ( !servantItemDraw )
          break;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)servantItemDraw,
          v78,
          (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
        LODWORD(v67) = v68->max_length;
        ++v69;
        p_servantItemInfo = v74;
        if ( (__int64)v69 >= (int)v67 )
          goto LABEL_61;
      }
LABEL_71:
      sub_B7076C(servantItemDraw, v24);
    }
LABEL_61:
    itemList = v45->fields.itemList;
    if ( !itemList )
      goto LABEL_71;
    emptyMessageLabel = v45->fields.emptyMessageLabel;
    v82 = (System_String_o **)(itemList->fields._size <= 0 ? &StringLiteral_11850/*"SERVANT_EQUIP_EMPTY"*/ : &StringLiteral_12046/*"SERVANT_SORT_FILTER_RESULT_EMPTY"*/);
    v83 = *v82;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    servantItemDraw = (__int64)LocalizationManager__Get(v83, 0LL);
    if ( !emptyMessageLabel )
      goto LABEL_71;
    UILabel__set_text(emptyMessageLabel, (System_String_o *)servantItemDraw, 0LL);
    EquipGraphListViewManager__RefrashListDisp((EquipGraphListViewManager_o *)v45, v84);
    ListViewManager__SortItem(v45, -1, 0, -1, 0LL);
    EquipGraphListViewManager__SetFilterButtonImage((EquipGraphListViewManager_o *)v45, v85);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EquipGraphListViewManager__CreateList_31328068(
        EquipGraphListViewManager_o *this,
        WarBoardPartyListViewItem_o *partyItem,
        int32_t member,
        EventUpValSetupInfo_o *setupInfo,
        const MethodInfo *method)
{
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  EquipGraphListViewManager_c *v12; // x0
  struct ListViewSort_o *warBoardSortStatus; // x1
  struct ListViewSort_o **p_sort; // x22
  __int64 MemberItem; // x0
  const MethodInfo *v16; // x1
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  unsigned int iconScaleKind; // w8
  struct ListViewItemSeed_o *normalSizeSeed; // x1
  struct System_Int32_array *servantEquipFilterEventIdList; // x9
  struct ListViewSort_o *sort; // x8
  struct System_Int32_array *v27; // x1
  struct System_Int32_array **p_bonusEventIdList; // x0
  struct ListViewSort_o *v29; // x8
  System_Int32_array *bonusEventIdList; // x1
  PartyOrganizationListViewItem_o *v31; // x23
  EquipGraphServantItem_o *v32; // x24
  const MethodInfo *v33; // x2
  struct EquipGraphServantItem_o **p_servantItemInfo; // x23
  System_String_array **v35; // x2
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7
  const MethodInfo *v41; // x2
  const MethodInfo *v42; // x2
  struct EquipGraphServantItem_o *servantItemInfo; // x8
  struct ServantEntity_o *equipServantEntity; // x9
  __int64 v45; // x24
  UserServantEntity_array *ServantEquipList; // x0
  UnityEngine_Object_o *infoDataLabel; // x26
  UserServantEntity_array *v48; // x25
  UILabel_o *v49; // x26
  __int64 v50; // x2
  System_String_o *v51; // x27
  __int64 v52; // x2
  Il2CppObject *v53; // x28
  Il2CppObject *v54; // x0
  __int64 v55; // x8
  UserServantEntity_array *v56; // x24
  unsigned __int64 v57; // x22
  UserServantEntity_o **m_Items; // x28
  UserServantEntity_o *v59; // x25
  int64_t v60; // x27
  EquipGraphListViewItem_o *v61; // x26
  int64_t v62; // x4
  const MethodInfo *v63; // x7
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x8
  UILabel_o *emptyMessageLabel; // x20
  System_String_o **v66; // x8
  System_String_o *v67; // x21
  const MethodInfo *v68; // x1
  const MethodInfo *v69; // x1
  __int64 v70; // x0
  WarBoardPartyListViewItem_o *partyItema; // [xsp+8h] [xbp-68h]
  EquipGraphListViewManager_o *v72; // [xsp+10h] [xbp-60h]
  int v73; // [xsp+18h] [xbp-58h] BYREF
  int v74; // [xsp+1Ch] [xbp-54h] BYREF

  if ( (byte_4355035 & 1) == 0 )
  {
    sub_B70694(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_B70694(&EquipGraphListViewItem_TypeInfo);
    sub_B70694(&EquipGraphListViewManager_TypeInfo);
    sub_B70694(&EquipGraphServantItem_TypeInfo);
    sub_B70694(&int_TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    sub_B70694(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_B70694(&LocalizationManager_TypeInfo);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B70694(&StringLiteral_11850/*"SERVANT_EQUIP_EMPTY"*/);
    sub_B70694(&StringLiteral_12046/*"SERVANT_SORT_FILTER_RESULT_EMPTY"*/);
    sub_B70694(&StringLiteral_12638/*"SUM_INFO"*/);
    byte_4355035 = 1;
  }
  v12 = EquipGraphListViewManager_TypeInfo;
  if ( (BYTE3(EquipGraphListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EquipGraphListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EquipGraphListViewManager_TypeInfo);
    v12 = EquipGraphListViewManager_TypeInfo;
  }
  warBoardSortStatus = v12->static_fields->warBoardSortStatus;
  this->fields.sort = warBoardSortStatus;
  p_sort = &this->fields.sort;
  sub_B70630(
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
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.seed,
    (System_Int32_array **)normalSizeSeed,
    v17,
    v18,
    v19,
    v20,
    v21,
    v22);
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
    v27 = setupInfo->fields.servantEquipFilterEventIdList;
    p_bonusEventIdList = &this->fields.bonusEventIdList;
    this->fields.bonusEventIdList = v27;
  }
  else
  {
    v29 = this->fields.sort;
    this->fields.isQuestStart = 1;
    if ( !v29 )
      goto LABEL_70;
    p_bonusEventIdList = &this->fields.bonusEventIdList;
    v27 = 0LL;
    v29->fields.isBonusKind = 0;
    this->fields.bonusEventIdList = 0LL;
  }
  sub_B70630(
    (BattleServantConfConponent_o *)p_bonusEventIdList,
    (System_Int32_array **)v27,
    v17,
    v18,
    v19,
    v20,
    v21,
    v22);
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
  v31 = (PartyOrganizationListViewItem_o *)MemberItem;
  if ( !*(_BYTE *)(MemberItem + 128) )
  {
    v32 = (EquipGraphServantItem_o *)sub_B70764(EquipGraphServantItem_TypeInfo);
    EquipGraphServantItem___ctor(v32, v31, v33);
    p_servantItemInfo = &this->fields.servantItemInfo;
    this->fields.servantItemInfo = v32;
    sub_B70630(
      (BattleServantConfConponent_o *)&this->fields.servantItemInfo,
      (System_Int32_array **)v32,
      v35,
      v36,
      v37,
      v38,
      v39,
      v40);
    MemberItem = (__int64)this->fields.servantItemDraw;
    if ( !MemberItem )
      goto LABEL_70;
    EquipGraphServantItemDraw__SetItem((EquipGraphServantItemDraw_o *)MemberItem, this->fields.servantItemInfo, v41);
    MemberItem = (__int64)this->fields.servantItemDraw;
    if ( !MemberItem )
      goto LABEL_70;
    EquipGraphServantItemDraw__SetInput((EquipGraphServantItemDraw_o *)MemberItem, 0, v42);
    MemberItem = (__int64)UserGameMaster__getSelfUserGame(0LL);
    servantItemInfo = this->fields.servantItemInfo;
    this->fields.maxCost = partyItem->fields.maxCost;
    if ( !servantItemInfo )
      goto LABEL_70;
    equipServantEntity = servantItemInfo->fields.equipServantEntity;
    v45 = MemberItem;
    if ( equipServantEntity )
      LODWORD(equipServantEntity) = equipServantEntity->fields.cost;
    this->fields.baseCost = partyItem->fields.cost - (_DWORD)equipServantEntity;
    MemberItem = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !MemberItem )
      goto LABEL_70;
    partyItema = partyItem;
    MemberItem = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                            (DataManager_o *)MemberItem,
                            (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_UserServantMaster___);
    if ( !MemberItem )
      goto LABEL_70;
    ServantEquipList = UserServantMaster__getServantEquipList((UserServantMaster_o *)MemberItem, 0LL);
    infoDataLabel = (UnityEngine_Object_o *)this->fields.infoDataLabel;
    v48 = ServantEquipList;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v72 = this;
    if ( UnityEngine_Object__op_Inequality(infoDataLabel, 0LL, 0LL) )
    {
      v49 = this->fields.infoDataLabel;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      MemberItem = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_12638/*"SUM_INFO"*/, 0LL);
      if ( !v48 )
        goto LABEL_70;
      v51 = (System_String_o *)MemberItem;
      v74 = *(_QWORD *)&v48->max_length;
      MemberItem = j_il2cpp_value_box_0(int_TypeInfo, &v74, v50);
      if ( !v45 )
        goto LABEL_70;
      v53 = (Il2CppObject *)MemberItem;
      v73 = *(_DWORD *)(v45 + 148);
      v54 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v73, v52);
      MemberItem = (__int64)System_String__Format_44753704(v51, v53, v54, 0LL);
      if ( !v49 )
        goto LABEL_70;
      UILabel__set_text(v49, (System_String_o *)MemberItem, 0LL);
      this = v72;
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
    if ( !v48 )
      goto LABEL_70;
    v55 = *(_QWORD *)&v48->max_length;
    if ( (int)v55 >= 1 )
    {
      v56 = v48;
      v57 = 0LL;
      m_Items = v48->m_Items;
      while ( 1 )
      {
        if ( v57 >= (unsigned int)v55 )
        {
          v70 = sub_B70798(MemberItem);
          sub_B70738(v70, 0LL);
        }
        MemberItem = (__int64)*p_servantItemInfo;
        if ( !*p_servantItemInfo )
          break;
        v59 = m_Items[v57];
        MemberItem = EquipGraphServantItem__get_EquipUserSvtId((EquipGraphServantItem_o *)MemberItem, v16);
        if ( !*p_servantItemInfo )
          break;
        v60 = MemberItem;
        v61 = (EquipGraphListViewItem_o *)sub_B70764(EquipGraphListViewItem_TypeInfo);
        EquipGraphListViewItem___ctor_31313124(v61, v57, v59, v60, v62, partyItema, setupInfo, v63);
        this = v72;
        MemberItem = (__int64)v72->fields.itemList;
        if ( !MemberItem )
          break;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)MemberItem,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v61,
          (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
        LODWORD(v55) = v56->max_length;
        if ( (__int64)++v57 >= (int)v55 )
          goto LABEL_59;
      }
LABEL_70:
      sub_B7076C(MemberItem, v16);
    }
LABEL_59:
    itemList = this->fields.itemList;
    if ( !itemList )
      goto LABEL_70;
    emptyMessageLabel = this->fields.emptyMessageLabel;
    v66 = (System_String_o **)(itemList->fields._size <= 0 ? &StringLiteral_11850/*"SERVANT_EQUIP_EMPTY"*/ : &StringLiteral_12046/*"SERVANT_SORT_FILTER_RESULT_EMPTY"*/);
    v67 = *v66;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    MemberItem = (__int64)LocalizationManager__Get(v67, 0LL);
    if ( !emptyMessageLabel )
      goto LABEL_70;
    UILabel__set_text(emptyMessageLabel, (System_String_o *)MemberItem, 0LL);
    EquipGraphListViewManager__RefrashListDisp(this, v68);
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
    EquipGraphListViewManager__SetFilterButtonImage(this, v69);
  }
}


void __fastcall EquipGraphListViewManager__DeleteContinueData(const MethodInfo *method)
{
  __int64 v1; // x1
  EquipGraphListViewManager_c *v2; // x0
  ListViewSort_o *sortStatus; // x0

  if ( (byte_4355030 & 1) == 0 )
  {
    sub_B70694(&EquipGraphListViewManager_TypeInfo);
    byte_4355030 = 1;
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
    sub_B7076C(sortStatus, v1);
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
    sub_B7076C(0LL, v3);
  ListViewSort__Save(sort, 0LL);
  this->fields.bonusEventIdList = 0LL;
  sub_B70630((BattleServantConfConponent_o *)&this->fields.bonusEventIdList, 0LL, v5, v6, v7, v8, v9, v10);
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


void __fastcall EquipGraphListViewManager__EndSelectConfirm(
        EquipGraphListViewManager_o *this,
        bool result,
        const MethodInfo *method)
{
  int64_t Instance; // x0
  const MethodInfo *v6; // x1
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  struct EquipGraphListViewItem_o *selectItem; // x8
  int64_t v14; // x2
  _BOOL8 v15; // x0
  __int64 v16; // x1
  Il2CppObject *v17; // x27
  __int64 v18; // x10
  int klass_high; // w9
  int32_t baseCost; // w8
  _DWORD *monitor; // x9
  UnityEngine_Object_o *v22; // x21
  _BOOL8 v23; // x0
  __int64 v24; // x1
  void *v25; // x8
  __int64 v26; // x11
  __int64 v27; // x11
  EquipGraphListViewObject_o *v28; // x21
  const MethodInfo *v29; // x1
  struct PartyListViewItem_array **p_waveDeckItemList; // x20
  struct PartyListViewItem_array *v31; // x26
  __int64 v32; // x8
  unsigned __int64 v33; // x27
  PartyListViewItem_o *v34; // x20
  int32_t i; // w21
  struct EquipGraphListViewItem_o *v36; // x8
  struct ServantEntity_o *servantEntity; // x8
  PartyOrganizationListViewItem_o *v38; // x22
  __int64 v39; // x23
  __int64 v40; // x24
  int v41; // w23
  struct PartyListViewItem_array *waveDeckItemList; // x9
  int v43; // w10
  struct PartyListViewItem_array *v44; // x8
  int v45; // w9
  struct EquipGraphListViewItem_o *v46; // x10
  struct UserServantEntity_o *userSvtEntity; // x10
  int32_t memberIndex; // w21
  __int128 v49; // q1
  PartyListViewItem_o *v50; // x20
  _BOOL8 v51; // x0
  __int64 v52; // x1
  const MethodInfo *v53; // x4
  EquipGraphListViewItem_o *current; // x22
  __int64 v55; // x10
  UnityEngine_Object_o *viewObject; // x23
  _BOOL8 v57; // x0
  __int64 v58; // x1
  struct ListViewObject_o *v59; // x8
  __int64 v60; // x11
  __int64 v61; // x11
  EquipGraphListViewObject_o *v62; // x22
  const MethodInfo *v63; // x1
  struct EquipGraphListViewItem_o *v64; // x8
  struct EquipGraphListViewItem_o *v65; // x8
  struct ServantEntity_o *v66; // x10
  struct UserServantEntity_o *v67; // x8
  __int128 v68; // q1
  EquipGraphServantItem_o *servantItemInfo; // x20
  const MethodInfo *v70; // x2
  const MethodInfo *v71; // x2
  struct EquipGraphListViewItem_o *v72; // x8
  UnityEngine_Object_o *v73; // x20
  struct EquipGraphListViewItem_o *v74; // x8
  EquipGraphListViewObject_o *v75; // x20
  __int64 v76; // x10
  const MethodInfo *v77; // x1
  System_Action_o *selectItemCallbackFunc; // x20
  __int64 v79; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v80; // [xsp+10h] [xbp-F0h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v81; // [xsp+38h] [xbp-C8h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v82; // [xsp+50h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v83; // [xsp+70h] [xbp-90h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v84; // [xsp+90h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v85; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o EquipSvtId; // 0:x0.16

  if ( (byte_4355042 & 1) == 0 )
  {
    sub_B70694(&BalanceConfig_TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__);
    sub_B70694(&EquipGraphListViewItem_TypeInfo);
    sub_B70694(&EquipGraphListViewObject_TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    sub_B70694(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B70694(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4355042 = 1;
  }
  memset(&v84, 0, sizeof(v84));
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
        v31 = *p_waveDeckItemList;
        if ( !*p_waveDeckItemList )
          goto LABEL_131;
        v32 = *(_QWORD *)&v31->max_length;
        if ( (int)v32 >= 1 )
        {
          v33 = 0LL;
          do
          {
            if ( v33 >= (unsigned int)v32 )
              goto LABEL_136;
            v34 = v31->m_Items[v33];
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
              if ( !v34 )
                goto LABEL_131;
              Instance = (int64_t)PartyListViewItem__GetMember(v34, i, 0LL);
              v36 = this->fields.selectItem;
              if ( !v36 )
                goto LABEL_131;
              servantEntity = v36->fields.servantEntity;
              if ( !servantEntity )
                goto LABEL_131;
              v38 = (PartyOrganizationListViewItem_o *)Instance;
              v40 = *(_QWORD *)&servantEntity->fields.id.fields.currentCryptoKey;
              v39 = *(_QWORD *)&servantEntity->fields.id.fields.fakeValue;
              if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
              }
              *(_QWORD *)&v85.fields.currentCryptoKey = v40;
              *(_QWORD *)&v85.fields.fakeValue = v39;
              Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984(v85, 0LL);
              if ( !v38 )
                goto LABEL_131;
              v41 = Instance;
              EquipSvtId = PartyOrganizationListViewItem__get_EquipSvtId(v38, 0LL);
              if ( v41 == CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984(EquipSvtId, 0LL) )
                PartyListViewItem__SetEquip(v34, i, 0LL, 0LL);
            }
            LODWORD(v32) = v31->max_length;
            ++v33;
          }
          while ( (__int64)v33 < (int)v32 );
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
        Instance = EquipGraphServantItem__get_EquipUserSvtId((EquipGraphServantItem_o *)Instance, v6);
        selectItem = this->fields.selectItem;
        if ( !selectItem )
          goto LABEL_131;
        v14 = Instance;
      }
      else
      {
        v14 = 0LL;
      }
      waveDeckItemList = this->fields.waveDeckItemList;
      if ( !waveDeckItemList )
LABEL_131:
        sub_B7076C(Instance, v6);
      v43 = selectItem->fields._OrganizedWave_k__BackingField - 1;
      if ( v43 >= waveDeckItemList->max_length )
      {
LABEL_136:
        v79 = sub_B70798(Instance);
        sub_B70738(v79, 0LL);
      }
      Instance = (int64_t)waveDeckItemList->m_Items[v43];
      if ( !Instance )
        goto LABEL_131;
      p_waveDeckItemList = &this->fields.waveDeckItemList;
      PartyListViewItem__SetEquip((PartyListViewItem_o *)Instance, selectItem->fields.wearerMember, v14, 0LL);
    }
    v44 = *p_waveDeckItemList;
    if ( !*p_waveDeckItemList )
      goto LABEL_131;
    v45 = this->fields.partyNumber - 1;
    if ( v45 < v44->max_length )
    {
      v46 = this->fields.selectItem;
      if ( v46 )
      {
        userSvtEntity = v46->fields.userSvtEntity;
        if ( userSvtEntity )
        {
          memberIndex = this->fields.memberIndex;
          v49 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
          v50 = v44->m_Items[v45];
          *(_OWORD *)&v83.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
          *(_OWORD *)&v83.fields.fakeValue = v49;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          }
          v82 = v83;
          Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_45183140(&v82, 0LL);
          if ( v50 )
          {
            PartyListViewItem__SetEquip(v50, memberIndex, Instance, 0LL);
            Instance = (int64_t)this->fields.itemList;
            if ( Instance )
            {
              System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
                &v81,
                (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)Instance,
                (const MethodInfo_3026504 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
              v84 = v81;
              while ( 1 )
              {
                v51 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                        &v84,
                        (const MethodInfo_22212CC *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
                if ( !v51 )
                  break;
                current = (EquipGraphListViewItem_o *)v84.fields.current;
                if ( !v84.fields.current
                  || (v55 = *(&EquipGraphListViewItem_TypeInfo->_2.bitflags2 + 1),
                      *(&v84.fields.current->klass->_2.bitflags2 + 1) < (unsigned int)v55)
                  || (EquipGraphListViewItem_c *)v84.fields.current->klass->_2.typeHierarchy[v55 - 1] != EquipGraphListViewItem_TypeInfo )
                {
                  sub_B7076C(v51, v52);
                }
                if ( BYTE1(v84.fields.current[9].klass) )
                  LOWORD(v84.fields.current[9].klass) = 0;
                EquipGraphListViewItem__UpdateWaveBattleInfo(
                  current,
                  this->fields.waveDeckItemList,
                  v50,
                  this->fields.memberIndex,
                  v53);
                viewObject = (UnityEngine_Object_o *)current->fields.viewObject;
                if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                }
                v57 = UnityEngine_Object__op_Inequality(viewObject, 0LL, 0LL);
                if ( v57 )
                {
                  v59 = current->fields.viewObject;
                  if ( !v59
                    || (v60 = *(&EquipGraphListViewObject_TypeInfo->_2.bitflags2 + 1),
                        *(&v59->klass->_2.bitflags2 + 1) < (unsigned int)v60)
                    || (EquipGraphListViewObject_c *)v59->klass->_2.typeHierarchy[v60 - 1] != EquipGraphListViewObject_TypeInfo )
                  {
                    sub_B7076C(v57, v58);
                  }
                  v61 = *(&EquipGraphListViewObject_TypeInfo->_2.bitflags2 + 1);
                  if ( *(&v59->klass->_2.bitflags2 + 1) >= (unsigned int)v61 )
                  {
                    if ( (EquipGraphListViewObject_c *)v59->klass->_2.typeHierarchy[v61 - 1] == EquipGraphListViewObject_TypeInfo )
                      v62 = (EquipGraphListViewObject_o *)current->fields.viewObject;
                    else
                      v62 = 0LL;
                  }
                  else
                  {
                    v62 = 0LL;
                  }
                  UnityEngine_Vector3__get_zero(0LL);
                  if ( (byte_4355055 & 1) == 0 )
                  {
                    sub_B70694(&EquipGraphListViewItem_TypeInfo);
                    byte_4355055 = 1;
                  }
                  EquipGraphListViewObject__SetupDisp(v62, v63);
                }
              }
              System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
                &v84,
                (const MethodInfo_22212C8 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
              this->fields.baseCost = v50->fields.cost;
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
    (System_Collections_Generic_List_Enumerator_T__o *)&v83,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)Instance,
    (const MethodInfo_3026504 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  v84.fields.current = (Il2CppObject *)v83.fields.fakeValue;
  *(_OWORD *)&v84.fields.list = *(_OWORD *)&v83.fields.currentCryptoKey;
  while ( 1 )
  {
    v15 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v84,
            (const MethodInfo_22212CC *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    if ( !v15 )
      break;
    v17 = v84.fields.current;
    if ( !v84.fields.current
      || (v18 = *(&EquipGraphListViewItem_TypeInfo->_2.bitflags2 + 1),
          *(&v84.fields.current->klass->_2.bitflags2 + 1) < (unsigned int)v18)
      || (EquipGraphListViewItem_c *)v84.fields.current->klass->_2.typeHierarchy[v18 - 1] != EquipGraphListViewItem_TypeInfo )
    {
      sub_B7076C(v15, v16);
    }
    if ( BYTE1(v84.fields.current[9].klass) )
    {
      BYTE1(v84.fields.current[9].klass) = 0;
      klass_high = HIDWORD(v17[9].klass);
      if ( klass_high != this->fields.memberIndex && (klass_high & 0x80000000) == 0 )
      {
        baseCost = this->fields.baseCost;
        goto LABEL_25;
      }
      if ( SHIDWORD(v17[14].monitor) > 0 || LOBYTE(v17[15].monitor) )
      {
        baseCost = this->fields.baseCost;
        if ( (klass_high & 0x80000000) != 0 )
        {
          LODWORD(monitor) = 0;
          goto LABEL_28;
        }
LABEL_25:
        monitor = v17[7].monitor;
        if ( monitor )
          LODWORD(monitor) = monitor[38];
LABEL_28:
        this->fields.baseCost = (_DWORD)monitor + baseCost;
        v22 = (UnityEngine_Object_o *)v17[6].monitor;
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        v23 = UnityEngine_Object__op_Inequality(v22, 0LL, 0LL);
        if ( v23 )
        {
          v25 = v17[6].monitor;
          if ( !v25
            || (v26 = *(&EquipGraphListViewObject_TypeInfo->_2.bitflags2 + 1),
                *(unsigned __int8 *)(*(_QWORD *)v25 + 300LL) < (unsigned int)v26)
            || *(EquipGraphListViewObject_c **)(*(_QWORD *)(*(_QWORD *)v25 + 200LL) + 8 * v26 - 8) != EquipGraphListViewObject_TypeInfo )
          {
            sub_B7076C(v23, v24);
          }
          v27 = *(&EquipGraphListViewObject_TypeInfo->_2.bitflags2 + 1);
          if ( *(unsigned __int8 *)(*(_QWORD *)v25 + 300LL) >= (unsigned int)v27 )
          {
            if ( *(EquipGraphListViewObject_c **)(*(_QWORD *)(*(_QWORD *)v25 + 200LL) + 8 * v27 - 8) == EquipGraphListViewObject_TypeInfo )
              v28 = (EquipGraphListViewObject_o *)v17[6].monitor;
            else
              v28 = 0LL;
          }
          else
          {
            v28 = 0LL;
          }
          UnityEngine_Vector3__get_zero(0LL);
          if ( (byte_4355055 & 1) == 0 )
          {
            sub_B70694(&EquipGraphListViewItem_TypeInfo);
            byte_4355055 = 1;
          }
          EquipGraphListViewObject__SetupDisp(v28, v29);
        }
      }
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v84,
    (const MethodInfo_22212C8 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
LABEL_103:
  v64 = this->fields.selectItem;
  if ( !v64 )
    goto LABEL_131;
  v64->fields.isBase = 1;
  v65 = this->fields.selectItem;
  if ( !v65 )
    goto LABEL_131;
  if ( (v65->fields.wearerMember & 0x80000000) != 0 )
  {
    LODWORD(v66) = 0;
  }
  else
  {
    v66 = v65->fields.servantEntity;
    if ( v66 )
      LODWORD(v66) = v66->fields.cost;
  }
  this->fields.baseCost -= (int)v66;
  v67 = v65->fields.userSvtEntity;
  if ( !v67 )
    goto LABEL_131;
  v68 = *(_OWORD *)&v67->fields.id.fields.fakeValue;
  servantItemInfo = this->fields.servantItemInfo;
  *(_OWORD *)&v83.fields.currentCryptoKey = *(_OWORD *)&v67->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v83.fields.fakeValue = v68;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v80 = v83;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_45183140(&v80, 0LL);
  if ( !servantItemInfo )
    goto LABEL_131;
  EquipGraphServantItem__SetEquipTarget(servantItemInfo, Instance, v70);
  Instance = (int64_t)this->fields.servantItemDraw;
  if ( !Instance )
    goto LABEL_131;
  EquipGraphServantItemDraw__SetItem((EquipGraphServantItemDraw_o *)Instance, this->fields.servantItemInfo, v71);
  v72 = this->fields.selectItem;
  if ( !v72 )
    goto LABEL_131;
  v73 = (UnityEngine_Object_o *)v72->fields.viewObject;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  Instance = UnityEngine_Object__op_Inequality(v73, 0LL, 0LL);
  if ( (Instance & 1) != 0 )
  {
    v74 = this->fields.selectItem;
    if ( v74 )
    {
      v75 = (EquipGraphListViewObject_o *)v74->fields.viewObject;
      if ( v75 )
      {
        v76 = *(&EquipGraphListViewObject_TypeInfo->_2.bitflags2 + 1);
        if ( *(&v75->klass->_2.bitflags2 + 1) >= (unsigned int)v76
          && (EquipGraphListViewObject_c *)v75->klass->_2.typeHierarchy[v76 - 1] == EquipGraphListViewObject_TypeInfo )
        {
          UnityEngine_Vector3__get_zero(0LL);
          if ( (byte_4355055 & 1) == 0 )
          {
            sub_B70694(&EquipGraphListViewItem_TypeInfo);
            byte_4355055 = 1;
          }
          EquipGraphListViewObject__SetupDisp(v75, v77);
          goto LABEL_127;
        }
      }
    }
    goto LABEL_131;
  }
LABEL_127:
  EquipGraphListViewManager__RefrashListDisp(this, v6);
LABEL_128:
  selectItemCallbackFunc = this->fields.selectItemCallbackFunc;
  if ( selectItemCallbackFunc )
  {
    this->fields.selectItemCallbackFunc = 0LL;
    sub_B70630((BattleServantConfConponent_o *)&this->fields.selectItemCallbackFunc, 0LL, v7, v8, v9, v10, v11, v12);
    System_Action__Invoke(selectItemCallbackFunc, 0LL);
  }
}


void __fastcall EquipGraphListViewManager__EndSelectFilterKind(
        EquipGraphListViewManager_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x1
  CommonUI_o *Instance; // x20
  System_Action_o *v7; // x21
  __int64 v8; // x0
  __int64 v9; // x1

  if ( (byte_4355044 & 1) == 0 )
  {
    sub_B70694(&System_Action_TypeInfo);
    sub_B70694(&Method_EquipGraphListViewManager_EndCloseSelectFilterKind__);
    sub_B70694(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4355044 = 1;
  }
  if ( isDecide )
  {
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
    EquipGraphListViewManager__SetFilterButtonImage(this, v5);
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v7 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
  System_Action___ctor(v7, (Il2CppObject *)this, Method_EquipGraphListViewManager_EndCloseSelectFilterKind__, 0LL);
  if ( !Instance )
    sub_B7076C(v8, v9);
  CommonUI__CloseServantFilterSelectMenu(Instance, v7, 0LL);
}


void __fastcall EquipGraphListViewManager__EndSelectSortKind(
        EquipGraphListViewManager_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x20
  System_Action_o *v6; // x21
  __int64 v7; // x0
  __int64 v8; // x1

  if ( (byte_4355048 & 1) == 0 )
  {
    sub_B70694(&System_Action_TypeInfo);
    sub_B70694(&Method_EquipGraphListViewManager_EndCloseSelectSortKind__);
    sub_B70694(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4355048 = 1;
  }
  if ( isDecide )
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v6 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
  System_Action___ctor(v6, (Il2CppObject *)this, Method_EquipGraphListViewManager_EndCloseSelectSortKind__, 0LL);
  if ( !Instance )
    sub_B7076C(v7, v8);
  CommonUI__CloseServantSortSelectMenu(Instance, v6, 0LL);
}


// local variable allocation has failed, the output may be wrong!
int64_t __fastcall EquipGraphListViewManager__GetAmountSortValue(
        EquipGraphListViewManager_o *this,
        int32_t svtId,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x0
  int64_t v6; // x19
  Il2CppObject *current; // x8
  __int64 v8; // x11
  Il2CppClass *klass; // x8
  Il2CppClass *parent; // x21
  Il2CppClass *declaringType; // x22
  _BOOL8 v12; // x0
  __int64 v13; // x1
  System_Collections_Generic_List_Enumerator_T__o v15; // [xsp+8h] [xbp-58h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v16; // 0:x0.16

  if ( (byte_435504B & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__);
    sub_B70694(&EquipGraphListViewItem_TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    sub_B70694(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_B70694(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_435504B = 1;
  }
  memset(&v15, 0, sizeof(v15));
  itemList = this->fields.itemList;
  if ( !itemList )
    sub_B7076C(0LL, *(_QWORD *)&svtId);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v15,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)itemList,
    (const MethodInfo_3026504 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  v6 = 0LL;
  while ( 1 )
  {
    v12 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v15,
            (const MethodInfo_22212CC *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    if ( !v12 )
      break;
    current = v15.fields.current;
    if ( !v15.fields.current
      || (v8 = *(&EquipGraphListViewItem_TypeInfo->_2.bitflags2 + 1),
          *(&v15.fields.current->klass->_2.bitflags2 + 1) < (unsigned int)v8)
      || (EquipGraphListViewItem_c *)v15.fields.current->klass->_2.typeHierarchy[v8 - 1] != EquipGraphListViewItem_TypeInfo )
    {
      sub_B7076C(v12, v13);
    }
    if ( (EquipGraphListViewItem_c *)v15.fields.current->klass->_2.typeHierarchy[*(&EquipGraphListViewItem_TypeInfo->_2.bitflags2
                                                                                 + 1)
                                                                               - 1] != EquipGraphListViewItem_TypeInfo )
      current = 0LL;
    klass = current[7].klass;
    if ( !klass )
      sub_B7076C(v12, v13);
    declaringType = klass->_1.declaringType;
    parent = klass->_1.parent;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v16.fields.currentCryptoKey = declaringType;
    *(_QWORD *)&v16.fields.fakeValue = parent;
    if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984(v16, 0LL) == svtId )
      ++v6;
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v15,
    (const MethodInfo_22212C8 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
  return v6;
}


EquipGraphListViewItem_o *__fastcall EquipGraphListViewManager__GetItem(
        EquipGraphListViewManager_o *this,
        int32_t index,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x20
  ListViewItem_o *v6; // x8
  __int64 v7; // x11

  if ( (byte_4355037 & 1) == 0 )
  {
    sub_B70694(&EquipGraphListViewItem_TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    byte_4355037 = 1;
  }
  itemList = this->fields.itemList;
  if ( !itemList )
    return 0LL;
  if ( itemList->fields._size <= (unsigned int)index )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41939488(0LL);
  v6 = itemList->fields._items->m_Items[index];
  if ( !v6 )
    return 0LL;
  v7 = *(&EquipGraphListViewItem_TypeInfo->_2.bitflags2 + 1);
  if ( *(&v6->klass->_2.bitflags2 + 1) < (unsigned int)v7 )
    return 0LL;
  if ( (EquipGraphListViewItem_c *)v6->klass->_2.typeHierarchy[v7 - 1] == EquipGraphListViewItem_TypeInfo )
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
    sub_B7076C(0LL, method);
  return ListViewSort__GetScaleKindSpriteName(sort, this->fields.scaleType, 0LL);
}


int32_t __fastcall EquipGraphListViewManager__GetSelect(EquipGraphListViewManager_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x0
  _BOOL8 v4; // x0
  __int64 v5; // x1
  __int64 v6; // x11
  int32_t klass_high; // w19
  int v8; // w20
  System_Collections_Generic_List_Enumerator_T__o v10; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_435503F & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__);
    sub_B70694(&EquipGraphListViewItem_TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    byte_435503F = 1;
  }
  memset(&v10, 0, sizeof(v10));
  itemList = this->fields.itemList;
  if ( !itemList )
    sub_B7076C(0LL, method);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v10,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)itemList,
    (const MethodInfo_3026504 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  while ( 1 )
  {
    v4 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
           &v10,
           (const MethodInfo_22212CC *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    if ( !v4 )
      break;
    if ( !v10.fields.current
      || (v6 = *(&EquipGraphListViewItem_TypeInfo->_2.bitflags2 + 1),
          *(&v10.fields.current->klass->_2.bitflags2 + 1) < (unsigned int)v6)
      || (EquipGraphListViewItem_c *)v10.fields.current->klass->_2.typeHierarchy[v6 - 1] != EquipGraphListViewItem_TypeInfo )
    {
      sub_B7076C(v4, v5);
    }
    if ( BYTE1(v10.fields.current[9].klass) )
    {
      klass_high = HIDWORD(v10.fields.current[1].klass);
      v8 = 3;
      goto LABEL_12;
    }
  }
  klass_high = 0;
  v8 = 1;
LABEL_12:
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v10,
    (const MethodInfo_22212C8 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
  if ( (unsigned int)(v8 + 1) >> 2 )
    return klass_high;
  else
    return -1;
}


EquipGraphListViewItem_o *__fastcall EquipGraphListViewManager__GetSelectItem(
        EquipGraphListViewManager_o *this,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x0
  _BOOL8 v4; // x0
  __int64 v5; // x1
  Il2CppObject *current; // x19
  __int64 v7; // x10
  char v8; // w20
  System_Collections_Generic_List_Enumerator_T__o v10; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4355040 & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__);
    sub_B70694(&EquipGraphListViewItem_TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    byte_4355040 = 1;
  }
  memset(&v10, 0, sizeof(v10));
  itemList = this->fields.itemList;
  if ( !itemList )
    sub_B7076C(0LL, method);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v10,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)itemList,
    (const MethodInfo_3026504 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  while ( 1 )
  {
    v4 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
           &v10,
           (const MethodInfo_22212CC *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    if ( !v4 )
      break;
    current = v10.fields.current;
    if ( !v10.fields.current
      || (v7 = *(&EquipGraphListViewItem_TypeInfo->_2.bitflags2 + 1),
          *(&v10.fields.current->klass->_2.bitflags2 + 1) < (unsigned int)v7)
      || (EquipGraphListViewItem_c *)v10.fields.current->klass->_2.typeHierarchy[v7 - 1] != EquipGraphListViewItem_TypeInfo )
    {
      sub_B7076C(v4, v5);
    }
    if ( BYTE1(v10.fields.current[9].klass) )
    {
      v8 = 2;
      goto LABEL_12;
    }
  }
  v8 = 0;
  current = 0LL;
LABEL_12:
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v10,
    (const MethodInfo_22212C8 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
  if ( ((v8 + 2) & 3) != 0 )
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
  System_Collections_Generic_List_long__o *v6; // x23
  System_Collections_Generic_List_long__o *v7; // x22
  int64_t v8; // x0
  __int64 v9; // x1
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x19
  signed __int64 size; // x24
  unsigned __int64 v18; // x25
  ListViewItem_o *v19; // x8
  __int64 v20; // x11
  ListViewItem_c *klass; // x9
  Il2CppType byval_arg; // q0
  const MethodInfo_30BC188 *v23; // x2
  int64_t v24; // x1
  System_Collections_Generic_List_long__o *v25; // x0
  Il2CppType v26; // q0
  System_Int64_array *v27; // x0
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  System_Int64_array *v34; // x0
  System_String_array **v35; // x2
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7
  System_String_array **v42; // x2
  System_String_array **v43; // x3
  System_Boolean_array **v44; // x4
  System_Int32_array **v45; // x5
  System_Int32_array *v46; // x6
  System_Int32_array *v47; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v49; // [xsp+10h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v50; // [xsp+30h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v51; // [xsp+50h] [xbp-70h]

  if ( (byte_4355039 & 1) == 0 )
  {
    sub_B70694(&EquipGraphListViewItem_TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_List_long__Add__);
    sub_B70694(&Method_System_Collections_Generic_List_long__ToArray__);
    sub_B70694(&Method_System_Collections_Generic_List_long___ctor__);
    sub_B70694(&Method_System_Collections_Generic_List_long__get_Count__);
    sub_B70694(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_B70694(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_B70694(&System_Collections_Generic_List_long__TypeInfo);
    sub_B70694(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_4355039 = 1;
  }
  v6 = (System_Collections_Generic_List_long__o *)sub_B70764(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v6,
    (const MethodInfo_30BB42C *)Method_System_Collections_Generic_List_long___ctor__);
  v7 = (System_Collections_Generic_List_long__o *)sub_B70764(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v7,
    (const MethodInfo_30BB42C *)Method_System_Collections_Generic_List_long___ctor__);
  itemList = this->fields.itemList;
  if ( !itemList )
    goto LABEL_33;
  size = itemList->fields._size;
  if ( (int)size >= 1 )
  {
    v18 = 0LL;
    do
    {
      if ( v18 >= (unsigned int)itemList->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41939488(0LL);
      v19 = itemList->fields._items->m_Items[v18];
      if ( !v19 )
        break;
      v20 = *(&EquipGraphListViewItem_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v19->klass->_2.bitflags2 + 1) < (unsigned int)v20
        || (EquipGraphListViewItem_c *)v19->klass->_2.typeHierarchy[v20 - 1] != EquipGraphListViewItem_TypeInfo )
      {
        break;
      }
      klass = v19[1].klass;
      if ( klass && v19[1].fields.isTerminationSpace )
      {
        if ( BYTE5(v19[1].fields.sortStr1) )
        {
          byval_arg = klass->_1.byval_arg;
          *(_OWORD *)&v51.fields.currentCryptoKey = *(_OWORD *)&klass->_1.name;
          *(Il2CppType *)&v51.fields.fakeValue = byval_arg;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          }
          v50 = v51;
          v8 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_45183140(&v50, 0LL);
          if ( !v7 )
            break;
          v23 = (const MethodInfo_30BC188 *)Method_System_Collections_Generic_List_long__Add__;
          v24 = v8;
          v25 = v7;
        }
        else
        {
          v26 = klass->_1.byval_arg;
          *(_OWORD *)&v51.fields.currentCryptoKey = *(_OWORD *)&klass->_1.name;
          *(Il2CppType *)&v51.fields.fakeValue = v26;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          }
          v49 = v51;
          v8 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_45183140(&v49, 0LL);
          if ( !v6 )
            break;
          v23 = (const MethodInfo_30BC188 *)Method_System_Collections_Generic_List_long__Add__;
          v24 = v8;
          v25 = v6;
        }
        System_Collections_Generic_List_long___Add(v25, v24, v23);
      }
      if ( (__int64)++v18 >= size )
        goto LABEL_28;
      itemList = this->fields.itemList;
    }
    while ( itemList );
LABEL_33:
    sub_B7076C(v8, v9);
  }
LABEL_28:
  if ( !v6 || !v7 )
    goto LABEL_33;
  if ( v7->fields._size + v6->fields._size < 1 )
  {
    *choiceList = 0LL;
    sub_B70630((BattleServantConfConponent_o *)choiceList, 0LL, v10, v11, v12, v13, v14, v15);
    *unchoiceList = 0LL;
    sub_B70630((BattleServantConfConponent_o *)unchoiceList, 0LL, v42, v43, v44, v45, v46, v47);
    return 0;
  }
  else
  {
    v27 = System_Collections_Generic_List_long___ToArray(
            v6,
            (const MethodInfo_30BE294 *)Method_System_Collections_Generic_List_long__ToArray__);
    *choiceList = v27;
    sub_B70630((BattleServantConfConponent_o *)choiceList, (System_Int32_array **)v27, v28, v29, v30, v31, v32, v33);
    v34 = System_Collections_Generic_List_long___ToArray(
            v7,
            (const MethodInfo_30BE294 *)Method_System_Collections_Generic_List_long__ToArray__);
    *unchoiceList = v34;
    sub_B70630((BattleServantConfConponent_o *)unchoiceList, (System_Int32_array **)v34, v35, v36, v37, v38, v39, v40);
    return 1;
  }
}


bool __fastcall EquipGraphListViewManager__GetSwapLockList(
        EquipGraphListViewManager_o *this,
        System_Int64_array **lockList,
        System_Int64_array **unlockList,
        const MethodInfo *method)
{
  System_Collections_Generic_List_long__o *v6; // x23
  System_Collections_Generic_List_long__o *v7; // x22
  int64_t v8; // x0
  __int64 v9; // x1
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x19
  signed __int64 size; // x24
  unsigned __int64 v18; // x25
  ListViewItem_o *v19; // x8
  __int64 v20; // x11
  ListViewItem_c *klass; // x9
  Il2CppType byval_arg; // q0
  const MethodInfo_30BC188 *v23; // x2
  int64_t v24; // x1
  System_Collections_Generic_List_long__o *v25; // x0
  Il2CppType v26; // q0
  System_Int64_array *v27; // x0
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  System_Int64_array *v34; // x0
  System_String_array **v35; // x2
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7
  System_String_array **v42; // x2
  System_String_array **v43; // x3
  System_Boolean_array **v44; // x4
  System_Int32_array **v45; // x5
  System_Int32_array *v46; // x6
  System_Int32_array *v47; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v49; // [xsp+10h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v50; // [xsp+30h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v51; // [xsp+50h] [xbp-70h]

  if ( (byte_4355038 & 1) == 0 )
  {
    sub_B70694(&EquipGraphListViewItem_TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_List_long__Add__);
    sub_B70694(&Method_System_Collections_Generic_List_long__ToArray__);
    sub_B70694(&Method_System_Collections_Generic_List_long___ctor__);
    sub_B70694(&Method_System_Collections_Generic_List_long__get_Count__);
    sub_B70694(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_B70694(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_B70694(&System_Collections_Generic_List_long__TypeInfo);
    sub_B70694(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_4355038 = 1;
  }
  v6 = (System_Collections_Generic_List_long__o *)sub_B70764(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v6,
    (const MethodInfo_30BB42C *)Method_System_Collections_Generic_List_long___ctor__);
  v7 = (System_Collections_Generic_List_long__o *)sub_B70764(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v7,
    (const MethodInfo_30BB42C *)Method_System_Collections_Generic_List_long___ctor__);
  itemList = this->fields.itemList;
  if ( !itemList )
    goto LABEL_33;
  size = itemList->fields._size;
  if ( (int)size >= 1 )
  {
    v18 = 0LL;
    do
    {
      if ( v18 >= (unsigned int)itemList->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41939488(0LL);
      v19 = itemList->fields._items->m_Items[v18];
      if ( !v19 )
        break;
      v20 = *(&EquipGraphListViewItem_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v19->klass->_2.bitflags2 + 1) < (unsigned int)v20
        || (EquipGraphListViewItem_c *)v19->klass->_2.typeHierarchy[v20 - 1] != EquipGraphListViewItem_TypeInfo )
      {
        break;
      }
      klass = v19[1].klass;
      if ( klass && v19[1].fields.isTermination )
      {
        if ( BYTE4(v19[1].fields.sortStr1) )
        {
          byval_arg = klass->_1.byval_arg;
          *(_OWORD *)&v51.fields.currentCryptoKey = *(_OWORD *)&klass->_1.name;
          *(Il2CppType *)&v51.fields.fakeValue = byval_arg;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          }
          v50 = v51;
          v8 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_45183140(&v50, 0LL);
          if ( !v7 )
            break;
          v23 = (const MethodInfo_30BC188 *)Method_System_Collections_Generic_List_long__Add__;
          v24 = v8;
          v25 = v7;
        }
        else
        {
          v26 = klass->_1.byval_arg;
          *(_OWORD *)&v51.fields.currentCryptoKey = *(_OWORD *)&klass->_1.name;
          *(Il2CppType *)&v51.fields.fakeValue = v26;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          }
          v49 = v51;
          v8 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_45183140(&v49, 0LL);
          if ( !v6 )
            break;
          v23 = (const MethodInfo_30BC188 *)Method_System_Collections_Generic_List_long__Add__;
          v24 = v8;
          v25 = v6;
        }
        System_Collections_Generic_List_long___Add(v25, v24, v23);
      }
      if ( (__int64)++v18 >= size )
        goto LABEL_28;
      itemList = this->fields.itemList;
    }
    while ( itemList );
LABEL_33:
    sub_B7076C(v8, v9);
  }
LABEL_28:
  if ( !v6 || !v7 )
    goto LABEL_33;
  if ( v7->fields._size + v6->fields._size < 1 )
  {
    *lockList = 0LL;
    sub_B70630((BattleServantConfConponent_o *)lockList, 0LL, v10, v11, v12, v13, v14, v15);
    *unlockList = 0LL;
    sub_B70630((BattleServantConfConponent_o *)unlockList, 0LL, v42, v43, v44, v45, v46, v47);
    return 0;
  }
  else
  {
    v27 = System_Collections_Generic_List_long___ToArray(
            v6,
            (const MethodInfo_30BE294 *)Method_System_Collections_Generic_List_long__ToArray__);
    *lockList = v27;
    sub_B70630((BattleServantConfConponent_o *)lockList, (System_Int32_array **)v27, v28, v29, v30, v31, v32, v33);
    v34 = System_Collections_Generic_List_long___ToArray(
            v7,
            (const MethodInfo_30BE294 *)Method_System_Collections_Generic_List_long__ToArray__);
    *unlockList = v34;
    sub_B70630((BattleServantConfConponent_o *)unlockList, (System_Int32_array **)v34, v35, v36, v37, v38, v39, v40);
    return 1;
  }
}


void __fastcall EquipGraphListViewManager__InitLoad(const MethodInfo *method)
{
  __int64 v1; // x1
  EquipGraphListViewManager_c *v2; // x0
  ListViewSort_o *sortStatus; // x0

  if ( (byte_4355031 & 1) == 0 )
  {
    sub_B70694(&EquipGraphListViewManager_TypeInfo);
    byte_4355031 = 1;
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
    sub_B7076C(sortStatus, v1);
  }
  ListViewSort__InitLoad(sortStatus, 0LL);
}


void __fastcall EquipGraphListViewManager__ModifyList(
        EquipGraphListViewManager_o *this,
        bool isIconSizeChange,
        const MethodInfo *method)
{
  int64_t Instance; // x0
  const MethodInfo *v5; // x1
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x8
  signed __int64 size; // x25
  unsigned int v8; // w27
  int64_t v9; // x26
  __int64 v10; // x8
  System_Int32_array ***v11; // x26
  __int64 v12; // t1
  __int128 v13; // q0
  int64_t v14; // x22
  unsigned __int64 v15; // x21
  struct System_Collections_Generic_List_ListViewItem__o *v16; // x23
  EquipGraphListViewItem_o *v17; // x23
  __int64 v18; // x10
  struct UserServantEntity_o *userSvtEntity; // x8
  __int128 v20; // q0
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  System_Int32_array **v27; // x1
  const MethodInfo *v28; // x1
  __int64 v29; // x0
  unsigned __int64 v30; // x22
  struct System_Collections_Generic_List_ListViewItem__o *v31; // x20
  ListViewItem_o *v32; // x20
  __int64 v33; // x10
  UnityEngine_Object_o *viewObject; // x21
  __int64 v36; // [xsp+10h] [xbp-C0h]
  int64_t v37; // [xsp+18h] [xbp-B8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v38; // [xsp+20h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v39; // [xsp+40h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v40; // [xsp+60h] [xbp-70h]

  if ( (byte_4355036 & 1) == 0 )
  {
    sub_B70694(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_B70694(&EquipGraphListViewItem_TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_B70694(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    sub_B70694(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4355036 = 1;
  }
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_52;
  Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !Instance )
    goto LABEL_52;
  Instance = (int64_t)UserServantMaster__getServantEquipList((UserServantMaster_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_52;
  itemList = this->fields.itemList;
  if ( !itemList )
    goto LABEL_52;
  size = itemList->fields._size;
  v36 = *(_QWORD *)(Instance + 24);
  if ( (int)v36 >= 1 )
  {
    if ( !(_DWORD)v36 )
    {
LABEL_34:
      v29 = sub_B70798(Instance);
      sub_B70738(v29, 0LL);
    }
    v8 = 0;
    v37 = Instance;
    while ( 1 )
    {
      v9 = Instance + 8LL * (int)v8;
      v12 = *(_QWORD *)(v9 + 32);
      v11 = (System_Int32_array ***)(v9 + 32);
      v10 = v12;
      if ( !v12 )
        break;
      v13 = *(_OWORD *)(v10 + 32);
      *(_OWORD *)&v40.fields.currentCryptoKey = *(_OWORD *)(v10 + 16);
      *(_OWORD *)&v40.fields.fakeValue = v13;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      }
      v39 = v40;
      Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_45183140(&v39, 0LL);
      if ( (int)size >= 1 )
      {
        v14 = Instance;
        v15 = 0LL;
        while ( 1 )
        {
          v16 = this->fields.itemList;
          if ( !v16 )
            goto LABEL_52;
          if ( v15 >= (unsigned int)v16->fields._size )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_41939488(0LL);
          v17 = (EquipGraphListViewItem_o *)v16->fields._items->m_Items[v15];
          if ( !v17 )
            goto LABEL_52;
          v18 = *(&EquipGraphListViewItem_TypeInfo->_2.bitflags2 + 1);
          if ( *(&v17->klass->_2.bitflags2 + 1) < (unsigned int)v18
            || (EquipGraphListViewItem_c *)v17->klass->_2.typeHierarchy[v18 - 1] != EquipGraphListViewItem_TypeInfo )
          {
            goto LABEL_52;
          }
          userSvtEntity = v17->fields.userSvtEntity;
          if ( userSvtEntity )
          {
            v20 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
            *(_OWORD *)&v40.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
            *(_OWORD *)&v40.fields.fakeValue = v20;
            if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
            }
            v38 = v40;
            Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_45183140(&v38, 0LL);
            if ( Instance == v14 )
              break;
          }
          if ( (__int64)++v15 >= size )
            goto LABEL_32;
        }
        if ( v8 >= *(_DWORD *)(v37 + 24) )
          goto LABEL_34;
        v27 = *v11;
        v17->fields.userSvtEntity = (struct UserServantEntity_o *)*v11;
        sub_B70630((BattleServantConfConponent_o *)&v17->fields.userSvtEntity, v27, v21, v22, v23, v24, v25, v26);
        if ( !isIconSizeChange )
        {
          EquipGraphListViewItem__ModifyLockItem(v17, v5);
          EquipGraphListViewItem__ModifyChoiceItem(v17, v28);
        }
      }
LABEL_32:
      Instance = v37;
      if ( (int)++v8 >= (int)v36 )
        goto LABEL_35;
      if ( v8 >= *(_DWORD *)(v37 + 24) )
        goto LABEL_34;
    }
LABEL_52:
    sub_B7076C(Instance, v5);
  }
LABEL_35:
  if ( (int)size >= 1 && isIconSizeChange )
  {
    v30 = 0LL;
    while ( 1 )
    {
      v31 = this->fields.itemList;
      if ( !v31 )
        goto LABEL_52;
      if ( v30 >= (unsigned int)v31->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41939488(0LL);
      v32 = v31->fields._items->m_Items[v30];
      if ( v32 )
      {
        v33 = *(&EquipGraphListViewItem_TypeInfo->_2.bitflags2 + 1);
        if ( *(&v32->klass->_2.bitflags2 + 1) >= (unsigned int)v33
          && (EquipGraphListViewItem_c *)v32->klass->_2.typeHierarchy[v33 - 1] == EquipGraphListViewItem_TypeInfo )
        {
          viewObject = (UnityEngine_Object_o *)v32->fields.viewObject;
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          Instance = UnityEngine_Object__op_Equality(viewObject, 0LL, 0LL);
          if ( (Instance & 1) == 0 )
          {
            Instance = (int64_t)v32->fields.viewObject;
            if ( !Instance )
              goto LABEL_52;
            ListViewObject__SetItemSeed((ListViewObject_o *)Instance, v32, this->fields.seed, 0LL);
          }
        }
      }
      if ( (__int64)++v30 >= size )
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

  if ( (byte_4355046 & 1) == 0 )
  {
    sub_B70694(&SoundManager_TypeInfo);
    byte_4355046 = 1;
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
      sub_B7076C(0LL, v3);
    bonusEventIdList = this->fields.bonusEventIdList;
    if ( this->fields.isQuestStart )
      ListViewSort__IncBonusKind(sort, bonusEventIdList, 0LL, 0, 0LL, 0LL);
    else
      ListViewSort__IncBonusKind2(sort, bonusEventIdList, 0LL, 0LL, 0LL, 0LL, 0LL, 0LL);
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
  sub_B70630((BattleServantConfConponent_o *)&this->fields.callbackFunc, 0LL, v2, v3, v4, v5, v6, v7);
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
    sub_B7076C(this, method);
  if ( !equipGraphListMenu->fields.modeKind )
  {
    callbackFunc = this->fields.callbackFunc;
    this->fields.callbackFunc = 0LL;
    sub_B70630((BattleServantConfConponent_o *)&this->fields.callbackFunc, 0LL, v2, v3, v4, v5, v6, v7);
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
  WebViewManager_o *Instance; // x0
  ListViewSort_o *sort; // x20
  CommonUI_o *v5; // x21
  ServantFilterSelectMenu_CallbackFunc_o *v6; // x22
  __int64 v7; // x0
  __int64 v8; // x1

  if ( (byte_4355043 & 1) == 0 )
  {
    sub_B70694(&ServantFilterSelectMenu_CallbackFunc_TypeInfo);
    sub_B70694(&Method_EquipGraphListViewManager_EndSelectFilterKind__);
    sub_B70694(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B70694(&SoundManager_TypeInfo);
    byte_4355043 = 1;
  }
  if ( this->fields.isInput )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sort = this->fields.sort;
    v5 = (CommonUI_o *)Instance;
    v6 = (ServantFilterSelectMenu_CallbackFunc_o *)sub_B70764(ServantFilterSelectMenu_CallbackFunc_TypeInfo);
    ServantFilterSelectMenu_CallbackFunc___ctor(
      v6,
      (Il2CppObject *)this,
      Method_EquipGraphListViewManager_EndSelectFilterKind__,
      0LL);
    if ( !v5 )
      sub_B7076C(v7, v8);
    CommonUI__OpenServantFilterSelectMenu_17911292(v5, 5, sort, (ListViewManager_o *)this, v6, -1, 0LL);
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
  sub_B70630(
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
      sub_B7076C(v10, v11);
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

  if ( (byte_4355049 & 1) == 0 )
  {
    sub_B70694(&SoundManager_TypeInfo);
    byte_4355049 = 1;
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
      sub_B7076C(v3, v4);
    sort->fields.isAscendingOrder ^= 1u;
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
  }
}


void __fastcall EquipGraphListViewManager__OnClickSortKind(EquipGraphListViewManager_o *this, const MethodInfo *method)
{
  WebViewManager_o *Instance; // x0
  ListViewSort_o *sort; // x20
  CommonUI_o *v5; // x21
  ServantSortSelectMenu_CallbackFunc_o *v6; // x22
  __int64 v7; // x0
  __int64 v8; // x1

  if ( (byte_4355047 & 1) == 0 )
  {
    sub_B70694(&ServantSortSelectMenu_CallbackFunc_TypeInfo);
    sub_B70694(&Method_EquipGraphListViewManager_EndSelectSortKind__);
    sub_B70694(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B70694(&SoundManager_TypeInfo);
    byte_4355047 = 1;
  }
  if ( this->fields.isInput )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sort = this->fields.sort;
    v5 = (CommonUI_o *)Instance;
    v6 = (ServantSortSelectMenu_CallbackFunc_o *)sub_B70764(ServantSortSelectMenu_CallbackFunc_TypeInfo);
    ServantSortSelectMenu_CallbackFunc___ctor(
      v6,
      (Il2CppObject *)this,
      Method_EquipGraphListViewManager_EndSelectSortKind__,
      0LL);
    if ( !v5 )
      sub_B7076C(v7, v8);
    CommonUI__OpenServantSortSelectMenu(v5, 4, sort, 0, v6, 0LL);
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
    sub_B7076C(this, obj);
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, 0, 0LL);
  callbackFunc = v4->fields.callbackFunc;
  v4->fields.callbackFunc = 0LL;
  sub_B70630((BattleServantConfConponent_o *)&v4->fields.callbackFunc, 0LL, v7, v8, v9, v10, v11, v12);
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

  if ( (byte_435503E & 1) == 0 )
  {
    sub_B70694(&UnityEngine_Object_TypeInfo);
    byte_435503E = 1;
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
          sub_B7076C(0LL, v7);
        ((void (__fastcall *)(struct UIScrollView_o *, __int64, Il2CppMethodPointer))v14->klass->vtable._8_UpdateScrollbars.method)(
          v14,
          1LL,
          v14->klass->vtable._9_SetDragAmount.methodPtr);
      }
      callbackFunc2 = this->fields.callbackFunc2;
      this->fields.callbackFunc2 = 0LL;
      sub_B70630((BattleServantConfConponent_o *)&this->fields.callbackFunc2, 0LL, v8, v9, v10, v11, v12, v13);
      if ( callbackFunc2 )
        System_Action__Invoke(callbackFunc2, 0LL);
    }
  }
}


void __fastcall EquipGraphListViewManager__RefrashListDisp(EquipGraphListViewManager_o *this, const MethodInfo *method)
{
  System_String_o *ObjectList; // x0
  __int64 v4; // x1
  int klass; // w8
  System_String_o *v6; // x20
  __int64 v7; // x21
  UnityEngine_Object_o *infoData2Label; // x20
  struct EquipGraphServantItem_o *servantItemInfo; // x8
  struct ServantEntity_o *equipServantEntity; // x9
  int32_t baseCost; // w8
  int v12; // w22
  UILabel_o *v13; // x20
  System_String_o **v14; // x8
  System_String_o *v15; // x21
  System_String_o *v16; // x21
  __int64 v17; // x2
  Il2CppObject *v18; // x22
  __int64 v19; // x2
  Il2CppObject *v20; // x0
  int32_t maxCost; // [xsp+8h] [xbp-28h] BYREF
  int v22; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_435503A & 1) == 0 )
  {
    sub_B70694(&int_TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_List_EquipGraphListViewObject__get_Count__);
    sub_B70694(&Method_System_Collections_Generic_List_EquipGraphListViewObject__get_Item__);
    sub_B70694(&LocalizationManager_TypeInfo);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    sub_B70694(&StringLiteral_12639/*"SUM_OVER_INFO"*/);
    sub_B70694(&StringLiteral_12638/*"SUM_INFO"*/);
    byte_435503A = 1;
  }
  ObjectList = (System_String_o *)EquipGraphListViewManager__get_ObjectList(this, method);
  if ( !ObjectList )
    goto LABEL_26;
  klass = (int)ObjectList[1].klass;
  v6 = ObjectList;
  if ( klass >= 1 )
  {
    v7 = 0LL;
    while ( 1 )
    {
      if ( klass <= (unsigned int)v7 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41939488(0LL);
      ObjectList = *(System_String_o **)(*(_QWORD *)&v6->fields + 8 * v7 + 32);
      if ( !ObjectList )
        break;
      ((void (__fastcall *)(System_String_o *, bool, Il2CppMethodPointer))ObjectList->klass->vtable._9_System_IConvertible_ToSByte.method)(
        ObjectList,
        this->fields.isInput,
        ObjectList->klass->vtable._10_System_IConvertible_ToByte.methodPtr);
      klass = (int)v6[1].klass;
      if ( (int)++v7 >= klass )
        goto LABEL_10;
    }
LABEL_26:
    sub_B7076C(ObjectList, v4);
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
    v12 = (_DWORD)equipServantEntity + baseCost;
    v13 = this->fields.infoData2Label;
    v14 = (int)equipServantEntity + baseCost <= this->fields.maxCost
        ? (System_String_o **)&StringLiteral_12638/*"SUM_INFO"*/
        : (System_String_o **)&StringLiteral_12639/*"SUM_OVER_INFO"*/;
    v15 = *v14;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v16 = LocalizationManager__Get(v15, 0LL);
    v22 = v12;
    v18 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v22, v17);
    maxCost = this->fields.maxCost;
    v20 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &maxCost, v19);
    ObjectList = System_String__Format_44753704(v16, v18, v20, 0LL);
    if ( !v13 )
      goto LABEL_26;
    UILabel__set_text(v13, ObjectList, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EquipGraphListViewManager__RequestListObject(
        EquipGraphListViewManager_o *this,
        int32_t mode,
        float delay,
        const MethodInfo *method)
{
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *ObjectList; // x0
  __int64 v8; // x1
  int32_t size; // w8
  Il2CppObject *current; // x21
  System_Action_o *v11; // x22
  __int64 v12; // x0
  __int64 v13; // x1
  const MethodInfo *v14; // x3
  System_Collections_Generic_List_Enumerator_T__o v15; // [xsp+8h] [xbp-58h] BYREF
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  if ( (byte_435503C & 1) == 0 )
  {
    sub_B70694(&System_Action_TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_EquipGraphListViewObject__Dispose__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_EquipGraphListViewObject__MoveNext__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_EquipGraphListViewObject__get_Current__);
    sub_B70694(&Method_EquipGraphListViewManager_OnMoveEnd__);
    sub_B70694(&Method_System_Collections_Generic_List_EquipGraphListViewObject__GetEnumerator__);
    sub_B70694(&Method_System_Collections_Generic_List_EquipGraphListViewObject__get_Count__);
    sub_B70694(&StringLiteral_10159/*"OnMoveEnd"*/);
    byte_435503C = 1;
  }
  memset(&v15, 0, sizeof(v15));
  ObjectList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)EquipGraphListViewManager__get_ObjectList(
                                                                                                this,
                                                                                                *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_B7076C(0LL, v8);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10159/*"OnMoveEnd"*/,
      delay,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v15,
      ObjectList,
      (const MethodInfo_3026504 *)Method_System_Collections_Generic_List_EquipGraphListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v15,
              (const MethodInfo_22212CC *)Method_System_Collections_Generic_List_Enumerator_EquipGraphListViewObject__MoveNext__) )
    {
      current = v15.fields.current;
      v11 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
      System_Action___ctor(v11, (Il2CppObject *)this, Method_EquipGraphListViewManager_OnMoveEnd__, 0LL);
      if ( !current )
        sub_B7076C(v12, v13);
      zero = UnityEngine_Vector3__get_zero(0LL);
      EquipGraphListViewObject__Init(
        (EquipGraphListViewObject_o *)current,
        mode,
        v11,
        zero.fields.x,
        *(UnityEngine_Vector3_o *)&zero.fields.y,
        v14);
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v15,
      (const MethodInfo_22212C8 *)Method_System_Collections_Generic_List_Enumerator_EquipGraphListViewObject__Dispose__);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EquipGraphListViewManager__RequestListObject_31332576(
        EquipGraphListViewManager_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *ObjectList; // x0
  __int64 v6; // x1
  int32_t size; // w8
  Il2CppObject *current; // x21
  System_Action_o *v9; // x22
  __int64 v10; // x0
  __int64 v11; // x1
  const MethodInfo *v12; // x3
  System_Collections_Generic_List_Enumerator_T__o v13; // [xsp+8h] [xbp-58h] BYREF
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  if ( (byte_435503D & 1) == 0 )
  {
    sub_B70694(&System_Action_TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_EquipGraphListViewObject__Dispose__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_EquipGraphListViewObject__MoveNext__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_EquipGraphListViewObject__get_Current__);
    sub_B70694(&Method_EquipGraphListViewManager_OnMoveEnd__);
    sub_B70694(&Method_System_Collections_Generic_List_EquipGraphListViewObject__GetEnumerator__);
    sub_B70694(&Method_System_Collections_Generic_List_EquipGraphListViewObject__get_Count__);
    sub_B70694(&StringLiteral_10159/*"OnMoveEnd"*/);
    byte_435503D = 1;
  }
  memset(&v13, 0, sizeof(v13));
  ObjectList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)EquipGraphListViewManager__get_ObjectList(
                                                                                                this,
                                                                                                *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_B7076C(0LL, v6);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10159/*"OnMoveEnd"*/,
      0.0,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v13,
      ObjectList,
      (const MethodInfo_3026504 *)Method_System_Collections_Generic_List_EquipGraphListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v13,
              (const MethodInfo_22212CC *)Method_System_Collections_Generic_List_Enumerator_EquipGraphListViewObject__MoveNext__) )
    {
      current = v13.fields.current;
      v9 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
      System_Action___ctor(v9, (Il2CppObject *)this, Method_EquipGraphListViewManager_OnMoveEnd__, 0LL);
      if ( !current )
        sub_B7076C(v10, v11);
      zero = UnityEngine_Vector3__get_zero(0LL);
      EquipGraphListViewObject__Init(
        (EquipGraphListViewObject_o *)current,
        mode,
        v9,
        zero.fields.x,
        *(UnityEngine_Vector3_o *)&zero.fields.y,
        v12);
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v13,
      (const MethodInfo_22212C8 *)Method_System_Collections_Generic_List_Enumerator_EquipGraphListViewObject__Dispose__);
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
  struct EquipGraphListViewItem_o **p_selectItem; // x26
  BattleServantConfConponent_o *p_selectItemCallbackFunc; // x22
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  __int64 servantItemInfo; // x0
  const MethodInfo *v20; // x1
  struct EquipGraphListViewItem_o *selectItem; // x8
  struct ListViewObject_o *viewObject; // x9
  __int64 v23; // x12
  EquipGraphListViewObject_o *v24; // x24
  const MethodInfo *v25; // x2
  struct PartyListViewItem_array *waveDeckItemList; // x8
  int v27; // w9
  struct EquipGraphListViewItem_o *v28; // x8
  int32_t wearerMember; // w11
  int32_t baseCost; // w9
  int32_t *p_baseCost; // x10
  _BOOL4 IsClearedWave_k__BackingField; // w20
  _QWORD *v33; // x0
  System_Reflection_MethodBase_o *v34; // x0
  const MethodInfo *v35; // x2
  struct EquipGraphServantItem_o *v36; // x8
  struct PartyListViewItem_array *v37; // x8
  int v38; // w10
  Il2CppClass **v39; // x8
  Il2CppClass *v40; // x21
  int events; // w20
  struct EquipGraphServantItem_o *v42; // x8
  struct ServantEntity_o *equipServantEntity; // x8
  CommonUI_o *Instance; // x20
  System_String_o *v45; // x21
  System_String_o *v46; // x22
  NotificationDialog_ClickDelegate_o *v47; // x23
  struct ServantEntity_o *servantEntity; // x8
  _BOOL4 v49; // w20
  _QWORD *v50; // x0
  System_String_array **v51; // x2
  System_String_array **v52; // x3
  System_Boolean_array **v53; // x4
  System_Int32_array **v54; // x5
  System_Int32_array *v55; // x6
  System_Int32_array *v56; // x7
  System_Action_o *klass; // x19
  System_Action_o *v58; // x0
  const MethodInfo *v59; // x1
  int64_t v60; // x1
  const MethodInfo *v61; // x2
  const MethodInfo *v62; // x1
  System_String_array **v63; // x2
  System_String_array **v64; // x3
  System_Boolean_array **v65; // x4
  System_Int32_array **v66; // x5
  System_Int32_array *v67; // x6
  System_Int32_array *v68; // x7
  int32_t v69; // w9
  System_String_o *v70; // x21
  __int64 v71; // x22
  System_String_array **v72; // x2
  System_String_array **v73; // x3
  System_Boolean_array **v74; // x4
  System_Int32_array **v75; // x5
  System_Int32_array *v76; // x6
  System_Int32_array *v77; // x7
  System_Int32_array **v78; // x23
  System_String_array **v79; // x2
  System_String_array **v80; // x3
  System_Boolean_array **v81; // x4
  System_Int32_array **v82; // x5
  System_Int32_array *v83; // x6
  System_Int32_array *v84; // x7
  System_Int32_array **v85; // x23
  System_String_array **v86; // x2
  System_String_array **v87; // x3
  System_Boolean_array **v88; // x4
  System_Int32_array **v89; // x5
  System_Int32_array *v90; // x6
  System_Int32_array *v91; // x7
  System_Int32_array **v92; // x23
  System_String_array **v93; // x2
  System_String_array **v94; // x3
  System_Boolean_array **v95; // x4
  System_Int32_array **v96; // x5
  System_Int32_array *v97; // x6
  System_Int32_array *v98; // x7
  System_Int32_array **v99; // x23
  struct EquipGraphServantItem_o *v100; // x8
  int32_t v101; // w23
  System_String_array **v102; // x2
  System_String_array **v103; // x3
  System_Boolean_array **v104; // x4
  System_Int32_array **v105; // x5
  System_Int32_array *v106; // x6
  System_Int32_array *v107; // x7
  System_Int32_array **v108; // x23
  System_String_array **v109; // x2
  System_String_array **v110; // x3
  System_Boolean_array **v111; // x4
  System_Int32_array **v112; // x5
  System_Int32_array *v113; // x6
  System_Int32_array *v114; // x7
  System_Int32_array **v115; // x20
  System_String_o *v116; // x20
  CommonUI_o *v117; // x21
  System_String_o *v118; // x22
  CommonConfirmDialog_ClickDelegate_o *v119; // x23
  struct EquipGraphServantItem_o *v120; // x8
  struct PartyListViewItem_array *v121; // x9
  __int64 v122; // x8
  unsigned __int64 v123; // x28
  int v124; // w27
  PartyListViewItem_o *v125; // x21
  int32_t v126; // w22
  struct ServantEntity_o *v127; // x8
  PartyOrganizationListViewItem_o *v128; // x23
  __int64 v129; // x24
  __int64 v130; // x25
  int v131; // w24
  ServantEntity_o *v132; // x21
  System_String_o *v133; // x21
  __int64 v134; // x2
  __int64 v135; // x22
  System_String_array **v136; // x2
  System_String_array **v137; // x3
  System_Boolean_array **v138; // x4
  System_Int32_array **v139; // x5
  System_Int32_array *v140; // x6
  System_Int32_array *v141; // x7
  System_Int32_array **v142; // x23
  __int64 v143; // x2
  System_String_array **v144; // x2
  System_String_array **v145; // x3
  System_Boolean_array **v146; // x4
  System_Int32_array **v147; // x5
  System_Int32_array *v148; // x6
  System_Int32_array *v149; // x7
  System_Int32_array **v150; // x23
  int32_t weareRarity; // w23
  System_String_array **v152; // x2
  System_String_array **v153; // x3
  System_Boolean_array **v154; // x4
  System_Int32_array **v155; // x5
  System_Int32_array *v156; // x6
  System_Int32_array *v157; // x7
  System_Int32_array **v158; // x23
  System_String_array **v159; // x2
  System_String_array **v160; // x3
  System_Boolean_array **v161; // x4
  System_Int32_array **v162; // x5
  System_Int32_array *v163; // x6
  System_Int32_array *v164; // x7
  System_Int32_array **v165; // x23
  System_String_array **v166; // x2
  System_String_array **v167; // x3
  System_Boolean_array **v168; // x4
  System_Int32_array **v169; // x5
  System_Int32_array *v170; // x6
  System_Int32_array *v171; // x7
  System_Int32_array **wearerServantName; // x20
  __int64 v173; // x2
  System_String_array **v174; // x2
  System_String_array **v175; // x3
  System_Boolean_array **v176; // x4
  System_Int32_array **v177; // x5
  System_Int32_array *v178; // x6
  System_Int32_array *v179; // x7
  System_Int32_array **v180; // x20
  __int64 v181; // x2
  System_String_array **v182; // x2
  System_String_array **v183; // x3
  System_Boolean_array **v184; // x4
  System_Int32_array **v185; // x5
  System_Int32_array *v186; // x6
  System_Int32_array *v187; // x7
  System_Int32_array **v188; // x20
  struct EquipGraphServantItem_o *v189; // x8
  int32_t Rarity; // w0
  System_String_array **v191; // x2
  System_String_array **v192; // x3
  System_Boolean_array **v193; // x4
  System_Int32_array **v194; // x5
  System_Int32_array *v195; // x6
  System_Int32_array *v196; // x7
  System_Int32_array **v197; // x20
  System_String_array **v198; // x2
  System_String_array **v199; // x3
  System_Boolean_array **v200; // x4
  System_Int32_array **v201; // x5
  System_Int32_array *v202; // x6
  System_Int32_array *v203; // x7
  System_Int32_array **v204; // x20
  System_String_array **v205; // x2
  System_String_array **v206; // x3
  System_Boolean_array **v207; // x4
  System_Int32_array **v208; // x5
  System_Int32_array *v209; // x6
  System_Int32_array *v210; // x7
  System_Int32_array **v211; // x20
  System_String_o *v212; // x20
  CommonUI_o *v213; // x21
  System_String_o *v214; // x22
  System_String_o *v215; // x23
  System_String_o *v216; // x24
  CommonConfirmDialog_ClickDelegate_o *v217; // x25
  struct PartyListViewItem_array *v218; // x8
  int v219; // w9
  struct EquipGraphListViewItem_o *v220; // x10
  struct UserServantEntity_o *userSvtEntity; // x10
  int32_t memberIndex; // w23
  __int128 v223; // q1
  PartyListViewItem_o *v224; // x24
  _BOOL8 v225; // x0
  __int64 v226; // x1
  Il2CppObject *current; // x20
  __int64 v228; // x10
  int klass_high; // w9
  int32_t v230; // w8
  _DWORD *monitor; // x9
  UnityEngine_Object_o *v232; // x24
  _BOOL8 v233; // x0
  __int64 v234; // x1
  void *v235; // x8
  __int64 v236; // x11
  __int64 v237; // x11
  EquipGraphListViewObject_o *v238; // x24
  const MethodInfo *v239; // x1
  struct EquipGraphListViewItem_o *v240; // x8
  struct UserServantEntity_o *v241; // x8
  __int128 v242; // q1
  struct EquipGraphServantItem_o *v243; // x20
  struct UserServantEntity_o *userServantEntity; // x23
  System_String_o *v245; // x20
  __int64 v246; // x22
  __int64 v247; // x2
  System_String_array **v248; // x2
  System_String_array **v249; // x3
  System_Boolean_array **v250; // x4
  System_Int32_array **v251; // x5
  System_Int32_array *v252; // x6
  System_Int32_array *v253; // x7
  System_Int32_array **v254; // x24
  __int64 v255; // x2
  System_String_array **v256; // x2
  System_String_array **v257; // x3
  System_Boolean_array **v258; // x4
  System_Int32_array **v259; // x5
  System_Int32_array *v260; // x6
  System_Int32_array *v261; // x7
  System_Int32_array **v262; // x24
  int32_t v263; // w24
  System_String_array **v264; // x2
  System_String_array **v265; // x3
  System_Boolean_array **v266; // x4
  System_Int32_array **v267; // x5
  System_Int32_array *v268; // x6
  System_Int32_array *v269; // x7
  System_Int32_array **v270; // x24
  System_String_array **v271; // x2
  System_String_array **v272; // x3
  System_Boolean_array **v273; // x4
  System_Int32_array **v274; // x5
  System_Int32_array *v275; // x6
  System_Int32_array *v276; // x7
  System_Int32_array **v277; // x24
  __int64 v278; // x23
  __int64 v279; // x24
  int32_t v280; // w0
  System_String_array **v281; // x2
  System_String_array **v282; // x3
  System_Boolean_array **v283; // x4
  System_Int32_array **v284; // x5
  System_Int32_array *v285; // x6
  System_Int32_array *v286; // x7
  System_Int32_array **v287; // x21
  System_String_o *v288; // x20
  CommonUI_o *v289; // x21
  System_String_o *v290; // x22
  System_String_o *v291; // x23
  System_String_o *v292; // x24
  CommonConfirmDialog_ClickDelegate_o *v293; // x25
  __int64 v294; // x0
  __int64 v295; // x0
  struct PartyListViewItem_array *v296; // [xsp+68h] [xbp-E8h]
  struct EquipGraphListViewItem_o **v297; // [xsp+68h] [xbp-E8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v298; // [xsp+70h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v299; // [xsp+90h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v300; // [xsp+B0h] [xbp-A0h] BYREF
  int32_t v301; // [xsp+D4h] [xbp-7Ch] BYREF
  int32_t partyNumber; // [xsp+D8h] [xbp-78h] BYREF
  int32_t maxWave; // [xsp+DCh] [xbp-74h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v304; // [xsp+E0h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v305; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o EquipSvtId; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v307; // 0:x0.16

  if ( (byte_4355041 & 1) == 0 )
  {
    sub_B70694(&BalanceConfig_TypeInfo);
    sub_B70694(&NotificationDialog_ClickDelegate_TypeInfo);
    sub_B70694(&CommonConfirmDialog_ClickDelegate_TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__);
    sub_B70694(&EquipGraphListViewItem_TypeInfo);
    sub_B70694(&Method_EquipGraphListViewManager_EndSelectConfirm__);
    sub_B70694(&Method_EquipGraphListViewManager_SelectEquip__);
    sub_B70694(&Method_EquipGraphListViewManager__SelectEquip_b__71_0__);
    sub_B70694(&EquipGraphListViewObject_TypeInfo);
    sub_B70694(&int_TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    sub_B70694(&LocalizationManager_TypeInfo);
    sub_B70694(&object___TypeInfo);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    sub_B70694(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B70694(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_B70694(&Rarity_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B70694(&SoundManager_TypeInfo);
    sub_B70694(&StringLiteral_15549/*"WAVE_BATTLE_EQUIP_SWAP_MESSAGE"*/);
    sub_B70694(&StringLiteral_15550/*"WAVE_BATTLE_EQUIP_SWAP_TITLE"*/);
    sub_B70694(&StringLiteral_15546/*"WAVE_BATTLE_EQUIP_MOVE_MESSAGE"*/);
    sub_B70694(&StringLiteral_5618/*"EQUIP_GRAPH_USE_WARNING_TITLE"*/);
    sub_B70694(&StringLiteral_5617/*"EQUIP_GRAPH_USE_WARNING_MESSAGE"*/);
    sub_B70694(&StringLiteral_15542/*"WAVE_BATTLE_COST_OVER_TITLE"*/);
    sub_B70694(&StringLiteral_3339/*"COMMON_CONFIRM_NO"*/);
    sub_B70694(&StringLiteral_3342/*"COMMON_CONFIRM_YES"*/);
    sub_B70694(&StringLiteral_15541/*"WAVE_BATTLE_COST_OVER_MESSAGE"*/);
    byte_4355041 = 1;
  }
  p_selectItem = &this->fields.selectItem;
  memset(&v304, 0, sizeof(v304));
  this->fields.selectItem = item;
  sub_B70630(
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
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.selectItemCallbackFunc,
    (System_Int32_array **)callback,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
  selectItem = this->fields.selectItem;
  if ( !selectItem )
    goto LABEL_262;
  viewObject = selectItem->fields.viewObject;
  if ( viewObject
    && (v23 = *(&EquipGraphListViewObject_TypeInfo->_2.bitflags2 + 1),
        *(&viewObject->klass->_2.bitflags2 + 1) >= (unsigned int)v23) )
  {
    if ( (EquipGraphListViewObject_c *)viewObject->klass->_2.typeHierarchy[v23 - 1] == EquipGraphListViewObject_TypeInfo )
      v24 = (EquipGraphListViewObject_o *)selectItem->fields.viewObject;
    else
      v24 = 0LL;
  }
  else
  {
    v24 = 0LL;
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
      goto LABEL_262;
    v27 = this->fields.partyNumber - 1;
    if ( v27 < waveDeckItemList->max_length )
    {
      servantItemInfo = (__int64)waveDeckItemList->m_Items[v27];
      if ( !servantItemInfo )
        goto LABEL_262;
      PartyListViewItem__SetEquip((PartyListViewItem_o *)servantItemInfo, this->fields.memberIndex, 0LL, 0LL);
LABEL_19:
      if ( !*p_selectItem )
        goto LABEL_262;
      (*p_selectItem)->fields.isBase = 0;
      v28 = *p_selectItem;
      if ( !*p_selectItem )
        goto LABEL_262;
      wearerMember = v28->fields.wearerMember;
      if ( wearerMember == this->fields.memberIndex || (wearerMember & 0x80000000) != 0 )
      {
        if ( v28->fields._OrganizedWave_k__BackingField <= 0 && !v28->fields._IsUnique_k__BackingField )
        {
LABEL_62:
          servantItemInfo = (__int64)this->fields.servantItemInfo;
          if ( servantItemInfo )
          {
            v60 = 0LL;
            goto LABEL_64;
          }
          goto LABEL_262;
        }
        baseCost = this->fields.baseCost;
        p_baseCost = &this->fields.baseCost;
        if ( (wearerMember & 0x80000000) != 0 )
        {
          LODWORD(servantEntity) = 0;
LABEL_58:
          *p_baseCost = (_DWORD)servantEntity + baseCost;
          if ( !v24 )
            goto LABEL_262;
          UnityEngine_Vector3__get_zero(0LL);
          if ( (byte_4355055 & 1) == 0 )
          {
            sub_B70694(&EquipGraphListViewItem_TypeInfo);
            byte_4355055 = 1;
          }
          EquipGraphListViewObject__SetupDisp(v24, v59);
          goto LABEL_62;
        }
      }
      else
      {
        baseCost = this->fields.baseCost;
        p_baseCost = &this->fields.baseCost;
      }
      servantEntity = v28->fields.servantEntity;
      if ( servantEntity )
        LODWORD(servantEntity) = servantEntity->fields.cost;
      goto LABEL_58;
    }
LABEL_264:
    v294 = sub_B70798(servantItemInfo);
    sub_B70738(v294, 0LL);
  }
  if ( selectItem->fields._OrganizedWave_k__BackingField >= 1 )
  {
    if ( !item )
      goto LABEL_262;
    IsClearedWave_k__BackingField = item->fields._IsClearedWave_k__BackingField;
    v33 = Method_EquipGraphListViewManager_SelectEquip__;
    if ( (*((_BYTE *)Method_EquipGraphListViewManager_SelectEquip__ + 75) & 2) != 0 )
      v33 = (_QWORD *)sub_B7069C(Method_EquipGraphListViewManager_SelectEquip__);
    v34 = (System_Reflection_MethodBase_o *)sub_B70678(v33, v33[3]);
    if ( !IsClearedWave_k__BackingField )
    {
      OverwriteAssetSoundName__PlaySystemSe(v34, 0, 0LL);
      v36 = this->fields.servantItemInfo;
      if ( !v36 )
        goto LABEL_262;
      if ( v36->fields.equipUserSvtEntity )
      {
        v37 = this->fields.waveDeckItemList;
        if ( !v37 )
          goto LABEL_262;
        v38 = item->fields._OrganizedWave_k__BackingField - 1;
        if ( v38 >= v37->max_length )
          goto LABEL_264;
        if ( !*p_selectItem )
          goto LABEL_262;
        v39 = &v37->obj.klass + v38;
        v40 = v39[4];
        if ( !v40 )
          goto LABEL_262;
        servantItemInfo = (__int64)PartyListViewItem__GetMember(
                                     (PartyListViewItem_o *)v39[4],
                                     (*p_selectItem)->fields.wearerMember,
                                     0LL);
        if ( !servantItemInfo )
          goto LABEL_262;
        events = (int)v40->_1.events;
        servantItemInfo = PartyOrganizationListViewItem__get_EquipCost(
                            (PartyOrganizationListViewItem_o *)servantItemInfo,
                            0LL);
        v42 = this->fields.servantItemInfo;
        if ( !v42 )
          goto LABEL_262;
        equipServantEntity = v42->fields.equipServantEntity;
        if ( equipServantEntity )
          LODWORD(equipServantEntity) = equipServantEntity->fields.cost;
        if ( events - (int)servantItemInfo + (int)equipServantEntity > SHIDWORD(v40->_1.interopData) )
        {
          Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          v45 = LocalizationManager__Get((System_String_o *)StringLiteral_15542/*"WAVE_BATTLE_COST_OVER_TITLE"*/, 0LL);
          v46 = LocalizationManager__Get((System_String_o *)StringLiteral_15541/*"WAVE_BATTLE_COST_OVER_MESSAGE"*/, 0LL);
          v47 = (NotificationDialog_ClickDelegate_o *)sub_B70764(NotificationDialog_ClickDelegate_TypeInfo);
          NotificationDialog_ClickDelegate___ctor(
            v47,
            (Il2CppObject *)this,
            Method_EquipGraphListViewManager__SelectEquip_b__71_0__,
            0LL);
          if ( Instance )
          {
            CommonUI__OpenNotificationDialog_17906460(
              Instance,
              v45,
              v46,
              v47,
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
          goto LABEL_262;
        }
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v133 = LocalizationManager__Get((System_String_o *)StringLiteral_15549/*"WAVE_BATTLE_EQUIP_SWAP_MESSAGE"*/, 0LL);
        servantItemInfo = sub_B706AC(object___TypeInfo, 10LL);
        if ( !*p_selectItem )
          goto LABEL_262;
        v135 = servantItemInfo;
        LODWORD(v300.fields.currentCryptoKey) = (*p_selectItem)->fields._OrganizedWave_k__BackingField;
        servantItemInfo = j_il2cpp_value_box_0(int_TypeInfo, &v300, v134);
        if ( !v135 )
          goto LABEL_262;
        v142 = (System_Int32_array **)servantItemInfo;
        if ( !servantItemInfo
          || (servantItemInfo = sub_B70754(servantItemInfo, *(_QWORD *)(*(_QWORD *)v135 + 64LL))) != 0 )
        {
          if ( !*(_DWORD *)(v135 + 24) )
            goto LABEL_264;
          *(_QWORD *)(v135 + 32) = v142;
          sub_B70630((BattleServantConfConponent_o *)(v135 + 32), v142, v136, v137, v138, v139, v140, v141);
          maxWave = this->fields.maxWave;
          servantItemInfo = j_il2cpp_value_box_0(int_TypeInfo, &maxWave, v143);
          v150 = (System_Int32_array **)servantItemInfo;
          if ( !servantItemInfo
            || (servantItemInfo = sub_B70754(servantItemInfo, *(_QWORD *)(*(_QWORD *)v135 + 64LL))) != 0 )
          {
            if ( *(_DWORD *)(v135 + 24) <= 1u )
              goto LABEL_264;
            *(_QWORD *)(v135 + 40) = v150;
            sub_B70630((BattleServantConfConponent_o *)(v135 + 40), v150, v144, v145, v146, v147, v148, v149);
            if ( !*p_selectItem )
              goto LABEL_262;
            weareRarity = (*p_selectItem)->fields.weareRarity;
            if ( (BYTE3(Rarity_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !Rarity_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(Rarity_TypeInfo);
            servantItemInfo = (__int64)Rarity__getRarityType(weareRarity, 0LL);
            v158 = (System_Int32_array **)servantItemInfo;
            if ( !servantItemInfo
              || (servantItemInfo = sub_B70754(servantItemInfo, *(_QWORD *)(*(_QWORD *)v135 + 64LL))) != 0 )
            {
              if ( *(_DWORD *)(v135 + 24) <= 2u )
                goto LABEL_264;
              *(_QWORD *)(v135 + 48) = v158;
              sub_B70630((BattleServantConfConponent_o *)(v135 + 48), v158, v152, v153, v154, v155, v156, v157);
              servantItemInfo = (__int64)*p_selectItem;
              if ( !*p_selectItem )
                goto LABEL_262;
              servantItemInfo = (__int64)EquipGraphListViewItem__get_WeareServantClassName(
                                           (EquipGraphListViewItem_o *)servantItemInfo,
                                           v20);
              v165 = (System_Int32_array **)servantItemInfo;
              if ( !servantItemInfo
                || (servantItemInfo = sub_B70754(servantItemInfo, *(_QWORD *)(*(_QWORD *)v135 + 64LL))) != 0 )
              {
                if ( *(_DWORD *)(v135 + 24) <= 3u )
                  goto LABEL_264;
                *(_QWORD *)(v135 + 56) = v165;
                sub_B70630((BattleServantConfConponent_o *)(v135 + 56), v165, v159, v160, v161, v162, v163, v164);
                if ( !*p_selectItem )
                  goto LABEL_262;
                wearerServantName = (System_Int32_array **)(*p_selectItem)->fields.wearerServantName;
                if ( !wearerServantName
                  || (servantItemInfo = sub_B70754(wearerServantName, *(_QWORD *)(*(_QWORD *)v135 + 64LL))) != 0 )
                {
                  if ( *(_DWORD *)(v135 + 24) <= 4u )
                    goto LABEL_264;
                  *(_QWORD *)(v135 + 64) = wearerServantName;
                  sub_B70630(
                    (BattleServantConfConponent_o *)(v135 + 64),
                    wearerServantName,
                    v166,
                    v167,
                    v168,
                    v169,
                    v170,
                    v171);
                  partyNumber = this->fields.partyNumber;
                  servantItemInfo = j_il2cpp_value_box_0(int_TypeInfo, &partyNumber, v173);
                  v180 = (System_Int32_array **)servantItemInfo;
                  if ( !servantItemInfo
                    || (servantItemInfo = sub_B70754(servantItemInfo, *(_QWORD *)(*(_QWORD *)v135 + 64LL))) != 0 )
                  {
                    if ( *(_DWORD *)(v135 + 24) <= 5u )
                      goto LABEL_264;
                    *(_QWORD *)(v135 + 72) = v180;
                    sub_B70630((BattleServantConfConponent_o *)(v135 + 72), v180, v174, v175, v176, v177, v178, v179);
                    v301 = this->fields.maxWave;
                    servantItemInfo = j_il2cpp_value_box_0(int_TypeInfo, &v301, v181);
                    v188 = (System_Int32_array **)servantItemInfo;
                    if ( !servantItemInfo
                      || (servantItemInfo = sub_B70754(servantItemInfo, *(_QWORD *)(*(_QWORD *)v135 + 64LL))) != 0 )
                    {
                      if ( *(_DWORD *)(v135 + 24) <= 6u )
                        goto LABEL_264;
                      *(_QWORD *)(v135 + 80) = v188;
                      sub_B70630((BattleServantConfConponent_o *)(v135 + 80), v188, v182, v183, v184, v185, v186, v187);
                      v189 = this->fields.servantItemInfo;
                      if ( !v189 )
                        goto LABEL_262;
                      servantItemInfo = (__int64)v189->fields.userServantEntity;
                      if ( !servantItemInfo )
                        goto LABEL_262;
                      Rarity = UserServantEntity__getRarity((UserServantEntity_o *)servantItemInfo, 0LL);
                      servantItemInfo = (__int64)Rarity__getRarityType(Rarity, 0LL);
                      v197 = (System_Int32_array **)servantItemInfo;
                      if ( !servantItemInfo
                        || (servantItemInfo = sub_B70754(servantItemInfo, *(_QWORD *)(*(_QWORD *)v135 + 64LL))) != 0 )
                      {
                        if ( *(_DWORD *)(v135 + 24) <= 7u )
                          goto LABEL_264;
                        *(_QWORD *)(v135 + 88) = v197;
                        sub_B70630(
                          (BattleServantConfConponent_o *)(v135 + 88),
                          v197,
                          v191,
                          v192,
                          v193,
                          v194,
                          v195,
                          v196);
                        servantItemInfo = (__int64)this->fields.servantItemInfo;
                        if ( !servantItemInfo )
                          goto LABEL_262;
                        servantItemInfo = (__int64)EquipGraphServantItem__get_ClassName(
                                                     (EquipGraphServantItem_o *)servantItemInfo,
                                                     v20);
                        v204 = (System_Int32_array **)servantItemInfo;
                        if ( !servantItemInfo
                          || (servantItemInfo = sub_B70754(servantItemInfo, *(_QWORD *)(*(_QWORD *)v135 + 64LL))) != 0 )
                        {
                          if ( *(_DWORD *)(v135 + 24) <= 8u )
                            goto LABEL_264;
                          *(_QWORD *)(v135 + 96) = v204;
                          sub_B70630(
                            (BattleServantConfConponent_o *)(v135 + 96),
                            v204,
                            v198,
                            v199,
                            v200,
                            v201,
                            v202,
                            v203);
                          servantItemInfo = (__int64)this->fields.servantItemInfo;
                          if ( !servantItemInfo )
                            goto LABEL_262;
                          servantItemInfo = (__int64)EquipGraphServantItem__get_NameText(
                                                       (EquipGraphServantItem_o *)servantItemInfo,
                                                       v20);
                          v211 = (System_Int32_array **)servantItemInfo;
                          if ( !servantItemInfo
                            || (servantItemInfo = sub_B70754(servantItemInfo, *(_QWORD *)(*(_QWORD *)v135 + 64LL))) != 0 )
                          {
                            if ( *(_DWORD *)(v135 + 24) <= 9u )
                              goto LABEL_264;
                            *(_QWORD *)(v135 + 104) = v211;
                            sub_B70630(
                              (BattleServantConfConponent_o *)(v135 + 104),
                              v211,
                              v205,
                              v206,
                              v207,
                              v208,
                              v209,
                              v210);
                            v212 = System_String__Format_44836892(v133, (System_Object_array *)v135, 0LL);
                            v213 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                            v214 = LocalizationManager__Get((System_String_o *)StringLiteral_15550/*"WAVE_BATTLE_EQUIP_SWAP_TITLE"*/, 0LL);
                            v215 = LocalizationManager__Get((System_String_o *)StringLiteral_3342/*"COMMON_CONFIRM_YES"*/, 0LL);
                            v216 = LocalizationManager__Get((System_String_o *)StringLiteral_3339/*"COMMON_CONFIRM_NO"*/, 0LL);
                            v217 = (CommonConfirmDialog_ClickDelegate_o *)sub_B70764(CommonConfirmDialog_ClickDelegate_TypeInfo);
                            CommonConfirmDialog_ClickDelegate___ctor(
                              v217,
                              (Il2CppObject *)this,
                              Method_EquipGraphListViewManager_EndSelectConfirm__,
                              0LL);
                            if ( v213 )
                            {
                              CommonUI__OpenConfirmDialog_17904224(
                                v213,
                                v214,
                                v212,
                                v215,
                                v216,
                                v217,
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
                            goto LABEL_262;
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
        goto LABEL_266;
      }
      goto LABEL_133;
    }
    goto LABEL_55;
  }
  if ( selectItem->fields._IsUnique_k__BackingField )
  {
    if ( !item )
      goto LABEL_262;
    v49 = item->fields._IsClearedWave_k__BackingField;
    v50 = Method_EquipGraphListViewManager_SelectEquip__;
    if ( (*((_BYTE *)Method_EquipGraphListViewManager_SelectEquip__ + 75) & 2) != 0 )
      v50 = (_QWORD *)sub_B7069C(Method_EquipGraphListViewManager_SelectEquip__);
    v34 = (System_Reflection_MethodBase_o *)sub_B70678(v50, v50[3]);
    if ( !v49 )
    {
      OverwriteAssetSoundName__PlaySystemSe(v34, 0, 0LL);
      v120 = this->fields.servantItemInfo;
      if ( !v120 )
        goto LABEL_262;
      if ( v120->fields.equipUserSvtEntity )
      {
        v121 = this->fields.waveDeckItemList;
        if ( !v121 )
          goto LABEL_262;
        v122 = *(_QWORD *)&v121->max_length;
        if ( (int)v122 < 1 )
          return;
        v123 = 0LL;
        v124 = 1;
        v296 = this->fields.waveDeckItemList;
        while ( 1 )
        {
          if ( v123 >= (unsigned int)v122 )
            goto LABEL_264;
          v125 = v121->m_Items[v123];
          v126 = 0;
          do
          {
            servantItemInfo = (__int64)BalanceConfig_TypeInfo;
            if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !BalanceConfig_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
              servantItemInfo = (__int64)BalanceConfig_TypeInfo;
            }
            if ( v126 >= *(_DWORD *)(*(_QWORD *)(servantItemInfo + 184) + 160LL) )
              goto LABEL_131;
            if ( !v125 )
              goto LABEL_262;
            servantItemInfo = (__int64)PartyListViewItem__GetMember(v125, v126, 0LL);
            if ( !*p_selectItem )
              goto LABEL_262;
            v127 = (*p_selectItem)->fields.servantEntity;
            if ( !v127 )
              goto LABEL_262;
            v128 = (PartyOrganizationListViewItem_o *)servantItemInfo;
            v130 = *(_QWORD *)&v127->fields.id.fields.currentCryptoKey;
            v129 = *(_QWORD *)&v127->fields.id.fields.fakeValue;
            if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            }
            *(_QWORD *)&v305.fields.currentCryptoKey = v130;
            *(_QWORD *)&v305.fields.fakeValue = v129;
            servantItemInfo = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984(v305, 0LL);
            if ( !v128 )
              goto LABEL_262;
            v131 = servantItemInfo;
            EquipSvtId = PartyOrganizationListViewItem__get_EquipSvtId(v128, 0LL);
            servantItemInfo = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984(EquipSvtId, 0LL);
            ++v126;
          }
          while ( v131 != (_DWORD)servantItemInfo );
          v132 = v128->fields.servantEntity;
          if ( v132 )
            break;
LABEL_131:
          v121 = v296;
          ++v123;
          ++v124;
          LODWORD(v122) = v296->max_length;
          if ( (__int64)v123 >= (int)v122 )
            return;
        }
        userServantEntity = v128->fields.userServantEntity;
        if ( !userServantEntity )
          return;
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v245 = LocalizationManager__Get((System_String_o *)StringLiteral_15546/*"WAVE_BATTLE_EQUIP_MOVE_MESSAGE"*/, 0LL);
        v246 = sub_B706AC(object___TypeInfo, 5LL);
        LODWORD(v300.fields.currentCryptoKey) = v124;
        servantItemInfo = j_il2cpp_value_box_0(int_TypeInfo, &v300, v247);
        if ( !v246 )
          goto LABEL_262;
        v254 = (System_Int32_array **)servantItemInfo;
        if ( !servantItemInfo
          || (servantItemInfo = sub_B70754(servantItemInfo, *(_QWORD *)(*(_QWORD *)v246 + 64LL))) != 0 )
        {
          if ( !*(_DWORD *)(v246 + 24) )
            goto LABEL_264;
          *(_QWORD *)(v246 + 32) = v254;
          sub_B70630((BattleServantConfConponent_o *)(v246 + 32), v254, v248, v249, v250, v251, v252, v253);
          maxWave = this->fields.maxWave;
          servantItemInfo = j_il2cpp_value_box_0(int_TypeInfo, &maxWave, v255);
          v262 = (System_Int32_array **)servantItemInfo;
          if ( !servantItemInfo
            || (servantItemInfo = sub_B70754(servantItemInfo, *(_QWORD *)(*(_QWORD *)v246 + 64LL))) != 0 )
          {
            if ( *(_DWORD *)(v246 + 24) <= 1u )
              goto LABEL_264;
            *(_QWORD *)(v246 + 40) = v262;
            sub_B70630((BattleServantConfConponent_o *)(v246 + 40), v262, v256, v257, v258, v259, v260, v261);
            v263 = UserServantEntity__getRarity(userServantEntity, 0LL);
            if ( (BYTE3(Rarity_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !Rarity_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(Rarity_TypeInfo);
            servantItemInfo = (__int64)Rarity__getRarityType(v263, 0LL);
            v270 = (System_Int32_array **)servantItemInfo;
            if ( !servantItemInfo
              || (servantItemInfo = sub_B70754(servantItemInfo, *(_QWORD *)(*(_QWORD *)v246 + 64LL))) != 0 )
            {
              if ( *(_DWORD *)(v246 + 24) <= 2u )
                goto LABEL_264;
              *(_QWORD *)(v246 + 48) = v270;
              sub_B70630((BattleServantConfConponent_o *)(v246 + 48), v270, v264, v265, v266, v267, v268, v269);
              servantItemInfo = (__int64)ServantEntity__getClassName(v132, 0LL);
              v277 = (System_Int32_array **)servantItemInfo;
              if ( !servantItemInfo
                || (servantItemInfo = sub_B70754(servantItemInfo, *(_QWORD *)(*(_QWORD *)v246 + 64LL))) != 0 )
              {
                if ( *(_DWORD *)(v246 + 24) <= 3u )
                  goto LABEL_264;
                *(_QWORD *)(v246 + 56) = v277;
                sub_B70630((BattleServantConfConponent_o *)(v246 + 56), v277, v271, v272, v273, v274, v275, v276);
                v279 = *(_QWORD *)&userServantEntity->fields.limitCount.fields.currentCryptoKey;
                v278 = *(_QWORD *)&userServantEntity->fields.limitCount.fields.fakeValue;
                if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
                }
                *(_QWORD *)&v307.fields.currentCryptoKey = v279;
                *(_QWORD *)&v307.fields.fakeValue = v278;
                v280 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984(v307, 0LL);
                servantItemInfo = (__int64)ServantEntity__getName(v132, v280, -1, 0LL);
                v287 = (System_Int32_array **)servantItemInfo;
                if ( !servantItemInfo
                  || (servantItemInfo = sub_B70754(servantItemInfo, *(_QWORD *)(*(_QWORD *)v246 + 64LL))) != 0 )
                {
                  if ( *(_DWORD *)(v246 + 24) <= 4u )
                    goto LABEL_264;
                  *(_QWORD *)(v246 + 64) = v287;
                  sub_B70630((BattleServantConfConponent_o *)(v246 + 64), v287, v281, v282, v283, v284, v285, v286);
                  v288 = System_String__Format_44836892(v245, (System_Object_array *)v246, 0LL);
                  v289 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                  v290 = LocalizationManager__Get((System_String_o *)StringLiteral_5618/*"EQUIP_GRAPH_USE_WARNING_TITLE"*/, 0LL);
                  v291 = LocalizationManager__Get((System_String_o *)StringLiteral_3342/*"COMMON_CONFIRM_YES"*/, 0LL);
                  v292 = LocalizationManager__Get((System_String_o *)StringLiteral_3339/*"COMMON_CONFIRM_NO"*/, 0LL);
                  v293 = (CommonConfirmDialog_ClickDelegate_o *)sub_B70764(CommonConfirmDialog_ClickDelegate_TypeInfo);
                  CommonConfirmDialog_ClickDelegate___ctor(
                    v293,
                    (Il2CppObject *)this,
                    Method_EquipGraphListViewManager_EndSelectConfirm__,
                    0LL);
                  if ( v289 )
                  {
                    CommonUI__OpenConfirmDialog_17904224(
                      v289,
                      v290,
                      v288,
                      v291,
                      v292,
                      v293,
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
LABEL_262:
                  sub_B7076C(servantItemInfo, v20);
                }
              }
            }
          }
        }
LABEL_266:
        v295 = sub_B7078C(servantItemInfo);
        sub_B70738(v295, 0LL);
      }
LABEL_133:
      EquipGraphListViewManager__EndSelectConfirm(this, 1, v35);
      return;
    }
LABEL_55:
    OverwriteAssetSoundName__PlaySystemSe(v34, 2, 0LL);
    klass = (System_Action_o *)p_selectItemCallbackFunc->klass;
    if ( p_selectItemCallbackFunc->klass )
    {
      p_selectItemCallbackFunc->klass = 0LL;
      sub_B70630(p_selectItemCallbackFunc, 0LL, v51, v52, v53, v54, v55, v56);
      v58 = klass;
      goto LABEL_67;
    }
    return;
  }
  v69 = selectItem->fields.wearerMember;
  if ( v69 != this->fields.memberIndex && (v69 & 0x80000000) == 0 )
  {
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
    v70 = LocalizationManager__Get((System_String_o *)StringLiteral_5617/*"EQUIP_GRAPH_USE_WARNING_MESSAGE"*/, 0LL);
    servantItemInfo = sub_B706AC(object___TypeInfo, 6LL);
    if ( !this->fields.servantItemInfo )
      goto LABEL_262;
    v71 = servantItemInfo;
    servantItemInfo = (__int64)EquipGraphServantItem__get_NameText(this->fields.servantItemInfo, v20);
    if ( !v71 )
      goto LABEL_262;
    v78 = (System_Int32_array **)servantItemInfo;
    if ( !servantItemInfo || (servantItemInfo = sub_B70754(servantItemInfo, *(_QWORD *)(*(_QWORD *)v71 + 64LL))) != 0 )
    {
      if ( !*(_DWORD *)(v71 + 24) )
        goto LABEL_264;
      *(_QWORD *)(v71 + 32) = v78;
      sub_B70630((BattleServantConfConponent_o *)(v71 + 32), v78, v72, v73, v74, v75, v76, v77);
      if ( !*p_selectItem )
        goto LABEL_262;
      v85 = (System_Int32_array **)(*p_selectItem)->fields.wearerServantName;
      if ( !v85 || (servantItemInfo = sub_B70754(v85, *(_QWORD *)(*(_QWORD *)v71 + 64LL))) != 0 )
      {
        if ( *(_DWORD *)(v71 + 24) <= 1u )
          goto LABEL_264;
        *(_QWORD *)(v71 + 40) = v85;
        sub_B70630((BattleServantConfConponent_o *)(v71 + 40), v85, v79, v80, v81, v82, v83, v84);
        servantItemInfo = (__int64)this->fields.servantItemInfo;
        if ( !servantItemInfo )
          goto LABEL_262;
        servantItemInfo = (__int64)EquipGraphServantItem__get_ClassName((EquipGraphServantItem_o *)servantItemInfo, v20);
        v92 = (System_Int32_array **)servantItemInfo;
        if ( !servantItemInfo
          || (servantItemInfo = sub_B70754(servantItemInfo, *(_QWORD *)(*(_QWORD *)v71 + 64LL))) != 0 )
        {
          if ( *(_DWORD *)(v71 + 24) <= 2u )
            goto LABEL_264;
          *(_QWORD *)(v71 + 48) = v92;
          sub_B70630((BattleServantConfConponent_o *)(v71 + 48), v92, v86, v87, v88, v89, v90, v91);
          servantItemInfo = (__int64)*p_selectItem;
          if ( !*p_selectItem )
            goto LABEL_262;
          servantItemInfo = (__int64)EquipGraphListViewItem__get_WeareServantClassName(
                                       (EquipGraphListViewItem_o *)servantItemInfo,
                                       v20);
          v99 = (System_Int32_array **)servantItemInfo;
          if ( !servantItemInfo
            || (servantItemInfo = sub_B70754(servantItemInfo, *(_QWORD *)(*(_QWORD *)v71 + 64LL))) != 0 )
          {
            if ( *(_DWORD *)(v71 + 24) <= 3u )
              goto LABEL_264;
            *(_QWORD *)(v71 + 56) = v99;
            sub_B70630((BattleServantConfConponent_o *)(v71 + 56), v99, v93, v94, v95, v96, v97, v98);
            v100 = this->fields.servantItemInfo;
            if ( !v100 )
              goto LABEL_262;
            servantItemInfo = (__int64)v100->fields.userServantEntity;
            if ( !servantItemInfo )
              goto LABEL_262;
            v101 = UserServantEntity__getRarity((UserServantEntity_o *)servantItemInfo, 0LL);
            if ( (BYTE3(Rarity_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !Rarity_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(Rarity_TypeInfo);
            servantItemInfo = (__int64)Rarity__getRarityType(v101, 0LL);
            v108 = (System_Int32_array **)servantItemInfo;
            if ( !servantItemInfo
              || (servantItemInfo = sub_B70754(servantItemInfo, *(_QWORD *)(*(_QWORD *)v71 + 64LL))) != 0 )
            {
              if ( *(_DWORD *)(v71 + 24) <= 4u )
                goto LABEL_264;
              *(_QWORD *)(v71 + 64) = v108;
              sub_B70630((BattleServantConfConponent_o *)(v71 + 64), v108, v102, v103, v104, v105, v106, v107);
              if ( !*p_selectItem )
                goto LABEL_262;
              servantItemInfo = (__int64)Rarity__getRarityType((*p_selectItem)->fields.weareRarity, 0LL);
              v115 = (System_Int32_array **)servantItemInfo;
              if ( !servantItemInfo
                || (servantItemInfo = sub_B70754(servantItemInfo, *(_QWORD *)(*(_QWORD *)v71 + 64LL))) != 0 )
              {
                if ( *(_DWORD *)(v71 + 24) <= 5u )
                  goto LABEL_264;
                *(_QWORD *)(v71 + 72) = v115;
                sub_B70630((BattleServantConfConponent_o *)(v71 + 72), v115, v109, v110, v111, v112, v113, v114);
                v116 = System_String__Format_44836892(v70, (System_Object_array *)v71, 0LL);
                v117 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                v118 = LocalizationManager__Get((System_String_o *)StringLiteral_5618/*"EQUIP_GRAPH_USE_WARNING_TITLE"*/, 0LL);
                v119 = (CommonConfirmDialog_ClickDelegate_o *)sub_B70764(CommonConfirmDialog_ClickDelegate_TypeInfo);
                CommonConfirmDialog_ClickDelegate___ctor(
                  v119,
                  (Il2CppObject *)this,
                  Method_EquipGraphListViewManager_EndSelectConfirm__,
                  0LL);
                servantItemInfo = (__int64)BalanceConfig_TypeInfo;
                if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !BalanceConfig_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                }
                if ( v117 )
                {
                  CommonUI__OpenConfirmDialog(
                    v117,
                    v118,
                    v116,
                    v119,
                    BalanceConfig_TypeInfo->static_fields->DefaultFontSize,
                    0,
                    0,
                    0LL);
                  return;
                }
                goto LABEL_262;
              }
            }
          }
        }
      }
    }
    goto LABEL_266;
  }
  if ( (WORD1(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
    && !SoundManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  }
  SoundManager__playSystemSe(0, 0LL);
  if ( this->fields.isWaveBattle )
  {
    v218 = this->fields.waveDeckItemList;
    if ( !v218 )
      goto LABEL_262;
    v219 = this->fields.partyNumber - 1;
    if ( v219 >= v218->max_length )
      goto LABEL_264;
    v220 = this->fields.selectItem;
    if ( !v220 )
      goto LABEL_262;
    userSvtEntity = v220->fields.userSvtEntity;
    if ( !userSvtEntity )
      goto LABEL_262;
    memberIndex = this->fields.memberIndex;
    v223 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
    v224 = v218->m_Items[v219];
    *(_OWORD *)&v300.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v300.fields.fakeValue = v223;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    }
    v299 = v300;
    servantItemInfo = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_45183140(&v299, 0LL);
    if ( !v224 )
      goto LABEL_262;
    PartyListViewItem__SetEquip(v224, memberIndex, servantItemInfo, 0LL);
  }
  servantItemInfo = (__int64)this->fields.itemList;
  v297 = &this->fields.selectItem;
  if ( !servantItemInfo )
    goto LABEL_262;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v300,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)servantItemInfo,
    (const MethodInfo_3026504 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  v304 = *(System_Collections_Generic_List_Enumerator_T__o *)&v300.fields.currentCryptoKey;
  while ( 1 )
  {
    v225 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
             &v304,
             (const MethodInfo_22212CC *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    if ( !v225 )
      break;
    current = v304.fields.current;
    if ( !v304.fields.current
      || (v228 = *(&EquipGraphListViewItem_TypeInfo->_2.bitflags2 + 1),
          *(&v304.fields.current->klass->_2.bitflags2 + 1) < (unsigned int)v228)
      || (EquipGraphListViewItem_c *)v304.fields.current->klass->_2.typeHierarchy[v228 - 1] != EquipGraphListViewItem_TypeInfo )
    {
      sub_B7076C(v225, v226);
    }
    if ( BYTE1(v304.fields.current[9].klass) )
    {
      BYTE1(v304.fields.current[9].klass) = 0;
      klass_high = HIDWORD(current[9].klass);
      if ( klass_high != this->fields.memberIndex && (klass_high & 0x80000000) == 0 )
      {
        v230 = this->fields.baseCost;
        goto LABEL_208;
      }
      if ( SHIDWORD(current[14].monitor) > 0 || LOBYTE(current[15].monitor) )
      {
        v230 = this->fields.baseCost;
        if ( (klass_high & 0x80000000) != 0 )
        {
          LODWORD(monitor) = 0;
          goto LABEL_211;
        }
LABEL_208:
        monitor = current[7].monitor;
        if ( monitor )
          LODWORD(monitor) = monitor[38];
LABEL_211:
        this->fields.baseCost = (_DWORD)monitor + v230;
        v232 = (UnityEngine_Object_o *)current[6].monitor;
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        v233 = UnityEngine_Object__op_Inequality(v232, 0LL, 0LL);
        if ( v233 )
        {
          v235 = current[6].monitor;
          if ( !v235
            || (v236 = *(&EquipGraphListViewObject_TypeInfo->_2.bitflags2 + 1),
                *(unsigned __int8 *)(*(_QWORD *)v235 + 300LL) < (unsigned int)v236)
            || *(EquipGraphListViewObject_c **)(*(_QWORD *)(*(_QWORD *)v235 + 200LL) + 8 * v236 - 8) != EquipGraphListViewObject_TypeInfo )
          {
            sub_B7076C(v233, v234);
          }
          v237 = *(&EquipGraphListViewObject_TypeInfo->_2.bitflags2 + 1);
          if ( *(unsigned __int8 *)(*(_QWORD *)v235 + 300LL) >= (unsigned int)v237 )
          {
            if ( *(EquipGraphListViewObject_c **)(*(_QWORD *)(*(_QWORD *)v235 + 200LL) + 8 * v237 - 8) == EquipGraphListViewObject_TypeInfo )
              v238 = (EquipGraphListViewObject_o *)current[6].monitor;
            else
              v238 = 0LL;
          }
          else
          {
            v238 = 0LL;
          }
          UnityEngine_Vector3__get_zero(0LL);
          if ( (byte_4355055 & 1) == 0 )
          {
            sub_B70694(&EquipGraphListViewItem_TypeInfo);
            byte_4355055 = 1;
          }
          EquipGraphListViewObject__SetupDisp(v238, v239);
        }
      }
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v304,
    (const MethodInfo_22212C8 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
  if ( !*v297 )
    goto LABEL_262;
  (*v297)->fields.isBase = 1;
  v240 = this->fields.selectItem;
  if ( !v240 )
    goto LABEL_262;
  v241 = v240->fields.userSvtEntity;
  if ( !v241 )
    goto LABEL_262;
  v242 = *(_OWORD *)&v241->fields.id.fields.fakeValue;
  v243 = this->fields.servantItemInfo;
  *(_OWORD *)&v300.fields.currentCryptoKey = *(_OWORD *)&v241->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v300.fields.fakeValue = v242;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v298 = v300;
  servantItemInfo = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_45183140(&v298, 0LL);
  if ( !v243 )
    goto LABEL_262;
  v60 = servantItemInfo;
  servantItemInfo = (__int64)v243;
LABEL_64:
  EquipGraphServantItem__SetEquipTarget((EquipGraphServantItem_o *)servantItemInfo, v60, v25);
  servantItemInfo = (__int64)this->fields.servantItemDraw;
  if ( !servantItemInfo )
    goto LABEL_262;
  EquipGraphServantItemDraw__SetItem((EquipGraphServantItemDraw_o *)servantItemInfo, this->fields.servantItemInfo, v61);
  EquipGraphListViewManager__RefrashListDisp(this, v62);
  if ( callback )
  {
    p_selectItemCallbackFunc->klass = 0LL;
    sub_B70630((BattleServantConfConponent_o *)&this->fields.selectItemCallbackFunc, 0LL, v63, v64, v65, v66, v67, v68);
    v58 = callback;
LABEL_67:
    System_Action__Invoke(v58, 0LL);
  }
}


void __fastcall EquipGraphListViewManager__SetFilterButtonImage(
        EquipGraphListViewManager_o *this,
        const MethodInfo *method)
{
  ListViewSort_o *sort; // x0
  UISprite_o *filterSprite; // x19
  System_String_o **v5; // x8

  if ( (byte_4355045 & 1) == 0 )
  {
    sub_B70694(&StringLiteral_17249/*"btn_filter_on"*/);
    sub_B70694(&StringLiteral_17248/*"btn_filter"*/);
    byte_4355045 = 1;
  }
  sort = this->fields.sort;
  if ( !sort
    || (filterSprite = this->fields.filterSprite,
        sort = (ListViewSort_o *)ListViewSort__CheckFilterDefaultAll(sort, -1, 0LL),
        !filterSprite) )
  {
    sub_B7076C(sort, method);
  }
  v5 = (System_String_o **)&StringLiteral_17248/*"btn_filter"*/;
  if ( ((unsigned __int8)sort & 1) == 0 )
    v5 = (System_String_o **)&StringLiteral_17249/*"btn_filter_on"*/;
  UISprite__set_spriteName(filterSprite, *v5, 0LL);
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
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.callbackFunc,
    (System_Int32_array **)callback,
    (System_String_array **)callback,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  EquipGraphListViewManager__SetMode_31332316(this, mode, v10);
}


void __fastcall EquipGraphListViewManager__SetMode_31332316(
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
    sub_B7076C(servantItemDraw, v5);
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
      EquipGraphListViewManager__RequestListObject_31332576(this, v9, v8);
      break;
  }
}


void __fastcall EquipGraphListViewManager__SetMode_31332520(
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
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.callbackFunc2,
    (System_Int32_array **)callback,
    (System_String_array **)callback,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  EquipGraphListViewManager__SetMode_31332316(this, mode, v10);
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
  if ( (byte_435503B & 1) == 0 )
  {
    this = (EquipGraphListViewManager_o *)sub_B70694(&EquipGraphListViewObject_TypeInfo);
    byte_435503B = 1;
  }
  if ( !obj
    || (v6 = *(&EquipGraphListViewObject_TypeInfo->_2.bitflags2 + 1), *(&obj->klass->_2.bitflags2 + 1) < (unsigned int)v6)
    || (EquipGraphListViewObject_c *)obj->klass->_2.typeHierarchy[v6 - 1] != EquipGraphListViewObject_TypeInfo )
  {
    sub_B7076C(this, obj);
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
  UnityEngine_Object_o *sortKindLabel; // x20
  __int64 v4; // x1
  ListViewSort_o *sort; // x0
  UILabel_o *v6; // x20
  UnityEngine_Object_o *sortOrderSprite; // x20
  struct ListViewSort_o *v8; // x8
  int32_t sortKind; // w9
  System_String_o **v10; // x8
  struct ListViewSort_o *v11; // x8
  _BOOL4 isAscendingOrder; // w8
  System_String_o **v13; // x9
  System_String_o **v14; // x10
  System_String_o **v15; // x8
  struct ListViewSort_o *v16; // x8
  System_String_o **v17; // x8
  UnityEngine_Object_o *bonusFilterKindLabel; // x20
  UILabel_o *v19; // x20
  System_Int32_array *bonusEventIdList; // x1

  if ( (byte_435504A & 1) == 0 )
  {
    sub_B70694(&UnityEngine_Object_TypeInfo);
    sub_B70694(&StringLiteral_17277/*"btn_sort_up"*/);
    sub_B70694(&StringLiteral_17361/*"btn_txt_up"*/);
    sub_B70694(&StringLiteral_17317/*"btn_txt_new"*/);
    sub_B70694(&StringLiteral_17307/*"btn_txt_down"*/);
    sub_B70694(&StringLiteral_17324/*"btn_txt_old"*/);
    sub_B70694(&StringLiteral_17274/*"btn_sort_down"*/);
    byte_435504A = 1;
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
    v6 = this->fields.sortKindLabel;
    sort = (ListViewSort_o *)ListViewSort__GetSortKindButtonText(sort, 0LL);
    if ( !v6 )
      goto LABEL_45;
    UILabel__set_text(v6, (System_String_o *)sort, 0LL);
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
    v8 = this->fields.sort;
    if ( !v8 )
      goto LABEL_45;
    sortKind = v8->fields.sortKind;
    if ( sortKind == 11 || sortKind == 1 )
    {
      sort = (ListViewSort_o *)this->fields.sortExplanationSprite;
      if ( !sort )
        goto LABEL_45;
      v10 = (System_String_o **)(v8->fields.isAscendingOrder ? &StringLiteral_17324/*"btn_txt_old"*/ : &StringLiteral_17317/*"btn_txt_new"*/);
      UISprite__set_spriteName((UISprite_o *)sort, *v10, 0LL);
      v11 = this->fields.sort;
      if ( !v11 )
        goto LABEL_45;
      sort = (ListViewSort_o *)this->fields.sortOrderSprite;
      if ( !sort )
        goto LABEL_45;
      isAscendingOrder = v11->fields.isAscendingOrder;
      v13 = (System_String_o **)&StringLiteral_17274/*"btn_sort_down"*/;
      v14 = (System_String_o **)&StringLiteral_17277/*"btn_sort_up"*/;
    }
    else
    {
      sort = (ListViewSort_o *)this->fields.sortExplanationSprite;
      if ( !sort )
        goto LABEL_45;
      v15 = (System_String_o **)(v8->fields.isAscendingOrder ? &StringLiteral_17361/*"btn_txt_up"*/ : &StringLiteral_17307/*"btn_txt_down"*/);
      UISprite__set_spriteName((UISprite_o *)sort, *v15, 0LL);
      v16 = this->fields.sort;
      if ( !v16 )
        goto LABEL_45;
      sort = (ListViewSort_o *)this->fields.sortOrderSprite;
      if ( !sort )
        goto LABEL_45;
      isAscendingOrder = v16->fields.isAscendingOrder;
      v13 = (System_String_o **)&StringLiteral_17277/*"btn_sort_up"*/;
      v14 = (System_String_o **)&StringLiteral_17274/*"btn_sort_down"*/;
    }
    if ( isAscendingOrder )
      v17 = v13;
    else
      v17 = v14;
    UISprite__set_spriteName((UISprite_o *)sort, *v17, 0LL);
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
      v19 = this->fields.bonusFilterKindLabel;
      bonusEventIdList = this->fields.bonusEventIdList;
      if ( this->fields.isQuestStart )
      {
        sort = (ListViewSort_o *)ListViewSort__GetBonusKindText_34015976(sort, bonusEventIdList, 0LL, 0, 0LL, 0LL);
        if ( v19 )
        {
LABEL_42:
          UILabel__set_text(v19, (System_String_o *)sort, 0LL);
          return;
        }
      }
      else
      {
        sort = (ListViewSort_o *)ListViewSort__GetBonusKind2Text_34018264(
                                   sort,
                                   bonusEventIdList,
                                   0LL,
                                   0LL,
                                   0LL,
                                   0LL,
                                   0LL);
        if ( v19 )
          goto LABEL_42;
      }
    }
LABEL_45:
    sub_B7076C(sort, v4);
  }
}


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

  if ( (byte_435504D & 1) == 0 )
  {
    sub_B70694(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_435504D = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B7076C(0LL, v5);
  CommonUI__CloseNotificationDialog(Instance, 0LL);
  selectItemCallbackFunc = this->fields.selectItemCallbackFunc;
  if ( selectItemCallbackFunc )
  {
    this->fields.selectItemCallbackFunc = 0LL;
    sub_B70630((BattleServantConfConponent_o *)&this->fields.selectItemCallbackFunc, 0LL, v6, v7, v8, v9, v10, v11);
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

  if ( (byte_435502A & 1) == 0 )
  {
    sub_B70694(&EquipGraphListViewManager_CallbackFunc_TypeInfo);
    byte_435502A = 1;
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
    v8 = sub_B650AC(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_B70A60(v7);
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

  if ( (byte_435502C & 1) == 0 )
  {
    sub_B70694(&System_Action_TypeInfo);
    byte_435502C = 1;
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
    v8 = sub_B650AC(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_B70A60(v7);
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

  if ( (byte_435502E & 1) == 0 )
  {
    sub_B70694(&System_Action_TypeInfo);
    byte_435502E = 1;
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
    v8 = sub_B650AC(p_selectItemCallbackFunc, v7, selectItemCallbackFunc);
    v9 = selectItemCallbackFunc == (System_Delegate_o *)v8;
    selectItemCallbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_B70A60(v7);
  EquipGraphListViewManager__remove_selectItemCallbackFunc(v10, v11, v12);
}


System_Collections_Generic_List_EquipGraphListViewObject__o *__fastcall EquipGraphListViewManager__get_ClippingObjectList(
        EquipGraphListViewManager_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v3; // x19
  __int64 v4; // x1
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  Il2CppObject *current; // x21
  _BOOL8 v7; // x0
  __int64 v8; // x1
  EquipGraphListViewObject_o *Component_srcLineSprite; // x0
  const MethodInfo *v10; // x1
  EventMissionProgressRequest_Argument_ProgressData_o *v11; // x21
  ListViewItem_o *Item; // x0
  __int64 v13; // x1
  _BOOL8 v14; // x0
  __int64 v15; // x1
  System_Collections_Generic_List_Enumerator_T__o v17; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v18; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4355033 & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_B70694(&Method_UnityEngine_GameObject_GetComponent_EquipGraphListViewObject___);
    sub_B70694(&Method_System_Collections_Generic_List_EquipGraphListViewObject__Add__);
    sub_B70694(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_B70694(&Method_System_Collections_Generic_List_EquipGraphListViewObject___ctor__);
    sub_B70694(&System_Collections_Generic_List_EquipGraphListViewObject__TypeInfo);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    byte_4355033 = 1;
  }
  memset(&v18, 0, sizeof(v18));
  v3 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B70764(System_Collections_Generic_List_EquipGraphListViewObject__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v3,
    (const MethodInfo_30249C4 *)Method_System_Collections_Generic_List_EquipGraphListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_B7076C(0LL, v4);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v17,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)objectList,
    (const MethodInfo_3026504 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v18 = v17;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v18,
            (const MethodInfo_22212CC *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v18.fields.current;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v7 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v7 )
    {
      if ( !current )
        sub_B7076C(v7, v8);
      Component_srcLineSprite = (EquipGraphListViewObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                (UnityEngine_GameObject_o *)current,
                                                                (const MethodInfo_1D4AE28 *)Method_UnityEngine_GameObject_GetComponent_EquipGraphListViewObject___);
      v11 = (EventMissionProgressRequest_Argument_ProgressData_o *)Component_srcLineSprite;
      if ( !Component_srcLineSprite )
        sub_B7076C(0LL, v10);
      Item = (ListViewItem_o *)EquipGraphListViewObject__GetItem(Component_srcLineSprite, v10);
      if ( !Item )
        sub_B7076C(0LL, v13);
      if ( Item->fields.isTermination )
      {
        v14 = ListViewManager__ClippingItem_23985548((ListViewManager_o *)this, Item, 0LL);
        if ( v14 )
        {
          if ( !v3 )
            sub_B7076C(v14, v15);
          goto LABEL_16;
        }
      }
      else
      {
        if ( !v3 )
          sub_B7076C(Item, v13);
LABEL_16:
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v3,
          v11,
          (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_EquipGraphListViewObject__Add__);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v18,
    (const MethodInfo_22212C8 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_EquipGraphListViewObject__o *)v3;
}


System_Collections_Generic_List_EquipGraphListViewObject__o *__fastcall EquipGraphListViewManager__get_ObjectList(
        EquipGraphListViewManager_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v3; // x19
  __int64 v4; // x1
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  Il2CppObject *current; // x20
  _BOOL8 v7; // x0
  __int64 v8; // x1
  EventMissionProgressRequest_Argument_ProgressData_o *Component_srcLineSprite; // x0
  System_Collections_Generic_List_Enumerator_T__o v11; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v12; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_4355032 & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_B70694(&Method_UnityEngine_GameObject_GetComponent_EquipGraphListViewObject___);
    sub_B70694(&Method_System_Collections_Generic_List_EquipGraphListViewObject__Add__);
    sub_B70694(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_B70694(&Method_System_Collections_Generic_List_EquipGraphListViewObject___ctor__);
    sub_B70694(&System_Collections_Generic_List_EquipGraphListViewObject__TypeInfo);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    byte_4355032 = 1;
  }
  memset(&v12, 0, sizeof(v12));
  v3 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B70764(System_Collections_Generic_List_EquipGraphListViewObject__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v3,
    (const MethodInfo_30249C4 *)Method_System_Collections_Generic_List_EquipGraphListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_B7076C(0LL, v4);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v11,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)objectList,
    (const MethodInfo_3026504 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v12 = v11;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v12,
            (const MethodInfo_22212CC *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v12.fields.current;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v7 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v7 )
    {
      if ( !current )
        sub_B7076C(v7, v8);
      Component_srcLineSprite = (EventMissionProgressRequest_Argument_ProgressData_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                                         (UnityEngine_GameObject_o *)current,
                                                                                         (const MethodInfo_1D4AE28 *)Method_UnityEngine_GameObject_GetComponent_EquipGraphListViewObject___);
      if ( !v3 )
        sub_B7076C(Component_srcLineSprite, Component_srcLineSprite);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v3,
        Component_srcLineSprite,
        (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_EquipGraphListViewObject__Add__);
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v12,
    (const MethodInfo_22212C8 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_EquipGraphListViewObject__o *)v3;
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

  if ( (byte_435502B & 1) == 0 )
  {
    sub_B70694(&EquipGraphListViewManager_CallbackFunc_TypeInfo);
    byte_435502B = 1;
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
    v8 = sub_B650AC(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_B70A60(v7);
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

  if ( (byte_435502D & 1) == 0 )
  {
    sub_B70694(&System_Action_TypeInfo);
    byte_435502D = 1;
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
    v8 = sub_B650AC(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_B70A60(v7);
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

  if ( (byte_435502F & 1) == 0 )
  {
    sub_B70694(&System_Action_TypeInfo);
    byte_435502F = 1;
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
    v8 = sub_B650AC(p_selectItemCallbackFunc, v7, selectItemCallbackFunc);
    v9 = selectItemCallbackFunc == (System_Delegate_o *)v8;
    selectItemCallbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_B70A60(v7);
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
  sub_B70630(p_method);
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
  __int64 v9; // x2
  __int64 v11[3]; // [xsp+0h] [xbp-40h] BYREF
  int32_t v12; // [xsp+18h] [xbp-28h] BYREF
  int32_t v13; // [xsp+1Ch] [xbp-24h] BYREF

  v12 = result;
  v13 = kind;
  if ( (byte_434F02B & 1) == 0 )
  {
    sub_B70694(&int_TypeInfo);
    sub_B70694(&EquipGraphListViewManager_ResultKind_TypeInfo);
    byte_434F02B = 1;
  }
  v11[2] = 0LL;
  v11[0] = j_il2cpp_value_box_0(EquipGraphListViewManager_ResultKind_TypeInfo, &v13, *(_QWORD *)&result);
  v11[1] = j_il2cpp_value_box_0(int_TypeInfo, &v12, v9);
  return (System_IAsyncResult_o *)sub_B70638(this, v11, callback, object);
}


void __fastcall EquipGraphListViewManager_CallbackFunc__EndInvoke(
        EquipGraphListViewManager_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B7063C(result, 0LL, method);
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
  __int64 v12; // x8
  unsigned int v13; // w23
  unsigned __int64 v14; // x10
  _DWORD *v15; // x11
  __int64 v16; // x0
  __int64 v17; // x0
  __int64 v18; // x0
  void (__fastcall **v19)(__int64 *, _QWORD, _QWORD, _QWORD); // x0
  EquipGraphListViewManager_CallbackFunc_o *v20; // x8
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
  EquipGraphListViewManager_CallbackFunc_o *v33; // [xsp+18h] [xbp-48h] BYREF

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
    v8 = (EquipGraphListViewManager_CallbackFunc_o **)(v4 + 32);
LABEL_5:
    v9 = 0LL;
    while ( 1 )
    {
      v20 = v8[v9];
      v21 = *(__int64 **)&v20->fields.method;
      v22 = *(_QWORD *)&v20->fields.extra_arg;
      v23 = *(void (__fastcall **)(unsigned int *, _QWORD, __int64))&v20->fields.method_ptr;
      if ( *(__int16 *)(v22 + 72) == -1 )
        sub_B70750(*(_QWORD *)&v20->fields.extra_arg, *(_QWORD *)&kind);
      if ( (sub_B706C4(v22) & 1) == 0 )
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
      v24 = sub_B706BC(v22);
      v25 = sub_B70AC0(v22);
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
            v18 = sub_B08590(v21, v28, v29);
          }
          v17 = *(_QWORD *)(v18 + 8);
        }
        else
        {
          v17 = *(_QWORD *)(*v21 + 16LL * *(unsigned __int16 *)(v22 + 72) + 320);
        }
        v19 = (void (__fastcall **)(__int64 *, _QWORD, _QWORD, _QWORD))sub_B70744(v17, v22);
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
            v16 = sub_B08590(v21, class_0, v10);
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