void __fastcall EquipGraphListViewManager___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  ListViewSort_o *v6; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  __int64 v14; // x1
  __int64 v15; // x2
  ListViewSort_o *v16; // x19
  struct EquipGraphListViewManager_StaticFields *v17; // x0
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7

  if ( (byte_4216DE1 & 1) == 0 )
  {
    sub_B0D8A4(&EquipGraphListViewManager_TypeInfo, v1);
    sub_B0D8A4(&ListViewSort_TypeInfo, v3);
    sub_B0D8A4(&StringLiteral_6074/*"EquipGraph"*/, v4);
    sub_B0D8A4(&StringLiteral_15459/*"WarBoardEquipGraph"*/, v5);
    byte_4216DE1 = 1;
  }
  v6 = (ListViewSort_o *)sub_B0D974(ListViewSort_TypeInfo, v1, v2);
  ListViewSort___ctor_32823364(v6, (System_String_o *)StringLiteral_6074/*"EquipGraph"*/, 3, 0, 0LL);
  static_fields = (BattleServantConfConponent_o *)EquipGraphListViewManager_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v6;
  sub_B0D840(static_fields, (System_Int32_array **)v6, v8, v9, v10, v11, v12, v13);
  v16 = (ListViewSort_o *)sub_B0D974(ListViewSort_TypeInfo, v14, v15);
  ListViewSort___ctor_32823364(v16, (System_String_o *)StringLiteral_15459/*"WarBoardEquipGraph"*/, 3, 0, 0LL);
  v17 = EquipGraphListViewManager_TypeInfo->static_fields;
  v17->warBoardSortStatus = v16;
  sub_B0D840(
    (BattleServantConfConponent_o *)&v17->warBoardSortStatus,
    (System_Int32_array **)v16,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
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
    sub_B0D840(
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
    sub_B0D97C(this);
  }
  ListViewSort__Save((ListViewSort_o *)this, 0LL);
  EquipGraphListViewManager__ModifyList(v9, 1, v13);
  EquipGraphListViewManager__SetMode_28785108(v9, 2, v14);
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
  System_String_array **v36; // x2
  System_String_array **v37; // x3
  System_Boolean_array **v38; // x4
  System_Int32_array **v39; // x5
  System_Int32_array *v40; // x6
  System_Int32_array *v41; // x7
  struct ListViewSort_o *sort; // x8
  unsigned int iconScaleKind; // w8
  struct ListViewItemSeed_o *normalSizeSeed; // x1
  struct System_Int32_array *servantEquipFilterEventIdList; // x9
  struct ListViewSort_o *v46; // x8
  struct System_Int32_array *v47; // x1
  struct System_Int32_array **p_bonusEventIdList; // x0
  struct ListViewSort_o *v49; // x8
  System_Int32_array *bonusEventIdList; // x1
  __int64 v51; // x1
  __int64 v52; // x2
  PartyOrganizationListViewItem_o *v53; // x24
  EquipGraphServantItem_o *v54; // x25
  const MethodInfo *v55; // x2
  System_Int32_array **v56; // x1
  struct EquipGraphServantItem_o **p_servantItemInfo; // x27
  ListViewManager_o *v58; // x25
  System_String_array **v59; // x2
  System_String_array **v60; // x3
  System_Boolean_array **v61; // x4
  System_Int32_array **v62; // x5
  System_Int32_array *v63; // x6
  System_Int32_array *v64; // x7
  const MethodInfo *v65; // x2
  const MethodInfo *v66; // x2
  struct EquipGraphServantItem_o *servantItemInfo; // x8
  struct ServantEntity_o *equipServantEntity; // x9
  __int64 v69; // x24
  UserServantEntity_array *ServantEquipList; // x0
  UnityEngine_Object_o *infoDataLabel; // x26
  UserServantEntity_array *v72; // x19
  UILabel_o *monitor; // x27
  PartyListViewItem_array *v74; // x25
  System_String_o *v75; // x28
  Il2CppObject *v76; // x26
  Il2CppObject *v77; // x0
  const MethodInfo *v78; // x1
  __int64 v79; // x8
  UserServantEntity_array *v80; // x20
  unsigned __int64 v81; // x23
  UserServantEntity_o **m_Items; // x22
  UserServantEntity_o *v83; // x26
  PartyListViewItem_array *v84; // x24
  __int64 v85; // x1
  __int64 v86; // x2
  __int64 v87; // x28
  struct EquipGraphServantItem_o **v88; // x19
  int32_t memberIndex; // w25
  EquipGraphListViewItem_o *v90; // x0
  int64_t v91; // x3
  EventMissionProgressRequest_Argument_ProgressData_o *v92; // x27
  int64_t v93; // x4
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x8
  UILabel_o *emptyMessageLabel; // x20
  System_String_o **v96; // x8
  System_String_o *v97; // x21
  const MethodInfo *v98; // x1
  const MethodInfo *v99; // x1
  __int64 v100; // x0
  int32_t memberIdx; // [xsp+0h] [xbp-80h]
  const MethodInfo *v102; // [xsp+8h] [xbp-78h]
  struct EquipGraphServantItem_o **v103; // [xsp+18h] [xbp-68h]
  PartyListViewItem_o *v104; // [xsp+18h] [xbp-68h]
  EquipGraphListViewManager_o *v105; // [xsp+20h] [xbp-60h]
  int v106; // [xsp+28h] [xbp-58h] BYREF
  int v107; // [xsp+2Ch] [xbp-54h] BYREF

  v11 = baseDeckItemList;
  if ( (byte_4216DC9 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_UserServantMaster___, baseDeckItemList);
    sub_B0D8A4(&EquipGraphListViewItem_TypeInfo, v13);
    sub_B0D8A4(&EquipGraphListViewManager_TypeInfo, v14);
    sub_B0D8A4(&EquipGraphServantItem_TypeInfo, v15);
    sub_B0D8A4(&int_TypeInfo, v16);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ListViewItem__Add__, v17);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v18);
    sub_B0D8A4(&LocalizationManager_TypeInfo, v19);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v20);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v21);
    sub_B0D8A4(&StringLiteral_11718/*"SERVANT_EQUIP_EMPTY"*/, v22);
    sub_B0D8A4(&StringLiteral_11913/*"SERVANT_SORT_FILTER_RESULT_EMPTY"*/, v23);
    sub_B0D8A4(&StringLiteral_12507/*"SUM_INFO"*/, v24);
    byte_4216DC9 = 1;
  }
  this->fields.waveDeckItemList = v11;
  sub_B0D840(
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
  sub_B0D840(
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
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.seed,
    (System_Int32_array **)normalSizeSeed,
    v36,
    v37,
    v38,
    v39,
    v40,
    v41);
LABEL_17:
  this->fields.memberIndex = member;
  if ( setupInfo )
  {
    this->fields.isQuestStart = setupInfo->fields.isQuestStart;
    servantEquipFilterEventIdList = setupInfo->fields.servantEquipFilterEventIdList;
    v46 = this->fields.sort;
    if ( servantEquipFilterEventIdList )
      LOBYTE(servantEquipFilterEventIdList) = servantEquipFilterEventIdList->max_length != 0;
    if ( !v46 )
      goto LABEL_71;
    v46->fields.isBonusKind = (char)servantEquipFilterEventIdList;
    v47 = setupInfo->fields.servantEquipFilterEventIdList;
    p_bonusEventIdList = &this->fields.bonusEventIdList;
    this->fields.bonusEventIdList = v47;
  }
  else
  {
    v49 = this->fields.sort;
    this->fields.isQuestStart = 1;
    if ( !v49 )
      goto LABEL_71;
    p_bonusEventIdList = &this->fields.bonusEventIdList;
    v47 = 0LL;
    v49->fields.isBonusKind = 0;
    this->fields.bonusEventIdList = 0LL;
  }
  sub_B0D840(
    (BattleServantConfConponent_o *)p_bonusEventIdList,
    (System_Int32_array **)v47,
    v36,
    v37,
    v38,
    v39,
    v40,
    v41);
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
  v53 = (PartyOrganizationListViewItem_o *)servantItemDraw;
  if ( !*(_BYTE *)(servantItemDraw + 128) )
  {
    v105 = this;
    v54 = (EquipGraphServantItem_o *)sub_B0D974(EquipGraphServantItem_TypeInfo, v51, v52);
    EquipGraphServantItem___ctor(v54, v53, v55);
    v56 = (System_Int32_array **)v54;
    p_servantItemInfo = &this->fields.servantItemInfo;
    this->fields.servantItemInfo = v54;
    v58 = (ListViewManager_o *)this;
    sub_B0D840((BattleServantConfConponent_o *)&this->fields.servantItemInfo, v56, v59, v60, v61, v62, v63, v64);
    servantItemDraw = (__int64)this->fields.servantItemDraw;
    if ( !servantItemDraw )
      goto LABEL_71;
    EquipGraphServantItemDraw__SetItem(
      (EquipGraphServantItemDraw_o *)servantItemDraw,
      this->fields.servantItemInfo,
      v65);
    servantItemDraw = (__int64)this->fields.servantItemDraw;
    if ( !servantItemDraw )
      goto LABEL_71;
    EquipGraphServantItemDraw__SetInput((EquipGraphServantItemDraw_o *)servantItemDraw, 0, v66);
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
    v69 = servantItemDraw;
    this->fields.maxWave = *(_QWORD *)&v11->max_length;
    servantItemDraw = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !servantItemDraw )
      goto LABEL_71;
    servantItemDraw = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                 (DataManager_o *)servantItemDraw,
                                 (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_UserServantMaster___);
    if ( !servantItemDraw )
      goto LABEL_71;
    ServantEquipList = UserServantMaster__getServantEquipList((UserServantMaster_o *)servantItemDraw, 0LL);
    infoDataLabel = (UnityEngine_Object_o *)this->fields.infoDataLabel;
    v72 = ServantEquipList;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(infoDataLabel, 0LL, 0LL) )
    {
      v103 = p_servantItemInfo;
      monitor = (UILabel_o *)v58[1].monitor;
      v74 = v11;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      servantItemDraw = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_12507/*"SUM_INFO"*/, 0LL);
      if ( !v72 )
        goto LABEL_71;
      v75 = (System_String_o *)servantItemDraw;
      v107 = *(_QWORD *)&v72->max_length;
      servantItemDraw = j_il2cpp_value_box_0(int_TypeInfo, &v107);
      if ( !v69 )
        goto LABEL_71;
      v76 = (Il2CppObject *)servantItemDraw;
      v106 = *(_DWORD *)(v69 + 148);
      v77 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v106);
      servantItemDraw = (__int64)System_String__Format_43845440(v75, v76, v77, 0LL);
      if ( !monitor )
        goto LABEL_71;
      UILabel__set_text(monitor, (System_String_o *)servantItemDraw, 0LL);
      v11 = v74;
      p_servantItemInfo = v103;
      v58 = (ListViewManager_o *)v105;
    }
    servantItemDraw = (__int64)v58[1].fields.emptyMessageLabel;
    if ( !servantItemDraw )
      goto LABEL_71;
    servantItemDraw = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)servantItemDraw, 0LL);
    if ( !*p_sort )
      goto LABEL_71;
    if ( !servantItemDraw )
      goto LABEL_71;
    v104 = partyItem;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)servantItemDraw, (*p_sort)->fields.isBonusKind, 0LL);
    ListViewManager__CreateList(v58, 0, 0LL);
    if ( !v72 )
      goto LABEL_71;
    v79 = *(_QWORD *)&v72->max_length;
    if ( (int)v79 >= 1 )
    {
      v80 = v72;
      v81 = 0LL;
      m_Items = v72->m_Items;
      while ( 1 )
      {
        if ( v81 >= (unsigned int)v79 )
        {
          v100 = sub_B0D9A8(servantItemDraw);
          sub_B0D948(v100, 0LL);
        }
        servantItemDraw = (__int64)*p_servantItemInfo;
        if ( !*p_servantItemInfo )
          break;
        v83 = m_Items[v81];
        v84 = v11;
        servantItemDraw = EquipGraphServantItem__get_EquipUserSvtId((EquipGraphServantItem_o *)servantItemDraw, v78);
        if ( !*p_servantItemInfo )
          break;
        v87 = servantItemDraw;
        v88 = p_servantItemInfo;
        memberIndex = v105->fields.memberIndex;
        v90 = (EquipGraphListViewItem_o *)sub_B0D974(EquipGraphListViewItem_TypeInfo, v85, v86);
        memberIdx = memberIndex;
        v58 = (ListViewManager_o *)v105;
        v91 = v87;
        v92 = (EventMissionProgressRequest_Argument_ProgressData_o *)v90;
        v11 = v84;
        EquipGraphListViewItem___ctor(v90, v81, v83, v91, v93, v84, v104, setupInfo, memberIdx, v102);
        servantItemDraw = (__int64)v105->fields.itemList;
        if ( !servantItemDraw )
          break;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)servantItemDraw,
          v92,
          (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
        LODWORD(v79) = v80->max_length;
        ++v81;
        p_servantItemInfo = v88;
        if ( (__int64)v81 >= (int)v79 )
          goto LABEL_61;
      }
LABEL_71:
      sub_B0D97C(servantItemDraw);
    }
LABEL_61:
    itemList = v58->fields.itemList;
    if ( !itemList )
      goto LABEL_71;
    emptyMessageLabel = v58->fields.emptyMessageLabel;
    v96 = (System_String_o **)(itemList->fields._size <= 0 ? &StringLiteral_11718/*"SERVANT_EQUIP_EMPTY"*/ : &StringLiteral_11913/*"SERVANT_SORT_FILTER_RESULT_EMPTY"*/);
    v97 = *v96;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    servantItemDraw = (__int64)LocalizationManager__Get(v97, 0LL);
    if ( !emptyMessageLabel )
      goto LABEL_71;
    UILabel__set_text(emptyMessageLabel, (System_String_o *)servantItemDraw, 0LL);
    EquipGraphListViewManager__RefrashListDisp((EquipGraphListViewManager_o *)v58, v98);
    ListViewManager__SortItem(v58, -1, 0, -1, 0LL);
    EquipGraphListViewManager__SetFilterButtonImage((EquipGraphListViewManager_o *)v58, v99);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EquipGraphListViewManager__CreateList_28780860(
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
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  unsigned int iconScaleKind; // w8
  struct ListViewItemSeed_o *normalSizeSeed; // x1
  struct System_Int32_array *servantEquipFilterEventIdList; // x9
  struct ListViewSort_o *sort; // x8
  struct System_Int32_array *v38; // x1
  struct System_Int32_array **p_bonusEventIdList; // x0
  struct ListViewSort_o *v40; // x8
  System_Int32_array *bonusEventIdList; // x1
  __int64 v42; // x1
  __int64 v43; // x2
  PartyOrganizationListViewItem_o *v44; // x23
  EquipGraphServantItem_o *v45; // x24
  const MethodInfo *v46; // x2
  struct EquipGraphServantItem_o **p_servantItemInfo; // x23
  System_String_array **v48; // x2
  System_String_array **v49; // x3
  System_Boolean_array **v50; // x4
  System_Int32_array **v51; // x5
  System_Int32_array *v52; // x6
  System_Int32_array *v53; // x7
  const MethodInfo *v54; // x2
  const MethodInfo *v55; // x2
  struct EquipGraphServantItem_o *servantItemInfo; // x8
  struct ServantEntity_o *equipServantEntity; // x9
  __int64 v58; // x24
  UserServantEntity_array *ServantEquipList; // x0
  UnityEngine_Object_o *infoDataLabel; // x26
  UserServantEntity_array *v61; // x25
  UILabel_o *v62; // x26
  System_String_o *v63; // x27
  Il2CppObject *v64; // x28
  Il2CppObject *v65; // x0
  const MethodInfo *v66; // x1
  __int64 v67; // x8
  UserServantEntity_array *v68; // x24
  unsigned __int64 v69; // x22
  UserServantEntity_o **m_Items; // x28
  UserServantEntity_o *v71; // x25
  __int64 v72; // x1
  __int64 v73; // x2
  int64_t v74; // x27
  EquipGraphListViewItem_o *v75; // x26
  int64_t v76; // x4
  const MethodInfo *v77; // x7
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x8
  UILabel_o *emptyMessageLabel; // x20
  System_String_o **v80; // x8
  System_String_o *v81; // x21
  const MethodInfo *v82; // x1
  const MethodInfo *v83; // x1
  __int64 v84; // x0
  WarBoardPartyListViewItem_o *partyItema; // [xsp+8h] [xbp-68h]
  EquipGraphListViewManager_o *v86; // [xsp+10h] [xbp-60h]
  int v87; // [xsp+18h] [xbp-58h] BYREF
  int v88; // [xsp+1Ch] [xbp-54h] BYREF

  if ( (byte_4216DCA & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_UserServantMaster___, partyItem);
    sub_B0D8A4(&EquipGraphListViewItem_TypeInfo, v12);
    sub_B0D8A4(&EquipGraphListViewManager_TypeInfo, v13);
    sub_B0D8A4(&EquipGraphServantItem_TypeInfo, v14);
    sub_B0D8A4(&int_TypeInfo, v15);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ListViewItem__Add__, v16);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v17);
    sub_B0D8A4(&LocalizationManager_TypeInfo, v18);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v19);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v20);
    sub_B0D8A4(&StringLiteral_11718/*"SERVANT_EQUIP_EMPTY"*/, v21);
    sub_B0D8A4(&StringLiteral_11913/*"SERVANT_SORT_FILTER_RESULT_EMPTY"*/, v22);
    sub_B0D8A4(&StringLiteral_12507/*"SUM_INFO"*/, v23);
    byte_4216DCA = 1;
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
  sub_B0D840(
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
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.seed,
    (System_Int32_array **)normalSizeSeed,
    v28,
    v29,
    v30,
    v31,
    v32,
    v33);
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
    v38 = setupInfo->fields.servantEquipFilterEventIdList;
    p_bonusEventIdList = &this->fields.bonusEventIdList;
    this->fields.bonusEventIdList = v38;
  }
  else
  {
    v40 = this->fields.sort;
    this->fields.isQuestStart = 1;
    if ( !v40 )
      goto LABEL_70;
    p_bonusEventIdList = &this->fields.bonusEventIdList;
    v38 = 0LL;
    v40->fields.isBonusKind = 0;
    this->fields.bonusEventIdList = 0LL;
  }
  sub_B0D840(
    (BattleServantConfConponent_o *)p_bonusEventIdList,
    (System_Int32_array **)v38,
    v28,
    v29,
    v30,
    v31,
    v32,
    v33);
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
  v44 = (PartyOrganizationListViewItem_o *)MemberItem;
  if ( !*(_BYTE *)(MemberItem + 128) )
  {
    v45 = (EquipGraphServantItem_o *)sub_B0D974(EquipGraphServantItem_TypeInfo, v42, v43);
    EquipGraphServantItem___ctor(v45, v44, v46);
    p_servantItemInfo = &this->fields.servantItemInfo;
    this->fields.servantItemInfo = v45;
    sub_B0D840(
      (BattleServantConfConponent_o *)&this->fields.servantItemInfo,
      (System_Int32_array **)v45,
      v48,
      v49,
      v50,
      v51,
      v52,
      v53);
    MemberItem = (__int64)this->fields.servantItemDraw;
    if ( !MemberItem )
      goto LABEL_70;
    EquipGraphServantItemDraw__SetItem((EquipGraphServantItemDraw_o *)MemberItem, this->fields.servantItemInfo, v54);
    MemberItem = (__int64)this->fields.servantItemDraw;
    if ( !MemberItem )
      goto LABEL_70;
    EquipGraphServantItemDraw__SetInput((EquipGraphServantItemDraw_o *)MemberItem, 0, v55);
    MemberItem = (__int64)UserGameMaster__getSelfUserGame(0LL);
    servantItemInfo = this->fields.servantItemInfo;
    this->fields.maxCost = partyItem->fields.maxCost;
    if ( !servantItemInfo )
      goto LABEL_70;
    equipServantEntity = servantItemInfo->fields.equipServantEntity;
    v58 = MemberItem;
    if ( equipServantEntity )
      LODWORD(equipServantEntity) = equipServantEntity->fields.cost;
    this->fields.baseCost = partyItem->fields.cost - (_DWORD)equipServantEntity;
    MemberItem = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !MemberItem )
      goto LABEL_70;
    partyItema = partyItem;
    MemberItem = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                            (DataManager_o *)MemberItem,
                            (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_UserServantMaster___);
    if ( !MemberItem )
      goto LABEL_70;
    ServantEquipList = UserServantMaster__getServantEquipList((UserServantMaster_o *)MemberItem, 0LL);
    infoDataLabel = (UnityEngine_Object_o *)this->fields.infoDataLabel;
    v61 = ServantEquipList;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v86 = this;
    if ( UnityEngine_Object__op_Inequality(infoDataLabel, 0LL, 0LL) )
    {
      v62 = this->fields.infoDataLabel;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      MemberItem = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_12507/*"SUM_INFO"*/, 0LL);
      if ( !v61 )
        goto LABEL_70;
      v63 = (System_String_o *)MemberItem;
      v88 = *(_QWORD *)&v61->max_length;
      MemberItem = j_il2cpp_value_box_0(int_TypeInfo, &v88);
      if ( !v58 )
        goto LABEL_70;
      v64 = (Il2CppObject *)MemberItem;
      v87 = *(_DWORD *)(v58 + 148);
      v65 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v87);
      MemberItem = (__int64)System_String__Format_43845440(v63, v64, v65, 0LL);
      if ( !v62 )
        goto LABEL_70;
      UILabel__set_text(v62, (System_String_o *)MemberItem, 0LL);
      this = v86;
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
    if ( !v61 )
      goto LABEL_70;
    v67 = *(_QWORD *)&v61->max_length;
    if ( (int)v67 >= 1 )
    {
      v68 = v61;
      v69 = 0LL;
      m_Items = v61->m_Items;
      while ( 1 )
      {
        if ( v69 >= (unsigned int)v67 )
        {
          v84 = sub_B0D9A8(MemberItem);
          sub_B0D948(v84, 0LL);
        }
        MemberItem = (__int64)*p_servantItemInfo;
        if ( !*p_servantItemInfo )
          break;
        v71 = m_Items[v69];
        MemberItem = EquipGraphServantItem__get_EquipUserSvtId((EquipGraphServantItem_o *)MemberItem, v66);
        if ( !*p_servantItemInfo )
          break;
        v74 = MemberItem;
        v75 = (EquipGraphListViewItem_o *)sub_B0D974(EquipGraphListViewItem_TypeInfo, v72, v73);
        EquipGraphListViewItem___ctor_28765988(v75, v69, v71, v74, v76, partyItema, setupInfo, v77);
        this = v86;
        MemberItem = (__int64)v86->fields.itemList;
        if ( !MemberItem )
          break;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)MemberItem,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v75,
          (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
        LODWORD(v67) = v68->max_length;
        if ( (__int64)++v69 >= (int)v67 )
          goto LABEL_59;
      }
LABEL_70:
      sub_B0D97C(MemberItem);
    }
LABEL_59:
    itemList = this->fields.itemList;
    if ( !itemList )
      goto LABEL_70;
    emptyMessageLabel = this->fields.emptyMessageLabel;
    v80 = (System_String_o **)(itemList->fields._size <= 0 ? &StringLiteral_11718/*"SERVANT_EQUIP_EMPTY"*/ : &StringLiteral_11913/*"SERVANT_SORT_FILTER_RESULT_EMPTY"*/);
    v81 = *v80;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    MemberItem = (__int64)LocalizationManager__Get(v81, 0LL);
    if ( !emptyMessageLabel )
      goto LABEL_70;
    UILabel__set_text(emptyMessageLabel, (System_String_o *)MemberItem, 0LL);
    EquipGraphListViewManager__RefrashListDisp(this, v82);
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
    EquipGraphListViewManager__SetFilterButtonImage(this, v83);
  }
}


void __fastcall EquipGraphListViewManager__DeleteContinueData(const MethodInfo *method)
{
  __int64 v1; // x1
  EquipGraphListViewManager_c *v2; // x0
  ListViewSort_o *sortStatus; // x0

  if ( (byte_4216DC5 & 1) == 0 )
  {
    sub_B0D8A4(&EquipGraphListViewManager_TypeInfo, v1);
    byte_4216DC5 = 1;
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
    sub_B0D97C(sortStatus);
  }
  ListViewSort__DeleteContinueData(sortStatus, 0LL);
}


void __fastcall EquipGraphListViewManager__DestroyList(EquipGraphListViewManager_o *this, const MethodInfo *method)
{
  ListViewSort_o *sort; // x0
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7

  ListViewManager__DestroyList((ListViewManager_o *)this, 0LL);
  sort = this->fields.sort;
  if ( !sort )
    sub_B0D97C(0LL);
  ListViewSort__Save(sort, 0LL);
  this->fields.bonusEventIdList = 0LL;
  sub_B0D840((BattleServantConfConponent_o *)&this->fields.bonusEventIdList, 0LL, v4, v5, v6, v7, v8, v9);
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
  Il2CppObject *v26; // x27
  __int64 v27; // x10
  int klass_high; // w9
  int32_t baseCost; // w8
  _DWORD *monitor; // x9
  UnityEngine_Object_o *v31; // x21
  _BOOL8 v32; // x0
  void *v33; // x8
  __int64 v34; // x11
  __int64 v35; // x11
  EquipGraphListViewObject_o *v36; // x21
  const MethodInfo *v37; // x1
  struct PartyListViewItem_array **p_waveDeckItemList; // x20
  struct PartyListViewItem_array *v39; // x26
  __int64 v40; // x8
  unsigned __int64 v41; // x27
  PartyListViewItem_o *v42; // x20
  int32_t i; // w21
  struct EquipGraphListViewItem_o *v44; // x8
  struct ServantEntity_o *servantEntity; // x8
  PartyOrganizationListViewItem_o *v46; // x22
  __int64 v47; // x23
  __int64 v48; // x24
  int v49; // w23
  struct PartyListViewItem_array *waveDeckItemList; // x9
  int v51; // w10
  struct PartyListViewItem_array *v52; // x8
  int v53; // w9
  struct EquipGraphListViewItem_o *v54; // x10
  struct UserServantEntity_o *userSvtEntity; // x10
  int32_t memberIndex; // w21
  __int128 v57; // q1
  PartyListViewItem_o *v58; // x20
  _BOOL8 v59; // x0
  const MethodInfo *v60; // x4
  EquipGraphListViewItem_o *current; // x22
  __int64 v62; // x10
  UnityEngine_Object_o *viewObject; // x23
  _BOOL8 v64; // x0
  struct ListViewObject_o *v65; // x8
  __int64 v66; // x11
  __int64 v67; // x11
  EquipGraphListViewObject_o *v68; // x22
  const MethodInfo *v69; // x1
  struct EquipGraphListViewItem_o *v70; // x8
  struct EquipGraphListViewItem_o *v71; // x8
  struct ServantEntity_o *v72; // x10
  struct UserServantEntity_o *v73; // x8
  __int128 v74; // q1
  EquipGraphServantItem_o *servantItemInfo; // x20
  const MethodInfo *v76; // x2
  const MethodInfo *v77; // x2
  struct EquipGraphListViewItem_o *v78; // x8
  UnityEngine_Object_o *v79; // x20
  const MethodInfo *v80; // x1
  struct EquipGraphListViewItem_o *v81; // x8
  EquipGraphListViewObject_o *v82; // x20
  __int64 v83; // x10
  const MethodInfo *v84; // x1
  System_Action_o *selectItemCallbackFunc; // x20
  __int64 v86; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v87; // [xsp+10h] [xbp-F0h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v88; // [xsp+38h] [xbp-C8h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v89; // [xsp+50h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v90; // [xsp+70h] [xbp-90h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v91; // [xsp+90h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v92; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o EquipSvtId; // 0:x0.16

  if ( (byte_4216DD7 & 1) == 0 )
  {
    sub_B0D8A4(&BalanceConfig_TypeInfo, result);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v7);
    sub_B0D8A4(&EquipGraphListViewItem_TypeInfo, v8);
    sub_B0D8A4(&EquipGraphListViewObject_TypeInfo, v9);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v10);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v11);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v12);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v13);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v14);
    byte_4216DD7 = 1;
  }
  memset(&v91, 0, sizeof(v91));
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
        v39 = *p_waveDeckItemList;
        if ( !*p_waveDeckItemList )
          goto LABEL_131;
        v40 = *(_QWORD *)&v39->max_length;
        if ( (int)v40 >= 1 )
        {
          v41 = 0LL;
          do
          {
            if ( v41 >= (unsigned int)v40 )
              goto LABEL_136;
            v42 = v39->m_Items[v41];
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
              if ( !v42 )
                goto LABEL_131;
              Instance = (int64_t)PartyListViewItem__GetMember(v42, i, 0LL);
              v44 = this->fields.selectItem;
              if ( !v44 )
                goto LABEL_131;
              servantEntity = v44->fields.servantEntity;
              if ( !servantEntity )
                goto LABEL_131;
              v46 = (PartyOrganizationListViewItem_o *)Instance;
              v48 = *(_QWORD *)&servantEntity->fields.id.fields.currentCryptoKey;
              v47 = *(_QWORD *)&servantEntity->fields.id.fields.fakeValue;
              if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
              }
              *(_QWORD *)&v92.fields.currentCryptoKey = v48;
              *(_QWORD *)&v92.fields.fakeValue = v47;
              Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v92, 0LL);
              if ( !v46 )
                goto LABEL_131;
              v49 = Instance;
              EquipSvtId = PartyOrganizationListViewItem__get_EquipSvtId(v46, 0LL);
              if ( v49 == CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(EquipSvtId, 0LL) )
                PartyListViewItem__SetEquip(v42, i, 0LL, 0LL);
            }
            LODWORD(v40) = v39->max_length;
            ++v41;
          }
          while ( (__int64)v41 < (int)v40 );
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
        sub_B0D97C(Instance);
      v51 = selectItem->fields._OrganizedWave_k__BackingField - 1;
      if ( v51 >= waveDeckItemList->max_length )
      {
LABEL_136:
        v86 = sub_B0D9A8(Instance);
        sub_B0D948(v86, 0LL);
      }
      Instance = (int64_t)waveDeckItemList->m_Items[v51];
      if ( !Instance )
        goto LABEL_131;
      p_waveDeckItemList = &this->fields.waveDeckItemList;
      PartyListViewItem__SetEquip((PartyListViewItem_o *)Instance, selectItem->fields.wearerMember, v24, 0LL);
    }
    v52 = *p_waveDeckItemList;
    if ( !*p_waveDeckItemList )
      goto LABEL_131;
    v53 = this->fields.partyNumber - 1;
    if ( v53 < v52->max_length )
    {
      v54 = this->fields.selectItem;
      if ( v54 )
      {
        userSvtEntity = v54->fields.userSvtEntity;
        if ( userSvtEntity )
        {
          memberIndex = this->fields.memberIndex;
          v57 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
          v58 = v52->m_Items[v53];
          *(_OWORD *)&v90.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
          *(_OWORD *)&v90.fields.fakeValue = v57;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          }
          v89 = v90;
          Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44165732(&v89, 0LL);
          if ( v58 )
          {
            PartyListViewItem__SetEquip(v58, memberIndex, Instance, 0LL);
            Instance = (int64_t)this->fields.itemList;
            if ( Instance )
            {
              System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
                &v88,
                (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)Instance,
                (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
              v91 = v88;
              while ( 1 )
              {
                v59 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                        &v91,
                        (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
                if ( !v59 )
                  break;
                current = (EquipGraphListViewItem_o *)v91.fields.current;
                if ( !v91.fields.current
                  || (v62 = *(&EquipGraphListViewItem_TypeInfo->_2.bitflags2 + 1),
                      *(&v91.fields.current->klass->_2.bitflags2 + 1) < (unsigned int)v62)
                  || (EquipGraphListViewItem_c *)v91.fields.current->klass->_2.typeHierarchy[v62 - 1] != EquipGraphListViewItem_TypeInfo )
                {
                  sub_B0D97C(v59);
                }
                if ( BYTE1(v91.fields.current[9].klass) )
                  LOWORD(v91.fields.current[9].klass) = 0;
                EquipGraphListViewItem__UpdateWaveBattleInfo(
                  current,
                  this->fields.waveDeckItemList,
                  v58,
                  this->fields.memberIndex,
                  v60);
                viewObject = (UnityEngine_Object_o *)current->fields.viewObject;
                if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                }
                v64 = UnityEngine_Object__op_Inequality(viewObject, 0LL, 0LL);
                if ( v64 )
                {
                  v65 = current->fields.viewObject;
                  if ( !v65
                    || (v66 = *(&EquipGraphListViewObject_TypeInfo->_2.bitflags2 + 1),
                        *(&v65->klass->_2.bitflags2 + 1) < (unsigned int)v66)
                    || (EquipGraphListViewObject_c *)v65->klass->_2.typeHierarchy[v66 - 1] != EquipGraphListViewObject_TypeInfo )
                  {
                    sub_B0D97C(v64);
                  }
                  v67 = *(&EquipGraphListViewObject_TypeInfo->_2.bitflags2 + 1);
                  if ( *(&v65->klass->_2.bitflags2 + 1) >= (unsigned int)v67 )
                  {
                    if ( (EquipGraphListViewObject_c *)v65->klass->_2.typeHierarchy[v67 - 1] == EquipGraphListViewObject_TypeInfo )
                      v68 = (EquipGraphListViewObject_o *)current->fields.viewObject;
                    else
                      v68 = 0LL;
                  }
                  else
                  {
                    v68 = 0LL;
                  }
                  UnityEngine_Vector3__get_zero(0LL);
                  if ( (byte_4216DEA & 1) == 0 )
                  {
                    sub_B0D8A4(&EquipGraphListViewItem_TypeInfo, v69);
                    byte_4216DEA = 1;
                  }
                  EquipGraphListViewObject__SetupDisp(v68, v69);
                }
              }
              System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
                &v91,
                (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
              this->fields.baseCost = v58->fields.cost;
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
    (System_Collections_Generic_List_Enumerator_T__o *)&v90,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)Instance,
    (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  v91.fields.current = (Il2CppObject *)v90.fields.fakeValue;
  *(_OWORD *)&v91.fields.list = *(_OWORD *)&v90.fields.currentCryptoKey;
  while ( 1 )
  {
    v25 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v91,
            (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    if ( !v25 )
      break;
    v26 = v91.fields.current;
    if ( !v91.fields.current
      || (v27 = *(&EquipGraphListViewItem_TypeInfo->_2.bitflags2 + 1),
          *(&v91.fields.current->klass->_2.bitflags2 + 1) < (unsigned int)v27)
      || (EquipGraphListViewItem_c *)v91.fields.current->klass->_2.typeHierarchy[v27 - 1] != EquipGraphListViewItem_TypeInfo )
    {
      sub_B0D97C(v25);
    }
    if ( BYTE1(v91.fields.current[9].klass) )
    {
      BYTE1(v91.fields.current[9].klass) = 0;
      klass_high = HIDWORD(v26[9].klass);
      if ( klass_high != this->fields.memberIndex && (klass_high & 0x80000000) == 0 )
      {
        baseCost = this->fields.baseCost;
        goto LABEL_25;
      }
      if ( SHIDWORD(v26[14].monitor) > 0 || BYTE4(v26[15].klass) )
      {
        baseCost = this->fields.baseCost;
        if ( (klass_high & 0x80000000) != 0 )
        {
          LODWORD(monitor) = 0;
          goto LABEL_28;
        }
LABEL_25:
        monitor = v26[7].monitor;
        if ( monitor )
          LODWORD(monitor) = monitor[38];
LABEL_28:
        this->fields.baseCost = (_DWORD)monitor + baseCost;
        v31 = (UnityEngine_Object_o *)v26[6].monitor;
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        v32 = UnityEngine_Object__op_Inequality(v31, 0LL, 0LL);
        if ( v32 )
        {
          v33 = v26[6].monitor;
          if ( !v33
            || (v34 = *(&EquipGraphListViewObject_TypeInfo->_2.bitflags2 + 1),
                *(unsigned __int8 *)(*(_QWORD *)v33 + 300LL) < (unsigned int)v34)
            || *(EquipGraphListViewObject_c **)(*(_QWORD *)(*(_QWORD *)v33 + 200LL) + 8 * v34 - 8) != EquipGraphListViewObject_TypeInfo )
          {
            sub_B0D97C(v32);
          }
          v35 = *(&EquipGraphListViewObject_TypeInfo->_2.bitflags2 + 1);
          if ( *(unsigned __int8 *)(*(_QWORD *)v33 + 300LL) >= (unsigned int)v35 )
          {
            if ( *(EquipGraphListViewObject_c **)(*(_QWORD *)(*(_QWORD *)v33 + 200LL) + 8 * v35 - 8) == EquipGraphListViewObject_TypeInfo )
              v36 = (EquipGraphListViewObject_o *)v26[6].monitor;
            else
              v36 = 0LL;
          }
          else
          {
            v36 = 0LL;
          }
          UnityEngine_Vector3__get_zero(0LL);
          if ( (byte_4216DEA & 1) == 0 )
          {
            sub_B0D8A4(&EquipGraphListViewItem_TypeInfo, v37);
            byte_4216DEA = 1;
          }
          EquipGraphListViewObject__SetupDisp(v36, v37);
        }
      }
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v91,
    (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
LABEL_103:
  v70 = this->fields.selectItem;
  if ( !v70 )
    goto LABEL_131;
  v70->fields.isBase = 1;
  v71 = this->fields.selectItem;
  if ( !v71 )
    goto LABEL_131;
  if ( (v71->fields.wearerMember & 0x80000000) != 0 )
  {
    LODWORD(v72) = 0;
  }
  else
  {
    v72 = v71->fields.servantEntity;
    if ( v72 )
      LODWORD(v72) = v72->fields.cost;
  }
  this->fields.baseCost -= (int)v72;
  v73 = v71->fields.userSvtEntity;
  if ( !v73 )
    goto LABEL_131;
  v74 = *(_OWORD *)&v73->fields.id.fields.fakeValue;
  servantItemInfo = this->fields.servantItemInfo;
  *(_OWORD *)&v90.fields.currentCryptoKey = *(_OWORD *)&v73->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v90.fields.fakeValue = v74;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v87 = v90;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44165732(&v87, 0LL);
  if ( !servantItemInfo )
    goto LABEL_131;
  EquipGraphServantItem__SetEquipTarget(servantItemInfo, Instance, v76);
  Instance = (int64_t)this->fields.servantItemDraw;
  if ( !Instance )
    goto LABEL_131;
  EquipGraphServantItemDraw__SetItem((EquipGraphServantItemDraw_o *)Instance, this->fields.servantItemInfo, v77);
  v78 = this->fields.selectItem;
  if ( !v78 )
    goto LABEL_131;
  v79 = (UnityEngine_Object_o *)v78->fields.viewObject;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  Instance = UnityEngine_Object__op_Inequality(v79, 0LL, 0LL);
  if ( (Instance & 1) != 0 )
  {
    v81 = this->fields.selectItem;
    if ( v81 )
    {
      v82 = (EquipGraphListViewObject_o *)v81->fields.viewObject;
      if ( v82 )
      {
        v83 = *(&EquipGraphListViewObject_TypeInfo->_2.bitflags2 + 1);
        if ( *(&v82->klass->_2.bitflags2 + 1) >= (unsigned int)v83
          && (EquipGraphListViewObject_c *)v82->klass->_2.typeHierarchy[v83 - 1] == EquipGraphListViewObject_TypeInfo )
        {
          UnityEngine_Vector3__get_zero(0LL);
          if ( (byte_4216DEA & 1) == 0 )
          {
            sub_B0D8A4(&EquipGraphListViewItem_TypeInfo, v84);
            byte_4216DEA = 1;
          }
          EquipGraphListViewObject__SetupDisp(v82, v84);
          goto LABEL_127;
        }
      }
    }
    goto LABEL_131;
  }
LABEL_127:
  EquipGraphListViewManager__RefrashListDisp(this, v80);
LABEL_128:
  selectItemCallbackFunc = this->fields.selectItemCallbackFunc;
  if ( selectItemCallbackFunc )
  {
    this->fields.selectItemCallbackFunc = 0LL;
    sub_B0D840((BattleServantConfConponent_o *)&this->fields.selectItemCallbackFunc, 0LL, v17, v18, v19, v20, v21, v22);
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
  __int64 v9; // x1
  __int64 v10; // x2
  System_Action_o *v11; // x21
  __int64 v12; // x0

  if ( (byte_4216DD9 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, isDecide);
    sub_B0D8A4(&Method_EquipGraphListViewManager_EndCloseSelectFilterKind__, v5);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    byte_4216DD9 = 1;
  }
  if ( isDecide )
  {
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
    EquipGraphListViewManager__SetFilterButtonImage(this, v7);
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v11 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v9, v10);
  System_Action___ctor(v11, (Il2CppObject *)this, Method_EquipGraphListViewManager_EndCloseSelectFilterKind__, 0LL);
  if ( !Instance )
    sub_B0D97C(v12);
  CommonUI__CloseServantFilterSelectMenu(Instance, v11, 0LL);
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
  __int64 v8; // x1
  __int64 v9; // x2
  System_Action_o *v10; // x21
  __int64 v11; // x0

  if ( (byte_4216DDD & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, isDecide);
    sub_B0D8A4(&Method_EquipGraphListViewManager_EndCloseSelectSortKind__, v5);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    byte_4216DDD = 1;
  }
  if ( isDecide )
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v10 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v8, v9);
  System_Action___ctor(v10, (Il2CppObject *)this, Method_EquipGraphListViewManager_EndCloseSelectSortKind__, 0LL);
  if ( !Instance )
    sub_B0D97C(v11);
  CommonUI__CloseServantSortSelectMenu(Instance, v10, 0LL);
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
  System_Collections_Generic_List_Enumerator_T__o v20; // [xsp+8h] [xbp-58h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v21; // 0:x0.16

  if ( (byte_4216DE0 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__, *(_QWORD *)&svtId);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v6);
    sub_B0D8A4(&EquipGraphListViewItem_TypeInfo, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v9);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v10);
    byte_4216DE0 = 1;
  }
  memset(&v20, 0, sizeof(v20));
  itemList = this->fields.itemList;
  if ( !itemList )
    sub_B0D97C(0LL);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v20,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)itemList,
    (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  v12 = 0LL;
  while ( 1 )
  {
    v18 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v20,
            (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    if ( !v18 )
      break;
    current = v20.fields.current;
    if ( !v20.fields.current
      || (v14 = *(&EquipGraphListViewItem_TypeInfo->_2.bitflags2 + 1),
          *(&v20.fields.current->klass->_2.bitflags2 + 1) < (unsigned int)v14)
      || (EquipGraphListViewItem_c *)v20.fields.current->klass->_2.typeHierarchy[v14 - 1] != EquipGraphListViewItem_TypeInfo )
    {
      sub_B0D97C(v18);
    }
    if ( (EquipGraphListViewItem_c *)v20.fields.current->klass->_2.typeHierarchy[*(&EquipGraphListViewItem_TypeInfo->_2.bitflags2
                                                                                 + 1)
                                                                               - 1] != EquipGraphListViewItem_TypeInfo )
      current = 0LL;
    klass = current[7].klass;
    if ( !klass )
      sub_B0D97C(v18);
    declaringType = klass->_1.declaringType;
    parent = klass->_1.parent;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v21.fields.currentCryptoKey = declaringType;
    *(_QWORD *)&v21.fields.fakeValue = parent;
    if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v21, 0LL) == svtId )
      ++v12;
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v20,
    (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
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

  if ( (byte_4216DCC & 1) == 0 )
  {
    sub_B0D8A4(&EquipGraphListViewItem_TypeInfo, *(_QWORD *)&index);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v5);
    byte_4216DCC = 1;
  }
  itemList = this->fields.itemList;
  if ( !itemList )
    return 0LL;
  if ( itemList->fields._size <= (unsigned int)index )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
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
    sub_B0D97C(0LL);
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
  __int64 v9; // x11
  int32_t klass_high; // w19
  int v11; // w20
  System_Collections_Generic_List_Enumerator_T__o v13; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4216DD4 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__, method);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v3);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v4);
    sub_B0D8A4(&EquipGraphListViewItem_TypeInfo, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v6);
    byte_4216DD4 = 1;
  }
  memset(&v13, 0, sizeof(v13));
  itemList = this->fields.itemList;
  if ( !itemList )
    sub_B0D97C(0LL);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v13,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)itemList,
    (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  while ( 1 )
  {
    v8 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
           &v13,
           (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    if ( !v8 )
      break;
    if ( !v13.fields.current
      || (v9 = *(&EquipGraphListViewItem_TypeInfo->_2.bitflags2 + 1),
          *(&v13.fields.current->klass->_2.bitflags2 + 1) < (unsigned int)v9)
      || (EquipGraphListViewItem_c *)v13.fields.current->klass->_2.typeHierarchy[v9 - 1] != EquipGraphListViewItem_TypeInfo )
    {
      sub_B0D97C(v8);
    }
    if ( BYTE1(v13.fields.current[9].klass) )
    {
      klass_high = HIDWORD(v13.fields.current[1].klass);
      v11 = 3;
      goto LABEL_12;
    }
  }
  klass_high = 0;
  v11 = 1;
LABEL_12:
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v13,
    (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
  if ( (unsigned int)(v11 + 1) >> 2 )
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
  Il2CppObject *current; // x19
  __int64 v10; // x10
  char v11; // w20
  System_Collections_Generic_List_Enumerator_T__o v13; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4216DD5 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__, method);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v3);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v4);
    sub_B0D8A4(&EquipGraphListViewItem_TypeInfo, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v6);
    byte_4216DD5 = 1;
  }
  memset(&v13, 0, sizeof(v13));
  itemList = this->fields.itemList;
  if ( !itemList )
    sub_B0D97C(0LL);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v13,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)itemList,
    (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  while ( 1 )
  {
    v8 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
           &v13,
           (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    if ( !v8 )
      break;
    current = v13.fields.current;
    if ( !v13.fields.current
      || (v10 = *(&EquipGraphListViewItem_TypeInfo->_2.bitflags2 + 1),
          *(&v13.fields.current->klass->_2.bitflags2 + 1) < (unsigned int)v10)
      || (EquipGraphListViewItem_c *)v13.fields.current->klass->_2.typeHierarchy[v10 - 1] != EquipGraphListViewItem_TypeInfo )
    {
      sub_B0D97C(v8);
    }
    if ( BYTE1(v13.fields.current[9].klass) )
    {
      v11 = 2;
      goto LABEL_12;
    }
  }
  v11 = 0;
  current = 0LL;
LABEL_12:
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v13,
    (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
  if ( ((v11 + 2) & 3) != 0 )
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
  __int64 v15; // x1
  __int64 v16; // x2
  System_Collections_Generic_List_long__o *v17; // x22
  int64_t v18; // x0
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x19
  signed __int64 size; // x24
  unsigned __int64 v27; // x25
  ListViewItem_o *v28; // x8
  __int64 v29; // x11
  ListViewItem_c *klass; // x9
  Il2CppType byval_arg; // q0
  const MethodInfo_2FB5EB0 *v32; // x2
  int64_t v33; // x1
  System_Collections_Generic_List_long__o *v34; // x0
  Il2CppType v35; // q0
  System_Int64_array *v36; // x0
  System_String_array **v37; // x2
  System_String_array **v38; // x3
  System_Boolean_array **v39; // x4
  System_Int32_array **v40; // x5
  System_Int32_array *v41; // x6
  System_Int32_array *v42; // x7
  System_Int64_array *v43; // x0
  System_String_array **v44; // x2
  System_String_array **v45; // x3
  System_Boolean_array **v46; // x4
  System_Int32_array **v47; // x5
  System_Int32_array *v48; // x6
  System_Int32_array *v49; // x7
  System_String_array **v51; // x2
  System_String_array **v52; // x3
  System_Boolean_array **v53; // x4
  System_Int32_array **v54; // x5
  System_Int32_array *v55; // x6
  System_Int32_array *v56; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v58; // [xsp+10h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v59; // [xsp+30h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v60; // [xsp+50h] [xbp-70h]

  if ( (byte_4216DCE & 1) == 0 )
  {
    sub_B0D8A4(&EquipGraphListViewItem_TypeInfo, choiceList);
    sub_B0D8A4(&Method_System_Collections_Generic_List_long__Add__, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_long__ToArray__, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_long___ctor__, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_List_long__get_Count__, v9);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v10);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v11);
    sub_B0D8A4(&System_Collections_Generic_List_long__TypeInfo, v12);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v13);
    byte_4216DCE = 1;
  }
  v14 = (System_Collections_Generic_List_long__o *)sub_B0D974(
                                                     System_Collections_Generic_List_long__TypeInfo,
                                                     choiceList,
                                                     unchoiceList);
  System_Collections_Generic_List_long____ctor(
    v14,
    (const MethodInfo_2FB5154 *)Method_System_Collections_Generic_List_long___ctor__);
  v17 = (System_Collections_Generic_List_long__o *)sub_B0D974(System_Collections_Generic_List_long__TypeInfo, v15, v16);
  System_Collections_Generic_List_long____ctor(
    v17,
    (const MethodInfo_2FB5154 *)Method_System_Collections_Generic_List_long___ctor__);
  itemList = this->fields.itemList;
  if ( !itemList )
    goto LABEL_33;
  size = itemList->fields._size;
  if ( (int)size >= 1 )
  {
    v27 = 0LL;
    do
    {
      if ( v27 >= (unsigned int)itemList->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
      v28 = itemList->fields._items->m_Items[v27];
      if ( !v28 )
        break;
      v29 = *(&EquipGraphListViewItem_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v28->klass->_2.bitflags2 + 1) < (unsigned int)v29
        || (EquipGraphListViewItem_c *)v28->klass->_2.typeHierarchy[v29 - 1] != EquipGraphListViewItem_TypeInfo )
      {
        break;
      }
      klass = v28[1].klass;
      if ( klass && v28[1].fields.isTerminationSpace )
      {
        if ( BYTE5(v28[1].fields.sortStr1) )
        {
          byval_arg = klass->_1.byval_arg;
          *(_OWORD *)&v60.fields.currentCryptoKey = *(_OWORD *)&klass->_1.name;
          *(Il2CppType *)&v60.fields.fakeValue = byval_arg;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          }
          v59 = v60;
          v18 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44165732(&v59, 0LL);
          if ( !v17 )
            break;
          v32 = (const MethodInfo_2FB5EB0 *)Method_System_Collections_Generic_List_long__Add__;
          v33 = v18;
          v34 = v17;
        }
        else
        {
          v35 = klass->_1.byval_arg;
          *(_OWORD *)&v60.fields.currentCryptoKey = *(_OWORD *)&klass->_1.name;
          *(Il2CppType *)&v60.fields.fakeValue = v35;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          }
          v58 = v60;
          v18 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44165732(&v58, 0LL);
          if ( !v14 )
            break;
          v32 = (const MethodInfo_2FB5EB0 *)Method_System_Collections_Generic_List_long__Add__;
          v33 = v18;
          v34 = v14;
        }
        System_Collections_Generic_List_long___Add(v34, v33, v32);
      }
      if ( (__int64)++v27 >= size )
        goto LABEL_28;
      itemList = this->fields.itemList;
    }
    while ( itemList );
LABEL_33:
    sub_B0D97C(v18);
  }
LABEL_28:
  if ( !v14 || !v17 )
    goto LABEL_33;
  if ( v17->fields._size + v14->fields._size < 1 )
  {
    *choiceList = 0LL;
    sub_B0D840((BattleServantConfConponent_o *)choiceList, 0LL, v19, v20, v21, v22, v23, v24);
    *unchoiceList = 0LL;
    sub_B0D840((BattleServantConfConponent_o *)unchoiceList, 0LL, v51, v52, v53, v54, v55, v56);
    return 0;
  }
  else
  {
    v36 = System_Collections_Generic_List_long___ToArray(
            v14,
            (const MethodInfo_2FB7FBC *)Method_System_Collections_Generic_List_long__ToArray__);
    *choiceList = v36;
    sub_B0D840((BattleServantConfConponent_o *)choiceList, (System_Int32_array **)v36, v37, v38, v39, v40, v41, v42);
    v43 = System_Collections_Generic_List_long___ToArray(
            v17,
            (const MethodInfo_2FB7FBC *)Method_System_Collections_Generic_List_long__ToArray__);
    *unchoiceList = v43;
    sub_B0D840((BattleServantConfConponent_o *)unchoiceList, (System_Int32_array **)v43, v44, v45, v46, v47, v48, v49);
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
  __int64 v15; // x1
  __int64 v16; // x2
  System_Collections_Generic_List_long__o *v17; // x22
  int64_t v18; // x0
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x19
  signed __int64 size; // x24
  unsigned __int64 v27; // x25
  ListViewItem_o *v28; // x8
  __int64 v29; // x11
  ListViewItem_c *klass; // x9
  Il2CppType byval_arg; // q0
  const MethodInfo_2FB5EB0 *v32; // x2
  int64_t v33; // x1
  System_Collections_Generic_List_long__o *v34; // x0
  Il2CppType v35; // q0
  System_Int64_array *v36; // x0
  System_String_array **v37; // x2
  System_String_array **v38; // x3
  System_Boolean_array **v39; // x4
  System_Int32_array **v40; // x5
  System_Int32_array *v41; // x6
  System_Int32_array *v42; // x7
  System_Int64_array *v43; // x0
  System_String_array **v44; // x2
  System_String_array **v45; // x3
  System_Boolean_array **v46; // x4
  System_Int32_array **v47; // x5
  System_Int32_array *v48; // x6
  System_Int32_array *v49; // x7
  System_String_array **v51; // x2
  System_String_array **v52; // x3
  System_Boolean_array **v53; // x4
  System_Int32_array **v54; // x5
  System_Int32_array *v55; // x6
  System_Int32_array *v56; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v58; // [xsp+10h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v59; // [xsp+30h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v60; // [xsp+50h] [xbp-70h]

  if ( (byte_4216DCD & 1) == 0 )
  {
    sub_B0D8A4(&EquipGraphListViewItem_TypeInfo, lockList);
    sub_B0D8A4(&Method_System_Collections_Generic_List_long__Add__, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_long__ToArray__, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_long___ctor__, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_List_long__get_Count__, v9);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v10);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v11);
    sub_B0D8A4(&System_Collections_Generic_List_long__TypeInfo, v12);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v13);
    byte_4216DCD = 1;
  }
  v14 = (System_Collections_Generic_List_long__o *)sub_B0D974(
                                                     System_Collections_Generic_List_long__TypeInfo,
                                                     lockList,
                                                     unlockList);
  System_Collections_Generic_List_long____ctor(
    v14,
    (const MethodInfo_2FB5154 *)Method_System_Collections_Generic_List_long___ctor__);
  v17 = (System_Collections_Generic_List_long__o *)sub_B0D974(System_Collections_Generic_List_long__TypeInfo, v15, v16);
  System_Collections_Generic_List_long____ctor(
    v17,
    (const MethodInfo_2FB5154 *)Method_System_Collections_Generic_List_long___ctor__);
  itemList = this->fields.itemList;
  if ( !itemList )
    goto LABEL_33;
  size = itemList->fields._size;
  if ( (int)size >= 1 )
  {
    v27 = 0LL;
    do
    {
      if ( v27 >= (unsigned int)itemList->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
      v28 = itemList->fields._items->m_Items[v27];
      if ( !v28 )
        break;
      v29 = *(&EquipGraphListViewItem_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v28->klass->_2.bitflags2 + 1) < (unsigned int)v29
        || (EquipGraphListViewItem_c *)v28->klass->_2.typeHierarchy[v29 - 1] != EquipGraphListViewItem_TypeInfo )
      {
        break;
      }
      klass = v28[1].klass;
      if ( klass && v28[1].fields.isTermination )
      {
        if ( BYTE4(v28[1].fields.sortStr1) )
        {
          byval_arg = klass->_1.byval_arg;
          *(_OWORD *)&v60.fields.currentCryptoKey = *(_OWORD *)&klass->_1.name;
          *(Il2CppType *)&v60.fields.fakeValue = byval_arg;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          }
          v59 = v60;
          v18 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44165732(&v59, 0LL);
          if ( !v17 )
            break;
          v32 = (const MethodInfo_2FB5EB0 *)Method_System_Collections_Generic_List_long__Add__;
          v33 = v18;
          v34 = v17;
        }
        else
        {
          v35 = klass->_1.byval_arg;
          *(_OWORD *)&v60.fields.currentCryptoKey = *(_OWORD *)&klass->_1.name;
          *(Il2CppType *)&v60.fields.fakeValue = v35;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          }
          v58 = v60;
          v18 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44165732(&v58, 0LL);
          if ( !v14 )
            break;
          v32 = (const MethodInfo_2FB5EB0 *)Method_System_Collections_Generic_List_long__Add__;
          v33 = v18;
          v34 = v14;
        }
        System_Collections_Generic_List_long___Add(v34, v33, v32);
      }
      if ( (__int64)++v27 >= size )
        goto LABEL_28;
      itemList = this->fields.itemList;
    }
    while ( itemList );
LABEL_33:
    sub_B0D97C(v18);
  }
LABEL_28:
  if ( !v14 || !v17 )
    goto LABEL_33;
  if ( v17->fields._size + v14->fields._size < 1 )
  {
    *lockList = 0LL;
    sub_B0D840((BattleServantConfConponent_o *)lockList, 0LL, v19, v20, v21, v22, v23, v24);
    *unlockList = 0LL;
    sub_B0D840((BattleServantConfConponent_o *)unlockList, 0LL, v51, v52, v53, v54, v55, v56);
    return 0;
  }
  else
  {
    v36 = System_Collections_Generic_List_long___ToArray(
            v14,
            (const MethodInfo_2FB7FBC *)Method_System_Collections_Generic_List_long__ToArray__);
    *lockList = v36;
    sub_B0D840((BattleServantConfConponent_o *)lockList, (System_Int32_array **)v36, v37, v38, v39, v40, v41, v42);
    v43 = System_Collections_Generic_List_long___ToArray(
            v17,
            (const MethodInfo_2FB7FBC *)Method_System_Collections_Generic_List_long__ToArray__);
    *unlockList = v43;
    sub_B0D840((BattleServantConfConponent_o *)unlockList, (System_Int32_array **)v43, v44, v45, v46, v47, v48, v49);
    return 1;
  }
}


void __fastcall EquipGraphListViewManager__InitLoad(const MethodInfo *method)
{
  __int64 v1; // x1
  EquipGraphListViewManager_c *v2; // x0
  ListViewSort_o *sortStatus; // x0

  if ( (byte_4216DC6 & 1) == 0 )
  {
    sub_B0D8A4(&EquipGraphListViewManager_TypeInfo, v1);
    byte_4216DC6 = 1;
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
    sub_B0D97C(sortStatus);
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
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x8
  signed __int64 size; // x25
  unsigned int v13; // w27
  int64_t v14; // x26
  __int64 v15; // x8
  System_Int32_array ***v16; // x26
  __int64 v17; // t1
  __int128 v18; // q0
  int64_t v19; // x22
  unsigned __int64 v20; // x21
  struct System_Collections_Generic_List_ListViewItem__o *v21; // x23
  EquipGraphListViewItem_o *v22; // x23
  __int64 v23; // x10
  struct UserServantEntity_o *userSvtEntity; // x8
  __int128 v25; // q0
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  System_Int32_array **v32; // x1
  const MethodInfo *v33; // x1
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

  if ( (byte_4216DCB & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_UserServantMaster___, isIconSizeChange);
    sub_B0D8A4(&EquipGraphListViewItem_TypeInfo, v4);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v6);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v7);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v8);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    byte_4216DCB = 1;
  }
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_52;
  Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_UserServantMaster___);
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
      v35 = sub_B0D9A8(Instance);
      sub_B0D948(v35, 0LL);
    }
    v13 = 0;
    v43 = Instance;
    while ( 1 )
    {
      v14 = Instance + 8LL * (int)v13;
      v17 = *(_QWORD *)(v14 + 32);
      v16 = (System_Int32_array ***)(v14 + 32);
      v15 = v17;
      if ( !v17 )
        break;
      v18 = *(_OWORD *)(v15 + 32);
      *(_OWORD *)&v46.fields.currentCryptoKey = *(_OWORD *)(v15 + 16);
      *(_OWORD *)&v46.fields.fakeValue = v18;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      }
      v45 = v46;
      Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44165732(&v45, 0LL);
      if ( (int)size >= 1 )
      {
        v19 = Instance;
        v20 = 0LL;
        while ( 1 )
        {
          v21 = this->fields.itemList;
          if ( !v21 )
            goto LABEL_52;
          if ( v20 >= (unsigned int)v21->fields._size )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
          v22 = (EquipGraphListViewItem_o *)v21->fields._items->m_Items[v20];
          if ( !v22 )
            goto LABEL_52;
          v23 = *(&EquipGraphListViewItem_TypeInfo->_2.bitflags2 + 1);
          if ( *(&v22->klass->_2.bitflags2 + 1) < (unsigned int)v23
            || (EquipGraphListViewItem_c *)v22->klass->_2.typeHierarchy[v23 - 1] != EquipGraphListViewItem_TypeInfo )
          {
            goto LABEL_52;
          }
          userSvtEntity = v22->fields.userSvtEntity;
          if ( userSvtEntity )
          {
            v25 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
            *(_OWORD *)&v46.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
            *(_OWORD *)&v46.fields.fakeValue = v25;
            if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
            }
            v44 = v46;
            Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44165732(&v44, 0LL);
            if ( Instance == v19 )
              break;
          }
          if ( (__int64)++v20 >= size )
            goto LABEL_32;
        }
        if ( v13 >= *(_DWORD *)(v43 + 24) )
          goto LABEL_34;
        v32 = *v16;
        v22->fields.userSvtEntity = (struct UserServantEntity_o *)*v16;
        sub_B0D840((BattleServantConfConponent_o *)&v22->fields.userSvtEntity, v32, v26, v27, v28, v29, v30, v31);
        if ( !isIconSizeChange )
        {
          EquipGraphListViewItem__ModifyLockItem(v22, v33);
          EquipGraphListViewItem__ModifyChoiceItem(v22, v34);
        }
      }
LABEL_32:
      Instance = v43;
      if ( (int)++v13 >= (int)v42 )
        goto LABEL_35;
      if ( v13 >= *(_DWORD *)(v43 + 24) )
        goto LABEL_34;
    }
LABEL_52:
    sub_B0D97C(Instance);
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
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
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
  ListViewSort_o *sort; // x0
  System_Int32_array *bonusEventIdList; // x1

  if ( (byte_4216DDB & 1) == 0 )
  {
    sub_B0D8A4(&SoundManager_TypeInfo, method);
    byte_4216DDB = 1;
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
      sub_B0D97C(0LL);
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
  sub_B0D840((BattleServantConfConponent_o *)&this->fields.callbackFunc, 0LL, v2, v3, v4, v5, v6, v7);
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
    sub_B0D97C(this);
  if ( !equipGraphListMenu->fields.modeKind )
  {
    callbackFunc = this->fields.callbackFunc;
    this->fields.callbackFunc = 0LL;
    sub_B0D840((BattleServantConfConponent_o *)&this->fields.callbackFunc, 0LL, v2, v3, v4, v5, v6, v7);
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
  __int64 v9; // x1
  __int64 v10; // x2
  ServantFilterSelectMenu_CallbackFunc_o *v11; // x22
  __int64 v12; // x0

  if ( (byte_4216DD8 & 1) == 0 )
  {
    sub_B0D8A4(&ServantFilterSelectMenu_CallbackFunc_TypeInfo, method);
    sub_B0D8A4(&Method_EquipGraphListViewManager_EndSelectFilterKind__, v3);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    sub_B0D8A4(&SoundManager_TypeInfo, v5);
    byte_4216DD8 = 1;
  }
  if ( this->fields.isInput )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sort = this->fields.sort;
    v8 = (CommonUI_o *)Instance;
    v11 = (ServantFilterSelectMenu_CallbackFunc_o *)sub_B0D974(ServantFilterSelectMenu_CallbackFunc_TypeInfo, v9, v10);
    ServantFilterSelectMenu_CallbackFunc___ctor(
      v11,
      (Il2CppObject *)this,
      Method_EquipGraphListViewManager_EndSelectFilterKind__,
      0LL);
    if ( !v8 )
      sub_B0D97C(v12);
    CommonUI__OpenServantFilterSelectMenu_17023928(v8, 5, sort, (ListViewManager_o *)this, v11, -1, 0LL);
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
  int32_t Index; // w2

  callbackFunc = this->fields.callbackFunc;
  this->fields.callbackFunc = 0LL;
  sub_B0D840(
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
      sub_B0D97C(v10);
    Index = ListViewObject__get_Index(obj, 0LL);
    EquipGraphListViewManager_CallbackFunc__Invoke(callbackFunc, 2, Index, 0LL);
  }
}


void __fastcall EquipGraphListViewManager__OnClickSortAscendingOrder(
        EquipGraphListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x0
  struct ListViewSort_o *sort; // x8

  if ( (byte_4216DDE & 1) == 0 )
  {
    sub_B0D8A4(&SoundManager_TypeInfo, method);
    byte_4216DDE = 1;
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
      sub_B0D97C(v3);
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
  __int64 v9; // x1
  __int64 v10; // x2
  ServantSortSelectMenu_CallbackFunc_o *v11; // x22
  __int64 v12; // x0

  if ( (byte_4216DDC & 1) == 0 )
  {
    sub_B0D8A4(&ServantSortSelectMenu_CallbackFunc_TypeInfo, method);
    sub_B0D8A4(&Method_EquipGraphListViewManager_EndSelectSortKind__, v3);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    sub_B0D8A4(&SoundManager_TypeInfo, v5);
    byte_4216DDC = 1;
  }
  if ( this->fields.isInput )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sort = this->fields.sort;
    v8 = (CommonUI_o *)Instance;
    v11 = (ServantSortSelectMenu_CallbackFunc_o *)sub_B0D974(ServantSortSelectMenu_CallbackFunc_TypeInfo, v9, v10);
    ServantSortSelectMenu_CallbackFunc___ctor(
      v11,
      (Il2CppObject *)this,
      Method_EquipGraphListViewManager_EndSelectSortKind__,
      0LL);
    if ( !v8 )
      sub_B0D97C(v12);
    CommonUI__OpenServantSortSelectMenu(v8, 4, sort, 0, v11, 0LL);
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
    sub_B0D97C(this);
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, 0, 0LL);
  callbackFunc = v4->fields.callbackFunc;
  v4->fields.callbackFunc = 0LL;
  sub_B0D840((BattleServantConfConponent_o *)&v4->fields.callbackFunc, 0LL, v7, v8, v9, v10, v11, v12);
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
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  struct UIScrollView_o *v13; // x0
  System_Action_o *callbackFunc2; // x20

  if ( (byte_4216DD3 & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, method);
    byte_4216DD3 = 1;
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
        v13 = this->fields.scrollView;
        if ( !v13 )
          sub_B0D97C(0LL);
        ((void (__fastcall *)(struct UIScrollView_o *, __int64, Il2CppMethodPointer))v13->klass->vtable._8_UpdateScrollbars.method)(
          v13,
          1LL,
          v13->klass->vtable._9_SetDragAmount.methodPtr);
      }
      callbackFunc2 = this->fields.callbackFunc2;
      this->fields.callbackFunc2 = 0LL;
      sub_B0D840((BattleServantConfConponent_o *)&this->fields.callbackFunc2, 0LL, v7, v8, v9, v10, v11, v12);
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
  int klass; // w8
  System_String_o *v11; // x20
  __int64 v12; // x21
  UnityEngine_Object_o *infoData2Label; // x20
  struct EquipGraphServantItem_o *servantItemInfo; // x8
  struct ServantEntity_o *equipServantEntity; // x9
  int32_t baseCost; // w8
  int v17; // w22
  UILabel_o *v18; // x20
  System_String_o **v19; // x8
  System_String_o *v20; // x21
  System_String_o *v21; // x21
  Il2CppObject *v22; // x22
  Il2CppObject *v23; // x0
  int32_t maxCost; // [xsp+8h] [xbp-28h] BYREF
  int v25; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4216DCF & 1) == 0 )
  {
    sub_B0D8A4(&int_TypeInfo, method);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EquipGraphListViewObject__get_Count__, v3);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EquipGraphListViewObject__get_Item__, v4);
    sub_B0D8A4(&LocalizationManager_TypeInfo, v5);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v6);
    sub_B0D8A4(&StringLiteral_12508/*"SUM_OVER_INFO"*/, v7);
    sub_B0D8A4(&StringLiteral_12507/*"SUM_INFO"*/, v8);
    byte_4216DCF = 1;
  }
  ObjectList = (System_String_o *)EquipGraphListViewManager__get_ObjectList(this, method);
  if ( !ObjectList )
    goto LABEL_26;
  klass = (int)ObjectList[1].klass;
  v11 = ObjectList;
  if ( klass >= 1 )
  {
    v12 = 0LL;
    while ( 1 )
    {
      if ( klass <= (unsigned int)v12 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
      ObjectList = *(System_String_o **)(*(_QWORD *)&v11->fields + 8 * v12 + 32);
      if ( !ObjectList )
        break;
      ((void (__fastcall *)(System_String_o *, bool, Il2CppMethodPointer))ObjectList->klass->vtable._9_System_IConvertible_ToSByte.method)(
        ObjectList,
        this->fields.isInput,
        ObjectList->klass->vtable._10_System_IConvertible_ToByte.methodPtr);
      klass = (int)v11[1].klass;
      if ( (int)++v12 >= klass )
        goto LABEL_10;
    }
LABEL_26:
    sub_B0D97C(ObjectList);
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
    v17 = (_DWORD)equipServantEntity + baseCost;
    v18 = this->fields.infoData2Label;
    v19 = (int)equipServantEntity + baseCost <= this->fields.maxCost
        ? (System_String_o **)&StringLiteral_12507/*"SUM_INFO"*/
        : (System_String_o **)&StringLiteral_12508/*"SUM_OVER_INFO"*/;
    v20 = *v19;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v21 = LocalizationManager__Get(v20, 0LL);
    v25 = v17;
    v22 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v25);
    maxCost = this->fields.maxCost;
    v23 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &maxCost);
    ObjectList = System_String__Format_43845440(v21, v22, v23, 0LL);
    if ( !v18 )
      goto LABEL_26;
    UILabel__set_text(v18, ObjectList, 0LL);
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
  int32_t size; // w8
  __int64 v16; // x1
  __int64 v17; // x2
  Il2CppObject *current; // x21
  System_Action_o *v19; // x22
  __int64 v20; // x0
  const MethodInfo *v21; // x3
  System_Collections_Generic_List_Enumerator_T__o v22; // [xsp+8h] [xbp-58h] BYREF
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  if ( (byte_4216DD1 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, *(_QWORD *)&mode);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_EquipGraphListViewObject__Dispose__, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_EquipGraphListViewObject__MoveNext__, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_EquipGraphListViewObject__get_Current__, v9);
    sub_B0D8A4(&Method_EquipGraphListViewManager_OnMoveEnd__, v10);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EquipGraphListViewObject__GetEnumerator__, v11);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EquipGraphListViewObject__get_Count__, v12);
    sub_B0D8A4(&StringLiteral_10060/*"OnMoveEnd"*/, v13);
    byte_4216DD1 = 1;
  }
  memset(&v22, 0, sizeof(v22));
  ObjectList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)EquipGraphListViewManager__get_ObjectList(
                                                                                                this,
                                                                                                *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_B0D97C(0LL);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10060/*"OnMoveEnd"*/,
      delay,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v22,
      ObjectList,
      (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_EquipGraphListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v22,
              (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_EquipGraphListViewObject__MoveNext__) )
    {
      current = v22.fields.current;
      v19 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v16, v17);
      System_Action___ctor(v19, (Il2CppObject *)this, Method_EquipGraphListViewManager_OnMoveEnd__, 0LL);
      if ( !current )
        sub_B0D97C(v20);
      zero = UnityEngine_Vector3__get_zero(0LL);
      EquipGraphListViewObject__Init(
        (EquipGraphListViewObject_o *)current,
        mode,
        v19,
        zero.fields.x,
        *(UnityEngine_Vector3_o *)&zero.fields.y,
        v21);
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v22,
      (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_EquipGraphListViewObject__Dispose__);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EquipGraphListViewManager__RequestListObject_28785368(
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
  int32_t size; // w8
  __int64 v14; // x1
  __int64 v15; // x2
  Il2CppObject *current; // x21
  System_Action_o *v17; // x22
  __int64 v18; // x0
  const MethodInfo *v19; // x3
  System_Collections_Generic_List_Enumerator_T__o v20; // [xsp+8h] [xbp-58h] BYREF
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  if ( (byte_4216DD2 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, *(_QWORD *)&mode);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_EquipGraphListViewObject__Dispose__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_EquipGraphListViewObject__MoveNext__, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_EquipGraphListViewObject__get_Current__, v7);
    sub_B0D8A4(&Method_EquipGraphListViewManager_OnMoveEnd__, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EquipGraphListViewObject__GetEnumerator__, v9);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EquipGraphListViewObject__get_Count__, v10);
    sub_B0D8A4(&StringLiteral_10060/*"OnMoveEnd"*/, v11);
    byte_4216DD2 = 1;
  }
  memset(&v20, 0, sizeof(v20));
  ObjectList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)EquipGraphListViewManager__get_ObjectList(
                                                                                                this,
                                                                                                *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_B0D97C(0LL);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10060/*"OnMoveEnd"*/,
      0.0,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v20,
      ObjectList,
      (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_EquipGraphListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v20,
              (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_EquipGraphListViewObject__MoveNext__) )
    {
      current = v20.fields.current;
      v17 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v14, v15);
      System_Action___ctor(v17, (Il2CppObject *)this, Method_EquipGraphListViewManager_OnMoveEnd__, 0LL);
      if ( !current )
        sub_B0D97C(v18);
      zero = UnityEngine_Vector3__get_zero(0LL);
      EquipGraphListViewObject__Init(
        (EquipGraphListViewObject_o *)current,
        mode,
        v17,
        zero.fields.x,
        *(UnityEngine_Vector3_o *)&zero.fields.y,
        v19);
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v20,
      (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_EquipGraphListViewObject__Dispose__);
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
  struct EquipGraphListViewItem_o *selectItem; // x8
  struct ListViewObject_o *viewObject; // x9
  __int64 v51; // x12
  EquipGraphListViewObject_o *v52; // x24
  const MethodInfo *v53; // x2
  struct PartyListViewItem_array *waveDeckItemList; // x8
  int v55; // w9
  struct EquipGraphListViewItem_o *v56; // x8
  int32_t wearerMember; // w11
  int32_t baseCost; // w9
  int32_t *p_baseCost; // x10
  _QWORD *v60; // x0
  System_Reflection_MethodBase_o *v61; // x0
  const MethodInfo *v62; // x2
  struct EquipGraphServantItem_o *v63; // x8
  struct PartyListViewItem_array *v64; // x8
  int v65; // w10
  Il2CppClass **v66; // x8
  Il2CppClass *v67; // x21
  int events; // w19
  struct EquipGraphServantItem_o *v69; // x8
  struct ServantEntity_o *equipServantEntity; // x8
  CommonUI_o *Instance; // x20
  System_String_o *v72; // x21
  System_String_o *v73; // x22
  __int64 v74; // x1
  __int64 v75; // x2
  NotificationDialog_ClickDelegate_o *v76; // x23
  struct ServantEntity_o *servantEntity; // x8
  _QWORD *v78; // x0
  System_Reflection_MethodBase_o *v79; // x0
  struct EquipGraphServantItem_o *v80; // x8
  struct PartyListViewItem_array *v81; // x9
  __int64 v82; // x8
  unsigned __int64 v83; // x19
  int v84; // w27
  PartyListViewItem_o *v85; // x21
  int32_t v86; // w22
  struct ServantEntity_o *v87; // x8
  PartyOrganizationListViewItem_o *v88; // x23
  __int64 v89; // x24
  __int64 v90; // x25
  int v91; // w24
  ServantEntity_o *v92; // x21
  const MethodInfo *v93; // x1
  const MethodInfo *v94; // x2
  const MethodInfo *v95; // x1
  EquipGraphListViewManager_o *v96; // x0
  System_String_array **v97; // x2
  System_String_array **v98; // x3
  System_Boolean_array **v99; // x4
  System_Int32_array **v100; // x5
  System_Int32_array *v101; // x6
  System_Int32_array *v102; // x7
  System_String_o *v103; // x21
  __int64 v104; // x22
  System_String_array **v105; // x2
  System_String_array **v106; // x3
  System_Boolean_array **v107; // x4
  System_Int32_array **v108; // x5
  System_Int32_array *v109; // x6
  System_Int32_array *v110; // x7
  System_Int32_array **v111; // x23
  System_String_array **v112; // x2
  System_String_array **v113; // x3
  System_Boolean_array **v114; // x4
  System_Int32_array **v115; // x5
  System_Int32_array *v116; // x6
  System_Int32_array *v117; // x7
  System_Int32_array **v118; // x23
  int32_t weareRarity; // w23
  System_String_array **v120; // x2
  System_String_array **v121; // x3
  System_Boolean_array **v122; // x4
  System_Int32_array **v123; // x5
  System_Int32_array *v124; // x6
  System_Int32_array *v125; // x7
  System_Int32_array **v126; // x23
  const MethodInfo *v127; // x1
  System_String_array **v128; // x2
  System_String_array **v129; // x3
  System_Boolean_array **v130; // x4
  System_Int32_array **v131; // x5
  System_Int32_array *v132; // x6
  System_Int32_array *v133; // x7
  System_Int32_array **v134; // x23
  System_String_array **v135; // x2
  System_String_array **v136; // x3
  System_Boolean_array **v137; // x4
  System_Int32_array **v138; // x5
  System_Int32_array *v139; // x6
  System_Int32_array *v140; // x7
  System_Int32_array **wearerServantName; // x20
  System_String_array **v142; // x2
  System_String_array **v143; // x3
  System_Boolean_array **v144; // x4
  System_Int32_array **v145; // x5
  System_Int32_array *v146; // x6
  System_Int32_array *v147; // x7
  System_Int32_array **v148; // x20
  System_String_array **v149; // x2
  System_String_array **v150; // x3
  System_Boolean_array **v151; // x4
  System_Int32_array **v152; // x5
  System_Int32_array *v153; // x6
  System_Int32_array *v154; // x7
  System_Int32_array **v155; // x20
  struct EquipGraphServantItem_o *v156; // x8
  int32_t Rarity; // w0
  System_String_array **v158; // x2
  System_String_array **v159; // x3
  System_Boolean_array **v160; // x4
  System_Int32_array **v161; // x5
  System_Int32_array *v162; // x6
  System_Int32_array *v163; // x7
  System_Int32_array **v164; // x20
  const MethodInfo *v165; // x1
  System_String_array **v166; // x2
  System_String_array **v167; // x3
  System_Boolean_array **v168; // x4
  System_Int32_array **v169; // x5
  System_Int32_array *v170; // x6
  System_Int32_array *v171; // x7
  System_Int32_array **v172; // x20
  const MethodInfo *v173; // x1
  System_String_array **v174; // x2
  System_String_array **v175; // x3
  System_Boolean_array **v176; // x4
  System_Int32_array **v177; // x5
  System_Int32_array *v178; // x6
  System_Int32_array *v179; // x7
  System_Int32_array **v180; // x20
  System_String_o *v181; // x20
  CommonUI_o *v182; // x21
  System_String_o *v183; // x22
  System_String_o *v184; // x23
  System_String_o *v185; // x24
  __int64 v186; // x1
  __int64 v187; // x2
  CommonConfirmDialog_ClickDelegate_o *v188; // x25
  int32_t v189; // w9
  System_String_o *v190; // x21
  const MethodInfo *v191; // x1
  System_Object_array *v192; // x22
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
  const MethodInfo *v207; // x1
  System_String_array **v208; // x2
  System_String_array **v209; // x3
  System_Boolean_array **v210; // x4
  System_Int32_array **v211; // x5
  System_Int32_array *v212; // x6
  System_Int32_array *v213; // x7
  System_Int32_array **v214; // x23
  const MethodInfo *v215; // x1
  System_String_array **v216; // x2
  System_String_array **v217; // x3
  System_Boolean_array **v218; // x4
  System_Int32_array **v219; // x5
  System_Int32_array *v220; // x6
  System_Int32_array *v221; // x7
  System_Int32_array **v222; // x23
  struct EquipGraphServantItem_o *v223; // x8
  int32_t v224; // w23
  System_String_array **v225; // x2
  System_String_array **v226; // x3
  System_Boolean_array **v227; // x4
  System_Int32_array **v228; // x5
  System_Int32_array *v229; // x6
  System_Int32_array *v230; // x7
  System_Int32_array **v231; // x23
  System_String_array **v232; // x2
  System_String_array **v233; // x3
  System_Boolean_array **v234; // x4
  System_Int32_array **v235; // x5
  System_Int32_array *v236; // x6
  System_Int32_array *v237; // x7
  System_Int32_array **v238; // x20
  System_String_o *v239; // x20
  CommonUI_o *v240; // x21
  System_String_o *v241; // x22
  __int64 v242; // x1
  __int64 v243; // x2
  CommonConfirmDialog_ClickDelegate_o *v244; // x23
  struct PartyListViewItem_array *v245; // x8
  int v246; // w9
  struct EquipGraphListViewItem_o *v247; // x10
  struct UserServantEntity_o *userSvtEntity; // x10
  int32_t memberIndex; // w23
  __int128 v250; // q1
  PartyListViewItem_o *v251; // x24
  _BOOL8 v252; // x0
  Il2CppObject *current; // x19
  __int64 v254; // x10
  int klass_high; // w9
  int32_t v256; // w8
  _DWORD *monitor; // x9
  UnityEngine_Object_o *v258; // x24
  _BOOL8 v259; // x0
  void *v260; // x8
  __int64 v261; // x11
  __int64 v262; // x11
  EquipGraphListViewObject_o *v263; // x24
  const MethodInfo *v264; // x1
  struct EquipGraphListViewItem_o *v265; // x8
  struct UserServantEntity_o *v266; // x8
  __int128 v267; // q1
  EquipGraphServantItem_o *v268; // x20
  const MethodInfo *v269; // x2
  const MethodInfo *v270; // x2
  struct UserServantEntity_o *userServantEntity; // x23
  System_String_o *v272; // x20
  __int64 v273; // x22
  System_String_array **v274; // x2
  System_String_array **v275; // x3
  System_Boolean_array **v276; // x4
  System_Int32_array **v277; // x5
  System_Int32_array *v278; // x6
  System_Int32_array *v279; // x7
  System_Int32_array **v280; // x24
  System_String_array **v281; // x2
  System_String_array **v282; // x3
  System_Boolean_array **v283; // x4
  System_Int32_array **v284; // x5
  System_Int32_array *v285; // x6
  System_Int32_array *v286; // x7
  System_Int32_array **v287; // x24
  int32_t v288; // w24
  System_String_array **v289; // x2
  System_String_array **v290; // x3
  System_Boolean_array **v291; // x4
  System_Int32_array **v292; // x5
  System_Int32_array *v293; // x6
  System_Int32_array *v294; // x7
  System_Int32_array **v295; // x24
  System_String_array **v296; // x2
  System_String_array **v297; // x3
  System_Boolean_array **v298; // x4
  System_Int32_array **v299; // x5
  System_Int32_array *v300; // x6
  System_Int32_array *v301; // x7
  System_Int32_array **v302; // x24
  __int64 v303; // x23
  __int64 v304; // x24
  int32_t v305; // w0
  System_String_array **v306; // x2
  System_String_array **v307; // x3
  System_Boolean_array **v308; // x4
  System_Int32_array **v309; // x5
  System_Int32_array *v310; // x6
  System_Int32_array *v311; // x7
  System_Int32_array **v312; // x21
  System_String_o *v313; // x20
  CommonUI_o *v314; // x21
  System_String_o *v315; // x22
  System_String_o *v316; // x23
  System_String_o *v317; // x24
  __int64 v318; // x1
  __int64 v319; // x2
  CommonConfirmDialog_ClickDelegate_o *v320; // x25
  __int64 v321; // x0
  __int64 v322; // x0
  struct PartyListViewItem_array *v323; // [xsp+68h] [xbp-E8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v324; // [xsp+70h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v325; // [xsp+90h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v326; // [xsp+B0h] [xbp-A0h] BYREF
  int32_t v327; // [xsp+D4h] [xbp-7Ch] BYREF
  int32_t partyNumber; // [xsp+D8h] [xbp-78h] BYREF
  int32_t maxWave; // [xsp+DCh] [xbp-74h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v330; // [xsp+E0h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v331; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o EquipSvtId; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v333; // 0:x0.16

  if ( (byte_4216DD6 & 1) == 0 )
  {
    sub_B0D8A4(&BalanceConfig_TypeInfo, item);
    sub_B0D8A4(&NotificationDialog_ClickDelegate_TypeInfo, v11);
    sub_B0D8A4(&CommonConfirmDialog_ClickDelegate_TypeInfo, v12);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__, v13);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v14);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v15);
    sub_B0D8A4(&EquipGraphListViewItem_TypeInfo, v16);
    sub_B0D8A4(&Method_EquipGraphListViewManager_EndSelectConfirm__, v17);
    sub_B0D8A4(&Method_EquipGraphListViewManager_SelectEquip__, v18);
    sub_B0D8A4(&Method_EquipGraphListViewManager__SelectEquip_b__71_0__, v19);
    sub_B0D8A4(&EquipGraphListViewObject_TypeInfo, v20);
    sub_B0D8A4(&int_TypeInfo, v21);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v22);
    sub_B0D8A4(&LocalizationManager_TypeInfo, v23);
    sub_B0D8A4(&object___TypeInfo, v24);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v25);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v26);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v27);
    sub_B0D8A4(&Rarity_TypeInfo, v28);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v29);
    sub_B0D8A4(&SoundManager_TypeInfo, v30);
    sub_B0D8A4(&StringLiteral_15396/*"WAVE_BATTLE_EQUIP_SWAP_MESSAGE"*/, v31);
    sub_B0D8A4(&StringLiteral_15397/*"WAVE_BATTLE_EQUIP_SWAP_TITLE"*/, v32);
    sub_B0D8A4(&StringLiteral_15393/*"WAVE_BATTLE_EQUIP_MOVE_MESSAGE"*/, v33);
    sub_B0D8A4(&StringLiteral_5546/*"EQUIP_GRAPH_USE_WARNING_TITLE"*/, v34);
    sub_B0D8A4(&StringLiteral_5545/*"EQUIP_GRAPH_USE_WARNING_MESSAGE"*/, v35);
    sub_B0D8A4(&StringLiteral_15392/*"WAVE_BATTLE_COST_OVER_TITLE"*/, v36);
    sub_B0D8A4(&StringLiteral_3277/*"COMMON_CONFIRM_NO"*/, v37);
    sub_B0D8A4(&StringLiteral_3280/*"COMMON_CONFIRM_YES"*/, v38);
    sub_B0D8A4(&StringLiteral_15391/*"WAVE_BATTLE_COST_OVER_MESSAGE"*/, v39);
    byte_4216DD6 = 1;
  }
  p_selectItem = &this->fields.selectItem;
  memset(&v330, 0, sizeof(v330));
  this->fields.selectItem = item;
  sub_B0D840(
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
  sub_B0D840(
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
    && (v51 = *(&EquipGraphListViewObject_TypeInfo->_2.bitflags2 + 1),
        *(&viewObject->klass->_2.bitflags2 + 1) >= (unsigned int)v51) )
  {
    if ( (EquipGraphListViewObject_c *)viewObject->klass->_2.typeHierarchy[v51 - 1] == EquipGraphListViewObject_TypeInfo )
      v52 = (EquipGraphListViewObject_o *)selectItem->fields.viewObject;
    else
      v52 = 0LL;
  }
  else
  {
    v52 = 0LL;
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
    v55 = this->fields.partyNumber - 1;
    if ( v55 < waveDeckItemList->max_length )
    {
      servantItemInfo = (__int64)waveDeckItemList->m_Items[v55];
      if ( !servantItemInfo )
        goto LABEL_257;
      PartyListViewItem__SetEquip((PartyListViewItem_o *)servantItemInfo, this->fields.memberIndex, 0LL, 0LL);
LABEL_19:
      if ( !*p_selectItem )
        goto LABEL_257;
      (*p_selectItem)->fields.isBase = 0;
      v56 = *p_selectItem;
      if ( !*p_selectItem )
        goto LABEL_257;
      wearerMember = v56->fields.wearerMember;
      if ( wearerMember == this->fields.memberIndex || (wearerMember & 0x80000000) != 0 )
      {
        if ( v56->fields._OrganizedWave_k__BackingField <= 0 && !v56->fields._IsUnique_k__BackingField )
        {
LABEL_80:
          servantItemInfo = (__int64)this->fields.servantItemInfo;
          if ( !servantItemInfo )
            goto LABEL_257;
          EquipGraphServantItem__SetEquipTarget((EquipGraphServantItem_o *)servantItemInfo, 0LL, v53);
          servantItemInfo = (__int64)this->fields.servantItemDraw;
          if ( !servantItemInfo )
            goto LABEL_257;
          EquipGraphServantItemDraw__SetItem(
            (EquipGraphServantItemDraw_o *)servantItemInfo,
            this->fields.servantItemInfo,
            v94);
          v96 = this;
LABEL_83:
          EquipGraphListViewManager__RefrashListDisp(v96, v95);
          if ( callback )
          {
            p_selectItemCallbackFunc->klass = 0LL;
            sub_B0D840(p_selectItemCallbackFunc, 0LL, v97, v98, v99, v100, v101, v102);
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
          if ( !v52 )
            goto LABEL_257;
          UnityEngine_Vector3__get_zero(0LL);
          if ( (byte_4216DEA & 1) == 0 )
          {
            sub_B0D8A4(&EquipGraphListViewItem_TypeInfo, v93);
            byte_4216DEA = 1;
          }
          EquipGraphListViewObject__SetupDisp(v52, v93);
          goto LABEL_80;
        }
      }
      else
      {
        baseCost = this->fields.baseCost;
        p_baseCost = &this->fields.baseCost;
      }
      servantEntity = v56->fields.servantEntity;
      if ( servantEntity )
        LODWORD(servantEntity) = servantEntity->fields.cost;
      goto LABEL_76;
    }
LABEL_259:
    v321 = sub_B0D9A8(servantItemInfo);
    sub_B0D948(v321, 0LL);
  }
  if ( selectItem->fields._OrganizedWave_k__BackingField >= 1 )
  {
    v60 = Method_EquipGraphListViewManager_SelectEquip__;
    if ( (*((_BYTE *)Method_EquipGraphListViewManager_SelectEquip__ + 75) & 2) != 0 )
      v60 = (_QWORD *)sub_B0D8AC(Method_EquipGraphListViewManager_SelectEquip__);
    v61 = (System_Reflection_MethodBase_o *)sub_B0D888(v60, v60[3]);
    OverwriteAssetSoundName__PlaySystemSe(v61, 0, 0LL);
    v63 = this->fields.servantItemInfo;
    if ( !v63 )
      goto LABEL_257;
    if ( v63->fields.equipUserSvtEntity )
    {
      if ( !item )
        goto LABEL_257;
      v64 = this->fields.waveDeckItemList;
      if ( !v64 )
        goto LABEL_257;
      v65 = item->fields._OrganizedWave_k__BackingField - 1;
      if ( v65 >= v64->max_length )
        goto LABEL_259;
      if ( !*p_selectItem )
        goto LABEL_257;
      v66 = &v64->obj.klass + v65;
      v67 = v66[4];
      if ( !v67 )
        goto LABEL_257;
      servantItemInfo = (__int64)PartyListViewItem__GetMember(
                                   (PartyListViewItem_o *)v66[4],
                                   (*p_selectItem)->fields.wearerMember,
                                   0LL);
      if ( !servantItemInfo )
        goto LABEL_257;
      events = (int)v67->_1.events;
      servantItemInfo = PartyOrganizationListViewItem__get_EquipCost(
                          (PartyOrganizationListViewItem_o *)servantItemInfo,
                          0LL);
      v69 = this->fields.servantItemInfo;
      if ( !v69 )
        goto LABEL_257;
      equipServantEntity = v69->fields.equipServantEntity;
      if ( equipServantEntity )
        LODWORD(equipServantEntity) = equipServantEntity->fields.cost;
      if ( events - (int)servantItemInfo + (int)equipServantEntity > SHIDWORD(v67->_1.interopData) )
      {
        Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v72 = LocalizationManager__Get((System_String_o *)StringLiteral_15392/*"WAVE_BATTLE_COST_OVER_TITLE"*/, 0LL);
        v73 = LocalizationManager__Get((System_String_o *)StringLiteral_15391/*"WAVE_BATTLE_COST_OVER_MESSAGE"*/, 0LL);
        v76 = (NotificationDialog_ClickDelegate_o *)sub_B0D974(NotificationDialog_ClickDelegate_TypeInfo, v74, v75);
        NotificationDialog_ClickDelegate___ctor(
          v76,
          (Il2CppObject *)this,
          Method_EquipGraphListViewManager__SelectEquip_b__71_0__,
          0LL);
        if ( !Instance )
          goto LABEL_257;
        CommonUI__OpenNotificationDialog_17019096(
          Instance,
          v72,
          v73,
          v76,
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
      v103 = LocalizationManager__Get((System_String_o *)StringLiteral_15396/*"WAVE_BATTLE_EQUIP_SWAP_MESSAGE"*/, 0LL);
      servantItemInfo = sub_B0D8BC(object___TypeInfo, 10LL);
      if ( !*p_selectItem )
        goto LABEL_257;
      v104 = servantItemInfo;
      LODWORD(v326.fields.currentCryptoKey) = (*p_selectItem)->fields._OrganizedWave_k__BackingField;
      servantItemInfo = j_il2cpp_value_box_0(int_TypeInfo, &v326);
      if ( !v104 )
        goto LABEL_257;
      v111 = (System_Int32_array **)servantItemInfo;
      if ( !servantItemInfo || (servantItemInfo = sub_B0D964(servantItemInfo, *(_QWORD *)(*(_QWORD *)v104 + 64LL))) != 0 )
      {
        if ( !*(_DWORD *)(v104 + 24) )
          goto LABEL_259;
        *(_QWORD *)(v104 + 32) = v111;
        sub_B0D840((BattleServantConfConponent_o *)(v104 + 32), v111, v105, v106, v107, v108, v109, v110);
        maxWave = this->fields.maxWave;
        servantItemInfo = j_il2cpp_value_box_0(int_TypeInfo, &maxWave);
        v118 = (System_Int32_array **)servantItemInfo;
        if ( !servantItemInfo
          || (servantItemInfo = sub_B0D964(servantItemInfo, *(_QWORD *)(*(_QWORD *)v104 + 64LL))) != 0 )
        {
          if ( *(_DWORD *)(v104 + 24) <= 1u )
            goto LABEL_259;
          *(_QWORD *)(v104 + 40) = v118;
          sub_B0D840((BattleServantConfConponent_o *)(v104 + 40), v118, v112, v113, v114, v115, v116, v117);
          if ( !*p_selectItem )
            goto LABEL_257;
          weareRarity = (*p_selectItem)->fields.weareRarity;
          if ( (BYTE3(Rarity_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !Rarity_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(Rarity_TypeInfo);
          servantItemInfo = (__int64)Rarity__getRarityType(weareRarity, 0LL);
          v126 = (System_Int32_array **)servantItemInfo;
          if ( !servantItemInfo
            || (servantItemInfo = sub_B0D964(servantItemInfo, *(_QWORD *)(*(_QWORD *)v104 + 64LL))) != 0 )
          {
            if ( *(_DWORD *)(v104 + 24) <= 2u )
              goto LABEL_259;
            *(_QWORD *)(v104 + 48) = v126;
            sub_B0D840((BattleServantConfConponent_o *)(v104 + 48), v126, v120, v121, v122, v123, v124, v125);
            servantItemInfo = (__int64)*p_selectItem;
            if ( !*p_selectItem )
              goto LABEL_257;
            servantItemInfo = (__int64)EquipGraphListViewItem__get_WeareServantClassName(
                                         (EquipGraphListViewItem_o *)servantItemInfo,
                                         v127);
            v134 = (System_Int32_array **)servantItemInfo;
            if ( !servantItemInfo
              || (servantItemInfo = sub_B0D964(servantItemInfo, *(_QWORD *)(*(_QWORD *)v104 + 64LL))) != 0 )
            {
              if ( *(_DWORD *)(v104 + 24) <= 3u )
                goto LABEL_259;
              *(_QWORD *)(v104 + 56) = v134;
              sub_B0D840((BattleServantConfConponent_o *)(v104 + 56), v134, v128, v129, v130, v131, v132, v133);
              if ( !*p_selectItem )
                goto LABEL_257;
              wearerServantName = (System_Int32_array **)(*p_selectItem)->fields.wearerServantName;
              if ( !wearerServantName
                || (servantItemInfo = sub_B0D964(wearerServantName, *(_QWORD *)(*(_QWORD *)v104 + 64LL))) != 0 )
              {
                if ( *(_DWORD *)(v104 + 24) <= 4u )
                  goto LABEL_259;
                *(_QWORD *)(v104 + 64) = wearerServantName;
                sub_B0D840(
                  (BattleServantConfConponent_o *)(v104 + 64),
                  wearerServantName,
                  v135,
                  v136,
                  v137,
                  v138,
                  v139,
                  v140);
                partyNumber = this->fields.partyNumber;
                servantItemInfo = j_il2cpp_value_box_0(int_TypeInfo, &partyNumber);
                v148 = (System_Int32_array **)servantItemInfo;
                if ( !servantItemInfo
                  || (servantItemInfo = sub_B0D964(servantItemInfo, *(_QWORD *)(*(_QWORD *)v104 + 64LL))) != 0 )
                {
                  if ( *(_DWORD *)(v104 + 24) <= 5u )
                    goto LABEL_259;
                  *(_QWORD *)(v104 + 72) = v148;
                  sub_B0D840((BattleServantConfConponent_o *)(v104 + 72), v148, v142, v143, v144, v145, v146, v147);
                  v327 = this->fields.maxWave;
                  servantItemInfo = j_il2cpp_value_box_0(int_TypeInfo, &v327);
                  v155 = (System_Int32_array **)servantItemInfo;
                  if ( !servantItemInfo
                    || (servantItemInfo = sub_B0D964(servantItemInfo, *(_QWORD *)(*(_QWORD *)v104 + 64LL))) != 0 )
                  {
                    if ( *(_DWORD *)(v104 + 24) <= 6u )
                      goto LABEL_259;
                    *(_QWORD *)(v104 + 80) = v155;
                    sub_B0D840((BattleServantConfConponent_o *)(v104 + 80), v155, v149, v150, v151, v152, v153, v154);
                    v156 = this->fields.servantItemInfo;
                    if ( !v156 )
                      goto LABEL_257;
                    servantItemInfo = (__int64)v156->fields.userServantEntity;
                    if ( !servantItemInfo )
                      goto LABEL_257;
                    Rarity = UserServantEntity__getRarity((UserServantEntity_o *)servantItemInfo, 0LL);
                    servantItemInfo = (__int64)Rarity__getRarityType(Rarity, 0LL);
                    v164 = (System_Int32_array **)servantItemInfo;
                    if ( !servantItemInfo
                      || (servantItemInfo = sub_B0D964(servantItemInfo, *(_QWORD *)(*(_QWORD *)v104 + 64LL))) != 0 )
                    {
                      if ( *(_DWORD *)(v104 + 24) <= 7u )
                        goto LABEL_259;
                      *(_QWORD *)(v104 + 88) = v164;
                      sub_B0D840((BattleServantConfConponent_o *)(v104 + 88), v164, v158, v159, v160, v161, v162, v163);
                      servantItemInfo = (__int64)this->fields.servantItemInfo;
                      if ( !servantItemInfo )
                        goto LABEL_257;
                      servantItemInfo = (__int64)EquipGraphServantItem__get_ClassName(
                                                   (EquipGraphServantItem_o *)servantItemInfo,
                                                   v165);
                      v172 = (System_Int32_array **)servantItemInfo;
                      if ( !servantItemInfo
                        || (servantItemInfo = sub_B0D964(servantItemInfo, *(_QWORD *)(*(_QWORD *)v104 + 64LL))) != 0 )
                      {
                        if ( *(_DWORD *)(v104 + 24) <= 8u )
                          goto LABEL_259;
                        *(_QWORD *)(v104 + 96) = v172;
                        sub_B0D840(
                          (BattleServantConfConponent_o *)(v104 + 96),
                          v172,
                          v166,
                          v167,
                          v168,
                          v169,
                          v170,
                          v171);
                        servantItemInfo = (__int64)this->fields.servantItemInfo;
                        if ( !servantItemInfo )
                          goto LABEL_257;
                        servantItemInfo = (__int64)EquipGraphServantItem__get_NameText(
                                                     (EquipGraphServantItem_o *)servantItemInfo,
                                                     v173);
                        v180 = (System_Int32_array **)servantItemInfo;
                        if ( !servantItemInfo
                          || (servantItemInfo = sub_B0D964(servantItemInfo, *(_QWORD *)(*(_QWORD *)v104 + 64LL))) != 0 )
                        {
                          if ( *(_DWORD *)(v104 + 24) > 9u )
                          {
                            *(_QWORD *)(v104 + 104) = v180;
                            sub_B0D840(
                              (BattleServantConfConponent_o *)(v104 + 104),
                              v180,
                              v174,
                              v175,
                              v176,
                              v177,
                              v178,
                              v179);
                            v181 = System_String__Format_43928628(v103, (System_Object_array *)v104, 0LL);
                            v182 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                            v183 = LocalizationManager__Get((System_String_o *)StringLiteral_15397/*"WAVE_BATTLE_EQUIP_SWAP_TITLE"*/, 0LL);
                            v184 = LocalizationManager__Get((System_String_o *)StringLiteral_3280/*"COMMON_CONFIRM_YES"*/, 0LL);
                            v185 = LocalizationManager__Get((System_String_o *)StringLiteral_3277/*"COMMON_CONFIRM_NO"*/, 0LL);
                            v188 = (CommonConfirmDialog_ClickDelegate_o *)sub_B0D974(
                                                                            CommonConfirmDialog_ClickDelegate_TypeInfo,
                                                                            v186,
                                                                            v187);
                            CommonConfirmDialog_ClickDelegate___ctor(
                              v188,
                              (Il2CppObject *)this,
                              Method_EquipGraphListViewManager_EndSelectConfirm__,
                              0LL);
                            if ( !v182 )
                              goto LABEL_257;
                            CommonUI__OpenConfirmDialog_17016836(
                              v182,
                              v183,
                              v181,
                              v184,
                              v185,
                              v188,
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
      v322 = sub_B0D99C(servantItemInfo);
      sub_B0D948(v322, 0LL);
    }
    goto LABEL_74;
  }
  if ( selectItem->fields._IsUnique_k__BackingField )
  {
    v78 = Method_EquipGraphListViewManager_SelectEquip__;
    if ( (*((_BYTE *)Method_EquipGraphListViewManager_SelectEquip__ + 75) & 2) != 0 )
      v78 = (_QWORD *)sub_B0D8AC(Method_EquipGraphListViewManager_SelectEquip__);
    v79 = (System_Reflection_MethodBase_o *)sub_B0D888(v78, v78[3]);
    OverwriteAssetSoundName__PlaySystemSe(v79, 0, 0LL);
    v80 = this->fields.servantItemInfo;
    if ( !v80 )
      goto LABEL_257;
    if ( v80->fields.equipUserSvtEntity )
    {
      v81 = this->fields.waveDeckItemList;
      if ( !v81 )
        goto LABEL_257;
      v82 = *(_QWORD *)&v81->max_length;
      if ( (int)v82 < 1 )
        return;
      v83 = 0LL;
      v84 = 1;
      v323 = this->fields.waveDeckItemList;
      while ( 1 )
      {
        if ( v83 >= (unsigned int)v82 )
          goto LABEL_259;
        v85 = v81->m_Items[v83];
        v86 = 0;
        do
        {
          servantItemInfo = (__int64)BalanceConfig_TypeInfo;
          if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !BalanceConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
            servantItemInfo = (__int64)BalanceConfig_TypeInfo;
          }
          if ( v86 >= *(_DWORD *)(*(_QWORD *)(servantItemInfo + 184) + 160LL) )
            goto LABEL_72;
          if ( !v85 )
            goto LABEL_257;
          servantItemInfo = (__int64)PartyListViewItem__GetMember(v85, v86, 0LL);
          if ( !*p_selectItem )
            goto LABEL_257;
          v87 = (*p_selectItem)->fields.servantEntity;
          if ( !v87 )
            goto LABEL_257;
          v88 = (PartyOrganizationListViewItem_o *)servantItemInfo;
          v90 = *(_QWORD *)&v87->fields.id.fields.currentCryptoKey;
          v89 = *(_QWORD *)&v87->fields.id.fields.fakeValue;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          }
          *(_QWORD *)&v331.fields.currentCryptoKey = v90;
          *(_QWORD *)&v331.fields.fakeValue = v89;
          servantItemInfo = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v331, 0LL);
          if ( !v88 )
            goto LABEL_257;
          v91 = servantItemInfo;
          EquipSvtId = PartyOrganizationListViewItem__get_EquipSvtId(v88, 0LL);
          servantItemInfo = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(EquipSvtId, 0LL);
          ++v86;
        }
        while ( v91 != (_DWORD)servantItemInfo );
        v92 = v88->fields.servantEntity;
        if ( v92 )
          break;
LABEL_72:
        v81 = v323;
        ++v83;
        ++v84;
        LODWORD(v82) = v323->max_length;
        if ( (__int64)v83 >= (int)v82 )
          return;
      }
      userServantEntity = v88->fields.userServantEntity;
      if ( !userServantEntity )
        return;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v272 = LocalizationManager__Get((System_String_o *)StringLiteral_15393/*"WAVE_BATTLE_EQUIP_MOVE_MESSAGE"*/, 0LL);
      v273 = sub_B0D8BC(object___TypeInfo, 5LL);
      LODWORD(v326.fields.currentCryptoKey) = v84;
      servantItemInfo = j_il2cpp_value_box_0(int_TypeInfo, &v326);
      if ( !v273 )
        goto LABEL_257;
      v280 = (System_Int32_array **)servantItemInfo;
      if ( !servantItemInfo || (servantItemInfo = sub_B0D964(servantItemInfo, *(_QWORD *)(*(_QWORD *)v273 + 64LL))) != 0 )
      {
        if ( !*(_DWORD *)(v273 + 24) )
          goto LABEL_259;
        *(_QWORD *)(v273 + 32) = v280;
        sub_B0D840((BattleServantConfConponent_o *)(v273 + 32), v280, v274, v275, v276, v277, v278, v279);
        maxWave = this->fields.maxWave;
        servantItemInfo = j_il2cpp_value_box_0(int_TypeInfo, &maxWave);
        v287 = (System_Int32_array **)servantItemInfo;
        if ( !servantItemInfo
          || (servantItemInfo = sub_B0D964(servantItemInfo, *(_QWORD *)(*(_QWORD *)v273 + 64LL))) != 0 )
        {
          if ( *(_DWORD *)(v273 + 24) <= 1u )
            goto LABEL_259;
          *(_QWORD *)(v273 + 40) = v287;
          sub_B0D840((BattleServantConfConponent_o *)(v273 + 40), v287, v281, v282, v283, v284, v285, v286);
          v288 = UserServantEntity__getRarity(userServantEntity, 0LL);
          if ( (BYTE3(Rarity_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !Rarity_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(Rarity_TypeInfo);
          servantItemInfo = (__int64)Rarity__getRarityType(v288, 0LL);
          v295 = (System_Int32_array **)servantItemInfo;
          if ( !servantItemInfo
            || (servantItemInfo = sub_B0D964(servantItemInfo, *(_QWORD *)(*(_QWORD *)v273 + 64LL))) != 0 )
          {
            if ( *(_DWORD *)(v273 + 24) <= 2u )
              goto LABEL_259;
            *(_QWORD *)(v273 + 48) = v295;
            sub_B0D840((BattleServantConfConponent_o *)(v273 + 48), v295, v289, v290, v291, v292, v293, v294);
            servantItemInfo = (__int64)ServantEntity__getClassName(v92, 0LL);
            v302 = (System_Int32_array **)servantItemInfo;
            if ( !servantItemInfo
              || (servantItemInfo = sub_B0D964(servantItemInfo, *(_QWORD *)(*(_QWORD *)v273 + 64LL))) != 0 )
            {
              if ( *(_DWORD *)(v273 + 24) <= 3u )
                goto LABEL_259;
              *(_QWORD *)(v273 + 56) = v302;
              sub_B0D840((BattleServantConfConponent_o *)(v273 + 56), v302, v296, v297, v298, v299, v300, v301);
              v304 = *(_QWORD *)&userServantEntity->fields.limitCount.fields.currentCryptoKey;
              v303 = *(_QWORD *)&userServantEntity->fields.limitCount.fields.fakeValue;
              if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
              }
              *(_QWORD *)&v333.fields.currentCryptoKey = v304;
              *(_QWORD *)&v333.fields.fakeValue = v303;
              v305 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v333, 0LL);
              servantItemInfo = (__int64)ServantEntity__getName(v92, v305, -1, 0LL);
              v312 = (System_Int32_array **)servantItemInfo;
              if ( !servantItemInfo
                || (servantItemInfo = sub_B0D964(servantItemInfo, *(_QWORD *)(*(_QWORD *)v273 + 64LL))) != 0 )
              {
                if ( *(_DWORD *)(v273 + 24) > 4u )
                {
                  *(_QWORD *)(v273 + 64) = v312;
                  sub_B0D840((BattleServantConfConponent_o *)(v273 + 64), v312, v306, v307, v308, v309, v310, v311);
                  v313 = System_String__Format_43928628(v272, (System_Object_array *)v273, 0LL);
                  v314 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                  v315 = LocalizationManager__Get((System_String_o *)StringLiteral_5546/*"EQUIP_GRAPH_USE_WARNING_TITLE"*/, 0LL);
                  v316 = LocalizationManager__Get((System_String_o *)StringLiteral_3280/*"COMMON_CONFIRM_YES"*/, 0LL);
                  v317 = LocalizationManager__Get((System_String_o *)StringLiteral_3277/*"COMMON_CONFIRM_NO"*/, 0LL);
                  v320 = (CommonConfirmDialog_ClickDelegate_o *)sub_B0D974(
                                                                  CommonConfirmDialog_ClickDelegate_TypeInfo,
                                                                  v318,
                                                                  v319);
                  CommonConfirmDialog_ClickDelegate___ctor(
                    v320,
                    (Il2CppObject *)this,
                    Method_EquipGraphListViewManager_EndSelectConfirm__,
                    0LL);
                  if ( !v314 )
                    goto LABEL_257;
                  CommonUI__OpenConfirmDialog_17016836(
                    v314,
                    v315,
                    v313,
                    v316,
                    v317,
                    v320,
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
    EquipGraphListViewManager__EndSelectConfirm(this, 1, v62);
    return;
  }
  v189 = selectItem->fields.wearerMember;
  if ( v189 == this->fields.memberIndex || (v189 & 0x80000000) != 0 )
  {
    if ( (WORD1(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    if ( this->fields.isWaveBattle )
    {
      v245 = this->fields.waveDeckItemList;
      if ( !v245 )
        goto LABEL_257;
      v246 = this->fields.partyNumber - 1;
      if ( v246 >= v245->max_length )
        goto LABEL_259;
      v247 = this->fields.selectItem;
      if ( !v247 )
        goto LABEL_257;
      userSvtEntity = v247->fields.userSvtEntity;
      if ( !userSvtEntity )
        goto LABEL_257;
      memberIndex = this->fields.memberIndex;
      v250 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
      v251 = v245->m_Items[v246];
      *(_OWORD *)&v326.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v326.fields.fakeValue = v250;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      }
      v325 = v326;
      servantItemInfo = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44165732(&v325, 0LL);
      if ( !v251 )
        goto LABEL_257;
      PartyListViewItem__SetEquip(v251, memberIndex, servantItemInfo, 0LL);
    }
    servantItemInfo = (__int64)this->fields.itemList;
    if ( !servantItemInfo )
      goto LABEL_257;
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v326,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)servantItemInfo,
      (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    v330 = *(System_Collections_Generic_List_Enumerator_T__o *)&v326.fields.currentCryptoKey;
    while ( 1 )
    {
      do
      {
        v252 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                 &v330,
                 (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
        if ( !v252 )
        {
          System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
            &v330,
            (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
          if ( *p_selectItem )
          {
            (*p_selectItem)->fields.isBase = 1;
            v265 = this->fields.selectItem;
            if ( v265 )
            {
              v266 = v265->fields.userSvtEntity;
              if ( v266 )
              {
                v267 = *(_OWORD *)&v266->fields.id.fields.fakeValue;
                v268 = this->fields.servantItemInfo;
                *(_OWORD *)&v326.fields.currentCryptoKey = *(_OWORD *)&v266->fields.id.fields.currentCryptoKey;
                *(_OWORD *)&v326.fields.fakeValue = v267;
                if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
                }
                v324 = v326;
                servantItemInfo = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44165732(&v324, 0LL);
                if ( v268 )
                {
                  EquipGraphServantItem__SetEquipTarget(v268, servantItemInfo, v269);
                  servantItemInfo = (__int64)this->fields.servantItemDraw;
                  if ( servantItemInfo )
                  {
                    EquipGraphServantItemDraw__SetItem(
                      (EquipGraphServantItemDraw_o *)servantItemInfo,
                      this->fields.servantItemInfo,
                      v270);
                    v96 = this;
                    goto LABEL_83;
                  }
                }
              }
            }
          }
LABEL_257:
          sub_B0D97C(servantItemInfo);
        }
        current = v330.fields.current;
        if ( v330.fields.current )
        {
          v254 = *(&EquipGraphListViewItem_TypeInfo->_2.bitflags2 + 1);
          if ( *(&v330.fields.current->klass->_2.bitflags2 + 1) >= (unsigned int)v254
            && (EquipGraphListViewItem_c *)v330.fields.current->klass->_2.typeHierarchy[v254 - 1] == EquipGraphListViewItem_TypeInfo )
          {
            continue;
          }
        }
        sub_B0D97C(v252);
      }
      while ( !BYTE1(v330.fields.current[9].klass) );
      BYTE1(v330.fields.current[9].klass) = 0;
      klass_high = HIDWORD(current[9].klass);
      if ( klass_high != this->fields.memberIndex && (klass_high & 0x80000000) == 0 )
        break;
      if ( SHIDWORD(current[14].monitor) > 0 || BYTE4(current[15].klass) )
      {
        v256 = this->fields.baseCost;
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
        this->fields.baseCost = (_DWORD)monitor + v256;
        v258 = (UnityEngine_Object_o *)current[6].monitor;
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        v259 = UnityEngine_Object__op_Inequality(v258, 0LL, 0LL);
        if ( v259 )
        {
          v260 = current[6].monitor;
          if ( !v260
            || (v261 = *(&EquipGraphListViewObject_TypeInfo->_2.bitflags2 + 1),
                *(unsigned __int8 *)(*(_QWORD *)v260 + 300LL) < (unsigned int)v261)
            || *(EquipGraphListViewObject_c **)(*(_QWORD *)(*(_QWORD *)v260 + 200LL) + 8 * v261 - 8) != EquipGraphListViewObject_TypeInfo )
          {
            sub_B0D97C(v259);
          }
          v262 = *(&EquipGraphListViewObject_TypeInfo->_2.bitflags2 + 1);
          if ( *(unsigned __int8 *)(*(_QWORD *)v260 + 300LL) >= (unsigned int)v262 )
          {
            if ( *(EquipGraphListViewObject_c **)(*(_QWORD *)(*(_QWORD *)v260 + 200LL) + 8 * v262 - 8) == EquipGraphListViewObject_TypeInfo )
              v263 = (EquipGraphListViewObject_o *)current[6].monitor;
            else
              v263 = 0LL;
          }
          else
          {
            v263 = 0LL;
          }
          UnityEngine_Vector3__get_zero(0LL);
          if ( (byte_4216DEA & 1) == 0 )
          {
            sub_B0D8A4(&EquipGraphListViewItem_TypeInfo, v264);
            byte_4216DEA = 1;
          }
          EquipGraphListViewObject__SetupDisp(v263, v264);
        }
      }
    }
    v256 = this->fields.baseCost;
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
  v190 = LocalizationManager__Get((System_String_o *)StringLiteral_5545/*"EQUIP_GRAPH_USE_WARNING_MESSAGE"*/, 0LL);
  servantItemInfo = sub_B0D8BC(object___TypeInfo, 6LL);
  if ( !this->fields.servantItemInfo )
    goto LABEL_257;
  v192 = (System_Object_array *)servantItemInfo;
  servantItemInfo = (__int64)EquipGraphServantItem__get_NameText(this->fields.servantItemInfo, v191);
  if ( !v192 )
    goto LABEL_257;
  v199 = (System_Int32_array **)servantItemInfo;
  if ( servantItemInfo )
  {
    servantItemInfo = sub_B0D964(servantItemInfo, v192->obj.klass->_1.element_class);
    if ( !servantItemInfo )
      goto LABEL_261;
  }
  if ( !v192->max_length )
    goto LABEL_259;
  v192->m_Items[0] = (Il2CppObject *)v199;
  sub_B0D840((BattleServantConfConponent_o *)v192->m_Items, v199, v193, v194, v195, v196, v197, v198);
  if ( !*p_selectItem )
    goto LABEL_257;
  v206 = (System_Int32_array **)(*p_selectItem)->fields.wearerServantName;
  if ( v206 )
  {
    servantItemInfo = sub_B0D964(v206, v192->obj.klass->_1.element_class);
    if ( !servantItemInfo )
      goto LABEL_261;
  }
  if ( v192->max_length <= 1 )
    goto LABEL_259;
  v192->m_Items[1] = (Il2CppObject *)v206;
  sub_B0D840((BattleServantConfConponent_o *)&v192->m_Items[1], v206, v200, v201, v202, v203, v204, v205);
  servantItemInfo = (__int64)this->fields.servantItemInfo;
  if ( !servantItemInfo )
    goto LABEL_257;
  servantItemInfo = (__int64)EquipGraphServantItem__get_ClassName((EquipGraphServantItem_o *)servantItemInfo, v207);
  v214 = (System_Int32_array **)servantItemInfo;
  if ( servantItemInfo )
  {
    servantItemInfo = sub_B0D964(servantItemInfo, v192->obj.klass->_1.element_class);
    if ( !servantItemInfo )
      goto LABEL_261;
  }
  if ( v192->max_length <= 2 )
    goto LABEL_259;
  v192->m_Items[2] = (Il2CppObject *)v214;
  sub_B0D840((BattleServantConfConponent_o *)&v192->m_Items[2], v214, v208, v209, v210, v211, v212, v213);
  servantItemInfo = (__int64)*p_selectItem;
  if ( !*p_selectItem )
    goto LABEL_257;
  servantItemInfo = (__int64)EquipGraphListViewItem__get_WeareServantClassName(
                               (EquipGraphListViewItem_o *)servantItemInfo,
                               v215);
  v222 = (System_Int32_array **)servantItemInfo;
  if ( servantItemInfo )
  {
    servantItemInfo = sub_B0D964(servantItemInfo, v192->obj.klass->_1.element_class);
    if ( !servantItemInfo )
      goto LABEL_261;
  }
  if ( v192->max_length <= 3 )
    goto LABEL_259;
  v192->m_Items[3] = (Il2CppObject *)v222;
  sub_B0D840((BattleServantConfConponent_o *)&v192->m_Items[3], v222, v216, v217, v218, v219, v220, v221);
  v223 = this->fields.servantItemInfo;
  if ( !v223 )
    goto LABEL_257;
  servantItemInfo = (__int64)v223->fields.userServantEntity;
  if ( !servantItemInfo )
    goto LABEL_257;
  v224 = UserServantEntity__getRarity((UserServantEntity_o *)servantItemInfo, 0LL);
  if ( (BYTE3(Rarity_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !Rarity_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Rarity_TypeInfo);
  servantItemInfo = (__int64)Rarity__getRarityType(v224, 0LL);
  v231 = (System_Int32_array **)servantItemInfo;
  if ( servantItemInfo )
  {
    servantItemInfo = sub_B0D964(servantItemInfo, v192->obj.klass->_1.element_class);
    if ( !servantItemInfo )
      goto LABEL_261;
  }
  if ( v192->max_length <= 4 )
    goto LABEL_259;
  v192->m_Items[4] = (Il2CppObject *)v231;
  sub_B0D840((BattleServantConfConponent_o *)&v192->m_Items[4], v231, v225, v226, v227, v228, v229, v230);
  if ( !*p_selectItem )
    goto LABEL_257;
  servantItemInfo = (__int64)Rarity__getRarityType((*p_selectItem)->fields.weareRarity, 0LL);
  v238 = (System_Int32_array **)servantItemInfo;
  if ( servantItemInfo )
  {
    servantItemInfo = sub_B0D964(servantItemInfo, v192->obj.klass->_1.element_class);
    if ( !servantItemInfo )
      goto LABEL_261;
  }
  if ( v192->max_length <= 5 )
    goto LABEL_259;
  v192->m_Items[5] = (Il2CppObject *)v238;
  sub_B0D840((BattleServantConfConponent_o *)&v192->m_Items[5], v238, v232, v233, v234, v235, v236, v237);
  v239 = System_String__Format_43928628(v190, v192, 0LL);
  v240 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v241 = LocalizationManager__Get((System_String_o *)StringLiteral_5546/*"EQUIP_GRAPH_USE_WARNING_TITLE"*/, 0LL);
  v244 = (CommonConfirmDialog_ClickDelegate_o *)sub_B0D974(CommonConfirmDialog_ClickDelegate_TypeInfo, v242, v243);
  CommonConfirmDialog_ClickDelegate___ctor(
    v244,
    (Il2CppObject *)this,
    Method_EquipGraphListViewManager_EndSelectConfirm__,
    0LL);
  servantItemInfo = (__int64)BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
  }
  if ( !v240 )
    goto LABEL_257;
  CommonUI__OpenConfirmDialog(v240, v241, v239, v244, BalanceConfig_TypeInfo->static_fields->DefaultFontSize, 0, 0, 0LL);
}


void __fastcall EquipGraphListViewManager__SetFilterButtonImage(
        EquipGraphListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  ListViewSort_o *sort; // x0
  UISprite_o *filterSprite; // x19
  System_String_o **v6; // x8

  if ( (byte_4216DDA & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_17044/*"btn_filter_on"*/, method);
    sub_B0D8A4(&StringLiteral_17043/*"btn_filter"*/, v3);
    byte_4216DDA = 1;
  }
  sort = this->fields.sort;
  if ( !sort
    || (filterSprite = this->fields.filterSprite,
        sort = (ListViewSort_o *)ListViewSort__CheckFilterDefaultAll(sort, -1, 0LL),
        !filterSprite) )
  {
    sub_B0D97C(sort);
  }
  v6 = (System_String_o **)&StringLiteral_17043/*"btn_filter"*/;
  if ( ((unsigned __int8)sort & 1) == 0 )
    v6 = (System_String_o **)&StringLiteral_17044/*"btn_filter_on"*/;
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
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.callbackFunc,
    (System_Int32_array **)callback,
    (System_String_array **)callback,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  EquipGraphListViewManager__SetMode_28785108(this, mode, v10);
}


void __fastcall EquipGraphListViewManager__SetMode_28785108(
        EquipGraphListViewManager_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x2
  EquipGraphServantItemDraw_o *servantItemDraw; // x0
  const MethodInfo *v7; // x2
  int32_t v8; // w1

  this->fields.initMode = mode;
  this->fields.callbackCount = ListViewManager__get_ObjectSum((ListViewManager_o *)this, 0LL);
  ListViewManager__set_IsInput((ListViewManager_o *)this, mode == 2, 0LL);
  servantItemDraw = this->fields.servantItemDraw;
  if ( !servantItemDraw )
    goto LABEL_15;
  EquipGraphServantItemDraw__SetInput(servantItemDraw, this->fields.isInput, v5);
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
    sub_B0D97C(servantItemDraw);
  }
  UIScrollView__UpdatePosition((UIScrollView_o *)servantItemDraw, 0LL);
LABEL_7:
  switch ( mode )
  {
    case 3:
      v8 = 4;
      goto LABEL_13;
    case 2:
      v8 = 3;
      goto LABEL_13;
    case 1:
      v8 = 2;
LABEL_13:
      EquipGraphListViewManager__RequestListObject_28785368(this, v8, v7);
      break;
  }
}


void __fastcall EquipGraphListViewManager__SetMode_28785312(
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
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.callbackFunc2,
    (System_Int32_array **)callback,
    (System_String_array **)callback,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  EquipGraphListViewManager__SetMode_28785108(this, mode, v10);
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
  if ( (byte_4216DD0 & 1) == 0 )
  {
    this = (EquipGraphListViewManager_o *)sub_B0D8A4(&EquipGraphListViewObject_TypeInfo, obj);
    byte_4216DD0 = 1;
  }
  if ( !obj
    || (v6 = *(&EquipGraphListViewObject_TypeInfo->_2.bitflags2 + 1), *(&obj->klass->_2.bitflags2 + 1) < (unsigned int)v6)
    || (EquipGraphListViewObject_c *)obj->klass->_2.typeHierarchy[v6 - 1] != EquipGraphListViewObject_TypeInfo )
  {
    sub_B0D97C(this);
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
  ListViewSort_o *sort; // x0
  UILabel_o *v11; // x20
  UnityEngine_Object_o *sortOrderSprite; // x20
  struct ListViewSort_o *v13; // x8
  int32_t sortKind; // w9
  System_String_o **v15; // x8
  struct ListViewSort_o *v16; // x8
  _BOOL4 isAscendingOrder; // w8
  System_String_o **v18; // x9
  System_String_o **v19; // x10
  System_String_o **v20; // x8
  struct ListViewSort_o *v21; // x8
  System_String_o **v22; // x8
  UnityEngine_Object_o *bonusFilterKindLabel; // x20
  UILabel_o *v24; // x20
  System_Int32_array *bonusEventIdList; // x1

  if ( (byte_4216DDF & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, method);
    sub_B0D8A4(&StringLiteral_17072/*"btn_sort_up"*/, v3);
    sub_B0D8A4(&StringLiteral_17156/*"btn_txt_up"*/, v4);
    sub_B0D8A4(&StringLiteral_17112/*"btn_txt_new"*/, v5);
    sub_B0D8A4(&StringLiteral_17102/*"btn_txt_down"*/, v6);
    sub_B0D8A4(&StringLiteral_17119/*"btn_txt_old"*/, v7);
    sub_B0D8A4(&StringLiteral_17069/*"btn_sort_down"*/, v8);
    byte_4216DDF = 1;
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
    v11 = this->fields.sortKindLabel;
    sort = (ListViewSort_o *)ListViewSort__GetSortKindButtonText(sort, 0LL);
    if ( !v11 )
      goto LABEL_45;
    UILabel__set_text(v11, (System_String_o *)sort, 0LL);
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
    v13 = this->fields.sort;
    if ( !v13 )
      goto LABEL_45;
    sortKind = v13->fields.sortKind;
    if ( sortKind == 11 || sortKind == 1 )
    {
      sort = (ListViewSort_o *)this->fields.sortExplanationSprite;
      if ( !sort )
        goto LABEL_45;
      v15 = (System_String_o **)(v13->fields.isAscendingOrder ? &StringLiteral_17119/*"btn_txt_old"*/ : &StringLiteral_17112/*"btn_txt_new"*/);
      UISprite__set_spriteName((UISprite_o *)sort, *v15, 0LL);
      v16 = this->fields.sort;
      if ( !v16 )
        goto LABEL_45;
      sort = (ListViewSort_o *)this->fields.sortOrderSprite;
      if ( !sort )
        goto LABEL_45;
      isAscendingOrder = v16->fields.isAscendingOrder;
      v18 = (System_String_o **)&StringLiteral_17069/*"btn_sort_down"*/;
      v19 = (System_String_o **)&StringLiteral_17072/*"btn_sort_up"*/;
    }
    else
    {
      sort = (ListViewSort_o *)this->fields.sortExplanationSprite;
      if ( !sort )
        goto LABEL_45;
      v20 = (System_String_o **)(v13->fields.isAscendingOrder ? &StringLiteral_17156/*"btn_txt_up"*/ : &StringLiteral_17102/*"btn_txt_down"*/);
      UISprite__set_spriteName((UISprite_o *)sort, *v20, 0LL);
      v21 = this->fields.sort;
      if ( !v21 )
        goto LABEL_45;
      sort = (ListViewSort_o *)this->fields.sortOrderSprite;
      if ( !sort )
        goto LABEL_45;
      isAscendingOrder = v21->fields.isAscendingOrder;
      v18 = (System_String_o **)&StringLiteral_17072/*"btn_sort_up"*/;
      v19 = (System_String_o **)&StringLiteral_17069/*"btn_sort_down"*/;
    }
    if ( isAscendingOrder )
      v22 = v18;
    else
      v22 = v19;
    UISprite__set_spriteName((UISprite_o *)sort, *v22, 0LL);
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
      v24 = this->fields.bonusFilterKindLabel;
      bonusEventIdList = this->fields.bonusEventIdList;
      if ( this->fields.isQuestStart )
      {
        sort = (ListViewSort_o *)ListViewSort__GetBonusKindText_32859020(sort, bonusEventIdList, 0LL, 0, 0LL, 0LL);
        if ( v24 )
        {
LABEL_42:
          UILabel__set_text(v24, (System_String_o *)sort, 0LL);
          return;
        }
      }
      else
      {
        sort = (ListViewSort_o *)ListViewSort__GetBonusKind2Text_32861208(
                                   sort,
                                   bonusEventIdList,
                                   0LL,
                                   0LL,
                                   0LL,
                                   0LL,
                                   0LL);
        if ( v24 )
          goto LABEL_42;
      }
    }
LABEL_45:
    sub_B0D97C(sort);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EquipGraphListViewManager___SelectEquip_b__71_0(
        EquipGraphListViewManager_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7
  System_Action_o *selectItemCallbackFunc; // x20

  if ( (byte_4216DE2 & 1) == 0 )
  {
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, isDecide);
    byte_4216DE2 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B0D97C(0LL);
  CommonUI__CloseNotificationDialog(Instance, 0LL);
  selectItemCallbackFunc = this->fields.selectItemCallbackFunc;
  if ( selectItemCallbackFunc )
  {
    this->fields.selectItemCallbackFunc = 0LL;
    sub_B0D840((BattleServantConfConponent_o *)&this->fields.selectItemCallbackFunc, 0LL, v5, v6, v7, v8, v9, v10);
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

  if ( (byte_4216DBF & 1) == 0 )
  {
    sub_B0D8A4(&EquipGraphListViewManager_CallbackFunc_TypeInfo, value);
    byte_4216DBF = 1;
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
    v8 = sub_B022BC(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_B0DC70(v7);
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

  if ( (byte_4216DC1 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, value);
    byte_4216DC1 = 1;
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
    v8 = sub_B022BC(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_B0DC70(v7);
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

  if ( (byte_4216DC3 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, value);
    byte_4216DC3 = 1;
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
    v8 = sub_B022BC(p_selectItemCallbackFunc, v7, selectItemCallbackFunc);
    v9 = selectItemCallbackFunc == (System_Delegate_o *)v8;
    selectItemCallbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_B0DC70(v7);
  EquipGraphListViewManager__remove_selectItemCallbackFunc(v10, v11, v12);
}


System_Collections_Generic_List_EquipGraphListViewObject__o *__fastcall EquipGraphListViewManager__get_ClippingObjectList(
        EquipGraphListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v12; // x19
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  Il2CppObject *current; // x21
  _BOOL8 v15; // x0
  EquipGraphListViewObject_o *Component_srcLineSprite; // x0
  const MethodInfo *v17; // x1
  EventMissionProgressRequest_Argument_ProgressData_o *v18; // x21
  ListViewItem_o *Item; // x0
  _BOOL8 v20; // x0
  System_Collections_Generic_List_Enumerator_T__o v22; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v23; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4216DC8 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, method);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v4);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v5);
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_EquipGraphListViewObject___, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EquipGraphListViewObject__Add__, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EquipGraphListViewObject___ctor__, v9);
    sub_B0D8A4(&System_Collections_Generic_List_EquipGraphListViewObject__TypeInfo, v10);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v11);
    byte_4216DC8 = 1;
  }
  memset(&v23, 0, sizeof(v23));
  v12 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_EquipGraphListViewObject__TypeInfo,
                                                                                                  method,
                                                                                                  v2);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v12,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_EquipGraphListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_B0D97C(0LL);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v22,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)objectList,
    (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v23 = v22;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v23,
            (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v23.fields.current;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v15 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v15 )
    {
      if ( !current )
        sub_B0D97C(v15);
      Component_srcLineSprite = (EquipGraphListViewObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                (UnityEngine_GameObject_o *)current,
                                                                (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_EquipGraphListViewObject___);
      v18 = (EventMissionProgressRequest_Argument_ProgressData_o *)Component_srcLineSprite;
      if ( !Component_srcLineSprite )
        sub_B0D97C(0LL);
      Item = (ListViewItem_o *)EquipGraphListViewObject__GetItem(Component_srcLineSprite, v17);
      if ( !Item )
        sub_B0D97C(0LL);
      if ( Item->fields.isTermination )
      {
        v20 = ListViewManager__ClippingItem_23719204((ListViewManager_o *)this, Item, 0LL);
        if ( v20 )
        {
          if ( !v12 )
            sub_B0D97C(v20);
          goto LABEL_16;
        }
      }
      else
      {
        if ( !v12 )
          sub_B0D97C(Item);
LABEL_16:
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v12,
          v18,
          (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_EquipGraphListViewObject__Add__);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v23,
    (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_EquipGraphListViewObject__o *)v12;
}


System_Collections_Generic_List_EquipGraphListViewObject__o *__fastcall EquipGraphListViewManager__get_ObjectList(
        EquipGraphListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v12; // x19
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  Il2CppObject *current; // x20
  _BOOL8 v15; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *Component_srcLineSprite; // x0
  System_Collections_Generic_List_Enumerator_T__o v18; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v19; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_4216DC7 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, method);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v4);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v5);
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_EquipGraphListViewObject___, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EquipGraphListViewObject__Add__, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EquipGraphListViewObject___ctor__, v9);
    sub_B0D8A4(&System_Collections_Generic_List_EquipGraphListViewObject__TypeInfo, v10);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v11);
    byte_4216DC7 = 1;
  }
  memset(&v19, 0, sizeof(v19));
  v12 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_EquipGraphListViewObject__TypeInfo,
                                                                                                  method,
                                                                                                  v2);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v12,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_EquipGraphListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_B0D97C(0LL);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v18,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)objectList,
    (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v19 = v18;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v19,
            (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v19.fields.current;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v15 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v15 )
    {
      if ( !current )
        sub_B0D97C(v15);
      Component_srcLineSprite = (EventMissionProgressRequest_Argument_ProgressData_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                                         (UnityEngine_GameObject_o *)current,
                                                                                         (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_EquipGraphListViewObject___);
      if ( !v12 )
        sub_B0D97C(Component_srcLineSprite);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v12,
        Component_srcLineSprite,
        (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_EquipGraphListViewObject__Add__);
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v19,
    (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_EquipGraphListViewObject__o *)v12;
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

  if ( (byte_4216DC0 & 1) == 0 )
  {
    sub_B0D8A4(&EquipGraphListViewManager_CallbackFunc_TypeInfo, value);
    byte_4216DC0 = 1;
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
    v8 = sub_B022BC(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_B0DC70(v7);
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

  if ( (byte_4216DC2 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, value);
    byte_4216DC2 = 1;
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
    v8 = sub_B022BC(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_B0DC70(v7);
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

  if ( (byte_4216DC4 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, value);
    byte_4216DC4 = 1;
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
    v8 = sub_B022BC(p_selectItemCallbackFunc, v7, selectItemCallbackFunc);
    v9 = selectItemCallbackFunc == (System_Delegate_o *)v8;
    selectItemCallbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_B0DC70(v7);
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
  sub_B0D840(p_method, object);
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
  if ( (byte_4211B0B & 1) == 0 )
  {
    sub_B0D8A4(&int_TypeInfo, *(_QWORD *)&kind);
    sub_B0D8A4(&EquipGraphListViewManager_ResultKind_TypeInfo, v9);
    byte_4211B0B = 1;
  }
  v11[2] = 0LL;
  v11[0] = j_il2cpp_value_box_0(EquipGraphListViewManager_ResultKind_TypeInfo, &v13);
  v11[1] = j_il2cpp_value_box_0(int_TypeInfo, &v12);
  return (System_IAsyncResult_o *)sub_B0D848(this, v11, callback, object);
}


void __fastcall EquipGraphListViewManager_CallbackFunc__EndInvoke(
        EquipGraphListViewManager_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B0D84C(result, 0LL, method);
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
        sub_B0D960(*(_QWORD *)&v20->fields.extra_arg, *(_QWORD *)&kind, *(_QWORD *)&result, method);
      if ( (sub_B0D8D4(v22) & 1) == 0 )
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
      v24 = sub_B0D8CC(v22);
      v25 = sub_B0DCD0(v22);
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
            v18 = sub_AA67A0(v21, v28, v29);
          }
          v17 = *(_QWORD *)(v18 + 8);
        }
        else
        {
          v17 = *(_QWORD *)(*v21 + 16LL * *(unsigned __int16 *)(v22 + 72) + 320);
        }
        v19 = (void (__fastcall **)(__int64 *, _QWORD, _QWORD, _QWORD))sub_B0D954(v17, v22);
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
            v16 = sub_AA67A0(v21, class_0, v10);
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