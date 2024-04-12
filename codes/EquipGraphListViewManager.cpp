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

  if ( (byte_42B2609 & 1) == 0 )
  {
    sub_B52984(&EquipGraphListViewManager_TypeInfo);
    sub_B52984(&ListViewSort_TypeInfo);
    sub_B52984(&StringLiteral_6100/*"EquipGraph"*/);
    sub_B52984(&StringLiteral_15517/*"WarBoardEquipGraph"*/);
    byte_42B2609 = 1;
  }
  v1 = (ListViewSort_o *)sub_B52A54(ListViewSort_TypeInfo);
  ListViewSort___ctor_33999208(v1, (System_String_o *)StringLiteral_6100/*"EquipGraph"*/, 3, 0, 0LL);
  static_fields = (BattleServantConfConponent_o *)EquipGraphListViewManager_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v1;
  sub_B52920(static_fields, (System_Int32_array **)v1, v3, v4, v5, v6, v7, v8);
  v9 = (ListViewSort_o *)sub_B52A54(ListViewSort_TypeInfo);
  ListViewSort___ctor_33999208(v9, (System_String_o *)StringLiteral_15517/*"WarBoardEquipGraph"*/, 3, 0, 0LL);
  v10 = EquipGraphListViewManager_TypeInfo->static_fields;
  v10->warBoardSortStatus = v9;
  sub_B52920(
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
    sub_B52920(
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
    sub_B52A5C(this, method);
  }
  ListViewSort__Save((ListViewSort_o *)this, 0LL);
  EquipGraphListViewManager__ModifyList(v9, 1, v13);
  EquipGraphListViewManager__SetMode_29447688(v9, 2, v14);
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
  System_String_o *v62; // x28
  Il2CppObject *v63; // x26
  Il2CppObject *v64; // x0
  __int64 v65; // x8
  UserServantEntity_array *v66; // x20
  unsigned __int64 v67; // x23
  UserServantEntity_o **m_Items; // x22
  UserServantEntity_o *v69; // x26
  PartyListViewItem_array *v70; // x24
  __int64 v71; // x28
  struct EquipGraphServantItem_o **v72; // x19
  int32_t memberIndex; // w25
  EquipGraphListViewItem_o *v74; // x0
  int64_t v75; // x3
  EventMissionProgressRequest_Argument_ProgressData_o *v76; // x27
  int64_t v77; // x4
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x8
  UILabel_o *emptyMessageLabel; // x20
  System_String_o **v80; // x8
  System_String_o *v81; // x21
  const MethodInfo *v82; // x1
  const MethodInfo *v83; // x1
  __int64 v84; // x0
  int32_t memberIdx; // [xsp+0h] [xbp-80h]
  const MethodInfo *v86; // [xsp+8h] [xbp-78h]
  struct EquipGraphServantItem_o **v87; // [xsp+18h] [xbp-68h]
  PartyListViewItem_o *v88; // [xsp+18h] [xbp-68h]
  EquipGraphListViewManager_o *v89; // [xsp+20h] [xbp-60h]
  int v90; // [xsp+28h] [xbp-58h] BYREF
  int v91; // [xsp+2Ch] [xbp-54h] BYREF

  if ( (byte_42B25F1 & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_B52984(&EquipGraphListViewItem_TypeInfo);
    sub_B52984(&EquipGraphListViewManager_TypeInfo);
    sub_B52984(&EquipGraphServantItem_TypeInfo);
    sub_B52984(&int_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_B52984(&LocalizationManager_TypeInfo);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B52984(&StringLiteral_11775/*"SERVANT_EQUIP_EMPTY"*/);
    sub_B52984(&StringLiteral_11968/*"SERVANT_SORT_FILTER_RESULT_EMPTY"*/);
    sub_B52984(&StringLiteral_12558/*"SUM_INFO"*/);
    byte_42B25F1 = 1;
  }
  this->fields.waveDeckItemList = baseDeckItemList;
  sub_B52920(
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
  sub_B52920(
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
  sub_B52920(
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
  sub_B52920(
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
    v89 = this;
    v41 = (EquipGraphServantItem_o *)sub_B52A54(EquipGraphServantItem_TypeInfo);
    EquipGraphServantItem___ctor(v41, v40, v42);
    v43 = (System_Int32_array **)v41;
    p_servantItemInfo = &this->fields.servantItemInfo;
    this->fields.servantItemInfo = v41;
    v45 = (ListViewManager_o *)this;
    sub_B52920((BattleServantConfConponent_o *)&this->fields.servantItemInfo, v43, v46, v47, v48, v49, v50, v51);
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
    servantItemDraw = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !servantItemDraw )
      goto LABEL_71;
    servantItemDraw = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                 (DataManager_o *)servantItemDraw,
                                 (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_UserServantMaster___);
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
      v87 = p_servantItemInfo;
      monitor = (UILabel_o *)v45[1].monitor;
      v61 = baseDeckItemList;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      servantItemDraw = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_12558/*"SUM_INFO"*/, 0LL);
      if ( !v59 )
        goto LABEL_71;
      v62 = (System_String_o *)servantItemDraw;
      v91 = *(_QWORD *)&v59->max_length;
      servantItemDraw = j_il2cpp_value_box_0(int_TypeInfo, &v91);
      if ( !v56 )
        goto LABEL_71;
      v63 = (Il2CppObject *)servantItemDraw;
      v90 = *(_DWORD *)(v56 + 148);
      v64 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v90);
      servantItemDraw = (__int64)System_String__Format_44563852(v62, v63, v64, 0LL);
      if ( !monitor )
        goto LABEL_71;
      UILabel__set_text(monitor, (System_String_o *)servantItemDraw, 0LL);
      baseDeckItemList = v61;
      p_servantItemInfo = v87;
      v45 = (ListViewManager_o *)v89;
    }
    servantItemDraw = (__int64)v45[1].fields.emptyMessageLabel;
    if ( !servantItemDraw )
      goto LABEL_71;
    servantItemDraw = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)servantItemDraw, 0LL);
    if ( !*p_sort )
      goto LABEL_71;
    if ( !servantItemDraw )
      goto LABEL_71;
    v88 = partyItem;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)servantItemDraw, (*p_sort)->fields.isBonusKind, 0LL);
    ListViewManager__CreateList(v45, 0, 0LL);
    if ( !v59 )
      goto LABEL_71;
    v65 = *(_QWORD *)&v59->max_length;
    if ( (int)v65 >= 1 )
    {
      v66 = v59;
      v67 = 0LL;
      m_Items = v59->m_Items;
      while ( 1 )
      {
        if ( v67 >= (unsigned int)v65 )
        {
          v84 = sub_B52A88(servantItemDraw);
          sub_B52A28(v84, 0LL);
        }
        servantItemDraw = (__int64)*p_servantItemInfo;
        if ( !*p_servantItemInfo )
          break;
        v69 = m_Items[v67];
        v70 = baseDeckItemList;
        servantItemDraw = EquipGraphServantItem__get_EquipUserSvtId((EquipGraphServantItem_o *)servantItemDraw, v24);
        if ( !*p_servantItemInfo )
          break;
        v71 = servantItemDraw;
        v72 = p_servantItemInfo;
        memberIndex = v89->fields.memberIndex;
        v74 = (EquipGraphListViewItem_o *)sub_B52A54(EquipGraphListViewItem_TypeInfo);
        memberIdx = memberIndex;
        v45 = (ListViewManager_o *)v89;
        v75 = v71;
        v76 = (EventMissionProgressRequest_Argument_ProgressData_o *)v74;
        baseDeckItemList = v70;
        EquipGraphListViewItem___ctor(v74, v67, v69, v75, v77, v70, v88, setupInfo, memberIdx, v86);
        servantItemDraw = (__int64)v89->fields.itemList;
        if ( !servantItemDraw )
          break;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)servantItemDraw,
          v76,
          (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
        LODWORD(v65) = v66->max_length;
        ++v67;
        p_servantItemInfo = v72;
        if ( (__int64)v67 >= (int)v65 )
          goto LABEL_61;
      }
LABEL_71:
      sub_B52A5C(servantItemDraw, v24);
    }
LABEL_61:
    itemList = v45->fields.itemList;
    if ( !itemList )
      goto LABEL_71;
    emptyMessageLabel = v45->fields.emptyMessageLabel;
    v80 = (System_String_o **)(itemList->fields._size <= 0 ? &StringLiteral_11775/*"SERVANT_EQUIP_EMPTY"*/ : &StringLiteral_11968/*"SERVANT_SORT_FILTER_RESULT_EMPTY"*/);
    v81 = *v80;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    servantItemDraw = (__int64)LocalizationManager__Get(v81, 0LL);
    if ( !emptyMessageLabel )
      goto LABEL_71;
    UILabel__set_text(emptyMessageLabel, (System_String_o *)servantItemDraw, 0LL);
    EquipGraphListViewManager__RefrashListDisp((EquipGraphListViewManager_o *)v45, v82);
    ListViewManager__SortItem(v45, -1, 0, -1, 0LL);
    EquipGraphListViewManager__SetFilterButtonImage((EquipGraphListViewManager_o *)v45, v83);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EquipGraphListViewManager__CreateList_29443440(
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
  System_String_o *v50; // x27
  Il2CppObject *v51; // x28
  Il2CppObject *v52; // x0
  __int64 v53; // x8
  UserServantEntity_array *v54; // x24
  unsigned __int64 v55; // x22
  UserServantEntity_o **m_Items; // x28
  UserServantEntity_o *v57; // x25
  int64_t v58; // x27
  EquipGraphListViewItem_o *v59; // x26
  int64_t v60; // x4
  const MethodInfo *v61; // x7
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x8
  UILabel_o *emptyMessageLabel; // x20
  System_String_o **v64; // x8
  System_String_o *v65; // x21
  const MethodInfo *v66; // x1
  const MethodInfo *v67; // x1
  __int64 v68; // x0
  WarBoardPartyListViewItem_o *partyItema; // [xsp+8h] [xbp-68h]
  EquipGraphListViewManager_o *v70; // [xsp+10h] [xbp-60h]
  int v71; // [xsp+18h] [xbp-58h] BYREF
  int v72; // [xsp+1Ch] [xbp-54h] BYREF

  if ( (byte_42B25F2 & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_B52984(&EquipGraphListViewItem_TypeInfo);
    sub_B52984(&EquipGraphListViewManager_TypeInfo);
    sub_B52984(&EquipGraphServantItem_TypeInfo);
    sub_B52984(&int_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_B52984(&LocalizationManager_TypeInfo);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B52984(&StringLiteral_11775/*"SERVANT_EQUIP_EMPTY"*/);
    sub_B52984(&StringLiteral_11968/*"SERVANT_SORT_FILTER_RESULT_EMPTY"*/);
    sub_B52984(&StringLiteral_12558/*"SUM_INFO"*/);
    byte_42B25F2 = 1;
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
  sub_B52920(
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
  sub_B52920(
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
  sub_B52920(
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
    v32 = (EquipGraphServantItem_o *)sub_B52A54(EquipGraphServantItem_TypeInfo);
    EquipGraphServantItem___ctor(v32, v31, v33);
    p_servantItemInfo = &this->fields.servantItemInfo;
    this->fields.servantItemInfo = v32;
    sub_B52920(
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
    MemberItem = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !MemberItem )
      goto LABEL_70;
    partyItema = partyItem;
    MemberItem = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                            (DataManager_o *)MemberItem,
                            (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_UserServantMaster___);
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
    v70 = this;
    if ( UnityEngine_Object__op_Inequality(infoDataLabel, 0LL, 0LL) )
    {
      v49 = this->fields.infoDataLabel;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      MemberItem = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_12558/*"SUM_INFO"*/, 0LL);
      if ( !v48 )
        goto LABEL_70;
      v50 = (System_String_o *)MemberItem;
      v72 = *(_QWORD *)&v48->max_length;
      MemberItem = j_il2cpp_value_box_0(int_TypeInfo, &v72);
      if ( !v45 )
        goto LABEL_70;
      v51 = (Il2CppObject *)MemberItem;
      v71 = *(_DWORD *)(v45 + 148);
      v52 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v71);
      MemberItem = (__int64)System_String__Format_44563852(v50, v51, v52, 0LL);
      if ( !v49 )
        goto LABEL_70;
      UILabel__set_text(v49, (System_String_o *)MemberItem, 0LL);
      this = v70;
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
    v53 = *(_QWORD *)&v48->max_length;
    if ( (int)v53 >= 1 )
    {
      v54 = v48;
      v55 = 0LL;
      m_Items = v48->m_Items;
      while ( 1 )
      {
        if ( v55 >= (unsigned int)v53 )
        {
          v68 = sub_B52A88(MemberItem);
          sub_B52A28(v68, 0LL);
        }
        MemberItem = (__int64)*p_servantItemInfo;
        if ( !*p_servantItemInfo )
          break;
        v57 = m_Items[v55];
        MemberItem = EquipGraphServantItem__get_EquipUserSvtId((EquipGraphServantItem_o *)MemberItem, v16);
        if ( !*p_servantItemInfo )
          break;
        v58 = MemberItem;
        v59 = (EquipGraphListViewItem_o *)sub_B52A54(EquipGraphListViewItem_TypeInfo);
        EquipGraphListViewItem___ctor_29428568(v59, v55, v57, v58, v60, partyItema, setupInfo, v61);
        this = v70;
        MemberItem = (__int64)v70->fields.itemList;
        if ( !MemberItem )
          break;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)MemberItem,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v59,
          (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
        LODWORD(v53) = v54->max_length;
        if ( (__int64)++v55 >= (int)v53 )
          goto LABEL_59;
      }
LABEL_70:
      sub_B52A5C(MemberItem, v16);
    }
LABEL_59:
    itemList = this->fields.itemList;
    if ( !itemList )
      goto LABEL_70;
    emptyMessageLabel = this->fields.emptyMessageLabel;
    v64 = (System_String_o **)(itemList->fields._size <= 0 ? &StringLiteral_11775/*"SERVANT_EQUIP_EMPTY"*/ : &StringLiteral_11968/*"SERVANT_SORT_FILTER_RESULT_EMPTY"*/);
    v65 = *v64;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    MemberItem = (__int64)LocalizationManager__Get(v65, 0LL);
    if ( !emptyMessageLabel )
      goto LABEL_70;
    UILabel__set_text(emptyMessageLabel, (System_String_o *)MemberItem, 0LL);
    EquipGraphListViewManager__RefrashListDisp(this, v66);
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
    EquipGraphListViewManager__SetFilterButtonImage(this, v67);
  }
}


void __fastcall EquipGraphListViewManager__DeleteContinueData(const MethodInfo *method)
{
  __int64 v1; // x1
  EquipGraphListViewManager_c *v2; // x0
  ListViewSort_o *sortStatus; // x0

  if ( (byte_42B25ED & 1) == 0 )
  {
    sub_B52984(&EquipGraphListViewManager_TypeInfo);
    byte_42B25ED = 1;
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
    sub_B52A5C(sortStatus, v1);
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
    sub_B52A5C(0LL, v3);
  ListViewSort__Save(sort, 0LL);
  this->fields.bonusEventIdList = 0LL;
  sub_B52920((BattleServantConfConponent_o *)&this->fields.bonusEventIdList, 0LL, v5, v6, v7, v8, v9, v10);
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

  if ( (byte_42B25FF & 1) == 0 )
  {
    sub_B52984(&BalanceConfig_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__);
    sub_B52984(&EquipGraphListViewItem_TypeInfo);
    sub_B52984(&EquipGraphListViewObject_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_42B25FF = 1;
  }
  memset(&v84, 0, sizeof(v84));
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
              Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v85, 0LL);
              if ( !v38 )
                goto LABEL_131;
              v41 = Instance;
              EquipSvtId = PartyOrganizationListViewItem__get_EquipSvtId(v38, 0LL);
              if ( v41 == CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(EquipSvtId, 0LL) )
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
        sub_B52A5C(Instance, v6);
      v43 = selectItem->fields._OrganizedWave_k__BackingField - 1;
      if ( v43 >= waveDeckItemList->max_length )
      {
LABEL_136:
        v79 = sub_B52A88(Instance);
        sub_B52A28(v79, 0LL);
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
          Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44789576(&v82, 0LL);
          if ( v50 )
          {
            PartyListViewItem__SetEquip(v50, memberIndex, Instance, 0LL);
            Instance = (int64_t)this->fields.itemList;
            if ( Instance )
            {
              System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
                &v81,
                (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)Instance,
                (const MethodInfo_2FF2480 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
              v84 = v81;
              while ( 1 )
              {
                v51 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                        &v84,
                        (const MethodInfo_201195C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
                if ( !v51 )
                  break;
                current = (EquipGraphListViewItem_o *)v84.fields.current;
                if ( !v84.fields.current
                  || (v55 = *(&EquipGraphListViewItem_TypeInfo->_2.bitflags2 + 1),
                      *(&v84.fields.current->klass->_2.bitflags2 + 1) < (unsigned int)v55)
                  || (EquipGraphListViewItem_c *)v84.fields.current->klass->_2.typeHierarchy[v55 - 1] != EquipGraphListViewItem_TypeInfo )
                {
                  sub_B52A5C(v51, v52);
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
                    sub_B52A5C(v57, v58);
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
                  if ( (byte_42B2612 & 1) == 0 )
                  {
                    sub_B52984(&EquipGraphListViewItem_TypeInfo);
                    byte_42B2612 = 1;
                  }
                  EquipGraphListViewObject__SetupDisp(v62, v63);
                }
              }
              System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
                &v84,
                (const MethodInfo_2011958 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
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
    (const MethodInfo_2FF2480 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  v84.fields.current = (Il2CppObject *)v83.fields.fakeValue;
  *(_OWORD *)&v84.fields.list = *(_OWORD *)&v83.fields.currentCryptoKey;
  while ( 1 )
  {
    v15 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v84,
            (const MethodInfo_201195C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    if ( !v15 )
      break;
    v17 = v84.fields.current;
    if ( !v84.fields.current
      || (v18 = *(&EquipGraphListViewItem_TypeInfo->_2.bitflags2 + 1),
          *(&v84.fields.current->klass->_2.bitflags2 + 1) < (unsigned int)v18)
      || (EquipGraphListViewItem_c *)v84.fields.current->klass->_2.typeHierarchy[v18 - 1] != EquipGraphListViewItem_TypeInfo )
    {
      sub_B52A5C(v15, v16);
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
      if ( SHIDWORD(v17[14].monitor) > 0 || BYTE4(v17[15].klass) )
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
            sub_B52A5C(v23, v24);
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
          if ( (byte_42B2612 & 1) == 0 )
          {
            sub_B52984(&EquipGraphListViewItem_TypeInfo);
            byte_42B2612 = 1;
          }
          EquipGraphListViewObject__SetupDisp(v28, v29);
        }
      }
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v84,
    (const MethodInfo_2011958 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
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
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44789576(&v80, 0LL);
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
          if ( (byte_42B2612 & 1) == 0 )
          {
            sub_B52984(&EquipGraphListViewItem_TypeInfo);
            byte_42B2612 = 1;
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
    sub_B52920((BattleServantConfConponent_o *)&this->fields.selectItemCallbackFunc, 0LL, v7, v8, v9, v10, v11, v12);
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

  if ( (byte_42B2601 & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&Method_EquipGraphListViewManager_EndCloseSelectFilterKind__);
    sub_B52984(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_42B2601 = 1;
  }
  if ( isDecide )
  {
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
    EquipGraphListViewManager__SetFilterButtonImage(this, v5);
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v7 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
  System_Action___ctor(v7, (Il2CppObject *)this, Method_EquipGraphListViewManager_EndCloseSelectFilterKind__, 0LL);
  if ( !Instance )
    sub_B52A5C(v8, v9);
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

  if ( (byte_42B2605 & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&Method_EquipGraphListViewManager_EndCloseSelectSortKind__);
    sub_B52984(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_42B2605 = 1;
  }
  if ( isDecide )
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v6 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
  System_Action___ctor(v6, (Il2CppObject *)this, Method_EquipGraphListViewManager_EndCloseSelectSortKind__, 0LL);
  if ( !Instance )
    sub_B52A5C(v7, v8);
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

  if ( (byte_42B2608 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__);
    sub_B52984(&EquipGraphListViewItem_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    sub_B52984(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_42B2608 = 1;
  }
  memset(&v15, 0, sizeof(v15));
  itemList = this->fields.itemList;
  if ( !itemList )
    sub_B52A5C(0LL, *(_QWORD *)&svtId);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v15,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)itemList,
    (const MethodInfo_2FF2480 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  v6 = 0LL;
  while ( 1 )
  {
    v12 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v15,
            (const MethodInfo_201195C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    if ( !v12 )
      break;
    current = v15.fields.current;
    if ( !v15.fields.current
      || (v8 = *(&EquipGraphListViewItem_TypeInfo->_2.bitflags2 + 1),
          *(&v15.fields.current->klass->_2.bitflags2 + 1) < (unsigned int)v8)
      || (EquipGraphListViewItem_c *)v15.fields.current->klass->_2.typeHierarchy[v8 - 1] != EquipGraphListViewItem_TypeInfo )
    {
      sub_B52A5C(v12, v13);
    }
    if ( (EquipGraphListViewItem_c *)v15.fields.current->klass->_2.typeHierarchy[*(&EquipGraphListViewItem_TypeInfo->_2.bitflags2
                                                                                 + 1)
                                                                               - 1] != EquipGraphListViewItem_TypeInfo )
      current = 0LL;
    klass = current[7].klass;
    if ( !klass )
      sub_B52A5C(v12, v13);
    declaringType = klass->_1.declaringType;
    parent = klass->_1.parent;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v16.fields.currentCryptoKey = declaringType;
    *(_QWORD *)&v16.fields.fakeValue = parent;
    if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v16, 0LL) == svtId )
      ++v6;
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v15,
    (const MethodInfo_2011958 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
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

  if ( (byte_42B25F4 & 1) == 0 )
  {
    sub_B52984(&EquipGraphListViewItem_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    byte_42B25F4 = 1;
  }
  itemList = this->fields.itemList;
  if ( !itemList )
    return 0LL;
  if ( itemList->fields._size <= (unsigned int)index )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
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
    sub_B52A5C(0LL, method);
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

  if ( (byte_42B25FC & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__);
    sub_B52984(&EquipGraphListViewItem_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    byte_42B25FC = 1;
  }
  memset(&v10, 0, sizeof(v10));
  itemList = this->fields.itemList;
  if ( !itemList )
    sub_B52A5C(0LL, method);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v10,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)itemList,
    (const MethodInfo_2FF2480 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  while ( 1 )
  {
    v4 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
           &v10,
           (const MethodInfo_201195C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    if ( !v4 )
      break;
    if ( !v10.fields.current
      || (v6 = *(&EquipGraphListViewItem_TypeInfo->_2.bitflags2 + 1),
          *(&v10.fields.current->klass->_2.bitflags2 + 1) < (unsigned int)v6)
      || (EquipGraphListViewItem_c *)v10.fields.current->klass->_2.typeHierarchy[v6 - 1] != EquipGraphListViewItem_TypeInfo )
    {
      sub_B52A5C(v4, v5);
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
    (const MethodInfo_2011958 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
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

  if ( (byte_42B25FD & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__);
    sub_B52984(&EquipGraphListViewItem_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    byte_42B25FD = 1;
  }
  memset(&v10, 0, sizeof(v10));
  itemList = this->fields.itemList;
  if ( !itemList )
    sub_B52A5C(0LL, method);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v10,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)itemList,
    (const MethodInfo_2FF2480 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  while ( 1 )
  {
    v4 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
           &v10,
           (const MethodInfo_201195C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    if ( !v4 )
      break;
    current = v10.fields.current;
    if ( !v10.fields.current
      || (v7 = *(&EquipGraphListViewItem_TypeInfo->_2.bitflags2 + 1),
          *(&v10.fields.current->klass->_2.bitflags2 + 1) < (unsigned int)v7)
      || (EquipGraphListViewItem_c *)v10.fields.current->klass->_2.typeHierarchy[v7 - 1] != EquipGraphListViewItem_TypeInfo )
    {
      sub_B52A5C(v4, v5);
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
    (const MethodInfo_2011958 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
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
  const MethodInfo_2FE1DCC *v23; // x2
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

  if ( (byte_42B25F6 & 1) == 0 )
  {
    sub_B52984(&EquipGraphListViewItem_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_long__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_long__ToArray__);
    sub_B52984(&Method_System_Collections_Generic_List_long___ctor__);
    sub_B52984(&Method_System_Collections_Generic_List_long__get_Count__);
    sub_B52984(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_B52984(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_B52984(&System_Collections_Generic_List_long__TypeInfo);
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_42B25F6 = 1;
  }
  v6 = (System_Collections_Generic_List_long__o *)sub_B52A54(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v6,
    (const MethodInfo_2FE1070 *)Method_System_Collections_Generic_List_long___ctor__);
  v7 = (System_Collections_Generic_List_long__o *)sub_B52A54(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v7,
    (const MethodInfo_2FE1070 *)Method_System_Collections_Generic_List_long___ctor__);
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
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
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
          v8 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44789576(&v50, 0LL);
          if ( !v7 )
            break;
          v23 = (const MethodInfo_2FE1DCC *)Method_System_Collections_Generic_List_long__Add__;
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
          v8 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44789576(&v49, 0LL);
          if ( !v6 )
            break;
          v23 = (const MethodInfo_2FE1DCC *)Method_System_Collections_Generic_List_long__Add__;
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
    sub_B52A5C(v8, v9);
  }
LABEL_28:
  if ( !v6 || !v7 )
    goto LABEL_33;
  if ( v7->fields._size + v6->fields._size < 1 )
  {
    *choiceList = 0LL;
    sub_B52920((BattleServantConfConponent_o *)choiceList, 0LL, v10, v11, v12, v13, v14, v15);
    *unchoiceList = 0LL;
    sub_B52920((BattleServantConfConponent_o *)unchoiceList, 0LL, v42, v43, v44, v45, v46, v47);
    return 0;
  }
  else
  {
    v27 = System_Collections_Generic_List_long___ToArray(
            v6,
            (const MethodInfo_2FE3ED8 *)Method_System_Collections_Generic_List_long__ToArray__);
    *choiceList = v27;
    sub_B52920((BattleServantConfConponent_o *)choiceList, (System_Int32_array **)v27, v28, v29, v30, v31, v32, v33);
    v34 = System_Collections_Generic_List_long___ToArray(
            v7,
            (const MethodInfo_2FE3ED8 *)Method_System_Collections_Generic_List_long__ToArray__);
    *unchoiceList = v34;
    sub_B52920((BattleServantConfConponent_o *)unchoiceList, (System_Int32_array **)v34, v35, v36, v37, v38, v39, v40);
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
  const MethodInfo_2FE1DCC *v23; // x2
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

  if ( (byte_42B25F5 & 1) == 0 )
  {
    sub_B52984(&EquipGraphListViewItem_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_long__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_long__ToArray__);
    sub_B52984(&Method_System_Collections_Generic_List_long___ctor__);
    sub_B52984(&Method_System_Collections_Generic_List_long__get_Count__);
    sub_B52984(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_B52984(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_B52984(&System_Collections_Generic_List_long__TypeInfo);
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_42B25F5 = 1;
  }
  v6 = (System_Collections_Generic_List_long__o *)sub_B52A54(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v6,
    (const MethodInfo_2FE1070 *)Method_System_Collections_Generic_List_long___ctor__);
  v7 = (System_Collections_Generic_List_long__o *)sub_B52A54(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v7,
    (const MethodInfo_2FE1070 *)Method_System_Collections_Generic_List_long___ctor__);
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
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
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
          v8 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44789576(&v50, 0LL);
          if ( !v7 )
            break;
          v23 = (const MethodInfo_2FE1DCC *)Method_System_Collections_Generic_List_long__Add__;
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
          v8 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44789576(&v49, 0LL);
          if ( !v6 )
            break;
          v23 = (const MethodInfo_2FE1DCC *)Method_System_Collections_Generic_List_long__Add__;
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
    sub_B52A5C(v8, v9);
  }
LABEL_28:
  if ( !v6 || !v7 )
    goto LABEL_33;
  if ( v7->fields._size + v6->fields._size < 1 )
  {
    *lockList = 0LL;
    sub_B52920((BattleServantConfConponent_o *)lockList, 0LL, v10, v11, v12, v13, v14, v15);
    *unlockList = 0LL;
    sub_B52920((BattleServantConfConponent_o *)unlockList, 0LL, v42, v43, v44, v45, v46, v47);
    return 0;
  }
  else
  {
    v27 = System_Collections_Generic_List_long___ToArray(
            v6,
            (const MethodInfo_2FE3ED8 *)Method_System_Collections_Generic_List_long__ToArray__);
    *lockList = v27;
    sub_B52920((BattleServantConfConponent_o *)lockList, (System_Int32_array **)v27, v28, v29, v30, v31, v32, v33);
    v34 = System_Collections_Generic_List_long___ToArray(
            v7,
            (const MethodInfo_2FE3ED8 *)Method_System_Collections_Generic_List_long__ToArray__);
    *unlockList = v34;
    sub_B52920((BattleServantConfConponent_o *)unlockList, (System_Int32_array **)v34, v35, v36, v37, v38, v39, v40);
    return 1;
  }
}


void __fastcall EquipGraphListViewManager__InitLoad(const MethodInfo *method)
{
  __int64 v1; // x1
  EquipGraphListViewManager_c *v2; // x0
  ListViewSort_o *sortStatus; // x0

  if ( (byte_42B25EE & 1) == 0 )
  {
    sub_B52984(&EquipGraphListViewManager_TypeInfo);
    byte_42B25EE = 1;
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
    sub_B52A5C(sortStatus, v1);
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

  if ( (byte_42B25F3 & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_B52984(&EquipGraphListViewItem_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_B52984(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_42B25F3 = 1;
  }
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_52;
  Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_UserServantMaster___);
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
      v29 = sub_B52A88(Instance);
      sub_B52A28(v29, 0LL);
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
      Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44789576(&v39, 0LL);
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
            System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
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
            Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44789576(&v38, 0LL);
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
        sub_B52920((BattleServantConfConponent_o *)&v17->fields.userSvtEntity, v27, v21, v22, v23, v24, v25, v26);
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
    sub_B52A5C(Instance, v5);
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
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
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

  if ( (byte_42B2603 & 1) == 0 )
  {
    sub_B52984(&SoundManager_TypeInfo);
    byte_42B2603 = 1;
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
      sub_B52A5C(0LL, v3);
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
  sub_B52920((BattleServantConfConponent_o *)&this->fields.callbackFunc, 0LL, v2, v3, v4, v5, v6, v7);
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
    sub_B52A5C(this, method);
  if ( !equipGraphListMenu->fields.modeKind )
  {
    callbackFunc = this->fields.callbackFunc;
    this->fields.callbackFunc = 0LL;
    sub_B52920((BattleServantConfConponent_o *)&this->fields.callbackFunc, 0LL, v2, v3, v4, v5, v6, v7);
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

  if ( (byte_42B2600 & 1) == 0 )
  {
    sub_B52984(&ServantFilterSelectMenu_CallbackFunc_TypeInfo);
    sub_B52984(&Method_EquipGraphListViewManager_EndSelectFilterKind__);
    sub_B52984(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B52984(&SoundManager_TypeInfo);
    byte_42B2600 = 1;
  }
  if ( this->fields.isInput )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sort = this->fields.sort;
    v5 = (CommonUI_o *)Instance;
    v6 = (ServantFilterSelectMenu_CallbackFunc_o *)sub_B52A54(ServantFilterSelectMenu_CallbackFunc_TypeInfo);
    ServantFilterSelectMenu_CallbackFunc___ctor(
      v6,
      (Il2CppObject *)this,
      Method_EquipGraphListViewManager_EndSelectFilterKind__,
      0LL);
    if ( !v5 )
      sub_B52A5C(v7, v8);
    CommonUI__OpenServantFilterSelectMenu_18165180(v5, 5, sort, (ListViewManager_o *)this, v6, -1, 0LL);
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
  sub_B52920(
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
      sub_B52A5C(v10, v11);
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

  if ( (byte_42B2606 & 1) == 0 )
  {
    sub_B52984(&SoundManager_TypeInfo);
    byte_42B2606 = 1;
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
      sub_B52A5C(v3, v4);
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

  if ( (byte_42B2604 & 1) == 0 )
  {
    sub_B52984(&ServantSortSelectMenu_CallbackFunc_TypeInfo);
    sub_B52984(&Method_EquipGraphListViewManager_EndSelectSortKind__);
    sub_B52984(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B52984(&SoundManager_TypeInfo);
    byte_42B2604 = 1;
  }
  if ( this->fields.isInput )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sort = this->fields.sort;
    v5 = (CommonUI_o *)Instance;
    v6 = (ServantSortSelectMenu_CallbackFunc_o *)sub_B52A54(ServantSortSelectMenu_CallbackFunc_TypeInfo);
    ServantSortSelectMenu_CallbackFunc___ctor(
      v6,
      (Il2CppObject *)this,
      Method_EquipGraphListViewManager_EndSelectSortKind__,
      0LL);
    if ( !v5 )
      sub_B52A5C(v7, v8);
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
    sub_B52A5C(this, obj);
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, 0, 0LL);
  callbackFunc = v4->fields.callbackFunc;
  v4->fields.callbackFunc = 0LL;
  sub_B52920((BattleServantConfConponent_o *)&v4->fields.callbackFunc, 0LL, v7, v8, v9, v10, v11, v12);
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

  if ( (byte_42B25FB & 1) == 0 )
  {
    sub_B52984(&UnityEngine_Object_TypeInfo);
    byte_42B25FB = 1;
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
          sub_B52A5C(0LL, v7);
        ((void (__fastcall *)(struct UIScrollView_o *, __int64, Il2CppMethodPointer))v14->klass->vtable._8_UpdateScrollbars.method)(
          v14,
          1LL,
          v14->klass->vtable._9_SetDragAmount.methodPtr);
      }
      callbackFunc2 = this->fields.callbackFunc2;
      this->fields.callbackFunc2 = 0LL;
      sub_B52920((BattleServantConfConponent_o *)&this->fields.callbackFunc2, 0LL, v8, v9, v10, v11, v12, v13);
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
  Il2CppObject *v17; // x22
  Il2CppObject *v18; // x0
  int32_t maxCost; // [xsp+8h] [xbp-28h] BYREF
  int v20; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_42B25F7 & 1) == 0 )
  {
    sub_B52984(&int_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_EquipGraphListViewObject__get_Count__);
    sub_B52984(&Method_System_Collections_Generic_List_EquipGraphListViewObject__get_Item__);
    sub_B52984(&LocalizationManager_TypeInfo);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&StringLiteral_12559/*"SUM_OVER_INFO"*/);
    sub_B52984(&StringLiteral_12558/*"SUM_INFO"*/);
    byte_42B25F7 = 1;
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
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
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
    sub_B52A5C(ObjectList, v4);
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
        ? (System_String_o **)&StringLiteral_12558/*"SUM_INFO"*/
        : (System_String_o **)&StringLiteral_12559/*"SUM_OVER_INFO"*/;
    v15 = *v14;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v16 = LocalizationManager__Get(v15, 0LL);
    v20 = v12;
    v17 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v20);
    maxCost = this->fields.maxCost;
    v18 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &maxCost);
    ObjectList = System_String__Format_44563852(v16, v17, v18, 0LL);
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

  if ( (byte_42B25F9 & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_EquipGraphListViewObject__Dispose__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_EquipGraphListViewObject__MoveNext__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_EquipGraphListViewObject__get_Current__);
    sub_B52984(&Method_EquipGraphListViewManager_OnMoveEnd__);
    sub_B52984(&Method_System_Collections_Generic_List_EquipGraphListViewObject__GetEnumerator__);
    sub_B52984(&Method_System_Collections_Generic_List_EquipGraphListViewObject__get_Count__);
    sub_B52984(&StringLiteral_10100/*"OnMoveEnd"*/);
    byte_42B25F9 = 1;
  }
  memset(&v15, 0, sizeof(v15));
  ObjectList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)EquipGraphListViewManager__get_ObjectList(
                                                                                                this,
                                                                                                *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_B52A5C(0LL, v8);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10100/*"OnMoveEnd"*/,
      delay,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v15,
      ObjectList,
      (const MethodInfo_2FF2480 *)Method_System_Collections_Generic_List_EquipGraphListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v15,
              (const MethodInfo_201195C *)Method_System_Collections_Generic_List_Enumerator_EquipGraphListViewObject__MoveNext__) )
    {
      current = v15.fields.current;
      v11 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
      System_Action___ctor(v11, (Il2CppObject *)this, Method_EquipGraphListViewManager_OnMoveEnd__, 0LL);
      if ( !current )
        sub_B52A5C(v12, v13);
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
      (const MethodInfo_2011958 *)Method_System_Collections_Generic_List_Enumerator_EquipGraphListViewObject__Dispose__);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EquipGraphListViewManager__RequestListObject_29447948(
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

  if ( (byte_42B25FA & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_EquipGraphListViewObject__Dispose__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_EquipGraphListViewObject__MoveNext__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_EquipGraphListViewObject__get_Current__);
    sub_B52984(&Method_EquipGraphListViewManager_OnMoveEnd__);
    sub_B52984(&Method_System_Collections_Generic_List_EquipGraphListViewObject__GetEnumerator__);
    sub_B52984(&Method_System_Collections_Generic_List_EquipGraphListViewObject__get_Count__);
    sub_B52984(&StringLiteral_10100/*"OnMoveEnd"*/);
    byte_42B25FA = 1;
  }
  memset(&v13, 0, sizeof(v13));
  ObjectList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)EquipGraphListViewManager__get_ObjectList(
                                                                                                this,
                                                                                                *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_B52A5C(0LL, v6);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10100/*"OnMoveEnd"*/,
      0.0,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v13,
      ObjectList,
      (const MethodInfo_2FF2480 *)Method_System_Collections_Generic_List_EquipGraphListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v13,
              (const MethodInfo_201195C *)Method_System_Collections_Generic_List_Enumerator_EquipGraphListViewObject__MoveNext__) )
    {
      current = v13.fields.current;
      v9 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
      System_Action___ctor(v9, (Il2CppObject *)this, Method_EquipGraphListViewManager_OnMoveEnd__, 0LL);
      if ( !current )
        sub_B52A5C(v10, v11);
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
      (const MethodInfo_2011958 *)Method_System_Collections_Generic_List_Enumerator_EquipGraphListViewObject__Dispose__);
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
  struct EquipGraphListViewItem_o **p_selectItem; // x20
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
  _QWORD *v32; // x0
  System_Reflection_MethodBase_o *v33; // x0
  const MethodInfo *v34; // x2
  struct EquipGraphServantItem_o *v35; // x8
  struct PartyListViewItem_array *v36; // x8
  int v37; // w10
  Il2CppClass **v38; // x8
  Il2CppClass *v39; // x21
  int events; // w19
  struct EquipGraphServantItem_o *v41; // x8
  struct ServantEntity_o *equipServantEntity; // x8
  CommonUI_o *Instance; // x20
  System_String_o *v44; // x21
  System_String_o *v45; // x22
  NotificationDialog_ClickDelegate_o *v46; // x23
  struct ServantEntity_o *servantEntity; // x8
  _QWORD *v48; // x0
  System_Reflection_MethodBase_o *v49; // x0
  struct EquipGraphServantItem_o *v50; // x8
  struct PartyListViewItem_array *v51; // x9
  __int64 v52; // x8
  unsigned __int64 v53; // x19
  int v54; // w27
  PartyListViewItem_o *v55; // x21
  int32_t v56; // w22
  struct ServantEntity_o *v57; // x8
  PartyOrganizationListViewItem_o *v58; // x23
  __int64 v59; // x24
  __int64 v60; // x25
  int v61; // w24
  ServantEntity_o *v62; // x21
  const MethodInfo *v63; // x1
  const MethodInfo *v64; // x2
  const MethodInfo *v65; // x1
  EquipGraphListViewManager_o *v66; // x0
  System_String_array **v67; // x2
  System_String_array **v68; // x3
  System_Boolean_array **v69; // x4
  System_Int32_array **v70; // x5
  System_Int32_array *v71; // x6
  System_Int32_array *v72; // x7
  System_String_o *v73; // x21
  __int64 v74; // x22
  System_String_array **v75; // x2
  System_String_array **v76; // x3
  System_Boolean_array **v77; // x4
  System_Int32_array **v78; // x5
  System_Int32_array *v79; // x6
  System_Int32_array *v80; // x7
  System_Int32_array **v81; // x23
  System_String_array **v82; // x2
  System_String_array **v83; // x3
  System_Boolean_array **v84; // x4
  System_Int32_array **v85; // x5
  System_Int32_array *v86; // x6
  System_Int32_array *v87; // x7
  System_Int32_array **v88; // x23
  int32_t weareRarity; // w23
  System_String_array **v90; // x2
  System_String_array **v91; // x3
  System_Boolean_array **v92; // x4
  System_Int32_array **v93; // x5
  System_Int32_array *v94; // x6
  System_Int32_array *v95; // x7
  System_Int32_array **v96; // x23
  System_String_array **v97; // x2
  System_String_array **v98; // x3
  System_Boolean_array **v99; // x4
  System_Int32_array **v100; // x5
  System_Int32_array *v101; // x6
  System_Int32_array *v102; // x7
  System_Int32_array **v103; // x23
  System_String_array **v104; // x2
  System_String_array **v105; // x3
  System_Boolean_array **v106; // x4
  System_Int32_array **v107; // x5
  System_Int32_array *v108; // x6
  System_Int32_array *v109; // x7
  System_Int32_array **wearerServantName; // x20
  System_String_array **v111; // x2
  System_String_array **v112; // x3
  System_Boolean_array **v113; // x4
  System_Int32_array **v114; // x5
  System_Int32_array *v115; // x6
  System_Int32_array *v116; // x7
  System_Int32_array **v117; // x20
  System_String_array **v118; // x2
  System_String_array **v119; // x3
  System_Boolean_array **v120; // x4
  System_Int32_array **v121; // x5
  System_Int32_array *v122; // x6
  System_Int32_array *v123; // x7
  System_Int32_array **v124; // x20
  struct EquipGraphServantItem_o *v125; // x8
  int32_t Rarity; // w0
  System_String_array **v127; // x2
  System_String_array **v128; // x3
  System_Boolean_array **v129; // x4
  System_Int32_array **v130; // x5
  System_Int32_array *v131; // x6
  System_Int32_array *v132; // x7
  System_Int32_array **v133; // x20
  System_String_array **v134; // x2
  System_String_array **v135; // x3
  System_Boolean_array **v136; // x4
  System_Int32_array **v137; // x5
  System_Int32_array *v138; // x6
  System_Int32_array *v139; // x7
  System_Int32_array **v140; // x20
  System_String_array **v141; // x2
  System_String_array **v142; // x3
  System_Boolean_array **v143; // x4
  System_Int32_array **v144; // x5
  System_Int32_array *v145; // x6
  System_Int32_array *v146; // x7
  System_Int32_array **v147; // x20
  System_String_o *v148; // x20
  CommonUI_o *v149; // x21
  System_String_o *v150; // x22
  System_String_o *v151; // x23
  System_String_o *v152; // x24
  CommonConfirmDialog_ClickDelegate_o *v153; // x25
  int32_t v154; // w9
  System_String_o *v155; // x21
  System_Object_array *v156; // x22
  System_String_array **v157; // x2
  System_String_array **v158; // x3
  System_Boolean_array **v159; // x4
  System_Int32_array **v160; // x5
  System_Int32_array *v161; // x6
  System_Int32_array *v162; // x7
  System_Int32_array **v163; // x23
  System_String_array **v164; // x2
  System_String_array **v165; // x3
  System_Boolean_array **v166; // x4
  System_Int32_array **v167; // x5
  System_Int32_array *v168; // x6
  System_Int32_array *v169; // x7
  System_Int32_array **v170; // x23
  System_String_array **v171; // x2
  System_String_array **v172; // x3
  System_Boolean_array **v173; // x4
  System_Int32_array **v174; // x5
  System_Int32_array *v175; // x6
  System_Int32_array *v176; // x7
  System_Int32_array **v177; // x23
  System_String_array **v178; // x2
  System_String_array **v179; // x3
  System_Boolean_array **v180; // x4
  System_Int32_array **v181; // x5
  System_Int32_array *v182; // x6
  System_Int32_array *v183; // x7
  System_Int32_array **v184; // x23
  struct EquipGraphServantItem_o *v185; // x8
  int32_t v186; // w23
  System_String_array **v187; // x2
  System_String_array **v188; // x3
  System_Boolean_array **v189; // x4
  System_Int32_array **v190; // x5
  System_Int32_array *v191; // x6
  System_Int32_array *v192; // x7
  System_Int32_array **v193; // x23
  System_String_array **v194; // x2
  System_String_array **v195; // x3
  System_Boolean_array **v196; // x4
  System_Int32_array **v197; // x5
  System_Int32_array *v198; // x6
  System_Int32_array *v199; // x7
  System_Int32_array **v200; // x20
  System_String_o *v201; // x20
  CommonUI_o *v202; // x21
  System_String_o *v203; // x22
  CommonConfirmDialog_ClickDelegate_o *v204; // x23
  struct PartyListViewItem_array *v205; // x8
  int v206; // w9
  struct EquipGraphListViewItem_o *v207; // x10
  struct UserServantEntity_o *userSvtEntity; // x10
  int32_t memberIndex; // w23
  __int128 v210; // q1
  PartyListViewItem_o *v211; // x24
  _BOOL8 v212; // x0
  __int64 v213; // x1
  Il2CppObject *current; // x19
  __int64 v215; // x10
  int klass_high; // w9
  int32_t v217; // w8
  _DWORD *monitor; // x9
  UnityEngine_Object_o *v219; // x24
  _BOOL8 v220; // x0
  __int64 v221; // x1
  void *v222; // x8
  __int64 v223; // x11
  __int64 v224; // x11
  EquipGraphListViewObject_o *v225; // x24
  const MethodInfo *v226; // x1
  struct EquipGraphListViewItem_o *v227; // x8
  struct UserServantEntity_o *v228; // x8
  __int128 v229; // q1
  EquipGraphServantItem_o *v230; // x20
  const MethodInfo *v231; // x2
  const MethodInfo *v232; // x2
  struct UserServantEntity_o *userServantEntity; // x23
  System_String_o *v234; // x20
  __int64 v235; // x22
  System_String_array **v236; // x2
  System_String_array **v237; // x3
  System_Boolean_array **v238; // x4
  System_Int32_array **v239; // x5
  System_Int32_array *v240; // x6
  System_Int32_array *v241; // x7
  System_Int32_array **v242; // x24
  System_String_array **v243; // x2
  System_String_array **v244; // x3
  System_Boolean_array **v245; // x4
  System_Int32_array **v246; // x5
  System_Int32_array *v247; // x6
  System_Int32_array *v248; // x7
  System_Int32_array **v249; // x24
  int32_t v250; // w24
  System_String_array **v251; // x2
  System_String_array **v252; // x3
  System_Boolean_array **v253; // x4
  System_Int32_array **v254; // x5
  System_Int32_array *v255; // x6
  System_Int32_array *v256; // x7
  System_Int32_array **v257; // x24
  System_String_array **v258; // x2
  System_String_array **v259; // x3
  System_Boolean_array **v260; // x4
  System_Int32_array **v261; // x5
  System_Int32_array *v262; // x6
  System_Int32_array *v263; // x7
  System_Int32_array **v264; // x24
  __int64 v265; // x23
  __int64 v266; // x24
  int32_t v267; // w0
  System_String_array **v268; // x2
  System_String_array **v269; // x3
  System_Boolean_array **v270; // x4
  System_Int32_array **v271; // x5
  System_Int32_array *v272; // x6
  System_Int32_array *v273; // x7
  System_Int32_array **v274; // x21
  System_String_o *v275; // x20
  CommonUI_o *v276; // x21
  System_String_o *v277; // x22
  System_String_o *v278; // x23
  System_String_o *v279; // x24
  CommonConfirmDialog_ClickDelegate_o *v280; // x25
  __int64 v281; // x0
  __int64 v282; // x0
  struct PartyListViewItem_array *v283; // [xsp+68h] [xbp-E8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v284; // [xsp+70h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v285; // [xsp+90h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v286; // [xsp+B0h] [xbp-A0h] BYREF
  int32_t v287; // [xsp+D4h] [xbp-7Ch] BYREF
  int32_t partyNumber; // [xsp+D8h] [xbp-78h] BYREF
  int32_t maxWave; // [xsp+DCh] [xbp-74h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v290; // [xsp+E0h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v291; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o EquipSvtId; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v293; // 0:x0.16

  if ( (byte_42B25FE & 1) == 0 )
  {
    sub_B52984(&BalanceConfig_TypeInfo);
    sub_B52984(&NotificationDialog_ClickDelegate_TypeInfo);
    sub_B52984(&CommonConfirmDialog_ClickDelegate_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__);
    sub_B52984(&EquipGraphListViewItem_TypeInfo);
    sub_B52984(&Method_EquipGraphListViewManager_EndSelectConfirm__);
    sub_B52984(&Method_EquipGraphListViewManager_SelectEquip__);
    sub_B52984(&Method_EquipGraphListViewManager__SelectEquip_b__71_0__);
    sub_B52984(&EquipGraphListViewObject_TypeInfo);
    sub_B52984(&int_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    sub_B52984(&LocalizationManager_TypeInfo);
    sub_B52984(&object___TypeInfo);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_B52984(&Rarity_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B52984(&SoundManager_TypeInfo);
    sub_B52984(&StringLiteral_15454/*"WAVE_BATTLE_EQUIP_SWAP_MESSAGE"*/);
    sub_B52984(&StringLiteral_15455/*"WAVE_BATTLE_EQUIP_SWAP_TITLE"*/);
    sub_B52984(&StringLiteral_15451/*"WAVE_BATTLE_EQUIP_MOVE_MESSAGE"*/);
    sub_B52984(&StringLiteral_5572/*"EQUIP_GRAPH_USE_WARNING_TITLE"*/);
    sub_B52984(&StringLiteral_5571/*"EQUIP_GRAPH_USE_WARNING_MESSAGE"*/);
    sub_B52984(&StringLiteral_15450/*"WAVE_BATTLE_COST_OVER_TITLE"*/);
    sub_B52984(&StringLiteral_3297/*"COMMON_CONFIRM_NO"*/);
    sub_B52984(&StringLiteral_3300/*"COMMON_CONFIRM_YES"*/);
    sub_B52984(&StringLiteral_15449/*"WAVE_BATTLE_COST_OVER_MESSAGE"*/);
    byte_42B25FE = 1;
  }
  p_selectItem = &this->fields.selectItem;
  memset(&v290, 0, sizeof(v290));
  this->fields.selectItem = item;
  sub_B52920(
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
  sub_B52920(
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
    goto LABEL_257;
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
      goto LABEL_257;
    v27 = this->fields.partyNumber - 1;
    if ( v27 < waveDeckItemList->max_length )
    {
      servantItemInfo = (__int64)waveDeckItemList->m_Items[v27];
      if ( !servantItemInfo )
        goto LABEL_257;
      PartyListViewItem__SetEquip((PartyListViewItem_o *)servantItemInfo, this->fields.memberIndex, 0LL, 0LL);
LABEL_19:
      if ( !*p_selectItem )
        goto LABEL_257;
      (*p_selectItem)->fields.isBase = 0;
      v28 = *p_selectItem;
      if ( !*p_selectItem )
        goto LABEL_257;
      wearerMember = v28->fields.wearerMember;
      if ( wearerMember == this->fields.memberIndex || (wearerMember & 0x80000000) != 0 )
      {
        if ( v28->fields._OrganizedWave_k__BackingField <= 0 && !v28->fields._IsUnique_k__BackingField )
        {
LABEL_80:
          servantItemInfo = (__int64)this->fields.servantItemInfo;
          if ( !servantItemInfo )
            goto LABEL_257;
          EquipGraphServantItem__SetEquipTarget((EquipGraphServantItem_o *)servantItemInfo, 0LL, v25);
          servantItemInfo = (__int64)this->fields.servantItemDraw;
          if ( !servantItemInfo )
            goto LABEL_257;
          EquipGraphServantItemDraw__SetItem(
            (EquipGraphServantItemDraw_o *)servantItemInfo,
            this->fields.servantItemInfo,
            v64);
          v66 = this;
LABEL_83:
          EquipGraphListViewManager__RefrashListDisp(v66, v65);
          if ( callback )
          {
            p_selectItemCallbackFunc->klass = 0LL;
            sub_B52920(p_selectItemCallbackFunc, 0LL, v67, v68, v69, v70, v71, v72);
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
          if ( !v24 )
            goto LABEL_257;
          UnityEngine_Vector3__get_zero(0LL);
          if ( (byte_42B2612 & 1) == 0 )
          {
            sub_B52984(&EquipGraphListViewItem_TypeInfo);
            byte_42B2612 = 1;
          }
          EquipGraphListViewObject__SetupDisp(v24, v63);
          goto LABEL_80;
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
      goto LABEL_76;
    }
LABEL_259:
    v281 = sub_B52A88(servantItemInfo);
    sub_B52A28(v281, 0LL);
  }
  if ( selectItem->fields._OrganizedWave_k__BackingField >= 1 )
  {
    v32 = Method_EquipGraphListViewManager_SelectEquip__;
    if ( (*((_BYTE *)Method_EquipGraphListViewManager_SelectEquip__ + 75) & 2) != 0 )
      v32 = (_QWORD *)sub_B5298C(Method_EquipGraphListViewManager_SelectEquip__);
    v33 = (System_Reflection_MethodBase_o *)sub_B52968(v32, v32[3]);
    OverwriteAssetSoundName__PlaySystemSe(v33, 0, 0LL);
    v35 = this->fields.servantItemInfo;
    if ( !v35 )
      goto LABEL_257;
    if ( v35->fields.equipUserSvtEntity )
    {
      if ( !item )
        goto LABEL_257;
      v36 = this->fields.waveDeckItemList;
      if ( !v36 )
        goto LABEL_257;
      v37 = item->fields._OrganizedWave_k__BackingField - 1;
      if ( v37 >= v36->max_length )
        goto LABEL_259;
      if ( !*p_selectItem )
        goto LABEL_257;
      v38 = &v36->obj.klass + v37;
      v39 = v38[4];
      if ( !v39 )
        goto LABEL_257;
      servantItemInfo = (__int64)PartyListViewItem__GetMember(
                                   (PartyListViewItem_o *)v38[4],
                                   (*p_selectItem)->fields.wearerMember,
                                   0LL);
      if ( !servantItemInfo )
        goto LABEL_257;
      events = (int)v39->_1.events;
      servantItemInfo = PartyOrganizationListViewItem__get_EquipCost(
                          (PartyOrganizationListViewItem_o *)servantItemInfo,
                          0LL);
      v41 = this->fields.servantItemInfo;
      if ( !v41 )
        goto LABEL_257;
      equipServantEntity = v41->fields.equipServantEntity;
      if ( equipServantEntity )
        LODWORD(equipServantEntity) = equipServantEntity->fields.cost;
      if ( events - (int)servantItemInfo + (int)equipServantEntity > SHIDWORD(v39->_1.interopData) )
      {
        Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v44 = LocalizationManager__Get((System_String_o *)StringLiteral_15450/*"WAVE_BATTLE_COST_OVER_TITLE"*/, 0LL);
        v45 = LocalizationManager__Get((System_String_o *)StringLiteral_15449/*"WAVE_BATTLE_COST_OVER_MESSAGE"*/, 0LL);
        v46 = (NotificationDialog_ClickDelegate_o *)sub_B52A54(NotificationDialog_ClickDelegate_TypeInfo);
        NotificationDialog_ClickDelegate___ctor(
          v46,
          (Il2CppObject *)this,
          Method_EquipGraphListViewManager__SelectEquip_b__71_0__,
          0LL);
        if ( !Instance )
          goto LABEL_257;
        CommonUI__OpenNotificationDialog_18160348(
          Instance,
          v44,
          v45,
          v46,
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
      v73 = LocalizationManager__Get((System_String_o *)StringLiteral_15454/*"WAVE_BATTLE_EQUIP_SWAP_MESSAGE"*/, 0LL);
      servantItemInfo = sub_B5299C(object___TypeInfo, 10LL);
      if ( !*p_selectItem )
        goto LABEL_257;
      v74 = servantItemInfo;
      LODWORD(v286.fields.currentCryptoKey) = (*p_selectItem)->fields._OrganizedWave_k__BackingField;
      servantItemInfo = j_il2cpp_value_box_0(int_TypeInfo, &v286);
      if ( !v74 )
        goto LABEL_257;
      v81 = (System_Int32_array **)servantItemInfo;
      if ( !servantItemInfo || (servantItemInfo = sub_B52A44(servantItemInfo, *(_QWORD *)(*(_QWORD *)v74 + 64LL))) != 0 )
      {
        if ( !*(_DWORD *)(v74 + 24) )
          goto LABEL_259;
        *(_QWORD *)(v74 + 32) = v81;
        sub_B52920((BattleServantConfConponent_o *)(v74 + 32), v81, v75, v76, v77, v78, v79, v80);
        maxWave = this->fields.maxWave;
        servantItemInfo = j_il2cpp_value_box_0(int_TypeInfo, &maxWave);
        v88 = (System_Int32_array **)servantItemInfo;
        if ( !servantItemInfo
          || (servantItemInfo = sub_B52A44(servantItemInfo, *(_QWORD *)(*(_QWORD *)v74 + 64LL))) != 0 )
        {
          if ( *(_DWORD *)(v74 + 24) <= 1u )
            goto LABEL_259;
          *(_QWORD *)(v74 + 40) = v88;
          sub_B52920((BattleServantConfConponent_o *)(v74 + 40), v88, v82, v83, v84, v85, v86, v87);
          if ( !*p_selectItem )
            goto LABEL_257;
          weareRarity = (*p_selectItem)->fields.weareRarity;
          if ( (BYTE3(Rarity_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !Rarity_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(Rarity_TypeInfo);
          servantItemInfo = (__int64)Rarity__getRarityType(weareRarity, 0LL);
          v96 = (System_Int32_array **)servantItemInfo;
          if ( !servantItemInfo
            || (servantItemInfo = sub_B52A44(servantItemInfo, *(_QWORD *)(*(_QWORD *)v74 + 64LL))) != 0 )
          {
            if ( *(_DWORD *)(v74 + 24) <= 2u )
              goto LABEL_259;
            *(_QWORD *)(v74 + 48) = v96;
            sub_B52920((BattleServantConfConponent_o *)(v74 + 48), v96, v90, v91, v92, v93, v94, v95);
            servantItemInfo = (__int64)*p_selectItem;
            if ( !*p_selectItem )
              goto LABEL_257;
            servantItemInfo = (__int64)EquipGraphListViewItem__get_WeareServantClassName(
                                         (EquipGraphListViewItem_o *)servantItemInfo,
                                         v20);
            v103 = (System_Int32_array **)servantItemInfo;
            if ( !servantItemInfo
              || (servantItemInfo = sub_B52A44(servantItemInfo, *(_QWORD *)(*(_QWORD *)v74 + 64LL))) != 0 )
            {
              if ( *(_DWORD *)(v74 + 24) <= 3u )
                goto LABEL_259;
              *(_QWORD *)(v74 + 56) = v103;
              sub_B52920((BattleServantConfConponent_o *)(v74 + 56), v103, v97, v98, v99, v100, v101, v102);
              if ( !*p_selectItem )
                goto LABEL_257;
              wearerServantName = (System_Int32_array **)(*p_selectItem)->fields.wearerServantName;
              if ( !wearerServantName
                || (servantItemInfo = sub_B52A44(wearerServantName, *(_QWORD *)(*(_QWORD *)v74 + 64LL))) != 0 )
              {
                if ( *(_DWORD *)(v74 + 24) <= 4u )
                  goto LABEL_259;
                *(_QWORD *)(v74 + 64) = wearerServantName;
                sub_B52920(
                  (BattleServantConfConponent_o *)(v74 + 64),
                  wearerServantName,
                  v104,
                  v105,
                  v106,
                  v107,
                  v108,
                  v109);
                partyNumber = this->fields.partyNumber;
                servantItemInfo = j_il2cpp_value_box_0(int_TypeInfo, &partyNumber);
                v117 = (System_Int32_array **)servantItemInfo;
                if ( !servantItemInfo
                  || (servantItemInfo = sub_B52A44(servantItemInfo, *(_QWORD *)(*(_QWORD *)v74 + 64LL))) != 0 )
                {
                  if ( *(_DWORD *)(v74 + 24) <= 5u )
                    goto LABEL_259;
                  *(_QWORD *)(v74 + 72) = v117;
                  sub_B52920((BattleServantConfConponent_o *)(v74 + 72), v117, v111, v112, v113, v114, v115, v116);
                  v287 = this->fields.maxWave;
                  servantItemInfo = j_il2cpp_value_box_0(int_TypeInfo, &v287);
                  v124 = (System_Int32_array **)servantItemInfo;
                  if ( !servantItemInfo
                    || (servantItemInfo = sub_B52A44(servantItemInfo, *(_QWORD *)(*(_QWORD *)v74 + 64LL))) != 0 )
                  {
                    if ( *(_DWORD *)(v74 + 24) <= 6u )
                      goto LABEL_259;
                    *(_QWORD *)(v74 + 80) = v124;
                    sub_B52920((BattleServantConfConponent_o *)(v74 + 80), v124, v118, v119, v120, v121, v122, v123);
                    v125 = this->fields.servantItemInfo;
                    if ( !v125 )
                      goto LABEL_257;
                    servantItemInfo = (__int64)v125->fields.userServantEntity;
                    if ( !servantItemInfo )
                      goto LABEL_257;
                    Rarity = UserServantEntity__getRarity((UserServantEntity_o *)servantItemInfo, 0LL);
                    servantItemInfo = (__int64)Rarity__getRarityType(Rarity, 0LL);
                    v133 = (System_Int32_array **)servantItemInfo;
                    if ( !servantItemInfo
                      || (servantItemInfo = sub_B52A44(servantItemInfo, *(_QWORD *)(*(_QWORD *)v74 + 64LL))) != 0 )
                    {
                      if ( *(_DWORD *)(v74 + 24) <= 7u )
                        goto LABEL_259;
                      *(_QWORD *)(v74 + 88) = v133;
                      sub_B52920((BattleServantConfConponent_o *)(v74 + 88), v133, v127, v128, v129, v130, v131, v132);
                      servantItemInfo = (__int64)this->fields.servantItemInfo;
                      if ( !servantItemInfo )
                        goto LABEL_257;
                      servantItemInfo = (__int64)EquipGraphServantItem__get_ClassName(
                                                   (EquipGraphServantItem_o *)servantItemInfo,
                                                   v20);
                      v140 = (System_Int32_array **)servantItemInfo;
                      if ( !servantItemInfo
                        || (servantItemInfo = sub_B52A44(servantItemInfo, *(_QWORD *)(*(_QWORD *)v74 + 64LL))) != 0 )
                      {
                        if ( *(_DWORD *)(v74 + 24) <= 8u )
                          goto LABEL_259;
                        *(_QWORD *)(v74 + 96) = v140;
                        sub_B52920((BattleServantConfConponent_o *)(v74 + 96), v140, v134, v135, v136, v137, v138, v139);
                        servantItemInfo = (__int64)this->fields.servantItemInfo;
                        if ( !servantItemInfo )
                          goto LABEL_257;
                        servantItemInfo = (__int64)EquipGraphServantItem__get_NameText(
                                                     (EquipGraphServantItem_o *)servantItemInfo,
                                                     v20);
                        v147 = (System_Int32_array **)servantItemInfo;
                        if ( !servantItemInfo
                          || (servantItemInfo = sub_B52A44(servantItemInfo, *(_QWORD *)(*(_QWORD *)v74 + 64LL))) != 0 )
                        {
                          if ( *(_DWORD *)(v74 + 24) > 9u )
                          {
                            *(_QWORD *)(v74 + 104) = v147;
                            sub_B52920(
                              (BattleServantConfConponent_o *)(v74 + 104),
                              v147,
                              v141,
                              v142,
                              v143,
                              v144,
                              v145,
                              v146);
                            v148 = System_String__Format_44647040(v73, (System_Object_array *)v74, 0LL);
                            v149 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                            v150 = LocalizationManager__Get((System_String_o *)StringLiteral_15455/*"WAVE_BATTLE_EQUIP_SWAP_TITLE"*/, 0LL);
                            v151 = LocalizationManager__Get((System_String_o *)StringLiteral_3300/*"COMMON_CONFIRM_YES"*/, 0LL);
                            v152 = LocalizationManager__Get((System_String_o *)StringLiteral_3297/*"COMMON_CONFIRM_NO"*/, 0LL);
                            v153 = (CommonConfirmDialog_ClickDelegate_o *)sub_B52A54(CommonConfirmDialog_ClickDelegate_TypeInfo);
                            CommonConfirmDialog_ClickDelegate___ctor(
                              v153,
                              (Il2CppObject *)this,
                              Method_EquipGraphListViewManager_EndSelectConfirm__,
                              0LL);
                            if ( !v149 )
                              goto LABEL_257;
                            CommonUI__OpenConfirmDialog_18158088(
                              v149,
                              v150,
                              v148,
                              v151,
                              v152,
                              v153,
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
      v282 = sub_B52A7C(servantItemInfo);
      sub_B52A28(v282, 0LL);
    }
    goto LABEL_74;
  }
  if ( selectItem->fields._IsUnique_k__BackingField )
  {
    v48 = Method_EquipGraphListViewManager_SelectEquip__;
    if ( (*((_BYTE *)Method_EquipGraphListViewManager_SelectEquip__ + 75) & 2) != 0 )
      v48 = (_QWORD *)sub_B5298C(Method_EquipGraphListViewManager_SelectEquip__);
    v49 = (System_Reflection_MethodBase_o *)sub_B52968(v48, v48[3]);
    OverwriteAssetSoundName__PlaySystemSe(v49, 0, 0LL);
    v50 = this->fields.servantItemInfo;
    if ( !v50 )
      goto LABEL_257;
    if ( v50->fields.equipUserSvtEntity )
    {
      v51 = this->fields.waveDeckItemList;
      if ( !v51 )
        goto LABEL_257;
      v52 = *(_QWORD *)&v51->max_length;
      if ( (int)v52 < 1 )
        return;
      v53 = 0LL;
      v54 = 1;
      v283 = this->fields.waveDeckItemList;
      while ( 1 )
      {
        if ( v53 >= (unsigned int)v52 )
          goto LABEL_259;
        v55 = v51->m_Items[v53];
        v56 = 0;
        do
        {
          servantItemInfo = (__int64)BalanceConfig_TypeInfo;
          if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !BalanceConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
            servantItemInfo = (__int64)BalanceConfig_TypeInfo;
          }
          if ( v56 >= *(_DWORD *)(*(_QWORD *)(servantItemInfo + 184) + 160LL) )
            goto LABEL_72;
          if ( !v55 )
            goto LABEL_257;
          servantItemInfo = (__int64)PartyListViewItem__GetMember(v55, v56, 0LL);
          if ( !*p_selectItem )
            goto LABEL_257;
          v57 = (*p_selectItem)->fields.servantEntity;
          if ( !v57 )
            goto LABEL_257;
          v58 = (PartyOrganizationListViewItem_o *)servantItemInfo;
          v60 = *(_QWORD *)&v57->fields.id.fields.currentCryptoKey;
          v59 = *(_QWORD *)&v57->fields.id.fields.fakeValue;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          }
          *(_QWORD *)&v291.fields.currentCryptoKey = v60;
          *(_QWORD *)&v291.fields.fakeValue = v59;
          servantItemInfo = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v291, 0LL);
          if ( !v58 )
            goto LABEL_257;
          v61 = servantItemInfo;
          EquipSvtId = PartyOrganizationListViewItem__get_EquipSvtId(v58, 0LL);
          servantItemInfo = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(EquipSvtId, 0LL);
          ++v56;
        }
        while ( v61 != (_DWORD)servantItemInfo );
        v62 = v58->fields.servantEntity;
        if ( v62 )
          break;
LABEL_72:
        v51 = v283;
        ++v53;
        ++v54;
        LODWORD(v52) = v283->max_length;
        if ( (__int64)v53 >= (int)v52 )
          return;
      }
      userServantEntity = v58->fields.userServantEntity;
      if ( !userServantEntity )
        return;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v234 = LocalizationManager__Get((System_String_o *)StringLiteral_15451/*"WAVE_BATTLE_EQUIP_MOVE_MESSAGE"*/, 0LL);
      v235 = sub_B5299C(object___TypeInfo, 5LL);
      LODWORD(v286.fields.currentCryptoKey) = v54;
      servantItemInfo = j_il2cpp_value_box_0(int_TypeInfo, &v286);
      if ( !v235 )
        goto LABEL_257;
      v242 = (System_Int32_array **)servantItemInfo;
      if ( !servantItemInfo || (servantItemInfo = sub_B52A44(servantItemInfo, *(_QWORD *)(*(_QWORD *)v235 + 64LL))) != 0 )
      {
        if ( !*(_DWORD *)(v235 + 24) )
          goto LABEL_259;
        *(_QWORD *)(v235 + 32) = v242;
        sub_B52920((BattleServantConfConponent_o *)(v235 + 32), v242, v236, v237, v238, v239, v240, v241);
        maxWave = this->fields.maxWave;
        servantItemInfo = j_il2cpp_value_box_0(int_TypeInfo, &maxWave);
        v249 = (System_Int32_array **)servantItemInfo;
        if ( !servantItemInfo
          || (servantItemInfo = sub_B52A44(servantItemInfo, *(_QWORD *)(*(_QWORD *)v235 + 64LL))) != 0 )
        {
          if ( *(_DWORD *)(v235 + 24) <= 1u )
            goto LABEL_259;
          *(_QWORD *)(v235 + 40) = v249;
          sub_B52920((BattleServantConfConponent_o *)(v235 + 40), v249, v243, v244, v245, v246, v247, v248);
          v250 = UserServantEntity__getRarity(userServantEntity, 0LL);
          if ( (BYTE3(Rarity_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !Rarity_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(Rarity_TypeInfo);
          servantItemInfo = (__int64)Rarity__getRarityType(v250, 0LL);
          v257 = (System_Int32_array **)servantItemInfo;
          if ( !servantItemInfo
            || (servantItemInfo = sub_B52A44(servantItemInfo, *(_QWORD *)(*(_QWORD *)v235 + 64LL))) != 0 )
          {
            if ( *(_DWORD *)(v235 + 24) <= 2u )
              goto LABEL_259;
            *(_QWORD *)(v235 + 48) = v257;
            sub_B52920((BattleServantConfConponent_o *)(v235 + 48), v257, v251, v252, v253, v254, v255, v256);
            servantItemInfo = (__int64)ServantEntity__getClassName(v62, 0LL);
            v264 = (System_Int32_array **)servantItemInfo;
            if ( !servantItemInfo
              || (servantItemInfo = sub_B52A44(servantItemInfo, *(_QWORD *)(*(_QWORD *)v235 + 64LL))) != 0 )
            {
              if ( *(_DWORD *)(v235 + 24) <= 3u )
                goto LABEL_259;
              *(_QWORD *)(v235 + 56) = v264;
              sub_B52920((BattleServantConfConponent_o *)(v235 + 56), v264, v258, v259, v260, v261, v262, v263);
              v266 = *(_QWORD *)&userServantEntity->fields.limitCount.fields.currentCryptoKey;
              v265 = *(_QWORD *)&userServantEntity->fields.limitCount.fields.fakeValue;
              if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
              }
              *(_QWORD *)&v293.fields.currentCryptoKey = v266;
              *(_QWORD *)&v293.fields.fakeValue = v265;
              v267 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v293, 0LL);
              servantItemInfo = (__int64)ServantEntity__getName(v62, v267, -1, 0LL);
              v274 = (System_Int32_array **)servantItemInfo;
              if ( !servantItemInfo
                || (servantItemInfo = sub_B52A44(servantItemInfo, *(_QWORD *)(*(_QWORD *)v235 + 64LL))) != 0 )
              {
                if ( *(_DWORD *)(v235 + 24) > 4u )
                {
                  *(_QWORD *)(v235 + 64) = v274;
                  sub_B52920((BattleServantConfConponent_o *)(v235 + 64), v274, v268, v269, v270, v271, v272, v273);
                  v275 = System_String__Format_44647040(v234, (System_Object_array *)v235, 0LL);
                  v276 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                  v277 = LocalizationManager__Get((System_String_o *)StringLiteral_5572/*"EQUIP_GRAPH_USE_WARNING_TITLE"*/, 0LL);
                  v278 = LocalizationManager__Get((System_String_o *)StringLiteral_3300/*"COMMON_CONFIRM_YES"*/, 0LL);
                  v279 = LocalizationManager__Get((System_String_o *)StringLiteral_3297/*"COMMON_CONFIRM_NO"*/, 0LL);
                  v280 = (CommonConfirmDialog_ClickDelegate_o *)sub_B52A54(CommonConfirmDialog_ClickDelegate_TypeInfo);
                  CommonConfirmDialog_ClickDelegate___ctor(
                    v280,
                    (Il2CppObject *)this,
                    Method_EquipGraphListViewManager_EndSelectConfirm__,
                    0LL);
                  if ( !v276 )
                    goto LABEL_257;
                  CommonUI__OpenConfirmDialog_18158088(
                    v276,
                    v277,
                    v275,
                    v278,
                    v279,
                    v280,
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
    EquipGraphListViewManager__EndSelectConfirm(this, 1, v34);
    return;
  }
  v154 = selectItem->fields.wearerMember;
  if ( v154 == this->fields.memberIndex || (v154 & 0x80000000) != 0 )
  {
    if ( (WORD1(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    if ( this->fields.isWaveBattle )
    {
      v205 = this->fields.waveDeckItemList;
      if ( !v205 )
        goto LABEL_257;
      v206 = this->fields.partyNumber - 1;
      if ( v206 >= v205->max_length )
        goto LABEL_259;
      v207 = this->fields.selectItem;
      if ( !v207 )
        goto LABEL_257;
      userSvtEntity = v207->fields.userSvtEntity;
      if ( !userSvtEntity )
        goto LABEL_257;
      memberIndex = this->fields.memberIndex;
      v210 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
      v211 = v205->m_Items[v206];
      *(_OWORD *)&v286.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v286.fields.fakeValue = v210;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      }
      v285 = v286;
      servantItemInfo = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44789576(&v285, 0LL);
      if ( !v211 )
        goto LABEL_257;
      PartyListViewItem__SetEquip(v211, memberIndex, servantItemInfo, 0LL);
    }
    servantItemInfo = (__int64)this->fields.itemList;
    if ( !servantItemInfo )
      goto LABEL_257;
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v286,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)servantItemInfo,
      (const MethodInfo_2FF2480 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    v290 = *(System_Collections_Generic_List_Enumerator_T__o *)&v286.fields.currentCryptoKey;
    while ( 1 )
    {
      do
      {
        v212 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                 &v290,
                 (const MethodInfo_201195C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
        if ( !v212 )
        {
          System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
            &v290,
            (const MethodInfo_2011958 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
          if ( *p_selectItem )
          {
            (*p_selectItem)->fields.isBase = 1;
            v227 = this->fields.selectItem;
            if ( v227 )
            {
              v228 = v227->fields.userSvtEntity;
              if ( v228 )
              {
                v229 = *(_OWORD *)&v228->fields.id.fields.fakeValue;
                v230 = this->fields.servantItemInfo;
                *(_OWORD *)&v286.fields.currentCryptoKey = *(_OWORD *)&v228->fields.id.fields.currentCryptoKey;
                *(_OWORD *)&v286.fields.fakeValue = v229;
                if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
                }
                v284 = v286;
                servantItemInfo = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44789576(&v284, 0LL);
                if ( v230 )
                {
                  EquipGraphServantItem__SetEquipTarget(v230, servantItemInfo, v231);
                  servantItemInfo = (__int64)this->fields.servantItemDraw;
                  if ( servantItemInfo )
                  {
                    EquipGraphServantItemDraw__SetItem(
                      (EquipGraphServantItemDraw_o *)servantItemInfo,
                      this->fields.servantItemInfo,
                      v232);
                    v66 = this;
                    goto LABEL_83;
                  }
                }
              }
            }
          }
LABEL_257:
          sub_B52A5C(servantItemInfo, v20);
        }
        current = v290.fields.current;
        if ( v290.fields.current )
        {
          v215 = *(&EquipGraphListViewItem_TypeInfo->_2.bitflags2 + 1);
          if ( *(&v290.fields.current->klass->_2.bitflags2 + 1) >= (unsigned int)v215
            && (EquipGraphListViewItem_c *)v290.fields.current->klass->_2.typeHierarchy[v215 - 1] == EquipGraphListViewItem_TypeInfo )
          {
            continue;
          }
        }
        sub_B52A5C(v212, v213);
      }
      while ( !BYTE1(v290.fields.current[9].klass) );
      BYTE1(v290.fields.current[9].klass) = 0;
      klass_high = HIDWORD(current[9].klass);
      if ( klass_high != this->fields.memberIndex && (klass_high & 0x80000000) == 0 )
        break;
      if ( SHIDWORD(current[14].monitor) > 0 || BYTE4(current[15].klass) )
      {
        v217 = this->fields.baseCost;
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
        this->fields.baseCost = (_DWORD)monitor + v217;
        v219 = (UnityEngine_Object_o *)current[6].monitor;
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        v220 = UnityEngine_Object__op_Inequality(v219, 0LL, 0LL);
        if ( v220 )
        {
          v222 = current[6].monitor;
          if ( !v222
            || (v223 = *(&EquipGraphListViewObject_TypeInfo->_2.bitflags2 + 1),
                *(unsigned __int8 *)(*(_QWORD *)v222 + 300LL) < (unsigned int)v223)
            || *(EquipGraphListViewObject_c **)(*(_QWORD *)(*(_QWORD *)v222 + 200LL) + 8 * v223 - 8) != EquipGraphListViewObject_TypeInfo )
          {
            sub_B52A5C(v220, v221);
          }
          v224 = *(&EquipGraphListViewObject_TypeInfo->_2.bitflags2 + 1);
          if ( *(unsigned __int8 *)(*(_QWORD *)v222 + 300LL) >= (unsigned int)v224 )
          {
            if ( *(EquipGraphListViewObject_c **)(*(_QWORD *)(*(_QWORD *)v222 + 200LL) + 8 * v224 - 8) == EquipGraphListViewObject_TypeInfo )
              v225 = (EquipGraphListViewObject_o *)current[6].monitor;
            else
              v225 = 0LL;
          }
          else
          {
            v225 = 0LL;
          }
          UnityEngine_Vector3__get_zero(0LL);
          if ( (byte_42B2612 & 1) == 0 )
          {
            sub_B52984(&EquipGraphListViewItem_TypeInfo);
            byte_42B2612 = 1;
          }
          EquipGraphListViewObject__SetupDisp(v225, v226);
        }
      }
    }
    v217 = this->fields.baseCost;
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
  v155 = LocalizationManager__Get((System_String_o *)StringLiteral_5571/*"EQUIP_GRAPH_USE_WARNING_MESSAGE"*/, 0LL);
  servantItemInfo = sub_B5299C(object___TypeInfo, 6LL);
  if ( !this->fields.servantItemInfo )
    goto LABEL_257;
  v156 = (System_Object_array *)servantItemInfo;
  servantItemInfo = (__int64)EquipGraphServantItem__get_NameText(this->fields.servantItemInfo, v20);
  if ( !v156 )
    goto LABEL_257;
  v163 = (System_Int32_array **)servantItemInfo;
  if ( servantItemInfo )
  {
    servantItemInfo = sub_B52A44(servantItemInfo, v156->obj.klass->_1.element_class);
    if ( !servantItemInfo )
      goto LABEL_261;
  }
  if ( !v156->max_length )
    goto LABEL_259;
  v156->m_Items[0] = (Il2CppObject *)v163;
  sub_B52920((BattleServantConfConponent_o *)v156->m_Items, v163, v157, v158, v159, v160, v161, v162);
  if ( !*p_selectItem )
    goto LABEL_257;
  v170 = (System_Int32_array **)(*p_selectItem)->fields.wearerServantName;
  if ( v170 )
  {
    servantItemInfo = sub_B52A44(v170, v156->obj.klass->_1.element_class);
    if ( !servantItemInfo )
      goto LABEL_261;
  }
  if ( v156->max_length <= 1 )
    goto LABEL_259;
  v156->m_Items[1] = (Il2CppObject *)v170;
  sub_B52920((BattleServantConfConponent_o *)&v156->m_Items[1], v170, v164, v165, v166, v167, v168, v169);
  servantItemInfo = (__int64)this->fields.servantItemInfo;
  if ( !servantItemInfo )
    goto LABEL_257;
  servantItemInfo = (__int64)EquipGraphServantItem__get_ClassName((EquipGraphServantItem_o *)servantItemInfo, v20);
  v177 = (System_Int32_array **)servantItemInfo;
  if ( servantItemInfo )
  {
    servantItemInfo = sub_B52A44(servantItemInfo, v156->obj.klass->_1.element_class);
    if ( !servantItemInfo )
      goto LABEL_261;
  }
  if ( v156->max_length <= 2 )
    goto LABEL_259;
  v156->m_Items[2] = (Il2CppObject *)v177;
  sub_B52920((BattleServantConfConponent_o *)&v156->m_Items[2], v177, v171, v172, v173, v174, v175, v176);
  servantItemInfo = (__int64)*p_selectItem;
  if ( !*p_selectItem )
    goto LABEL_257;
  servantItemInfo = (__int64)EquipGraphListViewItem__get_WeareServantClassName(
                               (EquipGraphListViewItem_o *)servantItemInfo,
                               v20);
  v184 = (System_Int32_array **)servantItemInfo;
  if ( servantItemInfo )
  {
    servantItemInfo = sub_B52A44(servantItemInfo, v156->obj.klass->_1.element_class);
    if ( !servantItemInfo )
      goto LABEL_261;
  }
  if ( v156->max_length <= 3 )
    goto LABEL_259;
  v156->m_Items[3] = (Il2CppObject *)v184;
  sub_B52920((BattleServantConfConponent_o *)&v156->m_Items[3], v184, v178, v179, v180, v181, v182, v183);
  v185 = this->fields.servantItemInfo;
  if ( !v185 )
    goto LABEL_257;
  servantItemInfo = (__int64)v185->fields.userServantEntity;
  if ( !servantItemInfo )
    goto LABEL_257;
  v186 = UserServantEntity__getRarity((UserServantEntity_o *)servantItemInfo, 0LL);
  if ( (BYTE3(Rarity_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !Rarity_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Rarity_TypeInfo);
  servantItemInfo = (__int64)Rarity__getRarityType(v186, 0LL);
  v193 = (System_Int32_array **)servantItemInfo;
  if ( servantItemInfo )
  {
    servantItemInfo = sub_B52A44(servantItemInfo, v156->obj.klass->_1.element_class);
    if ( !servantItemInfo )
      goto LABEL_261;
  }
  if ( v156->max_length <= 4 )
    goto LABEL_259;
  v156->m_Items[4] = (Il2CppObject *)v193;
  sub_B52920((BattleServantConfConponent_o *)&v156->m_Items[4], v193, v187, v188, v189, v190, v191, v192);
  if ( !*p_selectItem )
    goto LABEL_257;
  servantItemInfo = (__int64)Rarity__getRarityType((*p_selectItem)->fields.weareRarity, 0LL);
  v200 = (System_Int32_array **)servantItemInfo;
  if ( servantItemInfo )
  {
    servantItemInfo = sub_B52A44(servantItemInfo, v156->obj.klass->_1.element_class);
    if ( !servantItemInfo )
      goto LABEL_261;
  }
  if ( v156->max_length <= 5 )
    goto LABEL_259;
  v156->m_Items[5] = (Il2CppObject *)v200;
  sub_B52920((BattleServantConfConponent_o *)&v156->m_Items[5], v200, v194, v195, v196, v197, v198, v199);
  v201 = System_String__Format_44647040(v155, v156, 0LL);
  v202 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v203 = LocalizationManager__Get((System_String_o *)StringLiteral_5572/*"EQUIP_GRAPH_USE_WARNING_TITLE"*/, 0LL);
  v204 = (CommonConfirmDialog_ClickDelegate_o *)sub_B52A54(CommonConfirmDialog_ClickDelegate_TypeInfo);
  CommonConfirmDialog_ClickDelegate___ctor(
    v204,
    (Il2CppObject *)this,
    Method_EquipGraphListViewManager_EndSelectConfirm__,
    0LL);
  servantItemInfo = (__int64)BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
  }
  if ( !v202 )
    goto LABEL_257;
  CommonUI__OpenConfirmDialog(v202, v203, v201, v204, BalanceConfig_TypeInfo->static_fields->DefaultFontSize, 0, 0, 0LL);
}


void __fastcall EquipGraphListViewManager__SetFilterButtonImage(
        EquipGraphListViewManager_o *this,
        const MethodInfo *method)
{
  ListViewSort_o *sort; // x0
  UISprite_o *filterSprite; // x19
  System_String_o **v5; // x8

  if ( (byte_42B2602 & 1) == 0 )
  {
    sub_B52984(&StringLiteral_17111/*"btn_filter_on"*/);
    sub_B52984(&StringLiteral_17110/*"btn_filter"*/);
    byte_42B2602 = 1;
  }
  sort = this->fields.sort;
  if ( !sort
    || (filterSprite = this->fields.filterSprite,
        sort = (ListViewSort_o *)ListViewSort__CheckFilterDefaultAll(sort, -1, 0LL),
        !filterSprite) )
  {
    sub_B52A5C(sort, method);
  }
  v5 = (System_String_o **)&StringLiteral_17110/*"btn_filter"*/;
  if ( ((unsigned __int8)sort & 1) == 0 )
    v5 = (System_String_o **)&StringLiteral_17111/*"btn_filter_on"*/;
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
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.callbackFunc,
    (System_Int32_array **)callback,
    (System_String_array **)callback,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  EquipGraphListViewManager__SetMode_29447688(this, mode, v10);
}


void __fastcall EquipGraphListViewManager__SetMode_29447688(
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
    sub_B52A5C(servantItemDraw, v5);
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
      EquipGraphListViewManager__RequestListObject_29447948(this, v9, v8);
      break;
  }
}


void __fastcall EquipGraphListViewManager__SetMode_29447892(
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
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.callbackFunc2,
    (System_Int32_array **)callback,
    (System_String_array **)callback,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  EquipGraphListViewManager__SetMode_29447688(this, mode, v10);
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
  if ( (byte_42B25F8 & 1) == 0 )
  {
    this = (EquipGraphListViewManager_o *)sub_B52984(&EquipGraphListViewObject_TypeInfo);
    byte_42B25F8 = 1;
  }
  if ( !obj
    || (v6 = *(&EquipGraphListViewObject_TypeInfo->_2.bitflags2 + 1), *(&obj->klass->_2.bitflags2 + 1) < (unsigned int)v6)
    || (EquipGraphListViewObject_c *)obj->klass->_2.typeHierarchy[v6 - 1] != EquipGraphListViewObject_TypeInfo )
  {
    sub_B52A5C(this, obj);
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

  if ( (byte_42B2607 & 1) == 0 )
  {
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&StringLiteral_17139/*"btn_sort_up"*/);
    sub_B52984(&StringLiteral_17223/*"btn_txt_up"*/);
    sub_B52984(&StringLiteral_17179/*"btn_txt_new"*/);
    sub_B52984(&StringLiteral_17169/*"btn_txt_down"*/);
    sub_B52984(&StringLiteral_17186/*"btn_txt_old"*/);
    sub_B52984(&StringLiteral_17136/*"btn_sort_down"*/);
    byte_42B2607 = 1;
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
      v10 = (System_String_o **)(v8->fields.isAscendingOrder ? &StringLiteral_17186/*"btn_txt_old"*/ : &StringLiteral_17179/*"btn_txt_new"*/);
      UISprite__set_spriteName((UISprite_o *)sort, *v10, 0LL);
      v11 = this->fields.sort;
      if ( !v11 )
        goto LABEL_45;
      sort = (ListViewSort_o *)this->fields.sortOrderSprite;
      if ( !sort )
        goto LABEL_45;
      isAscendingOrder = v11->fields.isAscendingOrder;
      v13 = (System_String_o **)&StringLiteral_17136/*"btn_sort_down"*/;
      v14 = (System_String_o **)&StringLiteral_17139/*"btn_sort_up"*/;
    }
    else
    {
      sort = (ListViewSort_o *)this->fields.sortExplanationSprite;
      if ( !sort )
        goto LABEL_45;
      v15 = (System_String_o **)(v8->fields.isAscendingOrder ? &StringLiteral_17223/*"btn_txt_up"*/ : &StringLiteral_17169/*"btn_txt_down"*/);
      UISprite__set_spriteName((UISprite_o *)sort, *v15, 0LL);
      v16 = this->fields.sort;
      if ( !v16 )
        goto LABEL_45;
      sort = (ListViewSort_o *)this->fields.sortOrderSprite;
      if ( !sort )
        goto LABEL_45;
      isAscendingOrder = v16->fields.isAscendingOrder;
      v13 = (System_String_o **)&StringLiteral_17139/*"btn_sort_up"*/;
      v14 = (System_String_o **)&StringLiteral_17136/*"btn_sort_down"*/;
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
        sort = (ListViewSort_o *)ListViewSort__GetBonusKindText_34035124(sort, bonusEventIdList, 0LL, 0, 0LL, 0LL);
        if ( v19 )
        {
LABEL_42:
          UILabel__set_text(v19, (System_String_o *)sort, 0LL);
          return;
        }
      }
      else
      {
        sort = (ListViewSort_o *)ListViewSort__GetBonusKind2Text_34037412(
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
    sub_B52A5C(sort, v4);
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

  if ( (byte_42B260A & 1) == 0 )
  {
    sub_B52984(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_42B260A = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B52A5C(0LL, v5);
  CommonUI__CloseNotificationDialog(Instance, 0LL);
  selectItemCallbackFunc = this->fields.selectItemCallbackFunc;
  if ( selectItemCallbackFunc )
  {
    this->fields.selectItemCallbackFunc = 0LL;
    sub_B52920((BattleServantConfConponent_o *)&this->fields.selectItemCallbackFunc, 0LL, v6, v7, v8, v9, v10, v11);
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

  if ( (byte_42B25E7 & 1) == 0 )
  {
    sub_B52984(&EquipGraphListViewManager_CallbackFunc_TypeInfo);
    byte_42B25E7 = 1;
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
    v8 = sub_B4739C(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_B52D50(v7);
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

  if ( (byte_42B25E9 & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    byte_42B25E9 = 1;
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
    v8 = sub_B4739C(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_B52D50(v7);
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

  if ( (byte_42B25EB & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    byte_42B25EB = 1;
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
    v8 = sub_B4739C(p_selectItemCallbackFunc, v7, selectItemCallbackFunc);
    v9 = selectItemCallbackFunc == (System_Delegate_o *)v8;
    selectItemCallbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_B52D50(v7);
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

  if ( (byte_42B25F0 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_B52984(&Method_UnityEngine_GameObject_GetComponent_EquipGraphListViewObject___);
    sub_B52984(&Method_System_Collections_Generic_List_EquipGraphListViewObject__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_B52984(&Method_System_Collections_Generic_List_EquipGraphListViewObject___ctor__);
    sub_B52984(&System_Collections_Generic_List_EquipGraphListViewObject__TypeInfo);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    byte_42B25F0 = 1;
  }
  memset(&v18, 0, sizeof(v18));
  v3 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_EquipGraphListViewObject__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v3,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_EquipGraphListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_B52A5C(0LL, v4);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v17,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)objectList,
    (const MethodInfo_2FF2480 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v18 = v17;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v18,
            (const MethodInfo_201195C *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
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
        sub_B52A5C(v7, v8);
      Component_srcLineSprite = (EquipGraphListViewObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                (UnityEngine_GameObject_o *)current,
                                                                (const MethodInfo_1B7B1B8 *)Method_UnityEngine_GameObject_GetComponent_EquipGraphListViewObject___);
      v11 = (EventMissionProgressRequest_Argument_ProgressData_o *)Component_srcLineSprite;
      if ( !Component_srcLineSprite )
        sub_B52A5C(0LL, v10);
      Item = (ListViewItem_o *)EquipGraphListViewObject__GetItem(Component_srcLineSprite, v10);
      if ( !Item )
        sub_B52A5C(0LL, v13);
      if ( Item->fields.isTermination )
      {
        v14 = ListViewManager__ClippingItem_23551160((ListViewManager_o *)this, Item, 0LL);
        if ( v14 )
        {
          if ( !v3 )
            sub_B52A5C(v14, v15);
          goto LABEL_16;
        }
      }
      else
      {
        if ( !v3 )
          sub_B52A5C(Item, v13);
LABEL_16:
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v3,
          v11,
          (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_EquipGraphListViewObject__Add__);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v18,
    (const MethodInfo_2011958 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
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

  if ( (byte_42B25EF & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_B52984(&Method_UnityEngine_GameObject_GetComponent_EquipGraphListViewObject___);
    sub_B52984(&Method_System_Collections_Generic_List_EquipGraphListViewObject__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_B52984(&Method_System_Collections_Generic_List_EquipGraphListViewObject___ctor__);
    sub_B52984(&System_Collections_Generic_List_EquipGraphListViewObject__TypeInfo);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    byte_42B25EF = 1;
  }
  memset(&v12, 0, sizeof(v12));
  v3 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_EquipGraphListViewObject__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v3,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_EquipGraphListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_B52A5C(0LL, v4);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v11,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)objectList,
    (const MethodInfo_2FF2480 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v12 = v11;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v12,
            (const MethodInfo_201195C *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
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
        sub_B52A5C(v7, v8);
      Component_srcLineSprite = (EventMissionProgressRequest_Argument_ProgressData_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                                         (UnityEngine_GameObject_o *)current,
                                                                                         (const MethodInfo_1B7B1B8 *)Method_UnityEngine_GameObject_GetComponent_EquipGraphListViewObject___);
      if ( !v3 )
        sub_B52A5C(Component_srcLineSprite, Component_srcLineSprite);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v3,
        Component_srcLineSprite,
        (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_EquipGraphListViewObject__Add__);
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v12,
    (const MethodInfo_2011958 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
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

  if ( (byte_42B25E8 & 1) == 0 )
  {
    sub_B52984(&EquipGraphListViewManager_CallbackFunc_TypeInfo);
    byte_42B25E8 = 1;
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
    v8 = sub_B4739C(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_B52D50(v7);
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

  if ( (byte_42B25EA & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    byte_42B25EA = 1;
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
    v8 = sub_B4739C(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_B52D50(v7);
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

  if ( (byte_42B25EC & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    byte_42B25EC = 1;
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
    v8 = sub_B4739C(p_selectItemCallbackFunc, v7, selectItemCallbackFunc);
    v9 = selectItemCallbackFunc == (System_Delegate_o *)v8;
    selectItemCallbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_B52D50(v7);
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
  sub_B52920(p_method);
}


System_IAsyncResult_o *__fastcall EquipGraphListViewManager_CallbackFunc__BeginInvoke(
        EquipGraphListViewManager_CallbackFunc_o *this,
        int32_t kind,
        int32_t result,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v10[3]; // [xsp+0h] [xbp-40h] BYREF
  int32_t v11; // [xsp+18h] [xbp-28h] BYREF
  int32_t v12; // [xsp+1Ch] [xbp-24h] BYREF

  v11 = result;
  v12 = kind;
  if ( (byte_42AD8A1 & 1) == 0 )
  {
    sub_B52984(&int_TypeInfo);
    sub_B52984(&EquipGraphListViewManager_ResultKind_TypeInfo);
    byte_42AD8A1 = 1;
  }
  v10[2] = 0LL;
  v10[0] = j_il2cpp_value_box_0(EquipGraphListViewManager_ResultKind_TypeInfo, &v12);
  v10[1] = j_il2cpp_value_box_0(int_TypeInfo, &v11);
  return (System_IAsyncResult_o *)sub_B52928(this, v10, callback, object);
}


void __fastcall EquipGraphListViewManager_CallbackFunc__EndInvoke(
        EquipGraphListViewManager_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B5292C(result, 0LL, method);
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
        sub_B52A40(*(_QWORD *)&v21->fields.extra_arg, *(_QWORD *)&kind, *(_QWORD *)&result, method);
      if ( (sub_B529B4(v23) & 1) == 0 )
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
      v25 = sub_B529AC(v23);
      v26 = sub_B52DB0(v23);
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
            v19 = sub_AEB880(v22, v30, v31, v27);
          }
          v18 = *(_QWORD *)(v19 + 8);
        }
        else
        {
          v18 = *(_QWORD *)(*v22 + 16LL * *(unsigned __int16 *)(v23 + 72) + 320);
        }
        v20 = (void (__fastcall **)(__int64 *, _QWORD, _QWORD, _QWORD))sub_B52A34(v18, v23);
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
            v17 = sub_AEB880(v22, class_0, v10, v12);
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